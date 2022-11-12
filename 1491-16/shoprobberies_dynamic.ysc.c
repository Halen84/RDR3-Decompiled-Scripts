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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	struct<156> /*1248*/ sLocal_26 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -2, -1 } ;
	var uLocal_182 = 0;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
#pragma endregion

void __EntryFunction__()
{
	float fVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(vScriptParam_0);
	}
	while (true)
	{
		if (func_2())
		{
			func_1(vScriptParam_0);
		}
		func_3(&fVar0);
		if (sLocal_26.f_3 > 3)
		{
			func_4(&(sLocal_26.f_46));
			func_5(&(sLocal_26.f_46));
			func_6(&(sLocal_26.f_46));
		}
		switch (sLocal_26.f_3)
		{
			case 0:
				if (func_7(&vScriptParam_0))
				{
					if (func_8())
					{
						func_9(1);
					}
				}
				break;
			case 1:
				if (func_10())
				{
					func_11(0);
					func_9(3);
				}
				break;
			case 3:
				if (VOLUME::DOES_VOLUME_EXIST(sLocal_26.f_46.f_105))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_26.f_46.f_105, true, 0))
					{
						func_12(&(sLocal_26.f_46));
						func_13(&(sLocal_26.f_46));
						if (func_14(&(sLocal_26.f_46), 0))
						{
							func_15(8);
						}
						if (!func_16((1 << 27)))
						{
							if (sLocal_26.f_46.f_66 == 28)
							{
								if (func_17())
								{
									if (func_18(sLocal_26.f_46, 0) == 74 && PERSCHAR::_GET_PERSCHAR_MODEL_NAME(joaat("RHD_GENERAL_STORE")) == joaat("CS_MRPEARSON"))
									{
										sLocal_26.f_46.f_107 = "COMP_PEARSON";
									}
								}
							}
							func_15((1 << 27));
						}
						func_9(4);
					}
				}
				break;
			case 4:
				func_13(&(sLocal_26.f_46));
				func_19(&(sLocal_26.f_46));
				if (VOLUME::DOES_VOLUME_EXIST(sLocal_26.f_46.f_105))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_26.f_46.f_105, true, 0))
					{
						func_20(&(sLocal_26.f_46));
						func_21(&(sLocal_26.f_46));
						func_22(&(sLocal_26.f_46.f_7[0 /*21*/]), &(sLocal_26.f_46.f_29));
						func_9(3);
					}
					else
					{
						func_23(fVar0);
						if (!func_16((1 << 20)))
						{
							if (func_24())
							{
								func_25(&(sLocal_26.f_46));
								func_26(1, 0);
								func_27(&(sLocal_26.f_46), 0);
								func_28();
								if (sLocal_26.f_4 < 9)
								{
									func_29(9);
								}
								func_30(0);
								func_9(5);
							}
						}
					}
				}
				break;
			case 2:
				if (func_16((1 << 12)))
				{
					func_30(0);
					func_9(5);
				}
				else
				{
					if (func_31())
					{
						if (func_16(16))
						{
							func_9(4);
						}
						else
						{
							func_9(7);
						}
					}
					Jump @894; // curOff = 568
					if (func_32(sLocal_26.f_46, 0, 0))
					{
						PED::SET_PED_CONFIG_FLAG(sLocal_26.f_46, 130, true);
						PED::SET_PED_CONFIG_FLAG(sLocal_26.f_46, 315, true);
					}
					func_19(&(sLocal_26.f_46));
					if (func_33(fVar0))
					{
						func_34(&(sLocal_26.f_34));
						func_9(6);
					}
					Jump @894; // curOff = 637
					if (!func_35(&(sLocal_26.f_46), (1 << 24)))
					{
						if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 1.0f)
						{
							func_36(&(sLocal_26.f_46), 35.0f, 1.0f, 1);
							func_37(&(sLocal_26.f_46), (1 << 24));
						}
					}
					if (!func_16((1 << 22)))
					{
						if (func_38(0.0f, 1, sLocal_26.f_46, 1) && func_38(-4.0f, 1, 0, 0))
						{
							if (func_39(1))
							{
								func_40((1 << 18));
							}
							func_15((1 << 22));
						}
					}
					else if (!func_16((1 << 23)))
					{
						if ((func_38(0.0f, 1, sLocal_26.f_46, 1) && func_38(2.0f, 1, 0, 0)) && func_41(&(sLocal_26.f_34), 10.0f))
						{
							if (func_39(1))
							{
								func_40(64);
							}
							func_15((1 << 23));
						}
					}
					func_11(0);
					if (func_42(fVar0, 0, 0))
					{
						func_28();
						func_9(7);
					}
					else if (func_16((1 << 12)))
					{
						func_43();
					}
				}
				BUILTIN::WAIT(0);
				default:
					break;
		}
	}
}

void func_1(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (sLocal_26.f_46.f_106 != 0)
	{
		if (ENTITY::IS_MAP_ENTITY_PINNED(sLocal_26.f_46.f_106))
		{
			ENTITY::_UNPIN_MAP_ENTITY(sLocal_26.f_46.f_106);
		}
	}
	func_20(&(sLocal_26.f_46));
	Global_1914319.f_17371 = 0;
	if (func_16(1) || func_16((1 << 12)))
	{
		func_44(150, 1);
		func_45(&(sLocal_26.f_46));
	}
	if (func_32(sLocal_26.f_46, 0, 0))
	{
		if (iParam0 != -1 && func_46(iParam0, 1))
		{
			func_47(iParam0, 0, 1, 0, 0);
		}
		func_48(sLocal_26.f_46, 1);
		PED::SET_PED_CONFIG_FLAG(sLocal_26.f_46, 315, false);
	}
	if (func_32(sLocal_26.f_44, 0, 0))
	{
		if (func_16((1 << 15)))
		{
			func_49(&(sLocal_26.f_44), 1, 0, 1);
		}
	}
	func_11(0);
	Global_1914319.f_17371 = 0;
	if (func_50(sLocal_26.f_46.f_66))
	{
		if (func_51(sLocal_26.f_46.f_66, (1 << 10)))
		{
			func_52(sLocal_26.f_46.f_66, 0);
		}
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(sLocal_26.f_46.f_5))
	{
		TASK::_DELETE_SCENARIO_POINT(sLocal_26.f_46.f_5);
	}
	if (VOLUME::DOES_VOLUME_EXIST(sLocal_26.f_46.f_105))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(sLocal_26.f_46.f_105);
	}
	func_22(&(sLocal_26.f_46.f_7[0 /*21*/]), &(sLocal_26.f_46.f_29));
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar1 = iVar0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if ((sLocal_26.f_43 + 1 % 2) == 1)
	{
		if (func_53(sLocal_26.f_1, -1))
		{
			if (VOLUME::DOES_VOLUME_EXIST(sLocal_26.f_46.f_105))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, VOLUME::GET_VOLUME_COORDS(sLocal_26.f_46.f_105), false) >= 20.0f)
				{
					return true;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(sLocal_26.f_46))
			{
				if (func_54(sLocal_26.f_46, Global_36, 0) >= 20.0f)
				{
					return true;
				}
			}
		}
	}
	if (sLocal_26.f_3 > 0)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(sLocal_26.f_46.f_105) && !ENTITY::DOES_ENTITY_EXIST(sLocal_26.f_46))
		{
			return true;
		}
	}
	return false;
}

void func_3(float fParam0)
{
	float fVar0;

	func_55();
	if (func_56(&(sLocal_26.f_46)))
	{
		if (func_39(1))
		{
			func_40((1 << 11));
		}
	}
	if (func_57())
	{
		if (func_32(sLocal_26.f_46, 0, 1))
		{
			if (func_58())
			{
			}
			*fParam0 = func_54(sLocal_26.f_46, Global_36, 1);
		}
		if (!func_35(&(sLocal_26.f_46), (1 << 9)))
		{
			if (func_59())
			{
				if (func_35(&(sLocal_26.f_46), 32))
				{
					fVar0 = 3.0f;
				}
				else if (func_35(&(sLocal_26.f_46), 16))
				{
					fVar0 = 15.0f;
				}
				else if (func_35(&(sLocal_26.f_46), (1 << 12)))
				{
					fVar0 = 26.0f;
				}
				else
				{
					fVar0 = 29.0f;
				}
				if (func_60(&(sLocal_26.f_46), &(sLocal_26.f_40), fVar0, sLocal_26.f_46.f_66, sLocal_26.f_45, &(sLocal_26.f_44)))
				{
				}
			}
		}
		else
		{
			func_61(&(sLocal_26.f_46), sLocal_26.f_44);
		}
		if (sLocal_26.f_3 <= 6)
		{
			if (func_62())
			{
				func_22(&(sLocal_26.f_46.f_7[0 /*21*/]), &(sLocal_26.f_46.f_29));
				func_28();
				if (func_42(*fParam0, 0, 1.0f))
				{
					if (!func_16(1))
					{
						func_26(1, 1);
					}
					func_9(7);
				}
			}
			if (!func_35(&(sLocal_26.f_46), (1 << 12)) && func_63(&(sLocal_26.f_46), 0, 1))
			{
				func_36(&(sLocal_26.f_46), 14.0f, 30.0f, 1);
				func_64(&(sLocal_26.f_46));
				if (!func_16((1 << 9)))
				{
					func_65(1);
				}
				func_37(&(sLocal_26.f_46), (1 << 12));
			}
		}
	}
	func_66();
}

void func_4(var uParam0)
{
	if (func_35(uParam0, (1 << 20)))
	{
		return;
	}
	if (func_35(uParam0, (1 << 12)) || func_35(uParam0, 16))
	{
		if (Global_1935630.f_13)
		{
			func_37(uParam0, (1 << 20));
		}
	}
}

void func_5(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_105))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_105, true, 0))
	{
		return;
	}
	iVar0 = func_67(1);
	if (uParam0->f_99 < 0)
	{
		uParam0->f_99 = iVar0;
	}
	if (iVar0 > uParam0->f_99)
	{
		iVar1 = (iVar0 - uParam0->f_99);
		if (func_68(0))
		{
		}
		else
		{
			func_70(func_69(joaat("LOOTED"), joaat("CASH")), iVar1);
		}
		uParam0->f_99 = iVar0;
	}
}

void func_6(var uParam0)
{
	if (uParam0->f_68.f_6)
	{
		return;
	}
	if (func_71(&(uParam0->f_68.f_3)))
	{
		if (func_72(PLAYER::PLAYER_ID(), 1, 1, 0))
		{
			func_73(&(uParam0->f_68.f_3));
		}
	}
	if (func_41(&(uParam0->f_68.f_3), uParam0->f_68.f_2) && func_58())
	{
		func_74(uParam0, uParam0->f_68, 0, uParam0->f_68.f_1, 1, 0);
		uParam0->f_68.f_6 = 1;
	}
}

bool func_7(var uParam0)
{
	int iVar0;

	if (func_53(sLocal_26.f_1, -1) && !func_75(*uParam0))
	{
		return false;
	}
	sLocal_26.f_46.f_66 = uParam0->f_2;
	sLocal_26.f_1 = uParam0->f_1;
	sLocal_26.f_46.f_105 = Global_1914319.f_3[uParam0->f_1 /*446*/].f_25;
	if (!VOLUME::DOES_VOLUME_EXIST(sLocal_26.f_46.f_105))
	{
	}
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1914319.f_3[uParam0->f_1 /*446*/].f_11);
	if (INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
	}
	PED::_RESERVE_AMBIENT_PEDS(2);
	if (PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
		if (!func_32(sLocal_26.f_46, 0, 1))
		{
			sLocal_26.f_46 = func_76(*uParam0);
			if (!func_32(sLocal_26.f_46, 0, 1) && func_53(sLocal_26.f_1, -1))
			{
				return false;
			}
			func_77();
		}
		sLocal_26.f_45 = func_78(sLocal_26.f_46.f_66);
		func_79(sLocal_26.f_45);
		return true;
	}
	return false;
}

bool func_8()
{
	STREAMING::REQUEST_MODEL(joaat("P_CS_BILLSINGLE01BX"), false);
	func_80(&(sLocal_26.f_46));
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_26.f_46))
	{
		PED::_REQUEST_PED_EMOTIONAL_PRESET(sLocal_26.f_46, "TaskIntimidated_OnFoot");
	}
	return true;
}

void func_9(int iParam0)
{
	sLocal_26.f_3 = iParam0;
}

bool func_10()
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROBBERIES"))
	{
		return true;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BILLSINGLE01BX")))
	{
		return false;
	}
	if (!func_81(&(sLocal_26.f_46)))
	{
		return false;
	}
	func_82(&(sLocal_26.f_46));
	return true;
}

void func_11(bool bParam0)
{
	if (bParam0)
	{
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER"))
		{
			TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER", true);
		}
	}
	else if (TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER", false);
	}
}

void func_12(var uParam0)
{
	if (func_83(uParam0))
	{
		func_84(499, 0);
	}
}

void func_13(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_65 == 2)
	{
		iVar0 = func_85(uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_86(uParam0);
			return;
		}
	}
	switch (uParam0->f_65)
	{
		case 0:
			iVar1 = func_87(uParam0);
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			uParam0->f_106 = ENTITY::PIN_CLOSEST_MAP_ENTITY(iVar2, uParam0->f_79, 7);
			if (uParam0->f_106 != 0)
			{
				uParam0->f_65 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_106))
			{
				func_86(uParam0);
				if (func_35(uParam0, (1 << 25)))
				{
					uParam0->f_65 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

bool func_14(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_88(uParam0->f_66, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_15(int iParam0)
{
	sLocal_26.f_2 |= iParam0;
}

bool func_16(int iParam0)
{
	return sLocal_26.f_2 & iParam0 != 0;
}

bool func_17()
{
	if (func_89() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_18(int iParam0, bool bParam1)
{
	return func_90(iParam0, Global_1894899.f_2, bParam1);
}

void func_19(var uParam0)
{
	if (func_35(uParam0, (1 << 17)))
	{
		return;
	}
	if (!PED::GET_PED_CONFIG_FLAG(Global_35, 141, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
	}
	if (!PED::GET_PED_CONFIG_FLAG(Global_35, 308, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, true);
	}
	func_37(uParam0, (1 << 17));
}

void func_20(var uParam0)
{
	if (!func_35(uParam0, (1 << 17)))
	{
		return;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 141, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 308, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
	}
	func_91(uParam0, (1 << 17));
}

void func_21(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_22(int* iParam0, var uParam1)
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
	func_92(iParam0, uParam1, 1);
	func_93(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

void func_23(float fParam0)
{
	func_94(fParam0);
}

bool func_24()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	if (Global_1879534.f_1)
	{
		return false;
	}
	if (func_35(&(sLocal_26.f_46), (1 << 21)))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_26.f_46))
	{
		if (!func_32(sLocal_26.f_46, 0, 1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(sLocal_26.f_46, Global_35, true, true))
			{
				return true;
			}
			if (PED::IS_PED_HOGTIED(sLocal_26.f_46))
			{
				return true;
			}
		}
	}
	return false;
}

int func_25(var uParam0)
{
	int iVar0;

	iVar0 = func_95(uParam0->f_66);
	if (iVar0 == 6 || uParam0->f_66 == 82)
	{
		if (func_96() == 105 && func_97())
		{
			return 0;
		}
		else if (!uParam0->f_102)
		{
			uParam0->f_102 = 1;
		}
	}
	if (uParam0->f_102)
	{
		if ((func_38(0.0f, 1, *uParam0, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam0, 1)) && PED::IS_PED_FACING_PED(*uParam0, Global_35, 45.0f))
		{
			return 1;
		}
	}
	return 0;
}

void func_26(bool bParam0, bool bParam1)
{
	if (!func_16((1 << 11)) && !PED::IS_PED_DEAD_OR_DYING(sLocal_26.f_46, true))
	{
	}
	if (!func_16((1 << 9)))
	{
		func_65(bParam0);
	}
	if (bParam1)
	{
		if (func_98(sLocal_26.f_6.f_16))
		{
			func_99();
		}
	}
	PED::SET_PED_CONFIG_FLAG(sLocal_26.f_46, 235, true);
	PED::SET_PED_CONFIG_FLAG(sLocal_26.f_46, 234, true);
	func_100(sLocal_26.f_46, Global_36, 5, 0, 3);
	PED::_SET_PED_TARGET_ACTION_DISABLE_FLAG(sLocal_26.f_46, 32);
	if (!bParam0)
	{
		func_25(&(sLocal_26.f_46));
		func_101(&(sLocal_26.f_46), 0, 0, 0, 0);
	}
	func_102(sLocal_26.f_46);
	func_103(&(sLocal_26.f_34), 1);
	func_15(1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_35(uParam0, (1 << 18)))
		{
			func_37(uParam0, (1 << 18));
		}
	}
	else if (func_35(uParam0, (1 << 18)))
	{
		func_91(uParam0, (1 << 18));
	}
}

void func_28()
{
	if (func_32(sLocal_26.f_46, 0, 1))
	{
		if (!func_16((1 << 11)))
		{
			func_104(sLocal_26.f_46, 1, 0, 0, 1, 0);
			func_15((1 << 11));
		}
		if (!func_16((1 << 20)))
		{
			func_105();
			func_52(sLocal_26.f_46.f_66, 1);
			func_106(&(sLocal_26.f_46), sLocal_26.f_1, sLocal_26.f_0, sLocal_26.f_46.f_105);
			func_15((1 << 20));
		}
	}
}

void func_29(int iParam0)
{
	sLocal_26.f_4 = iParam0;
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_ROB_CASH_REGISTER"))
		{
			TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_ROB_CASH_REGISTER", true);
		}
	}
	else if (TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_ROB_CASH_REGISTER"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_ROB_CASH_REGISTER", false);
	}
}

bool func_31()
{
	if (!func_32(sLocal_26.f_46, 0, 1))
	{
		return false;
	}
	switch (sLocal_26.f_5)
	{
		case 0:
			if (func_107(0))
			{
				if (func_38(-3.0f, 1, 0, 0))
				{
					if (func_108(&(sLocal_26.f_46), sLocal_26.f_1))
					{
						func_109(&(sLocal_26.f_46));
						func_110(3);
					}
					else
					{
						func_111(&(sLocal_26.f_46));
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(sLocal_26.f_46, Global_35, -1, -1.0f, -1.0f, -1.0f);
						func_110(1);
					}
				}
			}
			break;
		case 1:
			if (func_107(0))
			{
				if (func_38(-1.0f, 1, 0, 0))
				{
					func_112(&(sLocal_26.f_46));
					func_110(2);
				}
			}
			break;
		case 2:
			if (func_38(-1.0f, 1, 0, 0) || func_113(sLocal_26.f_46, 1))
			{
				func_114(&(sLocal_26.f_46));
				func_115(&(sLocal_26.f_46), &sLocal_26, sLocal_26.f_46.f_105, joaat("WEAPON_REVOLVER_CATTLEMAN"));
				func_110(4);
			}
			break;
		case 3:
			if (func_38(-4.5f, 1, 0, 0))
			{
				if (func_116(&(sLocal_26.f_46)))
				{
					func_15(16);
					func_110(4);
				}
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_32(bool bParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_117(bParam0, iParam1);
}

bool func_33(float fParam0)
{
	int iVar0;

	if (!func_35(&(sLocal_26.f_46), (1 << 24)))
	{
		if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 1.0f)
		{
			func_36(&(sLocal_26.f_46), 35.0f, 1.0f, 1);
			func_37(&(sLocal_26.f_46), (1 << 24));
		}
	}
	if (!func_32(sLocal_26.f_46, 0, 1))
	{
		if (sLocal_26.f_4 != 7)
		{
			if (sLocal_26.f_4 < 9)
			{
				if (sLocal_26.f_4 < 7)
				{
					if (ENTITY::DOES_ENTITY_EXIST(sLocal_26.f_46.f_2[0]))
					{
						OBJECT::DELETE_OBJECT(&(sLocal_26.f_46.f_2[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(sLocal_26.f_46.f_2[1]))
					{
						OBJECT::DELETE_OBJECT(&(sLocal_26.f_46.f_2[1]));
					}
					func_11(1);
					func_30(0);
				}
				else
				{
					func_11(0);
					func_30(1);
				}
				func_29(9);
			}
			return false;
		}
	}
	if (!func_35(&(sLocal_26.f_46), (1 << 12)))
	{
		iVar0 = func_118(&(sLocal_26.f_46), sLocal_26.f_46.f_105, 0, 0, 0.5f, 0, 1109393408);
		if (sLocal_26.f_155 == -1)
		{
			sLocal_26.f_155 = iVar0;
		}
	}
	if (!func_16((1 << 11)))
	{
		if ((func_119(sLocal_26.f_46, joaat("SCRIPT_TASK_STAND_STILL")) && sLocal_26.f_4 >= 8) && func_120(sLocal_26.f_46, sLocal_26.f_46.f_97[0], "CLERK", 0, 0, 1, 0))
		{
			func_27(&(sLocal_26.f_46), 0);
			PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(sLocal_26.f_46);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(sLocal_26.f_46, Global_35, -1, -1.0f, -1.0f, -1.0f);
		}
	}
	if (!func_16((1 << 20)))
	{
		if (!func_35(&(sLocal_26.f_46), (1 << 23)))
		{
			if (func_35(&(sLocal_26.f_46), (1 << 22)))
			{
				if (func_121(&(sLocal_26.f_46)))
				{
					PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(sLocal_26.f_46, "TaskIntimidated_OnFoot", Global_35, -1, 4);
					func_37(&(sLocal_26.f_46), (1 << 23));
				}
			}
		}
		if (func_122(fParam0) | func_25(&(sLocal_26.f_46)))
		{
			func_27(&(sLocal_26.f_46), 0);
			func_28();
			if (sLocal_26.f_4 < 9)
			{
				if (sLocal_26.f_4 < 7)
				{
					if (ENTITY::DOES_ENTITY_EXIST(sLocal_26.f_46.f_2[0]))
					{
						OBJECT::DELETE_OBJECT(&(sLocal_26.f_46.f_2[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(sLocal_26.f_46.f_2[1]))
					{
						OBJECT::DELETE_OBJECT(&(sLocal_26.f_46.f_2[1]));
					}
					func_11(1);
					func_30(0);
				}
				else
				{
					func_11(0);
					func_30(1);
				}
				func_29(9);
			}
		}
	}
	func_123(&(sLocal_26.f_46));
	if (sLocal_26.f_46.f_102 && sLocal_26.f_4 < 9)
	{
		return false;
	}
	switch (sLocal_26.f_4)
	{
		case 0:
			if (func_124(&(sLocal_26.f_46), sLocal_26.f_155))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(sLocal_26.f_46) || !ENTITY::IS_ENTITY_A_MISSION_ENTITY(sLocal_26.f_46))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sLocal_26.f_46, true, true);
				}
				func_40(16);
				func_34(&(sLocal_26.f_34));
				func_29(5);
			}
			else if (func_41(&(sLocal_26.f_34), 3.0f) && func_38(0, 1, Global_35, 1))
			{
				func_40(16);
				func_34(&(sLocal_26.f_34));
				func_29(1);
			}
			break;
		case 1:
			if (func_124(&(sLocal_26.f_46), sLocal_26.f_155))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(sLocal_26.f_46))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sLocal_26.f_46, true, true);
				}
				func_34(&(sLocal_26.f_34));
				func_29(5);
			}
			else if (func_41(&(sLocal_26.f_34), 6.0f) && func_125(sLocal_26.f_46, 1050253722, 1060320051, 0, 1061158912))
			{
				func_34(&(sLocal_26.f_34));
				func_40(32);
				func_29(2);
			}
			break;
		case 2:
			if (func_124(&(sLocal_26.f_46), sLocal_26.f_155))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(sLocal_26.f_46))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sLocal_26.f_46, true, true);
				}
				func_34(&(sLocal_26.f_34));
				func_29(5);
			}
			else if ((func_41(&(sLocal_26.f_34), 7.0f) && func_125(sLocal_26.f_46, 1050253722, 1060320051, 0, 1061158912)) && func_126(sLocal_26.f_46))
			{
				func_34(&(sLocal_26.f_34));
				func_40((1 << 20));
				func_29(3);
			}
			else
			{
				func_29(3);
			}
			break;
		case 3:
			if (func_124(&(sLocal_26.f_46), sLocal_26.f_155))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(sLocal_26.f_46))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sLocal_26.f_46, true, true);
				}
				func_34(&(sLocal_26.f_34));
				func_29(5);
			}
			else if (func_41(&(sLocal_26.f_34), 15.0f))
			{
				func_34(&(sLocal_26.f_34));
				func_40((1 << 22));
				func_29(4);
			}
			break;
		case 4:
			func_28();
			break;
		case 5:
			if (func_41(&(sLocal_26.f_34), 2.25f))
			{
				if (func_107(0))
				{
					if (func_127())
					{
						func_15(2);
					}
					if (!func_16(2))
					{
						func_27(&(sLocal_26.f_46), 1);
						if (sLocal_26.f_46.f_90 < 0.0f)
						{
							sLocal_26.f_46.f_90 = func_128();
						}
						func_37(&(sLocal_26.f_46), (1 << 22));
						func_11(0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(sLocal_26.f_46, sLocal_26.f_46.f_75, 1.0f, 10000, 0.1f, 0, sLocal_26.f_46.f_78);
						func_29(6);
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(sLocal_26.f_46.f_2[0]))
						{
							OBJECT::DELETE_OBJECT(&(sLocal_26.f_46.f_2[0]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(sLocal_26.f_46.f_2[1]))
						{
							OBJECT::DELETE_OBJECT(&(sLocal_26.f_46.f_2[1]));
						}
						if (!func_119(sLocal_26.f_46, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(sLocal_26.f_46, Global_35, -1, -1.0f, -1.0f, -1.0f);
						}
						if (func_39(1))
						{
							if (func_38(0.0f, 1, sLocal_26.f_46, 1) && func_38(0.0f, 1, Global_35, 1))
							{
								func_40((1 << 9));
								func_11(1);
								func_30(0);
								func_29(9);
							}
						}
						else
						{
							func_11(1);
							func_30(0);
							func_29(9);
						}
					}
				}
			}
			break;
		case 6:
			if (func_107(0))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_26.f_46.f_97[0], "pblExitB");
				if (!func_32(sLocal_26.f_46, 0, 1))
				{
					func_11(1);
					func_30(0);
					func_29(10);
					Jump @2340; // curOff = 1548
				}
				if (!func_16((1 << 25)))
				{
					if (!func_16(64))
					{
						if (((func_39(1) && !func_16((1 << 11))) && func_38(0.0f, 1, sLocal_26.f_46, 1)) && func_38(0.0f, 1, Global_35, 1))
						{
							func_40(128);
							func_15((1 << 25));
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(sLocal_26.f_46, sLocal_26.f_46.f_75, 0.3f, 0.3f, 5.0f, false, true, 0))
				{
					if (!func_119(sLocal_26.f_46, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
					{
						if (!func_16((1 << 26)))
						{
							TASK::TASK_STAND_STILL(sLocal_26.f_46, -1);
							func_15((1 << 26));
						}
						if (func_129(&(sLocal_26.f_46)))
						{
							func_29(7);
						}
					}
				}
				else if (!func_119(sLocal_26.f_46, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) && !PED::IS_PED_RAGDOLL(sLocal_26.f_46))
				{
					if (sLocal_26.f_46.f_86 < 0.0f)
					{
						sLocal_26.f_46.f_86 = func_128();
					}
					if ((func_128() - sLocal_26.f_46.f_86) >= 3.0f)
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(sLocal_26.f_46))
						{
							func_100(sLocal_26.f_46, Global_36, 5, 1, 1);
						}
					}
					func_29(5);
				}
			}
			break;
		case 7:
			func_11(0);
			if (func_107(0) && func_39(1))
			{
				func_130();
			}
			if (func_131(&(sLocal_26.f_46)))
			{
				if (func_132(&(sLocal_26.f_46), 0))
				{
					func_133(&(sLocal_26.f_46));
					func_29(8);
				}
				else if (!func_32(sLocal_26.f_46, 0, 1))
				{
					if (!func_134())
					{
						func_11(1);
						func_29(10);
					}
				}
			}
			break;
		case 8:
			if (!func_119(sLocal_26.f_46, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
			{
				if (func_120(sLocal_26.f_46, sLocal_26.f_46.f_97[0], "CLERK", 0, 0, 1, 0))
				{
					func_27(&(sLocal_26.f_46), 0);
					PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(sLocal_26.f_46);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(sLocal_26.f_46, Global_35, -1, -1.0f, -1.0f, -1.0f);
				}
			}
			else
			{
				if (func_16((1 << 18)))
				{
					PED::SET_PED_CONFIG_FLAG(Global_35, 13, false);
				}
				func_11(0);
				func_34(&(sLocal_26.f_34));
				func_29(10);
			}
			break;
		case 9:
			if (func_41(&(sLocal_26.f_34), 4.0f))
			{
				if (func_107(0) && !func_16((1 << 11)))
				{
					func_34(&(sLocal_26.f_34));
					func_29(10);
				}
			}
			break;
		case 10:
			if (func_32(Global_35, 0, 1))
			{
				if (func_16((1 << 12)))
				{
					func_64(&(sLocal_26.f_46));
					func_29(11);
				}
				else if (!func_16((1 << 21)) && !func_16((1 << 20)))
				{
					if (!func_135(sLocal_26.f_46))
					{
						if (func_41(&(sLocal_26.f_34), 8.0f) && !func_136(&(sLocal_26.f_46), 0))
						{
							if (func_39(1))
							{
								func_40((1 << 19));
								func_34(&(sLocal_26.f_34));
								func_15((1 << 21));
							}
						}
					}
				}
			}
			break;
		case 11:
			if (func_32(Global_35, 0, 1))
			{
				if (!func_136(&(sLocal_26.f_46), 0))
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					}
					func_102(sLocal_26.f_46);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_34(var uParam0)
{
	func_137(uParam0, 0.0f);
}

bool func_35(var uParam0, int iParam1)
{
	return uParam0->f_67 & iParam1 != 0;
}

void func_36(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_72(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		func_73(&(uParam0->f_68.f_3));
		return;
	}
	uParam0->f_68 = fParam1;
	uParam0->f_68.f_2 = fParam2;
	uParam0->f_68.f_1 = iParam3;
	func_34(&(uParam0->f_68.f_3));
}

void func_37(var uParam0, int iParam1)
{
	uParam0->f_67 |= iParam1;
}

bool func_38(float fParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		if (!func_138(bParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_139(fParam0))
	{
		return false;
	}
	return true;
}

bool func_39(bool bParam0)
{
	return func_140(sLocal_26.f_46, bParam0);
}

void func_40(int iParam0)
{
	if (Global_1914319.f_18903 != iParam0)
	{
		Global_1914319.f_18903 = iParam0;
	}
}

bool func_41(var uParam0, float fParam1)
{
	if (!func_71(uParam0))
	{
		return false;
	}
	if (func_141(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_42(float fParam0, bool bParam1, float fParam2)
{
	if (fParam2 > 0.0f)
	{
		if (!func_71(&(sLocal_26.f_37)))
		{
			func_103(&(sLocal_26.f_37), 0);
		}
		if (!func_41(&(sLocal_26.f_37), fParam2))
		{
			return false;
		}
	}
	if (bParam1 || func_142(&(sLocal_26.f_46), fParam0))
	{
		func_143(sLocal_26.f_46, 1);
		if (func_104(sLocal_26.f_46, 1, 0, sLocal_26.f_46.f_101, 1, 0))
		{
			func_15((1 << 11));
			return true;
		}
	}
	return false;
}

void func_43()
{
	if (!func_16((1 << 10)))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_26.f_46.f_105, false, 0) && ENTITY::IS_ENTITY_IN_VOLUME(sLocal_26.f_46, sLocal_26.f_46.f_105, true, 0))
		{
			func_144();
			func_15((1 << 10));
		}
	}
}

void func_44(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_89() != -1)
	{
		return;
	}
	if (func_145(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_146())
	{
		iVar1 = 0;
	}
	func_147(iParam0, iVar1);
}

void func_45(var uParam0)
{
	int iVar0;

	if ((!func_35(uParam0, (1 << 12)) && !func_35(uParam0, 16)) && !func_35(uParam0, (1 << 13)))
	{
		return;
	}
	iVar0 = func_148(uParam0->f_66);
	if (iVar0 != func_149())
	{
		MISC::_0xCC3EDC5614B03F61(iVar0);
	}
}

bool func_46(int iParam0, bool bParam1)
{
	if (func_89() != -1)
	{
		return false;
	}
	if (!func_75(iParam0))
	{
		return false;
	}
	if (!func_150(iParam0) && bParam1)
	{
		return false;
	}
	return func_151(iParam0, 1);
}

void func_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_75(iParam0))
	{
		return;
	}
	if (!func_151(iParam0, 1))
	{
		return;
	}
	if (!func_151(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_150(iParam0)) && func_152(iParam0))
	{
		return;
	}
	func_153(iParam0, 1);
	func_154(iParam0);
	if (func_156(func_155(iParam0)))
	{
		iVar0 = func_157(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(iVar0);
		}
		iVar1 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		func_153(iParam0, 16);
	}
	if (func_151(iParam0, 128) && !bParam3)
	{
		func_158(iParam0, 0);
	}
}

void func_48(int iParam0, bool bParam1)
{
	if (!func_32(iParam0, 0, 1))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
	}
}

void func_49(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

bool func_50(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_51(int iParam0, int iParam1)
{
	if (!func_50(iParam0))
	{
		return false;
	}
	return Global_1914319.f_15614[iParam0] & iParam1 != 0;
}

void func_52(int iParam0, bool bParam1)
{
	if (!func_50(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_51(iParam0, (1 << 10)))
		{
			func_159(iParam0, (1 << 10));
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_51(iParam0, (1 << 10)))
	{
		func_160(iParam0, (1 << 10));
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_161(iParam0);
}

bool func_53(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	if (func_89() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_162(func_96(), iParam0);
		}
		iVar1 = MISC::GET_FRAME_COUNT();
		if (Global_1914319.f_3[iParam0 /*446*/].f_444 >= iVar1)
		{
			return Global_1914319.f_3[iParam0 /*446*/].f_445;
		}
		iVar0 = func_163(iParam1) | func_165(func_164(iParam0));
		Global_1914319.f_3[iParam0 /*446*/].f_444 = iVar1;
		Global_1914319.f_3[iParam0 /*446*/].f_445 = iVar0;
	}
	return iVar0;
}

float func_54(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_55()
{
	sLocal_26.f_43++;
	if (sLocal_26.f_43 >= 30)
	{
		sLocal_26.f_43 = 0;
	}
}

bool func_56(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0) == joaat("EVENT_OBJECT_INTERACTION"))
		{
			bVar1 = func_166(uParam0, iVar0);
			if (bVar1)
			{
				func_37(uParam0, (1 << 13));
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_57()
{
	return sLocal_26.f_3 >= 3;
}

bool func_58()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

bool func_59()
{
	if (func_167(sLocal_26.f_1))
	{
		if (func_72(PLAYER::PLAYER_ID(), 1, 1, 0))
		{
			return false;
		}
		if (sLocal_26.f_3 == 2 || func_16((1 << 19)))
		{
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_26.f_46))
		{
			if (!func_32(sLocal_26.f_46, 0, 1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(sLocal_26.f_46, Global_35, true, true) || PED::IS_PED_HOGTIED(sLocal_26.f_46))
				{
					return true;
				}
			}
		}
		if (func_35(&(sLocal_26.f_46), (1 << 12)))
		{
			return true;
		}
		if (func_168(&(sLocal_26.f_46)))
		{
			return true;
		}
	}
	return false;
}

bool func_60(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = func_96();
	switch (iVar0)
	{
		case 92:
		case 120:
			return false;
	}
	if (!func_35(uParam0, (1 << 9)))
	{
		if (!func_71(uParam1))
		{
			func_103(uParam1, 0);
			return false;
		}
		if (func_41(uParam1, fParam2) && func_167(func_95(iParam3)))
		{
			func_79(iParam4);
			vVar1 = { func_169(iParam3) /*3*/ };
			if (!STREAMING::HAS_MODEL_LOADED(iParam4))
			{
				STREAMING::REQUEST_MODEL(iParam4, false);
				return false;
			}
			if (func_167(func_95(iParam3)) || ENTITY::WOULD_ENTITY_BE_OCCLUDED(iParam4, vVar1, true))
			{
				*uParam5 = func_170(iParam4, vVar1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			if (func_32(*uParam5, 0, 1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam5))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam5, true, true);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam5, true);
				PED::SET_PED_CONFIG_FLAG(*uParam5, 146, false);
				PED::SET_PED_CONFIG_FLAG(*uParam5, 148, false);
				PED::SET_PED_CONFIG_FLAG(*uParam5, 113, true);
				func_37(uParam0, (1 << 9));
				return true;
			}
		}
	}
	else if (func_32(*uParam5, 0, 1))
	{
		return true;
	}
	return false;
}

void func_61(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_96();
	switch (iVar0)
	{
		case 92:
		case 120:
			return;
	}
	if (func_35(uParam0, (1 << 9)) && !func_35(uParam0, (1 << 10)))
	{
		if (!func_32(iParam1, 0, 1))
		{
			return;
		}
		iVar1 = func_95(uParam0->f_66);
		if (func_72(PLAYER::PLAYER_ID(), 0, 1, 0))
		{
			TASK::TASK_FLEE_PED(iParam1, Global_35, 4, 0, -1.0f, -1, 0);
			func_49(&iParam1, 1, 1, 0);
			func_37(uParam0, (1 << 10));
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(iParam1, Global_1914319.f_3[iVar1 /*446*/].f_25, true, 0) || func_171(iParam1, Global_35, 1, 12.0f, 0))
		{
			bVar2 = false;
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				bVar2 = true;
			}
			if (func_167(iVar1))
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				func_104(iParam1, 1, 0, 0, 1, bVar2);
				func_49(&iParam1, 1, 1, 1);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				func_104(iParam1, 1, 0, 0, 1, bVar2);
				func_49(&iParam1, 1, 1, 1);
			}
			func_37(uParam0, (1 << 10));
		}
		else if (!TASK::IS_PED_WALKING(iParam1) && !PED::IS_PED_FLEEING(iParam1))
		{
			if (!func_35(uParam0, (1 << 11)))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, func_172(uParam0->f_66), 1.5f, -1, 0.25f, 0, 40000.0f);
				func_37(uParam0, (1 << 11));
			}
		}
	}
}

bool func_62()
{
	if (func_16((1 << 27)))
	{
		if (func_32(sLocal_26.f_46, 0, 0))
		{
			if ((func_173(sLocal_26.f_46, Global_35) || PED::GET_PED_IS_BEING_GRAPPLED(sLocal_26.f_46)) || PED::IS_PED_LASSOED(sLocal_26.f_46))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_63(var uParam0, bool bParam1, bool bParam2)
{
	if (func_32(Global_35, 0, 1))
	{
		if (func_174(Global_35, joaat("PROP_PLAYER_CASH_REGISTER")) || func_174(Global_35, joaat("PROP_PLAYER_CASH_REGISTER_CLERK_OPENED")))
		{
			if (PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_CASH_REGISTER")))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[0]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_2[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[1]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_2[1]));
				}
			}
			if (bParam2)
			{
				return true;
			}
			else
			{
				return func_136(uParam0, bParam1);
			}
		}
	}
	return false;
}

void func_64(var uParam0)
{
	if (!func_16((1 << 12)))
	{
		if (!func_16((1 << 20)))
		{
			if (func_32(*uParam0, 0, 1))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, 4.0f, 0.25f, -1.0f);
			}
		}
		func_129(&(sLocal_26.f_46));
		func_15((1 << 12));
	}
}

void func_65(bool bParam0)
{
	int iVar0;

	if (func_32(sLocal_26.f_46, 0, 1))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(sLocal_26.f_46))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sLocal_26.f_46, true, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(sLocal_26.f_46, 168, true))
		{
			PED::SET_PED_CONFIG_FLAG(sLocal_26.f_46, 168, true);
			PED::SET_PED_CONFIG_FLAG(sLocal_26.f_46, 113, false);
		}
	}
	if (!bParam0)
	{
		func_48(sLocal_26.f_46, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_26.f_46, true);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_26.f_46, false);
	}
	iVar0 = func_95(sLocal_26.f_46.f_66);
	func_175(iVar0, Global_35, 1, 10);
	sLocal_26.f_46.f_99 = func_67(1);
	func_176(sLocal_26.f_46.f_66);
	func_11(1);
	Global_1914319.f_17371 = 1;
	func_52(sLocal_26.f_46.f_66, 1);
	func_177(sLocal_26.f_46.f_66, 1, 0);
	func_178(-1, 0, 0, 0, 0);
	func_179();
	func_180(45, 0, 1);
	func_15((1 << 9));
}

void func_66()
{
	if (sLocal_26.f_3 > 1)
	{
	}
}

int func_67(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_68(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_17370;
	}
	return (Global_1914319.f_17370 || Global_1914319.f_18996.f_1);
}

struct<2> /*16*/ func_69(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

void func_70(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_71(var uParam0)
{
	return func_181(*uParam0, 1);
}

bool func_72(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_182(bParam1, bParam2, bParam3);
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

void func_73(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_74(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1[2];
	var uVar4[2];
	int iVar7;
	Vector3 vVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;

	if (func_72(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		return;
	}
	iVar0 = func_96();
	switch (iVar0)
	{
		case 92:
		case 120:
			return;
	}
	uVar4[0] = Global_35;
	uVar4[1] = *uParam0;
	if (iParam2 != 0)
	{
		func_183(&iVar1, &uVar4, iVar1, iParam2, 0, 0, 0, -1, 1, 0, 0, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam2, (1 << 13), 0, 0, -1, -1, 4);
	}
	else
	{
		func_184(&iVar1, &uVar4, Global_36, 10, iVar1, iParam1, iParam5, 0, 0, -1082130432);
	}
	iVar11 = PLAYER::PLAYER_ID();
	iVar12 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	LAW::_0xD7494DED50C6EF52(iVar11, joaat("CRIME_ROBBERY"), iParam3);
	func_185(uParam0, &uVar14);
	iVar7 = 0;
	while (iVar7 < iVar1)
	{
		if (iVar13 >= iParam3)
		{
		}
		else if (func_186(iVar1[iVar7], iVar12))
		{
			func_100(iVar1[iVar7], Global_36, 2, 0, 3);
			TASK::CLEAR_PED_TASKS(iVar1[iVar7], true, false);
			PED::SET_PED_CONFIG_FLAG(iVar1[iVar7], 146, false);
			PED::SET_PED_CONFIG_FLAG(iVar1[iVar7], 148, false);
			PED::SET_PED_CONFIG_FLAG(iVar1[iVar7], 190, bParam4);
			PED::SET_PED_CONFIG_FLAG(iVar1[iVar7], 113, true);
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar1[iVar7], true, false) /*3*/ };
			LAW::_0x018F30D762E62DF8(iVar1[iVar7], &uVar14);
			PED::SET_PED_KEEP_TASK(iVar1[iVar7], true);
			iVar13++;
		}
		iVar7++;
	}
	EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), Global_35, 10.0f, 10.0f, 10.0f, -1.0f, -1.0f, 180.0f, true, false, -1, -1);
}

bool func_75(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_76(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!func_151(iParam0, 2))
	{
		return 0;
	}
	if (func_156(func_155(iParam0)))
	{
		return func_187(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_188(iParam0), 0);
}

void func_77()
{
	PED::SET_PED_CAN_BE_TARGETTED(sLocal_26.f_46, true);
	func_189(sLocal_26.f_46, 1);
	func_190(&(sLocal_26.f_6));
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("A_M_M_ASBTOWNFOLK_01");
		case 7:
		case 17:
			return joaat("A_M_M_BLWTOWNFOLK_01");
		case 19:
			return joaat("A_M_M_EMRFARMHAND_01");
		case 39:
		case 41:
		case 42:
		case 43:
		case 47:
			return joaat("U_M_M_NBXRESIDENT_01");
		case 28:
		case 29:
			return joaat("A_M_M_RHDTOWNFOLK_01");
		case 61:
			return joaat("A_M_M_STRTOWNFOLK_01");
		case 73:
		case 74:
		case 75:
		case 82:
			return joaat("A_M_M_VALTOWNFOLK_01");
		case 90:
			return joaat("A_M_M_TUMTOWNFOLK_01");
		case 95:
			return joaat("A_M_M_ARMTOWNFOLK_01");
	}
	return joaat("A_M_M_VALFARMER_01");
}

bool func_79(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_80(var uParam0)
{
	uParam0->f_97[0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_191(0), 0, 0, false, true);
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_97[0], true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_97[0]);
	}
}

bool func_81(var uParam0)
{
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_97[0], true, false) || !ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_97[0], false))
	{
		return false;
	}
	return true;
}

void func_82(var uParam0)
{
	char* sVar0;

	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_97[0], "pblExitB");
	sVar0 = func_192(uParam0);
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_97[0], sVar0);
}

bool func_83(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_193(499))
	{
		return false;
	}
	if (!Global_20710.f_2400)
	{
		return false;
	}
	if (func_194(80, 0, 1))
	{
		return false;
	}
	iVar1 = func_95(uParam0->f_66);
	if (!func_195(iVar1))
	{
		return false;
	}
	if (func_196(iVar1))
	{
		if (func_197(iVar1, (1 << 15)))
		{
			return false;
		}
		return true;
	}
	if (uParam0->f_100 == -1)
	{
		iVar2 = 0;
		uParam0->f_100 = 0;
	}
	else
	{
		iVar2 = uParam0->f_100;
	}
	iVar0 = iVar2;
	while (iVar0 <= 25)
	{
		if (!func_196(iVar0))
		{
			if (func_197(iVar0, (1 << 15)))
			{
				func_198(iVar0, (1 << 15));
			}
		}
		uParam0->f_100++;
		return false;
		iVar0++;
	}
	uParam0->f_100 = -1;
	return false;
}

void func_84(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_199(iParam0, &iVar0, &iVar1);
	if (!func_200(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_201(iVar0, iVar1);
}

int func_85(var uParam0)
{
	int iVar0;

	if (uParam0->f_106 != 0)
	{
		if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_106))
		{
			iVar0 = ENTITY::_GET_PINNED_MAP_ENTITY(uParam0->f_106);
			return iVar0;
		}
	}
	return 0;
}

void func_86(var uParam0)
{
	int iVar0;
	Vector3 vVar1;

	if (!func_35(uParam0, (1 << 25)))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_97[0], true, false) || ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_97[0], true))
		{
			iVar0 = func_85(uParam0);
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_97[0], ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "CLERK", *uParam0, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "REGISTER", iVar0, 0);
			uParam0->f_75 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0.02f, -0.88f, 0.0f) /*3*/ };
			uParam0->f_78 = ENTITY::GET_ENTITY_HEADING(iVar0);
			func_202(&(uParam0->f_75), 0.0f);
			func_37(uParam0, (1 << 25));
		}
	}
}

int func_87(var uParam0)
{
	var uVar0[1];
	var uVar2;
	int iVar9;
	Vector3 vVar10;

	uVar2 = 6;
	vVar10 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false, false) /*3*/ };
	func_203(&uVar2, 0);
	uParam0->f_79 = { func_172(uParam0->f_66) /*3*/ };
	if (func_204(uParam0->f_79))
	{
		iVar9 = func_205(&uVar0, &uVar2, 1, vVar10, 4.0f);
	}
	else
	{
		iVar9 = func_205(&uVar0, &uVar2, 1, uParam0->f_79, 1.5f);
	}
	if (iVar9 <= 0)
	{
		if (!func_35(uParam0, 2))
		{
			func_37(uParam0, 2);
		}
	}
	else
	{
		if (func_35(uParam0, 2))
		{
			func_91(uParam0, 2);
		}
		return uVar0[0];
	}
	return 0;
}

bool func_88(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_50(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	if (bParam1)
	{
		if (func_206(iParam0, (1 << 15)))
		{
			iVar0 = 1;
		}
	}
	if (bParam2)
	{
		if (func_206(iParam0, (1 << 10)))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_89()
{
	return Global_1572887.f_12;
}

int func_90(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_207(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_208(iParam0, uVar0, iVar1, bParam2);
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_67 -= uParam0->f_67 & iParam1;
}

void func_92(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_209(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_210(iParam0, 0);
		}
	}
}

void func_93(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_211((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_209(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_94(float fParam0)
{
	if (func_212())
	{
		if (func_213(sLocal_26.f_46.f_66))
		{
			func_214();
			func_26(0, 1);
			func_30(0);
			func_9(5);
		}
		else
		{
			func_101(&(sLocal_26.f_46), 0, 0, 0, 0);
			func_9(2);
		}
	}
	else if (func_35(&(sLocal_26.f_46), (1 << 12)) || func_35(&(sLocal_26.f_46), (1 << 13)))
	{
		if (sLocal_26.f_3 < 5)
		{
			if (func_32(sLocal_26.f_46, 0, 1))
			{
				if (func_42(fParam0, 1, 3.0f))
				{
					func_22(&(sLocal_26.f_46.f_7[0 /*21*/]), &(sLocal_26.f_46.f_29));
					func_26(0, 0);
					func_28();
					func_9(6);
				}
			}
			else
			{
				func_30(0);
				func_29(11);
				func_9(5);
			}
		}
	}
	if (func_16((1 << 14)))
	{
		if (func_42(fParam0, 0, 0))
		{
			func_26(1, 1);
			func_9(7);
		}
	}
}

int func_95(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

int func_96()
{
	return Global_1894899.f_2;
}

bool func_97()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (func_215(16) && !func_215(21))
	{
		return true;
	}
	return false;
}

bool func_98(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

void func_99()
{
	func_40(16);
}

void func_100(int iParam0, Vector3 vParam1, int iParam4, bool bParam5, int iParam6)
{
	if (!func_117(iParam0, 0))
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
	if (func_204(vParam1))
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

void func_101(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	if ((MISC::IS_STRING_NULL_OR_EMPTY(sParam1) || MISC::IS_STRING_NULL_OR_EMPTY(sParam2)) || MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		sVar0 = func_216();
		sVar1 = func_217();
		sVar2 = func_218();
	}
	else
	{
		sVar0 = sParam1;
		sVar1 = sParam2;
		sVar2 = sParam3;
	}
	if (!uParam0->f_102 || bParam4)
	{
		if (uParam0->f_90 < 0.0f)
		{
			uParam0->f_90 = func_128();
		}
		func_37(uParam0, (1 << 22));
	}
	func_27(uParam0, 1);
	func_219(*uParam0, sVar0, sVar1, sVar2, 1);
	func_37(uParam0, (1 << 14));
}

void func_102(int iParam0)
{
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(iParam0);
		func_189(iParam0, 0);
	}
}

void func_103(var uParam0, bool bParam1)
{
	if (bParam1 || !func_71(uParam0))
	{
		func_34(uParam0);
	}
}

bool func_104(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (!func_32(iParam0, 0, 1))
	{
		return false;
	}
	iVar0 = func_96();
	switch (iVar0)
	{
		case 92:
		case 120:
			if (PED::IS_PED_FLEEING(iParam0) || func_119(iParam0, joaat("SCRIPT_TASK_FLEE")))
			{
				return true;
			}
			PED::_PED_CLEAR_LOCO_MOTION(iParam0);
			TASK::TASK_FLEE_PED(iParam0, Global_35, 4, 176128, -1.0f, -1, 0);
			return true;
		default:
			break;
	}
	if (LAW::_0x0EAF918F751F27BA(iParam0))
	{
		return true;
	}
	if (bParam2)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	}
	if (bParam1)
	{
		func_220(1);
		if (bParam4)
		{
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 146, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 148, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 190, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 113, true);
		iVar1 = LAW::_0xE9EB79CBF9C0F58A(PLAYER::GET_PLAYER_INDEX());
		func_221(iParam0, &vVar2);
		if (bParam5)
		{
			vVar2.f_2 = joaat("CRIME_MURDER");
		}
		else if (bParam3)
		{
			vVar2.f_2 = joaat("CRIME_DISTURBANCE");
		}
		else
		{
			vVar2.f_2 = joaat("CRIME_ROBBERY");
		}
		LAW::_0xD7494DED50C6EF52(PLAYER::PLAYER_ID(), vVar2.z, iVar1 + 1);
		LAW::_0x018F30D762E62DF8(iParam0, &vVar2);
		PED::_PED_CLEAR_LOCO_MOTION(iParam0);
		PED::SET_PED_KEEP_TASK(iParam0, true);
		return true;
	}
	return false;
}

void func_105()
{
	if (func_222())
	{
		func_36(&(sLocal_26.f_46), 25.0f, 10.0f, 1);
	}
}

void func_106(var uParam0, var uParam1, int iParam2, int iParam3)
{
	func_22(&(uParam0->f_7[0 /*21*/]), &(uParam0->f_29));
	func_102(*uParam0);
	if (func_223(uParam0))
	{
		func_100(*uParam0, Global_36, 3, 0, 3);
		func_115(uParam0, &iParam2, iParam3, joaat("WEAPON_REVOLVER_CATTLEMAN"));
	}
	else
	{
		func_100(*uParam0, Global_36, 5, 0, 3);
		func_40((1 << 22));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 44, false);
		func_104(*uParam0, 1, 0, 0, 1, 0);
		if (!LAW::_0x0EAF918F751F27BA(*uParam0))
		{
			PED::_PED_CLEAR_LOCO_MOTION(*uParam0);
			TASK::TASK_FLEE_PED(*uParam0, Global_35, 3, 176128, -1.0f, -1, 0);
		}
	}
}

bool func_107(bool bParam0)
{
	return func_140(Global_35, bParam0);
}

bool func_108(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 7:
		case 11:
			return true;
		case 3:
		case 6:
			return false;
		default:
			break;
	}
	return false;
}

void func_109(var uParam0)
{
	char* sVar0;

	if (func_224())
	{
		sVar0 = "SHOP_CLERK_REOPEN_FAME";
	}
	else
	{
		sVar0 = "SHOP_CLERK_REOPEN";
	}
	func_225(*uParam0, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
}

void func_110(int iParam0)
{
	sLocal_26.f_5 = iParam0;
}

void func_111(var uParam0)
{
	char* sVar0;

	if (func_226())
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED_SICK";
	}
	else if (func_224())
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED_FAME";
	}
	else
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED";
	}
	func_225(*uParam0, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
}

void func_112(var uParam0)
{
	func_225(*uParam0, Global_35, "SHOP_CLERK_STAYCLOSED1", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
}

bool func_113(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	if (func_227(Global_35, 0) == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	uVar1 = func_228(iParam0);
	if (func_126(iParam0) && !PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(iVar0, &uVar1, false, false))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, bParam1);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		return true;
	}
	if (PED::IS_PED_HOGTIED(iParam0) || PED::IS_PED_LASSOED(iParam0))
	{
		func_40((1 << 16));
		return true;
	}
	return false;
}

void func_114(var uParam0)
{
	char* sVar0;

	if (func_226())
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED2_SICK";
	}
	else
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED2";
	}
	func_225(*uParam0, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
}

void func_115(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	func_229(*uParam0);
	func_230(uParam0, iParam1, iParam2, iParam3);
}

bool func_116(var uParam0)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, 0, -1.0f, -1.0f, -1.0f);
	func_159(uParam0->f_66, (1 << 11));
	func_231(uParam0, 1);
	return true;
}

bool func_117(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_232(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_232(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_232(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_232(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_232(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_232(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_232(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_232(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

int func_118(var uParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_233(&(uParam0->f_7[0 /*21*/])))
	{
		switch (uParam0->f_64)
		{
			case 0:
				if (!func_68(0))
				{
					if (func_234())
					{
						func_235(uParam0, "PLAYER_HOLDUP_ROB", bParam2);
						func_236(uParam0);
						uParam0->f_64 = 1;
					}
				}
				break;
			case 1:
				if ((func_68(0) || !func_234()) || func_35(uParam0, 128))
				{
					func_237(uParam0, bParam2);
					uParam0->f_64 = 2;
				}
				else
				{
					func_236(uParam0);
				}
				break;
			case 2:
				if (!func_68(0) && func_234())
				{
					func_235(uParam0, "PLAYER_HOLDUP_ROB", bParam2);
					func_236(uParam0);
					func_91(uParam0, 128);
					uParam0->f_64 = 1;
				}
				break;
		}
	}
	iVar2 = 1;
	iVar3 = 2;
	if (func_35(uParam0, 256))
	{
		if (!func_35(uParam0, (1 << 26)) && !bParam5)
		{
			iVar3 = 3;
			func_210(&(uParam0->f_7[0 /*21*/]), 0);
			func_37(uParam0, (1 << 26));
		}
	}
	iVar0 = func_239(uParam0, &(uParam0->f_7[0 /*21*/]), 30.0f, &(uParam0->f_29), &iVar2, fParam4, 1, 0, uParam0->f_107, 65792 | func_238(iVar3, 0, 0), iParam1, 0, 2, 0, -1082130432, 1);
	iVar1 = iVar0;
	if (func_233(&(uParam0->f_7[0 /*21*/])))
	{
		if (!uParam0->f_103)
		{
			if (uParam0->f_7[0 /*21*/].f_1 == 0)
			{
				func_240(*uParam0, 500);
				func_241(uParam0, &(uParam0->f_7[0 /*21*/]), &(uParam0->f_29), 30.0f, 65792 | func_238(3, 0, 0), uParam0->f_107, 2, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
				func_102(*uParam0);
				func_242(uParam0, 0, 0);
			}
			else if (uParam0->f_7[0 /*21*/].f_1 == 1)
			{
				func_240(*uParam0, 500);
				func_102(*uParam0);
				func_242(uParam0, 0, 1);
			}
			func_103(&(uParam0->f_94), 0);
			uParam0->f_103 = 1;
		}
	}
	if (func_41(&(uParam0->f_94), 1.0f) && !func_41(&(uParam0->f_94), 2.0f))
	{
		if (!func_119(*uParam0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
		{
			if (TASK::IS_PED_SCENARIO_REACT_LOOKING(*uParam0, true) || !TASK::_PED_IS_IN_SCENARIO_BASE(*uParam0))
			{
				func_100(*uParam0, Global_36, 1, 0, 3);
			}
			else
			{
				func_100(*uParam0, Global_36, 5, 0, 3);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, -1.0f, -1.0f, -1.0f);
		}
	}
	if (uParam0->f_103)
	{
	}
	switch (iVar1)
	{
		case 0:
			if (!bParam3)
			{
				func_36(uParam0, 14.0f, fParam6, 1);
			}
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), Global_35, 10.0f, 10.0f, 10.0f, -1.0f, -1.0f, 180.0f, true, false, -1, -1);
			func_37(uParam0, (1 << 19));
			func_73(&(uParam0->f_94));
			uParam0->f_103 = 0;
			break;
		case 1:
			func_37(uParam0, (1 << 16));
			func_73(&(uParam0->f_94));
			uParam0->f_103 = 0;
			break;
	}
	return iVar1;
}

bool func_119(int iParam0, int iParam1)
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

bool func_120(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_243(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

bool func_121(var uParam0)
{
	if (((!TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam0, 1) && !TASK::IS_PED_EXITING_SCENARIO(*uParam0, true)) && uParam0->f_90 > 0.0f) && (func_128() - uParam0->f_90) >= 1.0f)
	{
		return true;
	}
	return false;
}

int func_122(float fParam0)
{
	if (sLocal_26.f_4 >= 0 || func_35(&(sLocal_26.f_46), (1 << 12)))
	{
		if (func_142(&(sLocal_26.f_46), fParam0) || !func_107(0))
		{
			return 1;
		}
	}
	if (func_35(&(sLocal_26.f_46), (1 << 21)))
	{
		return 1;
	}
	if (!func_107(0))
	{
		return 1;
	}
	if (sLocal_26.f_4 == 4)
	{
		return 1;
	}
	if ((func_244(&(sLocal_26.f_46), sLocal_26.f_6, sLocal_26.f_6.f_16) || PED::_HAS_PED_BEEN_SHOVED_RECENTLY(sLocal_26.f_46, 3000)) || PED::IS_PED_RAGDOLL(sLocal_26.f_46))
	{
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(sLocal_26.f_46, Global_35, true, true))
	{
		return 1;
	}
	return 0;
}

void func_123(var uParam0)
{
	if (func_35(uParam0, (1 << 18)))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(*uParam0, 0, 1);
	}
}

bool func_124(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return true;
	}
	return false;
}

bool func_125(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_245(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_126(int iParam0)
{
	int iVar0;

	iVar0 = func_227(PLAYER::PLAYER_PED_ID(), 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return false;
	}
	if ((WEAPON::IS_WEAPON_A_GUN(iVar0) || func_246(iVar0)) || (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0) && iVar0 != joaat("WEAPON_LASSO")))
	{
		if (func_247(iParam0, 8.0f, 25.0f, 1097859072, 0))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iParam0))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			return true;
		}
	}
	return false;
}

bool func_127()
{
	return func_248(&(sLocal_26.f_46), 3.0f);
}

float func_128()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_129(var uParam0)
{
	if (func_249(uParam0))
	{
		func_11(0);
		func_250(uParam0);
		return true;
	}
	return false;
}

void func_130()
{
	if (!func_16(64))
	{
		if ((func_38(-3.5f, 1, 0, 0) && func_38(0, 1, Global_35, 1)) && func_38(0, 1, sLocal_26.f_46, 1))
		{
			func_40((1 << 17));
			func_15(64);
		}
	}
}

bool func_131(var uParam0)
{
	char* sVar0;

	sVar0 = func_192(uParam0);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_97[0]))
	{
		return false;
	}
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_97[0], sVar0);
	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_97[0], sVar0))
	{
		return true;
	}
	return false;
}

bool func_132(var uParam0, bool bParam1)
{
	var uVar0;

	func_30(1);
	if (func_251(*uParam0, joaat("BSWITCHTOEXIT"), "bSwitchToExit", 1, 1067030938, 1))
	{
		if (!func_35(uParam0, 4))
		{
			if (bParam1)
			{
				func_252(uParam0, &uVar0, 1114636288, -1);
			}
			func_37(uParam0, 4);
		}
		if (func_35(uParam0, (1 << 14)))
		{
			func_91(uParam0, (1 << 14));
		}
		return true;
	}
	return false;
}

void func_133(var uParam0)
{
	char* sVar0;

	func_253(uParam0);
	sVar0 = func_192(uParam0);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_97[0], sVar0, true);
}

bool func_134()
{
	return TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_ROB_CASH_REGISTER");
}

bool func_135(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = func_254();
	if (func_50(iVar0))
	{
		if (func_255(iVar0))
		{
			return true;
		}
	}
	return AUDIO::IS_ANY_SPEECH_PLAYING(iParam0);
}

bool func_136(var uParam0, bool bParam1)
{
	int iVar0;

	if (func_32(Global_35, 0, 1))
	{
		if (func_174(Global_35, joaat("PROP_PLAYER_CASH_REGISTER")) || func_174(Global_35, joaat("PROP_PLAYER_CASH_REGISTER_CLERK_OPENED")))
		{
			iVar0 = func_85(uParam0);
			func_27(uParam0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[0]))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_2[0]));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[1]))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_2[1]));
				}
			}
			if (bParam1)
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 384, false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::_IS_ENTITY_FROZEN(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				}
			}
			return true;
		}
	}
	return false;
}

void func_137(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_128() - fParam1);
	func_256(uParam0, 1);
	func_257(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_138(bool bParam0, bool bParam1)
{
	if (func_32(bParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(bParam0)));
	}
	return false;
}

bool func_139(float fParam0)
{
	if (func_258(1))
	{
		return true;
	}
	if (func_71(&uLocal_0) && !func_259(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0, bool bParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(sLocal_26.f_46.f_105))
	{
		if (bParam1)
		{
			if (PED::IS_PED_DEAD_OR_DYING(iParam0, true))
			{
				return false;
			}
		}
		return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, sLocal_26.f_46.f_105, bParam1, 0);
	}
	return false;
}

float func_141(var uParam0)
{
	if (!func_71(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_260(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_128() - uParam0->f_1);
}

bool func_142(var uParam0, float fParam1)
{
	int iVar0;

	if (!func_35(uParam0, 16))
	{
		if (func_56(uParam0))
		{
			func_37(uParam0, 16);
		}
	}
	else if (!func_35(uParam0, 32))
	{
		if (func_56(uParam0))
		{
			func_37(uParam0, 32);
		}
	}
	if (func_72(PLAYER::PLAYER_ID(), 0, 1, 0) && Global_1935630.f_24)
	{
		uParam0->f_101 = 1;
		return true;
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_105))
	{
		if (!VOLUME::IS_POINT_IN_VOLUME(uParam0->f_105, Global_36))
		{
			return true;
		}
	}
	if (Global_1935630.f_24)
	{
		iVar0 = PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_35, Global_36, 10.0f, 16896);
		if (iVar0 >= 1)
		{
			uParam0->f_101 = 1;
			return true;
		}
	}
	if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
	{
		func_103(&(uParam0->f_87), 0);
		if (func_41(&(uParam0->f_87), 1.5f))
		{
			if (fParam1 > 4.0f)
			{
				return true;
			}
			else
			{
				func_34(&(uParam0->f_87));
			}
		}
	}
	else if (func_71(&(uParam0->f_87)))
	{
		func_73(&(uParam0->f_87));
	}
	if (!func_35(uParam0, 16))
	{
		if ((fParam1 < 4.0f || func_126(*uParam0)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Global_35, *uParam0, 17))
		{
			if (func_71(&(uParam0->f_82)))
			{
				func_73(&(uParam0->f_82));
			}
			return false;
		}
	}
	func_103(&(uParam0->f_82), 0);
	if (func_41(&(uParam0->f_82), 3.0f))
	{
		return true;
	}
	if (func_35(uParam0, 16))
	{
		return true;
	}
	if (func_136(uParam0, 0))
	{
		return true;
	}
	return false;
}

void func_143(bool bParam0, bool bParam1)
{
	if (!func_32(bParam0, 0, 1))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 146, false);
		PED::SET_PED_CONFIG_FLAG(bParam0, 190, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 146, true);
		PED::SET_PED_CONFIG_FLAG(bParam0, 190, false);
	}
}

void func_144()
{
	func_40(8);
}

bool func_145(var uParam0)
{
	if (-1829635046 == func_261(joaat("CI_CATEGORY_WARDROBE_MASK")))
	{
		if (func_262(uParam0))
		{
			return true;
		}
	}
	else if (func_263(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), uParam0))
	{
		if (func_262(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_146()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_147(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	char* sVar9;
	int iVar10;

	if (func_89() != -1)
	{
		return;
	}
	iVar0 = func_264();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = MISC::ABSI(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = BUILTIN::TO_FLOAT(iVar0);
	fVar7 = BUILTIN::TO_FLOAT(Global_1347398);
	fVar8 = BUILTIN::TO_FLOAT(iVar3);
	iVar4 = func_265(BUILTIN::CEIL(((fVar6 / fVar7) * 100.0f)), 0, 100);
	iVar5 = func_265(BUILTIN::CEIL(((fVar8 / fVar7) * 100.0f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_266())
		{
			func_267(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_268())
		{
			func_267(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_269())
		{
			func_267(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_270())
	{
		func_267(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_70(func_271(joaat("FAME")), iVar1);
	iVar10 = func_264();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 52;
		case 17:
			return 68;
		case 28:
			return 54;
		case 29:
			return 61;
		case 39:
			return 49;
		case 40:
			return 70;
		case 42:
			return 55;
		case 43:
			return 62;
		case 61:
			return 56;
		case 73:
			return 50;
		case 74:
			return 58;
		case 75:
			return 76;
		case 82:
			return 71;
		case 90:
			return 57;
		case 91:
			return 63;
		case 95:
			return 51;
		case 54:
			return 64;
		default:
			break;
	}
	return func_149();
}

int func_149()
{
	return 5;
}

bool func_150(int iParam0)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_151(int iParam0, int iParam1)
{
	if (func_89() != -1)
	{
		return false;
	}
	if (!func_75(iParam0))
	{
		return false;
	}
	return Global_24887[iParam0 /*2*/] & iParam1 != 0;
}

bool func_152(int iParam0)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_153(int iParam0, int iParam1)
{
	if (func_89() != -1)
	{
		return;
	}
	if (!func_75(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= Global_24887[iParam0 /*2*/] & iParam1;
}

void func_154(int iParam0)
{
	int iVar0;

	if (!func_75(iParam0))
	{
		return;
	}
	iVar0 = func_187(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_155(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_156(int iParam0)
{
	return iParam0 != 0;
}

int func_157(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_158(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!func_151(iParam0, 2))
	{
		return 0;
	}
	if (func_155(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_157(iParam0)))
	{
		return 1;
	}
	if (func_151(iParam0, 1) && !bParam1)
	{
		func_272(iParam0, 128);
		return 1;
	}
	func_153(iParam0, 129);
	func_154(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_157(iParam0));
	func_273(iParam0, 0);
	return 1;
}

void func_159(int iParam0, int iParam1)
{
	if (!func_50(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] |= iParam1;
}

void func_160(int iParam0, int iParam1)
{
	if (!func_50(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] -= Global_1914319.f_15614[iParam0] & iParam1;
}

void func_161(int iParam0)
{
	func_274(func_95(iParam0));
}

int func_162(int iParam0, int iParam1)
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

int func_163(int iParam0)
{
	int iVar0;

	if (!func_50(iParam0))
	{
		return 0;
	}
	iVar0 = func_95(iParam0);
	if ((((((((((iVar0 == 2 && func_275(28)) || (iVar0 == 18 && iParam0 != 55)) || iVar0 == 1) || iVar0 == 11) || iParam0 == 69) || iVar0 == 33) || iVar0 == 20) || iVar0 == 19) || iVar0 == 9) || func_276(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	if (iParam0 == 15)
	{
		return 65539;
	}
	return 7;
}

int func_165(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_278(func_277());
	if (func_279(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_279(iParam0, (1 << 12)))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_279(iParam0, (1 << 10)))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_279(iParam0, (1 << 9)))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_279(iParam0, (1 << 13)))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_279(iParam0, (1 << 11)))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_279(iParam0, (1 << 14)))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_279(iParam0, (1 << 15)))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_279(iParam0, (1 << 16)))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_166(var uParam0, int iParam1)
{
	struct<6> /*48*/ sVar0;

	if (SCRIPTS::GET_EVENT_DATA(0, iParam1, &sVar0, 10))
	{
		if (sVar0.f_0 != Global_35)
		{
			return 0;
		}
		if (sVar0.f_4 != 2)
		{
			return 0;
		}
		if (sVar0.f_5 != 1)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_167(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_25, Global_36);
}

bool func_168(var uParam0)
{
	return func_35(uParam0, (1 << 19));
}

Vector3 func_169(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 2940.831f, 1314.94f, 43.47723f };
		case 7:
			return { -787.9549f, -1329.94f, 42.642f };
		case 17:
			return { -756.287f, -1303.571f, 42.55379f };
		case 19:
			return { 1442.6f, 263.8f, 90.5f };
		case 39:
			return { 2714.857f, -1220.076f, 50.17068f };
		case 42:
			return { 2826.128f, -1310.247f, 45.77036f };
		case 43:
			return { 2724.865f, -1289.872f, 48.13114f };
		case 41:
			return { 2846.573f, -1207.054f, 46.69181f };
		case 47:
			return { 2545.625f, -1174.883f, 52.3105f };
		case 28:
			return { 1320.562f, -1288.47f, 75.29237f };
		case 29:
			return { 1331.844f, -1319.767f, 76.94893f };
		case 61:
			return { -1798.134f, -386.6793f, 159.2768f };
		case 73:
			return { -290.366f, 802.7841f, 118.2866f };
		case 74:
			return { -316.9948f, 797.8707f, 116.5135f };
		case 75:
			return { -285.2195f, 775.3804f, 117.7822f };
		case 82:
			return { 3018.616f, 555.4745f, 43.68162f };
		case 90:
			return { -5495.194f, -2937.927f, -1.45012f };
		case 91:
			return { -5512.303f, -2962.822f, -2.57416f };
		case 95:
			return { -3678.501f, -2632.466f, -14.71208f };
		case 87:
			return { -1308.618f, 395.231f, 94.38168f };
		case 89:
			return { -1308.618f, 395.231f, 94.38168f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_170(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_280(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_171(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_281(iParam0, iParam1, 0.0f))
		{
			return false;
		}
	}
	if (!func_282(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

Vector3 func_172(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 2946.049f, 1319.564f, 45.14626f };
		case 7:
			return { -785.9345f, -1322.95f, 44.21807f };
		case 17:
			return { -762.7703f, -1292.778f, 43.8849f };
		case 19:
			return { 1419.994f, 380.5412f, 110.2361f };
		case 39:
			return { 2720.6f, -1233.0f, 50.4f };
		case 42:
			return { 2825.685f, -1319.379f, 46.8135f };
		case 43:
			return { 2717.57f, -1285.85f, 49.68f };
		case 41:
			return { 2860.15f, -1201.55f, 49.92473f };
		case 47:
			return { 2555.87f, -1167.69f, 53.73f };
		case 28:
			return { 1329.456f, -1293.444f, 77.33836f };
		case 29:
			return { 1323.26f, -1322.5f, 77.93f };
		case 61:
			return { -1789.791f, -387.0551f, 160.6592f };
		case 73:
			return { -287.5373f, 805.1658f, 119.7208f };
		case 74:
			return { -323.4636f, 804.3255f, 118.215f };
		case 75:
			return { -280.3192f, 779.6469f, 119.8516f };
		case 82:
			return { 3026.349f, 561.7162f, 44.7613f };
		case 90:
			return { -5487.0f, -2938.0f, -0.4f };
		case 95:
			return { -3686.5f, -2622.7f, -13.4f };
		case 87:
			return { -1302.749f, 393.2226f, 95.4803f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_173(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true);
		}
	}
	return false;
}

bool func_174(int iParam0, int iParam1)
{
	return PED::IS_PED_USING_SCENARIO_HASH(iParam0, iParam1);
}

int func_175(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (!func_283(iParam0))
	{
		return 0;
	}
	if (!func_284(iParam0, &iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (func_89() == -1)
	{
		iVar1 = Global_1914319.f_3[iParam0 /*446*/].f_10;
	}
	else
	{
		iVar1 = Global_1051260.f_48[iParam0 /*78*/].f_16;
	}
	func_286(iVar0, uParam1, iVar0, bParam2, func_285(iVar1), 0, iParam3);
	return 1;
}

void func_176(int iParam0)
{
	Global_20710.f_1168[iParam0]++;
	Global_20710.f_1322[iParam0] = func_277();
}

void func_177(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_50(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_287(iParam0, (1 << 15));
	}
	if (bParam2)
	{
		func_287(iParam0, (1 << 10));
	}
}

void func_178(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_288() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_289(iVar1) && !func_290(iVar1, iParam2)) && (!bParam3 || !func_291(iVar1))) && (!bParam4 || !func_292(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_293(iVar0);
			}
		}
		iVar0++;
	}
}

void func_179()
{
	if (!func_289(Global_1327479))
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
	func_294(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_180(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_295(iParam0, iParam1, bParam2);
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

bool func_181(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_182(bool bParam0, bool bParam1, bool bParam2)
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

int func_183(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_296(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_297(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_184(int iParam0, var uParam1, Vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	var uVar2[40];
	Vector3 vVar43;
	Vector3 vVar46[24];
	int iVar49;

	iVar0 = func_298(&uVar2, uParam1, iParam5, vParam2, iParam7, iParam8, bParam9, 0, -1, 1, iParam10, bParam11, 0, 0);
	func_299(&uVar2, iVar0, vParam2, 1, 1, 0);
	iVar1 = 0;
	iVar49 = 0;
	strcpy_s(&cVar46, 24, "GRABBED_PED ");
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_117(uVar2[iVar1], 0))
		{
			vVar43 = { cVar46 /*3*/ };
			StringIntConCat(&vVar43, iVar1, 24);
			if (bParam9)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar2[iVar1], true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2[iVar1], true, true);
			}
			PED::SET_PED_NAME_DEBUG(uVar2[iVar1], &vVar43);
			(*iParam0)[iVar49] = uVar2[iVar1];
			iVar49++;
			if (iVar49 >= iParam6)
			{
			}
			else
			{
				iVar1++;
			}
		}
	}
}

void func_185(var uParam0, var uParam1)
{
	*uParam1 = Global_35;
	uParam1->f_1 = *uParam0;
	uParam1->f_2 = joaat("CRIME_ROBBERY");
	uParam1->f_3 = { Global_36 /*3*/ };
	uParam1->f_6 = func_300(func_96(), 1, 1);
	uParam1->f_8 = 1;
	uParam1->f_9 = 0;
	uParam1->f_10 = 0;
	uParam1->f_11 = 0;
}

bool func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_32(iParam0, 0, 1))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("S_M_M_TRAINSTATIONWORKER_01"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
			return false;
		default:
			break;
	}
	iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
	if (!INTERIOR::IS_VALID_INTERIOR(iParam1))
	{
		return false;
	}
	if (iVar1 == iParam1)
	{
		return true;
	}
	if (INTERIOR::IS_VALID_INTERIOR(iVar1))
	{
		return false;
	}
	return true;
}

int func_187(int iParam0)
{
	int iVar0;

	iVar0 = func_157(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
}

int func_188(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1895087[iParam0 /*3*/]);
}

int func_189(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return 1;
}

void func_190(var uParam0)
{
	func_301(uParam0, 1, 1, 0);
	func_302(uParam0, 0);
	func_303(uParam0, 0);
	func_304(uParam0, 1);
	func_305(uParam0, 1);
	func_306(uParam0, 1);
	func_307(uParam0, 0);
	func_308(uParam0, 1);
}

char* func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@GLOBAL@CLERK_OPEN_REGISTER@BASE";
		default:
			break;
	}
	return "bad anim scene";
}

char* func_192(var uParam0)
{
	char* sVar0;

	if (uParam0->f_108 == -2)
	{
		uParam0->f_108 = func_309(uParam0);
	}
	sVar0 = "pblExitB";
	switch (uParam0->f_108)
	{
		case 0:
			sVar0 = "pblExitB";
			break;
		case 1:
			sVar0 = "pblExitL";
			break;
		case 2:
			sVar0 = "pblExitR";
			break;
		case 3:
			sVar0 = "pblExitBFar";
			break;
		case 4:
			sVar0 = "pblExitLFar";
			break;
		case 5:
			sVar0 = "pblExitRFar";
			break;
		case 7:
			sVar0 = "pblExitL45";
			break;
		case 6:
			sVar0 = "pblExitR45";
			break;
	}
	return sVar0;
}

bool func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_89() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

bool func_194(int iParam0, bool bParam1, bool bParam2)
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
		if (func_310())
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
		iVar0 = func_311(Global_1898164.f_1[0 /*5*/]);
		if (func_312(iVar0) && func_313(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_314(Global_1898164.f_1[0 /*5*/]))
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

bool func_195(int iParam0)
{
	int iVar0;

	if (iParam0 > 25)
	{
		return false;
	}
	iVar0 = func_162(func_96(), iParam0);
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

bool func_196(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		return false;
	}
	if (VOLUME::IS_POINT_IN_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_25, Global_36))
	{
		return true;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_28))
	{
		return false;
	}
	if (VOLUME::IS_POINT_IN_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_28, Global_36))
	{
		return true;
	}
	return false;
}

bool func_197(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return false;
	}
	return Global_1914319.f_3[iParam0 /*446*/].f_7 & iParam1 != 0;
}

void func_198(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 -= Global_1914319.f_3[iParam0 /*446*/].f_7 & iParam1;
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_200(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_315(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_316(iParam0))
	{
		return false;
	}
	if (func_317(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_318(iParam0, 1)) || func_319((1 << 15)))
	{
		if (!func_318(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_320())
	{
		return false;
	}
	return true;
}

void func_201(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_202(var uParam0, float fParam1)
{
	Vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 /*3*/ };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

void func_203(var uParam0, bool bParam1)
{
	int iVar0;

	(*uParam0)[0] = joaat("P_REGISTER03X");
	(*uParam0)[1] = joaat("P_REGISTER04X");
	(*uParam0)[2] = joaat("P_REGISTER05X");
	(*uParam0)[3] = joaat("P_REGISTER06X");
	(*uParam0)[4] = joaat("P_REGISTER07X");
	(*uParam0)[5] = joaat("P_REGISTER08X");
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0], false);
			iVar0++;
		}
	}
}

bool func_204(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

int func_205(var uParam0, var uParam1, int iParam2, Vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	iVar1 = func_321(uParam0, uParam1, iVar0, iParam2);
	func_322(iVar0);
	return iVar1;
}

bool func_206(int iParam0, int iParam1)
{
	return Global_20710.f_2092[iParam0] & iParam1 != 0;
}

bool func_207(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_89() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_208(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iParam0);
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_155(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_157(iVar2)))
		{
			if (func_157(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_209(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_211(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_323(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_324(iVar0);
	*uParam0 = 0;
}

void func_210(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_73(&(iParam0->f_18));
}

bool func_211(int iParam0)
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

bool func_212()
{
	struct<7> /*56*/ sVar0;

	PED::SET_PED_RESET_FLAG(sLocal_26.f_46, 49, true);
	if (!func_35(&(sLocal_26.f_46), (1 << 12)))
	{
		sLocal_26.f_155 = func_118(&(sLocal_26.f_46), sLocal_26.f_46.f_105, 0, 0, 0.5f, 0, 1109393408);
		if (func_124(&(sLocal_26.f_46), sLocal_26.f_155))
		{
			PED::SET_PED_CONFIG_FLAG(sLocal_26.f_46, 171, true);
			return true;
		}
	}
	if (func_325(sLocal_26.f_46.f_66))
	{
		return false;
	}
	if (!func_51(sLocal_26.f_46.f_66, (1 << 22)))
	{
		if (func_119(Global_35, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")))
		{
			if ((func_326(sLocal_26.f_1) && func_327(sLocal_26.f_1)) && func_125(sLocal_26.f_46, 1050253722, 1060320051, 0, 1061158912))
			{
				func_103(&(sLocal_26.f_46.f_91), 0);
				if (func_41(&(sLocal_26.f_46.f_91), 0.1f))
				{
					func_37(&(sLocal_26.f_46), (1 << 21));
				}
				return false;
			}
		}
		if (((func_113(sLocal_26.f_46, 1) && func_126(sLocal_26.f_46)) && func_326(sLocal_26.f_1)) && func_327(sLocal_26.f_1))
		{
			func_103(&(sLocal_26.f_46.f_91), 0);
			if (func_41(&(sLocal_26.f_46.f_91), 0.1f))
			{
				func_37(&(sLocal_26.f_46), (1 << 21));
			}
			return false;
		}
		if (func_328(sLocal_26.f_46, 0, &(sLocal_26.f_6), &(sLocal_26.f_6.f_16), 0, 0))
		{
			func_103(&(sLocal_26.f_46.f_91), 0);
			if (func_41(&(sLocal_26.f_46.f_91), 0.1f))
			{
				func_37(&(sLocal_26.f_46), (1 << 21));
				if (func_98(sLocal_26.f_6.f_16))
				{
					func_15((1 << 14));
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_26.f_46, true);
					return true;
				}
				if (func_329(sLocal_26.f_6.f_16))
				{
					func_15((1 << 14));
					return false;
				}
				func_330(&(sLocal_26.f_6), &(sLocal_26.f_6.f_16));
				return true;
			}
			return false;
		}
		if (VOLUME::DOES_VOLUME_EXIST(sLocal_26.f_46.f_105))
		{
			func_331(sLocal_26.f_46.f_105, &sVar0);
			if ((!func_204(sVar0) && !func_204(sVar0.f_3)) && sVar0.f_6 > 0.0f)
			{
				if (MISC::IS_BULLET_IN_ANGLED_AREA(sVar0, sVar0.f_3, sVar0.f_6, false))
				{
					func_15((1 << 14));
					return false;
				}
			}
		}
	}
	return false;
}

bool func_213(int iParam0)
{
	return !func_51(iParam0, 1);
}

void func_214()
{
	if (func_16(16))
	{
		func_332(16);
	}
}

bool func_215(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_333(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

char* func_216()
{
	return "script_proc@robberies@shop@valdoc@ig_3";
}

char* func_217()
{
	return "hands_up_enter_doc";
}

char* func_218()
{
	return "hands_up_loop_doc";
}

void func_219(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	func_100(iParam0, Global_36, 5, 0, 3);
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		TASK::TASK_REACT(iParam0, Global_35, Global_36, "Default_Shocked", 1.0f, 0.0f, 4);
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		TASK::TASK_STAND_STILL(0, 500);
	}
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1.0f, 0.3f, 0.52f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_220(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_334(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_335(&Global_1935630, (1 << 22));
	}
	MISC::ENABLE_DISPATCH_SERVICE(15 /*DT_OnFoot*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6 /*DT_PoliceRiders*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1 /*DT_PoliceAutomobile*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16 /*DT_PoliceDogs*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2 /*DT_PoliceHelicopter*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3 /*DT_FireDepartment*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4 /*DT_SwatAutomobile*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5 /*DT_AmbulanceDepartment*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7 /*DT_PoliceVehicleRequest*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9 /*DT_PoliceAutomobileWaitPulledOver*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10 /*DT_PoliceAutomobileWaitCruising*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11 /*DT_Gangs*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12 /*DT_SwatHelicopter*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13 /*DT_PoliceBoat*/, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14 /*DT_ArmyVehicle*/, bParam0);
}

void func_221(int iParam0, var uParam1)
{
	*uParam1 = Global_35;
	uParam1->f_1 = iParam0;
	uParam1->f_2 = joaat("CRIME_ROBBERY");
	uParam1->f_3 = { Global_36 /*3*/ };
	uParam1->f_6 = func_300(func_96(), 1, 1);
	uParam1->f_8 = 1;
	uParam1->f_9 = 0;
	uParam1->f_10 = 0;
	uParam1->f_11 = 0;
}

bool func_222()
{
	char* sVar0;

	if (func_16(128))
	{
		return false;
	}
	sVar0 = "SHOP_CLERK_REGROBSTART";
	func_336(0);
	if (func_225(sLocal_26.f_46, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0))
	{
		func_15(128);
		return true;
	}
	return false;
}

bool func_223(var uParam0)
{
	int iVar0;

	iVar0 = func_95(uParam0->f_66);
	if (iVar0 != 6 && func_96() != 92)
	{
		return false;
	}
	if (func_96() == 105 && func_97())
	{
		return false;
	}
	if (func_72(PLAYER::PLAYER_ID(), 0, 1, 0))
	{
		return false;
	}
	if (func_337(uParam0->f_105, Global_36))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_105, func_338(Global_35, 0.5f)))
		{
			return true;
		}
	}
	return false;
}

bool func_224()
{
	if (func_264() >= 1000)
	{
		return true;
	}
	return false;
}

bool func_225(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_339(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_226()
{
	if (func_340(0))
	{
		return true;
	}
	return false;
}

int func_227(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

var func_228(var uParam0)
{
	return uParam0;
}

void func_229(var uParam0)
{
	func_40(256);
}

void func_230(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam0, true, true);
	func_341(*uParam0, iParam3, -1, 0, 0, 1056964608, 1065353216, 0);
	func_342(uParam0, iParam1, iParam2);
}

int func_231(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_160(uParam0->f_66, (1 << 10));
	}
	else
	{
		func_159(uParam0->f_66, (1 << 10));
	}
	if (bParam1)
	{
		func_48(*uParam0, 1);
		return 1;
	}
	return 0;
}

bool func_232(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_233(var uParam0)
{
	return uParam0->f_2 == 2;
}

bool func_234()
{
	if (func_343(4))
	{
		return Global_1935630.f_27;
	}
	return func_344();
}

void func_235(var uParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	if (!func_35(uParam0, (1 << 19)))
	{
		func_345(&(uParam0->f_29[0 /*17*/]), 0);
		func_346(&(uParam0->f_29[0 /*17*/]), "ROB_REGISTER", sParam1, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		uParam0->f_29[0 /*17*/].f_9 = 3;
	}
	if (!bParam2)
	{
		return;
	}
	switch (uParam0->f_66)
	{
		case 29:
		case 61:
			sVar0 = "SR_ROB_ILO_BASEMENT";
			break;
		case 43:
		case 73:
			sVar0 = "SR_ROB_ILO_BACKROOM";
			break;
	}
	if (!func_35(uParam0, (1 << 16)))
	{
		func_345(&(uParam0->f_29[1 /*17*/]), 0);
		func_346(&(uParam0->f_29[1 /*17*/]), sVar0, "", joaat("INPUT_INTERACT_OPTION1"), 0, 0, 0, 1, 0);
		uParam0->f_29[1 /*17*/].f_9 = 3;
	}
}

void func_236(var uParam0)
{
	bool bVar0;

	if (func_35(uParam0, (1 << 19)) || uParam0->f_7[0 /*21*/].f_1 == 0)
	{
		return;
	}
	bVar0 = func_248(uParam0, 3.0f);
	if (!uParam0->f_104)
	{
		if (bVar0)
		{
			uParam0->f_29[0 /*17*/].f_13 = "PLAYER_HOLDUP_ROB_FAR";
			uParam0->f_104 = 1;
		}
	}
	else if (!bVar0)
	{
		uParam0->f_29[0 /*17*/].f_13 = "PLAYER_HOLDUP_ROB";
		uParam0->f_104 = 0;
	}
}

void func_237(var uParam0, bool bParam1)
{
	func_345(&(uParam0->f_29[0 /*17*/]), 1);
	if (bParam1)
	{
		func_345(&(uParam0->f_29[1 /*17*/]), 1);
	}
}

int func_238(int iParam0, int iParam1, int iParam2)
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
		iVar0 -= iVar0 & iParam2;
	}
	return iVar0;
}

int func_239(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_347(&iVar0);
	if (func_279(iVar0, 16) && !bParam15)
	{
		iParam9 |= (1 << 23);
	}
	iVar1 = func_348(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_279(iVar0, (1 << 27)))
	{
		func_349(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_193(558))
				{
					func_84(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_240(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

bool func_241(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_279(iParam4, 32);
		func_92(iParam1, uParam2, 0);
		iVar5 = func_350(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_93(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_279(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_279(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_279(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_279(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_279(iParam4, (1 << 23)) || func_279(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_279(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_279(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_351(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_351(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_279(iParam4, (1 << 26)))
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
				iParam6 = func_352(uParam0);
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
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_279(iParam4, (1 << 28)))
			{
				iVar8 = func_353(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_354(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_351(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_279(iParam4, 2) || func_279(iParam4, 16))
			{
				func_355(*uParam0, 1, 1);
			}
			else
			{
				func_355(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_242(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_356(&(uParam0->f_29[0 /*17*/]), 0))
		{
			func_357(&(uParam0->f_29[0 /*17*/]), 1, 0);
		}
		if (bParam2)
		{
			if (!func_356(&(uParam0->f_29[1 /*17*/]), 0))
			{
				func_357(&(uParam0->f_29[1 /*17*/]), 1, 0);
			}
		}
	}
	else
	{
		if (func_356(&(uParam0->f_29[0 /*17*/]), 0))
		{
			func_357(&(uParam0->f_29[0 /*17*/]), 0, 0);
		}
		if (bParam2)
		{
			if (func_356(&(uParam0->f_29[1 /*17*/]), 0))
			{
				func_357(&(uParam0->f_29[1 /*17*/]), 0, 0);
			}
		}
	}
}

bool func_243(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0) && bParam5)
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iParam1, false))
	{
		return true;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iParam1, false))
	{
		return true;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (bParam6)
		{
			if (ANIMSCENE::COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME(iParam1, sParam2, 1, 0))
			{
				return true;
			}
		}
		if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iParam1, sParam2) || ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(iParam1, sParam2))
		{
			return true;
		}
	}
	if (iParam3 != 0 && ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam3))
	{
		return true;
	}
	if (fParam4 > 0.0f && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1) >= fParam4)
	{
		return true;
	}
	return false;
}

bool func_244(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29)
{
	if (func_35(uParam0, 4) && func_328(*uParam0, 0, &uParam1, &iParam29, 0, 0))
	{
		if (func_98(iParam29))
		{
			return true;
		}
	}
	return false;
}

bool func_245(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_246(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

bool func_247(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	float fVar13;
	float fVar14;

	if (!Global_1935630.f_27 && !bParam4)
	{
		return false;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		fVar0 = func_358(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false))
			{
				if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return false;
					}
				}
				iVar3 = func_227(PLAYER::PLAYER_PED_ID(), 0);
				if (func_246(iVar3) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					return false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::WAS_PED_SKELETON_UPDATED(iParam0))
				{
					vVar4 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0.0f, 0.0f, 0.0f) /*3*/ };
				}
				else
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
				}
				vVar7 = { func_359(0) /*3*/ };
				vVar10 = { func_360(vVar4 - CAM::GET_GAMEPLAY_CAM_COORD()) /*3*/ };
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_248(var uParam0, float fParam1)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	float fVar7;
	float fVar8;
	float fVar9;

	if (!func_35(uParam0, (1 << 25)))
	{
		return 1;
	}
	if (!func_32(*uParam0, 0, 1))
	{
		return 1;
	}
	if (fParam1 != 30.0f)
	{
		fParam1 = 30.0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) /*3*/ };
	iVar3 = func_85(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, true, false) /*3*/ };
	}
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, uParam0->f_75, false);
	fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_75, false);
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar4, false);
	if (fVar8 < 2.0f && fVar8 < fVar7)
	{
		if (fVar8 < fVar9)
		{
			return 1;
		}
	}
	if ((fVar7 > 4.0f && fVar8 < 4.0f) && fVar8 < fVar7)
	{
		return 1;
	}
	if (PED::IS_PED_HOGTIED(*uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_249(var uParam0)
{
	int iVar0;
	Vector3 vVar1;

	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_97[0], "pblExitB");
	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_97[0], "pblExitB"))
	{
		iVar0 = func_85(uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (uParam0->f_85 < 0.0f)
			{
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0.074814f, -0.117756f, 0.059386f) /*3*/ };
				uParam0->f_2[0] = OBJECT::CREATE_OBJECT(joaat("P_CS_BILLSINGLE01BX"), vVar1, true, true, false, false, true);
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -0.082664f, -0.117757f, 0.059386f) /*3*/ };
				uParam0->f_2[1] = OBJECT::CREATE_OBJECT(joaat("P_CS_BILLSINGLE01BX"), vVar1, true, true, false, false, true);
				uParam0->f_5 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(iVar0, joaat("PROP_PLAYER_CASH_REGISTER_CLERK_OPENED"), 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, true);
				if (!func_362(func_361(uParam0->f_97[0], "pblExitB"), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_97[0], ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "CLERK", *uParam0, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "REGISTER", iVar0, 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "OOXO", uParam0->f_2[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "OXOO", uParam0->f_2[1], 0);
				PED::SET_PED_MOVE_ANIMS_BLEND_OUT(*uParam0);
				uParam0->f_85 = func_128();
			}
			else if ((func_128() - uParam0->f_85) >= 0.2f)
			{
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_97[0]);
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_97[0], "pblExitB", true);
				return true;
			}
		}
		else
		{
			if (func_35(uParam0, (1 << 25)))
			{
				func_91(uParam0, (1 << 25));
			}
			func_13(uParam0);
		}
	}
	return false;
}

void func_250(var uParam0)
{
	int iVar0[2];

	if (!func_35(uParam0, 1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2[0], true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2[1], true);
		TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam0->f_5, uParam0->f_2[0], "OOXO", true);
		TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam0->f_5, uParam0->f_2[1], "OXOO", true);
		iVar0[0] = TASK::GET_PROP_FOR_SCENARIO_POINT(uParam0->f_5, "OXOO");
		iVar0[1] = TASK::GET_PROP_FOR_SCENARIO_POINT(uParam0->f_5, "OOXO");
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0[0], true);
			ENTITY::SET_ENTITY_COLLISION(iVar0[0], true, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0[1], true);
			ENTITY::SET_ENTITY_COLLISION(iVar0[1], true, false);
		}
		func_37(uParam0, 1);
	}
}

bool func_251(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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

int func_252(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!func_32(*uParam0, 0, 1) || !func_32(Global_35, 0, 1))
	{
		return 1;
	}
	if (!*uParam1)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, iParam3, -1.0f, -1.0f, -1.0f);
		*uParam1 = 1;
	}
	if (PED::IS_PED_FACING_PED(*uParam0, Global_35, fParam2))
	{
		return 1;
	}
	return 0;
}

void func_253(var uParam0)
{
	struct<22> /*176*/ sVar0;

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
	sVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	sVar0.f_3 = Global_35;
	sVar0.f_8 = 4;
	sVar0.f_19 = 4;
	sVar0.f_21 = 4;
	sVar0.f_17 = 4;
	sVar0.f_18 = 4;
	sVar0.f_7 = 40000;
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*uParam0, &sVar0);
}

int func_254()
{
	if (func_58())
	{
		return Global_1914319.f_16855.f_1;
	}
	return -1;
}

bool func_255(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_51(iParam0, (1 << 30));
}

void func_256(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_257(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_258(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

bool func_259(var uParam0, float fParam1)
{
	if (func_41(uParam0, fParam1))
	{
		func_73(uParam0);
		return true;
	}
	return false;
}

bool func_260(var uParam0)
{
	return func_181(*uParam0, 2);
}

int func_261(int iParam0)
{
	int iVar0;

	iVar0 = func_364(func_363(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_262(var uParam0)
{
	if (func_263(joaat("CI_CATEGORY_WARDROBE_MASK"), uParam0))
	{
		return true;
	}
	if (func_263(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), uParam0))
	{
		return true;
	}
	return false;
}

bool func_263(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_364(func_363(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		bVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_365(bVar0) == iParam0)
		{
			*uParam1 = bVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

var func_264()
{
	if (func_89() != -1)
	{
		return 0;
	}
	return func_366(joaat("FAME"));
}

int func_265(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_266()
{
	return Global_1347398.f_1 == 0;
}

void func_267(int iParam0)
{
	Global_1347398.f_1 = iParam0;
}

bool func_268()
{
	return Global_1347398.f_1 == 1000;
}

bool func_269()
{
	return Global_1347398.f_1 == 2000;
}

bool func_270()
{
	return Global_1347398.f_1 == 3000;
}

struct<2> /*16*/ func_271(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_272(int iParam0, int iParam1)
{
	if (func_89() != -1)
	{
		return;
	}
	if (!func_75(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

void func_273(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

void func_274(int iParam0)
{
	Global_1914319.f_15923 = iParam0;
}

bool func_275(int iParam0)
{
	if (!func_367(iParam0))
	{
		return false;
	}
	return func_368(iParam0);
}

bool func_276(int iParam0)
{
	bool bVar0;

	bVar0 = func_51(iParam0, 256);
	return bVar0;
}

int func_277()
{
	return Global_1899515;
}

int func_278(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_279(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_280(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_369(iParam1))
		{
			func_370(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_371(iParam0, 0, 1);
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
			func_372(iParam0, 0);
			bVar0 = true;
		}
		func_373(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_281(int iParam0, int iParam1, float fParam2)
{
	return func_374(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_282(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_283(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_284(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return false;
	}
	if (func_89() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051260.f_48[iParam0 /*78*/].f_19))
		{
			*iParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[iParam0 /*78*/].f_19);
		}
		else
		{
			return false;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_23))
	{
		*iParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[iParam0 /*446*/].f_23);
	}
	else
	{
		return false;
	}
	return true;
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10074;
		case 2:
			return 10076;
		case 3:
			return 10077;
		case 6:
			return 10034;
		case 7:
			return 10040;
		case 8:
			return 10041;
		case 13:
			return 10042;
		case 14:
			return 10043;
		case 15:
			return 10043;
		case 17:
			return 10044;
		case 18:
			return 10050;
		case 19:
			return 10051;
		case 20:
			return 10052;
		case 21:
			return 10053;
		case 22:
			return 10000;
		case 23:
			return 10025;
		case 24:
			return 10026;
		case 25:
			return 10096;
		case 26:
			return 10098;
		case 27:
			return 10101;
		case 28:
			return 10102;
		case 29:
			return 10103;
		case 30:
			return 10104;
		case 31:
			return 10105;
		case 36:
			return 10005;
		case 37:
			return 10006;
		case 38:
			return 10008;
		case 39:
			return 10011;
		case 40:
			return 10012;
		case 41:
			return 10013;
		case 42:
			return 10014;
		case 43:
			return 10016;
		case 44:
			return 10017;
		case 45:
			return 10018;
		case 46:
			return 10020;
		case 47:
			return 10019;
		case 55:
			return 10116;
		case 48:
			return 10113;
		case 49:
			return 10114;
		case 50:
			return 10115;
		case 60:
			return 10028;
		case 61:
			return 10031;
		case 62:
			return 10031;
		case 65:
			return 10032;
		case 68:
			return 10058;
		case 69:
			return 10059;
		case 72:
			return 10061;
		case 73:
			return 10064;
		case 74:
			return 10065;
		case 75:
			return 10066;
		case 76:
			return 10067;
		case 77:
			return 10068;
		case 78:
			return 10069;
		case 79:
			return 10118;
		case 82:
			return 10088;
		case 86:
			return 10090;
		case 85:
			return 10090;
		case 89:
			return 10047;
		case 88:
			return 10047;
		case 120:
			return 10071;
		case 106:
			return 10036;
		case 107:
			return 10038;
		case 109:
			return 10007;
		case 110:
			return 10010;
		case 112:
			return 10097;
		case 114:
			return 10027;
		case 102:
			return 10060;
		case 103:
			return 10063;
		case 116:
			return 10085;
		case 128:
			return 10078;
		case 129:
			return 10079;
		case 130:
			return 10080;
		case 131:
			return 10081;
		case 132:
			return 10092;
		case 133:
			return 10093;
		case 134:
			return 10094;
		case 135:
			return 10095;
		case 137:
			return 10054;
		case 138:
			return 10055;
		case 139:
			return 10056;
		case 140:
			return 10057;
		case 141:
			return 10001;
		case 142:
			return 10002;
		case 143:
			return 10003;
		case 144:
			return 10004;
		case 145:
			return 10021;
		case 146:
			return 10022;
		case 147:
			return 10023;
		case 148:
			return 10024;
		case 90:
			return 10107;
		case 91:
			return 10108;
		case 92:
			return 10117;
		case 99:
			return 10119;
		case 100:
			return 10120;
		case 95:
			return 10111;
		default:
			break;
	}
	return 0;
}

void func_286(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	struct<17> /*136*/ sVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		sVar0.f_14 = iParam0;
		sVar0.f_0 = uParam1;
		sVar0.f_12 = 22;
		sVar0.f_3 = iParam2;
		sVar0.f_8 = iParam5;
		sVar0.f_11 = iParam6;
		sVar0.f_13 = iParam4;
		if (!bParam3)
		{
			func_375(&(sVar0.f_16), 1);
		}
		MISC::_CREATE_AI_MEMORY(&sVar0, 17);
	}
}

void func_287(int iParam0, int iParam1)
{
	if (func_206(iParam0, iParam1))
	{
		return;
	}
	Global_20710.f_2092[iParam0] |= iParam1;
}

int func_288()
{
	return Global_1310750.f_16037;
}

bool func_289(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_290(int iParam0, int iParam1)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/] & iParam1 != 0;
}

bool func_291(int iParam0)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	if (func_376(64) && func_377(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_292(int iParam0)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_293(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_289(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_378(iParam0);
	Global_1310750.f_16037--;
}

void func_294(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

void func_295(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_379(iParam0, iParam1, bParam2);
}

bool func_296(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_380(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_18(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_297(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_298(var uParam0, var uParam1, int iParam2, Vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (bParam13 <= 0.0f)
	{
		iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0.0f, 0.0f, 0.0f, bParam6, bParam6, bParam6);
	}
	else
	{
		iVar0 = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0.0f, 0.0f, 0.0f, bParam6, bParam6, bParam13);
	}
	iVar1 = func_183(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_322(iVar0);
	return iVar1;
}

void func_299(var uParam0, int iParam1, Vector3 vParam2, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	float fVar4;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (bParam6)
		{
			fVar4 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0], false, false), vParam2);
		}
		else
		{
			fVar4 = func_381(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0], false, false), vParam2);
		}
		if (iVar0 > 0)
		{
			if ((bParam5 && fVar4 < fVar3) || (!bParam5 && fVar4 > fVar3))
			{
				uVar2 = (*uParam0)[iVar0];
				uVar1 = (*uParam0)[(iVar0 - 1)];
				(*uParam0)[(iVar0 - 1)] = uVar2;
				(*uParam0)[iVar0] = uVar1;
				iVar0--;
			}
		}
		fVar3 = fVar4;
		iVar0++;
	}
	if (bParam7)
	{
	}
}

int func_300(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_382(iParam0))
			{
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 105:
			if (func_382(iParam0))
			{
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_RHODES");
			}
			break;
		case 5:
			return joaat("LAW_REGION_SAINT_DENIS");
		case 61:
			return joaat("LAW_REGION_MANICATO");
		case 78:
			return joaat("LAW_REGION_ANNESBURG");
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
		case 38:
			if (!bParam1 || func_89() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (func_275(45))
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			else
			{
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			}
			break;
		case 92:
			return joaat("LAW_REGION_VAN_HORN");
		case 65:
			return joaat("LAW_REGION_CORNWALL");
		case 69:
			return joaat("LAW_REGION_EMERALD_RANCH");
		case 93:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
		case 95:
			return joaat("LAW_REGION_CALIGA_HALL");
		case 57:
			return joaat("LAW_REGION_AGUASDULCES");
		case 3:
			return joaat("LAW_REGION_LAGRAS");
		case 32:
			return joaat("LAW_REGION_SISIKA");
		case 82:
			return joaat("LAW_REGION_BUTCHER_CREEK");
		case 35:
			return joaat("LAW_REGION_FORT_WALLACE");
		case 56:
			return joaat("LAW_REGION_WAPITI");
		case 126:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
		case 120:
			return joaat("LAW_REGION_ARMADILLO");
		case 124:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
		case 115:
			return joaat("LAW_REGION_TUMBLEWEED");
		case 127:
			if (!bParam1 || func_89() != -1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (func_275(45))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			if (!bParam1 || func_89() != -1)
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			if (func_333(Global_1835011[59 /*74*/].f_1, 1))
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			else
			{
				return joaat("LAW_REGION_BIG_VALLEY");
			}
			break;
		case 37:
			if (!bParam1 || func_89() != -1)
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			if (func_333(Global_1347702[9 /*49*/].f_15, 1))
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			else if (func_275(45))
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_383())
			{
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			}
			break;
		case 110:
			if (!bParam1 || func_89() != -1)
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			if (func_275(45))
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			else
			{
				return joaat("LAW_REGION_MANZANITA_POST_MAINGAME");
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_384(iParam0);
		if (iVar0 != -1)
		{
			return func_385(iVar0, bParam1);
		}
	}
	return 0;
}

void func_301(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_386(uParam0, (1 << 28));
	}
	else
	{
		func_387(uParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_386(uParam0, (1 << 30));
	}
	else
	{
		func_387(uParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_386(uParam0, (1 << 29));
	}
	else
	{
		func_387(uParam0, (1 << 29));
	}
}

void func_302(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_388(uParam0, 1);
		func_389(uParam0, 1);
		func_390(uParam0, 1);
		func_391(uParam0, 1);
		func_392(uParam0, 1);
		func_393(uParam0, 1);
		func_394(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_388(uParam0, 0);
		func_389(uParam0, 0);
		func_390(uParam0, 0);
		func_391(uParam0, 0);
		func_392(uParam0, 0);
		func_393(uParam0, 0);
		func_394(uParam0, 0);
	}
}

void func_303(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), 256);
	}
	else
	{
		func_386(&(uParam0->f_1), 256);
	}
}

void func_304(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), 4);
	}
	else
	{
		func_386(&(uParam0->f_1), 4);
	}
}

void func_305(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), 2);
	}
	else
	{
		func_386(&(uParam0->f_1), 2);
	}
}

void func_306(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), 8);
	}
	else
	{
		func_386(&(uParam0->f_1), 8);
	}
}

void func_307(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_386(&(uParam0->f_1), (1 << 14));
	}
}

void func_308(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), 16);
	}
	else
	{
		func_386(&(uParam0->f_1), 16);
	}
}

int func_309(var uParam0)
{
	int iVar0[8];
	int iVar9;

	iVar0[0] = 0;
	iVar0[1] = 2;
	iVar0[2] = 1;
	iVar0[3] = 0;
	iVar0[4] = 0;
	iVar0[5] = 0;
	iVar0[7] = 0;
	iVar0[6] = 0;
	switch (uParam0->f_66)
	{
		case 0:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 2;
			break;
		case 7:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 2;
			iVar0[5] = 0;
			iVar0[6] = 3;
			break;
		case 8:
			iVar0[0] = 1;
			iVar0[1] = 3;
			iVar0[2] = 0;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 0;
			break;
		case 17:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 1;
			iVar0[3] = 2;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 19:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 3;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 0;
			break;
		case 22:
			break;
		case 28:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 29:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 3;
			iVar0[4] = 2;
			iVar0[5] = 1;
			break;
		case 39:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 42:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 41:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 43:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 2;
			iVar0[5] = 0;
			iVar0[6] = 3;
			break;
		case 47:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 2;
			iVar0[4] = 3;
			iVar0[5] = 0;
			break;
		case 61:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 73:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 2;
			iVar0[4] = 1;
			iVar0[5] = 3;
			break;
		case 74:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 3;
			iVar0[4] = 2;
			iVar0[5] = 2;
			break;
		case 75:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 1;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 82:
			iVar0[0] = 0;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 87:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 90:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 0;
			iVar0[3] = 1;
			iVar0[4] = 3;
			iVar0[5] = 0;
			break;
		case 91:
			iVar0[0] = 0;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 1;
			iVar0[5] = 2;
			iVar0[6] = 3;
			break;
		case 95:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
	}
	iVar9 = func_395(uParam0, &iVar0);
	return iVar9;
}

bool func_310()
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

int func_311(int iParam0)
{
	if (!func_314(iParam0))
	{
		return -1;
	}
	return func_397(func_396(iParam0));
}

bool func_312(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_313(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_314(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_315(int iParam0, int iParam1)
{
	if (func_89() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_316(int iParam0)
{
	if (func_89() != -1)
	{
		if (func_318(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_318(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_317(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_318(iParam0, (1 << 16)) && !func_318(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_318(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_318(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_318(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

bool func_319(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

bool func_320()
{
	return Global_1905944.f_5694;
}

int func_321(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if ((*uParam1)[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*uParam1)[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_322(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_323(int iParam0)
{
	return iParam0;
}

void func_324(int iParam0)
{
	if (!func_398(iParam0))
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

bool func_325(int iParam0)
{
	if (!func_50(iParam0))
	{
		return false;
	}
	return func_279(Global_1914319.f_18594[iParam0], 1);
}

bool func_326(int iParam0)
{
	return Global_1914319.f_3[iParam0 /*446*/].f_410;
}

bool func_327(int iParam0)
{
	if (func_58())
	{
		if (Global_1914319.f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_328(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_399(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0.0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_400(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_401(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_402(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_403(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_404(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_72(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & (1 << 19) == 0))
		{
			if (!uParam2->f_1 & (1 << 14) != 0)
			{
				*uParam3 = (1 << 14);
				func_401(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_405(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_406(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_407(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_408(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_408(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_401(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_409(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & (1 << 18) != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20.0f)
			{
				if (func_410(&iParam0, uParam2))
				{
					*uParam3 = (1 << 12);
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_411(uParam2, 4000))
				{
					if (func_412(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) & func_413(uParam2, iParam0) && func_414(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4.0f)
			{
				if (func_412(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) & func_413(uParam2, iParam0) && func_414(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & (1 << 17) == 0)
						{
							if (func_415(iParam0, Global_1935630.f_41))
							{
								func_416();
								*uParam3 = 2;
								func_401(iParam0, uParam2, *uParam3);
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
					if (*uParam2 & (1 << 17) == 0)
					{
						if (func_415(iParam0, Global_1935630.f_41))
						{
							func_416();
							*uParam3 = 2;
							func_401(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10.0f)
			{
				if (func_417(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_418() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_416();
						*uParam3 = 2;
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & (1 << 17) == 0)
				{
					if (func_419())
					{
						if (func_415(iParam0, Global_1935630.f_42))
						{
							func_416();
							*uParam3 = 2;
							func_401(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & (1 << 10) != 0)
		{
			if (func_420(uParam2, iParam0))
			{
				*uParam3 = (1 << 10);
				func_401(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & (1 << 11) != 0)
			{
				if (func_421(iParam0, iParam1, uParam2))
				{
					*uParam3 = (1 << 11);
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_422(iParam0, uParam2))
					{
						*uParam3 = (1 << 13);
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_423(iParam0, uParam2))
				{
					*uParam3 = (1 << 15);
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12.0f)
		{
			if (*uParam2 & (1 << 20) != 0)
			{
				if (func_424(uParam2, 4000))
				{
					if (func_425(&iParam0, uParam2))
					{
						*uParam3 = (1 << 9);
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & (1 << 10) != 0)
			{
				if (func_426(iParam0, uParam2))
				{
					*uParam3 = (1 << 16);
					uParam2->f_4 = 0;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_427(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_401(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_329(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 16:
		case 32:
		case 64:
		case 128:
		case 2048:
		case 8192:
		case 32768:
			return true;
		default:
			break;
	}
	return false;
}

void func_330(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		uParam0->f_8 = func_418();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_428(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

int func_331(int iParam0, var uParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::GET_VOLUME_SCALE(iParam0) /*3*/ };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) /*3*/ };
	vVar3 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	vVar6 = { VOLUME::GET_VOLUME_ROTATION(iParam0) /*3*/ };
	fVar9 = vVar6.z;
	*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar3, fVar9, -vVar0.x, 0.0f, -vVar0.z) /*3*/ };
	uParam1->f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar3, fVar9, vVar0.x, 0.0f, vVar0.z) /*3*/ };
	return 1;
}

void func_332(int iParam0)
{
	sLocal_26.f_2 -= sLocal_26.f_2 & iParam0;
}

bool func_333(int iParam0, bool bParam1)
{
	switch (func_429(iParam0))
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

void func_334(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_335(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_336(bool bParam0)
{
	func_73(&uLocal_0);
	func_430(1, bParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	func_431();
}

bool func_337(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

Vector3 func_338(int iParam0, float fParam1)
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
	func_360(vVar6);
	vVar6 = { FloatToVector((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 /*3*/ };
	vVar3 = { vVar0 + vVar6 /*3*/ };
	return vVar3;
}

int func_339(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_432())
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
				if (func_433(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_358(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_34(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_434(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_436(func_435(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_340(int iParam0)
{
	if (func_17())
	{
		return false;
	}
	return func_333(Global_1347702[58 /*49*/].f_15, 1);
}

bool func_341(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_437(iParam3, 1);
	bVar1 = func_437(iParam3, 2);
	bVar2 = !func_437(iParam3, 4);
	bVar3 = func_437(iParam3, 8);
	bVar4 = !func_437(iParam3, 16);
	bVar5 = func_437(iParam3, 32);
	bVar6 = func_437(iParam3, 64);
	return func_438(iParam0, iParam1, bVar0, bVar1, bParam4, bVar2, bVar3, fParam5, fParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_342(var uParam0, int* iParam1, int iParam2)
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_PLAYER_DISLIKE"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	if (VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		PED::SET_PED_DEFENSIVE_AREA_VOLUME(*uParam0, iParam2, false, false, false);
	}
	PED::_PED_CLEAR_LOCO_MOTION(*uParam0);
	TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	func_439(*uParam0, iParam1, joaat("BLIP_STYLE_ENEMY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
}

bool func_343(int iParam0)
{
	return Global_22 & iParam0 != 0;
}

bool func_344()
{
	if (func_440())
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

void func_345(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_356(iParam0, 4))
		{
			func_209(&(iParam0->f_6), 1, 1);
			func_441(iParam0, 4);
		}
	}
	else if (func_356(iParam0, 4))
	{
		func_442(iParam0, 4);
		func_441(iParam0, 14);
	}
}

void func_346(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_211(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_443(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_444(iParam0->f_6, iParam0->f_5, 0);
			}
			func_445(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_446(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_347(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

int func_348(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_347(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & (1 << 19) != false;
		bVar5 = iParam8 & (1 << 24) != false;
		bVar6 = iParam8 & (1 << 24) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_447(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & (1 << 21) != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & (1 << 23) != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_34(&(iParam1->f_13));
		}
		if (func_448(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_241(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_348(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_21(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & (1 << 25) != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_355(*uParam0, 1, 1);
						}
					}
					else if (func_351(iParam1, 22))
					{
						func_355(*uParam0, 0, 1);
					}
				}
				if (func_449(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_450(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_451(iParam8);
					if (func_452(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_453(uParam3);
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
					func_454(iParam1, uParam3, fVar8);
					if (func_455(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_93(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_456(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_449(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_457(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_452(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_450(uParam0, func_449(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_451(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_93(uParam3, 0, 0, 1, 1);
					}
					func_458(iParam1, 1);
				}
				func_454(iParam1, uParam3, fVar8);
				if (func_456(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & (1 << 9) != 0)
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
	else if (!iParam8 & (1 << 10) != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_22(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_349(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_459(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_225(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
}

int func_350(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_460(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_211((uParam2[iVar0 /*17*/])->f_6))
		{
			func_441(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

bool func_351(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_352(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_461(*uParam0);
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

int func_353(var uParam0, int iParam1)
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

void func_354(int* iParam0, int* iParam1)
{
	if (!func_351(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_441(iParam1, 19);
			func_462(iParam0, 23);
			func_463(iParam1, 2);
		}
	}
}

void func_355(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_356(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_357(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_356(iParam0, 13))
	{
		func_441(iParam0, 0);
	}
	else
	{
		func_442(iParam0, 0);
	}
	if (func_211(iParam0->f_6))
	{
		if (bParam2)
		{
			func_209(&(iParam0->f_6), 0, 1);
		}
	}
}

float func_358(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

Vector3 func_359(int iParam0)
{
	Vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) /*3*/ };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) /*3*/ };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_360((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_360(Vector3 vParam0)
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

Vector3 func_361(int iParam0, char* sParam1)
{
	Vector3 vVar0;
	var uVar3;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	ANIMSCENE::GET_ANIM_SCENE_ORIGIN(iParam0, &vVar0, &uVar3, 2);
	return vVar0;
}

bool func_362(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_363(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_464(iVar0);
}

int func_364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_8"):
			return 32;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_9"):
			return 33;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
		case joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE"):
			return 22;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_3"):
			return 38;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_5"):
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_6"):
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_7"):
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_3"):
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_4"):
			return 18;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_5"):
			return 29;
		case joaat("MP_COMPONENT_TYPE_END"):
			return 39;
		case joaat("MP_COMPONENT_TYPE_EYEWEAR"):
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_7"):
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case joaat("MP_COMPONENT_TYPE_LOWER_LAYER_1"):
			return 34;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			return 10;
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
			return 23;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_2"):
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_2"):
			return 13;
		case joaat("MP_COMPONENT_TYPE_UPPER_LAYER_1"):
			return 15;
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_6"):
			return 30;
		case joaat("MP_COMPONENT_TYPE_FULL_BODY_ATTIRE"):
			return 14;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_2"):
			return 37;
		case joaat("MP_COMPONENT_TYPE_LOWER_LAYER_2"):
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_365(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_465(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

var func_366(int iParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_271(iParam0) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

bool func_367(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_368(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_369(int iParam0)
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

void func_370(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_466(iParam0, iParam1))
		{
			if (func_467(iParam0, iParam1))
			{
				if (func_468(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_469(iParam0);
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

void func_371(int iParam0, int iParam1, bool bParam2)
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

void func_372(int iParam0, bool bParam1)
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

void func_373(int iParam0, int iParam1)
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

bool func_374(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

void func_375(var uParam0, int iParam1)
{
	func_470(uParam0, iParam1);
}

bool func_376(int iParam0)
{
	return Global_1310750.f_16035 & iParam0 != 0;
}

bool func_377(int iParam0)
{
	return func_290(iParam0, Global_1310750.f_16072 | 64);
}

void func_378(int iParam0)
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

void func_379(int iParam0, int iParam1, bool bParam2)
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

bool func_380(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_471(), true))
	{
		return true;
	}
	return false;
}

float func_381(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_382(int iParam0)
{
	if (!func_472(iParam0))
	{
		return false;
	}
	return func_473(iParam0, (1 << 25));
}

int func_383()
{
	return Global_40.f_4283.f_1;
}

int func_384(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_385(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
		case 4:
			if (!bParam1 || func_89() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (func_275(45))
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			break;
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
		case 8:
			return joaat("LAW_REGION_GUAMA");
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
		case 12:
			if (!bParam1 || func_89() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (func_275(45))
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			else
			{
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_89() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_275(45))
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			else
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			}
			break;
	}
	return 0;
}

void func_386(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_387(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_388(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 4);
	}
	else
	{
		func_387(uParam0, 4);
	}
}

void func_389(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 8);
	}
	else
	{
		func_387(uParam0, 8);
	}
}

void func_390(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 16);
	}
	else
	{
		func_387(uParam0, (1 << 26));
		func_387(uParam0, 16);
	}
}

void func_391(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 32);
	}
	else
	{
		func_387(uParam0, 32);
	}
}

void func_392(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 64);
	}
	else
	{
		func_387(uParam0, 64);
	}
}

void func_393(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, (1 << 10));
	}
	else
	{
		func_387(uParam0, (1 << 10));
	}
}

void func_394(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, (1 << 20));
	}
	else
	{
		func_387(uParam0, (1 << 20));
	}
}

int func_395(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	iVar0 = func_474(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar0 = func_475(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar0 = func_476(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	return -1;
}

int func_396(int iParam0)
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

int func_397(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_398(int iParam0)
{
	return func_477(iParam0, 2);
}

void func_399(var uParam0, bool bParam1, int iParam2)
{
	func_478(iParam2);
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
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		uParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		uParam0->f_13 = func_479(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & (1 << 25) != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_386(uParam0, (1 << 25));
						}
					}
					else if (!*uParam0 & (1 << 13) != 0)
					{
						if (func_480(1))
						{
							func_386(uParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_480(1) || *uParam0 & (1 << 13) != 0))
				{
					func_387(uParam0, (1 << 25));
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
	if (!uParam0->f_1 & (1 << 10) != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_481(uParam0))
			{
				uParam0->f_15 = func_418();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_418() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_482(uParam0);
}

bool func_400(int iParam0, var uParam1)
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
			if (!func_483(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_484(iParam0, iVar2) <= func_485(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_401(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		uParam1->f_10 = iParam0;
	}
	if (func_486(iParam2, 1, 1, 1, 0))
	{
		func_386(uParam1, (1 << 11));
	}
	uParam1->f_16 = iParam2;
	func_428(uParam1, 1);
	func_487();
}

bool func_402(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_488(iParam0, !*uParam1 & (1 << 28) != 0, !*uParam1 & (1 << 29) != 0, !*uParam1 & (1 << 30) != 0, 0, 0))
		{
			if (uParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (uParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_489(uParam1);
			if (func_490(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_491(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_428(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_428(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_403(int iParam0, int iParam1, var uParam2)
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
	if (func_492(iParam1, !*uParam2 & (1 << 28) != 0, !*uParam2 & (1 << 29) != 0, !*uParam2 & (1 << 30) != 0, 0))
	{
		if (uParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (uParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_489(uParam2);
		if (func_490(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_491(uParam2)
				{
					func_428(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_404(int iParam0, var uParam1)
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
	if (func_483(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_491(uParam1)
		{
			fVar3 = func_489(uParam1);
			if (uParam1->f_12 < fVar3)
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

bool func_405(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_418();
	iVar1 = (iVar0 - uParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_406(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_493(uParam2);
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
			if (func_414(uParam2, iParam1))
			{
				func_428(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_407(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < (float)func_494(uParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_414(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_428(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_408(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_495(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_428(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_428(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_496(iParam1, vVar0, vVar4))
					{
						func_428(uParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_428(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_496(iParam1, vVar0, vVar7))
					{
						func_428(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_409(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2[2];
	Vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	bVar12 = *uParam1 & (1 << 12) != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_483(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_497(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_498(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35.0f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
						vVar2[1 /*3*/] = { vVar9 /*3*/ };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_499(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_500(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_501(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_410(int iParam0, var uParam1)
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

bool func_411(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_418();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_412(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_502(iVar0, &iVar2))
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
	if (func_503(iVar0, iParam0))
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

int func_413(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_414(var uParam0, int iParam1)
{
	if (func_504(uParam0))
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

bool func_415(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_358(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_416()
{
}

bool func_417(var uParam0, int iParam1)
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
		if (func_505(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_418();
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
						if (func_54(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_418();
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

int func_418()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_419()
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
	if ((func_418() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_420(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_485(uParam0);
	if (uParam0->f_12 > func_506(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_507(iParam1);
	iVar1 = func_508(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, uParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_421(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4.0f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & (1 << 19) != false;
	bVar2 = *uParam2 & 128 != false;
	return func_509(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_422(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & (1 << 26) != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*uParam1 & (1 << 25) != 0)
	{
		if (func_510(iParam0, uParam1, 1))
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
					if (!func_511(uParam1, iParam0))
					{
						if (func_54(iVar4, Global_36, 1) < 7.0f)
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

bool func_423(int iParam0, var uParam1)
{
	if (!func_340(0))
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

bool func_424(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_418();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_425(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_426(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_418();
	}
	else if (func_418() - uParam1->f_4) > func_512(uParam1)
	{
		return func_513(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_427(var uParam0, int iParam1)
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

void func_428(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, (1 << 27));
	}
	else
	{
		func_387(uParam0, (1 << 27));
	}
}

int func_429(int iParam0)
{
	if (!func_314(iParam0))
	{
		return -1;
	}
	return func_514(iParam0);
}

void func_430(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

void func_431()
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(4, true, false);
}

bool func_432()
{
	return (Global_1894899 & 1 != 0 && func_96() != -1);
}

float func_433(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_358(Global_35, iParam0, bParam1, bParam2);
}

bool func_434(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_435(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_515(iParam0, &sVar0);
}

int func_436(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_437(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_438(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(bVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				strcpy_s(&cVar5, 128, WEAPON::_GET_WEAPON_NAME(bVar0));
				iVar2 = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					strcpy_s(&cVar5, 128, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))));
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_516(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_516(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_89() == -1 && !func_517(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (bVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_517(joaat("WEAPON_REPEATER_CARBINE")))
				{
					bVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				bVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (bVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		bVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_516(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0) && bVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 3;
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
		func_518(bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_519(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_520(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, bParam4);
	}
	return bVar0;
}

void func_439(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_440()
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

void func_441(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_442(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_443(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_444(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_445(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (bParam1)
	{
		func_521(iParam0, 4);
		func_522(iVar0, 1);
		func_523(iVar0, 1);
	}
	else
	{
		func_524(iParam0, 4);
		func_523(iVar0, 0);
	}
}

void func_446(int* iParam0, char* sParam1)
{
	if (func_211(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_444(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_442(iParam0, 1);
}

float func_447(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_448(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_525(iParam0, iParam1))
		{
			if (!func_279(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_93(uParam2, 0, 0, 1, 0);
				func_386(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_279(iParam1->f_10, 1))
		{
			func_526(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_387(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_449(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_527(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_450(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_528(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_279(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_451(int iParam0)
{
	if (func_279(iParam0, 4))
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
	if (func_279(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_279(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_452(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_67(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & (1 << 9) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_529(Global_35)) || func_530(Global_35)) || func_531(Global_35));
	fVar12 = -1.0f;
	if (func_71(&(iParam1->f_13)))
	{
		fVar12 = func_141(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_211((uParam4[iVar0 /*17*/])->f_6);
		func_532(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_533(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_534(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_93(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_535(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_92(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_536(iParam1, fParam6, iParam1->f_9))
					{
						func_34(&(iParam1->f_18));
						if (bVar6)
						{
							func_535(uParam4, 0, 0);
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
		func_537(iParam1, fParam2);
	}
	return bVar5;
}

void func_453(var uParam0)
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

void func_454(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_538(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_537(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_455(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_539(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_462(iParam1, 0);
				func_92(iParam1, uParam2, func_351(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_456(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_34(&(iParam1->f_18));
			return false;
		}
		else if (func_71(&(iParam1->f_18)))
		{
			func_73(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_71(&(iParam1->f_18)))
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
	return func_259(&(iParam1->f_18), fParam2);
	return true;
}

void func_457(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_532(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_458(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_459(int* iParam0)
{
	if (func_351(iParam0, 0))
	{
		if (func_540(iParam0))
		{
			func_458(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_460(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_211(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_209(&(iParam1->f_6), 0, 1);
	}
	if (!func_211(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_538(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_541(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_211(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_542(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_543(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_544(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_443(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_543(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_445(iParam1->f_6, 0, 1);
				}
				else
				{
					func_445(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_461(int iParam0)
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

void func_462(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_463(int* iParam0, int iParam1)
{
	if (!func_356(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_441(iParam0, 14);
		}
	}
}

int func_464(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_545(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

bool func_465(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_466(int iParam0, int iParam1)
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

bool func_467(int iParam0, int iParam1)
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

bool func_468(int iParam0, int iParam1)
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
	if (!func_466(iParam0, iVar0))
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

void func_469(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_470(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_471()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_472(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_473(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & iParam1 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & iParam1 != 0;
}

int func_474(int iParam0)
{
	return func_546(iParam0, 3);
}

int func_475(int iParam0)
{
	return func_546(iParam0, 2);
}

int func_476(int iParam0)
{
	return func_546(iParam0, 1);
}

bool func_477(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

void func_478(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_344();
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
			func_547(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_479(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_480(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_548(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_481(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_89() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_549(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_549(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_508(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_482(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_550(uParam0);
	}
}

bool func_483(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_508(iParam2);
	}
	else
	{
		iVar1 = func_507(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_508(iParam0);
	}
	else
	{
		iVar0 = func_507(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_279(*uParam1, (1 << 23)))
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

float func_484(int iParam0, int iParam1)
{
	return func_358(iParam0, iParam1, 1, 1);
}

float func_485(var uParam0)
{
	return uParam0->f_26;
}

bool func_486(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_487()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_488(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_358(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_227(iVar0, 0)))
		{
			if (func_125(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_489(var uParam0)
{
	return uParam0->f_17;
}

bool func_490(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_279(*uParam0, (1 << 22)))
	{
		fVar0 = fParam3;
	}
	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, fParam3, -1.0f, fVar0))
	{
		return true;
	}
	if (*uParam0 & (1 << 15) != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_491(var uParam0)
{
	return uParam0->f_18;
}

bool func_492(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_227(iVar0, 0)))
		{
			if (func_245(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_493(var uParam0)
{
	return uParam0->f_23;
}

int func_494(var uParam0)
{
	return uParam0->f_21;
}

int func_495(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
	if (*uParam0 & (1 << 24) != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_496(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_374(iParam0, vParam4, 0.5f))
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

int func_497(int iParam0)
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
	if (func_551(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_498(int iParam0)
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

bool func_499(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_552(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5.0f;
	if (*uParam0 & (1 << 16) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_500(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_552(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10.0f;
	if (*uParam0 & (1 << 16) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_501(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_552(iParam1))
	{
		return false;
	}
	if (*uParam0 & (1 << 16) != 0)
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

bool func_502(int iParam0, int iParam1)
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

bool func_503(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_553(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_504(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_505(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_54(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_506(var uParam0)
{
	return uParam0->f_24;
}

int func_507(int iParam0)
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

int func_508(int iParam0)
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

int func_509(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_502(Global_35, &iVar1))
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
		fVar2 = func_358(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_358(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_510(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_548(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_511(uParam1, iVar0))
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
				if (!bParam2 || !func_511(uParam1, iVar1))
				{
					if (func_54(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_511(var uParam0, int iParam1)
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

int func_512(var uParam0)
{
	return uParam0->f_20;
}

int func_513(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0.0f)
	{
		fParam3 = uParam1->f_12;
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

int func_514(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_554(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_515(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_516(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

bool func_517(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
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

int func_518(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
	{
		sVar0 = { func_555(bParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_556((398 + iVar28), 1);
			if (func_557(bParam0, &sVar0, iVar5, 0))
			{
				if (func_558(bParam0, &sVar6, iVar5))
				{
					sVar29 = { func_559(bParam0, sVar0, iVar5, 0) /*4*/ };
					func_560(bParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_561(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
					{
						return 0;
					}
					func_562(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
					func_563(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
				return 1;
			}
		}
	}
}

void func_519(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*bParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *bParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *bParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *bParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *bParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *bParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *bParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *bParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
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

bool func_520(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

void func_521(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_522(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_477(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_523(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_524(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

bool func_525(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_564((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_526(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_538(uParam0[iVar0 /*17*/]))
		{
			func_441(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_527(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_343(16))
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
					func_565(16);
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

void func_528(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_460(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_529(int iParam0)
{
	return func_566(iParam0, 4) | func_566(iParam0, 5);
}

int func_530(int iParam0)
{
	return func_566(iParam0, 7);
}

int func_531(int iParam0)
{
	return func_566(iParam0, 6);
}

void func_532(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_538(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_460(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_533(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_567(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_568(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_445(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_445(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_542(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_534(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_569(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_570(iParam1, 1))
	{
		func_571(iParam1, 1);
		return true;
	}
	return false;
}

void func_535(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_357(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_536(int* iParam0, float fParam1, bool bParam2)
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

void func_537(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_538(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_539(int iParam0)
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

bool func_540(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_541(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_477(iVar0, 2))
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
				func_572(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_542(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_211(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	func_543(iParam0, 18, 0, 1);
	func_543(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

void func_543(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_544(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_545(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return joaat("MP_COMPONENT_TYPE_HEADWEAR");
		case 11:
			return joaat("MP_COMPONENT_TYPE_EYEWEAR");
		case 12:
			return joaat("MP_COMPONENT_TYPE_NECKWEAR_1");
		case 13:
			return joaat("MP_COMPONENT_TYPE_NECKWEAR_2");
		case 14:
			return joaat("MP_COMPONENT_TYPE_FULL_BODY_ATTIRE");
		case 15:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_1");
		case 16:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_2");
		case 17:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_3");
		case 18:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_4");
		case 19:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_5");
		case 20:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_6");
		case 21:
			return joaat("MP_COMPONENT_TYPE_UPPER_LAYER_7");
		case 22:
			return joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE");
		case 23:
			return joaat("MP_COMPONENT_TYPE_HAND_ATTIRE");
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_5");
		case 30:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_6");
		case 31:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_7");
		case 32:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_8");
		case 33:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_9");
		case 34:
			return joaat("MP_COMPONENT_TYPE_LOWER_LAYER_1");
		case 35:
			return joaat("MP_COMPONENT_TYPE_LOWER_LAYER_2");
		case 36:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_1");
		case 37:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_2");
		case 38:
			return joaat("MP_COMPONENT_TYPE_FOOTWEAR_3");
		case 39:
			return joaat("MP_COMPONENT_TYPE_END");
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

int func_546(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_547(var uParam0, var uParam1)
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

bool func_548(bool bParam0, int iParam1, int iParam2)
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

int func_549(var uParam0)
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
	if (uParam0->f_6 == 3)
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

void func_550(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_387(uParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_386(uParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_551(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_552(int iParam0)
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

int func_553(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_554(int iParam0)
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

struct<5> /*40*/ func_555(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_573(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_574(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_559(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_575(bParam1) /*4*/ };
			if (bParam2 && func_576(bParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_557(bParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_557(bParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_558(bParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_577(bParam1) /*4*/ };
			switch (func_365(bParam0))
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
			if (func_578(bParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_559(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_578(bParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_559(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_UPGRADE")))
			{
				sVar0.f_4 = joaat("SLOTID_UPGRADE");
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_SATCHEL")))
			{
				sVar0.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_CURRENCY")))
			{
				sVar27.f_9 = joaat("SLOTID_NONE");
				if (!func_579(sVar0, &sVar27, bParam1, 0))
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
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("CHARACTER"));
				if (sVar0.f_4 == 0)
				{
				}
			}
			break;
	}
	return sVar0;
}

int func_556(int iParam0, int iParam1)
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

bool func_557(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	return func_580(bParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_558(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_581(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_559(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_465(bParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_582(bParam6), &uParam1, bParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_560(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_583(bParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_579(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_561(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_582(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_561(bool bParam0)
{
	if (func_89() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_582(bParam0));
}

int func_562(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_584(iParam0))
	{
		return 0;
	}
	if (!func_561(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_563(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar1 = func_585(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

int func_564(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_565(int iParam0)
{
	Global_22 |= iParam0;
}

int func_566(int iParam0, int iParam1)
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

bool func_567(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_568(int iParam0, bool bParam1)
{
	if (bParam1 && !func_211(iParam0))
	{
		return false;
	}
	return !func_477(iParam0, 4);
}

bool func_569(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_323(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_570(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_323(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_571(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

void func_572(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_522(iParam0, 1);
	func_523(iParam0, 1);
	func_524(iParam0, 128);
}

struct<4> /*32*/ func_573(bool bParam0)
{
	return func_559(joaat("CHARACTER"), func_586(), joaat("SLOTID_NONE"), bParam0);
}

int func_574(bool bParam0)
{
	Vector3 vVar0;

	if (!func_465(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> /*32*/ func_575(bool bParam0)
{
	int iVar0;

	iVar0 = func_582(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_559(joaat("CARRIED_WEAPONS"), func_573(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_559(joaat("CARRIED_WEAPONS"), func_573(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_559(joaat("CARRIED_WEAPONS"), func_573(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_576(bool bParam0, bool bParam1)
{
	if (func_365(bParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_275(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_577(bool bParam0)
{
	int iVar0;

	iVar0 = func_582(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_559(joaat("EMOTE_ITEM"), func_573(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_559(joaat("EMOTE_ITEM"), func_573(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_578(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_365(bParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_579(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_582(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_580(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_465(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_559(bParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_582(bParam6), &sVar0, false);
	return iVar4;
}

bool func_581(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_582(0);
	*uParam1 = { func_559(bParam0, func_575(0), iParam3, 0) /*4*/ };
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

int func_582(bool bParam0)
{
	if (func_89() == -1)
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

bool func_583(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_584(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_585(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

struct<4> /*32*/ func_586()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

