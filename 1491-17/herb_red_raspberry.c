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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	Vector3 vLocal_23[4] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	int iLocal_36[4] = { 0, 0, 0, 0 };
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#pragma endregion

void __SCRIPT()
{
	struct<39> /*312*/ sVar0;
	float fVar39;
	bool bVar40;
	int iVar41;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	sVar0.f_9 = 3;
	sVar0.f_13 = 4;
	sVar0.f_20 = 1;
	sVar0.f_21 = 1;
	sVar0.f_22 = 4;
	sVar0.f_28 = 4;
	sVar0.f_33 = 4;
	sVar0.f_5 = sScriptParam_0.f_0;
	sVar0.f_6 = sScriptParam_0.f_1;
	func_1(&sVar0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&sVar0);
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_2(&sVar0);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(sScriptParam_0.f_1))
	{
		func_2(&sVar0);
	}
	sVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(sScriptParam_0.f_1, true) /*3*/ };
	sVar0.f_3 = TASK::_GET_SCENARIO_POINT_HEADING(sScriptParam_0.f_1, true);
	sVar0.f_4 = TASK::_GET_SCENARIO_POINT_RADIUS(sScriptParam_0.f_1);
	Global_43839[sVar0.f_18]++;
	if (func_3() != 0)
	{
		if (!func_4(10))
		{
			func_2(&sVar0);
		}
	}
	sVar0.f_24 = func_5(sVar0.f_18, sVar0);
	if (sVar0.f_24 <= -1)
	{
		sVar0.f_24 = func_6(sVar0.f_18, sVar0);
		if (func_7(&sVar0))
		{
			func_8(&sVar0);
		}
		else
		{
			func_9(&sVar0);
		}
	}
	while (func_10(&sVar0))
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			func_2(&sVar0);
		}
		BUILTIN::WAIT(0);
	}
	iLocal_14 = 0;
	while (func_11(&sVar0))
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			func_2(&sVar0);
		}
		func_12(&sVar0);
		func_13(&sVar0);
		if (iLocal_14 <= 0)
		{
			fVar39 = BUILTIN::VDIST2(sVar0, Global_36);
			switch (func_14(&sVar0))
			{
				case 0:
					sVar0.f_24 = func_5(sVar0.f_18, sVar0);
					if (sVar0.f_24 <= -1)
					{
						sVar0.f_24 = func_6(sVar0.f_18, sVar0);
						if (func_7(&sVar0))
						{
							func_8(&sVar0);
						}
						else
						{
							func_9(&sVar0);
						}
					}
					func_15(&sVar0, 1);
					break;
				case 1:
					if (fVar39 < 4900.0f)
					{
						func_15(&sVar0, 2);
					}
					break;
				case 2:
					if (func_16(sVar0.f_24, sVar0.f_4))
					{
						func_17(sVar0.f_24, 0);
					}
					bVar40 = func_18(sVar0.f_24);
					if (bVar40)
					{
						func_15(&sVar0, 3);
					}
					else
					{
						func_15(&sVar0, 4);
					}
					func_19(&sVar0);
					break;
				case 4:
					if (func_20(&sVar0))
					{
						iVar41 = func_21(&sVar0);
						if (iVar41 != 1)
						{
							if (iVar41 == 0)
							{
								iLocal_14 = 1000;
							}
							else
							{
								func_2(&sVar0);
							}
						}
						else
						{
							func_15(&sVar0, 5);
						}
					}
					break;
				case 3:
					if (func_20(&sVar0))
					{
						iVar41 = func_21(&sVar0);
						if (iVar41 == 1)
						{
							func_15(&sVar0, 6);
						}
						else if (iVar41 == 0)
						{
							iLocal_14 = 1000;
						}
						else
						{
							func_2(&sVar0);
						}
					}
					break;
				case 5:
					if (func_22(&sVar0))
					{
						func_15(&sVar0, 10);
					}
					break;
				case 6:
					if (func_22(&sVar0))
					{
						func_15(&sVar0, 7);
					}
					break;
				case 7:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("EFFECTPLANTBLIP")))
					{
						if (func_24(sVar0.f_18, func_23(PLAYER::GET_PLAYER_INDEX()), &(sVar0.f_24), &iLocal_21, 1))
						{
							func_15(&sVar0, 9);
						}
					}
					else if (!func_18(sVar0.f_24))
					{
						func_15(&sVar0, 9);
					}
					if (!bLocal_22)
					{
						if (func_25(4))
						{
							if (fVar39 < 625.0f && !PED::IS_PED_ON_MOUNT(Global_35))
							{
								func_26(602, 0);
								bLocal_22 = true;
							}
						}
						else
						{
							bLocal_22 = true;
						}
					}
					if (fVar39 > 8100.0f || func_27(sVar0.f_24, 1))
					{
						func_28(sVar0.f_24, 1);
						func_15(&sVar0, 8);
					}
					break;
				case 9:
					func_29(sVar0.f_24);
					func_30(sVar0.f_24, iLocal_21);
					if (func_31(sVar0.f_18))
					{
						func_32(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(BUILTIN::FLOOR(sVar0.f_4), 1777389635, 0));
					}
					Global_1935496.f_127 = 1;
					func_15(&sVar0, 10);
					break;
				case 10:
					if (func_33(sVar0.f_18))
					{
						func_34(sVar0, &uLocal_16, &uLocal_17, &uLocal_18);
					}
					if (fVar39 > 8100.0f || func_27(sVar0.f_24, 1))
					{
						func_28(sVar0.f_24, 1);
						func_15(&sVar0, 8);
					}
					break;
				case 8:
					func_35(&sVar0);
					func_15(&sVar0, 1);
					break;
			}
		}
		if (func_37(func_36(&sVar0)))
		{
			if (func_38(&sVar0) != func_36(&sVar0))
			{
				func_39(&sVar0, func_36(&sVar0));
			}
		}
		else if (func_38(&sVar0) != Global_36580)
		{
			func_39(&sVar0, Global_36580);
		}
		func_40(&sVar0);
		iLocal_14--;
		if (iLocal_14 < 0)
		{
			iLocal_14 = 0;
		}
		BUILTIN::WAIT(0);
	}
	func_2(&sVar0);
}

void func_1(var uParam0)
{
	func_41(uParam0, 33);
}

void func_2(var uParam0)
{
	Global_43839[uParam0->f_18]--;
	SCRIPTS::_0xE7282390542F570D(uParam0->f_5);
	if (func_38(uParam0) == 1 && TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_6))
	{
		Global_1913813 = uParam0->f_6;
	}
	func_35(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3()
{
	return Global_1572887.f_12;
}

bool func_4(int iParam0)
{
	if (!func_42(iParam0))
	{
		return false;
	}
	return func_43(iParam0);
}

int func_5(int iParam0, Vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_44(vParam1))
	{
		return -1;
	}
	fVar1 = 25.0f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 500)
	{
		if (!func_45(iVar3))
		{
			return iVar2;
		}
		else if (func_46(iVar3) != iParam0)
		{
			Jump @108; // curOff = 70
		}
		else
		{
			fVar0 = func_48(vParam1, func_47(iVar3));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_6(int iParam0, Vector3 vParam1)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return -1;
	}
	if (func_44(vParam1))
	{
		return -1;
	}
	if (Global_40.f_9273 >= 500)
	{
		Global_40.f_9273 = 0;
	}
	iVar0 = Global_40.f_9273;
	func_49(&(Global_27573[iVar0 /*9*/]), iParam0, vParam1, -15);
	Global_40.f_9273++;
	return iVar0;
}

bool func_7(var uParam0)
{
	return uParam0->f_20 != 3;
}

void func_8(var uParam0)
{
	var uVar0[6];
	var uVar7[3];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	func_50(uParam0->f_20, &uVar0, &uVar7);
	if (uParam0->f_22 > 4)
	{
		uParam0->f_22 = 4;
	}
	if (uParam0->f_21 <= 0)
	{
		uParam0->f_21 = 1;
	}
	iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_21, uParam0->f_22 + 1);
	iVar12 = 0;
	while (iVar12 <= (iVar11 - 1))
	{
		if (uVar0[iVar12] == 0)
		{
			iVar13 = 0;
		}
		else
		{
			iVar13 = uVar7[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)];
		}
		if (uParam0->f_23 > 0)
		{
			iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);
		}
		iVar15 = uVar0[iVar12] | BUILTIN::SHIFT_LEFT(iVar13, 9) | BUILTIN::SHIFT_LEFT(iVar14, 13) | (1 << 30);
		func_51(uParam0->f_24, iVar12, iVar15);
		iVar12++;
	}
}

void func_9(var uParam0)
{
	var uVar0[6];
	var uVar7;
	int iVar11;
	int iVar12;

	uVar7 = 3;
	func_50(uParam0->f_20, &uVar0, &uVar7);
	if (uParam0->f_23 > 0)
	{
		iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);
	}
	iVar12 = uVar0[0] | BUILTIN::SHIFT_LEFT(0, 9) | BUILTIN::SHIFT_LEFT(iVar11, 13) | (1 << 30);
	func_51(uParam0->f_24, 0, iVar12);
}

bool func_10(var uParam0)
{
	if (func_52(Global_35) && func_53())
	{
		return true;
	}
	func_13(uParam0);
	if (func_37(func_36(uParam0)))
	{
		if (func_38(uParam0) != func_36(uParam0))
		{
			func_39(uParam0, func_36(uParam0));
		}
	}
	else if (func_38(uParam0) != Global_36580)
	{
		func_39(uParam0, Global_36580);
	}
	if (func_38(uParam0) == 1)
	{
		return true;
	}
	return false;
}

bool func_11(var uParam0)
{
	if (func_54(1))
	{
		return false;
	}
	if (func_38(uParam0) == 1)
	{
		if (Global_1913813 == 0)
		{
			return false;
		}
	}
	return true;
}

void func_12(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4) && func_55()) && func_56(PLAYER::PLAYER_ID(), 1, 0)) && func_57(0) == joaat("HERBALIST"))
	{
		bVar0 = true;
	}
	if (!bVar0 && !(uParam0->f_18 == 11 || uParam0->f_18 == 26))
	{
		return;
	}
	if (func_58(uParam0->f_18) || uParam0->f_8 == 1)
	{
		bVar0 = true;
	}
	if (func_38(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_22)
		{
			if (func_59(uParam0->f_13[iVar1]))
			{
				MISC::DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME(uParam0->f_13[iVar1], false);
			}
			iVar1++;
		}
	}
}

void func_13(var uParam0)
{
	int iVar0;

	if (!func_60(&(uParam0->f_25)))
	{
		func_61(&(uParam0->f_25), 1.0f, 0);
	}
	if (func_62(&(uParam0->f_25)) >= 1.0f)
	{
		func_63(&(uParam0->f_25));
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_64(Global_36581[iVar0 /*2*/], *uParam0))
			{
				func_65(uParam0, Global_36581[iVar0 /*2*/].f_1);
			}
			iVar0++;
		}
		if (func_31(uParam0->f_18) && !func_66(uParam0->f_18))
		{
			if (func_68(func_67(uParam0->f_18)) >= (func_70(func_69(uParam0->f_18)) - 1))
			{
				func_65(uParam0, 1);
			}
		}
	}
}

int func_14(var uParam0)
{
	return uParam0->f_11;
}

void func_15(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
}

bool func_16(int iParam0, float fParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return false;
	}
	if (!func_71(iParam0))
	{
		return false;
	}
	if (func_72(iParam0, fParam1))
	{
		return false;
	}
	iVar0 = func_73(iParam0);
	func_74(&iVar0, 0, 0, 0, 0, 3, 0, 0);
	if (func_75(iVar0, 1))
	{
		return true;
	}
	return false;
}

void func_17(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_76(iParam0, iVar0))
		{
			func_77(iParam0, iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_78(iParam0, 1);
	}
}

bool func_18(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_76(iParam0, iVar0))
		{
		}
		else if (!func_79(iParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_19(var uParam0)
{
	TASK::_REQUEST_HERB_COMPOSITE_ASSET(uParam0->f_38);
}

bool func_20(var uParam0)
{
	if (!TASK::ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(uParam0->f_38))
	{
		return false;
	}
	return true;
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	uVar4 = uParam0->f_2;
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, (uParam0->f_2 + 2.0f), &uVar4, false))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, (uParam0->f_2 + 10.0f), &uVar4, false))
		{
			uParam0->f_12++;
			if (uParam0->f_12 >= 50)
			{
				uParam0->f_12 = 0;
				return -1;
			}
			else
			{
				return 0;
			}
		}
	}
	uParam0->f_2 = uVar4;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_76(uParam0->f_24, iVar0))
		{
		}
		else
		{
			func_80(uParam0->f_24, iVar0, &iVar1, &iVar2, &uVar3);
			vLocal_23[iVar0 /*3*/] = (*uParam0 + ((float)iVar1 * BUILTIN::COS(BUILTIN::TO_FLOAT(iVar2))));
			vLocal_23[iVar0 /*3*/].f_1 = (uParam0->f_1 + ((float)iVar1 * BUILTIN::SIN(BUILTIN::TO_FLOAT(iVar2))));
			vLocal_23[iVar0 /*3*/].f_2 = uParam0->f_2;
			if (uParam0->f_23 > 0)
			{
				iLocal_36[iVar0] = uVar3;
			}
			else
			{
				iLocal_36[iVar0] = -1;
			}
			if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_23[iVar0 /*3*/], vLocal_23[iVar0 /*3*/].f_1, (vLocal_23[iVar0 /*3*/].f_2 + 10.0f), &(vLocal_23[iVar0 /*3*/].f_2), false))
			{
				uParam0->f_12 = 0;
				return -1;
			}
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	return 1;
}

bool func_22(var uParam0)
{
	var uVar0;
	int iVar1;

	if (iLocal_15 < 4)
	{
		if (!func_44(vLocal_23[iLocal_15 /*3*/]))
		{
			if (!Global_1913812)
			{
				iVar1 = 0;
				if (((((((uParam0->f_18 == 1 || uParam0->f_18 == 9) || uParam0->f_18 == 10) || uParam0->f_18 == 17) || uParam0->f_18 == 21) || uParam0->f_18 == 25) || uParam0->f_18 == 32) || uParam0->f_18 == 36)
				{
					iVar1 |= 2;
					vLocal_23[iLocal_15 /*3*/] = { vLocal_23[iLocal_15 /*3*/] + func_81(0.0f, 0.737008f, 1.81999f, uParam0->f_3) /*3*/ };
				}
				if (uParam0->f_18 == 37)
				{
					iVar1 |= 2;
					vLocal_23[iLocal_15 /*3*/] = { vLocal_23[iLocal_15 /*3*/] + func_81(0.0f, 0.5f, 1.81999f, uParam0->f_3) /*3*/ };
				}
				if (func_79(uParam0->f_24, iLocal_15))
				{
					iVar1 |= 1;
				}
				uParam0->f_13[iLocal_15] = TASK::_CREATE_HERB_COMPOSITES(uParam0->f_38, vLocal_23[iLocal_15 /*3*/], func_82((uParam0->f_3 + ((float)iLocal_15 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 90.0f)))), iVar1, &uVar0, iLocal_36[iLocal_15]);
				if (func_83(uParam0->f_18))
				{
					uParam0->f_28[iLocal_15] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vLocal_23[iLocal_15 /*3*/], 0.37f, 4, 27, 0);
				}
				if (uParam0->f_18 == 38)
				{
					func_84(&(uParam0->f_33[iLocal_15]), vLocal_23[iLocal_15 /*3*/], 0.15f);
				}
				iLocal_15++;
				Global_1913812 = 1;
			}
		}
		else
		{
			return true;
		}
		return false;
	}
	return true;
}

Vector3 func_23(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_24(int iParam0, Vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	Vector3 vVar5;
	Vector3 vVar8;
	Vector3 vVar11;
	float fVar14;
	float fVar15;

	if (func_44(vParam1))
	{
		return false;
	}
	if (*iParam4 <= -1)
	{
		*iParam4 = func_5(iParam0, vParam1);
	}
	if (*iParam4 <= -1)
	{
		return false;
	}
	fVar14 = -1.0f;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_76(*iParam4, iVar0))
		{
			if (bParam6 && func_79(*iParam4, iVar0))
			{
			}
			else
			{
				vVar8 = { func_47(*iParam4) /*3*/ };
				func_80(*iParam4, iVar0, &iVar1, &iVar2, &uVar3);
				vVar5.x = (vVar8.x + ((float)iVar1 * BUILTIN::COS(BUILTIN::TO_FLOAT(iVar2))));
				vVar5.f_1 = (vVar8.y + ((float)iVar1 * BUILTIN::SIN(BUILTIN::TO_FLOAT(iVar2))));
				fVar15 = func_48(vParam1, vVar5);
				if (fVar14 < 0.0f || (fVar14 >= 0.0f && fVar15 < fVar14))
				{
					fVar14 = fVar15;
					iVar4 = iVar0;
					vVar11 = { vVar5 /*3*/ };
				}
			}
		}
		iVar0++;
	}
	if (func_48(vParam1, vVar11) < 25.0f)
	{
		*iParam5 = iVar4;
		return true;
	}
	return false;
}

bool func_25(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_85(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_86(iParam0, &iVar0, &iVar1);
	if (!func_87(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_88(iVar0, iVar1);
}

bool func_27(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return (Global_38105[iParam0 /*9*/].f_3 & iParam1) != 0;
	}
	return (Global_27573[iParam0 /*9*/].f_3 & iParam1) != 0;
}

void func_28(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_3 -= (Global_38105[iParam0 /*9*/].f_3 & iParam1);
		return;
	}
	Global_27573[iParam0 /*9*/].f_3 -= (Global_27573[iParam0 /*9*/].f_3 & iParam1);
}

void func_29(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 500)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_2 = func_89();
		return;
	}
	Global_27573[iParam0 /*9*/].f_2 = func_89();
}

void func_30(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_4[iParam1] |= (1 << 12);
		return;
	}
	Global_27573[iParam0 /*9*/].f_4[iParam1] |= (1 << 12);
}

bool func_31(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return true;
		default:
			return false;
	}
	return false;
}

void func_32(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

bool func_33(int iParam0)
{
	return !func_31(iParam0);
}

void func_34(struct<25> /*200*/ sParam0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = sParam0.f_18;
	iVar1 = sParam0.f_24;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (iVar1 != -1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("EATPLANT")))
		{
			if (func_90(iVar0, Global_35, 0, 1, func_23(PLAYER::GET_PLAYER_INDEX())))
			{
				if (func_91() && PED::IS_PED_ON_FOOT(Global_35))
				{
					if (iVar0 == 26 || iVar0 == 11)
					{
						bVar2 = true;
					}
					else if (iVar0 == 29)
					{
						iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
						if (iVar3 == 3)
						{
							bVar2 = true;
						}
					}
				}
				func_92(iVar0, 1, 1);
				func_93(func_69(iVar0), !bVar2);
				func_94(func_69(iVar0), 1, 0, 0, 0);
				func_95(iVar0, 1);
			}
		}
		func_96(uParam39, uParam40, bVar2, uParam41);
	}
}

void func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (func_76(uParam0->f_24, iVar1) && uParam0->f_13[iVar1] != iVar0)
		{
			TASK::_DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES(uParam0->f_13[iVar1], false);
			uParam0->f_13[iVar1] = 0;
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (func_97(&(uParam0->f_28[iVar2])))
		{
			GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(uParam0->f_28[iVar2]), 1);
			uParam0->f_28[iVar2] = -1;
		}
		if (func_97(&(uParam0->f_33[iVar2])))
		{
			GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(uParam0->f_33[iVar2]), 1);
			uParam0->f_33[iVar2] = -1;
		}
		iVar2++;
	}
	iLocal_15 = 0;
}

int func_36(var uParam0)
{
	return uParam0->f_9;
}

bool func_37(int iParam0)
{
	return iParam0 != 3;
}

int func_38(var uParam0)
{
	return uParam0->f_8;
}

void func_39(var uParam0, int iParam1)
{
	if (!func_37(iParam1))
	{
		return;
	}
	if (func_38(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_8 = iParam1;
}

void func_40(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_98(Global_1935630, (1 << 21)))
	{
		bVar0 = true;
	}
	if (func_38(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_22)
	{
		if (func_59(uParam0->f_13[iVar1]))
		{
			MISC::_0x082C043C7AFC3747(uParam0->f_13[iVar1], true);
			MISC::DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME(uParam0->f_13[iVar1], true);
		}
		iVar1++;
	}
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_18 = func_99(iParam1);
	uParam0->f_19 = func_69(uParam0->f_18);
	uParam0->f_20 = func_100(uParam0->f_18);
	uParam0->f_23 = func_101(uParam0->f_18);
	uParam0->f_21 = func_102(uParam0->f_18);
	uParam0->f_22 = func_103(uParam0->f_18);
	uParam0->f_38 = func_104(uParam0->f_18);
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_44(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_45(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return Global_38105[iParam0 /*9*/] > 0;
	}
	return Global_27573[iParam0 /*9*/] > 0;
}

int func_46(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_3() != -1)
	{
		return Global_38105[iParam0 /*9*/];
	}
	else
	{
		return Global_27573[iParam0 /*9*/];
	}
	return 0;
}

Vector3 func_47(int iParam0)
{
	if (iParam0 == -1)
	{
		return { -1.0f, -1.0f, -1.0f };
	}
	if (func_3() != -1)
	{
		return func_105(Global_38105[iParam0 /*9*/].f_1);
	}
	return func_105(Global_27573[iParam0 /*9*/].f_1);
}

float func_48(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_49(int* iParam0, int iParam1, Vector3 vParam2, int iParam5)
{
	struct<5> /*40*/ sVar0;

	sVar0.f_2 = -15;
	sVar0.f_4 = 4;
	MISC::COPY_SCRIPT_STRUCT(iParam0, &sVar0, 9);
	*iParam0 = iParam1;
	iParam0->f_1 = func_106(vParam2);
	iParam0->f_2 = iParam5;
}

void func_50(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	switch (iParam0)
	{
		case 0:
			(*uParam2)[0] = 1;
			(*uParam2)[1] = 2;
			(*uParam2)[2] = 3;
			break;
		case 1:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		case 2:
			(*uParam2)[0] = 3;
			(*uParam2)[1] = 4;
			(*uParam2)[2] = 5;
			break;
		case 3:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		default:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
	}
	(*uParam1)[0] = 0;
	(*uParam1)[1] = 67;
	(*uParam1)[2] = 139;
	(*uParam1)[3] = 223;
	(*uParam1)[4] = 293;
	(*uParam1)[5] = 359;
	iVar0 = 5;
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1);
		uVar2 = (*uParam1)[iVar1];
		(*uParam1)[iVar1] = (*uParam1)[iVar0];
		(*uParam1)[iVar0] = uVar2;
		iVar0 += -1;
	}
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > 500)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_4[iParam1] = iParam2;
	}
	Global_27573[iParam0 /*9*/].f_4[iParam1] = iParam2;
}

bool func_52(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_53()
{
	return ((Global_1894899 & 1) != 0 && func_107() != -1);
}

bool func_54(bool bParam0)
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

bool func_55()
{
	return func_108(Global_1572887.f_6, 1);
}

bool func_56(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam1 != -1)
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			if (Global_1145592.f_1[iVar1 /*11*/].f_1 == iParam1 && func_109(iVar1, 128, iVar0))
			{
				if (bParam2)
				{
					if (Global_1145899.f_20[iVar1 /*16*/] >= 2)
					{
						return true;
					}
				}
				else if (Global_1145899.f_20[iVar1 /*16*/] >= 6)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

int func_57(int iParam0)
{
	return Global_1145592.f_1[iParam0 /*11*/].f_3;
}

bool func_58(int iParam0)
{
	if (!func_110(iParam0))
	{
		return false;
	}
	return func_111(iParam0, 4, 1);
}

bool func_59(int iParam0)
{
	return iParam0 != -1;
}

bool func_60(var uParam0)
{
	return func_112(*uParam0, 1);
}

void func_61(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_60(uParam0))
	{
		func_113(uParam0, fParam1);
	}
}

float func_62(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_114(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_115() - uParam0->f_1);
}

void func_63(var uParam0)
{
	func_113(uParam0, 0.0f);
}

bool func_64(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

void func_65(var uParam0, int iParam1)
{
	if (!func_37(iParam1))
	{
		return;
	}
	if (func_36(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_9 = iParam1;
}

bool func_66(int iParam0)
{
	switch (iParam0)
	{
		case 21:
			return func_116(43);
		case 22:
		case 24:
			return func_117() >= 1;
		case 1:
		case 9:
		case 17:
			return func_117() >= 2;
		case 25:
		case 32:
		case 36:
			return func_117() >= 3;
		case 10:
		case 14:
		case 30:
		case 35:
			return func_117() >= 4;
		default:
			break;
	}
	return false;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1112589856;
		case 9:
			return 270657460;
		case 10:
			return 1485944635;
		case 14:
			return 767056202;
		case 17:
			return -1064869901;
		case 21:
			return -16133028;
		case 22:
			return -1268393363;
		case 24:
			return 5452285;
		case 25:
			return -491162917;
		case 30:
			return 1819699601;
		case 32:
			return 1077382670;
		case 35:
			return 1298182602;
		case 36:
			return -345586569;
		default:
			break;
	}
	return 0;
}

int func_68(int iParam0)
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(1777389635, iParam0);
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 3:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 4:
			return joaat("CONSUMABLE_HERB_BAY_BOLETE");
		case 5:
			return joaat("CONSUMABLE_HERB_BLACK_BERRY");
		case 6:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 7:
			return joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 8:
			return joaat("CONSUMABLE_HERB_CHANTERELLES");
		case 11:
			return joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 12:
			return joaat("CONSUMABLE_HERB_CREEPING_THYME");
		case 13:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 15:
			return joaat("CONSUMABLE_HERB_ENGLISH_MACE");
		case 16:
			return joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 19:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 20:
			return joaat("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("CONSUMABLE_HERB_MILKWEED");
		case 26:
			return joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 27:
			return joaat("CONSUMABLE_HERB_OREGANO");
		case 28:
			return joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 29:
			return joaat("CONSUMABLE_HERB_PRAIRIE_POPPY");
		case 31:
			return joaat("CONSUMABLE_HERB_RAMS_HEAD");
		case 33:
			return joaat("CONSUMABLE_HERB_RED_RASPBERRY");
		case 34:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 37:
			return joaat("CONSUMABLE_HERB_VANILLA_FLOWER");
		case 38:
			return joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP");
		case 39:
			return joaat("CONSUMABLE_HERB_WILD_CARROTS");
		case 40:
			return joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 41:
			return joaat("CONSUMABLE_HERB_WILD_MINT");
		case 42:
			return joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		case 43:
			return joaat("CONSUMABLE_HERB_YARROW");
		case 1:
			return joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
		case 9:
			return joaat("PROVISION_RO_FLOWER_CIGAR");
		case 10:
			return joaat("PROVISION_RO_FLOWER_CLAMSHELL");
		case 14:
			return joaat("PROVISION_RO_FLOWER_DRAGONS");
		case 17:
			return joaat("PROVISION_RO_FLOWER_GHOST");
		case 21:
			return joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
		case 22:
			return joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
		case 24:
			return joaat("PROVISION_RO_FLOWER_MOCCASIN");
		case 25:
			return joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
		case 30:
			return joaat("PROVISION_RO_FLOWER_QUEENS");
		case 32:
			return joaat("PROVISION_RO_FLOWER_RAT_TAIL");
		case 35:
			return joaat("PROVISION_RO_FLOWER_SPARROWS");
		case 36:
			return joaat("PROVISION_RO_FLOWER_SPIDER");
		default:
			break;
	}
	return 0;
}

int func_70(int iParam0)
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

bool func_71(int iParam0)
{
	if (func_3() != -1)
	{
		return Global_38105[iParam0 /*9*/].f_2 != -15;
	}
	return Global_27573[iParam0 /*9*/].f_2 != -15;
}

bool func_72(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_46(iParam0);
	if (!func_31(iVar0) || func_3() != -1)
	{
		return false;
	}
	if (!func_66(iVar0) && func_118(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(BUILTIN::FLOOR(fParam1), 1777389635, 0)))
	{
		return true;
	}
	return false;
}

var func_73(int iParam0)
{
	if (func_3() != -1)
	{
		return Global_38105[iParam0 /*9*/].f_2;
	}
	return Global_27573[iParam0 /*9*/].f_2;
}

void func_74(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_119(*uParam0);
	iVar1 = func_120(*uParam0);
	iVar2 = func_121(*uParam0);
	iVar3 = func_122(*uParam0);
	iVar4 = func_123(*uParam0);
	iVar5 = func_124(*uParam0);
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
	iVar6 = func_125(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_125(iVar1, iVar0);
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
	func_126(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_75(int iParam0, bool bParam1)
{
	return func_127(func_89(), iParam0, bParam1);
}

bool func_76(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return (Global_38105[iParam0 /*9*/].f_4[iParam1] & (1 << 30)) != 0;
	}
	return (Global_27573[iParam0 /*9*/].f_4[iParam1] & (1 << 30)) != 0;
}

void func_77(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_4[iParam1] -= (Global_38105[iParam0 /*9*/].f_4[iParam1] & (1 << 12));
		return;
	}
	Global_27573[iParam0 /*9*/].f_4[iParam1] -= (Global_27573[iParam0 /*9*/].f_4[iParam1] & (1 << 12));
}

void func_78(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_3 |= iParam1;
		return;
	}
	Global_27573[iParam0 /*9*/].f_3 |= iParam1;
}

bool func_79(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return (Global_38105[iParam0 /*9*/].f_4[iParam1] & (1 << 12)) != 0;
	}
	return (Global_27573[iParam0 /*9*/].f_4[iParam1] & (1 << 12)) != 0;
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		func_128(&(Global_38105[iParam0 /*9*/]), iParam1, iParam2, iParam3, uParam4);
		return;
	}
	func_129(&(Global_27573[iParam0 /*9*/]), iParam1, iParam2, iParam3, uParam4);
}

Vector3 func_81(Vector3 vParam0, float fParam3)
{
	Vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = BUILTIN::SIN(fParam3);
	fVar4 = BUILTIN::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

float func_82(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

bool func_83(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return true;
		default:
			break;
	}
	return false;
}

void func_84(var uParam0, Vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = -1;
	func_130(uParam0, vParam1, fParam4, 4, iVar0, 0);
}

bool func_85(int iParam0, bool bParam1)
{
	switch (func_131(iParam0))
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

void func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_87(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_132(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_133(iParam0))
	{
		return false;
	}
	if (func_134(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_135(iParam0, 1)) || func_136((1 << 15)))
	{
		if (!func_135(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_137())
	{
		return false;
	}
	return true;
}

void func_88(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_89()
{
	return Global_1899515;
}

bool func_90(int iParam0, int iParam1, int iParam2, int iParam3, Vector3 vParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	if (func_24(iParam0, vParam4, &iVar0, &iVar1, 0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && iParam1 == Global_35)
		{
			iVar2 = func_138(iParam0);
			TELEMETRY::_TELEMETRY_HERB_PICKED(iVar2);
			COMPENDIUM::COMPENDIUM_HERB_PICKED(iVar2, vParam4);
			if (!func_139(iParam0))
			{
				func_140(iParam0, 0, 1);
			}
			if (func_3() == -1)
			{
				if (func_85(Global_1835011[4 /*74*/].f_1, 1))
				{
					iVar3 = func_141(iParam0);
					if (iVar3 != -1)
					{
						func_26(iVar3, 1);
					}
				}
			}
			func_143(func_142(joaat("PICK"), iVar2), iParam3);
			func_143(func_144(joaat("HERBS_PICKED_TOTAL")), iParam3);
			if (func_145(iParam0))
			{
				func_143(func_144(joaat("HERBS_PICKED_MUSHROOMS")), iParam3);
			}
		}
		func_29(iVar0);
		func_30(iVar0, iVar1);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_91()
{
	return func_146(1);
}

void func_92(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_69(iParam0);
	iVar1 = func_147(&iVar0);
	if (iVar1 != iParam0)
	{
		func_148(iVar1, 4);
	}
	if (!func_110(iParam0))
	{
		return;
	}
	if (func_58(iParam0))
	{
		return;
	}
	func_148(iParam0, 4);
	func_149(iParam0, bParam1);
	if (!func_139(iParam0))
	{
		func_140(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_150(0, 0, 1))
		{
			func_151(1, 6);
		}
	}
}

void func_93(int iParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;
	struct<6> /*48*/ sVar22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;

	sVar0.f_1 = 20;
	if ((func_152(iParam0, joaat("CI_TAG_ITEM_HERB")) || func_152(iParam0, joaat("CI_TAG_ITEM_MUSHROOM"))) || func_152(iParam0, joaat("CI_TAG_ITEM_BERRY")))
	{
		bVar37 = true;
	}
	if (func_153(iParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(iParam0, &sVar0);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		iVar29 = 0;
		while (iVar29 < sVar0.f_0)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar0.f_1[iVar29], &sVar22))
			{
			}
			else if (joaat("EFFECT_HEALTH") == sVar22.f_1)
			{
				fVar30 = func_154(0, sVar22.f_2);
				func_155(sVar22.f_2, 1);
				func_156(0, 7000);
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE") == sVar22.f_1)
			{
				fVar31 = func_154(2, sVar22.f_2);
				func_157(sVar22.f_2);
				func_156(2, 7000);
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA") == sVar22.f_1)
			{
				fVar32 = func_154(1, sVar22.f_2);
				func_158(sVar22.f_2);
				func_156(1, 7000);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == sVar22.f_1)
			{
				fVar33 = func_159(sVar22.f_2, sVar22.f_5);
				if (func_160(&uVar38, &uVar39, fVar33))
				{
					func_161(fVar33, 1, bVar37, bParam1);
					func_156(0, 7000);
				}
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == sVar22.f_1)
			{
				fVar34 = func_159(sVar22.f_2, sVar22.f_5);
				if (func_160(&uVar38, &uVar39, fVar34))
				{
					func_162(fVar34, 1, bVar37, bParam1);
					func_156(2, 7000);
				}
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == sVar22.f_1)
			{
				fVar35 = func_159(sVar22.f_2, sVar22.f_5);
				if (func_160(&uVar38, &uVar39, fVar35))
				{
					func_163(fVar35, 1, bVar37, bParam1);
					func_156(1, 7000);
				}
			}
			else if (joaat("EFFECT_HEALTH_CORE_GOLD") == sVar22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_165(19, fVar36);
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE_GOLD") == sVar22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_165(20, fVar36);
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE_GOLD") == sVar22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_165(18, fVar36);
			}
			else if (joaat("EFFECT_HEALTH_OVERPOWERED") == sVar22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_165(0, fVar36);
				bVar41 = true;
			}
			else if (joaat("EFFECT_DEADEYE_OVERPOWERED") == sVar22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_165(2, fVar36);
				bVar40 = true;
			}
			else if (joaat("EFFECT_STAMINA_OVERPOWERED") == sVar22.f_1)
			{
				fVar36 = func_164(BUILTIN::TO_FLOAT(sVar22.f_3), sVar22.f_4);
				func_165(1, fVar36);
			}
			else if (joaat("EFFECT_CALORIES") == sVar22.f_1)
			{
				func_166(BUILTIN::TO_FLOAT(sVar22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0.0f || fVar30 > 0.0f)
			{
				iVar42 = 1;
			}
		}
		if (iVar42 || func_152(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
		{
			func_143(func_167(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_152(iParam0, joaat("CI_TAG_ITEM_PROVISION")))
		{
			func_143(func_167(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar40)
		{
			func_143(func_167(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2.0f)), BUILTIN::ROUND((fVar35 / 2.0f)), BUILTIN::ROUND((fVar34 / 2.0f)));
	}
}

void func_94(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
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
	if (!func_168(iParam0, 0))
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
	if (!func_169())
	{
		func_170(iParam0, iParam1, bParam2, iParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_171(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (iParam3 | iParam4)
		{
			strcpy_s(&cVar2, 32, func_171(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
		}
		else if (bParam2 && func_172(iParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT");
		}
		bVar0 = true;
	}
	iVar6 = func_153(iParam0);
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
	else if (!func_173(iParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_175(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_174(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_152(iParam0, joaat("CI_TAG_SMOKING_CIGARETTE"))) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_174(iParam0));
	}
	func_176(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_95(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0 = { func_142(joaat("EATEN"), func_138(iParam0)) /*2*/ };
	STATS::_STAT_ID_INCREMENT_INT(&sVar0, iParam1);
	func_143(func_144(joaat("HERBS_EATEN")), iParam1);
}

int func_96(var uParam0, var uParam1, bool bParam2, var uParam3)
{
	if (*uParam0 < 5)
	{
		if (((func_177() || (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, *uParam1))) || !func_91()) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(*uParam1);
			}
			return 1;
		}
		else
		{
			Global_1935496.f_127 = 1;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (bParam2)
			{
				func_178(uParam3, 0);
			}
			if (func_60(uParam3) && func_62(uParam3) > 2.0f)
			{
				func_179(uParam0, 1);
				func_180(uParam3);
			}
			break;
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@sal1@ig@sal1_ig12_wake_up@sal1_ig12_wake_up", 0, "Herb_PL", false, true);
			func_179(uParam0, 2);
			break;
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_179(uParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_179(uParam0, 5);
			}
			break;
		case 5:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35);
				func_179(uParam0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_97(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_98(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_99(int iParam0)
{
	var uVar0;
	int iVar45;
	bool bVar46;

	if (Global_1913678.f_133)
	{
		uVar0 = 44;
		iVar45 = 0;
		while (iVar45 <= 1)
		{
			if (Global_1913678[iParam0 /*3*/][iVar45] != 0)
			{
				bVar46 = true;
			}
			else
			{
				iVar45++;
			}
		}
		if (!bVar46)
		{
			return iParam0;
		}
		func_181(&uVar0, 44, 1);
		iVar45 = 0;
		while (iVar45 <= 43)
		{
			if (iVar45 == iParam0)
			{
			}
			else if (func_182(&(Global_1913678[iParam0 /*3*/]), iVar45, 44))
			{
				return iVar45;
			}
			iVar45++;
		}
		return iParam0;
	}
	return iParam0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 15:
			return 0;
		case 16:
			return 1;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 23:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 31:
			return 0;
		case 33:
			return 1;
		case 34:
			return 0;
		case 37:
			return 3;
		case 38:
			return 0;
		case 39:
			return 0;
		case 40:
			return 0;
		case 41:
			return 0;
		case 42:
			return 1;
		case 43:
			return 0;
		case 1:
			return 3;
		case 9:
			return 3;
		case 10:
			return 3;
		case 14:
			return 3;
		case 17:
			return 3;
		case 21:
			return 3;
		case 22:
			return 3;
		case 24:
			return 3;
		case 25:
			return 3;
		case 30:
			return 3;
		case 32:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 23:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 31:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 37:
			return 0;
		case 38:
			return 0;
		case 39:
			return 0;
		case 40:
			return 0;
		case 41:
			return 0;
		case 42:
			return 0;
		case 43:
			return 4;
		case 1:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 14:
			return 0;
		case 17:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 30:
			return 0;
		case 32:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 2;
		case 8:
			return 2;
		case 11:
			return 3;
		case 12:
			return 3;
		case 13:
			return 2;
		case 15:
			return 2;
		case 16:
			return 1;
		case 18:
			return 2;
		case 19:
			return 2;
		case 20:
			return 2;
		case 23:
			return 2;
		case 26:
			return 2;
		case 27:
			return 3;
		case 28:
			return 2;
		case 29:
			return 2;
		case 31:
			return 2;
		case 33:
			return 1;
		case 34:
			return 2;
		case 37:
			return 1;
		case 38:
			return 2;
		case 39:
			return 2;
		case 40:
			return 2;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 2;
		case 1:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 14:
			return 1;
		case 17:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 30:
			return 1;
		case 32:
			return 1;
		case 35:
			return 1;
		case 36:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 4;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 3;
		case 8:
			return 4;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 15:
			return 3;
		case 16:
			return 2;
		case 18:
			return 3;
		case 19:
			return 3;
		case 20:
			return 3;
		case 23:
			return 3;
		case 26:
			return 3;
		case 27:
			return 4;
		case 28:
			return 4;
		case 29:
			return 3;
		case 31:
			return 4;
		case 33:
			return 2;
		case 34:
			return 3;
		case 37:
			return 1;
		case 38:
			return 3;
		case 39:
			return 3;
		case 40:
			return 3;
		case 41:
			return 4;
		case 42:
			return 2;
		case 43:
			return 3;
		case 1:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 14:
			return 1;
		case 17:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 30:
			return 1;
		case 32:
			return 1;
		case 35:
			return 1;
		case 36:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("COMPOSITE_LOOTABLE_ALASKAN_GINSENG_ROOT_DEF");
		case 3:
			return joaat("COMPOSITE_LOOTABLE_AMERICAN_GINSENG_ROOT_DEF");
		case 4:
			return joaat("COMPOSITE_LOOTABLE_BAY_BOLETE_DEF");
		case 5:
			return joaat("COMPOSITE_LOOTABLE_BLACK_BERRY_DEF");
		case 6:
			return joaat("COMPOSITE_LOOTABLE_BLACK_CURRANT_DEF");
		case 7:
			return joaat("COMPOSITE_LOOTABLE_BURDOCK_ROOT_DEF");
		case 8:
			return joaat("COMPOSITE_LOOTABLE_CHANTERELLES_DEF");
		case 11:
			return joaat("COMPOSITE_LOOTABLE_COMMON_BULRUSH_DEF");
		case 12:
			return joaat("COMPOSITE_LOOTABLE_CREEPING_THYME_DEF");
		case 13:
			return joaat("COMPOSITE_LOOTABLE_DESERT_SAGE_DEF");
		case 15:
			return joaat("COMPOSITE_LOOTABLE_ENGLISH_MACE_DEF");
		case 16:
			return joaat("COMPOSITE_LOOTABLE_EVERGREEN_HUCKLEBERRY_DEF");
		case 18:
			return joaat("COMPOSITE_LOOTABLE_GOLDEN_CURRANT_DEF");
		case 19:
			return joaat("COMPOSITE_LOOTABLE_HUMMINGBIRD_SAGE_DEF");
		case 20:
			return joaat("COMPOSITE_LOOTABLE_INDIAN_TOBACCO_DEF");
		case 23:
			return joaat("COMPOSITE_LOOTABLE_MILKWEED_DEF");
		case 26:
			return joaat("COMPOSITE_LOOTABLE_OLEANDER_SAGE_DEF");
		case 27:
			return joaat("COMPOSITE_LOOTABLE_OREGANO_DEF");
		case 28:
			return joaat("COMPOSITE_LOOTABLE_PARASOL_MUSHROOM_DEF");
		case 29:
			return joaat("COMPOSITE_LOOTABLE_PRAIRIE_POPPY_DEF");
		case 31:
			return joaat("COMPOSITE_LOOTABLE_RAMS_HEAD_DEF");
		case 33:
			return joaat("COMPOSITE_LOOTABLE_RED_RASPBERRY_DEF");
		case 34:
			return joaat("COMPOSITE_LOOTABLE_RED_SAGE_DEF");
		case 37:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_VANILLA_DEF");
		case 38:
			return joaat("COMPOSITE_LOOTABLE_VIOLET_SNOWDROP_DEF");
		case 39:
			return joaat("COMPOSITE_LOOTABLE_WILD_CARROT_DEF");
		case 40:
			return joaat("COMPOSITE_LOOTABLE_WILD_FEVERFEW_DEF");
		case 41:
			return joaat("COMPOSITE_LOOTABLE_WILD_MINT_DEF");
		case 42:
			return joaat("COMPOSITE_LOOTABLE_WINTERGREEN_BERRY_DEF");
		case 43:
			return joaat("COMPOSITE_LOOTABLE_YARROW_DEF");
		case 1:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_ACUNA_STAR_DEF");
		case 9:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_CIGAR_DEF");
		case 10:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_CLAM_SHELL_DEF");
		case 14:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_DRAGONS_DEF");
		case 17:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_GHOST_DEF");
		case 21:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_NIGHT_DEF");
		case 22:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_SLIPPER_DEF");
		case 24:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_MOCCASIN_DEF");
		case 25:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_NIGHT_SCENTED_DEF");
		case 30:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_QUEENS_DEF");
		case 32:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_RAT_TAIL_DEF");
		case 35:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_SPARROWS_DEF");
		case 36:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_SPIDER_DEF");
		default:
			break;
	}
	return 0;
}

Vector3 func_105(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = (iParam0 & 32767);
	iVar4 = (BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767);
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if ((iParam0 & (1 << 30)) == 0)
	{
		vVar0.x *= -1.0f;
	}
	if ((iParam0 & (1 << 31)) == 0)
	{
		vVar0.f_1 = (vVar0.y * -1.0f);
	}
	return vVar0;
}

int func_106(struct<2> /*16*/ sParam0, var uParam2)
{
	int iVar0;

	iVar0 = (BUILTIN::ROUND(MISC::ABSF(sParam0.f_0)) & 32767) | BUILTIN::SHIFT_LEFT((BUILTIN::ROUND(MISC::ABSF(sParam0.f_1)) & 32767), 15);
	if (sParam0.f_0 > 0.0f)
	{
		iVar0 |= (1 << 30);
	}
	if (sParam0.f_1 > 0.0f)
	{
		iVar0 |= (1 << 31);
	}
	return iVar0;
}

int func_107()
{
	return Global_1894899.f_2;
}

bool func_108(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_109(int iParam0, int iParam1, int iParam2)
{
	return func_183(Global_1145667[iParam2 /*7*/][iParam0], iParam1);
}

bool func_110(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_111(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_110(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_12 != -1)
	{
		return (Global_36638[iParam0] & iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] & iParam1) != 0;
}

bool func_112(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_113(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_115() - fParam1);
	func_184(uParam0, 1);
	func_185(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_114(var uParam0)
{
	return func_112(*uParam0, 2);
}

float func_115()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_116(int iParam0)
{
	if (func_3() != -1)
	{
		return false;
	}
	return func_85(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_117()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_186(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("EXOTIC_ITEMS"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_118(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_119(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_187(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_120(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_121(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_122(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_123(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_124(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_125(int iParam0, int iParam1)
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

void func_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_188(iParam0, iParam6);
	func_189(iParam0, iParam5);
	func_190(iParam0, iParam4);
	func_191(iParam0, iParam3);
	func_192(iParam0, iParam2);
	func_193(iParam0, iParam1);
}

bool func_127(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_194(iParam1) || !func_194(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_128(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = (uParam0->f_4[iParam1] & 511);
	*iParam2 = BUILTIN::SHIFT_RIGHT((uParam0->f_4[iParam1] & 3584), 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT((uParam0->f_4[iParam1] & 57344), 13);
}

void func_129(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = (uParam0->f_4[iParam1] & 511);
	*iParam2 = BUILTIN::SHIFT_RIGHT((uParam0->f_4[iParam1] & 3584), 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT((uParam0->f_4[iParam1] & 57344), 13);
}

void func_130(var uParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_97(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_97(uParam0))
		{
		}
	}
}

int func_131(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_196(iParam0);
}

bool func_132(int iParam0, int iParam1)
{
	if (func_3() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_133(int iParam0)
{
	if (func_3() != -1)
	{
		if (func_135(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_135(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_135(iParam0, (1 << 16)) && !func_135(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_135(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_135(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_135(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_136(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_137()
{
	return Global_1905944.f_5694;
}

int func_138(int iParam0)
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

bool func_139(int iParam0)
{
	if (!func_110(iParam0))
	{
		return false;
	}
	return func_111(iParam0, 1, 1);
}

void func_140(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_110(iParam0))
	{
		return;
	}
	if (func_139(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_31(iParam0);
	}
	if (!bParam1)
	{
		if (func_3() != -1)
		{
		}
		else
		{
			func_197(iParam0);
		}
	}
	func_148(iParam0, 1);
	if (func_3() == -1)
	{
		func_199(iParam0, func_198());
	}
	func_149(iParam0, 1);
	if (bParam2)
	{
		if (!func_150(0, 0, 1))
		{
			func_151(1, 6);
		}
	}
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 100;
		case 13:
		case 19:
		case 34:
			return 101;
		case 20:
			return 102;
		case 43:
			return 103;
		case 39:
			return 104;
		case 11:
			return 105;
		case 26:
			return 106;
		case 5:
		case 33:
		case 42:
			return 107;
	}
	return -1;
}

struct<2> /*16*/ func_142(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

void func_143(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> /*16*/ func_144(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

bool func_145(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return true;
	}
	return false;
}

bool func_146(int iParam0)
{
	return func_200(iParam0);
}

int func_147(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 20;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 23;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 26;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 27;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 28;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 29;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 31;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 33;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 34;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 37;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 38;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 39;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 40;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 41;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 42;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 43;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 1;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 9;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 10;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return 14;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 17;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 21;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 22;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 24;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 25;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return 30;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 32;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return 35;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return 36;
	}
	return 0;
}

void func_148(int iParam0, int iParam1)
{
	if (!func_110(iParam0))
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_36638[iParam0] |= iParam1;
		return;
	}
	Global_40.f_9274[iParam0] |= iParam1;
}

void func_149(int iParam0, bool bParam1)
{
	if (!func_110(iParam0))
	{
		return;
	}
	if (func_201(iParam0))
	{
		return;
	}
	func_148(iParam0, 2);
	if (bParam1)
	{
		if (!func_150(0, 0, 1))
		{
			func_151(1, 6);
		}
	}
}

bool func_150(int iParam0, bool bParam1, bool bParam2)
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
		if (func_202())
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
		iVar0 = func_203(Global_1898164.f_1[0 /*5*/]);
		if (func_204(iVar0) && func_205(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_195(Global_1898164.f_1[0 /*5*/]))
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

void func_151(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_206(&Global_0, 8);
	}
	if (!func_207() || func_3() != -1)
	{
		return;
	}
	func_206(&Global_0, 1);
}

bool func_152(int iParam0, int iParam1)
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

int func_153(int iParam0)
{
	Vector3 vVar0;

	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

float func_154(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2.0f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_35);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = ((float)(iVar0 * iParam1) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2.0f);
}

void func_155(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	}
	else
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_156(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_157(int iParam0)
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_158(int iParam0)
{
	int iVar0;

	if (func_3() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100.0f);
	}
	else
	{
		iVar0 = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

float func_159(int iParam0, float fParam1)
{
	return func_208(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

bool func_160(var uParam0, var uParam1, float fParam2)
{
	if (func_3() != -1)
	{
		return true;
	}
	if (!func_209(0))
	{
		return true;
	}
	if (fParam2 <= 0.0f)
	{
		return true;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477.f_191.f_3)
	{
		func_210(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}
	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_191.f_1 = 0;
	}
	Global_1347477.f_191.f_1++;
	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_26(0, 1);
			Global_1347477.f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_210(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477.f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return true;
}

void func_161(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_3() == 0)
	{
		func_211(0, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_212(0);
	if (bParam1)
	{
		func_213(fVar0);
	}
	if (fVar0 >= (100.0f - 1.0f))
	{
		func_214();
	}
	if (bParam2)
	{
		fParam0 = func_215(0, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_217(0, func_216(fParam0, -100.0f, 100.0f), bParam1);
}

void func_162(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_3() == 0)
	{
		func_211(2, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_212(2);
	if (bParam1)
	{
		func_213(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_215(2, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_217(2, func_216(fParam0, -100.0f, 100.0f), bParam1);
}

void func_163(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_3() == 0)
	{
		func_211(1, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_212(1);
	if (bParam1)
	{
		func_213(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_215(1, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_217(1, func_216(fParam0, -100.0f, 100.0f), bParam1);
}

float func_164(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2.0f);
		case 2:
			return (fParam0 * 120.0f);
		case 3:
			return (fParam0 * 2880.0f);
		default:
			break;
	}
	return fParam0;
}

void func_165(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1.0f)
	{
		if (func_218(iParam0))
		{
			fParam1 = 30.0f;
		}
		else
		{
			fParam1 = 30.0f;
		}
	}
	else if (fParam1 <= 0.0f)
	{
		return;
	}
	fParam1 *= (1.0f + Global_40.f_11095.f_70);
	switch (iParam0)
	{
		case 0:
			sVar1 = func_219(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_220(-1);
			func_221(0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_219(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_222(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_219(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_223(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_224(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_224(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_224(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_166(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_225(13);
	if (fParam0 > 10.0f)
	{
		fParam0 = 10.0f;
	}
	if (!func_4(17))
	{
		return;
	}
	if (func_226())
	{
		iVar1 = func_227(fVar0);
		fVar0 += fParam0;
		iVar2 = func_227(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477.f_195 = func_89();
			func_74(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_228(&fVar3, &fVar4);
		func_229(13, func_216(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_26(94, 0);
		}
	}
}

struct<2> /*16*/ func_167(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

bool func_168(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_169()
{
	return !Global_1911774;
}

void func_170(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_171(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_172(int iParam0, int iParam1)
{
	if (!func_168(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, iParam1);
}

bool func_173(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_174(int iParam0)
{
	if (!func_168(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_175(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_176(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_230(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_177()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_178(var uParam0, bool bParam1)
{
	if (bParam1 || !func_60(uParam0))
	{
		func_63(uParam0);
	}
}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_180(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_181(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = (*uParam0)[iVar2];
		(*uParam0)[iVar2] = (*uParam0)[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 += -1;
	}
}

bool func_182(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_183(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_184(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_186(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_187(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_188(int iParam0, int iParam1)
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

void func_189(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_190(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_120(*iParam0);
	iVar1 = func_119(*iParam0);
	if (iParam1 < 1 || iParam1 > func_125(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_191(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_192(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_193(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_194(int iParam0)
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
	iVar0 = func_124(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_123(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_122(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_119(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_120(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_121(iParam0);
	if (iVar5 < 1 || iVar5 > func_125(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_195(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_196(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_231(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_197(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_26(210, 0);
			break;
		case 16:
			func_26(211, 0);
			break;
		case 33:
			func_26(212, 0);
			break;
		case 42:
			func_26(213, 0);
			break;
		case 2:
			func_26(214, 0);
			break;
		case 3:
			func_26(215, 0);
			break;
		case 43:
			func_26(216, 0);
			break;
		case 15:
			func_26(217, 0);
			break;
		case 23:
			func_26(218, 0);
			break;
		case 37:
			func_26(219, 0);
			break;
		case 26:
			func_26(220, 0);
			break;
		case 13:
			func_26(221, 0);
			break;
		case 19:
			func_26(222, 0);
			break;
		case 34:
			func_26(223, 0);
			break;
		case 38:
			func_26(224, 0);
			break;
		case 40:
			func_26(225, 0);
			break;
		case 7:
			func_26(226, 0);
			break;
		case 20:
			func_26(227, 0);
			break;
		case 18:
			func_26(228, 0);
			break;
		case 6:
			func_26(229, 0);
			break;
		case 29:
			func_26(230, 0);
			break;
		case 39:
			func_26(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_26(233, 0);
			break;
		case 8:
			func_26(234, 0);
			break;
		case 28:
			func_26(235, 0);
			break;
		case 31:
			func_26(236, 0);
			break;
		case 12:
			func_26(237, 0);
			break;
		case 27:
			func_26(238, 0);
			break;
		case 41:
			func_26(239, 0);
			break;
	}
}

int func_198()
{
	if (func_3() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return 1;
	}
	return 0;
}

void func_199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_JN"), 0);
			}
			break;
		case 2:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_ALASKAN_GINSENG_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_ALASKAN_GINSENG_JN"), 0);
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_AMERICAN_GINSENG_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_AMERICAN_GINSENG_JN"), 0);
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_BAY_BOLETE_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_BAY_BOLETE_JN"), 0);
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_BLACKBERRY_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_BLACKBERRY_JN"), 0);
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_BLACK_CURRANT_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_BLACK_CURRANT_JN"), 0);
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_BULRUSH_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_BULRUSH_JN"), 0);
			}
			break;
		case 7:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_BURDOCK_ROOT_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_BURDOCK_ROOT_JN"), 0);
			}
			break;
		case 39:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_CARROT_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_CARROT_JN"), 0);
			}
			break;
		case 8:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_CHANTERELLE_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_CHANTERELLE_JN"), 0);
			}
			break;
		case 9:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_CIGAR_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_CIGAR_ORCHID_JN"), 0);
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_JN"), 0);
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_CREEPING_THYME_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_CREEPING_THYME_JN"), 0);
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_DESERT_SAGE_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_DESERT_SAGE_JN"), 0);
			}
			break;
		case 14:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_JN"), 0);
			}
			break;
		case 15:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_ENGLISH_MACE_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_ENGLISH_MACE_JN"), 0);
			}
			break;
		case 40:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_FEVERFEW_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_FEVERFEW_JN"), 0);
			}
			break;
		case 17:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_GHOST_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_GHOST_ORCHID_JN"), 0);
			}
			break;
		case 18:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_GOLDEN_CURRANT_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_GOLDEN_CURRANT_JN"), 0);
			}
			break;
		case 16:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_HUCKLEBERRY_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_HUCKLEBERRY_JN"), 0);
			}
			break;
		case 19:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_JN"), 0);
			}
			break;
		case 20:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_INDIAN_TOBACCO_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_INDIAN_TOBACCO_JN"), 0);
			}
			break;
		case 21:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_JN"), 0);
			}
			break;
		case 22:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_JN"), 0);
			}
			break;
		case 23:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_MILKWEED_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_MILKWEED_JN"), 0);
			}
			break;
		case 41:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_MINT_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_MINT_JN"), 0);
			}
			break;
		case 24:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_JN"), 0);
			}
			break;
		case 25:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_JN"), 0);
			}
			break;
		case 26:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_OLEANDER_SAGE_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_OLEANDER_SAGE_JN"), 0);
			}
			break;
		case 27:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_OREGANO_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_OREGANO_JN"), 0);
			}
			break;
		case 28:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_PARASOL_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_PARASOL_JN"), 0);
			}
			break;
		case 29:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_PRAIRIE_POPPY_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_PRAIRIE_POPPY_JN"), 0);
			}
			break;
		case 30:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_JN"), 0);
			}
			break;
		case 31:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_JN"), 0);
			}
			break;
		case 33:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_RASPBERRY_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_RASPBERRY_JN"), 0);
			}
			break;
		case 32:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_JN"), 0);
			}
			break;
		case 34:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_RED_SAGE_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_RED_SAGE_JN"), 0);
			}
			break;
		case 35:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_JN"), 0);
			}
			break;
		case 36:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_SPIDER_ORCHID_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_SPIDER_ORCHID_JN"), 0);
			}
			break;
		case 37:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_VANILLA_FLOWER_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_VANILLA_FLOWER_JN"), 0);
			}
			break;
		case 38:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_JN"), 0);
			}
			break;
		case 42:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_WINTERBERRY_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_WINTERBERRY_JN"), 0);
			}
			break;
		case 43:
			if (iParam1 == 1)
			{
				func_232(joaat("JOURNAL_HERB_YARROW_AR"), 0);
			}
			else
			{
				func_232(joaat("JOURNAL_HERB_YARROW_JN"), 0);
			}
			break;
		default:
			break;
	}
}

bool func_200(int iParam0)
{
	return func_183(Global_1935496.f_27, iParam0);
}

bool func_201(int iParam0)
{
	if (!func_110(iParam0))
	{
		return false;
	}
	return func_111(iParam0, 2, 1);
}

bool func_202()
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

int func_203(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_234(func_233(iParam0));
}

bool func_204(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_205(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_206(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_207()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

float func_208(float fParam0, float fParam1)
{
	if (fParam1 != 0.0f)
	{
		return ((fParam1 / 100.0f) * 200.0f);
	}
	return ((fParam0 / 8.0f) * 200.0f);
}

bool func_209(int iParam0)
{
	if (func_235())
	{
		return false;
	}
	return func_85(Global_1347702[58 /*49*/].f_15, 1);
}

bool func_210(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_236(iParam0, &sVar0);
}

void func_211(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_215(iParam0, fParam1, 1);
	}
	func_238(iParam0, (func_237(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_212(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

void func_213(float fParam0)
{
	if (fParam0 >= (100.0f - 1.0f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_214()
{
	Global_40.f_11095.f_11[14] = 100.0f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_215(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_89();
	func_239(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_240(iParam0, 2);
	if (func_127(iVar0, func_241(iParam0, 2), 1))
	{
		func_242(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_26(88, bParam2);
		return 0.0f;
	}
	func_243(iParam0, func_89(), 2);
	func_242(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_216(float fParam0, float fParam1, float fParam2)
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

void func_217(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_3() != -1)
	{
		return;
	}
	if (!func_4(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_244(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_245(iParam0), iVar0);
	func_247(func_246(iParam0), (100.0f * (BUILTIN::TO_FLOAT(iVar0) / 100.0f)), 0);
	if (((fParam1 <= func_248(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_26(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_26(func_249(iParam0), 1);
	}
	sVar1 = func_250(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

bool func_218(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_220(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(iVar0);
	}
	iVar1 = func_251(2);
	func_252(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_221(bool bParam0)
{
	if (func_3() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_26(89, 1);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_26(90, 1);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	func_253(1, bParam0, 1);
	func_254();
	Global_40.f_11095.f_43 = bParam0;
}

void func_222(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_255(2);
	func_256(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_223(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_257(2);
	func_258(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_224(int iParam0, bool bParam1, bool bParam2)
{
	func_238(iParam0, 100.0f, bParam1, bParam2, 1, 2);
}

float func_225(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

bool func_226()
{
	if (func_3() != -1)
	{
		return false;
	}
	if (Global_1347477.f_200)
	{
		return false;
	}
	if (Global_1347477.f_195 == -15)
	{
		return true;
	}
	return func_75(Global_1347477.f_195, 0);
}

int func_227(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

void func_228(var uParam0, var uParam1)
{
	if (!func_207())
	{
		*uParam0 = -100.0f;
		*uParam1 = 100.0f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_229(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0.0f;
		sVar2 = func_171(fParam1 < 0.0f, "rpg_cold", "rpg_hot");
		func_259(1, bVar1, 1, sVar2);
		func_260(!bVar1, fParam1 < 0.0f, bVar1);
		iVar0 = func_244(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_254();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_244(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_244(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_230(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_231(int iParam0)
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

void func_232(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_261(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_262(1);
		Global_40.f_11922[0] = iParam0;
	}
}

int func_233(int iParam0)
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

int func_234(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_235()
{
	if (func_3() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_236(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

float func_237(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_263();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/];
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/];
		default:
			break;
	}
	return -1.0f;
}

int func_238(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_263();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (bParam2)
	{
		if (fParam1 >= 100.0f)
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_264(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100.0f)
	{
		fParam1 = 100.0f;
	}
	else if (fParam1 < 0.0f)
	{
		fParam1 = 0.0f;
	}
	func_265(iVar0, iParam0, fParam1);
	func_266(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, func_245(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_119(*iParam0);
	iVar1 = func_120(*iParam0);
	iVar2 = func_121(*iParam0);
	iVar3 = func_122(*iParam0);
	iVar4 = func_123(*iParam0);
	iVar5 = func_124(*iParam0);
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
	iVar5 -= iParam1;
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 -= iParam2;
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 -= iParam3;
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 -= iParam4;
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_125(iVar6, iVar0);
		iVar2 += iVar7;
	}
	iVar1 -= iParam5;
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 -= iParam6;
	func_126(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_240(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_263();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_2;
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2;
		default:
			break;
	}
	return -1;
}

int func_241(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_263();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_1;
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1;
		default:
			break;
	}
	return -15;
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_263();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_263();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_244(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200.0f);
	return BUILTIN::CEIL((100.0f * fVar0));
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_246(int iParam0)
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

void func_247(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_267(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

float func_248(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100.0f);
	return ((fVar0 * 200.0f) - 100.0f);
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_250(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

int func_251(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_263();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850;
		case 1:
			return Global_1954819.f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_252(float fParam0, int iParam1)
{
	if (fParam0 == 0.0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_CHANGE_ENTITY_HEALTH(iParam1, fParam0, 0, 0);
}

void func_253(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
}

void func_254()
{
	func_268();
	func_269();
	func_270();
}

int func_255(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_263();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_2;
		case 1:
			return Global_1954819.f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_256(float fParam0)
{
	int iVar0;

	if (fParam0 == 0.0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_CHANGE_PED_STAMINA(iVar0, fParam0);
}

int func_257(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_263();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_1;
		case 1:
			return Global_1954819.f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_258(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(iVar0) && fParam0 > 0.0f)
	{
		return;
	}
	if (fParam0 == 0.0f)
	{
		return;
	}
	fVar2 = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(iVar0);
	if (fParam0 < 0.0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, 1.0f);
	}
	if (fParam0 > 0.0f)
	{
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, fVar2);
	}
}

void func_259(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_260(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_267(0, 1, bParam0, bParam1);
	sVar0 = MISC::VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[1], bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
}

void func_261(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_271(1);
	}
}

void func_262(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; // curOff = 52
		}
		else
		{
			func_261(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_271(1);
	}
}

int func_263()
{
	if (func_272())
	{
		return 1;
	}
	return 0;
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_263();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_265(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_250(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_273(iParam1), fParam2, -1);
	}
}

void func_266(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_263();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_274(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_275(iParam0, iVar0, iParam3);
	}
}

char* func_267(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_171(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_171(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_268()
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

	if (func_276())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_212(2);
	}
	if (Global_1347477.f_119)
	{
		return func_212(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_277();
	fVar2 = func_278();
	fVar3 = func_279();
	fVar4 = func_280();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_281());
	fVar7 = (func_212(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_282(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_283(3, fVar9, fVar9 > 100.0f);
	return func_216(fVar7, -100.0f, 100.0f);
}

float func_269()
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

	if (func_276())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_212(1);
	}
	if (Global_1347477.f_119)
	{
		return func_212(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_277();
	fVar2 = func_278();
	fVar3 = func_279();
	fVar4 = func_280();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_281());
	fVar7 = (func_212(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_282(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_283(2, fVar9, fVar9 > 100.0f);
	return func_216(fVar7, -100.0f, 100.0f);
}

float func_270()
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

	if (func_276())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_212(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_284())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_285())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_212(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_277();
	fVar2 = func_278();
	fVar3 = func_279();
	fVar4 = func_280();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_281());
	fVar7 = (func_212(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_282(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_283(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_212(0);
	}
	return func_216(fVar7, -100.0f, 100.0f);
}

void func_271(bool bParam0)
{
	if (bParam0)
	{
		func_286(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_287(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_272()
{
	return Global_1954819.f_866;
}

char* func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_274(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_263();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_263();
	}
	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

bool func_276()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_277()
{
	float fVar0;
	int iVar1;

	fVar0 = func_225(13);
	iVar1 = func_227(fVar0);
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

float func_278()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_279()
{
	if (func_288())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_280()
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

float func_281()
{
	return Global_1954815.f_3;
}

void func_282(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_267(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_283(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_267(iParam0, 2, 0, 0);
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

bool func_284()
{
	return func_225(12) <= -99.0f;
}

bool func_285()
{
	return func_225(12) >= 99.0f;
}

void func_286(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_288()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

