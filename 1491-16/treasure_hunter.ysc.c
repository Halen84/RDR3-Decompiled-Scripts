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
	struct<14> /*112*/ sLocal_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 706334491;
	var uLocal_32 = 357863945;
	var uLocal_33 = 1071795929;
	var uLocal_34 = 1445750337;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#pragma endregion

void __EntryFunction__()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	sLocal_14.f_0 = sScriptParam_0.f_0;
	sLocal_14.f_6 = sScriptParam_0.f_1;
	sLocal_14.f_9 = func_2(sLocal_14.f_6);
	while (func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(sLocal_14.f_7))
	{
		TASK::_DELETE_SCENARIO_POINT(sLocal_14.f_7);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(sLocal_14.f_1);
		func_5(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_2) && sLocal_14.f_5 != 0)
	{
		if (ENTITY::IS_MAP_ENTITY_PINNED(sLocal_14.f_5))
		{
			ENTITY::_UNPIN_MAP_ENTITY(sLocal_14.f_5);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_3))
	{
		ENTITY::DELETE_ENTITY(&(sLocal_14.f_3));
	}
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_4) && !func_6(joaat("DOCUMENT_TREASURE_MAP_13"), 1, 0))
	{
		func_7(&(sLocal_14.f_4));
	}
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_12) && !func_6(joaat("DOCUMENT_TREASURE_MAP_13"), 1, 0))
	{
		OBJECT::DELETE_OBJECT(&(sLocal_14.f_12));
	}
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_13))
	{
		OBJECT::DELETE_OBJECT(&(sLocal_14.f_13));
	}
	func_8(&(sLocal_14.f_8), 1, 1);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(sLocal_14.f_1);
	}
	SCRIPTS::_0xE7282390542F570D(sLocal_14.f_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)
{
	int iVar0;
	int iVar1;

	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam0))
	{
		iVar1 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(iParam0));
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TREASURE_HUNTER"), 0);
	}
	return iVar0;
}

bool func_3()
{
	if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(sLocal_14.f_9) > 0)
	{
	}
	else if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
	}
	else if (!TASK::DOES_SCENARIO_POINT_EXIST(sLocal_14.f_6))
	{
	}
	else
	{
		return true;
	}
	return false;
}

void func_4()
{
	int iVar0;

	switch (sLocal_14.f_10)
	{
		case 0:
			if (func_9(&sLocal_14))
			{
				func_10(&sLocal_14, 1);
			}
			break;
		case 1:
			if (func_11(&sLocal_14))
			{
				if (COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(sLocal_14.f_9) == 218622660)
				{
					func_10(&sLocal_14, 2);
				}
				else if (COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(sLocal_14.f_9) == 390004462 || COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(sLocal_14.f_9) == 6410548)
				{
					if (func_12())
					{
						func_10(&sLocal_14, 3);
					}
					else
					{
						func_10(&sLocal_14, 9);
					}
				}
				else
				{
					func_10(&sLocal_14, 3);
				}
			}
			break;
		case 2:
			if (DLC::IS_DLC_PRESENT(-679138445))
			{
				func_10(&sLocal_14, 3);
			}
			else
			{
				func_10(&sLocal_14, 9);
			}
			break;
		case 3:
			if (func_13(sLocal_14.f_9))
			{
				func_14(&sLocal_14, 1);
				if (sLocal_14.f_9 == joaat("TREASURE_HUNT_LOOT_01") || sLocal_14.f_9 == joaat("TREASURE_HUNT_LOOT_05"))
				{
					func_16(func_15(sLocal_14.f_9));
					func_10(&sLocal_14, 7);
				}
				else
				{
					func_10(&sLocal_14, 4);
				}
			}
			break;
		case 4:
			if (func_17(&sLocal_14))
			{
				func_10(&sLocal_14, 5);
			}
			break;
		case 5:
			if (func_18(&sLocal_14))
			{
				func_10(&sLocal_14, 6);
			}
			break;
		case 6:
			if (func_19(&sLocal_14))
			{
				func_10(&sLocal_14, 7);
			}
			break;
		case 7:
			if (sLocal_14.f_9 == joaat("TREASURE_HUNT_LOOT_03") && Global_1901328.f_95)
			{
				if (func_20())
				{
					func_21(Global_35, "RE_TH_PLAYER_MORE_MAPS_ALTA", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 0, 1, 0, 0, 1);
				}
				else if (func_22())
				{
					func_21(Global_35, "RE_TH_PLAYER_MORE_MAPS_ALTB", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 0, 1, 0, 0, 1);
				}
			}
			func_10(&sLocal_14, 8);
		case 8:
			if (!func_23(338))
			{
				func_24(338, 1);
			}
			if (!func_25(sLocal_14.f_9))
			{
				func_27(func_26(joaat("TREASURE_HUNTER_CHEST_LOOTED")), 1);
			}
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(sLocal_14.f_9, 1);
			if (func_28(sLocal_14.f_9))
			{
				switch (sLocal_14.f_9)
				{
					case joaat("TREASURE_HUNT_LOOT_04"):
						iVar0 = 499813453;
						break;
					case joaat("TREASURE_HUNT_LOOT_08"):
						iVar0 = 666607663;
						break;
					case joaat("TREASURE_HUNT_LOOT_12"):
						iVar0 = -220219788;
						break;
					case joaat("TREASURE_HUNT_LOOT_15"):
						iVar0 = 218622660;
						break;
					case joaat("TREASURE_HUNT_LOOT_19"):
						iVar0 = 390004462;
						break;
					case joaat("TREASURE_HUNT_LOOT_24"):
						iVar0 = 6410548;
						break;
				}
				func_29(COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(sLocal_14.f_9), sLocal_14.f_9, 1);
				func_30(iVar0, 1);
				func_31(sLocal_14.f_9);
			}
			func_32(0, 10);
			func_10(&sLocal_14, 9);
		case 9:
			break;
	}
}

void func_5(bool bParam0)
{
	func_33(13, 2, bParam0);
}

bool func_6(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_34(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_35(bParam0);
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
		if (!func_36(bParam0, 1))
		{
			return false;
		}
	}
	return func_37(bParam0, 0, bParam2) >= iParam1;
}

void func_7(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
	}
	PED::DELETE_PED(iParam0);
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_38(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_39(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_40(iVar0);
	*uParam0 = 0;
}

bool func_9(var uParam0)
{
	if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_16"))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_17, false);
		STREAMING::REQUEST_MODEL(uParam0->f_18, false);
		STREAMING::REQUEST_MODEL(uParam0->f_19, false);
		STREAMING::REQUEST_MODEL(uParam0->f_20, false);
	}
	return true;
}

void func_10(var uParam0, int iParam1)
{
	uParam0->f_10 = iParam1;
}

bool func_11(var uParam0)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	int iVar5;
	struct<4> /*32*/ sVar6;
	int iVar18;
	var uVar19;
	var uVar22;

	if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_13") || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14"))
	{
		if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_13"))
		{
			func_41(-1121184106, 0, 0.8f, 1, 1, 0, 1, 0);
		}
		if (!DLC::IS_DLC_PRESENT(-679138445))
		{
			return true;
		}
	}
	else if ((((((((uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_16") || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_17")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_18")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_20")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_21")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_22")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_23")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_24"))
	{
		if (!func_12())
		{
			return true;
		}
	}
	iVar0 = 1;
	if (func_42(uParam0->f_9) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		switch (uParam0->f_9)
		{
			case joaat("TREASURE_HUNT_LOOT_04"):
				iVar4 = joaat("P_ROCK_STASH01");
				break;
			case joaat("TREASURE_HUNT_LOOT_09"):
				iVar4 = joaat("P_STRONGBOX_SNOW_01X");
				break;
			case joaat("TREASURE_HUNT_LOOT_19"):
				iVar4 = joaat("P_ROCK_STASH01");
				break;
			case joaat("TREASURE_HUNT_LOOT_24"):
				iVar4 = joaat("P_ROCK_STASH01");
				break;
		}
		uParam0->f_2 = func_44(uParam0, iVar4, func_43(uParam0->f_9));
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
		{
			if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19"))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_2, func_45(joaat("TREASURE_HUNT_LOOT_19")), 2, true);
			}
			else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_24"))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_2, func_45(joaat("TREASURE_HUNT_LOOT_24")), 2, true);
				ENTITY::SET_ENTITY_COORDS(uParam0->f_2, func_43(joaat("TREASURE_HUNT_LOOT_24")), true, false, true, true);
			}
		}
		iVar0 = 0;
	}
	if ((((func_46(uParam0->f_9) && func_13(uParam0->f_9)) && uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_19")) && uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_24")) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_08") || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_12"))
		{
			iVar5 = joaat("S_PICKUP_GOLDBAR01X");
		}
		else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14"))
		{
			iVar5 = joaat("P_CS_BILLSTACK01X");
		}
		else
		{
			iVar5 = joaat("S_MAPROLLED04X");
		}
		STREAMING::REQUEST_MODEL(iVar5, false);
		if (STREAMING::HAS_MODEL_LOADED(iVar5))
		{
			if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_09"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
				{
					if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_2))
					{
						uParam0->f_3 = OBJECT::CREATE_OBJECT(iVar5, func_47(uParam0->f_9), true, true, false, false, true);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3, uParam0->f_2, 0, -0.045f, 0.03f, 0.05f, func_45(joaat("TREASURE_HUNT_LOOT_09")), false, false, false, false, 2, true, false, false);
					}
				}
			}
			else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14"))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1))
				{
					if (func_48())
					{
						if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1, "CASH", &sVar6, false, 0, 2))
						{
							uParam0->f_3 = OBJECT::CREATE_OBJECT(iVar5, sVar6, true, true, false, false, true);
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_3, sVar6.f_3, 2, true);
						}
					}
				}
			}
			else
			{
				uParam0->f_3 = OBJECT::CREATE_OBJECT(iVar5, func_47(uParam0->f_9), true, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_3, func_45(uParam0->f_9), 2, true);
			}
		}
		iVar0 = 0;
	}
	if ((((uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_01") && uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_05")) && uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_14")) && uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_16")) && !TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_7))
	{
		switch (uParam0->f_9)
		{
			case joaat("TREASURE_HUNT_LOOT_02"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_03"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_0M3_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_04"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS");
				break;
			case joaat("TREASURE_HUNT_LOOT_06"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_0M3_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_07"):
				iVar18 = joaat("RANSACK_REACH_IN_GROUND_HOLE_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_08"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_1M75_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_09"):
				iVar18 = joaat("RANSACK_ATTACHED_LOCKBOX_MED_LOCKED_PULLOUT_TIGHT_0M0_0M80");
				break;
			case joaat("TREASURE_HUNT_LOOT_10"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_11"):
				iVar18 = joaat("RANSACK_REACH_IN_GROUND_HOLE_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_12"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_0M3_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_13"):
				iVar18 = joaat("RANSACK_VOLUME_REACH_IN_TO_TABLE_OVER_PICKUP_0M5_0M8_2M0");
				break;
			case joaat("TREASURE_HUNT_LOOT_15"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_PLAQUE_LOOT");
				break;
			case joaat("TREASURE_HUNT_LOOT_17"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_18"):
				iVar18 = joaat("RANSACK_REACH_IN_GROUND_HOLE_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_19"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS_GRAVE");
				break;
			case joaat("TREASURE_HUNT_LOOT_20"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_PLAQUE_STATUE_LOOT");
				break;
			case joaat("TREASURE_HUNT_LOOT_21"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_22"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_23"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_24"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS");
				break;
		}
		if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_04") || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_24"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
			{
				uParam0->f_7 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(uParam0->f_2, joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS"), 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, true);
			}
		}
		else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
			{
				uParam0->f_7 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(uParam0->f_2, joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS_GRAVE"), 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, true);
			}
		}
		else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_09"))
		{
			uParam0->f_7 = TASK::FIND_SCENARIO_OF_TYPE_HASH(TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_6, true), joaat("RANSACK_ATTACHED_LOCKBOX_MED_LOCKED_PULLOUT_TIGHT_0M0_0M80"), 1.5f, 0, false);
		}
		else
		{
			vVar1 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_6, true) /*3*/ };
			uParam0->f_7 = TASK::CREATE_SCENARIO_POINT_HASH(iVar18, vVar1, TASK::_GET_SCENARIO_POINT_HEADING(uParam0->f_6, true), 0.0f, 0.0f, false);
		}
		iVar0 = 0;
	}
	func_14(uParam0, 0);
	if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_13"))
	{
		func_41(-1121184106, 0, 0.8f, 1, 1, 0, 1, 0);
	}
	else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_16"))
	{
		if (!func_49(uParam0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14") && func_13(uParam0->f_9))
	{
		if (!func_38(uParam0->f_8))
		{
			uParam0->f_8 = func_50(MISC::VAR_STRING(2, "GENERIC_SEARCH"), joaat("INPUT_CONTEXT_X"), TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_6, true), 1070386381, 1, 0, 0, 4, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0);
			iVar0 = 0;
		}
		else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1))
		{
			uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@loansharking@horsechase2@tree", 0, "pbl_Action", false, true);
			iVar0 = 0;
		}
		else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_1, true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
			}
			iVar0 = 0;
		}
		else if (!func_48())
		{
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_1, &uVar19, &uVar22, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1, 2327.15f, -1512.469f, 40.7f, 0.0f, 0.0f, 120.0f, 2);
			func_5(1);
			iVar0 = 0;
		}
		else if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_1, "pbl_Action"))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_1, "pbl_Action"))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_1, "pbl_Action");
			}
			iVar0 = 0;
		}
		else if (ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_1, "player", false) != Global_35)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player", Global_35, 0);
			iVar0 = 0;
		}
		else if (ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_1, "CASH", false) != ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_3))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "CASH", uParam0->f_3, 0);
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_12()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_13(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_01"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_01"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_03"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_02"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_04"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_03"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_06"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_04"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_07"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_05"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_08"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_06"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_09"):
			return true;
		case joaat("TREASURE_HUNT_LOOT_10"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_07"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_11"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_08"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_12"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_09"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_13"):
			return true;
		case joaat("TREASURE_HUNT_LOOT_14"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_15"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_16"):
			return true;
		case joaat("TREASURE_HUNT_LOOT_17"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_13"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_18"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_14"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_19"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_15"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_20"):
			return true;
		case joaat("TREASURE_HUNT_LOOT_21"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_16"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_22"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_17"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_23"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_18"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_24"):
			return func_6(joaat("DOCUMENT_TREASURE_MAP_19"), 1, 0);
		default:
			break;
	}
	return false;
}

void func_14(var uParam0, bool bParam1)
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_7))
	{
		if (bParam1)
		{
			if (!TASK::_IS_SCENARIO_POINT_ACTIVE(uParam0->f_7))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(uParam0->f_7, true);
			}
		}
		else if (TASK::_IS_SCENARIO_POINT_ACTIVE(uParam0->f_7))
		{
			TASK::_SET_SCENARIO_POINT_ACTIVE(uParam0->f_7, false);
		}
	}
}

int func_15(var uParam0)
{
	return func_51(uParam0, 5);
}

void func_16(int iParam0)
{
	Global_1935496.f_59.f_6 = 1;
	Global_1935496.f_59.f_7 = 0;
	Global_1935496.f_59.f_1 = iParam0;
	Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
}

bool func_17(var uParam0)
{
	switch (uParam0->f_9)
	{
		case joaat("TREASURE_HUNT_LOOT_19"):
		case joaat("TREASURE_HUNT_LOOT_04"):
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_01"):
		case joaat("TREASURE_HUNT_LOOT_24"):
		case joaat("TREASURE_HUNT_LOOT_20"):
		case joaat("TREASURE_HUNT_LOOT_15"):
			return func_52(uParam0);
		case joaat("TREASURE_HUNT_LOOT_12"):
		case joaat("TREASURE_HUNT_LOOT_13"):
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_18"):
		case joaat("TREASURE_HUNT_LOOT_03"):
		case joaat("TREASURE_HUNT_LOOT_17"):
		case joaat("TREASURE_HUNT_LOOT_10"):
		case joaat("TREASURE_HUNT_LOOT_07"):
		case joaat("TREASURE_HUNT_LOOT_21"):
		case joaat("TREASURE_HUNT_LOOT_11"):
		case joaat("TREASURE_HUNT_LOOT_06"):
		case joaat("TREASURE_HUNT_LOOT_09"):
		case joaat("TREASURE_HUNT_LOOT_23"):
		case joaat("TREASURE_HUNT_LOOT_22"):
		case joaat("TREASURE_HUNT_LOOT_08"):
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				TASK::_0xA6A76D666A281F2D(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_3), joaat("DOCUMENT_GENERIC_MAP_ROLLED"));
			}
			return func_53(joaat("DOCUMENT_GENERIC_MAP_ROLLED"));
		case joaat("TREASURE_HUNT_LOOT_14"):
			if (func_38(uParam0->f_8))
			{
				if (func_55(Global_35, func_54(uParam0->f_8), 1.6f, 1, 1))
				{
					func_56(uParam0->f_8, -739709650, 0, 1);
					HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1.6f, 1, 1, -739709650, "TH_ITEM_UNKNOWN", 0);
				}
			}
			func_57(uParam0->f_8, func_55(Global_35, func_54(uParam0->f_8), 1.6f, 1, 1), 1);
			func_58(uParam0->f_8, func_55(Global_35, func_54(uParam0->f_8), 1.6f, 1, 1), 1);
			if (func_59(uParam0->f_8, 1))
			{
				func_8(&(uParam0->f_8), 1, 1);
				return true;
			}
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			if (func_60(Global_35))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_18(var uParam0)
{
	switch (uParam0->f_9)
	{
		case joaat("TREASURE_HUNT_LOOT_12"):
		case joaat("TREASURE_HUNT_LOOT_13"):
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_18"):
		case joaat("TREASURE_HUNT_LOOT_03"):
		case joaat("TREASURE_HUNT_LOOT_19"):
		case joaat("TREASURE_HUNT_LOOT_04"):
		case joaat("TREASURE_HUNT_LOOT_17"):
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_10"):
		case joaat("TREASURE_HUNT_LOOT_07"):
		case joaat("TREASURE_HUNT_LOOT_21"):
		case joaat("TREASURE_HUNT_LOOT_01"):
		case joaat("TREASURE_HUNT_LOOT_11"):
		case joaat("TREASURE_HUNT_LOOT_06"):
		case joaat("TREASURE_HUNT_LOOT_24"):
		case joaat("TREASURE_HUNT_LOOT_20"):
		case joaat("TREASURE_HUNT_LOOT_09"):
		case joaat("TREASURE_HUNT_LOOT_23"):
		case joaat("TREASURE_HUNT_LOOT_22"):
		case joaat("TREASURE_HUNT_LOOT_08"):
		case joaat("TREASURE_HUNT_LOOT_15"):
			return !PED::IS_PED_USING_ANY_SCENARIO(Global_35);
		case joaat("TREASURE_HUNT_LOOT_16"):
			return !func_60(Global_35);
		case joaat("TREASURE_HUNT_LOOT_14"):
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_1, false))
			{
				return true;
			}
			else if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_1, false))
			{
				if (!func_61(Global_35, 2326.918f, -1514.827f, 41.0862f, 19.5502f, 0.1f, 5.0f, 1))
				{
					if (!func_62(Global_35, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) && func_63(Global_35))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(Global_35, 2326.918f, -1514.827f, 41.0862f, 1.0f, -1, 19.5502f, 0.1f, 0);
					}
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_1);
				}
			}
			break;
	}
	return false;
}

bool func_19(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	switch (uParam0->f_9)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			bVar0 = false;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			bVar0 = joaat("PROVISION_NECKLACE_PEARL");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			bVar0 = false;
			iVar1 = 1500;
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			bVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 2;
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			bVar0 = false;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			bVar0 = false;
			iVar1 = 500;
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			bVar0 = false;
			iVar1 = 1500;
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			bVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 3;
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			bVar0 = false;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			bVar0 = false;
			iVar1 = 1000;
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			bVar0 = joaat("PROVISION_BRACELET_PLATINUM");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			bVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 4;
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			bVar0 = false;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			bVar0 = false;
			iVar1 = 3000;
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			bVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 6;
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			bVar0 = false;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			bVar0 = joaat("CONSUMABLE_CRAFTED_SUPER_MEAL");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			bVar0 = joaat("CONSUMABLE_HORSE_REVIVER");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			bVar0 = false;
			iVar1 = 3;
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			bVar0 = joaat("PROVISION_EARRING_GOLD");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			bVar0 = joaat("PROVISION_EARRING_SILVER");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			bVar0 = joaat("PROVISION_BRACELET_GOLD");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			bVar0 = joaat("PROVISION_BRACELET_SILVER");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			bVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 6;
			break;
		default:
			break;
	}
	if (iVar1 > 0)
	{
		if (bVar0 != 0)
		{
			MISC::_0xB1F6665AA54DCD5C(bVar0);
			func_64(bVar0, iVar1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		}
		else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19"))
		{
			if (!uParam0->f_21)
			{
				func_64(joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				uParam0->f_21 = 1;
				return false;
			}
			if (!uParam0->f_22)
			{
				func_64(joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				uParam0->f_22 = 1;
				return false;
			}
			if (!uParam0->f_23)
			{
				func_64(joaat("PROVISION_GOLDBAR_LARGE"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				uParam0->f_23 = 1;
				return false;
			}
			if (!uParam0->f_24)
			{
				func_64(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				uParam0->f_24 = 1;
				return true;
			}
		}
		else
		{
			func_65(iVar1, 0, 1065353216, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
		}
	}
	if (!func_28(uParam0->f_9))
	{
		bVar2 = func_15(uParam0->f_9);
		func_64(bVar2, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
	}
	return true;
}

bool func_20()
{
	if (func_66() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_21(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_67(iParam0, &sVar0);
}

bool func_22()
{
	if (func_66() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_66() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_68(iParam0, &iVar0, &iVar1);
	if (!func_69(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_70(iVar0, iVar1);
}

bool func_25(int iParam0)
{
	return (((((iParam0 == joaat("TREASURE_HUNT_LOOT_01") || iParam0 == joaat("TREASURE_HUNT_LOOT_05")) || iParam0 == joaat("TREASURE_HUNT_LOOT_09")) || iParam0 == joaat("TREASURE_HUNT_LOOT_13")) || iParam0 == joaat("TREASURE_HUNT_LOOT_16")) || iParam0 == joaat("TREASURE_HUNT_LOOT_20"));
}

struct<2> /*16*/ func_26(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

void func_27(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_28(int iParam0)
{
	return (((((iParam0 == joaat("TREASURE_HUNT_LOOT_04") || iParam0 == joaat("TREASURE_HUNT_LOOT_08")) || iParam0 == joaat("TREASURE_HUNT_LOOT_12")) || iParam0 == joaat("TREASURE_HUNT_LOOT_15")) || iParam0 == joaat("TREASURE_HUNT_LOOT_19")) || iParam0 == joaat("TREASURE_HUNT_LOOT_24"));
}

void func_29(int iParam0, int iParam1, bool bParam2)
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

void func_30(int iParam0, bool bParam1)
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
	func_71(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_31(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_04"):
			func_72(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			func_73(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			func_74(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			func_75(4);
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			func_76(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			func_77(16);
			break;
	}
}

void func_32(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_78(&Global_0, 8);
	}
	if (!func_79() || func_66() != -1)
	{
		return;
	}
	func_78(&Global_0, 1);
}

void func_33(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_80(iParam0, iParam1))
		{
			func_81(&(Global_1901328[iParam0]), iParam1);
		}
	}
	else if (func_80(iParam0, iParam1))
	{
		func_82(&(Global_1901328[iParam0]), iParam1);
	}
}

bool func_34(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_35(bool bParam0)
{
	Vector3 vVar0;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_36(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_34(bParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	bVar0 = func_83(bParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_84("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_85(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_86(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == bVar0)
			{
				func_87(iVar1);
				return true;
			}
			iVar3++;
		}
		func_87(iVar1);
	}
	return false;
}

int func_37(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_35(bParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		bVar1 = func_83(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_88(bParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_89(bParam2), bParam0, false);
	return iVar2;
}

bool func_38(int iParam0)
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

int func_39(int iParam0)
{
	return iParam0;
}

void func_40(int iParam0)
{
	if (!func_90(iParam0))
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

void func_41(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_91(iParam0, 0, 0);
	if (func_92(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0.0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_93(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_94(iParam0, 1);
			}
			else
			{
				func_95(iParam0, 1);
			}
		}
		else
		{
			func_96(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_97())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_42(int iParam0)
{
	return (((iParam0 == joaat("TREASURE_HUNT_LOOT_04") || iParam0 == joaat("TREASURE_HUNT_LOOT_09")) || iParam0 == joaat("TREASURE_HUNT_LOOT_19")) || iParam0 == joaat("TREASURE_HUNT_LOOT_24"));
}

Vector3 func_43(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_12"):
		case joaat("TREASURE_HUNT_LOOT_13"):
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_18"):
		case joaat("TREASURE_HUNT_LOOT_03"):
		case joaat("TREASURE_HUNT_LOOT_16"):
		case joaat("TREASURE_HUNT_LOOT_17"):
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_10"):
		case joaat("TREASURE_HUNT_LOOT_07"):
		case joaat("TREASURE_HUNT_LOOT_21"):
		case joaat("TREASURE_HUNT_LOOT_01"):
		case joaat("TREASURE_HUNT_LOOT_11"):
		case joaat("TREASURE_HUNT_LOOT_06"):
		case joaat("TREASURE_HUNT_LOOT_20"):
		case joaat("TREASURE_HUNT_LOOT_23"):
		case joaat("TREASURE_HUNT_LOOT_22"):
		case joaat("TREASURE_HUNT_LOOT_08"):
		case joaat("TREASURE_HUNT_LOOT_14"):
		case joaat("TREASURE_HUNT_LOOT_15"):
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			return { 1619.196f, 1487.477f, 145.2347f };
		case joaat("TREASURE_HUNT_LOOT_09"):
			return { -948.5673f, 2170.246f, 341.1542f };
		case joaat("TREASURE_HUNT_LOOT_19"):
			return { -3309.31f, -2840.246f, -6.90814f };
		case joaat("TREASURE_HUNT_LOOT_24"):
			return { -2154.84f, 78.2389f, 309.889f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_44(var uParam0, int iParam1, Vector3 vParam2)
{
	int iVar0;

	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = ENTITY::PIN_CLOSEST_MAP_ENTITY(iParam1, vParam2, 15);
	}
	if (uParam0->f_5 != 0)
	{
		if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_5))
		{
			iVar0 = ENTITY::_GET_PINNED_MAP_ENTITY(uParam0->f_5);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				uParam0->f_5 = 0;
				return iVar0;
			}
		}
	}
	return 0;
}

Vector3 func_45(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			return { 0.4038f, 72.004f, 94.3616f };
		case joaat("TREASURE_HUNT_LOOT_03"):
			return { 28.6783f, 137.626f, 79.4364f };
		case joaat("TREASURE_HUNT_LOOT_04"):
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			return { 0.0f, 0.0f, 0.0f };
		case joaat("TREASURE_HUNT_LOOT_07"):
			return { 90.0f, 0.0f, 0.0f };
		case joaat("TREASURE_HUNT_LOOT_08"):
			return { 2.9422f, -89.7569f, -108.628f };
		case joaat("TREASURE_HUNT_LOOT_09"):
			return { 5.0f, 0.0f, 110.0f };
		case joaat("TREASURE_HUNT_LOOT_10"):
			return { 60.2193f, 22.7947f, 151.423f };
		case joaat("TREASURE_HUNT_LOOT_11"):
			return { 90.0f, 0.0f, 0.0f };
		case joaat("TREASURE_HUNT_LOOT_12"):
			return { 1.68002f, -26.8184f, -178.667f };
		case joaat("TREASURE_HUNT_LOOT_13"):
			return { 0.0922233f, 0.0055108f, -158.9106f };
		case joaat("TREASURE_HUNT_LOOT_14"):
			return { 22.85511f, -2.095421f, 170.8128f };
		case joaat("TREASURE_HUNT_LOOT_15"):
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			return { 0.0f, 0.0f, 90.0f };
		case joaat("TREASURE_HUNT_LOOT_17"):
			return { 0.0f, 0.0f, 90.0f };
		case joaat("TREASURE_HUNT_LOOT_18"):
			return { 0.0f, 0.0f, 90.0f };
		case joaat("TREASURE_HUNT_LOOT_19"):
			return { 0.0f, 0.0f, -112.5f };
		case joaat("TREASURE_HUNT_LOOT_20"):
			return { 0.0f, 0.0f, 90.0f };
		case joaat("TREASURE_HUNT_LOOT_21"):
			return { 0.0f, 0.0f, 90.0f };
		case joaat("TREASURE_HUNT_LOOT_22"):
			return { 0.0f, 0.0f, 18.7701f };
		case joaat("TREASURE_HUNT_LOOT_23"):
			return { 60.2193f, 22.7947f, 151.423f };
		case joaat("TREASURE_HUNT_LOOT_24"):
			return { 0.0f, 0.0f, -126.57f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_46(int iParam0)
{
	return ((((((((((((((((((iParam0 == joaat("TREASURE_HUNT_LOOT_02") || iParam0 == joaat("TREASURE_HUNT_LOOT_03")) || iParam0 == joaat("TREASURE_HUNT_LOOT_06")) || iParam0 == joaat("TREASURE_HUNT_LOOT_07")) || iParam0 == joaat("TREASURE_HUNT_LOOT_08")) || iParam0 == joaat("TREASURE_HUNT_LOOT_09")) || iParam0 == joaat("TREASURE_HUNT_LOOT_10")) || iParam0 == joaat("TREASURE_HUNT_LOOT_11")) || iParam0 == joaat("TREASURE_HUNT_LOOT_12")) || iParam0 == joaat("TREASURE_HUNT_LOOT_13")) || iParam0 == joaat("TREASURE_HUNT_LOOT_14")) || iParam0 == joaat("TREASURE_HUNT_LOOT_17")) || iParam0 == joaat("TREASURE_HUNT_LOOT_18")) || iParam0 == joaat("TREASURE_HUNT_LOOT_19")) || iParam0 == joaat("TREASURE_HUNT_LOOT_20")) || iParam0 == joaat("TREASURE_HUNT_LOOT_21")) || iParam0 == joaat("TREASURE_HUNT_LOOT_22")) || iParam0 == joaat("TREASURE_HUNT_LOOT_23")) || iParam0 == joaat("TREASURE_HUNT_LOOT_24"));
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			return { -367.073f, 300.103f, 89.3992f };
		case joaat("TREASURE_HUNT_LOOT_03"):
			return { 131.066f, 1828.48f, 199.709f };
		case joaat("TREASURE_HUNT_LOOT_04"):
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			return { -1043.863f, 422.0207f, 46.7672f };
		case joaat("TREASURE_HUNT_LOOT_07"):
			return { -948.708f, 1634.25f, 243.932f };
		case joaat("TREASURE_HUNT_LOOT_08"):
			return { 416.896f, 1603.25f, 186.269f };
		case joaat("TREASURE_HUNT_LOOT_09"):
			return { -948.5673f, 2170.226f, 341.2442f };
		case joaat("TREASURE_HUNT_LOOT_10"):
			return { 1099.8f, -648.547f, 97.8322f };
		case joaat("TREASURE_HUNT_LOOT_11"):
			return { 2675.02f, 424.892f, 81.822f };
		case joaat("TREASURE_HUNT_LOOT_12"):
			return { 2315.73f, 1051.17f, 66.8781f };
		case joaat("TREASURE_HUNT_LOOT_13"):
			return { -323.0331f, -150.1928f, 50.8848f };
		case joaat("TREASURE_HUNT_LOOT_14"):
			return { 2326.717f, -1513.747f, 42.9361f };
		case joaat("TREASURE_HUNT_LOOT_15"):
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			return { -6325.941f, -3671.488f, -13.46066f };
		case joaat("TREASURE_HUNT_LOOT_17"):
			return { -2775.088f, -3209.429f, -7.9952f };
		case joaat("TREASURE_HUNT_LOOT_18"):
			return { -5216.411f, -3442.451f, -16.056f };
		case joaat("TREASURE_HUNT_LOOT_19"):
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			return { -2936.589f, -138.6445f, 199.2321f };
		case joaat("TREASURE_HUNT_LOOT_21"):
			return { 2415.474f, -738.765f, 45.443f };
		case joaat("TREASURE_HUNT_LOOT_22"):
			return { 745.325f, 1819.233f, 241.2053f };
		case joaat("TREASURE_HUNT_LOOT_23"):
			return { 1499.408f, -1836.724f, 56.8159f };
		case joaat("TREASURE_HUNT_LOOT_24"):
			break;
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_48()
{
	return func_80(13, 2);
}

bool func_49(var uParam0)
{
	if (!func_98(uParam0))
	{
		return false;
	}
	if (!func_99(uParam0))
	{
		return false;
	}
	if (!func_100(uParam0))
	{
		return false;
	}
	if (!(ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(uParam0->f_4) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(uParam0->f_11)))
	{
		return false;
	}
	if (!uParam0->f_16)
	{
		if (!func_101(uParam0))
		{
			return false;
		}
		else
		{
			uParam0->f_16 = 1;
		}
	}
	if (!PED::IS_PED_RAGDOLL(uParam0->f_4))
	{
		PED::SET_PED_TO_RAGDOLL(uParam0->f_4, 0, 0, 0, true, true, false);
		return true;
	}
	return false;
}

int func_50(char* sParam0, int iParam1, Vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_102(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0.0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_103(iVar0, 2))
		{
			if (func_104(vParam2, Global_1945188[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_105(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_51(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_106(17, &sVar0))
	{
		return false;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

int func_52(var uParam0)
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_7))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == uParam0->f_7)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	Vector3 vVar0;
	int iVar10;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == joaat("EVENT_OBJECT_INTERACTION"))
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return 1;
					}
				}
			}
			iVar10++;
		}
	}
	return 0;
}

Vector3 func_54(var uParam0)
{
	int iVar0;

	iVar0 = func_39(uParam0);
	return func_107(iVar0);
}

bool func_55(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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

void func_56(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_39(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_57(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_39(iParam0);
	func_109(iVar0, bParam1);
}

void func_58(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_39(iParam0);
	if (bParam1)
	{
		func_110(iParam0, 4);
		func_109(iVar0, 1);
		func_111(iVar0, 1);
	}
	else
	{
		func_112(iParam0, 4);
		func_111(iVar0, 0);
	}
}

bool func_59(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_39(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_60(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return true;
	}
	return false;
}

bool func_61(int iParam0, Vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_113(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_113(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2.0f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

bool func_62(int iParam0, int iParam1)
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

bool func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 0, false);
	if (iVar1 != joaat("WEAPON_UNARMED"))
	{
		if (!func_62(iParam0, joaat("SCRIPT_TASK_SWAP_WEAPON")))
		{
			WEAPON::_HIDE_PED_WEAPONS(iParam0, 2, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(iParam0, 0, 0, 0, 0);
		}
		iVar0 = 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar2, true, 1, false);
	if (iVar2 != joaat("WEAPON_UNARMED"))
	{
		if (!func_62(iParam0, joaat("SCRIPT_TASK_SWAP_WEAPON")))
		{
			WEAPON::_HIDE_PED_WEAPONS(iParam0, 2, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 1, false, false);
			TASK::TASK_SWAP_WEAPON(iParam0, 0, 0, 0, 0);
		}
		iVar0 = 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SWAP_WEAPON"), true) != 8)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_64(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<13> /*104*/ sVar11;
	int iVar34;
	struct<2> /*16*/ sVar35;
	bool bVar37;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (!func_114(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_115(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_116(bParam0, bParam2);
	iVar2 = 0;
	if (func_37(bParam0, 0, 0) == 0)
	{
		if (func_117(bParam0))
		{
			iVar5 = func_118(bParam0);
			iVar6 = func_119(iVar5);
			iVar7 = func_120(iVar6) + 1;
			func_121(iVar5);
			if (func_122(38))
			{
				func_24(483, 0);
			}
			else
			{
				func_24(482, 0);
			}
			if (iVar7 == func_123(iVar6))
			{
				func_64(func_124(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_79() && func_125(4))
				{
					if (func_79() && (func_126(38) || func_122(38)))
					{
						func_128(38, func_124(iVar6), 0, 0, func_127(), 0, -1, 0);
						func_129(2);
					}
					else
					{
						func_128(38, func_124(iVar6), 0, 0, func_127(), 0, -1, 0);
						func_129(1);
					}
				}
			}
			else if (func_79() && func_125(4))
			{
				if (func_79() && (func_126(38) || func_122(38)))
				{
					func_128(38, 0, 0, 0, func_127(), 0, -1, 0);
					func_129(2);
				}
				else
				{
					func_128(38, 0, 0, 0, func_127(), 0, -1, 0);
					func_129(1);
				}
			}
			if (func_79() && func_125(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_79() && (func_126(38) || func_122(38)))
					{
						func_130(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), iVar6), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_130(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_35(bParam0) == joaat("CLOTHING"))
	{
		if ((!func_131(bParam0, joaat("CI_TAG_ITEM_TALISMAN")) && !func_131(bParam0, joaat("CI_TAG_ITEM_UPGRADE"))) && !func_131(bParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_132(bParam0, (1 << 23)) && !func_133(28))
	{
		func_134(28);
	}
	if (!bVar3)
	{
		if (func_131(bParam0, joaat("CI_TAG_ITEM_THROWN")))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_135(bParam0) == joaat("CI_CATEGORY_AMMO"))
			{
				bVar1 = func_137(func_136(bParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar1))
				{
					if (func_66() == -1)
					{
						func_138(bVar1);
					}
					if (func_139(0) && func_140(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_141(bParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				bVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
				if (WEAPON::_IS_AMMO_VALID(bVar1))
				{
					if (func_66() == -1)
					{
						func_138(bParam0);
					}
					if (func_139(0) && func_140(bParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_141(bVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_35(bParam0) == joaat("WEAPON"))
		{
			if (!func_142(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_35(bParam0) == joaat("AMMO") && func_143(bParam0))
		{
			if (!func_144(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_TALISMAN")))
		{
			func_145(bParam0);
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_TRINKET")))
		{
			func_146(bParam0);
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_ANIMAL_CLAW")))
		{
			func_27(func_26(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (bParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_27(func_147(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_VALUABLE")) && !func_131(bParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			if (bParam0 != joaat("WEAPON_KIT_DETECTOR") && bParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_148(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_24(498, 0);
				}
			}
			if (func_131(bParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_131(bParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
			{
				func_149(bParam0);
			}
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_CANNED")))
		{
			if (func_131(bParam0, joaat("CI_TAG_ITEM_FRUIT")))
			{
			}
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_USED")) && func_131(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			func_24(484, 0);
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_CONSUMABLE")) && func_131(bParam0, joaat("CI_TAG_ITEM_SNACK")))
		{
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_CONFECTIONARY")))
		{
		}
		else if (func_131(bParam0, 589988438))
		{
			if (func_150())
			{
				func_151(joaat("REWARD_SMALL"), 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_LETTER_INVITATION")) && func_131(bParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_152(bParam0);
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_DINO_BONES")))
		{
			func_153(bParam0);
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_ROCK_CARVINGS")))
		{
			func_154(bParam0);
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_131(bParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_155(bParam0);
		}
		else if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_TREASURE_HUNTER_MAP")))
		{
			func_156();
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_157(bParam0, iParam1);
			func_158(bParam0);
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_131(bParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_159(bParam0, 0, 0, 0);
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_131(bParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
		{
			func_149(bParam0);
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_MONEY")))
		{
			if (func_66() != -1)
			{
				return 0;
			}
			func_160(bParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_FISHING_LURE")))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_6(215778062, 1, 0))
					{
						func_64(215778062, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_6(670273567, 1, 0))
					{
						func_64(670273567, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_6(-967317137, 1, 0))
					{
						func_64(-967317137, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_6(526074061, 1, 0))
					{
						func_64(526074061, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_6(-1045488665, 1, 0))
					{
						func_64(-1045488665, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_6(471514780, 1, 0))
					{
						func_64(471514780, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH")) && func_132(bParam0, 4))
		{
			if (!func_122(42))
			{
				func_161(bParam0);
			}
		}
		else if (func_131(bParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
		{
			func_162(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_131(bParam0, 1248798204))
		{
			bVar8 = false;
			switch (bParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					bVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					bVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					bVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					bVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					bVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					bVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					bVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (bVar8 != 0)
			{
				func_64(bVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
		}
		switch (bParam0)
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
				func_134(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_163(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_164(&bVar9, 0))
				{
					func_140(bVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_66() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_163(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_24(415, 0);
				Global_40.f_11095.f_60 += 0.1f;
				func_165();
				Global_40.f_11095.f_61 += 0.1f;
				func_166();
				Global_40.f_11095.f_55 += 0.1f;
				Global_40.f_11095.f_57 += 0.1f;
				Global_40.f_11095.f_56 += 0.1f;
				Global_40.f_11095.f_58 += 0.5f;
				func_167();
				Global_40.f_11095.f_63 += 0.1f;
				func_168();
				Global_40.f_11095.f_49 += 0.1f;
				Global_40.f_11095.f_50 += 0.1f;
				Global_40.f_11095.f_51 += 0.1f;
				func_169();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_29(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_30(499813453, 0);
				func_72(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_29(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_30(499813453, 0);
				func_72(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_29(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_30(499813453, 0);
				func_72(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_29(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_30(666607663, 0);
				func_73(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_29(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_30(666607663, 0);
				func_73(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_29(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_30(666607663, 0);
				func_73(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_29(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_30(-220219788, 0);
				func_74(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_29(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_30(-220219788, 0);
				func_74(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_29(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_30(-220219788, 0);
				func_74(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_29(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_30(218622660, 0);
				func_75(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_29(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_30(218622660, 0);
				func_75(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_29(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_30(390004462, 0);
				func_76(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_29(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_30(390004462, 0);
				func_76(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_29(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_30(390004462, 0);
				func_76(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_29(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_30(6410548, 0);
				func_77(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_29(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_30(6410548, 0);
				func_77(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_29(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_30(6410548, 0);
				func_77(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_29(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_30(6410548, 0);
				func_77(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_171(242, func_170(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_171(240, func_170(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_171(241, func_170(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_172(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
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
					func_172(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
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
					func_172(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_172(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
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
					func_172(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_172(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_24(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_24(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_24(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 3) == 0)
				{
					func_64(func_173(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_64(func_174(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_133(1))
				{
					func_24(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_24(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_66() == -1)
				{
					bParam0 = joaat("UPGRADE_UPG_MORTAR_PESTLE_SP");
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_24(496, 0);
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
		bVar10 = bParam0;
		func_175(&bVar10);
		if (!func_176(bVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_139(0))
		{
			return 1;
		}
		if (func_35(bParam0) == joaat("CLOTHING"))
		{
			func_177(bParam0);
		}
		if (func_131(bParam0, joaat("CI_TAG_ITEM_UPGRADE")))
		{
			func_178(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_139(0))
		{
			sVar11.f_1 = 10;
			sVar11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, false, false, iVar2, &sVar11, 0);
			iVar34 = 0;
			while (iVar34 < sVar11.f_0)
			{
				func_64(sVar11.f_1[iVar34], sVar11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_179(iVar2, 0);
		}
	}
	sVar35 = { func_180(bParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&sVar35, iVar0);
	}
	func_181(bParam0);
	if (fParam6 > 0.0f)
	{
		if (func_131(bParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
		{
			func_182(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_183(bParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_65(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_184(iParam0, sParam4, iParam5);
	}
	func_185(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_66()
{
	return Global_1572887.f_12;
}

bool func_67(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_69(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_186(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_187(iParam0))
	{
		return false;
	}
	if (func_188(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_189(iParam0, 1)) || func_190((1 << 15)))
	{
		if (!func_189(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_191())
	{
		return false;
	}
	return true;
}

void func_70(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_71(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

void func_72(int iParam0)
{
	Global_40.f_12004.f_7 |= iParam0;
}

void func_73(int iParam0)
{
	Global_40.f_12004.f_8 |= iParam0;
}

void func_74(int iParam0)
{
	Global_40.f_12004.f_9 |= iParam0;
}

void func_75(int iParam0)
{
	Global_40.f_12004.f_10 |= iParam0;
}

void func_76(int iParam0)
{
	Global_40.f_12004.f_11 |= iParam0;
}

void func_77(int iParam0)
{
	Global_40.f_12004.f_12 |= iParam0;
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_79()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_80(int iParam0, int iParam1)
{
	return func_192(Global_1901328[iParam0], iParam1);
}

void func_81(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_82(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_83(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_34(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_35(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_131(bParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_193(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_84(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_89(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_85(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_86(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

int func_87(int iParam0)
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

int func_88(bool bParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	sVar0 = { func_194(bParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_196(&sVar0, func_195(0));
	}
	if (!func_197(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_87(iVar18);
	return iVar19;
}

int func_89(bool bParam0)
{
	if (func_66() == -1)
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

bool func_90(int iParam0)
{
	return func_103(iParam0, 2);
}

int func_91(int iParam0, bool bParam1, bool bParam2)
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

bool func_92(int iParam0)
{
	if (func_198(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_93(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_92(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_94(int iParam0, bool bParam1)
{
	if (func_92(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_95(int iParam0, bool bParam1)
{
	if (func_92(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_96(int iParam0, bool bParam1)
{
	if (func_92(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_97()
{
	return true;
}

bool func_98(var uParam0)
{
	Vector3 vVar0;

	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_17))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_19))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_20))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = func_200(uParam0->f_17, func_199(), 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		uParam0->f_12 = OBJECT::CREATE_OBJECT(uParam0->f_18, func_201(), true, true, false, false, false);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		uParam0->f_11 = OBJECT::CREATE_OBJECT(uParam0->f_19, func_201(), true, true, false, false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_11, false);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_11, func_202(), 2, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_11, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13))
	{
		vVar0 = { -6322.675f, -3672.215f, -3.563f /*3*/ };
		uParam0->f_13 = OBJECT::CREATE_OBJECT(joaat("P_CRD_CHIPBLUE01X"), vVar0, true, true, false, false, false);
		OBJECT::SET_OBJECT_TARGETTABLE(uParam0->f_13, true);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_13, true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, false);
	}
	return true;
}

bool func_99(var uParam0)
{
	func_203(uParam0->f_4);
	func_204(uParam0->f_4, joaat("CONSUMABLE_HORSE_OINTMENT_CRAFTED"), 1, 0);
	ENTITY::_0x8C03CD6B5E0E85E8(uParam0->f_4, joaat("EMPTY"));
	WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_4, true, true);
	WEAPON::_REMOVE_ALL_PED_AMMO(uParam0->f_4);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 38, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 223, true);
	PED::SET_PED_LASSO_HOGTIE_FLAG(uParam0->f_4, 1, false);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_4, 7, false);
	func_205(uParam0->f_4, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_4, true);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_4, false);
	return true;
}

bool func_100(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		func_206(uParam0->f_4, 1, 1);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_101(var uParam0)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_11)) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		return false;
	}
	if (!(ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam0->f_12) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam0->f_11)))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_12, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_11, true);
		return false;
	}
	OBJECT::CREATE_OBJECT_SKELETON(uParam0->f_12);
	ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_12, uParam0->f_4, -1, PED::GET_PED_BONE_INDEX(uParam0->f_4, 33646), 0.02f, -0.11f, 0.0f, 0.0f, 0.0f, 0.0f, 183.0f, 88.5f, 97.0f, -1.0f, false, true, false, false, 0, true, 1.0f, 1.0f);
	uParam0->f_14 = PHYSICS::_ADD_ROPE_2(func_201(), 0.0f, 0.0f, 0.0f, 7.0f, 6, false, -1, -1.0f);
	PHYSICS::_0xBB3E9B073E66C3C9(uParam0->f_14, true, false, true, false);
	PHYSICS::_0x522FA3F490E2F7AC(uParam0->f_14, 1, 1);
	PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(uParam0->f_14, uParam0->f_11, uParam0->f_12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, "ropeAttach");
	PHYSICS::_0x3C6490D940FF5D0B(uParam0->f_14, 0, 0, 7.0f, false);
	PHYSICS::_0x76BAD9D538BCA1AA(uParam0->f_14, 0.0f);
	PHYSICS::_0xB40EA9E0D2E2F7F3(uParam0->f_14, 1.0f);
	PHYSICS::_0xDEDE679ED29DD4E7(uParam0->f_14, true);
	PHYSICS::_0xF1EA2A881EB7F2CD(uParam0->f_14, true);
	AUDIO::_0xF092B6030D6FD49C(uParam0->f_14, "ROPE_SETTINGS_DEFAULT");
	AUDIO::_0x2651DDC0EA269073(uParam0->f_14, 1.0f);
	return true;
}

bool func_102(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_103(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

bool func_104(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_105(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_109(iParam0, 1);
	func_111(iParam0, 1);
	func_112(iParam0, 128);
}

bool func_106(int iParam0, var uParam1)
{
	if (!func_207(iParam0))
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

Vector3 func_107(int iParam0)
{
	if (Global_1945188[iParam0 /*18*/].f_5 == 1)
	{
		return VOLUME::GET_VOLUME_COORDS(Global_1945188[iParam0 /*18*/].f_10);
	}
	else if (Global_1945188[iParam0 /*18*/].f_5 == 2)
	{
		return Global_1945188[iParam0 /*18*/].f_6;
	}
	else if (Global_1945188[iParam0 /*18*/].f_5 == 3)
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_1945188[iParam0 /*18*/].f_11, Global_1945188[iParam0 /*18*/].f_12);
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_108(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_109(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_103(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_110(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_111(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_112(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

float func_113(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0.0f)
	{
		fVar0 += 360.0f;
	}
	else if (fParam0 >= 360.0f)
	{
		fVar0 -= 360.0f;
	}
	return fVar0;
}

bool func_114(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_66() == -1)
	{
		if (func_208(bParam0) && func_209(bParam0))
		{
			func_210(bParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (bParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (bParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_115(bool bParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_211(bParam0, iParam1);
	sVar0 = { func_212(bParam0, 0, 1) /*5*/ };
	iVar5 = func_213(bParam0, &sVar0, 0, 0);
	iVar6 = func_214(bParam0, 0);
	if ((iVar5 > 1 && !func_215()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_131(bParam0, joaat("CI_TAG_ITEM_ANIMAL_PART")))
		{
			func_24(583, 1);
		}
		else
		{
			func_24(582, 0);
		}
	}
	if (func_216(bParam0, &sVar0, *iParam1, 0, 0))
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

void func_116(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_217(bParam0, -949239683))
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
			Global_1935496.f_59.f_1 = bParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_117(bool bParam0)
{
	if (func_66() != -1)
	{
		return false;
	}
	return func_118(bParam0) != 0;
}

int func_118(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_218())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (bParam0 == func_219(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_119(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(iParam0);
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_218())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_119(iVar0))
		{
			if (func_6(func_219(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_121(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	func_220(48);
	func_32(0, -1);
}

bool func_122(int iParam0)
{
	if (func_66() != -1)
	{
		return false;
	}
	return func_148(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_123(int iParam0)
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_124(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_125(int iParam0)
{
	if (func_66() != -1)
	{
		return false;
	}
	return func_148(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_126(int iParam0)
{
	if (func_66() != -1)
	{
		return false;
	}
	if (!func_221(iParam0))
	{
		return false;
	}
	return func_222(Global_1347702[iParam0 /*49*/].f_15);
}

int func_127()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_6(func_223(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_128(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_79() && (func_126(38) || func_122(38)))
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
			if (func_79() && (func_126(39) || func_122(39)))
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
			iVar9 = func_224(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_79() && (func_126(41) || func_122(41)))
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
			if (func_79() && (func_126(49) || func_122(49)))
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
			iVar9 = func_224(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_225(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_226(iParam0, iVar13, iVar14))
	{
	}
	if (func_227(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_228(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_229(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_230(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_231(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_129(int iParam0)
{
	Global_40.f_12004 |= iParam0;
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_79() && (func_126(38) || func_122(38)))
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
			if (func_79() && (func_126(39) || func_122(39)))
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
			if (func_79() && (func_126(49) || func_122(49)))
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
		if (func_79() && (func_126(38) || func_122(38)))
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
			func_71(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_71(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_233(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_232(func_124(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_71(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_71(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_79() && (func_126(39) || func_122(39)))
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
			func_71(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_71(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_79() && (func_126(49) || func_122(49)))
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
			func_71(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_71(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_71(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_71(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_131(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

bool func_132(bool bParam0, int iParam1)
{
	if (!func_34(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

bool func_133(int iParam0)
{
	if (!func_234(iParam0))
	{
		return false;
	}
	return func_235(iParam0);
}

void func_134(int iParam0)
{
	if (!func_234(iParam0))
	{
		return;
	}
	func_236(iParam0);
	func_237(iParam0);
}

int func_135(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_136(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_HATCHET"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			bVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			bVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_34(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_238(bVar0) || func_239(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

bool func_137(bool bParam0, bool bParam1)
{
	if (!func_34(bParam0, 0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return false;
}

void func_138(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_86(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_139(bool bParam0)
{
	if (func_66() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_89(bParam0));
}

bool func_140(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
	{
		sVar0 = { func_212(bParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_240((398 + iVar28), 1);
			if (func_241(bParam0, &sVar0, iVar5, 0))
			{
				if (func_242(bParam0, &sVar6, iVar5))
				{
					sVar29 = { func_243(bParam0, sVar0, iVar5, 0) /*4*/ };
					func_244(bParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_139(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
					{
						return false;
					}
					func_141(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
					func_245(bParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
				return true;
			}
		}
	}
}

bool func_141(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_143(bParam0))
	{
		return false;
	}
	if (!func_139(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, bParam0, iParam1, iParam2);
	return true;
}

bool func_142(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;
	bool bVar8;

	bVar0 = func_137(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_66() == -1)
		{
			func_138(bVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_246(bVar0);
			}
		}
		if (!func_216(bParam0, &uVar1, 1, 0, 0))
		{
			func_210(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_247(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_140(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_FISHINGROD") || bVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_140(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_LASSO"))
			{
				func_140(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_22())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_248(bVar0))
				{
					func_140(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_140(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_249(Global_35, 2, 0, 1);
				if ((((func_86(bVar7) && !Global_43891) && bVar7 != bVar0) && !func_133(24)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, bVar7);
				}
				bVar8 = true;
				if (func_86(bVar7) && func_133(24))
				{
					if (!func_140(bVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_140(bVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_140(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_24(480, 1);
	}
	return true;
}

bool func_143(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

bool func_144(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_143(bParam0))
	{
		return false;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (func_86(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(bVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_6(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
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
		func_171(func_250(bParam0), func_170(bParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_66() == -1)
		{
			if (func_148(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_24(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_139(0))
	{
		if (func_141(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_176(bParam0, *iParam1, iParam2);
	}
	return false;
}

void func_145(bool bParam0)
{
	var uVar0;

	if ((bParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_251()) || bParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_252(Global_35, bParam0, &uVar0))
		{
			func_163(PLAYER::PLAYER_PED_ID(), bParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 1);
		}
	}
	switch (bParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 += 0.1f;
			func_169();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 += 0.1f;
			func_169();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 += 0.1f;
			func_169();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 += 0.5f;
			func_167();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 += 0.2f;
			func_165();
			break;
	}
}

void func_146(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 += 0.1f;
			func_165();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 += 0.1f;
			func_166();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 += 0.5f;
			func_167();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 += 0.1f;
			func_168();
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
			func_169();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 += 0.3f;
			func_253();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 += 0.1f;
			func_254();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 += 0.2f;
			break;
	}
}

struct<2> /*16*/ func_147(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

bool func_148(int iParam0, bool bParam1)
{
	switch (func_255(iParam0))
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

void func_149(bool bParam0)
{
	bool bVar0;

	bVar0 = func_131(bParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT"));
	if (func_256() < 3)
	{
		if (bVar0)
		{
			if (func_258(func_257(bParam0), bParam0))
			{
				func_171(79, func_170(func_257(bParam0)), 1);
			}
			else
			{
				func_171(78, func_170(func_257(bParam0)), 1);
			}
		}
		else
		{
			func_171(80, func_170(func_259(bParam0)), 1);
		}
	}
}

bool func_150()
{
	if (((((func_260(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_260(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_260(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_260(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_260(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_260(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_151(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_261(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_184(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_185(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_152(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_130(51, 0, 0, 0, 0, -1, 0);
			func_262((1 << 13));
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_130(51, 0, 0, 0, 0, -1, 0);
			func_262((1 << 19));
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_128(39, 0, 0, 0, 0, 0, 1, 0);
			func_130(39, 0, 0, 0, 0, -1, 0);
			func_263(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_128(41, 0, 0, 0, 0, 0, 1, 0);
			func_130(41, 0, 0, 0, 0, -1, 0);
			func_264(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_128(49, 0, 0, 0, 0, 0, 1, 0);
			func_130(49, 0, 0, 0, 0, -1, 0);
			func_265(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_128(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_266(1), 0, -1, 0);
			func_267(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_128(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_266(2), 0, -1, 0);
			func_267(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_128(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_266(4), 0, -1, 0);
			func_267(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_128(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_266(8), 0, -1, 0);
			func_267(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_128(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_266(16), 0, -1, 0);
			func_267(16);
			break;
	}
}

void func_153(bool bParam0)
{
	if (func_268() == 1)
	{
		if (func_122(39))
		{
			func_24(342, 0);
		}
		else
		{
			func_24(343, 0);
			func_263(1);
		}
	}
	if (func_268() >= 30)
	{
		func_24(344, 0);
	}
	func_128(39, 0, 0, 0, 0, 0, -1, 0);
	func_130(39, 0, 0, func_268(), 30, 1, 0);
}

void func_154(bool bParam0)
{
	if (func_269() == 1)
	{
		if (func_122(49))
		{
			func_24(409, 0);
		}
		else
		{
			func_24(410, 0);
			func_265(1);
		}
	}
	if (func_269() >= 10)
	{
		func_24(411, 0);
	}
	func_128(49, 0, 0, 0, 0, 0, -1, 0);
	func_130(49, 0, 0, func_269(), 10, 1, 0);
}

void func_155(bool bParam0)
{
	char[] cVar0[8];

	switch (bParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_01"), 1);
			func_24(437, 0);
			func_24(440, 0);
			func_270(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &cVar0, 1, 0, 0);
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), cVar0, 0, -1, 0);
			func_130(51, 0, 0, cVar0, func_224(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_262(1);
			func_271(joaat("WS_TAXIDERMY_NOTICES"), 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_02"), 1);
			func_270(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &cVar0, 1, 0, 0);
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), cVar0, 0, -1, 0);
			func_130(51, 0, 0, cVar0, func_224(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_262(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_03"), 1);
			func_270(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &cVar0, 1, 0, 0);
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), cVar0, 0, -1, 0);
			func_130(51, 0, 0, cVar0, func_224(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_262(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_04"), 1);
			func_270(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &cVar0, 1, 0, 0);
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), cVar0, 0, -1, 0);
			func_130(51, 0, 0, cVar0, func_224(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_262((1 << 9));
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_05"), 1);
			func_24(438, 0);
			func_270(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &cVar0, 1, 0, 0);
			func_128(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), cVar0, 0, -1, 0);
			func_130(51, 0, 0, cVar0, func_224(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_262((1 << 15));
			break;
		default:
			func_24(439, 0);
			break;
	}
}

void func_156()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_157(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_66() == -1)
	{
		if (!func_122(43))
		{
			if (bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_24(348, 0);
			}
			else if (bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_24(350, 0);
			}
			else if (bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_24(352, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_24(400, 0);
			}
		}
		else if (func_131(bParam0, 412399755))
		{
			func_272(joaat("EXOTIC_STAGE_01"));
			if (func_273() == 0)
			{
				func_32(0, 10);
				iVar1 = func_274(bParam0, iParam1, 1);
				if (((bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_122(44))
		{
			if (bParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_24(354, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_24(399, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_24(401, 0);
			}
		}
		else if (func_131(bParam0, 709057512))
		{
			func_272(joaat("EXOTIC_STAGE_02"));
			if (func_273() == 1)
			{
				func_32(0, 10);
				iVar1 = func_274(bParam0, iParam1, 2);
				if ((bParam0 == joaat("PROVISION_HERON_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_122(45))
		{
			if (bParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_24(359, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_24(394, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_24(395, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_24(398, 0);
			}
		}
		else if (func_131(bParam0, -1478961327))
		{
			func_272(joaat("EXOTIC_STAGE_03"));
			if (func_273() == 2)
			{
				func_32(0, 10);
				iVar1 = func_274(bParam0, iParam1, 4);
				if (bParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_277(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_278(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_220(48);
					}
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_122(46))
		{
			if (bParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_24(356, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_24(402, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_24(404, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_24(406, 0);
			}
		}
		else if (func_131(bParam0, -1238404098))
		{
			func_272(joaat("EXOTIC_STAGE_04"));
			if (func_273() == 3)
			{
				func_32(0, 10);
				iVar1 = func_274(bParam0, iParam1, 8);
				if (((bParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_122(47))
		{
			if (bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_24(396, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_24(397, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_24(405, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_24(403, 0);
			}
		}
		else if (func_131(bParam0, 1160548794))
		{
			func_272(joaat("EXOTIC_STAGE_05"));
			if (func_273() == 4)
			{
				func_32(0, 10);
				iVar1 = func_274(bParam0, iParam1, 16);
				if (((bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_275(bParam0) < func_276(bParam0))
					{
						func_128(43, bParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_130(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_158(bool bParam0)
{
	int iVar0;

	if (bParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_277(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_278(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_220(48);
		}
	}
}

void func_159(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_6(func_51(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_279(bParam0, iVar0, cVar2, iParam1, bParam2);
			}
			else
			{
				func_280(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_160(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_66() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_151(0, 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (bParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_151(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_151(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_151(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_151(joaat("REWARD_BILLFOLD"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_151(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_151(joaat("REWARD_BILLSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_151(joaat("REWARD_COIN"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_151(joaat("REWARD_COINPURSE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_151(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_151(joaat("REWARD_COINS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_151(joaat("REWARD_MONEYCLIP"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_151(joaat("REWARD_MONEYSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_281())
			{
				func_151(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_151(joaat("REWARD_COINCUP_SM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_151(joaat("REWARD_COINCUP_LG"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_151(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_151(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_151(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_151(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_151(joaat("REWARD_RARE_FISH"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_151(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_151(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_151(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_151(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_151(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_151(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_161(bool bParam0)
{
	if (func_122(41))
	{
		func_24(363, 0);
	}
	else
	{
		func_24(362, 0);
	}
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_01"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_02"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_03"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_04"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_05"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_06"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_07"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_08"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_09"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_10"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_11"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_12"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_13"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_32(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_282(joaat("LEGENDARY_FISH_14"));
			func_283(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_284(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_162(bool bParam0, int iParam1)
{
	var uVar0;

	func_193(bParam0, iParam1, &uVar0);
}

int func_163(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (bParam3 == joaat("MP_COMPONENT_TYPE_END"))
	{
		sVar0 = { func_212(bParam1, 1, 0) /*5*/ };
		bParam3 = func_285(sVar0.f_4);
		if (bParam3 == joaat("MP_COMPONENT_TYPE_END"))
		{
			return 0;
		}
	}
	if (!func_287(bParam1, iParam2, func_286(bParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_288(1, (func_66() == -1 && bParam5), 1);
	switch (bParam3)
	{
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (bParam8 && bParam1 != Global_1946054.f_57[func_286(bParam3, 1) /*11*/])
			{
				func_289(31, 0, 0, 0, 0);
			}
			break;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (func_290((1 << 15)) && bParam1 != Global_1946054.f_57[func_286(bParam3, 1) /*11*/])
			{
				func_291();
				func_289(22, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_289(22, bParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_292(bParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_289(19, 0, iVar5, 0, 0);
		if ((bParam3 == joaat("MP_COMPONENT_TYPE_NECKWEAR_1") || bParam3 == joaat("MP_COMPONENT_TYPE_HEADWEAR")) || bParam3 == joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"))
		{
			func_293(0);
			func_294(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_289(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_164(bool bParam0, bool bParam1)
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
	*bParam0 = 0;
	iVar18 = func_249(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_249(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_84("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_85(&sVar3, iVar2, iVar0, iVar1))
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
								*bParam0 = sVar3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_87(iVar0);
						if (*bParam0 != 0)
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

void func_165()
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_60));
}

void func_166()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - fVar0), (1.0f - fVar1));
}

void func_167()
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f / (1.0f + Global_40.f_11095.f_58)));
}

void func_168()
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_63));
}

void func_169()
{
	func_295();
	func_296();
	func_297();
}

bool func_170(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

void func_171(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_68(iParam0, &iVar0, &iVar1);
	if (!func_69(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_189(iParam0, (1 << 10)))
	{
		return;
	}
	func_70(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_172(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_68(iParam0, &iVar0, &iVar1);
	if (!func_69(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_189(iParam0, (1 << 10)))
	{
		return;
	}
	func_70(iVar0, iVar1);
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

bool func_173()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);
	if (iVar0 == func_218())
	{
		return func_174();
	}
	iVar4 = (func_218() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_218())
	{
		iVar1 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar2, joaat("CIGARETTE_CARDS"), 0);
		if (!func_298(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_219(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return false;
}

bool func_174()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_218());
	return func_219(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("CIGARETTE_CARDS"), 0));
}

void func_175(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

int func_176(bool bParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	sVar0 = { func_212(bParam0, 0, 1) /*5*/ };
	sVar5 = { func_243(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_299(bParam0, &sVar5, &sVar0, iParam1, iParam2, 0);
}

void func_177(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_66() != -1)
	{
		return;
	}
	switch (func_135(bParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			if (bParam0 == joaat("KIT_BANDANA") && func_300(joaat("CI_CATEGORY_WARDROBE_MASK"), 0) <= 0)
			{
				func_289(32, bParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			if (bParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || bParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_289(32, bParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = func_301(bParam0);
			if (func_302(iVar0))
			{
				func_303(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_289(30, bParam0, 0, 0, 0);
			}
			if (func_304() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || func_304() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"))
			{
				switch (bParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"):
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_289(32, bParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_304() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
			{
				switch (bParam0)
				{
					case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"):
						func_289(32, bParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			if (!func_305(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), 0))
			{
				if (func_306(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), &bVar1))
				{
					func_289(33, bVar1, 0, 0, 0);
				}
			}
			func_289(32, bParam0, 0, 0, 0);
			break;
	}
	if ((bParam0 == joaat("CLOTHING_SP_OFFHAND_000") || bParam0 == -1515874150) || bParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_307(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_163(Global_35, bParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_134(24);
		if (func_164(&bVar2, 0))
		{
			func_140(bVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_178(bool bParam0)
{
	if (func_131(bParam0, 943695443))
	{
		func_308(0, bParam0);
	}
	else if (func_131(bParam0, -2096528786))
	{
		func_308(1, bParam0);
	}
	else if (func_131(bParam0, -1094167013))
	{
		func_308(2, bParam0);
	}
	else if (func_131(bParam0, 1936654645))
	{
		func_308(3, bParam0);
	}
	else if (func_131(bParam0, 1306489306))
	{
		func_308(4, bParam0);
	}
	else if (func_131(bParam0, 435762317))
	{
		func_308(5, bParam0);
	}
	else if (func_131(bParam0, 1259363210))
	{
		func_308(6, bParam0);
	}
	else if (func_131(bParam0, 881398259))
	{
		func_308(7, bParam0);
	}
	else if (func_131(bParam0, -541549214))
	{
		func_308(8, bParam0);
	}
	else if (func_131(bParam0, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_308(-1, bParam0);
	}
}

int func_179(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	sVar4.f_1 = 10;
	func_309(&sVar4, joaat("LOOT_TYPE_NORMAL"));
	return func_310(iParam0, &sVar4, &uVar0, iParam1);
}

struct<2> /*16*/ func_180(bool bParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_34(bParam0, 0))
	{
		return sVar0;
	}
	if (func_131(bParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_66() == -1)
		{
			if (func_131(bParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_311(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_311(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_131(bParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_311(joaat("MEDICINE_ITEMS"));
	}
	if (func_131(bParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_311(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

void func_181(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_66() == -1)
			{
				if (func_148(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_24(109, 1);
				}
			}
			break;
	}
}

void func_182(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_313(func_312(0));
	func_315(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_314(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_183(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (bParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!func_34(bParam0, 0))
	{
		return;
	}
	if (bParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_316())
	{
		func_317(bParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_318(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_318(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
		}
		else if (bParam2 && func_132(bParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT");
		}
		bVar0 = true;
	}
	iVar6 = func_35(bParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && bParam0 != joaat("AMMO_HATCHET")) && bParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		sVar7.f_0 = "ITEMTYPE_UPGRADES";
		sVar7.f_1 = "itemtype_textures";
	}
	else if (!func_319(bParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(bParam0))
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
	sVar15 = func_320(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_170(bParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_131(bParam0, 1443104131)) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_170(bParam0));
	}
	func_315(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_184(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_315(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_185(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_321())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_315(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_322(iVar0);
			func_323(iVar0, 0, 0);
		}
		func_315(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_27(func_311(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_186(int iParam0, int iParam1)
{
	if (func_66() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_187(int iParam0)
{
	if (func_66() != -1)
	{
		if (func_189(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_189(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_189(iParam0, (1 << 16)) && !func_189(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_189(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_189(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_189(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

bool func_190(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

bool func_191()
{
	return Global_1905944.f_5694;
}

bool func_192(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_193(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
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

struct<18> /*144*/ func_194(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (bParam0 != 0)
	{
		sVar0.f_0 = bParam0;
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

struct<4> /*32*/ func_195(bool bParam0)
{
	int iVar0;

	iVar0 = func_89(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_243(joaat("CARRIED_WEAPONS"), func_324(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_243(joaat("CARRIED_WEAPONS"), func_324(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_243(joaat("CARRIED_WEAPONS"), func_324(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_196(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_197(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_89(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_198(int iParam0)
{
	return iParam0 != 0;
}

Vector3 func_199()
{
	return { -6323.169f, -3671.669f, 1.19892f };
}

int func_200(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_325(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

Vector3 func_201()
{
	return { -6322.69f, -3672.167f, 3.22559f };
}

Vector3 func_202()
{
	return { 7.156243f, 49.48636f, 49.4864f };
}

void func_203(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::SET_LOOTING_FLAG(iVar0, 7, true);
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_326(iParam0);
		func_327(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_205(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 |= func_328(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_206(int iParam0, bool bParam1, bool bParam2)
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

bool func_207(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_208(bool bParam0)
{
	return func_35(bParam0) == joaat("WEAPON");
}

bool func_209(bool bParam0)
{
	var uVar0;

	if (func_66() != -1)
	{
		return false;
	}
	if (func_132(bParam0, (1 << 20)))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_216(bParam0, &uVar0, 1, 0, 0);
	}
	return func_6(bParam0, 1, 0);
}

void func_210(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_35(bParam0) != joaat("WEAPON"))
	{
		return;
	}
	bVar0 = func_137(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_239(bVar0))
	{
		if (func_66() == -1)
		{
			func_138(bVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, false) && func_37(bParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_183(bParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_211(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_131(bParam0, joaat("CI_TAG_ITEM_MULTIPLE_USES")))
	{
		func_329(bParam0, joaat("COST_SHOP_DEFAULT"), &iVar0, 1);
		*iParam1 *= iVar0;
	}
}

struct<5> /*40*/ func_212(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_324(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_35(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_243(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_195(bParam1) /*4*/ };
			if (bParam2 && func_330(bParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_241(bParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_241(bParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_242(bParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_331(bParam1) /*4*/ };
			switch (func_135(bParam0))
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
			if (func_332(bParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_243(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_332(bParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_243(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_333(sVar0, &sVar27, bParam1, 0))
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

int func_213(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	if (!func_139(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_334(bParam0))
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_89(bParam3), bParam0);
}

int func_214(bool bParam0, bool bParam1)
{
	if (func_143(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_89(bParam1), bParam0, false);
}

bool func_215()
{
	if (func_66() != -1)
	{
		return false;
	}
	if (!func_79())
	{
		return false;
	}
	if (!func_148(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_148(Global_1835011[2 /*74*/].f_1, 1) && func_148(Global_1347702[120 /*49*/].f_15, 1)) && !func_148(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_148(Global_1835011[37 /*74*/].f_1, 1) && !func_148(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_148(Global_1835011[57 /*74*/].f_1, 1) && !func_148(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_148(Global_1835011[26 /*74*/].f_1, 1) && !func_148(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_148(Global_1835011[62 /*74*/].f_1, 1) && func_148(Global_1835011[63 /*74*/].f_1, 1)) && !func_148(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_148(Global_1835011[75 /*74*/].f_1, 1) && !func_148(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_148(Global_1835011[76 /*74*/].f_1, 1) && !func_148(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_148(Global_1835011[40 /*74*/].f_1, 1) && func_148(Global_1835011[41 /*74*/].f_1, 1)) && !func_148(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_148(Global_1835011[62 /*74*/].f_1, 1) && func_148(Global_1835011[63 /*74*/].f_1, 1)) && !func_148(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_148(Global_1835011[65 /*74*/].f_1, 1) && func_148(Global_1835011[66 /*74*/].f_1, 1)) && !func_148(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_216(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_335(&bParam0);
	if (!func_34(bParam0, 0))
	{
		return false;
	}
	if (!func_139(0))
	{
		bParam3 = true;
	}
	if (func_208(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
		{
			sVar0 = { func_195(0) /*4*/ };
			sVar4.f_9 = joaat("SLOTID_NONE");
			if (!func_241(bParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_242(bParam0, &sVar4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_330(bParam0, 1))
			{
				if (!func_241(bParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_242(bParam0, &sVar4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_336(bParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_213(bParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_334(bParam0))
	{
		iVar28 = func_337(bParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_89(bParam4), bParam0, false);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_217(bool bParam0, int iParam1)
{
	struct<2> /*16*/ sVar0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &sVar0, &iVar41, 20))
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

int func_218()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

bool func_219(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_220(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_66() != -1)
	{
		return;
	}
	iVar0 = func_338(iParam0);
	fVar1 = func_339(iParam0);
	if ((Global_1347477.f_117 || !func_133(31)) || !func_340(iVar0))
	{
		return;
	}
	if (fVar1 <= 0.0f)
	{
		return;
	}
	if (func_341(iVar0) >= 7)
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
	func_342(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_315(MISC::VAR_STRING(6, func_343(iParam0), fVar1), "itemtype_textures", func_344(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_221(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_222(int iParam0)
{
	int iVar0;

	iVar0 = func_255(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_223(int iParam0)
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

int func_224(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_106(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

char* func_225(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_127() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_345(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_346(), 12);
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
			else if (func_268() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_347(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_268(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_348(), 13);
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
			else if (func_269() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_349(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_269(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_224(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_226(int iParam0, int iParam1, int iParam2)
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

bool func_227(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_228(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_229(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == joaat("CIGARETTE_CARDS"))
		{
			bVar2 = func_350(iVar0);
			if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_6(bVar2, 1, 0) || func_352(func_351(bVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_232(func_350(iVar0))), func_232(func_350(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_268() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_353(iVar0)), func_353(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_347() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_353(iVar0)), func_353(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_353(iVar0)), func_353(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			bVar2 = func_51(iParam3, func_354(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_275(bVar2) - iParam7) >= func_224(iParam3, func_355(iVar0));
				}
				else
				{
					bVar1 = func_275(bVar2) >= func_224(iParam3, func_355(iVar0));
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = (func_275(bVar2) + iParam7) >= func_224(iParam3, func_355(iVar0));
			}
			else
			{
				bVar1 = func_275(bVar2) >= func_224(iParam3, func_355(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_356(bVar2)), func_356(bVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_357(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_358(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_358(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_269() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_359(iVar0)), func_359(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_349() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_359(iVar0)), func_359(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_359(iVar0)), func_359(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			bVar2 = func_51(iParam3, func_354(iVar0));
			if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_275(bVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_360(bVar2);
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_360(bVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_361(bVar2)), func_361(bVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_230(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_348() >= 13)
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

bool func_231(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_363(func_362(0)) && ((func_364(0) == 1 || func_364(0) == 8) || func_364(0) == 6))
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

char* func_232(bool bParam0)
{
	switch (bParam0)
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

int func_233(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

bool func_234(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_236(int iParam0)
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

void func_237(int iParam0)
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
			func_365(1);
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
			func_366(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_366(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_366(3);
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
			func_367(1);
			break;
		case 34:
			func_368(1);
			break;
		case 35:
			func_369(1);
			break;
		case 36:
			break;
		case 37:
			func_370(0);
			break;
		case 38:
			func_371(0);
			break;
		case 39:
			func_372(0);
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
			if ((!Global_1879534 && func_79()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_233("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_24(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_79()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_233("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_24(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_79()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_233("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_24(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_79()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_233("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_24(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_66() == -1)
			{
				if (!func_307(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_373(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_22())
					{
						bVar0 = -1515874150;
					}
					else
					{
						bVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_6(bVar0, 1, 0))
					{
						func_176(bVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_163(Global_35, bVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_66() == -1)
			{
				if (!func_6(1013902307, 1, 0))
				{
					func_176(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_66() == -1)
			{
				if (!func_6(1013902307, 1, 0))
				{
					func_176(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_6(142640135, 1, 0))
				{
					func_176(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_66() == -1)
			{
				if (!func_6(786809402, 1, 0))
				{
					func_176(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_66() == -1)
			{
				if (!func_6(786809402, 1, 0))
				{
					func_176(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_6(-518019409, 1, 0))
				{
					func_176(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_374();
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

bool func_238(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
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

bool func_239(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
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

int func_240(int iParam0, int iParam1)
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
			return 155413195;
			return joaat("SLOTID_WATCH");
			return joaat("SLOTID_WEAPON_0");
			return joaat("SLOTID_WEAPON_1");
			return joaat("SLOTID_WEAPON_2");
			return joaat("SLOTID_WEAPON_3");
			return 1570861011;
			return joaat("SLOTID_WEAPON_BOW_FRAME_TINT");
			return joaat("SLOTID_WEAPON_BOW_GRIPSTOCK_TINT");
			return joaat("SLOTID_WEAPON_BOW_IMPROVED_GRIP");
			return joaat("SLOTID_WEAPON_BOW_TRIGGER_TINT");
			return joaat("SLOTID_WEAPON_FISHINGROD_GRIP");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_RIFLING");
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_ROLE");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_GRIP_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_TINT");
			return joaat("SLOTID_WEAPON_LONGARM_HAMMER_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_SIGHT_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_STRAP_TINT");
			return joaat("SLOTID_WEAPON_LONGARM_TRIGGER_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_TINT");
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING");
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_MELEE_BLADE_MATERIAL");
			return joaat("SLOTID_WEAPON_MELEE_GRIP_TINT");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_BARREL");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_CLIP");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_SIGHT");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_BARREL");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_CLIP");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_SIGHT");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_BARREL");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_CLIP");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_SIGHT");
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_BARREL");
			return 61132362;
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
			return 1136146715;
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_TUBE");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_WRAP1");
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_GRIP");
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_WRAP");
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_GRIP");
			return 1471419228;
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
			return 1911050315;
			return -1343525599;
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
			return 763162704;
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
			return 526744654;
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
			return 853355463;
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
			return -585289073;
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_REVOLVER");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_SHOTGUN");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_BARREL");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_AMMO_REVOLVER");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL_CROSSOVER");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP_CROSSOVER");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT_CROSSOVER");
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_BARREL");
			return -2145069367;
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
			return -2117214398;
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SIGHT");
			return -62390436;
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_CARCANO_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_BARREL");
			return 302954672;
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_STOCK");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_WRAP1");
			return joaat("SLOTID_WEAPON_RIFLE_ROLLINGBLOCK_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_WRAP1");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_CLIP");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_WRAP1");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_RIFLING");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_ROLE");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIP_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_TINT");
			return joaat("SLOTID_WEAPON_SHORTARM_HAMMER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_SIGHT_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_TRIGGER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHOTGUN_BARREL_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_CYLINDER_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_BARREL");
			return 293062146;
			return 95360094;
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP_EXOTIC");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING_ROLE");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_CLIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_WRAP1");
			return 1670843243;
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_SIGHT");
			return -1150323212;
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWED_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_STOCK");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_WRAP1");
			return 1254273765;
			return -792172668;
			return 1905987493;
			return joaat("SLOTID_WEAPON_SNIPERRIFLE_ROLLINGBLOCK_GRIP");
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return joaat("SLOTID_WEB_INBOX");
			return joaat("SLOTID_WEB_INBOX_AMMO");
			return joaat("SLOTID_WEB_INBOX_CONSUMABLES");
			return joaat("SLOTID_WEB_INBOX_DOCUMENTS");
			return joaat("SLOTID_WEB_INBOX_GIFTS");
			return 1084576580;
			return joaat("SLOTID_WEB_INBOX_HORSES");
			return joaat("SLOTID_WEB_INBOX_KIT");
			return joaat("SLOTID_WEB_INBOX_OFFERS");
			return joaat("SLOTID_WEB_INBOX_WEAPONS");
			return -386012962;
			return joaat("SLOTID_CARAVAN_UPGRADE");
			return joaat("SLOTID_CARRIED_HORSE_EQUIPMENT");
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return joaat("SLOTID_WARDROBE_BEARD_CHIN");
			return joaat("SLOTID_WARDROBE_BEARD_CHOPS");
			return joaat("SLOTID_WARDROBE_BEARD_MUSTACHE");
			return 1380479304;
			return joaat("SLOTID_WARDROBE_LOADOUT");
			return joaat("SLOTID_WARDROBE_MISC");
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return joaat("SLOTID_NONE");
			return joaat("SLOTID_ANY");
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_241(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_337(bParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_242(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_375(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_243(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_34(bParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_89(bParam6), &uParam1, bParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_244(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_376(bParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_333(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_139(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_89(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_245(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar1 = func_377(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

void func_246(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, bParam0);
	iVar2 = func_378();
	func_379(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_247(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_380(bParam0))
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
	else if (WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
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

bool func_248(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_249(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_250(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_133(50))
			{
				if (!func_133(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_133(51))
			{
				if (!func_133(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_251()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_252(int iParam0, bool bParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_34(bParam1, 0))
	{
		return false;
	}
	if (func_35(bParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_66() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_135(bParam1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		return true;
	}
	iVar4 = func_381(bParam1);
	if (iVar4 == joaat("MP_COMPONENT_TYPE_END"))
	{
		*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_ITEM_META_TYPE_MISSING");
		return false;
	}
	bVar7 = false;
	bVar8 = bParam1;
	if (func_131(bParam1, joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar5 = func_286(iVar4, 1);
		if (func_382(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != bVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (PED::_GET_SHOP_PED_COMPONENT_CATEGORY(bVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_SHIRT_DOES_NOT_SUPPORT_NECKTIES");
				return false;
			}
			iVar5 = 10;
			iVar3 = func_135(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_131(bParam1, -1638171711))
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
			if (func_383(joaat("CI_CATEGORY_WARDROBE_COATS"), &uVar0))
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
				iVar10 = func_384(bVar8, iVar4, iVar2, bVar1);
				iVar9 = func_384(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; // curOff = 583
				iVar3 = func_135(bParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (bParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_131(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == joaat("CI_CATEGORY_WARDROBE_CHAPS") || iVar3 == 1545016984)
				{
				}
				else
				{
					if (bParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_385(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
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

void func_253()
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), (1.0f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_254()
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

int func_255(int iParam0)
{
	if (!func_363(iParam0))
	{
		return -1;
	}
	return func_386(iParam0);
}

int func_256()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_6(func_387(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_257(bool bParam0)
{
	switch (bParam0)
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

bool func_258(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	switch (bParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (bParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				bVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				bVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (bParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				bVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				bVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				bVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				bVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (bParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				bVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				bVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (bParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				bVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				bVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				bVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				bVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (bParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				bVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				bVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (bParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				bVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				bVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				bVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				bVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (bParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				bVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				bVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (bParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				bVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				bVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				bVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				bVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_6(bVar0, 1, 0) && func_6(bVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_259(bool bParam0)
{
	switch (bParam0)
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

bool func_260(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_388(iParam0);
	if (iVar0 != -15)
	{
		func_379(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_389(iVar0, 1);
	}
	return false;
}

int func_261(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> /*104*/ sVar1;
	int iVar24;
	bool bVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1.0f;
	if (bParam1 && func_6(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			bVar25 = sVar1.f_1[iVar24];
			if (func_34(bVar25, 0) && func_131(bVar25, joaat("CI_TAG_ITEM_MONEY")))
			{
				return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_262(int iParam0)
{
	Global_40.f_12004.f_6 |= iParam0;
}

void func_263(int iParam0)
{
	Global_40.f_12004.f_1 |= iParam0;
}

void func_264(int iParam0)
{
	Global_40.f_12004.f_3 |= iParam0;
}

void func_265(int iParam0)
{
	Global_40.f_12004.f_5 |= iParam0;
}

int func_266(int iParam0)
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
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			bVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			bVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			bVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			bVar9 = joaat("PROVISION_HERON_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			bVar9 = joaat("PROVISION_GATOR_EGG");
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			bVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			bVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			bVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			bVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			bVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_275(bVar9);
	iVar2 = func_275(bVar10);
	iVar3 = func_275(bVar11);
	iVar5 = func_276(bVar9);
	iVar6 = func_276(bVar10);
	iVar7 = func_276(bVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_275(bVar12);
		iVar8 = func_276(bVar12);
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

void func_267(int iParam0)
{
	Global_40.f_12004.f_2 |= iParam0;
}

int func_268()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_390(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_269()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

bool func_270(int iParam0, bool bParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_360(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_360(bParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_360(bVar0))
		{
			*sParam2++;
		}
		if (func_360(bVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_360(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_360(bParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_360(bVar0))
		{
			*sParam2++;
		}
		if (func_360(bVar1))
		{
			*sParam2++;
		}
		if (func_360(bVar0) && func_360(bVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_360(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_360(bParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_360(bVar0))
		{
			*sParam2++;
		}
		if (func_360(bVar1))
		{
			*sParam2++;
		}
		if (func_360(bVar2))
		{
			*sParam2++;
		}
		if ((func_360(bVar0) && func_360(bVar1)) && func_360(bVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_360(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_360(bParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_360(bVar0))
		{
			*sParam2++;
		}
		if (func_360(bVar1))
		{
			*sParam2++;
		}
		if (func_360(bVar2))
		{
			*sParam2++;
		}
		if (func_360(bVar3))
		{
			*sParam2++;
		}
		if (((func_360(bVar0) && func_360(bVar1)) && func_360(bVar2)) && func_360(bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_271(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_391(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_392(joaat("WS_DOWNS_RANCH_EDITH"));
			func_392(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_392(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_392(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_391(joaat("WS_DOWNS_RANCH_EDITH"));
			func_392(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_392(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_392(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_392(joaat("WS_DOWNS_RANCH_EDITH"));
			func_391(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_392(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_392(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_392(joaat("WS_DOWNS_RANCH_EDITH"));
			func_392(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_391(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_392(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_392(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_392(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_391(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_393();
			func_391(iParam0);
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
			func_394();
			func_391(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_392(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_392(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_391(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_392(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_392(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_391(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_392(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_392(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_391(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_392(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_392(joaat("WS_RHODES_GRAVE_OPEN"));
			func_391(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_392(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_392(joaat("WS_RHODES_GRAVE_OPEN"));
			func_391(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_392(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_392(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_391(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_392(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_391(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_392(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_391(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_392(joaat("WS_UTOPIA_TREE_MISSION"));
			func_392(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_392(joaat("WS_UTOPIA_TREE_STUMP"));
			func_391(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_392(joaat("WS_UTOPIA_TREE_STANDING"));
			func_392(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_392(joaat("WS_UTOPIA_TREE_STUMP"));
			func_391(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_392(joaat("WS_UTOPIA_TREE_STANDING"));
			func_392(joaat("WS_UTOPIA_TREE_MISSION"));
			func_392(joaat("WS_UTOPIA_TREE_STUMP"));
			func_391(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_392(joaat("WS_UTOPIA_TREE_STANDING"));
			func_392(joaat("WS_UTOPIA_TREE_MISSION"));
			func_392(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_391(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_392(joaat("WS_MICAH_CAMP"));
			func_392(joaat("WS_MICAH_CAMP_POST"));
			func_391(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_392(joaat("WS_MICAH_CAMP_EMPTY"));
			func_392(joaat("WS_MICAH_CAMP_POST"));
			func_391(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_392(joaat("WS_MICAH_CAMP_EMPTY"));
			func_392(joaat("WS_MICAH_CAMP"));
			func_391(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_392(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_391(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_392(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_392(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_395(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_391(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_392(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_392(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_391(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_392(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_391(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_392(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_391(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_392(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_391(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_392(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_391(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_392(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_391(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_392(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_392(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_391(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_392(joaat("WS_NEW_COM_BANK_START"));
			func_392(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_392(joaat("WS_NEW_COM_BANK_AFTER"));
			func_392(joaat("WS_NEW_COM_BANK_POST"));
			func_391(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_392(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_392(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_392(joaat("WS_NEW_COM_BANK_AFTER"));
			func_392(joaat("WS_NEW_COM_BANK_POST"));
			func_391(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_392(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_392(joaat("WS_NEW_COM_BANK_START"));
			func_392(joaat("WS_NEW_COM_BANK_AFTER"));
			func_392(joaat("WS_NEW_COM_BANK_POST"));
			func_391(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_392(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_392(joaat("WS_NEW_COM_BANK_START"));
			func_392(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_392(joaat("WS_NEW_COM_BANK_POST"));
			func_391(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_392(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_392(joaat("WS_NEW_COM_BANK_START"));
			func_392(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_392(joaat("WS_NEW_COM_BANK_AFTER"));
			func_391(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_392(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_392(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_392(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_391(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_392(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_392(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_392(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_391(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_392(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_392(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_392(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_391(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_392(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_392(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_392(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_391(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_391(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_391(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_391(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_392(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_391(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_391(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_391(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_391(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_391(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_392(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_391(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_392(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_391(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_392(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_391(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_392(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_391(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_392(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_391(0);
			func_392(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_392(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_391(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_392(0);
			func_392(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_391(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_392(0);
			func_392(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_391(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_392(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_391(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_392(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_391(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_391(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_391(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_391(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_392(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_391(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_392(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_392(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_392(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_391(joaat("WS_SHADY_BELLE_ABANDON"));
			func_392(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_392(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_391(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_392(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_392(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_391(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_392(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_391(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_392(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_395(iParam0))
				{
					func_391(iParam0);
				}
			}
			else if (func_395(iParam0))
			{
				func_392(iParam0);
			}
			break;
	}
}

void func_272(int iParam0)
{
	if (!func_396(iParam0))
	{
		func_398(func_397(iParam0));
	}
}

int func_273()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_396(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_274(bool bParam0, int iParam1, int iParam2)
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
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			bVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			bVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			bVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			bVar9 = joaat("PROVISION_HERON_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			bVar9 = joaat("PROVISION_GATOR_EGG");
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			bVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			bVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			bVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			bVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			bVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_275(bVar9);
	iVar2 = func_275(bVar10);
	iVar3 = func_275(bVar11);
	iVar5 = func_276(bVar9);
	iVar6 = func_276(bVar10);
	iVar7 = func_276(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_275(bVar12);
		iVar8 = func_276(bVar12);
	}
	if (bParam0 == bVar9)
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
	if (bParam0 == bVar10)
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
	if (bParam0 == bVar11)
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
		if (bParam0 == bVar12)
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

int func_275(bool bParam0)
{
	int iVar0;

	if (func_6(bParam0, 1, 0))
	{
		iVar0 = func_37(bParam0, 0, 0);
	}
	return iVar0;
}

int func_276(bool bParam0)
{
	switch (bParam0)
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

int func_277(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0);
}

void func_278(int iParam0, int iParam1)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, iParam1);
}

void func_279(bool bParam0, int iParam1, char[4] cParam2, int iParam3, bool bParam4)
{
	if ((((bParam0 == func_51(iParam1, 5) || bParam0 == func_51(iParam1, 6)) || bParam0 == func_51(iParam1, 7)) || bParam0 == func_51(iParam1, 8)) || bParam0 == func_51(iParam1, 9))
	{
		func_270(iParam1, bParam0, &cParam2, 0, iParam3, bParam4);
		func_128(51, 0, 0, iParam1, cParam2, 0, -1, 0);
		func_130(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_280(bool bParam0, int iParam1, bool bParam2)
{
	char[] cVar0[8];

	cVar0 = 1;
	if ((((bParam0 == func_51(iParam1, 5) || bParam0 == func_51(iParam1, 6)) || bParam0 == func_51(iParam1, 7)) || bParam0 == func_51(iParam1, 8)) || bParam0 == func_51(iParam1, 9))
	{
		if (func_270(iParam1, bParam0, &cVar0, 0, 0, 0))
		{
			func_128(51, bParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_130(51, 0, 0, cVar0, func_224(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_128(51, bParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_130(51, 0, 0, cVar0, func_224(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_281()
{
	if (func_222(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_282(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

void func_283(int iParam0)
{
	if (!func_399(iParam0))
	{
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	}
}

void func_284(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(iParam0, 1);
}

int func_285(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_400(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

int func_286(bool bParam0, int iParam1)
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

bool func_287(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_401();
	if (iParam2 == 39)
	{
		sVar0 = { func_212(bParam0, 1, 0) /*5*/ };
		iParam2 = func_286(func_285(sVar0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_131(bParam0, joaat("CI_TAG_ITEM_TALISMAN")) && func_382(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_290((1 << 15)) && iParam2 == 10) && bParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_402(func_400(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_403(iParam2);
	func_404(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_405(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_405(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_406(&(Global_1946054.f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = bParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_407(bParam0, iParam2, iParam1, func_66() != -1);
	if (bParam4)
	{
		func_408(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_408(&(Global_1946054.f_1378), 1, 0);
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
				func_409(func_400(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_288(bool bParam0, bool bParam1, bool bParam2)
{
	func_410(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_289(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_411((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = bParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_412(sVar0);
}

bool func_290(int iParam0)
{
	return Global_1946054 & iParam0 != 0;
}

void func_291()
{
	func_413(&(Global_1946054.f_2776));
	func_414((1 << 15));
	func_409(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

int func_292(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_286(bParam0, 1);
	switch (bParam0)
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

void func_293(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_415(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_416(sVar0);
}

void func_294(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = iParam2;
	sVar0.f_0 = iParam0;
	sVar0.f_2 = iParam1;
	func_416(sVar0);
}

float func_295()
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

	if (func_417())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_418(2);
	}
	if (Global_1347477.f_119)
	{
		return func_418(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_419();
	fVar2 = func_420();
	fVar3 = func_421();
	fVar4 = func_422();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_423());
	fVar7 = (func_418(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_424(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_425(3, fVar9, fVar9 > 100.0f);
	return func_426(fVar7, -100.0f, 100.0f);
}

float func_296()
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

	if (func_417())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_418(1);
	}
	if (Global_1347477.f_119)
	{
		return func_418(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_419();
	fVar2 = func_420();
	fVar3 = func_421();
	fVar4 = func_422();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_423());
	fVar7 = (func_418(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_424(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_425(2, fVar9, fVar9 > 100.0f);
	return func_426(fVar7, -100.0f, 100.0f);
}

float func_297()
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

	if (func_417())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_418(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_427())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_428())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_418(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_419();
	fVar2 = func_420();
	fVar3 = func_421();
	fVar4 = func_422();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_423());
	fVar7 = (func_418(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_424(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_425(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_418(0);
	}
	return func_426(fVar7, -100.0f, 100.0f);
}

bool func_298(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_299(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_34(bParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_216(bParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_139(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_89(0), uParam1, uParam2, bParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_300(int iParam0, bool bParam1)
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
				return func_429();
			}
			break;
	}
	return 0;
}

int func_301(bool bParam0)
{
	switch (bParam0)
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

bool func_302(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_303(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (!func_302(iParam0))
	{
		return;
	}
	if (func_430(iParam0))
	{
		return;
	}
	if (!func_431(iParam0))
	{
		func_432(iParam0, 1, 0);
	}
	bVar0 = func_433(iParam0);
	if (bVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_434(iParam0, (1 << 9)))
		{
			func_289(30, bVar0, 0, 0, 0);
		}
	}
	if ((!func_435() && !bParam1) && !func_436(0, 0, 1))
	{
		func_437(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, bVar0)), 10000, 0, 0, 0, 1);
	}
	func_438(iParam0, 6);
	if (bParam2)
	{
		if (!func_436(0, 0, 1))
		{
			func_32(1, 4);
		}
	}
}

int func_304()
{
	return Global_1946054.f_1;
}

bool func_305(int iParam0, bool bParam1)
{
	return func_300(iParam0, 0) < func_439(iParam0, bParam1);
}

bool func_306(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_135(bVar1) == iParam0)
		{
			*bParam1 = bVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_307(bool bParam0)
{
	if (bParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_286(bParam0, 1) /*3*/] != Global_1946054.f_57[func_286(bParam0, 1) /*11*/];
}

void func_308(int iParam0, bool bParam1)
{
	if (func_131(bParam1, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_440(bParam1, 0);
	}
	else if (func_131(bParam1, 930141731))
	{
		func_440(bParam1, 1);
		func_441(iParam0);
	}
}

void func_309(var uParam0, int iParam1)
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

int func_310(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_442(uParam1);
	LOCAL_STORE_S(&uVar0, iParam0);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	sVar1.f_2.f_1 = 10;
	sVar1.f_0 = iParam3;
	sVar1.f_2 = { *uParam1 /*12*/ };
	func_443(uParam2, iParam0, sVar1);
	return 1;
}

struct<2> /*16*/ func_311(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_312(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_313(int iParam0)
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

int func_314(bool bParam0)
{
	var uVar0;

	if (!func_444(bParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

int func_315(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_445(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_316()
{
	return !Global_1911774;
}

void func_317(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = bParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_318(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_319(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> /*152*/ sVar3;

	sVar3.f_2 = 5;
	sVar3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &sVar3))
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

char* func_320(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_321()
{
	if (func_251())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_322(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_446((Global_40.f_4283.f_325 + iParam0));
}

void func_323(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_321())
	{
		func_315(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_315(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

struct<4> /*32*/ func_324(bool bParam0)
{
	return func_243(joaat("CHARACTER"), func_447(), joaat("SLOTID_NONE"), bParam0);
}

void func_325(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_448(iParam1))
		{
			func_449(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_450(iParam0, 0, 1);
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
			func_451(iParam0, 0);
			bVar0 = true;
		}
		func_452(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_326(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return joaat("VISIBLELOOTSLOTREQUEST_GROUP_ANY_WAIST_OR_CHEST");
				}
				else
				{
					return joaat("VISIBLELOOTSLOTREQUEST_GROUP_ANY_WAIST");
				}
			}
		}
	}
	return joaat("VISIBLELOOTSLOTREQUEST_ANY");
}

bool func_327(int iParam0, var uParam1, var uParam2, int iParam3)
{
	struct<13> /*104*/ sVar0;
	int iVar23;

	sVar0.f_1 = 10;
	sVar0.f_12 = 10;
	sVar0.f_0 = 1;
	sVar0.f_1[0] = uParam1;
	sVar0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &sVar0, iParam3, iVar23, 2, false);
}

int func_328(int iParam0)
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

int func_329(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	sVar0.f_4 = 15;
	sVar0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &sVar0))
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

bool func_330(bool bParam0, bool bParam1)
{
	if (func_135(bParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_133(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_331(bool bParam0)
{
	int iVar0;

	iVar0 = func_89(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_243(joaat("EMOTE_ITEM"), func_324(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_243(joaat("EMOTE_ITEM"), func_324(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_332(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_135(bParam0);
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

bool func_333(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_89(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_334(bool bParam0)
{
	if (func_453(bParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_335(bool bParam0)
{
	if (!func_34(*bParam0, 0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			return 1;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_336(bool bParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_34(bParam0, 0))
	{
		return false;
	}
	sVar0 = { func_212(bParam0, 0, 1) /*5*/ };
	iVar5 = joaat("SLOTID_WEAPON_0");
	sVar6.f_9 = joaat("SLOTID_NONE");
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_240((398 + iVar29), 1);
		if (func_241(bParam0, &sVar0, iVar5, 0))
		{
			bVar28 = func_242(bParam0, &sVar6, iVar5);
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

int func_337(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_34(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_243(bParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_89(bParam6), &sVar0, false);
	return iVar4;
}

int func_338(int iParam0)
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

float func_339(int iParam0)
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
			return func_454(iParam0);
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
			return func_454(iParam0);
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
			return func_454(iParam0);
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

bool func_340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_133(18);
		case 2:
			return func_133(20);
		case 1:
			return func_133(19);
		default:
			break;
	}
	return true;
}

int func_341(int iParam0)
{
	return func_455(Global_40.f_11095.f_11[iParam0]);
}

void func_342(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_66() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_133(31))
	{
		return;
	}
	iVar0 = func_341(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_341(iParam0);
	if (func_456(iParam0) & func_457(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_458(fVar1, fParam1);
			if (fParam1 > (float)func_459(iParam0) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_24(func_460(iParam0), 0);
					}
					func_461(iParam0, iVar2, iVar3);
					func_462(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_343(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_344(int iParam0)
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

int func_345()
{
	return func_463(Global_40.f_12019);
}

int func_346()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		bVar2 = func_223(iVar1);
		if (func_6(bVar2, 1, 0) || func_352(func_351(bVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_347()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_464(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_348()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_357(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_349()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_350(int iParam0)
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

int func_351(bool bParam0)
{
	switch (bParam0)
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

bool func_352(int iParam0)
{
	return Global_40.f_12019 & iParam0 != 0;
}

char* func_353(int iParam0)
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

int func_354(int iParam0)
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

int func_355(int iParam0)
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

char* func_356(bool bParam0)
{
	switch (bParam0)
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

bool func_357(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

char* func_358(int iParam0)
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

char* func_359(int iParam0)
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

bool func_360(bool bParam0)
{
	if (func_465(bParam0) && func_6(bParam0, 1, 0))
	{
		return true;
	}
	else if (func_466(bParam0) & func_467(bParam0))
	{
		return true;
	}
	return false;
}

char* func_361(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_170(bParam0));
}

int func_362(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_363(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_364(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_365(bool bParam0)
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

void func_366(int iParam0)
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

void func_367(bool bParam0)
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

void func_368(bool bParam0)
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

void func_369(bool bParam0)
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

void func_370(bool bParam0)
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

void func_371(bool bParam0)
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

void func_372(bool bParam0)
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

int func_373(bool bParam0)
{
	if (bParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_286(bParam0, 1) /*3*/];
}

void func_374()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_468();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_138(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_176(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_138(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_176(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_375(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_89(0);
	*uParam1 = { func_243(bParam0, func_195(0), iParam3, 0) /*4*/ };
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

bool func_376(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_377(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_378()
{
	return Global_1899515;
}

void func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_469(*iParam0);
	iVar1 = func_470(*iParam0);
	iVar2 = func_471(*iParam0);
	iVar3 = func_472(*iParam0);
	iVar4 = func_473(*iParam0);
	iVar5 = func_474(*iParam0);
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
	iVar6 = func_475(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_475(iVar1, iVar0);
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
	func_476(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_380(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

bool func_381(bool bParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_212(bParam0, 1, 0) /*5*/ };
	return func_285(sVar0.f_4);
}

int func_382(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_131(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_131(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_131(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_131(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_131(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_131(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_383(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_286(func_477(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		bVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_135(bVar0) == iParam0)
		{
			*uParam1 = bVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_384(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam0 == Global_1946054.f_57[func_286(bParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_290((1 << 19)))
	{
		switch (bParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				iVar0++;
				break;
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				iVar0++;
				break;
		}
	}
	iVar0 += PED::_0x31B2E7F2E3C58B89(bParam0, joaat("BASE"), iParam2, bParam3);
	return iVar0;
}

bool func_385(bool bParam0)
{
	switch (bParam0)
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

int func_386(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_478(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_387(int iParam0)
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

int func_388(int iParam0)
{
	return func_479(iParam0, -1);
}

bool func_389(int iParam0, bool bParam1)
{
	return func_480(func_378(), iParam0, bParam1);
}

bool func_390(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

void func_391(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_481(iParam0, 1);
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

void func_392(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_481(iParam0, 1);
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

void func_393()
{
	func_392(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_392(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_392(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_392(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_392(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_392(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_392(joaat("WS_COLTER_STAGE_MP"));
}

void func_394()
{
	func_392(joaat("WS_BEECHERS_SHACK"));
	func_392(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_392(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_392(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_392(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_392(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_392(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_392(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_392(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_392(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_395(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_481(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_396(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_397(int iParam0)
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

void func_398(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

bool func_399(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_400(int iParam0, int iParam1)
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

void func_401()
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

void func_402(int iParam0)
{
	func_409(iParam0, 8, 6);
}

void func_403(int iParam0)
{
	func_482(&(Global_1946054.f_2589), iParam0);
}

void func_404(int iParam0, int iParam1)
{
	func_483(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_405(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 |= iParam1;
}

void func_406(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_135(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_484(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_404(iVar1, iVar3);
		}
	}
	if (func_307(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_484(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_404(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case joaat("CI_CATEGORY_WARDROBE_VEST"):
			if (bParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_404(iVar1, iVar3);
					}
				}
			}
			func_485(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_485(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_404(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 525
				func_485(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_404(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_404(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 656
				func_485(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; // curOff = 691
				func_485(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_404(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 786
				func_485(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; // curOff = 807
				if (bParam1 == Global_1946054.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_404(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_404(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_135(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_404(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_385(bParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_135(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_404(iVar1, iVar3);
						}
					}
				}
				Jump @1415; // curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_131(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_404(iVar1, iVar3);
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
						func_404(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_385(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_131(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_404(iVar1, iVar3);
					}
				}
			}
			switch (func_135(bParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_135(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_404(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_135(uParam0->f_1[iVar1 /*3*/]) || func_131(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_404(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_407(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_486(0);
	if (iParam2 != 0 && func_487(bParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_488(bParam0, func_400(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_408(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_66() != -1;
	iVar7 = func_486(0);
	if (func_290((1 << 15)))
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
			bVar5 = func_400(iVar0, 1);
			if (func_489(bVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_489(bVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_384(uParam0->f_1[iVar0 /*3*/], bVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_490(uParam0);
				if (iVar3 > 0)
				{
					if (!func_290((1 << 19)))
					{
						func_411((1 << 19));
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
							bVar5 = func_400(iVar0, 1);
							if (func_489(bVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_489(bVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_384(uParam0->f_1[iVar0 /*3*/], bVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_404(iVar0, iParam2);
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
					func_414((1 << 19));
				}
			}
		}
	}
}

void func_409(bool bParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_286(bParam0, 1) /*11*/].f_10 -= Global_1946054.f_57[func_286(bParam0, 1) /*11*/].f_10 & iParam1;
}

void func_410(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_491(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_66() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_492(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_433(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_433(Global_40.f_7729);
				Global_1946054.f_1378 = func_433(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_493(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_494(0, 1);
	}
}

void func_411(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_412(struct<4> /*32*/ sParam0)
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
			if (func_495(sParam0.f_0))
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
			func_496(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_411(8);
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
			if (func_495(sParam0.f_0))
			{
				return;
			}
			func_496(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_411(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_294(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

void func_413(var uParam0)
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

void func_414(int iParam0)
{
	Global_1946054 -= Global_1946054 & iParam0;
}

bool func_415(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_416(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_495(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_495(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_496(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_411(8);
}

bool func_417()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_418(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_419()
{
	float fVar0;
	int iVar1;

	fVar0 = func_497(13);
	iVar1 = func_498(fVar0);
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

float func_420()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_421()
{
	if (func_251())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_422()
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

float func_423()
{
	return Global_1954815.f_3;
}

void func_424(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_499(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_425(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_499(iParam0, 2, 0, 0);
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

float func_426(float fParam0, float fParam1, float fParam2)
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

bool func_427()
{
	return func_497(12) <= -99.0f;
}

bool func_428()
{
	return func_497(12) >= 99.0f;
}

int func_429()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_135(bVar1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			if (func_500() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_430(int iParam0)
{
	if (!func_302(iParam0))
	{
		return false;
	}
	if (func_434(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_431(int iParam0)
{
	if (!func_302(iParam0))
	{
		return false;
	}
	if (func_434(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_432(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_302(iParam0))
	{
		return;
	}
	if (!func_431(iParam0))
	{
		func_438(iParam0, 2);
		if (bParam2)
		{
			if (!func_436(0, 0, 1))
			{
				func_32(1, 4);
			}
		}
		if ((!func_435() && !bParam1) && !func_436(0, 0, 1))
		{
			func_437(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_501(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_433(int iParam0)
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

bool func_434(int iParam0, int iParam1)
{
	if (!func_302(iParam0))
	{
		return false;
	}
	return Global_40.f_7157[iParam0 /*3*/] & iParam1 != 0;
}

bool func_435()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

bool func_436(int iParam0, bool bParam1, bool bParam2)
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
		if (func_502())
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
		iVar0 = func_503(Global_1898164.f_1[0 /*5*/]);
		if (func_221(iVar0) && func_504(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_363(Global_1898164.f_1[0 /*5*/]))
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

int func_437(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_438(int iParam0, int iParam1)
{
	if (!func_302(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] |= iParam1;
}

int func_439(int iParam0, bool bParam1)
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

void func_440(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_505(bParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_134(50);
			}
			else
			{
				func_134(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_134(51);
			}
			else
			{
				func_134(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_506(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_165();
				}
			}
			else
			{
				Global_40.f_11095.f_60 += 0.1f;
				func_165();
			}
			break;
		case 3:
			func_134(24);
			if (bParam1)
			{
				if (!func_506(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_165();
				}
			}
			break;
	}
}

void func_441(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_507(0))
			{
				iVar0++;
			}
			if (func_507(2))
			{
				iVar0++;
			}
			if (func_507(4))
			{
				iVar0++;
			}
			if (!func_508(16))
			{
				if (iVar0 == 1)
				{
					func_509();
					func_24(456, 1);
					func_510(16);
				}
			}
			if (!func_508(32))
			{
				if (iVar0 >= 3)
				{
					func_509();
					func_24(456, 1);
					func_510(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_507(1))
			{
				iVar0++;
			}
			if (func_507(3))
			{
				iVar0++;
			}
			if (func_507(7))
			{
				iVar0++;
			}
			if (!func_508(1))
			{
				if (iVar0 == 1)
				{
					func_511();
					func_24(457, 1);
					func_510(1);
				}
			}
			if (!func_508(2))
			{
				if (iVar0 >= 3)
				{
					func_511();
					func_24(457, 1);
					func_510(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_507(5))
			{
				iVar0++;
			}
			if (func_507(6))
			{
				iVar0++;
			}
			if (func_507(8))
			{
				iVar0++;
			}
			if (!func_508(4))
			{
				if (iVar0 == 1)
				{
					func_512();
					func_24(455, 1);
					func_510(4);
				}
			}
			if (!func_508(8))
			{
				if (iVar0 >= 3)
				{
					func_512();
					func_24(455, 1);
					func_510(8);
				}
			}
			break;
	}
}

void func_442(var uParam0)
{
	func_309(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_309(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_309(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_443(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_513(uParam0))
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

bool func_444(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> /*152*/ sVar3;

	sVar3.f_2 = 5;
	sVar3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &sVar3))
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

void func_445(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

void func_446(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_311(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

struct<4> /*32*/ func_447()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_448(int iParam0)
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

void func_449(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_514(iParam0, iParam1))
		{
			if (func_515(iParam0, iParam1))
			{
				if (func_516(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_517(iParam0);
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

void func_450(int iParam0, int iParam1, bool bParam2)
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

void func_451(int iParam0, bool bParam1)
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

void func_452(int iParam0, int iParam1)
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

int func_453(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

float func_454(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_338(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_455(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_518(iVar6) - func_518(iVar5));
			fVar2 = ((float)iVar1 * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1.0f;
}

int func_455(float fParam0)
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

int func_456(int iParam0)
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

int func_457(int iParam0)
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

int func_458(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_455(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_518(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_518(iVar0 + 1));
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

int func_459(int iParam0)
{
	int iVar0;

	if (func_519(iParam0, &iVar0))
	{
		return func_518(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_520())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_520())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_520())
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

int func_460(int iParam0)
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

void func_461(int iParam0, int iParam1, int iParam2)
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
	iVar3 += func_521(iParam0);
	sVar4 = func_523(func_522(iVar3, iParam2));
	sVar6 = func_524(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_525(iParam0));
	iVar8 = func_526(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		sVar10.f_0 = sVar7;
		sVar10.f_1 = sVar1;
		sVar10.f_3 = iVar9;
		sVar10.f_2 = iVar8;
		sVar10.f_4 = 1;
		sVar10.f_5 = func_527(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&sVar10);
	}
	func_71(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_528(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_462(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_463(int iParam0)
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

bool func_464(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_465(bool bParam0)
{
	switch (bParam0)
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

int func_466(bool bParam0)
{
	switch (bParam0)
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

int func_467(bool bParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_529(&iVar0, 0, iVar95, &sVar1) && !func_529(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_530(iVar0, &sVar1);
			if (func_34(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_468()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_531(Global_35, &iVar0);
	sVar30 = { func_324(0) /*4*/ };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &sVar30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, joaat("REMOVE_REASON_DEFAULT"));
	func_532(0);
	func_533(7);
	func_534(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_304() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		func_534(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_534(joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"), 1, 1, 1);
	}
	func_535(Global_35, &iVar0);
}

int func_469(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_536(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_470(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_471(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_472(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_473(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_474(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_475(int iParam0, int iParam1)
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

void func_476(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_537(iParam0, iParam6);
	func_538(iParam0, iParam5);
	func_539(iParam0, iParam4);
	func_540(iParam0, iParam3);
	func_541(iParam0, iParam2);
	func_542(iParam0, iParam1);
}

int func_477(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_285(iVar0);
}

int func_478(int iParam0)
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

int func_479(int iParam0, int iParam1)
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
		iParam1 = func_89(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_537(&uVar6, iVar0);
	func_538(&uVar6, iVar1);
	func_539(&uVar6, iVar2);
	func_540(&uVar6, iVar3);
	func_541(&uVar6, iVar4);
	func_542(&uVar6, iVar5);
	return uVar6;
}

bool func_480(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_543(iParam1) || !func_543(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_481(int iParam0, int iParam1)
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

void func_482(var uParam0, int iParam1)
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
			if ((func_544(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			else
			{
				if (func_544(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_545(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_483(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_546(uParam0, 1))
	{
		func_547(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_484(int iParam0, int iParam1)
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1 != 0;
}

void func_485(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_404(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_404(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_404(iVar2, iVar0);
		}
	}
}

int func_486(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_304();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_487(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(bParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(bParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_488(bool bParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_489(bool bParam0, int iParam1)
{
	return Global_1946054.f_57[func_286(bParam0, 1) /*11*/].f_10 & iParam1 != 0;
}

int func_490(var uParam0)
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

void func_491(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] /*3*/ };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_66() == -1)
	{
		func_548(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_549(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_492(int iParam0, int iParam1)
{
	if (func_66() == -1)
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

void func_493(int iParam0, bool bParam1, int iParam2)
{
	func_550(&(Global_1946054.f_1378), iParam0);
	func_551(2, iParam0, 6);
	if (bParam1)
	{
		func_494(0, 1);
	}
}

void func_494(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_552(0);
	}
	if (bParam0)
	{
		func_411(8);
		func_411((1 << 9));
	}
	else
	{
		func_411(8);
		func_411(16);
	}
}

bool func_495(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_496(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

float func_497(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_498(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

char* func_499(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_318(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_318(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_500()
{
	return Global_1946054.f_1497;
}

char* func_501(int iParam0)
{
	bool bVar0;

	bVar0 = func_433(iParam0);
	if (bVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_361(bVar0);
}

bool func_502()
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

int func_503(int iParam0)
{
	if (!func_363(iParam0))
	{
		return -1;
	}
	return func_554(func_553(iParam0));
}

bool func_504(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_505(bool bParam0)
{
	int iVar0;

	if (func_555(bParam0))
	{
		iVar0 = 0;
	}
	else if (func_556(bParam0))
	{
		iVar0 = 1;
	}
	else if (func_557(bParam0))
	{
		iVar0 = 2;
	}
	else if (func_558(bParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_506(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_6(func_559(iVar0, iParam0), 1, 0))
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

bool func_507(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_6(func_560(iVar0, iParam0), 1, 0))
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

bool func_508(int iParam0)
{
	return Global_40.f_12003 & iParam0 != 0;
}

void func_509()
{
	int iVar0;

	if (func_66() != -1)
	{
		return;
	}
	func_176(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_341(1);
	func_461(1, iVar0, 0);
}

void func_510(int iParam0)
{
	Global_40.f_12003 |= iParam0;
}

void func_511()
{
	int iVar0;

	if (func_66() != -1)
	{
		return;
	}
	func_176(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_341(2);
	func_461(2, iVar0, 0);
}

void func_512()
{
	int iVar0;

	if (func_66() != -1)
	{
		return;
	}
	func_176(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_341(0);
	func_461(0, iVar0, 0);
}

bool func_513(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_514(int iParam0, int iParam1)
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

bool func_515(int iParam0, int iParam1)
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

bool func_516(int iParam0, int iParam1)
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
	if (!func_514(iParam0, iVar0))
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

void func_517(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_518(int iParam0)
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

bool func_519(int iParam0, int iParam1)
{
	return false;
}

bool func_520()
{
	return false;
}

int func_521(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_89(0), joaat("UPGRADE_HEALTH_TANK_1"), false);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_89(0), joaat("UPGRADE_STAMINA_TANK_1"), false);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_89(0), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}
	return 0;
}

struct<4> /*32*/ func_522(int iParam0, int iParam1)
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

char* func_523(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_524(int iParam0)
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

char* func_525(int iParam0)
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

int func_526(int iParam0)
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

int func_527(int iParam0)
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

int func_528(int iParam0)
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

bool func_529(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_561(iParam1) && !func_562(iParam1))
	{
		bVar0 = func_563(iParam1);
	}
	else
	{
		return false;
	}
	func_564(uParam3);
	iVar5 = func_565(iParam2);
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

void func_530(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_566(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_567(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_531(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	bool bVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		bVar31 = false;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar31, false, iVar30, true);
		if (func_86(bVar31))
		{
			(*iParam1)[iVar30] = bVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_532(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_34(bVar1, 0))
		{
			func_568(bVar1, 0, bParam0);
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

void func_533(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_66() == -1)
	{
		func_569(352481484);
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
		bVar2 = Global_1946054.f_2657[iVar0];
		if (func_135(bVar2) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_570(&(Global_1946054.f_2657.f_26.f_26), bVar2, iVar0);
		}
		if (func_571(bVar2, 0))
		{
			func_572(bVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_534(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_573(bParam0))
	{
		return;
	}
	iVar0 = func_135(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar1 = func_574(bParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar1 = func_574(bParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar1 = func_574(bParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar1 = func_574(bParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar1 = func_574(bParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar1 = func_574(bParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam0 == func_575(0))
	{
		func_576(bParam0, 1);
		if (func_304() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			func_576(func_575(joaat("MPC_PLAYER_TYPE_SP_ARTHUR")), 0);
		}
		else
		{
			func_576(func_575(joaat("MPC_PLAYER_TYPE_SP_MARSTON")), 0);
		}
	}
	func_577();
	if (func_578(iVar0))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_89(0), bParam0, 0);
	}
	func_572(bParam0, bParam3);
	if (bParam2)
	{
		func_494(0, 0);
	}
}

void func_535(int iParam0, int iParam1)
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
				if (func_239((*iParam1)[iVar0]))
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

int func_536(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_537(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 -= *iParam0 & 2080374784;
	if (iParam1 < 1898)
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*iParam0 |= (1 << 31);
	}
	else
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*iParam0 -= *iParam0 & (1 << 31);
	}
}

void func_538(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= *iParam0 & 62914560;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_539(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_470(*iParam0);
	iVar1 = func_469(*iParam0);
	if (iParam1 < 1 || iParam1 > func_475(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= *iParam0 & 4063232;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_540(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= *iParam0 & 126976;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_541(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= *iParam0 & 4032;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_542(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= *iParam0 & 63;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_543(int iParam0)
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
	iVar0 = func_474(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_473(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_472(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_469(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_470(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_471(iParam0);
	if (iVar5 < 1 || iVar5 > func_475(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_544(var uParam0, int iParam1)
{
	return uParam0->f_1 & iParam1 != 0;
}

void func_545(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

bool func_546(var uParam0, int iParam1)
{
	return uParam0->f_1 & iParam1 != 0;
}

void func_547(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

void func_548(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
}

void func_549(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
}

void func_550(var uParam0, int iParam1)
{
	int iVar0;

	if (func_66() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_548(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_549(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_551(int iParam0, int iParam1, int iParam2)
{
	if (func_66() == -1)
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

void func_552(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

int func_553(int iParam0)
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

int func_554(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_555(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return false;
	}
	if (func_131(bParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_556(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return false;
	}
	if (func_131(bParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_557(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return false;
	}
	if (func_131(bParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_558(bool bParam0)
{
	if (!func_34(bParam0, 0))
	{
		return false;
	}
	if (func_131(bParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_559(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_579(iParam0);
		case 1:
			return func_580(iParam0);
		case 2:
			return func_581(iParam0);
		case 3:
			return func_582(iParam0);
	}
	return 0;
}

int func_560(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_583(iParam0);
		case 1:
			return func_584(iParam0);
		case 2:
			return func_585(iParam0);
		case 3:
			return func_586(iParam0);
		case 4:
			return func_587(iParam0);
		case 5:
			return func_588(iParam0);
		case 6:
			return func_589(iParam0);
		case 7:
			return func_590(iParam0);
		case 8:
			return func_591(iParam0);
	}
	return 0;
}

bool func_561(int iParam0)
{
	iParam0 = func_592(iParam0);
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

bool func_562(int iParam0)
{
	int iVar0;

	iParam0 = func_592(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_561(iParam0))
	{
		return false;
	}
	iVar0 = func_563(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_563(int iParam0)
{
	iParam0 = func_592(iParam0);
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

void func_564(var uParam0)
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

int func_565(int iParam0)
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

void func_566(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_567(bool bParam0, int iParam1, int iParam2, int iParam3)
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
	bVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(bParam0, iParam1, iParam2);
	return bVar2;
}

void func_568(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_135(bParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar0 = func_593(bParam0, &(Global_1946054.f_2657.f_21));
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar0 = func_593(bParam0, &(Global_1946054.f_2657.f_23));
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar0 = func_593(bParam0, &(Global_1946054.f_2657.f_20));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar0 = func_593(bParam0, &(Global_1946054.f_2657.f_22));
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar0 = func_593(bParam0, &(Global_1946054.f_2657.f_24));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar0 = func_593(bParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_577();
	}
	if (bParam1)
	{
		func_494(0, 0);
	}
}

void func_569(int iParam0)
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
	sVar2 = { func_194(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) /*18*/ };
	if (func_197(&sVar2, &iVar0, &iVar1, 0))
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
		func_87(iVar0);
	}
}

void func_570(var uParam0, bool bParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_594(iParam2, *uParam0);
	func_595(&(uParam0->f_1[*uParam0 /*5*/]), bParam1, -1, 1, 0);
	*uParam0++;
}

bool func_571(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_212(bParam0, 0, 0) /*5*/ };
	sVar5 = { func_243(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_337(bParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_89(0), &sVar5, bParam1);
	return true;
}

void func_572(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_212(bParam0, 0, 0) /*5*/ };
	sVar5 = { func_243(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_337(bParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_89(0), &sVar5, bParam1);
}

bool func_573(bool bParam0)
{
	if (func_66() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (bParam0 == joaat("CLOTHING_WINTER_OUTFIT"))
			{
				return false;
			}
		}
	}
	return true;
}

int func_574(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (Global_1946054.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_596(bVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_571(bParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = bVar1;
	if (func_135(bParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_570(&(Global_1946054.f_2657.f_26.f_26), bParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_575(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_304();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_576(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_212(bParam0, 0, 0) /*5*/ };
	sVar5 = { func_243(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_337(bParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(bParam1, func_89(0), &sVar5);
	return 1;
}

void func_577()
{
	int iVar0;

	if (func_66() == -1)
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

bool func_578(int iParam0)
{
	return func_598(func_597(iParam0));
}

int func_579(int iParam0)
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

int func_580(int iParam0)
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

int func_581(int iParam0)
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

int func_582(int iParam0)
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

int func_583(int iParam0)
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

int func_584(int iParam0)
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

int func_585(int iParam0)
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

int func_586(int iParam0)
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

int func_587(int iParam0)
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

int func_588(int iParam0)
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

int func_589(int iParam0)
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

int func_590(int iParam0)
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

int func_591(int iParam0)
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

int func_592(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_593(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (!func_596(bVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_135(bParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_599(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19--;
	*uParam1--;
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_135(bParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_599(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_571(bParam0, 1);
	return 1;
}

void func_594(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_595(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_IS_METAPED_ASSET_VALID(uParam0->f_3.f_1))
	{
		func_600(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_286(func_381(bParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = bParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_601(uParam0);
	}
}

bool func_596(bool bParam0, int iParam1)
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

int func_597(int iParam0)
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

bool func_598(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_6 & iParam0 != 0;
}

void func_599(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_602(iParam1);
	func_603(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_604(&(uParam0->f_26), iVar1);
		if (func_605(uParam0->f_26, &iVar0))
		{
			func_606(iVar0, iVar1);
		}
	}
}

void func_600(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_607(&(uParam0->f_3));
}

void func_601(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_608(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_602(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_603(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_604(var uParam0, int iParam1)
{
	*uParam0--;
	func_600(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] /*5*/ };
}

bool func_605(int iParam0, int iParam1)
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

void func_606(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_607(var uParam0)
{
	if (*uParam0 && PED::_IS_METAPED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_METAPED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_608(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_609(func_304());
	if (*uParam0)
	{
		func_607(uParam0);
	}
	uParam0->f_1 = PED::_REQUEST_METAPED_COMPONENT(iVar0, iParam1, 0, func_66() != -1, iParam2);
	*uParam0 = 1;
}

int func_609(int iParam0)
{
	if (func_66() == -1)
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

