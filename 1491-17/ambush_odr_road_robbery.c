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
	int iLocal_15 = 8;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<201> /*1608*/ sLocal_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	bool bLocal_478 = false;
	struct<9> /*72*/ sScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_478 = true;
	}
	while (true)
	{
		func_2(bLocal_478, 964, 0);
		if (bLocal_478)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (iLocal_15.f_95 < 13)
			{
				if (func_3(&sScriptParam_0))
				{
					func_4(&iLocal_15, 13);
				}
			}
			if (func_5())
			{
				func_6();
			}
			func_7();
			switch (iLocal_15.f_95)
			{
				case 0:
					if (func_8(sScriptParam_0))
					{
						func_4(&iLocal_15, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (func_10())
						{
							func_4(&iLocal_15, 2);
						}
						else if (iLocal_15.f_217 > 0)
						{
							func_4(&iLocal_15, 3);
						}
						else if (iLocal_15.f_218 > 0)
						{
							func_4(&iLocal_15, 4);
						}
						else if (iLocal_15.f_216 > 0)
						{
							func_4(&iLocal_15, 5);
						}
						else
						{
							func_4(&iLocal_15, 6);
						}
					}
					break;
				case 2:
					if (func_10())
					{
						func_11();
					}
					func_4(&iLocal_15, 3);
					break;
				case 3:
					if (func_12())
					{
						if (func_13())
						{
							func_4(&iLocal_15, 4);
						}
					}
					break;
				case 4:
					if (func_14())
					{
						func_4(&iLocal_15, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						func_4(&iLocal_15, 6);
					}
					break;
				case 6:
					if (func_16())
					{
						func_4(&iLocal_15, 7);
					}
					break;
				case 7:
					if (func_17())
					{
						Global_40.f_9632[iLocal_15.f_151 /*4*/].f_2++;
						if (func_18(&Global_1393447, (1 << 16)))
						{
							func_19(&Global_1393447, (1 << 16));
						}
						if (func_18(&Global_1393447, 16))
						{
							func_19(&Global_1393447, 16);
						}
						func_4(&iLocal_15, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (iLocal_15.f_20 > (100.0f - 10.0f))
						{
							func_21();
							func_4(&iLocal_15, 9);
						}
						else
						{
							func_22(&iLocal_15, 16);
						}
					}
					break;
				case 9:
					if (func_23())
					{
						iLocal_15.f_225 = ENTITY::GET_ENTITY_HEALTH(Global_35);
						iLocal_15.f_226 = func_24();
						if (Global_40.f_9632.f_194 == iLocal_15.f_151)
						{
						}
						else
						{
							switch (iLocal_15.f_151)
							{
								case 0:
								case 5:
								case 6:
								case 11:
								case 35:
								case 42:
									break;
								default:
									func_25(&iLocal_15, 1);
									break;
							}
						}
						func_26();
						func_27(&iLocal_15);
						iLocal_15.f_21 = iLocal_15.f_20;
						func_28(&iLocal_15, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						func_22(&iLocal_15, (1 << 14));
						func_4(&iLocal_15, 10);
					}
					break;
				case 10:
					func_29();
					if (func_30(&iLocal_15, (1 << 15)) || func_31())
					{
						switch (iLocal_15.f_151)
						{
							case 0:
							case 5:
							case 6:
							case 11:
							case 35:
							case 42:
								break;
							default:
								func_32(&iLocal_15, 1);
								break;
						}
						func_33(&iLocal_15, 1);
						func_34(120, 0, 1);
						func_35(1, -1, 0, 0, 0);
						func_36(&iLocal_15);
						func_4(&iLocal_15, 11);
					}
					break;
				case 11:
					func_37(&iLocal_15);
					func_38();
					if (func_39(&iLocal_15))
					{
						if (func_18(&Global_1393447, 16))
						{
							func_19(&Global_1393447, 16);
						}
						func_40(&(iLocal_15.f_244), 0);
						func_4(&iLocal_15, 12);
					}
					break;
				case 12:
					func_41(&iLocal_15);
					func_38();
					if (func_42())
					{
						if (func_18(&Global_1393447, 16))
						{
							func_19(&Global_1393447, 16);
						}
						func_4(&iLocal_15, 13);
					}
					break;
				case 13:
					func_1();
					break;
			}
			BUILTIN::WAIT(0);
		}
	}
}

void func_1()
{
	float fVar0;

	if (func_18(&Global_1393447, 2))
	{
		func_19(&Global_1393447, 2);
	}
	if (func_18(&Global_1393447, 16))
	{
		func_19(&Global_1393447, 16);
	}
	if (func_18(&Global_1393447, (1 << 15)))
	{
		func_19(&Global_1393447, (1 << 15));
	}
	if (func_43())
	{
		if (func_30(&iLocal_15, 4))
		{
			func_44(0);
			func_45(&iLocal_15, 4);
		}
	}
	fVar0 = 8.0f;
	if (iLocal_15.f_151 == 17)
	{
		fVar0 = 12.0f;
	}
	if (((!func_46() && !func_47(&(iLocal_15.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !func_48())
	{
		func_40(&(iLocal_15.f_250), 0);
		return;
	}
	if (func_47(&(iLocal_15.f_250), fVar0))
	{
	}
	func_37(&iLocal_15);
	func_49();
	func_50(&iLocal_15, 0);
	func_51();
	func_52(&iLocal_15);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	func_28(&iLocal_15, 1);
	func_53(&iLocal_15, 0);
	if (iLocal_15.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_15.f_93);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_15.f_237))
	{
		func_54(&iLocal_15);
		func_55(iLocal_15.f_237);
	}
	func_33(&iLocal_15, 1);
	if (iLocal_15.f_95 >= 9 && iLocal_15.f_95 < 11)
	{
		if (func_56(iLocal_15.f_151))
		{
		}
		else if (func_57(iLocal_15.f_151, 1) || func_58(iLocal_15.f_151, 1))
		{
			func_59(&Global_1393447, (1 << 11));
			if (!func_60(&(iLocal_15.f_244)))
			{
				func_34(120, 0, 1);
			}
		}
	}
	if (func_61(Global_35, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	}
	if (func_61(iLocal_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_15.f_56, false);
	}
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_62(iLocal_15.f_151)))
	{
		MISC::_0x1096603B519C905F("");
	}
	func_63(iLocal_15.f_151);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_64(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Stack.Invoke(iParam1);
		}
	}
}

bool func_3(var uParam0)
{
	Vector3 vVar0;
	int iVar3;
	float fVar4;
	var uVar5;

	if (func_65())
	{
		return true;
	}
	if (Global_16)
	{
		return true;
	}
	if (func_66(0, 1, 1))
	{
		return true;
	}
	if (iLocal_15.f_95 <= 9 && (iLocal_15.f_96 & (1 << 21)) == 0)
	{
		if (func_18(&Global_1393447, 2))
		{
			if (func_67(&iLocal_15))
			{
				func_19(&Global_1393447, 2);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else if ((Global_1393447.f_2 & 2) != 0)
	{
		func_19(&Global_1393447, 2);
		return false;
	}
	if ((iLocal_15.f_96 & 16) != 0)
	{
		return true;
	}
	if (iLocal_15.f_95 < 10 && (iLocal_15.f_96 & (1 << 20)) == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (func_68())
			{
				if (!uParam0->f_8)
				{
					return true;
				}
			}
			if (!func_69(iLocal_15.f_209))
			{
				if (iLocal_15.f_20 > 207.0f)
				{
					if (iLocal_15.f_223 == 0)
					{
						iLocal_15.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (iLocal_15.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { func_70(PLAYER::PLAYER_ID()) /*3*/ };
						return true;
					}
				}
				else
				{
					iLocal_15.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (func_71())
		{
			return true;
		}
		if (func_72(&uVar5))
		{
			fVar4 = func_73();
			iVar3 = 0;
			while (iVar3 < iLocal_15.f_215)
			{
				if (iLocal_15.f_9[iVar3] < fVar4)
				{
					if (func_61(iLocal_15[iVar3], 0, 1))
					{
						return false;
					}
				}
				iVar3++;
			}
			return true;
		}
	}
	return false;
}

void func_4(int iParam0, int iParam1)
{
	iParam0->f_95 = iParam1;
}

bool func_5()
{
	return false;
}

void func_6()
{
}

void func_7()
{
	func_74();
	func_75();
}

bool func_8(struct<8> /*64*/ sParam0, var uParam8)
{
	float fVar0;
	Vector3 vVar1;
	bool bVar4;

	if (Global_1879534.f_1)
	{
		return false;
	}
	if (func_69(iLocal_15.f_209))
	{
		func_76(&(iLocal_15.f_152));
		func_77(&(iLocal_15.f_152));
		func_78(&(iLocal_15.f_152), 0);
		func_79(&(iLocal_15.f_152), 1);
		func_80(&(iLocal_15.f_152), 6.0f);
		iLocal_15.f_209 = { sParam0 /*3*/ };
		iLocal_15.f_151 = sParam0.f_3;
		iLocal_15.f_221 = sParam0.f_4;
		iLocal_15.f_222 = func_81(iLocal_15.f_151);
		if (sParam0.f_7)
		{
			func_22(&iLocal_15, 2);
		}
		if (!func_82(iLocal_15.f_151))
		{
			func_4(&iLocal_15, 12);
			return false;
		}
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iLocal_15.f_209, true);
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (fVar0 < 200.0f)
		{
			if (func_83())
			{
				vVar1 = { func_84(iLocal_15.f_151, 0, iLocal_15.f_221) /*3*/ };
				vVar1 = { func_84(iLocal_15.f_151, 1, iLocal_15.f_221) /*3*/ };
				if (func_85())
				{
					if (func_86(&iLocal_15))
					{
						func_22(&iLocal_15, 1);
					}
				}
				if (!iLocal_15.f_227)
				{
					if (func_87(iLocal_15.f_181, 0))
					{
						iLocal_15.f_227 = func_88(iLocal_15.f_181, -1);
					}
				}
				if (func_89(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_4(&iLocal_15, 13);
					return false;
				}
				else
				{
					if (!bVar4)
					{
						func_90(&iLocal_15);
						func_91(&iLocal_15, 8672);
					}
					PED::_RESERVE_AMBIENT_PEDS((((iLocal_15.f_215 + iLocal_15.f_216) + iLocal_15.f_217 * 2) + iLocal_15.f_219) + 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_9()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < iLocal_15.f_216)
	{
		iVar3 = func_92(iVar1);
		STREAMING::REQUEST_MODEL(iVar3, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar3))
		{
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < iLocal_15.f_216)
		{
			iVar3 = func_92(iVar1);
			iVar2 = func_93(iVar1);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iLocal_15.f_66[iVar1]))
			{
				if (iVar2 == func_94())
				{
				}
				else
				{
					iLocal_15.f_66[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar3, iVar2);
					bVar0 = false;
					Jump @162; // curOff = 137
					if (!PED::_HAS_METAPED_OUTFIT_LOADED(iLocal_15.f_66[iVar1]))
					{
						bVar0 = false;
					}
				}
				iVar1++;
				STREAMING::REQUEST_MODEL(joaat("P_LANTERN09X"), false);
				if (!func_95())
				{
					return false;
				}
				iVar1 = 0;
				while (iVar1 < iLocal_15.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = func_97(iVar1);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iLocal_15.f_31[iVar1]))
					{
						if (iVar2 == func_94())
						{
						}
						else
						{
							iLocal_15.f_31[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar4, iVar2);
							bVar0 = false;
							Jump @293; // curOff = 268
							if (!PED::_HAS_METAPED_OUTFIT_LOADED(iLocal_15.f_31[iVar1]))
							{
								bVar0 = false;
							}
						}
						iVar1++;
						if (!STREAMING::HAS_MODEL_LOADED(joaat("P_LANTERN09X")))
						{
							bVar0 = false;
						}
						if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
						{
							bVar0 = false;
						}
						return bVar0;
					}
				}
			}
		}
	}
}

bool func_10()
{
	return false;
}

void func_11()
{
}

bool func_12()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;

	if (iLocal_15.f_217 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = func_98(iVar0);
	vVar2 = { func_99(iVar0) /*3*/ };
	fVar5 = func_100(iVar0);
	if (iVar1 != 0)
	{
		if (func_101(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		iLocal_15.f_49[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, fVar5, true, true, false, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_15.f_49[iVar0], false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_49[iVar0], true);
		ENTITY::_0x3F08C6163A4AB1D6(iLocal_15.f_49[iVar0]);
		func_103(iLocal_15.f_49[iVar0]);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_15.f_49[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_15.f_49[iVar0], true, false);
		}
	}
	iLocal_15.f_220++;
	if (iLocal_15.f_220 >= iLocal_15.f_217)
	{
		iLocal_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_13()
{
	return true;
}

bool func_14()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;

	if (iLocal_15.f_218 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = func_104(iVar0);
	vVar2 = { func_105(iVar0) /*3*/ };
	fVar5 = func_106(iVar0);
	if (iVar1 != 0)
	{
		if (func_107(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		iLocal_15.f_52[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_15.f_52[iVar0], 0.0f, 0.0f, fVar5, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_52[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_15.f_52[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_15.f_52[iVar0], true, false);
		}
		if (func_107(iVar0))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_15.f_52[iVar0], false);
		}
	}
	iLocal_15.f_220++;
	if (iLocal_15.f_220 >= iLocal_15.f_218)
	{
		iLocal_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_15()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	Vector3 vVar9;
	Vector3 vVar12;

	if (iLocal_15.f_216 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = func_92(iVar0);
	vVar2 = { func_108(iVar0) /*3*/ };
	fVar5 = func_109(iVar0);
	iVar6 = func_93(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_40[iVar0]))
	{
		if (iVar1 != 0)
		{
			if (func_110(iVar0))
			{
				if (!func_102(&vVar2, 1, 5, 0))
				{
					return false;
				}
			}
			if (func_93(iVar0) == func_94())
			{
				iLocal_15.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				iLocal_15.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				PED::_EQUIP_META_PED_OUTFIT(iLocal_15.f_40[iVar0], func_93(iVar0));
				PED::_UPDATE_PED_VARIATION(iLocal_15.f_40[iVar0], false, true, true, true, false);
			}
		}
	}
	if (func_61(iLocal_15.f_40[iVar0], 0, 1))
	{
		func_112(iLocal_15.f_40[iVar0], 0);
		if (func_30(&iLocal_15, 1))
		{
			iVar7 = func_113(iVar0);
			if (iVar7 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_84[iVar0]))
				{
					iLocal_15.f_84[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_LANTERN09X"), vVar2, true, true, false, false, true);
					func_114(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_15.f_84[iVar0], iLocal_15.f_40[iVar0], iVar8, vVar9, vVar12, false, false, false, false, 1, true, false, false);
					return false;
				}
			}
		}
		func_115(&(iLocal_15.f_152), iLocal_15.f_40[iVar0], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_15.f_40[iVar0], true);
		PED::SET_PED_CONFIG_FLAG(iLocal_15.f_40[iVar0], 277 /*PCF_0x5FE313B3*/, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_15.f_40[iVar0]);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_40[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_15.f_40[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_15.f_40[iVar0], true, false);
		}
		iLocal_15.f_220++;
		if (iLocal_15.f_220 >= iLocal_15.f_216)
		{
			iLocal_15.f_220 = 0;
			return true;
		}
	}
	return false;
}

bool func_16()
{
	return true;
}

bool func_17()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;

	if (iLocal_15.f_215 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = func_97(iVar0);
	vVar2 = { func_116(iVar0) /*3*/ };
	fVar5 = func_117(iVar0);
	iVar6 = func_96(iVar0);
	iVar7 = func_118(iLocal_15.f_181);
	if (iVar1 != 0)
	{
		if (func_119(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		if (iVar6 == func_94())
		{
			iLocal_15[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			iLocal_15[iVar0] = PED::_CREATE_METAPED_OUTFIT_PED(iLocal_15.f_31[iVar0], vVar2, fVar5, true, true, true, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar0]))
			{
				iLocal_15[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_15[iVar0], true);
			PED::SET_PED_CONFIG_FLAG(iLocal_15[iVar0], 277 /*PCF_0x5FE313B3*/, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_15[iVar0], 6 /*PCF_DontInfluenceWantedLevel*/, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_15[iVar0], 233 /*PCF_PedIsEnemyToPlayer*/, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_15[iVar0]);
			func_120(&(iLocal_15.f_152), iLocal_15[iVar0]);
			func_121(&(iLocal_15.f_152), iLocal_15[iVar0], 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_15[iVar0], false);
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_15[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_15[iVar0], true, false);
			}
			if (iLocal_15.f_181 == -1)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
			}
			func_122(iLocal_15[iVar0], 1);
			PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(iLocal_15[iVar0], iVar7);
			DECORATOR::DECOR_SET_BOOL(iLocal_15[iVar0], "bBeatPed", true);
			func_124(func_123(iLocal_15[iVar0]), iLocal_15[iVar0]);
		}
		else
		{
			iLocal_15.f_220--;
		}
	}
	iLocal_15.f_220++;
	if (iLocal_15.f_220 >= iLocal_15.f_215)
	{
		iLocal_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_18(var uParam0, int iParam1)
{
	return (uParam0->f_2 & iParam1) != 0;
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_2 -= (uParam0->f_2 & iParam1);
}

bool func_20()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_61(iLocal_15[iVar0], 0, 0))
		{
			iVar1 = iVar0;
			func_125(&sLocal_274, iVar0);
			func_126(iVar0);
			if (func_127(iVar0))
			{
				func_128(iLocal_15[iVar0], iLocal_15.f_40[iVar0], 0, -1, 1);
			}
			else
			{
				if (func_61(iLocal_15.f_40[iVar0], 0, 0))
				{
					func_129(iLocal_15.f_40[iVar0], joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), -1, 0, 0, -1082130432);
				}
				if (func_130(iVar0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], true, 0, true);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_15[iVar0], 98, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_15[iVar0], 47, true);
			func_131(&iLocal_15, iVar0, -1, -1);
			func_132(&iLocal_15, iVar0);
		}
		iVar0++;
	}
	return true;
}

void func_21()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar0]))
		{
			ENTITY::_SET_ENTITY_FADE_IN(iLocal_15[iVar0]);
			if (!func_133(&iLocal_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_15[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_40[iVar0]))
		{
			ENTITY::_SET_ENTITY_FADE_IN(iLocal_15.f_40[iVar0]);
			if (!func_134(&iLocal_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_40[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_49[iVar0]))
		{
			ENTITY::_SET_ENTITY_FADE_IN(iLocal_15.f_49[iVar0]);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_49[iVar0], true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_52[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_52[iVar0], true);
		}
		iVar0++;
	}
}

void func_22(int iParam0, int iParam1)
{
	iParam0->f_96 |= iParam1;
}

bool func_23()
{
	if (sLocal_274.f_3 >= 1)
	{
		if (!func_135(&sLocal_274, 128))
		{
			if (func_136(sLocal_274.f_40[4], Global_36) || func_136(sLocal_274.f_40[5], Global_36))
			{
				func_137(&sLocal_274, 128);
			}
		}
	}
	if (!func_135(&sLocal_274, 2))
	{
		if (func_138())
		{
			func_139();
			func_140(&(sLocal_274.f_198), iLocal_15[1], 0, 50.0f);
			func_141();
			func_142(&sLocal_274, 3);
		}
	}
	switch (sLocal_274.f_3)
	{
		case 0:
			if (func_143())
			{
				if (func_144())
				{
					func_145(iLocal_15.f_151, 1);
					func_142(&sLocal_274, 3);
				}
			}
			else if (func_146())
			{
				if (func_147())
				{
					func_22(&iLocal_15, 16);
					func_4(&iLocal_15, 13);
				}
			}
			else
			{
				func_148(&iLocal_15, 0);
				if (func_149())
				{
					func_139();
					sLocal_274.f_59 = func_150(iLocal_15[0], Global_36, 1);
					func_25(&iLocal_15, 1);
					func_32(&iLocal_15, 1);
					func_151();
					func_142(&sLocal_274, 1);
				}
			}
			break;
		case 1:
			func_139();
			func_153(&iLocal_15, sLocal_274.f_40[6], func_152(&sLocal_274), 1067450368, 1097859072, 3.0f, 0);
			if (func_154())
			{
				func_142(&sLocal_274, 2);
			}
			break;
		case 2:
			func_155();
			func_156(&iLocal_15, sLocal_274.f_40[6]);
			func_142(&sLocal_274, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

float func_24()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_25(int iParam0, bool bParam1)
{
	struct<14> /*112*/ sVar0;
	int iVar17;

	if (!func_18(&Global_1393447, (1 << 16)))
	{
		func_59(&Global_1393447, 16);
		func_59(&Global_1393447, (1 << 16));
		func_22(iParam0, (1 << 21));
		Global_40.f_9632.f_194 = iParam0->f_151;
		func_53(iParam0, 1);
		func_157(-1, 0, 0, 0, 0);
		func_158();
		sVar0.f_6 = -1082130432;
		sVar0.f_7 = -1082130432;
		sVar0.f_8 = -1082130432;
		sVar0.f_9 = -1082130432;
		sVar0.f_10 = -1082130432;
		sVar0.f_11 = -1082130432;
		sVar0.f_12 = -1;
		sVar0.f_13 = -1;
		sVar0.f_0 = joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
		sVar0.f_6 = 100.0f;
		if (!func_69(iParam0->f_212))
		{
			sVar0.f_3 = { iParam0->f_212 /*3*/ };
		}
		else
		{
			sVar0.f_3 = { iParam0->f_209 /*3*/ };
		}
		if (func_56(iParam0->f_151))
		{
			sVar0.f_8 = 40.0f;
			sVar0.f_9 = 40.0f;
			sVar0.f_7 = 40.0f;
		}
		else
		{
			sVar0.f_8 = 120.0f;
			sVar0.f_9 = 120.0f;
			sVar0.f_7 = 120.0f;
		}
		iParam0->f_93 = EVENT::_CREATE_SHOCKING_EVENT(&sVar0);
		if (!func_43())
		{
			func_44(1);
			func_22(iParam0, 4);
		}
		if (bParam1)
		{
			func_35(1, -1, 0, 0, 0);
		}
		else
		{
			func_159();
			func_160();
		}
		if (func_56(iParam0->f_151))
		{
			func_34(30, 0, 1);
		}
		else
		{
			func_162(func_161(joaat("GANG_AMBUSH_ENCOUNTERED")), 1);
			func_33(iParam0, 0);
		}
		MISC::_0x1096603B519C905F(func_62(iParam0->f_151));
		func_163(iParam0);
		func_164(0, 13);
		iVar17 = 0;
		while (iVar17 < iParam0->f_215)
		{
			if (func_61((*iParam0)[iVar17], 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY((*iParam0)[iVar17], Global_35, -1, 0, 51, 0);
			}
			iVar17++;
		}
	}
}

void func_26()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < iLocal_15.f_216)
	{
		if (func_61(iLocal_15.f_40[iVar1], 0, 0))
		{
			iVar0 = PED::_GET_RIDER_OF_MOUNT(iLocal_15.f_40[iVar1], false);
			if (func_61(iVar0, 0, 0))
			{
				PED::SET_PED_OWNS_ANIMAL(iVar0, iLocal_15.f_40[iVar1], false);
				func_165(&iLocal_15, iVar1, 32);
			}
		}
		iVar1++;
	}
}

void func_27(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61((*uParam0)[iVar0], 0, 1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0], 57, false);
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0], 127, true);
		}
		iVar0++;
	}
}

void func_28(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_30(iParam0, (1 << 25)))
		{
			func_166(0);
			func_22(iParam0, (1 << 25));
		}
	}
	else if (func_30(iParam0, (1 << 25)))
	{
		func_166(1);
		func_45(iParam0, (1 << 25));
	}
}

void func_29()
{
	int iVar0;

	func_40(&(iLocal_15.f_247), 0);
	if (func_47(&(iLocal_15.f_247), 5.0f))
	{
		func_50(&iLocal_15, 0);
	}
	if (func_47(&(iLocal_15.f_247), 3.0f))
	{
		func_167(&iLocal_15);
	}
	func_38();
	if (!func_30(&iLocal_15, (1 << 23)))
	{
		if (!func_30(&iLocal_15, (1 << 22)))
		{
			if (iLocal_15.f_181 == 2)
			{
				func_168(&iLocal_15, 1.1f);
			}
			else
			{
				func_168(&iLocal_15, 1.2f);
			}
			func_22(&iLocal_15, (1 << 22));
		}
		if (func_30(&iLocal_15, (1 << 22)))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (iLocal_15.f_225 - 60) || (float)iVar0 < ((float)iLocal_15.f_225 * 0.7f)) || iVar0 < 80)
			{
				func_168(&iLocal_15, 1.0f);
				func_22(&iLocal_15, (1 << 23));
			}
		}
	}
}

bool func_30(int iParam0, int iParam1)
{
	return (iParam0->f_96 & iParam1) != 0;
}

bool func_31()
{
	int iVar0;

	func_169(&(sLocal_274.f_78));
	func_170(&iLocal_15, &(sLocal_274.f_115), &(sLocal_274.f_115.f_43));
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		func_171(&iLocal_15, iVar0, iLocal_15.f_40[iVar0]);
		iVar0++;
	}
	switch (sLocal_274.f_4)
	{
		case 0:
			func_140(&(sLocal_274.f_198), iLocal_15[1], 0, 50.0f);
			func_40(&(sLocal_274.f_9[0 /*3*/]), 0);
			func_172(&iLocal_15, 1, 0, -1);
			func_173(&iLocal_15, 1, 0, -1);
			sLocal_274.f_56 = func_174(&iLocal_15);
			func_175(&sLocal_274, 1);
			break;
		case 1:
			func_176();
			if (func_177(&iLocal_15, &(sLocal_274.f_54), &(iLocal_15.f_241), "COMBAT_FLEE", 1092616192))
			{
				func_175(&sLocal_274, 2);
			}
			break;
		case 2:
			func_178();
			func_175(&sLocal_274, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

void func_32(int iParam0, bool bParam1)
{
	if (func_18(&Global_1393447, (1 << 16)))
	{
		if (func_87(iParam0->f_181, 0))
		{
			func_179(iParam0->f_181, bParam1);
		}
		func_180(iParam0->f_151, bParam1);
	}
}

void func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(1);
		func_45(iParam0, (1 << 13));
	}
	else
	{
		func_182(1);
		func_22(iParam0, (1 << 13));
	}
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_183(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 /= 2;
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_5)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_59(&Global_1393447, 1);
	func_159();
	func_160();
	func_184((BUILTIN::TO_FLOAT(200) / 3.0f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_185() / 1000);
		if ((Global_1392135.f_1 & 4) != 0)
		{
			Global_1392135.f_1 -= (Global_1392135.f_1 & 4);
		}
		func_186();
		if (iParam1 == -1)
		{
			if (func_187(iParam0, 1))
			{
				func_188((1 << 24), 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240.0f);
			}
			else if (func_187(iParam0, 2))
			{
				func_188((1 << 24), 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60.0f);
			}
			else if (func_187(iParam0, 4))
			{
				func_188((1 << 24), 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900.0f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_189(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_190(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_190((BUILTIN::TO_FLOAT(200) / 3.0f), 1, 0);
	}
}

void func_36(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_40[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_40[iVar0], 273 /*PCF_NeverEverTargetThisPed*/, false);
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_40[iVar0]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[iVar0]))
		{
			if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(uParam0->f_49[iVar0], &iVar1, &iVar2))
			{
				if (iVar1 <= 0)
				{
					Jump @218; // curOff = 142
				}
				else
				{
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar3 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(uParam0->f_49[iVar0], iVar4);
						if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
						}
						iVar4++;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_37(int iParam0)
{
	if (func_30(iParam0, (1 << 14)))
	{
		if (func_61(Global_35, 0, 1))
		{
			if (!func_30(iParam0, (1 << 10)))
			{
				if (iParam0->f_181 != -1 && !func_56(iParam0->f_151))
				{
					COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(func_191(iParam0->f_181));
					func_22(iParam0, (1 << 10));
				}
			}
		}
	}
}

void func_38()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_15.f_216)
	{
		if (!func_134(&iLocal_15, iVar0, 16))
		{
			if (func_61(iLocal_15.f_40[iVar0], 0, 0))
			{
				if (func_192(iVar0))
				{
					TASK::TASK_FLEE_COORD(iLocal_15.f_40[iVar0], iLocal_15.f_209, 4, 0, -1.0f, -1, 0);
					PED::SET_PED_KEEP_TASK(iLocal_15.f_40[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_15.f_40[iVar0], false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_15.f_40[iVar0]));
					func_165(&iLocal_15, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

int func_39(var uParam0)
{
	return func_41(uParam0);
	return 0;
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1 || !func_60(uParam0))
	{
		func_193(uParam0);
	}
}

int func_41(var uParam0)
{
	int iVar0;
	int iVar1;

	func_40(&(uParam0->f_241), 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61((*uParam0)[iVar0], 0, 1))
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_22[iVar0]))
			{
				if (func_150((*uParam0)[iVar0], Global_36, 1) > 40.0f || func_47(&(uParam0->f_241), 15.0f))
				{
					func_194(&(uParam0->f_22[iVar0]));
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0]);
					return 1;
				}
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= uParam0->f_215)
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	if (func_47(&(iLocal_15.f_244), 45.0f) && func_195())
	{
		func_54(&iLocal_15);
		func_196(&(iLocal_15.f_244));
	}
	return false;
}

bool func_43()
{
	return Global_1415398.f_1;
}

void func_44(int iParam0)
{
	Global_1415398.f_1 = iParam0;
}

void func_45(int iParam0, int iParam1)
{
	if (func_30(iParam0, iParam1))
	{
	}
	iParam0->f_96 -= (iParam0->f_96 & iParam1);
}

bool func_46()
{
	return true;
}

bool func_47(var uParam0, float fParam1)
{
	if (!func_60(uParam0))
	{
		return false;
	}
	if (func_197(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_48()
{
	return Global_1392040.f_6;
}

void func_49()
{
	PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
	func_198(&iLocal_15, 1);
	func_156(&iLocal_15, sLocal_274.f_40[6]);
	func_178();
}

void func_50(int iParam0, bool bParam1)
{
	if (!func_30(iParam0, 256))
	{
		if (func_30(iParam0, 32) || bParam1)
		{
			if (func_61(iParam0->f_56, 0, 1))
			{
				func_199(iParam0->f_56, 0);
				func_22(iParam0, 256);
			}
		}
	}
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;
	int iVar12;
	int iVar13;

	iVar1 = 4748164;
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar0]))
		{
			if (func_200(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(iLocal_15[iVar0]);
				PED::DELETE_PED(&(iLocal_15[iVar0]));
			}
			else
			{
				if (func_61(iLocal_15[iVar0], 0, 0))
				{
					if (!func_30(&iLocal_15, (1 << 14)))
					{
						func_201(&(iLocal_15[iVar0]));
					}
					func_122(iLocal_15[iVar0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_15[iVar0], 5, true);
					PED::_SET_PED_INTERACTION_PERSONALITY(iLocal_15[iVar0], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(iLocal_15[iVar0], 993130593);
					if (func_202(iLocal_15[iVar0]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], false, 0, false);
					if ((PED::IS_PED_IN_COMBAT(iLocal_15[iVar0], Global_35) || PED::IS_PED_FLEEING(iLocal_15[iVar0])) || func_133(&iLocal_15, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(iLocal_15[iVar0], 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_15[iVar0], false, false);
							TASK::TASK_FLEE_PED(iLocal_15[iVar0], Global_35, 4, iVar1, -1.0f, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(iLocal_15[iVar0], true);
					}
					else if ((iLocal_15.f_215 == iLocal_15.f_216 && func_61(iLocal_15.f_40[iVar0], 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_15[iVar0], true))
					{
						iVar11 = iLocal_15.f_40[iVar0];
						PED::SET_PED_OWNS_ANIMAL(iLocal_15.f_40[iVar0], iVar11, false);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, iLocal_15.f_40[iVar0], 20000, -1, (1 << 30), 1, 0, 0);
						if (!func_69(iLocal_15.f_118[iVar0 /*4*/].f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iLocal_15.f_118[iVar0 /*4*/].f_1, 2.0f, 20000, 0.25f, 0, 40000.0f);
						}
						TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(0, Global_35, 2.5f, 0, 0);
						func_203(iLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(iLocal_15[iVar0], true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_15[iVar0], true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(iLocal_15[iVar0], true)))
						{
							if (PED::GET_SEAT_PED_IS_USING(iLocal_15[iVar0]) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(iLocal_15[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!func_69(iLocal_15.f_118[iVar0 /*4*/].f_1))
								{
									TASK::TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, iLocal_15.f_118[iVar0 /*4*/].f_1, 7.0f, 524419, 6, 5.0f, 7.0f, false);
								}
								TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(0, Global_35, -1.0f, 0, 0);
								func_203(iLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(iLocal_15[iVar0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!func_69(iLocal_15.f_118[iVar0 /*4*/].f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iLocal_15.f_118[iVar0 /*4*/].f_1, 2.0f, 20000, 0.25f, 0, 40000.0f);
							}
							TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(0, Global_35, 2.5f, 0, 0);
							func_203(iLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(iLocal_15[iVar0], true);
						}
						else
						{
							if (func_204(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::TASK_FLEE_PED(0, Global_35, 3, iVar1, -1.0f, -1, 0);
								func_203(iLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
								PED::_SET_REMOVE_PED_NETWORKED(iLocal_15[iVar0], 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(0, Global_35, 1.0f, 128, 0);
								func_203(iLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(iLocal_15[iVar0], true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_15[iVar0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(iLocal_15[iVar0]), -1) == iLocal_15[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_15[iVar0]));
				}
				else if ((!PED::IS_PED_FLEEING(iLocal_15[iVar0]) && !PED::IS_PED_IN_COMBAT(iLocal_15[iVar0], Global_35)) && !func_133(&iLocal_15, iVar0, 128))
				{
					PED::_SET_REMOVE_PED_NETWORKED(iLocal_15[iVar0], -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_15[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_40[iVar0]))
		{
			if (func_205(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_84[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(iLocal_15.f_84[iVar0]));
				}
				PED::DELETE_PED(&(iLocal_15.f_40[iVar0]));
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_84[iVar0]))
				{
					if (func_206(iVar0))
					{
						OBJECT::DELETE_OBJECT(&(iLocal_15.f_84[iVar0]));
					}
					else
					{
						ENTITY::DETACH_ENTITY(iLocal_15.f_84[iVar0], true, true);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_15.f_84[iVar0]);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_15.f_84[iVar0]));
					}
				}
				if (func_61(iLocal_15.f_40[iVar0], 0, 1))
				{
					if (func_60(&(iLocal_15.f_247)))
					{
						if (!func_61(PED::_GET_RIDER_OF_MOUNT(iLocal_15.f_40[iVar0], false), 0, 0))
						{
							TASK::TASK_FLEE_COORD(iLocal_15.f_40[iVar0], iLocal_15.f_209, 4, 0, -1.0f, -1, 0);
							PED::SET_PED_KEEP_TASK(iLocal_15.f_40[iVar0], true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_ACTIVE_ANIMAL_OWNER(iLocal_15.f_40[iVar0])) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(iLocal_15.f_40[iVar0], true)))
					{
						TASK::TASK_FLEE_COORD(iLocal_15.f_40[iVar0], iLocal_15.f_209, 4, 0, -1.0f, -1, 0);
						PED::SET_PED_KEEP_TASK(iLocal_15.f_40[iVar0], true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_15.f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_49[iVar0]))
		{
			if (func_207(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_15.f_49[iVar0]));
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == iLocal_15.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == iLocal_15.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_15.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_52[iVar0]))
		{
			if (func_208(&iLocal_15, iLocal_15.f_52[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_15.f_52[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_15.f_52[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0)
{
	if (!func_30(iParam0, 128))
	{
		return;
	}
	switch (iParam0->f_181)
	{
		case 0:
			func_209(joaat("G_M_M_UNIDUSTER_01"));
			func_209(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			func_209(joaat("G_M_O_UNIEXCONFEDS_01"));
			func_209(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			func_209(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			func_209(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			func_209(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			func_209(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
}

void func_53(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		LAW::SET_DISABLE_DISTURBANCE_CRIMES(PLAYER::PLAYER_ID(), true);
		func_22(iParam0, (1 << 16));
	}
	else
	{
		LAW::SET_DISABLE_DISTURBANCE_CRIMES(PLAYER::PLAYER_ID(), false);
		func_45(iParam0, (1 << 16));
	}
}

void func_54(int iParam0)
{
	float fVar0;

	fVar0 = func_210(iParam0->f_151);
	func_211(iParam0, fVar0);
}

void func_55(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	func_212(vVar0, 0);
}

bool func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 11:
			return true;
		default:
			break;
	}
	return false;
}

bool func_57(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;

	if (bParam1)
	{
		if (Global_40.f_9632[iParam0 /*4*/] > 0)
		{
			if (Global_40.f_9632[iParam0 /*4*/] >= func_213(iParam0))
			{
				return true;
			}
			sVar2 = { func_161(joaat("TOTAL_PLAYING_TIME")) /*2*/ };
			if (STATS::STAT_ID_GET_INT(&sVar2, &iVar0))
			{
				iVar1 = STATS::_STAT_CALCULATE_COOLDOWN(iVar0);
				if (iVar1 >= Global_40.f_9632[iParam0 /*4*/].f_3)
				{
					return false;
				}
			}
		}
	}
	return Global_40.f_9632[iParam0 /*4*/] > 0;
}

bool func_58(int iParam0, bool bParam1)
{
	if (func_57(iParam0, bParam1))
	{
		return true;
	}
	if (Global_40.f_9632[iParam0 /*4*/].f_1 == 0)
	{
		return false;
	}
	if (!bParam1)
	{
		return Global_40.f_9632[iParam0 /*4*/].f_1 > 0;
	}
	if (func_214(iParam0))
	{
		return true;
	}
	return false;
}

void func_59(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_60(var uParam0)
{
	return func_215(*uParam0, 1);
}

bool func_61(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_216(iParam0, iParam1);
}

char* func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GAORP";
		case 1:
		case 2:
		case 36:
			return "GALOA";
		case 3:
		case 4:
		case 38:
			return "GAOWA";
		case 5:
		case 35:
			return "GAOBT";
		case 6:
			return "GAOBB";
		case 42:
			return "GAOBB";
		case 7:
		case 41:
			return "GAOBA";
		case 8:
		case 40:
			return "GAORR";
		case 9:
		case 10:
		case 37:
			return "GAROA";
		case 11:
			return "GALPC";
		case 12:
			return "GALOA";
		case 13:
			return "GAEWB";
		case 14:
			return "GAEWT";
		case 15:
			return "GALBT";
		case 16:
			return "GAHCA";
		case 17:
		case 39:
			return "GAROR";
		case 18:
			return "GAIFA";
		case 19:
			return "GAIFA";
		case 21:
			return "GAMFA";
		case 20:
			return "GAMHA";
		case 23:
			return "GAMBA";
		case 22:
			return "GAMRA";
		case 24:
			return "GASBF";
		case 25:
			return "GATLA";
		case 28:
			return "GASLA";
		case 26:
			return "GASRA";
		case 27:
			return "GASFA";
		case 29:
			return "GALHA";
		case 30:
			return "GALHA";
		case 31:
			return "GABCA";
		case 32:
			return "GABSA";
		case 33:
			return "GABRA";
		case 34:
			return "GAGNR";
		case 43:
			return "GAPTO";
		default:
			break;
	}
	return "";
}

void func_63(var uParam0)
{
	Global_1393447.f_49 = -1;
}

bool func_64(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_217(iVar0))
	{
		return false;
	}
	if (func_218(iVar0, 1) || func_218(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_65()
{
	return false;
}

bool func_66(int iParam0, bool bParam1, bool bParam2)
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
		if (func_219())
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
		iVar0 = func_220(Global_1898164.f_1[0 /*5*/]);
		if (func_221(iVar0) && func_222(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_223(Global_1898164.f_1[0 /*5*/]))
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

bool func_67(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
		{
			if (func_133(iParam0, iVar0, 8))
			{
				if (func_224((*iParam0)[iVar0], Global_36, 1) < (70.0f * 70.0f) || func_225((*iParam0)[iVar0], 70.0f, -1082130432, -1082130432, -1082130432))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_68()
{
	if (func_66(0, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_69(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

Vector3 func_70(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_71()
{
	int iVar0;

	if (!func_30(&iLocal_15, (1 << 14)))
	{
		return false;
	}
	iVar0 = func_226();
	switch (iVar0)
	{
		case 105:
			if (func_227() && func_228())
			{
				return true;
			}
			break;
		case 95:
			if (func_227() && func_228())
			{
				return true;
			}
			break;
	}
	if (func_228())
	{
		if (iLocal_15.f_151 != 43)
		{
			if (func_229())
			{
				if (func_230(iVar0))
				{
					return false;
				}
				switch (iVar0)
				{
					case 82:
						return false;
					case 5:
					case 22:
					case 26:
					case 35:
					case 38:
					case 56:
					case 69:
					case 76:
					case 78:
					case 92:
					case 105:
					case 115:
					case 120:
						func_40(&(iLocal_15.f_253), 0);
						if (func_47(&(iLocal_15.f_253), 0.5f))
						{
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

bool func_72(var uParam0)
{
	if (iLocal_15.f_21 == 0.0f)
	{
		*uParam0 = 210.0f;
	}
	else if (iLocal_15.f_21 < (func_73() - 10.0f))
	{
		*uParam0 = func_73();
	}
	else
	{
		*uParam0 = 210.0f;
	}
	if (iLocal_15.f_20 > *uParam0)
	{
		return true;
	}
	switch (iLocal_15.f_151)
	{
		case 29:
		case 30:
			if (iLocal_15.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!func_30(&iLocal_15, (1 << 9)) && !func_30(&iLocal_15, (1 << 14)))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_73()
{
	if (!func_47(&(sLocal_274.f_9[0 /*3*/]), 25.0f))
	{
		return 250.0f;
	}
	return 120.0f;
}

void func_74()
{
	if (iLocal_15.f_95 <= 8)
	{
		iLocal_15.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iLocal_15.f_209, true);
		if (iLocal_15.f_21 == 0.0f || iLocal_15.f_21 > iLocal_15.f_20)
		{
			iLocal_15.f_21 = iLocal_15.f_20;
		}
		return;
	}
	if (iLocal_15.f_18 < 0)
	{
		iLocal_15.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iLocal_15.f_209, true);
		if (iLocal_15.f_21 == 0.0f || iLocal_15.f_21 > iLocal_15.f_20)
		{
			iLocal_15.f_21 = iLocal_15.f_20;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[iLocal_15.f_18]))
	{
		iLocal_15.f_9[iLocal_15.f_18] = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_15[iLocal_15.f_18], false, true));
	}
	iLocal_15.f_18++;
	if (iLocal_15.f_18 >= iLocal_15.f_215)
	{
		iLocal_15.f_18 = -1;
	}
}

void func_75()
{
	int iVar0;

	if (iLocal_15.f_19 < iLocal_15.f_215)
	{
		iVar0 = iLocal_15.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar0]))
		{
			if (!func_133(&iLocal_15, iVar0, 8))
			{
				if (func_225(iLocal_15[iVar0], 200.0f, -1082130432, iLocal_15.f_9[iVar0], -1082130432))
				{
					func_231(&iLocal_15, iVar0, 8);
				}
			}
		}
	}
	else if (iLocal_15.f_19 < (iLocal_15.f_215 + iLocal_15.f_216))
	{
		iVar0 = (iLocal_15.f_19 - iLocal_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_40[iVar0]))
		{
			if (!func_134(&iLocal_15, iVar0, 8))
			{
				if (func_225(iLocal_15.f_40[iVar0], 200.0f, -1082130432, -1082130432, -1082130432))
				{
					func_165(&iLocal_15, iVar0, 8);
				}
			}
		}
	}
	else if (iLocal_15.f_19 < ((iLocal_15.f_215 + iLocal_15.f_216) + iLocal_15.f_217))
	{
		iVar0 = ((iLocal_15.f_19 - iLocal_15.f_215) - iLocal_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_49[iVar0]))
		{
			if (!func_232(&iLocal_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iLocal_15.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_15.f_49[iVar0]))
				{
					if (func_233(iLocal_15.f_49[iVar0], 200.0f, -1082130432))
					{
						func_234(&iLocal_15, iVar0, 8);
					}
				}
			}
		}
	}
	iLocal_15.f_19++;
	if (iLocal_15.f_19 >= ((iLocal_15.f_215 + iLocal_15.f_216) + iLocal_15.f_217))
	{
		iLocal_15.f_19 = 0;
	}
}

void func_76(int iParam0)
{
	func_236(iParam0, (func_235(iParam0) - 6.0f));
	func_237(iParam0, 1);
}

void func_77(int iParam0)
{
	func_238(iParam0, 0);
	func_239(iParam0, 0);
	func_78(iParam0, 1);
	func_240(iParam0, 1);
	func_241(iParam0, 0);
	func_242(iParam0, 1);
	func_243(iParam0, 1, 1, 1);
}

void func_78(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 256);
	}
	else
	{
		func_245(&(uParam0->f_1), 256);
	}
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 4);
	}
	else
	{
		func_245(&(uParam0->f_1), 4);
	}
}

void func_80(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

var func_81(int iParam0)
{
	return Global_40.f_9632[iParam0 /*4*/];
}

bool func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 36:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 38:
			return true;
		case 5:
			return true;
		case 35:
			return true;
		case 6:
			return true;
		case 42:
			return true;
		case 7:
			return true;
		case 41:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 37:
			return true;
		case 8:
			return true;
		case 40:
			return true;
		case 11:
			return true;
		case 12:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 16:
			return true;
		case 15:
			return true;
		case 17:
			return true;
		case 39:
			return true;
		case 18:
			return true;
		case 19:
			return true;
		case 20:
			return true;
		case 23:
			return true;
		case 22:
			return true;
		case 21:
			return true;
		case 24:
			return true;
		case 25:
			return true;
		case 28:
			return true;
		case 26:
			return true;
		case 27:
			return true;
		case 29:
			return true;
		case 30:
			return true;
		case 31:
			return true;
		case 32:
			return true;
		case 33:
			return true;
		case 34:
			return true;
		case 43:
			return true;
		default:
			break;
	}
	return false;
}

bool func_83()
{
	float fVar0[3];
	float fVar4;
	int iVar5;
	int iVar6;
	Vector3 vVar7;
	int iVar10;

	switch (iLocal_15.f_221)
	{
		case 0:
			sLocal_274.f_0 = 0;
			break;
		case 1:
			sLocal_274.f_0 = 1;
			break;
		default:
			sLocal_274.f_0 = 0;
			break;
	}
	fVar4 = 999999.9f;
	iVar5 = 0;
	iVar6 = 0;
	while (iVar6 < fVar0)
	{
		vVar7 = { func_84(iLocal_15.f_151, iVar6, iLocal_15.f_221) /*3*/ };
		if (!func_69(vVar7))
		{
			fVar0[iVar6] = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar7, true);
			if (fVar0[iVar6] < fVar4)
			{
				iVar5 = iVar6;
				fVar4 = fVar0[iVar6];
			}
		}
		iVar6++;
	}
	switch (iVar5)
	{
		case 0:
			func_137(&sLocal_274, 1);
			break;
		case 1:
			break;
	}
	iLocal_15.f_215 = 4;
	iLocal_15.f_217 = 0;
	iLocal_15.f_218 = 0;
	iLocal_15.f_216 = 4;
	if (iLocal_15.f_151 == 40)
	{
		sLocal_274.f_65 = 1;
		iLocal_15.f_181 = -1;
	}
	else if (func_246())
	{
		sLocal_274.f_64 = 1;
		iLocal_15.f_181 = 4;
	}
	else
	{
		iLocal_15.f_181 = 0;
	}
	sLocal_274.f_78.f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
	func_22(&iLocal_15, (1 << 17));
	func_247();
	func_248();
	func_249(&(iLocal_15.f_182), 65, 0.0f, 1.75f, 1.75f, 1.75f, 32896);
	iVar10 = func_251(func_250());
	if (iVar10 >= 21 || iVar10 < 5)
	{
		func_137(&sLocal_274, (1 << 10));
	}
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	var uVar3;

	func_252(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_85()
{
	return true;
}

bool func_86(var uParam0)
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 20)
	{
		return true;
	}
	if (iVar0 < 5)
	{
		return true;
	}
	return false;
}

bool func_87(int iParam0, bool bParam1)
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

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_253(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = func_254(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

bool func_89(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_255(bParam1, bParam2, bParam3);
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

void func_90(var uParam0)
{
	float fVar0;

	fVar0 = func_210(uParam0->f_151);
	func_256(uParam0, fVar0);
}

void func_91(var uParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_238))
	{
		uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0.0f, 0.0f, 0.0f, 80.0f, 80.0f, 40.0f, "volAvoidance");
	}
	func_257(uParam0->f_238, iParam1, (1 << 18), 1, 0);
}

int func_92(int iParam0)
{
	if (iLocal_15.f_57[iParam0] == 0)
	{
		if (!func_87(iLocal_15.f_181, 1))
		{
			iLocal_15.f_57[iParam0] = func_258(joaat("HORSE_CLASS_RIDING"), 1);
		}
		else
		{
			iLocal_15.f_57[iParam0] = func_259(iLocal_15.f_181, 0, 1);
		}
	}
	return iLocal_15.f_57[iParam0];
}

int func_93(int iParam0)
{
	if (iLocal_15.f_75[iParam0] == 0)
	{
		if (iLocal_15.f_181 != -1 && iLocal_15.f_181 != 1)
		{
			iLocal_15.f_75[iParam0] = func_260(iLocal_15.f_181, iParam0, 0);
		}
		else
		{
			iLocal_15.f_75[iParam0] = func_94();
		}
		if (iLocal_15.f_75[iParam0] == joaat("META_HORSE_SADDLE_ONLY"))
		{
			iLocal_15.f_75[iParam0] = func_94();
		}
	}
	return iLocal_15.f_75[iParam0];
}

int func_94()
{
	return joaat("META_OUTFIT_DEFAULT");
}

bool func_95()
{
	int iVar0;

	switch (sLocal_274.f_2)
	{
		case 0:
			func_261();
			func_262(&iLocal_15);
			sLocal_274.f_2 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!func_263())
			{
				iVar0 = 0;
			}
			if (!func_264(&iLocal_15))
			{
				iVar0 = 0;
			}
			return iVar0;
	}
	return false;
}

int func_96(int iParam0)
{
	return func_94();
}

int func_97(int iParam0)
{
	return func_265(&iLocal_15, iParam0);
}

int func_98(int iParam0)
{
	return 0;
}

Vector3 func_99(int iParam0)
{
	return { 0.0f, 0.0f, 0.0f };
}

float func_100(int iParam0)
{
	return 0.0f;
}

bool func_101(int iParam0)
{
	return true;
}

bool func_102(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_266(*uParam0, 0.0f, 0.0f, 0.0f))
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

void func_103(int iParam0)
{
	char* sVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		sVar0 = "wagon_block_honor";
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		}
	}
}

int func_104(int iParam0)
{
	return 0;
}

Vector3 func_105(int iParam0)
{
	return { 0.0f, 0.0f, 0.0f };
}

float func_106(int iParam0)
{
	return 0.0f;
}

bool func_107(int iParam0)
{
	return true;
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = iParam0;
	vVar1 = { func_267(&sLocal_274, iVar0) /*4*/ };
	return vVar1;
}

var func_109(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = iParam0;
	sVar1 = { func_267(&sLocal_274, iVar0) /*4*/ };
	return sVar1.f_3;
}

bool func_110(int iParam0)
{
	return true;
}

int func_111(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_268(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_112(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 |= func_269(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

int func_113(int iParam0)
{
	if (iParam0 < 2)
	{
		return 3;
	}
	return 0;
}

void func_114(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0:
			if ((iParam0 % 2) == 0)
			{
				iParam1 = 1;
			}
			else
			{
				iParam1 = 2;
			}
			break;
	}
	switch (iParam1)
	{
		case 1:
			*uParam2 = { -0.31f, 0.03f, -0.22f /*3*/ };
			*uParam3 = { 0.0f, 50.0f, 90.0f /*3*/ };
			break;
		case 2:
			*uParam2 = { 0.31f, 0.03f, -0.22f /*3*/ };
			*uParam3 = { 0.0f, -50.0f, 90.0f /*3*/ };
			break;
	}
	*iParam4 = PED::GET_PED_BONE_INDEX(iLocal_15.f_40[iParam0], 62111);
}

void func_115(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(iParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = iParam0;
	vVar1 = { func_270(&sLocal_274, iVar0) /*4*/ };
	return vVar1;
}

float func_117(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = iParam0;
	sVar1 = { func_270(&sLocal_274, iVar0) /*4*/ };
	return sVar1.f_3;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("GANG_ODRISCOLLS");
		case 2:
			return joaat("GANG_LEMOYNE_RAIDERS");
		case 1:
			return joaat("GANG_MURFREE_BROOD");
		case 4:
			return joaat("GANG_LARAMIE");
		case 3:
			return joaat("GANG_SKINNER_BROS");
		case 5:
			return joaat("GANG_DEL_LOBOS");
		case 10:
			return joaat("LAW_PROFESSIONAL");
		default:
			break;
	}
	return joaat("AGGRESSIVE_TOWNSFOLK");
}

bool func_119(int iParam0)
{
	return true;
}

void func_120(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168 /*PCF_EnableShockingEvents*/, true);
	EVENT::_SET_EVENT_TRACKER_FOR_PED(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_121(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_122(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "bValidRobber", true);
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0, "bValidRobber"))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "bValidRobber", false);
	}
}

int func_123(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_124(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	if (!func_61(iParam1, 0, 0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_ACCURACY(iParam1, 20);
			fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 1);
			fVar0 *= MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.2f);
			PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(80, 110);
			PED::SET_PED_SHOOT_RATE(iParam1, iVar1);
			fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 3);
			fVar0 *= MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.25f);
			PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
			break;
		case 1:
			PED::SET_PED_ACCURACY(iParam1, 15);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, false);
			break;
	}
}

void func_125(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = func_271(iParam0, iParam1);
	func_272(iLocal_15[iParam1], sVar0, 0);
}

void func_126(int iParam0)
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_15[iParam0], true, true);
	func_273(iLocal_15[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608, 1065353216, 0);
	func_273(iLocal_15[iParam0], func_274(iParam0), -1, 1, 0, 1056964608, 1065353216, 0);
}

bool func_127(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

int func_128(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::SET_PED_ONTO_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_129(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

bool func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	PED::SET_PED_FIRING_PATTERN((*iParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE"));
	PED::_SET_PED_FIRING_PATTERN_2((*iParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
	switch (iParam0->f_181)
	{
		case 2:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], 80);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], 65);
			}
			break;
		case 0:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], 50);
			}
			break;
		case 1:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], 110);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], 40);
			}
			break;
		case 5:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], 45);
			}
			break;
	}
}

void func_132(int iParam0, int iParam1)
{
	if (!func_61((*iParam0)[iParam1], 0, 0))
	{
		return;
	}
	PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 0);
	PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iParam1], 2);
}

bool func_133(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_97[iParam1] & iParam2) != 0;
}

bool func_134(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_106[iParam1] & iParam2) != 0;
}

bool func_135(int iParam0, int iParam1)
{
	return (iParam0->f_1 & iParam1) != 0;
}

bool func_136(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

void func_137(int iParam0, int iParam1)
{
	iParam0->f_1 |= iParam1;
}

bool func_138()
{
	if (func_135(&sLocal_274, (1 << 14)))
	{
		if (func_275(&iLocal_15, &(iLocal_15.f_152), &(iLocal_15.f_152.f_16), &(sLocal_274.f_55), 0, 3, 1))
		{
			if (sLocal_274.f_5 <= 3)
			{
				switch (iLocal_15.f_152.f_16)
				{
					case 4:
					case 256:
						func_276(&(iLocal_15.f_152), &(iLocal_15.f_152.f_16));
						return false;
				}
			}
			func_277(0);
			return true;
		}
	}
	if (func_135(&sLocal_274, (1 << 12)))
	{
		func_277(1);
		return true;
	}
	return false;
}

void func_139()
{
	if (!func_61(iLocal_15.f_56, 0, 0))
	{
		iLocal_15.f_56 = func_278(&iLocal_15, 0);
		if (func_61(iLocal_15.f_56, 0, 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_15.f_56, false, joaat("REL_GANG_ODRISCOLL"));
		}
	}
}

void func_140(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	if (bParam2)
	{
		if ((((!uParam0->f_1 && *uParam0 == 0) && Global_1935630.f_58 != iParam1) && func_61(Global_1935630.f_58, 0, 1)) && func_279(Global_1935630.f_58))
		{
			*uParam0 = Global_1935630.f_58;
		}
		else
		{
			*uParam0 = iParam1;
		}
		uParam0->f_1 = 1;
		func_280(*uParam0, 1, fParam3, 0);
	}
	else
	{
		func_280(iParam1, 0, fParam3, 0);
		func_280(*uParam0, 0, fParam3, 0);
		*uParam0 = 0;
		uParam0->f_1 = 0;
	}
}

void func_141()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;

	if (!bVar2)
	{
		if (func_135(&sLocal_274, 64))
		{
			bVar2 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_61(iLocal_15[iVar0], 0, 1))
		{
		}
		else
		{
			func_281(&iLocal_15, iVar0, 1);
			func_282(&iLocal_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], false, 0, false);
			PED::_CLEAR_PED_COMBAT_STYLE(iLocal_15[iVar0], 1);
			switch (iVar0)
			{
				case 0:
					fVar3 = 0.1f;
					break;
				case 1:
					fVar3 = 0.3f;
					break;
				default:
					fVar3 = 0.0f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (iVar0 > 1)
			{
				PED::SET_COMBAT_FLOAT(iLocal_15[iVar0], 32, 3.0f);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			func_203(iLocal_15[iVar0], &iVar1, fVar3, 0, 1, 1);
			func_283(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			if (!bVar2)
			{
				func_284(&sLocal_274, iLocal_15[iVar0], Global_35, "OPENS_FIRE", -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 0);
				bVar2 = true;
			}
			else if ((func_135(&sLocal_274, 64) && sLocal_274.f_77 == iLocal_15[iVar0]) && !func_285(0, 1, iLocal_15[iVar0], 1))
			{
			}
			else
			{
				func_286(iLocal_15[iVar0], 500);
			}
		}
		iVar0++;
	}
	func_137(&sLocal_274, (1 << 14));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (sLocal_274.f_3 <= 0)
	{
		func_145(iLocal_15.f_151, 1);
	}
}

void func_142(int iParam0, int iParam1)
{
	iParam0->f_3 = iParam1;
}

bool func_143()
{
	if (VOLUME::DOES_VOLUME_EXIST(sLocal_274.f_40[1]))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(sLocal_274.f_40[1], Global_36))
		{
			return true;
		}
	}
	return false;
}

bool func_144()
{
	func_141();
	func_137(&sLocal_274, 4);
	return true;
}

void func_145(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;

	func_157(-1, 0, 0, 0, 0);
	if (bParam1)
	{
		func_190(240.0f, 1, 0);
		func_183(120, 0, 1);
	}
	Global_40.f_9632[iParam0 /*4*/].f_1++;
	sVar2 = { func_161(joaat("TOTAL_PLAYING_TIME")) /*2*/ };
	if (STATS::STAT_ID_GET_INT(&sVar2, &iVar0))
	{
		iVar1 = STATS::_STAT_CALCULATE_COOLDOWN(iVar0);
		Global_40.f_9632[iParam0 /*4*/].f_3 = (iVar1 + func_287(iParam0, 1));
	}
	func_164(0, 13);
}

bool func_146()
{
	if (!func_288(Global_35, sLocal_274.f_40[1], 1, 0))
	{
		if (func_288(Global_35, sLocal_274.f_40[0], 1, 0))
		{
			func_289(&iLocal_15, 7);
			return true;
		}
	}
	if (func_290(&iLocal_15))
	{
		return true;
	}
	return false;
}

bool func_147()
{
	return true;
}

void func_148(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if ((iParam0->f_182.f_17 & 4) != 0)
	{
		return;
	}
	if ((iParam0->f_182.f_17 & 128) != 0)
	{
		if (!func_291(&(iParam0->f_182), 256))
		{
			if (func_291(&(iParam0->f_182), 64))
			{
				if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_STOP")))
				{
					func_40(&(iParam0->f_182.f_10), 0);
					if (func_292(&(iParam0->f_182.f_10)))
					{
						func_293(&(iParam0->f_182.f_10));
					}
					if (func_47(&(iParam0->f_182.f_10), 0.2f))
					{
						if (Global_1935630.f_40 != 0 && bParam1)
						{
							TASK::TASK_HORSE_ACTION(Global_1935630.f_40, 8, 0, 0);
							func_294(&(iParam0->f_182), 256);
						}
					}
				}
				else if (func_60(&(iParam0->f_182.f_10)))
				{
					func_295(&(iParam0->f_182.f_10));
				}
			}
		}
	}
	if ((iParam0->f_182.f_17 & 8) != 0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		func_294(&(iParam0->f_182), 4);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		if (func_61(PED::GET_MOUNT(Global_35), 0, 1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_MOUNT(Global_35), false);
		}
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if ((iParam0->f_182.f_17 & (1 << 15)) != 0 && (iParam0->f_182.f_17 & 64) == 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if ((iParam0->f_182.f_17 & 1) == 0)
	{
		if (bVar1 && (func_296(iParam0->f_182[3]) || func_291(&(iParam0->f_182), 16)))
		{
			if (func_291(&(iParam0->f_182), 32))
			{
				if (func_297(iParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_22);
					}
				}
				return;
			}
			if (!func_291(&(iParam0->f_182), 1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				func_294(&(iParam0->f_182), 1);
			}
		}
		else if (bVar1 && func_296(iParam0->f_182[2]))
		{
			if (func_297(iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_22);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 6.0f);
					}
				}
			}
		}
		else if (bVar1 && func_296(iParam0->f_182[1]))
		{
			if (func_297(iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_23);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 9.0f);
					}
				}
			}
		}
		else if (func_296(iParam0->f_182[0]))
		{
			if (!func_291(&(iParam0->f_182), 64))
			{
				func_294(&(iParam0->f_182), 64);
			}
			if (func_297(iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_24);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 12.0f);
					}
				}
			}
		}
	}
	if (bVar1 && (iParam0->f_182.f_17 & 1) != 0)
	{
		if (!func_291(&(iParam0->f_182), 2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iVar3, 5.0f, 5000, false);
					func_40(&(iParam0->f_182.f_7), 0);
					func_294(&(iParam0->f_182), 2);
				}
			}
			else
			{
				if (func_187(iParam0->f_182.f_5, 16))
				{
					bVar4 = func_298(Global_35, &(iParam0->f_182.f_26), 1, 0, 256, 0);
				}
				else
				{
					bVar4 = func_299(Global_35, &(iParam0->f_182.f_6), iParam0->f_182.f_5, 0, 0, 1084227584, 100, 0, 0);
				}
				if (bVar4)
				{
					if (func_187(iParam0->f_182.f_5, 8))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
						if (func_61(iVar0, 0, 1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
						}
					}
					iParam0->f_182.f_18 = { Global_36 /*3*/ };
					if (func_61(iVar0, 0, 1))
					{
						TASK::TASK_STAND_STILL(iVar0, BUILTIN::FLOOR((iParam0->f_182.f_21 * 1000.0f)));
					}
					func_40(&(iParam0->f_182.f_7), 0);
					func_294(&(iParam0->f_182), 2);
				}
			}
		}
		else if (!func_291(&(iParam0->f_182), 4))
		{
			if (func_47(&(iParam0->f_182.f_7), iParam0->f_182.f_21))
			{
				if (func_187(iParam0->f_182.f_5, 8))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
					if (func_61(iVar0, 0, 1))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_294(&(iParam0->f_182), 4);
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
				if (func_61(iVar0, 0, 1))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
				}
			}
		}
	}
}

bool func_149()
{
	if (!func_291(&(iLocal_15.f_182), 64))
	{
		return false;
	}
	if (func_136(sLocal_274.f_40[2], Global_36) || func_136(sLocal_274.f_40[2], func_300(Global_35, 0.5f)))
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 7.0f || func_136(sLocal_274.f_40[3], Global_36))
		{
			return true;
		}
	}
	return false;
}

float func_150(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_151()
{
	func_78(&(iLocal_15.f_152), 0);
	func_79(&(iLocal_15.f_152), 0);
	func_301(&(iLocal_15.f_152), 1);
	func_302(&(iLocal_15.f_152), 1);
	func_239(&(iLocal_15.f_152), 1);
	func_303(&(iLocal_15.f_152), 1);
	func_240(&(iLocal_15.f_152), 1);
}

Vector3 func_152(int iParam0)
{
	Vector3 vVar0;

	vVar0 = { func_304(iParam0) /*4*/ };
	return vVar0;
}

void func_153(int iParam0, int iParam1, Vector3 vParam2, float fParam5, float fParam6, float fParam7, bool bParam8)
{
	int iVar0;

	if (!func_30(iParam0, 32))
	{
		if (!func_305(Global_35))
		{
			iParam0->f_56 = Global_1935630.f_41;
			if (func_61(iParam0->f_56, 0, 1))
			{
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0->f_56, -1))
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_56, true, false);
				}
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam1, (1 << 11), 0, 0, -1, -1, 0);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_56, 355 /*PCF_0xEEBAF435*/, true);
				if (func_69(vParam2))
				{
					TASK::TASK_SMART_FLEE_PED(iParam0->f_56, (*iParam0)[0], fParam6, 6000, 0, 2.0f, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam2, fParam5, 20000, fParam7, 0, 40000.0f);
					if (bParam8)
					{
						TASK::TASK_SMART_FLEE_PED(0, (*iParam0)[0], fParam6, 6000, 0, 2.0f, 0);
					}
					func_203(iParam0->f_56, &iVar0, 0, 0, 1, 1);
				}
				func_22(iParam0, 32);
			}
		}
	}
}

bool func_154()
{
	int iVar0;
	char[] cVar1[8];
	int iVar9;
	int iVar10;

	if (sLocal_274.f_5 >= 3)
	{
		if (!func_135(&sLocal_274, (1 << 13)))
		{
			if (func_306())
			{
				func_137(&sLocal_274, (1 << 13));
			}
		}
	}
	if (sLocal_274.f_5 <= 4)
	{
		func_148(&iLocal_15, func_307() < 12.0f);
	}
	iVar10 = -1;
	if (sLocal_274.f_5 > 2)
	{
		iVar10 = func_308(&(sLocal_274.f_115));
		if (iVar10 == -1)
		{
			if (func_285(0.0f, 1, sLocal_274.f_77, 1))
			{
				if (func_309(&(sLocal_274.f_9[5 /*3*/]), 3.0f))
				{
					func_310(&iLocal_15, &(sLocal_274.f_115));
					func_311(&(sLocal_274.f_115), 1, 0);
				}
			}
		}
		else if (iVar10 == 1)
		{
			if (sLocal_274.f_5 < 5)
			{
				func_312(&sLocal_274, 5);
			}
		}
	}
	switch (sLocal_274.f_5)
	{
		case 0:
			func_40(&(sLocal_274.f_9[1 /*3*/]), 0);
			func_312(&sLocal_274, 1);
			break;
		case 1:
			if (func_47(&(sLocal_274.f_9[1 /*3*/]), 0.01f))
			{
				func_310(&iLocal_15, &(sLocal_274.f_115));
				func_311(&(sLocal_274.f_115), 0, 1);
				func_193(&(sLocal_274.f_9[1 /*3*/]));
				func_313(&iLocal_15, &sLocal_274, &iVar0, &cVar1, &iVar9);
				func_314(&iLocal_15, 3.0f);
				func_284(&sLocal_274, iLocal_15[iVar0], Global_35, &cVar1, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), iVar9);
				func_312(&sLocal_274, 2);
			}
			break;
		case 2:
			if (func_47(&(sLocal_274.f_9[1 /*3*/]), 0.01f) || func_225(iLocal_15[0], 1116471296, -1082130432, -1082130432, -1082130432))
			{
				func_315();
				func_316();
				func_193(&(sLocal_274.f_9[1 /*3*/]));
				func_312(&sLocal_274, 3);
			}
			break;
		case 3:
			func_317();
			if (func_285(0.0f, 1, iLocal_15[1], 1) && func_285(0.0f, 1, iLocal_15[0], 1))
			{
				func_318(&iLocal_15, &sLocal_274, &iVar0, &cVar1, &iVar9);
				func_284(&sLocal_274, iLocal_15[iVar0], Global_35, &cVar1, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), iVar9);
				func_78(&(iLocal_15.f_152), 1);
				func_79(&(iLocal_15.f_152), 1);
				if (iLocal_15.f_152.f_16 != 0)
				{
					func_276(&(iLocal_15.f_152), &(iLocal_15.f_152.f_16));
				}
				func_312(&sLocal_274, 4);
			}
			break;
		case 4:
			if (func_319())
			{
			}
			break;
		case 5:
			if (func_47(&(sLocal_274.f_9[1 /*3*/]), 4.5f) || iVar10 == 1)
			{
				func_284(&sLocal_274, iLocal_15[1], Global_35, "TAUNT_GEN_MALE", -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 2);
				func_137(&sLocal_274, 64);
				func_193(&(sLocal_274.f_9[1 /*3*/]));
				func_312(&sLocal_274, 6);
			}
			break;
		case 6:
			if (func_47(&(sLocal_274.f_9[1 /*3*/]), 1.0f))
			{
				func_312(&sLocal_274, 7);
			}
			break;
		case 7:
			return true;
	}
	return false;
}

void func_155()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_61(iLocal_15[iVar0], 0, 1))
		{
		}
		else
		{
			func_283(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], false, 0, false);
			PED::_CLEAR_PED_COMBAT_STYLE(iLocal_15[iVar0], 1);
			TASK::TASK_COMBAT_PED(iLocal_15[iVar0], Global_35, 0, 0);
		}
		iVar0++;
	}
}

void func_156(int iParam0, int iParam1)
{
	if (func_30(iParam0, 32))
	{
		if (VOLUME::DOES_VOLUME_EXIST(iParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam1);
		}
		func_45(iParam0, 32);
	}
}

void func_157(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_320() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_321(iVar1) && !func_322(iVar1, iParam2)) && (!bParam3 || !func_323(iVar1))) && (!bParam4 || !func_324(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_325(iVar0);
			}
		}
		iVar0++;
	}
}

void func_158()
{
	if (!func_321(Global_1327479))
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
	func_326(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_159()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_327(iVar0, 128))
		{
			func_328(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_160()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_327(iVar0, 128) && func_327(iVar0, 1))
		{
			func_328(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

struct<2> /*16*/ func_161(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_162(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam0->f_215)
	{
		if (func_61((*iParam0)[iVar2], 0, 0))
		{
			iVar0 = 0;
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(200, 500);
			func_329((*iParam0)[iVar2], &iVar0);
			func_330((*iParam0)[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (iParam0->f_181)
	{
		case 0:
			func_331(joaat("G_M_M_UNIDUSTER_01"));
			func_331(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			func_331(joaat("G_M_O_UNIEXCONFEDS_01"));
			func_331(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			func_331(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			func_331(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			func_331(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			func_331(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
	func_22(iParam0, 128);
}

void func_164(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_332(&Global_0, 8);
	}
	if (!func_333() || func_334() != -1)
	{
		return;
	}
	func_332(&Global_0, 1);
}

void func_165(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_106[iParam1] |= iParam2;
}

void func_166(bool bParam0)
{
	Global_1935496.f_15 = !bParam0;
}

void func_167(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (func_61((*iParam0)[iVar0], 0, 0))
		{
			if (!func_133(iParam0, iVar0, (1 << 9)))
			{
				if (PED::IS_PED_HOGTIED((*iParam0)[iVar0]))
				{
					TASK::TASK_COMBAT_PED((*iParam0)[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK((*iParam0)[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0], false);
					func_335((*iParam0)[iVar0]);
					func_231(iParam0, iVar0, (1 << 9));
				}
			}
			else if (!PED::IS_PED_HOGTIED((*iParam0)[iVar0]))
			{
				func_336(iParam0, iVar0, (1 << 9));
			}
		}
		iVar0++;
	}
}

void func_168(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (func_61((*iParam0)[iVar0], 0, 0))
		{
			PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER((*iParam0)[iVar0], fParam1);
		}
		iVar0++;
	}
}

void func_169(var uParam0)
{
	if (uParam0->f_35)
	{
		return;
	}
	if (!uParam0->f_8)
	{
		return;
	}
	if (uParam0->f_14 && !uParam0->f_13)
	{
		if (func_337(Global_1935630.f_44) || uParam0->f_6)
		{
			if (func_338(uParam0->f_36))
			{
				func_339(&(uParam0->f_36), 1, 1);
				uParam0->f_13 = 1;
			}
		}
	}
	if (!func_60(&(uParam0->f_29)))
	{
		if (func_340(uParam0->f_28))
		{
			func_40(&(uParam0->f_29), 0);
		}
	}
	else if (uParam0->f_6 && !uParam0->f_1)
	{
		if (func_47(&(uParam0->f_29), 3.0f) && func_340(uParam0->f_28))
		{
			func_341(1);
			uParam0->f_35 = 1;
			if (!func_47(&(uParam0->f_29), 6.0f) && !uParam0->f_4)
			{
				func_342(609);
			}
		}
	}
}

void func_170(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (iVar0 < *uParam1)
		{
			if (!iParam0->f_228[iVar0])
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
				{
					if (func_343((*iParam0)[iVar0]))
					{
						func_344(iParam0[iVar0], uParam1[iVar0 /*21*/], uParam2, 1, 1);
						iParam0->f_228[iVar0] = 1;
					}
				}
				else
				{
					iParam0->f_228[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	if (!func_61((*iParam0)[iParam1], 0, 1))
	{
		return;
	}
	if (!PED::_GET_PED_COMBAT_ATTRIBUTE((*iParam0)[iParam1], 98))
	{
		if (func_61(Global_1935630.f_40, 0, 0))
		{
			if (Global_1935630.f_40 == iParam2)
			{
				bVar0 = true;
			}
		}
		if (!func_61(iParam2, 0, 1) || PED::IS_PED_FLEEING(iParam2))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (!PED::IS_PED_ON_MOUNT((*iParam0)[iParam1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES((*iParam0)[iParam1], 98, true);
			}
		}
	}
	else if (func_61(iParam2, 0, 0))
	{
		if (Global_1935630.f_40 != iParam2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES((*iParam0)[iParam1], 98, false);
		}
	}
}

void func_172(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == -1)
	{
		iParam3 = (iParam0->f_215 - 1);
	}
	if (bParam1)
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (func_61((*iParam0)[iVar0], 0, 0))
			{
				if (!func_345(iParam0, iVar0))
				{
					func_281(iParam0, iVar0, 1);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (func_61((*iParam0)[iVar0], 0, 0))
			{
				if (func_345(iParam0, iVar0))
				{
					func_281(iParam0, iVar0, 0);
				}
			}
			iVar0++;
		}
	}
}

void func_173(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == -1)
	{
		iParam3 = (iParam0->f_216 - 1);
	}
	if (bParam1)
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (func_61(iParam0->f_40[iVar0], 0, 0))
			{
				if (!func_346(iParam0, iVar0))
				{
					func_282(iParam0, iVar0, 1);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (func_61((*iParam0)[iVar0], 0, 0))
			{
				if (func_346(iParam0, iVar0))
				{
					func_282(iParam0, iVar0, 0);
				}
			}
			iVar0++;
		}
	}
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (func_61((*iParam0)[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_175(int iParam0, int iParam1)
{
	iParam0->f_4 = iParam1;
}

void func_176()
{
	switch (sLocal_274.f_58)
	{
		case 0:
			func_347();
			break;
		case 1:
			sLocal_274.f_56 = func_174(&iLocal_15);
			break;
	}
	sLocal_274.f_58++;
	sLocal_274.f_58 = (sLocal_274.f_58 % 2);
}

bool func_177(int iParam0, var uParam1, var uParam2, char* sParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*uParam1 < 0)
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_215)
		{
			if (func_61((*iParam0)[iVar0], 0, 1))
			{
				iVar1++;
				iVar2 = iVar0;
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (iVar2 >= 0)
			{
				if (!func_133(iParam0, iVar2, 1))
				{
					func_193(uParam2);
					*uParam1 = iVar2;
				}
			}
			else if (iVar1 == 0)
			{
				return true;
			}
		}
	}
	else
	{
		if (!func_60(uParam2))
		{
			if (func_61((*iParam0)[*uParam1], 0, 0))
			{
				TASK::_0x2E1D6D87346BB7D2((*iParam0)[*uParam1], Global_35, 1, 0);
			}
		}
		func_40(uParam2, 0);
		if (func_47(uParam2, fParam4))
		{
			if (func_61((*iParam0)[*uParam1], 0, 1))
			{
				if (func_348(iParam0, *uParam1))
				{
					TASK::TASK_FLEE_PED((*iParam0)[*uParam1], Global_35, 4, 524292, -1.0f, -1, 0);
					PED::SET_PED_KEEP_TASK((*iParam0)[*uParam1], true);
					func_335((*iParam0)[*uParam1]);
					func_349((*iParam0)[*uParam1], 0, 1);
					func_350((*iParam0)[*uParam1], Global_35, sParam3, 0, 100.0f, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_178()
{
	if (func_61(iLocal_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_15.f_56, true, joaat("REL_GANG_ODRISCOLL"));
	}
}

void func_179(int iParam0, bool bParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_40.f_9632.f_177[iParam0]++;
	}
	Global_40.f_9632.f_195++;
	Global_40.f_9632.f_193 = iParam0;
	Global_17504.f_7 = 1;
	if (bParam1)
	{
		Global_40.f_9632.f_192 = func_250();
	}
}

void func_180(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_18(&Global_1393447, (1 << 16)))
	{
		func_19(&Global_1393447, (1 << 16));
		func_157(-1, 0, 0, 0, 0);
		func_35(1, -1, 0, 0, 0);
		LAW::SET_DISABLE_DISTURBANCE_CRIMES(PLAYER::PLAYER_ID(), true);
		if (bParam1)
		{
			func_34(120, 0, 1);
		}
		else
		{
			func_34(60, 0, 1);
		}
		iVar0 = func_351(iParam0);
		iVar1 = func_352(iParam0);
		if (func_87(iVar1, 0))
		{
			switch (iVar1)
			{
				case 0:
				case 2:
					func_353(iVar1);
					break;
			}
		}
		else
		{
			iVar2 = func_354();
			switch (iVar2)
			{
				case 0:
				case 2:
					func_355(0, iVar2);
					break;
			}
		}
		if (func_187(iVar0, 1))
		{
			func_356();
		}
		else if (func_187(iVar0, 2))
		{
			func_357(0);
		}
		func_358(iParam0);
		func_359(iParam0);
	}
}

void func_181(int iParam0)
{
	Global_1310750.f_16035 -= (Global_1310750.f_16035 & iParam0);
}

void func_182(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

void func_183(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_360(iParam0, iParam1, bParam2);
}

void func_184(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000.0f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

int func_185()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_186()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_322(iVar0, (1 << 24)))
		{
			if (!func_361(iVar0))
			{
				func_362(iVar0, (1 << 12));
			}
		}
		iVar0++;
	}
}

bool func_187(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_188(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_363(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_364(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == (1 << 24))
			{
				if (func_365(iVar0) < func_366(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_367(iVar0, iParam1, 1.0f, iVar1 | iParam2, bParam3);
		}
		iVar0++;
	}
}

void func_189(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_368(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_368(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_368(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_368(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_368(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_368(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_368(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_190(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_24();
	fVar1 = (Global_1393447.f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0.0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = (fVar0 + fParam0);
	}
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("GANG_BANDITOS");
		case 2:
			return joaat("GANG_EXCONFED");
		case 1:
			return joaat("GANG_INBRED");
		case 0:
			return joaat("GANG_ODRISCOLL");
		case 4:
			return joaat("GANG_RANCHERS");
		case 3:
			return joaat("GANG_SAVAGES");
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_192(int iParam0)
{
	float fVar0;

	if (func_134(&iLocal_15, iParam0, 32))
	{
		if (!func_61(PED::_GET_RIDER_OF_MOUNT(iLocal_15.f_40[iParam0], false), 0, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_61(PED::_GET_RIDER_OF_MOUNT(iLocal_15.f_40[iParam0], true), 0, 1))
	{
		return false;
	}
	if (iLocal_15.f_216 == iLocal_15.f_215)
	{
		if (!func_61(iLocal_15[iParam0], 0, 1))
		{
			return true;
		}
	}
	if (!func_134(&iLocal_15, iParam0, 64))
	{
		fVar0 = func_197(&(iLocal_15.f_247));
		if ((fVar0 - 9.0f) > (float)iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_193(var uParam0)
{
	func_369(uParam0, 0.0f);
}

void func_194(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_195()
{
	return true;
}

void func_196(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

float func_197(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_292(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

void func_198(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!PLAYER::_GET_PLAYER_UI_PROMPT_IS_DISABLED(PLAYER::PLAYER_ID(), 14, 0))
		{
			PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 14, 0, true);
		}
	}
	else if (PLAYER::_GET_PLAYER_UI_PROMPT_IS_DISABLED(PLAYER::PLAYER_ID(), 14, 0))
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 14, 0, false);
	}
}

void func_199(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_370(iParam0))
	{
		return;
	}
	iVar0 = func_371(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_372(iVar0);
	func_373(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_374(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_375(iVar0))
		{
			return;
		}
	}
	func_376(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_334() == -1)
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

bool func_200(int iParam0)
{
	if (func_133(&iLocal_15, iParam0, 2))
	{
		return false;
	}
	if (func_133(&iLocal_15, iParam0, 128))
	{
		return false;
	}
	if (func_133(&iLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_377(&iLocal_15, iLocal_15[iParam0]))
	{
		return true;
	}
	if (!func_133(&iLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

void func_201(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6 /*PCF_DontInfluenceWantedLevel*/, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4 /*PCF_HasBounty*/, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494 /*PCF_0x5BD8B9DC*/, true);
}

bool func_202(int iParam0)
{
	if (func_378(iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_203(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0.0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

bool func_204(int iParam0)
{
	switch (iLocal_15.f_151)
	{
		case 24:
		case 26:
		case 27:
			return true;
	}
	return false;
}

bool func_205(int iParam0, int iParam1)
{
	if (func_134(&iLocal_15, iParam0, 2))
	{
		return false;
	}
	if (func_134(&iLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_379(iLocal_15.f_40[iParam0], iParam1))
	{
		return true;
	}
	if (func_377(&iLocal_15, iLocal_15.f_40[iParam0]))
	{
		return true;
	}
	if (!func_134(&iLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_206(int iParam0)
{
	float fVar0;

	if (func_380((1 << 15)))
	{
		fVar0 = 120.0f;
	}
	else
	{
		fVar0 = 80.0f;
	}
	if (func_381(iLocal_15.f_84[iParam0], fVar0))
	{
		return false;
	}
	if (func_150(iLocal_15.f_84[iParam0], Global_36, 1) < 10.0f)
	{
		return false;
	}
	return true;
}

bool func_207(int iParam0)
{
	if (func_232(&iLocal_15, iParam0, 2))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_15.f_49[iParam0], true))
	{
		return false;
	}
	if (func_232(&iLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_382(&iLocal_15, iLocal_15.f_49[iParam0]))
	{
		return true;
	}
	if (!func_232(&iLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_208(int iParam0, int iParam1)
{
	if (func_381(iParam1, 1114636288) || func_383(iParam1, 1, 1) <= 30.0f)
	{
		return false;
	}
	return true;
}

void func_209(int iParam0)
{
}

float func_210(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 16:
		case 36:
		case 38:
			fVar0 = 45.0f;
			break;
		case 11:
			fVar0 = 15.0f;
			break;
		case 0:
			fVar0 = 70.0f;
			break;
		case 12:
			fVar0 = 2.0f;
			break;
		case 13:
			fVar0 = 55.0f;
			break;
		case 14:
		case 26:
			fVar0 = 50.0f;
			break;
		case 33:
			fVar0 = 85.0f;
			break;
		case 31:
		case 32:
			fVar0 = 50.0f;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 15:
		case 17:
		case 22:
		case 27:
		case 29:
		case 30:
		case 34:
		case 35:
		case 39:
		case 40:
		case 41:
		case 42:
			fVar0 = 10.0f;
			break;
		case 9:
		case 10:
		case 37:
			fVar0 = 92.5f;
			break;
		case 18:
		case 19:
		case 20:
			fVar0 = 50.0f;
			break;
		case 23:
			fVar0 = 3.0f;
			break;
		case 21:
			fVar0 = 80.0f;
			break;
		case 24:
			fVar0 = 86.0f;
			break;
		case 25:
			fVar0 = 100.0f;
			break;
		case 28:
			fVar0 = 65.0f;
			break;
		default:
			fVar0 = 180.0f;
			break;
	}
	return fVar0;
}

void func_211(int iParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar0 = { iParam0->f_209 + Vector(-40.0f, -fParam1, -fParam1) /*3*/ };
	vVar3 = { iParam0->f_209 + Vector(40.0f, fParam1, fParam1) /*3*/ };
	vVar6 = { func_384(vVar0, vVar3, 0) /*3*/ };
	vVar9 = { func_385(vVar0, vVar3, 0) /*3*/ };
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, 0);
	func_386(iParam0->f_209, fParam1, 5);
	func_387(iParam0);
}

void func_212(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_69(vParam0))
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
			if (func_388(vVar2, vParam0, 2.0f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2.0f, 0, iParam3, (1 << 14)))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 2;
		case 36:
			return 2;
		case 9:
			return 2;
		case 10:
			return 2;
		case 37:
			return 2;
		case 0:
			return 1;
		case 16:
			return 3;
		case 11:
			return 1;
		case 20:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 24:
			return 1;
		case 34:
			return 3;
		case 43:
			return 6;
		default:
			break;
	}
	return 2;
}

bool func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;

	sVar2 = { func_161(joaat("TOTAL_PLAYING_TIME")) /*2*/ };
	if (STATS::STAT_ID_GET_INT(&sVar2, &iVar0))
	{
		iVar1 = STATS::_STAT_CALCULATE_COOLDOWN(iVar0);
		if (iVar1 >= Global_40.f_9632[iParam0 /*4*/].f_3)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_215(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_216(int iParam0, int iParam1)
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
	if (func_389(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_389(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_389(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_389(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_389(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_389(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_389(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_389(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_217(int iParam0)
{
	if (((func_218(iParam0, 1) && func_218(iParam0, 2)) && func_218(iParam0, 8)) && func_218(iParam0, (1 << 9)))
	{
		return true;
	}
	return false;
}

bool func_218(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_219()
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

int func_220(int iParam0)
{
	if (!func_223(iParam0))
	{
		return -1;
	}
	return func_391(func_390(iParam0));
}

bool func_221(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_222(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_223(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_224(int iParam0, Vector3 vParam1, bool bParam4)
{
	Vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_392(vVar0, vParam1);
}

bool func_225(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0.0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_150(iParam0, Global_36, 1);
	}
	if (fParam2 > 0.0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
		{
			if (fParam4 > 0.0f)
			{
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_226()
{
	return Global_1894899.f_2;
}

bool func_227()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (func_393(16) && !func_393(21))
	{
		return true;
	}
	return false;
}

bool func_228()
{
	if (iLocal_15.f_151 != 11)
	{
		return true;
	}
	if (iLocal_15.f_221 == 2)
	{
		return false;
	}
	return true;
}

bool func_229()
{
	return ((Global_1894899 & 1) != 0 && func_226() != -1);
}

bool func_230(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return true;
		default:
			break;
	}
	return false;
}

void func_231(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_97[iParam1] |= iParam2;
}

bool func_232(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_115[iParam1] & iParam2) != 0;
}

bool func_233(int iParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = func_394(iParam0, Global_35, 1, 1);
	if (fParam2 > 0.0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (ENTITY::_IS_TRACKED_ENTITY_VISIBLE(iParam0))
		{
			return true;
		}
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_115[iParam1] |= iParam2;
}

float func_235(int iParam0)
{
	return iParam0->f_24;
}

void func_236(int iParam0, float fParam1)
{
	iParam0->f_25 = fParam1;
}

void func_237(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(iParam0, 1);
	}
	else
	{
		func_244(iParam0, 1);
	}
}

void func_238(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_245(&(uParam0->f_1), (1 << 14));
	}
}

void func_239(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_245(&(uParam0->f_1), (1 << 11));
	}
}

void func_240(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(iParam0, 16);
	}
	else
	{
		func_244(iParam0, (1 << 26));
		func_244(iParam0, 16);
	}
}

void func_241(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(iParam0->f_1), 128);
	}
	else
	{
		func_245(&(iParam0->f_1), 128);
	}
}

void func_242(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(iParam0, 256);
	}
	else
	{
		func_244(iParam0, 256);
	}
}

void func_243(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_245(iParam0, (1 << 28));
	}
	else
	{
		func_244(iParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_245(iParam0, (1 << 30));
	}
	else
	{
		func_244(iParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_245(iParam0, (1 << 29));
	}
	else
	{
		func_244(iParam0, (1 << 29));
	}
}

void func_244(int iParam0, int iParam1)
{
	*iParam0 -= (*iParam0 & iParam1);
}

void func_245(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

bool func_246()
{
	if (func_334() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_247()
{
	func_78(&(iLocal_15.f_152), 0);
	func_79(&(iLocal_15.f_152), 1);
	func_301(&(iLocal_15.f_152), 1);
	func_302(&(iLocal_15.f_152), 1);
	func_239(&(iLocal_15.f_152), 0);
	func_238(&(iLocal_15.f_152), 0);
	func_303(&(iLocal_15.f_152), 1);
	func_240(&(iLocal_15.f_152), 1);
}

void func_248()
{
	iLocal_15.f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iLocal_15.f_209, 0.0f, 0.0f, 0.0f, 60.0f, 60.0f, 40.0f, "volAvoidance");
	switch (sLocal_274.f_0)
	{
		case 0:
			func_395(&iLocal_15, &sLocal_274);
			break;
		case 1:
			func_396(&iLocal_15, &sLocal_274);
			break;
	}
}

void func_249(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	uParam0->f_5 = iParam1;
	uParam0->f_21 = fParam2;
	uParam0->f_22 = fParam3;
	uParam0->f_23 = fParam4;
	uParam0->f_24 = fParam5;
	uParam0->f_17 = iParam6;
}

int func_250()
{
	return Global_1899515;
}

int func_251(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

void func_252(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	struct<4> /*32*/ sVar0;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 180.6557f, 75.5711f, 98.7111f, 307.9777f);
							break;
						case 1:
							func_397(&sVar0, -124.9678f, 182.499f, 92.7486f, 323.5033f);
							break;
						case 2:
							func_397(&sVar0, -143.1968f, 392.7447f, 95.6412f, 26.7895f);
							break;
						case 3:
							func_397(&sVar0, -175.487f, -208.2044f, 87.9832f, 155.3853f);
							break;
						case 4:
							func_397(&sVar0, 810.023f, 376.8716f, 115.1321f, 278.0894f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -78.546f, 574.7642f, 117.1554f, 285.065f);
							break;
						case 1:
							func_397(&sVar0, 52.8403f, 228.5046f, 108.3697f, 1.1595f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -98.0465f, 227.8637f, 99.6174f, 342.0f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1114.856f, 73.738f, 53.0233f, 354.9799f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -566.0319f, 466.1427f, 98.0826f, 133.627f);
							break;
						case 1:
							func_397(&sVar0, 731.3024f, -567.4277f, 75.8176f, 96.4522f);
							break;
						case 2:
							func_397(&sVar0, 83.4469f, 582.1075f, 135.0757f, 264.5214f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
						case 1:
							func_397(&sVar0, 831.6912f, -584.7949f, 78.2731f, 202.9779f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 202.3087f, 137.861f, 98.3938f, 326.3648f);
							break;
						case 1:
							func_397(&sVar0, -372.0885f, -36.569f, 41.6905f, 348.5297f);
							break;
						case 2:
							func_397(&sVar0, -927.3195f, -351.4889f, 48.6764f, 122.086f);
							break;
						case 3:
							func_397(&sVar0, -1089.385f, 29.2608f, 55.1327f, 104.0236f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1561.633f, -654.6262f, 46.2574f, 321.6371f);
							break;
						case 1:
							func_397(&sVar0, 954.459f, -1251.211f, 54.8197f, 43.8895f);
							break;
						case 2:
							func_397(&sVar0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							break;
						case 3:
							func_397(&sVar0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							break;
						case 4:
							func_397(&sVar0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							break;
						case 5:
							func_397(&sVar0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
							break;
						case 1:
							func_397(&sVar0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1561.589f, -2121.429f, 44.3306f, 273.483f);
							break;
						case 1:
							func_397(&sVar0, 1391.634f, -2269.641f, 44.9803f, 294.7664f);
							break;
						case 2:
							func_397(&sVar0, 2067.27f, -1250.361f, 42.8864f, 257.827f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1173.9f, -909.8f, 66.9f, -57.4f);
							break;
						case 1:
							func_397(&sVar0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2069.093f, -1241.536f, 41.2556f, 176.86f);
							break;
						case 1:
							func_397(&sVar0, 2081.443f, -899.7972f, 41.1731f, 260.946f);
							break;
						case 2:
							func_397(&sVar0, 1212.386f, -1591.315f, 56.0669f, 23.4687f);
							break;
						case 3:
							func_397(&sVar0, 1506.064f, -905.8009f, 47.8961f, 165.3073f);
							break;
						case 4:
							func_397(&sVar0, 1606.995f, -1545.489f, 59.2865f, 177.0083f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2449.325f, 1573.939f, 85.8194f, 39.9471f);
							break;
						case 1:
							func_397(&sVar0, 2584.913f, 1633.828f, 97.7316f, 8.1257f);
							break;
						case 2:
							func_397(&sVar0, 2730.857f, 1311.648f, 92.9221f, 149.1053f);
							break;
						case 3:
							func_397(&sVar0, 2794.002f, 1031.168f, 59.517f, 188.3449f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
							break;
						case 1:
							func_397(&sVar0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
							break;
						case 1:
							func_397(&sVar0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2242.927f, 732.5889f, 91.0723f, 263.9706f);
							break;
						case 1:
							func_397(&sVar0, 2698.555f, 183.9842f, 52.7268f, 12.5536f);
							break;
						case 2:
							func_397(&sVar0, 2012.363f, 450.9774f, 114.9433f, 51.6697f);
							break;
						case 3:
							func_397(&sVar0, 2870.96f, 831.843f, 48.2579f, 28.2762f);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 334.8338f, 220.554f, 101.8269f, 119.7537f);
							break;
						case 1:
							func_397(&sVar0, -113.9271f, 443.0494f, 111.7579f, 219.7514f);
							break;
						case 2:
							func_397(&sVar0, -298.4487f, 637.9625f, 111.069f, 190.7615f);
							break;
						case 3:
							func_397(&sVar0, -379.536f, -313.1479f, 87.3478f, 269.676f);
							break;
						case 4:
							func_397(&sVar0, 1058.255f, 395.0368f, 100.4976f, 78.4296f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
							break;
						case 1:
							func_397(&sVar0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -650.8867f, 350.328f, 87.9592f, 308.87f);
							break;
						case 1:
							func_397(&sVar0, 581.8732f, -498.1398f, 77.1145f, 214.5317f);
							break;
						case 2:
							func_397(&sVar0, 195.9423f, 643.7529f, 133.8094f, 123.0221f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
						case 1:
							func_397(&sVar0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 488.6012f, 346.341f, 104.38f, 132.2152f);
							break;
						case 1:
							func_397(&sVar0, -491.0948f, 240.2662f, 42.8778f, 245.3544f);
							break;
						case 2:
							func_397(&sVar0, -1063.855f, -573.8351f, 81.1675f, 22.0417f);
							break;
						case 3:
							func_397(&sVar0, -1383.4f, -131.3f, 94.2f, 2.2213f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1721.41f, -764.9014f, 41.3985f, 48.7414f);
							break;
						case 1:
							func_397(&sVar0, 917.1657f, -1057.089f, 55.351f, 197.7367f);
							break;
						case 2:
							func_397(&sVar0, 1367.119f, -1379.669f, 79.039f, 234.1533f);
							break;
						case 3:
							func_397(&sVar0, 1492.79f, -1122.532f, 56.3596f, 8.428f);
							break;
						case 4:
							func_397(&sVar0, 2246.185f, -1359.823f, 44.2797f, 67.8845f);
							break;
						case 5:
							func_397(&sVar0, 1289.32f, -1632.029f, 65.404f, 182.4022f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
							break;
						case 1:
							func_397(&sVar0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1861.568f, -1978.116f, 43.699f, 111.3814f);
							break;
						case 1:
							func_397(&sVar0, 1506.446f, -2206.457f, 42.6941f, 158.0186f);
							break;
						case 2:
							func_397(&sVar0, 2273.229f, -1369.996f, 45.7006f, 80.9983f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1346.7f, -858.3f, 72.7f, 88.6f);
							break;
						case 1:
							func_397(&sVar0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2264.292f, -1366.995f, 44.3097f, 79.8327f);
							break;
						case 1:
							func_397(&sVar0, 2264.248f, -1037.55f, 42.1479f, 54.3753f);
							break;
						case 2:
							func_397(&sVar0, 1091.079f, -1431.687f, 54.6637f, 223.0478f);
							break;
						case 3:
							func_397(&sVar0, 1493.179f, -1116.514f, 55.4248f, 352.523f);
							break;
						case 4:
							func_397(&sVar0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2299.518f, 1759.59f, 107.9513f, 195.5682f);
							break;
						case 1:
							func_397(&sVar0, 2705.534f, 1911.673f, 113.9124f, 141.4947f);
							break;
						case 2:
							func_397(&sVar0, 2530.082f, 1242.029f, 148.8438f, 338.4772f);
							break;
						case 3:
							func_397(&sVar0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
							break;
						case 1:
							func_397(&sVar0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
							break;
						case 1:
							func_397(&sVar0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 2482.688f, 729.5152f, 72.2941f, 117.0933f);
							break;
						case 1:
							func_397(&sVar0, 2585.403f, 338.2195f, 69.6483f, 220.6653f);
							break;
						case 2:
							func_397(&sVar0, 1805.624f, 550.4319f, 105.9446f, 233.3962f);
							break;
						case 3:
							func_397(&sVar0, 2793.57f, 1038.077f, 58.5925f, 188.5771f);
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 13:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, 997.1635f, -1186.04f, 64.0811f, 75.3782f);
							break;
						case 1:
							func_397(&sVar0, 1391.092f, -1081.252f, 70.8405f, 284.1285f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_397(&sVar0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
							break;
						case 1:
							func_397(&sVar0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 0:
					switch (iParam4)
					{
						case 1:
							func_397(&sVar0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
							break;
					}
					break;
			}
			break;
		case 3:
			*uParam2 = { 0.0f, 0.0f, 0.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		default:
			*uParam2 = { 0.0f, 0.0f, 0.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
	}
	*uParam2 = { sVar0 /*3*/ };
	*uParam3 = sVar0.f_3;
	if (func_69(*uParam2))
	{
		*uParam2 = { 0.0f, 0.0f, 0.0f /*3*/ };
		*uParam3 = 0.0f;
	}
}

bool func_253(int iParam0, bool bParam1)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

int func_255(bool bParam0, bool bParam1, bool bParam2)
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

void func_256(var uParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	int iVar12;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_237))
	{
		func_398(&(uParam0->f_237), uParam0->f_209, uParam0->f_151);
	}
	func_399(uParam0->f_237, "ambush_restriction", 1, 0, (1 << 9), 0, -1082130432);
	vVar0 = { uParam0->f_209 + Vector(-40.0f, -fParam1, -fParam1) /*3*/ };
	vVar3 = { uParam0->f_209 + Vector(40.0f, fParam1, fParam1) /*3*/ };
	vVar6 = { func_384(vVar0, vVar3, 0) /*3*/ };
	vVar9 = { func_385(vVar0, vVar3, 0) /*3*/ };
	if (func_400(uParam0->f_151))
	{
		iVar12 = func_401(uParam0);
		func_402(uParam0->f_209, fParam1, 0, 0, iVar12);
	}
	PED::SET_PED_NON_CREATION_AREA(vVar6, vVar9);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar6, vVar9, false, 1);
	FIRE::STOP_FIRE_IN_RANGE(uParam0->f_209, fParam1);
	func_403(uParam0->f_209, fParam1, 0);
}

void func_257(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 0);
	if (bParam3)
	{
		func_244(&iParam1, (1 << 13));
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, iParam0);
	}
}

int func_258(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0.0f, 0.0f, 0.0f);
		case joaat("HORSE_CLASS_DRAFT"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_DRAFT"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0.0f, 0.0f, 0.0f);
		case joaat("HORSE_CLASS_RACE"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RACE"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0.0f, 0.0f, 0.0f);
		case joaat("HORSE_CLASS_WAR"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WAR"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0.0f, 0.0f, 0.0f);
		case joaat("HORSE_CLASS_WORK"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WORK"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0.0f, 0.0f, 0.0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), true, false, 0.0f, 0.0f, 0.0f);
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_404(iParam0);
	if ((func_187(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 5:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_TOBIANO");
					break;
				default:
					if (func_405())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_NOKOTA_WHITEROAN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET");
					break;
				default:
					if (func_405())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_OVERO");
					break;
				default:
					if (func_405())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
					break;
				default:
					if (func_405())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				default:
					if (func_405())
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					}
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_02");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
			}
			break;
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_BLANKET");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
			}
			break;
		default:
			iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
			break;
	}
	return iVar2;
}

int func_260(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = joaat("META_HORSE_SADDLE_ONLY");
	iVar1 = func_404(iParam0);
	if ((func_187(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = -1279161173;
					break;
				case 1:
					iVar2 = -520362209;
					break;
				case 2:
					iVar2 = -803977904;
					break;
				case 3:
					iVar2 = -1279161173;
					break;
				case 4:
					iVar2 = -520362209;
					break;
				case 5:
					iVar2 = -803977904;
					break;
				default:
					if (func_405())
					{
						iVar2 = -1279161173;
					}
					else
					{
						iVar2 = -520362209;
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = 42113864;
					break;
				case 1:
					iVar2 = 694577423;
					break;
				case 2:
					iVar2 = 42113864;
					break;
				case 3:
					iVar2 = 694577423;
					break;
				default:
					if (func_405())
					{
						iVar2 = 42113864;
					}
					else
					{
						iVar2 = 694577423;
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1078773108;
					break;
				case 1:
					iVar2 = 1314808215;
					break;
				case 2:
					iVar2 = -801577650;
					break;
				case 3:
					iVar2 = -1635384855;
					break;
				case 4:
					iVar2 = -1150469193;
					break;
				default:
					if (func_405())
					{
						iVar2 = 1078773108;
					}
					else
					{
						iVar2 = 1314808215;
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1371076591;
					break;
				case 1:
					iVar2 = 998558599;
					break;
				case 2:
					iVar2 = -1175500706;
					break;
				case 3:
					iVar2 = 1814441161;
					break;
				default:
					if (func_405())
					{
						iVar2 = 1371076591;
					}
					else
					{
						iVar2 = 998558599;
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = -314847033;
					break;
				case 1:
					iVar2 = -2125596339;
					break;
				case 2:
					iVar2 = 1938775504;
					break;
				case 3:
					iVar2 = -477512349;
					break;
				default:
					if (func_405())
					{
						iVar2 = -2125596339;
					}
					else
					{
						iVar2 = 1938775504;
					}
					break;
			}
			break;
		default:
			break;
	}
	return iVar2;
}

void func_261()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = func_406(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar1);
		}
		iVar0++;
	}
}

void func_262(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_265(uParam0, iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_263()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = func_406(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
			{
				iVar2 = 0;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_264(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_265(uParam0, iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_265(var uParam0, int iParam1)
{
	switch (uParam0->f_181)
	{
		case 0:
			return joaat("G_M_M_UNIDUSTER_01");
		case 4:
			return joaat("G_M_M_UNIRANCHERS_01");
		default:
			break;
	}
	return joaat("G_M_M_UNICRIMINALS_01");
}

bool func_266(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

struct<4> /*32*/ func_267(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (*iParam0)
	{
		case 0:
			if (func_135(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_407(0, 8);
					case 1:
						return func_407(0, 9);
					case 2:
						return func_407(0, 10);
					case 3:
						return func_407(0, 11);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(1, 10);
					case 1:
						return func_407(1, 11);
					case 2:
						return func_407(1, 12);
					case 3:
						return func_407(1, 13);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_135(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_407(2, 8);
					case 1:
						return func_407(2, 9);
					case 2:
						return func_407(2, 4);
					case 3:
						return func_407(2, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(3, 10);
					case 1:
						return func_407(3, 11);
					case 2:
						return func_407(3, 4);
					case 3:
						return func_407(3, 7);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

void func_268(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_408(iParam1))
		{
			func_409(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_410(iParam0, 0, 1);
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
			func_411(iParam0, 0);
			bVar0 = true;
		}
		func_412(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_269(int iParam0)
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

struct<4> /*32*/ func_270(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (*iParam0)
	{
		case 0:
			if (func_135(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_407(0, 0);
					case 1:
						return func_407(0, 2);
					case 2:
						return func_407(0, 4);
					case 3:
						return func_407(0, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(1, 0);
					case 1:
						return func_407(1, 2);
					case 2:
						return func_407(1, 4);
					case 3:
						return func_407(1, 7);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_135(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_407(2, 0);
					case 1:
						return func_407(2, 2);
					case 2:
						return func_407(2, 4);
					case 3:
						return func_407(2, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(3, 0);
					case 1:
						return func_407(3, 2);
					case 2:
						return func_407(3, 4);
					case 3:
						return func_407(3, 7);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

char* func_271(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_413(iParam0, iParam1);
	return func_414(iVar0);
}

void func_272(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_61(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

int func_273(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_415(iParam3, 1);
	bVar1 = func_415(iParam3, 2);
	bVar2 = !func_415(iParam3, 4);
	bVar3 = func_415(iParam3, 8);
	bVar4 = !func_415(iParam3, 16);
	bVar5 = func_415(iParam3, 32);
	bVar6 = func_415(iParam3, 64);
	return func_416(iParam0, iParam1, bVar0, bVar1, bParam4, bVar2, bVar3, fParam5, fParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("GROUP_REPEATER");
		case 1:
			return joaat("GROUP_REVOLVER");
		case 2:
			return joaat("GROUP_REPEATER");
		case 3:
			return joaat("GROUP_REPEATER");
		default:
			break;
	}
	return joaat("GROUP_REPEATER");
}

bool func_275(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_417(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_418((*uParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_276(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		iParam0->f_8 = func_185();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_419(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

void func_277(int iParam0)
{
	sLocal_274.f_8 = iParam0;
}

int func_278(var uParam0, int iParam1)
{
	var uVar0;
	struct<11> /*88*/ sVar1;

	sVar1.f_10 = 7;
	sVar1.f_0 = 0;
	sVar1.f_1 = iParam1;
	sVar1.f_2 = 0;
	return func_420(&uVar0, &sVar1);
}

bool func_279(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "bValidRobber") && DECORATOR::DECOR_GET_BOOL(iParam0, "bValidRobber"))
	{
		return true;
	}
	return false;
}

void func_280(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(iParam0);
	}
	if (bParam1)
	{
		if (!func_421(610))
		{
			if (!func_422())
			{
				func_423(1);
				func_424();
			}
		}
		func_425(610, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, true);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iParam0, "", fParam2, fParam2, 0, 0.0f, 0.0f, 0, false, -1);
		}
		PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), iParam0, 1, 0);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iParam0, "", fParam2, fParam2, 8, 0.0f, 0.0f, 0, false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, false);
		if (!bParam3)
		{
			PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
		}
	}
}

void func_281(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_VISIBLE((*iParam0)[iParam1]))
		{
			ENTITY::_SET_ENTITY_FADE_IN((*iParam0)[iParam1]);
			ENTITY::SET_ENTITY_VISIBLE((*iParam0)[iParam1], true);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE((*iParam0)[iParam1], true);
		}
		ENTITY::SET_ENTITY_COLLISION((*iParam0)[iParam1], true, false);
		ENTITY::SET_ENTITY_PROOFS((*iParam0)[iParam1], 0, false);
		ENTITY::FREEZE_ENTITY_POSITION((*iParam0)[iParam1], false);
		func_336(iParam0, iParam1, 4);
	}
	else
	{
		ENTITY::SET_ENTITY_VISIBLE((*iParam0)[iParam1], false);
		ENTITY::SET_ENTITY_COLLISION((*iParam0)[iParam1], false, false);
		ENTITY::SET_ENTITY_PROOFS((*iParam0)[iParam1], 127, false);
		ENTITY::FREEZE_ENTITY_POSITION((*iParam0)[iParam1], true);
		func_231(iParam0, iParam1, 4);
	}
}

void func_282(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_84[iParam1]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_84[iParam1], true);
		}
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_40[iParam1], true);
		func_426(iParam0, iParam1, 4);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_84[iParam1]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_84[iParam1], false);
		}
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_40[iParam1], false);
		func_165(iParam0, iParam1, 4);
	}
}

void func_283(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_427((*uParam0)[iParam1], &(uParam0->f_22[iParam1]), iParam2, iParam3, 0, 0);
}

int func_284(int iParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	if (func_350(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0.0f, bParam5, iParam6, 1, 0, 0))
	{
		iParam0->f_77 = iParam1;
		func_311(&(iParam0->f_115), 0, 1);
		func_193(&(iParam0->f_9[5 /*3*/]));
	}
	return 0;
}

bool func_285(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_428(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_429(fParam0))
	{
		return false;
	}
	return true;
}

void func_286(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

int func_287(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 720;
				case 2:
					return 720;
				case 36:
					return 720;
				case 5:
				case 35:
					return 720;
				case 6:
				case 42:
					return 720;
				case 9:
					return 720;
				case 10:
					return 720;
				case 37:
					return 720;
				case 12:
					return 720;
				case 13:
					return 720;
				case 14:
					return 720;
				case 15:
					return 720;
				case 16:
					return 720;
				case 18:
					return 720;
				case 31:
					return 720;
				case 34:
					return 720;
				case 43:
					return 20;
				default:
					break;
			}
			return 3600;
		case 1:
			switch (iParam0)
			{
				case 43:
					return 20;
				default:
					break;
			}
			return 180;
	}
	return 180;
}

bool func_288(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

void func_289(var uParam0, int iParam1)
{
}

bool func_290(var uParam0)
{
	switch (uParam0->f_224)
	{
		case 0:
			if (func_430(uParam0))
			{
				func_289(uParam0, 1);
				return true;
			}
			break;
		case 1:
			if (func_431(uParam0))
			{
				func_289(uParam0, 2);
				return true;
			}
			break;
		case 2:
			if (func_432(uParam0))
			{
				func_289(uParam0, 3);
				return true;
			}
			break;
		case 3:
			if (func_433(uParam0))
			{
				func_289(uParam0, 4);
				return true;
			}
			break;
		case 4:
			if (func_434(uParam0))
			{
				func_289(uParam0, 5);
				return true;
			}
			break;
		case 5:
			if (func_435(uParam0))
			{
				func_289(uParam0, 6);
				return true;
			}
			break;
		case 6:
			break;
	}
	uParam0->f_224++;
	uParam0->f_224 = (uParam0->f_224 % 7);
	return false;
}

bool func_291(var uParam0, int iParam1)
{
	return (uParam0->f_17 & iParam1) != 0;
}

bool func_292(var uParam0)
{
	return func_215(*uParam0, 2);
}

void func_293(var uParam0)
{
	if (!func_60(uParam0))
	{
	}
	if (func_292(uParam0))
	{
		uParam0->f_1 = (func_24() - uParam0->f_2);
		uParam0->f_2 = 0.0f;
		func_436(uParam0, 2);
	}
}

void func_294(var uParam0, int iParam1)
{
	uParam0->f_17 |= iParam1;
}

void func_295(var uParam0)
{
	if (!func_60(uParam0))
	{
	}
	if (!func_292(uParam0))
	{
		uParam0->f_2 = (func_24() - uParam0->f_1);
		func_437(uParam0, 2);
	}
}

bool func_296(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	if (VOLUME::IS_POINT_IN_VOLUME(iParam0, Global_36))
	{
		return true;
	}
	return false;
}

bool func_297(int iParam0)
{
	if (!func_60(&(iParam0->f_182.f_13)))
	{
		return true;
	}
	if (!func_47(&(iParam0->f_182.f_13), iParam0->f_182.f_16))
	{
		return true;
	}
	return false;
}

int func_298(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = PED::GET_MOUNT(iParam0);
		bVar1 = !ENTITY::IS_ENTITY_DEAD(iVar0);
		bVar2 = PED::IS_PED_ON_MOUNT(iParam0);
		bVar3 = false;
		if (!bVar2 || !bVar1)
		{
			if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 149 /*PRF_0x9586E472*/))
			{
				if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 148 /*PRF_0x155E7998*/))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						if (*uParam1 > 0)
						{
							*uParam1 = 0;
						}
						return 1;
					}
				}
			}
		}
		switch (*uParam1)
		{
			case 0:
				if (bVar1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, iParam4, false);
					*uParam1 = 1;
				}
				break;
			case 1:
				bVar3 = (bParam3 && (TASK::IS_PED_RUNNING(iVar0) || TASK::IS_PED_SPRINTING(iVar0)));
				if (bVar3 || (!bParam2 || func_438(iVar0)))
				{
					if (bVar3)
					{
						TASK::TASK_HORSE_ACTION(iVar0, 9, 0, 0);
					}
					else
					{
						TASK::TASK_HORSE_ACTION(iVar0, 2, 0, 0);
					}
					*uParam1 = 2;
				}
				break;
			case 2:
				if (PED::GET_PED_RESET_FLAG(iParam0, 148 /*PRF_0x155E7998*/))
				{
					*uParam1 = 3;
				}
				else if (!func_439(iVar0, joaat("SCRIPT_TASK_HORSE_ACTION")))
				{
					*uParam1 = 1;
				}
				break;
			case 3:
				if (bVar2 || !PED::GET_PED_RESET_FLAG(iParam0, 148 /*PRF_0x155E7998*/))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						return 1;
					}
				}
				break;
		}
	}
	if (bParam5)
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
	}
	return 0;
}

int func_299(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	Vector3 vVar5;
	Vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_389(*uParam1, 128))
	{
		if (!func_439(iParam0, joaat("SCRIPT_TASK_PICKUP_CARRIABLE_ENTITY")))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_389(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_438(iVar2))
			{
				return 0;
			}
			if (!func_439(iParam0, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")))
			{
				if (fParam7 != 0.0f && fParam8 != 0.0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_440(iVar2, vVar5))
					{
						iParam4 = (1 << 17);
					}
					else
					{
						iParam4 = (1 << 18);
					}
					if (!func_389(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_187(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			func_441(uParam1, 128);
			return 0;
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_389(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_389(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_438(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_187(iParam2, 2) && PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (!func_187(iParam2, (1 << 11)))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (func_187(iParam2, (1 << 13)))
				{
					HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_389(*uParam1, 2336))
		{
			if (!func_438(iVar2))
			{
			}
			if (func_442(iVar2, *uParam1))
			{
				func_443(uParam1, 32);
				func_443(uParam1, 256);
				func_443(uParam1, (1 << 11));
				func_441(uParam1, (1 << 9));
				func_441(uParam1, (1 << 10));
				func_441(uParam1, (1 << 12));
			}
			else
			{
				return 0;
			}
		}
		if (func_389(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_438(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_443(uParam1, 64);
			}
		}
		if (func_187(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_187(iParam2, (1 << 10)))) || func_187(iParam2, 8)) && !func_389(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_441(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_187(iParam2, (1 << 12))) && !func_389(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_441(uParam1, (1 << 11));
			func_441(uParam1, (1 << 12));
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_187(iParam2, 32)) && !func_389(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_441(uParam1, 256);
			func_441(uParam1, (1 << 10));
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_441(uParam1, 64);
		}
		else if (!func_187(iParam2, 1))
		{
			if (!func_187(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, true, 0);
			}
			if (fParam7 != 0.0f && fParam8 != 0.0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_440(iVar2, vVar8))
				{
					iParam4 = (1 << 17);
				}
				else
				{
					iParam4 = (1 << 18);
				}
				if (!func_389(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0.0f);
			func_441(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_441(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_187(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_441(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	else if (!func_187(iParam2, (1 << 9)))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_441(uParam1, 8);
	}
	return 0;
}

Vector3 func_300(int iParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	func_444(vVar6);
	vVar6 = { FloatToVector((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 /*3*/ };
	vVar3 = { vVar0 + vVar6 /*3*/ };
	return vVar3;
}

void func_301(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 2);
	}
	else
	{
		func_245(&(uParam0->f_1), 2);
	}
}

void func_302(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 8);
	}
	else
	{
		func_245(&(uParam0->f_1), 8);
	}
}

void func_303(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 1);
	}
	else
	{
		func_245(&(uParam0->f_1), 1);
	}
}

struct<4> /*32*/ func_304(int iParam0)
{
	struct<4> /*32*/ sVar0;

	switch (*iParam0)
	{
		case 0:
			if (func_135(iParam0, 1))
			{
				return func_407(0, 14);
			}
			else
			{
				return func_407(1, 16);
			}
			break;
	}
	return sVar0;
}

bool func_305(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_306()
{
	if (func_136(sLocal_274.f_40[6], Global_36))
	{
		return true;
	}
	return false;
}

float func_307()
{
	if (iLocal_15.f_9[0] < iLocal_15.f_9[1])
	{
		return iLocal_15.f_9[0];
	}
	return iLocal_15.f_9[1];
}

int func_308(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = -1;
	iVar3 = -1;
	iVar4 = (1 << 19) | func_445(3, 0, 0);
	iVar5 = 1;
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar1]))
		{
		}
		else
		{
			iVar0 = func_446(&(iLocal_15[iVar1]), uParam0[iVar1 /*21*/], 50.0f, &(uParam0->f_43), &iVar5, 4.0f, 3, 0, 0, iVar4, 0, 0, 2, 1, -1082130432, 0);
			if (func_447(uParam0[iVar1 /*21*/]))
			{
				if (uParam0->f_79 == -1)
				{
					uParam0->f_79 = iVar1;
				}
				iVar3 = (uParam0[iVar1 /*21*/])->f_1;
				switch (iVar3)
				{
					case 0:
						if (!func_448(&(uParam0->f_43[0 /*17*/]), 0))
						{
							func_449(&(uParam0->f_43[0 /*17*/]), 1, 1);
						}
						break;
					case 1:
						if (!func_448(&(uParam0->f_43[1 /*17*/]), 0))
						{
							func_140(&(sLocal_274.f_198), iLocal_15[1], 0, 50.0f);
							func_449(&(uParam0->f_43[1 /*17*/]), 1, 1);
						}
						break;
				}
				switch (iVar3)
				{
					case 0:
					case 1:
						func_311(uParam0, 0, 1);
						break;
				}
			}
			if (iVar0 != -1)
			{
				iVar2 = iVar0;
				uParam0->f_78 = iVar2;
				switch (iVar2)
				{
					case 0:
						break;
					case 1:
						uParam0->f_82++;
						break;
				}
				uParam0->f_80 = 0;
			}
		}
		iVar1++;
	}
	return iVar2;
}

bool func_309(var uParam0, float fParam1)
{
	if (func_47(uParam0, fParam1))
	{
		func_196(uParam0);
		return true;
	}
	return false;
}

void func_310(var uParam0, var uParam1)
{
	char* sVar0[2];
	char* sVar3[2];

	sVar0[0] = func_450(8);
	sVar0[1] = func_450(10);
	if (func_246())
	{
		sVar3[0] = "";
		sVar3[1] = "ORR_V2_ILO_NEG";
	}
	else if (func_87(uParam0->f_181, 0))
	{
		sVar3[0] = "";
		sVar3[1] = "ORR_V1_ILO_NEG";
	}
	else
	{
		sVar3[0] = "";
		sVar3[1] = "ORR_V2_ILO_NEG";
	}
	func_451(&(uParam1->f_43[0 /*17*/]), sVar0[0], sVar3[0], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	func_451(&(uParam1->f_43[1 /*17*/]), sVar0[1], sVar3[1], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	func_449(&(uParam1->f_43[0 /*17*/]), 1, 1);
}

void func_311(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_452(uParam0, 0))
		{
			func_453(uParam0, 0, 1);
		}
		if (!func_452(uParam0, 1))
		{
			func_453(uParam0, 1, 1);
		}
	}
	else
	{
		if (bParam2 || func_452(uParam0, 0))
		{
			func_453(uParam0, 0, 0);
		}
		if (bParam2 || func_452(uParam0, 1))
		{
			func_453(uParam0, 1, 0);
		}
	}
}

void func_312(int iParam0, int iParam1)
{
	iParam0->f_5 = iParam1;
}

void func_313(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_454(uParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (uParam0->f_181)
	{
		case 0:
			*iParam2 = 0;
			strcpy_s(sParam3, 64, "GANG_INTERACT_STOP_RIGHT_THERE");
			*iParam4 = 2;
			break;
		case 4:
			*iParam2 = 1;
			strcpy_s(sParam3, 64, "GANG_INTERACT_STOP_RIGHT_THERE");
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 1;
			strcpy_s(sParam3, 64, "GANG_INTERACT_STOP_RIGHT_THERE");
			*iParam4 = 1;
			break;
	}
}

void func_314(var uParam0, float fParam1)
{
	func_40(&(uParam0->f_182.f_13), 0);
	uParam0->f_182.f_16 = fParam1;
}

void func_315()
{
	int iVar0;
	Vector3 vVar1;

	vVar1 = { func_455(&sLocal_274, 0) /*4*/ };
	PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[0], false, 0, false);
	func_281(&iLocal_15, 0, 1);
	func_282(&iLocal_15, 0, 1);
	PED::_SET_PED_COMBAT_STYLE(iLocal_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1.0f);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2.0f, 20000, 5.5f, 1, 40000.0f);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2.0f, 0, 0.5f, 4.0f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 1);
	func_203(iLocal_15[0], &iVar0, 0, 0, 1, 1);
	vVar1 = { func_455(&sLocal_274, 1) /*4*/ };
	PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[1], false, 0, false);
	func_281(&iLocal_15, 1, 1);
	func_281(&iLocal_15, 1, 1);
	PED::_SET_PED_COMBAT_STYLE(iLocal_15[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1.0f);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2.0f, 20000, 5.0f, 1, 40000.0f);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2.0f, 0, 0.5f, 4.0f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 1);
	func_203(iLocal_15[1], &iVar0, 0, 0, 1, 1);
	func_283(&iLocal_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
	func_283(&iLocal_15, 1, joaat("BLIP_STYLE_ENEMY"), 0);
	sLocal_274.f_66 = func_456();
	if (Global_1935630.f_40 != 0)
	{
		sLocal_274.f_67 = 1;
	}
	func_40(&(sLocal_274.f_9[6 /*3*/]), 0);
	func_137(&sLocal_274, (1 << 14));
}

void func_316()
{
	int iVar0;
	Vector3 vVar1;
	int iVar5;

	iVar5 = 2;
	while (iVar5 <= 3)
	{
		func_281(&iLocal_15, iVar5, 1);
		func_282(&iLocal_15, iVar5, 1);
		vVar1 = { func_455(&sLocal_274, iVar5) /*4*/ };
		PED::_SET_PED_COMBAT_STYLE(iLocal_15[iVar5], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1.0f);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2.0f, 0, 0.5f, 3.0f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 1);
		func_203(iLocal_15[iVar5], &iVar0, 0, 0, 1, 1);
		iVar5++;
	}
}

void func_317()
{
	int iVar0;

	iVar0 = 2;
	while (iVar0 <= 3)
	{
		if (func_61(iLocal_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_15.f_22[iVar0]))
			{
				if (func_225(iLocal_15[iVar0], 80.0f, 30.0f, iLocal_15.f_9[iVar0], -1082130432))
				{
					func_283(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
		}
		iVar0++;
	}
}

void func_318(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_454(uParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (uParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			strcpy_s(sParam3, 64, "GANG_STOP_OR_WE_SHOOT");
			*iParam4 = 2;
			break;
		case 4:
			*iParam2 = 1;
			strcpy_s(sParam3, 64, "GANG_STOP_OR_WE_SHOOT");
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 0;
			strcpy_s(sParam3, 64, "GANG_STOP_OR_ILL_SHOOT");
			*iParam4 = 2;
			break;
	}
}

bool func_319()
{
	char[] cVar0[8];
	int iVar8;
	int iVar9;
	float fVar10;

	func_457(&(sLocal_274.f_198), 50.0f);
	if (func_30(&iLocal_15, (1 << 25)))
	{
		if (func_458(&iLocal_15))
		{
			func_137(&sLocal_274, (1 << 12));
			return false;
		}
	}
	if (sLocal_274.f_7 <= 6)
	{
		if (func_459())
		{
			func_137(&sLocal_274, (1 << 12));
			return false;
		}
		if (sLocal_274.f_7 < 6)
		{
			func_317();
		}
	}
	else
	{
		func_169(&(sLocal_274.f_78));
		if (func_460())
		{
			func_137(&sLocal_274, (1 << 12));
			return false;
		}
	}
	func_461(&iLocal_15);
	fVar10 = 1.0f;
	switch (sLocal_274.f_7)
	{
		case 0:
			func_462();
			func_463(&sLocal_274, 1);
			break;
		case 1:
			if (!func_464(&sLocal_274, 0))
			{
				func_465(&iLocal_15, &sLocal_274, &iVar8, &cVar0, &iVar9);
				func_28(&iLocal_15, 0);
				func_284(&sLocal_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), iVar9);
				func_40(&(sLocal_274.f_9[7 /*3*/]), 0);
				func_463(&sLocal_274, 2);
			}
			break;
		case 2:
			if (func_466(&iLocal_15, 1, 1) || !PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				if (!func_135(&sLocal_274, (1 << 16)) && func_47(&(sLocal_274.f_9[7 /*3*/]), 2.0f))
				{
					func_140(&(sLocal_274.f_198), iLocal_15[1], 1, 50.0f);
					PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_PLAYER_SURRENDER");
					func_137(&sLocal_274, (1 << 16));
				}
				if (!func_464(&sLocal_274, 0))
				{
					func_467(&iLocal_15, &sLocal_274, &iVar8, &cVar0, &iVar9);
					func_284(&sLocal_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), iVar9);
					if (!func_135(&sLocal_274, (1 << 16)))
					{
						func_140(&(sLocal_274.f_198), iLocal_15[1], 1, 50.0f);
						PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_PLAYER_SURRENDER");
						func_137(&sLocal_274, (1 << 16));
					}
					func_40(&(sLocal_274.f_9[9 /*3*/]), 0);
					func_463(&sLocal_274, 3);
				}
			}
			else
			{
				func_468();
				func_463(&sLocal_274, 6);
			}
			break;
		case 3:
			if (func_466(&iLocal_15, 1, 1) || !PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				fVar10 = 8.5f;
				if (func_469(fVar10) && !func_464(&sLocal_274, 0))
				{
					func_470(&iLocal_15, &sLocal_274, &iVar8, &cVar0, &iVar9);
					func_284(&sLocal_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), iVar9);
					func_193(&(sLocal_274.f_9[9 /*3*/]));
					func_463(&sLocal_274, 4);
				}
			}
			else
			{
				func_468();
				func_463(&sLocal_274, 6);
			}
			break;
		case 4:
			if (func_466(&iLocal_15, 1, 1) || !PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				fVar10 = 7.5f;
				if (func_469(fVar10) && !func_464(&sLocal_274, 0))
				{
					func_140(&(sLocal_274.f_198), iLocal_15[1], 0, 50.0f);
					func_471(&iLocal_15, &sLocal_274, &iVar8, &cVar0, &iVar9);
					func_284(&sLocal_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), iVar9);
					func_137(&sLocal_274, 64);
					func_463(&sLocal_274, 5);
				}
			}
			else
			{
				func_468();
				func_463(&sLocal_274, 6);
			}
			break;
		case 5:
			func_40(&(sLocal_274.f_9[4 /*3*/]), 0);
			if (func_47(&(sLocal_274.f_9[4 /*3*/]), 0.4f))
			{
				func_137(&sLocal_274, (1 << 12));
			}
			break;
		case 6:
			func_472(&(sLocal_274.f_115.f_43), 1, 1);
			if (func_69(sLocal_274.f_200))
			{
				sLocal_274.f_200 = { Global_36 /*3*/ };
				func_473(sLocal_274.f_40[6]);
				sLocal_274.f_200 = { Global_36 /*3*/ };
				sLocal_274.f_40[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(sLocal_274.f_200, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 5.0f, "volRobArea");
			}
			if (func_474())
			{
				if (func_475(iLocal_15[1], &(sLocal_274.f_78), 0.2f, 1, 0, 2, 0, 0, 0, 5000, 1, 0))
				{
					PED::_CLEAR_PED_DESIRED_LOCO_FOR_MODEL(iLocal_15[1]);
					PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_15[1]);
					func_140(&(sLocal_274.f_198), iLocal_15[1], 0, 50.0f);
					if (sLocal_274.f_78.f_4)
					{
						func_28(&iLocal_15, 1);
						func_463(&sLocal_274, 7);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_15[1], true, false);
						TASK::TASK_REACT(iLocal_15[1], Global_35, Global_36, "Default_Shocked", 0.6f, 0.0f, 4);
						TASK::TASK_REACT(iLocal_15[0], Global_35, Global_36, "Default_Shocked", 0.3f, 0.0f, 4);
						func_463(&sLocal_274, 5);
					}
				}
			}
			break;
		case 7:
			if (func_285(0.0f, 1, iLocal_15[1], 1))
			{
				func_476();
				func_463(&sLocal_274, 8);
			}
			break;
		case 8:
			if (func_477())
			{
				func_463(&sLocal_274, 9);
			}
			break;
		case 9:
			if (func_478())
			{
				func_22(&iLocal_15, 16);
			}
			break;
		case 10:
			return true;
	}
	return false;
}

int func_320()
{
	return Global_1310750.f_16037;
}

bool func_321(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_322(int iParam0, int iParam1)
{
	if (!func_321(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] & iParam1) != 0;
}

bool func_323(int iParam0)
{
	if (!func_321(iParam0))
	{
		return false;
	}
	if (func_479(64) && func_480(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_324(int iParam0)
{
	if (!func_321(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_325(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_321(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_481(iParam0);
	Global_1310750.f_16037--;
}

void func_326(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

bool func_327(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 & iParam1) != 0;
}

void func_328(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

int func_329(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return ENTITY::_0xBA2A089E60ED1163(iParam1, iParam0, joaat("CURRENCY_CASH"), 0, 0);
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		return 0;
	}
	*iParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
	return 1;
}

bool func_330(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_482(iParam0);
		return func_483(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_331(int iParam0)
{
}

void func_332(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_333()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_334()
{
	return Global_1572887.f_12;
}

void func_335(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_336(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_97[iParam1] -= (iParam0->f_97[iParam1] & iParam2);
}

bool func_337(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_338(int iParam0)
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

void func_339(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_338(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_484(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_485(iVar0);
	*uParam0 = 0;
}

bool func_340(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

void func_341(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_334() != -1)
	{
		uVar3 = Global_36638.f_1444[iVar1];
		MISC::CLEAR_BIT(&uVar3, iVar2);
		Global_36638.f_1444[iVar1] = uVar3;
		return;
	}
	uVar4 = Global_40.f_7832[iVar1];
	MISC::CLEAR_BIT(&uVar4, iVar2);
	Global_40.f_7832[iVar1] = uVar4;
}

bool func_343(int iParam0)
{
	if (!func_216(iParam0, 3))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) == iParam0)
	{
		return true;
	}
	if (PED::_GET_PED_GRAPPLER(iParam0) == Global_35)
	{
		return true;
	}
	if (PED::_GET_PED_GRAPPLER(Global_35) == iParam0)
	{
		return true;
	}
	return false;
}

void func_344(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_486(uParam0);
		func_487(iParam1, uParam2);
	}
	func_349(*uParam0, 1, bParam4);
}

bool func_345(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT((*iParam0)[iParam1]) || ENTITY::IS_ENTITY_VISIBLE((*iParam0)[iParam1]))
	{
		return true;
	}
	if (!func_133(iParam0, iParam1, 4))
	{
		return true;
	}
	return false;
}

bool func_346(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iParam0->f_40[iParam1]) || ENTITY::IS_ENTITY_VISIBLE(iParam0->f_40[iParam1]))
	{
		return true;
	}
	if (!func_134(iParam0, iParam1, 4))
	{
		return true;
	}
	return false;
}

void func_347()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_61(iLocal_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_15.f_22[iVar0]))
			{
				if (func_488(iLocal_15[iVar0], 1))
				{
					func_283(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_348(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_150((*iParam0)[iParam1], Global_36, 1);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_300((*iParam0)[iParam1], 1065353216), func_300(Global_35, 1065353216), true);
	if (fVar0 < 10.0f)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_OCCLUDED((*iParam0)[iParam1]))
	{
		return true;
	}
	if (PED::IS_PED_IN_COVER((*iParam0)[iParam1], true, false))
	{
		return true;
	}
	if (fVar1 < (fVar0 - 2.0f))
	{
		return false;
	}
	return true;
}

void func_349(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330 /*PCF_0x7C7AF264*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
}

bool func_350(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_489(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_351(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 36:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		case 38:
			iVar0 = 2;
			break;
		case 5:
			iVar0 = 2;
			break;
		case 35:
			iVar0 = 2;
			break;
		case 6:
			iVar0 = 2;
			break;
		case 42:
			iVar0 = 2;
			break;
		case 7:
			iVar0 = 2;
			break;
		case 41:
			iVar0 = 2;
			break;
		case 8:
			iVar0 = 2;
			break;
		case 40:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 1;
			break;
		case 10:
			iVar0 = 2;
			break;
		case 37:
			iVar0 = 2;
			break;
		case 11:
			iVar0 = 2;
			break;
		case 12:
			iVar0 = 1;
			break;
		case 13:
			iVar0 = 1;
			break;
		case 14:
			iVar0 = 1;
			break;
		case 15:
			iVar0 = 1;
			break;
		case 16:
			iVar0 = 1;
			break;
		case 17:
			iVar0 = 2;
			break;
		case 39:
			iVar0 = 2;
			break;
		case 18:
			iVar0 = 2;
			break;
		case 19:
			iVar0 = 1;
			break;
		case 20:
			iVar0 = 1;
			break;
		case 21:
			iVar0 = 1;
			break;
		case 22:
			iVar0 = 1;
			break;
		case 23:
			iVar0 = 2;
			break;
		case 24:
			iVar0 = 2;
			break;
		case 25:
			iVar0 = 1;
			break;
		case 26:
			iVar0 = 1;
			break;
		case 27:
			iVar0 = 1;
			break;
		case 28:
			iVar0 = 1;
			break;
		case 29:
			iVar0 = 2;
			break;
		case 30:
			iVar0 = 2;
			break;
		case 31:
			iVar0 = 1;
			break;
		case 32:
			iVar0 = 1;
			break;
		case 33:
			iVar0 = 2;
			break;
		case 34:
			iVar0 = 2;
			break;
		case 43:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_352(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (iParam0 >= 0)
	{
		if (iParam0 <= 10)
		{
			iVar0 = 0;
		}
		else if (iParam0 <= 17)
		{
			iVar0 = 2;
		}
		else if (iParam0 <= 23)
		{
			iVar0 = 1;
		}
		else if (iParam0 <= 28)
		{
			iVar0 = 3;
		}
		else if (iParam0 <= 30)
		{
			iVar0 = 4;
		}
		else if (iParam0 <= 33)
		{
			iVar0 = 5;
		}
	}
	return iVar0;
}

void func_353(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	func_355(func_490(iParam0) + 1, iParam0);
}

int func_354()
{
	return Global_1393447.f_51;
}

void func_355(int iParam0, int iParam1)
{
	Global_40.f_9632.f_184[iParam1] = iParam0;
}

void func_356()
{
	func_357(Global_40.f_9632.f_196 + 1);
}

void func_357(int iParam0)
{
	Global_40.f_9632.f_196 = iParam0;
}

void func_358(int iParam0)
{
	func_491(iParam0, 0);
	Global_40.f_9632[iParam0 /*4*/]++;
	if (Global_40.f_9632[iParam0 /*4*/] > Global_40.f_9632[iParam0 /*4*/].f_1)
	{
		Global_40.f_9632[iParam0 /*4*/].f_1++;
	}
	func_164(0, 13);
}

void func_359(int iParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_492(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_493(iVar1);
		func_491(iVar1, bVar0);
	}
	iVar1 = func_494(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_493(iVar1);
		func_491(iVar1, bVar0);
	}
	iVar1 = func_495(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_493(iVar1);
		func_491(iVar1, bVar0);
	}
}

void func_360(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479.f_9)
	{
		return;
	}
	Global_1327479.f_4 += iParam0 * 1000;
	if (bParam2)
	{
		Global_1310750.f_16106 = { Global_36 /*3*/ };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479.f_5 += iParam0 * 500;
		}
	}
	else
	{
		Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

bool func_361(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_362(int iParam0, int iParam1)
{
	if (!func_321(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 -= (Global_1310750[iParam0 /*111*/].f_1 & iParam1);
}

bool func_363(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_364(int iParam0)
{
	if (!func_321(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_365(int iParam0)
{
	if (func_321(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_366(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0.0f;
	fVar1 = 0.0f;
	fVar2 = 0.0f;
	fVar3 = 0.0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30.0f;
			break;
		case 1:
			fVar2 = 1.0f;
			break;
		case 2:
			fVar2 = 2.0f;
			break;
		case 3:
			fVar2 = 3.0f;
			break;
		case 4:
			fVar2 = 4.0f;
			break;
		case 5:
			fVar2 = 6.0f;
			break;
		case 6:
			fVar2 = 8.0f;
			break;
		case 7:
			fVar2 = 12.0f;
			break;
		case 8:
			fVar3 = 1.0f;
			break;
		case 9:
			fVar3 = 2.0f;
			break;
		case 10:
			fVar3 = 3.0f;
			break;
		case 11:
			fVar3 = 4.0f;
			break;
		case 12:
			fVar3 = 5.0f;
			break;
		case 13:
			fVar3 = 6.0f;
			break;
		case 14:
			fVar3 = 7.0f;
			break;
		case 15:
			fVar3 = 8.0f;
			break;
		case 16:
			fVar3 = 10.0f;
			break;
		case 17:
			fVar3 = 12.0f;
			break;
		case 18:
			fVar3 = 15.0f;
			break;
		case 19:
			fVar3 = 18.0f;
			break;
		case 20:
			fVar3 = 20.0f;
			break;
		case 21:
			fVar3 = 25.0f;
			break;
		case 22:
			fVar2 = -1.0f;
			break;
		case 23:
			fVar3 = -5.0f;
			break;
		case 24:
			fVar3 = -7.0f;
			break;
		case 25:
			fVar3 = -8.0f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60.0f * fVar1)) + (3600.0f * fVar2)) + (86400.0f * fVar3)));
	return iVar4;
}

void func_367(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0.0f;
	fVar1 = 0.0f;
	fVar2 = 0.0f;
	fVar3 = 0.0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30.0f;
			break;
		case 1:
			fVar2 = 1.0f;
			break;
		case 2:
			fVar2 = 2.0f;
			break;
		case 3:
			fVar2 = 3.0f;
			break;
		case 4:
			fVar2 = 4.0f;
			break;
		case 5:
			fVar2 = 6.0f;
			break;
		case 6:
			fVar2 = 8.0f;
			break;
		case 7:
			fVar2 = 12.0f;
			break;
		case 8:
			fVar3 = 1.0f;
			break;
		case 9:
			fVar3 = 2.0f;
			break;
		case 10:
			fVar3 = 3.0f;
			break;
		case 11:
			fVar3 = 4.0f;
			break;
		case 12:
			fVar3 = 5.0f;
			break;
		case 13:
			fVar3 = 6.0f;
			break;
		case 14:
			fVar3 = 7.0f;
			break;
		case 15:
			fVar3 = 8.0f;
			break;
		case 16:
			fVar3 = 10.0f;
			break;
		case 17:
			fVar3 = 12.0f;
			break;
		case 18:
			fVar3 = 15.0f;
			break;
		case 19:
			fVar3 = 18.0f;
			break;
		case 20:
			fVar3 = 20.0f;
			break;
		case 21:
			fVar3 = 25.0f;
			break;
		case 22:
			fVar2 = -1.0f;
			break;
		case 23:
			fVar3 = -5.0f;
			break;
		case 24:
			fVar3 = -7.0f;
			break;
		case 25:
			fVar3 = -8.0f;
			break;
	}
	func_368(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_368(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_496(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_334() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 += iVar0;
}

void func_369(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_437(uParam0, 1);
	func_436(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_370(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_371(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_371(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_372(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_498(iParam0, 32);
	func_499();
}

void func_373(int iParam0)
{
	int iVar0;

	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_374(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_376(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_376(iParam0);
	}
}

int func_374(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_3;
}

bool func_375(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_376(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
}

bool func_377(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_HOGTIED(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam1, Global_35))
	{
		if (func_225(iParam1, 200.0f, (30.0f * 3.0f), -1082130432, -1082130432))
		{
			return false;
		}
	}
	else if (func_225(iParam1, 200.0f, 30.0f, -1082130432, -1082130432))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(iParam1, true)))
		{
			return false;
		}
	}
	return true;
}

bool func_378(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_379(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (iParam0 == (*iParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_380(int iParam0)
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
	iVar0 = func_251(func_250());
	if (func_187(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_187(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_187(iParam0, (1 << 12)))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_187(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_187(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_187(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_187(iParam0, (1 << 10)))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_187(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_187(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_187(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_187(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_187(iParam0, (1 << 9)))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_187(iParam0, (1 << 13)))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_187(iParam0, (1 << 11)))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_187(iParam0, (1 << 14)))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_187(iParam0, (1 << 15)))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_187(iParam0, (1 << 16)))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_381(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_500(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_382(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return true;
	}
	if (func_233(iParam1, 120.0f, 30.0f))
	{
		return false;
	}
	return true;
}

float func_383(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_394(Global_35, iParam0, bParam1, bParam2);
}

Vector3 func_384(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	Vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_385(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	Vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_386(Vector3 vParam0, float fParam3, int iParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, fParam3, fParam3, fParam3) /*3*/ };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, -fParam3, -fParam3, -fParam3) /*3*/ };
	vVar6 = { func_384(vVar0, vVar3, 0.0f) /*3*/ };
	vVar9 = { func_385(vVar0, vVar3, 0.0f) /*3*/ };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_387(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_238))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam0->f_238);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam0->f_238);
	}
}

bool func_388(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

bool func_389(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_390(int iParam0)
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

int func_391(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

float func_392(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_393(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_501(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

float func_394(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_395(var uParam0, int iParam1)
{
	uParam0->f_239 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbientKillArea");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_239, -472.3117f, -328.8468f, 75.0726f, 0.0f, 0.0f, -85.39629f, 39.46958f, 69.39269f, 48.05282f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_239, -522.3907f, -323.4702f, 75.0726f, 0.0f, 0.0f, 54.34013f, 39.46958f, 69.39269f, 48.05282f);
	if (func_135(iParam1, 1))
	{
		iParam1->f_40[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-525.2192f, -319.7985f, 63.89073f, 0.0f, 0.0f, -10.18612f, 14.0f, 14.0f, 10.60939f, "volBridgeRobArea");
		iParam1->f_40[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-536.0466f, -322.8382f, 75.07261f, 0.0f, 0.0f, 79.34012f, 54.77785f, 69.39269f, 34.11169f, "volTrigger");
		iParam1->f_40[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-547.9333f, -320.5719f, 75.07261f, 0.0f, 0.0f, 79.34012f, 54.778f, 69.39269f, 34.11169f, "volTriggerSlow");
		iParam1->f_40[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam1->f_40[0], -614.3592f, -206.4135f, 115.7361f, 0.0f, 0.0f, -86.43658f, 220.5375f, 335.8115f, 240.5904f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam1->f_40[0], -645.3174f, -314.7065f, 77.17728f, 0.0f, 0.0f, 147.4868f, 355.7617f, 90.74519f, 107.3552f);
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-508.5792f, -326.271f, 66.54327f, 0.0f, 0.0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlow");
		uParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-536.8395f, -321.0542f, 64.33386f, 0.0f, 0.0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlower");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-549.4008f, -317.8009f, 64.33386f, 0.0f, 0.0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlowest");
		iParam1->f_40[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0.0f, 0.0f, 33.59163f, 5.17899f, 24.2928f, 10.0f, "volBridgeFront");
		iParam1->f_40[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 155.1157f, 0.0f, 0.0f, 19.89062f, 5.17899f, 24.2928f, 10.0f, "volBridgeBack");
	}
	else
	{
		iParam1->f_40[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-515.6293f, -324.5672f, 61.78128f, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 19.79306f, "volBridgeRobArea");
		iParam1->f_40[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-501.651f, -343.331f, 75.07261f, 0.0f, 0.0f, 79.3401f, 73.72193f, 69.39269f, 34.11169f, "volTrigger");
		iParam1->f_40[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-501.651f, -343.331f, 75.07261f, 0.0f, 0.0f, 79.3401f, 73.72193f, 69.39269f, 34.11169f, "volTriggerSlow");
		iParam1->f_40[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam1->f_40[0], -435.8815f, -453.0908f, 59.82618f, 0.0f, 0.0f, 4.6707f, 178.4207f, 242.0585f, 305.9797f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam1->f_40[0], -383.7283f, -349.3771f, 90.93168f, 0.0f, 0.0f, -38.65809f, 296.4414f, 105.0418f, 107.3552f);
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-525.5081f, -321.8875f, 72.00636f, 0.0f, 0.0f, -108.602f, 52.86029f, 40.69379f, 40.43703f, "volSlow");
		uParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-503.6722f, -328.9248f, 76.33801f, 0.0f, 0.0f, -108.6972f, 52.74099f, 38.03329f, 29.5835f, "volSlower");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-489.2079f, -333.8198f, 75.95811f, 0.0f, 0.0f, -108.6972f, 50.74282f, 45.5983f, 36.02916f, "volSlowest");
		iParam1->f_40[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 159.2157f, 0.0f, 0.0f, 19.89062f, 5.17899f, 24.2928f, 10.0f, "volBridgeFront");
		iParam1->f_40[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0.0f, 0.0f, 33.59163f, 5.17899f, 24.2928f, 10.0f, "volBridgeBack");
	}
}

void func_396(var uParam0, int iParam1)
{
	if (func_135(iParam1, 1))
	{
		iParam1->f_40[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-525.2192f, -319.7985f, 63.89073f, 0.0f, 0.0f, -10.18612f, 14.0f, 14.0f, 10.60939f, "volBridgeRobArea");
		iParam1->f_40[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-520.018f, -323.06f, 68.0339f, 0.0f, 0.0f, 75.25701f, 86.63735f, 50.0f, 61.25628f, "volTrigger");
		iParam1->f_40[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam1->f_40[0], -614.3592f, -206.4135f, 115.7361f, 0.0f, 0.0f, -86.43658f, 220.5375f, 335.8115f, 240.5904f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam1->f_40[0], -645.3174f, -314.7065f, 77.17728f, 0.0f, 0.0f, 147.4868f, 355.7617f, 90.74519f, 107.3552f);
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-508.5792f, -326.271f, 66.54327f, 0.0f, 0.0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlow");
		uParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-536.8395f, -321.0542f, 64.33386f, 0.0f, 0.0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlower");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-549.4008f, -317.8009f, 64.33386f, 0.0f, 0.0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlowest");
		iParam1->f_40[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0.0f, 0.0f, 33.59163f, 5.17899f, 24.2928f, 10.0f, "volBridgeFront");
		iParam1->f_40[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 155.1157f, 0.0f, 0.0f, 19.89062f, 5.17899f, 24.2928f, 10.0f, "volBridgeBack");
	}
	else
	{
		iParam1->f_40[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-515.6293f, -324.5672f, 61.78128f, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 19.79306f, "volBridgeRobArea");
		iParam1->f_40[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-501.651f, -343.331f, 75.07261f, 0.0f, 0.0f, 79.3401f, 73.72193f, 69.39269f, 34.11169f, "volTrigger");
		iParam1->f_40[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam1->f_40[0], -492.8926f, -467.4217f, 59.82618f, 0.0f, 0.0f, -12.3293f, 178.4207f, 242.0585f, 305.9797f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam1->f_40[0], -383.7283f, -349.3771f, 90.93168f, 0.0f, 0.0f, -38.65809f, 296.4414f, 105.0418f, 107.3552f);
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-525.5081f, -321.8875f, 72.00636f, 0.0f, 0.0f, -108.602f, 52.86029f, 40.69379f, 40.43703f, "volSlow");
		uParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-503.6722f, -328.9248f, 76.33801f, 0.0f, 0.0f, -108.6972f, 52.74099f, 38.03329f, 29.5835f, "volSlower");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-489.2079f, -333.8198f, 75.95811f, 0.0f, 0.0f, -108.6972f, 50.74282f, 45.5983f, 36.02916f, "volSlowest");
		iParam1->f_40[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 159.2157f, 0.0f, 0.0f, 19.89062f, 5.17899f, 24.2928f, 10.0f, "volBridgeFront");
		iParam1->f_40[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0.0f, 0.0f, 33.59163f, 5.17899f, 24.2928f, 10.0f, "volBridgeBack");
	}
}

void func_397(var uParam0, Vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 /*3*/ };
	uParam0->f_3 = fParam4;
}

void func_398(var uParam0, Vector3 vParam1, int iParam4)
{
	float fVar0;

	if (func_56(iParam4))
	{
		fVar0 = 120.0f;
	}
	else
	{
		fVar0 = 180.0f;
	}
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0.0f, 0.0f, 0.0f, fVar0, fVar0, 40.0f, "volAmbush");
}

int func_399(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	vVar3 = { VOLUME::GET_VOLUME_SCALE(iParam0) /*3*/ };
	iVar6 = func_502(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 9:
		case 10:
		case 11:
		case 16:
		case 37:
			return false;
	}
	return true;
}

int func_401(var uParam0)
{
	switch (uParam0->f_151)
	{
		case 3:
		case 4:
		case 6:
			return 6;
		case 0:
		case 1:
		case 2:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
			return 6;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			return 6;
		case 18:
		case 19:
		case 20:
			return 4;
		case 21:
		case 22:
		case 23:
			return 6;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
			return 6;
		case 29:
		case 30:
			return 6;
		case 31:
		case 32:
		case 33:
			return 6;
		case 38:
			return 6;
		case 34:
		case 35:
		case 36:
		case 37:
		case 39:
		case 40:
		case 41:
			return 6;
		case 43:
			return 6;
		default:
			break;
	}
	return 4;
}

void func_402(Vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, fParam3, fParam3, fParam3) /*3*/ };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, -fParam3, -fParam3, -fParam3) /*3*/ };
	vVar6 = { func_384(vVar0, vVar3, 0.0f) /*3*/ };
	vVar9 = { func_385(vVar0, vVar3, 0.0f) /*3*/ };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

void func_403(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 4;
		case 5:
			return 4;
		case 1:
			return 4;
		case 10:
			return 5;
		default:
			break;
	}
	return 1;
}

bool func_405()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

char* func_406(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_re@test";
		default:
			break;
	}
	return "";
}

struct<4> /*32*/ func_407(int iParam0, int iParam1)
{
	return func_503(iParam0, iParam1);
}

bool func_408(int iParam0)
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

void func_409(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_504(iParam0, iParam1))
		{
			if (func_505(iParam0, iParam1))
			{
				if (func_506(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_507(iParam0);
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

void func_410(int iParam0, int iParam1, bool bParam2)
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

void func_411(int iParam0, bool bParam1)
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

void func_412(int iParam0, int iParam1)
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

int func_413(int iParam0, int iParam1)
{
	if (iParam0->f_65)
	{
		switch (iParam1)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 4;
			case 3:
				return 5;
			default:
				break;
		}
		return 4;
	}
	else if (iParam0->f_64)
	{
		switch (iParam1)
		{
			case 0:
				return 3;
			case 1:
				return 2;
			case 2:
				return 3;
			case 3:
				return 2;
			default:
				break;
		}
		return 3;
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 1:
				return 0;
			case 2:
				return 0;
			case 3:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

char* func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		case 1:
			return "0357_G_M_M_UniDuster_02_WHITE_01";
		case 2:
			return "0712_G_M_M_UniRanchers_01_WHITE_02";
		case 3:
			return "0713_G_M_M_UniRanchers_01_WHITE_03";
		case 4:
			return "1066_G_M_M_UniCriminals_01_HISPANIC_03";
		case 5:
			return "1068_G_M_M_UniCriminals_01_HISPANIC_05";
		default:
			break;
	}
	return "";
}

bool func_415(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_416(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(iVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				strcpy_s(&cVar5, 128, WEAPON::_GET_WEAPON_NAME(iVar0));
				iVar2 = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					strcpy_s(&cVar5, 128, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))));
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_337(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_337(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_334() == -1 && !func_508(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_508(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_337(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_509(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_510(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_511(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, bParam4);
	}
	return iVar0;
}

int func_417(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_418(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_512(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0.0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!(iParam2->f_1 & 128) != 0)
		{
			if (func_513(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_514(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!(iParam2->f_1 & 8) != 0)
			{
				if (func_515(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_514(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_516(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_514(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if ((*iParam2 & 32) != 0)
			{
				if (func_517(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_514(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_89(PLAYER::PLAYER_ID(), 0, 1, (iParam2->f_1 & (1 << 19)) == 0))
		{
			if (!(iParam2->f_1 & (1 << 14)) != 0)
			{
				*uParam3 = (1 << 14);
				func_514(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_518(iParam2, 1065353216))
			{
				if (!(iParam2->f_1 & 4) != 0)
				{
					if (func_519(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_514(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!(iParam2->f_1 & 256) != 0)
				{
					if (func_520(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_514(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(iParam2->f_1 & 16) != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_521(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_514(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_521(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_514(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if ((*iParam2 & 8) != 0)
			{
				if (func_522(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_514(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if ((*iParam2 & (1 << 18)) != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20.0f)
			{
				if (func_523(&iParam0, iParam2))
				{
					*uParam3 = (1 << 12);
					func_514(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(iParam2->f_1 & 2) != 0)
			{
				if (func_524(iParam2, 4000))
				{
					if ((func_525(iParam0, Global_1935630.f_41, (*iParam2 & 128) != 0, 0, (*iParam2 & 256) != 0) & func_526(iParam2, iParam0)) && func_527(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_514(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(iParam2->f_1 & 2) != 0)
		{
			if (iParam2->f_12 < 4.0f)
			{
				if ((func_525(iParam0, Global_1935630.f_41, (*iParam2 & 128) != 0, 1, (*iParam2 & 256) != 0) & func_526(iParam2, iParam0)) && func_527(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_514(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if ((*iParam2 & (1 << 17)) == 0)
						{
							if (func_528(iParam0, Global_1935630.f_41))
							{
								func_529();
								*uParam3 = 2;
								func_514(iParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if ((*iParam2 & (1 << 17)) == 0)
					{
						if (func_528(iParam0, Global_1935630.f_41))
						{
							func_529();
							*uParam3 = 2;
							func_514(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10.0f)
			{
				if (func_530(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_185() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_529();
						*uParam3 = 2;
						func_514(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if ((*iParam2 & (1 << 17)) == 0)
				{
					if (func_531())
					{
						if (func_528(iParam0, Global_1935630.f_42))
						{
							func_529();
							*uParam3 = 2;
							func_514(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!(iParam2->f_1 & (1 << 10)) != 0)
		{
			if (func_532(iParam2, iParam0))
			{
				*uParam3 = (1 << 10);
				func_514(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!(iParam2->f_1 & (1 << 11)) != 0)
			{
				if (func_533(iParam0, iParam1, iParam2))
				{
					*uParam3 = (1 << 11);
					func_514(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if ((*iParam2 & 16) != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_534(iParam0, iParam2))
					{
						*uParam3 = (1 << 13);
						func_514(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if ((*iParam2 & 64) != 0)
			{
				if (func_535(iParam0, iParam2))
				{
					*uParam3 = (1 << 15);
					func_514(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12.0f)
		{
			if ((*iParam2 & (1 << 20)) != 0)
			{
				if (func_536(iParam2, 4000))
				{
					if (func_537(&iParam0, iParam2))
					{
						*uParam3 = (1 << 9);
						func_514(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if ((*iParam2 & (1 << 10)) != 0)
			{
				if (func_538(iParam0, iParam2))
				{
					*uParam3 = (1 << 16);
					iParam2->f_4 = 0;
					func_514(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(iParam2->f_1 & 1) != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_539(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_514(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_419(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(iParam0, (1 << 27));
	}
	else
	{
		func_244(iParam0, (1 << 27));
	}
}

int func_420(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> /*16*/ sVar8;
	struct<6> /*48*/ sVar10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_497(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_69(uParam1->f_6))
		{
		}
	}
	bVar0 = func_333();
	if (*uParam1)
	{
		if (bVar0 && !func_501(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_540(5))
			{
				func_541(5);
				func_542(5);
				func_543(0);
				func_544(0);
			}
		}
	}
	if (func_545(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_501(Global_1835011[37 /*74*/].f_1, 1)) && !func_501(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_501(Global_1835011[43 /*74*/].f_1, 1)) && !func_501(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_546(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_547(iVar1))
	{
		bVar3 = true;
		if (func_548(iVar1))
		{
			bVar4 = true;
		}
		if (func_549(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_550(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_540(0) && func_540(1))
			{
				func_551(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_552())
			{
				func_553();
			}
			func_543(0);
			func_544(0);
			func_554(uParam1->f_6);
		}
	}
	if (!func_547(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_555(uParam1->f_10) == 0 || func_556(uParam1->f_10) == 0) || func_557(uParam1->f_10) == 0)
			{
				func_558(uParam1->f_10);
			}
			func_559(uParam1->f_10);
			func_560(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_546(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_547(iVar1))
	{
		bVar3 = true;
		if (func_548(iVar1))
		{
			bVar4 = true;
		}
		if (func_549(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_69(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
			}
		}
	}
	if (func_561(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			sVar8 = { func_562(uParam1->f_10) /*2*/ };
			sVar10 = { func_563() /*6*/ };
			func_564(iVar2, &sVar8, &sVar10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186 /*PCF_CorpseIsPersistent*/, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_375(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_565(uParam1->f_10);
		if (uParam1->f_2 && !func_69(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_UNHITCH_HORSE(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_373(uParam1->f_10);
	if (func_375(uParam1->f_10))
	{
		iVar16 = func_374(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

bool func_421(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_566(iParam0, (1 << 16)) && !func_566(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_566(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_566(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_422()
{
	if (!func_567() && func_568(1))
	{
		return true;
	}
	return false;
}

void func_423(int iParam0)
{
	func_341(1);
}

void func_424()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_569(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_425(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_570(iParam0, &iVar0, &iVar1);
	if (!func_571(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_572(iVar0, iVar1);
}

void func_426(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_106[iParam1] -= (iParam0->f_106[iParam1] & iParam2);
}

void func_427(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

bool func_428(int iParam0, bool bParam1)
{
	if (func_61(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_429(float fParam0)
{
	if (func_573(1))
	{
		return true;
	}
	if (func_60(&uLocal_0) && !func_309(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_430(var uParam0)
{
	if ((Global_1935630.f_26 || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, (1 << 14)) > 0) || func_89(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_431(var uParam0)
{
	if (!func_30(uParam0, (1 << 17)))
	{
		if (Global_1935630.f_40 == 0)
		{
			if (!func_30(uParam0, (1 << 24)) || uParam0->f_20 < 60.0f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_432(var uParam0)
{
	if (func_574(50))
	{
		if (func_575(uParam0->f_209, 1, 8, 0))
		{
			return true;
		}
	}
	if (func_576())
	{
		return true;
	}
	if (Global_1430231.f_4)
	{
		func_577(21);
		return true;
	}
	if (func_187(Global_1392581.f_3, 4) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		func_577(22);
		return true;
	}
	return false;
}

bool func_433(var uParam0)
{
	if (!func_30(uParam0, (1 << 18)))
	{
		if (uParam0->f_20 < 60.0f)
		{
			if (func_578(uParam0, 60.0f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_434(var uParam0)
{
	if (!func_30(uParam0, (1 << 19)))
	{
		if (uParam0->f_20 < 60.0f)
		{
			if (func_579(uParam0, 60.0f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_435(var uParam0)
{
	if (!func_56(uParam0->f_151))
	{
		if (uParam0->f_20 < 60.0f)
		{
			if (func_580(uParam0->f_151, uParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

void func_436(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_437(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_438(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_GET_RIDER_OF_MOUNT(iParam0, false) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0.0f);
	if (func_439(iParam0, joaat("SCRIPT_TASK_HORSE_ACTION")))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_439(int iParam0, int iParam1)
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

bool func_440(int iParam0, Vector3 vParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	return func_581(vVar0, vVar3, vParam1);
}

void func_441(var uParam0, int iParam1)
{
	func_582(uParam0, iParam1);
}

bool func_442(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_439(iParam0, joaat("SCRIPT_TASK_HORSE_ACTION")))
	{
		return true;
	}
	fVar0 = TASK::_GET_SCRIPT_TASK_ACTION_TIME(iParam0, joaat("SCRIPT_TASK_HORSE_ACTION"));
	if (func_389(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_389(iParam1, 256))
	{
		if (fVar0 >= 1.0f)
		{
			return true;
		}
		return false;
	}
	if (func_389(iParam1, (1 << 11)))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_443(var uParam0, int iParam1)
{
	func_583(uParam0, iParam1);
}

Vector3 func_444(Vector3 vParam0)
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

int func_445(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= (1 << 24);
	if (iParam1 != 0)
	{
		iVar0 |= iParam1;
	}
	if (iParam2 != 0)
	{
		iVar0 -= (iVar0 & iParam2);
	}
	return iVar0;
}

int func_446(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_584(&iVar0);
	if (func_187(iVar0, 16) && !bParam15)
	{
		iParam9 |= (1 << 23);
	}
	iVar1 = func_585(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_187(iVar0, (1 << 27)))
	{
		func_586(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_587(558))
				{
					func_425(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_447(var uParam0)
{
	return uParam0->f_2 == 2;
}

bool func_448(int* iParam0, bool bParam1)
{
	if (!bParam1 || func_338(iParam0->f_6))
	{
		return func_588(iParam0, 13);
	}
	return false;
}

void func_449(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_588(iParam0, 13))
		{
			if (bParam2)
			{
				func_589(iParam0, 0, 0);
			}
			func_590(iParam0, 13);
		}
	}
	else if (func_588(iParam0, 13))
	{
		func_591(iParam0, 13);
	}
}

char* func_450(int iParam0)
{
	if (func_592(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_451(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_338(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_593(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_594(iParam0->f_6, iParam0->f_5, 0);
			}
			func_595(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_596(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

bool func_452(var uParam0, int iParam1)
{
	if ((func_597(&(uParam0->f_43[iParam1 /*17*/]), 1, 0) && !func_588(&(uParam0->f_43[iParam1 /*17*/]), 4)) && !func_588(&(uParam0->f_43[iParam1 /*17*/]), 13))
	{
		return true;
	}
	return false;
}

void func_453(var uParam0, int iParam1, bool bParam2)
{
	func_589(&(uParam0->f_43[iParam1 /*17*/]), bParam2, 0);
}

void func_454(var uParam0, int iParam1, var uParam2, char* sParam3, var uParam4)
{
}

struct<4> /*32*/ func_455(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (*iParam0)
	{
		case 0:
			if (func_135(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_407(0, 1);
					case 1:
						return func_407(0, 3);
					case 2:
						return func_407(0, 5);
					case 3:
						return func_407(0, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(1, 1);
					case 1:
						return func_407(1, 3);
					case 2:
						return func_407(1, 5);
					case 3:
						return func_407(1, 8);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_135(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_407(2, 1);
					case 1:
						return func_407(2, 3);
					case 2:
						return func_407(2, 5);
					case 3:
						return func_407(2, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(3, 1);
					case 1:
						return func_407(3, 3);
					case 2:
						return func_407(3, 5);
					case 3:
						return func_407(3, 8);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

float func_456()
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_598(&sLocal_274, 1), true);
}

void func_457(var uParam0, float fParam1)
{
	if (uParam0->f_1)
	{
		if (Global_1935630.f_58 != *uParam0)
		{
			if (func_61(Global_1935630.f_58, 0, 1) && func_279(Global_1935630.f_58))
			{
				func_140(uParam0, *uParam0, 0, fParam1);
				func_140(uParam0, Global_1935630.f_58, 1, fParam1);
			}
		}
	}
}

bool func_458(var uParam0)
{
	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		func_40(&(uParam0->f_256), 0);
		if (func_47(&(uParam0->f_256), 1.5f))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return true;
		}
	}
	return false;
}

bool func_459()
{
	int iVar0;

	if (func_135(&sLocal_274, (1 << 13)))
	{
		if (!func_136(sLocal_274.f_40[6], Global_36))
		{
			return true;
		}
	}
	if (sLocal_274.f_66 >= 0.0f)
	{
		if (sLocal_274.f_66 + 3.0f) < func_456()
		{
			return true;
		}
		if (!sLocal_274.f_78.f_4)
		{
			if (func_47(&(sLocal_274.f_9[6 /*3*/]), 2.0f))
			{
				if (func_136(sLocal_274.f_40[7], Global_36))
				{
					return true;
				}
			}
		}
	}
	if (sLocal_274.f_78 <= 0)
	{
		if (func_466(&iLocal_15, 0, 0) || !sLocal_274.f_67)
		{
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (iLocal_15.f_9[iVar0] < 2.0f)
				{
					return true;
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_460()
{
	if (func_150(Global_35, sLocal_274.f_200, 0) > 7.0f && func_599(&iLocal_15, 0, 3) < 15.0f)
	{
		if (func_600())
		{
			return true;
		}
	}
	return false;
}

void func_461(var uParam0)
{
	if (func_305(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
	}
}

void func_462()
{
	switch (iLocal_15.f_181)
	{
		case 0:
			sLocal_274.f_78.f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			sLocal_274.f_78.f_21 = 1;
			sLocal_274.f_78.f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
			sLocal_274.f_78.f_22 = 2;
			sLocal_274.f_78.f_18 = "GANG_INTERACT_KNOCKOUT";
			sLocal_274.f_78.f_23 = 1;
			sLocal_274.f_78.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			sLocal_274.f_78.f_24 = 1;
			break;
		case 4:
			sLocal_274.f_78.f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			sLocal_274.f_78.f_21 = 3;
			sLocal_274.f_78.f_18 = "GANG_INTERACT_KNOCKOUT";
			sLocal_274.f_78.f_23 = 2;
			sLocal_274.f_78.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			sLocal_274.f_78.f_24 = 1;
			break;
		default:
			sLocal_274.f_78.f_16 = "HANDS_UP";
			sLocal_274.f_78.f_21 = 2;
			sLocal_274.f_78.f_18 = "GANG_INTERACT_KNOCKOUT";
			sLocal_274.f_78.f_23 = 2;
			sLocal_274.f_78.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			sLocal_274.f_78.f_24 = 1;
			break;
	}
}

void func_463(int iParam0, int iParam1)
{
	iParam0->f_7 = iParam1;
}

bool func_464(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		return !func_285(0.0f, 1, iParam1, 1);
	}
	return !func_285(0.0f, 1, iParam0->f_77, 1);
}

void func_465(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_454(uParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (uParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			strcpy_s(sParam3, 64, "GANG_INTERACT_APPROACH_TOLL");
			*iParam4 = 2;
			break;
		case 4:
			*iParam2 = 1;
			strcpy_s(sParam3, 64, "GANG_INTERACT_APPROACH_TOLL");
			*iParam4 = 2;
			break;
		default:
			*iParam2 = 0;
			strcpy_s(sParam3, 64, "GANG_INTERACT_APPROACH_STICKUP");
			*iParam4 = 2;
			break;
	}
}

bool func_466(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if ((func_439(Global_35, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")) || func_439(Global_35, joaat("SCRIPT_TASK_DISEMBARK_VEHICLE"))) || func_439(Global_35, joaat("SCRIPT_TASK_EXIT_TRANSPORT")))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (!PED::IS_PED_FULLY_ON_MOUNT(Global_35, true))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		return true;
	}
	return false;
}

void func_467(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_454(uParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (uParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			strcpy_s(sParam3, 64, "ORDER_DISMOUNT_HORSE");
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 1;
			strcpy_s(sParam3, 64, "ORDER_DISMOUNT_HORSE");
			*iParam4 = 2;
			break;
		default:
			*iParam2 = 0;
			strcpy_s(sParam3, 64, "ORDER_DISMOUNT");
			*iParam4 = 1;
			break;
	}
	if (!func_466(uParam0, 1, 1))
	{
		strcpy_s(sParam3, 64, "HANDS_UP");
		*iParam4 = 0;
	}
}

void func_468()
{
	func_198(&iLocal_15, 0);
	func_140(&(sLocal_274.f_198), iLocal_15[1], 0, 50.0f);
}

int func_469(float fParam0)
{
	if (func_601())
	{
		return 0;
	}
	return func_602(&iLocal_15, sLocal_274.f_9[9 /*3*/], fParam0);
}

void func_470(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_454(uParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (uParam0->f_181)
	{
		case 0:
			*iParam2 = 0;
			strcpy_s(sParam3, 64, "FINAL_WARNING");
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 0;
			strcpy_s(sParam3, 64, "FINAL_WARNING");
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 0;
			strcpy_s(sParam3, 64, "ORDER_DISMOUNT_HORSE_ESCALATED");
			*iParam4 = 1;
			if (!func_466(uParam0, 1, 1))
			{
				strcpy_s(sParam3, 64, "FINAL_WARNING");
				*iParam4 = 0;
			}
			break;
	}
}

void func_471(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_454(uParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (uParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			strcpy_s(sParam3, 64, "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL");
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 1;
			strcpy_s(sParam3, 64, "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL");
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 1;
			strcpy_s(sParam3, 64, "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL");
			*iParam4 = 1;
			break;
	}
}

void func_472(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_449(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_473(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_474()
{
	if (sLocal_274.f_78 > 0)
	{
		return true;
	}
	if (func_466(&iLocal_15, 0, 0))
	{
		return false;
	}
	func_40(&(sLocal_274.f_9[8 /*3*/]), 0);
	if (!func_47(&(sLocal_274.f_9[8 /*3*/]), 1.0f))
	{
		return false;
	}
	if (func_464(&sLocal_274, 0))
	{
		return false;
	}
	if (!func_285(0.0f, 1, Global_35, 1))
	{
		return false;
	}
	return true;
}

bool func_475(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	func_169(uParam1);
	if (Global_1935630.f_12)
	{
		uParam1->f_1 = 0;
		uParam1->f_2 = 1;
		return true;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_COLLECT"), false);
	PED::SET_PED_RESET_FLAG(Global_35, 194 /*PRF_0xE2B59871*/, true);
	switch (*uParam1)
	{
		case 0:
			if (!uParam1->f_7)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					if (bParam3)
					{
						func_603(0);
					}
					if (func_285(fParam4, 1, 0, 0))
					{
						func_350(iParam0, Global_35, uParam1->f_16, 0, -1082130432, uParam1->f_21, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
				}
				uParam1->f_7 = 1;
			}
			if ((((((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_FALLING(Global_35)) && !PED::IS_PED_FALLING_OVER(Global_35)) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) && !func_439(Global_35, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL"))) && !func_439(Global_35, joaat("SCRIPT_TASK_DISEMBARK_VEHICLE"))) && !func_439(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
			{
				PED::_SET_PED_TARGET_ACTION_DISABLE_FLAG(iParam0, 32);
				uParam1->f_25 = { Global_36 /*3*/ };
				if (func_187(iParam5, 4))
				{
					PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_IDLE"), false, 0, false);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
				if (func_337(Global_1935630.f_44))
				{
					func_40(&(uParam1->f_32), 0);
				}
				else
				{
					func_604(&(uParam1->f_32), 0.5f, 0);
				}
				TASK::TASK_ROB_PED(iParam0, Global_35, 0.0f, iParam5, iParam9);
				if (!func_587(609))
				{
					func_341(1);
					uParam1->f_28 = func_605("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					func_570(609, &uVar0, &uVar1);
					func_606(&uVar0, &uVar1);
				}
				uParam1->f_8 = 1;
				*uParam1 = 2;
			}
			break;
		case 2:
			if (((!uParam1->f_12 && !uParam1->f_13) && func_47(&(uParam1->f_32), 2.0f)) && func_607(iParam0, joaat("BSTARTSUCCESS"), "bStartSuccess", 1, 1.8f, 1))
			{
				if (func_608(&(uParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, joaat("INPUT_ATTACK"), 1097859072, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					uParam1->f_12 = 1;
				}
				if (!uParam1->f_14)
				{
					if (func_338(uParam1->f_36))
					{
						uParam1->f_14 = 1;
					}
				}
			}
			if (uParam1->f_14)
			{
				if (func_607(iParam0, joaat("BENDSUCCESS"), "bEndSuccess", 1, 1.8f, 1))
				{
					func_339(&(uParam1->f_36), 1, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				uParam1->f_1 = 1;
				return true;
			}
			bVar2 = false;
			if (func_609() && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
			else if (Global_1935630.f_25)
			{
				bVar2 = true;
			}
			else if (PED::IS_PED_IN_COMBAT(iParam0, 0) && func_439(iParam0, joaat("SCRIPT_TASK_COMBAT")))
			{
				bVar2 = true;
			}
			else if (func_610(uParam1))
			{
				bVar2 = true;
			}
			else if (func_611(uParam1, bParam11))
			{
				bVar2 = true;
			}
			else if ((func_187(iParam5, 16) && !func_439(iParam0, joaat("SCRIPT_TASK_ANY"))) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				bVar2 = true;
			}
			if (!uParam1->f_15)
			{
				if (PED::IS_PED_SHOOTING(iParam0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_20))
				{
					if (bParam3)
					{
						func_603(0);
					}
					if (func_285(fParam4, 1, 0, 0))
					{
						func_350(Global_35, iParam0, uParam1->f_20, 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
				}
				func_339(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				uParam1->f_6 = 1;
				return true;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				if (iParam6 != 0)
				{
					func_612(iParam6, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
					func_613(iParam0, iParam6, 1, 0);
				}
				iVar3 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(func_614(1)) * fParam2));
				if (iVar3 > 0)
				{
					func_615(iVar3, 0, 0, 1, 1);
					func_616(iVar3);
					func_329(iParam0, &iVar4);
					func_330(iParam0, (iVar4 + iVar3));
				}
				PAD::SET_CONTROL_SHAKE(0, 100, 100);
				if (!uParam1->f_3)
				{
					uParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (func_607(iParam0, joaat("BBEFOREHITBREAKOUT"), "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					uParam1->f_5 = 1;
					return true;
				}
			}
			if (func_607(iParam0, joaat("DLG_INTRO"), "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
				{
					if (bParam3)
					{
						func_603(0);
					}
					if (func_285(0.0f, 1, iParam0, 1))
					{
						func_350(iParam0, Global_35, uParam1->f_17, 0, -1082130432, uParam1->f_22, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
				}
				uParam1->f_15 = 1;
			}
			if (func_607(iParam0, joaat("DLG_HIT"), "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						func_603(0);
					}
				}
				if (uParam1->f_11)
				{
					if (func_285(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
						{
							func_350(iParam0, Global_35, uParam1->f_18, 0, -1082130432, uParam1->f_23, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						}
					}
				}
				else if (func_285(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						func_350(iParam0, Global_35, uParam1->f_18, 0, -1082130432, uParam1->f_23, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
				}
				func_339(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_cut_cheek", 0.0f, 1.0f);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_bruise_eye_A", 0.0f, 1.0f);
				if (bParam10)
				{
				}
				uParam1->f_4 = 1;
			}
			if (func_607(iParam0, joaat("DLG_FAILED"), "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_19))
				{
					if (bParam3)
					{
						func_603(0);
					}
					if (func_285(fParam4, 1, 0, 0))
					{
						func_350(iParam0, Global_35, uParam1->f_19, 0, -1082130432, uParam1->f_24, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
				}
				uParam1->f_2 = 0;
				uParam1->f_3 = 1;
			}
			if (func_607(iParam0, joaat("BLENDOUT"), "Blendout", iParam8, 0.8f, 0) || !func_439(iParam0, joaat("SCRIPT_TASK_ROB_PED")))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_476()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	float fVar9;
	int iVar10;
	char[] cVar11[8];
	int iVar19;
	Vector3 vVar20;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!func_61(iLocal_15[iVar0], 0, 0))
		{
		}
		else
		{
			func_231(&iLocal_15, iVar0, 2);
			func_194(&(iLocal_15.f_22[iVar0]));
			switch (iVar0)
			{
				case 0:
					fVar9 = 0.2f;
					break;
				case 1:
					fVar9 = 0.75f;
					break;
			}
			vVar5 = { func_617(&sLocal_274, iVar0) /*4*/ };
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (func_61(iLocal_15.f_40[iVar0], 0, 0))
			{
				vVar20 = { ENTITY::GET_ENTITY_COORDS(iLocal_15.f_40[iVar0], true, false) /*3*/ };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar20, 2.0f, -1, 8.0f, 1, 40000.0f);
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_15.f_40[iVar0], -1, -1, 2.0f, 1, 0, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar5, 2.001f, -1, 0.25f, 1, 40000.0f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 2.0f, -1, 6.0f, 1, 40000.0f);
			}
			func_203(iLocal_15[iVar0], &iVar1, fVar9, 0, 1, 1);
		}
		iVar0++;
	}
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		if (!func_61(iLocal_15[iVar0], 0, 0))
		{
		}
		else
		{
			func_231(&iLocal_15, iVar0, 2);
			func_194(&(iLocal_15.f_22[iVar0]));
			switch (iVar0)
			{
				case 0:
					fVar9 = 0.4f;
					break;
				case 1:
					fVar9 = 0.9f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (func_61(iLocal_15.f_40[iVar0], 0, 0))
			{
				vVar20 = { ENTITY::GET_ENTITY_COORDS(iLocal_15.f_40[iVar0], true, false) /*3*/ };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar20, 2.0f, -1, 8.0f, 1, 40000.0f);
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_15.f_40[iVar0], -1, -1, 2.0f, 1, 0, 0);
			}
			else
			{
				TASK::TASK_FLEE_PED_VIA(0, Global_35, 4, vVar2, 29568, -1082130432, -1, 0);
			}
			func_203(iLocal_15[iVar0], &iVar1, fVar9, 0, 1, 1);
		}
		iVar0++;
	}
	func_618(&iLocal_15, &sLocal_274, &iVar10, &cVar11, &iVar19);
	if (func_61(iLocal_15[iVar10], 0, 0))
	{
		func_284(&sLocal_274, iLocal_15[iVar10], Global_35, &cVar11, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), iVar19);
	}
}

bool func_477()
{
	int iVar0;
	Vector3 vVar1;
	int iVar5;

	iVar5 = 1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_305(iLocal_15[iVar0]))
		{
			if (!func_439(iLocal_15[iVar0], joaat("SCRIPT_TASK_FLEE")))
			{
				vVar1 = { func_619(&sLocal_274, iVar0) /*4*/ };
				TASK::TASK_FLEE_PED_VIA(iLocal_15[iVar0], Global_35, 4, vVar1, 29568, -1082130432, -1, 0);
				iVar5 = 0;
			}
		}
		else
		{
			iVar5 = 0;
		}
		iVar0++;
	}
	return iVar5;
}

bool func_478()
{
	int iVar0;
	Vector3 vVar1;
	bool bVar5;

	bVar5 = false;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		vVar1 = { func_619(&sLocal_274, iVar0) /*4*/ };
		if (func_150(iLocal_15[iVar0], vVar1, 1) < 6.0f)
		{
			bVar5 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar5)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			func_620(iLocal_15[iVar0], 36, 0, 1);
			iVar0++;
		}
	}
	return bVar5;
}

bool func_479(int iParam0)
{
	return (Global_1310750.f_16035 & iParam0) != 0;
}

bool func_480(int iParam0)
{
	return func_322(iParam0, Global_1310750.f_16072 | 64);
}

void func_481(int iParam0)
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

int func_482(int iParam0)
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

bool func_483(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> /*104*/ sVar0;
	int iVar23;

	sVar0.f_1 = 10;
	sVar0.f_12 = 10;
	sVar0.f_0 = 1;
	sVar0.f_1[0] = iParam1;
	sVar0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &sVar0, iParam3, iVar23, 2, false);
}

int func_484(int iParam0)
{
	return iParam0;
}

void func_485(int iParam0)
{
	if (!func_621(iParam0))
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

void func_486(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	}
}

void func_487(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> /*136*/ sVar1;
	struct<10> /*80*/ sVar22;

	sVar1.f_1 = -1;
	sVar1.f_3 = -1;
	sVar1.f_6 = -1;
	sVar1.f_12 = (1 << 30);
	sVar1.f_16 = 1;
	sVar22.f_2 = 570;
	sVar22.f_3 = 1065353216;
	sVar22.f_4 = -1082130432;
	sVar22.f_9 = 2;
	func_622(iParam0, uParam1, 1);
	func_623(uParam1, 0, 1, 1, 0);
	MISC::COPY_SCRIPT_STRUCT(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

bool func_488(int iParam0, bool bParam1)
{
	if (((((func_439(iParam0, joaat("SCRIPT_TASK_COMBAT")) || func_439(iParam0, joaat("SCRIPT_TASK_COMBAT_TIMED"))) || func_439(iParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA"))) || func_439(iParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS"))) || func_439(iParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED"))) || func_439(iParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST")))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_439(iParam0, joaat("SCRIPT_TASK_SHOOT_AT_COORD")) || func_439(iParam0, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY")))
		{
			return true;
		}
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_489(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> /*64*/ sVar3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1.0f)
	{
		if (func_229())
		{
			fParam4 = 50.0f;
		}
		else
		{
			fParam4 = 75.0f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_383(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL_ALLOWPLAYAFTERDEATH")) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_394(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_193(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_624(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				sVar3.f_5 = 1;
				sVar3.f_6 = 1;
				sVar3.f_0 = sParam2;
				sVar3.f_3 = iParam11;
				sVar3.f_4 = iParam1;
				sVar3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				sVar3.f_6 = iParam15;
				sVar3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(sVar3.f_7), 3);
					MISC::SET_BIT(&(sVar3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &sVar3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_626(func_625(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_490(int iParam0)
{
	return Global_40.f_9632.f_184[iParam0];
}

void func_491(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;
	int iVar4;

	sVar2 = { func_161(joaat("TOTAL_PLAYING_TIME")) /*2*/ };
	if (STATS::STAT_ID_GET_INT(&sVar2, &iVar0))
	{
		iVar1 = STATS::_STAT_CALCULATE_COOLDOWN(iVar0);
		Global_40.f_9632[iParam0 /*4*/].f_3 = iVar1;
		if (bParam1)
		{
			iVar4 = func_287(iParam0, 0);
			iVar4 = BUILTIN::FLOOR((0.666f * (float)iVar4));
			Global_40.f_9632[iParam0 /*4*/].f_3 += iVar4;
		}
		else
		{
			Global_40.f_9632[iParam0 /*4*/].f_3 += func_287(iParam0, 0);
		}
	}
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 35;
		case 1:
		case 2:
			return 36;
		case 9:
		case 10:
			return 37;
		case 3:
		case 4:
			return 38;
		case 17:
			return 39;
		case 6:
			return 42;
		case 8:
			return 40;
		case 35:
			return 5;
		case 36:
			return 1;
		case 37:
			return 9;
		case 38:
			return 3;
		case 39:
			return 17;
		case 42:
			return 6;
		case 40:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 36:
		case 37:
		case 40:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 2;
		case 37:
			return 10;
		case 38:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 9:
			return 10;
		case 3:
			return 4;
		case 2:
			return 1;
		case 10:
			return 9;
		case 4:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_496(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

int func_497(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_498(int iParam0, int iParam1)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 -= (Global_1900383[iParam0 /*45*/].f_24 & iParam1);
}

void func_499()
{
	if (func_547(0))
	{
		func_627(0);
	}
	if (func_547(1))
	{
		func_627(1);
	}
	if (func_547(5))
	{
		func_627(5);
	}
	if (func_547(6))
	{
		func_628(6);
	}
}

bool func_500(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_629(iParam0, iParam1, 0.0f))
		{
			return false;
		}
	}
	if (!func_630(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

bool func_501(int iParam0, bool bParam1)
{
	switch (func_631(iParam0))
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

int func_502(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_69(vParam0))
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
		if (func_632(vParam0))
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
	func_633(iVar0, bParam8);
	return iVar0;
}

struct<4> /*32*/ func_503(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_634(iParam0, iParam1) /*3*/ };
	sVar0.f_3 = func_635(iParam0, iParam1);
	return sVar0;
}

bool func_504(int iParam0, int iParam1)
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

bool func_505(int iParam0, int iParam1)
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

bool func_506(int iParam0, int iParam1)
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
	if (!func_504(iParam0, iVar0))
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

void func_507(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_508(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
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

int func_509(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		sVar0 = { func_636(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_637((398 + iVar28), 1);
			if (func_638(iParam0, &sVar0, iVar5, 0))
			{
				if (func_639(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_640(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_641(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_642(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_643(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_644(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
				return 1;
			}
		}
	}
}

void func_510(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0.0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361 /*PCF_IgnoreWeaponDegradation*/, true);
	}
}

bool func_511(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

void func_512(int iParam0, bool bParam1, int iParam2)
{
	func_645(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1224589.f_6)
		{
			return;
		}
		if (Global_1224589.f_7)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		iParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		iParam0->f_13 = func_646(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if ((*iParam0 & 16) != 0)
			{
				if (!(*iParam0 & (1 << 25)) != 0)
				{
					if (iParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_245(iParam0, (1 << 25));
						}
					}
					else if (!(*iParam0 & (1 << 13)) != 0)
					{
						if (func_647(1))
						{
							func_245(iParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_647(1) || (*iParam0 & (1 << 13)) != 0))
				{
					func_244(iParam0, (1 << 25));
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!(iParam0->f_1 & (1 << 10)) != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_648(iParam0))
			{
				iParam0->f_15 = func_185();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_185() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_649(iParam0);
}

bool func_513(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_650(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_651(iParam0, iVar2) <= func_652(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_514(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		iParam1->f_10 = iParam0;
	}
	if (func_653(iParam2, 1, 1, 1, 0))
	{
		func_245(iParam1, (1 << 11));
	}
	iParam1->f_16 = iParam2;
	func_419(iParam1, 1);
	func_654();
}

bool func_515(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_655(iParam0, !(*iParam1 & (1 << 28)) != 0, !(*iParam1 & (1 << 29)) != 0, !(*iParam1 & (1 << 30)) != 0, 0, 0))
		{
			if (iParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (iParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_656(iParam1);
			if (func_657(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_658(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_419(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_419(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_516(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85.0f;
	if (func_659(iParam1, !(*iParam2 & (1 << 28)) != 0, !(*iParam2 & (1 << 29)) != 0, !(*iParam2 & (1 << 30)) != 0, 0))
	{
		if (iParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (iParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_656(iParam2);
		if (func_657(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_658(iParam2)
				{
					func_419(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_517(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_650(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_658(iParam1)
		{
			fVar3 = func_656(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, fVar3, -1.0f, -1.0f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar1, -1.0f, fVar3, -1.0f, -1.0f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_518(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_185();
	iVar1 = (iVar0 - iParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_519(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_660(iParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5.0f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)))
		{
			fVar2 = 3.0f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1.0f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= fVar2)
		{
			if (func_527(iParam2, iParam1))
			{
				func_419(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_520(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < (float)func_661(iParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_527(iParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_419(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_521(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_662(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_419(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_419(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_663(iParam1, vVar0, vVar4))
					{
						func_419(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_419(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_663(iParam1, vVar0, vVar7))
					{
						func_419(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_522(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2[2];
	Vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	bVar12 = (*iParam1 & (1 << 12)) != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_650(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_664(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_665(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35.0f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
						vVar2[1 /*3*/] = { vVar9 /*3*/ };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_666(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_667(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_668(iParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_523(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) /*3*/ };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) /*3*/ };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_524(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_185();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_525(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true, true))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true, true))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), true, true))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_669(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_670(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9 /*PCF_KilledByStealth*/, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_526(int iParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_527(int iParam0, int iParam1)
{
	if (func_671(iParam0))
	{
		return true;
	}
	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9 /*PCF_KilledByStealth*/, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10 /*PCF_KilledByTakedown*/, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_528(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_394(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_529()
{
}

bool func_530(int iParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) /*3*/ };
		if (func_672(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_185();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_150(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_185();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

bool func_531()
{
	if (Global_1935630.f_42 == 0)
	{
		return false;
	}
	if (Global_1935630.f_42 == Global_1935630.f_40)
	{
		return false;
	}
	if (Global_1935630.f_43 <= 0)
	{
		return false;
	}
	if ((func_185() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_532(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_652(iParam0);
	if (iParam0->f_12 > func_235(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_673(iParam1);
	iVar1 = func_674(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_533(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4.0f)
	{
		return 0;
	}
	bVar0 = (*iParam2 & 256) != false;
	bVar1 = (*iParam2 & (1 << 19)) != false;
	bVar2 = (*iParam2 & 128) != false;
	return func_675(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_534(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if ((*iParam1 & (1 << 26)) != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if ((*iParam1 & (1 << 25)) != 0)
	{
		if (func_676(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_35, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar4, -1.0f, -1.0f, -1.0f, -1.0f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_677(iParam1, iParam0))
					{
						if (func_150(iVar4, Global_36, 1) < 7.0f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_535(int iParam0, int iParam1)
{
	if (!func_678(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90.0f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_536(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_185();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_537(int iParam0, int iParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_538(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_185();
	}
	else if (func_185() - iParam1->f_4) > func_679(iParam1)
	{
		return func_680(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_539(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630.f_40 == iVar1)
	{
		return true;
	}
	return false;
}

bool func_540(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_557(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_541(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_547(iParam0))
	{
		return;
	}
	iVar0 = func_546(iParam0);
	func_681(iParam0);
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_IS_PED_MODEL_SUPPRESSED(iVar1))
	{
		if (!func_682(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_683(iParam0, 0);
	func_376(iParam0);
}

void func_542(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;

	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	strcpy_s(&(Global_40.f_1095.f_1[iParam0 /*436*/]), 64, "");
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_684(&sVar0);
	func_685(iParam0, sVar0);
	func_686(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_687(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_688(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_689(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_690(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_691(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_692(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_693(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_694(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0.0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_22 = 0.0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_31 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_34 = 0.0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

void func_543(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_544(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_545(Vector3 vParam0)
{
	return func_695(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_546(int iParam0)
{
	iParam0 = func_497(iParam0);
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

bool func_547(int iParam0)
{
	iParam0 = func_497(iParam0);
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

bool func_548(int iParam0)
{
	int iVar0;

	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_547(iParam0))
	{
		return false;
	}
	iVar0 = func_546(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_549(int iParam0)
{
	int iVar0;

	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_547(iParam0))
	{
		return false;
	}
	iVar0 = func_546(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return true;
	}
	return false;
}

void func_550(int iParam0)
{
	int iVar0;

	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_547(iParam0))
	{
		return;
	}
	iVar0 = func_546(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_551(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_628(iParam0);
	func_628(iParam0);
	func_696(iParam0, iParam1);
	func_697(iParam0, iParam1);
	func_698(iParam0, iParam1);
	iVar1 = func_546(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_699(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			bVar2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar0) == iVar1)
			{
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, 0);
			}
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(iVar0) == iVar1)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	iVar3 = func_546(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_699(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			bVar4 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar0) == iVar3)
			{
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, 0);
			}
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(iVar0) == iVar3)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	func_499();
}

bool func_552()
{
	int iVar0;

	iVar0 = func_700();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_553()
{
	int iVar0;

	iVar0 = func_700();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_701(0);
}

void func_554(Vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 /*3*/ };
}

int func_555(int iParam0)
{
	iParam0 = func_497(iParam0);
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

int func_556(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

int func_557(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

void func_558(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_702(&uVar0, &uVar1, &uVar2);
	func_703(iParam0, uVar0);
	func_704(iParam0, uVar1);
	func_705(iParam0, uVar2);
	func_706(iParam0, 1);
	func_707(iParam0, 1);
}

void func_559(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_708(iParam0, 1);
}

void func_560(int iParam0, Vector3 vParam1, var uParam4)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_19 = { vParam1 /*3*/ };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
}

bool func_561(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_709(iParam0, 1);
}

struct<2> /*16*/ func_562(int iParam0)
{
	struct<2> /*16*/ sVar0;
	var uVar2;
	var uVar3;

	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return sVar0;
	}
	if (iParam0 >= 7)
	{
		return sVar0;
	}
	if (!func_710(iParam0, &uVar2))
	{
	}
	if (!func_711(iParam0, &uVar3))
	{
	}
	sVar0.f_0 = uVar2;
	sVar0.f_1 = uVar3;
	return sVar0;
}

struct<6> /*48*/ func_563()
{
	struct<6> /*48*/ sVar0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_712(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		sVar0.f_4 = uVar6;
	}
	if (func_712(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		sVar0.f_0 = uVar7;
	}
	if (func_712(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		sVar0.f_2 = uVar8;
	}
	if (func_712(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		sVar0.f_5 = uVar9;
	}
	if (func_712(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		sVar0.f_3 = uVar10;
	}
	if (func_712(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		sVar0.f_1 = uVar11;
	}
	return sVar0;
}

void func_564(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return;
	}
	func_713(iParam0);
	func_714(iParam0, uParam1);
	func_715(iParam0);
	func_716(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_717(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

void func_565(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_566(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_567()
{
	int iVar0;

	if (func_718())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_568(bool bParam0)
{
	if (func_719())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(5) == 2)
	{
		return false;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_567())
		{
			return false;
		}
	}
	if (Global_16)
	{
		return false;
	}
	if (!func_720())
	{
		return false;
	}
	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
	{
		return false;
	}
	if (func_721())
	{
		return false;
	}
	return true;
}

void func_569(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_570(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_571(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_722(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_723(iParam0))
	{
		return false;
	}
	if (func_421(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_566(iParam0, 1)) || func_724((1 << 15)))
	{
		if (!func_566(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_720())
	{
		return false;
	}
	return true;
}

void func_572(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_573(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

bool func_574(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

bool func_575(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_69(vParam0))
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

bool func_576()
{
	return Global_1310750.f_16077 != 0;
}

void func_577(int iParam0)
{
	Global_1393447.f_1 = iParam0;
}

int func_578(var uParam0, float fParam1, int iParam2)
{
	int iVar0[3];
	int iVar4;
	int iVar5;
	bool bVar6;

	iVar4 = 0;
	while (iVar4 < uParam0->f_217)
	{
		iVar0[iVar5] = uParam0->f_49[iVar4];
		iVar5++;
		iVar4++;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0[iVar5] = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		iVar5++;
	}
	return func_725(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584, bVar6, iParam2);
}

bool func_579(var uParam0, float fParam1, int iParam2)
{
	var uVar0[5];
	var uVar6[9];
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	Vector3 vVar21;
	Vector3 vVar24;
	int iVar27;

	iVar16 = 0;
	while (iVar16 < uParam0->f_216)
	{
		uVar6[iVar17] = uParam0->f_40[iVar16];
		iVar17++;
		iVar16++;
	}
	uVar6[iVar17] = uParam0->f_56;
	iVar17++;
	if (VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		iVar18 = func_726(&uVar0, &uVar6, 5, iParam2);
	}
	else
	{
		iVar18 = func_727(&uVar0, &uVar6, 5, uParam0->f_209, fParam1);
	}
	iVar16 = 0;
	while (iVar16 < iVar18)
	{
		iVar19 = 0;
		iVar27 = PED::_GET_RIDER_OF_MOUNT(uVar0[iVar16], false);
		if (iVar27 != 0 && iVar27 != Global_35)
		{
			vVar21 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar16], true, false) /*3*/ };
			if (!func_69(vVar21))
			{
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar21, &vVar24, 1, 3.0f, 0.0f))
				{
					if (func_388(vVar21, vVar24, 5.0f, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(iVar27, uParam0->f_209, 40.0f))
					{
						iVar19 = 1;
						iVar20 = 1;
					}
				}
			}
		}
		iVar16++;
	}
	return iVar20;
}

bool func_580(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;

	vVar2 = { func_729(func_728()) /*3*/ };
	fVar5 = 120.0f;
	fVar5 *= fVar5;
	if (func_392(Global_36, vVar2) < 40000.0f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_730(iVar0))
		{
			fVar6 = func_731(iVar0);
			if (fVar6 <= 10000.0f && fVar6 > 0.0f)
			{
				iVar1 = func_732(iVar0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					return false;
				}
				if (func_392(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), vVar2) > fVar5)
				{
					fVar7 = func_224(iVar1, Global_36, 1);
					if (fVar7 <= 40000.0f && fVar7 > 0.0f)
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_581(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, var uParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

void func_582(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_583(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_584(int iParam0)
{
	if ((*iParam0 & 1) != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

int func_585(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_584(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = (iParam8 & 32) != false;
		bVar4 = (iParam8 & (1 << 19)) != false;
		bVar5 = (iParam8 & (1 << 24)) != false;
		bVar6 = (iParam8 & (1 << 24)) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_733(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!(iParam8 & (1 << 21)) != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184 /*PRF_DisableAutoGreets*/, true);
		}
		if ((iParam8 & (1 << 23)) != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281 /*PRF_0xC5C24250*/, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_193(&(iParam1->f_13));
		}
		if (func_734(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_735(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_585(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_486(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!(iParam8 & (1 << 25)) != 0)
				{
					if ((iParam8 & 18) != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317 /*PCF_0x8E385F10*/, true))
						{
							func_736(*uParam0, 1, 1);
						}
					}
					else if (func_737(iParam1, 22))
					{
						func_736(*uParam0, 0, 1);
					}
				}
				if (func_738(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_739(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_740(iParam8);
					if (func_741(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_742(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_743(iParam1, uParam3, fVar8);
					if (func_744(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_623(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_745(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_738(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_746(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_741(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_739(uParam0, func_738(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_740(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_623(uParam3, 0, 0, 1, 1);
					}
					func_747(iParam1, 1);
				}
				func_743(iParam1, uParam3, fVar8);
				if (func_745(uParam0, iParam1, fParam4, bVar6))
				{
					if ((iParam8 & (1 << 9)) != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!(iParam8 & (1 << 10)) != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_487(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_586(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_748(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_350(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
}

bool func_587(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_334() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

bool func_588(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_589(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_588(iParam0, 13))
	{
		func_590(iParam0, 0);
	}
	else
	{
		func_591(iParam0, 0);
	}
	if (func_338(iParam0->f_6))
	{
		if (bParam2)
		{
			func_339(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_590(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_591(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_592(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_593(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_484(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_594(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_484(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_595(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_484(iParam0);
	if (bParam1)
	{
		func_749(iParam0, 4);
		func_750(iVar0, 1);
		func_751(iVar0, 1);
	}
	else
	{
		func_752(iParam0, 4);
		func_751(iVar0, 0);
	}
}

void func_596(int* iParam0, char* sParam1)
{
	if (func_338(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_594(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_591(iParam0, 1);
}

bool func_597(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_338(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_753(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_598(int iParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { func_455(iParam0, iParam1) /*4*/ };
	return vVar0;
}

float func_599(var uParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = func_754(uParam0, iParam1, iParam2);
	fVar0 = BUILTIN::SQRT(fVar0);
	return fVar0;
}

bool func_600()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		if (func_755(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_601()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_447(&(sLocal_274.f_115[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_602(var uParam0, var uParam1, float fParam2, var uParam3, float fParam4)
{
	if (func_756(uParam0))
	{
		fParam4 += 5.0f;
	}
	if (!func_285(0.0f, 1, Global_35, 1))
	{
		return 0;
	}
	if (func_47(&uParam1, fParam4))
	{
		return 1;
	}
	return 0;
}

void func_603(bool bParam0)
{
	func_196(&uLocal_0);
	func_757(1, bParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	func_758();
}

void func_604(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_60(uParam0))
	{
		func_369(uParam0, fParam1);
	}
}

int func_605(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_606(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	if (func_334() != -1)
	{
		uVar0 = Global_36638.f_1444[*uParam0];
		MISC::SET_BIT(&uVar0, *uParam1);
		Global_36638.f_1444[*uParam0] = uVar0;
		return;
	}
	uVar1 = Global_40.f_7832[*uParam0];
	MISC::SET_BIT(&uVar1, *uParam1);
	Global_40.f_7832[*uParam0] = uVar1;
}

bool func_607(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_608(var uParam0, char* sParam1, Vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_338(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_759(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, (1 << 30), 0, iParam18, 0, 0);
			func_760(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_761(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, (1 << 30), 0, iParam18, 0);
		}
		else
		{
			if (func_69(vParam2))
			{
				return false;
			}
			*uParam0 = func_762(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, (1 << 30), 0, iParam18, 0);
		}
		if (fParam8 != 0.0f)
		{
			func_593(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_614(1))
			{
				func_595(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_763(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_753(*uParam0, 0))
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				func_595(*uParam0, 0, 1);
			}
		}
		else if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			func_595(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0.0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_614(1))
		{
			func_595(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_338(*uParam0))
			{
				func_339(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_764(*uParam0, 1)) || (bParam17 && func_765(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0.0f)
			{
				func_615(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0.0f)
			{
				func_766(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
			}
		}
		func_339(uParam0, 1, 1);
		return true;
	}
	return false;
}

bool func_609()
{
	if (func_767(4))
	{
		return Global_1935630.f_27;
	}
	return func_768();
}

bool func_610(var uParam0)
{
	if (uParam0->f_4)
	{
		return false;
	}
	if (uParam0->f_9)
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_A_GUN(Global_1935630.f_44))
	{
		return false;
	}
	if (func_47(&(uParam0->f_32), 1.0f))
	{
		if (!func_439(Global_35, joaat("SCRIPT_TASK_SWAP_WEAPON")))
		{
			return true;
		}
	}
	return false;
}

bool func_611(var uParam0, bool bParam1)
{
	if (uParam0->f_10)
	{
		return false;
	}
	if ((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || TASK::IS_PED_SPRINTING(Global_35))
	{
		if (bParam1 || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_25, false) > 2.0f)
		{
			return true;
		}
	}
	return false;
}

int func_612(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == joaat("REMOVE_REASON_USED");
	bVar1 = iParam3 == joaat("REMOVE_REASON_SOLD");
	bVar2 = iParam3 == joaat("REMOVE_REASON_GIVEN");
	iVar3 = func_770(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 -= iParam1;
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_771(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_772(iParam0, 1, bParam4))
	{
		return 0;
	}
	sVar5 = { func_773(iParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar5))
	{
		if ((func_774(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar5, iParam1);
		}
		else if ((func_774(iParam0, 0, 0) - iParam1) < 0)
		{
			func_612(iParam0, func_774(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_775(iParam0) == joaat("WEAPON"))
	{
		if (!func_776(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_777(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_642(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_771(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_778(iParam0, iParam1);
	return 1;
}

void func_613(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_482(iParam0);
		func_483(iParam0, iParam1, iParam2, iVar0);
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

int func_614(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_615(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_779(iParam0);
	if (bParam3)
	{
		func_780(iParam0, sParam1, iParam2);
	}
}

void func_616(int iParam0)
{
	if (iParam0 < 200)
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY("LOOT_MONEY", Global_35, "LOOT_BODY_SOUNDSET", false, 0, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY("LOOT_MONEY_BILLS", Global_35, "LOOT_BODY_SOUNDSET", false, 0, 0);
	}
}

struct<4> /*32*/ func_617(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (*iParam0)
	{
		case 0:
			if (func_135(iParam0, 1))
			{
				return func_407(0, 13);
			}
			else
			{
				return func_407(1, 15);
			}
			break;
		case 1:
			if (func_135(iParam0, 1))
			{
				return func_407(2, 11);
			}
			else
			{
				return func_407(3, 13);
			}
			break;
	}
	return sVar0;
}

void func_618(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_454(uParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (uParam0->f_181)
	{
		case 0:
			*iParam2 = 0;
			strcpy_s(sParam3, 64, "CALLOUT_FOLLOW_ROB_FLEE_MALE");
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 0;
			strcpy_s(sParam3, 64, "CALLOUT_LETS_GET_OUTTA_HERE_MALE");
			*iParam4 = 2;
			break;
		default:
			*iParam2 = 0;
			strcpy_s(sParam3, 64, "CALLOUT_LETS_GET_OUTTA_HERE_MALE");
			*iParam4 = 1;
			break;
	}
}

struct<4> /*32*/ func_619(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (*iParam0)
	{
		case 0:
			if (func_135(iParam0, 1))
			{
				return func_407(0, 12);
			}
			else
			{
				return func_407(1, 14);
			}
			break;
		case 1:
			if (func_135(iParam0, 1))
			{
				return func_407(2, 10);
			}
			else
			{
				return func_407(3, 12);
			}
			break;
	}
	return sVar0;
}

int func_620(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return 0;
	}
	if (!func_781(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, Global_1396084))
		{
			return 1;
		}
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1396084);
		func_782(iParam0, 0);
		if (bParam3)
		{
			func_783(iParam0, 5);
		}
		else
		{
			func_783(iParam0, 6);
		}
		func_784(iParam0, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam2);
			if (!func_785(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_621(int iParam0)
{
	return func_786(iParam0, 2);
}

void func_622(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_339(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_787(iParam0, 0);
		}
	}
}

void func_623(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_338((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_339(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_624(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25.0f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_625(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = iParam3;
	sVar0.f_5 = bParam4;
	sVar0.f_6 = iParam7;
	return func_788(iParam0, &sVar0);
}

int func_626(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_627(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	Vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_546(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return;
	}
	if (func_709(iParam0, 64))
	{
		func_628(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_789(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				func_790(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_628(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = joaat("BLIP_STYLE_TEMPORARY_HORSE");
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_791(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_792(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_709(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_793(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
	fVar15 = func_794(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_795(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = joaat("BLIP_MODIFIER_OBJECTIVE");
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1.0f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1.0f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = joaat("BLIP_MODIFIER_HORSE_STOLEN");
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_796(Global_1900383[iParam0 /*45*/].f_26);
		func_797(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == joaat("BLIP_MODIFIER_OBJECTIVE"))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	}
	if (func_798(iVar0) && !bVar9)
	{
		if (iVar5 == joaat("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED");
		}
		else if (iVar5 == joaat("BLIP_STYLE_TEMPORARY_HORSE"))
		{
			iVar20 = joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED");
		}
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	}
	iVar21 = func_791(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_628(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_25 = 0;
}

bool func_629(int iParam0, int iParam1, float fParam2)
{
	return func_799(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_630(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_631(int iParam0)
{
	if (!func_223(iParam0))
	{
		return -1;
	}
	return func_800(iParam0);
}

bool func_632(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_633(int iParam0, bool bParam1)
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

Vector3 func_634(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return { -530.6622f, -297.5206f, 58.0524f };
				case 1:
					return { -532.6747f, -311.9528f, 57.8306f };
				case 2:
					return { -527.9f, -290.9423f, 59.2349f };
				case 3:
					return { -526.2383f, -309.6333f, 58.7295f };
				case 4:
					return { -544.0656f, -332.7348f, 62.1749f };
				case 5:
					return { -535.2577f, -327.0268f, 62.1874f };
				case 6:
					return { -553.5075f, -322.5239f, 56.7326f };
				case 7:
					return { -547.8364f, -317.1053f, 56.0315f };
				case 8:
					return { -541.2362f, -292.335f, 52.8356f };
				case 9:
					return { -543.8275f, -293.8264f, 52.4396f };
				case 10:
					return { -548.0543f, -281.4533f, 52.2551f };
				case 11:
					return { -546.2682f, -278.0835f, 52.2258f };
				case 12:
					return { -480.9486f, -182.3736f, 43.4022f };
				case 13:
					return { -539.5151f, -302.887f, 55.3601f };
				case 14:
					return { -508.8643f, -317.6341f, 66.0357f };
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return { -497.282f, -314.521f, 69.7498f };
				case 1:
					return { -495.2901f, -324.2032f, 70.7841f };
				case 2:
					return { -494.6499f, -319.7533f, 71.4527f };
				case 3:
					return { -496.7591f, -328.9705f, 69.9682f };
				case 4:
					return { -469.961f, -343.1347f, 78.6468f };
				case 5:
					return { -482.4592f, -334.437f, 75.0688f };
				case 6:
					return { -559.6129f, -311.5081f, 53.7085f };
				case 7:
					return { -477.37f, -351.0639f, 79.0589f };
				case 8:
					return { -487.2604f, -341.4452f, 75.701f };
				case 9:
					return { -561.2073f, -324.3603f, 56.4443f };
				case 10:
					return { -483.1715f, -299.1094f, 70.5579f };
				case 11:
					return { -480.9109f, -298.1267f, 70.5355f };
				case 12:
					return { -457.5569f, -371.0655f, 84.2488f };
				case 13:
					return { -456.8083f, -373.457f, 84.668f };
				case 14:
					return { -338.9661f, -301.531f, 89.8958f };
				case 15:
					return { -483.6948f, -321.2603f, 73.6897f };
				case 16:
					return { -513.6682f, -316.6307f, 64.1251f };
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return { -530.6622f, -297.5206f, 58.0524f };
				case 1:
					return { -532.6747f, -311.9528f, 57.8306f };
				case 2:
					return { -527.9f, -290.9423f, 59.2349f };
				case 3:
					return { -526.2383f, -309.6333f, 58.7295f };
				case 4:
					return { -544.0656f, -332.7348f, 62.1749f };
				case 5:
					return { -535.2577f, -327.0268f, 62.1874f };
				case 6:
					return { -553.5075f, -322.5239f, 56.7326f };
				case 7:
					return { -547.8364f, -317.1053f, 56.0315f };
				case 8:
					return { -541.2362f, -292.335f, 52.8356f };
				case 9:
					return { -543.8275f, -293.8264f, 52.4396f };
				case 10:
					return { -516.831f, -252.3551f, 50.7886f };
				case 11:
					return { -539.5151f, -302.887f, 55.3601f };
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return { -497.282f, -314.521f, 69.7498f };
				case 1:
					return { -500.2108f, -322.7002f, 69.4216f };
				case 2:
					return { -492.8802f, -313.5155f, 70.952f };
				case 3:
					return { -496.7591f, -328.9705f, 69.9682f };
				case 4:
					return { -469.961f, -343.1347f, 78.6468f };
				case 5:
					return { -482.4592f, -334.437f, 75.0688f };
				case 6:
					return { -559.6129f, -311.5081f, 53.7085f };
				case 7:
					return { -477.37f, -351.0639f, 79.0589f };
				case 8:
					return { -487.2604f, -341.4452f, 75.701f };
				case 9:
					return { -561.2073f, -324.3603f, 56.4443f };
				case 10:
					return { -483.1715f, -299.1094f, 70.5579f };
				case 11:
					return { -480.9109f, -298.1267f, 70.5355f };
				case 12:
					return { -454.3138f, -326.6817f, 78.0955f };
				case 13:
					return { -483.6948f, -321.2603f, 73.6897f };
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_635(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 181.0514f;
				case 1:
					return 245.0514f;
				case 2:
					return 191.0514f;
				case 3:
					return 203.0514f;
				case 4:
					return 351.9035f;
				case 5:
					return -58.0965f;
				case 6:
					return 333.9035f;
				case 7:
					return 241.9035f;
				case 8:
					return 10.3187f;
				case 9:
					return 8.3187f;
				case 10:
					return 304.3187f;
				case 11:
					return 316.3187f;
				case 12:
					return 310.8064f;
				case 13:
					return 43.7161f;
				case 14:
					return -69.695f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 163.949f;
				case 1:
					return 91.949f;
				case 2:
					return 129.949f;
				case 3:
					return 83.949f;
				case 4:
					return 62.8011f;
				case 5:
					return 64.8011f;
				case 6:
					return -17.1989f;
				case 7:
					return 52.8012f;
				case 8:
					return 50.8012f;
				case 9:
					return -13.1988f;
				case 10:
					return -221.6813f;
				case 11:
					return -159.6813f;
				case 12:
					return -53.6813f;
				case 13:
					return -67.6813f;
				case 14:
					return 300.8064f;
				case 15:
					return -110.2839f;
				case 16:
					return 56.305f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 181.0514f;
				case 1:
					return 245.0514f;
				case 2:
					return 191.0514f;
				case 3:
					return 203.0514f;
				case 4:
					return 351.9035f;
				case 5:
					return -58.0965f;
				case 6:
					return 333.9035f;
				case 7:
					return 241.9035f;
				case 8:
					return 10.3187f;
				case 9:
					return 8.3187f;
				case 10:
					return 318.8064f;
				case 11:
					return 43.7161f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 163.949f;
				case 1:
					return 91.949f;
				case 2:
					return 129.949f;
				case 3:
					return 83.949f;
				case 4:
					return 62.8011f;
				case 5:
					return 64.8011f;
				case 6:
					return -17.1989f;
				case 7:
					return 52.8012f;
				case 8:
					return 50.8012f;
				case 9:
					return -13.1988f;
				case 10:
					return -221.6813f;
				case 11:
					return -159.6813f;
				case 12:
					return 274.8064f;
				case 13:
					return -110.2839f;
			}
			break;
	}
	return 0.0f;
}

struct<5> /*40*/ func_636(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_801(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_775(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_640(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_802(bParam1) /*4*/ };
			if (bParam2 && func_803(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_638(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_638(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_639(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_804(bParam1) /*4*/ };
			switch (func_805(iParam0))
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
			if (func_806(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_640(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_806(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_640(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_UPGRADE")))
			{
				sVar0.f_4 = joaat("SLOTID_UPGRADE");
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_SATCHEL")))
			{
				sVar0.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_CURRENCY")))
			{
				sVar27.f_9 = joaat("SLOTID_NONE");
				if (!func_807(sVar0, &sVar27, bParam1, 0))
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
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("CHARACTER"));
				if (sVar0.f_4 == 0)
				{
				}
			}
			break;
	}
	return sVar0;
}

int func_637(int iParam0, int iParam1)
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
			return joaat("SLOTID_CARD_PROGRESSION");
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
			return joaat("SLOTID_CHALLENGE_PROGRESSION");
		case 41:
			return joaat("SLOTID_CHARACTER_0");
		case 42:
			return joaat("SLOTID_CHARACTER_1");
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
			return joaat("SLOTID_WARDROBE_FACE_PAINT");
		case 350:
			return -1994943603;
		case 351:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_1");
		case 352:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_2");
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
			return joaat("SLOTID_WARDROBE_HEADWEAR");
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
		case 396:
			return 155413195;
		case 397:
			return joaat("SLOTID_WATCH");
		case 398:
			return joaat("SLOTID_WEAPON_0");
		case 399:
			return joaat("SLOTID_WEAPON_1");
		case 400:
			return joaat("SLOTID_WEAPON_2");
		case 401:
			return joaat("SLOTID_WEAPON_3");
		case 402:
			return 1570861011;
		case 403:
			return joaat("SLOTID_WEAPON_BOW_FRAME_TINT");
		case 404:
			return joaat("SLOTID_WEAPON_BOW_GRIPSTOCK_TINT");
		case 405:
			return joaat("SLOTID_WEAPON_BOW_IMPROVED_GRIP");
		case 406:
			return joaat("SLOTID_WEAPON_BOW_TRIGGER_TINT");
		case 407:
			return joaat("SLOTID_WEAPON_FISHINGROD_GRIP");
		case 408:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING");
		case 409:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING_MATERIAL");
		case 410:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_MATERIAL");
		case 411:
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_RIFLING");
		case 412:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING");
		case 413:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING_MATERIAL");
		case 414:
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_MATERIAL");
		case 415:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING");
		case 416:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_MATERIAL");
		case 417:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_ROLE");
		case 418:
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_MATERIAL");
		case 419:
			return joaat("SLOTID_WEAPON_LONGARM_GRIP_MATERIAL");
		case 420:
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_ENGRAVING");
		case 421:
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_TINT");
		case 422:
			return joaat("SLOTID_WEAPON_LONGARM_HAMMER_MATERIAL");
		case 423:
			return joaat("SLOTID_WEAPON_LONGARM_SIGHT_MATERIAL");
		case 424:
			return joaat("SLOTID_WEAPON_LONGARM_STRAP_TINT");
		case 425:
			return joaat("SLOTID_WEAPON_LONGARM_TRIGGER_MATERIAL");
		case 426:
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_MATERIAL");
		case 427:
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_TINT");
		case 428:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING");
		case 429:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING_MATERIAL");
		case 430:
			return joaat("SLOTID_WEAPON_MELEE_BLADE_MATERIAL");
		case 431:
			return joaat("SLOTID_WEAPON_MELEE_GRIP_TINT");
		case 432:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_BARREL");
		case 433:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_CLIP");
		case 434:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_GRIP");
		case 435:
			return joaat("SLOTID_WEAPON_PISTOL_M1899_SIGHT");
		case 436:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_BARREL");
		case 437:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_CLIP");
		case 438:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_GRIP");
		case 439:
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_SIGHT");
		case 440:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_BARREL");
		case 441:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_CLIP");
		case 442:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_GRIP");
		case 443:
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_SIGHT");
		case 444:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_BARREL");
		case 445:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_CLIP");
		case 446:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
		case 447:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
		case 448:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
		case 449:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
		case 450:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_LEVER");
		case 451:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_SIGHT");
		case 452:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_TUBE");
		case 453:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_WRAP1");
		case 454:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_GRIP");
		case 455:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_SIGHT");
		case 456:
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_WRAP");
		case 457:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_GRIP");
		case 458:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_LEVER");
		case 459:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
		case 460:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
		case 461:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_CLIP");
		case 462:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_GRIP");
		case 463:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
		case 464:
			return 763162704;
		case 465:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
		case 466:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_LEVER");
		case 467:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
		case 468:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
		case 469:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
		case 470:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_CLIP");
		case 471:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
		case 472:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
		case 473:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
		case 474:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_CLIP");
		case 475:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_GRIP");
		case 476:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_SIGHT");
		case 477:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_REVOLVER");
		case 478:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_SHOTGUN");
		case 479:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_BARREL");
		case 480:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_GRIP");
		case 481:
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_SIGHT");
		case 482:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_AMMO_REVOLVER");
		case 483:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL");
		case 484:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL_CROSSOVER");
		case 485:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP");
		case 486:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP_CROSSOVER");
		case 487:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT");
		case 488:
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT_CROSSOVER");
		case 489:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_BARREL");
		case 490:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_CLIP");
		case 491:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
		case 492:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SCOPE");
		case 493:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SIGHT");
		case 494:
			return -62390436;
		case 495:
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_GRIP");
		case 496:
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_SIGHT");
		case 497:
			return joaat("SLOTID_WEAPON_RIFLE_CARCANO_SIGHT");
		case 498:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_BARREL");
		case 499:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_CLIP");
		case 500:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_GRIP");
		case 501:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_SIGHT");
		case 502:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_STOCK");
		case 503:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_WRAP1");
		case 504:
			return joaat("SLOTID_WEAPON_RIFLE_ROLLINGBLOCK_SIGHT");
		case 505:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_GRIP");
		case 506:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_SIGHT");
		case 507:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_WRAP1");
		case 508:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_CLIP");
		case 509:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_GRIP");
		case 510:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_WRAP1");
		case 511:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING");
		case 512:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING_MATERIAL");
		case 513:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_MATERIAL");
		case 514:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_RIFLING");
		case 515:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING");
		case 516:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING_MATERIAL");
		case 517:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_MATERIAL");
		case 518:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING");
		case 519:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_MATERIAL");
		case 520:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_ROLE");
		case 521:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_MATERIAL");
		case 522:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIP_MATERIAL");
		case 523:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_ENGRAVING");
		case 524:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_TINT");
		case 525:
			return joaat("SLOTID_WEAPON_SHORTARM_HAMMER_MATERIAL");
		case 526:
			return joaat("SLOTID_WEAPON_SHORTARM_SIGHT_MATERIAL");
		case 527:
			return joaat("SLOTID_WEAPON_SHORTARM_TRIGGER_MATERIAL");
		case 528:
			return joaat("SLOTID_WEAPON_SHOTGUN_BARREL_ENGRAVING");
		case 529:
			return joaat("SLOTID_WEAPON_SHOTGUN_CYLINDER_ENGRAVING");
		case 530:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_BARREL");
		case 531:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP");
		case 532:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP_EXOTIC");
		case 533:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP");
		case 534:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP_EXOTIC");
		case 535:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_SIGHT");
		case 536:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_WRAP1");
		case 537:
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_GRIP");
		case 538:
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_WRAP1");
		case 539:
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING");
		case 540:
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING_ROLE");
		case 541:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_CLIP");
		case 542:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_GRIP");
		case 543:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_WRAP1");
		case 544:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_BARREL");
		case 545:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_SIGHT");
		case 546:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_BARREL");
		case 547:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_GRIP");
		case 548:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_SIGHT");
		case 549:
			return -1150323212;
		case 550:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWED_SIGHT");
		case 551:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_GRIP");
		case 552:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_STOCK");
		case 553:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_WRAP1");
		case 554:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_BARREL");
		case 555:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_GRIP");
		case 556:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_SIGHT");
		case 557:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_WRAP1");
		case 558:
			return 1254273765;
		case 559:
			return -792172668;
		case 560:
			return 1905987493;
		case 561:
			return joaat("SLOTID_WEAPON_SNIPERRIFLE_ROLLINGBLOCK_GRIP");
		case 562:
			return -1693422950;
		case 563:
			return -205873076;
		case 564:
			return -2143114654;
		case 565:
			return -1420574021;
		case 566:
			return -1959250381;
		case 567:
			return -1088328663;
		case 568:
			return 513602003;
		case 569:
			return joaat("SLOTID_WEB_INBOX");
		case 570:
			return joaat("SLOTID_WEB_INBOX_AMMO");
		case 571:
			return joaat("SLOTID_WEB_INBOX_CONSUMABLES");
		case 572:
			return joaat("SLOTID_WEB_INBOX_DOCUMENTS");
		case 573:
			return joaat("SLOTID_WEB_INBOX_GIFTS");
		case 574:
			return 1084576580;
		case 575:
			return joaat("SLOTID_WEB_INBOX_HORSES");
		case 576:
			return joaat("SLOTID_WEB_INBOX_KIT");
		case 577:
			return joaat("SLOTID_WEB_INBOX_OFFERS");
		case 578:
			return joaat("SLOTID_WEB_INBOX_WEAPONS");
		case 579:
			return -386012962;
		case 580:
			return joaat("SLOTID_CARAVAN_UPGRADE");
		case 581:
			return joaat("SLOTID_CARRIED_HORSE_EQUIPMENT");
		case 582:
			return -352578118;
		case 583:
			return 1426626782;
		case 584:
			return -714081520;
		case 585:
			return 74547781;
		case 586:
			return 1271463052;
		case 587:
			return 1983140194;
		case 588:
			return 677262775;
		case 589:
			return joaat("SLOTID_TEMPORARY_HORSE");
		case 590:
			return -319249747;
		case 591:
			return -16955722;
		case 592:
			return joaat("SLOTID_WARDROBE_BEARD_CHIN");
		case 593:
			return joaat("SLOTID_WARDROBE_BEARD_CHOPS");
		case 594:
			return joaat("SLOTID_WARDROBE_BEARD_MUSTACHE");
		case 595:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_3");
		case 596:
			return joaat("SLOTID_WARDROBE_LOADOUT");
		case 597:
			return joaat("SLOTID_WARDROBE_MISC");
		case 598:
			return 1843035435;
		case 599:
			return -304127320;
		case 600:
			return 122470371;
		case 601:
			return 0;
		case 602:
			return joaat("SLOTID_NONE");
		case 603:
			return joaat("SLOTID_ANY");
		case 604:
			return -1150938404;
		case 605:
			return -1756997214;
		case 606:
			return -813824107;
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

bool func_638(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_808(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_639(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_809(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_640(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_769(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_810(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_641(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_811(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_807(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_642(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_810(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_642(bool bParam0)
{
	if (func_334() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_810(bParam0));
}

int func_643(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_812(iParam0))
	{
		return 0;
	}
	if (!func_642(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_644(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_417(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_645(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_22 & 4) != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_768();
	if (Global_1935630.f_27)
	{
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630.f_44;
			}
			Global_1935630.f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_813(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630.f_30)
			{
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
					{
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 3.0f;
					}
					else
					{
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 1.0f;
					}
					if (Global_1935630.f_25)
					{
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_646(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_647(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_814(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_648(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_334() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_815(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_815(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_674(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_649(int iParam0)
{
	if ((*iParam0 & 8) != 0 || (*iParam0 & 16) != 0)
	{
		func_816(iParam0);
	}
}

bool func_650(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_674(iParam2);
	}
	else
	{
		iVar1 = func_673(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_674(iParam0);
	}
	else
	{
		iVar0 = func_673(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_187(*iParam1, (1 << 23)))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_651(int iParam0, int iParam1)
{
	return func_394(iParam0, iParam1, 1, 1);
}

float func_652(int iParam0)
{
	return iParam0->f_26;
}

bool func_653(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_654()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_655(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_394(iVar0, iParam0, 1, 1) <= 4.0f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_817(iVar0, 0)))
		{
			if (func_818(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_656(int iParam0)
{
	return iParam0->f_17;
}

bool func_657(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_187(*iParam0, (1 << 22)))
	{
		fVar0 = fParam3;
	}
	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, fParam3, -1.0f, fVar0))
	{
		return true;
	}
	if ((*iParam0 & (1 << 15)) != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_658(int iParam0)
{
	return iParam0->f_18;
}

bool func_659(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_817(iVar0, 0)))
		{
			if (func_819(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_660(int iParam0)
{
	return iParam0->f_23;
}

int func_661(int iParam0)
{
	return iParam0->f_21;
}

int func_662(int iParam0)
{
	int iVar0;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if ((*iParam0 & (1 << 24)) != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_663(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_799(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5.0f)
	{
		return true;
	}
	return false;
}

int func_664(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9 /*PCF_KilledByStealth*/, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
		{
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
			{
				return 1;
			}
		}
	}
	if (func_820(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_665(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_666(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_821(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5.0f;
	if ((*iParam0 & (1 << 16)) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_667(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_821(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10.0f;
	if ((*iParam0 & (1 << 16)) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_668(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_821(iParam1))
	{
		return false;
	}
	if ((*iParam0 & (1 << 16)) != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_1935630.f_34[iParam3], -1.0f, -1.0f, -1.0f, -1.0f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_669(int iParam0, int iParam1)
{
	if (!TASK::_IS_PED_LEADING_HORSE(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_GET_LED_HORSE_FROM_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_670(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_822(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_671(int iParam0)
{
	return !(*iParam0 & 2) != 0;
}

bool func_672(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_150(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_673(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_674(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_675(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true, true))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630.f_40, true, true))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_669(Global_35, &iVar1))
			{
				if (fParam4 < 4.0f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0.0f)
	{
		fVar2 = func_394(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_394(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_676(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_814(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_677(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_677(iParam1, iVar1))
				{
					if (func_150(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_677(int iParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4 /*PCF_HasBounty*/, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_678(int iParam0)
{
	if (func_246())
	{
		return false;
	}
	return func_501(Global_1347702[58 /*49*/].f_15, 1);
}

int func_679(int iParam0)
{
	return iParam0->f_20;
}

int func_680(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0.0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90.0f))
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, -1.0f, -1.0f, -1.0f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

void func_681(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;
	int iVar6;
	int iVar7;

	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_546(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_823(iVar6);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = sVar2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_682(int iParam0)
{
	if (!func_824(iParam0))
	{
		return false;
	}
	if (!func_825())
	{
		return true;
	}
	return false;
}

void func_683(int iParam0, int iParam1)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/] = iParam1;
}

void func_684(var uParam0)
{
	*uParam0 = joaat("HORSE_EQUIPMENT_MANE_DEFAULT");
	uParam0->f_1 = joaat("HORSE_EQUIPMENT_TAIL_DEFAULT");
}

void func_685(int iParam0, struct<2> /*16*/ sParam1)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_826(iParam0, sParam1.f_0))
	{
	}
	if (!func_827(iParam0, sParam1.f_1))
	{
	}
}

void func_686(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_828(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_687(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_688(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		(uParam0[iVar0 /*5*/])->f_2 = 0;
		(uParam0[iVar0 /*5*/])->f_3 = 0;
		(uParam0[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_689(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0.0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0.0f;
		}
		iVar0++;
	}
}

void func_690(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_691(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_692(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1.0f;
}

void func_693(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_694(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_695(int iParam0)
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

void func_696(int iParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::COPY_SCRIPT_STRUCT(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::COPY_SCRIPT_STRUCT(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_697(int iParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_698(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;
	bool bVar58;
	int iVar59;

	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!func_829(iParam0, &sVar0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_829(iParam1, &sVar29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_830(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_831(sVar0, sVar0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_832(sVar0, sVar29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_699(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_833(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, false);
	PED::SET_PED_OWNS_ANIMAL(Global_35, iParam0, false);
	PED::_0xB8B6430EAD2D2437(iParam0, joaat("PLAYER_HORSE"));
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iParam0, 1);
	PED::_SET_PED_CAN_BE_LASSOED(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_SET_ANIMAL_IS_WILD(iParam0, false);
	if (func_370(iParam0))
	{
		iVar3 = func_371(iParam0);
		if (func_834(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324 /*PCF_0x8D1AEDEF*/, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211 /*PCF_GiveAmbientDefaultTaskIfMissionPed*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208 /*PCF_0x010FB89C*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209 /*PCF_0xC44343FA*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400 /*PCF_0x3EECBCF6*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136 /*PCF_CannotBeMounted*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312 /*PCF_DisableHorseGunshotFleeResponse*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113 /*PCF_DisableShockingEvents*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277 /*PCF_0x5FE313B3*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319 /*PCF_EnableAsVehicleTransitionDestination*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6 /*PCF_DontInfluenceWantedLevel*/, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

int func_700()
{
	return Global_1900383.f_393;
}

void func_701(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

int func_702(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_333())
	{
		if (func_835())
		{
			bVar0 = false;
			if (!func_501(Global_1835011[15 /*74*/].f_1, 1) && !func_789(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_836();
				*iParam1 = func_837();
				*uParam2 = func_838();
				return 1;
			}
			else
			{
				*uParam0 = func_839();
				*iParam1 = func_840();
				*uParam2 = func_841();
				return 1;
			}
		}
		else if (func_246())
		{
			if (!func_501(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_842();
				*iParam1 = func_843();
				*uParam2 = func_844();
				return 1;
			}
			else
			{
				*uParam0 = func_845();
				*iParam1 = func_846();
				*uParam2 = func_847();
				return 1;
			}
		}
	}
	else if (func_835())
	{
		*uParam0 = func_848();
		*iParam1 = func_849();
		*uParam2 = func_850();
		return 1;
	}
	else if (func_246())
	{
		*uParam0 = func_851();
		*iParam1 = func_852();
		*uParam2 = func_853();
		return 1;
	}
	return 0;
}

void func_703(int iParam0, var uParam1)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
}

void func_704(int iParam0, var uParam1)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
}

void func_705(int iParam0, var uParam1)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
}

void func_706(int iParam0, int iParam1)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
}

void func_707(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_555(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_702(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_854(iParam1);
	iVar5 = func_546(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_SET_MOUNT_BONDING_LEVEL(iVar5, iVar7);
}

void func_708(int iParam0, int iParam1)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 |= iParam1;
}

bool func_709(int iParam0, int iParam1)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_1900383[iParam0 /*45*/].f_24 & iParam1) != 0;
}

bool func_710(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_829(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_855(sVar0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!func_769(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_711(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_829(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_855(sVar0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!func_769(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_712(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_856(856287005, iParam0))
	{
		return false;
	}
	sVar0 = { func_857() /*4*/ };
	*uParam1 = func_855(sVar0, iParam0, 0);
	if (!func_769(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_713(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_MANES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_TAILS"), 0, false);
}

void func_714(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_858(iParam0, *uParam1);
	func_858(iParam0, uParam1->f_1);
}

void func_715(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_BLANKETS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("SADDLE_HORNS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("SADDLE_STIRRUPS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_BEDROLLS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_SADDLEBAGS"), 0, false);
}

void func_716(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_858(iParam0, *uParam1);
	func_858(iParam0, uParam1->f_1);
	func_858(iParam0, uParam1->f_2);
	func_858(iParam0, uParam1->f_3);
	func_858(iParam0, uParam1->f_4);
	func_858(iParam0, uParam1->f_5);
}

int func_717(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, true, true, true, true, false);
	}
	return 1;
}

bool func_718()
{
	return Global_1905944.f_5693 != -1;
}

bool func_719()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

bool func_720()
{
	return Global_1905944.f_5694;
}

bool func_721()
{
	var uVar0;

	uVar0 = Global_1905944.f_5695;
	Global_1905944.f_5695 = 0;
	return uVar0;
}

bool func_722(int iParam0, int iParam1)
{
	if (func_334() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_723(int iParam0)
{
	if (func_334() != -1)
	{
		if (func_566(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_566(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_724(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

int func_725(int iParam0, Vector3 vParam1, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)
{
	int iVar0[5];
	Vector3 vVar6;
	Vector3 vVar9;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	if (VOLUME::DOES_VOLUME_EXIST(iParam9))
	{
		iVar12 = func_859(&iVar0, iParam0, iParam9, iVar0);
	}
	else
	{
		iVar12 = func_860(&iVar0, iParam0, iVar0, vParam1, iParam4);
	}
	iVar13 = 0;
	while (iVar13 < iVar12)
	{
		iVar14 = 0;
		if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0[iVar13])))
		{
		}
		else if ((!bParam6 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0[iVar13], -1) != 0) && (!bParam5 || ENTITY::GET_ENTITY_SPEED(iVar0[iVar13]) >= 1.0f))
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar0[iVar13], true, false) /*3*/ };
			if (!func_69(vVar6))
			{
				vVar9 = { 0.0f, 0.0f, 0.0f /*3*/ };
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar6, &vVar9, 1, 3.0f, 0.0f))
				{
					if (func_388(vVar6, vVar9, iParam7, 0))
					{
						iVar14 = 1;
						iVar15 = 1;
					}
				}
			}
		}
		iVar13++;
	}
	return iVar15;
}

int func_726(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam3, iVar0, 1);
	if (iVar5 > iParam2)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (func_861(iVar2))
				{
					if (!func_379(iVar2, iParam1))
					{
						if (iVar3 < *uParam0 && iVar3 < iParam2)
						{
							(*uParam0)[iVar3] = iVar2;
							iVar3++;
						}
					}
				}
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

int func_727(var uParam0, int iParam1, int iParam2, Vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	iVar1 = func_726(uParam0, iParam1, iParam2, iVar0);
	func_473(iVar0);
	return iVar1;
}

int func_728()
{
	return Global_40.f_4283;
}

Vector3 func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { -1343.699f, 2429.397f, 307.0626f };
		case 1:
			return { -123.1805f, -28.8611f, 94.8478f };
		case 2:
			return { 667.9077f, -1252.78f, 42.9221f };
		case 3:
			return { 1880.807f, -1873.231f, 41.8094f };
		case 4:
			return { 1422.625f, -7332.473f, 80.5977f };
		case 5:
			return { 2254.96f, -758.12f, 41.75f };
		case 6:
			return { 2351.282f, 1362.077f, 104.9752f };
		case 7:
			return { -2593.21f, 453.9533f, 145.9973f };
		case 8:
			return func_862();
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_730(int iParam0)
{
	if (func_863(iParam0))
	{
		if (func_216(Global_1360165[iParam0 /*1157*/], 0))
		{
			return true;
		}
	}
	return false;
}

float func_731(int iParam0)
{
	if (!func_864(iParam0))
	{
		return 0.0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

int func_732(int iParam0)
{
	if (func_863(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

float func_733(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_734(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_865(iParam0, iParam1))
		{
			if (!func_187(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, true);
				func_623(uParam2, 0, 0, 1, 0);
				func_245(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_187(iParam1->f_10, 1))
		{
			func_866(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			func_244(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_735(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5.0f))
	{
		return false;
	}
	strcpy_s(&cVar0, 32, sParam5);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		bVar4 = func_187(iParam4, 32);
		func_622(iParam1, uParam2, 0);
		iVar5 = func_867(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			return true;
		}
		func_623(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_187(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_187(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_187(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_187(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_187(iParam4, (1 << 23)) || func_187(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_187(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_187(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_737(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_737(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_187(iParam4, (1 << 26)))
		{
			iVar6 |= (1 << 14);
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_868(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
			if (func_187(iParam4, (1 << 28)))
			{
				iVar8 = func_869(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_870(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_737(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331 /*PCF_0x9663C8F2*/, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493 /*PCF_0xA58B6703*/, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315 /*PCF_0xD38AEF95*/, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493 /*PCF_0xA58B6703*/, false);
			}
			if (func_187(iParam4, 2) || func_187(iParam4, 16))
			{
				func_736(*uParam0, 1, 1);
			}
			else
			{
				func_736(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_736(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
	}
}

bool func_737(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_738(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = (iParam1 & 32) != false;
	bVar2 = (iParam1 & 65792) != false;
	bVar3 = (iParam1 & 1179648) != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_871(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_739(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_872(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_187(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_740(int iParam0)
{
	if (func_187(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_187(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_187(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_741(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_614(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = (iParam10 & 128) != false;
	bVar7 = (iParam10 & 64) != false;
	bVar8 = (iParam10 & (1 << 9)) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_873(Global_35)) || func_874(Global_35)) || func_875(Global_35));
	fVar12 = -1.0f;
	if (func_60(&(iParam1->f_13)))
	{
		fVar12 = func_197(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_338((uParam4[iVar0 /*17*/])->f_6);
		func_876(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_877(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_878(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_623(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_879(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_622(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4.0f, -4.0f, -1, 67108880, 0.0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_880(iParam1, fParam6, iParam1->f_9))
					{
						func_193(&(iParam1->f_18));
						if (bVar6)
						{
							func_879(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_881(iParam1, fParam2);
	}
	return bVar5;
}

void func_742(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_743(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_882(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_881(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_744(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_883(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_884(iParam1, 0);
				func_622(iParam1, uParam2, func_737(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_745(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0.0f)
		{
			func_193(&(iParam1->f_18));
			return false;
		}
		else if (func_60(&(iParam1->f_18)))
		{
			func_196(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_60(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0.0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return func_309(&(iParam1->f_18), fParam2);
	return true;
}

void func_746(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_876(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_747(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_748(int* iParam0)
{
	if (func_737(iParam0, 0))
	{
		if (func_885(iParam0))
		{
			func_747(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_749(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_750(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_786(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_751(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_752(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

bool func_753(int iParam0, bool bParam1)
{
	if (bParam1 && !func_338(iParam0))
	{
		return false;
	}
	return !func_786(iParam0, 4);
}

float func_754(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar1 = 999999.9f;
	iVar2 = iParam1;
	while (iVar2 <= iParam2)
	{
		if (func_61((*uParam0)[iVar2], 0, 1))
		{
			fVar0 = func_224((*uParam0)[iVar2], Global_36, 1);
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
			}
		}
		iVar2++;
	}
	return fVar1;
}

bool func_755(int iParam0)
{
	if (func_61(iLocal_15[iParam0], 0, 0))
	{
		if (func_225(iLocal_15[iParam0], 1116471296, -1082130432, -1082130432, 50.0f))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_15[iParam0], Global_35, 17))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_756(var uParam0)
{
	if (uParam0->f_94 <= 0)
	{
		if (func_886())
		{
			uParam0->f_94 = func_185();
			return true;
		}
	}
	else if ((uParam0->f_94 - func_185()) < 5000)
	{
		return true;
	}
	return false;
}

void func_757(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

void func_758()
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(4, true, false);
}

int func_759(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_786(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945188[iVar0 /*18*/].f_11 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945188[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; // curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_887(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_760(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_338(iParam0))
	{
		return;
	}
	if (fParam1 <= 0.0f)
	{
		return;
	}
	iVar0 = func_484(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945188[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(Global_1945188[iVar0 /*18*/].f_3, fParam1);
}

int func_761(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, bool bParam13)
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
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_786(iVar0, 2))
		{
			if (iParam2 == Global_1945188[iVar0 /*18*/].f_10 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				return iVar0;
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
		func_887(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0.0f, 0.0f, 0.0f, 0.0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, fParam10, fParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_762(char* sParam0, int iParam1, Vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_69(vParam2))
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
		if (func_786(iVar0, 2))
		{
			if (func_388(vParam2, Global_1945188[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
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
		func_887(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_763(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_484(iParam0);
	func_750(iVar0, bParam1);
}

bool func_764(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_338(iParam0))
	{
		return false;
	}
	iVar0 = func_484(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_765(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_338(iParam0))
	{
		return false;
	}
	iVar0 = func_484(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_766(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_888(iParam0, sParam4, iParam5);
	}
	func_889(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_767(int iParam0)
{
	return (Global_22 & iParam0) != 0;
}

bool func_768()
{
	if (func_890())
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311 /*PRF_IsAimingWithWeapon*/);
	}
	else
	{
		return Global_1954819.f_992[2];
	}
	return false;
}

bool func_769(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_770(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_775(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_891(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_892(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_771(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_769(iParam0, 0))
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
	if (!func_893())
	{
		func_894(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_895(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_895(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
		}
		else if (bParam2 && func_896(iParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT");
		}
		bVar0 = true;
	}
	iVar6 = func_775(iParam0);
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
	else if (!func_897(iParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_899(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_898(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_891(iParam0, joaat("CI_TAG_SMOKING_CIGARETTE"))) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_898(iParam0));
	}
	func_900(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_772(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_769(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_775(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
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
		if (!func_901(iParam0, 1))
		{
			return false;
		}
	}
	return func_774(iParam0, 0, bParam2) >= iParam1;
}

struct<2> /*16*/ func_773(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_769(iParam0, 0))
	{
		return sVar0;
	}
	if (func_891(iParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_334() == -1)
		{
			if (func_891(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_161(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_161(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_891(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_161(joaat("MEDICINE_ITEMS"));
	}
	if (func_891(iParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_161(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

int func_774(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_775(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_770(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_902(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_810(bParam2), iParam0, false);
	return iVar2;
}

int func_775(int iParam0)
{
	Vector3 vVar0;

	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_776(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;
	struct<10> /*80*/ sVar20;
	struct<4> /*32*/ sVar34;
	int iVar39;
	int iVar40;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	sVar0 = { func_903(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam2)
	{
		func_904(&sVar0, func_802(0));
	}
	if (!func_905(&sVar0, &iVar18, &iVar19, 0))
	{
		return false;
	}
	sVar20.f_9 = joaat("SLOTID_NONE");
	iVar39 = 0;
	while (iVar39 < iVar19)
	{
		if (iVar40 >= iParam1)
		{
		}
		else
		{
			if (!func_906(&sVar20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				sVar34.f_4 = sVar20.f_9;
				sVar34 = { sVar20.f_5 /*4*/ };
				if (func_641(iParam0, &sVar20, &sVar34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_907(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_777(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_769(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_636(iParam0, bParam4, 1) /*5*/ };
	if (sVar0.f_4 == joaat("SLOTID_SATCHEL"))
	{
		return func_908(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	sVar5 = { func_640(iParam0, sVar0, sVar0.f_4, bParam4) /*4*/ };
	return func_641(iParam0, &sVar5, &sVar0, iParam1, iParam2, bParam3, bParam4);
}

void func_778(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_891(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_909(iParam0, iParam1);
		}
		if (func_891(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_891(iParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_910(iParam0, iParam1, 1, 0);
		}
	}
}

void func_779(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_614(1) < iParam0)
	{
		iParam0 = func_614(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_161(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_780(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_900(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_781(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_782(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_state", iParam1);
}

void func_783(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_behavior", iParam1);
}

void func_784(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_targetRegion", iParam1);
}

bool func_785(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return false;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(Global_1396084);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1396084);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar1))
		{
			if (DECORATOR::DECOR_EXIST_ON(iVar1, "pedRoam_hashKey"))
			{
				if (DECORATOR::DECOR_GET_INT(iVar1, "pedRoam_hashKey") == iParam0)
				{
					return true;
				}
			}
		}
		iVar2++;
	}
	return false;
}

bool func_786(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

void func_787(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_196(&(iParam0->f_18));
}

bool func_788(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_789(int iParam0)
{
	if (!func_911(iParam0))
	{
		return false;
	}
	return func_912(iParam0);
}

void func_790(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_914(func_913(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_835())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_246();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_791(int iParam0)
{
	iParam0 = func_497(iParam0);
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

void func_792(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_914(func_913(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_835())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_246())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_793(int iParam0)
{
	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_794(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_795(int iParam0)
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

	iParam0 = func_497(iParam0);
	if (iParam0 == -1)
	{
		return -1.0f;
	}
	if (iParam0 >= 7)
	{
		return -1.0f;
	}
	iVar0 = func_555(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1.0f;
	}
	iVar1 = func_791(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_791(iParam0) + 1;
	fVar6 = func_915(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_916(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_796(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_2"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_3"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_4"));
}

void func_797(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
}

bool func_798(int iParam0)
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

bool func_799(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

int func_800(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_917(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

struct<4> /*32*/ func_801(bool bParam0)
{
	return func_640(joaat("CHARACTER"), func_918(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_802(bool bParam0)
{
	int iVar0;

	iVar0 = func_810(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_640(joaat("CARRIED_WEAPONS"), func_801(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_640(joaat("CARRIED_WEAPONS"), func_801(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_640(joaat("CARRIED_WEAPONS"), func_801(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_803(int iParam0, bool bParam1)
{
	if (func_805(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_789(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_804(bool bParam0)
{
	int iVar0;

	iVar0 = func_810(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_640(joaat("EMOTE_ITEM"), func_801(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_640(joaat("EMOTE_ITEM"), func_801(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

int func_805(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_806(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_805(iParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_807(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_810(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_808(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_640(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_810(bParam6), &sVar0, false);
	return iVar4;
}

bool func_809(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_810(0);
	*uParam1 = { func_640(iParam0, func_802(0), iParam3, 0) /*4*/ };
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

int func_810(bool bParam0)
{
	if (func_334() == -1)
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

bool func_811(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_812(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_813(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_814(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*iParam1 = Global_1935630.f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*iParam2 = Global_1935630.f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_815(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630.f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_816(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_244(iParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_245(iParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_817(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_818(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_819(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_819(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_820(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
			{
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, Global_1935630.f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_821(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_822(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_823(int iParam0)
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

bool func_824(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return true;
	}
	return false;
}

bool func_825()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_826(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_829(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_640(iParam1, sVar0, joaat("SLOTID_HORSE_MANE"), 0) /*4*/ };
	return func_919(sVar29, 1);
}

bool func_827(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_829(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_640(iParam1, sVar0, joaat("SLOTID_HORSE_TAIL"), 0) /*4*/ };
	return func_919(sVar29, 1);
}

void func_828(var uParam0)
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

bool func_829(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_920(iParam0))
	{
		return false;
	}
	iVar0 = func_830(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	sVar15 = { func_801(0) /*4*/ };
	if (!func_921(sVar15, iVar0, &sVar1, 0, 0))
	{
		return false;
	}
	if (!func_922(&sVar1, uParam1))
	{
		return false;
	}
	return true;
}

int func_830(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return joaat("SLOTID_ACTIVE_HORSE");
		case 1:
			return joaat("SLOTID_TEMPORARY_HORSE");
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_831(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> /*96*/ sVar0;
	struct<4> /*32*/ sVar14;

	if (!func_642(bParam10))
	{
		return func_923(sParam0, sParam4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_807(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (func_924(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_810(0), &sParam0, &sParam4, iParam8, sVar0.f_11, &sVar14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_919(sVar14, 1))
		{
		}
	}
	return true;
}

bool func_832(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	int iVar28;

	if (!func_642(bParam9))
	{
		return func_925(sParam0, sParam4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	if (func_924(&sParam0, &sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_807(sParam0, &sVar0, bParam9, 1) || !func_807(sParam4, &sVar14, bParam9, 1))
	{
		return false;
	}
	if (func_924(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return false;
	}
	iVar28 = func_810(0);
	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(iVar28, &sParam0, &sParam4))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &sParam0, sVar14.f_10 | iParam8))
	{
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &sParam4, sVar0.f_10 | iParam8))
	{
	}
	return true;
}

bool func_833(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_926(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_834(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

bool func_835()
{
	if (func_334() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_836()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_837()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_838()
{
	return 1;
}

int func_839()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_840()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_841()
{
	return 1;
}

int func_842()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_843()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_844()
{
	return 2;
}

int func_845()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_846()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_847()
{
	return 1;
}

int func_848()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_849()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_850()
{
	return 1;
}

int func_851()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_852()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_853()
{
	return 1;
}

void func_854(int iParam0)
{
	if (func_927() < iParam0)
	{
		func_928(iParam0);
	}
}

int func_855(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (func_929(sParam0, iParam4, &sVar0, iParam5))
	{
		return sVar0.f_4;
	}
	return 0;
}

bool func_856(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_805(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_930(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<4> /*32*/ func_857()
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_801(0) /*4*/ };
	return func_640(856287005, sVar0, joaat("SLOTID_CARRIED_HORSE_EQUIPMENT"), 0);
}

void func_858(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == joaat("HORSE_EQUIPMENT_MANE_DEFAULT") || iParam1 == joaat("HORSE_EQUIPMENT_TAIL_DEFAULT"))
	{
		return;
	}
	iVar0 = iParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(iParam0, iVar0, false, false, false);
}

int func_859(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam2, iVar0, 2);
	if (iVar6 >= iParam3)
	{
	}
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			iVar3 = iVar1;
			if (!func_931(iVar3, iParam1))
			{
				(*iParam0)[iVar4] = iVar3;
				iVar4++;
			}
		}
		if (iVar4 >= iParam3)
		{
		}
		else
		{
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

int func_860(int iParam0, int iParam1, int iParam2, Vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	iVar1 = func_859(iParam0, iParam1, iVar0, iParam2);
	func_473(iVar0);
	return iVar1;
}

bool func_861(int iParam0)
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

Vector3 func_862()
{
	if (func_393(70))
	{
		return { -1634.252f, -1358.577f, 83.9077f };
	}
	if (func_393(73))
	{
		return { -1665.419f, -1346.258f, 84.11175f };
	}
	return { -1641.1f, -1359.979f, 83.4932f };
}

bool func_863(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_864(int iParam0)
{
	return iParam0 > -1;
}

bool func_865(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if ((iParam1->f_11 & 1) != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if ((iParam1->f_11 & 2) != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = (iParam1->f_11 & 4) != false;
	bVar1 = (iParam1->f_11 & 8) != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_932((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_866(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_882(uParam0[iVar0 /*17*/]))
		{
			func_590(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_867(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_933(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_338((uParam2[iVar0 /*17*/])->f_6))
		{
			func_590(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_868(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_123(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_869(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_870(int* iParam0, int* iParam1)
{
	if (!func_737(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_590(iParam1, 19);
			func_884(iParam0, 23);
			func_934(iParam1, 2);
		}
	}
}

bool func_871(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_767(16))
	{
		return Global_1935630.f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_935(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630.f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_872(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_933(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_873(int iParam0)
{
	return func_936(iParam0, 4) | func_936(iParam0, 5);
}

int func_874(int iParam0)
{
	return func_936(iParam0, 7);
}

int func_875(int iParam0)
{
	return func_936(iParam0, 6);
}

void func_876(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_882(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_933(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_877(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_937(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_753(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_595(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_595(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_938(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_878(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_765(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_939(iParam1, 1))
	{
		func_940(iParam1, 1);
		return true;
	}
	return false;
}

void func_879(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_589(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_880(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0.0f)
		{
			return true;
		}
	}
	return false;
}

void func_881(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203 /*PRF_0x010BCD70*/, true);
	}
}

bool func_882(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_883(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_884(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_885(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_886()
{
	if (((func_439(Global_35, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")) || func_439(Global_35, joaat("SCRIPT_TASK_DISEMBARK_VEHICLE"))) || func_439(Global_35, joaat("SCRIPT_TASK_EXIT_TRANSPORT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_EXIT")))
	{
		return true;
	}
	return false;
}

void func_887(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_750(iParam0, 1);
	func_751(iParam0, 1);
	func_752(iParam0, 128);
}

void func_888(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_900(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_889(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_941())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_900(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_942(iVar0);
			func_943(iVar0, 0, 0);
		}
		func_900(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_162(func_161(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_890()
{
	switch (Global_1935630.f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_891(int iParam0, int iParam1)
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

void func_892(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

bool func_893()
{
	return !Global_1911774;
}

void func_894(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_895(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_896(int iParam0, int iParam1)
{
	if (!func_769(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, iParam1);
}

bool func_897(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_898(int iParam0)
{
	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_899(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_900(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
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
	func_944(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_901(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_769(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_770(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_945("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_906(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_337(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_907(iVar1);
				return true;
			}
			iVar3++;
		}
		func_907(iVar1);
	}
	return false;
}

int func_902(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_903(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_904(&sVar0, func_802(0));
	}
	if (!func_905(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_907(iVar18);
	return iVar19;
}

struct<18> /*144*/ func_903(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (iParam0 != 0)
	{
		sVar0.f_0 = iParam0;
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

void func_904(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_905(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_810(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_906(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_907(int iParam0)
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

bool func_908(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_811(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_642(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_810(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_909(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_334() == -1)
	{
		if (func_946(43))
		{
			if (func_891(iParam0, 412399755))
			{
				func_947(joaat("EXOTIC_STAGE_01"));
				if (func_948() == 0)
				{
					func_164(0, 10);
					iVar0 = func_949(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_950(iParam0) < func_951(iParam0))
						{
							func_952(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_946(44))
		{
			if (func_891(iParam0, 709057512))
			{
				func_947(joaat("EXOTIC_STAGE_02"));
				if (func_948() == 1)
				{
					func_164(0, 10);
					iVar0 = func_949(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_950(iParam0) < func_951(iParam0))
						{
							func_952(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_946(45))
		{
			if (func_891(iParam0, -1478961327))
			{
				func_947(joaat("EXOTIC_STAGE_03"));
				if (func_948() == 2)
				{
					func_164(0, 10);
					iVar0 = func_949(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_950(iParam0) < func_951(iParam0))
						{
							func_952(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_946(46))
		{
			if (func_891(iParam0, -1238404098))
			{
				func_947(joaat("EXOTIC_STAGE_04"));
				if (func_948() == 3)
				{
					func_164(0, 10);
					iVar0 = func_949(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_950(iParam0) < func_951(iParam0))
						{
							func_952(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_946(47))
		{
			if (func_891(iParam0, 1160548794))
			{
				func_947(joaat("EXOTIC_STAGE_05"));
				if (func_948() == 4)
				{
					func_164(0, 10);
					iVar0 = func_949(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_950(iParam0) < func_951(iParam0))
						{
							func_952(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_910(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_772(func_953(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_954(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_955(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

bool func_911(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_912(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

char* func_913(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_956(37, iParam0))
		{
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1224589.f_16[iParam0])
	{
		return sVar0;
	}
	if (func_956(37, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_914(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_899(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_915(int iParam0)
{
	iParam0 = func_497(iParam0);
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

float func_916(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_917(int iParam0)
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

struct<4> /*32*/ func_918()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_919(struct<4> /*32*/ sParam0, bool bParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_642(0))
	{
		return func_957(sParam0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_807(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (sVar0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_810(0), &sParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_920(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = func_830(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1 = { func_801(0) /*4*/ };
	if (func_958(&sVar1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_921(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_810(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_922(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_810(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_923(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> /*96*/ sVar0;
	int iVar14;
	int iVar15;
	struct<17> /*136*/ sVar16;
	int iVar33;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_807(sParam0, &sVar0, 1, 0))
	{
		return -1;
	}
	if (func_924(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_808(sVar0.f_4, sParam4, iParam8, 0);
	iVar15 = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(sVar0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + sVar0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			sVar0.f_11 = (iVar15 - iVar14);
		}
	}
	sVar16 = { func_959(&sVar0) /*17*/ };
	sVar16.f_4 = { sParam4 /*4*/ };
	sVar16.f_11 = iParam8;
	sVar16.f_10 = bParam10;
	iVar33 = func_960(joaat("MOVEITEMS"), &sVar16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_924(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_925(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	struct<17> /*136*/ sVar28;
	struct<17> /*136*/ sVar45;
	int iVar62;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return -1;
	}
	if (func_924(&sParam0, &sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_807(sParam0, &sVar0, 1, 0) || !func_807(sParam4, &sVar14, 1, 0))
	{
		return -1;
	}
	if (func_924(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return -1;
	}
	sVar28 = { func_959(&sVar0) /*17*/ };
	sVar28.f_4 = { sVar14.f_5 /*4*/ };
	sVar28.f_11 = sVar14.f_9;
	sVar28.f_10 = sVar14.f_10 | iParam8;
	sVar45 = { func_959(&sVar14) /*17*/ };
	sVar45.f_4 = { sVar0.f_5 /*4*/ };
	sVar45.f_11 = sVar0.f_9;
	sVar45.f_10 = sVar0.f_10 | iParam8;
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, joaat("BASKET"), joaat("MOVEITEMS")))
		{
			if (func_961(iVar62, joaat("MOVEITEMS"), &sVar28) && func_961(iVar62, joaat("MOVEITEMS"), &sVar45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_962(iVar62, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar62 = func_960(joaat("MOVEITEMS"), &sVar28, 0);
		iVar62 = func_960(joaat("MOVEITEMS"), &sVar45, 0);
	}
	return iVar62;
}

bool func_926(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_GANG_BILL"):
		case joaat("A_C_HORSE_GANG_SEAN"):
		case joaat("A_C_HORSE_GANG_JOHN"):
		case joaat("A_C_HORSE_GANG_KAREN"):
		case joaat("A_C_HORSE_GANG_DUTCH"):
		case joaat("A_C_HORSE_EAGLEFLIES"):
		case joaat("A_C_HORSE_GANG_JAVIER"):
		case joaat("A_C_HORSE_GANG_SADIE"):
		case joaat("A_C_HORSE_GANG_LENNY"):
		case joaat("A_C_HORSE_GANG_MICAH"):
		case joaat("A_C_HORSE_GANG_HOSEA"):
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_CHARLES"):
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
		case joaat("A_C_HORSE_GANG_KIERAN"):
		case joaat("A_C_HORSE_GANG_UNCLE"):
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return true;
	}
	return false;
}

int func_927()
{
	return Global_40.f_1095.f_3135;
}

void func_928(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_929(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_810(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_807(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_930(int iParam0)
{
	int iVar0;

	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_805(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_931(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (iParam0 == (*iParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_932(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_933(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_338(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_339(&(iParam1->f_6), 0, 1);
	}
	if (!func_338(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_882(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_759(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_338(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_938(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_963(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_964(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_593(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_963(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_595(iParam1->f_6, 0, 1);
				}
				else
				{
					func_595(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_934(int* iParam0, int iParam1)
{
	if (!func_588(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_590(iParam0, 14);
		}
	}
}

void func_935(int iParam0)
{
	Global_22 |= iParam0;
}

int func_936(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_937(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1.0f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_938(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_338(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_484(iParam0);
	func_963(iParam0, 18, 0, 1);
	func_963(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_939(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_338(iParam0))
	{
		return false;
	}
	iVar0 = func_484(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_940(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_484(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_941()
{
	if (func_965())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_942(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_966((Global_40.f_4283.f_325 + iParam0));
}

void func_943(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_941())
	{
		func_900(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_900(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

void func_944(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_945(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_810(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_946(int iParam0)
{
	if (func_334() != -1)
	{
		return false;
	}
	return func_501(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_947(int iParam0)
{
	if (!func_967(iParam0))
	{
		func_969(func_968(iParam0));
	}
}

int func_948()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_967(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("EXOTIC_ITEMS"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_949(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_950(iVar9);
	iVar2 = func_950(iVar10);
	iVar3 = func_950(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_950(iVar12);
	}
	iVar5 = func_951(iVar9);
	iVar6 = func_951(iVar10);
	iVar7 = func_951(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_951(iVar12);
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
	if (iParam2 != 2)
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

int func_950(int iParam0)
{
	int iVar0;

	if (func_772(iParam0, 1, 0))
	{
		iVar0 = func_774(iParam0, 0, 0);
	}
	return iVar0;
}

int func_951(int iParam0)
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

void func_952(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_333() && (func_970(38) || func_946(38)))
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
			if (func_333() && (func_970(39) || func_946(39)))
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
			iVar9 = func_971(iParam3, 19);
			iVar14 = joaat("EXOTIC_ITEMS");
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_333() && (func_970(41) || func_946(41)))
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
			iVar14 = joaat("LEGENDARY_FISH");
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (func_333() && (func_970(49) || func_946(49)))
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
			iVar9 = func_971(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_972(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_973(iParam0, iVar13, iVar14))
	{
	}
	if (func_974(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_975(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_976(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_977(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_978(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_953(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_979(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

void func_954(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_953(iParam1, 5) || iParam0 == func_953(iParam1, 6)) || iParam0 == func_953(iParam1, 7)) || iParam0 == func_953(iParam1, 8)) || iParam0 == func_953(iParam1, 9))
	{
		func_980(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_952(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_981(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_955(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_953(iParam1, 5) || iParam0 == func_953(iParam1, 6)) || iParam0 == func_953(iParam1, 7)) || iParam0 == func_953(iParam1, 8)) || iParam0 == func_953(iParam1, 9))
	{
		if (func_980(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_952(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_981(51, 0, 0, iVar0, func_971(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_952(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_981(51, 0, 0, iVar0, func_971(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_956(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_982(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_983())
	{
		return func_982(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_982(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

int func_957(struct<4> /*32*/ sParam0, bool bParam4, bool bParam5)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar15;
	struct<29> /*232*/ sVar16;
	struct<18> /*144*/ sVar45;
	struct<17> /*136*/ sVar63;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return iVar0;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	if (!func_807(sParam0, &sVar1, 1, 0))
	{
		return iVar0;
	}
	if (sVar1.f_10 == bParam4)
	{
		return iVar0;
	}
	iVar15 = func_775(sVar1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		sVar16 = { func_984(sParam0, 1) /*29*/ };
		sVar16.f_10 = bParam4;
		iVar0 = func_985(joaat("UPDATE"), &sVar16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		sVar45 = { func_986(sParam0, 1) /*18*/ };
		sVar45.f_10 = bParam4;
		iVar0 = func_987(joaat("UPDATE"), &sVar45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		sVar63 = { func_959(&sVar1) /*17*/ };
		sVar63.f_10 = bParam4;
		iVar0 = func_960(joaat("UPDATE"), &sVar63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_958(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_810(bParam2), uParam0, iParam1);
}

struct<17> /*136*/ func_959(var uParam0)
{
	struct<17> /*136*/ sVar0;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	sVar0 = { *uParam0 /*4*/ };
	sVar0.f_4 = { uParam0->f_5 /*4*/ };
	sVar0.f_8 = uParam0->f_4;
	sVar0.f_9 = uParam0->f_11;
	sVar0.f_11 = uParam0->f_9;
	sVar0.f_10 = uParam0->f_10;
	return sVar0;
}

int func_960(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_961(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_962(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_962(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_962(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_961(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_962(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1223212)
	{
		if (Global_1223212.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_988(iParam0, iParam1);
}

void func_963(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_484(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_964(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_338(iParam0))
	{
		return;
	}
	iVar0 = func_484(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_965()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_966(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_161(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

bool func_967(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_968(int iParam0)
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

void func_969(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

bool func_970(int iParam0)
{
	if (func_334() != -1)
	{
		return false;
	}
	if (!func_221(iParam0))
	{
		return false;
	}
	return func_989(Global_1347702[iParam0 /*49*/].f_15);
}

int func_971(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_979(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

char* func_972(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_990() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_991(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_992(), 12);
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
			else if (func_993() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_994(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_993(), 30);
			}
			break;
		case joaat("EXOTIC_ITEMS"):
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
		case joaat("LEGENDARY_FISH"):
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_995(), 13);
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
			else if (func_996() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_997(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_996(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_971(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_973(int iParam0, int iParam1, int iParam2)
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

bool func_974(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_975(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_976(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == joaat("CIGARETTE_CARDS"))
		{
			iVar2 = func_998(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_772(iVar2, 1, 0) || func_1000(func_999(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1001(func_998(iVar0))), func_1001(func_998(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_993() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1002(iVar0)), func_1002(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_994() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1002(iVar0)), func_1002(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1002(iVar0)), func_1002(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("EXOTIC_ITEMS"))
		{
			iVar2 = func_953(iParam3, func_1003(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_950(iVar2) - iParam7) >= func_971(iParam3, func_1004(iVar0));
				}
				else
				{
					bVar1 = func_950(iVar2) >= func_971(iParam3, func_1004(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_950(iVar2) + iParam7) >= func_971(iParam3, func_1004(iVar0));
			}
			else
			{
				bVar1 = func_950(iVar2) >= func_971(iParam3, func_1004(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1005(iVar2)), func_1005(iVar2), bVar1, true, false);
		}
		if (iParam2 == joaat("LEGENDARY_FISH"))
		{
			if (func_1006(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("LEGENDARY_FISH"), 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1007(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_1007(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_996() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1008(iVar0)), func_1008(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_997() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1008(iVar0)), func_1008(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1008(iVar0)), func_1008(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_953(iParam3, func_1003(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_950(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1009(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1009(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1010(iVar2)), func_1010(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_977(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iParam2 == joaat("EXOTIC_ITEMS"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == joaat("LEGENDARY_FISH"))
	{
		if (func_995() >= 13)
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

bool func_978(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_223(func_1011(0)) && ((func_1012(0) == 1 || func_1012(0) == 8) || func_1012(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("DINO_BONES") || iParam2 == joaat("LEGENDARY_FISH")) || iParam2 == joaat("ROCK_CARVINGS"))
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

bool func_979(int iParam0, var uParam1)
{
	if (!func_1013(iParam0))
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

bool func_980(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_1009(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1009(iParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_1009(iVar0))
		{
			*iParam2++;
		}
		if (func_1009(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_1009(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1009(iParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_1009(iVar0))
		{
			*iParam2++;
		}
		if (func_1009(iVar1))
		{
			*iParam2++;
		}
		if (func_1009(iVar0) && func_1009(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_1009(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1009(iParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_1009(iVar0))
		{
			*iParam2++;
		}
		if (func_1009(iVar1))
		{
			*iParam2++;
		}
		if (func_1009(iVar2))
		{
			*iParam2++;
		}
		if ((func_1009(iVar0) && func_1009(iVar1)) && func_1009(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1009(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1009(iParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_1009(iVar0))
		{
			*iParam2++;
		}
		if (func_1009(iVar1))
		{
			*iParam2++;
		}
		if (func_1009(iVar2))
		{
			*iParam2++;
		}
		if (func_1009(iVar3))
		{
			*iParam2++;
		}
		if (((func_1009(iVar0) && func_1009(iVar1)) && func_1009(iVar2)) && func_1009(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_981(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_333() && (func_970(38) || func_946(38)))
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
			if (func_333() && (func_970(39) || func_946(39)))
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
			iVar7 = joaat("EXOTIC_ITEMS");
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = joaat("LEGENDARY_FISH");
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_333() && (func_970(49) || func_946(49)))
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
		if (func_333() && (func_970(38) || func_946(38)))
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
			func_1014(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1014(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1016(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_1001(func_1015(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1014(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1014(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_333() && (func_970(39) || func_946(39)))
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
			func_1014(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1014(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_333() && (func_970(49) || func_946(49)))
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
			func_1014(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1014(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1014(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1014(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_982(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_983()
{
	return Global_1109000.f_245;
}

struct<29> /*232*/ func_984(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<29> /*232*/ sVar0;
	struct<29> /*232*/ sVar29;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return sVar0;
	}
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_810(bParam4), &uParam0, &sVar29, 29, 1))
	{
		return sVar0;
	}
	sVar0 = { func_959(&sVar29) /*17*/ };
	sVar0.f_17 = { sVar29.f_16 /*8*/ };
	sVar0.f_25 = sVar29.f_25;
	sVar0.f_26 = sVar29.f_27;
	sVar0.f_27 = sVar29.f_28;
	sVar0.f_28 = sVar29.f_24;
	return sVar0;
}

int func_985(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1017(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_962(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_962(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_962(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_986(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<18> /*144*/ sVar0;
	struct<15> /*120*/ sVar18;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return sVar0;
	}
	sVar18.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_810(bParam4), &uParam0, &sVar18, 15, 1))
	{
		return sVar0;
	}
	sVar0 = { func_959(&sVar18) /*17*/ };
	sVar0.f_17 = sVar18.f_14;
	return sVar0;
}

int func_987(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1018(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_962(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_962(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_962(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_988(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> /*72*/ sVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1223212 < 20)
	{
		Global_1223212++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223212.f_1[iVar0 /*9*/] = { Global_1223212.f_1[iVar0 + 1 /*9*/] /*9*/ };
			iVar0++;
		}
	}
	sVar1 = -1;
	sVar1.f_0 = iParam0;
	sVar1.f_1 = iParam1;
	Global_1223212.f_1[(Global_1223212 - 1) /*9*/] = { sVar1 /*9*/ };
}

bool func_989(int iParam0)
{
	int iVar0;

	iVar0 = func_631(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_990()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_772(func_1019(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_991()
{
	return func_1020(Global_40.f_12019);
}

int func_992()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1019(iVar1);
		if (func_772(iVar2, 1, 0) || func_1000(func_999(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_993()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1021(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_994()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1022(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_995()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1006(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("LEGENDARY_FISH"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_996()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

int func_997()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_998(int iParam0)
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

int func_999(int iParam0)
{
	switch (iParam0)
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

bool func_1000(int iParam0)
{
	return (Global_40.f_12019 & iParam0) != 0;
}

char* func_1001(int iParam0)
{
	switch (iParam0)
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

char* func_1002(int iParam0)
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

int func_1003(int iParam0)
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

int func_1004(int iParam0)
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

char* func_1005(int iParam0)
{
	switch (iParam0)
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

bool func_1006(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

char* func_1007(int iParam0)
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

char* func_1008(int iParam0)
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

bool func_1009(int iParam0)
{
	if (func_1023(iParam0) && func_772(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1024(iParam0) & func_1025(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1010(int iParam0)
{
	if (!func_769(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_898(iParam0));
}

int func_1011(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_1012(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_1013(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1014(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

int func_1015(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

int func_1016(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

bool func_1017(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_1018(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

int func_1019(int iParam0)
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

int func_1020(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 & (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1021(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

bool func_1022(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_1023(int iParam0)
{
	switch (iParam0)
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

int func_1024(int iParam0)
{
	switch (iParam0)
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

int func_1025(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1026(&iVar0, 0, iVar95, &sVar1) && !func_1026(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_1027(iVar0, &sVar1);
			if (func_769(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_1026(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_547(iParam1) && !func_548(iParam1))
	{
		iVar0 = func_546(iParam1);
	}
	else
	{
		return false;
	}
	func_828(uParam3);
	iVar5 = func_823(iParam2);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar1, iVar0, iVar5, 0))
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

void func_1027(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1028(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1029(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1028(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1029(var uParam0, int iParam1, int iParam2, int iParam3)
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
	bVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(uParam0, iParam1, iParam2);
	return bVar2;
}

