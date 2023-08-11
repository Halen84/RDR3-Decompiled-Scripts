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
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#pragma endregion

void __SCRIPT()
{
	char cVar0[64];
	struct<5> /*40*/ sVar8;
	bool bVar13;
	bool bVar14;
	int iVar15;
	struct<10> /*80*/ sVar16;
	struct<16> /*128*/ sVar26;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_14 = -1;
	iLocal_16 = sScriptParam_0.f_0;
	if (func_1() != -1)
	{
		func_2(0, 0);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(sScriptParam_0.f_1))
	{
		func_2(0, 0);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(0, 0);
	}
	sVar8 = -1;
	sVar8.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(sScriptParam_0.f_1, true) /*3*/ };
	sVar8.f_4 = TASK::_GET_SCENARIO_POINT_HEADING(sScriptParam_0.f_1, true);
	while (func_3(&sVar8))
	{
		BUILTIN::WAIT(0);
	}
	func_4();
	iVar15 = func_6(sVar8.f_1, &bVar13, func_5() == 0);
	func_7();
	if (!func_8(sVar8.f_1))
	{
		if (func_9() && bVar13)
		{
			func_2(0, 0);
		}
	}
	strcpy_s(&cVar0, 64, func_10(&sVar8, &bVar14));
	if (func_11(sVar8.f_1))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	if (func_8(sVar8.f_1))
	{
		if (!func_12(sVar8.f_0))
		{
			if (func_5() != 0)
			{
				sVar8.f_0 = 0;
			}
			else
			{
				sVar8.f_0 = 3;
			}
		}
		strcpy_s(&cVar0, 64, func_13(func_5()));
		if (!func_14(sVar8.f_0, (1 << 15)))
		{
			func_15(sVar8.f_0);
			bVar13 = true;
		}
	}
	else if (func_5() == 1)
	{
		if (func_16())
		{
			func_2(iVar15, !bVar14);
		}
		if (func_17())
		{
			func_2(iVar15, 1);
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	func_18(sVar8.f_1, sVar8.f_0);
	sVar16.f_0 = sVar8.f_0;
	sVar16.f_1 = sScriptParam_0.f_1;
	sVar16.f_6 = { sVar8.f_1 /*3*/ };
	sVar16.f_6.f_3 = sVar8.f_4;
	sVar16.f_4 = !bVar13;
	sVar26 = { sVar16 /*10*/ };
	MemCopy(&(sVar26.f_10), {cVar0}, 4);
	sVar26.f_15 = 1;
	if (func_5() == 0)
	{
		sVar26.f_14 = 1200;
	}
	else
	{
		sVar26.f_14 = (1 << 10);
	}
	func_19(sVar26, 2);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("PROPSET_GANG_CAMP_PLAYER_CRAFTING"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("PROPSET_GANG_CAMP_PLAYER_CRAFTING", false);
	}
	func_2(0, 0);
}

int func_1()
{
	return Global_1572887.f_12;
}

void func_2(int iParam0, bool bParam1)
{
	int iVar0;

	SCRIPTS::_0xE7282390542F570D(iLocal_16);
	if (func_1() != -1)
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	iVar0 = func_5();
	if (iVar0 != 0)
	{
		Global_1393237.f_9--;
		if (Global_1393237.f_9 < 0)
		{
			Global_1393237.f_9 = 0;
		}
	}
	else if (iVar0 == 0)
	{
		Global_1393237.f_10--;
		if (Global_1393237.f_10 < 0)
		{
			Global_1393237.f_10 = 0;
		}
	}
	if (bParam1)
	{
		func_15(iParam0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(var uParam0)
{
	if (Global_1879534)
	{
		return true;
	}
	return false;
}

void func_4()
{
	if (CLOCK::GET_CLOCK_HOURS() >= 18 || CLOCK::GET_CLOCK_HOURS() <= 6)
	{
		Global_1393237.f_6 = 3;
	}
	else
	{
		Global_1393237.f_6 = 2;
	}
}

int func_5()
{
	return 1;
}

int func_6(Vector3 vParam0, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	if (bParam4)
	{
		iVar2 = 3;
		iVar3 = 5;
	}
	else
	{
		iVar2 = 0;
		iVar3 = 2;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[iVar1 /*30*/].f_3, vParam0) < 10.0f)
		{
			*bParam3 = 0;
			return iVar1;
		}
		if ((iVar0 == -1 && !func_20(iVar1)) && (func_21(iVar1) || (!bParam4 && func_22(Global_1393237.f_11[iVar1 /*30*/].f_3, Global_36) > 2000.0f)))
		{
			*bParam3 = 1;
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (!func_14(iVar0, (1 << 15)))
	{
		func_15(iVar0);
	}
	return iVar0;
}

void func_7()
{
	int iVar0;
	int iVar1;

	if (func_1() != -1)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		if (func_21(iVar0))
		{
			if (!func_23(Global_1393237.f_11[iVar0 /*30*/].f_3) && !func_14(iVar0, 1))
			{
				func_24(Global_1393237.f_11[iVar0 /*30*/].f_3, 0);
			}
		}
		else if (func_14(iVar0, (1 << 13)))
		{
			if (func_25(iVar0))
			{
				iVar1 = func_26(Global_1393237.f_11[iVar0 /*30*/].f_3, 0);
				if (iVar1 >= 0)
				{
					if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1911670[iVar1]))
					{
						if (VOLUME::_0xF6CE6F9C3897804E(Global_1911670[iVar1]) > 45.0f)
						{
							func_24(Global_1393237.f_11[iVar0 /*30*/].f_3, 0);
							func_27(Global_1393237.f_11[iVar0 /*30*/].f_3, 45.0f, "sCampfireAllDead", 0, 0, 1, 0, -1082130432 /* Float: -1f */);
							func_28(iVar0, (1 << 22), 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_8(Vector3 vParam0)
{
	if (func_29(vParam0))
	{
		return false;
	}
	if (func_30(vParam0))
	{
		return true;
	}
	return false;
}

bool func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_5();
	if (iVar0 != 0)
	{
		Global_1393237.f_9++;
		if (Global_1393237.f_9 > 1)
		{
			return true;
		}
	}
	if (iVar0 == 0)
	{
		Global_1393237.f_10++;
		if (Global_1393237.f_10 > 1)
		{
			return true;
		}
		iVar1 = 3;
		while (iVar1 <= 5)
		{
			if (func_20(iVar1))
			{
				iVar2++;
			}
			iVar1++;
		}
		if (iVar2 > 0)
		{
			return true;
		}
	}
	return false;
}

char* func_10(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_5();
	*uParam0 = func_6(uParam0->f_1, &bVar1, iVar0 == 0);
	if (!func_12(*uParam0))
	{
		return "";
	}
	if (Global_1393237.f_199)
	{
		return "";
	}
	if (func_29(uParam0->f_1))
	{
		*bParam1 = 1;
		return "";
	}
	if (func_8(uParam0->f_1) || func_14(*uParam0, (1 << 19)))
	{
		return func_13(iVar0);
	}
	if (bVar1)
	{
		if (func_31(1) > 1 && iVar0 != 0)
		{
			return "";
		}
		if (!func_32(uParam0->f_1, *uParam0))
		{
			return "";
		}
		if (func_33(uParam0->f_1))
		{
			return "";
		}
		if (func_34(*uParam0, iVar0 == 0))
		{
			return "";
		}
		if (func_35(uParam0->f_1, 1, 0, 0))
		{
			return "";
		}
		if (func_36(*uParam0))
		{
			return "";
		}
		if (func_37(uParam0->f_1, *uParam0))
		{
			return "";
		}
		if (!func_38(uParam0->f_1, *uParam0, iVar0 == 0))
		{
			return "";
		}
	}
	else if (func_21(*uParam0))
	{
		func_15(*uParam0);
		*uParam0 = -1;
		return "";
	}
	else if (func_20(*uParam0))
	{
		*bParam1 = 1;
		*uParam0 = -1;
		return "";
	}
	else
	{
		iVar0 = Global_1393237.f_11[*uParam0 /*30*/].f_2;
	}
	return func_13(iVar0);
}

bool func_11(Vector3 vParam0)
{
	int iVar0;

	if (func_23(Global_1393237.f_200))
	{
		return false;
	}
	if (func_30(vParam0))
	{
		return false;
	}
	if (iLocal_14 == -1)
	{
		iLocal_14 = func_39(vParam0);
	}
	iVar0 = func_40(iLocal_14);
	return BUILTIN::VDIST(Global_1393237.f_200, vParam0) < (func_41(func_5(), iVar0, 0) + 20.0f);
}

bool func_12(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1393237.f_11)
	{
		return false;
	}
	return true;
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "campfire_gang";
		case 1:
			return "campfire_always";
		default:
			break;
	}
	return "";
}

bool func_14(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return func_42(Global_1393237.f_11[iParam0 /*30*/].f_10, iParam1);
}

void func_15(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return;
	}
	if (!func_23(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		func_24(Global_1393237.f_11[iParam0 /*30*/].f_3, 0);
		PED::_0x9851DE7AEC10B4E1(Global_1393237.f_11[iParam0 /*30*/].f_3, 20.0f, 1, 0);
	}
	Global_1393237.f_11[iParam0 /*30*/] = -15;
	Global_1393237.f_11[iParam0 /*30*/].f_2 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_3 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1393237.f_11[iParam0 /*30*/].f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1393237.f_11[iParam0 /*30*/].f_9 = 0.0f;
	if (func_14(iParam0, (1 << 23)))
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = (1 << 23);
	}
	else
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 0;
		if (Global_1393237.f_11[iParam0 /*30*/].f_17 != func_43())
		{
		}
		Global_1393237.f_11[iParam0 /*30*/].f_17 = func_43();
	}
	Global_1393237.f_11[iParam0 /*30*/].f_11 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_12 = 0;
	Global_1393237.f_11[iParam0 /*30*/].f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_14[iVar0] = 0;
		iVar0++;
	}
	func_44(iParam0, 1);
	Global_1393237.f_11[iParam0 /*30*/].f_29 = 0;
	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[0]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[0]));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[1]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[1]));
		}
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1393237.f_11[iParam0 /*30*/].f_21))
	{
		func_24(Global_1393237.f_11[iParam0 /*30*/].f_3, 1);
	}
}

bool func_16()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	MISC::GET_CURR_WEATHER_STATE(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	switch (iVar3)
	{
		case joaat("SANDSTORM"):
		case joaat("THUNDER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("SNOWCLEARING"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			return true;
	}
	return false;
}

bool func_17()
{
	return ((Global_1894899 & 1) != 0 && func_45() != -1);
}

void func_18(Vector3 vParam0, int iParam3)
{
	Global_1393237.f_11[iParam3 /*30*/].f_3 = { vParam0 /*3*/ };
	func_28(iParam3, (1 << 9), 0);
}

void func_19(struct<16> /*128*/ sParam0, int iParam16)
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
	if (!func_46(iParam16, 2))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(sParam0.f_10))) > 0 || func_47(&(sParam0.f_10)))
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
			func_48(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_20(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return func_14(iParam0, (1 << 9));
}

bool func_21(int iParam0)
{
	if (Global_1393237.f_11[iParam0 /*30*/] == -15)
	{
		if (!func_14(iParam0, (1 << 9)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return func_50(func_49(iParam0));
}

float func_22(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_23(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

void func_24(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_23(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) /*3*/ };
			if (func_51(vVar2, vParam0, 2.0f, 1))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vVar2, 2.0f, 0, iParam3, (1 << 14)))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

bool func_25(int iParam0)
{
	if (func_14(iParam0, (1 << 22)))
	{
		return false;
	}
	if (func_14(iParam0, 1))
	{
		return false;
	}
	if (func_23(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		return false;
	}
	return true;
}

int func_26(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_23(vParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) /*3*/ };
			if (func_51(vVar2, vParam0, 2.0f, 1))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vVar2, 2.0f, 0, iParam3, (1 << 14)))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_27(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_23(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_52(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_CREATE_VOLUME_LOCK(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) /*3*/ };
		iVar0 = VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (bParam9 >= 0.0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	func_53(iVar0, bParam8);
	return iVar0;
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

bool func_29(Vector3 vParam0)
{
	int iVar0;

	iVar0 = func_54(vParam0);
	if (iVar0 < 0)
	{
		return false;
	}
	return func_14(iVar0, 1);
}

bool func_30(Vector3 vParam0)
{
	if (!func_23(Global_1393237.f_200))
	{
		return BUILTIN::VDIST(Global_1393237.f_200, vParam0) < 5.0f;
	}
	return false;
}

int func_31(bool bParam0)
{
	int iVar0;

	iVar0 = func_55(1);
	if (bParam0)
	{
		return iVar0 + 1;
	}
	return iVar0;
}

bool func_32(Vector3 vParam0, var uParam3)
{
	int iVar0;

	if (!func_56(0, vParam0, -1, -1))
	{
		return false;
	}
	if (Global_1327479.f_5 > MISC::GET_GAME_TIMER())
	{
		return false;
	}
	if (!func_57(4))
	{
		return false;
	}
	if (!func_58(func_5(), vParam0))
	{
		return false;
	}
	if (func_59() && func_60(vParam0, iLocal_14))
	{
		if (func_61())
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 75;
		}
	}
	else
	{
		iVar0 = 100;
	}
	if ((MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 100) >= iVar0)
	{
		return false;
	}
	return true;
}

bool func_33(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_10991.f_4)
	{
		if (func_51(Global_40.f_10991.f_4[iVar0 /*3*/], vParam0, 10.0f, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_34(int iParam0, bool bParam1)
{
	if (func_62(PLAYER::PLAYER_ID(), 0, 1, 1))
	{
		return true;
	}
	if (func_17())
	{
		return true;
	}
	if (func_14(iParam0, (1 << 12)) || func_14(iParam0, (1 << 17)))
	{
		return true;
	}
	return false;
}

bool func_35(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_23(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = (1 << 14);
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_36(int iParam0)
{
	float fVar0;
	bool bVar1;
	float fVar2;

	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1393237.f_11[iParam0 /*30*/].f_3, true);
	bVar1 = func_63(iParam0, fVar0, 1);
	if (bVar1)
	{
		fVar2 = 130.0f;
	}
	else
	{
		fVar2 = 100.0f;
	}
	if (fVar0 < fVar2)
	{
		return true;
	}
	return false;
}

bool func_37(Vector3 vParam0, int iParam3)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (iLocal_14 == -1)
	{
		iLocal_14 = func_39(vParam0);
	}
	iVar2 = func_40(iLocal_14);
	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		if (iVar0 != iParam3)
		{
			if (!func_23(Global_1393237.f_11[iVar0 /*30*/].f_3))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_1393237.f_11[iVar0 /*30*/].f_3, true);
				if (fVar1 < func_41(func_5(), iVar2, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_38(Vector3 vParam0, int iParam3, bool bParam4)
{
	if (func_30(vParam0) || func_14(iParam3, (1 << 19)))
	{
		return true;
	}
	if (func_64(iParam3))
	{
		return true;
	}
	if (bParam4)
	{
		if (Global_1393237.f_8 + 1 > Global_1393237.f_6)
		{
			return false;
		}
	}
	else if (Global_1393237.f_7 + 1 > Global_1393237.f_6)
	{
		return false;
	}
	if (func_65(50, 0, 1))
	{
		return false;
	}
	if (bParam4)
	{
		if (func_16())
		{
			return false;
		}
	}
	return true;
}

int func_39(Vector3 vParam0)
{
	return func_66(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_40(int iParam0)
{
	int iVar0;

	iVar0 = func_68(iParam0, func_67(), 0, 0);
	return func_69(iVar0);
}

float func_41(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return 200.0f;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 3:
					return 200.0f;
				case 0:
					return 220.0f;
				default:
					return 300.0f;
			}
			break;
	}
	return 400.0f;
}

bool func_42(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_43()
{
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;
	}
}

int func_45()
{
	return Global_1894899.f_2;
}

bool func_46(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_47(char* sParam0)
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

void func_48(int iParam0)
{
	if (func_46(iParam0, 1))
	{
		func_70(1);
	}
}

int func_49(int iParam0)
{
	var uVar0;

	uVar0 = Global_1393237.f_11[iParam0 /*30*/];
	func_71(&uVar0, 0, 0, 0, 1, 0, 0, 0);
	return uVar0;
}

bool func_50(int iParam0)
{
	return Global_1899515 > iParam0;
}

bool func_51(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

bool func_52(Vector3 vParam0)
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar0) || iVar0 == iParam0)
		{
			Global_1911670[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_54(Vector3 vParam0)
{
	int iVar0;

	iVar0 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_64(iVar0))
		{
			if (func_51(vParam0, Global_1393237.f_11[iVar0 /*30*/].f_3, 10.0f, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_72(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_73(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_73(), iVar3);
		if (func_74(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

bool func_56(bool bParam0, Vector3 vParam1, int iParam4, int iParam5)
{
	bool bVar0;

	if (bParam0)
	{
		if (iParam4 == -1)
		{
			iParam4 = func_39(vParam1);
		}
		bVar0 = iParam4 == 10;
		if (!bVar0)
		{
			if (Global_1393237.f_1 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237.f_1) < func_75(iParam5))
			{
				return false;
			}
		}
		else if (Global_1393237.f_1 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237.f_1) < 961920)
		{
			return false;
		}
		if (Global_1393237.f_2 != 0)
		{
			if (MISC::GET_GAME_TIMER() - Global_1393237.f_2) < func_76()
			{
				return false;
			}
		}
	}
	else
	{
		if (Global_1393237 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237) < func_77())
		{
			return false;
		}
		if (Global_1393237.f_2 != 0)
		{
			if (MISC::GET_GAME_TIMER() - Global_1393237.f_2) < func_76()
			{
				return false;
			}
		}
	}
	if (MISC::GET_GAME_TIMER() < Global_1393237.f_4)
	{
		return false;
	}
	return true;
}

bool func_57(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_78(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_58(int iParam0, Vector3 vParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = vParam1.z;
	fVar1 = Global_36.f_2;
	if (fVar1 < (fVar0 - 45.0f))
	{
		return false;
	}
	return true;
}

bool func_59()
{
	if (Global_1392135.f_3 != -1)
	{
		return true;
	}
	return Global_1392135.f_3 != -1;
}

bool func_60(Vector3 vParam0, int iParam3)
{
	int iVar0;

	if (iParam3 == -1)
	{
		iParam3 = func_39(vParam0);
	}
	iVar0 = func_68(iParam3, 0, 0, 0);
	if (func_79(iVar0, vParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_61()
{
	if (((((func_80(64) || func_80(256)) || func_80((1 << 10))) || func_80((1 << 12))) || func_80((1 << 14))) || func_80((1 << 16)))
	{
		return true;
	}
	return false;
}

int func_62(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_81(bParam1, bParam2, bParam3);
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

int func_63(int iParam0, float fParam1, bool bParam2)
{
	if (fParam1 < 180.0f)
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (CAM::IS_SPHERE_VISIBLE(Global_1393237.f_11[iParam0 /*30*/].f_3 + Vector(1.0f, 0.0f, 0.0f), 3.0f))
			{
				return 1;
			}
			if (bParam2)
			{
				if (CAM::IS_SPHERE_VISIBLE(Global_1393237.f_11[iParam0 /*30*/].f_3 + Vector(5.5f, 0.0f, 0.0f), 3.0f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_64(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return Global_1393237.f_11[iParam0 /*30*/].f_2 != -1;
}

bool func_65(int iParam0, bool bParam1, bool bParam2)
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
		if (func_82())
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
		iVar0 = func_83(Global_1898164.f_1[0 /*5*/]);
		if (func_84(iVar0) && func_85(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_86(Global_1898164.f_1[0 /*5*/]))
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

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_67()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_68(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;

	bVar0 = (func_67() && !bParam2);
	switch (iParam0)
	{
		case 15:
		case 16:
			return 5;
		case 3:
		case 9:
			return 0;
		case 1:
			if (!bVar0 && !bParam1)
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 10:
			return 1;
		case 4:
		case 12:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
		case 0:
		case 11:
			return 2;
		case 5:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
	}
	return -1;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 0:
			return 2;
		case 3:
			return 1;
		case 1:
			return 3;
		default:
			break;
	}
	return -1;
}

void func_70(int iParam0)
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

void func_71(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_87(*uParam0);
	iVar1 = func_88(*uParam0);
	iVar2 = func_89(*uParam0);
	iVar3 = func_90(*uParam0);
	iVar4 = func_91(*uParam0);
	iVar5 = func_92(*uParam0);
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
	iVar6 = func_93(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_93(iVar1, iVar0);
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
	func_94(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_95(&iVar1, (1 << 31));
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 & (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_73()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_74(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_1() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	func_96(&iVar2, &iVar3, &iVar4);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1393237.f_11[iVar0 /*30*/].f_2 == 0)
		{
			if (func_14(iVar0, iVar2) || func_14(iVar0, iVar3))
			{
				if (iVar1 < 1083240)
				{
					iVar1 = 1083240;
				}
			}
			else if (func_14(iVar0, iVar4))
			{
				if (iVar1 < 720720)
				{
					iVar1 = 720720;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		iVar1 = 360360;
	}
	if (iParam0 != -1)
	{
		if (iParam0 == Global_1393237.f_209)
		{
			iVar1 = BUILTIN::FLOOR((2.0f * (float)iVar1));
		}
	}
	return iVar1;
}

int func_76()
{
	return 240000;
}

int func_77()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	func_96(&iVar2, &iVar3, &iVar4);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1393237.f_11[iVar0 /*30*/].f_2 != 0)
		{
			if (func_14(iVar0, iVar2))
			{
				iVar1 = 2885760;
			}
			else if (func_14(iVar0, iVar3))
			{
				if (iVar1 < 2882880)
				{
					iVar1 = 2882880;
				}
			}
			else if (func_14(iVar0, iVar4))
			{
				if (iVar1 < 2880000)
				{
					iVar1 = 2880000;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		iVar1 = 1440000;
	}
	return iVar1;
}

int func_78(int iParam0, bool bParam1)
{
	switch (func_97(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_79(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!func_98(iParam0, 0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1392050[iParam0 /*14*/].f_13))
	{
		func_99(iParam0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392050[iParam0 /*14*/].f_13))
	{
		if ((bParam4 || (!func_67() && func_100(iParam0))) || (func_67() && func_101(iParam0)))
		{
			return VOLUME::IS_POINT_IN_VOLUME(Global_1392050[iParam0 /*14*/].f_13, vParam1);
		}
	}
	else
	{
		switch (func_102())
		{
			case 13:
			case 14:
			case 15:
			case 16:
				if (iParam0 == 5)
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_80(int iParam0)
{
	return (Global_1392135.f_1 & iParam0) != 0;
}

int func_81(bool bParam0, bool bParam1, bool bParam2)
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

bool func_82()
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

int func_83(int iParam0)
{
	if (!func_86(iParam0))
	{
		return -1;
	}
	return func_104(func_103(iParam0));
}

bool func_84(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_85(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_86(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_87(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_105(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_88(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_89(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_90(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_91(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_92(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_93(int iParam0, int iParam1)
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

void func_94(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_106(uParam0, iParam6);
	func_107(uParam0, iParam5);
	func_108(uParam0, iParam4);
	func_109(uParam0, iParam3);
	func_110(uParam0, iParam2);
	func_111(uParam0, iParam1);
}

void func_95(int iParam0, int iParam1)
{
	*iParam0 -= (*iParam0 & iParam1);
}

void func_96(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 9484;
	*iParam1 = 66;
	*iParam2 = 128;
}

int func_97(int iParam0)
{
	if (!func_86(iParam0))
	{
		return -1;
	}
	return func_112(iParam0);
}

bool func_98(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

void func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GangTerritoryODR");
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -2130.477f, 650.93f, 134.0f, 0.0f, 0.0f, -9.000001f, 550.0f, 290.0f, 400.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -1515.893f, 438.8593f, 123.8794f, 0.0f, 0.0f, -22.99999f, 998.0f, 473.0f, 800.0f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -793.1203f, 320.4612f, 67.59668f, 0.0f, 0.0f, 22.0f, 725.0f, 604.0f, 400.0f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -337.4048f, 658.247f, 151.0f, 0.0f, 0.0f, -5.0f, 421.0f, 576.0f, 400.0f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, 256.0334f, 1317.352f, 189.7937f, 0.0f, 0.0f, 18f, 693.0f, 492.0f, 400.0f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, 335.598f, 633.835f, 151.0f, 0.0f, 0.0f, 11.68f, 421.0f, 576.0f, 400.0f);
			break;
		case 1:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GangTerritoryINB");
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, 2309.554f, 1094.065f, 122.2573f, 0.0f, 0.0f, -7.0f, 311.0f, 357.0f, 400.0f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, 2448.154f, 1722.388f, 106.8464f, 0.0f, 0.0f, -15f, 329.0f, 503.0f, 400.0f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, 2373.0f, 1410.837f, 88.0f, 0.0f, 0.0f, -7.999999f, 323.0f, 274.0f, 399.0f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, 2913.521f, 1417.039f, 51.85259f, 0.0f, 0.0f, -7.999999f, 1000.0f, 1000.0f, 399.0f);
			break;
		case 2:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1444.124f, -1663.972f, 103.0f, 0.0f, 0.0f, 25f, 785.0f, 1402.462f, 800.0f, "GangTerritoryEXC");
			break;
		case 3:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GangTerritorySAV");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -2316.826f, -1167.406f, 153.7127f, 0.0f, 0.0f, 30.0f, 676.5008f, 927.0109f, 163.3098f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -2192.601f, -1729.948f, 153.7126f, 0.0f, 0.0f, 28.40238f, 346.8922f, 176.3344f, 163.3098f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -2054.552f, -1804.523f, 153.7126f, 0.0f, 0.0f, -37.77114f, 316.7911f, 176.3344f, 163.3098f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -1966.271f, -1572.086f, 153.7126f, 0.0f, 0.0f, 98.67613f, 548.4231f, 322.8264f, 163.3098f);
			break;
		case 4:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GangTerritoryRAN");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -1746.924f, 208.3046f, 220.6833f, 0.0f, 0.0f, 0.0f, 956.0742f, 1526.917f, 400.0f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -2682.787f, 256.4973f, 220.6833f, 0.0f, 0.0f, 0.0f, 956.0742f, 1427.599f, 400.0f);
			break;
		case 5:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GangTerritoryBND");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -1425.634f, -2201.19f, 53.50934f, 0.0f, 0.0f, 0.0f, 296.6014f, 304.1389f, 89.12419f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -4672.855f, -3822.961f, 53.50933f, 0.0f, 0.0f, 91.0172f, 3000.0f, 6900.0f, 250.124f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Global_1392050[iParam0 /*14*/].f_13, -4136.813f, -2096.956f, 53.50934f, 0.0f, 0.0f, 0.0f, 3500.01f, 600.0f, 300.0f);
			break;
		default:
			return;
	}
}

bool func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 5:
			return true;
		case 3:
		case 4:
			return false;
	}
	return false;
}

bool func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return false;
		case 3:
		case 4:
		case 5:
			return true;
	}
	return false;
}

int func_102()
{
	return Global_1897952.f_41;
}

int func_103(int iParam0)
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

int func_104(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_105(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_106(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*uParam0 |= (1 << 31);
	}
	else
	{
		*uParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*uParam0 -= (*uParam0 & (1 << 31));
	}
}

void func_107(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 62914560);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_108(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_88(*uParam0);
	iVar1 = func_87(*uParam0);
	if (iParam1 < 1 || iParam1 > func_93(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= (*uParam0 & 4063232);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_109(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 126976);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_110(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 4032);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_111(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= (*uParam0 & 63);
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

int func_112(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_113(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_113(int iParam0)
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

