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
	struct<223> /*1784*/ sLocal_15 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1067450368, 1071644672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<76> /*608*/ sLocal_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 2, 0, 0, 2 } ;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	bool bLocal_352 = false;
	struct<9> /*72*/ sScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#pragma endregion

void __EntryFunction__()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_352 = true;
	}
	while (true)
	{
		func_2(bLocal_352, 964, 0);
		if (bLocal_352)
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
	if (sLocal_15.f_95 <= 9 && sLocal_15.f_96 & (1 << 21) == 0)
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
	else if (Global_1393447.f_2 & 2 != 0)
	{
		func_19(&Global_1393447, 2);
		return false;
	}
	if (sLocal_15.f_96 & 16 != 0)
	{
		return true;
	}
	if (sLocal_15.f_95 < 10 && sLocal_15.f_96 & (1 << 20) == 0)
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
	float fVar5;
	int iVar6;
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
	fVar5 = func_109(iVar0);
	iVar6 = func_93(iVar0);
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
				sLocal_15.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				sLocal_15.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
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
		PED::SET_PED_CONFIG_FLAG(sLocal_15.f_40[iVar0], 277, true);
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
			PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar0], 277, false);
			PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar0], 6, true);
			PED::SET_PED_CONFIG_FLAG(sLocal_15[iVar0], 233, true);
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
	return uParam0->f_2 & iParam1 != 0;
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_2 -= uParam0->f_2 & iParam1;
}

bool func_20()
{
	int iVar0;

	iVar0 = sLocal_274.f_60;
	if (iVar0 > 4)
	{
		return true;
	}
	if (func_61(sLocal_15[iVar0], 0, 0))
	{
		if (iVar0 == 1)
		{
			if (func_125(&sLocal_274))
			{
				PED::DELETE_PED(&(sLocal_15[iVar0]));
				PED::DELETE_PED(&(sLocal_15.f_40[iVar0]));
				sLocal_274.f_60++;
				return false;
			}
		}
		func_127(sLocal_15[iVar0], func_126(&sLocal_274, iVar0), 1);
		if (func_128(sLocal_15.f_40[iVar0], 0))
		{
			PED::SET_PED_ONTO_MOUNT(sLocal_15[iVar0], sLocal_15.f_40[iVar0], -1, true);
		}
		switch (iVar0)
		{
			case 0:
				sLocal_274.f_57 = PED::GET_PED_ACCURACY(sLocal_15[iVar0]);
				func_129(sLocal_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608, 1065353216, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(sLocal_15[0], func_130(&sLocal_274, 0), 1.5f, 20000, 0.25f, 0, func_131(&sLocal_274, 0));
				break;
			case 1:
				func_129(sLocal_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608, 1065353216, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(sLocal_15[1], func_130(&sLocal_274, 1), 1.5f, 20000, 0.25f, 0, func_131(&sLocal_274, 1));
				break;
			case 2:
			case 4:
				func_129(sLocal_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608, 1065353216, 1);
				break;
			default:
				func_129(sLocal_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608, 1065353216, 1);
				break;
		}
		func_132(&sLocal_15, iVar0);
		func_133(iVar0, 75);
		func_134(iVar0, 75);
	}
	sLocal_274.f_60++;
	return false;
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
			if (!func_135(&sLocal_15, iVar0, 4))
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
			if (!func_136(&sLocal_15, iVar0, 4))
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

void func_22(int iParam0, int iParam1)
{
	iParam0->f_96 |= iParam1;
}

bool func_23()
{
	if (!func_137(&sLocal_274, 2))
	{
		if (func_138())
		{
			func_139();
			func_140();
			func_141(&sLocal_274, 3);
		}
	}
	switch (sLocal_274.f_4)
	{
		case 0:
			if (func_142())
			{
				if (func_143())
				{
					func_144(sLocal_15.f_151, 1);
					func_141(&sLocal_274, 3);
				}
			}
			else if (func_145())
			{
				if (func_146())
				{
					func_22(&sLocal_15, 16);
					func_4(&sLocal_15, 13);
				}
			}
			else if (func_147())
			{
				func_139();
				if (!func_148(&sLocal_274, 4))
				{
					func_149(sLocal_15[0]);
					func_150(&sLocal_274, 4);
				}
				func_25(&sLocal_15, 1);
				func_32(&sLocal_15, 1);
				func_151();
				func_141(&sLocal_274, 1);
			}
			break;
		case 1:
			func_139();
			if (func_152())
			{
				func_141(&sLocal_274, 3);
			}
			break;
		case 2:
			func_153();
			func_141(&sLocal_274, 3);
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
		func_154(-1, 0, 0, 0, 0);
		func_155();
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
			func_156();
			func_157();
		}
		if (func_56(iParam0->f_151))
		{
			func_34(30, 0, 1);
		}
		else
		{
			func_159(func_158(joaat("GANG_AMBUSH_ENCOUNTERED")), 1);
			func_33(iParam0, 0);
		}
		MISC::_0x1096603B519C905F(func_62(iParam0->f_151));
		func_160(iParam0);
		func_161(0, 13);
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
	while (iVar1 < sLocal_15.f_216)
	{
		if (func_61(sLocal_15.f_40[iVar1], 0, 0))
		{
			iVar0 = PED::_GET_RIDER_OF_MOUNT(sLocal_15.f_40[iVar1], false);
			if (func_61(iVar0, 0, 0))
			{
				PED::SET_PED_OWNS_ANIMAL(iVar0, sLocal_15.f_40[iVar1], false);
				func_162(&sLocal_15, iVar1, 32);
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
			func_163(0);
			func_22(iParam0, (1 << 25));
		}
	}
	else if (func_30(iParam0, (1 << 25)))
	{
		func_163(1);
		func_45(iParam0, (1 << 25));
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
		func_164(&sLocal_15);
	}
	func_38();
	if (!func_30(&sLocal_15, (1 << 23)))
	{
		if (!func_30(&sLocal_15, (1 << 22)))
		{
			if (sLocal_15.f_181 == 2)
			{
				func_165(&sLocal_15, 1.1f);
			}
			else
			{
				func_165(&sLocal_15, 1.2f);
			}
			func_22(&sLocal_15, (1 << 22));
		}
		if (func_30(&sLocal_15, (1 << 22)))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (sLocal_15.f_225 - 60) || (float)iVar0 < ((float)sLocal_15.f_225 * 0.7f)) || iVar0 < 80)
			{
				func_165(&sLocal_15, 1.0f);
				func_22(&sLocal_15, (1 << 23));
			}
		}
	}
}

bool func_30(int iParam0, int iParam1)
{
	return iParam0->f_96 & iParam1 != 0;
}

bool func_31()
{
	int iVar0;

	sLocal_274.f_56 = func_166(&sLocal_15);
	func_167();
	func_168();
	iVar0 = 0;
	while (iVar0 < sLocal_15.f_215)
	{
		func_169(&sLocal_15, iVar0, sLocal_15.f_40[iVar0]);
		iVar0++;
	}
	switch (sLocal_274.f_5)
	{
		case 0:
			func_40(&(sLocal_274.f_10[0 /*3*/]), 0);
			func_170(&sLocal_274, 1);
			break;
		case 1:
			if (sLocal_274.f_56 > 1)
			{
				if (func_171())
				{
					func_170(&sLocal_274, 2);
				}
			}
			else
			{
				func_170(&sLocal_274, 2);
			}
			break;
		case 2:
			if (func_172(&sLocal_15, &(sLocal_274.f_54), &(sLocal_274.f_10[3 /*3*/]), "COMBAT_FLEE", 1092616192))
			{
				func_173();
				func_170(&sLocal_274, 3);
			}
			else
			{
				func_174();
			}
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
			func_175(iParam0->f_181, bParam1);
		}
		func_176(iParam0->f_151, bParam1);
	}
}

void func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(1);
		func_45(iParam0, (1 << 13));
	}
	else
	{
		func_178(1);
		func_22(iParam0, (1 << 13));
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
	func_156();
	func_157();
	func_180((BUILTIN::TO_FLOAT(200) / 3.0f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_181() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 -= Global_1392135.f_1 & 4;
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
			PED::SET_PED_CONFIG_FLAG(uParam0->f_40[iVar0], 273, false);
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
					COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(func_187(iParam0->f_181));
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
	while (iVar0 < sLocal_15.f_216)
	{
		if (!func_136(&sLocal_15, iVar0, 16))
		{
			if (func_61(sLocal_15.f_40[iVar0], 0, 0))
			{
				if (func_188(iVar0))
				{
					TASK::TASK_FLEE_COORD(sLocal_15.f_40[iVar0], sLocal_15.f_209, 4, 0, -1.0f, -1, 0);
					PED::SET_PED_KEEP_TASK(sLocal_15.f_40[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_15.f_40[iVar0], false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(sLocal_15.f_40[iVar0]));
					func_162(&sLocal_15, iVar0, 16);
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

void func_45(int iParam0, int iParam1)
{
	if (func_30(iParam0, iParam1))
	{
	}
	iParam0->f_96 -= iParam0->f_96 & iParam1;
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
	if (func_194(uParam0) > fParam1)
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
	func_173();
	if (!func_18(&Global_1393447, (1 << 16)))
	{
		if (func_61(sLocal_15[0], 0, 0))
		{
			func_195(&sLocal_15, 0, 2);
			TASK::TASK_FLEE_COORD(sLocal_15[0], sLocal_15.f_209, 4, 16768, -1.0f, -1, 0);
			PED::SET_PED_KEEP_TASK(sLocal_15[0], true);
		}
		if (func_61(sLocal_15[1], 0, 0))
		{
			func_195(&sLocal_15, 1, 2);
			TASK::TASK_FLEE_COORD(sLocal_15[1], sLocal_15.f_209, 4, 16768, -1.0f, -1, 0);
			PED::SET_PED_KEEP_TASK(sLocal_15[1], true);
		}
	}
}

void func_50(int iParam0, bool bParam1)
{
	if (!func_30(iParam0, 256))
	{
		if (func_30(iParam0, 32) || bParam1)
		{
			if (func_61(iParam0->f_56, 0, 1))
			{
				func_196(iParam0->f_56, 0);
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
	while (iVar0 < sLocal_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15[iVar0]))
		{
			if (func_197(iVar0))
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
						func_198(&(sLocal_15[iVar0]));
					}
					func_122(sLocal_15[iVar0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(sLocal_15[iVar0], 5, true);
					PED::_SET_PED_INTERACTION_PERSONALITY(sLocal_15[iVar0], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(sLocal_15[iVar0], 993130593);
					if (func_199(sLocal_15[iVar0]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(sLocal_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(sLocal_15[iVar0], false, 0, false);
					if ((PED::IS_PED_IN_COMBAT(sLocal_15[iVar0], Global_35) || PED::IS_PED_FLEEING(sLocal_15[iVar0])) || func_135(&sLocal_15, iVar0, 256))
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
						func_200(sLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
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
								func_200(sLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
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
							func_200(sLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(sLocal_15[iVar0], true);
						}
						else
						{
							if (func_201(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::TASK_FLEE_PED(0, Global_35, 3, iVar1, -1.0f, -1, 0);
								func_200(sLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
								PED::_SET_REMOVE_PED_NETWORKED(sLocal_15[iVar0], 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(0, Global_35, 1.0f, 128, 0);
								func_200(sLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(sLocal_15[iVar0], true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(sLocal_15[iVar0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(sLocal_15[iVar0]), -1) == sLocal_15[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(sLocal_15[iVar0]));
				}
				else if ((!PED::IS_PED_FLEEING(sLocal_15[iVar0]) && !PED::IS_PED_IN_COMBAT(sLocal_15[iVar0], Global_35)) && !func_135(&sLocal_15, iVar0, 128))
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
			if (func_202(iVar0, &iVar2))
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
					if (func_203(iVar0))
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
			if (func_204(iVar0))
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
			if (func_205(&sLocal_15, sLocal_15.f_52[iVar0]))
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

void func_52(int iParam0)
{
	if (!func_30(iParam0, 128))
	{
		return;
	}
	switch (iParam0->f_181)
	{
		case 0:
			func_206(joaat("G_M_M_UNIDUSTER_01"));
			func_206(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			func_206(joaat("G_M_O_UNIEXCONFEDS_01"));
			func_206(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			func_206(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			func_206(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			func_206(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			func_206(joaat("G_M_M_UNIBANDITOS_01"));
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

	fVar0 = func_207(iParam0->f_151);
	func_208(iParam0, fVar0);
}

void func_55(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	func_209(vVar0, 0);
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
			if (Global_40.f_9632[iParam0 /*4*/] >= func_210(iParam0))
			{
				return true;
			}
			sVar2 = { func_158(joaat("TOTAL_PLAYING_TIME")) /*2*/ };
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
	if (func_211(iParam0))
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
	return func_212(*uParam0, 1);
}

bool func_61(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_128(iParam0, iParam1);
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
	if (func_213(iVar0))
	{
		return false;
	}
	if (func_214(iVar0, 1) || func_214(iVar0, 2))
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
		if (func_215())
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
		iVar0 = func_216(Global_1898164.f_1[0 /*5*/]);
		if (func_217(iVar0) && func_218(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_219(Global_1898164.f_1[0 /*5*/]))
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

bool func_67(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
		{
			if (func_135(iParam0, iVar0, 8))
			{
				if (func_220((*iParam0)[iVar0], Global_36, 1) < (70.0f * 70.0f) || func_221((*iParam0)[iVar0], 70.0f, -1082130432, -1082130432, -1082130432))
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
	iVar0 = func_222();
	switch (iVar0)
	{
		case 105:
			if (func_223() && func_224())
			{
				return true;
			}
			break;
		case 95:
			if (func_223() && func_224())
			{
				return true;
			}
			break;
	}
	if (func_224())
	{
		if (sLocal_15.f_151 != 43)
		{
			if (func_225())
			{
				if (func_226(iVar0))
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
	if (!func_47(&(sLocal_274.f_10[0 /*3*/]), 25.0f))
	{
		return 250.0f;
	}
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
			if (!func_135(&sLocal_15, iVar0, 8))
			{
				if (func_221(sLocal_15[iVar0], 200.0f, -1082130432, sLocal_15.f_9[iVar0], -1082130432))
				{
					func_195(&sLocal_15, iVar0, 8);
				}
			}
		}
	}
	else if (sLocal_15.f_19 < (sLocal_15.f_215 + sLocal_15.f_216))
	{
		iVar0 = (sLocal_15.f_19 - sLocal_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_40[iVar0]))
		{
			if (!func_136(&sLocal_15, iVar0, 8))
			{
				if (func_221(sLocal_15.f_40[iVar0], 200.0f, -1082130432, -1082130432, -1082130432))
				{
					func_162(&sLocal_15, iVar0, 8);
				}
			}
		}
	}
	else if (sLocal_15.f_19 < ((sLocal_15.f_215 + sLocal_15.f_216) + sLocal_15.f_217))
	{
		iVar0 = ((sLocal_15.f_19 - sLocal_15.f_215) - sLocal_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_49[iVar0]))
		{
			if (!func_227(&sLocal_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(sLocal_15.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(sLocal_15.f_49[iVar0]))
				{
					if (func_228(sLocal_15.f_49[iVar0], 200.0f, -1082130432))
					{
						func_229(&sLocal_15, iVar0, 8);
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

void func_76(int iParam0)
{
	func_231(iParam0, (func_230(iParam0) - 6.0f));
	func_232(iParam0, 1);
}

void func_77(int iParam0)
{
	func_233(iParam0, 0);
	func_234(iParam0, 0);
	func_78(iParam0, 1);
	func_235(iParam0, 1);
	func_236(iParam0, 0);
	func_237(iParam0, 1);
	func_238(iParam0, 1, 1, 1);
}

void func_78(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(&(uParam0->f_1), 256);
	}
	else
	{
		func_240(&(uParam0->f_1), 256);
	}
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(&(uParam0->f_1), 4);
	}
	else
	{
		func_240(&(uParam0->f_1), 4);
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
	switch (sLocal_15.f_151)
	{
		case 37:
			func_241(&sLocal_274);
			func_242(&sLocal_274);
			break;
		case 10:
			func_241(&sLocal_274);
			if (func_243(0) || func_30(&sLocal_15, 2))
			{
				func_242(&sLocal_274);
			}
			break;
	}
	switch (sLocal_15.f_221)
	{
		case 0:
			sLocal_274.f_0 = 0;
			break;
		case 1:
			sLocal_274.f_0 = 1;
			break;
		case 2:
			sLocal_274.f_0 = 2;
			break;
		case 3:
			sLocal_274.f_0 = 3;
			break;
		default:
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(sLocal_15.f_151, 0, sLocal_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(sLocal_15.f_151, 1, sLocal_15.f_221), true))
	{
		func_244(&sLocal_274, 1);
	}
	sLocal_15.f_215 = 5;
	sLocal_15.f_217 = 0;
	sLocal_15.f_218 = 0;
	if (!func_125(&sLocal_274))
	{
		sLocal_15.f_216 = 5;
	}
	else
	{
		sLocal_15.f_216 = 5;
	}
	if (func_245(&sLocal_274))
	{
		sLocal_15.f_181 = -1;
	}
	else
	{
		sLocal_15.f_181 = 0;
	}
	sLocal_274.f_58 = sLocal_15.f_222;
	func_22(&sLocal_15, (1 << 17));
	func_246(&sLocal_15, 2, 1);
	func_247();
	func_248();
	func_249(&(sLocal_274.f_72[0]), func_130(&sLocal_274, 0), 1.5f);
	func_250(&(sLocal_274.f_72[1]), func_130(&sLocal_274, 0), 1.5f, 0, 0);
	func_250(&(sLocal_274.f_75[0]), func_130(&sLocal_274, 1), 1.5f, 0, 0);
	func_249(&(sLocal_274.f_75[1]), func_130(&sLocal_274, 1), 1.5f);
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	var uVar3;

	func_251(iParam0, iParam1, &vVar0, &uVar3, iParam2);
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

	if (!func_252(iParam0, 1))
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
		iVar0 = func_253(iParam0);
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
		return func_254(bParam1, bParam2, bParam3);
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

	fVar0 = func_207(uParam0->f_151);
	func_255(uParam0, fVar0);
}

void func_91(var uParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_238))
	{
		uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0.0f, 0.0f, 0.0f, 80.0f, 80.0f, 40.0f, "volAvoidance");
	}
	func_256(uParam0->f_238, iParam1, (1 << 18), 1, 0);
}

int func_92(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			if (sLocal_15.f_57[iVar0] == 0)
			{
				sLocal_15.f_57[iVar0] = joaat("A_C_HORSE_THOROUGHBRED_BRINDLE");
			}
			break;
		case 1:
			if (sLocal_15.f_57[iVar0] == 0)
			{
				sLocal_15.f_57[iVar0] = joaat("A_C_HORSE_AMERICANPAINT_OVERO");
			}
			break;
	}
	if (sLocal_15.f_57[iVar0] == 0)
	{
		sLocal_15.f_57[iVar0] = func_257(sLocal_15.f_181, 0, 1);
	}
	return sLocal_15.f_57[iVar0];
}

int func_93(int iParam0)
{
	if (sLocal_15.f_75[iParam0] == 0)
	{
		if (sLocal_15.f_181 != -1 && sLocal_15.f_181 != 1)
		{
			sLocal_15.f_75[iParam0] = func_258(sLocal_15.f_181, iParam0, 0);
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

	switch (sLocal_274.f_3)
	{
		case 0:
			func_259();
			func_260(&sLocal_15, &sLocal_274);
			sLocal_274.f_3 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!func_261())
			{
				iVar0 = 0;
			}
			if (!func_262(&sLocal_15, &sLocal_274))
			{
				iVar0 = 0;
			}
			return iVar0;
	}
	return false;
}

int func_96(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_263(iVar0);
}

int func_97(int iParam0)
{
	return func_264(&sLocal_274, iParam0);
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

	if (func_265(*uParam0, 0.0f, 0.0f, 0.0f))
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

	iVar0 = iParam0;
	return func_266(&sLocal_274, iVar0);
}

var func_109(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_267(&sLocal_274, iVar0);
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
	*iParam4 = PED::GET_PED_BONE_INDEX(sLocal_15.f_40[iParam0], 62111);
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

	iVar0 = iParam0;
	return func_270(&sLocal_274, iVar0);
}

float func_117(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_271(&sLocal_274, iVar0);
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
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
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

bool func_125(int iParam0)
{
	return iParam0->f_61;
}

char* func_126(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_272(iParam0, iParam1);
	return func_273(iVar0);
}

void func_127(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_61(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_128(int iParam0, int iParam1)
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
	if (func_274(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_274(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_274(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_274(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_274(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_274(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_274(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_274(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
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

	bVar0 = func_275(iParam3, 1);
	bVar1 = func_275(iParam3, 2);
	bVar2 = !func_275(iParam3, 4);
	bVar3 = func_275(iParam3, 8);
	bVar4 = !func_275(iParam3, 16);
	bVar5 = func_275(iParam3, 32);
	bVar6 = func_275(iParam3, 64);
	return func_276(iParam0, iParam1, bVar0, bVar1, bParam4, bVar2, bVar3, fParam5, fParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

Vector3 func_130(int iParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { func_277(iParam0, iParam1) /*4*/ };
	return vVar0;
}

var func_131(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_277(iParam0, iParam1) /*4*/ };
	return sVar0.f_3;
}

void func_132(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
		case 3:
		case 4:
			PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 2);
			break;
		default:
			PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 1);
			break;
	}
	PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iParam1], 2);
}

void func_133(int iParam0, int iParam1)
{
	PED::SET_PED_ACCURACY(sLocal_15[iParam0], iParam1);
}

void func_134(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE((iParam1 - 10), iParam1 + 10);
	PED::SET_PED_SHOOT_RATE(sLocal_15[iParam0], iVar0);
}

bool func_135(int iParam0, int iParam1, int iParam2)
{
	return iParam0->f_97[iParam1] & iParam2 != 0;
}

bool func_136(int iParam0, int iParam1, int iParam2)
{
	return iParam0->f_106[iParam1] & iParam2 != 0;
}

bool func_137(int iParam0, int iParam1)
{
	return iParam0->f_1 & iParam1 != 0;
}

bool func_138()
{
	if (sLocal_274.f_55 > 1 || sLocal_274.f_55 < 0)
	{
		sLocal_274.f_55 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_15.f_40[sLocal_274.f_55]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(sLocal_15.f_40[sLocal_274.f_55], Global_35, true, true))
		{
			return true;
		}
	}
	if (func_278(&sLocal_15, &(sLocal_15.f_152), &(sLocal_15.f_180), &(sLocal_274.f_55), 0, 4, 1))
	{
		return true;
	}
	return false;
}

void func_139()
{
	if (!func_61(sLocal_15.f_56, 0, 0))
	{
		sLocal_15.f_56 = func_279(&sLocal_15, 0);
		if (func_61(sLocal_15.f_56, 0, 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(sLocal_15.f_56, false, joaat("REL_GANG_ODRISCOLL"));
		}
	}
}

void func_140()
{
	bool bVar0;
	int iVar1;

	func_280();
	func_244(&sLocal_274, 2);
	if (func_61(sLocal_15[0], 0, 0))
	{
		TASK::TASK_COMBAT_PED(sLocal_15[0], Global_35, 0, 0);
		bVar0 = true;
	}
	if (func_61(sLocal_15[1], 0, 0))
	{
		TASK::TASK_COMBAT_PED(sLocal_15[1], Global_35, 0, 0);
		bVar0 = true;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (func_61(sLocal_15[iVar1], 0, 0))
		{
			if (!bVar0)
			{
			}
		}
		iVar1++;
	}
	func_281();
}

void func_141(int iParam0, int iParam1)
{
	iParam0->f_4 = iParam1;
}

bool func_142()
{
	if (VOLUME::DOES_VOLUME_EXIST(sLocal_274.f_29[2]))
	{
		if (func_282(Global_35, sLocal_274.f_29[2], 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_143()
{
	func_283();
	func_244(&sLocal_274, 4);
	return true;
}

void func_144(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;

	func_154(-1, 0, 0, 0, 0);
	if (bParam1)
	{
		func_186(240.0f, 1, 0);
		func_179(120, 0, 1);
	}
	Global_40.f_9632[iParam0 /*4*/].f_1++;
	sVar2 = { func_158(joaat("TOTAL_PLAYING_TIME")) /*2*/ };
	if (STATS::STAT_ID_GET_INT(&sVar2, &iVar0))
	{
		iVar1 = STATS::_STAT_CALCULATE_COOLDOWN(iVar0);
		Global_40.f_9632[iParam0 /*4*/].f_3 = (iVar1 + func_284(iParam0, 1));
	}
	func_161(0, 13);
}

bool func_145()
{
	if (!func_282(Global_35, sLocal_274.f_29[2], 1, 0))
	{
		if (func_282(Global_35, sLocal_274.f_29[1], 1, 0))
		{
			func_285(&sLocal_15, 7);
			return true;
		}
	}
	if (func_286(&sLocal_15))
	{
		return true;
	}
	return false;
}

bool func_146()
{
	if (func_61(sLocal_15[0], 0, 1))
	{
		func_288(&sLocal_15, func_287(36, 1), 0, 0, 1, 0);
	}
	if (func_61(sLocal_15[1], 0, 1))
	{
		func_288(&sLocal_15, func_287(36, 1), 1, 1, 1, 1.2f);
	}
	return true;
}

bool func_147()
{
	Vector3 vVar0;

	if (!func_61(sLocal_15[0], 0, 0))
	{
		return false;
	}
	if (func_289(sLocal_274.f_29[4], Global_36))
	{
		return false;
	}
	vVar0 = { func_290(Global_35, 2.0f) /*3*/ };
	if (func_289(sLocal_274.f_29[3], vVar0))
	{
		func_291(sLocal_15[0], Global_35, 3, 1, 100, 0);
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(sLocal_15[0], Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_148(int iParam0, int iParam1)
{
	return iParam0->f_2 & iParam1 != 0;
}

int func_149(int iParam0)
{
	Vector3 vVar0;

	if (func_61(iParam0, 0, 1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
		AUDIO::PLAY_SOUND_FROM_ENTITY("ALERT_WHISTLE_02", iParam0, "GAROA_Sounds", false, 0, 0);
		return 1;
	}
	return 0;
}

void func_150(int iParam0, int iParam1)
{
	iParam0->f_2 |= iParam1;
}

void func_151()
{
	func_78(&(sLocal_15.f_152), 1);
	func_79(&(sLocal_15.f_152), 1);
	func_292(&(sLocal_15.f_152), 1);
	func_293(&(sLocal_15.f_152), 1);
	func_234(&(sLocal_15.f_152), 1);
	func_294(&(sLocal_15.f_152), 1);
	func_235(&(sLocal_15.f_152), 1);
}

bool func_152()
{
	Vector3 vVar0[2];
	int iVar7;
	char* sVar8;
	char* sVar9;
	int iVar10;

	switch (sLocal_274.f_6)
	{
		case 0:
			sLocal_274.f_8 = func_295(&sLocal_274, 1);
			sLocal_274.f_9 = func_295(&sLocal_274, 0);
			if (!func_125(&sLocal_274))
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(sLocal_15[sLocal_274.f_8], Global_35, BUILTIN::FLOOR((1.0f * 1000.0f)) + 4000, false, 1);
			}
			func_296(&sLocal_274, 1);
			break;
		case 1:
			if (!func_60(&(sLocal_274.f_10[5 /*3*/])))
			{
				func_40(&(sLocal_274.f_10[5 /*3*/]), 0);
			}
			else if (func_47(&(sLocal_274.f_10[5 /*3*/]), 1.0f))
			{
			}
			if (!func_125(&sLocal_274))
			{
			}
			if (func_297(sLocal_15[sLocal_274.f_9], &(sLocal_274.f_42[sLocal_274.f_9]), 41, 0, 0, 1084227584, 100, 0, 0) || func_47(&(sLocal_274.f_10[5 /*3*/]), 2.0f))
			{
				if (!func_125(&sLocal_274))
				{
					func_298();
					sLocal_274.f_59 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_TERRIFYING_NEW"), sLocal_15.f_209, -1.0f, 100.0f, 100.0f, -1.0f, -1.0f, 4, 4);
					if (sLocal_274.f_59 != 0)
					{
					}
				}
				vVar0[0 /*3*/] = { func_299(&sLocal_274, sLocal_274.f_8) /*3*/ };
				vVar0[1 /*3*/] = { func_300(&sLocal_274, sLocal_274.f_8) /*3*/ };
				TASK::OPEN_SEQUENCE_TASK(&iVar7);
				if (!func_125(&sLocal_274))
				{
					TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 1000, joaat("FIRING_PATTERN_BURST_FIRE"), false);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0[0 /*3*/], 2.0f, -1, 0.25f, 1056773, 40000.0f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0[1 /*3*/], 2.0f, -1, 0.25f, 1056773, 40000.0f);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_200(sLocal_15[sLocal_274.f_8], &iVar7, 0, 0, 1, 1);
				func_296(&sLocal_274, 2);
			}
			break;
		case 2:
			vVar0[0 /*3*/] = { func_299(&sLocal_274, sLocal_274.f_9) /*3*/ };
			vVar0[1 /*3*/] = { func_300(&sLocal_274, sLocal_274.f_9) /*3*/ };
			TASK::OPEN_SEQUENCE_TASK(&iVar7);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0[0 /*3*/], 2.0f, -1, 0.25f, 1056773, 40000.0f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0[1 /*3*/], 2.0f, -1, 0.25f, 1056773, 40000.0f);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_200(sLocal_15[sLocal_274.f_9], &iVar7, 0, 0, 1, 1);
			func_189(&(sLocal_274.f_10[1 /*3*/]));
			func_296(&sLocal_274, 3);
			break;
		case 3:
			func_40(&(sLocal_274.f_10[1 /*3*/]), 0);
			if (func_47(&(sLocal_274.f_10[1 /*3*/]), 0.2f))
			{
				if (!func_148(&sLocal_274, 1))
				{
					sVar8 = func_301(&sLocal_15, &sLocal_274);
					iVar10 = func_302(&sLocal_274);
					sVar9 = func_126(&sLocal_274, 0);
					func_303(sLocal_15[0], Global_35, sVar8, -1073741824, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CRITICAL"), 0, sVar9, iVar10);
					func_304(sLocal_15[0], &(sLocal_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
					func_150(&sLocal_274, 1);
				}
				func_189(&(sLocal_274.f_10[1 /*3*/]));
				func_296(&sLocal_274, 4);
			}
			break;
		case 4:
			if ((!func_125(&sLocal_274) && func_47(&(sLocal_274.f_10[1 /*3*/]), 0.1f)) || (func_125(&sLocal_274) && func_47(&(sLocal_274.f_10[1 /*3*/]), 2.1f)))
			{
				func_281();
				func_296(&sLocal_274, 5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_153()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(sLocal_15[iVar0], 0, 1))
		{
			if (PED::IS_PED_IN_COVER(sLocal_15[iVar0], false, false))
			{
				func_304(sLocal_15[iVar0], &(sLocal_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				TASK::TASK_COMBAT_PED(sLocal_15[iVar0], Global_35, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_154(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_305() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_306(iVar1) && !func_307(iVar1, iParam2)) && (!bParam3 || !func_308(iVar1))) && (!bParam4 || !func_309(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_310(iVar0);
			}
		}
		iVar0++;
	}
}

void func_155()
{
	if (!func_306(Global_1327479))
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
	func_311(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_156()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_312(iVar0, 128))
		{
			func_313(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_157()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_312(iVar0, 128) && func_312(iVar0, 1))
		{
			func_313(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

struct<2> /*16*/ func_158(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_159(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_160(int iParam0)
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
			func_314((*iParam0)[iVar2], &iVar0);
			func_315((*iParam0)[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (iParam0->f_181)
	{
		case 0:
			func_316(joaat("G_M_M_UNIDUSTER_01"));
			func_316(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			func_316(joaat("G_M_O_UNIEXCONFEDS_01"));
			func_316(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			func_316(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			func_316(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			func_316(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			func_316(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
	func_22(iParam0, 128);
}

void func_161(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_317(&Global_0, 8);
	}
	if (!func_318() || func_319() != -1)
	{
		return;
	}
	func_317(&Global_0, 1);
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_106[iParam1] |= iParam2;
}

void func_163(bool bParam0)
{
	Global_1935496.f_15 = !bParam0;
}

void func_164(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (func_61((*iParam0)[iVar0], 0, 0))
		{
			if (!func_135(iParam0, iVar0, (1 << 9)))
			{
				if (PED::IS_PED_HOGTIED((*iParam0)[iVar0]))
				{
					TASK::TASK_COMBAT_PED((*iParam0)[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK((*iParam0)[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0], false);
					func_320((*iParam0)[iVar0]);
					func_195(iParam0, iVar0, (1 << 9));
				}
			}
			else if (!PED::IS_PED_HOGTIED((*iParam0)[iVar0]))
			{
				func_321(iParam0, iVar0, (1 << 9));
			}
		}
		iVar0++;
	}
}

void func_165(int iParam0, float fParam1)
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

int func_166(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (func_61((*iParam0)[iVar1], 0, 1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_167()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(sLocal_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(sLocal_15.f_22[iVar0]))
			{
				if (func_322(sLocal_15[iVar0], 1))
				{
					func_304(sLocal_15[iVar0], &(sLocal_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_168()
{
	if (!func_137(&sLocal_274, 64))
	{
		if (sLocal_274.f_56 <= 3)
		{
			func_323(90);
			func_324(100);
			func_244(&sLocal_274, 64);
		}
	}
	else if (!func_137(&sLocal_274, 128))
	{
		if (sLocal_274.f_56 <= 2)
		{
			func_323(sLocal_274.f_57);
			func_244(&sLocal_274, 128);
		}
	}
}

void func_169(int iParam0, int iParam1, int iParam2)
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

void func_170(int iParam0, int iParam1)
{
	iParam0->f_5 = iParam1;
}

bool func_171()
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;

	func_174();
	switch (sLocal_274.f_7)
	{
		case 0:
			func_280();
			if (func_47(&(sLocal_274.f_10[0 /*3*/]), 2.5f))
			{
				iVar0 = func_325();
				if (func_326(iVar0))
				{
					sVar1 = func_126(&sLocal_274, iVar0);
					func_40(&(sLocal_274.f_10[2 /*3*/]), 0);
					if (!func_148(&sLocal_274, 2))
					{
						sVar2 = func_327(&sLocal_274);
						iVar3 = func_328(&sLocal_274);
						func_303(sLocal_15[iVar0], Global_35, sVar2, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CRITICAL"), 0, sVar1, iVar3);
						func_150(&sLocal_274, 2);
					}
					func_329(&sLocal_274, 1);
				}
				else
				{
					func_329(&sLocal_274, 4);
				}
			}
			break;
		case 1:
			if (func_47(&(sLocal_274.f_10[2 /*3*/]), 5.0f))
			{
				iVar0 = func_330();
				if (func_326(iVar0))
				{
					sVar1 = func_126(&sLocal_274, iVar0);
					sVar2 = func_331(&sLocal_274);
					iVar3 = func_332(&sLocal_274);
					func_189(&(sLocal_274.f_10[2 /*3*/]));
					func_303(sLocal_15[iVar0], Global_35, sVar2, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 0, sVar1, iVar3);
					func_329(&sLocal_274, 2);
				}
				else
				{
					func_329(&sLocal_274, 4);
				}
			}
			break;
		case 2:
			if (func_47(&(sLocal_274.f_10[2 /*3*/]), 6.0f))
			{
				iVar0 = func_333();
				if (func_326(iVar0))
				{
					sVar1 = func_126(&sLocal_274, iVar0);
					sVar2 = func_334(&sLocal_274);
					iVar3 = func_335(&sLocal_274);
					func_189(&(sLocal_274.f_10[2 /*3*/]));
					func_303(sLocal_15[iVar0], Global_35, sVar2, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 0, sVar1, iVar3);
					func_329(&sLocal_274, 3);
				}
				else
				{
					func_329(&sLocal_274, 4);
				}
			}
			break;
		case 3:
			if (func_47(&(sLocal_274.f_10[2 /*3*/]), 4.0f))
			{
				iVar0 = func_336(0, 4);
				if (func_326(iVar0))
				{
					sVar1 = func_126(&sLocal_274, iVar0);
					sVar2 = func_337(&sLocal_274);
					iVar3 = func_338(&sLocal_274);
					func_189(&(sLocal_274.f_10[2 /*3*/]));
					func_303(sLocal_15[iVar0], Global_35, sVar2, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 0, sVar1, iVar3);
					func_329(&sLocal_274, 4);
				}
				else
				{
					func_329(&sLocal_274, 4);
				}
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_172(int iParam0, var uParam1, var uParam2, char* sParam3, float fParam4)
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
				if (!func_135(iParam0, iVar2, 1))
				{
					func_189(uParam2);
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
				if (func_339(iParam0, *uParam1))
				{
					TASK::TASK_FLEE_PED((*iParam0)[*uParam1], Global_35, 4, 524292, -1.0f, -1, 0);
					PED::SET_PED_KEEP_TASK((*iParam0)[*uParam1], true);
					func_320((*iParam0)[*uParam1]);
					func_340((*iParam0)[*uParam1], 0, 1);
					func_341((*iParam0)[*uParam1], Global_35, sParam3, 0, 100.0f, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
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

void func_173()
{
	if (func_61(sLocal_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(sLocal_15.f_56, true, joaat("REL_GANG_ODRISCOLL"));
	}
}

void func_174()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_136(&sLocal_15, iVar0, (1 << 24)))
		{
			if (func_342(sLocal_15[iVar0], Global_35, 10.0f, 1))
			{
				if (func_61(sLocal_15.f_40[iVar0], 0, 1) && PED::_GET_RIDER_OF_MOUNT(sLocal_15.f_40[iVar0], false) != 0)
				{
					TASK::CLEAR_PED_TASKS(sLocal_15.f_40[iVar0], true, false);
				}
				TASK::TASK_COMBAT_PED(sLocal_15[iVar0], Global_35, 100663296, 0);
				func_162(&sLocal_15, iVar0, (1 << 24));
			}
		}
		iVar0++;
	}
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
		Global_40.f_9632.f_192 = func_343();
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
		func_154(-1, 0, 0, 0, 0);
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
		iVar0 = func_344(iParam0);
		iVar1 = func_345(iParam0);
		if (func_87(iVar1, 0))
		{
			switch (iVar1)
			{
				case 0:
				case 2:
					func_346(iVar1);
					break;
			}
		}
		else
		{
			iVar2 = func_347();
			switch (iVar2)
			{
				case 0:
				case 2:
					func_348(0, iVar2);
					break;
			}
		}
		if (func_183(iVar0, 1))
		{
			func_349();
		}
		else if (func_183(iVar0, 2))
		{
			func_350(0);
		}
		func_351(iParam0);
		func_352(iParam0);
	}
}

void func_177(int iParam0)
{
	Global_1310750.f_16035 -= Global_1310750.f_16035 & iParam0;
}

void func_178(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

void func_179(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_353(iParam0, iParam1, bParam2);
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
		if (func_307(iVar0, (1 << 24)))
		{
			if (!func_354(iVar0))
			{
				func_355(iVar0, (1 << 12));
			}
		}
		iVar0++;
	}
}

bool func_183(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_184(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_356(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_357(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == (1 << 24))
			{
				if (func_358(iVar0) < func_359(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_360(iVar0, iParam1, 1.0f, iVar1 | iParam2, bParam3);
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
			func_361(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_361(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_361(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_361(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_361(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_361(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_361(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
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

	if (func_136(&sLocal_15, iParam0, 32))
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
	if (!func_136(&sLocal_15, iParam0, 64))
	{
		fVar0 = func_194(&(sLocal_15.f_247));
		if ((fVar0 - 9.0f) > (float)iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_189(var uParam0)
{
	func_362(uParam0, 0.0f);
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

float func_194(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_363(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_97[iParam1] |= iParam2;
}

void func_196(int iParam0, bool bParam1)
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
	if (!func_364(iParam0))
	{
		return;
	}
	iVar0 = func_365(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_366(iVar0);
	func_367(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_368(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_369(iVar0))
		{
			return;
		}
	}
	func_370(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_319() == -1)
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

bool func_197(int iParam0)
{
	if (func_135(&sLocal_15, iParam0, 2))
	{
		return false;
	}
	if (func_135(&sLocal_15, iParam0, 128))
	{
		return false;
	}
	if (func_135(&sLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_371(&sLocal_15, sLocal_15[iParam0]))
	{
		return true;
	}
	if (!func_135(&sLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

void func_198(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

bool func_199(int iParam0)
{
	if (func_372(iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_200(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_201(int iParam0)
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

bool func_202(int iParam0, int iParam1)
{
	if (func_136(&sLocal_15, iParam0, 2))
	{
		return false;
	}
	if (func_136(&sLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_373(sLocal_15.f_40[iParam0], iParam1))
	{
		return true;
	}
	if (func_371(&sLocal_15, sLocal_15.f_40[iParam0]))
	{
		return true;
	}
	if (!func_136(&sLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_203(int iParam0)
{
	float fVar0;

	if (func_374((1 << 15)))
	{
		fVar0 = 120.0f;
	}
	else
	{
		fVar0 = 80.0f;
	}
	if (func_375(sLocal_15.f_84[iParam0], fVar0))
	{
		return false;
	}
	if (func_190(sLocal_15.f_84[iParam0], Global_36, 1) < 10.0f)
	{
		return false;
	}
	return true;
}

bool func_204(int iParam0)
{
	if (func_227(&sLocal_15, iParam0, 2))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, sLocal_15.f_49[iParam0], true))
	{
		return false;
	}
	if (func_227(&sLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_376(&sLocal_15, sLocal_15.f_49[iParam0]))
	{
		return true;
	}
	if (!func_227(&sLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_205(int iParam0, int iParam1)
{
	if (func_375(iParam1, 1114636288) || func_377(iParam1, 1, 1) <= 30.0f)
	{
		return false;
	}
	return true;
}

void func_206(int iParam0)
{
}

float func_207(int iParam0)
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

void func_208(int iParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar0 = { iParam0->f_209 + Vector(-40.0f, -fParam1, -fParam1) /*3*/ };
	vVar3 = { iParam0->f_209 + Vector(40.0f, fParam1, fParam1) /*3*/ };
	vVar6 = { func_378(vVar0, vVar3, 0) /*3*/ };
	vVar9 = { func_379(vVar0, vVar3, 0) /*3*/ };
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, 0);
	func_380(iParam0->f_209, fParam1, 5);
	func_381(iParam0);
}

void func_209(Vector3 vParam0, int iParam3)
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
			if (func_382(vVar2, vParam0, 2.0f, 1))
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

int func_210(int iParam0)
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

bool func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;

	sVar2 = { func_158(joaat("TOTAL_PLAYING_TIME")) /*2*/ };
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

bool func_212(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_213(int iParam0)
{
	if (((func_214(iParam0, 1) && func_214(iParam0, 2)) && func_214(iParam0, 8)) && func_214(iParam0, (1 << 9)))
	{
		return true;
	}
	return false;
}

bool func_214(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_215()
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

int func_216(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_384(func_383(iParam0));
}

bool func_217(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_218(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_219(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_220(int iParam0, Vector3 vParam1, bool bParam4)
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
	return func_385(vVar0, vParam1);
}

bool func_221(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
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

int func_222()
{
	return Global_1894899.f_2;
}

bool func_223()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (func_386(16) && !func_386(21))
	{
		return true;
	}
	return false;
}

bool func_224()
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

bool func_225()
{
	return (Global_1894899 & 1 != 0 && func_222() != -1);
}

bool func_226(int iParam0)
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

bool func_227(int iParam0, int iParam1, int iParam2)
{
	return iParam0->f_115[iParam1] & iParam2 != 0;
}

bool func_228(int iParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = func_387(iParam0, Global_35, 1, 1);
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

void func_229(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_115[iParam1] |= iParam2;
}

float func_230(int iParam0)
{
	return iParam0->f_24;
}

void func_231(int iParam0, float fParam1)
{
	iParam0->f_25 = fParam1;
}

void func_232(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_240(iParam0, 1);
	}
	else
	{
		func_239(iParam0, 1);
	}
}

void func_233(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_240(&(uParam0->f_1), (1 << 14));
	}
}

void func_234(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_240(&(uParam0->f_1), (1 << 11));
	}
}

void func_235(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_240(iParam0, 16);
	}
	else
	{
		func_239(iParam0, (1 << 26));
		func_239(iParam0, 16);
	}
}

void func_236(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(&(iParam0->f_1), 128);
	}
	else
	{
		func_240(&(iParam0->f_1), 128);
	}
}

void func_237(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_240(iParam0, 256);
	}
	else
	{
		func_239(iParam0, 256);
	}
}

void func_238(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_240(iParam0, (1 << 28));
	}
	else
	{
		func_239(iParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_240(iParam0, (1 << 30));
	}
	else
	{
		func_239(iParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_240(iParam0, (1 << 29));
	}
	else
	{
		func_239(iParam0, (1 << 29));
	}
}

void func_239(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

void func_240(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

void func_241(int iParam0)
{
	iParam0->f_61 = 1;
}

void func_242(int iParam0)
{
	iParam0->f_62 = 1;
}

bool func_243(int iParam0)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return Global_40.f_9571[iParam0 /*10*/].f_1 == 5;
}

void func_244(int iParam0, int iParam1)
{
	iParam0->f_1 |= iParam1;
}

bool func_245(int iParam0)
{
	return iParam0->f_62;
}

void func_246(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_183(iParam1, 1))
		{
			func_22(iParam0, (1 << 18));
		}
		if (func_183(iParam1, 2))
		{
			func_22(iParam0, (1 << 19));
		}
	}
	else
	{
		if (func_183(iParam1, 1))
		{
			func_45(iParam0, (1 << 18));
		}
		if (func_183(iParam1, 2))
		{
			func_45(iParam0, (1 << 19));
		}
	}
}

void func_247()
{
	func_78(&(sLocal_15.f_152), 0);
	func_79(&(sLocal_15.f_152), 1);
	func_292(&(sLocal_15.f_152), 1);
	func_293(&(sLocal_15.f_152), 1);
	func_234(&(sLocal_15.f_152), 0);
	func_233(&(sLocal_15.f_152), 0);
	func_294(&(sLocal_15.f_152), 1);
	func_235(&(sLocal_15.f_152), 1);
}

void func_248()
{
	func_388();
	switch (sLocal_274.f_0)
	{
		case 0:
			if (func_137(&sLocal_274, 1))
			{
				sLocal_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(338.589f, 232.009f, 115.799f, 0.0f, 0.0f, -57.90996f, 53.261f, 52.5f, 25.0f, "volTrigger");
			}
			else
			{
				sLocal_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(339.675f, 238.283f, 115.799f, 0.0f, 0.0f, 26.00785f, 40.0f, 58.0f, 25.0f, "volTrigger");
			}
			break;
		case 1:
			if (func_137(&sLocal_274, 1))
			{
				sLocal_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-379.045f, 127.827f, 62.31f, 0.0f, 0.0f, 26.539f, 50.0f, 60.0f, 25.0f, "volTrigger");
				sLocal_274.f_29[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-350.3254f, 59.00127f, 43.12436f, 0.0f, 0.0f, 19.99999f, 110.5504f, 40.91618f, 60.3563f, "volTriggerSubtract");
			}
			else
			{
				sLocal_274.f_29[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[3], -382.465f, 113.158f, 49.081f, 0.0f, 0.0f, 0.0f, 50.0f, 50.0f, 25.0f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[3], -383.01f, 171.862f, 57.306f, 0.0f, 0.0f, 28.0f, 60.0f, 30.0f, 40.0f);
				sLocal_274.f_29[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-350.3254f, 59.00127f, 43.12436f, 0.0f, 0.0f, 19.99999f, 110.5504f, 40.91618f, 60.3563f, "volTriggerSubtract");
			}
			break;
		case 2:
			if (func_137(&sLocal_274, 1))
			{
				sLocal_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1046.844f, -391.533f, 84.9f, 0.0f, 0.0f, 51.53897f, 30.0f, 50.0f, 25.0f, "volTrigger");
			}
			else
			{
				sLocal_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1082.664f, -459.843f, 84.9f, 0.0f, 0.0f, 26.00785f, 50.0f, 50.0f, 25.0f, "volTrigger");
			}
			break;
		case 3:
			if (func_137(&sLocal_274, 1))
			{
				sLocal_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1263.067f, 9.892f, 63.023f, 0.0f, 0.0f, 101.539f, 30.0f, 55.0f, 25.0f, "volTrigger");
			}
			else
			{
				sLocal_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1261.02f, 9.46f, 56.089f, 0.0f, 0.0f, 23.008f, 80.0f, 40.0f, 25.0f, "volTrigger");
			}
			break;
	}
}

void func_249(var uParam0, Vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = 258;
	func_389(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_250(var uParam0, Vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;

	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_389(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_251(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
							func_390(&sVar0, 180.6557f, 75.5711f, 98.7111f, 307.9777f);
							break;
						case 1:
							func_390(&sVar0, -124.9678f, 182.499f, 92.7486f, 323.5033f);
							break;
						case 2:
							func_390(&sVar0, -143.1968f, 392.7447f, 95.6412f, 26.7895f);
							break;
						case 3:
							func_390(&sVar0, -175.487f, -208.2044f, 87.9832f, 155.3853f);
							break;
						case 4:
							func_390(&sVar0, 810.023f, 376.8716f, 115.1321f, 278.0894f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -78.546f, 574.7642f, 117.1554f, 285.065f);
							break;
						case 1:
							func_390(&sVar0, 52.8403f, 228.5046f, 108.3697f, 1.1595f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -98.0465f, 227.8637f, 99.6174f, 342.0f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1114.856f, 73.738f, 53.0233f, 354.9799f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -566.0319f, 466.1427f, 98.0826f, 133.627f);
							break;
						case 1:
							func_390(&sVar0, 731.3024f, -567.4277f, 75.8176f, 96.4522f);
							break;
						case 2:
							func_390(&sVar0, 83.4469f, 582.1075f, 135.0757f, 264.5214f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
						case 1:
							func_390(&sVar0, 831.6912f, -584.7949f, 78.2731f, 202.9779f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 202.3087f, 137.861f, 98.3938f, 326.3648f);
							break;
						case 1:
							func_390(&sVar0, -372.0885f, -36.569f, 41.6905f, 348.5297f);
							break;
						case 2:
							func_390(&sVar0, -927.3195f, -351.4889f, 48.6764f, 122.086f);
							break;
						case 3:
							func_390(&sVar0, -1089.385f, 29.2608f, 55.1327f, 104.0236f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1561.633f, -654.6262f, 46.2574f, 321.6371f);
							break;
						case 1:
							func_390(&sVar0, 954.459f, -1251.211f, 54.8197f, 43.8895f);
							break;
						case 2:
							func_390(&sVar0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							break;
						case 3:
							func_390(&sVar0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							break;
						case 4:
							func_390(&sVar0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							break;
						case 5:
							func_390(&sVar0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
							break;
						case 1:
							func_390(&sVar0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1561.589f, -2121.429f, 44.3306f, 273.483f);
							break;
						case 1:
							func_390(&sVar0, 1391.634f, -2269.641f, 44.9803f, 294.7664f);
							break;
						case 2:
							func_390(&sVar0, 2067.27f, -1250.361f, 42.8864f, 257.827f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1173.9f, -909.8f, 66.9f, -57.4f);
							break;
						case 1:
							func_390(&sVar0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2069.093f, -1241.536f, 41.2556f, 176.86f);
							break;
						case 1:
							func_390(&sVar0, 2081.443f, -899.7972f, 41.1731f, 260.946f);
							break;
						case 2:
							func_390(&sVar0, 1212.386f, -1591.315f, 56.0669f, 23.4687f);
							break;
						case 3:
							func_390(&sVar0, 1506.064f, -905.8009f, 47.8961f, 165.3073f);
							break;
						case 4:
							func_390(&sVar0, 1606.995f, -1545.489f, 59.2865f, 177.0083f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2449.325f, 1573.939f, 85.8194f, 39.9471f);
							break;
						case 1:
							func_390(&sVar0, 2584.913f, 1633.828f, 97.7316f, 8.1257f);
							break;
						case 2:
							func_390(&sVar0, 2730.857f, 1311.648f, 92.9221f, 149.1053f);
							break;
						case 3:
							func_390(&sVar0, 2794.002f, 1031.168f, 59.517f, 188.3449f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
							break;
						case 1:
							func_390(&sVar0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
							break;
						case 1:
							func_390(&sVar0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2242.927f, 732.5889f, 91.0723f, 263.9706f);
							break;
						case 1:
							func_390(&sVar0, 2698.555f, 183.9842f, 52.7268f, 12.5536f);
							break;
						case 2:
							func_390(&sVar0, 2012.363f, 450.9774f, 114.9433f, 51.6697f);
							break;
						case 3:
							func_390(&sVar0, 2870.96f, 831.843f, 48.2579f, 28.2762f);
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
							func_390(&sVar0, 334.8338f, 220.554f, 101.8269f, 119.7537f);
							break;
						case 1:
							func_390(&sVar0, -113.9271f, 443.0494f, 111.7579f, 219.7514f);
							break;
						case 2:
							func_390(&sVar0, -298.4487f, 637.9625f, 111.069f, 190.7615f);
							break;
						case 3:
							func_390(&sVar0, -379.536f, -313.1479f, 87.3478f, 269.676f);
							break;
						case 4:
							func_390(&sVar0, 1058.255f, 395.0368f, 100.4976f, 78.4296f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
							break;
						case 1:
							func_390(&sVar0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -650.8867f, 350.328f, 87.9592f, 308.87f);
							break;
						case 1:
							func_390(&sVar0, 581.8732f, -498.1398f, 77.1145f, 214.5317f);
							break;
						case 2:
							func_390(&sVar0, 195.9423f, 643.7529f, 133.8094f, 123.0221f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
						case 1:
							func_390(&sVar0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 488.6012f, 346.341f, 104.38f, 132.2152f);
							break;
						case 1:
							func_390(&sVar0, -491.0948f, 240.2662f, 42.8778f, 245.3544f);
							break;
						case 2:
							func_390(&sVar0, -1063.855f, -573.8351f, 81.1675f, 22.0417f);
							break;
						case 3:
							func_390(&sVar0, -1383.4f, -131.3f, 94.2f, 2.2213f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1721.41f, -764.9014f, 41.3985f, 48.7414f);
							break;
						case 1:
							func_390(&sVar0, 917.1657f, -1057.089f, 55.351f, 197.7367f);
							break;
						case 2:
							func_390(&sVar0, 1367.119f, -1379.669f, 79.039f, 234.1533f);
							break;
						case 3:
							func_390(&sVar0, 1492.79f, -1122.532f, 56.3596f, 8.428f);
							break;
						case 4:
							func_390(&sVar0, 2246.185f, -1359.823f, 44.2797f, 67.8845f);
							break;
						case 5:
							func_390(&sVar0, 1289.32f, -1632.029f, 65.404f, 182.4022f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
							break;
						case 1:
							func_390(&sVar0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1861.568f, -1978.116f, 43.699f, 111.3814f);
							break;
						case 1:
							func_390(&sVar0, 1506.446f, -2206.457f, 42.6941f, 158.0186f);
							break;
						case 2:
							func_390(&sVar0, 2273.229f, -1369.996f, 45.7006f, 80.9983f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1346.7f, -858.3f, 72.7f, 88.6f);
							break;
						case 1:
							func_390(&sVar0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2264.292f, -1366.995f, 44.3097f, 79.8327f);
							break;
						case 1:
							func_390(&sVar0, 2264.248f, -1037.55f, 42.1479f, 54.3753f);
							break;
						case 2:
							func_390(&sVar0, 1091.079f, -1431.687f, 54.6637f, 223.0478f);
							break;
						case 3:
							func_390(&sVar0, 1493.179f, -1116.514f, 55.4248f, 352.523f);
							break;
						case 4:
							func_390(&sVar0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2299.518f, 1759.59f, 107.9513f, 195.5682f);
							break;
						case 1:
							func_390(&sVar0, 2705.534f, 1911.673f, 113.9124f, 141.4947f);
							break;
						case 2:
							func_390(&sVar0, 2530.082f, 1242.029f, 148.8438f, 338.4772f);
							break;
						case 3:
							func_390(&sVar0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
							break;
						case 1:
							func_390(&sVar0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
							break;
						case 1:
							func_390(&sVar0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, 2482.688f, 729.5152f, 72.2941f, 117.0933f);
							break;
						case 1:
							func_390(&sVar0, 2585.403f, 338.2195f, 69.6483f, 220.6653f);
							break;
						case 2:
							func_390(&sVar0, 1805.624f, 550.4319f, 105.9446f, 233.3962f);
							break;
						case 3:
							func_390(&sVar0, 2793.57f, 1038.077f, 58.5925f, 188.5771f);
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
							func_390(&sVar0, 997.1635f, -1186.04f, 64.0811f, 75.3782f);
							break;
						case 1:
							func_390(&sVar0, 1391.092f, -1081.252f, 70.8405f, 284.1285f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_390(&sVar0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
							break;
						case 1:
							func_390(&sVar0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 0:
					switch (iParam4)
					{
						case 1:
							func_390(&sVar0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
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

bool func_252(int iParam0, bool bParam1)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

int func_253(int iParam0)
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

int func_254(bool bParam0, bool bParam1, bool bParam2)
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

void func_255(var uParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	int iVar12;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_237))
	{
		func_391(&(uParam0->f_237), uParam0->f_209, uParam0->f_151);
	}
	func_392(uParam0->f_237, "ambush_restriction", 1, 0, (1 << 9), 0, -1082130432);
	vVar0 = { uParam0->f_209 + Vector(-40.0f, -fParam1, -fParam1) /*3*/ };
	vVar3 = { uParam0->f_209 + Vector(40.0f, fParam1, fParam1) /*3*/ };
	vVar6 = { func_378(vVar0, vVar3, 0) /*3*/ };
	vVar9 = { func_379(vVar0, vVar3, 0) /*3*/ };
	if (func_393(uParam0->f_151))
	{
		iVar12 = func_394(uParam0);
		func_395(uParam0->f_209, fParam1, 0, 0, iVar12);
	}
	PED::SET_PED_NON_CREATION_AREA(vVar6, vVar9);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar6, vVar9, false, 1);
	FIRE::STOP_FIRE_IN_RANGE(uParam0->f_209, fParam1);
	func_396(uParam0->f_209, fParam1, 0);
}

void func_256(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 0);
	if (bParam3)
	{
		func_239(&iParam1, (1 << 13));
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, iParam0);
	}
}

int func_257(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_397(iParam0);
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
					if (func_398())
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
					if (func_398())
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
					if (func_398())
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
					if (func_398())
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
					if (func_398())
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

int func_258(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = joaat("META_HORSE_SADDLE_ONLY");
	iVar1 = func_397(iParam0);
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
					if (func_398())
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
					if (func_398())
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
					if (func_398())
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
					if (func_398())
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
					if (func_398())
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

void func_259()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = func_399(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar1);
		}
		iVar0++;
	}
}

void func_260(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_264(iParam1, iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_261()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = func_399(iVar0);
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

bool func_262(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_264(iParam1, iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_263(int iParam0)
{
	if (!func_245(&sLocal_274))
	{
		if (!func_125(&sLocal_274))
		{
			switch (iParam0)
			{
				case 0:
					return 877386931;
				case 1:
					return -54399588;
				case 2:
					return -1658670882;
				case 3:
					return -1269768390;
				case 4:
					return -1046054427;
				default:
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return -1993472916;
				case 2:
					return -1658670882;
				case 3:
					return -1269768390;
				case 4:
					return -1046054427;
				default:
					break;
			}
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -1993472916;
			case 2:
				return -1658670882;
			case 3:
				return -1269768390;
			case 4:
				return -1046054427;
			default:
				break;
		}
	}
	return func_94();
}

int func_264(int iParam0, int iParam1)
{
	if (func_245(iParam0))
	{
		return joaat("G_M_M_UNICRIMINALS_01");
	}
	return joaat("G_M_M_UNIDUSTER_01");
}

bool func_265(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_266(int iParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { func_400(iParam0, iParam1) /*4*/ };
	return vVar0;
}

var func_267(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_400(iParam0, iParam1) /*4*/ };
	return sVar0.f_3;
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
		if (func_401(iParam1))
		{
			func_402(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_403(iParam0, 0, 1);
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
			func_404(iParam0, 0);
			bVar0 = true;
		}
		func_405(iParam0, iParam2);
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

Vector3 func_270(int iParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { func_406(iParam0, iParam1) /*4*/ };
	return vVar0;
}

var func_271(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_406(iParam0, iParam1) /*4*/ };
	return sVar0.f_3;
}

int func_272(int iParam0, int iParam1)
{
	if (func_245(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				return 4;
			case 1:
				return 4;
			case 2:
				return 5;
			case 3:
				return 5;
			case 4:
				return 4;
			default:
				break;
		}
	}
	else if (func_125(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				return 2;
			case 1:
				return 2;
			case 2:
				return 3;
			case 3:
				return 3;
			case 4:
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
				return 0;
			case 1:
				return 0;
			case 2:
				return 1;
			case 3:
				return 1;
			case 4:
				return 0;
			default:
				break;
		}
	}
	return -1;
}

char* func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "1018_G_M_M_UniDuster_01_IRISH_01";
		case 1:
			return "0359_G_M_M_UniDuster_02_IRISH_01";
		case 2:
			return "0356_G_M_M_UniDuster_01_WHITE_02";
		case 3:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		case 4:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		case 5:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
		default:
			break;
	}
	return "NULL VOICE";
}

bool func_274(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_275(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_276(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_407(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_407(iVar4) && iVar4 != iVar0)
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
	if (func_319() == -1 && !func_408(iVar0))
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
				if (func_408(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_407(iVar0))
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
		func_409(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_410(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_411(iVar0))
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

struct<4> /*32*/ func_277(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (*iParam0)
	{
		case 0:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(0, 1);
					case 1:
						return func_412(0, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(1, 1);
					case 1:
						return func_412(1, 5);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(2, 1);
					case 1:
						return func_412(2, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(3, 1);
					case 1:
						return func_412(3, 5);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(4, 1);
					case 1:
						return func_412(4, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(5, 1);
					case 1:
						return func_412(5, 5);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(6, 1);
					case 1:
						return func_412(6, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(7, 1);
					case 1:
						return func_412(7, 5);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

bool func_278(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_413(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_414((*uParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
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

int func_279(var uParam0, int iParam1)
{
	var uVar0;
	struct<11> /*88*/ sVar1;

	sVar1.f_10 = 7;
	sVar1.f_0 = 0;
	sVar1.f_1 = iParam1;
	sVar1.f_2 = 0;
	return func_415(&uVar0, &sVar1);
}

void func_280()
{
	func_416();
}

void func_281()
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;

	if (func_137(&sLocal_274, 32))
	{
		return;
	}
	fVar5 = 0.0f;
	iVar3 = 2;
	while (iVar3 <= 4)
	{
		if (func_61(sLocal_15[iVar3], 0, 0))
		{
			vVar0 = { func_299(&sLocal_274, iVar3) /*3*/ };
			switch (iVar3)
			{
				case 2:
					fVar5 = 0.0f;
					break;
				case 3:
					fVar5 = 0.0f;
					break;
				case 4:
					fVar5 = 0.0f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			if ((iVar3 == 2 && sLocal_274.f_0 == 0) && !func_125(&sLocal_274))
			{
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 3.0f, 1, 3.0f, 1.0f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 5);
			}
			else if (iVar3 == 3)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 3.0f, 20000, 3.0f, 4, 40000.0f);
			}
			else if (iVar3 == 4 && func_125(&sLocal_274))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 3.0f, 1, 3.0f, 1.0f, 1, 2105348, 1, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
				TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, vVar0, 5.0f);
				TASK::TASK_COMBAT_PED_TIMED(0, Global_35, 3000, 0);
				TASK::TASK_CLEAR_DEFENSIVE_AREA(0);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 3.0f, 1, 3.0f, 1.0f, 1, 2105348, 1, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_200(sLocal_15[iVar3], &iVar4, fVar5, 0, 1, 1);
		}
		iVar3++;
	}
	func_244(&sLocal_274, 32);
}

bool func_282(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_283()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_137(&sLocal_274, 4))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (func_61(sLocal_15[0], 0, 1))
		{
			func_341(sLocal_15[0], Global_35, func_301(&sLocal_15, &sLocal_274), 0, 70.0f, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			bVar2 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 < sLocal_15.f_215)
	{
		if (func_61(sLocal_15[iVar0], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(sLocal_15[iVar0], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
			func_200(sLocal_15[iVar0], &iVar1, 0.3f, 1.0f, 1, 1);
			func_304(sLocal_15[iVar0], &(sLocal_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			if (!bVar2)
			{
				func_341(sLocal_15[iVar0], Global_35, func_301(&sLocal_15, &sLocal_274), 0, 70.0f, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				bVar2 = true;
			}
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_144(sLocal_15.f_151, 1);
}

int func_284(int iParam0, int iParam1)
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

void func_285(var uParam0, int iParam1)
{
}

bool func_286(var uParam0)
{
	switch (uParam0->f_224)
	{
		case 0:
			if (func_417(uParam0))
			{
				func_285(uParam0, 1);
				return true;
			}
			break;
		case 1:
			if (func_418(uParam0))
			{
				func_285(uParam0, 2);
				return true;
			}
			break;
		case 2:
			if (func_419(uParam0))
			{
				func_285(uParam0, 3);
				return true;
			}
			break;
		case 3:
			if (func_420(uParam0))
			{
				func_285(uParam0, 4);
				return true;
			}
			break;
		case 4:
			if (func_421(uParam0))
			{
				func_285(uParam0, 5);
				return true;
			}
			break;
		case 5:
			if (func_422(uParam0))
			{
				func_285(uParam0, 6);
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

Vector3 func_287(int iParam0, bool bParam1)
{
	Vector3 vVar0;
	var uVar3;

	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (!func_423(iParam0))
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

void func_288(var uParam0, Vector3 vParam1, int iParam4, int iParam5, bool bParam6, float fParam7)
{
	int iVar0;

	if (iParam4 < 0 || iParam4 >= 8)
	{
		return;
	}
	if (func_221((*uParam0)[iParam4], 250.0f, -1082130432, -1082130432, -1082130432) || (func_424(iParam5) && func_221(uParam0->f_40[iParam5], 250.0f, -1082130432, -1082130432, -1082130432)))
	{
		func_195(uParam0, iParam4, 2);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[iParam4], joaat("REL_PLAYER_DISLIKE"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iParam4], false);
		PED::SET_PED_CONFIG_FLAG((*uParam0)[iParam4], 230, true);
		if (iParam5 >= 0 && iParam5 < 8)
		{
			func_162(uParam0, iParam5, 2);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (iParam5 >= 0 && iParam5 < 8)
		{
			if (func_61(uParam0->f_40[iParam5], 0, 0) && !PED::IS_PED_ON_MOUNT((*uParam0)[iParam4]))
			{
				TASK::TASK_MOUNT_ANIMAL(0, uParam0->f_40[iParam5], -1, -1, 1.0f, 1, 0, 0);
			}
		}
		if (bParam6)
		{
			TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vParam1, 10.0f, 2.5f, 0, 0);
		}
		else
		{
			TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vParam1, 10.0f, 1.0f, 0, 0);
		}
		func_200((*uParam0)[iParam4], &iVar0, fParam7, 0, 1, 1);
	}
}

bool func_289(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

Vector3 func_290(int iParam0, float fParam1)
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
	func_425(vVar6);
	vVar6 = { FloatToVector((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 /*3*/ };
	vVar3 = { vVar0 + vVar6 /*3*/ };
	return vVar3;
}

void func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<23> /*184*/ sVar0;
	float fVar25;

	sVar0.f_4 = -1;
	sVar0.f_8 = 2;
	sVar0.f_9 = 1;
	sVar0.f_10 = 1;
	sVar0.f_11 = 1;
	sVar0.f_13 = 1;
	sVar0.f_14 = 2;
	sVar0.f_15 = 2;
	sVar0.f_16 = 3;
	sVar0.f_19 = 3;
	sVar0.f_20 = 1;
	sVar0.f_21 = 3;
	sVar0.f_22 = 3;
	fVar25 = BUILTIN::TO_FLOAT((iParam4 / 1000));
	if (bParam5)
	{
		TASK::REACT_LOOK_AT(iParam0, iParam1, iParam2, iParam3, fVar25, 1, 0, 0, 0);
	}
	TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam4, 0, 51, 0);
	func_426(&sVar0, iParam1, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iParam0, &sVar0);
}

void func_292(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(&(uParam0->f_1), 2);
	}
	else
	{
		func_240(&(uParam0->f_1), 2);
	}
}

void func_293(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(&(uParam0->f_1), 8);
	}
	else
	{
		func_240(&(uParam0->f_1), 8);
	}
}

void func_294(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_239(&(uParam0->f_1), 1);
	}
	else
	{
		func_240(&(uParam0->f_1), 1);
	}
}

int func_295(int iParam0, bool bParam1)
{
	switch (*iParam0)
	{
		case 0:
			if (func_137(iParam0, 1))
			{
				if (bParam1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				if (bParam1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam1)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			if (func_137(iParam0, 1))
			{
				if (bParam1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 3:
			if (func_137(iParam0, 1))
			{
				if (bParam1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

void func_296(int iParam0, int iParam1)
{
	iParam0->f_6 = iParam1;
}

bool func_297(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
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
	if (func_274(*uParam1, 128))
	{
		if (!func_427(iParam0, joaat("SCRIPT_TASK_PICKUP_CARRIABLE_ENTITY")))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_274(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_428(iVar2))
			{
				return false;
			}
			if (!func_427(iParam0, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")))
			{
				if (fParam7 != 0.0f && fParam8 != 0.0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_429(iVar2, vVar5))
					{
						iParam4 = (1 << 17);
					}
					else
					{
						iParam4 = (1 << 18);
					}
					if (!func_274(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_183(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			func_430(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (func_274(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*uParam1 = 0;
			return true;
		}
	}
	if (func_274(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_428(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_183(iParam2, 2) && PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (!func_183(iParam2, (1 << 11)))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (func_183(iParam2, (1 << 13)))
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
			return false;
		}
		if (func_274(*uParam1, 2336))
		{
			if (!func_428(iVar2))
			{
			}
			if (func_431(iVar2, *uParam1))
			{
				func_432(uParam1, 32);
				func_432(uParam1, 256);
				func_432(uParam1, (1 << 11));
				func_430(uParam1, (1 << 9));
				func_430(uParam1, (1 << 10));
				func_430(uParam1, (1 << 12));
			}
			else
			{
				return false;
			}
		}
		if (func_274(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_428(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return false;
			}
			else
			{
				func_432(uParam1, 64);
			}
		}
		if (func_183(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_183(iParam2, (1 << 10)))) || func_183(iParam2, 8)) && !func_274(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_430(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_183(iParam2, (1 << 12))) && !func_274(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_430(uParam1, (1 << 11));
			func_430(uParam1, (1 << 12));
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_183(iParam2, 32)) && !func_274(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_430(uParam1, 256);
			func_430(uParam1, (1 << 10));
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_430(uParam1, 64);
		}
		else if (!func_183(iParam2, 1))
		{
			if (!func_183(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, true, 0);
			}
			if (fParam7 != 0.0f && fParam8 != 0.0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_429(iVar2, vVar8))
				{
					iParam4 = (1 << 17);
				}
				else
				{
					iParam4 = (1 << 18);
				}
				if (!func_274(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0.0f);
			func_430(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_430(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_183(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_430(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!func_183(iParam2, (1 << 9)))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_430(uParam1, 8);
	}
	return false;
}

void func_298()
{
	Vector3 vVar0;
	struct<15> /*120*/ sVar3;

	vVar0 = { func_290(Global_35, 1.0f) /*3*/ };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar0, ENTITY::GET_ENTITY_HEADING(Global_35), 0.0f, 5.0f, 0.0f) /*3*/ };
	func_102(&vVar0, 2, 10, 0);
	sVar3.f_8 = -1082130432;
	sVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(sLocal_15[1], 0.0f, 2.0f, 1.0f) /*3*/ };
	sVar3.f_3 = { vVar0 /*3*/ };
	sVar3.f_6 = joaat("WEAPON_SNIPERRIFLE_CARCANO");
	sVar3.f_7 = 1.0f;
	sVar3.f_12 = 1;
	sVar3.f_13 = 1;
	sVar3.f_14 = 1;
	MISC::FIRE_SINGLE_BULLET(&sVar3);
}

Vector3 func_299(int iParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { func_433(iParam0, iParam1) /*4*/ };
	return vVar0;
}

Vector3 func_300(int iParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { func_434(iParam0, iParam1) /*4*/ };
	return vVar0;
}

char* func_301(var uParam0, int iParam1)
{
	if (func_125(iParam1))
	{
		if (!func_245(iParam1))
		{
			return "CALL_FOR_SUPPORT";
		}
		else
		{
			return "ARRIVAL_COMBAT_RAID_NEUTRAL";
		}
	}
	if (iParam1->f_58 <= 0)
	{
		if (uParam0->f_227)
		{
			return "RE_VPO_MTN_V1_SPOTTED";
		}
	}
	else
	{
		return "CALL_FOR_SUPPORT";
	}
	return "RE_VPO_MTN_V1_SPOTTED";
}

int func_302(int iParam0)
{
	if (func_125(iParam0))
	{
		if (!func_245(iParam0))
		{
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_303(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, bool bParam6, char* sParam7, int iParam8)
{
	Vector3 vVar0;

	if (bParam6)
	{
		vVar0 = { func_435(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false), 0.8f) /*3*/ };
		return func_436(vVar0, sParam2, sParam7, iParam5, 0, 1, iParam8);
	}
	return func_341(iParam0, iParam1, sParam2, "", fParam3, iParam8, 0, 1, 1, fParam3 >= 0.0f, bParam4, iParam5, 1, 0, 0);
}

void func_304(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

int func_305()
{
	return Global_1310750.f_16037;
}

bool func_306(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_307(int iParam0, int iParam1)
{
	if (!func_306(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/] & iParam1 != 0;
}

bool func_308(int iParam0)
{
	if (!func_306(iParam0))
	{
		return false;
	}
	if (func_437(64) && func_438(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_309(int iParam0)
{
	if (!func_306(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_310(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_306(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_439(iParam0);
	Global_1310750.f_16037--;
}

void func_311(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

bool func_312(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return Global_1393237.f_11[iParam0 /*30*/].f_10 & iParam1 != 0;
}

void func_313(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

int func_314(int iParam0, int iParam1)
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

bool func_315(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_440(iParam0);
		return func_441(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_316(int iParam0)
{
}

void func_317(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_318()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_319()
{
	return Global_1572887.f_12;
}

void func_320(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_321(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_97[iParam1] -= iParam0->f_97[iParam1] & iParam2;
}

bool func_322(int iParam0, bool bParam1)
{
	if (((((func_427(iParam0, joaat("SCRIPT_TASK_COMBAT")) || func_427(iParam0, joaat("SCRIPT_TASK_COMBAT_TIMED"))) || func_427(iParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA"))) || func_427(iParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS"))) || func_427(iParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED"))) || func_427(iParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST")))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_427(iParam0, joaat("SCRIPT_TASK_SHOOT_AT_COORD")) || func_427(iParam0, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY")))
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

void func_323(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(sLocal_15[iVar0], 0, 0))
		{
			func_133(iVar0, iParam0);
		}
		iVar0++;
	}
}

void func_324(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(sLocal_15[iVar0], 0, 0))
		{
			func_134(iVar0, iParam0);
		}
		iVar0++;
	}
}

int func_325()
{
	int iVar0;
	int iVar1;

	if (!func_125(&sLocal_274))
	{
		iVar0 = 0;
	}
	else
	{
		if (!func_245(&sLocal_274))
		{
			iVar1 = func_442(0, 4, 1, 3);
		}
		else
		{
			iVar1 = func_442(0, 4, 1, 5);
		}
		iVar0 = iVar1;
	}
	return iVar0;
}

bool func_326(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 4);
}

char* func_327(int iParam0)
{
	if (iParam0->f_58 <= 0)
	{
		if (!func_125(iParam0))
		{
			if (!func_245(iParam0))
			{
				return "RE_VPO_MTN_V1_ATTACK";
			}
		}
	}
	return "ARRIVAL_COMBAT_RAID_MALE";
}

int func_328(int iParam0)
{
	if (!func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_329(int iParam0, int iParam1)
{
	iParam0->f_7 = iParam1;
}

int func_330()
{
	int iVar0;
	int iVar1;

	if (!func_125(&sLocal_274))
	{
		iVar0 = func_336(2, 3);
	}
	else
	{
		if (!func_245(&sLocal_274))
		{
			iVar1 = func_442(0, 4, 1, 3);
		}
		else
		{
			iVar1 = func_442(0, 4, 1, 5);
		}
		iVar0 = iVar1;
	}
	return iVar0;
}

char* func_331(int iParam0)
{
	if (iParam0->f_58 <= 0)
	{
		if (!func_125(iParam0))
		{
			return "RE_VPO_MTN_V1_ATTACK_2";
		}
	}
	return "ARRIVAL_COMBAT_RAID_MALE";
}

int func_332(int iParam0)
{
	if (!func_125(iParam0))
	{
		return 0;
	}
	return 2;
}

int func_333()
{
	int iVar0;

	if (!func_125(&sLocal_274))
	{
		iVar0 = 4;
		if (!func_326(iVar0))
		{
			iVar0 = func_336(0, 1);
		}
	}
	else
	{
		iVar0 = func_336(0, 4);
	}
	return iVar0;
}

char* func_334(int iParam0)
{
	if (iParam0->f_58 <= 0)
	{
		if (!func_125(iParam0))
		{
			return "RE_VPO_MTN_V1_ATTACK_2";
		}
	}
	if (func_245(iParam0))
	{
		return "TAUNT_GEN_MALE";
	}
	return "GANG_TAUNT_GEN";
}

int func_335(int iParam0)
{
	if (!func_125(iParam0))
	{
		return 0;
	}
	if (func_245(iParam0))
	{
		return 2;
	}
	return 2;
}

int func_336(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+09f;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (func_61(sLocal_15[iVar0], 0, 0))
		{
			fVar3 = func_220(sLocal_15[iVar0], Global_36, 0);
			if (fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

char* func_337(int iParam0)
{
	if (func_245(iParam0))
	{
		return "TAUNT_GEN_MALE";
	}
	return "TAUNT_GEN_LOCATION";
}

int func_338(int iParam0)
{
	if (!func_125(iParam0))
	{
		return 0;
	}
	return 0;
}

bool func_339(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_190((*iParam0)[iParam1], Global_36, 1);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_290((*iParam0)[iParam1], 1065353216), func_290(Global_35, 1065353216), true);
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

void func_340(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

bool func_341(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_443(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_342(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_343()
{
	return Global_1899515;
}

int func_344(int iParam0)
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

int func_345(int iParam0)
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

void func_346(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	func_348(func_444(iParam0) + 1, iParam0);
}

int func_347()
{
	return Global_1393447.f_51;
}

void func_348(int iParam0, int iParam1)
{
	Global_40.f_9632.f_184[iParam1] = iParam0;
}

void func_349()
{
	func_350(Global_40.f_9632.f_196 + 1);
}

void func_350(int iParam0)
{
	Global_40.f_9632.f_196 = iParam0;
}

void func_351(int iParam0)
{
	func_445(iParam0, 0);
	Global_40.f_9632[iParam0 /*4*/]++;
	if (Global_40.f_9632[iParam0 /*4*/] > Global_40.f_9632[iParam0 /*4*/].f_1)
	{
		Global_40.f_9632[iParam0 /*4*/].f_1++;
	}
	func_161(0, 13);
}

void func_352(int iParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_446(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_447(iVar1);
		func_445(iVar1, bVar0);
	}
	iVar1 = func_448(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_447(iVar1);
		func_445(iVar1, bVar0);
	}
	iVar1 = func_449(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_447(iVar1);
		func_445(iVar1, bVar0);
	}
}

void func_353(int iParam0, int iParam1, bool bParam2)
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

bool func_354(int iParam0)
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

void func_355(int iParam0, int iParam1)
{
	if (!func_306(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 -= Global_1310750[iParam0 /*111*/].f_1 & iParam1;
}

bool func_356(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_357(int iParam0)
{
	if (!func_306(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_358(int iParam0)
{
	if (func_306(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_359(int iParam0)
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

void func_360(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_361(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_361(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_450(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_319() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 += iVar0;
}

void func_362(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_451(uParam0, 1);
	func_452(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_363(var uParam0)
{
	return func_212(*uParam0, 2);
}

bool func_364(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_365(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_365(int iParam0)
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

void func_366(int iParam0)
{
	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_454(iParam0, 32);
	func_455();
}

void func_367(int iParam0)
{
	int iVar0;

	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_370(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_370(iParam0);
	}
}

int func_368(int iParam0)
{
	iParam0 = func_453(iParam0);
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

bool func_369(int iParam0)
{
	iParam0 = func_453(iParam0);
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

void func_370(int iParam0)
{
	iParam0 = func_453(iParam0);
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

bool func_371(var uParam0, int iParam1)
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
		if (func_221(iParam1, 200.0f, (30.0f * 3.0f), -1082130432, -1082130432))
		{
			return false;
		}
	}
	else if (func_221(iParam1, 200.0f, 30.0f, -1082130432, -1082130432))
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

bool func_372(int iParam0, int iParam1)
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

bool func_373(int iParam0, int iParam1)
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

bool func_374(int iParam0)
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
	iVar0 = func_456(func_343());
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

bool func_375(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_457(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_376(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return true;
	}
	if (func_228(iParam1, 120.0f, 30.0f))
	{
		return false;
	}
	return true;
}

float func_377(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_387(Global_35, iParam0, bParam1, bParam2);
}

Vector3 func_378(Vector3 vParam0, Vector3 vParam3, float fParam6)
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

Vector3 func_379(Vector3 vParam0, Vector3 vParam3, float fParam6)
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

void func_380(Vector3 vParam0, float fParam3, int iParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, fParam3, fParam3, fParam3) /*3*/ };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, -fParam3, -fParam3, -fParam3) /*3*/ };
	vVar6 = { func_378(vVar0, vVar3, 0.0f) /*3*/ };
	vVar9 = { func_379(vVar0, vVar3, 0.0f) /*3*/ };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_381(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_238))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam0->f_238);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam0->f_238);
	}
}

bool func_382(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

int func_383(int iParam0)
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

int func_384(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

float func_385(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_386(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_458(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

float func_387(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_388()
{
	switch (sLocal_274.f_0)
	{
		case 0:
			if (func_137(&sLocal_274, 1))
			{
				sLocal_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], 418.848f, 77.80293f, 121.6681f, 0.0f, 0.0f, 0.0f, 185.5292f, 825.656f, 100.0f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], 329.3069f, 421.5065f, 121.6681f, 0.0f, 0.0f, 40.76599f, 225.4734f, 874.3004f, 100.0f);
				sLocal_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(277.262f, 204.918f, 118.72f, 0.0f, 0.0f, 46.0f, 80.0f, 80.0f, 25.0f, "volLookout");
			}
			else
			{
				sLocal_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], 238.8252f, 114.7395f, 121.6681f, 0.0f, 0.0f, 46.53898f, 283.0704f, 527.0014f, 100.0f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], 205.9177f, 320.7971f, 121.6681f, 0.0f, 0.0f, 33.19563f, 185.5292f, 196.1588f, 100.0f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], 222.5638f, 245.1077f, 121.6681f, 0.0f, 0.0f, 12.13536f, 185.5292f, 117.6843f, 100.0f);
				sLocal_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(385.355f, 264.261f, 118.187f, 0.0f, 0.0f, 36.0f, 80.0f, 50.0f, 20.0f, "volLookout");
			}
			break;
		case 1:
			if (func_137(&sLocal_274, 1))
			{
				sLocal_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -294.124f, 129.479f, 63.876f, 0.0f, 0.0f, 42.0f, 50.0f, 50.0f, 30.0f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -347.064f, 203.095f, 60.493f, 0.0f, 0.0f, -38.0f, 70.0f, 55.0f, 40.0f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -394.846f, 217.928f, 58.11f, 0.0f, 0.0f, 49.0f, 100.0f, 35.0f, 40.0f);
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -292.999f, 146.99f, 69.254f, 0.0f, 0.0f, -55.0f, 60.0f, 30.0f, 20.0f);
				sLocal_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -255.5343f, 153.9758f, 83.802f, 0.0f, 0.0f, 99.0f, 174.117f, 86.23087f, 86.94492f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -352.129f, 242.74f, 71.85f, 0.0f, 0.0f, -9.999998f, 313.7393f, 70.0f, 80.20216f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -477.6529f, 199.2664f, 60.86052f, 0.0f, 0.0f, 50.61905f, 471.6731f, 142.3497f, 80.20216f);
				sLocal_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-369.926f, 41.29f, 58.923f, 0.0f, 0.0f, 0.0f, 80.0f, 80.0f, 20.0f, "volLookout");
			}
			else
			{
				sLocal_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -333.979f, 59.428f, 57.306f, 0.0f, 0.0f, 16.0f, 60.0f, 30.0f, 40.0f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -288.543f, 102.454f, 58.11f, 0.0f, 0.0f, 49.0f, 100.0f, 40.0f, 40.0f);
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -284.316f, 173.197f, 69.254f, 0.0f, 0.0f, -39.0f, 80.0f, 50.0f, 20.0f);
				sLocal_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -244.7656f, 133.764f, 68.71463f, 0.0f, 0.0f, 99.0f, 257.6301f, 70.0f, 95.28242f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -301.2656f, 229.6675f, 73.87491f, 0.0f, 0.0f, -9.999998f, 114.0f, 70.0f, 65.18693f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -386.6048f, -8.184917f, 68.71463f, 0.0f, 0.0f, 173.198f, 380.4984f, 170.8759f, 95.28242f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -249.7183f, 11.96617f, 68.71463f, 0.0f, 0.0f, 37.51524f, 455.6271f, 162.2984f, 95.28242f);
				sLocal_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-415.243f, 168.681f, 59.814f, 0.0f, 0.0f, -19.0f, 80.0f, 100.0f, 20.0f, "volLookout");
			}
			break;
		case 2:
			if (func_137(&sLocal_274, 1))
			{
				sLocal_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], 1121.319f, -395.433f, 108.31f, 0.0f, 0.0f, -34.0f, 20.0f, 50.0f, 20.0f);
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -1091.897f, -435.154f, 107.567f, 0.0f, 0.0f, -13.0f, 70.0f, 25.0f, 30.0f);
				sLocal_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -1289.838f, -351.7445f, 88.6458f, 0.0f, 0.0f, 126.0f, 295.3131f, 322.2214f, 74.67348f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -1084.834f, -563.8528f, 78.51221f, 0.0f, 0.0f, 157.2218f, 454.3719f, 322.2214f, 82.22474f);
				sLocal_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1017.86f, -347.825f, 67.291f, 0.0f, 0.0f, 0.0f, 80.0f, 80.0f, 20.0f, "volLookout");
			}
			else
			{
				sLocal_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -1115.546f, -389.335f, 108.764f, 0.0f, 0.0f, 41.0f, 80.0f, 70.0f, 50.0f);
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -1053.247f, -367.928f, 97.34f, 0.0f, 0.0f, 0.0f, 60.0f, 60.0f, 40.0f);
				sLocal_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -983.4986f, -357.1036f, 84.52315f, 0.0f, 0.0f, 126.0f, 540.9646f, 224.4078f, 113.9085f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -983.4986f, -357.1036f, 84.52313f, 0.0f, 0.0f, 159.0f, 540.9646f, 224.4078f, 113.9085f);
				sLocal_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1085.386f, -477.668f, 96.065f, 0.0f, 0.0f, 0.0f, 80.0f, 80.0f, 20.0f, "volLookout");
			}
			break;
		case 3:
			if (func_137(&sLocal_274, 1))
			{
				sLocal_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -1285.011f, 53.415f, 63.329f, 0.0f, 0.0f, -18.0f, 30.0f, 16.0f, 50.0f);
				sLocal_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -1378.973f, 3.14997f, 77.486f, 0.0f, 0.0f, 106f, 470.503f, 235.9486f, 60.0f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -1291.689f, 113.318f, 76.272f, 0.0f, 0.0f, 8.0f, 20.0f, 83.0f, 53.0f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -1285.569f, 106.013f, 75.365f, 0.0f, 0.0f, 4.0f, 53.0f, 25.0f, 40.0f);
				sLocal_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1085.386f, -477.668f, 96.065f, 0.0f, 0.0f, 0.0f, 80.0f, 80.0f, 20.0f, "volLookout");
			}
			else
			{
				sLocal_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[2], -1285.011f, 53.415f, 63.329f, 0.0f, 0.0f, -18.0f, 30.0f, 16.0f, 50.0f);
				sLocal_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -1261.021f, -90.269f, 83.25f, 0.0f, 0.0f, 62.99999f, 100.0f, 80.0f, 60.0f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -1181.281f, 41.43328f, 55.359f, 0.0f, 0.0f, 22f, 223.2978f, 504.4755f, 242.9544f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(sLocal_274.f_29[1], -1326.26f, 96.98f, 63.329f, 0.0f, 0.0f, -11f, 100.0f, 100.0f, 50.0f);
				sLocal_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1085.386f, -477.668f, 96.065f, 0.0f, 0.0f, 0.0f, 80.0f, 80.0f, 20.0f, "volLookout");
			}
			break;
	}
}

void func_389(var uParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_459(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_459(uParam0))
		{
		}
	}
}

void func_390(var uParam0, Vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 /*3*/ };
	uParam0->f_3 = fParam4;
}

void func_391(var uParam0, Vector3 vParam1, int iParam4)
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

int func_392(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_460(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_393(int iParam0)
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

int func_394(var uParam0)
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

void func_395(Vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, fParam3, fParam3, fParam3) /*3*/ };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, -fParam3, -fParam3, -fParam3) /*3*/ };
	vVar6 = { func_378(vVar0, vVar3, 0.0f) /*3*/ };
	vVar9 = { func_379(vVar0, vVar3, 0.0f) /*3*/ };
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

void func_396(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_397(int iParam0)
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

bool func_398()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

char* func_399(int iParam0)
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

struct<4> /*32*/ func_400(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (*iParam0)
	{
		case 0:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(0, 0);
					case 1:
						return func_412(0, 4);
					case 2:
						return func_412(0, 8);
					case 3:
						return func_412(0, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(0, 14);
						}
						return func_412(0, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(1, 0);
					case 1:
						return func_412(1, 4);
					case 2:
						return func_412(1, 8);
					case 3:
						return func_412(1, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(1, 14);
						}
						return func_412(1, 12);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(2, 0);
					case 1:
						return func_412(2, 4);
					case 2:
						return func_412(2, 8);
					case 3:
						return func_412(2, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(2, 14);
						}
						return func_412(2, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(3, 0);
					case 1:
						return func_412(3, 4);
					case 2:
						return func_412(3, 8);
					case 3:
						return func_412(3, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(3, 14);
						}
						return func_412(3, 12);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(4, 0);
					case 1:
						return func_412(4, 4);
					case 2:
						return func_412(4, 8);
					case 3:
						return func_412(4, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(4, 14);
						}
						return func_412(4, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(5, 0);
					case 1:
						return func_412(5, 4);
					case 2:
						return func_412(5, 8);
					case 3:
						return func_412(5, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(5, 14);
						}
						return func_412(5, 12);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(6, 0);
					case 1:
						return func_412(6, 4);
					case 2:
						return func_412(6, 8);
					case 3:
						return func_412(6, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(6, 14);
						}
						return func_412(6, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(7, 0);
					case 1:
						return func_412(7, 4);
					case 2:
						return func_412(7, 8);
					case 3:
						return func_412(7, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(7, 14);
						}
						return func_412(7, 12);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

bool func_401(int iParam0)
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

void func_402(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_461(iParam0, iParam1))
		{
			if (func_462(iParam0, iParam1))
			{
				if (func_463(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_464(iParam0);
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

void func_403(int iParam0, int iParam1, bool bParam2)
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

void func_404(int iParam0, bool bParam1)
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

void func_405(int iParam0, int iParam1)
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

struct<4> /*32*/ func_406(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (*iParam0)
	{
		case 0:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(0, 0);
					case 1:
						return func_412(0, 4);
					case 2:
						return func_412(0, 8);
					case 3:
						return func_412(0, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(0, 14);
						}
						return func_412(0, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(1, 0);
					case 1:
						return func_412(1, 4);
					case 2:
						return func_412(1, 8);
					case 3:
						return func_412(1, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(1, 14);
						}
						return func_412(1, 12);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(2, 0);
					case 1:
						return func_412(2, 4);
					case 2:
						return func_412(2, 8);
					case 3:
						return func_412(2, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(2, 14);
						}
						return func_412(2, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(3, 0);
					case 1:
						return func_412(3, 4);
					case 2:
						return func_412(3, 8);
					case 3:
						return func_412(3, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(3, 14);
						}
						return func_412(3, 12);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(4, 0);
					case 1:
						return func_412(4, 4);
					case 2:
						return func_412(4, 8);
					case 3:
						return func_412(4, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(4, 14);
						}
						return func_412(4, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(5, 0);
					case 1:
						return func_412(5, 4);
					case 2:
						return func_412(5, 8);
					case 3:
						return func_412(5, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(5, 14);
						}
						return func_412(5, 12);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(6, 0);
					case 1:
						return func_412(6, 4);
					case 2:
						return func_412(6, 8);
					case 3:
						return func_412(6, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(6, 14);
						}
						return func_412(6, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(7, 0);
					case 1:
						return func_412(7, 4);
					case 2:
						return func_412(7, 8);
					case 3:
						return func_412(7, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(7, 14);
						}
						return func_412(7, 12);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

bool func_407(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_408(int iParam0)
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

int func_409(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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
		sVar0 = { func_465(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_466((398 + iVar28), 1);
			if (func_467(iParam0, &sVar0, iVar5, 0))
			{
				if (func_468(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_469(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_470(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_471(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_472(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_473(iParam0, iParam1);
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

void func_410(int iParam0, int iParam1, float fParam2)
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
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_411(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

struct<4> /*32*/ func_412(int iParam0, int iParam1)
{
	return func_474(iParam0, iParam1);
}

int func_413(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_414(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_475(iParam2, 1, iVar0);
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
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_476(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_477(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_478(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_477(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_479(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_477(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_480(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_477(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_89(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & (1 << 19) == 0))
		{
			if (!iParam2->f_1 & (1 << 14) != 0)
			{
				*uParam3 = (1 << 14);
				func_477(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_481(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_482(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_477(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_483(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_477(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_484(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_477(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_484(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_477(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_485(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_477(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & (1 << 18) != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20.0f)
			{
				if (func_486(&iParam0, iParam2))
				{
					*uParam3 = (1 << 12);
					func_477(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_487(iParam2, 4000))
				{
					if (func_488(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) & func_489(iParam2, iParam0) && func_490(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_477(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4.0f)
			{
				if (func_488(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) & func_489(iParam2, iParam0) && func_490(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_477(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & (1 << 17) == 0)
						{
							if (func_491(iParam0, Global_1935630.f_41))
							{
								func_492();
								*uParam3 = 2;
								func_477(iParam0, iParam2, *uParam3);
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
					if (*iParam2 & (1 << 17) == 0)
					{
						if (func_491(iParam0, Global_1935630.f_41))
						{
							func_492();
							*uParam3 = 2;
							func_477(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10.0f)
			{
				if (func_493(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_181() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_492();
						*uParam3 = 2;
						func_477(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & (1 << 17) == 0)
				{
					if (func_494())
					{
						if (func_491(iParam0, Global_1935630.f_42))
						{
							func_492();
							*uParam3 = 2;
							func_477(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & (1 << 10) != 0)
		{
			if (func_495(iParam2, iParam0))
			{
				*uParam3 = (1 << 10);
				func_477(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & (1 << 11) != 0)
			{
				if (func_496(iParam0, iParam1, iParam2))
				{
					*uParam3 = (1 << 11);
					func_477(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_497(iParam0, iParam2))
					{
						*uParam3 = (1 << 13);
						func_477(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_498(iParam0, iParam2))
				{
					*uParam3 = (1 << 15);
					func_477(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12.0f)
		{
			if (*iParam2 & (1 << 20) != 0)
			{
				if (func_499(iParam2, 4000))
				{
					if (func_500(&iParam0, iParam2))
					{
						*uParam3 = (1 << 9);
						func_477(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & (1 << 10) != 0)
			{
				if (func_501(iParam0, iParam2))
				{
					*uParam3 = (1 << 16);
					iParam2->f_4 = 0;
					func_477(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_502(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_477(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

int func_415(var uParam0, var uParam1)
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

	uParam1->f_10 = func_453(uParam1->f_10);
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
	bVar0 = func_318();
	if (*uParam1)
	{
		if (bVar0 && !func_458(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_503(5))
			{
				func_504(5);
				func_505(5);
				func_506(0);
				func_507(0);
			}
		}
	}
	if (func_508(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_458(Global_1835011[37 /*74*/].f_1, 1)) && !func_458(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_458(Global_1835011[43 /*74*/].f_1, 1)) && !func_458(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_509(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_510(iVar1))
	{
		bVar3 = true;
		if (func_511(iVar1))
		{
			bVar4 = true;
		}
		if (func_512(iVar1))
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
				func_513(uParam1->f_10);
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
			if (!func_503(0) && func_503(1))
			{
				func_514(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_515())
			{
				func_516();
			}
			func_506(0);
			func_507(0);
			func_517(uParam1->f_6);
		}
	}
	if (!func_510(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_518(uParam1->f_10) == 0 || func_519(uParam1->f_10) == 0) || func_520(uParam1->f_10) == 0)
			{
				func_521(uParam1->f_10);
			}
			func_522(uParam1->f_10);
			func_523(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_509(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_510(iVar1))
	{
		bVar3 = true;
		if (func_511(iVar1))
		{
			bVar4 = true;
		}
		if (func_512(iVar1))
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
	if (func_524(uParam1->f_10))
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
			sVar8 = { func_525(uParam1->f_10) /*2*/ };
			sVar10 = { func_526() /*6*/ };
			func_527(iVar2, &sVar8, &sVar10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_369(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_528(uParam1->f_10);
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
	func_367(uParam1->f_10);
	if (func_369(uParam1->f_10))
	{
		iVar16 = func_368(uParam1->f_10);
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

void func_416()
{
	CAM::_0x88544C0E3291DCAE(true);
	func_529();
}

bool func_417(var uParam0)
{
	if ((Global_1935630.f_26 || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, (1 << 14)) > 0) || func_89(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_418(var uParam0)
{
	if (!func_30(uParam0, (1 << 17)))
	{
		if (Global_1935630.f_40 == 0)
		{
			if (!func_30(uParam0, (1 << 24)) || uParam0->f_20 < 85.0f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_419(var uParam0)
{
	if (func_530(50))
	{
		if (func_531(uParam0->f_209, 1, 8, 0))
		{
			return true;
		}
	}
	if (func_532())
	{
		return true;
	}
	if (Global_1430231.f_4)
	{
		func_533(21);
		return true;
	}
	if (func_183(Global_1392581.f_3, 4) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		func_533(22);
		return true;
	}
	return false;
}

bool func_420(var uParam0)
{
	if (!func_30(uParam0, (1 << 18)))
	{
		if (uParam0->f_20 < 85.0f)
		{
			if (func_534(uParam0, 85.0f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_421(var uParam0)
{
	if (!func_30(uParam0, (1 << 19)))
	{
		if (uParam0->f_20 < 85.0f)
		{
			if (func_535(uParam0, 85.0f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_422(var uParam0)
{
	if (!func_56(uParam0->f_151))
	{
		if (uParam0->f_20 < 85.0f)
		{
			if (func_536(uParam0->f_151, uParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_423(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_424(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

Vector3 func_425(Vector3 vParam0)
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

void func_426(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = iParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

bool func_427(int iParam0, int iParam1)
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

bool func_428(int iParam0)
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
	if (func_427(iParam0, joaat("SCRIPT_TASK_HORSE_ACTION")))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_429(int iParam0, Vector3 vParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	return func_537(vVar0, vVar3, vParam1);
}

void func_430(var uParam0, int iParam1)
{
	func_538(uParam0, iParam1);
}

bool func_431(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_427(iParam0, joaat("SCRIPT_TASK_HORSE_ACTION")))
	{
		return true;
	}
	fVar0 = TASK::_GET_SCRIPT_TASK_ACTION_TIME(iParam0, joaat("SCRIPT_TASK_HORSE_ACTION"));
	if (func_274(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_274(iParam1, 256))
	{
		if (fVar0 >= 1.0f)
		{
			return true;
		}
		return false;
	}
	if (func_274(iParam1, (1 << 11)))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_432(var uParam0, int iParam1)
{
	func_539(uParam0, iParam1);
}

struct<4> /*32*/ func_433(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (*iParam0)
	{
		case 0:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(0, 2);
					case 1:
						return func_412(0, 6);
					case 2:
						return func_412(0, 9);
					case 3:
						return func_412(0, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(0, 15);
						}
						return func_412(0, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(1, 2);
					case 1:
						return func_412(1, 6);
					case 2:
						return func_412(1, 9);
					case 3:
						return func_412(1, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(1, 15);
						}
						return func_412(1, 13);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(2, 2);
					case 1:
						return func_412(2, 6);
					case 2:
						return func_412(2, 9);
					case 3:
						return func_412(2, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(2, 15);
						}
						return func_412(2, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(3, 2);
					case 1:
						return func_412(3, 6);
					case 2:
						return func_412(3, 9);
					case 3:
						return func_412(3, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(3, 15);
						}
						return func_412(3, 13);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(4, 2);
					case 1:
						return func_412(4, 6);
					case 2:
						return func_412(4, 9);
					case 3:
						return func_412(4, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(4, 15);
						}
						return func_412(4, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(5, 2);
					case 1:
						return func_412(5, 6);
					case 2:
						return func_412(5, 9);
					case 3:
						return func_412(5, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(5, 15);
						}
						return func_412(5, 13);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(6, 2);
					case 1:
						return func_412(6, 6);
					case 2:
						return func_412(6, 9);
					case 3:
						return func_412(6, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(6, 15);
						}
						return func_412(6, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(7, 2);
					case 1:
						return func_412(7, 6);
					case 2:
						return func_412(7, 9);
					case 3:
						return func_412(7, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(7, 15);
						}
						return func_412(7, 13);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

struct<4> /*32*/ func_434(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (*iParam0)
	{
		case 0:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(0, 3);
					case 1:
						return func_412(0, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(1, 3);
					case 1:
						return func_412(1, 7);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(2, 3);
					case 1:
						return func_412(2, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(3, 3);
					case 1:
						return func_412(3, 7);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(4, 3);
					case 1:
						return func_412(4, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(5, 3);
					case 1:
						return func_412(5, 7);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(6, 3);
					case 1:
						return func_412(6, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(7, 3);
					case 1:
						return func_412(7, 7);
					default:
						break;
				}
			}
			break;
	}
	return sVar0;
}

Vector3 func_435(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	return FloatToVector((1.0f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

bool func_436(Vector3 vParam0, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam3;
	sVar0.f_1 = iParam4;
	sVar0.f_2 = iParam8;
	sVar0.f_3 = iParam5;
	sVar0.f_4 = iParam6;
	sVar0.f_5 = iParam7;
	return func_540(vParam0, &sVar0);
}

bool func_437(int iParam0)
{
	return Global_1310750.f_16035 & iParam0 != 0;
}

bool func_438(int iParam0)
{
	return func_307(iParam0, Global_1310750.f_16072 | 64);
}

void func_439(int iParam0)
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

int func_440(int iParam0)
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

bool func_441(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_442(int iParam0, int iParam1, bool bParam2, int iParam3)
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
				if (iParam3 == -1 || iParam3 == func_272(&sLocal_274, iVar2))
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

int func_443(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_225())
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
				if (func_377(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_387(iParam0, iParam1, 1, 1);
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
				if (func_541(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_543(func_542(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_444(int iParam0)
{
	return Global_40.f_9632.f_184[iParam0];
}

void func_445(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;
	int iVar4;

	sVar2 = { func_158(joaat("TOTAL_PLAYING_TIME")) /*2*/ };
	if (STATS::STAT_ID_GET_INT(&sVar2, &iVar0))
	{
		iVar1 = STATS::_STAT_CALCULATE_COOLDOWN(iVar0);
		Global_40.f_9632[iParam0 /*4*/].f_3 = iVar1;
		if (bParam1)
		{
			iVar4 = func_284(iParam0, 0);
			iVar4 = BUILTIN::FLOOR((0.666f * (float)iVar4));
			Global_40.f_9632[iParam0 /*4*/].f_3 += iVar4;
		}
		else
		{
			Global_40.f_9632[iParam0 /*4*/].f_3 += func_284(iParam0, 0);
		}
	}
}

int func_446(int iParam0)
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

int func_447(int iParam0)
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

int func_448(int iParam0)
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

int func_449(int iParam0)
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

int func_450(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

void func_451(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_452(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

int func_453(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_454(int iParam0, int iParam1)
{
	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 -= Global_1900383[iParam0 /*45*/].f_24 & iParam1;
}

void func_455()
{
	if (func_510(0))
	{
		func_544(0);
	}
	if (func_510(1))
	{
		func_544(1);
	}
	if (func_510(5))
	{
		func_544(5);
	}
	if (func_510(6))
	{
		func_545(6);
	}
}

int func_456(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_457(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_546(iParam0, iParam1, 0.0f))
		{
			return false;
		}
	}
	if (!func_342(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

bool func_458(int iParam0, bool bParam1)
{
	switch (func_547(iParam0))
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

bool func_459(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_460(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
		if (func_548(vParam0))
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
	func_549(iVar0, bParam8);
	return iVar0;
}

bool func_461(int iParam0, int iParam1)
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

bool func_462(int iParam0, int iParam1)
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

bool func_463(int iParam0, int iParam1)
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
	if (!func_461(iParam0, iVar0))
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

void func_464(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<5> /*40*/ func_465(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_550(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_551(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_469(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_552(bParam1) /*4*/ };
			if (bParam2 && func_553(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_467(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_467(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_468(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_554(bParam1) /*4*/ };
			switch (func_555(iParam0))
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
			if (func_556(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_469(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_556(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_469(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_557(sVar0, &sVar27, bParam1, 0))
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

int func_466(int iParam0, int iParam1)
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
			return 61132362;
		case 446:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
		case 447:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
		case 448:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
		case 449:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
		case 450:
			return 1136146715;
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
			return 1471419228;
		case 459:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
		case 460:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
		case 461:
			return 1911050315;
		case 462:
			return -1343525599;
		case 463:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
		case 464:
			return 763162704;
		case 465:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
		case 466:
			return 526744654;
		case 467:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
		case 468:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
		case 469:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
		case 470:
			return 853355463;
		case 471:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
		case 472:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
		case 473:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
		case 474:
			return -585289073;
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
			return -2145069367;
		case 491:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
		case 492:
			return -2117214398;
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
			return 302954672;
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
			return 293062146;
		case 532:
			return 95360094;
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
			return 1670843243;
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
			return -832337898;
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
			return 1380479304;
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

bool func_467(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_558(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_468(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_559(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_469(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_560(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_561(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_470(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_562(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_557(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_471(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_561(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_471(bool bParam0)
{
	if (func_319() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_561(bParam0));
}

int func_472(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_563(iParam0))
	{
		return 0;
	}
	if (!func_471(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_473(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_413(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

struct<4> /*32*/ func_474(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_564(iParam0, iParam1) /*3*/ };
	sVar0.f_3 = func_565(iParam0, iParam1);
	return sVar0;
}

void func_475(int iParam0, bool bParam1, int iParam2)
{
	func_566(iParam2);
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
		iParam0->f_13 = func_567(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & (1 << 25) != 0)
				{
					if (iParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_240(iParam0, (1 << 25));
						}
					}
					else if (!*iParam0 & (1 << 13) != 0)
					{
						if (func_568(1))
						{
							func_240(iParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_568(1) || *iParam0 & (1 << 13) != 0))
				{
					func_239(iParam0, (1 << 25));
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
	if (!iParam0->f_1 & (1 << 10) != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_569(iParam0))
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
	func_570(iParam0);
}

bool func_476(int iParam0, int iParam1)
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
			if (!func_571(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_572(iParam0, iVar2) <= func_573(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_477(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		iParam1->f_10 = iParam0;
	}
	if (func_574(iParam2, 1, 1, 1, 0))
	{
		func_240(iParam1, (1 << 11));
	}
	iParam1->f_16 = iParam2;
	func_575(iParam1, 1);
	func_529();
}

bool func_478(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_576(iParam0, !*iParam1 & (1 << 28) != 0, !*iParam1 & (1 << 29) != 0, !*iParam1 & (1 << 30) != 0, 0, 0))
		{
			if (iParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (iParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_577(iParam1);
			if (func_578(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_579(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_575(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_575(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_479(int iParam0, int iParam1, int iParam2)
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
	if (func_580(iParam1, !*iParam2 & (1 << 28) != 0, !*iParam2 & (1 << 29) != 0, !*iParam2 & (1 << 30) != 0, 0))
	{
		if (iParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (iParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_577(iParam2);
		if (func_578(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_579(iParam2)
				{
					func_575(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_480(int iParam0, int iParam1)
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
	if (func_571(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_579(iParam1)
		{
			fVar3 = func_577(iParam1);
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

bool func_481(int iParam0, float fParam1)
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

bool func_482(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_581(iParam2);
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
			if (func_490(iParam2, iParam1))
			{
				func_575(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_483(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < (float)func_582(iParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_490(iParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_575(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_484(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_583(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_575(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_575(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_584(iParam1, vVar0, vVar4))
					{
						func_575(iParam2, 1);
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
					func_575(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_584(iParam1, vVar0, vVar7))
					{
						func_575(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_485(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2[2];
	Vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	bVar12 = *iParam1 & (1 << 12) != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_571(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_585(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_586(Global_1935630.f_34[iVar0]))
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
			if (func_587(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_588(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_589(iParam1, iParam0, fVar1, iVar0))
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

bool func_486(int iParam0, int iParam1)
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

bool func_487(int iParam0, int iParam1)
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

int func_488(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_590(iVar0, &iVar2))
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
	if (func_591(iVar0, iParam0))
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
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_489(int iParam0, int iParam1)
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

bool func_490(int iParam0, int iParam1)
{
	if (func_592(iParam0))
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
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
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

bool func_491(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_387(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_492()
{
}

bool func_493(int iParam0, int iParam1)
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
		if (func_593(iVar0, iParam1, vVar1))
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

bool func_494()
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

bool func_495(int iParam0, int iParam1)
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
	fVar0 = func_573(iParam0);
	if (iParam0->f_12 > func_230(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_594(iParam1);
	iVar1 = func_595(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_496(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4.0f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & (1 << 19) != false;
	bVar2 = *iParam2 & 128 != false;
	return func_596(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_497(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*iParam1 & (1 << 26) != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*iParam1 & (1 << 25) != 0)
	{
		if (func_597(iParam0, iParam1, 1))
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
					if (!func_598(iParam1, iParam0))
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

bool func_498(int iParam0, int iParam1)
{
	if (!func_599(0))
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

bool func_499(int iParam0, int iParam1)
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

bool func_500(int iParam0, int iParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_501(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_181();
	}
	else if (func_181() - iParam1->f_4) > func_600(iParam1)
	{
		return func_601(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_502(int iParam0, int iParam1)
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

bool func_503(int iParam0)
{
	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_520(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_504(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_510(iParam0))
	{
		return;
	}
	iVar0 = func_509(iParam0);
	func_602(iParam0);
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_IS_PED_MODEL_SUPPRESSED(iVar1))
	{
		if (!func_603(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_604(iParam0, 0);
	func_370(iParam0);
}

void func_505(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;

	iParam0 = func_453(iParam0);
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
	func_605(&sVar0);
	func_606(iParam0, sVar0);
	func_607(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_608(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_609(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_610(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_611(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_612(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_613(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_614(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_615(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
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

void func_506(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_507(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_508(Vector3 vParam0)
{
	return func_616(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_509(int iParam0)
{
	iParam0 = func_453(iParam0);
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

bool func_510(int iParam0)
{
	iParam0 = func_453(iParam0);
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

bool func_511(int iParam0)
{
	int iVar0;

	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_510(iParam0))
	{
		return false;
	}
	iVar0 = func_509(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_512(int iParam0)
{
	int iVar0;

	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_510(iParam0))
	{
		return false;
	}
	iVar0 = func_509(iParam0);
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

void func_513(int iParam0)
{
	int iVar0;

	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_510(iParam0))
	{
		return;
	}
	iVar0 = func_509(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_514(int iParam0, int iParam1)
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
	func_545(iParam0);
	func_545(iParam0);
	func_617(iParam0, iParam1);
	func_618(iParam0, iParam1);
	func_619(iParam0, iParam1);
	iVar1 = func_509(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_620(iVar1);
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
	iVar3 = func_509(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_620(iVar3);
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
	func_455();
}

bool func_515()
{
	int iVar0;

	iVar0 = func_621();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_516()
{
	int iVar0;

	iVar0 = func_621();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_622(0);
}

void func_517(Vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 /*3*/ };
}

int func_518(int iParam0)
{
	iParam0 = func_453(iParam0);
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

int func_519(int iParam0)
{
	iParam0 = func_453(iParam0);
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

int func_520(int iParam0)
{
	iParam0 = func_453(iParam0);
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

void func_521(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_623(&uVar0, &uVar1, &uVar2);
	func_624(iParam0, uVar0);
	func_625(iParam0, uVar1);
	func_626(iParam0, uVar2);
	func_627(iParam0, 1);
	func_628(iParam0, 1);
}

void func_522(int iParam0)
{
	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_629(iParam0, 1);
}

void func_523(int iParam0, Vector3 vParam1, var uParam4)
{
	iParam0 = func_453(iParam0);
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

bool func_524(int iParam0)
{
	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_630(iParam0, 1);
}

struct<2> /*16*/ func_525(int iParam0)
{
	struct<2> /*16*/ sVar0;
	var uVar2;
	var uVar3;

	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return sVar0;
	}
	if (iParam0 >= 7)
	{
		return sVar0;
	}
	if (!func_631(iParam0, &uVar2))
	{
	}
	if (!func_632(iParam0, &uVar3))
	{
	}
	sVar0.f_0 = uVar2;
	sVar0.f_1 = uVar3;
	return sVar0;
}

struct<6> /*48*/ func_526()
{
	struct<6> /*48*/ sVar0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_633(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		sVar0.f_4 = uVar6;
	}
	if (func_633(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		sVar0.f_0 = uVar7;
	}
	if (func_633(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		sVar0.f_2 = uVar8;
	}
	if (func_633(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		sVar0.f_5 = uVar9;
	}
	if (func_633(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		sVar0.f_3 = uVar10;
	}
	if (func_633(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		sVar0.f_1 = uVar11;
	}
	return sVar0;
}

void func_527(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_634(iParam0);
	func_635(iParam0, uParam1);
	func_636(iParam0);
	func_637(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_638(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

void func_528(int iParam0)
{
	iParam0 = func_453(iParam0);
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

void func_529()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_530(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

bool func_531(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
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

bool func_532()
{
	return Global_1310750.f_16077 != 0;
}

void func_533(int iParam0)
{
	Global_1393447.f_1 = iParam0;
}

int func_534(var uParam0, float fParam1, int iParam2)
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
	return func_639(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584, bVar6, iParam2);
}

bool func_535(var uParam0, float fParam1, int iParam2)
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
		iVar18 = func_640(&uVar0, &uVar6, 5, iParam2);
	}
	else
	{
		iVar18 = func_641(&uVar0, &uVar6, 5, uParam0->f_209, fParam1);
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
					if (func_382(vVar21, vVar24, 5.0f, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(iVar27, uParam0->f_209, 40.0f))
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

bool func_536(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;

	vVar2 = { func_643(func_642()) /*3*/ };
	fVar5 = 120.0f;
	fVar5 *= fVar5;
	if (func_385(Global_36, vVar2) < 40000.0f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_644(iVar0))
		{
			fVar6 = func_645(iVar0);
			if (fVar6 <= 10000.0f && fVar6 > 0.0f)
			{
				iVar1 = func_646(iVar0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					return false;
				}
				if (func_385(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), vVar2) > fVar5)
				{
					fVar7 = func_220(iVar1, Global_36, 1);
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

bool func_537(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, var uParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

void func_538(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_539(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_540(Vector3 vParam0, var uParam3)
{
	return AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(vParam0, uParam3);
}

bool func_541(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_542(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_647(iParam0, &sVar0);
}

int func_543(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_544(int iParam0)
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
	iVar0 = func_509(iParam0);
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
	if (func_630(iParam0, 64))
	{
		func_545(iParam0);
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
	bVar3 = func_648(42);
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
				func_649(&(Global_1900383[iParam0 /*45*/].f_27));
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
		func_545(iParam0);
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
		if (func_650(1) < 1)
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
		func_651(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_630(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_652(iParam0);
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
	fVar15 = func_653(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_654(iParam0))
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
		func_655(Global_1900383[iParam0 /*45*/].f_26);
		func_656(Global_1900383[iParam0 /*45*/].f_26);
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
	if (func_657(iVar0) && !bVar9)
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
	iVar21 = func_650(iParam0);
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

void func_545(int iParam0)
{
	iParam0 = func_453(iParam0);
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

bool func_546(int iParam0, int iParam1, float fParam2)
{
	return func_658(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_547(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_659(iParam0);
}

bool func_548(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_549(int iParam0, bool bParam1)
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

struct<4> /*32*/ func_550(bool bParam0)
{
	return func_469(joaat("CHARACTER"), func_660(), joaat("SLOTID_NONE"), bParam0);
}

int func_551(int iParam0)
{
	Vector3 vVar0;

	if (!func_560(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> /*32*/ func_552(bool bParam0)
{
	int iVar0;

	iVar0 = func_561(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_469(joaat("CARRIED_WEAPONS"), func_550(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_469(joaat("CARRIED_WEAPONS"), func_550(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_469(joaat("CARRIED_WEAPONS"), func_550(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_553(int iParam0, bool bParam1)
{
	if (func_555(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_648(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_554(bool bParam0)
{
	int iVar0;

	iVar0 = func_561(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_469(joaat("EMOTE_ITEM"), func_550(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_469(joaat("EMOTE_ITEM"), func_550(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

int func_555(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_560(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_556(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_555(iParam0);
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

bool func_557(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_561(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_558(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_560(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_469(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_561(bParam6), &sVar0, false);
	return iVar4;
}

bool func_559(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_561(0);
	*uParam1 = { func_469(iParam0, func_552(0), iParam3, 0) /*4*/ };
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

bool func_560(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_561(bool bParam0)
{
	if (func_319() == -1)
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

bool func_562(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_563(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

Vector3 func_564(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 336.1806f, 292.4605f, 119.6617f };
				case 1:
					return { 334.9665f, 284.7382f, 118.1679f };
				case 2:
					return { 343.691f, 295.5359f, 117.5653f };
				case 3:
					return { 329.9181f, 222.0633f, 102.1938f };
				case 4:
					return { 337.8624f, 294.8059f, 119.5307f };
				case 5:
					return { 336.897f, 285.3664f, 118.0265f };
				case 6:
					return { 343.1613f, 294.4232f, 117.4547f };
				case 7:
					return { 331.2499f, 223.0155f, 102.1185f };
				case 8:
					return { 370.8422f, 305.8814f, 110.0554f };
				case 9:
					return { 375.1672f, 251.0446f, 100.2551f };
				case 10:
					return { 372.4329f, 306.9809f, 109.5481f };
				case 11:
					return { 378.0452f, 250.7036f, 100.0399f };
				case 12:
					return { 373.5109f, 307.6108f, 109.1779f };
				case 13:
					return { 381.4464f, 250.7848f, 99.9247f };
				case 14:
					return { 528.7069f, 311.5555f, 107.9806f };
				case 15:
					return { 496.0487f, 339.9663f, 104.6636f };
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return { 321.4429f, 175.9194f, 111.9016f };
				case 1:
					return { 330.0614f, 192.032f, 108.7471f };
				case 2:
					return { 343.6927f, 206.4418f, 108.2634f };
				case 3:
					return { 343.1608f, 223.0363f, 101.6018f };
				case 4:
					return { 319.6173f, 174.6009f, 111.4609f };
				case 5:
					return { 328.1115f, 192.8681f, 108.0663f };
				case 6:
					return { 342.1098f, 206.0049f, 108.061f };
				case 7:
					return { 343.2163f, 221.9266f, 101.7214f };
				case 8:
					return { 300.6498f, 164.4528f, 106.5809f };
				case 9:
					return { 294.1143f, 197.8797f, 100.9933f };
				case 10:
					return { 298.0547f, 165.4312f, 105.5265f };
				case 11:
					return { 289.5424f, 197.5843f, 100.6632f };
				case 12:
					return { 295.222f, 166.1819f, 104.5714f };
				case 13:
					return { 286.1267f, 198.291f, 100.4247f };
				case 14:
					return { 295.222f, 166.1819f, 104.5714f };
				case 15:
					return { 286.0969f, 198.3144f, 100.4237f };
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return { -322.76f, 162.3597f, 63.1874f };
				case 1:
					return { -339.3938f, 143.7074f, 60.6733f };
				case 2:
					return { -314.5986f, 134.375f, 54.5632f };
				case 3:
					return { -332.9436f, 118.1599f, 45.9152f };
				case 4:
					return { -324.803f, 163.7174f, 63.2238f };
				case 5:
					return { -341.2525f, 145.6107f, 60.6236f };
				case 6:
					return { -312.255f, 132.7991f, 54.534f };
				case 7:
					return { -331.828f, 114.1646f, 45.6906f };
				case 8:
					return { -367.4267f, 222.9138f, 56.1989f };
				case 9:
					return { -386.9065f, 162.034f, 42.5372f };
				case 10:
					return { -369.0892f, 223.4581f, 56.1221f };
				case 11:
					return { -389.8853f, 163.3682f, 42.9922f };
				case 12:
					return { -370.6674f, 223.766f, 55.9066f };
				case 13:
					return { -392.4209f, 164.4365f, 43.1536f };
				case 14:
					return { -480.4709f, 216.1246f, 42.2113f };
				case 15:
					return { -404.1324f, 177.7652f, 44.1436f };
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return { -326.3528f, 146.6191f, 60.8614f };
				case 1:
					return { -341.824f, 146.3926f, 60.636f };
				case 2:
					return { -371.556f, 213.6188f, 53.796f };
				case 3:
					return { -393.0625f, 169.6177f, 43.5259f };
				case 4:
					return { -325.7378f, 148.0271f, 61.1155f };
				case 5:
					return { -340.9121f, 148.1152f, 60.95f };
				case 6:
					return { -372.5912f, 214.9758f, 54.0121f };
				case 7:
					return { -395.7979f, 172.8089f, 43.8452f };
				case 8:
					return { -317.5195f, 132.5747f, 52.7181f };
				case 9:
					return { -359.0844f, 91.2728f, 42.2513f };
				case 10:
					return { -316.528f, 130.3787f, 52.31f };
				case 11:
					return { -359.2873f, 89.2596f, 42.4034f };
				case 12:
					return { -314.7773f, 128.8436f, 52.3028f };
				case 13:
					return { -359.1373f, 87.0754f, 42.4582f };
				case 14:
					return { -371.5792f, 6.0027f, 41.959f };
				case 15:
					return { -359.9533f, 52.1384f, 42.8851f };
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return { -1113.994f, -385.158f, 101.0341f };
				case 1:
					return { -1087.399f, -388.0973f, 99.8029f };
				case 2:
					return { -1066.723f, -340.1548f, 83.1526f };
				case 3:
					return { -1043.116f, -412.524f, 78.2868f };
				case 4:
					return { -1114.165f, -386.3226f, 101.2027f };
				case 5:
					return { -1088.294f, -389.9013f, 99.692f };
				case 6:
					return { -1064.254f, -338.9531f, 83.0924f };
				case 7:
					return { -1041.966f, -412.5135f, 78.0508f };
				case 8:
					return { -1107.096f, -434.6443f, 88.1351f };
				case 9:
					return { -1064.544f, -444.6031f, 80.478f };
				case 10:
					return { -1107.028f, -435.9342f, 87.8316f };
				case 11:
					return { -1065.561f, -448.9233f, 80.4255f };
				case 12:
					return { -1107.067f, -437.4742f, 87.5085f };
				case 13:
					return { -1066.459f, -452.5898f, 80.4573f };
				case 14:
					return { -1046.403f, -513.9974f, 89.0409f };
				case 15:
					return { -1073.27f, -496.6796f, 80.5251f };
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return { -1113.623f, -384.7078f, 100.9443f };
				case 1:
					return { -1099.677f, -413.1754f, 100.8044f };
				case 2:
					return { -1133.508f, -414.0592f, 104.5394f };
				case 3:
					return { -1124.395f, -433.1193f, 93.8822f };
				case 4:
					return { -1103.743f, -378.3711f, 103.4512f };
				case 5:
					return { -1098.371f, -412.6312f, 100.7571f };
				case 6:
					return { -1131.75f, -414.1002f, 104.2211f };
				case 7:
					return { -1125.397f, -434.315f, 94.6095f };
				case 8:
					return { -1053.184f, -351.9357f, 80.8073f };
				case 9:
					return { -1031.145f, -395.0955f, 75.7791f };
				case 10:
					return { -1054.964f, -351.9594f, 81.4518f };
				case 11:
					return { -1034.999f, -393.429f, 76.1422f };
				case 12:
					return { -1056.513f, -352.2349f, 81.8687f };
				case 13:
					return { -1038.5f, -392.1666f, 76.6026f };
				case 14:
					return { -965.2475f, -353.9383f, 56.6761f };
				case 15:
					return { -981.348f, -377.6799f, 60.5792f };
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return { -1277.449f, 53.9643f, 68.8329f };
				case 1:
					return { -1269.053f, 48.5569f, 68.8537f };
				case 2:
					return { -1302.619f, 59.7101f, 67.9933f };
				case 3:
					return { -1289.288f, 23.9414f, 54.5197f };
				case 4:
					return { -1276.215f, 50.0829f, 68.8753f };
				case 5:
					return { -1269.462f, 47.6513f, 68.8932f };
				case 6:
					return { -1299.79f, 58.5882f, 68.1034f };
				case 7:
					return { -1287.465f, 31.9564f, 55.4006f };
				case 8:
					return { -1302.498f, 49.5016f, 64.5568f };
				case 9:
					return { -1276.457f, 22.3006f, 51.6915f };
				case 10:
					return { -1303.295f, 48.6405f, 64.2978f };
				case 11:
					return { -1276.789f, 17.9585f, 51.5095f };
				case 12:
					return { -1304.28f, 47.8441f, 64.1297f };
				case 13:
					return { -1277.497f, 12.8436f, 51.6442f };
				case 14:
					return { -1304.271f, 47.843f, 64.1267f };
				case 15:
					return { -1277.497f, 12.8436f, 51.6442f };
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return { -1275.11f, 50.3781f, 68.8596f };
				case 1:
					return { -1274.762f, 43.5397f, 68.9114f };
				case 2:
					return { -1302.026f, 59.7906f, 68.0557f };
				case 3:
					return { -1266.126f, 18.1849f, 50.0428f };
				case 4:
					return { -1272.264f, 50.9905f, 68.8133f };
				case 5:
					return { -1272.497f, 45.0918f, 68.9713f };
				case 6:
					return { -1301.012f, 58.928f, 68.0235f };
				case 7:
					return { -1266.702f, 14.9217f, 49.9844f };
				case 8:
					return { -1230.631f, 53.6273f, 44.0317f };
				case 9:
					return { -1245.051f, 12.4746f, 47.2041f };
				case 10:
					return { -1229.238f, 54.8197f, 43.8353f };
				case 11:
					return { -1243.702f, 11.1343f, 46.8984f };
				case 12:
					return { -1228.11f, 56.7175f, 43.5001f };
				case 13:
					return { -1242.204f, 9.0779f, 46.616f };
				case 14:
					return { -1228.093f, 56.7264f, 43.4958f };
				case 15:
					return { -1242.211f, 9.0771f, 46.6168f };
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_565(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 167.0514f;
				case 1:
					return 173.0514f;
				case 2:
					return 231.0514f;
				case 3:
					return 229.9106f;
				case 4:
					return 167.0514f;
				case 5:
					return 175.0514f;
				case 6:
					return -124.9486f;
				case 7:
					return 225.9106f;
				case 8:
					return 201.9035f;
				case 9:
					return 187.9035f;
				case 10:
					return 193.9035f;
				case 11:
					return 193.9035f;
				case 12:
					return 193.0514f;
				case 13:
					return 187.0514f;
				case 14:
					return 35.0514f;
				case 15:
					return 89.0514f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 9.0514f;
				case 1:
					return -44.9486f;
				case 2:
					return -0.0894f;
				case 3:
					return 57.0514f;
				case 4:
					return 349.0514f;
				case 5:
					return 333.0514f;
				case 6:
					return 3.9106f;
				case 7:
					return 77.0514f;
				case 8:
					return 339.9035f;
				case 9:
					return 335.9035f;
				case 10:
					return 337.9036f;
				case 11:
					return 353.9036f;
				case 12:
					return 339.0514f;
				case 13:
					return 343.0514f;
				case 14:
					return 57.0514f;
				case 15:
					return 341.0514f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 147.051f;
				case 1:
					return 137.051f;
				case 2:
					return 145.051f;
				case 3:
					return -240.0898f;
				case 4:
					return 141.051f;
				case 5:
					return 135.051f;
				case 6:
					return 157.051f;
				case 7:
					return 99.9102f;
				case 8:
					return 165.9031f;
				case 9:
					return -170.0969f;
				case 10:
					return 165.9032f;
				case 11:
					return 183.9032f;
				case 12:
					return 163.051f;
				case 13:
					return 183.051f;
				case 14:
					return 131.051f;
				case 15:
					return 235.051f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 89.051f;
				case 1:
					return 65.051f;
				case 2:
					return 137.051f;
				case 3:
					return 77.051f;
				case 4:
					return 65.051f;
				case 5:
					return 65.051f;
				case 6:
					return 127.051f;
				case 7:
					return 185.9102f;
				case 8:
					return 129.9031f;
				case 9:
					return -278.0969f;
				case 10:
					return 129.9032f;
				case 11:
					return 55.9032f;
				case 12:
					return 131.051f;
				case 13:
					return 37.051f;
				case 14:
					return 131.051f;
				case 15:
					return 15.051f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 261.051f;
				case 1:
					return 259.051f;
				case 2:
					return 207.051f;
				case 3:
					return -210.0898f;
				case 4:
					return 261.051f;
				case 5:
					return 237.051f;
				case 6:
					return 187.051f;
				case 7:
					return 155.9102f;
				case 8:
					return 277.9031f;
				case 9:
					return -106.0969f;
				case 10:
					return 267.9032f;
				case 11:
					return 261.9032f;
				case 12:
					return 265.051f;
				case 13:
					return 269.051f;
				case 14:
					return 63.051f;
				case 15:
					return 23.051f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -98.949f;
				case 1:
					return -172.949f;
				case 2:
					return 179.051f;
				case 3:
					return -100.0898f;
				case 4:
					return 189.051f;
				case 5:
					return 215.051f;
				case 6:
					return 177.051f;
				case 7:
					return 259.9102f;
				case 8:
					return 199.9031f;
				case 9:
					return -166.0969f;
				case 10:
					return 203.9032f;
				case 11:
					return 197.9032f;
				case 12:
					return 205.051f;
				case 13:
					return 193.051f;
				case 14:
					return 209.051f;
				case 15:
					return 113.051f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 241.051f;
				case 1:
					return 253.051f;
				case 2:
					return 173.051f;
				case 3:
					return -108.0898f;
				case 4:
					return 253.051f;
				case 5:
					return 235.051f;
				case 6:
					return 147.051f;
				case 7:
					return 221.9102f;
				case 8:
					return 217.9031f;
				case 9:
					return -106.0969f;
				case 10:
					return 217.9032f;
				case 11:
					return 259.9032f;
				case 12:
					return 217.051f;
				case 13:
					return 261.051f;
				case 14:
					return 217.051f;
				case 15:
					return 261.051f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -178.949f;
				case 1:
					return -186.949f;
				case 2:
					return 157.051f;
				case 3:
					return -110.0898f;
				case 4:
					return 165.051f;
				case 5:
					return 181.051f;
				case 6:
					return 155.051f;
				case 7:
					return 255.9102f;
				case 8:
					return 179.9031f;
				case 9:
					return -248.0969f;
				case 10:
					return 175.9032f;
				case 11:
					return 133.9032f;
				case 12:
					return 185.051f;
				case 13:
					return 123.051f;
				case 14:
					return 189.051f;
				case 15:
					return 137.051f;
			}
			break;
	}
	return 0.0f;
}

void func_566(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_661();
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
			func_662(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_567(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_568(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_663(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_569(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_319() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_664(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_664(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_595(iVar0) == -1)
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

void func_570(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_665(iParam0);
	}
}

bool func_571(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_595(iParam2);
	}
	else
	{
		iVar1 = func_594(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_595(iParam0);
	}
	else
	{
		iVar0 = func_594(iParam0);
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

float func_572(int iParam0, int iParam1)
{
	return func_387(iParam0, iParam1, 1, 1);
}

float func_573(int iParam0)
{
	return iParam0->f_26;
}

bool func_574(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_575(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_240(iParam0, (1 << 27));
	}
	else
	{
		func_239(iParam0, (1 << 27));
	}
}

bool func_576(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_387(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_666(iVar0, 0)))
		{
			if (func_667(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_577(int iParam0)
{
	return iParam0->f_17;
}

bool func_578(int iParam0, int iParam1, float fParam2, float fParam3)
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
	if (*iParam0 & (1 << 15) != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_579(int iParam0)
{
	return iParam0->f_18;
}

bool func_580(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_666(iVar0, 0)))
		{
			if (func_668(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_581(int iParam0)
{
	return iParam0->f_23;
}

int func_582(int iParam0)
{
	return iParam0->f_21;
}

int func_583(int iParam0)
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
	if (*iParam0 & (1 << 24) != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_584(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_658(iParam0, vParam4, 0.5f))
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

int func_585(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
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
	if (func_669(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_586(int iParam0)
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

bool func_587(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_670(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5.0f;
	if (*iParam0 & (1 << 16) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_588(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_670(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10.0f;
	if (*iParam0 & (1 << 16) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_589(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_670(iParam1))
	{
		return false;
	}
	if (*iParam0 & (1 << 16) != 0)
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

bool func_590(int iParam0, int iParam1)
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

bool func_591(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_671(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_592(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_593(int iParam0, int iParam1, Vector3 vParam2)
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

int func_594(int iParam0)
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

int func_595(int iParam0)
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

int func_596(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_590(Global_35, &iVar1))
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
		fVar2 = func_387(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_387(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_597(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_663(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_598(iParam1, iVar0))
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
				if (!bParam2 || !func_598(iParam1, iVar1))
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

bool func_598(int iParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
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

bool func_599(int iParam0)
{
	if (func_672())
	{
		return false;
	}
	return func_458(Global_1347702[58 /*49*/].f_15, 1);
}

int func_600(int iParam0)
{
	return iParam0->f_20;
}

int func_601(int iParam0, int iParam1, bool bParam2, float fParam3)
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

void func_602(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;
	int iVar6;
	int iVar7;

	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_509(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_673(iVar6);
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

bool func_603(int iParam0)
{
	if (!func_674(iParam0))
	{
		return false;
	}
	if (!func_675())
	{
		return true;
	}
	return false;
}

void func_604(int iParam0, int iParam1)
{
	iParam0 = func_453(iParam0);
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

void func_605(var uParam0)
{
	*uParam0 = joaat("HORSE_EQUIPMENT_MANE_DEFAULT");
	uParam0->f_1 = joaat("HORSE_EQUIPMENT_TAIL_DEFAULT");
}

void func_606(int iParam0, struct<2> /*16*/ sParam1)
{
	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_676(iParam0, sParam1.f_0))
	{
	}
	if (!func_677(iParam0, sParam1.f_1))
	{
	}
}

void func_607(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_678(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_608(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_609(var uParam0)
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

void func_610(var uParam0)
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

void func_611(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_612(int iParam0, var uParam1)
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

void func_613(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1.0f;
}

void func_614(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_615(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_616(int iParam0)
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

void func_617(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_618(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_619(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;
	bool bVar58;
	int iVar59;

	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!func_679(iParam0, &sVar0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_679(iParam1, &sVar29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_680(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_681(sVar0, sVar0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_682(sVar0, sVar29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_620(int iParam0)
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
	if (func_683(iParam0))
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
	if (func_364(iParam0))
	{
		iVar3 = func_365(iParam0);
		if (func_684(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

int func_621()
{
	return Global_1900383.f_393;
}

void func_622(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

int func_623(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_318())
	{
		if (func_685())
		{
			bVar0 = false;
			if (!func_458(Global_1835011[15 /*74*/].f_1, 1) && !func_648(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_686();
				*iParam1 = func_687();
				*uParam2 = func_688();
				return 1;
			}
			else
			{
				*uParam0 = func_689();
				*iParam1 = func_690();
				*uParam2 = func_691();
				return 1;
			}
		}
		else if (func_672())
		{
			if (!func_458(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_692();
				*iParam1 = func_693();
				*uParam2 = func_694();
				return 1;
			}
			else
			{
				*uParam0 = func_695();
				*iParam1 = func_696();
				*uParam2 = func_697();
				return 1;
			}
		}
	}
	else if (func_685())
	{
		*uParam0 = func_698();
		*iParam1 = func_699();
		*uParam2 = func_700();
		return 1;
	}
	else if (func_672())
	{
		*uParam0 = func_701();
		*iParam1 = func_702();
		*uParam2 = func_703();
		return 1;
	}
	return 0;
}

void func_624(int iParam0, var uParam1)
{
	iParam0 = func_453(iParam0);
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

void func_625(int iParam0, var uParam1)
{
	iParam0 = func_453(iParam0);
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

void func_626(int iParam0, var uParam1)
{
	iParam0 = func_453(iParam0);
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

void func_627(int iParam0, int iParam1)
{
	iParam0 = func_453(iParam0);
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

void func_628(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_518(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_623(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_704(iParam1);
	iVar5 = func_509(iParam0);
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

void func_629(int iParam0, int iParam1)
{
	iParam0 = func_453(iParam0);
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

bool func_630(int iParam0, int iParam1)
{
	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_24 & iParam1 != 0;
}

bool func_631(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_679(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_705(sVar0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!func_560(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_632(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_679(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_705(sVar0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!func_560(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_633(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_706(856287005, iParam0))
	{
		return false;
	}
	sVar0 = { func_707() /*4*/ };
	*uParam1 = func_705(sVar0, iParam0, 0);
	if (!func_560(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_634(int iParam0)
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

void func_635(int iParam0, var uParam1)
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
	func_708(iParam0, *uParam1);
	func_708(iParam0, uParam1->f_1);
}

void func_636(int iParam0)
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

void func_637(int iParam0, var uParam1)
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
	func_708(iParam0, *uParam1);
	func_708(iParam0, uParam1->f_1);
	func_708(iParam0, uParam1->f_2);
	func_708(iParam0, uParam1->f_3);
	func_708(iParam0, uParam1->f_4);
	func_708(iParam0, uParam1->f_5);
}

int func_638(int iParam0, int iParam1, bool bParam2)
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

int func_639(int iParam0, Vector3 vParam1, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)
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
		iVar12 = func_709(&iVar0, iParam0, iParam9, iVar0);
	}
	else
	{
		iVar12 = func_710(&iVar0, iParam0, iVar0, vParam1, iParam4);
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
					if (func_382(vVar6, vVar9, iParam7, 0))
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

int func_640(var uParam0, int iParam1, int iParam2, int iParam3)
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
				if (func_711(iVar2))
				{
					if (!func_373(iVar2, iParam1))
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

int func_641(var uParam0, int iParam1, int iParam2, Vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	iVar1 = func_640(uParam0, iParam1, iParam2, iVar0);
	func_712(iVar0);
	return iVar1;
}

int func_642()
{
	return Global_40.f_4283;
}

Vector3 func_643(int iParam0)
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
			return func_713();
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_644(int iParam0)
{
	if (func_714(iParam0))
	{
		if (func_128(Global_1360165[iParam0 /*1157*/], 0))
		{
			return true;
		}
	}
	return false;
}

float func_645(int iParam0)
{
	if (!func_715(iParam0))
	{
		return 0.0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

int func_646(int iParam0)
{
	if (func_714(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_647(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_648(int iParam0)
{
	if (!func_716(iParam0))
	{
		return false;
	}
	return func_717(iParam0);
}

void func_649(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_719(func_718(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_685())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_672();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_650(int iParam0)
{
	iParam0 = func_453(iParam0);
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

void func_651(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_719(func_718(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_685())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_672())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_652(int iParam0)
{
	iParam0 = func_453(iParam0);
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

float func_653(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_654(int iParam0)
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

	iParam0 = func_453(iParam0);
	if (iParam0 == -1)
	{
		return -1.0f;
	}
	if (iParam0 >= 7)
	{
		return -1.0f;
	}
	iVar0 = func_518(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1.0f;
	}
	iVar1 = func_650(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_650(iParam0) + 1;
	fVar6 = func_720(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_721(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_655(int iParam0)
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

void func_656(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
}

bool func_657(int iParam0)
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

bool func_658(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

int func_659(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_722(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

struct<4> /*32*/ func_660()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_661()
{
	if (func_723())
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1954819.f_992[2];
	}
	return false;
}

void func_662(var uParam0, var uParam1)
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

bool func_663(bool bParam0, int iParam1, int iParam2)
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

int func_664(int iParam0)
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

void func_665(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_239(iParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_240(iParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_666(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_667(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_668(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_668(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_669(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_670(int iParam0)
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

int func_671(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_672()
{
	if (func_319() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_673(int iParam0)
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

bool func_674(int iParam0)
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

bool func_675()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_676(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_679(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_469(iParam1, sVar0, joaat("SLOTID_HORSE_MANE"), 0) /*4*/ };
	return func_724(sVar29, 1);
}

bool func_677(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_679(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_469(iParam1, sVar0, joaat("SLOTID_HORSE_TAIL"), 0) /*4*/ };
	return func_724(sVar29, 1);
}

void func_678(var uParam0)
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

bool func_679(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_725(iParam0))
	{
		return false;
	}
	iVar0 = func_680(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	sVar15 = { func_550(0) /*4*/ };
	if (!func_726(sVar15, iVar0, &sVar1, 0, 0))
	{
		return false;
	}
	if (!func_727(&sVar1, uParam1))
	{
		return false;
	}
	return true;
}

int func_680(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return joaat("SLOTID_ACTIVE_HORSE");
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_681(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> /*96*/ sVar0;
	struct<4> /*32*/ sVar14;

	if (!func_471(bParam10))
	{
		return func_728(sParam0, sParam4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_557(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (func_729(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_561(0), &sParam0, &sParam4, iParam8, sVar0.f_11, &sVar14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_724(sVar14, 1))
		{
		}
	}
	return true;
}

bool func_682(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	int iVar28;

	if (!func_471(bParam9))
	{
		return func_730(sParam0, sParam4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	if (func_729(&sParam0, &sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_557(sParam0, &sVar0, bParam9, 1) || !func_557(sParam4, &sVar14, bParam9, 1))
	{
		return false;
	}
	if (func_729(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return false;
	}
	iVar28 = func_561(0);
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

bool func_683(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_731(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_684(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

bool func_685()
{
	if (func_319() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_686()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_687()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_688()
{
	return 1;
}

int func_689()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_690()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_691()
{
	return 1;
}

int func_692()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_693()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_694()
{
	return 2;
}

int func_695()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_696()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_697()
{
	return 1;
}

int func_698()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_699()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_700()
{
	return 1;
}

int func_701()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_702()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_703()
{
	return 1;
}

void func_704(int iParam0)
{
	if (func_732() < iParam0)
	{
		func_733(iParam0);
	}
}

int func_705(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (func_734(sParam0, iParam4, &sVar0, iParam5))
	{
		return sVar0.f_4;
	}
	return 0;
}

bool func_706(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_555(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_735(iParam0);
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

struct<4> /*32*/ func_707()
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_550(0) /*4*/ };
	return func_469(856287005, sVar0, joaat("SLOTID_CARRIED_HORSE_EQUIPMENT"), 0);
}

void func_708(int iParam0, int iParam1)
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

int func_709(int iParam0, int iParam1, int iParam2, int iParam3)
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
			if (!func_736(iVar3, iParam1))
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

int func_710(int iParam0, int iParam1, int iParam2, Vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	iVar1 = func_709(iParam0, iParam1, iVar0, iParam2);
	func_712(iVar0);
	return iVar1;
}

bool func_711(int iParam0)
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

void func_712(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

Vector3 func_713()
{
	if (func_386(70))
	{
		return { -1634.252f, -1358.577f, 83.9077f };
	}
	if (func_386(73))
	{
		return { -1665.419f, -1346.258f, 84.11175f };
	}
	return { -1641.1f, -1359.979f, 83.4932f };
}

bool func_714(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_715(int iParam0)
{
	return iParam0 > -1;
}

bool func_716(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_717(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

char* func_718(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_737(37, iParam0))
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
	if (func_737(37, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_719(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_738(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_720(int iParam0)
{
	iParam0 = func_453(iParam0);
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

float func_721(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_722(int iParam0)
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

bool func_723()
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

bool func_724(struct<4> /*32*/ sParam0, bool bParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_471(0))
	{
		return func_739(sParam0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_557(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (sVar0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_561(0), &sParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_725(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = func_680(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1 = { func_550(0) /*4*/ };
	if (func_740(&sVar1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_726(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_561(bParam7);
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

bool func_727(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_561(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_728(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
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
	if (!func_557(sParam0, &sVar0, 1, 0))
	{
		return -1;
	}
	if (func_729(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_558(sVar0.f_4, sParam4, iParam8, 0);
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
	sVar16 = { func_741(&sVar0) /*17*/ };
	sVar16.f_4 = { sParam4 /*4*/ };
	sVar16.f_11 = iParam8;
	sVar16.f_10 = bParam10;
	iVar33 = func_742(joaat("MOVEITEMS"), &sVar16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_729(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_730(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
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
	if (func_729(&sParam0, &sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_557(sParam0, &sVar0, 1, 0) || !func_557(sParam4, &sVar14, 1, 0))
	{
		return -1;
	}
	if (func_729(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return -1;
	}
	sVar28 = { func_741(&sVar0) /*17*/ };
	sVar28.f_4 = { sVar14.f_5 /*4*/ };
	sVar28.f_11 = sVar14.f_9;
	sVar28.f_10 = sVar14.f_10 | iParam8;
	sVar45 = { func_741(&sVar14) /*17*/ };
	sVar45.f_4 = { sVar0.f_5 /*4*/ };
	sVar45.f_11 = sVar0.f_9;
	sVar45.f_10 = sVar0.f_10 | iParam8;
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, joaat("BASKET"), joaat("MOVEITEMS")))
		{
			if (func_743(iVar62, joaat("MOVEITEMS"), &sVar28) && func_743(iVar62, joaat("MOVEITEMS"), &sVar45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_744(iVar62, 1);
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
		iVar62 = func_742(joaat("MOVEITEMS"), &sVar28, 0);
		iVar62 = func_742(joaat("MOVEITEMS"), &sVar45, 0);
	}
	return iVar62;
}

bool func_731(int iParam0)
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

int func_732()
{
	return Global_40.f_1095.f_3135;
}

void func_733(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_734(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_561(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_557(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_735(int iParam0)
{
	int iVar0;

	if (!func_560(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_555(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_736(int iParam0, int iParam1)
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

bool func_737(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_745(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_746())
	{
		return func_745(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_745(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_738(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_739(struct<4> /*32*/ sParam0, bool bParam4, bool bParam5)
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
	if (!func_557(sParam0, &sVar1, 1, 0))
	{
		return iVar0;
	}
	if (sVar1.f_10 == bParam4)
	{
		return iVar0;
	}
	iVar15 = func_551(sVar1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		sVar16 = { func_747(sParam0, 1) /*29*/ };
		sVar16.f_10 = bParam4;
		iVar0 = func_748(joaat("UPDATE"), &sVar16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		sVar45 = { func_749(sParam0, 1) /*18*/ };
		sVar45.f_10 = bParam4;
		iVar0 = func_750(joaat("UPDATE"), &sVar45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		sVar63 = { func_741(&sVar1) /*17*/ };
		sVar63.f_10 = bParam4;
		iVar0 = func_742(joaat("UPDATE"), &sVar63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_740(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_561(bParam2), uParam0, iParam1);
}

struct<17> /*136*/ func_741(var uParam0)
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

int func_742(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_743(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_744(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_744(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_744(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_743(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_744(int iParam0, int iParam1)
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
	func_751(iParam0, iParam1);
}

bool func_745(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_746()
{
	return Global_1109000.f_245;
}

struct<29> /*232*/ func_747(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_561(bParam4), &uParam0, &sVar29, 29, 1))
	{
		return sVar0;
	}
	sVar0 = { func_741(&sVar29) /*17*/ };
	sVar0.f_17 = { sVar29.f_16 /*8*/ };
	sVar0.f_25 = sVar29.f_25;
	sVar0.f_26 = sVar29.f_27;
	sVar0.f_27 = sVar29.f_28;
	sVar0.f_28 = sVar29.f_24;
	return sVar0;
}

int func_748(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_752(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_744(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_744(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_744(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_749(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_561(bParam4), &uParam0, &sVar18, 15, 1))
	{
		return sVar0;
	}
	sVar0 = { func_741(&sVar18) /*17*/ };
	sVar0.f_17 = sVar18.f_14;
	return sVar0;
}

int func_750(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_753(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_744(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_744(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_744(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_751(int iParam0, int iParam1)
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

bool func_752(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_753(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

