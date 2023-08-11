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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0.0f;
	float fLocal_28 = 0.0f;
	float fLocal_29 = 0.0f;
	var uLocal_30 = 0;
	bool bLocal_31 = false;
	Vector3 vLocal_32 = { 0.0f, 0.0f, 0.0f };
	float fLocal_35 = 0.0f;
	struct<12> /*96*/ sLocal_36[1];
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_20 = joaat("S_UFO01X");
	fLocal_27 = 15.0f;
	fLocal_28 = 0.0f;
	fLocal_29 = 0.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
	}
	while (true)
	{
		switch (iLocal_14)
		{
			case 0:
				iLocal_14 = 1;
				break;
			case 1:
				if (func_2())
				{
					iLocal_14 = 2;
				}
				break;
			case 2:
				func_1();
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	if (bLocal_31)
	{
		return;
	}
	OBJECT::DELETE_OBJECT(&(sLocal_36[0 /*12*/].f_8));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if (func_3() != -1)
	{
		return true;
	}
	if (func_4(128, 0, 1))
	{
		return true;
	}
	switch (iLocal_15)
	{
		case 0:
			if (func_6(func_5()))
			{
				return true;
			}
			STREAMING::REQUEST_MODEL(iLocal_20, false);
			sLocal_36[0 /*12*/].f_7 = iLocal_20;
			sLocal_36[0 /*12*/] = { func_7() /*3*/ };
			sLocal_36[0 /*12*/].f_10 = 0;
			iLocal_15 = 1;
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iLocal_20))
			{
				iLocal_15 = 2;
			}
			break;
		case 2:
			func_8(0.0f, 0.0f, 0.0f, &sLocal_36, 0, 0, 0, -1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(sLocal_36[0 /*12*/].f_8, true);
			ENTITY::SET_ENTITY_VISIBLE(sLocal_36[0 /*12*/].f_8, false);
			iLocal_15 = 3;
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return false;
			}
			if (func_9())
			{
				iLocal_15 = 4;
				return true;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_3()
{
	return Global_1572887.f_12;
}

bool func_4(int iParam0, bool bParam1, bool bParam2)
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
		if (func_10())
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
		iVar0 = func_11(Global_1898164.f_1[0 /*5*/]);
		if (func_12(iVar0) && func_13(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_14(Global_1898164.f_1[0 /*5*/]))
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

int func_5()
{
	return 0;
}

bool func_6(int iParam0)
{
	return func_15(iParam0, 2);
}

Vector3 func_7()
{
	return { -1947.076f, -128.2895f, 500.0f };
}

int func_8(Vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	Vector3 vVar5;
	int iVar8;
	Vector3 vVar9;

	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *uParam3)
	{
		iParam7 = (*uParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST((uParam3[iVar0 /*12*/])->f_8))
		{
		}
		else if ((uParam3[iVar0 /*12*/])->f_7 != 0 && !func_16((uParam3[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED((uParam3[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((uParam3[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = (uParam3[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((uParam3[iVar8 /*12*/])->f_8, *(uParam3[iVar0 /*12*/])) /*3*/ };
					if (func_16((uParam3[iVar0 /*12*/])->f_11, 64))
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam3[iVar0 /*12*/])->f_8, (uParam3[iVar8 /*12*/])->f_8, 0, *(uParam3[iVar0 /*12*/]), (uParam3[iVar0 /*12*/])->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_16((uParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam4, *(uParam3[iVar0 /*12*/])) /*3*/ };
					}
					else
					{
						vVar5 = { *(uParam3[iVar0 /*12*/]) /*3*/ };
					}
					if (!func_16((uParam3[iVar0 /*12*/])->f_11, 128))
					{
						func_17(&vVar5, (uParam3[iVar0 /*12*/])->f_10);
					}
					if (func_16((uParam3[iVar0 /*12*/])->f_11, 64))
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_18((uParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0.0f, 0.0f, (uParam3[iVar0 /*12*/])->f_3 /*3*/ };
					}
					else
					{
						vVar1 = { (uParam3[iVar0 /*12*/])->f_4 /*3*/ };
					}
					if (func_16((uParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_19((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((uParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_16((uParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((uParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY((uParam3[iVar0 /*12*/])->f_8, false);
						}
					}
				}
				if (func_16((uParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((uParam3[iVar0 /*12*/])->f_8, true);
				}
				if (func_16((uParam3[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE((uParam3[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((uParam3[iVar0 /*12*/])->f_8, true);
					PHYSICS::ACTIVATE_PHYSICS((uParam3[iVar0 /*12*/])->f_8);
				}
				ENTITY::_SET_ENTITY_FADE_IN((uParam3[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS((uParam3[iVar0 /*12*/])->f_8, true, false) /*3*/ };
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_9()
{
	func_20();
	switch (iLocal_16)
	{
		case 0:
			if ((func_21() && func_22((1 << 11))) && func_24(func_23(), 1) < 14.0f)
			{
				Global_40.f_9020.f_7 = func_25();
				bLocal_31 = true;
				ENTITY::SET_ENTITY_VISIBLE(sLocal_36[0 /*12*/].f_8, true);
				fLocal_28 = -1.5f;
				iLocal_16 = 1;
			}
			break;
		case 1:
			if ((356.9597f + 25.0f) > vLocal_32.z)
			{
				fLocal_27 -= 0.75f;
				fLocal_29 = 0.1f;
				iLocal_16 = 2;
			}
			break;
		case 2:
			if (fLocal_27 > 0.4f)
			{
				fLocal_27 -= 0.075f;
			}
			if (fLocal_28 > (-1.0f * 0.25f))
			{
				fLocal_29 = 0.0f;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_32, func_26(), true) < 1.0f)
			{
				iLocal_16 = 3;
			}
			break;
		case 3:
			func_27();
			if (fLocal_27 > 0.4f)
			{
				fLocal_27 -= 0.075f;
			}
			if (!func_28(&uLocal_17))
			{
				if (func_29(sLocal_36[0 /*12*/].f_8, &uLocal_21, &uLocal_26, &uLocal_30, 1.0f, 250.0f, 0, 0, 1092616192, 1))
				{
					func_30(func_5());
					func_31(&uLocal_17);
					iLocal_16 = 4;
				}
				else if (!func_22((1 << 11)))
				{
					iLocal_16 = 4;
				}
			}
			break;
		case 4:
			func_27();
			if (func_32(&uLocal_17, 12.0f))
			{
				if (fLocal_27 < 15.0f)
				{
					fLocal_27 += 0.075f;
				}
			}
			if (fLocal_27 >= 15.0f)
			{
				fLocal_29 = 0.1f;
				iLocal_16 = 5;
			}
			break;
		case 5:
			if (fLocal_28 >= 3.333f)
			{
				fLocal_29 = 0.0f;
			}
			if (func_33(sLocal_36[0 /*12*/].f_8, 1, 1) > 1000.0f)
			{
				bLocal_31 = false;
				iLocal_16 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_10()
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

int func_11(int iParam0)
{
	if (!func_14(iParam0))
	{
		return -1;
	}
	return func_35(func_34(iParam0));
}

bool func_12(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_13(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_14(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_15(int iParam0, int iParam1)
{
	if (!func_36(iParam0))
	{
		return false;
	}
	return (Global_40.f_9020[iParam0] & iParam1) != 0;
}

bool func_16(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_17(var uParam0, bool bParam1)
{
	Vector3 vVar0;

	vVar0 = { *uParam0 /*3*/ };
	vVar0.f_2 = (vVar0.z + 5.0f);
	if (bParam1)
	{
		if (!func_37(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 /*3*/ };
		}
	}
}

bool func_18(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

float func_19(float fParam0)
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

void func_20()
{
	fLocal_35 = ENTITY::GET_ENTITY_HEADING(sLocal_36[0 /*12*/].f_8);
	fLocal_35 += fLocal_27;
	ENTITY::SET_ENTITY_HEADING(sLocal_36[0 /*12*/].f_8, fLocal_35);
	vLocal_32 = { ENTITY::GET_ENTITY_COORDS(sLocal_36[0 /*12*/].f_8, true, false) /*3*/ };
	fLocal_28 += fLocal_29;
	vLocal_32.f_2 = (vLocal_32.z + fLocal_28);
	ENTITY::SET_ENTITY_COORDS(sLocal_36[0 /*12*/].f_8, vLocal_32, true, false, true, true);
}

bool func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = Global_40.f_9020.f_7;
	iVar1 = func_38(iVar0);
	iVar2 = func_38(func_25());
	func_39(iVar0, &uVar3, &uVar4, &uVar5, &iVar6, &iVar7, &iVar8);
	if (!func_40(iVar0) || (iVar1 == iVar2 && ((iVar6 >= 1 || iVar7 >= 1) || iVar8 >= 1)))
	{
		return true;
	}
	return false;
}

bool func_22(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_41(func_25());
	if (func_42(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_42(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_42(iParam0, (1 << 12)))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_42(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_42(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_42(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_42(iParam0, (1 << 10)))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_42(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_42(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_42(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_42(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_42(iParam0, (1 << 9)))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_42(iParam0, (1 << 13)))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_42(iParam0, (1 << 11)))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_42(iParam0, (1 << 14)))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_42(iParam0, (1 << 15)))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_42(iParam0, (1 << 16)))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_23()
{
	return { -1982.8f, 22.3f, 330.8452f };
}

float func_24(Vector3 vParam0, int iParam3)
{
	return func_43(Global_35, vParam0, iParam3);
}

int func_25()
{
	return Global_1899515;
}

Vector3 func_26()
{
	return { -1947.076f, -128.2895f, 356.9597f };
}

void func_27()
{
	if ((356.9597f + 0.05f) < vLocal_32.z)
	{
		if (fLocal_28 <= (-1.0f * 0.25f))
		{
			fLocal_29 = 0.0f;
		}
		else
		{
			fLocal_29 = (-1.0f * 0.005f);
		}
	}
	else if ((356.9597f - 0.05f) > vLocal_32.z)
	{
		if (fLocal_28 >= 0.25f)
		{
			fLocal_29 = 0.0f;
		}
		else
		{
			fLocal_29 = 0.005f;
		}
	}
}

bool func_28(var uParam0)
{
	return func_44(*uParam0, 1);
}

bool func_29(int iParam0, var uParam1, int iParam2, var uParam3, float fParam4, float fParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (func_45(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
	{
		*iParam2 = 0.0f;
		return true;
	}
	if (fParam6 > 0.0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return false;
		}
	}
	if (func_46(iParam0, fParam5))
	{
		if (func_47(vVar0, iParam0, uParam1, iParam2, uParam3, fParam4, fParam5, bParam7, fParam9))
		{
			return true;
		}
	}
	else if (!bParam7)
	{
		*iParam2 = 0.0f;
	}
	return false;
}

void func_30(int iParam0)
{
	func_48(iParam0, 2);
}

void func_31(var uParam0)
{
	func_49(uParam0, 0.0f);
}

bool func_32(var uParam0, float fParam1)
{
	if (!func_28(uParam0))
	{
		return false;
	}
	if (func_50(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

float func_33(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_51(Global_35, iParam0, bParam1, bParam2);
}

int func_34(int iParam0)
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

int func_35(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_36(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 4);
}

bool func_37(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_52(*uParam0, 0.0f, 0.0f, 0.0f))
	{
		return true;
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam0 == -15 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_53(iParam0);
	switch (func_54(iParam0))
	{
		case 0:
			iVar1 = 11;
			break;
		case 1:
			iVar1 = 12;
			break;
		case 2:
			iVar1 = 1;
			break;
		case 3:
			iVar1 = 2;
			break;
		case 4:
			iVar1 = 3;
			break;
		case 5:
			iVar1 = 4;
			break;
		case 6:
			iVar1 = 5;
			break;
		case 7:
			iVar1 = 6;
			break;
		case 8:
			iVar1 = 7;
			break;
		case 9:
			iVar1 = 8;
			break;
		case 10:
			iVar1 = 9;
			break;
		case 11:
			iVar1 = 10;
			break;
	}
	iVar2 = func_55(iParam0);
	iVar3 = (iVar2 % 100);
	iVar4 = (iVar2 / 100);
	iVar5 = (((((iVar0 + (((13 * iVar1) - 1) / 5)) + iVar3) + (iVar3 / 4)) + (iVar4 / 4)) - (2 * iVar4));
	iVar6 = (iVar5 % 7);
	if (iVar6 < 0)
	{
		iVar6 += 7;
	}
	switch (iVar6)
	{
		case 0:
			iVar7 = 0;
			break;
		case 1:
			iVar7 = 1;
			break;
		case 2:
			iVar7 = 2;
			break;
		case 3:
			iVar7 = 3;
			break;
		case 4:
			iVar7 = 4;
			break;
		case 5:
			iVar7 = 5;
			break;
		case 6:
			iVar7 = 6;
			break;
	}
	return iVar7;
}

void func_39(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_56(func_25(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool func_40(int iParam0)
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
	iVar0 = func_57(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_58(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_41(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_55(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_54(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_53(iParam0);
	if (iVar5 < 1 || iVar5 > func_59(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_41(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

bool func_42(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

float func_43(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_44(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

float func_45(int iParam0, int iParam1, bool bParam2)
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
	return func_60(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_46(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (func_45(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam1 * fParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_47(Vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = func_61(iParam10);
				if (fVar2 < 0.0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_62(uParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = func_63(uParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*fParam6 = 1;
		if (*iParam5 != 0.0f)
		{
		}
		if (*iParam5 <= 0.0f)
		{
			*iParam5 = func_64();
		}
		else if ((func_64() - *iParam5) > bParam7)
		{
			*iParam5 = 0.0f;
			return true;
		}
	}
	else if (*uParam4 == 2 && uParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0.0f;
		}
	}
	else
	{
		*fParam6 = 1;
	}
	return false;
}

void func_48(int iParam0, int iParam1)
{
	if (!func_36(iParam0))
	{
		return;
	}
	Global_40.f_9020[iParam0] |= iParam1;
}

void func_49(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_64() - fParam1);
	func_65(uParam0, 1);
	func_66(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

float func_50(var uParam0)
{
	if (!func_28(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_67(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_64() - uParam0->f_1);
}

float func_51(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_52(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_53(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_54(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_55(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_68(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_69(iParam0, iParam1, 1))
	{
		iVar0 = func_54(iParam1);
		iVar1 = func_55(iParam0);
		iVar2 = (func_55(iParam0) - func_55(iParam1));
		iVar3 = (func_54(iParam0) - func_54(iParam1));
		iVar4 = (func_53(iParam0) - func_53(iParam1));
		iVar5 = (func_41(iParam0) - func_41(iParam1));
		iVar6 = (func_58(iParam0) - func_58(iParam1));
		iVar7 = (func_57(iParam0) - func_57(iParam1));
	}
	else
	{
		iVar0 = func_54(iParam0);
		iVar1 = func_55(iParam1);
		iVar2 = (func_55(iParam1) - func_55(iParam0));
		iVar3 = (func_54(iParam1) - func_54(iParam0));
		iVar4 = (func_53(iParam1) - func_53(iParam0));
		iVar5 = (func_41(iParam1) - func_41(iParam0));
		iVar6 = (func_58(iParam1) - func_58(iParam0));
		iVar7 = (func_57(iParam1) - func_57(iParam0));
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
		iVar4 += func_59(iVar0, iVar1);
		iVar3--;
		iVar0 = BUILTIN::ROUND(func_70(BUILTIN::TO_FLOAT(iVar0 + 1), 0.0f, 12.0f));
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

int func_57(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_58(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_59(int iParam0, int iParam1)
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

float func_60(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

float func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1.0f;
		case 1:
			return 30.0f;
		case 2:
			return 80.0f;
		default:
			break;
	}
	return -1.0f;
}

int func_62(var uParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { func_71(iParam1) /*3*/ };
	vVar3 = { func_71(iParam2) /*3*/ };
	return func_72(uParam0, vVar0, vVar3, iParam2);
}

int func_63(var uParam0, int iParam1, Vector3 vParam2)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_71(iParam1) /*3*/ };
	return func_72(uParam0, vVar0, vParam2, 0);
}

float func_64()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_65(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_67(var uParam0)
{
	return func_44(*uParam0, 2);
}

int func_68(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_69(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_40(iParam1) || !func_40(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_70(float fParam0, float fParam1, float fParam2)
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

Vector3 func_71(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0.0f, 0.0f, 0.0f) /*3*/ };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) /*3*/ };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) /*3*/ };
			vVar0.x = ((vVar3.x + vVar6.x) / 2.0f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2.0f);
			vVar0.f_2 = func_73(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_18(vVar0))
	{
	}
	return vVar0;
}

int func_72(var uParam0, Vector3 vParam1, Vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			func_74(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

float func_73(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_74(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

