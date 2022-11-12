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
	struct<652> /*5216*/ sLocal_14 = { 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 4, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#pragma endregion

void __EntryFunction__()
{
	struct<4> /*32*/ sVar0;
	Vector3 vVar4;
	var uVar8;
	char* sVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&sLocal_14);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if ((func_2(18, sLocal_14.f_226, 1, 1) && sLocal_14.f_0 > 18) && !sLocal_14.f_647)
		{
			if (sLocal_14.f_1 == 0)
			{
				func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_3(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 1, 0, 0);
			}
			else if (sLocal_14.f_1 != 2)
			{
				if (sLocal_14.f_1 != 3)
				{
				}
				else
				{
					func_4(&sLocal_14, &(sLocal_14.f_250), 2, func_5(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 1, "s_BASE", "s_base_end");
				}
			}
			else
			{
				func_4(&sLocal_14, &(sLocal_14.f_250), 1, func_6(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End");
			}
		}
		func_7(18, 0, &(sLocal_14.f_226), &(sLocal_14.f_150), &(sLocal_14.f_648), 0, 1097859072, 0);
		if (sLocal_14.f_643)
		{
			PED::SET_PED_RESET_FLAG(sLocal_14.f_226, 49, true);
		}
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(sLocal_14.f_226, 0, 1);
		func_8(sLocal_14.f_226, sLocal_14.f_234);
		if (!func_9(Global_35, 0))
		{
			func_1(&sLocal_14);
		}
		else if (func_10() != 26)
		{
			if (!func_11(&(sLocal_14.f_132)))
			{
				func_12(&(sLocal_14.f_132), 0);
			}
			else if (func_13(&(sLocal_14.f_132)) > 10.0f)
			{
				func_14(&(sLocal_14.f_132));
				func_1(&sLocal_14);
			}
		}
		else if ((PED::IS_PED_USING_ANY_SCENARIO(Global_35) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("PROP_PLAYER_SLEEP_BED")) && CAM::IS_SCREEN_FADED_OUT())
		{
			func_14(&(sLocal_14.f_132));
			func_1(&sLocal_14);
		}
		else if (func_16(18, func_15(18), &(sLocal_14.f_259), sLocal_14.f_226))
		{
			sLocal_14.f_651 = 1;
			if (func_17(&(sLocal_14.f_259)))
			{
				func_1(&sLocal_14);
			}
		}
		if ((sLocal_14.f_0 == 11 || sLocal_14.f_0 == 6) || sLocal_14.f_0 == 17)
		{
			if (sLocal_14.f_651)
			{
				if (func_18(&(sLocal_14.f_259)))
				{
					if (!func_17(&(sLocal_14.f_259)))
					{
						if (sLocal_14.f_0 == 11)
						{
							func_19(&sLocal_14, 13);
						}
						else if (sLocal_14.f_0 == 6)
						{
							if (func_20(&(sLocal_14.f_225), 3))
							{
								func_19(&sLocal_14, 20);
								func_21(&(sLocal_14.f_253), (1 << 27));
							}
						}
						else if (sLocal_14.f_0 == 17)
						{
							func_19(&sLocal_14, 58);
						}
					}
				}
			}
		}
		func_22(&sLocal_14);
		func_23(&sLocal_14);
		func_24(&sLocal_14);
		func_25(&sLocal_14);
		if ((((sLocal_14.f_0 >= 5 && sLocal_14.f_0 < 60) && sLocal_14.f_0 != 57) && sLocal_14.f_0 != 58) && sLocal_14.f_0 != 18)
		{
			func_26(&sLocal_14, &(sLocal_14.f_141));
			func_27(&sLocal_14);
			func_28(&sLocal_14);
			func_29(&sLocal_14);
		}
		func_30(&sLocal_14);
		func_31(sLocal_14.f_226, &(sLocal_14.f_253), (1 << 13), 18, 0);
		if (((sLocal_14.f_1 == 0 || sLocal_14.f_1 == 2) && VOLUME::DOES_VOLUME_EXIST(sLocal_14.f_239)) && func_32(Global_35, sLocal_14.f_239, 1, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
		}
		switch (sLocal_14.f_0)
		{
			case 0:
				func_33(&(sLocal_14.f_253));
				if (func_34(sLocal_14.f_253, 16))
				{
					sLocal_14.f_1 = 0;
					func_19(&sLocal_14, 3);
				}
				else if (func_34(sLocal_14.f_253, 8))
				{
					sLocal_14.f_1 = 2;
					func_19(&sLocal_14, 8);
				}
				else if (func_34(sLocal_14.f_253, 32))
				{
					sLocal_14.f_1 = 3;
					func_19(&sLocal_14, 14);
				}
				break;
			case 3:
				sLocal_14.f_257 = 2;
				sLocal_14.f_248 = (8 - 1);
				sLocal_14.f_249 = (2 - 1);
				HUD::TEXT_BLOCK_REQUEST("SPMS");
				HUD::TEXT_BLOCK_REQUEST("SPMAYAU");
				STREAMING::REQUEST_MODEL(func_35(0), false);
				STREAMING::REQUEST_MODEL(func_35(1), false);
				STREAMING::REQUEST_MODEL(func_35(2), false);
				STREAMING::REQUEST_MODEL(func_35(3), false);
				STREAMING::REQUEST_MODEL(func_35(4), false);
				STREAMING::REQUEST_MODEL(func_35(5), false);
				func_36(&sLocal_14);
				func_37(sLocal_14.f_232, "SP_MayorOfStrawberry1_Block", 1, 0, 0, 0, -1082130432);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(sLocal_14.f_235, 0, 0, 0, -1, -1, 0);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(sLocal_14.f_235, 0, 0, 0, -1, -1, 0);
				sLocal_14.f_644 = func_38(sLocal_14.f_239, 0, 0, 0);
				sLocal_14.f_280 = "NICHOLAS_TIMMINS";
				sLocal_14.f_159 = func_40(18, 0, 9, func_39(18));
				if (!func_41(sLocal_14.f_159))
				{
				}
				sLocal_14.f_254 = func_42(sLocal_14.f_159);
				sLocal_14.f_258 = func_43(func_40(18, 0, 9, func_39(18)));
				if (func_34(sLocal_14.f_254, 128))
				{
					func_44(&(sLocal_14.f_254), 128);
				}
				if (func_45())
				{
					func_46(&(sLocal_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					func_46(&(sLocal_14.f_5), Global_35, "ARTHUR", 0);
				}
				func_47(&(sLocal_14.f_259));
				func_48(&(sLocal_14.f_103));
				func_49(&(sLocal_14.f_103), 1);
				func_50(&(sLocal_14.f_103), 0);
				func_51(&(sLocal_14.f_103), 0);
				func_52(&(sLocal_14.f_103), 1);
				func_53(&(sLocal_14.f_103), 1);
				func_54(&(sLocal_14.f_103), 0);
				func_55(&(sLocal_14.f_103), 1);
				func_56(&(sLocal_14.f_103), 1);
				func_57(&(sLocal_14.f_103), 1);
				sLocal_14.f_640 = 8;
				if (func_41(sLocal_14.f_159))
				{
					func_19(&sLocal_14, 4);
				}
				break;
			case 8:
				sLocal_14.f_257 = 4;
				sLocal_14.f_248 = (5 - 1);
				sLocal_14.f_249 = (2 - 1);
				HUD::TEXT_BLOCK_REQUEST("SPMS");
				HUD::TEXT_BLOCK_REQUEST("SPMAYAU");
				STREAMING::REQUEST_MODEL(func_35(0), false);
				STREAMING::REQUEST_MODEL(func_35(2), false);
				STREAMING::REQUEST_MODEL(func_35(3), false);
				STREAMING::REQUEST_MODEL(func_35(6), false);
				func_58(&sLocal_14);
				func_37(sLocal_14.f_232, "SP_MayorOfStrawberry2_Block", 1, 0, 0, 0, -1082130432);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(sLocal_14.f_235, 0, 0, 0, -1, -1, 0);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(sLocal_14.f_235, 0, 0, 0, -1, -1, 0);
				PATHFIND::_0xB03944057FD735BA(sLocal_14.f_238, 6, 0);
				sLocal_14.f_644 = func_38(sLocal_14.f_239, 0, 0, 0);
				sLocal_14.f_645 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(sLocal_14.f_240, false, 15);
				sLocal_14.f_280 = "NICHOLAS_TIMMINS";
				sLocal_14.f_159 = func_40(18, 1, 9, 0);
				if (!func_41(sLocal_14.f_159))
				{
				}
				sLocal_14.f_254 = func_42(sLocal_14.f_159);
				sLocal_14.f_258 = func_43(func_40(18, 0, 9, func_39(18)));
				if (func_34(sLocal_14.f_254, 128))
				{
					func_44(&(sLocal_14.f_254), 128);
				}
				if (func_45())
				{
					func_46(&(sLocal_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					func_46(&(sLocal_14.f_5), Global_35, "ARTHUR", 0);
				}
				func_47(&(sLocal_14.f_259));
				func_48(&(sLocal_14.f_103));
				func_49(&(sLocal_14.f_103), 1);
				func_50(&(sLocal_14.f_103), 0);
				func_51(&(sLocal_14.f_103), 0);
				func_52(&(sLocal_14.f_103), 1);
				func_53(&(sLocal_14.f_103), 1);
				func_54(&(sLocal_14.f_103), 0);
				func_55(&(sLocal_14.f_103), 1);
				func_56(&(sLocal_14.f_103), 1);
				func_57(&(sLocal_14.f_103), 1);
				sLocal_14.f_640 = 3;
				ENTITY::CREATE_MODEL_HIDE(-1817.047f, -371.4747f, 163.116f, 1.0f, joaat("P_CS_NEWSPAPER_03X"), false);
				if (func_41(sLocal_14.f_159))
				{
					func_19(&sLocal_14, 9);
				}
				break;
			case 14:
				sLocal_14.f_257 = 4;
				sLocal_14.f_248 = (6 - 1);
				HUD::TEXT_BLOCK_REQUEST("SPMS");
				HUD::TEXT_BLOCK_REQUEST("SPMAYAU");
				STREAMING::REQUEST_MODEL(func_35(0), false);
				STREAMING::REQUEST_MODEL(func_35(2), false);
				STREAMING::REQUEST_MODEL(func_35(3), false);
				func_59(&sLocal_14);
				if (!func_34(sLocal_14.f_253, (1 << 28)))
				{
					iVar11 = func_60(884);
					if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar11))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(func_61(884)) || (!ENTITY::IS_ENTITY_ON_SCREEN(func_61(884)) && func_62(Global_35, func_61(884), 1, 1) > 100.0f))
						{
							func_63(884);
							PERSCHAR::_0xFCC6DB8DBE709BC8(iVar11);
							func_21(&(sLocal_14.f_253), (1 << 28));
						}
					}
				}
				func_37(sLocal_14.f_232, "SP_MayorOfStrawberry5_Block", 1, 0, 0, 0, -1082130432);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(sLocal_14.f_235, 0, 0, 0, -1, -1, 0);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(sLocal_14.f_235, 0, 0, 0, -1, -1, 0);
				PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_235, sLocal_14.f_226, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
				sLocal_14.f_644 = func_38(sLocal_14.f_239, 0, 0, 0);
				sLocal_14.f_280 = "NICHOLAS_TIMMINS";
				sLocal_14.f_159 = func_40(18, 2, 9, 0);
				if (!func_41(sLocal_14.f_159))
				{
				}
				if (func_45())
				{
					func_46(&(sLocal_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					func_46(&(sLocal_14.f_5), Global_35, "ARTHUR", 0);
				}
				sLocal_14.f_254 = func_42(sLocal_14.f_159);
				sLocal_14.f_258 = func_43(func_40(18, 0, 9, func_39(18)));
				if (func_34(sLocal_14.f_254, 128))
				{
					func_44(&(sLocal_14.f_254), 128);
				}
				func_47(&(sLocal_14.f_259));
				func_48(&(sLocal_14.f_103));
				func_49(&(sLocal_14.f_103), 1);
				func_50(&(sLocal_14.f_103), 0);
				func_51(&(sLocal_14.f_103), 0);
				func_52(&(sLocal_14.f_103), 1);
				func_53(&(sLocal_14.f_103), 1);
				func_54(&(sLocal_14.f_103), 0);
				func_55(&(sLocal_14.f_103), 1);
				func_56(&(sLocal_14.f_103), 1);
				func_57(&(sLocal_14.f_103), 1);
				func_64(&(sLocal_14.f_103), 0);
				sLocal_14.f_640 = 11;
				if (func_41(sLocal_14.f_159))
				{
					func_19(&sLocal_14, 15);
				}
				break;
			case 4:
				PED::_RESERVE_AMBIENT_PEDS(5);
				if ((((((((HUD::TEXT_BLOCK_IS_LOADED("SPMS") && HUD::TEXT_BLOCK_IS_LOADED("SPMAYAU")) && STREAMING::HAS_MODEL_LOADED(func_35(0))) && STREAMING::HAS_MODEL_LOADED(func_35(1))) && STREAMING::HAS_MODEL_LOADED(func_35(2))) && STREAMING::HAS_MODEL_LOADED(func_35(3))) && STREAMING::HAS_MODEL_LOADED(func_35(4))) && STREAMING::HAS_MODEL_LOADED(func_35(5))) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 5)
				{
					func_19(&sLocal_14, 5);
				}
				break;
			case 9:
				PED::_RESERVE_AMBIENT_PEDS(5);
				if ((((((((HUD::TEXT_BLOCK_IS_LOADED("SPMS") && HUD::TEXT_BLOCK_IS_LOADED("SPMAYAU")) && STREAMING::HAS_MODEL_LOADED(func_35(0))) && STREAMING::HAS_MODEL_LOADED(func_35(2))) && STREAMING::HAS_MODEL_LOADED(func_35(3))) && STREAMING::HAS_MODEL_LOADED(func_35(6))) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 5) && func_65(&sLocal_14, 0)) && func_20(&(sLocal_14.f_225), 3))
				{
					func_19(&sLocal_14, 10);
				}
				break;
			case 15:
				PED::_RESERVE_AMBIENT_PEDS(5);
				if (((((HUD::TEXT_BLOCK_IS_LOADED("SPMS") && HUD::TEXT_BLOCK_IS_LOADED("SPMAYAU")) && STREAMING::HAS_MODEL_LOADED(func_35(0))) && STREAMING::HAS_MODEL_LOADED(func_35(2))) && STREAMING::HAS_MODEL_LOADED(func_35(3))) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 5)
				{
					func_19(&sLocal_14, 16);
				}
				break;
			case 5:
				sVar0 = { func_66(0) /*4*/ };
				vVar4 = { func_66(1) /*4*/ };
				if (func_67(&(sLocal_14.f_226), 483, sVar0, 1, 1320127128) & func_68(&(sLocal_14.f_229), func_35(4), vVar4) & func_68(&(sLocal_14.f_230), func_35(5), vVar4) & func_69(&(sLocal_14.f_646), &(sLocal_14.f_228), func_35(1), vVar4, 9) & func_70(&sLocal_14))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(sLocal_14.f_226, "special_ped_group", 0.0f);
					func_71(sLocal_14.f_226, 18);
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), sLocal_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0.0f, 0.0f, 0.0f, 0, "MayorBubble");
					sVar9 = func_72(&sLocal_14, &iVar10);
					func_73(&(sLocal_14.f_226), &(sLocal_14.f_255), joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20.0f, -1082130432);
					func_75(&(sLocal_14.f_303[0 /*17*/]), "INTERACT_GREET", func_74(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_75(&(sLocal_14.f_303[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
					func_76(&(sLocal_14.f_303[0 /*17*/]), 10);
					func_76(&(sLocal_14.f_303[1 /*17*/]), 10);
					iVar12 = 0;
					while (iVar12 < sLocal_14.f_257)
					{
						func_75(&(sLocal_14.f_338[iVar12 /*75*/].f_21[0 /*17*/]), "INTERACT_GREET", func_74(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						func_75(&(sLocal_14.f_338[iVar12 /*75*/].f_21[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
						func_77(&(sLocal_14.f_338[iVar12 /*75*/].f_21[0 /*17*/]), 0, 0);
						func_77(&(sLocal_14.f_338[iVar12 /*75*/].f_21[1 /*17*/]), 0, 0);
						iVar12++;
					}
					if (!func_34(sLocal_14.f_253, (1 << 24)))
					{
						sLocal_14.f_639 = func_78(3, 0, 0);
						func_79(&(sLocal_14.f_281[0 /*21*/]), 0);
						func_21(&(sLocal_14.f_253), (1 << 24));
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_14.f_226, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(sLocal_14.f_226, false);
					PED::SET_PED_CONFIG_FLAG(sLocal_14.f_226, 448, true);
					func_46(&(sLocal_14.f_5), sLocal_14.f_226, sLocal_14.f_280, 0);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(sLocal_14.f_226, sVar0, sVar0.f_3, true, false, true);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(sLocal_14.f_226, true, 15.0f);
					PED::SET_PED_COMBAT_ATTRIBUTES(sLocal_14.f_226, 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(sLocal_14.f_226, 5, false);
					if (func_45())
					{
						func_80(sLocal_14.f_226, 1689938120);
					}
					AUDIO::STOP_PED_SPEAKING(sLocal_14.f_226, true);
					PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_237, sLocal_14.f_226, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
					PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_234, sLocal_14.f_226, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
					PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_242, sLocal_14.f_226, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
					func_19(&sLocal_14, 32);
				}
				break;
			case 10:
				sVar0 = { func_66(2) /*4*/ };
				vVar4 = { func_66(2) /*4*/ };
				if (func_67(&(sLocal_14.f_226), 483, sVar0, 1, 1320127128) & func_68(&(sLocal_14.f_231), func_35(6), vVar4) & func_70(&sLocal_14))
				{
					func_81(&sLocal_14);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(sLocal_14.f_226, "special_ped_group", 0.0f);
					func_71(sLocal_14.f_226, 18);
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), sLocal_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0.0f, 0.0f, 0.0f, 0, "MayorBubble");
					sVar9 = func_72(&sLocal_14, &iVar10);
					func_73(&(sLocal_14.f_226), &(sLocal_14.f_255), joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20.0f, -1082130432);
					func_75(&(sLocal_14.f_303[0 /*17*/]), "INTERACT_GREET", func_74(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_75(&(sLocal_14.f_303[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
					func_76(&(sLocal_14.f_303[0 /*17*/]), 10);
					func_76(&(sLocal_14.f_303[1 /*17*/]), 10);
					iVar13 = 0;
					while (iVar13 < sLocal_14.f_257)
					{
						func_75(&(sLocal_14.f_338[iVar13 /*75*/].f_21[0 /*17*/]), "INTERACT_GREET", func_74(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						func_75(&(sLocal_14.f_338[iVar13 /*75*/].f_21[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
						func_77(&(sLocal_14.f_338[iVar13 /*75*/].f_21[0 /*17*/]), 0, 0);
						func_77(&(sLocal_14.f_338[iVar13 /*75*/].f_21[1 /*17*/]), 0, 0);
						iVar13++;
					}
					if (!func_34(sLocal_14.f_253, (1 << 24)))
					{
						sLocal_14.f_639 = func_78(3, 0, 0);
						func_79(&(sLocal_14.f_281[0 /*21*/]), 0);
						func_21(&(sLocal_14.f_253), (1 << 24));
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_14.f_226, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(sLocal_14.f_226, false);
					PED::SET_PED_CONFIG_FLAG(sLocal_14.f_226, 448, true);
					func_46(&(sLocal_14.f_5), sLocal_14.f_226, sLocal_14.f_280, 0);
					func_46(&(sLocal_14.f_5), Global_35, "ARTHUR", 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(sLocal_14.f_226, 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(sLocal_14.f_226, 5, false);
					AUDIO::STOP_PED_SPEAKING(sLocal_14.f_226, true);
					if (func_45())
					{
						func_80(sLocal_14.f_226, 1689938120);
					}
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(sLocal_14.f_226, sVar0, sVar0.f_3, true, false, true);
					PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_237, sLocal_14.f_226, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
					PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_234, sLocal_14.f_226, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
					PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_242, sLocal_14.f_226, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
					func_19(&sLocal_14, 42);
				}
				break;
			case 16:
				sVar0 = { func_66(3) /*4*/ };
				if (func_67(&(sLocal_14.f_226), 483, sVar0, 1, 1320127128) & func_70(&sLocal_14))
				{
					func_81(&sLocal_14);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(sLocal_14.f_226, "special_ped_group", 0.0f);
					func_71(sLocal_14.f_226, 18);
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), sLocal_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0.0f, 0.0f, 0.0f, 0, "MayorBubble");
					sVar9 = func_72(&sLocal_14, &iVar10);
					func_73(&(sLocal_14.f_226), &(sLocal_14.f_255), joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20.0f, -1082130432);
					func_75(&(sLocal_14.f_303[0 /*17*/]), "INTERACT_GREET", func_74(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_75(&(sLocal_14.f_303[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
					func_76(&(sLocal_14.f_303[0 /*17*/]), 10);
					func_76(&(sLocal_14.f_303[1 /*17*/]), 10);
					iVar14 = 0;
					while (iVar14 < sLocal_14.f_257)
					{
						func_75(&(sLocal_14.f_338[iVar14 /*75*/].f_21[0 /*17*/]), "INTERACT_GREET", func_74(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						func_75(&(sLocal_14.f_338[iVar14 /*75*/].f_21[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
						func_77(&(sLocal_14.f_338[iVar14 /*75*/].f_21[0 /*17*/]), 0, 0);
						func_77(&(sLocal_14.f_338[iVar14 /*75*/].f_21[1 /*17*/]), 0, 0);
						iVar14++;
					}
					if (!func_34(sLocal_14.f_253, (1 << 24)))
					{
						sLocal_14.f_639 = func_78(3, 0, 0);
						func_79(&(sLocal_14.f_281[0 /*21*/]), 0);
						func_21(&(sLocal_14.f_253), (1 << 24));
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_14.f_226, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(sLocal_14.f_226, false);
					PED::SET_PED_CONFIG_FLAG(sLocal_14.f_226, 448, true);
					PED::SET_PED_CONFIG_FLAG(sLocal_14.f_226, 153, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(sLocal_14.f_226, 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(sLocal_14.f_226, 5, false);
					func_46(&(sLocal_14.f_5), sLocal_14.f_226, sLocal_14.f_280, 0);
					AUDIO::STOP_PED_SPEAKING(sLocal_14.f_226, true);
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(sLocal_14.f_226, &uVar8));
					if (func_45())
					{
						func_80(sLocal_14.f_226, 1689938120);
					}
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(sLocal_14.f_226, sVar0, sVar0.f_3, true, false, true);
					PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_237, sLocal_14.f_226, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
					PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_234, sLocal_14.f_226, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
					PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_242, sLocal_14.f_226, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
					func_19(&sLocal_14, 50);
				}
				break;
			case 6:
				if (func_34(sLocal_14.f_253, 1))
				{
					func_19(&sLocal_14, 60);
				}
				else if (func_34(sLocal_14.f_253, 2) && !func_34(sLocal_14.f_253, 4))
				{
					func_82(180);
					func_83(&sLocal_14);
				}
				else if (!func_11(&(sLocal_14.f_153)))
				{
					func_12(&(sLocal_14.f_153), 0);
				}
				else if (func_13(&(sLocal_14.f_153)) > func_84(&sLocal_14) || !func_34(sLocal_14.f_253, (1 << 19)))
				{
					if (func_62(Global_35, sLocal_14.f_226, 1, 1) <= 35.0f)
					{
						if (func_85(&sLocal_14))
						{
							func_14(&(sLocal_14.f_153));
							func_21(&(sLocal_14.f_253), (1 << 19));
						}
					}
				}
				break;
			case 11:
				if (func_34(sLocal_14.f_253, 1))
				{
					func_19(&sLocal_14, 63);
				}
				else if (func_34(sLocal_14.f_253, 2) && !func_34(sLocal_14.f_253, 4))
				{
					func_82(180);
					func_86(&sLocal_14);
				}
				else if (!func_11(&(sLocal_14.f_153)))
				{
					func_12(&(sLocal_14.f_153), 0);
				}
				else if (func_13(&(sLocal_14.f_153)) > func_84(&sLocal_14) || !func_34(sLocal_14.f_253, (1 << 19)))
				{
					if (func_62(Global_35, sLocal_14.f_226, 1, 1) <= 35.0f)
					{
						if (func_87(&sLocal_14))
						{
							func_14(&(sLocal_14.f_153));
							func_21(&(sLocal_14.f_253), (1 << 19));
						}
					}
				}
				break;
			case 17:
				if (func_34(sLocal_14.f_253, 1))
				{
					func_19(&sLocal_14, 66);
				}
				else if (func_34(sLocal_14.f_253, 2) && !func_34(sLocal_14.f_253, 4))
				{
					func_19(&sLocal_14, 18);
				}
				else if (!func_11(&(sLocal_14.f_153)))
				{
					func_12(&(sLocal_14.f_153), 0);
				}
				else if (func_13(&(sLocal_14.f_153)) > func_84(&sLocal_14) || !func_34(sLocal_14.f_253, (1 << 19)))
				{
					if (func_62(Global_35, sLocal_14.f_226, 1, 1) <= 35.0f)
					{
						if (func_88(&sLocal_14))
						{
							func_14(&(sLocal_14.f_153));
							func_21(&(sLocal_14.f_253), (1 << 19));
						}
					}
				}
				break;
			case 7:
				if (func_34(sLocal_14.f_253, 1))
				{
					func_19(&sLocal_14, 60);
				}
				else if (func_34(sLocal_14.f_253, 4))
				{
					if (func_89(&(sLocal_14.f_250)))
					{
						if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_3(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 1, 0, 0))
						{
							func_19(&sLocal_14, 32);
						}
					}
				}
				else
				{
					func_82(180);
					func_83(&sLocal_14);
				}
				break;
			case 12:
				if (func_34(sLocal_14.f_253, 1))
				{
					func_19(&sLocal_14, 63);
				}
				else if (func_34(sLocal_14.f_253, 4))
				{
					if (func_4(&sLocal_14, &(sLocal_14.f_250), 1, func_6(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
					{
						func_19(&sLocal_14, 42);
					}
				}
				else
				{
					func_82(180);
					func_86(&sLocal_14);
				}
				break;
			case 13:
				PED::SET_PED_RESET_FLAG(sLocal_14.f_226, 202, true);
				PED::_GIVE_PED_SCENARIO_PROP(sLocal_14.f_226, sLocal_14.f_231, "p_cs_newspaper_03x_PH_R_HAND", "WORLD_HUMAN_NEWSPAPER_PUTDOWN", 0, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_250, "internal_loop", true, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_250, "internal_loop_end", true, false);
				func_21(&(sLocal_14.f_253), (1 << 16));
				if (VOLUME::DOES_VOLUME_EXIST(sLocal_14.f_238))
				{
					PATHFIND::_0x5A4E1A41E3A02AD0(sLocal_14.f_238, 6, 0);
					VOLUME::DELETE_VOLUME(sLocal_14.f_238);
				}
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_14.f_250, false))
				{
					TASK::CLEAR_PED_TASKS(sLocal_14.f_226, true, false);
				}
				else if (func_90(&sLocal_14, &(sLocal_14.f_224), 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(sLocal_14.f_226, func_91(0), 1.0f, 1.0f, 3.0f, false, true, 0))
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						func_92(&(sLocal_14.f_135));
						func_19(&sLocal_14, 57);
					}
				}
				break;
			case 18:
				if (((!ENTITY::IS_ENTITY_DEAD(sLocal_14.f_226) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_252)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_14.f_252, true, false)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (!func_34(sLocal_14.f_253, (1 << 15)))
					{
						sLocal_14.f_647 = 1;
						func_93(1, 1, 0);
						func_94(Global_35, sLocal_14.f_226, &(sLocal_14.f_160), 0.0f, 0.0f, 0.0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
						func_95(sLocal_14.f_226, Global_35, &(sLocal_14.f_160), 10.0f, 0, 0, 2.0f, -1.0f, 1, 8, 0.0f, 0.0f, 2.0f, 2.0f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
						func_96(&(sLocal_14.f_198));
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_252, "CS_NicholasTimmins", sLocal_14.f_226, 0);
						if (!func_45())
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_252, "b_PlayerArthur", true, false);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_252, "ARTHUR", Global_35, 0);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_14.f_252, "JOHN", Global_35, 0);
						}
						ANIMSCENE::RESET_ANIM_SCENE(sLocal_14.f_250, 0);
						ANIMSCENE::START_ANIM_SCENE(sLocal_14.f_252);
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						func_21(&(sLocal_14.f_253), (1 << 16));
						func_21(&(sLocal_14.f_253), (1 << 15));
						func_21(&(sLocal_14.f_253), (1 << 18));
					}
					if (VOLUME::DOES_VOLUME_EXIST(sLocal_14.f_242))
					{
						VOLUME::DELETE_VOLUME(sLocal_14.f_242);
					}
					func_97(&(sLocal_14.f_198), sLocal_14.f_226);
					func_98(sLocal_14.f_226, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
					if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_14.f_252, false))
					{
						func_44(&(sLocal_14.f_253), (1 << 15));
						func_82(180);
						func_19(&sLocal_14, 58);
					}
				}
				else if ((!ENTITY::IS_ENTITY_DEAD(sLocal_14.f_226) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_14.f_252, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(sLocal_14.f_252, true))
				{
					if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_252))
					{
						sLocal_14.f_252 = ANIMSCENE::_CREATE_ANIM_SCENE(func_99(), 0, 0, false, true);
					}
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_252))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(sLocal_14.f_252);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_226))
				{
					if (func_9(sLocal_14.f_226, 0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(sLocal_14.f_226, 1.5f);
					}
				}
				break;
			case 19:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_100(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, 0, 0))
				{
					func_19(&sLocal_14, 32);
				}
				break;
			case 33:
				break;
			case 34:
				break;
			case 22:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_101(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, 0, 0))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(sLocal_14.f_226, &uVar8));
					sLocal_14.f_256++;
					func_19(&sLocal_14, 32);
				}
				break;
			case 23:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_102(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, 0, 0))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(sLocal_14.f_226, &uVar8));
					sLocal_14.f_256++;
					func_19(&sLocal_14, 32);
				}
				break;
			case 24:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_103(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, 0, 0))
				{
					sLocal_14.f_256++;
					func_19(&sLocal_14, 32);
				}
				break;
			case 25:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_104(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, 0, 0))
				{
					sLocal_14.f_256++;
					func_19(&sLocal_14, 32);
				}
				break;
			case 26:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_105(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, 0, 0))
				{
					sLocal_14.f_256 = (1 + sLocal_14.f_256);
					func_19(&sLocal_14, 32);
				}
				break;
			case 27:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_106(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, 0, 0))
				{
					sLocal_14.f_256 = (1 + sLocal_14.f_256);
					func_19(&sLocal_14, 32);
				}
				break;
			case 28:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_107(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, 0, 0))
				{
					sLocal_14.f_256 = (1 + sLocal_14.f_256);
					func_19(&sLocal_14, 32);
				}
				break;
			case 29:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_108(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, 0, 0))
				{
					sLocal_14.f_256 = (1 + sLocal_14.f_256);
					func_19(&sLocal_14, 32);
				}
				break;
			case 30:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_109(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, 0, 0))
				{
					sLocal_14.f_256++;
					func_19(&sLocal_14, 32);
				}
				break;
			case 31:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_110(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, 0, 0))
				{
					sLocal_14.f_256 = (1 + sLocal_14.f_256);
					func_19(&sLocal_14, 32);
				}
				break;
			case 32:
				if (func_34(sLocal_14.f_253, 2) && !func_34(sLocal_14.f_253, 4))
				{
					if (func_4(&sLocal_14, &(sLocal_14.f_251), 3, func_111(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 0, 0, 0))
					{
						func_19(&sLocal_14, 7);
					}
				}
				else if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_3(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 1, 0, 0))
				{
					func_19(&sLocal_14, 6);
				}
				break;
			case 20:
				PED::SET_PED_RESET_FLAG(sLocal_14.f_226, 202, true);
				PED::_GIVE_PED_SCENARIO_PROP(sLocal_14.f_226, sLocal_14.f_229, "p_cigar01x_PH_R_HAND", "WORLD_HUMAN_SMOKE_CIGAR", 0, true);
				if (!ANIMSCENE::IS_ANIM_SCENE_FINISHED(sLocal_14.f_250, false))
				{
					func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_112(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 1, 0, 0, 0);
				}
				if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(sLocal_14.f_250, "CS_NicholasTimmins"))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_14.f_250, "CS_NicholasTimmins", sLocal_14.f_226);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_14.f_250, "p_cigar02x", sLocal_14.f_229);
					if (func_34(sLocal_14.f_253, (1 << 27)))
					{
						func_90(&sLocal_14, &(sLocal_14.f_225), -1);
					}
					else
					{
						func_113(&sLocal_14, 1);
					}
					func_19(&sLocal_14, 59);
				}
				break;
			case 21:
				if (!ANIMSCENE::IS_ANIM_SCENE_FINISHED(sLocal_14.f_250, false))
				{
					func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_114(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 1, 0, 0, 0);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(sLocal_14.f_226))
				{
				}
				break;
			case 35:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 1, func_115(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(sLocal_14.f_226, &uVar8));
					sLocal_14.f_256++;
					func_19(&sLocal_14, 42);
				}
				break;
			case 36:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 1, func_116(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					sLocal_14.f_256 = (1 + sLocal_14.f_256);
					func_19(&sLocal_14, 42);
				}
				break;
			case 37:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 1, func_117(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					sLocal_14.f_256++;
					func_19(&sLocal_14, 42);
				}
				break;
			case 38:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 1, func_118(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					sLocal_14.f_256 = (1 + sLocal_14.f_256);
					func_19(&sLocal_14, 42);
				}
				break;
			case 39:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 1, func_119(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					sLocal_14.f_256++;
					func_19(&sLocal_14, 42);
				}
				break;
			case 40:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 1, func_120(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_IG3_PDMOS_Base", "s_IG3_PDMOS_Base_End"))
				{
					sLocal_14.f_256++;
					func_19(&sLocal_14, 42);
				}
				break;
			case 41:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 1, func_121(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_IG3_PDMOS_Base", "s_IG3_PDMOS_Base_End"))
				{
					sLocal_14.f_256++;
					func_19(&sLocal_14, 42);
				}
				break;
			case 42:
				if (func_34(sLocal_14.f_253, 2) && !func_34(sLocal_14.f_253, 4))
				{
					if (func_4(&sLocal_14, &(sLocal_14.f_251), 4, func_122(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 0, 0, 0))
					{
						func_19(&sLocal_14, 12);
					}
				}
				else if (func_4(&sLocal_14, &(sLocal_14.f_250), 1, func_6(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					func_19(&sLocal_14, 11);
				}
				break;
			case 43:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 2, func_123(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(sLocal_14.f_226, &uVar8));
					sLocal_14.f_256 = (1 + sLocal_14.f_256);
					func_19(&sLocal_14, 50);
				}
				break;
			case 44:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 2, func_124(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					sLocal_14.f_256 = (1 + sLocal_14.f_256);
					func_19(&sLocal_14, 50);
				}
				break;
			case 45:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 2, func_125(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					sLocal_14.f_256++;
					func_19(&sLocal_14, 50);
				}
				break;
			case 46:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 2, func_126(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					sLocal_14.f_256++;
					func_19(&sLocal_14, 50);
				}
				break;
			case 47:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 2, func_127(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					sLocal_14.f_256 = (1 + sLocal_14.f_256);
					func_19(&sLocal_14, 50);
				}
				break;
			case 48:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 2, func_128(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					sLocal_14.f_256++;
					func_19(&sLocal_14, 50);
				}
				break;
			case 49:
				if (func_4(&sLocal_14, &(sLocal_14.f_250), 2, func_129(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 1, "s_IG5_Base", "s_IG5_Base_End"))
				{
					sLocal_14.f_256 = (1 + sLocal_14.f_256);
					func_19(&sLocal_14, 50);
				}
				break;
			case 50:
				if (func_34(sLocal_14.f_253, 2) && !func_34(sLocal_14.f_253, 4))
				{
					if (!ENTITY::IS_ENTITY_DEAD(sLocal_14.f_226))
					{
						func_19(&sLocal_14, 18);
					}
				}
				else if (func_4(&sLocal_14, &(sLocal_14.f_250), 2, func_5(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 1, "s_BASE", "s_base_end"))
				{
					func_19(&sLocal_14, 17);
				}
				break;
			case 51:
				func_130(&(sLocal_14.f_239), &(sLocal_14.f_649), &(sLocal_14.f_650));
				func_131(1);
				if (func_132(sLocal_14.f_226, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(sLocal_14.f_226, 0.25f, 2.0f, 0.0f), 1036831949, 20000) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&sLocal_14, &(sLocal_14.f_251), 3, func_133(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 0, 0, 0))
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						if (!func_34(sLocal_14.f_253, 4))
						{
							func_21(&(sLocal_14.f_253), 4);
						}
						func_134(&(sLocal_14.f_303[0 /*17*/]), 0);
						func_134(&(sLocal_14.f_303[1 /*17*/]), 0);
						func_77(&(sLocal_14.f_303[0 /*17*/]), 0, 0);
						func_77(&(sLocal_14.f_303[1 /*17*/]), 0, 0);
						sLocal_14.f_639 = func_78(3, 0, 0);
						func_79(&(sLocal_14.f_281[0 /*21*/]), 0);
						func_131(0);
						func_19(&sLocal_14, 53);
					}
				}
				break;
			case 52:
				func_130(&(sLocal_14.f_239), &(sLocal_14.f_649), &(sLocal_14.f_650));
				func_131(1);
				if (func_132(sLocal_14.f_226, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(sLocal_14.f_226, 0.25f, 2.0f, 0.0f), 1036831949, 20000) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&sLocal_14, &(sLocal_14.f_251), 3, func_135(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 0, 0, 0))
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						if (!func_34(sLocal_14.f_253, 4))
						{
							func_21(&(sLocal_14.f_253), 4);
						}
						func_134(&(sLocal_14.f_303[0 /*17*/]), 0);
						func_134(&(sLocal_14.f_303[1 /*17*/]), 0);
						func_77(&(sLocal_14.f_303[0 /*17*/]), 0, 0);
						func_77(&(sLocal_14.f_303[1 /*17*/]), 0, 0);
						sLocal_14.f_639 = func_78(3, 0, 0);
						func_79(&(sLocal_14.f_281[0 /*21*/]), 0);
						func_131(0);
						func_19(&sLocal_14, 53);
					}
				}
				break;
			case 53:
				if (func_136(&(sLocal_14.f_303[0 /*17*/]), 0))
				{
					func_134(&(sLocal_14.f_303[0 /*17*/]), 0);
					func_134(&(sLocal_14.f_303[1 /*17*/]), 0);
					func_77(&(sLocal_14.f_303[0 /*17*/]), 1, 0);
					func_77(&(sLocal_14.f_303[1 /*17*/]), 1, 0);
				}
				if (func_34(sLocal_14.f_253, 4))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_14.f_251, "p_chaireagle01x", sLocal_14.f_228);
					if (func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_3(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 0, 0, 0))
					{
						func_19(&sLocal_14, 6);
					}
				}
				else if (func_4(&sLocal_14, &(sLocal_14.f_251), 3, func_111(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 0, 0, 0))
				{
					func_19(&sLocal_14, 7);
				}
				break;
			case 54:
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&sLocal_14, &(sLocal_14.f_251), 4, func_137(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 0, 0, 0))
					{
						if (!func_34(sLocal_14.f_253, 4))
						{
							func_21(&(sLocal_14.f_253), 4);
						}
						func_19(&sLocal_14, 56);
					}
				}
				break;
			case 55:
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&sLocal_14, &(sLocal_14.f_251), 4, func_138(), &(sLocal_14.f_3), &(sLocal_14.f_4), 1, 0, 0, 0, 0))
					{
						if (!func_34(sLocal_14.f_253, 4))
						{
							func_21(&(sLocal_14.f_253), 4);
						}
						func_19(&sLocal_14, 56);
					}
				}
				break;
			case 56:
				if (func_34(sLocal_14.f_253, 4))
				{
					if (func_4(&sLocal_14, &(sLocal_14.f_250), 1, func_6(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 0, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
					{
						func_19(&sLocal_14, 11);
					}
				}
				else if (func_4(&sLocal_14, &(sLocal_14.f_251), 4, func_122(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 1, 0, 0, 0))
				{
					func_19(&sLocal_14, 12);
				}
				break;
			case 57:
				if (!PED::IS_PED_USING_THIS_SCENARIO(sLocal_14.f_226, sLocal_14.f_224))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(sLocal_14.f_226, func_91(3), 1.0f, 1.0f, 3.0f, false, true, 0))
					{
						if (!func_139(sLocal_14.f_226, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(sLocal_14.f_226, func_91(3), 1.0f, -1, 0.25f, 0, 40000.0f);
						}
					}
					else if (func_140(&(sLocal_14.f_135)) > 3.0f)
					{
						if (func_90(&sLocal_14, &(sLocal_14.f_225), -1))
						{
							func_44(&(sLocal_14.f_253), (1 << 10));
							func_19(&sLocal_14, 62);
						}
					}
				}
				break;
			case 58:
				if (func_62(sLocal_14.f_226, Global_35, 1, 1) > 10.0f)
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_ABORTED(sLocal_14.f_252) && !ANIMSCENE::_0xD70C7A30412F8FA0(sLocal_14.f_252))
					{
						ANIMSCENE::ABORT_ANIM_SCENE(sLocal_14.f_252, false);
					}
				}
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_14.f_252, false) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(sLocal_14.f_252, false))
				{
					ANIMSCENE::RESET_ANIM_SCENE(sLocal_14.f_252, 0);
					if (!func_34(sLocal_14.f_253, 4))
					{
						func_21(&(sLocal_14.f_253), 4);
					}
					if (func_34(sLocal_14.f_253, (1 << 18)))
					{
						func_141(Global_35);
						func_142(sLocal_14.f_226, 1);
						func_143(Global_35, 1);
						func_44(&(sLocal_14.f_253), (1 << 18));
					}
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(sLocal_14.f_226, &uVar8));
					if (func_113(&sLocal_14, 2))
					{
						func_44(&(sLocal_14.f_253), (1 << 10));
						func_19(&sLocal_14, 65);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_226))
					{
						if (func_9(sLocal_14.f_226, 0))
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(sLocal_14.f_226, 1.5f);
						}
					}
					func_98(sLocal_14.f_226, Global_35, 1, 1, 1, 1, 1, 1, 0, 1, 1);
				}
				break;
			case 63:
				sLocal_14.f_643 = 0;
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_231))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(sLocal_14.f_231))
					{
						func_144(sLocal_14.f_231, 1, 1);
						PHYSICS::ACTIVATE_PHYSICS(sLocal_14.f_231);
					}
				}
				if (!func_34(sLocal_14.f_254, 128))
				{
					if (func_145(sLocal_14.f_226, "PANIC_HELP", joaat("SPEECH_PARAMS_SHOUTED"), 0, sLocal_14.f_280, 0))
					{
						func_21(&(sLocal_14.f_254), 128);
					}
				}
				if (VOLUME::DOES_VOLUME_EXIST(sLocal_14.f_238))
				{
					PATHFIND::_0x5A4E1A41E3A02AD0(sLocal_14.f_238, 6, 0);
					VOLUME::DELETE_VOLUME(sLocal_14.f_238);
				}
				if (!PED::IS_PED_FLEEING(sLocal_14.f_226))
				{
					func_146(sLocal_14.f_226, 1, 1);
					func_147(sLocal_14.f_226);
					TASK::TASK_FLEE_PED(sLocal_14.f_226, Global_35, 3, 256, -1.0f, -1, 0);
					PED::SET_PED_CONFIG_FLAG(sLocal_14.f_226, 153, false);
					func_148(sLocal_14.f_242);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_14.f_226, false);
					AUDIO::STOP_PED_SPEAKING(sLocal_14.f_226, false);
					PED::SET_PED_KEEP_TASK(sLocal_14.f_226, true);
				}
				break;
			case 62:
				break;
			case 64:
				break;
			case 60:
				sLocal_14.f_643 = 0;
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorConvo");
				if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_229))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(sLocal_14.f_229))
					{
						func_144(sLocal_14.f_229, 1, 1);
						PHYSICS::ACTIVATE_PHYSICS(sLocal_14.f_229);
					}
				}
				if (!func_34(sLocal_14.f_254, 128))
				{
					if (func_145(sLocal_14.f_226, "PANIC_HELP", joaat("SPEECH_PARAMS_SHOUTED"), 0, sLocal_14.f_280, 0))
					{
						func_21(&(sLocal_14.f_254), 128);
					}
				}
				if (func_34(sLocal_14.f_253, (1 << 22)))
				{
					if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_250) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(sLocal_14.f_226, -1)) && (ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_14.f_250, false) || (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_251) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_14.f_251, false))))
					{
						func_4(&sLocal_14, &(sLocal_14.f_250), 0, func_114(), &(sLocal_14.f_3), &(sLocal_14.f_4), 0, 0, 0, 0, 0);
						if ((ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_14.f_250, false) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_14.f_251)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_14.f_251, false))
						{
							ANIMSCENE::RESET_ANIM_SCENE(sLocal_14.f_251, 0);
						}
					}
					else if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(sLocal_14.f_250, false) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(sLocal_14.f_226, -1))
					{
						func_149(&sLocal_14);
						func_44(&(sLocal_14.f_253), (1 << 22));
					}
				}
				else if (!PED::IS_PED_FLEEING(sLocal_14.f_226))
				{
					func_146(sLocal_14.f_226, 1, 1);
					func_147(sLocal_14.f_226);
					TASK::TASK_FLEE_PED(sLocal_14.f_226, Global_35, 3, 256, -1.0f, -1, 0);
					PED::SET_PED_CONFIG_FLAG(sLocal_14.f_226, 153, false);
					func_148(sLocal_14.f_242);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_14.f_226, false);
					AUDIO::STOP_PED_SPEAKING(sLocal_14.f_226, false);
					PED::SET_PED_KEEP_TASK(sLocal_14.f_226, true);
				}
				break;
			case 2:
				break;
			case 59:
				PED::SET_PED_RESET_FLAG(sLocal_14.f_226, 202, true);
				if (func_34(sLocal_14.f_253, (1 << 27)))
				{
					func_90(&sLocal_14, &(sLocal_14.f_225), -1);
				}
				else
				{
					func_113(&sLocal_14, 1);
				}
				if (!func_34(sLocal_14.f_253, (1 << 16)))
				{
					if (func_62(sLocal_14.f_226, sLocal_14.f_214[0], 1, 1) > 4.0f)
					{
						func_21(&(sLocal_14.f_253), (1 << 16));
					}
				}
				break;
			case 61:
				break;
			case 66:
				sLocal_14.f_643 = 0;
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (!func_34(sLocal_14.f_254, 128))
				{
					if (func_145(sLocal_14.f_226, "PANIC_HELP", joaat("SPEECH_PARAMS_SHOUTED"), 0, sLocal_14.f_280, 0))
					{
						func_21(&(sLocal_14.f_254), 128);
					}
				}
				if (!PED::IS_PED_FLEEING(sLocal_14.f_226))
				{
					func_146(sLocal_14.f_226, 1, 1);
					func_147(sLocal_14.f_226);
					TASK::TASK_FLEE_PED(sLocal_14.f_226, Global_35, 3, 256, -1.0f, -1, 0);
					PED::SET_PED_CONFIG_FLAG(sLocal_14.f_226, 153, false);
					func_148(sLocal_14.f_242);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_14.f_226, false);
					AUDIO::STOP_PED_SPEAKING(sLocal_14.f_226, false);
					PED::SET_PED_KEEP_TASK(sLocal_14.f_226, true);
				}
				break;
			case 65:
				break;
			case 67:
				break;
			default:
				break;
		}
		if (func_41(sLocal_14.f_159))
		{
			switch (sLocal_14.f_0)
			{
				case 62:
					if (!PED::_IS_PED_VISIBILITY_TRACKED(sLocal_14.f_226))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(sLocal_14.f_226);
					}
					if (func_62(Global_35, sLocal_14.f_226, 1, 1) > 50.0f && !PED::IS_TRACKED_PED_VISIBLE(sLocal_14.f_226))
					{
						if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_226))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(sLocal_14.f_226, 0.0f);
							PED::DELETE_PED(&(sLocal_14.f_226));
						}
						func_1(&sLocal_14);
					}
					break;
				case 59:
				case 65:
					if (!PED::_IS_PED_VISIBILITY_TRACKED(sLocal_14.f_226))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(sLocal_14.f_226);
					}
					if (func_62(Global_35, sLocal_14.f_226, 1, 1) > 100.0f && !PED::IS_TRACKED_PED_VISIBLE(sLocal_14.f_226))
					{
						if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_226))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(sLocal_14.f_226, 0.0f);
							PED::DELETE_PED(&(sLocal_14.f_226));
						}
						func_1(&sLocal_14);
					}
					break;
			}
		}
	}
}

void func_1(int iParam0)
{
	int iVar0;

	func_150(&(iParam0->f_259));
	func_151(18);
	if (func_34(iParam0->f_253, (1 << 18)))
	{
		func_142(iParam0->f_226, 1);
		func_143(Global_35, 1);
	}
	if (func_41(iParam0->f_159))
	{
		func_152(iParam0->f_159, iParam0->f_254);
		func_153(func_40(18, 0, 9, func_39(18)), iParam0->f_258);
	}
	func_154(&(iParam0->f_226), &(iParam0->f_255), joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20.0f, 1);
	AUDIO::STOP_PED_SPEAKING(iParam0->f_226, false);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_226))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_226, false);
		func_146(iParam0->f_226, 1, 1);
		func_147(iParam0->f_226);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_226, 0.0f);
		PED::_SET_REMOVE_PED_NETWORKED(iParam0->f_226, -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_226));
	}
	if (func_155(483, 0))
	{
		func_156(483, 0, 1, 0, 0);
	}
	if (func_34(iParam0->f_253, (1 << 28)))
	{
		iVar0 = func_60(884);
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iVar0);
		}
	}
	func_157(&(iParam0->f_646));
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_229))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0->f_229))
		{
			func_144(iParam0->f_229, 1, 1);
			PHYSICS::ACTIVATE_PHYSICS(iParam0->f_229);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_229));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_230))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0->f_230))
		{
			func_144(iParam0->f_230, 1, 1);
			PHYSICS::ACTIVATE_PHYSICS(iParam0->f_230);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_230));
	}
	ENTITY::REMOVE_MODEL_HIDE(-1817.047f, -371.4747f, 163.116f, 1.0f, joaat("P_CS_NEWSPAPER_03X"), 0);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam0->f_224))
	{
		TASK::_DELETE_SCENARIO_POINT(iParam0->f_224);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_231))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0->f_231))
		{
			func_144(iParam0->f_231, 1, 1);
			PHYSICS::ACTIVATE_PHYSICS(iParam0->f_231);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_231));
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_237))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_237);
	}
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(iParam0->f_645))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0->f_645, false);
	}
	func_158(iParam0);
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[18 /*638*/][0 /*48*/].f_47))
	{
		VOLUME::DELETE_VOLUME(Global_1396257[18 /*638*/][0 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[18 /*638*/][1 /*48*/].f_47))
	{
		VOLUME::DELETE_VOLUME(Global_1396257[18 /*638*/][1 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[18 /*638*/][2 /*48*/].f_47))
	{
		VOLUME::DELETE_VOLUME(Global_1396257[18 /*638*/][2 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[18 /*638*/][3 /*48*/].f_47))
	{
		VOLUME::DELETE_VOLUME(Global_1396257[18 /*638*/][3 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[18 /*638*/][4 /*48*/].f_47))
	{
		VOLUME::DELETE_VOLUME(Global_1396257[18 /*638*/][4 /*48*/].f_47);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_649))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_649);
	}
	func_131(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_159())
		{
			return true;
		}
	}
	if (!PED::IS_PED_INJURED(bParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam1, true, false)) < 18.0f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam1))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_160(0) == 7 || func_161())
		{
			return true;
		}
	}
	if (func_162(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 10)))
	{
		return true;
	}
	return false;
}

char* func_3()
{
	return "pbl_Base_Reset";
}

bool func_4(int iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10)
{
	if (!func_163(uParam1, iParam2, uParam5))
	{
		return false;
	}
	if (!func_164(uParam1, uParam4, iParam2, iParam0))
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false) && !bParam8)
	{
		ANIMSCENE::START_ANIM_SCENE(*uParam1);
	}
	if (bParam8 && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
	{
		if ((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam3) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam1, sParam3)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam3))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam1, sParam3);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam3))
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, sParam3, true);
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
	}
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
	{
		if ((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam3) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam1, sParam3)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam3))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam1, sParam3);
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam3) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam1, sParam3))
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, sParam3, true);
			BUILTIN::WAIT(0);
			return false;
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam1, sParam3))
		{
			if (iParam0->f_244 != -1)
			{
				if (iParam0->f_244 == *uParam1)
				{
					ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(iParam0->f_244, iParam0->f_243);
				}
				else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_244) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_244, true, false))
				{
					ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_244, func_165(iParam0->f_245));
				}
			}
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_Base_End", true))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_base_end", true))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10) && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, sParam10, true))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(*uParam1, false))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if ((iParam0->f_641 && func_34(iParam0->f_253, (1 << 14))) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_226))
			{
				iParam0->f_641 = 0;
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
		}
	}
	return false;
}

char* func_5()
{
	return "pbl_base_reset";
}

char* func_6()
{
	return "pbl_IG2_base_reset";
}

int func_7(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_166();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0.0f)
	{
		if (!func_167(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_11(uParam3))
	{
		func_168(uParam3, 0.0f);
	}
	else if (func_13(uParam3) >= 2.0f)
	{
		if (!func_169(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_170(iParam0);
			*uParam4 = 1;
			func_14(uParam3);
			return 1;
		}
		else
		{
			func_170(iParam0);
			*uParam4 = 1;
			func_14(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_8(int iParam0, int iParam1)
{
	if (func_171(iParam0))
	{
		if (func_172(Global_35, iParam1, 0, 1))
		{
			LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), joaat("CRIME_LOITERING"), 0, 0, -1);
		}
	}
}

bool func_9(int iParam0, int iParam1)
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
	if (func_34(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_34(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_34(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_10()
{
	return Global_1894899.f_2;
}

bool func_11(var uParam0)
{
	return func_173(*uParam0, 1);
}

void func_12(var uParam0, bool bParam1)
{
	if (bParam1 || !func_11(uParam0))
	{
		func_92(uParam0);
	}
}

float func_13(var uParam0)
{
	if (!func_11(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_174(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_175() - uParam0->f_1);
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

int func_15(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

bool func_16(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_160(0) == 1 || func_160(0) == 2) || func_160(0) == 8) || func_176(Global_1935630, (1 << 11)))
			{
				func_21(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_160(0) == 11)
			{
				func_21(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_160(0) == 6)
			{
				func_21(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_21(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_177(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_177(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_166();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_177(iVar2) > func_177(iVar1))
				{
					if (func_177(iVar0) > func_177(iVar2) + 1 || func_177(iVar0) < func_177(iVar1))
					{
						func_21(uParam2, 32);
					}
				}
				else if (func_177(iVar0) > func_177(iVar2) + 1 && func_177(iVar0) < func_177(iVar1))
				{
					func_21(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((func_178(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_178(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_179(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_179(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_180(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_21(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_181(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) | func_182(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, (1 << 11)))
				{
					if (!func_11(&(uParam2->f_13)))
					{
						func_168(&(uParam2->f_13), 0.0f);
					}
					else if (func_183(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_14(&(uParam2->f_13));
						func_21(uParam2, (1 << 9));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_11(&(uParam2->f_13)))
					{
						func_14(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_184())
			{
				func_21(uParam2, (1 << 10));
			}
		}
		if (uParam2->f_10)
		{
			if (func_185())
			{
				func_21(uParam2, (1 << 11));
			}
		}
		if (func_176(Global_1935630, (1 << 14)) || Global_1430231.f_4)
		{
			func_21(uParam2, 128);
		}
		if (func_162(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 11)))
		{
			func_21(uParam2, 256);
		}
	}
	if ((((((((((func_34(*uParam2, 2) || func_34(*uParam2, 4)) || func_34(*uParam2, 8)) || func_34(*uParam2, 16)) || func_34(*uParam2, 32)) || func_34(*uParam2, 64)) || func_34(*uParam2, 128)) || func_34(*uParam2, 256)) || func_34(*uParam2, (1 << 9))) || func_34(*uParam2, (1 << 10))) || func_34(*uParam2, (1 << 11)))
	{
		return true;
	}
	return false;
}

bool func_17(var uParam0)
{
	if (((((func_34(*uParam0, 2) || func_34(*uParam0, 4)) || func_34(*uParam0, 16)) || func_34(*uParam0, 128)) || func_34(*uParam0, (1 << 10))) || func_34(*uParam0, (1 << 11)))
	{
		return true;
	}
	return false;
}

bool func_18(var uParam0)
{
	if ((((func_34(*uParam0, 32) || func_34(*uParam0, 64)) || func_34(*uParam0, (1 << 9))) || func_34(*uParam0, 256)) || func_34(*uParam0, 8))
	{
		return true;
	}
	return false;
}

void func_19(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_20(var uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;

	vVar0 = { func_91(iParam1) /*3*/ };
	iVar3 = func_186(iParam1);
	*uParam0 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vVar0, iVar3, 1.0f, 0, false);
	if (TASK::DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		return true;
	}
	return false;
}

void func_21(var uParam0, int iParam1)
{
	func_187(uParam0, iParam1);
}

void func_22(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_226))
	{
		if (!func_9(iParam0->f_226, 0))
		{
			if (!func_34(iParam0->f_253, (1 << 25)))
			{
				func_19(iParam0, func_188(iParam0));
				func_21(&(iParam0->f_253), (1 << 25));
			}
		}
		else if ((*iParam0 > 5 && *iParam0 < func_188(iParam0)) && (func_189(iParam0->f_226, 0, &(iParam0->f_103), &(iParam0->f_131), 0, 0) || func_34(iParam0->f_253, (1 << 23))))
		{
			func_170(18);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 448, false);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 153, false);
			AUDIO::STOP_PED_SPEAKING(iParam0->f_226, false);
			AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, false, false);
			func_21(&(iParam0->f_253), (1 << 23));
			if (iParam0->f_1 == 0)
			{
				func_21(&(iParam0->f_253), (1 << 22));
				func_19(iParam0, 60);
			}
			else if (iParam0->f_1 == 2)
			{
				func_19(iParam0, 63);
				func_149(iParam0);
			}
			else if (iParam0->f_1 == 3)
			{
				func_19(iParam0, 66);
				func_149(iParam0);
			}
		}
	}
}

void func_23(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_214[iVar0]))
		{
			if (!PED::IS_PED_FLEEING(iParam0->f_214[iVar0]))
			{
				if (iParam0->f_643)
				{
					PED::SET_PED_RESET_FLAG(iParam0->f_214[iVar0], 49, true);
				}
				if (func_189(iParam0->f_214[iVar0], 0, &(iParam0->f_103), &(iParam0->f_131), 0, 0) || func_34(iParam0->f_253, (1 << 23)))
				{
					if (!func_11(&(iParam0->f_147)) || func_140(&(iParam0->f_147)) > 0.4f)
					{
						if (iParam0->f_1 == 0)
						{
							PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iParam0->f_214[iVar0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1);
						}
						else
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam0->f_214[iVar0]);
						}
						func_79(&(iParam0->f_338[iVar0 /*75*/]), 0);
						func_190(&(iParam0->f_338[iVar0 /*75*/]));
						PED::SET_PED_CONFIG_FLAG(iParam0->f_214[iVar0], 315, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_214[iVar0], 17, true);
						TASK::TASK_FLEE_PED(iParam0->f_214[iVar0], Global_35, 3, 1, -1.0f, -1, 0);
						PED::SET_PED_KEEP_TASK(iParam0->f_214[iVar0], true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_214[iVar0], false);
						func_92(&(iParam0->f_147));
						func_21(&(iParam0->f_253), (1 << 23));
					}
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar1 = false;
	iVar0 = iParam0->f_1;
	switch (iVar0)
	{
		case 0:
			if (((*iParam0 == 6 && func_34(iParam0->f_253, (1 << 19))) || ((*iParam0 != 6 && !AUDIO::_IS_PED_IN_ANY_CONVERSATION(iParam0->f_226, false)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_226, -1546655685))) && !func_34(iParam0->f_253, 2))
			{
				bVar1 = true;
			}
			break;
		case 1:
			if (((*iParam0 == 6 && func_34(iParam0->f_253, (1 << 19))) && !func_34(iParam0->f_253, 2)) && !func_191())
			{
				bVar1 = true;
			}
			break;
		case 2:
			if ((*iParam0 == 11 && func_34(iParam0->f_253, (1 << 19))) && !func_34(iParam0->f_253, 2))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if ((*iParam0 == 17 && func_34(iParam0->f_253, (1 << 19))) && !func_34(iParam0->f_253, 2))
			{
				bVar1 = true;
			}
			break;
	}
	iVar2 = 0;
	if ((VOLUME::DOES_VOLUME_EXIST(iParam0->f_234) && VOLUME::DOES_VOLUME_EXIST(iParam0->f_233)) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_234, true, 0))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_233, true, 0) && bVar1)
			{
				if (!func_192(&(iParam0->f_303[0 /*17*/]), 1, 0))
				{
					func_77(&(iParam0->f_303[0 /*17*/]), 1, 0);
					func_77(&(iParam0->f_303[1 /*17*/]), 1, 0);
				}
				if (func_34(iParam0->f_253, (1 << 24)))
				{
					iParam0->f_639 = func_78(2, 0, 0);
					func_79(&(iParam0->f_281[0 /*21*/]), 0);
					func_44(&(iParam0->f_253), (1 << 24));
				}
			}
			else
			{
				if (func_192(&(iParam0->f_303[0 /*17*/]), 1, 0))
				{
					func_77(&(iParam0->f_303[0 /*17*/]), 0, 0);
					func_77(&(iParam0->f_303[1 /*17*/]), 0, 0);
				}
				if (!func_34(iParam0->f_253, (1 << 24)))
				{
					iParam0->f_639 = func_78(3, 0, 0);
					func_79(&(iParam0->f_281[0 /*21*/]), 0);
					func_21(&(iParam0->f_253), (1 << 24));
				}
			}
		}
		else if (func_192(&(iParam0->f_303[0 /*17*/]), 1, 0))
		{
			func_77(&(iParam0->f_303[0 /*17*/]), 0, 0);
			func_77(&(iParam0->f_303[1 /*17*/]), 0, 0);
			if (!func_34(iParam0->f_253, (1 << 24)))
			{
				iParam0->f_639 = func_78(3, 0, 0);
				func_79(&(iParam0->f_281[0 /*21*/]), 0);
				func_21(&(iParam0->f_253), (1 << 24));
			}
		}
		iVar3 = -1;
		iVar4 = 0;
		iVar3 = func_193(&(iParam0->f_226), &(iParam0->f_281[0 /*21*/]), 15.0f, &(iParam0->f_303), &iVar4, 0.0f, 2, 0, iVar2, iParam0->f_639, 0, 0, 2, 1, -1082130432, 0);
		if (!func_34(iParam0->f_253, 2))
		{
			switch (iVar3)
			{
				case 0:
				case 1:
					if (iVar3 == 1)
					{
						iParam0->f_258++;
					}
					func_77(&(iParam0->f_303[0 /*17*/]), 0, 0);
					func_77(&(iParam0->f_303[1 /*17*/]), 0, 0);
					if (!func_34(iParam0->f_253, (1 << 24)))
					{
						iParam0->f_639 = func_78(3, 0, 0);
						func_79(&(iParam0->f_281[0 /*21*/]), 0);
						func_21(&(iParam0->f_253), (1 << 24));
					}
					func_194(18, &(iParam0->f_226), &(iParam0->f_253), (1 << 11));
					func_21(&(iParam0->f_253), 2);
					func_196(18, func_195(iParam0));
					iParam0->f_641 = 1;
					if (iVar0 == 0)
					{
						func_134(&(iParam0->f_303[0 /*17*/]), 1);
						func_134(&(iParam0->f_303[1 /*17*/]), 1);
						func_82(180);
						func_83(iParam0);
					}
					break;
			}
		}
		iVar5 = 0;
		while (iVar5 < iParam0->f_257)
		{
			func_197(&(iParam0->f_214[iVar5]), &(iParam0->f_338[iVar5 /*75*/]), 15.0f, &(iParam0->f_338[iVar5 /*75*/].f_21), 0.0f, 2, 0, "", func_78(3, 0, 0), 0, 0, 2, -1082130432);
			iVar5++;
		}
	}
}

void func_25(int iParam0)
{
	int iVar0;
	bool bVar1;

	if ((((func_34(iParam0->f_253, (1 << 16)) && !func_34(iParam0->f_253, (1 << 17))) && *iParam0 != 60) && *iParam0 != 63) && *iParam0 != 66)
	{
		bVar1 = true;
		iVar0 = 0;
		while (iVar0 < iParam0->f_257)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_214[iVar0]))
			{
				bVar1 = false;
				if (!func_11(&(iParam0->f_144)) || func_140(&(iParam0->f_144)) > 0.4f)
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_214[iVar0]))
					{
						TASK::CLEAR_PED_TASKS(iParam0->f_214[iVar0], true, false);
					}
					func_79(&(iParam0->f_338[iVar0 /*75*/]), 0);
					func_190(&(iParam0->f_338[iVar0 /*75*/]));
					PED::SET_PED_CONFIG_FLAG(iParam0->f_214[iVar0], 315, false);
					func_141(iParam0->f_214[iVar0]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_214[iVar0], false);
					PED::_SET_REMOVE_PED_NETWORKED(iParam0->f_214[iVar0], -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_214[iVar0]));
					func_92(&(iParam0->f_144));
				}
			}
			iVar0++;
		}
		if (bVar1)
		{
			func_21(&(iParam0->f_253), (1 << 17));
		}
	}
}

void func_26(int iParam0, var uParam1)
{
	if (func_34(iParam0->f_253, 128) || func_34(iParam0->f_253, 4))
	{
		return;
	}
	if (AUDIO::_IS_ANY_CONVERSATION_PLAYING(false))
	{
		return;
	}
	if (!func_11(uParam1))
	{
		func_168(uParam1, 0.0f);
		func_198(iParam0);
	}
}

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = iParam0->f_1;
	if (iVar1 == 2)
	{
		iVar2 = 0;
		iVar3 = 3;
	}
	else if (iVar1 == 3)
	{
		iVar2 = 2;
		iVar3 = 3;
	}
	if (*iParam0 == func_188(iParam0))
	{
		iParam0->f_2 = 3;
	}
	switch (iParam0->f_2)
	{
		case 0:
		case 1:
			switch (iVar1)
			{
				case 0:
				case 2:
				case 3:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						func_171(iParam0->f_214[iVar0]);
						iVar0++;
					}
					break;
			}
			break;
	}
	switch (iParam0->f_2)
	{
		case 0:
			if (func_199(iParam0))
			{
				iParam0->f_2 = 1;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						TASK::TASK_LOOK_AT_ENTITY(iParam0->f_214[iVar0], iParam0->f_226, -1, 2108, 51, 1);
						if (!func_139(iParam0->f_214[iVar0], joaat("SCRIPT_TASK_USE_SCENARIO_POINT")))
						{
							iParam0->f_2 = 0;
						}
						iVar0++;
					}
					break;
				case 2:
				case 3:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						if (func_9(iParam0->f_214[iVar0], 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_214[iVar0], iParam0->f_226, -1, 2108, 51, 1);
							if (!func_139(iParam0->f_214[iVar0], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")))
							{
								iParam0->f_2 = 0;
							}
							if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
							{
								if (!func_11(&(iParam0->f_144)))
								{
									func_92(&(iParam0->f_144));
								}
								if (!func_34(iParam0->f_253, (1 << 26)))
								{
									if (func_140(&(iParam0->f_144)) > 2.0f)
									{
										func_92(&(iParam0->f_144));
										iParam0->f_2 = 2;
									}
								}
								else if (func_140(&(iParam0->f_144)) > 30.0f)
								{
									func_92(&(iParam0->f_144));
									iParam0->f_2 = 2;
								}
							}
							else
							{
								func_92(&(iParam0->f_144));
							}
						}
						iVar0++;
					}
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 2:
				case 3:
					if (!func_34(iParam0->f_253, (1 << 26)))
					{
						iVar0 = iVar2;
					}
					else
					{
						iVar0 = iVar3;
					}
					if (func_9(iParam0->f_214[iVar0], 0))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_214[iVar0]))
						{
							TASK::CLEAR_PED_TASKS(iParam0->f_214[iVar0], true, false);
							func_92(&(iParam0->f_144));
						}
						else if (func_140(&(iParam0->f_144)) > 4.0f)
						{
							func_79(&(iParam0->f_338[iVar0 /*75*/]), 0);
							func_190(&(iParam0->f_338[iVar0 /*75*/]));
							PED::SET_PED_CONFIG_FLAG(iParam0->f_214[iVar0], 315, false);
							PED::_SET_REMOVE_PED_NETWORKED(iParam0->f_214[iVar0], -1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_214[iVar0]));
							func_92(&(iParam0->f_144));
							iParam0->f_2 = 1;
							func_21(&(iParam0->f_253), (1 << 26));
						}
						func_141(iParam0->f_214[iVar0]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_214[iVar0], false);
					}
					break;
			}
			break;
		case 3:
			if (func_200(iParam0))
			{
				func_201(iParam0);
			}
			break;
	}
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0->f_1)
	{
		case 2:
			if (func_9(iParam0->f_226, 0))
			{
				if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_251) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_251, false)) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_251, func_137()))
				{
					if (!func_34(iParam0->f_253, (1 << 21)))
					{
						TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, Global_35, -1, 2108, 51, 1);
						func_21(&(iParam0->f_253), (1 << 21));
					}
				}
				else
				{
					if (func_34(iParam0->f_253, (1 << 21)))
					{
						func_141(iParam0->f_226);
						func_44(&(iParam0->f_253), (1 << 21));
					}
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_250) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_250, false))
					{
						if (!func_11(&(iParam0->f_156)))
						{
							func_92(&(iParam0->f_156));
						}
						else if (func_140(&(iParam0->f_156)) > 6.0f)
						{
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0->f_257);
							if (func_9(iParam0->f_214[iVar0], 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, iParam0->f_214[iVar0], -1, 2108, 51, 1);
								func_92(&(iParam0->f_156));
							}
						}
					}
				}
			}
			break;
		case 0:
			if (func_9(iParam0->f_226, 0) && func_9(iParam0->f_214[1], 0))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_251) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_251, false))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_251, func_133()))
					{
						if (!func_34(iParam0->f_253, (1 << 21)))
						{
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, Global_35, -1, 2108, 51, 1);
							func_21(&(iParam0->f_253), (1 << 21));
						}
					}
					else
					{
						if (func_34(iParam0->f_253, (1 << 21)))
						{
							func_141(iParam0->f_226);
							func_44(&(iParam0->f_253), (1 << 21));
						}
						TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, iParam0->f_214[1], -1, 2108, 51, 1);
					}
				}
				else
				{
					func_141(iParam0->f_226);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_250) && !func_202(iParam0))
				{
					func_141(iParam0->f_226);
				}
			}
			break;
		case 3:
			if (func_9(iParam0->f_226, 0))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_250) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_250, false))
				{
					if (!func_11(&(iParam0->f_156)))
					{
						func_92(&(iParam0->f_156));
					}
					else if (func_140(&(iParam0->f_156)) > 6.0f)
					{
						iVar1 = func_203(0, iParam0->f_257, 3);
						if (func_9(iParam0->f_214[iVar1], 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, iParam0->f_214[iVar1], -1, 2108, 51, 1);
							func_92(&(iParam0->f_156));
						}
					}
				}
			}
			break;
	}
}

void func_29(int iParam0)
{
	if (*iParam0 != 51 && *iParam0 != 52)
	{
		func_204(iParam0);
		return;
	}
	if (func_34(iParam0->f_253, 4))
	{
		func_204(iParam0);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_226) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		func_204(iParam0);
		return;
	}
	if (func_167(Global_35, iParam0->f_226, 15.0f, 1))
	{
		if (!func_34(iParam0->f_253, (1 << 20)))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0->f_226, "SPECIAL_PED_GENERIC_INTERACT_FOCUS", 0.0f, 0.0f, 0.0f, 0, "MayorConvo");
			func_21(&(iParam0->f_253), (1 << 20));
		}
	}
	else
	{
		func_204(iParam0);
	}
}

void func_30(int iParam0)
{
	if (func_34(iParam0->f_253, (1 << 12)))
	{
		return;
	}
	if (*iParam0 >= 22 && *iParam0 <= 49)
	{
		if (iParam0->f_256 < 2)
		{
			if (func_205(&(iParam0->f_226), 249295937))
			{
				func_21(&(iParam0->f_253), (1 << 12));
			}
		}
	}
}

void func_31(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_206(iParam3);
	if (fParam4 == 0.0f)
	{
		if (func_167(iParam0, Global_35, 15.0f, 1))
		{
			if (!func_207(*uParam1, iParam2))
			{
				if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
				{
					func_187(uParam1, iParam2);
				}
			}
		}
		else if (func_207(*uParam1, iParam2))
		{
			AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
			func_208(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15.0f)
	{
		if (!func_207(*uParam1, iParam2))
		{
			if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
			{
				func_187(uParam1, iParam2);
			}
		}
	}
	else if (func_207(*uParam1, iParam2))
	{
		AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
		func_208(uParam1, iParam2);
	}
}

bool func_32(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_33(var uParam0)
{
	if (func_34(*uParam0, 64))
	{
		return;
	}
	if (func_15(18) == 0)
	{
		if (!func_34(*uParam0, 8))
		{
			func_21(uParam0, 8);
			func_21(uParam0, 64);
		}
	}
	else if (func_15(18) == 1)
	{
		if (!func_34(*uParam0, 16))
		{
			func_21(uParam0, 16);
			func_21(uParam0, 64);
		}
	}
	else if (func_15(18) == 2)
	{
		if (!func_34(*uParam0, 32))
		{
			func_21(uParam0, 32);
			func_21(uParam0, 64);
		}
	}
}

bool func_34(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_35(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CS_NICHOLASTIMMINS");
			break;
		case 1:
			iVar0 = joaat("P_CHAIRWICKER03X");
			break;
		case 2:
			iVar0 = joaat("A_F_M_STRTOWNFOLK_01");
			break;
		case 3:
			iVar0 = joaat("A_M_M_STRTOWNFOLK_01");
			break;
		case 4:
			iVar0 = joaat("P_CIGAR02X");
			break;
		case 5:
			iVar0 = joaat("P_MATCHSTICK01X");
			break;
		case 6:
			iVar0 = joaat("S_CS_NH_NEWSPAPER01X");
			break;
	}
	return iVar0;
}

void func_36(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_232))
	{
		iParam0->f_232 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-1807.259f, -373.538f, 160.545f, 0.0f, 0.0f, -40.7371f, 40.0f, 40.0f, 40.0f, "RandomEventBlock");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_233))
	{
		iParam0->f_233 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1808.178f, -372.9722f, 162.925f, 0.0f, 0.0f, 0.0f, 2.4f, 3.25f, 3.0f, "BarTrigger");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_234))
	{
		iParam0->f_234 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 10.0f, "Interaction");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 3.0f, "BarStayAway");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_236))
	{
		iParam0->f_236 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1805.002f, -370.4279f, 162.451f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 3.0f, "LookIKVol");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_237))
	{
		iParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 6.0f, "Focus");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_239))
	{
		iParam0->f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1808.159f, -370.5105f, 162.2462f, 0.0f, 0.0f, 0.0f, 2.370875f, 9.299027f, 3.438804f, "ScenarioBlock");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 3.0f, "BarStayAway");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_242))
	{
		iParam0->f_242 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), -1808.158f, -374.1018f, 163.1033f, 0.0f, 0.0f, 0.0f, 1.85f, 1.85f, 3.0f);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(iParam0->f_242, false);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(iParam0->f_242, true);
	}
}

int func_37(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_209(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_38(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return iVar0;
	}
	func_210(iParam0, bParam2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 2);
	iVar0 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iParam0, bParam2, 15);
	return iVar0;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return joaat("SPID_BLIND_MAN_CASSIDY");
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_211())
	{
		iVar2 = func_211();
	}
	iVar5 = func_212(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_213(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_213(iVar6) == 0)
			{
				return func_214(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_213(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_213(iVar6) == 0)
			{
				return func_214(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_428[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_428[iVar0 /*2*/] == 0)
			{
				return func_214(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_41(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_42(int iParam0)
{
	if (!func_41(iParam0))
	{
		return -1;
	}
	return func_215(iParam0);
}

int func_43(int iParam0)
{
	if (!func_41(iParam0))
	{
		return -1;
	}
	return func_216(iParam0);
}

void func_44(var uParam0, int iParam1)
{
	func_208(uParam0, iParam1);
}

bool func_45()
{
	if (func_217() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_46(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_218(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_47(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_48(var uParam0)
{
	func_49(uParam0, 0);
	func_54(uParam0, 0);
	func_219(uParam0, 1);
	func_220(uParam0, 1);
	func_221(uParam0, 0);
	func_222(uParam0, 1);
	func_223(uParam0, 1, 1, 1);
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_225(&(uParam0->f_1), (1 << 14));
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), (1 << 17));
	}
	else
	{
		func_225(&(uParam0->f_1), (1 << 17));
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 4);
	}
	else
	{
		func_224(uParam0, 4);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 8);
	}
	else
	{
		func_225(&(uParam0->f_1), 8);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 2);
	}
	else
	{
		func_225(&(uParam0->f_1), 2);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_225(&(uParam0->f_1), (1 << 11));
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 16);
	}
	else
	{
		func_225(&(uParam0->f_1), 16);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 1);
	}
	else
	{
		func_225(&(uParam0->f_1), 1);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 4);
	}
	else
	{
		func_225(&(uParam0->f_1), 4);
	}
}

void func_58(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_232))
	{
		iParam0->f_232 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-1807.259f, -373.538f, 160.545f, 0.0f, 0.0f, -40.7371f, 40.0f, 40.0f, 40.0f, "RandomEventBlock");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_233))
	{
		iParam0->f_233 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1803.973f, -372.7202f, 162.9169f, 0.0f, 0.0f, 0.0f, 2.5f, 3.5f, 3.0f, "BarTrigger");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_234))
	{
		iParam0->f_234 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 10.0f, "Interaction");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1812.402f, -366.9263f, 163.2964f, 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 3.0f, "BarStayAway");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_236))
	{
		iParam0->f_236 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1804.474f, -373.0866f, 163.7856f, 0.0f, 0.0f, 170f, 5.0f, 7.0f, 9.0f, "LookIKVolume");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_237))
	{
		iParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 6.0f, "Focus");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_239))
	{
		iParam0->f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.266f, -370.5105f, 161.9648f, 0.0f, 0.0f, 0.0f, 5.4f, 9.3f, 3.8f, "ScenarioBlock");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 3.0f, "BarStayAway");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_240))
	{
		iParam0->f_240 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1817.343f, -371.0179f, 163.4183f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 3.0f, "EndScenarioBlock");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_238))
	{
		iParam0->f_238 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BridgeBlock");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam0->f_238, -1812.224f, -389.8523f, 161.4299f, 0.0f, 0.0f, -33f, 6.0f, 52.0f, 5.0f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam0->f_238, -1779.902f, -384.4528f, 159.3328f, 0.0f, 0.0f, 47.0f, 10.0f, 50.0f, 10.0f);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_242))
	{
		iParam0->f_242 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), -1808.158f, -374.1018f, 163.1033f, 0.0f, 0.0f, 0.0f, 1.85f, 1.85f, 3.0f);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(iParam0->f_242, false);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(iParam0->f_242, true);
	}
}

void func_59(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_232))
	{
		iParam0->f_232 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-1781.978f, -387.436f, 158.14f, 0.0f, 0.0f, 0.0f, 40.0f, 40.0f, 40.0f, "RandomEventBlock");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_233))
	{
		iParam0->f_233 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 10.0f, "BarTrigger");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_234))
	{
		iParam0->f_234 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 10.0f, "Interaction");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1781.117f, -386.2386f, 158.8012f, 0.0f, 0.0f, 49.00006f, 2.280238f, 2.759403f, 5.0f, "BarStayAway");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_236))
	{
		iParam0->f_236 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1779.163f, -383.5739f, 161.6929f, 0.0f, 0.0f, 140f, 8.0f, 4.0f, 7.0f, "LookIKVolume");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_237))
	{
		iParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 6.0f, "Focus");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_239))
	{
		iParam0->f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1781.01f, -387.628f, 158.5448f, 0.0f, 0.0f, 53f, 4.0f, 4.0f, 7.0f, "ScenarioBlock");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 3.0f, "BarStayAway");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_242))
	{
		iParam0->f_242 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), -1808.158f, -374.1018f, 163.1033f, 0.0f, 0.0f, 0.0f, 1.85f, 1.85f, 3.0f);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(iParam0->f_242, false);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(iParam0->f_242, true);
	}
}

int func_60(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_61(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	if (!func_227(iParam0, 2))
	{
		return 0;
	}
	if (func_229(func_228(iParam0)))
	{
		return func_230(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_231(iParam0), 0);
}

float func_62(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_63(int iParam0)
{
	int iVar0;

	if (!func_226(iParam0))
	{
		return 0;
	}
	if (!func_229(func_228(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_60(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_60(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_60(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_60(iParam0));
	return 1;
}

void func_64(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, (1 << 19));
	}
	else
	{
		func_224(uParam0, (1 << 19));
	}
}

bool func_65(int iParam0, int iParam1)
{
	Vector3 vVar0;
	float fVar3;
	int iVar4;

	vVar0 = { func_91(iParam1) /*3*/ };
	fVar3 = func_232(iParam1);
	iVar4 = func_233(iParam1);
	iParam0->f_224 = TASK::CREATE_SCENARIO_POINT_HASH(iVar4, vVar0, fVar3, 0.0f, 0.0f, false);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam0->f_224))
	{
		return true;
	}
	return false;
}

struct<4> /*32*/ func_66(int iParam0)
{
	struct<4> /*32*/ sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = { -1807.855f, -373.9421f, 161.8663f /*3*/ };
			sVar0.f_3 = 193.945f;
			break;
		case 1:
			sVar0 = { -1807.839f, -374.7922f, 161.8436f /*3*/ };
			sVar0.f_3 = 180.0f;
			break;
		case 2:
			sVar0 = { -1807.327f, -372.7494f, 161.8703f /*3*/ };
			sVar0.f_3 = -80.87f;
			break;
		case 3:
			sVar0 = { -1781.684f, -387.2436f, 159.247f /*3*/ };
			sVar0.f_3 = -44.78f;
			break;
	}
	return sVar0;
}

int func_67(var uParam0, int iParam1, Vector3 vParam2, bool bParam5, int iParam6)
{
	if (func_60(iParam1) == 0)
	{
		return 0;
	}
	if (!func_9(*uParam0, 0))
	{
		*uParam0 = func_234(iParam1, 1, 0, 0, 1, 1);
	}
	else
	{
		if (iParam6 != 1320127128)
		{
			func_80(*uParam0, iParam6);
		}
		if (bParam5)
		{
			PERSCHAR::_0x59C7AD6FEA2AC449(func_60(iParam1), vParam2);
		}
		return 1;
	}
	return 0;
}

int func_68(var uParam0, int iParam1, Vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_69(var uParam0, var uParam1, int iParam2, Vector3 vParam3, int iParam6)
{
	if (!ENTITY::IS_MAP_ENTITY_PINNED(*uParam0))
	{
		*uParam0 = ENTITY::PIN_CLOSEST_MAP_ENTITY(iParam2, vParam3, iParam6);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(*uParam0));
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_214[iVar0]))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	bVar1 = true;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (!func_239(&(iParam0->f_214[iVar0]), func_35(func_235(iParam0, iVar0)), func_236(iParam0, iVar0), func_237(iParam0, iVar0), func_238(iParam0, iVar0), 0, 1))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_71(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "bIsSpecialPed", true);
	DECORATOR::DECOR_SET_INT(iParam0, "iSpecialPedID", iParam1);
	Global_1396257[iParam1 /*638*/].f_636 = iParam0;
}

char* func_72(int iParam0, int iParam1)
{
	if (func_240())
	{
		switch (iParam0->f_258)
		{
			case 0:
				*iParam1 = 1;
				return "INSULT_MAYOR_CONV_PART1";
			case 1:
				*iParam1 = 2;
				return "INSULT_MAYOR_CONV_PART1";
			case 2:
				*iParam1 = 2;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*iParam1 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				*iParam1 = 16;
				return "INSULT_MALE_CONV_PART1";
			case 1:
				*iParam1 = 2;
				return "INSULT_MALE_CONV_PART1";
			case 2:
				*iParam1 = 6;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*iParam1 = 18;
				return "INSULT_MALE_CONV_PART1";
			case 4:
				*iParam1 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	*iParam1 = 2;
	return "INSULT_MALE_CONV_PART1";
}

void func_73(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam2, *uParam0, fParam4, fParam3, fParam3, -1.0f, -1.0f, 180.0f, false, false, -1, -1);
}

char* func_74()
{
	return "GREET_GENERAL";
}

void func_75(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_241(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_242(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_243(iParam0->f_6, iParam0->f_5, 0);
			}
			func_244(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_245(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_76(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_77(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_246(iParam0, 13))
	{
		func_76(iParam0, 0);
	}
	else
	{
		func_247(iParam0, 0);
	}
	if (func_241(iParam0->f_6))
	{
		if (bParam2)
		{
			func_248(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_78(int iParam0, int iParam1, int iParam2)
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

void func_79(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_14(&(iParam0->f_18));
}

void func_80(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_249(iParam0, iParam1))
		{
			if (func_250(iParam0, iParam1))
			{
				if (func_251(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_252(iParam0);
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

void func_81(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_214[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_214[iVar0], true);
		}
		iVar0++;
	}
}

void func_82(int iParam0)
{
	func_253();
	func_254(-1, 0, 0, 0, 0);
	func_255(iParam0, 0, 1);
}

void func_83(int iParam0)
{
	int iVar0;

	iVar0 = func_203(0, (2 - 1), iParam0->f_249);
	iParam0->f_249 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_19(iParam0, 51);
			break;
		case 1:
			func_19(iParam0, 52);
			break;
		case 2:
			func_19(iParam0, 53);
			break;
		default:
			break;
	}
}

float func_84(int iParam0)
{
	if (func_34(iParam0->f_253, 2))
	{
		return 3.0f;
	}
	if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
	{
		return 5.0f;
	}
	return 13.0f;
}

bool func_85(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (iVar0 != 0)
	{
		if (INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0) != joaat("STR_WHORE_INT"))
		{
			return false;
		}
	}
	switch (iParam0->f_640)
	{
		case 8:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, 256))
				{
					func_19(iParam0, 22);
					iParam0->f_640 = 9;
					func_21(&(iParam0->f_254), 256);
					return true;
				}
			}
			break;
		case 9:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, (1 << 9)))
				{
					func_19(iParam0, 23);
					iParam0->f_640 = 10;
					func_21(&(iParam0->f_254), (1 << 9));
					return true;
				}
			}
			break;
		case 10:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, (1 << 10)))
				{
					func_19(iParam0, 24);
					iParam0->f_640 = 16;
					func_21(&(iParam0->f_254), (1 << 10));
					return true;
				}
			}
			break;
	}
	iVar1 = func_203(3, 8, iParam0->f_248);
	iParam0->f_248 = iVar1;
	if (iParam0->f_640 == 16)
	{
		func_196(18, func_195(iParam0));
		func_19(iParam0, 20);
		return true;
	}
	switch (iVar1)
	{
		case 3:
			if (!func_34(iParam0->f_254, (1 << 11)))
			{
				func_19(iParam0, 25);
				func_21(&(iParam0->f_254), (1 << 11));
				return true;
			}
			break;
		case 4:
			if (!func_34(iParam0->f_254, (1 << 12)))
			{
				func_19(iParam0, 26);
				func_21(&(iParam0->f_254), (1 << 12));
				return true;
			}
			break;
		case 5:
			if (!func_34(iParam0->f_254, (1 << 15)))
			{
				func_19(iParam0, 29);
				func_21(&(iParam0->f_254), (1 << 15));
				return true;
			}
			break;
		case 6:
			if (!func_34(iParam0->f_254, (1 << 16)))
			{
				func_19(iParam0, 30);
				func_21(&(iParam0->f_254), (1 << 16));
				return true;
			}
			break;
		case 7:
			if (!func_34(iParam0->f_254, (1 << 17)))
			{
				func_19(iParam0, 31);
				func_21(&(iParam0->f_254), (1 << 17));
				return true;
			}
			break;
		case 8:
			func_19(iParam0, 32);
			break;
		default:
			break;
	}
	return false;
}

void func_86(int iParam0)
{
	int iVar0;

	iVar0 = func_203(0, 2, iParam0->f_249);
	iParam0->f_249 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_19(iParam0, 54);
			break;
		case 1:
			func_19(iParam0, 55);
			break;
		case 2:
			func_19(iParam0, 56);
			break;
		default:
			break;
	}
}

bool func_87(int iParam0)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (iVar0 != 0)
	{
		if (INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0) != joaat("STR_WHORE_INT"))
		{
			return false;
		}
	}
	switch (iParam0->f_640)
	{
		case 0:
			if (func_62(Global_35, iParam0->f_226, 1, 1) >= 14.0f)
			{
				if (!func_34(iParam0->f_254, 1))
				{
					func_19(iParam0, 37);
					func_21(&(iParam0->f_254), 1);
					return true;
				}
				func_256(iParam0, 1);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return false;
		case 1:
			if (func_62(Global_35, iParam0->f_226, 1, 1) >= 14.0f)
			{
				if (!func_34(iParam0->f_254, 2))
				{
					func_19(iParam0, 38);
					func_21(&(iParam0->f_254), 2);
					return true;
				}
				func_256(iParam0, 2);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return false;
		case 2:
			if (func_62(Global_35, iParam0->f_226, 1, 1) >= 14.0f)
			{
				if (!func_34(iParam0->f_254, 4))
				{
					func_19(iParam0, 41);
					func_21(&(iParam0->f_254), 4);
					return true;
				}
				func_256(iParam0, 3);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return false;
		case 3:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, 8))
				{
					func_19(iParam0, 36);
					func_21(&(iParam0->f_254), 8);
					return true;
				}
				else
				{
					func_256(iParam0, 4);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 4:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, 16))
				{
					func_19(iParam0, 40);
					func_21(&(iParam0->f_254), 16);
					return true;
				}
				else
				{
					func_256(iParam0, 5);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 5:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, 32))
				{
					func_19(iParam0, 39);
					func_21(&(iParam0->f_254), 32);
					return true;
				}
				else
				{
					func_256(iParam0, 6);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 6:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, 64))
				{
					func_19(iParam0, 35);
					func_21(&(iParam0->f_254), 64);
					return true;
				}
				else
				{
					func_256(iParam0, 16);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 16:
			func_196(18, func_195(iParam0));
			func_19(iParam0, 13);
			return true;
	}
	return false;
}

bool func_88(int iParam0)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (iVar0 != 0)
	{
		if (INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0) != joaat("STR_WHORE_INT"))
		{
			return false;
		}
	}
	switch (iParam0->f_640)
	{
		case 11:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, (1 << 18)))
				{
					func_19(iParam0, 43);
					iParam0->f_640 = 12;
					func_21(&(iParam0->f_254), (1 << 18));
					return true;
				}
			}
			break;
		case 12:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, (1 << 19)))
				{
					func_19(iParam0, 45);
					iParam0->f_640 = 13;
					func_21(&(iParam0->f_254), (1 << 19));
					return true;
				}
			}
			break;
		case 13:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, (1 << 20)))
				{
					func_19(iParam0, 44);
					iParam0->f_640 = 14;
					func_21(&(iParam0->f_254), (1 << 20));
					return true;
				}
			}
			break;
		case 14:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, (1 << 21)))
				{
					func_19(iParam0, 46);
					iParam0->f_640 = 15;
					func_21(&(iParam0->f_254), (1 << 21));
					return true;
				}
			}
			break;
		case 15:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14.0f)
			{
				if (!func_34(iParam0->f_254, (1 << 22)))
				{
					func_19(iParam0, 47);
					iParam0->f_640 = 16;
					func_21(&(iParam0->f_254), (1 << 22));
					return true;
				}
			}
			break;
	}
	if (iParam0->f_640 == 16)
	{
		func_196(18, func_195(iParam0));
		func_257(iParam0);
		func_19(iParam0, 62);
		return true;
	}
	if (!func_34(iParam0->f_254, (1 << 23)))
	{
		func_19(iParam0, 49);
		func_21(&(iParam0->f_254), (1 << 23));
		return true;
	}
	return false;
}

bool func_89(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false);
	bVar1 = ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return true;
	}
	bVar3 = ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0);
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return false;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return false;
}

bool func_90(int iParam0, var uParam1, int iParam2)
{
	if (!func_9(iParam0->f_226, 0))
	{
		return false;
	}
	if (PED::IS_PED_USING_THIS_SCENARIO(iParam0->f_226, *uParam1))
	{
		return true;
	}
	if (!func_139(iParam0->f_226, joaat("SCRIPT_TASK_USE_SCENARIO_POINT")))
	{
		if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_242))
		{
			VOLUME::DELETE_VOLUME(iParam0->f_242);
		}
		TASK::TASK_USE_SCENARIO_POINT(iParam0->f_226, *uParam1, 0, iParam2, true, false, 0, false, -1.0f, false);
		func_141(iParam0->f_226);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 448, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 153, false);
		AUDIO::STOP_PED_SPEAKING(iParam0->f_226, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_226, false);
		PED::SET_PED_KEEP_TASK(iParam0->f_226, true);
	}
	return false;
}

Vector3 func_91(int iParam0)
{
	Vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -1817.09f, -370.825f, 162.296f /*3*/ };
			break;
		case 1:
			vVar0 = { -1796.195f, -432.0646f, 154.8438f /*3*/ };
			break;
		case 2:
			vVar0 = { -1830.637f, -411.2434f, 161.4105f /*3*/ };
			break;
		case 3:
			vVar0 = { -1820.684f, -374.7641f, 165.4969f /*3*/ };
			break;
	}
	return vVar0;
}

void func_92(var uParam0)
{
	func_168(uParam0, 0.0f);
}

void func_93(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

void func_94(int iParam0, bool bParam1, var uParam2, Vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11, float fParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<10> /*80*/ sVar0;
	struct<10> /*80*/ sVar11;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		sVar0.f_0 = 2;
		sVar0.f_4 = sParam6;
		sVar0.f_5 = iParam7;
		sVar0.f_7 = iParam16;
		sVar0.f_9 = iParam17;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, bParam1, &sVar0, iParam8, fParam9, fParam10, fParam11, iParam13, fParam12);
	}
	else if (!func_258(vParam3, 0.0f, 0.0f, 0.0f))
	{
		sVar11.f_0 = 0;
		sVar11.f_1 = { vParam3 /*3*/ };
		sVar11.f_7 = iParam16;
		sVar11.f_9 = iParam17;
		sVar11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, bParam1, &sVar11, iParam8, fParam9, fParam10, fParam11, iParam13, fParam12);
	}
	if (bParam15)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		func_259(iParam0, bParam1, iParam14);
	}
}

void func_95(int iParam0, bool bParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> /*56*/ sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), bParam1, -1.0f);
		sVar0.f_1 = 1050253722;
		sVar0.f_2 = 1067030938;
		sVar0.f_5 = -1082130432;
		sVar0.f_6 = -1082130432;
		sVar0.f_3 = iParam16;
		sVar0.f_1 = fParam14;
		sVar0.f_2 = fParam15;
		sVar0.f_4 = fParam17;
		sVar0.f_5 = iParam20;
		sVar0.f_6 = iParam21;
		if (bParam8)
		{
			sVar0.f_0 = 0;
		}
		else
		{
			sVar0.f_0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &sVar0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, bParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, fParam12, fParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_259(iParam0, bParam1, iParam18);
	}
}

void func_96(char* sParam0)
{
	strcpy_s(sParam0, 64, "walk_and_talk");
	strcpy_s(&(sParam0->f_8), 64, "WALK_AND_TALK_REQUEST");
	CAM::_LOAD_CAMERA_DATA_DICT(sParam0);
}

void func_97(char* sParam0, var uParam1)
{
	var uVar0[1];

	if (CAM::_IS_CAM_DATA_DICT_LOADED(sParam0) && !CAM::_IS_CAMERA_AVAILABLE(sParam0))
	{
		CAM::_CAM_CREATE(sParam0);
		uVar0[0] = uParam1;
		CAM::_0xFEB8646818294C75(sParam0, &uVar0);
	}
}

void func_98(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::GET_PED_CROUCH_MOVEMENT(iParam0))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
		}
		func_260(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

char* func_99()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_9_mainstreetwalkntalk";
}

char* func_100()
{
	return "pbl_Enter01";
}

char* func_101()
{
	return "pbl_P1_Loop01";
}

char* func_102()
{
	return "pbl_P2_Loop01";
}

char* func_103()
{
	return "pbl_P3_Loop01";
}

char* func_104()
{
	return "pbl_P4_Loop01";
}

char* func_105()
{
	return "pbl_P4_Loop02";
}

char* func_106()
{
	return "pbl_P4_Loop03";
}

char* func_107()
{
	return "pbl_P4_Loop04";
}

char* func_108()
{
	return "pbl_P4_Loop05";
}

char* func_109()
{
	return "pbl_P4_Loop06";
}

char* func_110()
{
	return "pbl_P4_Loop07";
}

char* func_111()
{
	return "pbl_Base_Reset";
}

char* func_112()
{
	return "pbl_Exit01";
}

bool func_113(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (!func_9(iParam0->f_226, 0))
	{
		return false;
	}
	iVar0 = iParam1;
	iVar1 = func_233(iVar0);
	if (iVar0 != -1)
	{
		if (PED::IS_PED_USING_SCENARIO_HASH(iParam0->f_226, iVar1))
		{
			return true;
		}
	}
	else if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_226))
	{
		return true;
	}
	if (!func_139(iParam0->f_226, joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")))
	{
		if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_242))
		{
			VOLUME::DELETE_VOLUME(iParam0->f_242);
		}
		vVar2 = { func_91(iVar0) /*3*/ };
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0->f_226, vVar2, 5.0f, -1, false, false, true, false);
		func_141(iParam0->f_226);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 448, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 153, false);
		AUDIO::STOP_PED_SPEAKING(iParam0->f_226, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_226, false);
		PED::SET_PED_KEEP_TASK(iParam0->f_226, true);
	}
	return false;
}

char* func_114()
{
	return "pbl_Exit02";
}

char* func_115()
{
	return "pbl_P1_Loop01";
}

char* func_116()
{
	return "pbl_P2_Loop01";
}

char* func_117()
{
	return "pbl_P2_Loop02";
}

char* func_118()
{
	return "pbl_P2_Loop03";
}

char* func_119()
{
	return "pbl_P2_Loop04";
}

char* func_120()
{
	return "pbl_T04_Loop01";
}

char* func_121()
{
	return "pbl_T05_Loop01";
}

char* func_122()
{
	return "pbl_base_reset";
}

char* func_123()
{
	return "pbl_P1_Loop01";
}

char* func_124()
{
	return "pbl_P2_loop01";
}

char* func_125()
{
	return "pbl_P3_loop01";
}

char* func_126()
{
	return "pbl_P4_loop01";
}

char* func_127()
{
	return "pbl_Part01";
}

char* func_128()
{
	return "pbl_Part02";
}

char* func_129()
{
	return "pbl_IG5_Loop01";
}

void func_130(var uParam0, var uParam1, var uParam2)
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

	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam1))
	{
		*uParam1 = ITEMSET::CREATE_ITEMSET(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_GET_ENTITIES_IN_VOLUME(*uParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar1, *uParam1);
				}
				iVar4++;
			}
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = ITEMSET::GET_ITEMSET_SIZE(*uParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, *uParam1);
				iVar6 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar5);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar6, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

void func_131(bool bParam0)
{
	bool bVar0;

	bVar0 = func_261();
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (bParam0)
		{
			PATHFIND::_0x6DAD6630AE4A74CB(bVar0, 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, bVar0, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(bVar0, Global_35, true);
		}
		else
		{
			PATHFIND::_0x6DAD6630AE4A74CB(bVar0, 0);
		}
	}
}

bool func_132(int iParam0, Vector3 vParam1, float fParam4, int iParam5)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
	func_262();
	func_263();
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
	if (!func_139(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
	{
		if (func_62(Global_35, iParam0, 1, 1) < func_264(iParam0, vParam1, 1))
		{
			if (PED::IS_PED_FACING_PED(Global_35, iParam0, 20.0f))
			{
				return true;
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, 0, -1.0f, -1.0f, -1.0f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
				PED::SET_PED_KEEP_TASK(Global_35, true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
	}
	if (!func_265(Global_35, vParam1, (ENTITY::GET_ENTITY_HEADING(iParam0) - 180.0f), fParam4, 45.0f, 1))
	{
		if (!func_139(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam1, 1.0f, iParam5, (ENTITY::GET_ENTITY_HEADING(iParam0) - 180.0f), fParam4, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, 0, -1.0f, -1.0f, -1.0f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
			PED::SET_PED_KEEP_TASK(Global_35, true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

char* func_133()
{
	return "pbl_Loop01";
}

void func_134(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_246(iParam0, 4))
		{
			func_248(&(iParam0->f_6), 1, 1);
			func_76(iParam0, 4);
		}
	}
	else if (func_246(iParam0, 4))
	{
		func_247(iParam0, 4);
		func_76(iParam0, 14);
	}
}

char* func_135()
{
	return "pbl_Loop01";
}

bool func_136(int* iParam0, bool bParam1)
{
	if (!bParam1 || func_241(iParam0->f_6))
	{
		return func_246(iParam0, 4);
	}
	return false;
}

char* func_137()
{
	return "pbl_Loop01";
}

char* func_138()
{
	return "pbl_Loop01";
}

bool func_139(int iParam0, int iParam1)
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

float func_140(var uParam0)
{
	if (!func_11(uParam0))
	{
		return 0.0f;
	}
	if (func_174(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_175() - uParam0->f_1);
}

void func_141(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

void func_142(bool bParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(bParam0, 0);
	PED::_0x9E66708B2B41F14A(bParam0, -1);
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(bParam0);
	}
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 43, false);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(bParam0, PLAYER::PLAYER_ID(), 6);
	}
}

void func_143(bool bParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(bParam0, 0);
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(bParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(bParam0, -1);
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(bParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(bParam0);
	}
}

void func_144(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

bool func_145(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_3 = iParam2;
	sVar0.f_6 = iParam5;
	sVar0.f_1 = uParam4;
	sVar0.f_4 = iParam3;
	return func_266(iParam0, &sVar0);
}

void func_146(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

void func_147(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), iParam0, 7, 0, true);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), iParam0, 3, 2, true);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), iParam0, 4, 2, true);
}

void func_148(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_149(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_250) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_250, false))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_250, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_251) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_251, false))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_251, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_252) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_252, false))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_252, 0);
	}
}

void func_150(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_20))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_20);
	}
	if (func_11(&(uParam0->f_13)))
	{
		func_14(&(uParam0->f_13));
	}
}

void func_151(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_267(0, -1);
	}
	func_268();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2--;
	Global_1935183.f_28 = 0;
}

void func_152(int iParam0, int iParam1)
{
	if (!func_41(iParam0))
	{
		return;
	}
	func_269(iParam0, iParam1);
}

void func_153(int iParam0, int iParam1)
{
	if (!func_41(iParam0))
	{
		return;
	}
	func_270(iParam0, iParam1);
}

void func_154(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			return;
		}
		if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
		{
			return;
		}
	}
	EVENT::REMOVE_SHOCKING_EVENT(*uParam1);
}

bool func_155(int iParam0, bool bParam1)
{
	if (func_217() != -1)
	{
		return false;
	}
	if (!func_226(iParam0))
	{
		return false;
	}
	if (!func_271(iParam0) && bParam1)
	{
		return false;
	}
	return func_227(iParam0, 1);
}

void func_156(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_226(iParam0))
	{
		return;
	}
	if (!func_227(iParam0, 1))
	{
		return;
	}
	if (!func_227(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_271(iParam0)) && func_272(iParam0))
	{
		return;
	}
	func_273(iParam0, 1);
	func_274(iParam0);
	if (func_229(func_228(iParam0)))
	{
		iVar0 = func_60(iParam0);
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
		func_273(iParam0, 16);
	}
	if (func_227(iParam0, 128) && !bParam3)
	{
		func_275(iParam0, 0);
	}
}

int func_157(var uParam0)
{
	if (ENTITY::IS_MAP_ENTITY_PINNED(*uParam0))
	{
		ENTITY::_UNPIN_MAP_ENTITY(*uParam0);
		return 0;
	}
	if (ENTITY::IS_MAP_ENTITY_PINNED(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_158(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_250))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_250);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_251))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_251);
	}
	func_201(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_226))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_226, 0.0f);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_232))
	{
		func_276(iParam0->f_232);
		VOLUME::DELETE_VOLUME(iParam0->f_232);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_235))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam0->f_235);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam0->f_235);
		VOLUME::DELETE_VOLUME(iParam0->f_235);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_233))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam0->f_233);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam0->f_233);
		VOLUME::DELETE_VOLUME(iParam0->f_233);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_236))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_236);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_241))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_241);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_239))
	{
		func_277(&(iParam0->f_644), iParam0->f_239, 0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_240))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_240);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_238))
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(iParam0->f_238, 6, 0);
		VOLUME::DELETE_VOLUME(iParam0->f_238);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_242))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_242);
	}
}

bool func_159()
{
	int iVar0;

	if (func_217() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_278(Global_1392915[iVar0 /*12*/].f_4))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		return false;
	}
	return false;
}

int func_160(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_161()
{
	return Global_1310750.f_16077 != 0;
}

bool func_162(var uParam0, int iParam1)
{
	return func_279(*uParam0, iParam1);
}

bool func_163(var uParam0, int iParam1, var uParam2)
{
	switch (*uParam2)
	{
		case 0:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
			{
				return true;
			}
			else
			{
				*uParam2 = 1;
			}
			break;
		case 1:
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(func_280(iParam1), 0, func_165(iParam1), false, true);
			*uParam2 = 2;
			break;
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
			{
				*uParam2 = 3;
			}
			break;
		case 3:
			*uParam2 = 0;
			return true;
	}
	return false;
}

bool func_164(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (*uParam1)
	{
		case 0:
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true))
			{
				*uParam1 = 1;
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
			{
				return true;
			}
			break;
		case 1:
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			*uParam1 = 2;
			break;
		case 2:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
			{
				*uParam1 = 3;
			}
			break;
		case 3:
			func_281(uParam0, iParam2, iParam3);
			*uParam1 = 4;
			break;
		case 4:
			*uParam1 = 0;
			return true;
	}
	return false;
}

char* func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_3();
		case 1:
			return func_6();
		case 2:
			return func_5();
		case 3:
			return func_133();
		case 4:
			return func_137();
		case 5:
			return "";
	}
	return "";
}

var func_166()
{
	return Global_1899515;
}

bool func_167(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_168(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_175() - fParam1);
	func_282(uParam0, 1);
	func_283(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_169(int iParam0)
{
	return iParam0 != -15;
}

void func_170(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_166();
}

bool func_171(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 49, true);
		return true;
	}
	return false;
}

bool func_172(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

bool func_173(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_174(var uParam0)
{
	return func_173(*uParam0, 2);
}

float func_175()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_176(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_177(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_178(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_278(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_179(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_284(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_180(int iParam0)
{
	int iVar0;

	iVar0 = func_285();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case joaat("HIGHPRESSURE"):
				case joaat("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case joaat("OVERCAST"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("SNOWLIGHT"):
				case joaat("CLOUDS"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("THUNDER"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("SHOWER"):
				case joaat("SNOW"):
				case joaat("HIGHPRESSURE"):
				case joaat("SLEET"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("RAIN"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case joaat("FOG"):
				case joaat("MISTY"):
					return true;
			}
			break;
	}
	return false;
}

int func_181(var uParam0, var uParam1, float fParam2, var uParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) /*3*/ };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) /*3*/ };
	if (func_286(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_182(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) /*3*/ };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) /*3*/ };
	if (!func_287(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1.0f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) /*3*/ };
		if (!func_288(iVar1, 0))
		{
			func_289(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_183(var uParam0)
{
	if (!func_11(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_174(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_290() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

bool func_184()
{
	return Global_1392040.f_6;
}

bool func_185()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

int func_186(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("WORLD_HUMAN_NEWSPAPER_PUTDOWN");
			break;
		case 1:
			iVar0 = joaat("WORLD_HUMAN_SMOKE_CIGAR");
			break;
		case 2:
			iVar0 = joaat("WORLD_HUMAN_LEAN_RAILING");
			break;
		case 3:
			iVar0 = joaat("WORLD_HUMAN_SMOKE_CIGAR");
			break;
	}
	return iVar0;
}

void func_187(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_188(int iParam0)
{
	if (iParam0->f_1 == 2)
	{
		return 63;
	}
	else if (iParam0->f_1 == 0)
	{
		return 60;
	}
	else if (iParam0->f_1 == 3)
	{
		return 66;
	}
	return -1;
}

bool func_189(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_291(uParam2, 1, iVar0);
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
			if (func_292(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_293(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_294(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_295(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_296(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_297(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & (1 << 19) == 0))
		{
			if (!uParam2->f_1 & (1 << 14) != 0)
			{
				*uParam3 = (1 << 14);
				func_293(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_298(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_299(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_293(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_300(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_293(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_301(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_301(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_293(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_302(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & (1 << 18) != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20.0f)
			{
				if (func_303(&iParam0, uParam2))
				{
					*uParam3 = (1 << 12);
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_304(uParam2, 4000))
				{
					if (func_305(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) & func_306(uParam2, iParam0) && func_307(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_293(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4.0f)
			{
				if (func_305(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) & func_306(uParam2, iParam0) && func_307(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & (1 << 17) == 0)
						{
							if (func_308(iParam0, Global_1935630.f_41))
							{
								func_309();
								*uParam3 = 2;
								func_293(iParam0, uParam2, *uParam3);
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
						if (func_308(iParam0, Global_1935630.f_41))
						{
							func_309();
							*uParam3 = 2;
							func_293(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10.0f)
			{
				if (func_310(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_290() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_309();
						*uParam3 = 2;
						func_293(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & (1 << 17) == 0)
				{
					if (func_311())
					{
						if (func_308(iParam0, Global_1935630.f_42))
						{
							func_309();
							*uParam3 = 2;
							func_293(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & (1 << 10) != 0)
		{
			if (func_312(uParam2, iParam0))
			{
				*uParam3 = (1 << 10);
				func_293(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & (1 << 11) != 0)
			{
				if (func_313(iParam0, iParam1, uParam2))
				{
					*uParam3 = (1 << 11);
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_314(iParam0, uParam2))
					{
						*uParam3 = (1 << 13);
						func_293(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_315(iParam0, uParam2))
				{
					*uParam3 = (1 << 15);
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12.0f)
		{
			if (*uParam2 & (1 << 20) != 0)
			{
				if (func_316(uParam2, 4000))
				{
					if (func_317(&iParam0, uParam2))
					{
						*uParam3 = (1 << 9);
						func_293(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & (1 << 10) != 0)
			{
				if (func_318(iParam0, uParam2))
				{
					*uParam3 = (1 << 16);
					uParam2->f_4 = 0;
					func_293(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_319(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_293(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_190(int* iParam0)
{
	func_320(iParam0, &(iParam0->f_21));
}

bool func_191()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_321())
	{
		return true;
	}
	return false;
}

bool func_192(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_241(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_322(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

int func_193(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_323(&iVar0);
	if (func_279(iVar0, 16) && !bParam15)
	{
		iParam9 |= (1 << 23);
	}
	iVar1 = func_197(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_279(iVar0, (1 << 27)))
	{
		func_324(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_325(558))
				{
					func_326(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_194(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_207(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_328(func_327(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_329(func_327(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_166();
	func_187(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

int func_195(int iParam0)
{
	int iVar0;

	switch (iParam0->f_1)
	{
		case 2:
			iVar0 = 1;
			break;
		case 0:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_196(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

int func_197(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_323(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & (1 << 19) != false;
		bVar5 = iParam8 & (1 << 24) != false;
		bVar6 = iParam8 & (1 << 24) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_330(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_92(&(iParam1->f_13));
		}
		if (func_331(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_332(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_197(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_333(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & (1 << 25) != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_334(*uParam0, 1, 1);
						}
					}
					else if (func_335(iParam1, 22))
					{
						func_334(*uParam0, 0, 1);
					}
				}
				if (func_336(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_337(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_338(iParam8);
					if (func_339(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_340(uParam3);
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
					func_341(iParam1, uParam3, fVar8);
					if (func_342(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_343(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_344(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_336(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_345(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_339(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_337(uParam0, func_336(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_338(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_343(uParam3, 0, 0, 1, 1);
					}
					func_346(iParam1, 1);
				}
				func_341(iParam1, uParam3, fVar8);
				if (func_344(uParam0, iParam1, fParam4, bVar6))
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
			func_320(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_198(int iParam0)
{
	func_44(&(iParam0->f_253), 8);
	func_44(&(iParam0->f_253), 16);
	func_44(&(iParam0->f_253), 32);
	func_44(&(iParam0->f_253), 64);
}

bool func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0->f_1;
	switch (iVar0)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(&(iParam0->f_214[iVar1]), func_347(iVar1), func_348(iVar1), 20000, 1.0f, 360.0f))
				{
					iVar2++;
					iParam0->f_219[iVar1] = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_347(iVar1), func_350(iVar1), 0.25f, 0, false);
					TASK::_SET_SCENARIO_POINT_FLAG(iParam0->f_219[iVar1], 16, true);
					TASK::TASK_USE_SCENARIO_POINT(iParam0->f_214[iVar1], iParam0->f_219[iVar1], 0, -1, false, true, func_350(iVar1), false, -1.0f, false);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(&(iParam0->f_214[iVar1]), func_351(iVar1), func_352(iVar1), 20000, 1056964608, 1092616192))
				{
					iVar2++;
					TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iParam0->f_214[iVar1], func_353(iVar1), -1, true, 0, -1.0f, false);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(&(iParam0->f_214[iVar1]), func_354(iVar1), func_355(iVar1), 20000, 1056964608, 1092616192))
				{
					iVar2++;
					TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iParam0->f_214[iVar1], func_356(iVar1), -1, true, 0, -1.0f, false);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
	}
	if (iVar2 == iParam0->f_257)
	{
		return true;
	}
	return false;
}

bool func_200(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (func_9(iParam0->f_214[iVar0], 0))
		{
			if (!PED::IS_PED_FLEEING(iParam0->f_214[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_201(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_214[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_214[iVar0]))
		{
			if (TASK::PED_HAS_USE_SCENARIO_TASK(iParam0->f_214[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iParam0->f_214[iVar0], true, false);
			}
			func_141(iParam0->f_214[iVar0]);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_214[iVar0], false);
			PED::_SET_REMOVE_PED_NETWORKED(iParam0->f_214[iVar0], -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_214[iVar0]));
		}
		iVar0++;
	}
}

bool func_202(int iParam0)
{
	if (func_9(iParam0->f_226, 0))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_250))
		{
			if (((((((((ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_250, func_100()) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_250, func_104())) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_250, func_105())) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_250, func_106())) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_250, func_107())) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_250, func_108())) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_250, func_109())) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_250, func_110())) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_250, func_112())) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_250, func_114()))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

int func_203(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_357())
		{
			iVar0--;
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0--;
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_358(func_357(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_204(int iParam0)
{
	if (func_34(iParam0->f_253, (1 << 20)))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorConvo");
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0->f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0.0f, 0.0f, 0.0f, 0, "MayorBubble");
		func_44(&(iParam0->f_253), (1 << 20));
	}
}

bool func_205(var uParam0, int iParam1)
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam1, *uParam0);
		return true;
	}
	return false;
}

char* func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

bool func_207(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

int func_209(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_359(vParam0))
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
		if (func_360(vParam0))
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
	func_361(iVar0, bParam8);
	return iVar0;
}

void func_210(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam1)
	{
		iVar0 |= (1 << 19);
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

int func_211()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	return iParam2 & 31 | BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) | BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

int func_213(int iParam0)
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

int func_214(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_362(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_211())
	{
		return -1;
	}
	iVar0 = func_212(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_363(iVar1, 0);
	func_364(iVar1, 0);
	func_269(iVar1, 0);
	func_270(iVar1, 0);
	func_365(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_366(iVar1, iParam4);
	}
	return iVar1;
}

int func_215(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

int func_216(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

int func_217()
{
	return Global_1572887.f_12;
}

bool func_218(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			strcpy_s(&((uParam0[uParam0->f_97 /*4*/])->f_1), 24, sParam2);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_219(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 256);
	}
	else
	{
		func_225(&(uParam0->f_1), 256);
	}
}

void func_220(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 16);
	}
	else
	{
		func_224(uParam0, (1 << 26));
		func_224(uParam0, 16);
	}
}

void func_221(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 128);
	}
	else
	{
		func_225(&(uParam0->f_1), 128);
	}
}

void func_222(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 256);
	}
	else
	{
		func_224(uParam0, 256);
	}
}

void func_223(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_225(uParam0, (1 << 28));
	}
	else
	{
		func_224(uParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_225(uParam0, (1 << 30));
	}
	else
	{
		func_224(uParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_225(uParam0, (1 << 29));
	}
	else
	{
		func_224(uParam0, (1 << 29));
	}
}

void func_224(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_225(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_226(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_227(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return false;
	}
	if (!func_226(iParam0))
	{
		return false;
	}
	return Global_24887[iParam0 /*2*/] & iParam1 != 0;
}

int func_228(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_229(int iParam0)
{
	return iParam0 != 0;
}

int func_230(int iParam0)
{
	int iVar0;

	iVar0 = func_60(iParam0);
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

int func_231(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1895087[iParam0 /*3*/]);
}

float func_232(int iParam0)
{
	float fVar0;

	fVar0 = 0.0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 179.6551f;
			break;
	}
	return fVar0;
}

int func_233(int iParam0)
{
	int iVar0;

	iVar0 = joaat("WORLD_HUMAN_LEAN_RAILING");
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("WORLD_HUMAN_NEWSPAPER_PUTDOWN");
			break;
		case 1:
			iVar0 = joaat("WORLD_HUMAN_SMOKE_CIGAR");
			break;
		case 2:
			iVar0 = joaat("WORLD_HUMAN_LEAN_RAILING");
			break;
		case 3:
			iVar0 = joaat("WORLD_HUMAN_SMOKE_CIGAR");
			break;
	}
	return iVar0;
}

int func_234(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_367(iParam0, 1))
	{
		return 0;
	}
	if (func_229(func_228(iParam0)))
	{
		iVar1 = func_60(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1))
			{
				PERSCHAR::_REVIVE_PERSCHAR(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(iVar1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_271(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_368(iParam0, 1);
	func_369(iParam0);
	if (bParam3)
	{
		func_368(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_235(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_370(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_371(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_372(iParam1);
	}
	return 3;
}

Vector3 func_236(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_347(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_351(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_354(iParam1);
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_237(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_348(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_352(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_355(iParam1);
	}
	return 0.0f;
}

int func_238(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_373(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_374(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_375(iParam1);
	}
	return 1;
}

bool func_239(var uParam0, int iParam1, Vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_376(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_376(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (PED::IS_PED_READY_TO_RENDER(*uParam0))
	{
		return true;
	}
	return false;
}

bool func_240()
{
	if (func_217() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_241(int iParam0)
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

void func_242(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_243(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_244(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (bParam1)
	{
		func_378(iParam0, 4);
		func_379(iVar0, 1);
		func_380(iVar0, 1);
	}
	else
	{
		func_381(iParam0, 4);
		func_380(iVar0, 0);
	}
}

void func_245(int* iParam0, char* sParam1)
{
	if (func_241(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_243(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_247(iParam0, 1);
}

bool func_246(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_247(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_248(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_241(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_377(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_382(iVar0);
	*uParam0 = 0;
}

bool func_249(int iParam0, int iParam1)
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

bool func_250(int iParam0, int iParam1)
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

bool func_251(int iParam0, int iParam1)
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
	if (!func_249(iParam0, iVar0))
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

void func_252(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_253()
{
	if (!func_383(Global_1327479))
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
	func_384(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_254(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_385() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_383(iVar1) && !func_386(iVar1, iParam2)) && (!bParam3 || !func_387(iVar1))) && (!bParam4 || !func_388(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_389(iVar0);
			}
		}
		iVar0++;
	}
}

void func_255(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_390(iParam0, iParam1, bParam2);
}

void func_256(int iParam0, int iParam1)
{
	iParam0->f_640 = iParam1;
}

void func_257(int iParam0)
{
	if (func_155(483, 0))
	{
		func_156(483, 0, 1, 0, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_250))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_250, "internal_loop", true, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_250, "internal_loop_end", true, false);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_251))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_251, "internal_loop", true, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_251, "internal_loop_end", true, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_226))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_226, 0.0f);
		PED::_SET_REMOVE_PED_NETWORKED(iParam0->f_226, -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_226));
	}
	func_158(iParam0);
}

bool func_258(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_259(int iParam0, bool bParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(bParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, bParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

void func_260(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
	if (bParam4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	}
	func_391(0);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			}
		}
	}
}

bool func_261()
{
	return Global_1900383.f_393;
}

void func_262()
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
	CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
	if (Global_1935689.f_1)
	{
		func_392(0);
	}
}

void func_263()
{
	Global_1905944.f_5695 = 1;
}

float func_264(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_265(int iParam0, Vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_393(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_393(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2.0f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

bool func_266(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_267(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_394(&Global_0, 8);
	}
	if (!func_395() || func_217() != -1)
	{
		return;
	}
	func_394(&Global_0, 1);
}

void func_268()
{
	AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
}

void func_269(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_270(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

bool func_271(int iParam0)
{
	if (!func_226(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_272(int iParam0)
{
	if (!func_226(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_273(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return;
	}
	if (!func_226(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= Global_24887[iParam0 /*2*/] & iParam1;
}

void func_274(int iParam0)
{
	int iVar0;

	if (!func_226(iParam0))
	{
		return;
	}
	iVar0 = func_230(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_275(int iParam0, bool bParam1)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	if (!func_227(iParam0, 2))
	{
		return 0;
	}
	if (func_228(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_60(iParam0)))
	{
		return 1;
	}
	if (func_227(iParam0, 1) && !bParam1)
	{
		func_368(iParam0, 128);
		return 1;
	}
	func_273(iParam0, 129);
	func_274(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_60(iParam0));
	func_396(iParam0, 0);
	return 1;
}

void func_276(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	func_397(vVar0, 0);
}

void func_277(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam1);
	POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam1);
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

bool func_278(int iParam0)
{
	int iVar0;

	iVar0 = func_398(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_279(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

char* func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_399();
		case 1:
			return func_400();
		case 2:
			return func_401();
		case 3:
			return func_402();
		case 4:
			return func_403();
		case 5:
			return func_99();
	}
	return "";
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "internal_loop", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "internal_loop_end", false, false);
	switch (iParam1)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_404(), func_405(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_chaireagle01x", iParam2->f_228, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_cigar02x", iParam2->f_229, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_matchstick01x", iParam2->f_230, 0);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_406(), func_407(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "P_CS_NEWSPAPER_02X", iParam2->f_231, 0);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_408(), func_409(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_410(), func_411(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_chaireagle_01x", iParam2->f_228, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_cigar02x", iParam2->f_229, 0);
			if (!func_45())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JOHN", Global_35, 0);
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_412(), func_413(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "P_CS_NEWSPAPER_02X", iParam2->f_231, 0);
			if (!func_45())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JOHN", Global_35, 0);
			}
			break;
		case 5:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "CS_NicholasTimmins", iParam2->f_226, 0);
			if (!func_45())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JOHN", Global_35, 0);
			}
			break;
	}
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_283(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

int func_284(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_414(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

var func_285()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::GET_CURR_WEATHER_STATE(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_286(var uParam0, Vector3 vParam1, float fParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_GET_ENTITIES_NEAR_POINT(vParam1, fParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

bool func_287(var uParam0, var uParam1, Vector3 vParam2, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*uParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*uParam1)))
				{
					if (func_415(Global_35, *uParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

bool func_288(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

void func_289(int iParam0, Vector3 vParam1, float fParam4)
{
	if (!func_139(*iParam0, joaat("SCRIPT_TASK_FLEE")))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

int func_290()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_291(var uParam0, bool bParam1, int iParam2)
{
	func_416(iParam2);
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
		uParam0->f_13 = func_417(0);
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
							func_225(uParam0, (1 << 25));
						}
					}
					else if (!*uParam0 & (1 << 13) != 0)
					{
						if (func_418(1))
						{
							func_225(uParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_418(1) || *uParam0 & (1 << 13) != 0))
				{
					func_224(uParam0, (1 << 25));
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
			if (func_419(uParam0))
			{
				uParam0->f_15 = func_290();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_290() - uParam0->f_15) > 500)
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
	func_420(uParam0);
}

bool func_292(int iParam0, var uParam1)
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
			if (!func_421(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_422(iParam0, iVar2) <= func_423(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_293(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		uParam1->f_10 = iParam0;
	}
	if (func_424(iParam2, 1, 1, 1, 0))
	{
		func_225(uParam1, (1 << 11));
	}
	uParam1->f_16 = iParam2;
	func_425(uParam1, 1);
	func_426();
}

bool func_294(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_427(iParam0, !*uParam1 & (1 << 28) != 0, !*uParam1 & (1 << 29) != 0, !*uParam1 & (1 << 30) != 0, 0, 0))
		{
			if (uParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (uParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_428(uParam1);
			if (func_429(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_430(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_425(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_425(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_295(int iParam0, int iParam1, var uParam2)
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
	if (func_431(iParam1, !*uParam2 & (1 << 28) != 0, !*uParam2 & (1 << 29) != 0, !*uParam2 & (1 << 30) != 0, 0))
	{
		if (uParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (uParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_428(uParam2);
		if (func_429(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_430(uParam2)
				{
					func_425(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_296(int iParam0, var uParam1)
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
	if (func_421(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_430(uParam1)
		{
			fVar3 = func_428(uParam1);
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

int func_297(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_432(bParam1, bParam2, bParam3);
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

bool func_298(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_290();
	iVar1 = (iVar0 - uParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_299(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_433(uParam2);
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
			if (func_307(uParam2, iParam1))
			{
				func_425(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_300(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < (float)func_434(uParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_307(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_425(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_301(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_435(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_425(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_425(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_436(iParam1, vVar0, vVar4))
					{
						func_425(uParam2, 1);
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
					func_425(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_436(iParam1, vVar0, vVar7))
					{
						func_425(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_302(int iParam0, var uParam1)
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
		if (!func_421(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_437(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_438(Global_1935630.f_34[iVar0]))
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
			if (func_439(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_440(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_441(uParam1, iParam0, fVar1, iVar0))
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

bool func_303(int iParam0, var uParam1)
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

bool func_304(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_290();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_305(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_442(iVar0, &iVar2))
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
	if (func_443(iVar0, iParam0))
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

int func_306(var uParam0, int iParam1)
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

bool func_307(var uParam0, int iParam1)
{
	if (func_444(uParam0))
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

bool func_308(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_62(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_309()
{
}

bool func_310(var uParam0, int iParam1)
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
		if (func_445(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_290();
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
						if (func_264(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_290();
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

bool func_311()
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
	if ((func_290() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_312(var uParam0, int iParam1)
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
	fVar0 = func_423(uParam0);
	if (uParam0->f_12 > func_446(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_447(iParam1);
	iVar1 = func_448(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, uParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_313(int iParam0, int iParam1, var uParam2)
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
	return func_449(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_314(int iParam0, var uParam1)
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
		if (func_450(iParam0, uParam1, 1))
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
					if (!func_451(uParam1, iParam0))
					{
						if (func_264(iVar4, Global_36, 1) < 7.0f)
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

bool func_315(int iParam0, var uParam1)
{
	if (!func_452(0))
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

bool func_316(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_290();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_317(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_318(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_290();
	}
	else if (func_290() - uParam1->f_4) > func_453(uParam1)
	{
		return func_454(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_319(var uParam0, int iParam1)
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

void func_320(int* iParam0, var uParam1)
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
	func_455(iParam0, uParam1, 1);
	func_343(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

bool func_321()
{
	if (func_456(Global_35) | func_457(Global_35))
	{
		return true;
	}
	return false;
}

bool func_322(int iParam0, bool bParam1)
{
	if (bParam1 && !func_241(iParam0))
	{
		return false;
	}
	return !func_458(iParam0, 4);
}

void func_323(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

void func_324(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;

	iVar0 = func_459(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		uVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_460(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
}

bool func_325(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_217() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_326(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_461(iParam0, &iVar0, &iVar1);
	if (!func_462(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_463(iVar0, iVar1);
}

struct<2> /*16*/ func_327(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_328(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_329(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

float func_330(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_331(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_464(iParam0, iParam1))
		{
			if (!func_279(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_343(uParam2, 0, 0, 1, 0);
				func_225(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_279(iParam1->f_10, 1))
		{
			func_465(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_224(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_332(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		func_455(iParam1, uParam2, 0);
		iVar5 = func_466(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_343(uParam2, 0, 0, 1, 0);
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
		if (func_335(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_335(iParam1, 26))
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
				iParam6 = func_467(uParam0);
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
				iVar8 = func_468(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_469(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_335(iParam1, 23))
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
				func_334(*uParam0, 1, 1);
			}
			else
			{
				func_334(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_333(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_334(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_335(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_336(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_470(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_337(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_471(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_279(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_338(int iParam0)
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

bool func_339(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_472(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & (1 << 9) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_473(Global_35)) || func_474(Global_35)) || func_475(Global_35));
	fVar12 = -1.0f;
	if (func_11(&(iParam1->f_13)))
	{
		fVar12 = func_13(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_241((uParam4[iVar0 /*17*/])->f_6);
		func_476(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_477(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_478(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_343(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_479(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_455(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_480(iParam1, fParam6, iParam1->f_9))
					{
						func_92(&(iParam1->f_18));
						if (bVar6)
						{
							func_479(uParam4, 0, 0);
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
		func_481(iParam1, fParam2);
	}
	return bVar5;
}

void func_340(var uParam0)
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

void func_341(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_482(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_481(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_342(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_483(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_484(iParam1, 0);
				func_455(iParam1, uParam2, func_335(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_343(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_241((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_248(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

int func_344(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0.0f)
		{
			func_92(&(iParam1->f_18));
			return 0;
		}
		else if (func_11(&(iParam1->f_18)))
		{
			func_14(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_11(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0.0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_485(&(iParam1->f_18), fParam2);
	return 1;
}

void func_345(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_476(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_346(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

Vector3 func_347(int iParam0)
{
	Vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -1808.908f, -373.3501f, 162.3387f /*3*/ };
			break;
		case 1:
			vVar0 = { -1808.91f, -372.71f, 162.32f /*3*/ };
			break;
	}
	return vVar0;
}

float func_348(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 0:
			fVar0 = 284.2307f;
			break;
		case 1:
			fVar0 = 92.6596f;
			break;
	}
	return fVar0;
}

bool func_349(var uParam0, Vector3 vParam1, float fParam4, int iParam5, float fParam6, float fParam7)
{
	int iVar0;

	if (func_9(*uParam0, 0))
	{
		if (func_139(*uParam0, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION")) || func_139(*uParam0, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")))
		{
			return false;
		}
		if (!func_265(*uParam0, vParam1, fParam4, fParam6, fParam7, 0))
		{
			if (!func_139(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
			{
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1.0f, iParam5, fParam6, 0, 40000.0f);
				TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				PED::SET_PED_KEEP_TASK(*uParam0, true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_350(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("PROP_HUMAN_SEAT_CHAIR");
			break;
		case 1:
			iVar0 = joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING");
			break;
	}
	return iVar0;
}

Vector3 func_351(int iParam0)
{
	Vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -1805.405f, -371.9168f, 160.4901f /*3*/ };
			break;
		case 1:
			vVar0 = { -1805.56f, -373.7274f, 160.3914f /*3*/ };
			break;
		case 2:
			vVar0 = { -1805.595f, -374.8352f, 160.3612f /*3*/ };
			break;
		case 3:
			vVar0 = { -1805.926f, -376.052f, 160.3409f /*3*/ };
			break;
		case 4:
			vVar0 = { -1804.244f, -372.0793f, 160.3452f /*3*/ };
			break;
	}
	return vVar0;
}

float func_352(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 0:
			fVar0 = 132.3116f;
			break;
		case 1:
			fVar0 = 75.5789f;
			break;
		case 2:
			fVar0 = 58.7203f;
			break;
		case 3:
			fVar0 = 54.6217f;
			break;
		case 4:
			fVar0 = 119.06f;
			break;
	}
	return fVar0;
}

int func_353(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("WORLD_HUMAN_SMOKE");
			break;
		case 1:
			iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 2:
			iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 3:
			iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 4:
			iVar0 = joaat("WORLD_HUMAN_SMOKE");
			break;
	}
	return iVar0;
}

Vector3 func_354(int iParam0)
{
	Vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -1781.5f, -384.5139f, 156.9384f /*3*/ };
			break;
		case 1:
			vVar0 = { -1780.587f, -385.0345f, 156.7968f /*3*/ };
			break;
		case 2:
			vVar0 = { -1779.604f, -387.0019f, 156.7149f /*3*/ };
			break;
		case 3:
			vVar0 = { -1775.285f, -382.412f, 156.4505f /*3*/ };
			break;
	}
	return vVar0;
}

float func_355(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 0:
			fVar0 = 160.8908f;
			break;
		case 1:
			fVar0 = 148.6998f;
			break;
		case 2:
			fVar0 = 100.2494f;
			break;
		case 3:
			fVar0 = 134.7941f;
			break;
	}
	return fVar0;
}

int func_356(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 1:
			iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 2:
			iVar0 = joaat("WORLD_HUMAN_SMOKE");
			break;
		case 3:
			iVar0 = joaat("WORLD_HUMAN_SMOKE");
			break;
	}
	return iVar0;
}

bool func_357()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

int func_358(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_359(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_360(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_361(int iParam0, bool bParam1)
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

bool func_362(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_363(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_486(iParam0);
	}
	else
	{
		func_487(iParam0, iParam1);
	}
	func_488();
}

void func_364(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_365(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_366(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

bool func_367(int iParam0, bool bParam1)
{
	if (!func_226(iParam0))
	{
		return false;
	}
	if ((func_227(iParam0, 1) && !func_271(iParam0)) && func_272(iParam0))
	{
		return false;
	}
	if (!func_227(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_489(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_368(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return;
	}
	if (!func_226(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

void func_369(int iParam0)
{
	if (!func_226(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
	}
	return 3;
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 3;
	}
	return 3;
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 3;
	}
	return 3;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 1;
	}
	return 1;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
	}
	return 1;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 1;
	}
	return 1;
}

int func_376(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_490(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_377(int iParam0)
{
	return iParam0;
}

void func_378(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_379(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_458(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_380(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_381(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_382(int iParam0)
{
	if (!func_491(iParam0))
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

bool func_383(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_384(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_385()
{
	return Global_1310750.f_16037;
}

bool func_386(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/] & iParam1 != 0;
}

bool func_387(int iParam0)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	if (func_492(64) && func_493(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_388(int iParam0)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_389(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_383(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_494(iParam0);
	Global_1310750.f_16037--;
}

void func_390(int iParam0, int iParam1, bool bParam2)
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

void func_391(bool bParam0)
{
	if (bParam0)
	{
		func_495(4);
	}
	func_495(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

void func_392(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

float func_393(float fParam0)
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

void func_394(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_395()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_396(int iParam0, int iParam1)
{
	if (!func_226(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

void func_397(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_359(vParam0))
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
			if (func_496(vVar2, vParam0, 2.0f, 1))
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

int func_398(int iParam0)
{
	if (!func_41(iParam0))
	{
		return -1;
	}
	return func_414(iParam0);
}

char* func_399()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_1_sittingspeech";
}

char* func_400()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_2_and_3_porchspeechwnewspaper";
}

char* func_401()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_4_and_5_hotelporchandsherrifofficespeech";
}

char* func_402()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_6_sittingspeech";
}

char* func_403()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_7_porchspeechwnewspaper";
}

Vector3 func_404()
{
	return { -1807.839f, -374.7922f, 161.8656f };
}

Vector3 func_405()
{
	return { 0.0f, 0.0f, 180.0f };
}

Vector3 func_406()
{
	return { -1807.44f, -373.83f, 161.84f };
}

Vector3 func_407()
{
	return { 0.0f, 0.0f, -97.5f };
}

Vector3 func_408()
{
	return { -1781.675f, -387.235f, 158.3f };
}

Vector3 func_409()
{
	return { 0.0f, 0.0f, -44.787f };
}

Vector3 func_410()
{
	return func_404();
}

Vector3 func_411()
{
	return func_405();
}

Vector3 func_412()
{
	return func_406();
}

Vector3 func_413()
{
	return func_407();
}

int func_414(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_497(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_415(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::IS_PED_FULLY_ON_MOUNT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

void func_416(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_498();
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
			func_499(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_417(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_418(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_500(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_419(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_217() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_501(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_501(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_448(iVar0) == -1)
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

void func_420(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_502(uParam0);
	}
}

bool func_421(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_448(iParam2);
	}
	else
	{
		iVar1 = func_447(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_448(iParam0);
	}
	else
	{
		iVar0 = func_447(iParam0);
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

float func_422(int iParam0, int iParam1)
{
	return func_62(iParam0, iParam1, 1, 1);
}

float func_423(var uParam0)
{
	return uParam0->f_26;
}

bool func_424(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_425(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, (1 << 27));
	}
	else
	{
		func_224(uParam0, (1 << 27));
	}
}

void func_426()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_427(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_62(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_503(iVar0, 0)))
		{
			if (func_504(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_428(var uParam0)
{
	return uParam0->f_17;
}

bool func_429(var uParam0, int iParam1, float fParam2, float fParam3)
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

int func_430(var uParam0)
{
	return uParam0->f_18;
}

bool func_431(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_503(iVar0, 0)))
		{
			if (func_505(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_432(bool bParam0, bool bParam1, bool bParam2)
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

float func_433(var uParam0)
{
	return uParam0->f_23;
}

int func_434(var uParam0)
{
	return uParam0->f_21;
}

int func_435(var uParam0)
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

bool func_436(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_506(iParam0, vParam4, 0.5f))
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

int func_437(int iParam0)
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
	if (func_507(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_438(int iParam0)
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

bool func_439(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_508(iParam1))
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

bool func_440(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_508(iParam1))
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

bool func_441(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_508(iParam1))
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

bool func_442(int iParam0, int iParam1)
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

bool func_443(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_509(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_444(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_445(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_264(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_446(var uParam0)
{
	return uParam0->f_24;
}

int func_447(int iParam0)
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

int func_448(int iParam0)
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

int func_449(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_442(Global_35, &iVar1))
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
		fVar2 = func_62(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_62(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_450(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_500(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_451(uParam1, iVar0))
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
				if (!bParam2 || !func_451(uParam1, iVar1))
				{
					if (func_264(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_451(var uParam0, int iParam1)
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

int func_452(int iParam0)
{
	if (func_45())
	{
		return 0;
	}
	return func_510(Global_1347702[58 /*49*/].f_15, 1);
}

int func_453(var uParam0)
{
	return uParam0->f_20;
}

int func_454(int iParam0, var uParam1, bool bParam2, float fParam3)
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

void func_455(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_248(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_79(iParam0, 0);
		}
	}
}

int func_456(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> /*32*/ sVar3;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(bParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_511(iVar9);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar3, bParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = sVar3.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar7))
				{
				}
				iVar8 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iVar7);
				if (iVar8 == joaat("CARRIABLE_SADDLE") || iVar8 == joaat("CARRIABLE_SADDLE_BUNDLE"))
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_457(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_261();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

bool func_458(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

int func_459(int* iParam0)
{
	if (func_335(iParam0, 0))
	{
		if (func_512(iParam0))
		{
			func_346(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_460(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_513(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_461(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_462(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_514(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_515(iParam0))
	{
		return false;
	}
	if (func_516(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_517(iParam0, 1)) || func_518((1 << 15)))
	{
		if (!func_517(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_519())
	{
		return false;
	}
	return true;
}

void func_463(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_464(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_520((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_465(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_482(uParam0[iVar0 /*17*/]))
		{
			func_76(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_466(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_521(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_241((uParam2[iVar0 /*17*/])->f_6))
		{
			func_76(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_467(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_522(*uParam0);
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

int func_468(var uParam0, int iParam1)
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

void func_469(int* iParam0, int* iParam1)
{
	if (!func_335(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_76(iParam1, 19);
			func_484(iParam0, 23);
			func_523(iParam1, 2);
		}
	}
}

bool func_470(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_524(16))
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
					func_525(16);
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

void func_471(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_521(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_472(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_473(int iParam0)
{
	return func_526(iParam0, 4) | func_526(iParam0, 5);
}

int func_474(int iParam0)
{
	return func_526(iParam0, 7);
}

int func_475(int iParam0)
{
	return func_526(iParam0, 6);
}

void func_476(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_482(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_521(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_477(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_527(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_322(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_244(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_244(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_528(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_478(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_529(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_530(iParam1, 1))
	{
		func_531(iParam1, 1);
		return true;
	}
	return false;
}

void func_479(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_77(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_480(int* iParam0, float fParam1, bool bParam2)
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

void func_481(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_482(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_483(int iParam0)
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

void func_484(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_485(var uParam0, float fParam1)
{
	if (func_532(uParam0, fParam1))
	{
		func_14(uParam0);
		return 1;
	}
	return 0;
}

int func_486(int iParam0)
{
	int iVar0;

	iVar0 = func_497(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_533(iVar0);
}

int func_487(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;
	int iVar2;

	if (Global_1058888.f_40431 >= 32)
	{
		return -1;
	}
	sVar0 = -1;
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	if (Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[Global_1058888.f_40431 /*2*/] = { sVar0 /*2*/ };
		Global_1058888.f_40431++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
			return iVar2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			func_534(iVar2);
			Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
			return iVar2;
		}
	}
	if (Global_1058888.f_40431 < 31)
	{
		iVar2 = Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[iVar2 /*2*/] = { sVar0 /*2*/ };
		Global_1058888.f_40431++;
		if (Global_1058888.f_40431 > 32)
		{
			Global_1058888.f_40431 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_488()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

bool func_489(int iParam0, bool bParam1)
{
	if (func_217() != -1)
	{
		return false;
	}
	if (!func_226(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_60(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_230(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_60(iParam0));
}

void func_490(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_535(iParam1))
		{
			func_80(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_536(iParam0, 0, 1);
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
			func_537(iParam0, 0);
			bVar0 = true;
		}
		func_538(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_491(int iParam0)
{
	return func_458(iParam0, 2);
}

bool func_492(int iParam0)
{
	return Global_1310750.f_16035 & iParam0 != 0;
}

bool func_493(int iParam0)
{
	return func_386(iParam0, Global_1310750.f_16072 | 64);
}

void func_494(int iParam0)
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

void func_495(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

bool func_496(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

int func_497(int iParam0)
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

bool func_498()
{
	if (func_539())
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

void func_499(var uParam0, var uParam1)
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

bool func_500(bool bParam0, int iParam1, int iParam2)
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

int func_501(var uParam0)
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

void func_502(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_224(uParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_225(uParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_503(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_504(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_505(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_505(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_506(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

bool func_507(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_508(int iParam0)
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

int func_509(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_510(int iParam0, bool bParam1)
{
	switch (func_398(iParam0))
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

int func_511(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

bool func_512(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_513(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> /*64*/ sVar3;

	uParam5 = uParam5;
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
		if (func_540())
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
				if (func_541(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_62(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_92(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_542(iParam0, iParam1, fVar1, bParam13))
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
				sVar3.f_2 = uParam5;
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
				iVar2 = func_358(func_543(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_514(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_515(int iParam0)
{
	if (func_217() != -1)
	{
		if (func_517(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_517(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_516(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_517(iParam0, (1 << 16)) && !func_517(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_517(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_517(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_517(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

bool func_518(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

bool func_519()
{
	return Global_1905944.f_5694;
}

int func_520(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_521(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_241(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_248(&(iParam1->f_6), 0, 1);
	}
	if (!func_241(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_482(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_544(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_241(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_528(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_545(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_546(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_242(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_545(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_244(iParam1->f_6, 0, 1);
				}
				else
				{
					func_244(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_522(int iParam0)
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

void func_523(int* iParam0, int iParam1)
{
	if (!func_246(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_76(iParam0, 14);
		}
	}
}

bool func_524(int iParam0)
{
	return Global_22 & iParam0 != 0;
}

void func_525(int iParam0)
{
	Global_22 |= iParam0;
}

int func_526(int iParam0, int iParam1)
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

bool func_527(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_528(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_241(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	func_545(iParam0, 18, 0, 1);
	func_545(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_529(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_241(iParam0))
	{
		return false;
	}
	iVar0 = func_377(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_530(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_241(iParam0))
	{
		return false;
	}
	iVar0 = func_377(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_531(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_532(var uParam0, float fParam1)
{
	if (!func_11(uParam0))
	{
		return false;
	}
	if (func_13(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_533(int iParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888.f_40431)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40431.f_1[iVar0 /*2*/] = { Global_1058888.f_40431.f_1[iVar0 + 1 /*2*/] /*2*/ };
		}
		iVar0++;
	}
	sVar1 = -1;
	if (Global_1058888.f_40431 < 32)
	{
		Global_1058888.f_40431.f_1[Global_1058888.f_40431 /*2*/] = { sVar1 /*2*/ };
	}
	Global_1058888.f_40431--;
	if (Global_1058888.f_40431 < 0)
	{
		Global_1058888.f_40431 = 0;
	}
	return 1;
}

int func_534(int iParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	iVar0 = (Global_1058888.f_40431 - 1);
	sVar1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40431.f_1[iVar0 + 1 /*2*/] = { Global_1058888.f_40431.f_1[iVar0 /*2*/] /*2*/ };
		}
		iVar0--;
	}
	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { sVar1 /*2*/ };
	Global_1058888.f_40431++;
	if (Global_1058888.f_40431 > 32)
	{
		Global_1058888.f_40431 = 32;
	}
	return 1;
}

bool func_535(int iParam0)
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

void func_536(int iParam0, int iParam1, bool bParam2)
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

void func_537(int iParam0, bool bParam1)
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

void func_538(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0.0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1.0f);
	}
}

bool func_539()
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

bool func_540()
{
	return (Global_1894899 & 1 != 0 && func_10() != -1);
}

float func_541(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_62(Global_35, iParam0, bParam1, bParam2);
}

bool func_542(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_543(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = uParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = iParam3;
	sVar0.f_5 = bParam4;
	sVar0.f_6 = iParam7;
	return func_266(iParam0, &sVar0);
}

int func_544(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_458(iVar0, 2))
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
				func_547(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_545(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_546(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_547(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_379(iParam0, 1);
	func_380(iParam0, 1);
	func_381(iParam0, 128);
}

