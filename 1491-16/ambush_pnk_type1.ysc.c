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
	struct<152> /*1216*/ sLocal_15 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<219> /*1752*/ sLocal_274 = { 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 1 } ;
	var uLocal_493 = 0;
	bool bLocal_494 = false;
	struct<9> /*72*/ sScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_494 = true;
	}
	while (true)
	{
		func_2(bLocal_494, 964, 0);
		if (bLocal_494)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (sLocal_15.f_95 < 13)
			{
				if (func_3(&sScriptParam_0))
				{
					func_4(&sLocal_15, 13);
				}
			}
			if (func_5())
			{
				func_6();
			}
			func_7();
			switch (sLocal_15.f_95)
			{
				case 0:
					if (func_8(sScriptParam_0))
					{
						func_4(&sLocal_15, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (func_10())
						{
							func_4(&sLocal_15, 2);
						}
						else if (sLocal_15.f_217 > 0)
						{
							func_4(&sLocal_15, 3);
						}
						else if (sLocal_15.f_218 > 0)
						{
							func_4(&sLocal_15, 4);
						}
						else if (sLocal_15.f_216 > 0)
						{
							func_4(&sLocal_15, 5);
						}
						else
						{
							func_4(&sLocal_15, 6);
						}
					}
					break;
				case 2:
					if (func_10())
					{
						func_11();
					}
					func_4(&sLocal_15, 3);
					break;
				case 3:
					if (func_12())
					{
						if (func_13())
						{
							func_4(&sLocal_15, 4);
						}
					}
					break;
				case 4:
					if (func_14())
					{
						func_4(&sLocal_15, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						func_4(&sLocal_15, 6);
					}
					break;
				case 6:
					if (func_16())
					{
						func_4(&sLocal_15, 7);
					}
					break;
				case 7:
					if (func_17())
					{
						Global_40.f_9632[sLocal_15.f_151 /*4*/].f_2++;
						if (func_18(&Global_1393447, (1 << 16)))
						{
							func_19(&Global_1393447, (1 << 16));
						}
						if (func_18(&Global_1393447, 16))
						{
							func_19(&Global_1393447, 16);
						}
						func_4(&sLocal_15, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (sLocal_15.f_20 > (100.0f - 10.0f))
						{
							func_21();
							func_4(&sLocal_15, 9);
						}
						else
						{
							func_22(&sLocal_15, 16);
						}
					}
					break;
				case 9:
					if (func_23())
					{
						sLocal_15.f_225 = ENTITY::GET_ENTITY_HEALTH(Global_35);
						sLocal_15.f_226 = func_24();
						if (Global_40.f_9632.f_194 == sLocal_15.f_151)
						{
						}
						else
						{
							switch (sLocal_15.f_151)
							{
								case 0:
								case 5:
								case 6:
								case 11:
								case 35:
								case 42:
									break;
								default:
									func_25(&sLocal_15, 1);
									break;
							}
						}
						func_26();
						func_27(&sLocal_15);
						sLocal_15.f_21 = sLocal_15.f_20;
						func_28(&sLocal_15, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						func_22(&sLocal_15, (1 << 14));
						func_4(&sLocal_15, 10);
					}
					break;
				case 10:
					func_29();
					if (func_30(&sLocal_15, (1 << 15)) || func_31())
					{
						switch (sLocal_15.f_151)
						{
							case 0:
							case 5:
							case 6:
							case 11:
							case 35:
							case 42:
								break;
							default:
								func_32(&sLocal_15, 1);
								break;
						}
						func_33(&sLocal_15, 1);
						func_34(120, 0, 1);
						func_35(1, -1, 0, 0, 0);
						func_36(&sLocal_15);
						func_4(&sLocal_15, 11);
					}
					break;
				case 11:
					func_37(&sLocal_15);
					func_38();
					if (func_39(&sLocal_15))
					{
						if (func_18(&Global_1393447, 16))
						{
							func_19(&Global_1393447, 16);
						}
						func_40(&(sLocal_15.f_244), 0);
						func_4(&sLocal_15, 12);
					}
					break;
				case 12:
					func_41(&sLocal_15);
					func_38();
					if (func_42())
					{
						if (func_18(&Global_1393447, 16))
						{
							func_19(&Global_1393447, 16);
						}
						func_4(&sLocal_15, 13);
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
		if (func_30(&sLocal_15, 4))
		{
			func_44(0);
			func_45(&sLocal_15, 4);
		}
	}
	fVar0 = 8.0f;
	if (sLocal_15.f_151 == 17)
	{
		fVar0 = 12.0f;
	}
	if (((!func_46() && !func_47(&(sLocal_15.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !func_48())
	{
		func_40(&(sLocal_15.f_250), 0);
		return;
	}
	if (func_47(&(sLocal_15.f_250), fVar0))
	{
	}
	func_37(&sLocal_15);
	func_49();
	func_50(&sLocal_15, 0);
	func_51();
	func_52(&sLocal_15);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	func_28(&sLocal_15, 1);
	func_53(&sLocal_15, 0);
	if (sLocal_15.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(sLocal_15.f_93);
	}
	if (VOLUME::DOES_VOLUME_EXIST(sLocal_15.f_237))
	{
		func_54(&sLocal_15);
		func_55(sLocal_15.f_237);
	}
	func_33(&sLocal_15, 1);
	if (sLocal_15.f_95 >= 9 && sLocal_15.f_95 < 11)
	{
		if (func_56(sLocal_15.f_151))
		{
		}
		else if (func_57(sLocal_15.f_151, 1) || func_58(sLocal_15.f_151, 1))
		{
			func_59(&Global_1393447, (1 << 11));
			if (!func_60(&(sLocal_15.f_244)))
			{
				func_34(120, 0, 1);
			}
		}
	}
	if (func_61(Global_35, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	}
	if (func_61(sLocal_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(sLocal_15.f_56, false);
	}
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_62(sLocal_15.f_151)))
	{
		MISC::_0x1096603B519C905F("");
	}
	func_63(sLocal_15.f_151);
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
	if (sLocal_15.f_95 <= 9 && (sLocal_15.f_96 & (1 << 21)) == 0)
	{
		if (func_18(&Global_1393447, 2))
		{
			if (func_67(&sLocal_15))
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
	if ((sLocal_15.f_96 & 16) != 0)
	{
		return true;
	}
	if (sLocal_15.f_95 < 10 && (sLocal_15.f_96 & (1 << 20)) == 0)
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
			if (!func_69(sLocal_15.f_209))
			{
				if (sLocal_15.f_20 > 207.0f)
				{
					if (sLocal_15.f_223 == 0)
					{
						sLocal_15.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (sLocal_15.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { func_70(PLAYER::PLAYER_ID()) /*3*/ };
						return true;
					}
				}
				else
				{
					sLocal_15.f_223 = 0;
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
			while (iVar3 < sLocal_15.f_215)
			{
				if (sLocal_15.f_9[iVar3] < fVar4)
				{
					if (func_61(sLocal_15[iVar3], 0, 1))
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

void func_4(var uParam0, int iParam1)
{
	uParam0->f_95 = iParam1;
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
	if (func_69(sLocal_15.f_209))
	{
		func_76(&(sLocal_15.f_152));
		func_77(&(sLocal_15.f_152));
		func_78(&(sLocal_15.f_152), 0);
		func_79(&(sLocal_15.f_152), 1);
		func_80(&(sLocal_15.f_152), 6.0f);
		sLocal_15.f_209 = { sParam0 /*3*/ };
		sLocal_15.f_151 = sParam0.f_3;
		sLocal_15.f_221 = sParam0.f_4;
		sLocal_15.f_222 = func_81(sLocal_15.f_151);
		if (sParam0.f_7)
		{
			func_22(&sLocal_15, 2);
		}
		if (!func_82(sLocal_15.f_151))
		{
			func_4(&sLocal_15, 12);
			return false;
		}
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, sLocal_15.f_209, true);
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (fVar0 < 200.0f)
		{
			if (func_83())
			{
				vVar1 = { func_84(sLocal_15.f_151, 0, sLocal_15.f_221) /*3*/ };
				vVar1 = { func_84(sLocal_15.f_151, 1, sLocal_15.f_221) /*3*/ };
				if (func_85())
				{
					if (func_86(&sLocal_15))
					{
						func_22(&sLocal_15, 1);
					}
				}
				if (!sLocal_15.f_227)
				{
					if (func_87(sLocal_15.f_181, 0))
					{
						sLocal_15.f_227 = func_88(sLocal_15.f_181, -1);
					}
				}
				if (func_89(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_4(&sLocal_15, 13);
					return false;
				}
				else
				{
					if (!bVar4)
					{
						func_90(&sLocal_15);
						func_91(&sLocal_15, 8672);
					}
					PED::_RESERVE_AMBIENT_PEDS((((sLocal_15.f_215 + sLocal_15.f_216) + sLocal_15.f_217 * 2) + sLocal_15.f_219) + 1);
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
	while (iVar1 < sLocal_15.f_216)
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
		while (iVar1 < sLocal_15.f_216)
		{
			iVar3 = func_92(iVar1);
			iVar2 = func_93(iVar1);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(sLocal_15.f_66[iVar1]))
			{
				if (iVar2 == func_94())
				{
				}
				else
				{
					sLocal_15.f_66[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar3, iVar2);
					bVar0 = false;
					Jump @162; // curOff = 137
					if (!PED::_HAS_METAPED_OUTFIT_LOADED(sLocal_15.f_66[iVar1]))
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
				while (iVar1 < sLocal_15.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = func_97(iVar1);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(sLocal_15.f_31[iVar1]))
					{
						if (iVar2 == func_94())
						{
						}
						else
						{
							sLocal_15.f_31[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar4, iVar2);
							bVar0 = false;
							Jump @293; // curOff = 268
							if (!PED::_HAS_METAPED_OUTFIT_LOADED(sLocal_15.f_31[iVar1]))
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

	if (sLocal_15.f_217 <= 0)
	{
		return true;
	}
	iVar0 = sLocal_15.f_220;
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
		sLocal_15.f_49[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, fVar5, true, true, false, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(sLocal_15.f_49[iVar0], false);
		ENTITY::SET_ENTITY_VISIBLE(sLocal_15.f_49[iVar0], true);
		ENTITY::_0x3F08C6163A4AB1D6(sLocal_15.f_49[iVar0]);
		func_103(sLocal_15.f_49[iVar0]);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(sLocal_15.f_49[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sLocal_15.f_49[iVar0], true, false);
		}
	}
	sLocal_15.f_220++;
	if (sLocal_15.f_220 >= sLocal_15.f_217)
	{
		sLocal_15.f_220 = 0;
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

	if (sLocal_15.f_218 <= 0)
	{
		return true;
	}
	iVar0 = sLocal_15.f_220;
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
		sLocal_15.f_52[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(sLocal_15.f_52[iVar0], 0.0f, 0.0f, fVar5, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(sLocal_15.f_52[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(sLocal_15.f_52[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sLocal_15.f_52[iVar0], true, false);
		}
		if (func_107(iVar0))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(sLocal_15.f_52[iVar0], false);
		}
	}
	sLocal_15.f_220++;
	if (sLocal_15.f_220 >= sLocal_15.f_218)
	{
		sLocal_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_15()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	Vector3 vVar9;
	Vector3 vVar12;

	if (sLocal_15.f_216 <= 0)
	{
		return true;
	}
	iVar0 = sLocal_15.f_220;
	iVar1 = func_92(iVar0);
	vVar2 = { func_108(iVar0) /*3*/ };
	uVar5 = func_109(iVar0);
	uVar6 = func_93(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_40[iVar0]))
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
				sLocal_15.f_40[iVar0] = func_111(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				sLocal_15.f_40[iVar0] = func_111(iVar1, vVar2, uVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				PED::_EQUIP_META_PED_OUTFIT(sLocal_15.f_40[iVar0], func_93(iVar0));
				PED::_UPDATE_PED_VARIATION(sLocal_15.f_40[iVar0], false, true, true, true, false);
			}
		}
	}
	if (func_61(sLocal_15.f_40[iVar0], 0, 1))
	{
		func_112(sLocal_15.f_40[iVar0], 0);
		if (func_30(&sLocal_15, 1))
		{
			iVar7 = func_113(iVar0);
			if (iVar7 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_84[iVar0]))
				{
					sLocal_15.f_84[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_LANTERN09X"), vVar2, true, true, false, false, true);
					func_114(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(sLocal_15.f_84[iVar0], sLocal_15.f_40[iVar0], iVar8, vVar9, vVar12, false, false, false, false, 1, true, false, false);
					return false;
				}
			}
		}
		func_115(&(sLocal_15.f_152), sLocal_15.f_40[iVar0], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_15.f_40[iVar0], true);
		PED::SET_PED_CONFIG_FLAG(sLocal_15.f_40[iVar0], 277 /*PCF_0x5FE313B3*/, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(sLocal_15.f_40[iVar0]);
		ENTITY::SET_ENTITY_VISIBLE(sLocal_15.f_40[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(sLocal_15.f_40[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sLocal_15.f_40[iVar0], true, false);
		}
		sLocal_15.f_220++;
		if (sLocal_15.f_220 >= sLocal_15.f_216)
		{
			sLocal_15.f_220 = 0;
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

	if (sLocal_15.f_215 <= 0)
	{
		return true;
	}
	iVar0 = sLocal_15.f_220;
	iVar1 = func_97(iVar0);
	vVar2 = { func_116(iVar0) /*3*/ };
	fVar5 = func_117(iVar0);
	iVar6 = func_96(iVar0);
	iVar7 = func_118(sLocal_15.f_181);
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
			sLocal_15[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			sLocal_15[iVar0] = PED::_CREATE_METAPED_OUTFIT_PED(sLocal_15.f_31[iVar0], vVar2, fVar5, true, true, true, false);
			if (!ENTITY::DOES_ENTITY_EXIST(sLocal_15[iVar0]))
			{
				sLocal_15[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_15[iVar0], true);
			PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar0], 277 /*PCF_0x5FE313B3*/, false);
			PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar0], 6 /*PCF_DontInfluenceWantedLevel*/, true);
			PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar0], 233 /*PCF_PedIsEnemyToPlayer*/, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(sLocal_15[iVar0]);
			func_120(&(sLocal_15.f_152), sLocal_15[iVar0]);
			func_121(&(sLocal_15.f_152), sLocal_15[iVar0], 0);
			ENTITY::SET_ENTITY_VISIBLE(sLocal_15[iVar0], false);
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(sLocal_15[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sLocal_15[iVar0], true, false);
			}
			if (sLocal_15.f_181 == -1)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(sLocal_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
			}
			func_122(sLocal_15[iVar0], 1);
			PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(sLocal_15[iVar0], iVar7);
			DECORATOR::DECOR_SET_BOOL(sLocal_15[iVar0], "bBeatPed", true);
			func_124(func_123(sLocal_15[iVar0]), sLocal_15[iVar0]);
		}
		else
		{
			sLocal_15.f_220--;
		}
	}
	sLocal_15.f_220++;
	if (sLocal_15.f_220 >= sLocal_15.f_215)
	{
		sLocal_15.f_220 = 0;
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

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_61(sLocal_15[iVar0], 0, 0))
		{
			func_126(sLocal_15[iVar0], func_125(&sLocal_274, iVar0), 0);
			sLocal_15.f_118[iVar0 /*4*/].f_1 = { func_127(&sLocal_274, iVar0) /*3*/ };
			func_120(&(sLocal_15.f_152), sLocal_15[iVar0]);
			func_128(&(sLocal_15.f_152), sLocal_15[iVar0], 1, 60.0f, 120.0f, 35.0f);
			PED::SET_PED_COMBAT_RANGE(sLocal_15[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar0], 127 /*PCF_DontBehaveLikeLaw*/, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(sLocal_15[iVar0], true, true);
			switch (iVar0)
			{
				case 0:
					sLocal_274.f_217 = PED::GET_PED_ACCURACY(sLocal_15[iVar0]);
					TASK::TASK_START_SCENARIO_IN_PLACE_HASH(sLocal_15[iVar0], joaat("WORLD_HUMAN_STARE_STOIC"), -1, false, 0, -1.0f, false);
					func_129(sLocal_15[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608, 1065353216, 0);
					break;
				case 1:
					func_129(sLocal_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608, 1065353216, 0);
					if (func_61(sLocal_15.f_40[iVar0], 0, 0))
					{
						PED::SET_PED_ONTO_MOUNT(sLocal_15[iVar0], sLocal_15.f_40[iVar0], -1, true);
					}
					break;
				case 3:
					func_129(sLocal_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608, 1065353216, 0);
					break;
				case 4:
					func_129(sLocal_15[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608, 1065353216, 0);
					switch (sLocal_274.f_204)
					{
						case 0:
							sLocal_15.f_118[iVar0 /*4*/].f_1 = { 2350.399f, 738.8162f, 69.99573f /*3*/ };
							break;
					}
					TASK::TASK_START_SCENARIO_IN_PLACE_HASH(sLocal_15[iVar0], joaat("WORLD_HUMAN_STARE_STOIC"), -1, false, 0, -1.0f, false);
					break;
				case 5:
					switch (sLocal_274.f_204)
					{
						case 0:
							sLocal_15.f_118[iVar0 /*4*/].f_1 = { 2350.399f, 738.8162f, 69.99573f /*3*/ };
							break;
					}
					func_129(sLocal_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608, 1065353216, 0);
					break;
				default:
					func_129(sLocal_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608, 1065353216, 0);
					TASK::TASK_START_SCENARIO_IN_PLACE_HASH(sLocal_15[iVar0], joaat("WORLD_HUMAN_SMOKE"), -1, false, 0, -1.0f, false);
					break;
			}
			PED::SET_PED_ACCURACY(sLocal_15[iVar0], 40);
			if (iVar0 < 4)
			{
				PED::SET_PED_OWNS_ANIMAL(sLocal_15[iVar0], sLocal_15.f_40[iVar0], false);
			}
			else if (iVar0 < 5)
			{
				VEHICLE::SET_PED_OWNS_VEHICLE(sLocal_15[iVar0], sLocal_15.f_49[0]);
			}
			LAW::_0x00DB0BC05E3FAA4E(sLocal_15[iVar0], 1);
			if (iVar0 >= 4)
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(sLocal_15[iVar0], 98, true);
			}
		}
		iVar0++;
	}
	PROPSET::_ADD_LIGHT_PROP_SET_TO_VEHICLE(sLocal_15.f_49[0], joaat("PG_VEH_WAGONPRISON01X_LANTERNS01"));
	return true;
}

void func_21()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < sLocal_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15[iVar0]))
		{
			ENTITY::_SET_ENTITY_FADE_IN(sLocal_15[iVar0]);
			if (!func_130(&sLocal_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(sLocal_15[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < sLocal_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_40[iVar0]))
		{
			ENTITY::_SET_ENTITY_FADE_IN(sLocal_15.f_40[iVar0]);
			if (!func_131(&sLocal_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(sLocal_15.f_40[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < sLocal_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_49[iVar0]))
		{
			ENTITY::_SET_ENTITY_FADE_IN(sLocal_15.f_49[iVar0]);
			ENTITY::SET_ENTITY_VISIBLE(sLocal_15.f_49[iVar0], true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < sLocal_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_52[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(sLocal_15.f_52[iVar0], true);
		}
		iVar0++;
	}
}

void func_22(var uParam0, int iParam1)
{
	uParam0->f_96 |= iParam1;
}

bool func_23()
{
	if (!func_132(&sLocal_274, 2))
	{
		if (func_133())
		{
			func_134();
			func_135(&sLocal_274, 4);
		}
	}
	func_136();
	switch (sLocal_274.f_2)
	{
		case 0:
			if (func_137())
			{
				if (func_138())
				{
					func_22(&sLocal_15, 16);
					func_4(&sLocal_15, 13);
				}
			}
			else
			{
				func_139();
				if (func_140())
				{
					func_141();
					func_135(&sLocal_274, 1);
				}
				else
				{
					func_142();
				}
			}
			break;
		case 1:
			if (func_143())
			{
				func_144(&sLocal_15, &sLocal_274);
				func_145();
				func_25(&sLocal_15, 1);
				func_32(&sLocal_15, 1);
				func_146();
				func_135(&sLocal_274, 2);
			}
			break;
		case 2:
			func_147();
			if (func_148())
			{
				func_135(&sLocal_274, 4);
			}
			break;
		case 3:
			func_135(&sLocal_274, 4);
			break;
		case 4:
			func_149(&sLocal_15, 1.0f, 1.0f, 0.03f, 0.03f);
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

void func_25(var uParam0, bool bParam1)
{
	struct<14> /*112*/ sVar0;
	int iVar17;

	if (!func_18(&Global_1393447, (1 << 16)))
	{
		func_59(&Global_1393447, 16);
		func_59(&Global_1393447, (1 << 16));
		func_22(uParam0, (1 << 21));
		Global_40.f_9632.f_194 = uParam0->f_151;
		func_53(uParam0, 1);
		func_150(-1, 0, 0, 0, 0);
		func_151();
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
		if (!func_69(uParam0->f_212))
		{
			sVar0.f_3 = { uParam0->f_212 /*3*/ };
		}
		else
		{
			sVar0.f_3 = { uParam0->f_209 /*3*/ };
		}
		if (func_56(uParam0->f_151))
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
		uParam0->f_93 = EVENT::_CREATE_SHOCKING_EVENT(&sVar0);
		if (!func_43())
		{
			func_44(1);
			func_22(uParam0, 4);
		}
		if (bParam1)
		{
			func_35(1, -1, 0, 0, 0);
		}
		else
		{
			func_152();
			func_153();
		}
		if (func_56(uParam0->f_151))
		{
			func_34(30, 0, 1);
		}
		else
		{
			func_155(func_154(joaat("GANG_AMBUSH_ENCOUNTERED")), 1);
			func_33(uParam0, 0);
		}
		MISC::_0x1096603B519C905F(func_62(uParam0->f_151));
		func_156(uParam0);
		func_157(0, 13);
		iVar17 = 0;
		while (iVar17 < uParam0->f_215)
		{
			if (func_61((*uParam0)[iVar17], 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY((*uParam0)[iVar17], Global_35, -1, 0, 51, 0);
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
	while (iVar1 < sLocal_15.f_216)
	{
		if (func_61(sLocal_15.f_40[iVar1], 0, 0))
		{
			iVar0 = PED::_GET_RIDER_OF_MOUNT(sLocal_15.f_40[iVar1], false);
			if (func_61(iVar0, 0, 0))
			{
				PED::SET_PED_OWNS_ANIMAL(iVar0, sLocal_15.f_40[iVar1], false);
				func_158(&sLocal_15, iVar1, 32);
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

void func_28(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_30(uParam0, (1 << 25)))
		{
			func_159(0);
			func_22(uParam0, (1 << 25));
		}
	}
	else if (func_30(uParam0, (1 << 25)))
	{
		func_159(1);
		func_45(uParam0, (1 << 25));
	}
}

void func_29()
{
	int iVar0;

	func_40(&(sLocal_15.f_247), 0);
	if (func_47(&(sLocal_15.f_247), 5.0f))
	{
		func_50(&sLocal_15, 0);
	}
	if (func_47(&(sLocal_15.f_247), 3.0f))
	{
		func_160(&sLocal_15);
	}
	func_38();
	if (!func_30(&sLocal_15, (1 << 23)))
	{
		if (!func_30(&sLocal_15, (1 << 22)))
		{
			if (sLocal_15.f_181 == 2)
			{
				func_161(&sLocal_15, 1.1f);
			}
			else
			{
				func_161(&sLocal_15, 1.2f);
			}
			func_22(&sLocal_15, (1 << 22));
		}
		if (func_30(&sLocal_15, (1 << 22)))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (sLocal_15.f_225 - 60) || (float)iVar0 < ((float)sLocal_15.f_225 * 0.7f)) || iVar0 < 80)
			{
				func_161(&sLocal_15, 1.0f);
				func_22(&sLocal_15, (1 << 23));
			}
		}
	}
}

bool func_30(var uParam0, int iParam1)
{
	return (uParam0->f_96 & iParam1) != 0;
}

bool func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = func_162(&sLocal_15);
	if (func_47(&(sLocal_274.f_13[0 /*3*/]), 10.0f))
	{
		func_163();
	}
	func_164(&sLocal_15, &(sLocal_274.f_29), &(sLocal_274.f_156));
	iVar2 = 0;
	while (iVar2 < sLocal_15.f_215)
	{
		if (iVar2 < 4)
		{
			func_165(&sLocal_15, iVar2, sLocal_15.f_40[iVar2]);
		}
		iVar2++;
	}
	switch (sLocal_274.f_4)
	{
		case 0:
			func_147();
			func_40(&(sLocal_274.f_13[0 /*3*/]), 0);
			func_166(&sLocal_274, 1);
			break;
		case 1:
			func_147();
			if (func_47(&(sLocal_274.f_13[0 /*3*/]), 5.0f))
			{
				func_167();
				iVar0 = func_169(0, (sLocal_15.f_215 - 1), 1, func_168(&sLocal_274, 0));
				if (iVar0 >= 0)
				{
					func_170();
					func_171(&sLocal_274, sLocal_15[iVar0], Global_35, "TAUNT_GEN_DUTCHS_GANG_IND", 0, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
					func_166(&sLocal_274, 2);
				}
			}
			break;
		case 2:
			func_172();
			if (func_173(0.0f, 1, 0, 0))
			{
				if (iVar1 < 4)
				{
					func_163();
					iVar0 = func_169(0, (sLocal_15.f_215 - 1), 1, func_168(&sLocal_274, 1));
					if (iVar0 < 0)
					{
						iVar0 = func_169(0, (sLocal_15.f_215 - 1), 1, -1);
					}
					if (iVar0 >= 0)
					{
						func_171(&sLocal_274, sLocal_15[iVar0], Global_35, "TAUNT_GEN_ARTHUR", 0, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
						func_166(&sLocal_274, 3);
					}
				}
				else if (!func_132(&sLocal_274, 16))
				{
					if (func_173(2.0f, 1, 0, 0))
					{
						iVar0 = func_169(0, (sLocal_15.f_215 - 1), 1, func_168(&sLocal_274, 1));
						if (iVar0 < 0)
						{
							iVar0 = func_169(0, (sLocal_15.f_215 - 1), 1, -1);
						}
						if (iVar0 >= 0)
						{
							func_171(&sLocal_274, sLocal_15[iVar0], Global_35, "TAUNT_GEN_DUTCHS_GANG_IND", 0, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
							func_174(&sLocal_274, 16);
						}
					}
				}
			}
			break;
		case 3:
			func_163();
			func_172();
			if (iVar1 < 1)
			{
				func_166(&sLocal_274, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_32(var uParam0, bool bParam1)
{
	if (func_18(&Global_1393447, (1 << 16)))
	{
		if (func_87(uParam0->f_181, 0))
		{
			func_175(uParam0->f_181, bParam1);
		}
		func_176(uParam0->f_151, bParam1);
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(1);
		func_45(uParam0, (1 << 13));
	}
	else
	{
		func_178(1);
		func_22(uParam0, (1 << 13));
	}
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_179(iParam0, iParam1, bParam2);
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
	func_152();
	func_153();
	func_180((BUILTIN::TO_FLOAT(200) / 3.0f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_181() / 1000);
		if ((Global_1392135.f_1 & 4) != 0)
		{
			Global_1392135.f_1 -= (Global_1392135.f_1 & 4);
		}
		func_182();
		if (iParam1 == -1)
		{
			if (func_183(iParam0, 1))
			{
				func_184((1 << 24), 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240.0f);
			}
			else if (func_183(iParam0, 2))
			{
				func_184((1 << 24), 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60.0f);
			}
			else if (func_183(iParam0, 4))
			{
				func_184((1 << 24), 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900.0f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_185(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_186(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_186((BUILTIN::TO_FLOAT(200) / 3.0f), 1, 0);
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

void func_37(var uParam0)
{
	if (func_30(uParam0, (1 << 14)))
	{
		if (func_61(Global_35, 0, 1))
		{
			if (!func_30(uParam0, (1 << 10)))
			{
				if (uParam0->f_181 != -1 && !func_56(uParam0->f_151))
				{
					COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(func_187(uParam0->f_181));
					func_22(uParam0, (1 << 10));
				}
			}
		}
	}
}

void func_38()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < sLocal_15.f_216)
	{
		if (!func_131(&sLocal_15, iVar0, 16))
		{
			if (func_61(sLocal_15.f_40[iVar0], 0, 0))
			{
				if (func_188(iVar0))
				{
					TASK::TASK_FLEE_COORD(sLocal_15.f_40[iVar0], sLocal_15.f_209, 4, 0, -1.0f, -1, 0);
					PED::SET_PED_KEEP_TASK(sLocal_15.f_40[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_15.f_40[iVar0], false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(sLocal_15.f_40[iVar0]));
					func_158(&sLocal_15, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

bool func_39(var uParam0)
{
	return func_41(uParam0);
	return false;
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1 || !func_60(uParam0))
	{
		func_189(uParam0);
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
				if (func_190((*uParam0)[iVar0], Global_36, 1) > 40.0f || func_47(&(uParam0->f_241), 15.0f))
				{
					func_191(&(uParam0->f_22[iVar0]));
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
	if (func_47(&(sLocal_15.f_244), 45.0f) && func_192())
	{
		func_54(&sLocal_15);
		func_193(&(sLocal_15.f_244));
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

void func_45(var uParam0, int iParam1)
{
	if (func_30(uParam0, iParam1))
	{
	}
	uParam0->f_96 -= (uParam0->f_96 & iParam1);
}

bool func_46()
{
	if (func_30(&sLocal_15, (1 << 14)))
	{
		return true;
	}
	return func_194();
}

bool func_47(var uParam0, float fParam1)
{
	if (!func_60(uParam0))
	{
		return false;
	}
	if (func_195(uParam0) > fParam1)
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
	func_196(0);
	func_197(&sLocal_15, 5, 2.001f);
	func_198(0);
}

void func_50(var uParam0, bool bParam1)
{
	if (!func_30(uParam0, 256))
	{
		if (func_30(uParam0, 32) || bParam1)
		{
			if (func_61(uParam0->f_56, 0, 1))
			{
				func_199(uParam0->f_56, 0);
				func_22(uParam0, 256);
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
	while (iVar0 < sLocal_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15[iVar0]))
		{
			if (func_200(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(sLocal_15[iVar0]);
				PED::DELETE_PED(&(sLocal_15[iVar0]));
			}
			else
			{
				if (func_61(sLocal_15[iVar0], 0, 0))
				{
					if (!func_30(&sLocal_15, (1 << 14)))
					{
						func_201(&(sLocal_15[iVar0]));
					}
					func_122(sLocal_15[iVar0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(sLocal_15[iVar0], 5, true);
					PED::_SET_PED_INTERACTION_PERSONALITY(sLocal_15[iVar0], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(sLocal_15[iVar0], 993130593);
					if (func_202(sLocal_15[iVar0]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(sLocal_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(sLocal_15[iVar0], false, 0, false);
					if ((PED::IS_PED_IN_COMBAT(sLocal_15[iVar0], Global_35) || PED::IS_PED_FLEEING(sLocal_15[iVar0])) || func_130(&sLocal_15, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(sLocal_15[iVar0], 0))
						{
							TASK::CLEAR_PED_TASKS(sLocal_15[iVar0], false, false);
							TASK::TASK_FLEE_PED(sLocal_15[iVar0], Global_35, 4, iVar1, -1.0f, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(sLocal_15[iVar0], true);
					}
					else if ((sLocal_15.f_215 == sLocal_15.f_216 && func_61(sLocal_15.f_40[iVar0], 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(sLocal_15[iVar0], true))
					{
						iVar11 = sLocal_15.f_40[iVar0];
						PED::SET_PED_OWNS_ANIMAL(sLocal_15.f_40[iVar0], iVar11, false);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, sLocal_15.f_40[iVar0], 20000, -1, (1 << 30), 1, 0, 0);
						if (!func_69(sLocal_15.f_118[iVar0 /*4*/].f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, sLocal_15.f_118[iVar0 /*4*/].f_1, 2.0f, 20000, 0.25f, 0, 40000.0f);
						}
						TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(0, Global_35, 2.5f, 0, 0);
						func_203(sLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(sLocal_15[iVar0], true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(sLocal_15[iVar0], true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(sLocal_15[iVar0], true)))
						{
							if (PED::GET_SEAT_PED_IS_USING(sLocal_15[iVar0]) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(sLocal_15[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!func_69(sLocal_15.f_118[iVar0 /*4*/].f_1))
								{
									TASK::TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, sLocal_15.f_118[iVar0 /*4*/].f_1, 7.0f, 524419, 6, 5.0f, 7.0f, false);
								}
								TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(0, Global_35, -1.0f, 0, 0);
								func_203(sLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(sLocal_15[iVar0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!func_69(sLocal_15.f_118[iVar0 /*4*/].f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, sLocal_15.f_118[iVar0 /*4*/].f_1, 2.0f, 20000, 0.25f, 0, 40000.0f);
							}
							TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(0, Global_35, 2.5f, 0, 0);
							func_203(sLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(sLocal_15[iVar0], true);
						}
						else
						{
							if (func_204(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::TASK_FLEE_PED(0, Global_35, 3, iVar1, -1.0f, -1, 0);
								func_203(sLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
								PED::_SET_REMOVE_PED_NETWORKED(sLocal_15[iVar0], 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(0, Global_35, 1.0f, 128, 0);
								func_203(sLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(sLocal_15[iVar0], true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(sLocal_15[iVar0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(sLocal_15[iVar0]), -1) == sLocal_15[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(sLocal_15[iVar0]));
				}
				else if ((!PED::IS_PED_FLEEING(sLocal_15[iVar0]) && !PED::IS_PED_IN_COMBAT(sLocal_15[iVar0], Global_35)) && !func_130(&sLocal_15, iVar0, 128))
				{
					PED::_SET_REMOVE_PED_NETWORKED(sLocal_15[iVar0], -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(sLocal_15[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < sLocal_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_40[iVar0]))
		{
			if (func_205(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_84[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(sLocal_15.f_84[iVar0]));
				}
				PED::DELETE_PED(&(sLocal_15.f_40[iVar0]));
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_84[iVar0]))
				{
					if (func_206(iVar0))
					{
						OBJECT::DELETE_OBJECT(&(sLocal_15.f_84[iVar0]));
					}
					else
					{
						ENTITY::DETACH_ENTITY(sLocal_15.f_84[iVar0], true, true);
						PHYSICS::ACTIVATE_PHYSICS(sLocal_15.f_84[iVar0]);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(sLocal_15.f_84[iVar0]));
					}
				}
				if (func_61(sLocal_15.f_40[iVar0], 0, 1))
				{
					if (func_60(&(sLocal_15.f_247)))
					{
						if (!func_61(PED::_GET_RIDER_OF_MOUNT(sLocal_15.f_40[iVar0], false), 0, 0))
						{
							TASK::TASK_FLEE_COORD(sLocal_15.f_40[iVar0], sLocal_15.f_209, 4, 0, -1.0f, -1, 0);
							PED::SET_PED_KEEP_TASK(sLocal_15.f_40[iVar0], true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_ACTIVE_ANIMAL_OWNER(sLocal_15.f_40[iVar0])) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(sLocal_15.f_40[iVar0], true)))
					{
						TASK::TASK_FLEE_COORD(sLocal_15.f_40[iVar0], sLocal_15.f_209, 4, 0, -1.0f, -1, 0);
						PED::SET_PED_KEEP_TASK(sLocal_15.f_40[iVar0], true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(sLocal_15.f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < sLocal_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_49[iVar0]))
		{
			if (func_207(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(&(sLocal_15.f_49[iVar0]));
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == sLocal_15.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == sLocal_15.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(sLocal_15.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < sLocal_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_52[iVar0]))
		{
			if (func_208(&sLocal_15, sLocal_15.f_52[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(sLocal_15.f_52[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(sLocal_15.f_52[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_52(var uParam0)
{
	if (!func_30(uParam0, 128))
	{
		return;
	}
	switch (uParam0->f_181)
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

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		LAW::SET_DISABLE_DISTURBANCE_CRIMES(PLAYER::PLAYER_ID(), true);
		func_22(uParam0, (1 << 16));
	}
	else
	{
		LAW::SET_DISABLE_DISTURBANCE_CRIMES(PLAYER::PLAYER_ID(), false);
		func_45(uParam0, (1 << 16));
	}
}

void func_54(var uParam0)
{
	float fVar0;

	fVar0 = func_210(uParam0->f_151);
	func_211(uParam0, fVar0);
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
			sVar2 = { func_154(joaat("TOTAL_PLAYING_TIME")) /*2*/ };
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

bool func_67(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			if (func_130(uParam0, iVar0, 8))
			{
				if (func_224((*uParam0)[iVar0], Global_36, 1) < (70.0f * 70.0f) || func_225((*uParam0)[iVar0], 70.0f, -1082130432, -1082130432, -1082130432))
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

	if (!func_30(&sLocal_15, (1 << 14)))
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
		if (sLocal_15.f_151 != 43)
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
						func_40(&(sLocal_15.f_253), 0);
						if (func_47(&(sLocal_15.f_253), 0.5f))
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
	if (sLocal_15.f_21 == 0.0f)
	{
		*uParam0 = 210.0f;
	}
	else if (sLocal_15.f_21 < (func_73() - 10.0f))
	{
		*uParam0 = func_73();
	}
	else
	{
		*uParam0 = 210.0f;
	}
	if (sLocal_15.f_20 > *uParam0)
	{
		return true;
	}
	switch (sLocal_15.f_151)
	{
		case 29:
		case 30:
			if (sLocal_15.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!func_30(&sLocal_15, (1 << 9)) && !func_30(&sLocal_15, (1 << 14)))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_73()
{
	return 120.0f;
}

void func_74()
{
	if (sLocal_15.f_95 <= 8)
	{
		sLocal_15.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, sLocal_15.f_209, true);
		if (sLocal_15.f_21 == 0.0f || sLocal_15.f_21 > sLocal_15.f_20)
		{
			sLocal_15.f_21 = sLocal_15.f_20;
		}
		return;
	}
	if (sLocal_15.f_18 < 0)
	{
		sLocal_15.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, sLocal_15.f_209, true);
		if (sLocal_15.f_21 == 0.0f || sLocal_15.f_21 > sLocal_15.f_20)
		{
			sLocal_15.f_21 = sLocal_15.f_20;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(sLocal_15[sLocal_15.f_18]))
	{
		sLocal_15.f_9[sLocal_15.f_18] = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(sLocal_15[sLocal_15.f_18], false, true));
	}
	sLocal_15.f_18++;
	if (sLocal_15.f_18 >= sLocal_15.f_215)
	{
		sLocal_15.f_18 = -1;
	}
}

void func_75()
{
	int iVar0;

	if (sLocal_15.f_19 < sLocal_15.f_215)
	{
		iVar0 = sLocal_15.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15[iVar0]))
		{
			if (!func_130(&sLocal_15, iVar0, 8))
			{
				if (func_225(sLocal_15[iVar0], 200.0f, -1082130432, sLocal_15.f_9[iVar0], -1082130432))
				{
					func_231(&sLocal_15, iVar0, 8);
				}
			}
		}
	}
	else if (sLocal_15.f_19 < (sLocal_15.f_215 + sLocal_15.f_216))
	{
		iVar0 = (sLocal_15.f_19 - sLocal_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_40[iVar0]))
		{
			if (!func_131(&sLocal_15, iVar0, 8))
			{
				if (func_225(sLocal_15.f_40[iVar0], 200.0f, -1082130432, -1082130432, -1082130432))
				{
					func_158(&sLocal_15, iVar0, 8);
				}
			}
		}
	}
	else if (sLocal_15.f_19 < ((sLocal_15.f_215 + sLocal_15.f_216) + sLocal_15.f_217))
	{
		iVar0 = ((sLocal_15.f_19 - sLocal_15.f_215) - sLocal_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_49[iVar0]))
		{
			if (!func_232(&sLocal_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(sLocal_15.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(sLocal_15.f_49[iVar0]))
				{
					if (func_233(sLocal_15.f_49[iVar0], 200.0f, -1082130432))
					{
						func_234(&sLocal_15, iVar0, 8);
					}
				}
			}
		}
	}
	sLocal_15.f_19++;
	if (sLocal_15.f_19 >= ((sLocal_15.f_215 + sLocal_15.f_216) + sLocal_15.f_217))
	{
		sLocal_15.f_19 = 0;
	}
}

void func_76(var uParam0)
{
	func_236(uParam0, (func_235(uParam0) - 6.0f));
	func_237(uParam0, 1);
}

void func_77(var uParam0)
{
	func_238(uParam0, 0);
	func_239(uParam0, 0);
	func_78(uParam0, 1);
	func_240(uParam0, 1);
	func_241(uParam0, 0);
	func_242(uParam0, 1);
	func_243(uParam0, 1, 1, 1);
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
	switch (sLocal_15.f_221)
	{
		case 0:
			sLocal_274.f_204 = 0;
			break;
		case 1:
			sLocal_274.f_204 = 1;
			break;
		case 2:
			sLocal_274.f_204 = 2;
			break;
		case 3:
			sLocal_274.f_204 = 3;
			break;
		default:
			break;
	}
	sLocal_15.f_215 = 6;
	sLocal_15.f_217 = 1;
	sLocal_15.f_218 = 0;
	sLocal_15.f_216 = 4;
	sLocal_15.f_181 = 10;
	sLocal_274.f_203 = sLocal_15.f_222;
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(sLocal_15.f_151, 0, sLocal_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(sLocal_15.f_151, 1, sLocal_15.f_221), true))
	{
		func_174(&sLocal_274, 1);
	}
	func_22(&sLocal_15, (1 << 17));
	func_246(&sLocal_15, 3, 1);
	func_247();
	func_248(&sLocal_15, &sLocal_274);
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	var uVar3;

	func_249(iParam0, iParam1, &vVar0, &uVar3, iParam2);
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

	if (!func_250(iParam0, 1))
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
		iVar0 = func_251(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

int func_89(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_252(bParam1, bParam2, bParam3);
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

void func_90(var uParam0)
{
	float fVar0;

	fVar0 = func_210(uParam0->f_151);
	func_253(uParam0, fVar0);
}

void func_91(var uParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_238))
	{
		uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0.0f, 0.0f, 0.0f, 80.0f, 80.0f, 40.0f, "volAvoidance");
	}
	func_254(uParam0->f_238, iParam1, (1 << 18), 1, 0);
}

int func_92(int iParam0)
{
	if (sLocal_15.f_57[iParam0] == 0)
	{
		if (!func_87(sLocal_15.f_181, 1))
		{
			sLocal_15.f_57[iParam0] = func_255(joaat("HORSE_CLASS_RIDING"), 1);
		}
		else
		{
			sLocal_15.f_57[iParam0] = func_256(sLocal_15.f_181, 0, 1);
		}
	}
	return sLocal_15.f_57[iParam0];
}

int func_93(int iParam0)
{
	if (sLocal_15.f_75[iParam0] == 0)
	{
		if (sLocal_15.f_181 != -1 && sLocal_15.f_181 != 1)
		{
			sLocal_15.f_75[iParam0] = func_257(sLocal_15.f_181, iParam0, 0);
		}
		else
		{
			sLocal_15.f_75[iParam0] = func_94();
		}
		if (sLocal_15.f_75[iParam0] == joaat("META_HORSE_SADDLE_ONLY"))
		{
			sLocal_15.f_75[iParam0] = func_94();
		}
	}
	return sLocal_15.f_75[iParam0];
}

int func_94()
{
	return joaat("META_OUTFIT_DEFAULT");
}

bool func_95()
{
	int iVar0;

	switch (sLocal_274.f_1)
	{
		case 0:
			func_258(&sLocal_15);
			STREAMING::REQUEST_MODEL(func_98(0), false);
			PROPSET::_REQUEST_PROP_SET(joaat("PG_VEH_WAGONPRISON01X_LANTERNS01"));
			sLocal_274.f_1 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!STREAMING::HAS_MODEL_LOADED(func_98(0)))
			{
				iVar0 = 0;
			}
			if (!PROPSET::_HAS_PROP_SET_LOADED(joaat("PG_VEH_WAGONPRISON01X_LANTERNS01")))
			{
				iVar0 = 0;
			}
			if (!func_259(&sLocal_15))
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
	return joaat("S_M_M_PINLAW_01");
}

int func_98(int iParam0)
{
	return joaat("WAGONPRISON01X");
}

Vector3 func_99(int iParam0)
{
	Vector3 vVar0;

	vVar0 = { func_260(&sLocal_274, iParam0) /*4*/ };
	return vVar0;
}

var func_100(int iParam0)
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_260(&sLocal_274, iParam0) /*4*/ };
	return sVar0.f_3;
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

	if (func_261(*uParam0, 0.0f, 0.0f, 0.0f))
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

int func_104(var uParam0)
{
	return 0;
}

Vector3 func_105(var uParam0)
{
	return { 0.0f, 0.0f, 0.0f };
}

float func_106(var uParam0)
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
	vVar1 = { func_262(&sLocal_274, iVar0) /*4*/ };
	return vVar1;
}

var func_109(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = iParam0;
	sVar1 = { func_262(&sLocal_274, iVar0) /*4*/ };
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
	func_263(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
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
		iVar0 |= func_264(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

int func_113(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_265(&sLocal_274, iVar0);
}

void func_114(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
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
	*uParam4 = PED::GET_PED_BONE_INDEX(sLocal_15.f_40[iParam0], 62111);
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
	vVar1 = { func_266(&sLocal_274, iVar0) /*4*/ };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = iParam0;
	sVar1 = { func_266(&sLocal_274, iVar0) /*4*/ };
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

char* func_125(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_168(uParam0, iParam1);
	return func_267(iVar0);
}

void func_126(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_61(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

Vector3 func_127(var uParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { func_268(uParam0, iParam1) /*4*/ };
	return vVar0;
}

void func_128(var uParam0, int iParam1, bool bParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;

	if (bParam2)
	{
		fVar0 = 5.0f;
		if (fParam3 <= 0.0f)
		{
			fVar0 = 0.0f;
		}
		func_269(iParam1, fParam3, fVar0, fParam4, -1028390912, 1119092736);
		PED::SET_PED_HEARING_RANGE(iParam1, fParam5);
	}
	else
	{
		func_269(iParam1, 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_PED_HEARING_RANGE(iParam1, 60.0f);
	}
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_270(iParam3, 1);
	bVar1 = func_270(iParam3, 2);
	bVar2 = !func_270(iParam3, 4);
	bVar3 = func_270(iParam3, 8);
	bVar4 = !func_270(iParam3, 16);
	bVar5 = func_270(iParam3, 32);
	bVar6 = func_270(iParam3, 64);
	return func_271(iParam0, iParam1, bVar0, bVar1, bParam4, bVar2, bVar3, fParam5, fParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

bool func_130(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_97[iParam1] & iParam2) != 0;
}

bool func_131(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_106[iParam1] & iParam2) != 0;
}

bool func_132(var uParam0, int iParam1)
{
	return (*uParam0 & iParam1) != 0;
}

bool func_133()
{
	if (func_272(&sLocal_15, &(sLocal_15.f_152), &(sLocal_15.f_152.f_16), &(sLocal_274.f_200), 0, 5, 1))
	{
		return true;
	}
	return false;
}

void func_134()
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (func_61(sLocal_15[iVar1], 0, 0))
		{
			func_273(sLocal_15[iVar1], Global_36, 3, 0, 3);
			if (!bVar0)
			{
				func_171(&sLocal_274, sLocal_15[iVar1], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
				bVar0 = true;
			}
			TASK::TASK_COMBAT_PED(sLocal_15[iVar1], Global_35, 0, 0);
			PED::SET_PED_TARGET_LOSS_RESPONSE(sLocal_15[iVar1], 2);
			PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar1], 188 /*PCF_0x66114902*/, false);
			func_274(sLocal_15[iVar1], sLocal_15.f_22[iVar1], joaat("BLIP_STYLE_COP"), 0);
		}
		iVar1++;
	}
	func_174(&sLocal_274, 2);
}

void func_135(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_136()
{
	int iVar0;
	int iVar1;

	if (!func_132(&sLocal_274, 32))
	{
		if ((sLocal_15.f_20 < 120.0f && sLocal_15.f_20 > 0.0f) || sLocal_15.f_95 >= 10)
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (func_61(sLocal_15[iVar0], 0, 0))
				{
					PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar0], 107 /*PCF_DontBlipCop*/, true);
					PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar0], 131 /*PCF_DontBlip*/, true);
					func_274(sLocal_15[iVar0], sLocal_15.f_22[iVar0], joaat("BLIP_STYLE_COP"), 0);
				}
				iVar0++;
			}
			func_275(&(sLocal_274.f_218[0]), sLocal_274.f_23[1], joaat("BLIP_STYLE_FAKE_WANTED_RADIUS"));
			func_174(&sLocal_274, 32);
		}
	}
	else if (sLocal_15.f_95 < 10)
	{
		if (sLocal_15.f_20 > 130.0f)
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				func_191(&(sLocal_15.f_22[iVar0]));
				iVar1 = MAP::GET_BLIP_FROM_ENTITY(sLocal_15[iVar0]);
				func_191(&iVar1);
				iVar0++;
			}
			func_191(&(sLocal_274.f_218[0]));
			func_276(&sLocal_274, 32);
		}
	}
}

bool func_137()
{
	if (func_277(&sLocal_15))
	{
		return true;
	}
	return false;
}

bool func_138()
{
	if (!func_132(&sLocal_274, 8))
	{
		func_174(&sLocal_274, 8);
	}
	return func_194();
}

void func_139()
{
	switch (sLocal_274.f_202)
	{
		case 0:
			sLocal_274.f_205 = func_278(sLocal_274.f_23[1], Global_36);
			break;
		case 1:
			sLocal_274.f_206 = func_278(sLocal_274.f_23[4], Global_36);
			break;
		case 2:
			sLocal_274.f_207 = func_278(sLocal_274.f_23[2], Global_36);
			break;
		case 3:
			sLocal_274.f_208 = func_278(sLocal_274.f_23[3], Global_36);
			break;
	}
	sLocal_274.f_202 += 1 % 4;
}

bool func_140()
{
	if (((!sLocal_274.f_205 && !sLocal_274.f_208) && !sLocal_274.f_206) && !sLocal_274.f_207)
	{
		return false;
	}
	if (func_279(&sLocal_15, &(sLocal_15.f_152), &(sLocal_15.f_152.f_16), &(sLocal_274.f_201), 0, 5, 2))
	{
		if (sLocal_274.f_206)
		{
			sLocal_274.f_7 = 0;
			sLocal_274.f_8 = 1;
		}
		else if (sLocal_274.f_207)
		{
			sLocal_274.f_7 = 2;
			sLocal_274.f_8 = 3;
		}
		else if (sLocal_274.f_208)
		{
			sLocal_274.f_7 = 4;
			sLocal_274.f_8 = 5;
		}
		else
		{
			switch (sLocal_274.f_201)
			{
				case 0:
				case 1:
					sLocal_274.f_7 = 0;
					sLocal_274.f_8 = 1;
					break;
				case 2:
				case 3:
					sLocal_274.f_7 = 2;
					sLocal_274.f_8 = 3;
					break;
				case 4:
				case 5:
					sLocal_274.f_7 = 4;
					sLocal_274.f_8 = 5;
					break;
			}
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(sLocal_15[sLocal_274.f_7], Global_35, 17))
			{
				switch (sLocal_274.f_7)
				{
					case 0:
						if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(sLocal_15[2], Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(sLocal_15[2], Global_35, 17))
						{
							sLocal_274.f_7 = 2;
							sLocal_274.f_8 = 3;
						}
						else if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(sLocal_15[4], Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(sLocal_15[4], Global_35, 17))
						{
							sLocal_274.f_7 = 4;
							sLocal_274.f_8 = 5;
						}
						break;
					case 2:
						if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(sLocal_15[0], Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(sLocal_15[0], Global_35, 17))
						{
							sLocal_274.f_7 = 0;
							sLocal_274.f_8 = 1;
						}
						else if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(sLocal_15[4], Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(sLocal_15[4], Global_35, 17))
						{
							sLocal_274.f_7 = 4;
							sLocal_274.f_8 = 5;
						}
						break;
					case 4:
						if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(sLocal_15[0], Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(sLocal_15[0], Global_35, 17))
						{
							sLocal_274.f_7 = 0;
							sLocal_274.f_8 = 1;
						}
						else if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(sLocal_15[2], Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(sLocal_15[2], Global_35, 17))
						{
							sLocal_274.f_7 = 2;
							sLocal_274.f_8 = 3;
						}
						break;
				}
			}
		}
		return true;
	}
	return false;
}

void func_141()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar2 = func_280(sLocal_15[sLocal_274.f_7], 0);
	if (func_281(iVar2) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar2))
	{
		bVar1 = false;
	}
	else
	{
		iVar3 = WEAPON::GET_BEST_PED_WEAPON(sLocal_15[sLocal_274.f_7], false, false);
		if (func_281(iVar3))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(sLocal_15[sLocal_274.f_7], iVar3, false, 0, false, false);
			bVar1 = true;
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 150.0f, 1.5f, 0.2f);
	if (bVar1)
	{
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	}
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1.0f, -1.0f, -1.0f);
	func_203(sLocal_15[sLocal_274.f_7], &iVar0, 0, 0, 1, 1);
	func_273(sLocal_15[sLocal_274.f_7], Global_36, 5, 0, 2);
}

void func_142()
{
	if (!func_173(0.0f, 1, sLocal_274.f_12, 1))
	{
		return;
	}
	if (sLocal_15.f_222 > 0)
	{
		return;
	}
	switch (sLocal_274.f_5)
	{
		case 0:
			sLocal_274.f_9 = func_282();
			if (func_283(sLocal_274.f_9))
			{
				sLocal_274.f_10 = sLocal_274.f_9 + 1;
				func_171(&sLocal_274, sLocal_15[sLocal_274.f_9], sLocal_15[sLocal_274.f_10], "CHAT_ROADBLOCK", 1, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
				func_284(&sLocal_274, 1);
			}
			break;
		case 1:
			if (func_173(-2.0f, 1, 0, 0))
			{
				func_171(&sLocal_274, sLocal_15[sLocal_274.f_9], sLocal_15[sLocal_274.f_10], "CHAT_ROADBLOCK", 2, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
				func_284(&sLocal_274, 2);
			}
			break;
		case 2:
			if (func_173(-2.0f, 1, 0, 0))
			{
				func_171(&sLocal_274, sLocal_15[sLocal_274.f_10], sLocal_15[sLocal_274.f_9], "CHAT_ROADBLOCK_SUPPORT_RESPONSE", 1, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
				func_284(&sLocal_274, 3);
			}
			break;
		case 3:
			if (func_173(4.0f, 1, 0, 0))
			{
				func_171(&sLocal_274, sLocal_15[sLocal_274.f_9], sLocal_15[sLocal_274.f_10], "CHAT_ROADBLOCK", 3, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
				func_284(&sLocal_274, 4);
			}
			break;
		case 4:
			if (func_173(-2.0f, 1, 0, 0))
			{
				func_171(&sLocal_274, sLocal_15[sLocal_274.f_10], sLocal_15[sLocal_274.f_9], "CHAT_ROADBLOCK_SUPPORT_RESPONSE", 2, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
				func_284(&sLocal_274, 5);
			}
			break;
		case 5:
			func_284(&sLocal_274, 6);
			break;
		case 6:
			break;
	}
}

bool func_143()
{
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(sLocal_15[sLocal_274.f_7], Global_35, 17) && PED::IS_PED_FACING_PED(sLocal_15[sLocal_274.f_7], Global_35, 45.0f))
	{
		return true;
	}
	return false;
}

void func_144(var uParam0, var uParam1)
{
	char* sVar0[2];

	switch ((uParam1->f_203 % 3))
	{
		case 0:
			sVar0[0] = "PNK1_ILO_DEFUSE";
			sVar0[1] = "PNK1_ILO_ANTAGONIZE";
			break;
		case 1:
			sVar0[0] = "PNK1_V2_ILO_DEFUSE";
			sVar0[1] = "PNK1_V2_ILO_ANTAGONIZE";
			break;
		case 2:
			sVar0[0] = "PNK1_V3_ILO_DEFUSE";
			sVar0[1] = "PNK1_V3_ILO_ANTAGONIZE";
			break;
	}
	func_286(&(uParam1->f_156[0 /*17*/]), func_285(8), sVar0[0], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	func_286(&(uParam1->f_156[1 /*17*/]), func_285(10), sVar0[1], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
}

void func_145()
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (func_283(sLocal_274.f_9))
	{
		func_287(sLocal_15[sLocal_274.f_9], 0);
		func_287(sLocal_15[sLocal_274.f_10], 0);
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (!func_61(sLocal_15[iVar1], 0, 0))
		{
		}
		else if (sLocal_274.f_7 == iVar1)
		{
			func_274(sLocal_15[iVar1], sLocal_15.f_22[iVar1], joaat("BLIP_STYLE_COP"), joaat("BLIP_MODIFIER_ENEMY_IS_ALERTED"));
		}
		else
		{
			switch (iVar1)
			{
				case 0:
					fVar2 = 0.0f;
					break;
				case 1:
					fVar2 = 0.5f;
					break;
				case 2:
					fVar2 = 0.5f;
					break;
				case 3:
					fVar2 = 0.75f;
					break;
				case 4:
					fVar2 = 0.5f;
					break;
				case 5:
					fVar2 = 0.75f;
					break;
			}
			PED::SET_PED_USING_ACTION_MODE(sLocal_15[iVar1], true, -1, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!PED::IS_PED_ON_MOUNT(sLocal_15[iVar1]))
			{
				TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 150.0f, 1.5f, 0.5f);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1.0f, -1.0f, -1.0f);
			func_203(sLocal_15[iVar1], &iVar0, fVar2, 0, 1, 1);
		}
		iVar1++;
	}
}

void func_146()
{
	func_78(&(sLocal_15.f_152), 1);
	func_79(&(sLocal_15.f_152), 1);
	func_288(&(sLocal_15.f_152), 1);
	func_289(&(sLocal_15.f_152), 1);
	func_239(&(sLocal_15.f_152), 1);
	func_290(&(sLocal_15.f_152), 1);
	func_240(&(sLocal_15.f_152), 1);
}

void func_147()
{
	if (!func_61(Global_1935630.f_40, 0, 0))
	{
		return;
	}
	func_40(&(sLocal_274.f_13[2 /*3*/]), 0);
	if (!func_47(&(sLocal_274.f_13[2 /*3*/]), 2.0f))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_1935630.f_40, 1.5f);
	}
	else if (!func_47(&(sLocal_274.f_13[2 /*3*/]), 4.0f))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_1935630.f_40, 2.001f);
	}
	else if (!func_47(&(sLocal_274.f_13[2 /*3*/]), 6.0f))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_1935630.f_40, 2.5f);
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_1935630.f_40, 2.5f);
	}
}

bool func_148()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_291();
	if (sLocal_274.f_3 < 3)
	{
		if (iVar0 != -1)
		{
			func_292(&sLocal_274, 3);
		}
	}
	switch (sLocal_274.f_3)
	{
		case 0:
			func_292(&sLocal_274, 1);
			break;
		case 1:
			if (func_173(0.0f, 1, sLocal_15[sLocal_274.f_7], 1) && func_173(0.0f, 1, sLocal_15[sLocal_274.f_8], 1))
			{
				if (func_132(&sLocal_274, 64) && func_293())
				{
					func_294(&sLocal_274, 0, 1, 1);
					func_292(&sLocal_274, 4);
				}
				else if (func_173(-5.0f, 1, 0, 0))
				{
					func_171(&sLocal_274, sLocal_15[sLocal_274.f_7], Global_35, "WHO_GOES_THERE", 0, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CRITICAL"));
					func_292(&sLocal_274, 2);
				}
			}
			break;
		case 2:
			if (func_293())
			{
				func_294(&sLocal_274, 0, 1, 1);
				func_292(&sLocal_274, 4);
			}
			break;
		case 3:
			func_292(&sLocal_274, 4);
			break;
		case 4:
			if (!func_295())
			{
				iVar2 = func_296(&sLocal_15, 0, sLocal_15.f_215, 0);
				sLocal_274.f_6 = iVar2;
				if (!func_283(sLocal_274.f_6))
				{
					return false;
				}
				if (func_168(&sLocal_274, sLocal_274.f_6) == 1)
				{
					iVar3 = 1;
					if (func_297())
					{
						iVar3 = 2;
					}
					func_171(&sLocal_274, sLocal_15[sLocal_274.f_6], Global_35, "ITS_ARTHUR_EXTREME", iVar3, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
				}
				else
				{
					func_171(&sLocal_274, sLocal_15[sLocal_274.f_6], Global_35, "ITS_DUTCHS_GANG_MALE_EXTREME", 0, -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
				}
				func_274(sLocal_15[sLocal_274.f_6], sLocal_15.f_22[sLocal_274.f_6], joaat("BLIP_STYLE_COP"), joaat("BLIP_MODIFIER_ENEMY"));
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				func_298(sLocal_15[sLocal_274.f_6], Global_35, -1, 0, 0, 1);
				func_203(sLocal_15[sLocal_274.f_6], &iVar1, 2.0f, 0, 1, 1);
				PED::SET_PED_TARGET_LOSS_RESPONSE(sLocal_15[sLocal_274.f_6], 2);
				func_40(&(sLocal_274.f_13[1 /*3*/]), 0);
				func_292(&sLocal_274, 5);
			}
			break;
		case 5:
			if (func_47(&(sLocal_274.f_13[1 /*3*/]), 2.0f) || (func_173(0, 1, sLocal_15[sLocal_274.f_6], 1) && !func_295()))
			{
				func_274(sLocal_15[sLocal_274.f_8], sLocal_15.f_22[sLocal_274.f_8], joaat("BLIP_STYLE_COP"), joaat("BLIP_MODIFIER_ENEMY"));
				func_298(sLocal_15[sLocal_274.f_8], Global_35, -1, 0, 0, 1);
				PED::SET_PED_TARGET_LOSS_RESPONSE(sLocal_15[sLocal_274.f_8], 2);
				func_292(&sLocal_274, 6);
			}
			break;
		case 6:
			if ((func_173(0, 1, sLocal_15[sLocal_274.f_6], 1) || func_47(&(sLocal_274.f_13[1 /*3*/]), 3.5f)) || (func_47(&(sLocal_274.f_13[1 /*3*/]), 2.25f) && ENTITY::GET_ENTITY_SPEED(Global_35) > 7.0f))
			{
				iVar4 = 0;
				while (iVar4 <= 5)
				{
					if (func_61(sLocal_15[iVar4], 0, 0))
					{
						PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar4], 188 /*PCF_0x66114902*/, false);
						PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar4], 127 /*PCF_DontBehaveLikeLaw*/, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(sLocal_15[iVar4], 5, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(sLocal_15[iVar4], joaat("REL_PLAYER_ENEMY"));
						func_274(sLocal_15[iVar4], sLocal_15.f_22[iVar4], joaat("BLIP_STYLE_COP"), joaat("BLIP_MODIFIER_ENEMY"));
						TASK::TASK_COMBAT_PED(sLocal_15[iVar4], Global_35, 0, 0);
						PED::SET_PED_TARGET_LOSS_RESPONSE(sLocal_15[iVar4], 2);
					}
					iVar4++;
				}
				func_292(&sLocal_274, 7);
			}
			break;
		case 7:
			return true;
	}
	return false;
}

void func_149(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (func_61(Global_1935630.f_40, 0, 0))
	{
		PED::_SET_PED_MOTIVATION(Global_1935630.f_40, 3, fParam1, 0);
		PED::_SET_PED_MOTIVATION(Global_1935630.f_40, 1, fParam2, 0);
		PED::_SET_PED_MOTIVATION_MODIFIER(Global_1935630.f_40, 3, fParam3);
		PED::_SET_PED_MOTIVATION_MODIFIER(Global_1935630.f_40, 1, fParam4);
		TASK::TASK_HORSE_ACTION(Global_1935630.f_40, 4, 0, 0);
	}
}

void func_150(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_299() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_300(iVar1) && !func_301(iVar1, iParam2)) && (!bParam3 || !func_302(iVar1))) && (!bParam4 || !func_303(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_304(iVar0);
			}
		}
		iVar0++;
	}
}

void func_151()
{
	if (!func_300(Global_1327479))
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
	func_305(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_152()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_306(iVar0, 128))
		{
			func_307(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_153()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_306(iVar0, 128) && func_306(iVar0, 1))
		{
			func_307(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

struct<2> /*16*/ func_154(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_155(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_156(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < uParam0->f_215)
	{
		if (func_61((*uParam0)[iVar2], 0, 0))
		{
			iVar0 = 0;
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(200, 500);
			func_308((*uParam0)[iVar2], &iVar0);
			func_309((*uParam0)[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (uParam0->f_181)
	{
		case 0:
			func_310(joaat("G_M_M_UNIDUSTER_01"));
			func_310(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			func_310(joaat("G_M_O_UNIEXCONFEDS_01"));
			func_310(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			func_310(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			func_310(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			func_310(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			func_310(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
	func_22(uParam0, 128);
}

void func_157(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_311(&Global_0, 8);
	}
	if (!func_312() || func_313() != -1)
	{
		return;
	}
	func_311(&Global_0, 1);
}

void func_158(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_106[iParam1] |= iParam2;
}

void func_159(bool bParam0)
{
	Global_1935496.f_15 = !bParam0;
}

void func_160(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61((*uParam0)[iVar0], 0, 0))
		{
			if (!func_130(uParam0, iVar0, (1 << 9)))
			{
				if (PED::IS_PED_HOGTIED((*uParam0)[iVar0]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0], false);
					func_314((*uParam0)[iVar0]);
					func_231(uParam0, iVar0, (1 << 9));
				}
			}
			else if (!PED::IS_PED_HOGTIED((*uParam0)[iVar0]))
			{
				func_315(uParam0, iVar0, (1 << 9));
			}
		}
		iVar0++;
	}
}

void func_161(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61((*uParam0)[iVar0], 0, 0))
		{
			PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER((*uParam0)[iVar0], fParam1);
		}
		iVar0++;
	}
}

int func_162(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61((*uParam0)[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_163()
{
	if (!func_132(&sLocal_274, 128))
	{
		func_196(0);
		func_174(&sLocal_274, 128);
	}
}

void func_164(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (iVar0 < *uParam1)
		{
			if (!uParam0->f_228[iVar0])
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
				{
					if (func_316((*uParam0)[iVar0]))
					{
						func_317(uParam0[iVar0], uParam1[iVar0 /*21*/], uParam2, 1, 1);
						uParam0->f_228[iVar0] = 1;
					}
				}
				else
				{
					uParam0->f_228[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_165(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;

	if (!func_61((*uParam0)[iParam1], 0, 1))
	{
		return;
	}
	if (!PED::_GET_PED_COMBAT_ATTRIBUTE((*uParam0)[iParam1], 98))
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
			if (!PED::IS_PED_ON_MOUNT((*uParam0)[iParam1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iParam1], 98, true);
			}
		}
	}
	else if (func_61(iParam2, 0, 0))
	{
		if (Global_1935630.f_40 != iParam2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iParam1], 98, false);
		}
	}
}

void func_166(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_167()
{
	int iVar0;

	if (func_132(&sLocal_274, (1 << 9)))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_61(sLocal_15[iVar0], 0, 0))
		{
			PED::SET_PED_TARGET_LOSS_RESPONSE(sLocal_15[iVar0], 1);
		}
		iVar0++;
	}
	func_174(&sLocal_274, (1 << 9));
}

int func_168(var uParam0, int iParam1)
{
	switch ((uParam0->f_203 % 6))
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 0;
				case 3:
					return 1;
				case 4:
					return 0;
				case 5:
					return 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 3;
				case 2:
					return 2;
				case 3:
					return 3;
				case 4:
					return 2;
				case 5:
					return 3;
				default:
					break;
			}
			break;
		case 2:
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
				case 4:
					return 4;
				case 5:
					return 5;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 2;
				case 2:
					return 1;
				case 3:
					return 2;
				case 4:
					return 1;
				case 5:
					return 2;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 4;
				case 2:
					return 3;
				case 3:
					return 4;
				case 4:
					return 3;
				case 5:
					return 4;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 0;
				case 4:
					return 5;
				case 5:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_169(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 999999.9f;
	iVar3 = -1;
	iVar2 = iParam0;
	while (iVar2 <= iParam1)
	{
		if (func_61(sLocal_15[iVar2], 0, 0))
		{
			fVar1 = sLocal_15.f_9[iVar2];
			if ((fVar1 < fVar0 && !bParam2) || !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_15[iVar2]))
			{
				if (iParam3 == -1 || iParam3 == func_168(&sLocal_274, iVar2))
				{
					fVar0 = fVar1;
					iVar3 = iVar2;
				}
			}
		}
		iVar2++;
	}
	return iVar3;
}

void func_170()
{
	int iVar0;

	LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER_LAW"), 1000, 0, true);
	func_318(1000);
	func_196(1);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_61(sLocal_15[iVar0], 0, 0))
		{
			PED::_SET_PED_COMBAT_STYLE(sLocal_15[iVar0], joaat("SCRIPT_MIDCOMBAT"), 1, -1.0f);
		}
		iVar0++;
	}
	func_191(&(sLocal_274.f_218[0]));
	func_198(1);
}

int func_171(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	if (func_319(iParam1, iParam2, sParam3, "", fParam5, iParam4, 0, 0, 1, fParam5 >= 0.0f, bParam6, iParam7, 1, 0, 0))
	{
		uParam0->f_12 = iParam1;
		return 1;
	}
	return 0;
}

void func_172()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!sLocal_274.f_209[iVar0])
		{
			if (!func_61(sLocal_15[iVar0], 0, 1))
			{
				LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER_LAW"), 1000, 0, true);
				sLocal_274.f_209[iVar0] = 1;
			}
		}
		iVar0++;
	}
	func_198(1);
}

bool func_173(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_320(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_321(fParam0))
	{
		return false;
	}
	return true;
}

void func_174(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_175(int iParam0, bool bParam1)
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
		Global_40.f_9632.f_192 = func_322();
	}
}

void func_176(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_18(&Global_1393447, (1 << 16)))
	{
		func_19(&Global_1393447, (1 << 16));
		func_150(-1, 0, 0, 0, 0);
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
		iVar0 = func_323(iParam0);
		iVar1 = func_324(iParam0);
		if (func_87(iVar1, 0))
		{
			switch (iVar1)
			{
				case 0:
				case 2:
					func_325(iVar1);
					break;
			}
		}
		else
		{
			iVar2 = func_326();
			switch (iVar2)
			{
				case 0:
				case 2:
					func_327(0, iVar2);
					break;
			}
		}
		if (func_183(iVar0, 1))
		{
			func_328();
		}
		else if (func_183(iVar0, 2))
		{
			func_329(0);
		}
		func_330(iParam0);
		func_331(iParam0);
	}
}

void func_177(int iParam0)
{
	Global_1310750.f_16035 -= (Global_1310750.f_16035 & iParam0);
}

void func_178(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

void func_179(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_332(iParam0, iParam1, bParam2);
}

void func_180(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000.0f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

int func_181()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_182()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_301(iVar0, (1 << 24)))
		{
			if (!func_333(iVar0))
			{
				func_334(iVar0, (1 << 12));
			}
		}
		iVar0++;
	}
}

bool func_183(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_184(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_335(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_336(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == (1 << 24))
			{
				if (func_337(iVar0) < func_338(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_339(iVar0, iParam1, 1.0f, iVar1 | iParam2, bParam3);
		}
		iVar0++;
	}
}

void func_185(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_340(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_340(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_340(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_340(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_340(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_340(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_340(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_186(float fParam0, bool bParam1, bool bParam2)
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

int func_187(int iParam0)
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

bool func_188(int iParam0)
{
	float fVar0;

	if (func_131(&sLocal_15, iParam0, 32))
	{
		if (!func_61(PED::_GET_RIDER_OF_MOUNT(sLocal_15.f_40[iParam0], false), 0, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_61(PED::_GET_RIDER_OF_MOUNT(sLocal_15.f_40[iParam0], true), 0, 1))
	{
		return false;
	}
	if (sLocal_15.f_216 == sLocal_15.f_215)
	{
		if (!func_61(sLocal_15[iParam0], 0, 1))
		{
			return true;
		}
	}
	if (!func_131(&sLocal_15, iParam0, 64))
	{
		fVar0 = func_195(&(sLocal_15.f_247));
		if ((fVar0 - 9.0f) > (float)iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_189(var uParam0)
{
	func_341(uParam0, 0.0f);
}

float func_190(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_191(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_192()
{
	return true;
}

void func_193(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

int func_194()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (!func_61(sLocal_15[iVar1], 0, 0))
		{
		}
		else
		{
			if (PED::IS_PED_IN_COMBAT(sLocal_15[iVar1], 0))
			{
				return 1;
			}
			if (!func_130(&sLocal_15, iVar1, 2))
			{
				func_231(&sLocal_15, iVar1, 2);
				PED::_SET_PED_INTERACTION_PERSONALITY(sLocal_15[iVar1], joaat("AGGRESSIVE"));
				func_317(&(sLocal_15[iVar1]), &(sLocal_274.f_29[iVar1 /*21*/]), &(sLocal_274.f_156), 1, 1);
			}
			switch (iVar1)
			{
				case 4:
					if (!func_342(sLocal_15[iVar1], sLocal_15.f_49[0], 0))
					{
						iVar0 = 0;
						if (!func_343(sLocal_15[iVar1], joaat("SCRIPT_TASK_ENTER_VEHICLE")))
						{
							if (func_130(&sLocal_15, iVar1, 8))
							{
								func_344(sLocal_15[iVar1], sLocal_15.f_49[0], -1, 2.0f, -1, 1);
							}
							else
							{
								TASK::TASK_WARP_PED_INTO_VEHICLE(sLocal_15[iVar1], sLocal_15.f_49[0], -1);
							}
						}
					}
					break;
				case 5:
					if (!func_342(sLocal_15[iVar1], sLocal_15.f_49[0], 0))
					{
						iVar0 = 0;
						if (!func_343(sLocal_15[iVar1], joaat("SCRIPT_TASK_ENTER_VEHICLE")))
						{
							if (func_130(&sLocal_15, iVar1, 8))
							{
								func_344(sLocal_15[iVar1], sLocal_15.f_49[0], 0, 2.0f, -1, 1);
							}
							else
							{
								TASK::TASK_WARP_PED_INTO_VEHICLE(sLocal_15[iVar1], sLocal_15.f_49[0], 0);
							}
						}
					}
					break;
				default:
					if (!func_345(sLocal_15[iVar1]))
					{
						iVar0 = 0;
						if (!func_343(sLocal_15[iVar1], joaat("SCRIPT_TASK_MOUNT_ANIMAL")))
						{
							if (func_130(&sLocal_15, iVar1, 8) || func_131(&sLocal_15, iVar1, 8))
							{
								func_346(sLocal_15[iVar1], sLocal_15.f_40[iVar1], 0, 2.0f, 20000);
							}
							else
							{
								PED::SET_PED_ONTO_MOUNT(sLocal_15[iVar1], sLocal_15.f_40[iVar1], -1, true);
							}
						}
					}
					break;
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_195(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_347(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

void func_196(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15 /*DT_OnFoot*/, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6 /*DT_PoliceRiders*/, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1 /*DT_PoliceAutomobile*/, bParam0);
}

int func_197(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	Vector3 vVar7;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_215 - 1))
	{
		if (!func_61((*uParam0)[iVar0], 0, 0))
		{
		}
		else
		{
			iVar5 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0], false))
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN((*uParam0)[iVar0], false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
				}
			}
			bVar1 = false;
			if (func_348(uParam0, (*uParam0)[iVar0]) || !func_130(uParam0, iVar0, 8))
			{
				if ((func_349(uParam0, iVar0) && !func_348(uParam0, uParam0->f_40[iVar0])) && !func_350(uParam0, iVar5))
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
			}
			else
			{
				func_231(uParam0, iVar0, 2);
				func_158(uParam0, iVar0, 2);
				if (func_61(uParam0->f_40[iVar0], 0, 0))
				{
					PED::SET_PED_OWNS_ANIMAL((*uParam0)[iVar0], uParam0->f_40[iVar0], false);
				}
				PED::_SET_PED_CROUCH_MOVEMENT((*uParam0)[iVar0], false, 0, false);
				PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0], 27, false);
				if (func_281(func_280((*uParam0)[iVar0], 0)))
				{
					WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0], joaat("WEAPON_UNARMED"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON((*uParam0)[iVar0], 1, 1, 0, 0);
				}
				vVar7 = { uParam0->f_118[iVar0 /*4*/].f_1 /*3*/ };
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				if (func_61(uParam0->f_40[iVar0], 0, 0))
				{
					if (!PED::IS_PED_ON_MOUNT((*uParam0)[iVar0]))
					{
						TASK::TASK_MOUNT_ANIMAL(0, uParam0->f_40[iVar0], -1, -1, 1.0f, 1, 0, 0);
					}
					if (!func_69(vVar7))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar7, fParam2, -1, 6.0f, 1, 40000.0f);
					}
					TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, func_351(iParam1, 1), 40.0f, fParam2, 0, 0);
				}
				else if (iVar5 == 0)
				{
					if (!func_69(vVar7))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar7, fParam2, -1, 6.0f, 1, 40000.0f);
					}
					TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, func_351(iParam1, 1), 40.0f, fParam2, 128, 0);
				}
				else if (PED::GET_SEAT_PED_IS_USING((*uParam0)[iVar0]) == -1)
				{
					if (!func_69(vVar7))
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iVar5, vVar7, 5.0f, 0, iVar6, 524419, 4.0f, 3.0f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar7, 1.0f, -1, 6.0f, 1, 40000.0f);
					}
					TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, func_351(iParam1, 1), 40.0f, -1.0f, 0, 0);
				}
				func_203((*uParam0)[iVar0], &iVar3, 0.0f, 1.2f, 1, 1);
				if (!bVar2)
				{
					func_352(&uVar4, 0, 0, 1);
					func_353(uParam0[iVar0], &uVar4, 1, 1, 1, 1, 0);
					bVar2 = true;
				}
				else
				{
					func_353(uParam0[iVar0], &uVar4, 0, 1, 1, 1, 0);
				}
				PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_198(bool bParam0)
{
	if (sLocal_274.f_204 == 0)
	{
		if (bParam0)
		{
			if (!func_132(&sLocal_274, 256))
			{
				func_354(6);
				func_174(&sLocal_274, 256);
			}
		}
		else if (func_132(&sLocal_274, 256))
		{
			func_355();
			func_276(&sLocal_274, 256);
		}
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
	if (!func_356(iParam0))
	{
		return;
	}
	iVar0 = func_357(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_358(iVar0);
	func_359(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_360(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_361(iVar0))
		{
			return;
		}
	}
	func_362(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_313() == -1)
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

bool func_200(int iParam0)
{
	if (func_130(&sLocal_15, iParam0, 2))
	{
		return false;
	}
	if (func_130(&sLocal_15, iParam0, 128))
	{
		return false;
	}
	if (func_130(&sLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_348(&sLocal_15, sLocal_15[iParam0]))
	{
		return true;
	}
	if (!func_130(&sLocal_15, iParam0, 8))
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
	if (func_363(iParam0, 0))
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
	switch (sLocal_15.f_151)
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
	if (func_131(&sLocal_15, iParam0, 2))
	{
		return false;
	}
	if (func_131(&sLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_364(sLocal_15.f_40[iParam0], iParam1))
	{
		return true;
	}
	if (func_348(&sLocal_15, sLocal_15.f_40[iParam0]))
	{
		return true;
	}
	if (!func_131(&sLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_206(int iParam0)
{
	float fVar0;

	if (func_365((1 << 15)))
	{
		fVar0 = 120.0f;
	}
	else
	{
		fVar0 = 80.0f;
	}
	if (func_366(sLocal_15.f_84[iParam0], fVar0))
	{
		return false;
	}
	if (func_190(sLocal_15.f_84[iParam0], Global_36, 1) < 10.0f)
	{
		return false;
	}
	return true;
}

bool func_207(int iParam0)
{
	if (func_232(&sLocal_15, iParam0, 2))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, sLocal_15.f_49[iParam0], true))
	{
		return false;
	}
	if (func_232(&sLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_350(&sLocal_15, sLocal_15.f_49[iParam0]))
	{
		return true;
	}
	if (!func_232(&sLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_208(var uParam0, int iParam1)
{
	if (func_366(iParam1, 1114636288) || func_367(iParam1, 1, 1) <= 30.0f)
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

void func_211(var uParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar0 = { uParam0->f_209 + Vector(-40.0f, -fParam1, -fParam1) /*3*/ };
	vVar3 = { uParam0->f_209 + Vector(40.0f, fParam1, fParam1) /*3*/ };
	vVar6 = { func_368(vVar0, vVar3, 0) /*3*/ };
	vVar9 = { func_369(vVar0, vVar3, 0) /*3*/ };
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, 0);
	func_370(uParam0->f_209, fParam1, 5);
	func_371(uParam0);
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
			if (func_372(vVar2, vParam0, 2.0f, 1))
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

	sVar2 = { func_154(joaat("TOTAL_PLAYING_TIME")) /*2*/ };
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
	if (func_373(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_373(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_373(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_373(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_373(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_373(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_373(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_373(iVar0, 256))
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
	return func_375(func_374(iParam0));
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
	return func_376(vVar0, vParam1);
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
		fVar0 = func_190(iParam0, Global_36, 1);
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

int func_227()
{
	if (Global_1894899.f_187)
	{
		return 1;
	}
	if (func_377(16) && !func_377(21))
	{
		return 1;
	}
	return 0;
}

bool func_228()
{
	if (sLocal_15.f_151 != 11)
	{
		return true;
	}
	if (sLocal_15.f_221 == 2)
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

void func_231(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] |= iParam2;
}

bool func_232(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_115[iParam1] & iParam2) != 0;
}

bool func_233(int iParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = func_378(iParam0, Global_35, 1, 1);
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

void func_234(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_115[iParam1] |= iParam2;
}

float func_235(int iParam0)
{
	return iParam0->f_24;
}

void func_236(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_237(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(uParam0, 1);
	}
	else
	{
		func_244(uParam0, 1);
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

void func_240(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(uParam0, 16);
	}
	else
	{
		func_244(uParam0, (1 << 26));
		func_244(uParam0, 16);
	}
}

void func_241(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 128);
	}
	else
	{
		func_245(&(uParam0->f_1), 128);
	}
}

void func_242(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(uParam0, 256);
	}
	else
	{
		func_244(uParam0, 256);
	}
}

void func_243(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_245(uParam0, (1 << 28));
	}
	else
	{
		func_244(uParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_245(uParam0, (1 << 30));
	}
	else
	{
		func_244(uParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_245(uParam0, (1 << 29));
	}
	else
	{
		func_244(uParam0, (1 << 29));
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

void func_246(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_183(iParam1, 1))
		{
			func_22(uParam0, (1 << 18));
		}
		if (func_183(iParam1, 2))
		{
			func_22(uParam0, (1 << 19));
		}
	}
	else
	{
		if (func_183(iParam1, 1))
		{
			func_45(uParam0, (1 << 18));
		}
		if (func_183(iParam1, 2))
		{
			func_45(uParam0, (1 << 19));
		}
	}
}

void func_247()
{
	func_78(&(sLocal_15.f_152), 0);
	func_79(&(sLocal_15.f_152), 1);
	func_288(&(sLocal_15.f_152), 1);
	func_289(&(sLocal_15.f_152), 1);
	func_239(&(sLocal_15.f_152), 0);
	func_238(&(sLocal_15.f_152), 0);
	func_290(&(sLocal_15.f_152), 1);
	func_240(&(sLocal_15.f_152), 1);
	func_379(&(sLocal_15.f_152), 1);
	func_380(&(sLocal_15.f_152), 1);
}

void func_248(var uParam0, var uParam1)
{
	switch (uParam1->f_204)
	{
		case 0:
			func_381(uParam0, uParam1);
			break;
		case 1:
			func_382(uParam0, uParam1);
			break;
		case 2:
			func_383(uParam0, uParam1);
			break;
		case 3:
			func_384(uParam0, uParam1);
			break;
	}
}

void func_249(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
							func_385(&sVar0, 180.6557f, 75.5711f, 98.7111f, 307.9777f);
							break;
						case 1:
							func_385(&sVar0, -124.9678f, 182.499f, 92.7486f, 323.5033f);
							break;
						case 2:
							func_385(&sVar0, -143.1968f, 392.7447f, 95.6412f, 26.7895f);
							break;
						case 3:
							func_385(&sVar0, -175.487f, -208.2044f, 87.9832f, 155.3853f);
							break;
						case 4:
							func_385(&sVar0, 810.023f, 376.8716f, 115.1321f, 278.0894f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -78.546f, 574.7642f, 117.1554f, 285.065f);
							break;
						case 1:
							func_385(&sVar0, 52.8403f, 228.5046f, 108.3697f, 1.1595f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -98.0465f, 227.8637f, 99.6174f, 342.0f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1114.856f, 73.738f, 53.0233f, 354.9799f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -566.0319f, 466.1427f, 98.0826f, 133.627f);
							break;
						case 1:
							func_385(&sVar0, 731.3024f, -567.4277f, 75.8176f, 96.4522f);
							break;
						case 2:
							func_385(&sVar0, 83.4469f, 582.1075f, 135.0757f, 264.5214f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
						case 1:
							func_385(&sVar0, 831.6912f, -584.7949f, 78.2731f, 202.9779f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 202.3087f, 137.861f, 98.3938f, 326.3648f);
							break;
						case 1:
							func_385(&sVar0, -372.0885f, -36.569f, 41.6905f, 348.5297f);
							break;
						case 2:
							func_385(&sVar0, -927.3195f, -351.4889f, 48.6764f, 122.086f);
							break;
						case 3:
							func_385(&sVar0, -1089.385f, 29.2608f, 55.1327f, 104.0236f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1561.633f, -654.6262f, 46.2574f, 321.6371f);
							break;
						case 1:
							func_385(&sVar0, 954.459f, -1251.211f, 54.8197f, 43.8895f);
							break;
						case 2:
							func_385(&sVar0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							break;
						case 3:
							func_385(&sVar0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							break;
						case 4:
							func_385(&sVar0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							break;
						case 5:
							func_385(&sVar0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
							break;
						case 1:
							func_385(&sVar0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1561.589f, -2121.429f, 44.3306f, 273.483f);
							break;
						case 1:
							func_385(&sVar0, 1391.634f, -2269.641f, 44.9803f, 294.7664f);
							break;
						case 2:
							func_385(&sVar0, 2067.27f, -1250.361f, 42.8864f, 257.827f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1173.9f, -909.8f, 66.9f, -57.4f);
							break;
						case 1:
							func_385(&sVar0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2069.093f, -1241.536f, 41.2556f, 176.86f);
							break;
						case 1:
							func_385(&sVar0, 2081.443f, -899.7972f, 41.1731f, 260.946f);
							break;
						case 2:
							func_385(&sVar0, 1212.386f, -1591.315f, 56.0669f, 23.4687f);
							break;
						case 3:
							func_385(&sVar0, 1506.064f, -905.8009f, 47.8961f, 165.3073f);
							break;
						case 4:
							func_385(&sVar0, 1606.995f, -1545.489f, 59.2865f, 177.0083f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2449.325f, 1573.939f, 85.8194f, 39.9471f);
							break;
						case 1:
							func_385(&sVar0, 2584.913f, 1633.828f, 97.7316f, 8.1257f);
							break;
						case 2:
							func_385(&sVar0, 2730.857f, 1311.648f, 92.9221f, 149.1053f);
							break;
						case 3:
							func_385(&sVar0, 2794.002f, 1031.168f, 59.517f, 188.3449f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
							break;
						case 1:
							func_385(&sVar0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
							break;
						case 1:
							func_385(&sVar0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2242.927f, 732.5889f, 91.0723f, 263.9706f);
							break;
						case 1:
							func_385(&sVar0, 2698.555f, 183.9842f, 52.7268f, 12.5536f);
							break;
						case 2:
							func_385(&sVar0, 2012.363f, 450.9774f, 114.9433f, 51.6697f);
							break;
						case 3:
							func_385(&sVar0, 2870.96f, 831.843f, 48.2579f, 28.2762f);
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
							func_385(&sVar0, 334.8338f, 220.554f, 101.8269f, 119.7537f);
							break;
						case 1:
							func_385(&sVar0, -113.9271f, 443.0494f, 111.7579f, 219.7514f);
							break;
						case 2:
							func_385(&sVar0, -298.4487f, 637.9625f, 111.069f, 190.7615f);
							break;
						case 3:
							func_385(&sVar0, -379.536f, -313.1479f, 87.3478f, 269.676f);
							break;
						case 4:
							func_385(&sVar0, 1058.255f, 395.0368f, 100.4976f, 78.4296f);
							break;
					}
					Jump @5968; // curOff = 3467
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
							break;
						case 1:
							func_385(&sVar0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
							break;
					}
					Jump @5968; // curOff = 3548
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
							break;
					}
					Jump @5968; // curOff = 3594
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
							break;
					}
					Jump @5968; // curOff = 3640
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -650.8867f, 350.328f, 87.9592f, 308.87f);
							break;
						case 1:
							func_385(&sVar0, 581.8732f, -498.1398f, 77.1145f, 214.5317f);
							break;
						case 2:
							func_385(&sVar0, 195.9423f, 643.7529f, 133.8094f, 123.0221f);
							break;
					}
					Jump @5968; // curOff = 3756
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
					}
					Jump @5968; // curOff = 3802
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
						case 1:
							func_385(&sVar0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
							break;
					}
					Jump @5968; // curOff = 3883
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					Jump @5968; // curOff = 3929
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					Jump @5968; // curOff = 3975
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 488.6012f, 346.341f, 104.38f, 132.2152f);
							break;
						case 1:
							func_385(&sVar0, -491.0948f, 240.2662f, 42.8778f, 245.3544f);
							break;
						case 2:
							func_385(&sVar0, -1063.855f, -573.8351f, 81.1675f, 22.0417f);
							break;
						case 3:
							func_385(&sVar0, -1383.4f, -131.3f, 94.2f, 2.2213f);
							break;
					}
					Jump @5968; // curOff = 4126
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1721.41f, -764.9014f, 41.3985f, 48.7414f);
							break;
						case 1:
							func_385(&sVar0, 917.1657f, -1057.089f, 55.351f, 197.7367f);
							break;
						case 2:
							func_385(&sVar0, 1367.119f, -1379.669f, 79.039f, 234.1533f);
							break;
						case 3:
							func_385(&sVar0, 1492.79f, -1122.532f, 56.3596f, 8.428f);
							break;
						case 4:
							func_385(&sVar0, 2246.185f, -1359.823f, 44.2797f, 67.8845f);
							break;
						case 5:
							func_385(&sVar0, 1289.32f, -1632.029f, 65.404f, 182.4022f);
							break;
					}
					Jump @5968; // curOff = 4347
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
							break;
					}
					Jump @5968; // curOff = 4393
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
							break;
					}
					Jump @5968; // curOff = 4439
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
							break;
						case 1:
							func_385(&sVar0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
							break;
					}
					Jump @5968; // curOff = 4520
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1861.568f, -1978.116f, 43.699f, 111.3814f);
							break;
						case 1:
							func_385(&sVar0, 1506.446f, -2206.457f, 42.6941f, 158.0186f);
							break;
						case 2:
							func_385(&sVar0, 2273.229f, -1369.996f, 45.7006f, 80.9983f);
							break;
					}
					Jump @5968; // curOff = 4636
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1346.7f, -858.3f, 72.7f, 88.6f);
							break;
						case 1:
							func_385(&sVar0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
							break;
					}
					Jump @5968; // curOff = 4717
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2264.292f, -1366.995f, 44.3097f, 79.8327f);
							break;
						case 1:
							func_385(&sVar0, 2264.248f, -1037.55f, 42.1479f, 54.3753f);
							break;
						case 2:
							func_385(&sVar0, 1091.079f, -1431.687f, 54.6637f, 223.0478f);
							break;
						case 3:
							func_385(&sVar0, 1493.179f, -1116.514f, 55.4248f, 352.523f);
							break;
						case 4:
							func_385(&sVar0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
							break;
					}
					Jump @5968; // curOff = 4903
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					Jump @5968; // curOff = 4949
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					Jump @5968; // curOff = 4995
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2299.518f, 1759.59f, 107.9513f, 195.5682f);
							break;
						case 1:
							func_385(&sVar0, 2705.534f, 1911.673f, 113.9124f, 141.4947f);
							break;
						case 2:
							func_385(&sVar0, 2530.082f, 1242.029f, 148.8438f, 338.4772f);
							break;
						case 3:
							func_385(&sVar0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
							break;
					}
					Jump @5968; // curOff = 5146
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
							break;
					}
					Jump @5968; // curOff = 5192
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
							break;
					}
					Jump @5968; // curOff = 5238
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
							break;
					}
					Jump @5968; // curOff = 5284
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
							break;
					}
					Jump @5968; // curOff = 5330
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
							break;
					}
					Jump @5968; // curOff = 5376
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
							break;
					}
					Jump @5968; // curOff = 5422
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
							break;
						case 1:
							func_385(&sVar0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
							break;
					}
					Jump @5968; // curOff = 5503
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
							break;
					}
					Jump @5968; // curOff = 5549
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
							break;
					}
					Jump @5968; // curOff = 5595
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
							break;
					}
					Jump @5968; // curOff = 5641
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
							break;
					}
					Jump @5968; // curOff = 5687
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
							break;
						case 1:
							func_385(&sVar0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					Jump @5968; // curOff = 5768
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
							break;
					}
					Jump @5968; // curOff = 5814
					switch (iParam4)
					{
						case 0:
							func_385(&sVar0, 2482.688f, 729.5152f, 72.2941f, 117.0933f);
							break;
						case 1:
							func_385(&sVar0, 2585.403f, 338.2195f, 69.6483f, 220.6653f);
							break;
						case 2:
							func_385(&sVar0, 1805.624f, 550.4319f, 105.9446f, 233.3962f);
							break;
						case 3:
							func_385(&sVar0, 2793.57f, 1038.077f, 58.5925f, 188.5771f);
							break;
					}
					Jump @6236; // curOff = 5968
					switch (iParam0)
					{
						case 13:
							switch (iParam4)
							{
								case 0:
									func_385(&sVar0, 997.1635f, -1186.04f, 64.0811f, 75.3782f);
									break;
								case 1:
									func_385(&sVar0, 1391.092f, -1081.252f, 70.8405f, 284.1285f);
									break;
							}
							break;
						case 33:
							switch (iParam4)
							{
								case 0:
									func_385(&sVar0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
									break;
								case 1:
									func_385(&sVar0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
									break;
							}
							break;
						case 0:
							switch (iParam4)
							{
								case 1:
									func_385(&sVar0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
									break;
							}
							break;
					}
					Jump @6236; // curOff = 6205
					*uParam2 = { 0.0f, 0.0f, 0.0f /*3*/ };
					*uParam3 = 0.0f;
					Jump @6236; // curOff = 6219
					*uParam2 = { 0.0f, 0.0f, 0.0f /*3*/ };
					*uParam3 = 0.0f;
					*uParam2 = { sVar0 /*3*/ };
					*uParam3 = sVar0.f_3;
					if (func_69(*uParam2))
					{
						*uParam2 = { 0.0f, 0.0f, 0.0f /*3*/ };
						*uParam3 = 0.0f;
					}
				}

bool func_250(int iParam0, bool bParam1)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

int func_251(int iParam0)
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

int func_252(bool bParam0, bool bParam1, bool bParam2)
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

void func_253(var uParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	int iVar12;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_237))
	{
		func_386(&(uParam0->f_237), uParam0->f_209, uParam0->f_151);
	}
	func_387(uParam0->f_237, "ambush_restriction", 1, 0, (1 << 9), 0, -1082130432);
	vVar0 = { uParam0->f_209 + Vector(-40.0f, -fParam1, -fParam1) /*3*/ };
	vVar3 = { uParam0->f_209 + Vector(40.0f, fParam1, fParam1) /*3*/ };
	vVar6 = { func_368(vVar0, vVar3, 0) /*3*/ };
	vVar9 = { func_369(vVar0, vVar3, 0) /*3*/ };
	if (func_388(uParam0->f_151))
	{
		iVar12 = func_389(uParam0);
		func_390(uParam0->f_209, fParam1, 0, 0, iVar12);
	}
	PED::SET_PED_NON_CREATION_AREA(vVar6, vVar9);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar6, vVar9, false, 1);
	FIRE::STOP_FIRE_IN_RANGE(uParam0->f_209, fParam1);
	func_391(uParam0->f_209, fParam1, 0);
}

void func_254(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

int func_255(int iParam0, bool bParam1)
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

int func_256(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_392(iParam0);
	if ((func_183(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_297())
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
					if (func_297())
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
					if (func_297())
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
					if (func_297())
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
					if (func_297())
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

int func_257(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = joaat("META_HORSE_SADDLE_ONLY");
	iVar1 = func_392(iParam0);
	if ((func_183(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_297())
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
					if (func_297())
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
					if (func_297())
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
					if (func_297())
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
					if (func_297())
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

void func_258(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_97(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_259(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_97(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(func_97(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

struct<4> /*32*/ func_260(var uParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (uParam0->f_204)
	{
		case 0:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(0, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(1, 9);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(2, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(3, 9);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(4, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(5, 9);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(6, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(7, 9);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

bool func_261(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

struct<4> /*32*/ func_262(var uParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (uParam0->f_204)
	{
		case 0:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(0, 1);
					case 1:
						return func_393(0, 2);
					case 2:
						return func_393(0, 4);
					case 3:
						return func_393(0, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(1, 1);
					case 1:
						return func_393(1, 2);
					case 2:
						return func_393(1, 4);
					case 3:
						return func_393(1, 6);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(2, 1);
					case 1:
						return func_393(2, 2);
					case 2:
						return func_393(2, 4);
					case 3:
						return func_393(2, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(3, 1);
					case 1:
						return func_393(3, 2);
					case 2:
						return func_393(3, 4);
					case 3:
						return func_393(3, 6);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(4, 1);
					case 1:
						return func_393(4, 2);
					case 2:
						return func_393(4, 4);
					case 3:
						return func_393(4, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(5, 1);
					case 1:
						return func_393(5, 2);
					case 2:
						return func_393(5, 4);
					case 3:
						return func_393(5, 6);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(6, 1);
					case 1:
						return func_393(6, 2);
					case 2:
						return func_393(6, 4);
					case 3:
						return func_393(6, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(7, 1);
					case 1:
						return func_393(7, 2);
					case 2:
						return func_393(7, 4);
					case 3:
						return func_393(7, 6);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

void func_263(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_394(iParam1))
		{
			func_395(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_396(iParam0, 0, 1);
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
			func_397(iParam0, 0);
			bVar0 = true;
		}
		func_398(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_264(int iParam0)
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

int func_265(var uParam0, int iParam1)
{
	switch (uParam0->f_204)
	{
		case 0:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 1:
						return 2;
					case 2:
						return 2;
					case 3:
						return 2;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 1:
						return 2;
					case 2:
						return 1;
					case 3:
						return 2;
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 1:
						return 2;
					case 2:
						return 2;
					case 3:
						return 2;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 1:
						return 2;
					case 2:
						return 1;
					case 3:
						return 2;
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 1:
						return 2;
					case 2:
						return 2;
					case 3:
						return 2;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 1;
					case 1:
						return 1;
					case 2:
						return 1;
					case 3:
						return 1;
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 1:
						return 2;
					case 2:
						return 2;
					case 3:
						return 2;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 1;
					case 1:
						return 1;
					case 2:
						return 1;
					case 3:
						return 1;
					default:
						break;
				}
			}
			break;
	}
	return 3;
}

struct<4> /*32*/ func_266(var uParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (uParam0->f_204)
	{
		case 0:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(0, 0);
					case 1:
						return func_393(0, 2);
					case 2:
						return func_393(0, 3);
					case 3:
						return func_393(0, 5);
					case 4:
						return func_393(0, 7);
					case 5:
						return func_393(0, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(1, 0);
					case 1:
						return func_393(1, 2);
					case 2:
						return func_393(1, 3);
					case 3:
						return func_393(1, 5);
					case 4:
						return func_393(1, 7);
					case 5:
						return func_393(1, 8);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(2, 0);
					case 1:
						return func_393(2, 2);
					case 2:
						return func_393(2, 3);
					case 3:
						return func_393(2, 5);
					case 4:
						return func_393(2, 7);
					case 5:
						return func_393(2, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(3, 0);
					case 1:
						return func_393(3, 2);
					case 2:
						return func_393(3, 3);
					case 3:
						return func_393(3, 5);
					case 4:
						return func_393(3, 7);
					case 5:
						return func_393(3, 8);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(4, 0);
					case 1:
						return func_393(4, 2);
					case 2:
						return func_393(4, 3);
					case 3:
						return func_393(4, 5);
					case 4:
						return func_393(4, 7);
					case 5:
						return func_393(4, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(5, 0);
					case 1:
						return func_393(5, 2);
					case 2:
						return func_393(5, 3);
					case 3:
						return func_393(5, 5);
					case 4:
						return func_393(5, 7);
					case 5:
						return func_393(5, 8);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(6, 0);
					case 1:
						return func_393(6, 2);
					case 2:
						return func_393(6, 3);
					case 3:
						return func_393(6, 5);
					case 4:
						return func_393(6, 7);
					case 5:
						return func_393(6, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(7, 0);
					case 1:
						return func_393(7, 2);
					case 2:
						return func_393(7, 3);
					case 3:
						return func_393(7, 5);
					case 4:
						return func_393(7, 7);
					case 5:
						return func_393(7, 8);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0373_S_M_M_PinLaw_01_WHITE_01";
		case 1:
			return "0374_S_M_M_PinLaw_01_WHITE_02";
		case 2:
			return "0375_S_M_M_PinLaw_01_WHITE_03";
		case 3:
			return "0376_S_M_M_PinLaw_02_WHITE_01";
		case 4:
			return "0377_S_M_M_PinLaw_02_WHITE_02";
		case 5:
			return "0378_S_M_M_PinLaw_02_WHITE_03";
		default:
			break;
	}
	return "";
}

struct<4> /*32*/ func_268(var uParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (uParam0->f_204)
	{
		case 0:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 2:
						return func_393(0, 10);
					case 3:
						return func_393(0, 10);
					case 4:
						return func_393(0, 10);
					case 5:
						return func_393(0, 10);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 4:
						return func_393(1, 10);
					case 5:
						return func_393(1, 10);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 4:
						return func_393(2, 10);
					case 5:
						return func_393(2, 10);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 4:
						return func_393(3, 10);
					case 5:
						return func_393(3, 10);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 4:
						return func_393(4, 10);
					case 5:
						return func_393(4, 10);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 4:
						return func_393(5, 10);
					case 5:
						return func_393(5, 10);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_132(uParam0, 1))
			{
				switch (iParam1)
				{
					case 4:
						return func_393(6, 10);
					case 5:
						return func_393(6, 10);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 4:
						return func_393(7, 10);
					case 5:
						return func_393(7, 10);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

void func_269(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2.0f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

bool func_270(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_271(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_281(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_281(iVar4) && iVar4 != iVar0)
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
	if (func_313() == -1 && !func_399(iVar0))
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
				if (func_399(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_281(iVar0))
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
		func_400(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_401(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_402(iVar0))
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

bool func_272(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_403(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_404((*uParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
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

void func_273(int iParam0, Vector3 vParam1, int iParam4, bool bParam5, int iParam6)
{
	if (!func_216(iParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return;
	}
	if (bParam5 && PED::_0xF9331B3A314EB49D(iParam0))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam0);
		return;
	}
	if (func_69(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0, vParam1, iParam6);
			break;
		case 5:
			PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(iParam0, vParam1, iParam6, false);
			break;
		case 6:
			PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(iParam0, vParam1, iParam6, false);
			break;
		case 4:
			PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(iParam0, vParam1);
			break;
		case 2:
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iParam0, vParam1, iParam6);
			break;
		case 1:
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam0);
			break;
		case 7:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iParam0);
			break;
		default:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iParam0);
			break;
	}
}

void func_274(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_405(iParam0, &iParam1, iParam2, iParam3, 0, "BLIP_PINKERTON");
}

void func_275(int* iParam0, int iParam1, int iParam2)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	*iParam0 = MAP::_BLIP_ADD_FOR_VOLUME(iParam2, iParam1);
}

void func_276(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_277(var uParam0)
{
	switch (uParam0->f_224)
	{
		case 0:
			if (func_406(uParam0))
			{
				func_407(uParam0, 1);
				return true;
			}
			break;
		case 1:
			if (func_408(uParam0))
			{
				func_407(uParam0, 2);
				return true;
			}
			break;
		case 2:
			if (func_409(uParam0))
			{
				func_407(uParam0, 3);
				return true;
			}
			break;
		case 3:
			if (func_410(uParam0))
			{
				func_407(uParam0, 4);
				return true;
			}
			break;
		case 4:
			if (func_411(uParam0))
			{
				func_407(uParam0, 5);
				return true;
			}
			break;
		case 5:
			if (func_412(uParam0))
			{
				func_407(uParam0, 6);
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

bool func_278(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

bool func_279(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_403(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_413((*uParam0)[*uParam3], iParam1, uParam2, 0))
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

int func_280(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_281(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_282()
{
	if (sLocal_15.f_9[0] < 52.0f && sLocal_15.f_9[0] > 0.0f)
	{
		return 0;
	}
	if (sLocal_15.f_9[2] < 52.0f && sLocal_15.f_9[2] > 0.0f)
	{
		return 2;
	}
	if (sLocal_15.f_9[4] < 52.0f && sLocal_15.f_9[4] > 0.0f)
	{
		return 4;
	}
	return -1;
}

bool func_283(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 5);
}

void func_284(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

char[] func_285(int iParam0)
{
	if (func_414(iParam0))
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

void func_286(int* iParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_415(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_416(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_417(iParam0->f_6, iParam0->f_5, 0);
			}
			func_418(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_419(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_287(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

void func_288(var uParam0, bool bParam1)
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

void func_289(var uParam0, bool bParam1)
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

void func_290(var uParam0, bool bParam1)
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

int func_291()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = 1;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < sLocal_15.f_215)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(sLocal_15[iVar1]))
		{
		}
		else
		{
			iVar0 = func_421(&(sLocal_15[iVar1]), &(sLocal_274.f_29[iVar1 /*21*/]), 30.0f, &(sLocal_274.f_156), &iVar2, 3.0f, 3, 0, "", (1 << 19) | func_420(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
			if (func_422(&(sLocal_274.f_29[iVar1 /*21*/])))
			{
				if (sLocal_274.f_11 == -1)
				{
					sLocal_274.f_11 = iVar1;
				}
				if (sLocal_274.f_29[iVar1 /*21*/].f_1 == 0)
				{
					if (!func_423(&(sLocal_274.f_156[0 /*17*/]), 0))
					{
						WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
						func_294(&sLocal_274, 0, 0, 1);
						func_424(&(sLocal_274.f_156[0 /*17*/]), 1, 1);
					}
				}
				else if (sLocal_274.f_29[iVar1 /*21*/].f_1 == 1)
				{
					if (!func_423(&(sLocal_274.f_156[1 /*17*/]), 0))
					{
						func_294(&sLocal_274, 0, 0, 1);
						func_424(&(sLocal_274.f_156[1 /*17*/]), 1, 1);
					}
				}
			}
			if (iVar0 != -1)
			{
				iVar3 = iVar0;
				if (iVar3 != -1)
				{
					sLocal_274.f_191 = iVar3;
				}
			}
		}
		iVar1++;
	}
	return iVar3;
}

void func_292(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

bool func_293()
{
	int iVar0;

	if (!func_173(0.0f, 1, sLocal_274.f_12, 1))
	{
		return false;
	}
	if (func_295())
	{
		return false;
	}
	if (func_173(-3.0f, 1, 0, 0))
	{
		return true;
	}
	if (sLocal_15.f_20 < 6.0f || (func_173(-6.0f, 1, 0, 0) && ENTITY::GET_ENTITY_SPEED(Global_35) > 8.0f))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (sLocal_15.f_9[iVar0] < 8.0f)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_294(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		if ((!func_425(&(uParam0->f_156[0 /*17*/]), 4) && !func_425(&(uParam0->f_156[0 /*17*/]), 13)) && !func_425(&(uParam0->f_156[0 /*17*/]), 0))
		{
			func_426(&(uParam0->f_156[0 /*17*/]), 1, 0);
		}
		if (bParam3)
		{
			if ((!func_425(&(uParam0->f_156[1 /*17*/]), 4) && !func_425(&(uParam0->f_156[1 /*17*/]), 13)) && !func_425(&(uParam0->f_156[1 /*17*/]), 0))
			{
				func_426(&(uParam0->f_156[1 /*17*/]), 1, 0);
			}
		}
	}
	else
	{
		if (((!func_425(&(uParam0->f_156[0 /*17*/]), 4) && !func_425(&(uParam0->f_156[0 /*17*/]), 13)) && func_425(&(uParam0->f_156[0 /*17*/]), 0)) || bParam2)
		{
			func_426(&(uParam0->f_156[0 /*17*/]), 0, 0);
		}
		if (bParam3)
		{
			if (((!func_425(&(uParam0->f_156[1 /*17*/]), 4) && !func_425(&(uParam0->f_156[1 /*17*/]), 13)) && func_425(&(uParam0->f_156[1 /*17*/]), 0)) || bParam2)
			{
				func_426(&(uParam0->f_156[1 /*17*/]), 0, 0);
			}
		}
	}
}

bool func_295()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < sLocal_15.f_215)
	{
		if (func_422(&(sLocal_274.f_29[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_296(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 999999.9f;
	iVar3 = -1;
	iVar2 = iParam1;
	while (iVar2 <= iParam2)
	{
		if (func_61((*uParam0)[iVar2], 0, 0))
		{
			fVar1 = uParam0->f_9[iVar2];
			if (fVar1 < fVar0 && (!bParam3 || func_173(0.0f, 1, (*uParam0)[iVar2], 1)))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar3;
}

bool func_297()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

void func_298(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			iVar0 = 0;
			if (!WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, WEAPON::GET_BEST_PED_WEAPON(iParam0, false, false), true, 0, false, false);
			}
			if (WEAPON::_IS_WEAPON_ONE_HANDED(func_280(iParam0, 0)) || WEAPON::_IS_WEAPON_TWO_HANDED(func_280(iParam0, 0)))
			{
				if (bParam4)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam1, iParam2, bParam3, iParam5);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iParam1, iParam2, bParam3, iParam5);
				}
			}
		}
	}
}

int func_299()
{
	return Global_1310750.f_16037;
}

bool func_300(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_301(int iParam0, int iParam1)
{
	if (!func_300(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] & iParam1) != 0;
}

bool func_302(int iParam0)
{
	if (!func_300(iParam0))
	{
		return false;
	}
	if (func_427(64) && func_428(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_303(int iParam0)
{
	if (!func_300(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_304(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_300(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_429(iParam0);
	Global_1310750.f_16037--;
}

void func_305(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

bool func_306(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 & iParam1) != 0;
}

void func_307(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

int func_308(int iParam0, int iParam1)
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

bool func_309(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_430(iParam0);
		return func_431(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_310(int iParam0)
{
}

void func_311(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_312()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_313()
{
	return Global_1572887.f_12;
}

void func_314(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_315(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] -= (uParam0->f_97[iParam1] & iParam2);
}

bool func_316(int iParam0)
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

void func_317(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_432(uParam0);
		func_433(iParam1, uParam2);
	}
	func_434(*uParam0, 1, bParam4);
}

void func_318(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	func_436(func_435(), iParam0);
}

bool func_319(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_437(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_320(int iParam0, bool bParam1)
{
	if (func_61(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_321(float fParam0)
{
	if (func_438(1))
	{
		return true;
	}
	if (func_60(&uLocal_0) && !func_439(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

int func_322()
{
	return Global_1899515;
}

int func_323(int iParam0)
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

int func_324(int iParam0)
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

void func_325(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	func_327(func_440(iParam0) + 1, iParam0);
}

var func_326()
{
	return Global_1393447.f_51;
}

void func_327(int iParam0, int iParam1)
{
	Global_40.f_9632.f_184[iParam1] = iParam0;
}

void func_328()
{
	func_329(Global_40.f_9632.f_196 + 1);
}

void func_329(int iParam0)
{
	Global_40.f_9632.f_196 = iParam0;
}

void func_330(int iParam0)
{
	func_441(iParam0, 0);
	Global_40.f_9632[iParam0 /*4*/]++;
	if (Global_40.f_9632[iParam0 /*4*/] > Global_40.f_9632[iParam0 /*4*/].f_1)
	{
		Global_40.f_9632[iParam0 /*4*/].f_1++;
	}
	func_157(0, 13);
}

void func_331(int iParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_442(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_443(iVar1);
		func_441(iVar1, bVar0);
	}
	iVar1 = func_444(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_443(iVar1);
		func_441(iVar1, bVar0);
	}
	iVar1 = func_445(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_443(iVar1);
		func_441(iVar1, bVar0);
	}
}

void func_332(int iParam0, int iParam1, bool bParam2)
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

bool func_333(int iParam0)
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

void func_334(int iParam0, int iParam1)
{
	if (!func_300(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 -= (Global_1310750[iParam0 /*111*/].f_1 & iParam1);
}

bool func_335(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_336(int iParam0)
{
	if (!func_300(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_337(int iParam0)
{
	if (func_300(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_338(int iParam0)
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

void func_339(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_340(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_340(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_446(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_313() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 += iVar0;
}

void func_341(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_447(uParam0, 1);
	func_448(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_342(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				return PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

bool func_343(int iParam0, int iParam1)
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

void func_344(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false, false))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, iParam2) && !PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, iParam4, iParam2, fParam3, iParam5, 0);
			}
		}
	}
}

bool func_345(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_346(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!PED::IS_PED_ON_MOUNT(iParam0) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(iParam1, false)))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, bParam2);
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_MOUNT_ANIMAL"), true) != 1)
				{
					TASK::TASK_MOUNT_ANIMAL(iParam0, iParam1, iParam4, -1, fParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_347(var uParam0)
{
	return func_215(*uParam0, 2);
}

bool func_348(var uParam0, int iParam1)
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

bool func_349(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT((*uParam0)[iParam1]) || ENTITY::IS_ENTITY_VISIBLE((*uParam0)[iParam1]))
	{
		return true;
	}
	if (!func_130(uParam0, iParam1, 4))
	{
		return true;
	}
	return false;
}

bool func_350(var uParam0, int iParam1)
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

Vector3 func_351(int iParam0, bool bParam1)
{
	Vector3 vVar0;
	var uVar3;

	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (!func_449(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) /*3*/ };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

int func_352(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!PED::DOES_GROUP_EXIST(*uParam0))
	{
		*uParam0 = PED::CREATE_GROUP(iParam1);
		if (PED::DOES_GROUP_EXIST(*uParam0))
		{
			PED::SET_GROUP_FORMATION(*uParam0, iParam2);
			PED::_0xD5BD1B5318A81994(*uParam0, bParam3);
			return 1;
		}
	}
	return 0;
}

void func_353(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!PED::DOES_GROUP_EXIST(*uParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 279 /*PCF_NeverLeavesGroup*/, bParam3);
	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*uParam0, *uParam1, false);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*uParam0, *uParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 280 /*PCF_DontEnterLeadersVehicle*/, bParam4);
		PED::_0xBAD2A311667A50D7(*uParam0, bParam5);
	}
	PED::_0x97C475212B327666(*uParam1, bParam6);
}

void func_354(int iParam0)
{
	Global_1934266.f_78.f_62 = iParam0;
}

void func_355()
{
	Global_1934266.f_78.f_62 = -1;
}

bool func_356(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_357(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_357(int iParam0)
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

void func_358(int iParam0)
{
	iParam0 = func_450(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_451(iParam0, 32);
	func_452();
}

void func_359(int iParam0)
{
	int iVar0;

	iParam0 = func_450(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_360(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_362(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_362(iParam0);
	}
}

int func_360(int iParam0)
{
	iParam0 = func_450(iParam0);
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

bool func_361(int iParam0)
{
	iParam0 = func_450(iParam0);
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

void func_362(int iParam0)
{
	iParam0 = func_450(iParam0);
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

bool func_363(int iParam0, int iParam1)
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

bool func_364(int iParam0, int iParam1)
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

bool func_365(int iParam0)
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
	iVar0 = func_453(func_322());
	if (func_183(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_183(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_183(iParam0, (1 << 12)))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_183(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_183(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_183(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_183(iParam0, (1 << 10)))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_183(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_183(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_183(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_183(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_183(iParam0, (1 << 9)))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_183(iParam0, (1 << 13)))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_183(iParam0, (1 << 11)))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_183(iParam0, (1 << 14)))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_183(iParam0, (1 << 15)))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_183(iParam0, (1 << 16)))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_366(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_454(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

float func_367(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_378(Global_35, iParam0, bParam1, bParam2);
}

Vector3 func_368(Vector3 vParam0, Vector3 vParam3, float fParam6)
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

Vector3 func_369(Vector3 vParam0, Vector3 vParam3, float fParam6)
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

void func_370(Vector3 vParam0, float fParam3, int iParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, fParam3, fParam3, fParam3) /*3*/ };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, -fParam3, -fParam3, -fParam3) /*3*/ };
	vVar6 = { func_368(vVar0, vVar3, 0.0f) /*3*/ };
	vVar9 = { func_369(vVar0, vVar3, 0.0f) /*3*/ };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_371(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_238))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_238);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_238);
	}
}

bool func_372(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

bool func_373(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_374(int iParam0)
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

int func_375(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

float func_376(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_377(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_455(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

float func_378(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_379(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(uParam0, 4);
	}
	else
	{
		func_244(uParam0, 4);
	}
}

void func_380(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), (1 << 17));
	}
	else
	{
		func_245(&(uParam0->f_1), (1 << 17));
	}
}

void func_381(var uParam0, var uParam1)
{
	uParam1->f_23[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2385.582f, 753.5142f, 65.03863f, 0.0f, 0.0f, 110.6636f, 31.5012f, 43.06783f, 20.0f, "volTrigger");
	if (func_132(uParam1, 1))
	{
		uParam1->f_23[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerFront");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2357.021f, 752.1401f, 72.31448f, 0.0f, 0.0f, 78.09357f, 40.41989f, 23.32121f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2357.883f, 733.4832f, 72.31448f, 0.0f, 0.0f, -39.87542f, 30.0f, 20.71047f, 20.0f);
		uParam1->f_23[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerRight");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[2], 2420.593f, 770.0255f, 72.31448f, 0.0f, 0.0f, 71.99955f, 30.0f, 28.3591f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[2], 2419f, 739.1904f, 72.31448f, 0.0f, 0.0f, 63.58382f, 47.68507f, 23.32121f, 40.0f);
	}
	else
	{
		uParam1->f_23[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerRight");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[2], 2392.428f, 780.3892f, 62.54658f, 0.0f, 0.0f, -10.40118f, 54.06552f, 23.32121f, 40.0f);
		uParam1->f_23[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerBack");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[3], 2358.429f, 759.0137f, 62.54658f, 0.0f, 0.0f, -10.40118f, 30.0f, 42.03559f, 40.0f);
		uParam1->f_23[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerFront");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2397.632f, 733.547f, 62.54659f, 0.0f, 0.0f, -14.89182f, 45.97791f, 23.32121f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2423.069f, 751.022f, 62.54658f, 0.0f, 0.0f, -104.3838f, 45.97791f, 23.32121f, 40.0f);
	}
}

void func_382(var uParam0, var uParam1)
{
	uParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0.0f, 0.0f, 0.0f, 130.0f, 130.0f, 40.0f, "volAmbush");
	uParam1->f_23[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2680.415f, 263.6675f, 56.2487f, 0.0f, 0.0f, 161.7157f, 35.0f, 35.0f, 20.0f, "volTrigger");
	if (func_132(uParam1, 1))
	{
		uParam1->f_23[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerFront");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2712.092f, 284.032f, 63.52455f, 0.0f, 0.0f, -136.6854f, 30.0f, 23.32121f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2709.817f, 261.2266f, 67.37834f, 0.0f, 0.0f, 83.789f, 30.0f, 20.71047f, 28.66317f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2713.118f, 236.4223f, 63.52455f, 0.0f, 0.0f, 147.5275f, 30.0f, 28.0f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2658.004f, 237.1599f, 63.52455f, 0.0f, 0.0f, -152.4726f, 40.0f, 25.61574f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2689.178f, 226.3296f, 63.52455f, 0.0f, 0.0f, -179.4726f, 40.0f, 25.61574f, 40.0f);
		uParam1->f_23[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerBack");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[3], 2694.585f, 300.4927f, 63.52455f, 0.0f, 0.0f, 58.05334f, 30.0f, 23.32121f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[3], 2672.154f, 296.4114f, 63.52455f, 0.0f, 0.0f, 21.05335f, 30.0f, 28.3591f, 40.0f);
		uParam1->f_23[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerRight");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[2], 2657.137f, 280.4974f, 63.52455f, 0.0f, 0.0f, -143.1498f, 30.0f, 23.32121f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[2], 2654.615f, 257.7813f, 63.52455f, 0.0f, 0.0f, -109.1498f, 20.64047f, 23.32121f, 40.0f);
	}
	else
	{
		uParam1->f_23[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerFront");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2642.087f, 264.8193f, 63.52455f, 0.0f, 0.0f, 8.526488f, 30.0f, 23.32121f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2656.966f, 282.2505f, 67.37834f, 0.0f, 0.0f, -130.9991f, 30.0f, 20.71047f, 28.66317f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2668.407f, 304.5046f, 63.52455f, 0.0f, 0.0f, -67.2606f, 30.0f, 28.0f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2713.25f, 272.4544f, 63.52455f, 0.0f, 0.0f, -7.260654f, 40.0f, 25.61574f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[4], 2693.826f, 299.1354f, 63.52455f, 0.0f, 0.0f, -34.26065f, 40.0f, 25.61574f, 40.0f);
		uParam1->f_23[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerBack");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[3], 2718.389f, 233.6525f, 63.52455f, 0.0f, 0.0f, -55.62485f, 30.0f, 23.32121f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[3], 2723.658f, 255.8326f, 63.52455f, 0.0f, 0.0f, -92.62482f, 30.0f, 28.3591f, 40.0f);
		uParam1->f_23[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerRight");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[2], 2656.316f, 247.4542f, 63.52455f, 0.0f, 0.0f, -80.60612f, 48.81738f, 23.32121f, 40.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam1->f_23[2], 2682.636f, 234.7335f, 63.52455f, 0.0f, 0.0f, -84.76424f, 20.64047f, 43.45819f, 40.0f);
	}
}

void func_383(var uParam0, var uParam1)
{
	uParam1->f_23[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1902.48f, 492.9257f, 125.2044f, 0.0f, 0.0f, 6.52089f, 45.0f, 45.0f, 28.07018f, "volTrigger");
}

void func_384(var uParam0, var uParam1)
{
	uParam1->f_23[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2832.0f, 929.0f, 48.5f, 0.0f, 0.0f, 6.52089f, 45.0f, 45.0f, 28.07018f, "volTrigger");
}

void func_385(var uParam0, Vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 /*3*/ };
	uParam0->f_3 = fParam4;
}

void func_386(var uParam0, Vector3 vParam1, int iParam4)
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

int func_387(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_456(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_388(int iParam0)
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

int func_389(var uParam0)
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

void func_390(Vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, fParam3, fParam3, fParam3) /*3*/ };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, -fParam3, -fParam3, -fParam3) /*3*/ };
	vVar6 = { func_368(vVar0, vVar3, 0.0f) /*3*/ };
	vVar9 = { func_369(vVar0, vVar3, 0.0f) /*3*/ };
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

void func_391(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_392(int iParam0)
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

struct<4> /*32*/ func_393(int iParam0, int iParam1)
{
	return func_457(iParam0, iParam1);
}

bool func_394(int iParam0)
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

void func_395(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_458(iParam0, iParam1))
		{
			if (func_459(iParam0, iParam1))
			{
				if (func_460(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_461(iParam0);
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

void func_396(int iParam0, int iParam1, bool bParam2)
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

void func_397(int iParam0, bool bParam1)
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

void func_398(int iParam0, int iParam1)
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

bool func_399(int iParam0)
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

int func_400(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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
		sVar0 = { func_462(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_463((398 + iVar28), 1);
			if (func_464(iParam0, &sVar0, iVar5, 0))
			{
				if (func_465(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_466(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_467(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_468(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_469(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_470(iParam0, iParam1);
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

void func_401(int iParam0, int iParam1, float fParam2)
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

bool func_402(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_403(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_404(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_471(iParam2, 1, iVar0);
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
			if (func_472(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_473(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!(iParam2->f_1 & 8) != 0)
			{
				if (func_474(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_473(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_475(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_473(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if ((*iParam2 & 32) != 0)
			{
				if (func_476(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_473(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_89(PLAYER::PLAYER_ID(), 0, 1, (iParam2->f_1 & (1 << 19)) == 0))
		{
			if (!(iParam2->f_1 & (1 << 14)) != 0)
			{
				*uParam3 = (1 << 14);
				func_473(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_477(iParam2, 1065353216))
			{
				if (!(iParam2->f_1 & 4) != 0)
				{
					if (func_478(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_473(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!(iParam2->f_1 & 256) != 0)
				{
					if (func_479(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_473(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(iParam2->f_1 & 16) != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_480(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_473(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_480(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_473(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if ((*iParam2 & 8) != 0)
			{
				if (func_481(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_473(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if ((*iParam2 & (1 << 18)) != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20.0f)
			{
				if (func_482(&iParam0, iParam2))
				{
					*uParam3 = (1 << 12);
					func_473(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(iParam2->f_1 & 2) != 0)
			{
				if (func_483(iParam2, 4000))
				{
					if ((func_484(iParam0, Global_1935630.f_41, (*iParam2 & 128) != 0, 0, (*iParam2 & 256) != 0) & func_485(iParam2, iParam0)) && func_486(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_473(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(iParam2->f_1 & 2) != 0)
		{
			if (iParam2->f_12 < 4.0f)
			{
				if ((func_484(iParam0, Global_1935630.f_41, (*iParam2 & 128) != 0, 1, (*iParam2 & 256) != 0) & func_485(iParam2, iParam0)) && func_486(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_473(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if ((*iParam2 & (1 << 17)) == 0)
						{
							if (func_487(iParam0, Global_1935630.f_41))
							{
								func_488();
								*uParam3 = 2;
								func_473(iParam0, iParam2, *uParam3);
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
						if (func_487(iParam0, Global_1935630.f_41))
						{
							func_488();
							*uParam3 = 2;
							func_473(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10.0f)
			{
				if (func_489(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_181() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_488();
						*uParam3 = 2;
						func_473(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if ((*iParam2 & (1 << 17)) == 0)
				{
					if (func_490())
					{
						if (func_487(iParam0, Global_1935630.f_42))
						{
							func_488();
							*uParam3 = 2;
							func_473(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!(iParam2->f_1 & (1 << 10)) != 0)
		{
			if (func_491(iParam2, iParam0))
			{
				*uParam3 = (1 << 10);
				func_473(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!(iParam2->f_1 & (1 << 11)) != 0)
			{
				if (func_492(iParam0, iParam1, iParam2))
				{
					*uParam3 = (1 << 11);
					func_473(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if ((*iParam2 & 16) != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_493(iParam0, iParam2))
					{
						*uParam3 = (1 << 13);
						func_473(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if ((*iParam2 & 64) != 0)
			{
				if (func_494(iParam0, iParam2))
				{
					*uParam3 = (1 << 15);
					func_473(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12.0f)
		{
			if ((*iParam2 & (1 << 20)) != 0)
			{
				if (func_495(iParam2, 4000))
				{
					if (func_496(&iParam0, iParam2))
					{
						*uParam3 = (1 << 9);
						func_473(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if ((*iParam2 & (1 << 10)) != 0)
			{
				if (func_497(iParam0, iParam2))
				{
					*uParam3 = (1 << 16);
					iParam2->f_4 = 0;
					func_473(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(iParam2->f_1 & 1) != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_498(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_473(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_405(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_406(var uParam0)
{
	if ((Global_1935630.f_26 || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, (1 << 14)) > 0) || func_89(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

void func_407(var uParam0, int iParam1)
{
}

bool func_408(var uParam0)
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

bool func_409(var uParam0)
{
	if (func_499(50))
	{
		if (func_500(uParam0->f_209, 1, 8, 0))
		{
			return true;
		}
	}
	if (func_501())
	{
		return true;
	}
	if (Global_1430231.f_4)
	{
		func_502(21);
		return true;
	}
	if (func_183(Global_1392581.f_3, 4) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		func_502(22);
		return true;
	}
	return false;
}

bool func_410(var uParam0)
{
	if (!func_30(uParam0, (1 << 18)))
	{
		if (uParam0->f_20 < 60.0f)
		{
			if (func_503(uParam0, 60.0f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_411(var uParam0)
{
	if (!func_30(uParam0, (1 << 19)))
	{
		if (uParam0->f_20 < 60.0f)
		{
			if (func_504(uParam0, 60.0f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_412(var uParam0)
{
	if (!func_56(uParam0->f_151))
	{
		if (uParam0->f_20 < 60.0f)
		{
			if (func_505(uParam0->f_151, uParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_413(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		func_471(iParam1, 0, iVar0);
	}
	if (fParam3 > 0.0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(iParam1->f_1 & 2) != 0)
			{
				if (func_483(iParam1, 4000))
				{
					if ((func_484(iParam0, Global_1935630.f_41, (*iParam1 & 128) != 0, 0, (*iParam1 & 256) != 0) & func_485(iParam1, iParam0)) && func_486(iParam1, iParam0))
					{
						func_488();
						*uParam2 = 2;
						func_473(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!(iParam1->f_1 & 2) != 0)
		{
			if (iParam1->f_12 < 4.0f)
			{
				if (func_483(iParam1, 4000))
				{
					if ((func_484(iParam0, Global_1935630.f_41, (*iParam1 & 128) != 0, 1, (*iParam1 & 256) != 0) & func_485(iParam1, iParam0)) && func_486(iParam1, iParam0))
					{
						func_488();
						*uParam2 = 2;
						func_473(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if ((*iParam1 & (1 << 17)) == 0)
						{
							if (func_487(iParam0, Global_1935630.f_41))
							{
								func_488();
								*uParam2 = 2;
								func_473(iParam0, iParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if ((*iParam1 & (1 << 17)) == 0)
					{
						if (func_487(iParam0, Global_1935630.f_41))
						{
							func_488();
							*uParam2 = 2;
							func_473(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if ((*iParam1 & (1 << 17)) == 0)
				{
					if (func_490())
					{
						if (func_487(iParam0, Global_1935630.f_42))
						{
							func_488();
							*uParam2 = 2;
							func_473(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_477(iParam1, 1065353216))
			{
				if (!(iParam1->f_1 & 4) != 0)
				{
					if (func_478(Global_35, iParam0, iParam1))
					{
						func_488();
						*uParam2 = 4;
						func_473(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!(iParam1->f_1 & 256) != 0)
				{
					if (func_479(Global_35, iParam0, iParam1))
					{
						func_488();
						*uParam2 = 256;
						func_473(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!(iParam1->f_1 & (1 << 17)) != 0)
		{
			if (func_506(iParam0, iParam1))
			{
				func_488();
				*uParam2 = (1 << 17);
				func_473(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if ((*iParam1 & 4) != 0)
		{
			if (func_507(iParam0, iParam1))
			{
				func_488();
				*uParam2 = (1 << 18);
				func_473(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_414(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

bool func_415(int iParam0)
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

void func_416(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_415(iParam0))
	{
		return;
	}
	iVar0 = func_508(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_417(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_415(iParam0))
	{
		return;
	}
	iVar0 = func_508(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_418(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_415(iParam0))
	{
		return;
	}
	iVar0 = func_508(iParam0);
	if (bParam1)
	{
		func_509(iParam0, 4);
		func_510(iVar0, 1);
		func_511(iVar0, 1);
	}
	else
	{
		func_512(iParam0, 4);
		func_511(iVar0, 0);
	}
}

void func_419(int* iParam0, char* sParam1)
{
	if (func_415(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_417(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_513(iParam0, 1);
}

int func_420(int iParam0, int iParam1, int iParam2)
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

int func_421(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_514(&iVar0);
	if (func_183(iVar0, 16) && !bParam15)
	{
		iParam9 |= (1 << 23);
	}
	iVar1 = func_515(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_183(iVar0, (1 << 27)))
	{
		func_516(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_517(558))
				{
					func_518(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_422(var uParam0)
{
	return uParam0->f_2 == 2;
}

bool func_423(var uParam0, bool bParam1)
{
	if (!bParam1 || func_415(uParam0->f_6))
	{
		return func_425(uParam0, 13);
	}
	return false;
}

void func_424(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_425(iParam0, 13))
		{
			if (bParam2)
			{
				func_426(iParam0, 0, 0);
			}
			func_519(iParam0, 13);
		}
	}
	else if (func_425(iParam0, 13))
	{
		func_513(iParam0, 13);
	}
}

bool func_425(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_426(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_425(iParam0, 13))
	{
		func_519(iParam0, 0);
	}
	else
	{
		func_513(iParam0, 0);
	}
	if (func_415(iParam0->f_6))
	{
		if (bParam2)
		{
			func_520(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_427(int iParam0)
{
	return (Global_1310750.f_16035 & iParam0) != 0;
}

bool func_428(int iParam0)
{
	return func_301(iParam0, Global_1310750.f_16072 | 64);
}

void func_429(int iParam0)
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

int func_430(int iParam0)
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

bool func_431(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<13> /*104*/ sVar0;
	int iVar23;

	sVar0.f_1 = 10;
	sVar0.f_12 = 10;
	sVar0.f_0 = 1;
	sVar0.f_1[0] = iParam1;
	sVar0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &sVar0, iParam3, iVar23, 2, false);
}

void func_432(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	}
}

void func_433(int* iParam0, var uParam1)
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
	func_521(iParam0, uParam1, 1);
	func_522(uParam1, 0, 1, 1, 0);
	MISC::COPY_SCRIPT_STRUCT(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

void func_434(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330 /*PCF_0x7C7AF264*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
}

int func_435()
{
	return Global_1934266.f_4;
}

void func_436(int iParam0, int iParam1)
{
	if (!func_523(iParam0))
	{
		return;
	}
	func_525(iParam0, (func_524(iParam0) + iParam1));
}

int func_437(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
				if (func_367(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_378(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_189(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_526(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_528(func_527(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_438(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

bool func_439(var uParam0, float fParam1)
{
	if (func_47(uParam0, fParam1))
	{
		func_193(uParam0);
		return true;
	}
	return false;
}

int func_440(int iParam0)
{
	return Global_40.f_9632.f_184[iParam0];
}

void func_441(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;
	int iVar4;

	sVar2 = { func_154(joaat("TOTAL_PLAYING_TIME")) /*2*/ };
	if (STATS::STAT_ID_GET_INT(&sVar2, &iVar0))
	{
		iVar1 = STATS::_STAT_CALCULATE_COOLDOWN(iVar0);
		Global_40.f_9632[iParam0 /*4*/].f_3 = iVar1;
		if (bParam1)
		{
			iVar4 = func_529(iParam0, 0);
			iVar4 = BUILTIN::FLOOR((0.666f * (float)iVar4));
			Global_40.f_9632[iParam0 /*4*/].f_3 += iVar4;
		}
		else
		{
			Global_40.f_9632[iParam0 /*4*/].f_3 += func_529(iParam0, 0);
		}
	}
}

int func_442(int iParam0)
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

int func_443(int iParam0)
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

int func_444(int iParam0)
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

int func_445(int iParam0)
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

int func_446(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

void func_447(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_448(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_449(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_450(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_451(int iParam0, int iParam1)
{
	iParam0 = func_450(iParam0);
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

void func_452()
{
	if (func_530(0))
	{
		func_531(0);
	}
	if (func_530(1))
	{
		func_531(1);
	}
	if (func_530(5))
	{
		func_531(5);
	}
	if (func_530(6))
	{
		func_532(6);
	}
}

int func_453(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

bool func_454(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_533(iParam0, iParam1, 0.0f))
		{
			return false;
		}
	}
	if (!func_534(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

bool func_455(int iParam0, bool bParam1)
{
	switch (func_535(iParam0))
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

int func_456(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
		if (func_536(vParam0))
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
	func_537(iVar0, bParam8);
	return iVar0;
}

struct<4> /*32*/ func_457(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_538(iParam0, iParam1) /*3*/ };
	sVar0.f_3 = func_539(iParam0, iParam1);
	return sVar0;
}

bool func_458(int iParam0, int iParam1)
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

bool func_459(int iParam0, int iParam1)
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

bool func_460(int iParam0, int iParam1)
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
	if (!func_458(iParam0, iVar0))
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

void func_461(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<5> /*40*/ func_462(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_540(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_541(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_466(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_542(bParam1) /*4*/ };
			if (bParam2 && func_543(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_464(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_464(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_465(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_544(bParam1) /*4*/ };
			switch (func_545(iParam0))
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
			if (func_546(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_466(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_546(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_466(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_547(sVar0, &sVar27, bParam1, 0))
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

int func_463(int iParam0, int iParam1)
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

bool func_464(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_548(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_465(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_549(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_466(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_550(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_551(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_467(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_552(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_547(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_468(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_551(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_468(bool bParam0)
{
	if (func_313() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_551(bParam0));
}

int func_469(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_553(iParam0))
	{
		return 0;
	}
	if (!func_468(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_470(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_403(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_471(int iParam0, bool bParam1, int iParam2)
{
	func_554(iParam2);
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
		iParam0->f_13 = func_555(0);
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
						if (func_556(1))
						{
							func_245(iParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_556(1) || (*iParam0 & (1 << 13)) != 0))
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
			if (func_557(iParam0))
			{
				iParam0->f_15 = func_181();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_181() - iParam0->f_15) > 500)
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
	func_558(iParam0);
}

bool func_472(int iParam0, int iParam1)
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
			if (!func_559(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_560(iParam0, iVar2) <= func_561(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_473(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		iParam1->f_10 = iParam0;
	}
	if (func_562(iParam2, 1, 1, 1, 0))
	{
		func_245(iParam1, (1 << 11));
	}
	iParam1->f_16 = iParam2;
	func_563(iParam1, 1);
	func_564();
}

bool func_474(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_565(iParam0, !(*iParam1 & (1 << 28)) != 0, !(*iParam1 & (1 << 29)) != 0, !(*iParam1 & (1 << 30)) != 0, 0, 0))
		{
			if (iParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (iParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_566(iParam1);
			if (func_567(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_568(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_563(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_563(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_475(int iParam0, int iParam1, int iParam2)
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
	if (func_569(iParam1, !(*iParam2 & (1 << 28)) != 0, !(*iParam2 & (1 << 29)) != 0, !(*iParam2 & (1 << 30)) != 0, 0))
	{
		if (iParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (iParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_566(iParam2);
		if (func_567(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_568(iParam2)
				{
					func_563(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_476(int iParam0, int iParam1)
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
	if (func_559(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_568(iParam1)
		{
			fVar3 = func_566(iParam1);
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

bool func_477(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_181();
	iVar1 = (iVar0 - iParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_478(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_570(iParam2);
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
			if (func_486(iParam2, iParam1))
			{
				func_563(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_479(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < (float)func_571(iParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_486(iParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_563(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_480(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_572(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_563(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_563(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_573(iParam1, vVar0, vVar4))
					{
						func_563(iParam2, 1);
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
					func_563(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_573(iParam1, vVar0, vVar7))
					{
						func_563(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_481(int iParam0, int iParam1)
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
		if (!func_559(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_574(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_575(Global_1935630.f_34[iVar0]))
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
			if (func_576(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_577(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_578(iParam1, iParam0, fVar1, iVar0))
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

bool func_482(int iParam0, int iParam1)
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

bool func_483(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_181();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_484(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_579(iVar0, &iVar2))
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
	if (func_580(iVar0, iParam0))
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

int func_485(int iParam0, int iParam1)
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

bool func_486(int iParam0, int iParam1)
{
	if (func_581(iParam0))
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

bool func_487(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_378(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_488()
{
}

bool func_489(int iParam0, int iParam1)
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
		if (func_582(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_181();
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
						if (func_190(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_181();
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

bool func_490()
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
	if ((func_181() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_491(int iParam0, int iParam1)
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
	fVar0 = func_561(iParam0);
	if (iParam0->f_12 > func_235(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_583(iParam1);
	iVar1 = func_584(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_492(int iParam0, int iParam1, int iParam2)
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
	return func_585(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_493(int iParam0, int iParam1)
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
		if (func_586(iParam0, iParam1, 1))
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
					if (!func_587(iParam1, iParam0))
					{
						if (func_190(iVar4, Global_36, 1) < 7.0f)
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

bool func_494(int iParam0, int iParam1)
{
	if (!func_588(0))
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

bool func_495(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_181();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_496(int iParam0, int iParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_497(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_181();
	}
	else if (func_181() - iParam1->f_4) > func_589(iParam1)
	{
		return func_590(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_498(int iParam0, int iParam1)
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

bool func_499(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

bool func_500(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
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

bool func_501()
{
	return Global_1310750.f_16077 != 0;
}

void func_502(int iParam0)
{
	Global_1393447.f_1 = iParam0;
}

int func_503(var uParam0, float fParam1, int iParam2)
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
	return func_591(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584, bVar6, iParam2);
}

bool func_504(var uParam0, float fParam1, int iParam2)
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
		iVar18 = func_592(&uVar0, &uVar6, 5, iParam2);
	}
	else
	{
		iVar18 = func_593(&uVar0, &uVar6, 5, uParam0->f_209, fParam1);
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
					if (func_372(vVar21, vVar24, 5.0f, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(iVar27, uParam0->f_209, 40.0f))
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

bool func_505(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;

	vVar2 = { func_595(func_594()) /*3*/ };
	fVar5 = 120.0f;
	fVar5 *= fVar5;
	if (func_376(Global_36, vVar2) < 40000.0f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_596(iVar0))
		{
			fVar6 = func_597(iVar0);
			if (fVar6 <= 10000.0f && fVar6 > 0.0f)
			{
				iVar1 = func_598(iVar0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					return false;
				}
				if (func_376(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), vVar2) > fVar5)
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

bool func_506(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_599(iParam1);
	if (iParam1->f_12 > (fVar0 + 5.0f))
	{
		return false;
	}
	if (!PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (iParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1.0f;
		fVar2 = func_600(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5.0f));
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, fVar2, -1.0f, fVar1) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_35, true, false) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44) || WEAPON::_IS_WEAPON_TORCH(Global_1935630.f_44))
			{
				if (iParam1->f_12 <= 5.0f)
				{
					if (func_601())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110.0f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_507(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (func_602(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::GET_PED_CROUCH_MOVEMENT(Global_35) || PED::IS_PED_IN_COVER(Global_35, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || (*iParam1 & (1 << 21)) != 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, bVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4.0f)
	{
		if ((*iParam1 & (1 << 9)) != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return false;
			}
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35) || ((PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1.0f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8.0f) && (*iParam1 & (1 << 21)) != 0))
			{
				return false;
			}
		}
		if (PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1.0f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8.0f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

int func_508(int iParam0)
{
	return iParam0;
}

void func_509(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_510(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_603(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_511(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_512(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_513(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_514(int iParam0)
{
	if ((*iParam0 & 1) != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

int func_515(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_514(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = (iParam8 & 32) != false;
		bVar4 = (iParam8 & (1 << 19)) != false;
		bVar5 = (iParam8 & (1 << 24)) != false;
		bVar6 = (iParam8 & (1 << 24)) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_604(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_189(&(iParam1->f_13));
		}
		if (func_605(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_606(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_515(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_432(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!(iParam8 & (1 << 25)) != 0)
				{
					if ((iParam8 & 18) != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317 /*PCF_0x8E385F10*/, true))
						{
							func_607(*uParam0, 1, 1);
						}
					}
					else if (func_608(iParam1, 22))
					{
						func_607(*uParam0, 0, 1);
					}
				}
				if (func_609(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_610(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_611(iParam8);
					if (func_612(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_613(uParam3);
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
					func_614(iParam1, uParam3, fVar8);
					if (func_615(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_522(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_616(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_609(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_617(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_612(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_610(uParam0, func_609(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_611(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_522(uParam3, 0, 0, 1, 1);
					}
					func_618(iParam1, 1);
				}
				func_614(iParam1, uParam3, fVar8);
				if (func_616(uParam0, iParam1, fParam4, bVar6))
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
			func_433(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_516(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_619(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_319(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
}

bool func_517(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_313() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_518(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_620(iParam0, &iVar0, &iVar1);
	if (!func_621(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_622(iVar0, iVar1);
}

void func_519(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_520(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_415(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_508(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_623(iVar0);
	*uParam0 = 0;
}

void func_521(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_520(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_624(iParam0, 0);
		}
	}
}

void func_522(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_415((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_520(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

bool func_523(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_524(int iParam0)
{
	if (!func_523(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42196[iParam0 /*12*/];
}

void func_525(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_523(iParam0))
	{
		return;
	}
	iVar0 = func_625();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	PLAYER::_SET_MAX_WANTED_LEVEL_2(iVar0);
	if (iParam0 == func_435())
	{
		LAW::SET_BOUNTY(PLAYER::PLAYER_ID(), iParam1);
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_358[iParam0 /*12*/] != iParam1)
		{
			func_626(iParam0, iParam1);
			func_627(iParam0);
		}
		Global_40.f_358[iParam0 /*12*/] = iParam1;
		if (!func_628(iParam0, 4))
		{
			if (Global_40.f_358[iParam0 /*12*/] >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
			{
				func_629(iParam0, 1);
			}
		}
		else if (Global_40.f_358[iParam0 /*12*/] == 0)
		{
			func_629(iParam0, 0);
		}
		return;
	}
	Global_1058888.f_42196[iParam0 /*12*/] = iParam1;
}

bool func_526(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_527(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_630(iParam0, &sVar0);
}

int func_528(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_529(int iParam0, int iParam1)
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

bool func_530(int iParam0)
{
	iParam0 = func_450(iParam0);
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

void func_531(int iParam0)
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
	iVar0 = func_631(iParam0);
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
	if (func_632(iParam0, 64))
	{
		func_532(iParam0);
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
	bVar3 = func_633(42);
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
				func_634(&(Global_1900383[iParam0 /*45*/].f_27));
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
		func_532(iParam0);
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
		if (func_635(1) < 1)
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
		func_636(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_632(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_637(iParam0);
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
	fVar15 = func_638(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_639(iParam0))
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
		func_640(Global_1900383[iParam0 /*45*/].f_26);
		func_641(Global_1900383[iParam0 /*45*/].f_26);
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
	if (func_642(iVar0) && !bVar9)
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
	iVar21 = func_635(iParam0);
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

void func_532(int iParam0)
{
	iParam0 = func_450(iParam0);
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

bool func_533(int iParam0, int iParam1, float fParam2)
{
	return func_643(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_534(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_535(int iParam0)
{
	if (!func_223(iParam0))
	{
		return -1;
	}
	return func_644(iParam0);
}

bool func_536(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_537(int iParam0, bool bParam1)
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

Vector3 func_538(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 2369.928f, 757.0357f, 67.2649f };
				case 1:
					return { 2370.165f, 758.3299f, 67.308f };
				case 2:
					return { 2375.083f, 759.2758f, 66.8034f };
				case 3:
					return { 2397.251f, 763.3879f, 66.6845f };
				case 4:
					return { 2397.765f, 763.8259f, 66.6966f };
				case 5:
					return { 2393.983f, 765.5385f, 66.6767f };
				case 6:
					return { 2393.852f, 768.0544f, 66.7339f };
				case 7:
					return { 2403.259f, 743.9879f, 66.7947f };
				case 8:
					return { 2402.329f, 741.1142f, 66.958f };
				case 9:
					return { 2404.546f, 741.1633f, 66.9511f };
				case 10:
					return { 2409.24f, 748.9672f, 66.2236f };
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return { 2397.019f, 745.6677f, 66.6095f };
				case 1:
					return { 2396.587f, 744.6501f, 66.7136f };
				case 2:
					return { 2389.109f, 745.8279f, 66.6357f };
				case 3:
					return { 2400.764f, 762.27f, 66.7257f };
				case 4:
					return { 2400.708f, 764.7914f, 66.7618f };
				case 5:
					return { 2397.911f, 761.4358f, 66.6748f };
				case 6:
					return { 2396.781f, 766.0192f, 66.7211f };
				case 7:
					return { 2376.958f, 759.9379f, 66.7807f };
				case 8:
					return { 2375.923f, 757.3842f, 66.7678f };
				case 9:
					return { 2374.642f, 758.8971f, 66.8089f };
				case 10:
					return { 2371.867f, 748.658f, 66.5638f };
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return { 2692.514f, 259.3546f, 62.3008f };
				case 1:
					return { 2693.142f, 260.2778f, 62.1626f };
				case 2:
					return { 2692.691f, 263.5097f, 62.1103f };
				case 3:
					return { 2673.616f, 260.8877f, 61.9202f };
				case 4:
					return { 2671.848f, 262.332f, 61.7556f };
				case 5:
					return { 2673.8f, 258.9753f, 61.9806f };
				case 6:
					return { 2670.609f, 260.2868f, 61.451f };
				case 7:
					return { 2687.739f, 273.2338f, 62.3194f };
				case 8:
					return { 2688.746f, 272.4108f, 62.1973f };
				case 9:
					return { 2687.853f, 274.4897f, 62.179f };
				case 10:
					return { 2674.216f, 273.037f, 62.1675f };
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return { 2682.603f, 274.4812f, 62.7197f };
				case 1:
					return { 2683.197f, 275.078f, 62.7434f };
				case 2:
					return { 2685.87f, 271.9468f, 62.6456f };
				case 3:
					return { 2676.826f, 256.9313f, 61.9504f };
				case 4:
					return { 2675.138f, 254.4285f, 61.4814f };
				case 5:
					return { 2678.05f, 256.3213f, 61.9208f };
				case 6:
					return { 2677.675f, 251.7332f, 61.3418f };
				case 7:
					return { 2693.472f, 257.1711f, 62.1423f };
				case 8:
					return { 2692.656f, 256.2555f, 62.1204f };
				case 9:
					return { 2694.116f, 256.0409f, 61.9018f };
				case 10:
					return { 2688.042f, 247.8629f, 61.0244f };
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return { 1916.401f, 485.8901f, 127.8697f };
				case 1:
					return { 1917.287f, 485.1801f, 128.096f };
				case 2:
					return { 1913.485f, 482.4696f, 127.6431f };
				case 3:
					return { 1893.994f, 503.2104f, 119.9455f };
				case 4:
					return { 1893.396f, 505.6639f, 119.0073f };
				case 5:
					return { 1897.616f, 503.8867f, 120.8635f };
				case 6:
					return { 1897.964f, 506.6101f, 120.0401f };
				case 7:
					return { 1891.992f, 483.0951f, 121.1584f };
				case 8:
					return { 1890.925f, 484.8473f, 120.9117f };
				case 9:
					return { 1890.01f, 483.5833f, 121.1382f };
				case 10:
					return { 1888.439f, 492.0716f, 119.437f };
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return { 1916.401f, 485.8901f, 127.8697f };
				case 1:
					return { 1917.287f, 485.1801f, 128.096f };
				case 2:
					return { 1913.485f, 482.4696f, 127.6431f };
				case 3:
					return { 1893.994f, 503.2104f, 119.9455f };
				case 4:
					return { 1893.396f, 505.6639f, 119.0073f };
				case 5:
					return { 1897.616f, 503.8867f, 120.8635f };
				case 6:
					return { 1897.964f, 506.6101f, 120.0401f };
				case 7:
					return { 1891.992f, 483.0951f, 121.1584f };
				case 8:
					return { 1890.925f, 484.8473f, 120.9117f };
				case 9:
					return { 1890.01f, 483.5833f, 121.1382f };
				case 10:
					return { 1888.439f, 492.0716f, 119.437f };
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return { 2842.352f, 920.4471f, 47.8883f };
				case 1:
					return { 2843.196f, 920.2707f, 47.9676f };
				case 2:
					return { 2842.528f, 924.3561f, 47.9212f };
				case 3:
					return { 2815.993f, 936.8803f, 50.1384f };
				case 4:
					return { 2814.479f, 935.0585f, 50.5334f };
				case 5:
					return { 2816.948f, 937.9165f, 49.8702f };
				case 6:
					return { 2813.2f, 940.3521f, 50.9439f };
				case 7:
					return { 2836.064f, 938.1392f, 47.6678f };
				case 8:
					return { 2837.216f, 937.3101f, 47.6154f };
				case 9:
					return { 2836.937f, 939.361f, 47.6088f };
				case 10:
					return { 2829.503f, 941.255f, 47.977f };
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return { 2842.352f, 920.4471f, 47.8883f };
				case 1:
					return { 2843.196f, 920.2707f, 47.9676f };
				case 2:
					return { 2842.528f, 924.3561f, 47.9212f };
				case 3:
					return { 2815.993f, 936.8803f, 50.1384f };
				case 4:
					return { 2814.479f, 935.0585f, 50.5334f };
				case 5:
					return { 2816.948f, 937.9165f, 49.8702f };
				case 6:
					return { 2813.2f, 940.3521f, 50.9439f };
				case 7:
					return { 2836.064f, 938.1392f, 47.6678f };
				case 8:
					return { 2837.216f, 937.3101f, 47.6154f };
				case 9:
					return { 2836.937f, 939.361f, 47.6088f };
				case 10:
					return { 2829.503f, 941.255f, 47.977f };
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_539(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 148.2356f;
				case 1:
					return 248.2356f;
				case 2:
					return 209.6233f;
				case 3:
					return 109.6233f;
				case 4:
					return 197.5509f;
				case 5:
					return 137.6233f;
				case 6:
					return 223.5509f;
				case 7:
					return 79.6233f;
				case 8:
					return 359.6233f;
				case 9:
					return 337.6233f;
				case 10:
					return 289.2583f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 300.2356f;
				case 1:
					return 34.2357f;
				case 2:
					return 1.6233f;
				case 3:
					return 167.6234f;
				case 4:
					return 99.551f;
				case 5:
					return -142.3766f;
				case 6:
					return 97.5509f;
				case 7:
					return 231.5509f;
				case 8:
					return -114.3767f;
				case 9:
					return -212.4491f;
				case 10:
					return 109.2583f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -209.7644f;
				case 1:
					return -299.7644f;
				case 2:
					return 95.6233f;
				case 3:
					return -84.3767f;
				case 4:
					return -16.4491f;
				case 5:
					return -68.3767f;
				case 6:
					return 21.5509f;
				case 7:
					return -160.3767f;
				case 8:
					return 161.6233f;
				case 9:
					return 73.6233f;
				case 10:
					return 81.2583f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 92.2356f;
				case 1:
					return 184.2356f;
				case 2:
					return 133.6233f;
				case 3:
					return -28.3767f;
				case 4:
					return -166.4491f;
				case 5:
					return -14.3767f;
				case 6:
					return 239.5509f;
				case 7:
					return -300.3767f;
				case 8:
					return 57.6233f;
				case 9:
					return 149.6233f;
				case 10:
					return 137.2583f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -335.7644f;
				case 1:
					return -235.7644f;
				case 2:
					return 27.6233f;
				case 3:
					return -150.3767f;
				case 4:
					return -652.4491f;
				case 5:
					return -292.3767f;
				case 6:
					return -316.4491f;
				case 7:
					return -46.3767f;
				case 8:
					return -90.3767f;
				case 9:
					return -340.3767f;
				case 10:
					return 21.2583f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -335.7644f;
				case 1:
					return -235.7644f;
				case 2:
					return 27.6233f;
				case 3:
					return -150.3767f;
				case 4:
					return -292.4491f;
				case 5:
					return -176.3767f;
				case 6:
					return -316.4491f;
				case 7:
					return -46.3767f;
				case 8:
					return -90.3767f;
				case 9:
					return -340.3767f;
				case 10:
					return 21.2583f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -263.7644f;
				case 1:
					return -349.7644f;
				case 2:
					return 67.6233f;
				case 3:
					return -128.3767f;
				case 4:
					return -160.4491f;
				case 5:
					return -104.3767f;
				case 6:
					return -168.4491f;
				case 7:
					return -190.3767f;
				case 8:
					return -210.3767f;
				case 9:
					return -306.3767f;
				case 10:
					return 71.2583f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -263.7644f;
				case 1:
					return -349.7644f;
				case 2:
					return 67.6233f;
				case 3:
					return -128.3767f;
				case 4:
					return -160.4491f;
				case 5:
					return -104.3767f;
				case 6:
					return -168.4491f;
				case 7:
					return -190.3767f;
				case 8:
					return -210.3767f;
				case 9:
					return -306.3767f;
				case 10:
					return 71.2583f;
			}
			break;
	}
	return 0.0f;
}

struct<4> /*32*/ func_540(bool bParam0)
{
	return func_466(joaat("CHARACTER"), func_645(), joaat("SLOTID_NONE"), bParam0);
}

int func_541(int iParam0)
{
	Vector3 vVar0;

	if (!func_550(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> /*32*/ func_542(bool bParam0)
{
	int iVar0;

	iVar0 = func_551(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_466(joaat("CARRIED_WEAPONS"), func_540(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_466(joaat("CARRIED_WEAPONS"), func_540(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_466(joaat("CARRIED_WEAPONS"), func_540(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_543(int iParam0, bool bParam1)
{
	if (func_545(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_633(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_544(bool bParam0)
{
	int iVar0;

	iVar0 = func_551(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_466(joaat("EMOTE_ITEM"), func_540(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_466(joaat("EMOTE_ITEM"), func_540(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

int func_545(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_550(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_546(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_545(iParam0);
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

bool func_547(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_551(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_548(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_550(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_466(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_551(bParam6), &sVar0, false);
	return iVar4;
}

bool func_549(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_551(0);
	*uParam1 = { func_466(iParam0, func_542(0), iParam3, 0) /*4*/ };
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

bool func_550(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_551(bool bParam0)
{
	if (func_313() == -1)
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

bool func_552(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_553(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_554(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_22 & 4) != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_646();
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
			func_647(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_555(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_556(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_648(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_557(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_313() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_649(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_649(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_584(iVar0) == -1)
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

void func_558(int iParam0)
{
	if ((*iParam0 & 8) != 0 || (*iParam0 & 16) != 0)
	{
		func_650(iParam0);
	}
}

bool func_559(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_584(iParam2);
	}
	else
	{
		iVar1 = func_583(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_584(iParam0);
	}
	else
	{
		iVar0 = func_583(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_183(*iParam1, (1 << 23)))
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

float func_560(int iParam0, int iParam1)
{
	return func_378(iParam0, iParam1, 1, 1);
}

float func_561(int iParam0)
{
	return iParam0->f_26;
}

bool func_562(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_563(int iParam0, bool bParam1)
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

void func_564()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_565(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_378(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_280(iVar0, 0)))
		{
			if (func_651(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_566(int iParam0)
{
	return iParam0->f_17;
}

bool func_567(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_183(*iParam0, (1 << 22)))
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

int func_568(int iParam0)
{
	return iParam0->f_18;
}

bool func_569(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_280(iVar0, 0)))
		{
			if (func_652(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_570(int iParam0)
{
	return iParam0->f_23;
}

int func_571(int iParam0)
{
	return iParam0->f_21;
}

int func_572(int iParam0)
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

bool func_573(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_643(iParam0, vParam4, 0.5f))
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

int func_574(int iParam0)
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
	if (func_653(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_575(int iParam0)
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

bool func_576(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_602(iParam1))
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

bool func_577(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_602(iParam1))
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

bool func_578(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_602(iParam1))
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

bool func_579(int iParam0, int iParam1)
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

bool func_580(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_654(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_581(int iParam0)
{
	return !(*iParam0 & 2) != 0;
}

bool func_582(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_190(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_583(int iParam0)
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

int func_584(int iParam0)
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

int func_585(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_579(Global_35, &iVar1))
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
		fVar2 = func_378(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_378(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_586(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_648(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_587(iParam1, iVar0))
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
				if (!bParam2 || !func_587(iParam1, iVar1))
				{
					if (func_190(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_587(int iParam0, int iParam1)
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

bool func_588(int iParam0)
{
	if (func_655())
	{
		return false;
	}
	return func_455(Global_1347702[58 /*49*/].f_15, 1);
}

int func_589(int iParam0)
{
	return iParam0->f_20;
}

int func_590(int iParam0, int iParam1, bool bParam2, float fParam3)
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

int func_591(int iParam0, Vector3 vParam1, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)
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
		iVar12 = func_656(&iVar0, iParam0, iParam9, iVar0);
	}
	else
	{
		iVar12 = func_657(&iVar0, iParam0, iVar0, vParam1, iParam4);
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
					if (func_372(vVar6, vVar9, iParam7, 0))
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

int func_592(var uParam0, int iParam1, int iParam2, int iParam3)
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
				if (func_658(iVar2))
				{
					if (!func_364(iVar2, iParam1))
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

int func_593(var uParam0, int iParam1, int iParam2, Vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	iVar1 = func_592(uParam0, iParam1, iParam2, iVar0);
	func_659(iVar0);
	return iVar1;
}

int func_594()
{
	return Global_40.f_4283;
}

Vector3 func_595(int iParam0)
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
			return func_660();
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_596(int iParam0)
{
	if (func_661(iParam0))
	{
		if (func_216(Global_1360165[iParam0 /*1157*/], 0))
		{
			return true;
		}
	}
	return false;
}

float func_597(int iParam0)
{
	if (!func_662(iParam0))
	{
		return 0.0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

int func_598(int iParam0)
{
	if (func_661(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

float func_599(int iParam0)
{
	if (!(*iParam0 & 1) != 0)
	{
		return func_235(iParam0);
	}
	if (GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE() > 0.833f)
	{
		return func_663(iParam0);
	}
	return func_235(iParam0);
}

float func_600(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_601()
{
	int iVar0;
	int iVar1;

	iVar0 = func_453(func_322());
	iVar1 = func_664(func_322());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_602(int iParam0)
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

bool func_603(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

float func_604(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_605(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_665(iParam0, iParam1))
		{
			if (!func_183(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, true);
				func_522(uParam2, 0, 0, 1, 0);
				func_245(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_183(iParam1->f_10, 1))
		{
			func_666(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			func_244(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_606(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_183(iParam4, 32);
		func_521(iParam1, uParam2, 0);
		iVar5 = func_667(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			return true;
		}
		func_522(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_183(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_183(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_183(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_183(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_183(iParam4, (1 << 23)) || func_183(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_183(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_183(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_608(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_608(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_183(iParam4, (1 << 26)))
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
				iParam6 = func_668(uParam0);
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
			if (func_183(iParam4, (1 << 28)))
			{
				iVar8 = func_669(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_670(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_608(iParam1, 23))
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
			if (func_183(iParam4, 2) || func_183(iParam4, 16))
			{
				func_607(*uParam0, 1, 1);
			}
			else
			{
				func_607(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_607(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
	}
}

bool func_608(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_609(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_671(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_610(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_672(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_183(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_611(int iParam0)
{
	if (func_183(iParam0, 4))
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
	if (func_183(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_183(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_612(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_673(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = (iParam10 & 128) != false;
	bVar7 = (iParam10 & 64) != false;
	bVar8 = (iParam10 & (1 << 9)) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_674(Global_35)) || func_675(Global_35)) || func_676(Global_35));
	fVar12 = -1.0f;
	if (func_60(&(iParam1->f_13)))
	{
		fVar12 = func_195(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_415((uParam4[iVar0 /*17*/])->f_6);
		func_677(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_678(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_679(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_522(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_680(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_521(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_681(iParam1, fParam6, iParam1->f_9))
					{
						func_189(&(iParam1->f_18));
						if (bVar6)
						{
							func_680(uParam4, 0, 0);
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
		func_682(iParam1, fParam2);
	}
	return bVar5;
}

void func_613(var uParam0)
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

void func_614(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_683(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_682(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_615(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_684(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_685(iParam1, 0);
				func_521(iParam1, uParam2, func_608(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_616(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_189(&(iParam1->f_18));
			return false;
		}
		else if (func_60(&(iParam1->f_18)))
		{
			func_193(&(iParam1->f_18));
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
	return func_439(&(iParam1->f_18), fParam2);
	return true;
}

void func_617(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_677(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_618(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_619(int* iParam0)
{
	if (func_608(iParam0, 0))
	{
		if (func_686(iParam0))
		{
			func_618(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_620(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_621(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_687(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_688(iParam0))
	{
		return false;
	}
	if (func_689(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_690(iParam0, 1)) || func_691((1 << 15)))
	{
		if (!func_690(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_692())
	{
		return false;
	}
	return true;
}

void func_622(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_623(int iParam0)
{
	if (!func_693(iParam0))
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

void func_624(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_193(&(iParam0->f_18));
}

int func_625()
{
	int iVar0;

	if (func_313() == 0)
	{
		return -1;
	}
	iVar0 = func_694();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !func_377(24))
	{
		return 50000;
	}
	return 150000;
}

void func_626(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYAMBARINO"), iParam1);
			break;
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYNEWHANOVER"), iParam1);
			break;
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYLEMOYNE"), iParam1);
			break;
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYWESTELIZABETH"), iParam1);
			break;
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYNEWAUSTIN"), iParam1);
			break;
		default:
			break;
	}
}

void func_627(int iParam0)
{
	int iVar0;

	iVar0 = func_695(iParam0);
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELAMBARINO"), iVar0);
			break;
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELNEWHANOVER"), iVar0);
			break;
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELLEMOYNE"), iVar0);
			break;
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELWESTELIZABETH"), iVar0);
			break;
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELNEWAUSTIN"), iVar0);
			break;
		default:
			break;
	}
}

bool func_628(int iParam0, int iParam1)
{
	if (!func_523(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 & iParam1) != 0;
	}
	return (Global_1058888.f_42196[iParam0 /*12*/].f_5 & iParam1) != 0;
}

void func_629(int iParam0, bool bParam1)
{
	if (!func_523(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_696(iParam0, 4);
	}
	else
	{
		func_697(iParam0, 4);
	}
	func_698(iParam0, bParam1);
}

bool func_630(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

int func_631(int iParam0)
{
	iParam0 = func_450(iParam0);
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

bool func_632(int iParam0, int iParam1)
{
	iParam0 = func_450(iParam0);
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

bool func_633(int iParam0)
{
	if (!func_699(iParam0))
	{
		return false;
	}
	return func_700(iParam0);
}

void func_634(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_702(func_701(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_703())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_655();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_635(int iParam0)
{
	iParam0 = func_450(iParam0);
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

void func_636(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_702(func_701(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_703())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_655())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_637(int iParam0)
{
	iParam0 = func_450(iParam0);
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

float func_638(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_639(int iParam0)
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

	iParam0 = func_450(iParam0);
	if (iParam0 == -1)
	{
		return -1.0f;
	}
	if (iParam0 >= 7)
	{
		return -1.0f;
	}
	iVar0 = func_704(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1.0f;
	}
	iVar1 = func_635(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_635(iParam0) + 1;
	fVar6 = func_705(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_706(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_640(int iParam0)
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

void func_641(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
}

bool func_642(int iParam0)
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

bool func_643(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

int func_644(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_707(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

struct<4> /*32*/ func_645()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_646()
{
	if (func_708())
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

void func_647(var uParam0, var uParam1)
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

bool func_648(bool bParam0, int iParam1, int iParam2)
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

int func_649(int iParam0)
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

void func_650(int iParam0)
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

bool func_651(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_652(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_652(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_653(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_654(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_655()
{
	if (func_313() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_656(int iParam0, int iParam1, int iParam2, int iParam3)
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
			if (!func_709(iVar3, iParam1))
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

int func_657(int iParam0, int iParam1, int iParam2, Vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	iVar1 = func_656(iParam0, iParam1, iVar0, iParam2);
	func_659(iVar0);
	return iVar1;
}

bool func_658(int iParam0)
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

void func_659(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

Vector3 func_660()
{
	if (func_377(70))
	{
		return { -1634.252f, -1358.577f, 83.9077f };
	}
	if (func_377(73))
	{
		return { -1665.419f, -1346.258f, 84.11175f };
	}
	return { -1641.1f, -1359.979f, 83.4932f };
}

bool func_661(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_662(int iParam0)
{
	return iParam0 > -1;
}

var func_663(int iParam0)
{
	return iParam0->f_25;
}

int func_664(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

bool func_665(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_710((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_666(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_683(uParam0[iVar0 /*17*/]))
		{
			func_519(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_667(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_711(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_415((uParam2[iVar0 /*17*/])->f_6))
		{
			func_519(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_668(var uParam0)
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

int func_669(var uParam0, int iParam1)
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

void func_670(int* iParam0, int* iParam1)
{
	if (!func_608(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_519(iParam1, 19);
			func_685(iParam0, 23);
			func_712(iParam1, 2);
		}
	}
}

bool func_671(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_713(16))
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
					func_714(16);
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

void func_672(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_711(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_673(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_674(int iParam0)
{
	return func_715(iParam0, 4) | func_715(iParam0, 5);
}

int func_675(int iParam0)
{
	return func_715(iParam0, 7);
}

int func_676(int iParam0)
{
	return func_715(iParam0, 6);
}

void func_677(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_683(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_711(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_678(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_716(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_717(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_418(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_418(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_718(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_679(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_719(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_720(iParam1, 1))
	{
		func_721(iParam1, 1);
		return true;
	}
	return false;
}

void func_680(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_426(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_681(int* iParam0, float fParam1, bool bParam2)
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

void func_682(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203 /*PRF_0x010BCD70*/, true);
	}
}

bool func_683(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_684(int iParam0)
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

void func_685(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_686(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_687(int iParam0, int iParam1)
{
	if (func_313() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_688(int iParam0)
{
	if (func_313() != -1)
	{
		if (func_690(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_690(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_689(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_690(iParam0, (1 << 16)) && !func_690(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_690(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_690(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_690(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_691(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_692()
{
	return Global_1905944.f_5694;
}

bool func_693(int iParam0)
{
	return func_603(iParam0, 2);
}

int func_694()
{
	if (!func_455(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_455(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_455(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_455(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_455(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_455(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_455(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_695(int iParam0)
{
	if (!func_523(iParam0))
	{
		return 0;
	}
	if ((Global_40.f_358[iParam0 /*12*/].f_5 & 2) != 0)
	{
		return 5;
	}
	if (Global_40.f_358[iParam0 /*12*/] > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
	{
		return func_722(Global_40.f_358[iParam0 /*12*/]);
	}
	return 0;
}

void func_696(int iParam0, int iParam1)
{
	if (!func_523(iParam0))
	{
		return;
	}
	if (!func_628(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 |= iParam1;
		return;
	}
	Global_1058888.f_42196[iParam0 /*12*/].f_5 |= iParam1;
}

void func_697(int iParam0, int iParam1)
{
	if (!func_523(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 -= (Global_40.f_358[iParam0 /*12*/].f_5 & iParam1);
		return;
	}
	Global_1058888.f_42196[iParam0 /*12*/].f_5 -= (Global_1058888.f_42196[iParam0 /*12*/].f_5 & iParam1);
}

void func_698(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(func_723(iParam0), joaat("BLIP_STYLE_WANTED_REGION"));
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_723(iParam0), joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_723(iParam0), joaat("BLIP_STYLE_WANTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(func_723(iParam0));
	}
}

bool func_699(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_700(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

char* func_701(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_724(37, iParam0))
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
	if (func_724(37, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_702(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_725(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_703()
{
	if (func_313() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_704(int iParam0)
{
	iParam0 = func_450(iParam0);
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

float func_705(int iParam0)
{
	iParam0 = func_450(iParam0);
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

float func_706(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_707(int iParam0)
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

bool func_708()
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

bool func_709(int iParam0, int iParam1)
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

int func_710(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_711(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_415(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_520(&(iParam1->f_6), 0, 1);
	}
	if (!func_415(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_683(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_726(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_415(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_718(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_727(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_728(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_416(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_727(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_418(iParam1->f_6, 0, 1);
				}
				else
				{
					func_418(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_712(int* iParam0, int iParam1)
{
	if (!func_425(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_519(iParam0, 14);
		}
	}
}

bool func_713(int iParam0)
{
	return (Global_22 & iParam0) != 0;
}

void func_714(int iParam0)
{
	Global_22 |= iParam0;
}

int func_715(int iParam0, int iParam1)
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

bool func_716(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_717(int iParam0, bool bParam1)
{
	if (bParam1 && !func_415(iParam0))
	{
		return false;
	}
	return !func_603(iParam0, 4);
}

void func_718(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_415(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_508(iParam0);
	func_727(iParam0, 18, 0, 1);
	func_727(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_719(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_415(iParam0))
	{
		return false;
	}
	iVar0 = func_508(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_720(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_415(iParam0))
	{
		return false;
	}
	iVar0 = func_508(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_721(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_415(iParam0))
	{
		return;
	}
	iVar0 = func_508(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

int func_722(int iParam0)
{
	int iVar0;

	iVar0 = 5;
	while (iVar0 >= 1)
	{
		if (iParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(iVar0))
		{
			return iVar0;
		}
		iVar0 += -1;
	}
	return 0;
}

int func_723(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	strcpy_s(&cVar0, 64, func_729(iParam0));
	sVar8 = func_730(cVar0);
	return MISC::GET_HASH_KEY(sVar8);
}

bool func_724(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_731(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_732())
	{
		return func_731(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_731(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_725(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_726(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_603(iVar0, 2))
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
				func_733(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_727(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_415(iParam0))
	{
		return;
	}
	iVar0 = func_508(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_728(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_415(iParam0))
	{
		return;
	}
	iVar0 = func_508(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

char* func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO_BOUNTY";
		case 1:
			return "LBS_NEW_HANOVER_BOUNTY";
		case 2:
			return "LBS_LEMOYNE_BOUNTY";
		case 3:
			return "LBS_W_ELIZABETH_BOUNTY";
		case 4:
			return "LBS_NEW_AUSTIN_BOUNTY";
		case 5:
			return "LBS_GUARMA_BOUNTY";
		default:
			break;
	}
	return "LBS_INVALID_BOUNTY";
}

char* func_730(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_731(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_732()
{
	return Global_1109000.f_245;
}

void func_733(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
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
	func_510(iParam0, 1);
	func_511(iParam0, 1);
	func_512(iParam0, 128);
}

