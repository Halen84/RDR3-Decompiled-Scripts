#pragma region Local_Variables
	bool bLocal_0 = false;
	struct<629> /*5032*/ sScriptParam_0 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#pragma endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	struct<629> /*5032*/ sVar2;

	bLocal_0 = true;
	bVar0 = false;
	bVar1 = false;
	sVar2 = { sScriptParam_0 /*629*/ };
	func_1();
	while (bLocal_0)
	{
		if (func_2(1, 1))
		{
			bLocal_0 = false;
			bVar0 = true;
			bVar1 = true;
		}
		if (func_3(-1, 256, 0))
		{
			bLocal_0 = false;
			bVar0 = true;
			bVar1 = true;
		}
		if (func_5(func_4()))
		{
			bLocal_0 = false;
			bVar0 = true;
			bVar1 = true;
		}
		if (!bLocal_0)
		{
		}
		else
		{
			if (func_6(&sVar2))
			{
				bLocal_0 = false;
			}
			BUILTIN::WAIT(0);
		}
	}
	if (bVar1)
	{
		func_7(sVar2.f_611);
	}
	if (bVar0)
	{
		func_9(&sVar2, func_8(sVar2.f_611) == 2);
		func_10(&sVar2);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

bool func_2(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_11)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
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
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == joaat("EVENT_NETWORK_NETWORK_BAIL"))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_3(int iParam0, int iParam1, int iParam2)
{
	if (Global_265073.f_73815.f_273 & 8 != 0)
	{
		return true;
	}
	if (Global_1051043 != -1 && Global_1051043 != iParam0)
	{
		return true;
	}
	if (iParam1 != 0 && func_11(iParam1))
	{
		return true;
	}
	if (iParam2 != 0 && func_12(iParam2, 255))
	{
		return true;
	}
	if (Global_262777[Global_1224589 /*69*/] > 2)
	{
		return true;
	}
	if (Global_262150 >= 1)
	{
		return true;
	}
	if (func_13())
	{
		return true;
	}
	if (Global_1572887.f_6 & 1 != 0)
	{
		if (Global_1051043 == -1)
		{
			return true;
		}
	}
	if (Global_265073.f_74109 != 0 && SCRIPTS::DOES_THREAD_EXIST(Global_265073.f_74109))
	{
		return true;
	}
	return false;
}

int func_4()
{
	if (Global_1145490.f_97 <= 0)
	{
		return func_14(0);
	}
	if (Global_1145490.f_98 < 0 || Global_1145490.f_99 == 0)
	{
		return func_14(0);
	}
	return Global_1145490[Global_1145490.f_98 /*3*/].f_1;
}

bool func_5(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_6(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			func_15(uParam0);
			break;
		case 1:
			if (!func_16(uParam0))
			{
				func_17(uParam0);
				func_18(uParam0);
			}
			func_19(uParam0);
			if (!func_20(uParam0))
			{
				func_21(uParam0);
				func_22(uParam0);
			}
			break;
		case 2:
			if (!func_16(uParam0))
			{
				func_23(uParam0);
				func_18(uParam0);
			}
			func_24(uParam0);
			if (!func_20(uParam0))
			{
				func_25(uParam0);
				func_22(uParam0);
			}
			break;
		case 3:
			if (!func_16(uParam0))
			{
				func_26(uParam0);
				func_18(uParam0);
			}
			func_27(uParam0);
			if (!func_20(uParam0))
			{
				func_28(uParam0);
				func_22(uParam0);
			}
			break;
		case 4:
			if (!func_16(uParam0))
			{
				func_29(uParam0);
				func_18(uParam0);
			}
			func_30(uParam0);
			if (!func_20(uParam0))
			{
				func_31(uParam0);
				func_22(uParam0);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_7(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1887078.f_1696[iVar0 /*2*/] == -1)
		{
		}
		else if (Global_1887078.f_1696[iVar0 /*2*/] == iParam0)
		{
			Global_1887078.f_1696[iVar0 /*2*/] = -1;
			Global_1887078.f_1696[iVar0 /*2*/].f_1 = 0;
		}
		else
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1887078.f_1682[iVar0 /*13*/].f_8 == -1)
		{
		}
		else if (Global_1887078.f_1682[iVar0 /*13*/].f_8 == iParam0)
		{
			func_32(&(Global_1887078.f_1682[iVar0 /*13*/]), 9);
		}
		iVar0++;
	}
	if (Global_1224589.f_10 != Global_1224589)
	{
		Global_1887078.f_1720 = -1;
	}
}

int func_8(int iParam0)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1887078.f_1682[iVar0 /*13*/].f_8 != iParam0)
		{
		}
		else
		{
			return Global_1887078.f_1682[iVar0 /*13*/].f_7;
		}
		iVar0++;
	}
	return -1;
}

void func_9(var uParam0, bool bParam1)
{
	Global_1887078.f_1682[uParam0->f_612 /*13*/].f_12 = 0;
	func_33(uParam0, bParam1);
	func_34(uParam0);
	func_35();
	func_36(0);
	if (func_37(uParam0->f_5, 64))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		ENTITY::SET_ENTITY_PROOFS(Global_1224589.f_3, 0, false);
	}
	if (Global_1048580)
	{
		func_38(0);
	}
}

void func_10(var uParam0)
{
	struct<6> /*48*/ sVar0;

	*uParam0 = { sVar0 /*6*/ };
}

bool func_11(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1146476.f_1 & iParam0 != 0;
}

bool func_12(int iParam0, int iParam1)
{
	if (!Global_1058888.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return Global_1146091[iParam1 /*12*/] & iParam0 != 0;
}

bool func_13()
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

var func_14(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_15(var uParam0)
{
	func_39(uParam0);
}

bool func_16(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_2, *uParam0);
}

void func_17(var uParam0)
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	if (uParam0->f_609 <= 0)
	{
		uParam0->f_609 = 150;
	}
}

void func_18(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_2), *uParam0);
}

void func_19(var uParam0)
{
	func_39(uParam0);
}

bool func_20(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_3, *uParam0);
}

void func_21(var uParam0)
{
	Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 0;
}

void func_22(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_3), *uParam0);
}

void func_23(var uParam0)
{
	uParam0->f_602 = 0;
}

void func_24(var uParam0)
{
	bool bVar0;

	if (!uParam0->f_602)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uParam0->f_602 = 1;
			return;
		}
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_34(uParam0);
		func_40(uParam0);
		func_41(uParam0, 1);
		uParam0->f_602 = 0;
		return;
	}
	else
	{
		return;
	}
	bVar0 = true;
	if (!func_42(uParam0))
	{
		bVar0 = false;
		if (func_43())
		{
			Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 1;
			func_41(uParam0, 4);
			return;
		}
	}
	if (!func_44(uParam0))
	{
		bVar0 = false;
		if (func_43())
		{
			Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 1;
			func_41(uParam0, 4);
			return;
		}
	}
	if (uParam0->f_600)
	{
		if (bVar0)
		{
			bVar0 = func_45(uParam0);
		}
		if (bVar0)
		{
			if (!func_37(uParam0->f_5, 4))
			{
				func_46(&(uParam0->f_5), 4);
				CAM::DO_SCREEN_FADE_OUT(2000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				ENTITY::SET_ENTITY_PROOFS(Global_1224589.f_3, 127, false);
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(Global_1224589.f_3, true, false, 256);
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
				func_46(&(uParam0->f_5), 64);
			}
		}
	}
	if (((bVar0 && func_37(uParam0->f_5, 4)) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
	{
		func_39(uParam0);
	}
}

void func_25(var uParam0)
{
	int iVar0;

	uParam0->f_267 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam0->f_267.f_4[uParam0->f_603 /*26*/], uParam0->f_267.f_4[uParam0->f_603 /*26*/].f_3, 51.2f, true, 2);
	uParam0->f_267.f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam0->f_267.f_4[uParam0->f_603 /*26*/].f_6, uParam0->f_267.f_4[uParam0->f_603 /*26*/].f_9, 51.2f, func_37(uParam0->f_267.f_4[uParam0->f_603 /*26*/].f_25, 1), 2);
	if (PED::IS_PED_ON_MOUNT(Global_1224589.f_3))
	{
		uParam0->f_613 = PED::GET_MOUNT(Global_1224589.f_3);
	}
	else
	{
		iVar0 = PED::_GET_LAST_MOUNT(Global_1224589.f_3);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && func_47(iVar0, Global_1224589.f_3, 1, 1) < 25.0f)
		{
			uParam0->f_613 = iVar0;
		}
		else
		{
			return;
		}
	}
	uParam0->f_614 = 1;
}

void func_26(var uParam0)
{
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	func_36(1);
	func_38(1);
	if (Global_1224589.f_10 == Global_1224589)
	{
		Global_1055058[Global_1224589 /*116*/].f_15.f_6 = 3;
	}
}

void func_27(var uParam0)
{
	if (func_48(uParam0))
	{
		uParam0->f_603++;
	}
	func_49(uParam0);
	func_50();
	if (uParam0->f_603 == 10 || uParam0->f_603 >= uParam0->f_604)
	{
		Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 1;
		func_39(uParam0);
	}
}

void func_28(var uParam0)
{
	func_38(0);
	if (Global_1224589.f_10 == Global_1224589)
	{
		Global_1055058[Global_1224589 /*116*/].f_15.f_6 = 6;
	}
}

void func_29(var uParam0)
{
}

void func_30(var uParam0)
{
	if (((func_51() || STREAMING::_0x99F92061EFE908BA()) || func_52(Global_1935630, (1 << 14))) || func_53(Global_1224589))
	{
		func_39(uParam0);
		return;
	}
	if (uParam0->f_601)
	{
		func_39(uParam0);
		return;
	}
	if (CAM::IS_SCREEN_FADING_OUT())
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(2000);
	}
	func_39(uParam0);
}

void func_31(var uParam0)
{
	if (Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10)
	{
		if (func_54(uParam0->f_605))
		{
			func_55(uParam0->f_605, 0, PLAYER::PLAYER_ID(), 0);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_626)))
	{
		HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_626));
	}
	func_9(uParam0, 0);
}

void func_32(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return;
	}
	*uParam0 = iParam1;
}

void func_33(var uParam0, bool bParam1)
{
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_267))
	{
		CAM::DESTROY_CAM(uParam0->f_267, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_267.f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_267.f_1, false);
	}
	if (bParam1)
	{
		if (((func_51() || STREAMING::_0x99F92061EFE908BA()) || func_52(Global_1935630, (1 << 14))) || func_53(Global_1224589))
		{
		}
		else
		{
			CAM::DO_SCREEN_FADE_IN(2000);
		}
	}
}

void func_34(var uParam0)
{
	func_56(uParam0);
	func_57(uParam0);
}

void func_35()
{
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::LOAD_SCENE_STOP();
	}
}

void func_36(bool bParam0)
{
	NETWORK::SET_LOCAL_PLAYER_AS_GHOST(bParam0);
}

bool func_37(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_38(int iParam0)
{
	Global_1048580 = iParam0;
}

void func_39(var uParam0)
{
	int iVar0;

	uParam0->f_1 = *uParam0;
	MISC::SET_BIT(&(uParam0->f_3), uParam0->f_1);
	MISC::CLEAR_BIT(&(uParam0->f_2), uParam0->f_1);
	iVar0 = *uParam0;
	iVar0++;
	*uParam0 = iVar0;
	if (*uParam0 == 6)
	{
		*uParam0 = 5;
	}
	func_58(uParam0->f_611, *uParam0);
}

void func_40(var uParam0)
{
	uParam0->f_5 = 0;
	uParam0->f_4 = 0;
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_1 = *uParam0;
	MISC::SET_BIT(&(uParam0->f_3), uParam0->f_1);
	MISC::CLEAR_BIT(&(uParam0->f_2), uParam0->f_1);
	*uParam0 = iParam1;
	if (*uParam0 == 6)
	{
		*uParam0 = 5;
	}
	func_58(uParam0->f_611, *uParam0);
}

bool func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_59();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (uParam0->f_6[iVar1 /*130*/].f_10)
		{
			iVar0 = uParam0->f_6[iVar1 /*130*/];
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar0 == func_59())
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar2 = BUILTIN::ROUND(func_47(iVar0, Global_1224589.f_3, 1, 1));
	if (iVar2 >= uParam0->f_609)
	{
		Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 0;
		uParam0->f_601 = 1;
		func_41(uParam0, 4);
		return false;
	}
	return true;
}

bool func_43()
{
	if (Global_1224589.f_10 == Global_1224589)
	{
		return false;
	}
	if (Global_1224589.f_10 >= 32 || Global_1224589.f_10 < 0)
	{
		return false;
	}
	if (Global_1055058[Global_1224589.f_10 /*116*/].f_15.f_6 == 3)
	{
		return true;
	}
	return false;
}

bool func_44(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;

	iVar0 = 0;
	bVar1 = true;
	bVar2 = true;
	if (!func_37(uParam0->f_5, 16))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (uParam0->f_532[iVar0 /*12*/] == 0)
			{
			}
			else
			{
				PROPSET::_REQUEST_PROP_SET(uParam0->f_532[iVar0 /*12*/]);
				if (!PROPSET::_HAS_PROP_SET_LOADED(uParam0->f_532[iVar0 /*12*/]))
				{
					bVar1 = false;
				}
				else
				{
					uParam0->f_532[iVar0 /*12*/].f_8 = PROPSET::_CREATE_PROP_SET(uParam0->f_532[iVar0 /*12*/], uParam0->f_532[iVar0 /*12*/].f_1, uParam0->f_532[iVar0 /*12*/].f_7, uParam0->f_532[iVar0 /*12*/].f_4.f_2, 1.0f, false, false);
					if (!PROPSET::DOES_PROP_SET_EXIST(uParam0->f_532[iVar0 /*12*/].f_8))
					{
						bVar1 = false;
						Jump @194; // curOff = 176
					}
					else
					{
						uParam0->f_610++;
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar1)
	{
		if (!func_37(uParam0->f_5, 16))
		{
			func_46(&(uParam0->f_5), 16);
		}
	}
	if (!func_37(uParam0->f_5, 16))
	{
		return false;
	}
	iVar0 = 0;
	if (!func_37(uParam0->f_5, 32))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (uParam0->f_532[iVar0 /*12*/] == 0)
			{
			}
			else if (!PROPSET::DOES_PROP_SET_EXIST(uParam0->f_532[iVar0 /*12*/].f_8))
			{
			}
			else if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_532[iVar0 /*12*/].f_10))
			{
			}
			else
			{
				vVar3 = { 15.0f, 15.0f, 15.0f /*3*/ };
				vVar6 = { 0.0f, 0.0f, 0.0f /*3*/ };
				iVar9 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_532[iVar0 /*12*/].f_1, vVar6, vVar3, &(uParam0->f_618));
				uParam0->f_532[iVar0 /*12*/].f_10 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iVar9, false, 7);
				if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_532[iVar0 /*12*/].f_10))
				{
				}
				else
				{
					bVar2 = false;
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (uParam0->f_532[iVar0 /*12*/] == 0)
			{
			}
			else
			{
				func_60(uParam0->f_532[iVar0 /*12*/].f_1, 15.0f, 0);
			}
			iVar0++;
		}
		if (!func_37(uParam0->f_5, 32))
		{
			func_46(&(uParam0->f_5), 32);
		}
	}
	return func_37(uParam0->f_5, 32);
}

bool func_45(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_59();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_6[iVar0 /*130*/].f_10)
		{
			iVar1 = uParam0->f_6[iVar0 /*130*/];
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == func_59())
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1224589.f_10 == Global_1224589 || !GANG::NETWORK_IS_GANG_ACTIVE(Global_1224589.f_9))
	{
		if (Global_1887078.f_1682[uParam0->f_612 /*13*/].f_12)
		{
			func_46(&(uParam0->f_5), 8);
			func_61(uParam0->f_6[iVar0 /*130*/].f_13, 0, 0);
			func_62(uParam0->f_6[iVar0 /*130*/].f_13, 0, 0);
			MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(iVar1);
			func_63();
		}
	}
	else if (GANG::NETWORK_IS_GANG_ACTIVE(Global_1224589.f_9))
	{
		if (Global_1224589.f_10 >= 32 || Global_1224589.f_10 < 0)
		{
			return false;
		}
		if (!func_37(uParam0->f_5, 8))
		{
			if (Global_1055058[Global_1224589.f_10 /*116*/].f_15.f_6 == 3)
			{
				if (ENTITY::IS_ENTITY_DEAD(Global_1224589.f_3))
				{
					Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 1;
					func_41(uParam0, 4);
					return false;
				}
				func_46(&(uParam0->f_5), 8);
			}
		}
	}
	return func_37(uParam0->f_5, 8);
}

void func_46(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

float func_47(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0.0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

bool func_48(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3[2];
	int iVar6;
	int iVar7;

	iVar0 = uParam0->f_603;
	bVar1 = false;
	if (iVar0 + 1 == uParam0->f_604)
	{
		bVar1 = true;
	}
	iVar2 = func_64(uParam0->f_603);
	if (!func_37(uParam0->f_4, iVar2))
	{
		if (CAM::IS_SCREEN_FADING_OUT())
		{
			return false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_6[iVar0 /*130*/].f_120[0 /*3*/])))
		{
			if (func_65(&(uParam0->f_6[iVar0 /*130*/].f_19), uParam0->f_6[iVar0 /*130*/].f_120[0 /*3*/], 1, 0, 0, 0))
			{
			}
		}
		CAM::SET_CAM_PARAMS(uParam0->f_267, uParam0->f_267.f_4[iVar0 /*26*/], uParam0->f_267.f_4[iVar0 /*26*/].f_3, 51.2f, 0, 1, 1, 2, 1, 0);
		CAM::SET_CAM_PARAMS(uParam0->f_267.f_1, uParam0->f_267.f_4[iVar0 /*26*/].f_6, uParam0->f_267.f_4[iVar0 /*26*/].f_9, 51.2f, 0, 1, 1, 2, 1, 0);
		CAM::SET_CAM_ACTIVE(uParam0->f_267, true);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(2000);
		}
		if (func_37(uParam0->f_267.f_4[iVar0 /*26*/].f_25, 2))
		{
			if (func_66(Global_1224589))
			{
				iVar3[0] = func_67(&(uParam0->f_267.f_4[iVar0 /*26*/].f_16[0 /*4*/]), 10000, 0, 0, 0, 1);
				uParam0->f_267.f_4[iVar0 /*26*/].f_13[0] = iVar3[0];
			}
			else
			{
				iVar3[1] = func_67(&(uParam0->f_267.f_4[iVar0 /*26*/].f_16[1 /*4*/]), 10000, 0, 0, 0, 1);
				uParam0->f_267.f_4[iVar0 /*26*/].f_13[1] = iVar3[0];
			}
		}
		else
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 2)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_267.f_4[iVar0 /*26*/].f_16[iVar6 /*4*/])))
				{
				}
				else
				{
					iVar3[iVar6] = func_67(&(uParam0->f_267.f_4[iVar0 /*26*/].f_16[iVar6 /*4*/]), 10000, 0, 0, 0, 1);
					uParam0->f_267.f_4[iVar0 /*26*/].f_13[iVar6] = iVar3[0];
				}
				iVar6++;
			}
		}
		if (func_37(uParam0->f_267.f_4[iVar0 /*26*/].f_25, 1))
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_267.f_1, uParam0->f_267, 8000, 1, 1);
		}
		uParam0->f_267.f_3 = MISC::GET_GAME_TIMER();
		func_46(&(uParam0->f_4), iVar2);
	}
	else
	{
		iVar7 = uParam0->f_267.f_4[iVar0 /*26*/].f_12 + 2000;
		if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_267.f_1) && (MISC::GET_GAME_TIMER() - uParam0->f_267.f_3) >= iVar7)
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
			{
				if (bVar1 || func_37(uParam0->f_267.f_4[iVar0 /*26*/].f_25, 4))
				{
					CAM::DO_SCREEN_FADE_OUT(2000);
				}
			}
			if (bVar1)
			{
				func_56(uParam0);
			}
			if (func_37(uParam0->f_267.f_4[iVar0 /*26*/].f_25, 8))
			{
				if (!func_68(uParam0))
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

void func_49(var uParam0)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_614 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_613))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_613))
	{
		return;
	}
	if (func_69(uParam0->f_615))
	{
		uParam0->f_614 = 0;
		return;
	}
	if (func_47(uParam0->f_613, Global_1224589.f_3, 1, 1) > 25.0f)
	{
		uParam0->f_614 = 0;
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_613))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_613);
		return;
	}
	switch (uParam0->f_614)
	{
		case 1:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_613, 0.0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_613, false);
			if (PED::IS_PED_FULLY_ON_MOUNT(Global_1224589.f_3, true))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_613, true, false);
				TASK::CLEAR_PED_TASKS(Global_1224589.f_3, true, false);
			}
			TASK::TASK_DISMOUNT_ANIMAL(Global_1224589.f_3, 16, 0, 0, 0, 0);
			uParam0->f_614 = 2;
			break;
		case 2:
			iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Global_1224589.f_3, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL"), false);
			if (iVar0 == 1)
			{
				return;
			}
			else if (iVar0 == 7)
			{
				uParam0->f_614 = 1;
				return;
			}
			uParam0->f_614 = 3;
			break;
		case 3:
			if (TASK::_0x9FF5F9B24E870748(uParam0->f_613))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_613, true, false);
			}
			TASK::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_613, uParam0->f_615, 1.5f, 20000, 40000.0f, 0.5f, 0);
			uParam0->f_614 = 4;
			break;
		case 4:
			iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_613, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), false);
			if (iVar0 != 8)
			{
				return;
			}
			uParam0->f_614 = 5;
			break;
		case 5:
			fVar1 = func_70(uParam0->f_613, uParam0->f_615, 1);
			if (fVar1 > 1.0f)
			{
				uParam0->f_614 = 3;
				return;
			}
			uParam0->f_614 = 0;
			break;
	}
}

void func_50()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == Global_1224589)
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else
			{
				ENTITY::_0x80FDEB3A9E9AA578(PLAYER::GET_PLAYER_PED(iVar1), false);
			}
		}
		iVar0++;
	}
}

bool func_51()
{
	return func_52(Global_1935630, (1 << 12));
}

bool func_52(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_53(int iParam0)
{
	return func_71(1, iParam0);
}

bool func_54(int iParam0)
{
	return iParam0 != 0;
}

int func_55(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;

	return func_72(iParam0, &uVar0, iParam1, iParam2, iParam3);
}

void func_56(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_6[iVar0 /*130*/] == func_59())
		{
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6[iVar0 /*130*/]))
		{
		}
		else
		{
			func_73(&(uParam0->f_6[iVar0 /*130*/]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[iVar0 /*130*/].f_1);
		}
		iVar0++;
	}
}

void func_57(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (uParam0->f_532[iVar0 /*12*/] == 0)
		{
		}
		else
		{
			if (PROPSET::DOES_PROP_SET_EXIST(uParam0->f_532[iVar0 /*12*/].f_8))
			{
				PROPSET::_DELETE_PROP_SET(uParam0->f_532[iVar0 /*12*/].f_8, true, true);
			}
			if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_532[iVar0 /*12*/].f_10))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_532[iVar0 /*12*/].f_10, false);
			}
		}
		iVar0++;
	}
}

void func_58(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1887078.f_1682[iVar0 /*13*/].f_8 != iParam0)
		{
		}
		else
		{
			Global_1887078.f_1682[iVar0 /*13*/].f_7 = uParam1;
		}
		else
		{
			iVar0++;
		}
	}
}

int func_59()
{
	return -1;
}

void func_60(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_61(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_74(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	if (bParam1)
	{
		func_76(iParam0, 4);
		func_77(iVar0, 1);
		func_78(iVar0, 1);
	}
	else
	{
		func_79(iParam0, 4);
		func_78(iVar0, 0);
	}
}

void func_62(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_74(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	func_77(iVar0, bParam1);
}

void func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1224589.f_10 == Global_1224589 && iVar0 == Global_1224589)
		{
			Global_1055058[Global_1224589.f_10 /*116*/].f_15.f_8[0] = iVar2;
		}
		else
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				if (GANG::_NETWORK_IS_IN_MY_GANG(iVar2))
				{
					if (iVar1 >= 7)
					{
					}
					else
					{
						Global_1055058[Global_1224589.f_10 /*116*/].f_15.f_8[iVar1] = iVar2;
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		default:
			return 0;
			return 1;
		case 1:
			return 4;
		case 2:
			return 16;
		case 3:
			return 64;
		case 4:
			return 256;
		case 5:
			return (1 << 10);
		case 6:
			return (1 << 12);
		case 7:
			return (1 << 14);
		case 8:
			return (1 << 16);
		case 9:
			return (1 << 18);
	}
}

bool func_65(var uParam0, Vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_80(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_66(int iParam0)
{
	int iVar0;

	iVar0 = func_81(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return func_82(&(Global_1131585.f_12.f_3719.f_772[iVar0 /*4*/]), 1);
}

int func_67(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> /*32*/ sVar0;
	struct<2> /*16*/ sVar13;
	int iVar15;

	sVar0 = -2;
	sVar0.f_0 = iParam1;
	sVar0.f_1 = iParam2;
	sVar0.f_2 = iParam3;
	sVar0.f_3 = iParam4;
	sVar13.f_1 = uParam0;
	iVar15 = UIFEED::_UI_FEED_POST_HELP_TEXT(&sVar0, &sVar13, bParam5);
	return iVar15;
}

bool func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	switch (uParam0->f_546.f_3)
	{
		case 0:
			if (CAM::IS_SCREEN_FADING_OUT())
			{
			}
			else
			{
				if (GANG::NETWORK_IS_GANG_ACTIVE(Global_1224589.f_9) && Global_1224589.f_10 == Global_1224589)
				{
					uParam0->f_546 = 0;
				}
				else
				{
					if (!GANG::NETWORK_IS_GANG_ACTIVE(Global_1224589.f_9))
					{
						uParam0->f_546 = 0;
					}
					else if (Global_1224589.f_10 >= 32 || Global_1224589.f_10 < 0)
					{
						uParam0->f_546 = 0;
					}
					if (uParam0->f_546 == -1)
					{
						if (Global_1224589.f_10 >= 32 || Global_1224589.f_10 < 0)
						{
							return false;
						}
						iVar0 = 0;
						while (iVar0 < 7)
						{
							if (Global_1055058[Global_1224589.f_10 /*116*/].f_15.f_8[iVar0] != PLAYER::PLAYER_ID())
							{
							}
							else
							{
								uParam0->f_546 = iVar0;
							}
							else
							{
								iVar0++;
							}
						}
					}
				}
				if (uParam0->f_546 == -1)
				{
					uParam0->f_546 = 0;
				}
				uParam0->f_546.f_3 = 1;
				Jump @759; // curOff = 271
				if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
				{
					STREAMING::LOAD_SCENE_START_SPHERE(uParam0->f_546.f_4[uParam0->f_546 /*7*/], 10.0f, 0);
					uParam0->f_546.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
				}
				else
				{
					if (STREAMING::IS_LOAD_SCENE_LOADED())
					{
						STREAMING::LOAD_SCENE_STOP();
						uParam0->f_546.f_3 = 2;
					}
					if ((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_546.f_1) > 10)
					{
						STREAMING::LOAD_SCENE_STOP();
						uParam0->f_546.f_3 = 2;
					}
				}
				Jump @759; // curOff = 371
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_1224589.f_3, uParam0->f_546.f_4[uParam0->f_546 /*7*/], uParam0->f_546.f_4[uParam0->f_546 /*7*/].f_3.f_2, true, false, true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
				uParam0->f_546.f_2 = NETWORK::GET_CLOUD_TIME_AS_INT();
				uParam0->f_546.f_3 = 3;
				Jump @759; // curOff = 460
				if (!GANG::NETWORK_IS_GANG_ACTIVE(Global_1224589.f_9))
				{
					uParam0->f_546.f_3 = 4;
				}
				else
				{
					if (Global_1055058[Global_1224589 /*116*/].f_15.f_7 != 1)
					{
						Global_1055058[Global_1224589 /*116*/].f_15.f_7 = 1;
					}
					if ((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_546.f_2) > 5)
					{
						uParam0->f_546.f_3 = 4;
					}
					else
					{
						if (Global_1224589.f_10 < 32 && Global_1224589.f_10 >= 0)
						{
							if (Global_1224589.f_10 == Global_1224589)
							{
								bVar3 = true;
								iVar1 = 0;
								while (iVar1 < 32)
								{
									if (iVar1 == Global_1224589)
									{
									}
									else
									{
										iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
										if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
										{
											if (GANG::_NETWORK_IS_IN_MY_GANG(iVar2))
											{
												if (Global_1055058[iVar1 /*116*/].f_15.f_7 != 1)
												{
													bVar3 = false;
												}
												else
												{
													iVar1++;
												}
												if (bVar3)
												{
													Global_1055058[Global_1224589 /*116*/].f_15.f_7 = 2;
													uParam0->f_546.f_3 = 4;
												}
												else
												{
													if (Global_1055058[Global_1224589.f_10 /*116*/].f_15.f_7 == 2)
													{
														uParam0->f_546.f_3 = 4;
													}
													Jump @759; // curOff = 727
													if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
													{
														CAM::DO_SCREEN_FADE_IN(2000);
													}
													return true;
												}
												return false;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_69(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

float func_70(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_71(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_83(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_84())
	{
		return func_83(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_83(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

int func_72(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> /*120*/ sVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
	{
		return 1;
	}
	LOCAL_STORE_S(&uVar0, iParam0);
	if (!NETWORK::_0x271F95E55C663B8B(&uVar0, uParam1))
	{
		return 0;
	}
	sVar1.f_1 = 10;
	sVar1.f_14 = 255;
	sVar1.f_12 = iParam2;
	sVar1.f_14 = iParam3;
	sVar1.f_13 = iParam4;
	func_85(uParam1, iParam0, sVar1);
	return 1;
}

void func_73(int* iParam0)
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

bool func_74(int iParam0)
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

int func_75(int iParam0)
{
	return iParam0;
}

void func_76(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_77(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_86(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_78(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_79(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_80(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_81(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return Global_1139587[iParam0 /*19*/].f_1.f_1;
}

bool func_82(var uParam0, int iParam1)
{
	return uParam0->f_3 & iParam1 != 0;
}

bool func_83(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_84()
{
	return Global_1109000.f_245;
}

void func_85(var uParam0, int iParam1, struct<15> /*120*/ sParam2)
{
	int iVar0;
	struct<22> /*176*/ sVar1;

	if (!func_87(uParam0))
	{
		return;
	}
	if (Global_1223409 < 20)
	{
		Global_1223409++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223409.f_1[iVar0 /*22*/] = { Global_1223409.f_1[iVar0 + 1 /*22*/] /*22*/ };
			iVar0++;
		}
	}
	sVar1.f_7.f_1 = 10;
	sVar1.f_7.f_14 = 255;
	sVar1 = { *uParam0 /*4*/ };
	sVar1.f_4 = iParam1;
	sVar1.f_7 = { sParam2 /*15*/ };
	sVar1.f_6 = 1;
	Global_1223409.f_1[(Global_1223409 - 1) /*22*/] = { sVar1 /*22*/ };
}

bool func_86(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

bool func_87(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

