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
	bool bLocal_14 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&iScriptParam_0, 1);
	}
	Global_1898092.f_26.f_1 = iScriptParam_0;
	Global_1898092.f_26.f_2 = func_2(Global_1898092.f_26.f_1);
	if (!func_3(Global_1898092.f_26.f_2))
	{
		func_1(&iScriptParam_0, 0);
	}
	while (func_4(1) || func_4(2))
	{
		BUILTIN::WAIT(0);
	}
	func_5(16);
	func_6(iScriptParam_0, 8);
	func_7(iScriptParam_0, 1);
	while (!func_8(iScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}
	func_1(&iScriptParam_0, 0);
}

void func_1(int iParam0, bool bParam1)
{
	if (bParam1 || bLocal_14)
	{
		func_7(*iParam0, 0);
	}
	if (bLocal_14)
	{
		func_9(*iParam0, 8);
		func_10();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)
{
	if (!func_11(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_3(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_4(int iParam0)
{
	return (Global_1898092.f_1 & iParam0) != 0;
}

void func_5(int iParam0)
{
	Global_1898092.f_1 |= iParam0;
}

void func_6(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] |= iParam1;
	}
	else
	{
		Global_1058888.f_40545[iParam0 /*11*/] |= iParam1;
	}
}

void func_7(int iParam0, int iParam1)
{
	if (!func_11(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

bool func_8(int iParam0)
{
	int iVar0;

	iVar0 = func_2(iParam0);
	if (!func_3(iVar0))
	{
		bLocal_14 = true;
		return true;
	}
	if (func_12(Global_1392194[iVar0 /*10*/].f_1, 1))
	{
		return true;
	}
	if (!func_13(iParam0, 1, 0, (300.0f * 300.0f), 0))
	{
		bLocal_14 = true;
		return true;
	}
	return false;
}

void func_9(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] -= (Global_23118[iParam0 /*11*/] & iParam1);
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] -= (Global_1058888.f_40545[iParam0 /*11*/] & iParam1);
}

void func_10()
{
	Global_1898092.f_26 = 0;
	Global_1898092.f_26.f_1 = -1;
	Global_1898092.f_26.f_2 = -1;
	Global_1898092.f_26.f_7 = -1;
	Global_1898092.f_26.f_3 = 0;
	Global_1898092.f_26.f_4 = 0;
	func_14(Global_1898092.f_26.f_5);
}

bool func_11(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_12(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_13(int iParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	float fVar13;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = -1;
	if (bParam4)
	{
		iVar0 = func_15();
	}
	if (iVar0 == -1)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) /*3*/ };
	}
	if (iVar0 == iParam0)
	{
		return true;
	}
	if (VOLUME::IS_POINT_IN_VOLUME(func_16(iParam0), vVar1))
	{
		return true;
	}
	if (bParam1)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) /*3*/ };
		vVar4 = { VOLUME::GET_VOLUME_COORDS(func_16(iParam0)) /*3*/ };
		vVar1.f_2 = 0.0f;
		vVar4.f_2 = 0.0f;
		fVar13 = BUILTIN::VDIST2(vVar1, vVar4);
		if (fVar13 < fParam3)
		{
			if (!bParam2)
			{
				return true;
			}
			else
			{
				vVar7 = { func_18(func_17(CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING())) /*3*/ };
				vVar10 = { func_18(vVar4 - vVar1) /*3*/ };
				if (func_19(vVar7, vVar10) > 0.0f)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_14(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_15()
{
	return Global_1894899.f_2;
}

int func_16(int iParam0)
{
	if (!func_11(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

Vector3 func_17(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0.0f;
}

Vector3 func_18(Vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0.0f)
	{
		fVar1 = (1.0f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) /*3*/ };
	}
	else
	{
		vParam0.x = 0.0f;
		vParam0.f_1 = 0.0f;
		vParam0.f_2 = 0.0f;
	}
	return vParam0;
}

float func_19(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, var uParam5)
{
	return ((sParam0.f_0 * sParam3.f_0) + (sParam0.f_1 * sParam3.f_1));
}

