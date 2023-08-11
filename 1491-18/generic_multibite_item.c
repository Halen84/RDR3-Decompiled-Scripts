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
	struct<4> /*32*/ sScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#pragma endregion

void __SCRIPT()
{
	struct<2> /*16*/ sVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	sVar0.f_1.f_2 = 1086324736;
	sVar0.f_1.f_11.f_1 = 20;
	sVar0.f_1.f_33 = 20;
	func_1(&sScriptParam_0, &(sVar0.f_1));
	sVar0.f_1.f_2 = 3.0f;
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (!sScriptParam_0.f_3)
		{
			func_2(&(sVar0.f_1));
		}
		switch (sVar0.f_0)
		{
			case 0:
				if (func_3(sVar0.f_1, 0))
				{
					func_4(&(sVar0.f_1));
				}
				if (sScriptParam_0.f_3)
				{
					sVar0.f_1.f_2 = 1.0f;
					func_5(&sVar0, 2);
				}
				else
				{
					func_5(&sVar0, 1);
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("APPLYSTAT")))
				{
					sVar0.f_1.f_1++;
					func_6(&(sVar0.f_1), (float)sVar0.f_1.f_1 >= sVar0.f_1.f_2);
				}
				if ((float)sVar0.f_1.f_1 >= sVar0.f_1.f_2)
				{
					func_5(&sVar0, 3);
				}
				break;
			case 2:
				func_6(&(sVar0.f_1), 1);
				func_5(&sVar0, 3);
				break;
			case 3:
				if (sScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (sVar0.f_0 <= 1)
	{
		while ((float)sVar0.f_1.f_1 < sVar0.f_1.f_2)
		{
			sVar0.f_1.f_1 = (1 + sVar0.f_1.f_1);
			func_6(&(sVar0.f_1), (float)sVar0.f_1.f_1 >= sVar0.f_1.f_2);
		}
	}
}

void func_1(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_2;
	uParam1->f_174 = uParam0->f_1;
	uParam1->f_175 = Global_35;
}

int func_2(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_35, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1234314267))
		{
			func_7(uParam0);
			return 1;
		}
	}
	if (!uParam0->f_177)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("ITEMREMOVED")))
		{
			uParam0->f_177 = 1;
		}
	}
	return 0;
}

bool func_3(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_4(var uParam0)
{
	int iVar0;

	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(*uParam0, &(uParam0->f_11));
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(uParam0->f_11.f_1[iVar0], &(uParam0->f_33[iVar0 /*7*/]));
		iVar0++;
	}
}

void func_5(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_6(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;

	if ((func_8(*uParam0, joaat("CI_TAG_ITEM_HERB")) || func_8(*uParam0, joaat("CI_TAG_ITEM_MUSHROOM"))) || func_8(*uParam0, joaat("CI_TAG_ITEM_BERRY")))
	{
		bVar8 = true;
	}
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1935496.f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (joaat("EFFECT_HEALTH") == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar1 = func_9(0, ((float)uParam0->f_33[iVar0 /*7*/].f_2 / uParam0->f_2));
			func_10(((float)uParam0->f_33[iVar0 /*7*/].f_2 / uParam0->f_2), 1);
			func_11(0, 7000);
			bVar10 = true;
		}
		else if (joaat("EFFECT_DEADEYE") == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar2 = func_9(2, ((float)uParam0->f_33[iVar0 /*7*/].f_2 / uParam0->f_2));
			func_12(((float)uParam0->f_33[iVar0 /*7*/].f_2 / uParam0->f_2));
			func_11(2, 7000);
			bVar9 = true;
		}
		else if (joaat("EFFECT_STAMINA") == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar3 = func_9(1, ((float)uParam0->f_33[iVar0 /*7*/].f_2 / uParam0->f_2));
			func_13(((float)uParam0->f_33[iVar0 /*7*/].f_2 / uParam0->f_2));
			func_11(1, 7000);
		}
		else if (joaat("EFFECT_HEALTH_CORE") == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar4 = func_14(((float)uParam0->f_33[iVar0 /*7*/].f_2 / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (func_15(&(uParam0->f_9), &(uParam0->f_10), fVar4))
			{
				func_16(fVar4, 1, bVar8, 1);
				func_11(0, 7000);
			}
			bVar10 = true;
		}
		else if (joaat("EFFECT_DEADEYE_CORE") == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar5 = func_14(((float)uParam0->f_33[iVar0 /*7*/].f_2 / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (func_15(&(uParam0->f_9), &(uParam0->f_10), fVar5))
			{
				func_17(fVar5, 1, bVar8, 1);
				func_11(2, 7000);
				bVar9 = true;
			}
		}
		else if (joaat("EFFECT_STAMINA_CORE") == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar6 = func_14(((float)uParam0->f_33[iVar0 /*7*/].f_2 / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (func_15(&(uParam0->f_9), &(uParam0->f_10), fVar6))
			{
				func_18(fVar6, 1, bVar8, 1);
				func_11(1, 7000);
			}
		}
		else if (joaat("EFFECT_CALORIES") == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			func_19((BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (joaat("EFFECT_HEALTH_CORE_GOLD") == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = func_20(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				func_21(19, fVar7);
				bVar10 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE_GOLD") == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = func_20(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				func_21(20, fVar7);
				bVar9 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE_GOLD") == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = func_20(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				func_21(18, fVar7);
			}
			else if (joaat("EFFECT_HEALTH_OVERPOWERED") == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = func_20(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				func_21(0, fVar7);
				bVar10 = true;
			}
			else if (joaat("EFFECT_DEADEYE_OVERPOWERED") == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = func_20(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				func_21(2, fVar7);
				bVar9 = true;
			}
			else if (joaat("EFFECT_STAMINA_OVERPOWERED") == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = func_20(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				func_21(1, fVar7);
			}
		}
		iVar0++;
	}
	if (bVar10)
	{
		if (fVar4 > 0.0f || fVar1 > 0.0f)
		{
			iVar11 = 1;
		}
	}
	func_22(*uParam0, bParam1, bVar9, iVar11);
	func_7(uParam0);
	uParam0->f_3 += fVar1;
	uParam0->f_4 += fVar2;
	uParam0->f_5 += fVar3;
	uParam0->f_6 += fVar4;
	uParam0->f_7 += fVar5;
	uParam0->f_8 += fVar6;
}

void func_7(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_174, 2, false);
			uParam0->f_176 = 1;
		}
	}
}

bool func_8(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, joaat("TAG_ITEM_PROPERTY")))
	{
		return true;
	}
	return false;
}

float func_9(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			break;
		case 1:
			fVar0 = PED::_GET_PED_STAMINA(Global_35);
			fVar1 = PED::_GET_PED_MAX_STAMINA(Global_35);
			break;
		case 2:
			fVar0 = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			fVar1 = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2.0f);
}

void func_10(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;

	fVar0 = (50.0f * fParam0);
	iVar1 = BUILTIN::ROUND((fVar0 + (float)ENTITY::GET_ENTITY_HEALTH(Global_35)));
	if (bParam1 && fVar0 < 0.0f)
	{
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, fVar0, 0, 0);
	}
	else if (fParam0 <= 0.0f || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	}
	else
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_11(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_12(float fParam0)
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), (fParam0 * 14.0f), 0, 0, 0);
}

void func_13(float fParam0)
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	if (fParam0 == -1.0f)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100.0f);
	}
	else
	{
		iVar0 = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, (fParam0 * (float)iVar0));
	}
}

float func_14(float fParam0, float fParam1)
{
	if (fParam1 != 0.0f)
	{
		return ((fParam1 / 100.0f) * 200.0f);
	}
	return ((fParam0 / 8.0f) * 200.0f);
}

bool func_15(var uParam0, var uParam1, float fParam2)
{
	if (func_23() != -1)
	{
		return true;
	}
	if (!func_24(0))
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
		func_25(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
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
		func_25(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477.f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return true;
}

void func_16(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_23() == 0)
	{
		func_27(0, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_28(0);
	if (bParam1)
	{
		func_29(fVar0);
	}
	if (fVar0 >= (100.0f - 1.0f))
	{
		func_30();
	}
	if (bParam2)
	{
		fParam0 = func_31(0, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_33(0, func_32(fParam0, -100.0f, 100.0f), bParam1);
}

void func_17(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_23() == 0)
	{
		func_27(2, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_28(2);
	if (bParam1)
	{
		func_29(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_31(2, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_33(2, func_32(fParam0, -100.0f, 100.0f), bParam1);
}

void func_18(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_23() == 0)
	{
		func_27(1, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_28(1);
	if (bParam1)
	{
		func_29(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_31(1, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_33(1, func_32(fParam0, -100.0f, 100.0f), bParam1);
}

void func_19(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_34(13);
	if (fParam0 > 10.0f)
	{
		fParam0 = 10.0f;
	}
	if (!func_35(17))
	{
		return;
	}
	if (func_36())
	{
		iVar1 = func_37(fVar0);
		fVar0 += fParam0;
		iVar2 = func_37(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477.f_195 = func_38();
			func_39(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_40(&fVar3, &fVar4);
		func_41(13, func_32(fVar0, fVar3, fVar4));
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

float func_20(float fParam0, int iParam1)
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

void func_21(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1.0f)
	{
		if (func_42(iParam0))
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
			sVar1 = func_43(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_44(-1);
			func_45(0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_43(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_46(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_43(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_47(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_48(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_48(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_48(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_22(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1)
	{
		return;
	}
	if (iParam3 || func_8(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		func_50(func_49(joaat("MEDICINE_ITEMS_USED")), 1);
	}
	if (func_8(iParam0, joaat("CI_TAG_ITEM_PROVISION")))
	{
		func_50(func_49(joaat("PROVISION_ITEMS_USED")), 1);
	}
	if (func_8(iParam0, joaat("CI_TAG_ITEM_HERB")))
	{
		func_52(func_51(&iParam0), 1);
	}
	if (func_8(iParam0, joaat("CI_TAG_ITEM_TONIC")))
	{
		func_50(func_53(joaat("USED"), joaat("TONIC")), 1);
	}
	switch (iParam0)
	{
		case joaat("CONSUMABLE_OAT_CAKES") /* GXTEntry: "Classic Oatcakes" */:
		case joaat("CONSUMABLE_SUGARCUBE") /* GXTEntry: "Sugar Cube" */:
		case joaat("CONSUMABLE_HAYCUBE") /* GXTEntry: "Hay" */:
			func_50(func_53(joaat("USED"), joaat("FEED_BAG") /* GXTEntry: "Feed Bag" */), 1);
			break;
	}
	switch (iParam0)
	{
		case joaat("CONSUMABLE_MOONSHINE") /* GXTEntry: "Moonshine" */:
			func_50(func_53(joaat("USED"), joaat("MOONSHINE")), 1);
			break;
		case joaat("CONSUMABLE_WHISKEY_USED") /* GXTEntry: "Opened Kentucky Bourbon" */:
		case joaat("CONSUMABLE_WHISKEY") /* GXTEntry: "Kentucky Bourbon" */:
			func_50(func_53(joaat("USED"), joaat("WHISKEY") /* GXTEntry: "Whiskey" */), 1);
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED") /* GXTEntry: "Opened Cocaine Gum" */:
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM") /* GXTEntry: "Cocaine Gum" */:
			func_50(func_53(joaat("USED"), joaat("COCAINE_GUM")), 1);
			break;
		case joaat("CONSUMABLE_SNAKE_OIL") /* GXTEntry: "Snake Oil" */:
		case joaat("CONSUMABLE_POTENT_SNAKE_OIL") /* GXTEntry: "Potent Snake Oil" */:
		case joaat("CONSUMABLE_SNAKE_OIL_USED") /* GXTEntry: "Opened Snake Oil" */:
			func_50(func_53(joaat("USED"), joaat("SNAKE_OIL")), 1);
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO") /* GXTEntry: "Chewing Tobacco" */:
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED") /* GXTEntry: "Opened Chewing Tobacco" */:
			func_50(func_53(joaat("USED"), joaat("CHEWING_TOBACCO")), 1);
			break;
		case joaat("CONSUMABLE_HORSE_MEDICINE") /* GXTEntry: "Horse Medicine" */:
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED") /* GXTEntry: "Opened Horse Medicine" */:
			func_50(func_53(joaat("USED"), joaat("HORSE_PILLS")), 1);
			break;
		case joaat("CONSUMABLE_COVER_SCENT_USED") /* GXTEntry: "Opened Cover Scent" */:
		case joaat("CONSUMABLE_COVER_SCENT") /* GXTEntry: "Cover Scent Lotion" */:
			func_50(func_53(joaat("USED"), joaat("COVER_SCENT")), 1);
			break;
		case joaat("CONSUMABLE_HERBIVORE_BAIT") /* GXTEntry: "Herbivore Bait" */:
		case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT") /* GXTEntry: "Potent Herbivore Bait" */:
			func_50(func_53(joaat("USED"), joaat("POTENT_HERBIVORE_BAIT")), 1);
			break;
		case joaat("CONSUMABLE_PREDATOR_BAIT") /* GXTEntry: "Predator Bait" */:
		case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT") /* GXTEntry: "Potent Predator Bait" */:
			func_50(func_53(joaat("USED"), joaat("POTENT_PREDATOR_BAIT")), 1);
			break;
	}
	if (func_23() == -1)
	{
		if (iParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
		{
			func_50(func_53(joaat("USED"), joaat("SPECIAL_TONIC")), 1);
		}
	}
	if (bParam2)
	{
		func_50(func_49(joaat("DEADEYE_ITEMS_USED")), 1);
	}
}

int func_23()
{
	return Global_1572887.f_12;
}

int func_24(int iParam0)
{
	if (func_54())
	{
		return 0;
	}
	return func_55(Global_1347702[58 /*49*/].f_15, 1);
}

bool func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_56(iParam0, &sVar0);
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_57(iParam0, &iVar0, &iVar1);
	if (!func_58(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_59(iVar0, iVar1);
}

void func_27(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_31(iParam0, fParam1, 1);
	}
	func_61(iParam0, (func_60(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_28(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

void func_29(float fParam0)
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

void func_30()
{
	Global_40.f_11095.f_11[14] = 100.0f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_31(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_38();
	func_62(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_63(iParam0, 2);
	if (func_65(iVar0, func_64(iParam0, 2), 1))
	{
		func_66(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_26(88, bParam2);
		return 0.0f;
	}
	func_67(iParam0, func_38(), 2);
	func_66(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_32(float fParam0, float fParam1, float fParam2)
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

void func_33(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_23() != -1)
	{
		return;
	}
	if (!func_35(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_68(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_69(iParam0), iVar0);
	func_71(func_70(iParam0), (100.0f * (BUILTIN::TO_FLOAT(iVar0) / 100.0f)), 0);
	if (((fParam1 <= func_72(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_26(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_26(func_73(iParam0), 1);
	}
	sVar1 = func_74(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

float func_34(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

bool func_35(int iParam0)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	return func_76(iParam0);
}

bool func_36()
{
	if (func_23() != -1)
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
	return func_77(Global_1347477.f_195, 0);
}

int func_37(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

int func_38()
{
	return Global_1899515;
}

void func_39(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_78(*uParam0);
	iVar1 = func_79(*uParam0);
	iVar2 = func_80(*uParam0);
	iVar3 = func_81(*uParam0);
	iVar4 = func_82(*uParam0);
	iVar5 = func_83(*uParam0);
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
	iVar6 = func_84(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_84(iVar1, iVar0);
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
	func_85(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_40(var uParam0, var uParam1)
{
	if (!func_86())
	{
		*uParam0 = -100.0f;
		*uParam1 = 100.0f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_41(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0.0f;
		sVar2 = func_87(fParam1 < 0.0f, "rpg_cold", "rpg_hot");
		func_88(1, bVar1, 1, sVar2);
		func_89(!bVar1, fParam1 < 0.0f, bVar1);
		iVar0 = func_68(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_90();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_68(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_68(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_42(int iParam0)
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

char* func_43(int iParam0)
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

void func_44(int iParam0)
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
	iVar1 = func_91(2);
	func_92(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_45(bool bParam0)
{
	if (func_23() != -1)
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
	func_93(1, bParam0, 1);
	func_90();
	Global_40.f_11095.f_43 = bParam0;
}

void func_46(int iParam0)
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
	iVar1 = func_94(2);
	func_95(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_47(int iParam0)
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
	iVar1 = func_96(2);
	func_97(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_48(int iParam0, bool bParam1, bool bParam2)
{
	func_61(iParam0, 100.0f, bParam1, bParam2, 1, 2);
}

struct<2> /*16*/ func_49(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_50(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_51(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG") /* GXTEntry: "Ginseng" */:
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE") /* GXTEntry: "Bay Bolete" */:
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY") /* GXTEntry: "Blackberry" */:
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT") /* GXTEntry: "Currant" */:
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT") /* GXTEntry: "Burdock Root" */:
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES") /* GXTEntry: "Chanterelle" */:
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH") /* GXTEntry: "Common Bulrush" */:
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME") /* GXTEntry: "Creeping Thyme" */:
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE") /* GXTEntry: "English Mace" */:
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY") /* GXTEntry: "Evergreen Huckleberry" */:
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO") /* GXTEntry: "Indian Tobacco" */:
			return 20;
		case joaat("CONSUMABLE_HERB_MILKWEED") /* GXTEntry: "Milkweed" */:
			return 23;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE") /* GXTEntry: "Oleander Sage" */:
			return 26;
		case joaat("CONSUMABLE_HERB_OREGANO") /* GXTEntry: "Oregano" */:
			return 27;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM") /* GXTEntry: "Parasol Mushroom" */:
			return 28;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY") /* GXTEntry: "Prairie Poppy" */:
			return 29;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD") /* GXTEntry: "Ram\'s Head" */:
			return 31;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY") /* GXTEntry: "Raspberry" */:
			return 33;
		case joaat("CONSUMABLE_HERB_SAGE") /* GXTEntry: "Sage" */:
			return 34;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER") /* GXTEntry: "Vanilla Flower" */:
			return 37;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP") /* GXTEntry: "Violet Snowdrop" */:
			return 38;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS") /* GXTEntry: "Wild Carrot" */:
			return 39;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW") /* GXTEntry: "Wild Feverfew" */:
			return 40;
		case joaat("CONSUMABLE_HERB_WILD_MINT") /* GXTEntry: "Wild Mint" */:
			return 41;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY") /* GXTEntry: "Wintergreen Berry" */:
			return 42;
		case joaat("CONSUMABLE_HERB_YARROW") /* GXTEntry: "Yarrow" */:
			return 43;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") /* GXTEntry: "Acuna\'s Star Orchid" */:
			return 1;
		case joaat("PROVISION_RO_FLOWER_CIGAR") /* GXTEntry: "Cigar Orchid" */:
			return 9;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL") /* GXTEntry: "Clamshell Orchid" */:
			return 10;
		case joaat("PROVISION_RO_FLOWER_DRAGONS") /* GXTEntry: "Dragon\'s Mouth Orchid" */:
			return 14;
		case joaat("PROVISION_RO_FLOWER_GHOST") /* GXTEntry: "Ghost Orchid" */:
			return 17;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT") /* GXTEntry: "Lady of the Night Orchid" */:
			return 21;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER") /* GXTEntry: "Lady Slipper Orchid" */:
			return 22;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN") /* GXTEntry: "Moccasin Flower Orchid" */:
			return 24;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED") /* GXTEntry: "Night Scented Orchid" */:
			return 25;
		case joaat("PROVISION_RO_FLOWER_QUEENS") /* GXTEntry: "Queen\'s Orchid" */:
			return 30;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL") /* GXTEntry: "Rat Tail Orchid" */:
			return 32;
		case joaat("PROVISION_RO_FLOWER_SPARROWS") /* GXTEntry: "Sparrow\'s Egg Orchid" */:
			return 35;
		case joaat("PROVISION_RO_FLOWER_SPIDER") /* GXTEntry: "Spider Orchid" */:
			return 36;
	}
	return 0;
}

void func_52(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0 = { func_53(joaat("EATEN"), func_98(iParam0)) /*2*/ };
	STATS::_STAT_ID_INCREMENT_INT(&sVar0, iParam1);
	func_50(func_99(joaat("HERBS_EATEN")), iParam1);
}

struct<2> /*16*/ func_53(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

bool func_54()
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

int func_55(int iParam0, bool bParam1)
{
	switch (func_100(iParam0))
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

bool func_56(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_57(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_58(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_101(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_102(iParam0))
	{
		return false;
	}
	if (func_103(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_104(iParam0, 1)) || func_105((1 << 15)))
	{
		if (!func_104(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_106())
	{
		return false;
	}
	return true;
}

void func_59(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

float func_60(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_107();
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

int func_61(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_107();
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
		func_108(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100.0f)
	{
		fParam1 = 100.0f;
	}
	else if (fParam1 < 0.0f)
	{
		fParam1 = 0.0f;
	}
	func_109(iVar0, iParam0, fParam1);
	func_110(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, func_69(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_62(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_78(*iParam0);
	iVar1 = func_79(*iParam0);
	iVar2 = func_80(*iParam0);
	iVar3 = func_81(*iParam0);
	iVar4 = func_82(*iParam0);
	iVar5 = func_83(*iParam0);
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
		iVar7 = func_84(iVar6, iVar0);
		iVar2 += iVar7;
	}
	iVar1 -= iParam5;
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 -= iParam6;
	func_85(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_63(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_107();
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

int func_64(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_107();
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

bool func_65(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_111(iParam1) || !func_111(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_66(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_107();
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

void func_67(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_107();
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

int func_68(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200.0f);
	return BUILTIN::CEIL((100.0f * fVar0));
}

int func_69(int iParam0)
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

int func_70(int iParam0)
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

void func_71(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_112(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

float func_72(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100.0f);
	return ((fVar0 * 200.0f) - 100.0f);
}

int func_73(int iParam0)
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

char* func_74(int iParam0)
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

bool func_75(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_77(int iParam0, bool bParam1)
{
	return func_65(func_38(), iParam0, bParam1);
}

int func_78(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_113(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_79(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_80(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_81(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_82(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_83(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_84(int iParam0, int iParam1)
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

void func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(iParam0, iParam6);
	func_115(iParam0, iParam5);
	func_116(iParam0, iParam4);
	func_117(iParam0, iParam3);
	func_118(iParam0, iParam2);
	func_119(iParam0, iParam1);
}

bool func_86()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

char* func_87(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_88(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_89(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_112(0, 1, bParam0, bParam1);
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

void func_90()
{
	func_120();
	func_121();
	func_122();
}

int func_91(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_107();
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

void func_92(float fParam0, int iParam1)
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

void func_93(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
}

int func_94(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_107();
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

void func_95(float fParam0)
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

int func_96(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_107();
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

void func_97(float fParam0, bool bParam1)
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

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("HERB_ALASKAN_GINSENG") /* GXTEntry: "Alaskan Ginseng" */;
		case 3:
			return joaat("HERB_AMERICAN_GINSENG") /* GXTEntry: "American Ginseng" */;
		case 4:
			return joaat("HERB_BAY_BOLETE") /* GXTEntry: "Bay Bolete" */;
		case 5:
			return joaat("HERB_BLACK_BERRY") /* GXTEntry: "Blackberry" */;
		case 6:
			return joaat("HERB_BLACK_CURRANT") /* GXTEntry: "Blackcurrant" */;
		case 7:
			return joaat("HERB_BURDOCK_ROOT") /* GXTEntry: "Burdock Root" */;
		case 8:
			return joaat("HERB_CHANTERELLES") /* GXTEntry: "Chanterelles" */;
		case 11:
			return joaat("HERB_COMMON_BULRUSH") /* GXTEntry: "Common Bulrush" */;
		case 12:
			return joaat("HERB_CREEPING_THYME") /* GXTEntry: "Creeping Thyme" */;
		case 13:
			return joaat("HERB_DESERT_SAGE") /* GXTEntry: "Desert Sage" */;
		case 15:
			return joaat("HERB_ENGLISH_MACE") /* GXTEntry: "English Mace" */;
		case 16:
			return joaat("HERB_EVERGREEN_HUCKLEBERRY") /* GXTEntry: "Evergreen Huckleberry" */;
		case 18:
			return joaat("HERB_GOLDEN_CURRANT") /* GXTEntry: "Golden Currant" */;
		case 19:
			return joaat("HERB_HUMMINGBIRD_SAGE") /* GXTEntry: "Hummingbird Sage" */;
		case 20:
			return joaat("HERB_INDIAN_TOBACCO") /* GXTEntry: "Indian Tobacco" */;
		case 23:
			return joaat("HERB_MILKWEED") /* GXTEntry: "Milkweed" */;
		case 26:
			return joaat("HERB_OLEANDER_SAGE") /* GXTEntry: "Oleander Sage" */;
		case 27:
			return joaat("HERB_OREGANO") /* GXTEntry: "Oregano" */;
		case 28:
			return joaat("HERB_PARASOL_MUSHROOM") /* GXTEntry: "Parasol Mushroom" */;
		case 29:
			return joaat("HERB_PRAIRIE_POPPY") /* GXTEntry: "Prairie Poppy" */;
		case 31:
			return joaat("HERB_RAMS_HEAD") /* GXTEntry: "Ram\'s Head" */;
		case 33:
			return joaat("HERB_RED_RASPBERRY") /* GXTEntry: "Red Raspberry" */;
		case 34:
			return joaat("HERB_RED_SAGE") /* GXTEntry: "Red Sage" */;
		case 37:
			return joaat("HERB_VANILLA_FLOWER") /* GXTEntry: "Vanilla Flower" */;
		case 38:
			return joaat("HERB_VIOLET_SNOWDROP") /* GXTEntry: "Violet Snowdrop" */;
		case 39:
			return joaat("HERB_WILD_CARROTS") /* GXTEntry: "Wild Carrot" */;
		case 40:
			return joaat("HERB_WILD_FEVERFEW") /* GXTEntry: "Wild Feverfew" */;
		case 41:
			return joaat("HERB_WILD_MINT") /* GXTEntry: "Wild Mint" */;
		case 42:
			return joaat("HERB_WINTERGREEN_BERRY") /* GXTEntry: "Wintergreen Berry" */;
		case 43:
			return joaat("HERB_YARROW") /* GXTEntry: "Yarrow" */;
		case 1:
			return joaat("HERB_ACUNAS_STAR_ORCHID") /* GXTEntry: "Acuna\'s Star Orchid" */;
		case 9:
			return joaat("HERB_CIGAR_ORCHID") /* GXTEntry: "Cigar Orchid" */;
		case 10:
			return joaat("HERB_CLAMSHELL_ORCHID") /* GXTEntry: "Clamshell Orchid" */;
		case 14:
			return joaat("HERB_DRAGONS_MOUTH_ORCHID") /* GXTEntry: "Dragon\'s Mouth Orchid" */;
		case 17:
			return joaat("HERB_GHOST_ORCHID") /* GXTEntry: "Ghost Orchid" */;
		case 21:
			return joaat("HERB_LADY_OF_NIGHT_ORCHID") /* GXTEntry: "Lady of the Night Orchid" */;
		case 22:
			return joaat("HERB_LADY_SLIPPER_ORCHID") /* GXTEntry: "Lady Slipper Orchid" */;
		case 24:
			return joaat("HERB_MOCCASIN_FLOWER_ORCHID") /* GXTEntry: "Moccasin Flower Orchid" */;
		case 25:
			return joaat("HERB_NIGHT_SCENTED_ORCHID") /* GXTEntry: "Night Scented Orchid" */;
		case 30:
			return joaat("HERB_QUEENS_ORCHID") /* GXTEntry: "Queen\'s Orchid" */;
		case 32:
			return joaat("HERB_RAT_TAIL_ORCHID") /* GXTEntry: "Rat Tail Orchid" */;
		case 35:
			return joaat("HERB_SPARROWS_EGG_ORCHID") /* GXTEntry: "Sparrow\'s Egg Orchid" */;
		case 36:
			return joaat("HERB_SPIDER_ORCHID") /* GXTEntry: "Spider Orchid" */;
	}
	return 0;
}

struct<2> /*16*/ func_99(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

int func_100(int iParam0)
{
	if (!func_123(iParam0))
	{
		return -1;
	}
	return func_124(iParam0);
}

bool func_101(int iParam0, int iParam1)
{
	if (func_23() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_102(int iParam0)
{
	if (func_23() != -1)
	{
		if (func_104(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_104(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_104(iParam0, (1 << 16)) && !func_104(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_104(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_104(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_104(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_105(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_106()
{
	return Global_1905944.f_5694;
}

int func_107()
{
	if (func_125())
	{
		return 1;
	}
	return 0;
}

void func_108(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_107();
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

void func_109(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_74(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_126(iParam1), fParam2, -1);
	}
}

void func_110(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_107();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_127(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_128(iParam0, iVar0, iParam3);
	}
}

bool func_111(int iParam0)
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
	iVar0 = func_83(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_82(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_81(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_78(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_79(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_80(iParam0);
	if (iVar5 < 1 || iVar5 > func_84(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

char* func_112(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR" /* GXTEntry: "Fair" */;
					}
					else
					{
						return func_87(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD" /* GXTEntry: "Cold" */, "PMPLAYER_CONDITION_TEMPERATURE_HOT" /* GXTEntry: "Hot" */);
					}
					break;
				case 2:
					return func_87(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD" /* GXTEntry: "Good" */, "PMPLAYER_CONDITION_HONOR_BAD" /* GXTEntry: "Bad" */);
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE" /* GXTEntry: "~1~%" */;
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES" /* GXTEntry: "~1~ minutes" */;
				case 2:
					return "PMPLAYER_CORE_PC_VALUE" /* GXTEntry: "~1~%" */;
				default:
					break;
			}
			break;
	}
	return "";
}

int func_113(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_114(int iParam0, int iParam1)
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

void func_115(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_79(*iParam0);
	iVar1 = func_78(*iParam0);
	if (iParam1 < 1 || iParam1 > func_84(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_117(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_118(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_119(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

float func_120()
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

	if (func_129())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_28(2);
	}
	if (Global_1347477.f_119)
	{
		return func_28(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_130();
	fVar2 = func_131();
	fVar3 = func_132();
	fVar4 = func_133();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_134());
	fVar7 = (func_28(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_135(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_136(3, fVar9, fVar9 > 100.0f);
	return func_32(fVar7, -100.0f, 100.0f);
}

float func_121()
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

	if (func_129())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_28(1);
	}
	if (Global_1347477.f_119)
	{
		return func_28(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_130();
	fVar2 = func_131();
	fVar3 = func_132();
	fVar4 = func_133();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_134());
	fVar7 = (func_28(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_135(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_136(2, fVar9, fVar9 > 100.0f);
	return func_32(fVar7, -100.0f, 100.0f);
}

float func_122()
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

	if (func_129())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_28(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_137())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_138())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_28(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_130();
	fVar2 = func_131();
	fVar3 = func_132();
	fVar4 = func_133();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_134());
	fVar7 = (func_28(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_135(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_136(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_28(0);
	}
	return func_32(fVar7, -100.0f, 100.0f);
}

bool func_123(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_124(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_139(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_125()
{
	return Global_1954819.f_866;
}

char* func_126(int iParam0)
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

void func_127(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_107();
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

void func_128(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_107();
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

bool func_129()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_130()
{
	float fVar0;
	int iVar1;

	fVar0 = func_34(13);
	iVar1 = func_37(fVar0);
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

float func_131()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_132()
{
	if (func_140())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_133()
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

float func_134()
{
	return Global_1954815.f_3;
}

void func_135(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_112(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_136(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_112(iParam0, 2, 0, 0);
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

bool func_137()
{
	return func_34(12) <= -99.0f;
}

bool func_138()
{
	return func_34(12) >= 99.0f;
}

int func_139(int iParam0)
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

bool func_140()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

