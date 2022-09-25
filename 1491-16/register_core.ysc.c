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
	struct<14> /*112*/ sLocal_14 = { 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_28 = 1;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#pragma endregion

void __EntryFunction__()
{
	Vector3 vVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	sLocal_14.f_12 = sScriptParam_0.f_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&sLocal_14);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(sScriptParam_0.f_1))
	{
		sLocal_14.f_2 = sScriptParam_0.f_1;
		sLocal_14.f_1 = TASK::_GET_SCENARIO_POINT_ENTITY(sLocal_14.f_2);
	}
	else
	{
		func_1(&sLocal_14);
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(sLocal_14.f_1, false, false) /*3*/ };
	if (!func_2(vVar0))
	{
		func_1(&sLocal_14);
	}
	while (true)
	{
		sLocal_14.f_13++;
		if (sLocal_14.f_13 >= 30)
		{
			sLocal_14.f_13 = 0;
			if (Global_1935630.f_12)
			{
				func_3(&sLocal_14, 5);
			}
		}
		if (func_4(Global_1935630, (1 << 21)))
		{
			func_3(&sLocal_14, 5);
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			func_1(&sLocal_14);
		}
		switch (func_5(&sLocal_14))
		{
			case 0:
				if (func_6(&sLocal_14))
				{
					func_7(&sLocal_14);
					func_8(&sLocal_14);
				}
				if (TASK::DOES_SCENARIO_POINT_EXIST(sLocal_14.f_2))
				{
					if (func_9(Global_36) & func_10(&sLocal_14))
					{
						func_3(&sLocal_14, 1);
					}
				}
				else
				{
					func_3(&sLocal_14, 5);
				}
				break;
			case 1:
				if (func_6(&sLocal_14))
				{
					func_8(&sLocal_14);
				}
				if (func_11(&sLocal_14))
				{
					func_3(&sLocal_14, 2);
				}
				break;
			case 2:
				if (func_6(&sLocal_14))
				{
					func_8(&sLocal_14);
				}
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_1))
				{
					if (func_12(&sLocal_14))
					{
						func_3(&sLocal_14, 3);
					}
				}
				break;
			case 3:
				if (func_6(&sLocal_14))
				{
					func_13(&sLocal_14);
					func_14(&sLocal_14);
					func_8(&sLocal_14);
				}
				if (func_15(sLocal_14.f_11))
				{
					func_3(&sLocal_14, 4);
				}
				break;
			case 4:
				if (func_6(&sLocal_14))
				{
					func_8(&sLocal_14);
				}
				break;
			case 5:
				func_1(&sLocal_14);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;

	SCRIPTS::_0xE7282390542F570D(uParam0->f_12);
	iVar0 = 0;
	while (iVar0 < uParam0->f_7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_7[iVar0]));
		}
		iVar0++;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_11);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (func_16(vParam0, iVar0))
		{
			if (func_17(iVar0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_3(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_18(uParam0);
}

bool func_4(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_5(var uParam0)
{
	return *uParam0;
}

bool func_6(var uParam0)
{
	return uParam0->f_14;
}

void func_7(var uParam0)
{
	uParam0->f_3[0] = joaat("P_CS_BILLSINGLE01BX");
	uParam0->f_3[1] = joaat("P_CS_BILLSINGLE01BX");
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
	{
		uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@shoprobberies@GLOBAL@EVENT_OPEN_REGISTER@BASE", 2, 0, false, true);
	}
}

void func_8(var uParam0)
{
	uParam0->f_14 = 0;
}

int func_9(Vector3 vParam0)
{
	int iVar0;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_10(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		iVar1 = uParam0->f_3[iVar0];
		if (iVar1 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar1, false);
		}
		iVar0++;
	}
	if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_11, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_11, "pblMain"))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_11, "pblMain"))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_11, "pblMain");
		}
		return 0;
	}
	return 1;
}

bool func_11(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		iVar1 = uParam0->f_3[iVar0];
		if (iVar1 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar1))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false))
	{
		return false;
	}
	return true;
}

bool func_12(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_1, "register_open"))
	{
		return false;
	}
	return DECORATOR::DECOR_GET_BOOL(uParam0->f_1, "register_open");
}

void func_13(var uParam0)
{
	Vector3 vVar0;

	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0.074814f, -0.117756f, 0.059386f) /*3*/ };
	uParam0->f_7[0] = OBJECT::CREATE_OBJECT(uParam0->f_3[0], vVar0, true, true, false, false, true);
	TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam0->f_2, uParam0->f_7[0], "OOXO", true);
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -0.082664f, -0.117757f, 0.059386f) /*3*/ };
	uParam0->f_7[1] = OBJECT::CREATE_OBJECT(uParam0->f_3[1], vVar0, true, true, false, false, true);
	TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam0->f_2, uParam0->f_7[1], "OXOO", true);
}

void func_14(var uParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), ENTITY::GET_ENTITY_ROTATION(uParam0->f_1, 2), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "OOXO", uParam0->f_7[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "OXOO", uParam0->f_7[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "REGISTER", uParam0->f_1, 0);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_11);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_11, "pblMain", true);
}

bool func_15(int iParam0)
{
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0) >= 1.0f)
	{
		return true;
	}
	return false;
}

bool func_16(Vector3 vParam0, int iParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iParam3 /*446*/].f_25))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(Global_1914319.f_3[iParam3 /*446*/].f_25, vParam0);
}

bool func_17(int iParam0)
{
	int iVar0;

	if (iParam0 > 25)
	{
		return false;
	}
	iVar0 = func_20(func_19(), iParam0);
	switch (iVar0)
	{
		case 41:
		case 82:
			return true;
	}
	switch (iParam0)
	{
		case -1:
		case 1:
		case 2:
		case 4:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return false;
	}
	return true;
}

void func_18(var uParam0)
{
	uParam0->f_14 = 1;
}

int func_19()
{
	return Global_1894899.f_2;
}

int func_20(int iParam0, int iParam1)
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

