#pragma region Local_Variables
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	struct<1071> /*8568*/ sLocal_8 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -262339715, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 180000, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 1092616192;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	int iLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	int iLocal_1148 = 0;
	int iLocal_1149[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	float fLocal_1166 = 0.0f;
	float fLocal_1167 = 0.0f;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#pragma endregion

void __SCRIPT()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	fLocal_1166 = 1.0f;
	fLocal_1167 = 1.0f;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	sLocal_8.f_15 = 0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&sLocal_8);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		func_1(&sLocal_8);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (sScriptParam_0.f_0 == 1)
	{
		sLocal_8.f_14 = 1;
	}
	if (!sLocal_8.f_14 && func_2(Global_1394141.f_1326, (1 << 31)))
	{
		func_3(&(Global_1394141.f_1326), (1 << 31));
	}
	sLocal_8.f_0 = sScriptParam_0.f_1;
	sLocal_8.f_42 = { 2553.875f, -1313.143f, 48.2166f /*3*/ };
	sLocal_8.f_45 = { 2546.522f, -1306.835f, 48.26664f /*3*/ };
	if (!sLocal_8.f_1070)
	{
		sLocal_8.f_1058 = 180000;
	}
	while (true)
	{
		bVar1 = func_4(Global_35, Global_1394141.f_7[sLocal_8.f_0 /*31*/].f_4, 1, 0);
		bVar2 = func_4(Global_35, sLocal_8.f_35[3], 1, 0);
		fVar3 = func_5(Global_35, Global_1394141.f_7[sLocal_8.f_0 /*31*/].f_1, 1);
		if ((!func_2(sLocal_8.f_16, 64) && bVar1) && !sLocal_8.f_1070)
		{
			func_6(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200.0f, 0, 0);
			func_7(&(sLocal_8.f_16), 64);
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			if (func_8(&sLocal_8) < 10)
			{
				func_9(&sLocal_8, 10);
			}
		}
		if (!sLocal_8.f_14)
		{
			func_10(256);
			if ((func_8(&sLocal_8) < 10 && func_11(sLocal_8.f_0)) && !bVar1)
			{
				func_7(&(Global_1394141.f_1326), (1 << 31));
				func_9(&sLocal_8, 10);
			}
			func_12(bVar1);
			func_13(&sLocal_8, fVar3);
			if (fVar3 > 75.0f || func_2(Global_1394141.f_1326, (1 << 31)))
			{
				func_7(&(Global_1394141.f_1326), (1 << 31));
				if (func_8(&sLocal_8) < 10)
				{
					func_9(&sLocal_8, 10);
				}
			}
			if ((func_14(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || Global_1394141.f_1279[sLocal_8.f_1 /*8*/].f_6)
			{
				func_7(&(sLocal_8.f_16), (1 << 25));
				if (func_8(&sLocal_8) < 10)
				{
					func_9(&sLocal_8, 10);
				}
			}
			if (PLAYER::_0x6C54E69516CC56BD(PLAYER::GET_PLAYER_INDEX()) > 0 && bVar2)
			{
				func_7(&(sLocal_8.f_16), (1 << 25));
				if (func_8(&sLocal_8) < 10)
				{
					func_9(&sLocal_8, 10);
				}
			}
		}
		if (!sLocal_8.f_14)
		{
			func_15(&(sLocal_8.f_104), sLocal_8.f_1);
			func_16(&(sLocal_8.f_104), sLocal_8.f_1);
		}
		func_17(&sLocal_8);
		func_18(&sLocal_8);
		if (func_8(&sLocal_8) >= 6)
		{
			func_19(&sLocal_8);
		}
		if (func_8(&sLocal_8) >= 8 && bVar1)
		{
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if ((func_20(sLocal_8.f_74[iVar4]) && ENTITY::DOES_ENTITY_EXIST(sLocal_8.f_81[iVar4])) && !ENTITY::IS_ENTITY_DEAD(sLocal_8.f_81[iVar4]))
				{
					PED::SET_PED_RESET_FLAG(sLocal_8.f_81[iVar4], 261 /*PRF_0x6C4415CE*/, true);
				}
				iVar4++;
			}
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_8.f_48) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_8.f_48, false))
		{
			if (bVar1)
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(sLocal_8.f_48, "b_ShowCrowd"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_8.f_48, "b_ShowCrowd", true, false);
				}
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(sLocal_8.f_48, "b_ShowCrowd"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_8.f_48, "b_ShowCrowd", false, false);
			}
		}
		switch (func_8(&sLocal_8))
		{
			case 0:
				if (func_21(&sLocal_8))
				{
					func_22(&sLocal_8);
					if (!sLocal_8.f_14)
					{
						func_23(&(sLocal_8.f_104));
						func_24(1);
						func_25(-1, 0, 0, 0, 0);
						func_26();
					}
					func_27(&sLocal_8);
					func_28(&sLocal_8);
					Global_1394141.f_1321 = 0;
					func_29(&sLocal_8);
				}
				func_9(&sLocal_8, 1);
				break;
			case 1:
				if (func_21(&sLocal_8))
				{
					func_29(&sLocal_8);
				}
				if (func_30(&sLocal_8))
				{
					func_31(&sLocal_8);
					func_9(&sLocal_8, 2);
				}
				break;
			case 2:
				if (func_21(&sLocal_8))
				{
					func_29(&sLocal_8);
				}
				if (func_32(&sLocal_8))
				{
					func_33(&sLocal_8);
					if (!sLocal_8.f_14)
					{
						if (!sLocal_8.f_1070)
						{
							ANIMSCENE::START_ANIM_SCENE(sLocal_8.f_49);
						}
						else
						{
							func_34(&sLocal_8);
						}
						func_9(&sLocal_8, 3);
					}
					else
					{
						func_9(&sLocal_8, 6);
					}
				}
				break;
			case 3:
				if (func_21(&sLocal_8))
				{
					if (sLocal_8.f_1 != -1)
					{
						func_35(&(sLocal_8.f_910), sLocal_8.f_1);
					}
					func_29(&sLocal_8);
				}
				if (sLocal_8.f_1 != -1)
				{
					if (func_36(&(sLocal_8.f_910), sLocal_8.f_1))
					{
						func_9(&sLocal_8, 4);
					}
				}
				else
				{
					func_9(&sLocal_8, 6);
				}
				break;
			case 4:
				if (func_21(&sLocal_8))
				{
					func_29(&sLocal_8);
				}
				if (func_37(&(sLocal_8.f_349), sLocal_8.f_1, -1))
				{
					func_9(&sLocal_8, 5);
				}
				break;
			case 5:
				if (func_21(&sLocal_8))
				{
					func_29(&sLocal_8);
				}
				if (func_38(&(sLocal_8.f_349), &(sLocal_8.f_910), sLocal_8.f_1))
				{
					if (func_39(&(sLocal_8.f_349), sLocal_8.f_1))
					{
						if (!func_40(&(sLocal_8.f_26)))
						{
							func_41(&(sLocal_8.f_26));
						}
						else if (func_42(&(sLocal_8.f_26)) > 1.0f)
						{
							func_43(&(sLocal_8.f_26));
							func_9(&sLocal_8, 6);
						}
					}
				}
				break;
			case 6:
				if (func_21(&sLocal_8))
				{
					func_41(&(sLocal_8.f_947));
					if (sLocal_8.f_1070)
					{
						sLocal_8.f_1059.f_1 = sLocal_8.f_1;
					}
					if (sLocal_8.f_1 == 0 && !sLocal_8.f_14)
					{
						func_7(&(Global_1394141.f_1325), (1 << 9));
						func_7(&(Global_1394141.f_1325), (1 << 17));
					}
					func_29(&sLocal_8);
				}
				func_44(&sLocal_8);
				if (sLocal_8.f_1070)
				{
					func_45(&(sLocal_8.f_1059), sLocal_8.f_0);
				}
				if (func_46(&sLocal_8))
				{
					if ((func_40(&(sLocal_8.f_947)) && func_47(&(sLocal_8.f_947)) > sLocal_8.f_1058) || bVar1)
					{
						func_41(&(sLocal_8.f_947));
						func_9(&sLocal_8, 7);
					}
				}
				break;
			case 7:
				if (func_21(&sLocal_8))
				{
					func_29(&sLocal_8);
				}
				func_44(&sLocal_8);
				if ((sLocal_8.f_1070 && sLocal_8.f_1059.f_10 == 0) && func_48(&(sLocal_8.f_947)) > 3.0f)
				{
					sLocal_8.f_1059.f_10 = 1;
				}
				if ((func_40(&(sLocal_8.f_947)) && func_47(&(sLocal_8.f_947)) > 10000) || sLocal_8.f_14)
				{
					bVar0 = true;
				}
				if (sLocal_8.f_1070)
				{
					func_45(&(sLocal_8.f_1059), sLocal_8.f_0);
				}
				if (bVar0)
				{
					if (!sLocal_8.f_14)
					{
						func_7(&(Global_1394141.f_1325), 2);
						func_7(&(Global_1394141.f_1325), (1 << 12));
					}
					if (sLocal_8.f_1 == 0)
					{
					}
					if (sLocal_8.f_1070)
					{
						func_7(&(Global_1394141.f_1325), 16);
						Global_1394141.f_1330 = 1;
						if (sLocal_8.f_1 == 1 || sLocal_8.f_1 == 2)
						{
							func_7(&(Global_1394141.f_1325), (1 << 22));
						}
					}
					if (!func_2(sLocal_8.f_16, (1 << 10)))
					{
						func_9(&sLocal_8, 8);
					}
					else if (!func_40(&(sLocal_8.f_26)))
					{
						func_41(&(sLocal_8.f_26));
						Global_1394141.f_1322 = 1;
					}
					else if (func_42(&(sLocal_8.f_26)) > 5.0f)
					{
						func_43(&(sLocal_8.f_26));
						func_9(&sLocal_8, 8);
					}
				}
				break;
			case 8:
				if (func_21(&sLocal_8))
				{
					func_29(&sLocal_8);
				}
				func_44(&sLocal_8);
				if (sLocal_8.f_1070)
				{
					func_45(&(sLocal_8.f_1059), sLocal_8.f_0);
					func_49(&sLocal_8, sLocal_8.f_1);
					if (!func_2(Global_1394141.f_1325, 16))
					{
						func_50(&sLocal_8);
						func_51(sLocal_8.f_0);
						func_9(&sLocal_8, 9);
						AUDIO::SET_PED_INTERIOR_WALLA_DENSITY(0.0f, 1.0f);
						func_7(&(sLocal_8.f_16), (1 << 28));
					}
				}
				else
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_8.f_48) && !func_2(sLocal_8.f_16, 128))
					{
						ANIMSCENE::START_ANIM_SCENE(sLocal_8.f_48);
						func_7(&(sLocal_8.f_16), 128);
					}
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_8.f_49) && !func_2(sLocal_8.f_16, (1 << 9)))
					{
						func_7(&(sLocal_8.f_16), (1 << 31));
						func_7(&(sLocal_8.f_16), (1 << 9));
					}
					AUDIO::SET_PED_INTERIOR_WALLA_DENSITY(0.0f, 1.0f);
					func_7(&(sLocal_8.f_16), (1 << 28));
					func_54(func_52(6), func_53());
					if (func_2(sLocal_8.f_17, 1) && AUDIO::LOAD_STREAM(func_55(sLocal_8.f_0), func_56(sLocal_8.f_0)))
					{
						iVar5 = AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_55(sLocal_8.f_0), func_56(sLocal_8.f_0));
						if (iVar5 != -1)
						{
							AUDIO::PLAY_STREAM_FROM_POSITION(2548.749f, -1305.267f, 50.01453f, iVar5);
						}
					}
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_8.f_48))
					{
						if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_8.f_48, false))
						{
							func_9(&sLocal_8, 9);
						}
					}
				}
				break;
			case 9:
				if (func_21(&sLocal_8))
				{
					if (sLocal_8.f_1070 || !sLocal_8.f_14)
					{
						if (sLocal_8.f_1 == 4 || sLocal_8.f_1 == 2)
						{
							Global_40.f_9028[4]++;
							Global_40.f_9028[2] = (1 + Global_40.f_9028[2]);
						}
						else
						{
							Global_40.f_9028[1]++;
							Global_40.f_9028[3] = (1 + Global_40.f_9028[3]);
						}
					}
					func_41(&(sLocal_8.f_32));
					Global_1394141.f_1335 = sLocal_8.f_48;
					func_29(&sLocal_8);
				}
				func_44(&sLocal_8);
				if (!sLocal_8.f_14)
				{
					func_57(&(sLocal_8.f_910), &(sLocal_8.f_349), sLocal_8.f_1);
					if (!bVar1)
					{
						if (func_58(1))
						{
							if (!func_40(&(sLocal_8.f_20)))
							{
								func_41(&(sLocal_8.f_20));
							}
							else if (func_42(&(sLocal_8.f_20)) > 10.0f)
							{
								func_59(1);
								func_43(&(sLocal_8.f_20));
							}
						}
					}
					else
					{
						if (!func_58(1))
						{
							func_24(1);
							func_25(-1, 0, 0, 0, 0);
							func_26();
						}
						if (func_40(&(sLocal_8.f_20)))
						{
							func_43(&(sLocal_8.f_20));
						}
					}
				}
				func_60(&(sLocal_8.f_12));
				func_61(&sLocal_8);
				func_62(&sLocal_8);
				func_63(&sLocal_8);
				if (func_2(sLocal_8.f_16, (1 << 12)))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_8.f_48, false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_8.f_48) > func_64())
					{
						func_7(&(sLocal_8.f_16), 2);
					}
				}
				if (func_2(sLocal_8.f_16, (1 << 28)) && func_2(sLocal_8.f_16, (1 << 27)))
				{
					AUDIO::SET_PED_INTERIOR_WALLA_DENSITY(1.0f, 1.0f);
					func_3(&(sLocal_8.f_16), (1 << 28));
				}
				if (sLocal_8.f_1070)
				{
					func_65(&sLocal_8);
					func_45(&(sLocal_8.f_1059), sLocal_8.f_0);
					func_66(&sLocal_8, bVar1);
					if ((func_67() && func_2(sLocal_8.f_16, (1 << 21))) && func_48(&(sLocal_8.f_32)) > 30.0f)
					{
						if (!func_2(sLocal_8.f_16, (1 << 26)))
						{
							func_7(&(Global_1394141.f_1325), 4);
							func_7(&(Global_1394141.f_1325), 32);
							if (sLocal_8.f_1 == 1 || sLocal_8.f_1 == 2)
							{
								func_7(&(Global_1394141.f_1325), (1 << 23));
							}
							Global_1394141.f_1330 = 0;
							sLocal_8.f_910.f_19 = 1;
							Global_1394141.f_1329 = 1;
							func_69(func_68(joaat("SHOWS_SEEN")), 1);
							func_70(&sLocal_8);
							func_7(&(sLocal_8.f_16), (1 << 26));
						}
						func_71(&sLocal_8);
						if (!bVar1 && !bVar2)
						{
							func_9(&sLocal_8, 10);
						}
						if (func_2(sLocal_8.f_16, (1 << 28)))
						{
							AUDIO::SET_PED_INTERIOR_WALLA_DENSITY(1.0f, 1.0f);
							func_3(&(sLocal_8.f_16), (1 << 28));
						}
					}
					else
					{
						if (bVar1 || bVar2)
						{
							if (!func_2(sLocal_8.f_16, (1 << 28)))
							{
								AUDIO::SET_PED_INTERIOR_WALLA_DENSITY(0.0f, 1.0f);
								func_7(&(sLocal_8.f_16), (1 << 28));
							}
						}
						else if (func_2(sLocal_8.f_16, (1 << 28)))
						{
							AUDIO::SET_PED_INTERIOR_WALLA_DENSITY(1.0f, 1.0f);
							func_3(&(sLocal_8.f_16), (1 << 28));
						}
						func_72(&sLocal_8);
					}
				}
				else if (func_2(sLocal_8.f_16, (1 << 23)))
				{
					if (!func_2(sLocal_8.f_16, (1 << 26)))
					{
						func_73(func_52(6), func_53());
						if (func_2(sLocal_8.f_16, (1 << 28)))
						{
							AUDIO::SET_PED_INTERIOR_WALLA_DENSITY(1.0f, 1.0f);
							func_3(&(sLocal_8.f_16), (1 << 28));
						}
						if (func_2(sLocal_8.f_16, (1 << 12)) && !sLocal_8.f_14)
						{
							func_7(&(Global_1394141.f_1325), 4);
							func_7(&(Global_1394141.f_1325), (1 << 13));
						}
						if (sLocal_8.f_14)
						{
							Global_1394141.f_1323 = 1;
						}
						func_69(func_68(joaat("THEATRE_VISITS")), 1);
						func_7(&(sLocal_8.f_16), (1 << 26));
					}
					if (sLocal_8.f_14)
					{
						if (!Global_1394141.f_1321)
						{
							if (ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_8.f_48) > 0.99f)
							{
								func_9(&sLocal_8, 10);
							}
							if (sLocal_8.f_0 == 7)
							{
								func_9(&sLocal_8, 10);
							}
						}
					}
					else
					{
						func_74(&sLocal_8);
						if (!bVar1 && !bVar2)
						{
							Global_1394141.f_1321 = 0;
							func_9(&sLocal_8, 10);
						}
					}
				}
				if (!bVar1)
				{
					func_75(&sLocal_8);
				}
				break;
			case 10:
				if (func_21(&sLocal_8))
				{
					func_29(&sLocal_8);
				}
				if (func_2(sLocal_8.f_16, (1 << 22)))
				{
					iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(func_76(sLocal_8.f_1));
					if (INTERIOR::IS_VALID_INTERIOR(iVar6))
					{
						INTERIOR::UNPIN_INTERIOR(iVar6);
					}
					func_3(&(sLocal_8.f_16), (1 << 22));
				}
				func_3(&(Global_1394141.f_1326), (1 << 15));
				if (!sLocal_8.f_14 && (func_2(Global_1394141.f_1326, (1 << 31)) || func_2(sLocal_8.f_16, (1 << 25))))
				{
					if (!bVar1)
					{
						if (sLocal_8.f_1070)
						{
							func_77(&(sLocal_8.f_1059));
							func_7(&(Global_1394141.f_1325), 4);
							func_7(&(Global_1394141.f_1325), 32);
							if (func_2(sLocal_8.f_16, (1 << 28)))
							{
								AUDIO::SET_PED_INTERIOR_WALLA_DENSITY(1.0f, 1.0f);
								func_3(&(sLocal_8.f_16), (1 << 28));
							}
							func_71(&sLocal_8);
						}
						else
						{
							Global_1394141.f_1321 = 0;
						}
						func_70(&sLocal_8);
						Global_1394141.f_1328 = 0;
						Global_1394141.f_1330 = 0;
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_8.f_49))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(sLocal_8.f_49);
						}
						AUDIO::_RELEASE_SOUNDSET(func_53());
						func_1(&sLocal_8);
						func_78(&(sLocal_8.f_349), sLocal_8.f_35[4]);
						func_79(&sLocal_8);
						func_80(sLocal_8.f_0);
						func_81(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
						func_82();
						func_9(&sLocal_8, 11);
					}
				}
				if (sLocal_8.f_14)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_8.f_49))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(sLocal_8.f_49);
					}
					AUDIO::_RELEASE_SOUNDSET(func_53());
					func_1(&sLocal_8);
					func_9(&sLocal_8, 11);
				}
				else if (((!bVar1 && !bVar2) && !sLocal_8.f_14) && fVar3 > 17.0f)
				{
					func_74(&sLocal_8);
					func_70(&sLocal_8);
					Global_1394141.f_1328 = 0;
					Global_1394141.f_1330 = 0;
					func_77(&(sLocal_8.f_1059));
					if (!func_83(sLocal_8.f_0) && !func_84(sLocal_8.f_0))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_8.f_49))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(sLocal_8.f_49);
						}
						AUDIO::_RELEASE_SOUNDSET(func_53());
						func_1(&sLocal_8);
						func_78(&(sLocal_8.f_349), sLocal_8.f_35[4]);
						func_79(&sLocal_8);
						func_81(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
						func_82();
						func_9(&sLocal_8, 11);
					}
				}
				break;
			case 11:
				if (func_21(&sLocal_8))
				{
					func_29(&sLocal_8);
				}
				if (!sLocal_8.f_14)
				{
					if (!bVar1)
					{
						if (sLocal_8.f_2 == 0)
						{
							Global_1394141.f_1279[sLocal_8.f_1 /*8*/].f_6 = 0;
							SCRIPTS::TERMINATE_THIS_THREAD();
						}
					}
					else
					{
						func_9(&sLocal_8, 10);
					}
				}
				else
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (sLocal_8.f_1070)
	{
		func_85(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_66)
	{
		iVar1 = iParam0->f_66[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			OBJECT::DELETE_OBJECT(&iVar1);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_81)
	{
		iVar2 = iParam0->f_81[iVar0];
		if (STREAMING::IS_MODEL_VALID(iParam0->f_74[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar2, -1.0f);
			PED::DELETE_PED(&iVar2);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_96)
	{
		iVar3 = iParam0->f_96[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			OBJECT::DELETE_OBJECT(&iVar3);
		}
		iVar0++;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_48);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_57))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_57));
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(iParam0->f_945))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED(iParam0->f_945))
		{
			HUD::_TEXT_BLOCK_DELETE(iParam0->f_945);
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(iParam0->f_946) && !iParam0->f_14)
	{
		if (HUD::TEXT_BLOCK_IS_LOADED(iParam0->f_946))
		{
			HUD::_TEXT_BLOCK_DELETE(iParam0->f_946);
		}
	}
	func_86(iParam0);
	if (!iParam0->f_14)
	{
		func_87(&(iParam0->f_104));
		if (func_58(1))
		{
			func_59(1);
		}
	}
	if (func_2(iParam0->f_16, (1 << 25)))
	{
		func_78(&(iParam0->f_349), Global_1394141.f_7[*iParam0 /*31*/].f_4);
	}
	func_59(1);
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_3(var uParam0, int iParam1)
{
	func_88(uParam0, iParam1);
}

bool func_4(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_5(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_6(Vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = (1 << 20);
	if (bParam4)
	{
		iVar0 |= (1 << 17);
	}
	if (bParam5)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_7(var uParam0, int iParam1)
{
	func_89(uParam0, iParam1);
}

int func_8(int iParam0)
{
	return iParam0->f_9;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0->f_9 != iParam1)
	{
		iParam0->f_9 = iParam1;
		func_90(iParam0);
	}
}

void func_10(int iParam0)
{
	Global_1572864.f_3 |= iParam0;
}

bool func_11(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if ((MISC::GET_FRAME_COUNT() % 15) == 0)
	{
		func_91(Global_40.f_9028.f_6[Global_1394141.f_7[iParam0 /*31*/].f_30], &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
		if (((iVar2 >= 6 || iVar3 >= 1) || iVar4 >= 1) || iVar5 >= 1)
		{
			return true;
		}
	}
	return false;
}

void func_12(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = false;
	if (func_2(Global_1394141.f_1326, 1))
	{
		bVar3 = false;
		bVar1 = false;
		bVar4 = false;
	}
	if (func_2(Global_1394141.f_1326, 2))
	{
		bVar0 = false;
	}
	if (func_2(Global_1394141.f_1326, 4))
	{
		bVar2 = false;
		bVar0 = false;
		bVar1 = false;
	}
	if (func_2(Global_1394141.f_1326, 64))
	{
		bVar2 = false;
	}
	if (func_2(Global_1394141.f_1326, (1 << 9)))
	{
		bVar5 = true;
	}
	func_92(0);
	if (bParam0)
	{
		if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_93(0), joaat("WEAPON_UNARMED"), false))
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(func_93(0), joaat("WEAPON_UNARMED"));
		}
		if (!bVar0)
		{
			if (!func_2(Global_1394141.f_1326, 8))
			{
				if (VOLUME::DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && VOLUME::_GET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				{
					VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 2, false))
					{
						if ((iLocal_2 != joaat("WEAPON_UNARMED") && iLocal_2 != joaat("OBJECT_1")) && iLocal_2 != joaat("OBJECT_2"))
						{
							if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_93(0), iLocal_2, false))
							{
								INVENTORY::_INVENTORY_ENABLE_ITEM(func_93(0), iLocal_2);
								func_94(iLocal_2);
							}
						}
						if (VOLUME::_GET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
						{
							VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
						}
						func_7(&(Global_1394141.f_1326), 8);
					}
				}
			}
		}
		else if (func_2(Global_1394141.f_1326, 8))
		{
			if (VOLUME::DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && bVar3)
			{
				VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_GANG_DUTCHS"));
				func_3(&(Global_1394141.f_1326), 8);
			}
		}
		else
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 0, false))
			{
				iVar6 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, joaat("SCRIPT_TASK_SWAP_WEAPON"), true);
				iVar7 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), true);
				if ((((((iLocal_2 != joaat("WEAPON_UNARMED") && iLocal_2 != joaat("OBJECT_1")) && iLocal_2 != joaat("OBJECT_2")) && iVar6 != 1) && iVar6 != 0) && iVar7 != 1) && iVar7 != 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
					if (PED::IS_PED_USING_ACTION_MODE(Global_35))
					{
						PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
					}
				}
			}
			func_95(&iLocal_2, 1);
		}
		if (bVar3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		}
		if (bVar1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		}
		if (bVar0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), false);
		}
		if (bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		CAM::_0x632BE8D84846FA56();
		CAM::_0x3C8F74E8FE751614();
		CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 489 /*PCF_0xF9EE4C8A*/, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489 /*PCF_0xF9EE4C8A*/, true);
		}
		if (bVar4)
		{
			if (bVar5)
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
			}
			else
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_WATCHING_A_SHOW"));
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
		else
		{
			if (bVar5)
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
			}
			if (!func_2(Global_1394141.f_1326, 8))
			{
				if (VOLUME::DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && VOLUME::_GET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 2, false))
					{
						if ((iLocal_2 != joaat("WEAPON_UNARMED") && iLocal_2 != joaat("OBJECT_1")) && iLocal_2 != joaat("OBJECT_2"))
						{
							if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_93(0), iLocal_2, false))
							{
								INVENTORY::_INVENTORY_ENABLE_ITEM(func_93(0), iLocal_2);
								func_94(iLocal_2);
							}
						}
						if (VOLUME::_GET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
						{
							VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
						}
						func_7(&(Global_1394141.f_1326), 8);
					}
				}
			}
		}
		func_96();
	}
	else
	{
		func_97();
		func_95(&iLocal_2, 1);
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 489 /*PCF_0xF9EE4C8A*/, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489 /*PCF_0xF9EE4C8A*/, false);
		}
	}
}

void func_13(int iParam0, float fParam1)
{
	switch (iParam0->f_2)
	{
		case 0:
			if (func_8(iParam0) == 6 && !func_98())
			{
				func_99(&(iParam0->f_2), 1);
			}
			if (((func_4(Global_35, Global_1394141.f_7[*iParam0 /*31*/].f_4, 1, 0) && !func_98()) && func_8(iParam0) >= 6) && !func_4(Global_35, iParam0->f_35[3], 1, 0))
			{
				func_99(&(iParam0->f_2), 1);
			}
			break;
		case 1:
			if (func_100(*iParam0))
			{
				func_99(&(iParam0->f_2), 2);
			}
			break;
		case 2:
			if (func_98() && !func_4(Global_35, Global_1394141.f_7[*iParam0 /*31*/].f_4, 1, 0))
			{
				func_99(&(iParam0->f_2), 3);
			}
			if (func_8(iParam0) == 10 || func_8(iParam0) == 11)
			{
				if (fParam1 > 17.0f)
				{
					func_99(&(iParam0->f_2), 3);
				}
			}
			break;
		case 3:
			if (func_80(*iParam0))
			{
				func_99(&(iParam0->f_2), 0);
			}
			break;
	}
}

bool func_14(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_101(bParam1, bParam2, bParam3);
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

int func_15(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1 || !func_2(Global_1394141.f_1325, (1 << 31)))
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (!func_2(Global_1394141.f_1325, 1))
	{
		iVar1 = func_102(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar3 = iVar0;
			if (func_105(uParam0[iVar0 /*5*/], func_103(iParam1), func_104(iParam1, iVar3), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_7(&(Global_1394141.f_1325), 1);
		}
	}
	iVar2 = 0;
	if (!func_2(Global_1394141.f_1325, 8))
	{
		iVar1 = func_106(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar4 = iVar0;
			if (func_105(&(uParam0->f_31[iVar0 /*5*/]), func_107(iParam1), func_108(iParam1, iVar4), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_7(&(Global_1394141.f_1325), 8);
		}
	}
	iVar2 = 0;
	if (!func_2(Global_1394141.f_1325, (1 << 11)))
	{
		iVar1 = func_109(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar5 = iVar0;
			if (func_105(&(uParam0->f_107[iVar0 /*5*/]), func_110(iParam1), func_111(iParam1, iVar5), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_7(&(Global_1394141.f_1325), (1 << 11));
		}
	}
	switch (iParam1)
	{
		case 0:
			if (!func_2(Global_1394141.f_1325, 64) && func_105(&(uParam0->f_118[0 /*5*/]), func_112(iParam1, 0), func_113(iParam1, 0), 1065353216))
			{
				func_7(&(Global_1394141.f_1325), 64);
			}
			if ((!func_2(Global_1394141.f_1325, (1 << 14)) && func_105(&(uParam0->f_118[1 /*5*/]), func_112(iParam1, 1), func_113(iParam1, 1), 1065353216)) && func_105(&(uParam0->f_118[2 /*5*/]), func_112(iParam1, 2), func_113(iParam1, 2), 1065353216))
			{
				func_7(&(Global_1394141.f_1325), (1 << 14));
			}
			break;
		case 1:
		case 2:
			iVar2 = 0;
			if (!func_2(Global_1394141.f_1325, (1 << 21)))
			{
				iVar1 = func_114(iParam1);
				iVar0 = 0;
				while (iVar0 <= (iVar1 - 1))
				{
					iVar6 = iVar0;
					if (func_105(&(uParam0->f_118[iVar0 /*5*/]), func_112(iParam1, 0), func_113(iParam1, iVar6), 1065353216))
					{
						iVar2++;
					}
					iVar0++;
				}
				if (iVar2 >= iVar1)
				{
					func_7(&(Global_1394141.f_1325), (1 << 21));
				}
			}
			break;
	}
	return 1;
}

void func_16(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (func_2(Global_1394141.f_1325, 1))
	{
		if (func_2(Global_1394141.f_1325, 2) && func_118(uParam0, func_115(uParam0), &(uParam0->f_229), func_116(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141.f_1325), 2);
		}
		if (func_2(Global_1394141.f_1325, 4) && func_120(uParam0, func_119(uParam0), &(uParam0->f_229), func_116(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141.f_1325), 4);
		}
	}
	if (func_2(Global_1394141.f_1325, 8))
	{
		if (func_2(Global_1394141.f_1325, 16) && func_118(&(uParam0->f_31), func_121(uParam0), &(uParam0->f_232), func_122(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141.f_1325), 16);
		}
		if (func_2(Global_1394141.f_1325, 32) && func_120(&(uParam0->f_31), func_123(uParam0), &(uParam0->f_232), func_122(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141.f_1325), 32);
		}
	}
	if (func_2(Global_1394141.f_1325, (1 << 11)))
	{
		if (func_2(Global_1394141.f_1325, (1 << 12)) && func_118(&(uParam0->f_107), func_124(uParam0), &(uParam0->f_235), func_125(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141.f_1325), (1 << 12));
		}
		if (func_2(Global_1394141.f_1325, (1 << 13)) && func_120(&(uParam0->f_107), func_126(uParam0), &(uParam0->f_235), func_125(uParam0), func_117(uParam0)))
		{
			func_3(&(Global_1394141.f_1325), (1 << 13));
		}
	}
	if (iParam1 == 0)
	{
		if (func_2(Global_1394141.f_1325, 64))
		{
			if (func_2(Global_1394141.f_1325, 128) && func_129(&(uParam0->f_118[0 /*5*/]), func_127(uParam0), &(uParam0->f_238), func_128(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141.f_1325), 128);
			}
			if (func_2(Global_1394141.f_1325, 256) && func_131(&(uParam0->f_118[0 /*5*/]), func_130(uParam0), &(uParam0->f_238), func_128(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141.f_1325), 256);
			}
			if (func_2(Global_1394141.f_1325, (1 << 9)) && func_129(&(uParam0->f_118[0 /*5*/]), func_127(uParam0), &(uParam0->f_238), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141.f_1325), (1 << 9));
			}
			if (func_2(Global_1394141.f_1325, (1 << 10)) && func_131(&(uParam0->f_118[0 /*5*/]), func_130(uParam0), &(uParam0->f_238), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141.f_1325), (1 << 10));
			}
		}
		if (func_2(Global_1394141.f_1325, (1 << 14)))
		{
			if (func_2(Global_1394141.f_1325, (1 << 15)) && func_134(1, 2, &(uParam0->f_118), func_132(uParam0), &(uParam0->f_241), func_133(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141.f_1325), (1 << 15));
			}
			if (func_2(Global_1394141.f_1325, (1 << 16)) && func_136(1, 2, &(uParam0->f_118), func_135(uParam0), &(uParam0->f_241), func_133(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141.f_1325), (1 << 16));
			}
			if (func_2(Global_1394141.f_1325, (1 << 17)) && func_134(1, 2, &(uParam0->f_118), func_132(uParam0), &(uParam0->f_241), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141.f_1325), (1 << 17));
			}
			if (func_2(Global_1394141.f_1325, (1 << 18)) && func_136(1, 2, &(uParam0->f_118), func_135(uParam0), &(uParam0->f_241), 0.5f, func_117(uParam0)))
			{
				func_3(&(Global_1394141.f_1325), (1 << 18));
			}
		}
		if (func_2(Global_1394141.f_1325, (1 << 19)))
		{
			bVar0 = true;
			if (!func_118(&(uParam0->f_31), func_121(uParam0), &(uParam0->f_232), 0.1f, func_117(uParam0)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_3(&(Global_1394141.f_1325), (1 << 19));
			}
		}
		if (func_2(Global_1394141.f_1325, (1 << 20)))
		{
			bVar1 = true;
			if (!func_120(&(uParam0->f_31), func_123(uParam0), &(uParam0->f_232), 0.1f, func_117(uParam0)))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_3(&(Global_1394141.f_1325), (1 << 20));
			}
		}
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (func_2(Global_1394141.f_1325, (1 << 21)))
		{
			if (func_2(Global_1394141.f_1325, (1 << 22)) && func_118(&(uParam0->f_118), func_137(uParam0), &(uParam0->f_238), func_138(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141.f_1325), (1 << 22));
			}
			if (func_2(Global_1394141.f_1325, (1 << 23)) && func_120(&(uParam0->f_118), func_139(uParam0), &(uParam0->f_238), func_138(uParam0), func_117(uParam0)))
			{
				func_3(&(Global_1394141.f_1325), (1 << 23));
			}
		}
	}
}

void func_17(int iParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_49))
	{
		return;
	}
	switch (iParam0->f_13)
	{
		case 0:
			if (!func_142(iParam0->f_49, func_140(1), func_141()))
			{
				return;
			}
			func_143(&(iParam0->f_13), 1);
			break;
		case 1:
			if (func_2(iParam0->f_16, (1 << 31)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_49, func_144(), iParam0->f_57, 0);
				func_145(iParam0->f_49, func_140(1), func_141());
				func_143(&(iParam0->f_13), 2);
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_49, func_140(1)))
			{
				func_146(iParam0->f_49, func_140(2), func_141());
				func_3(&(iParam0->f_16), (1 << 31));
				func_143(&(iParam0->f_13), 3);
			}
			break;
		case 3:
			if (!func_142(iParam0->f_49, func_140(2), func_141()))
			{
				return;
			}
			func_143(&(iParam0->f_13), 4);
			break;
		case 4:
			if (Global_1394141.f_1321)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_49, func_144(), iParam0->f_57, 0);
				func_145(iParam0->f_49, func_140(2), func_141());
				func_143(&(iParam0->f_13), 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_49, func_140(2)))
			{
				func_146(iParam0->f_49, func_140(1), func_141());
				func_143(&(iParam0->f_13), 0);
			}
			break;
	}
}

void func_18(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!iParam0->f_1070)
	{
		return;
	}
	bVar0 = PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC"));
	bVar1 = func_4(Global_35, iParam0->f_35[1], 1, 0);
	bVar2 = func_4(Global_35, iParam0->f_35[2], 1, 0);
	if (bVar0)
	{
		if (bVar1)
		{
			if (!func_2(iParam0->f_16, (1 << 11)) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_1088))
			{
				if (CAM::_IS_CAM_DATA_DICT_LOADED(&(iParam0->f_1101)) && !CAM::_IS_CAMERA_AVAILABLE(&(iParam0->f_1101)))
				{
					CAM::_CAM_CREATE(&(iParam0->f_1101));
					func_7(&(iParam0->f_16), (1 << 11));
				}
			}
		}
		if (bVar2)
		{
			if (!func_2(iParam0->f_16, (1 << 11)) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_1088))
			{
				if (CAM::_IS_CAM_DATA_DICT_LOADED(&(iParam0->f_1117)) && !CAM::_IS_CAMERA_AVAILABLE(&(iParam0->f_1117)))
				{
					CAM::_CAM_CREATE(&(iParam0->f_1117));
				}
			}
		}
	}
	else
	{
		if (CAM::_IS_CAMERA_AVAILABLE(&(iParam0->f_1101)))
		{
			CAM::_CAM_DESTROY(&(iParam0->f_1101));
			func_3(&(iParam0->f_16), (1 << 11));
		}
		if (CAM::_IS_CAMERA_AVAILABLE(&(iParam0->f_1117)))
		{
			CAM::_CAM_DESTROY(&(iParam0->f_1117));
			func_3(&(iParam0->f_16), (1 << 11));
		}
	}
}

void func_19(int iParam0)
{
}

bool func_20(int iParam0)
{
	return iParam0 != 0;
}

bool func_21(int iParam0)
{
	return iParam0->f_10;
}

void func_22(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iParam0->f_88[iVar0] = 0;
		iVar0++;
	}
}

void func_23(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		(uParam0[iVar0 /*5*/])->f_2 = 1.0f;
		(uParam0[iVar0 /*5*/])->f_3 = 0.0f;
		(uParam0[iVar0 /*5*/])->f_4 = 1.0f;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		uParam0->f_31[iVar0 /*5*/].f_2 = 1.0f;
		uParam0->f_31[iVar0 /*5*/].f_3 = 0.0f;
		uParam0->f_31[iVar0 /*5*/].f_4 = 1.0f;
		uParam0->f_31[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_107[iVar0 /*5*/].f_2 = 1.0f;
		uParam0->f_107[iVar0 /*5*/].f_3 = 0.0f;
		uParam0->f_107[iVar0 /*5*/].f_4 = 1.0f;
		uParam0->f_107[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		uParam0->f_118[iVar0 /*5*/].f_2 = 1.0f;
		uParam0->f_118[iVar0 /*5*/].f_3 = 0.0f;
		uParam0->f_118[iVar0 /*5*/].f_4 = 1.0f;
		uParam0->f_118[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	func_7(&(Global_1394141.f_1325), (1 << 31));
}

void func_24(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

void func_25(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_147() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_148(iVar1) && !func_149(iVar1, iParam2)) && (!bParam3 || !func_150(iVar1))) && (!bParam4 || !func_151(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_152(iVar0);
			}
		}
		iVar0++;
	}
}

void func_26()
{
	if (!func_148(Global_1327479))
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
	func_153(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0->f_74[0] = joaat("CS_SWORDDANCER");
	iParam0->f_58[0] = joaat("P_SWORD01X");
	iParam0->f_946 = "SHRCTAU";
	iParam0->f_945 = "SHSDAUD";
	iParam0->f_910 = sLocal_8.f_0;
	func_7(&(iParam0->f_16), (1 << 17));
	if (func_154())
	{
		func_155(&(iParam0->f_954), Global_35, "JOHN", 0);
	}
	else
	{
		func_155(&(iParam0->f_954), Global_35, "ARTHUR", 0);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		iParam0->f_48 = ANIMSCENE::_CREATE_ANIM_SCENE(func_156(), 2, func_157(0), false, true);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		iVar1 = iVar0;
		iLocal_1149[iVar0] = MISC::GET_HASH_KEY(func_158(iVar1));
		iVar0++;
	}
	PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < iParam0->f_58)
	{
		iVar1 = iParam0->f_58[iVar0];
		if (func_20(iVar1))
		{
			STREAMING::REQUEST_MODEL(iVar1, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_74)
	{
		iVar2 = iParam0->f_74[iVar0];
		if (func_20(iVar2))
		{
			STREAMING::REQUEST_MODEL(iVar2, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iVar3 = iParam0->f_88[iVar0];
		if (iVar3 != 0)
		{
			if (WEAPON::IS_WEAPON_VALID(iVar3))
			{
				WEAPON::_REQUEST_WEAPON_ASSET(iVar3, -1, false);
			}
		}
		iVar0++;
	}
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		STREAMING::REQUEST_MODEL(iParam0->f_56, false);
	}
	STREAMING::REQUEST_ANIM_DICT(func_159());
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_48) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_48, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_48);
	}
}

void func_29(int iParam0)
{
	iParam0->f_10 = 0;
}

bool func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(func_76(iParam0->f_1));
	if (!func_2(iParam0->f_16, (1 << 22)))
	{
		if (INTERIOR::IS_VALID_INTERIOR(iVar1))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar1);
			func_7(&(iParam0->f_16), (1 << 22));
			return false;
		}
	}
	else if (!INTERIOR::IS_INTERIOR_READY(iVar1))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_945))
	{
		if (HUD::_DOES_TEXT_BLOCK_EXIST(iParam0->f_945))
		{
			HUD::TEXT_BLOCK_REQUEST(iParam0->f_945);
		}
		if (!HUD::TEXT_BLOCK_IS_LOADED(iParam0->f_945))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_946) && !iParam0->f_14)
	{
		if (HUD::_DOES_TEXT_BLOCK_EXIST(iParam0->f_946))
		{
			HUD::TEXT_BLOCK_REQUEST(iParam0->f_946);
		}
		if (!HUD::TEXT_BLOCK_IS_LOADED(iParam0->f_946))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_58)
	{
		iVar2 = iParam0->f_58[iVar0];
		if (func_20(iVar2))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar2))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_74)
	{
		iVar3 = iParam0->f_74[iVar0];
		if (func_20(iVar3))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar3))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iVar4 = iParam0->f_88[iVar0];
		if (iVar4 != 0)
		{
			if (WEAPON::IS_WEAPON_VALID(iVar4) && !WEAPON::_HAS_WEAPON_ASSET_LOADED(iVar4))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0->f_56))
		{
			return false;
		}
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_48, true, false))
		{
			return false;
		}
	}
	if (!AUDIO::PREPARE_SOUNDSET(func_53(), true))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_159()))
	{
		return false;
	}
	if (!func_160(iParam0))
	{
		return false;
	}
	if (!func_161(iParam0))
	{
		return false;
	}
	return true;
}

int func_31(int iParam0)
{
	strcpy_s(&(iParam0->f_1101), 64, "camera_treatments");
	strcpy_s(&(iParam0->f_1101.f_8), 64, "THEATRE_CUSTOM_TREATMENT_REQUEST");
	strcpy_s(&(iParam0->f_1117), 64, "camera_treatments");
	strcpy_s(&(iParam0->f_1117.f_8), 64, "THEATRE_RIGHT_SIDE_CUSTOM_TREATMENT_REQUEST");
	CAM::_LOAD_CAMERA_DATA_DICT(&(iParam0->f_1117));
	return 1;
}

bool func_32(int iParam0)
{
	int iVar0;

	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		if (!func_162(&(iParam0->f_57), iParam0->f_56, iParam0->f_45))
		{
			return false;
		}
		if (!func_165(&(iParam0->f_49), &(iParam0->f_16), func_163(), func_164(0), 1))
		{
			return false;
		}
		if (!func_142(iParam0->f_49, func_164(1), func_163()))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (STREAMING::IS_MODEL_VALID(iParam0->f_74[iVar0]))
		{
			if (!func_166(&(iParam0->f_81[iVar0]), iParam0->f_74[iVar0], iParam0->f_42, 0.0f))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!func_167(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((STREAMING::IS_MODEL_VALID(iParam0->f_74[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_81[iVar0]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_81[iVar0], "Default_Show_Performers_Group", -1.0f);
		}
		iVar0++;
	}
	func_168(iParam0);
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_49, "CURTAIN", iParam0->f_57, 0);
	}
	return true;
}

void func_33(int iParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		return;
	}
	func_169(iParam0);
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_48, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_48);
	}
}

void func_34(int iParam0)
{
	struct<10> /*80*/ sVar0;

	if (iParam0->f_1 == 0)
	{
		return;
	}
	sVar0 = { func_170(1, iParam0->f_1) /*11*/ };
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_35[1]))
	{
		iParam0->f_35[1] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_10, sVar0, sVar0.f_3, sVar0.f_6, sVar0.f_9);
	}
	sVar0 = { func_170(2, iParam0->f_1) /*11*/ };
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_35[2]))
	{
		iParam0->f_35[2] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_10, sVar0, sVar0.f_3, sVar0.f_6, sVar0.f_9);
	}
	sVar0 = { func_170(3, iParam0->f_1) /*11*/ };
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_35[3]))
	{
		iParam0->f_35[3] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_10, sVar0, sVar0.f_3, sVar0.f_6, sVar0.f_9);
	}
	sVar0 = { func_170(4, iParam0->f_1) /*11*/ };
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_35[4]))
	{
		iParam0->f_35[4] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_10, sVar0, sVar0.f_3, sVar0.f_6, sVar0.f_9);
	}
}

void func_35(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam1)
	{
		case 0:
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(56);
			iVar0 = 0;
			while (iVar0 <= (12 - 1))
			{
				iVar1 = iVar0;
				if (func_171(iVar1, *uParam0))
				{
					STREAMING::REQUEST_ANIM_DICT(func_172(iVar1));
				}
				iVar0++;
			}
			uParam0->f_17 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			break;
		case 1:
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(22);
			STREAMING::REQUEST_ANIM_DICT(func_172(0));
			break;
		case 2:
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(22);
			STREAMING::REQUEST_ANIM_DICT(func_172(0));
			break;
		case 3:
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(10);
			STREAMING::REQUEST_ANIM_DICT(func_172(0));
			break;
		case 4:
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(23);
			STREAMING::REQUEST_ANIM_DICT(func_172(0));
			break;
	}
}

bool func_36(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 <= (12 - 1))
			{
				iVar1 = iVar0;
				if (func_171(iVar1, *uParam0) && !STREAMING::HAS_ANIM_DICT_LOADED(func_172(iVar1)))
				{
					bVar2 = false;
				}
				iVar0++;
			}
			if (!bVar2)
			{
				return false;
			}
			if (!func_174(&(uParam0->f_12[1 /*2*/]), func_173(1, uParam0->f_17), 0))
			{
				return false;
			}
			if (!func_174(&(uParam0->f_12[0 /*2*/]), func_173(0, uParam0->f_17), 0))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_37(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_175(iParam1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar0 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar2 /*10*/]))
		{
			iVar3 = POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_176(iParam1), func_177(iParam1, iVar2), joaat("SPECIES_HUMAN"), false, true, func_178(iParam1, iVar2));
			bVar1 = false;
			if (func_2(Global_1394141.f_1326, 16))
			{
				if (iVar2 == 4)
				{
					iVar3 = joaat("U_M_M_ODDFELLOWPARTICIPANT_01");
					bVar1 = true;
				}
			}
			else if (iParam2 == 0)
			{
				if (iVar2 == 5)
				{
					iVar3 = joaat("U_M_M_BULLETCATCHVOLUNTEER_01");
					bVar1 = true;
				}
				else if (iVar2 == 31)
				{
					iVar3 = joaat("U_M_M_CABARETFIREHAT_01");
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				STREAMING::REQUEST_MODEL(iVar3, false);
			}
			if (bVar1 && !STREAMING::HAS_MODEL_LOADED(iVar3))
			{
				return false;
			}
			if (STREAMING::IS_MODEL_VALID(iVar3))
			{
				(*uParam0)[iVar2 /*10*/] = func_181(iVar3, func_178(iParam1, iVar2), func_179(iParam1, iVar2), 1, 1, func_180(iParam1, iVar2), 1, 1, 1, 0, 0, 0, 0);
			}
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar2 /*10*/]))
		{
			return false;
		}
		iVar2++;
	}
	return true;
}

bool func_38(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!func_182(uParam1, iParam2))
	{
		return false;
	}
	iVar0 = func_175(iParam2);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((func_183(iVar1, uParam1->f_17) && iParam2 == 0) && !uParam1->f_20)
		{
			(uParam0[iVar1 /*10*/])->f_1 = 6;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_12[1 /*2*/], func_184(1, iVar1, uParam1->f_17), (*uParam0)[iVar1 /*10*/], 0);
		}
		else if (func_185(iParam2))
		{
			(uParam0[iVar1 /*10*/])->f_1 = 1;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			func_186(uParam0[iVar1 /*10*/], iParam2);
		}
		else
		{
			(uParam0[iVar1 /*10*/])->f_1 = 1;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			func_187(uParam0[iVar1 /*10*/], iParam2);
		}
		iVar1++;
	}
	return true;
}

bool func_39(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_175(iParam1);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1 /*10*/]))
		{
			PED::SET_PED_CONFIG_FLAG((*uParam0)[iVar1 /*10*/], 301 /*PCF_DisableInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG((*uParam0)[iVar1 /*10*/], 448 /*PCF_TreatAsMissionPopTypeForSpeech*/, true);
			AUDIO::STOP_PED_SPEAKING((*uParam0)[iVar1 /*10*/], true);
			PED::SET_PED_CAN_BE_TARGETTED((*uParam0)[iVar1 /*10*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[iVar1 /*10*/], joaat("REL_PLAYER_ALLY"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar1 /*10*/], true);
			func_188((*uParam0)[iVar1 /*10*/], 0);
		}
		iVar1++;
	}
	return true;
}

bool func_40(var uParam0)
{
	return func_189(*uParam0, 1);
}

void func_41(var uParam0)
{
	func_190(uParam0, 0.0f);
}

float func_42(var uParam0)
{
	if (!func_40(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_191(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_192() - uParam0->f_1);
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_44(int iParam0)
{
	if (iParam0->f_15)
	{
	}
}

void func_45(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (*uParam0)
	{
		case 0:
			if (!func_193(uParam0->f_1))
			{
				func_194(uParam0, 5);
				return;
			}
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
			STREAMING::REQUEST_MODEL(func_195(), false);
			STREAMING::REQUEST_MODEL(func_196(0), false);
			func_194(uParam0, 1);
			break;
		case 1:
			if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_195()) || !STREAMING::HAS_MODEL_LOADED(func_196(0)))
			{
				return;
			}
			bVar0 = func_197(uParam0->f_1);
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
			{
				if (bVar0)
				{
					uParam0->f_2 = func_181(func_195(), func_198(uParam0->f_1), func_199(uParam0->f_1), 1, 1, 1, 1, 1, 0, 0, 1, 0, 0);
				}
				else
				{
					uParam0->f_2 = func_181(func_195(), func_198(uParam0->f_1), func_199(uParam0->f_1), 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
			{
				return;
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, true);
				if (bVar0)
				{
					func_201(uParam0->f_2, func_200(uParam0->f_1));
				}
			}
			iVar1 = 0;
			while (iVar1 <= (5 - 1))
			{
				iVar2 = iVar1;
				uParam0->f_3[iVar1] = OBJECT::CREATE_OBJECT(func_196(iVar2), func_202(iVar2), true, true, false, false, true);
				iVar1++;
			}
			func_194(uParam0, 2);
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_9))
			{
				uParam0->f_9 = ANIMSCENE::_CREATE_ANIM_SCENE(func_203(iParam1), 0, func_204(iParam1, 0), false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_9);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, func_205(iParam1), func_206(iParam1), 2);
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_9, true, false))
			{
				func_194(uParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_9))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, func_207(iParam1), uParam0->f_2, 0);
				iVar3 = 0;
				while (iVar3 <= (5 - 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, func_208(iParam1, iVar3), uParam0->f_3[iVar3], 0);
					iVar3++;
				}
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_9);
				func_194(uParam0, 4);
			}
			break;
		case 4:
			if (uParam0->f_10)
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_9, func_204(iParam1, 1)))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_9, func_204(iParam1, 1)))
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_9, func_204(iParam1, 1));
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_9, func_204(iParam1, 1), true);
					}
				}
			}
			break;
		case 5:
			break;
	}
}

bool func_46(int iParam0)
{
	return true;
}

int func_47(var uParam0)
{
	if (!func_40(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_191(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_209() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

float func_48(var uParam0)
{
	if (!func_40(uParam0))
	{
		return 0.0f;
	}
	if (func_191(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_192() - uParam0->f_1);
}

int func_49(int iParam0, int iParam1)
{
	struct<7> /*56*/ sVar0;

	sVar0 = { func_170(0, iParam1) /*11*/ };
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_35[0]))
	{
		iParam0->f_35[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar0.f_10, sVar0, sVar0.f_3, sVar0.f_6, sVar0.f_9);
	}
	else
	{
		VOLUME::SET_VOLUME_COORDS(iParam0->f_35[0], sVar0);
		VOLUME::SET_VOLUME_ROTATION(iParam0->f_35[0], sVar0.f_3);
		VOLUME::SET_VOLUME_SCALE(iParam0->f_35[0], sVar0.f_6);
	}
	return 1;
}

void func_50(int iParam0)
{
	if (iParam0->f_1071 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1088))
	{
		return;
	}
	if (!iParam0->f_1072)
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_1088, true);
	}
	GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
	GRAPHICS::SET_TV_VOLUME(iParam0->f_1095);
	if (iParam0->f_1072)
	{
		if (iParam0->f_1 != 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1088))
			{
				GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam0->f_1088);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089))
		{
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam0->f_1089);
		}
		else
		{
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam0->f_1088);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089))
		{
			OBJECT::_SET_LIGHT_INTENSITY_FOR_OBJECT(iParam0->f_1089, 5.0f);
		}
	}
	GRAPHICS::SET_TV_CHANNEL(-1);
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, iParam0->f_1076, true);
	GRAPHICS::SET_TV_CHANNEL(0);
	if (AUDIO::LOAD_STREAM("Audience", func_210(*iParam0)))
	{
		iParam0->f_1100 = AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION("Audience", func_210(*iParam0));
		AUDIO::PLAY_STREAM_FROM_POSITION(iParam0->f_1097, iParam0->f_1100);
	}
}

void func_51(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			func_211();
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			func_212();
			break;
	}
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEER_SMALL";
		case 1:
			return "CHEER_MEDIUM";
		case 2:
			return "CHEER_LARGE";
		case 3:
			return "JEER_SMALL";
		case 4:
			return "JEER_MEDIUM";
		case 5:
			return "JEER_LARGE";
		case 6:
			return "CROWD_LISTENS_TO_SHOW";
		default:
			break;
	}
	return "CHEER_SMALL";
}

char* func_53()
{
	return "SHOWS_sounds";
}

void func_54(char* sParam0, char* sParam1)
{
	AUDIO::PLAY_SOUND_FRONTEND(sParam0, sParam1, true, 0);
}

char* func_55(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "Curtain_Open_Music";
		case 10:
			return "Curtain_Opens_Music";
		case 11:
			return "Escape_Noose_Curtain_Music";
		default:
			break;
	}
	return "";
}

char* func_56(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "3160317806_action";
		case 10:
			return "2245181467_action";
		case 11:
			return "4224921010_action";
		default:
			break;
	}
	return "";
}

void func_57(var uParam0, var uParam1, int iParam2)
{
	if (func_2(uParam0->f_18, 1) && !func_2(uParam0->f_18, 2))
	{
		STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR"), 15, 0, 0);
		func_7(&(uParam0->f_18), 2);
	}
	if (func_2(uParam0->f_18, 2) && !func_2(uParam0->f_18, 4))
	{
		if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR"), false))
		{
			func_7(&(uParam0->f_18), 4);
		}
	}
	if (func_2(uParam0->f_18, 8) && !func_2(uParam0->f_18, 16))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(func_213(iParam2));
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_213(iParam2)))
		{
			func_7(&(uParam0->f_18), 16);
		}
	}
	func_214(uParam0, uParam1, iParam2);
	switch (Global_1394141.f_1332)
	{
		case 0:
			break;
		default:
			if (Global_1394141.f_1332 != Global_1394141.f_1333)
			{
				func_216(uParam0, uParam1, iParam2, func_215(*uParam0, uParam0->f_1, Global_1394141.f_1332));
				Global_1394141.f_1333 = Global_1394141.f_1332;
			}
			break;
	}
}

bool func_58(int iParam0)
{
	return (Global_1310750.f_16035 & iParam0) != 0;
}

void func_59(int iParam0)
{
	Global_1310750.f_16035 -= (Global_1310750.f_16035 & iParam0);
}

void func_60(var uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) /*3*/ };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) - Global_36 /*3*/ };
	vVar3 = { func_217(vVar3) /*3*/ };
	fVar6 = func_218(vVar3, vVar0);
	if (fVar6 >= 0.2f)
	{
		func_219(uParam0);
	}
}

void func_61(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		return;
	}
	if ((func_2(iParam0->f_16, (1 << 18)) && iParam0->f_41 != 2) && iParam0->f_41 != 3)
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(iParam0->f_12);
		func_220(iParam0);
		func_221(&(iParam0->f_41), 2);
	}
	if (func_2(Global_1394141.f_1326, (1 << 9)))
	{
		if (!func_2(iParam0->f_16, (1 << 20)))
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(iParam0->f_81[iVar0], 301 /*PCF_DisableInteractionLockonOnTargetPed*/, true);
				}
				iVar0++;
			}
			func_7(&(iParam0->f_16), (1 << 20));
		}
	}
	else if (func_2(iParam0->f_16, (1 << 20)))
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[iVar1]))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_81[iVar1], 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
			}
			iVar1++;
		}
		func_3(&(iParam0->f_16), (1 << 20));
	}
	switch (iParam0->f_41)
	{
		case 0:
			iParam0->f_1052 = 0;
			iParam0->f_953 = 8500;
			func_41(&(iParam0->f_950));
			MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iParam0->f_12, "", 20.0f, 0.0f, 4, 0.0f, 0.0f, 0, false, -1);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_12, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_12, 315 /*PCF_0xD38AEF95*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_12, 130 /*PCF_DisableTalkTo*/, true);
			func_221(&(iParam0->f_41), 1);
			break;
		case 1:
			iVar3 = func_222(iParam0->f_12);
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &iVar2, false, false) && iVar2 == iVar3)
			{
				if ((func_2(iParam0->f_16, (1 << 17)) && !func_2(Global_1394141.f_1326, (1 << 9))) && !func_2(Global_1394141.f_1326, (1 << 14)))
				{
					if (!func_40(&(iParam0->f_947)))
					{
						func_41(&(iParam0->f_947));
					}
					else if (!func_223(iParam0->f_1053[1]) || !func_223(iParam0->f_1053[0]))
					{
						func_224(iParam0, &Global_35);
						if (func_47(&(iParam0->f_947)) > iParam0->f_953)
						{
							func_225(iParam0->f_1053[1], 1, 1);
							func_225(iParam0->f_1053[0], 1, 1);
						}
					}
					else if (func_47(&(iParam0->f_947)) > iParam0->f_953 || func_2(iParam0->f_16, (1 << 19)))
					{
						if (!func_226(iParam0->f_1053[1], 0))
						{
							func_3(&(iParam0->f_16), 16);
							func_225(iParam0->f_1053[1], 1, 1);
						}
						if (!func_226(iParam0->f_1053[0], 0))
						{
							func_3(&(iParam0->f_16), 32);
							func_225(iParam0->f_1053[0], 1, 1);
						}
						if (func_227(&(iParam0->f_1053[1])))
						{
							func_225(iParam0->f_1053[1], 0, 1);
							func_225(iParam0->f_1053[0], 0, 1);
							if (func_2(iParam0->f_16, (1 << 19)))
							{
								func_3(&(iParam0->f_16), (1 << 19));
							}
							if (func_2(Global_1394141.f_1326, (1 << 15)))
							{
								if (func_228(iParam0))
								{
									iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
									if (iVar4 < 4)
									{
										func_229();
									}
									iParam0->f_953 = 8500;
									func_41(&(iParam0->f_947));
								}
							}
							else
							{
								func_229();
								iParam0->f_953 = 8500;
								func_41(&(iParam0->f_947));
							}
						}
						else if (func_227(&(iParam0->f_1053[0])))
						{
							func_225(iParam0->f_1053[1], 0, 1);
							func_225(iParam0->f_1053[0], 0, 1);
							if (func_2(iParam0->f_16, (1 << 19)))
							{
								func_3(&(iParam0->f_16), (1 << 19));
							}
							if (func_230(iParam0))
							{
								iParam0->f_953 = 8500;
								func_41(&(iParam0->f_947));
							}
						}
					}
					else
					{
						if (func_226(iParam0->f_1053[1], 0))
						{
							func_225(iParam0->f_1053[1], 0, 1);
						}
						if (func_226(iParam0->f_1053[0], 0))
						{
							func_225(iParam0->f_1053[0], 0, 1);
						}
					}
				}
				else
				{
					if (func_226(iParam0->f_1053[1], 1))
					{
						func_225(iParam0->f_1053[1], 0, 1);
					}
					if (func_226(iParam0->f_1053[0], 1))
					{
						func_225(iParam0->f_1053[0], 0, 1);
					}
				}
				if (func_2(iParam0->f_16, 256))
				{
					if (!func_231(&(iParam0->f_1053[2]), &Global_35, "INTERACT_DRAW", joaat("INPUT_CONTEXT_RT")))
					{
						return;
					}
					else if (!func_233(func_232(Global_35, 0, 0, 0)) && !func_233(func_232(Global_35, 0, 1, 0)))
					{
						if (!func_226(iParam0->f_1053[2], 0))
						{
							func_225(iParam0->f_1053[2], 1, 1);
						}
						else if (func_234(iParam0->f_1053[2], 1))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar5, true, 2, false))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar5, false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
								func_225(iParam0->f_1053[2], 0, 1);
							}
						}
					}
					else if (func_226(iParam0->f_1053[2], 0))
					{
						func_225(iParam0->f_1053[2], 0, 1);
					}
				}
				else if (func_226(iParam0->f_1053[2], 1))
				{
					func_225(iParam0->f_1053[2], 0, 1);
				}
			}
			else
			{
				func_220(iParam0);
			}
			break;
		case 2:
			func_220(iParam0);
			if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0->f_48) / ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam0->f_48)) < 0.85f)
			{
				return;
			}
			func_221(&(iParam0->f_41), 3);
			break;
		case 3:
			if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0->f_48) / ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam0->f_48)) < 0.99f && AUDIO::_HAS_SOUND_AUDIO_NAME_FINISHED(func_52(iParam0->f_944), func_53()))
			{
				func_54(func_52(iParam0->f_944), func_53());
			}
			break;
	}
}

void func_62(int iParam0)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2;
	float fVar5;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[iVar0]) && !Global_1935630.f_12)
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(iParam0->f_81[iVar0], true, false), true);
				if (fVar1 < 5.0f)
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_81[iVar0], true, false) - ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
					fVar5 = func_218(func_217(vVar2), func_217(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0->f_81[iVar0])));
					if (fVar5 < 0.0f)
					{
						func_235(&(iParam0->f_81[iVar0]));
					}
				}
			}
		}
		iVar0++;
	}
}

void func_63(int iParam0)
{
	bool bVar0;
	float fVar1;
	var uVar2;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		return;
	}
	func_236();
	bVar0 = ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_48, false);
	fVar1 = ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0->f_48);
	if (bVar0)
	{
		func_237(iParam0);
		switch (iLocal_1141)
		{
			case 0:
				ANIMSCENE::GET_ANIM_SCENE_ORIGIN(iParam0->f_48, &uVar2, &uLocal_1145, 2);
				Global_1394141.f_1322 = 1;
				func_238(&iLocal_1148, 1);
				func_7(&(Global_1394141.f_1325), 256);
				func_7(&(Global_1394141.f_1325), 16);
				func_239(&iLocal_1141, 1);
				break;
			case 1:
				if (fVar1 > 0.95f)
				{
					if (iParam0->f_1052 < -6)
					{
						Global_1394141.f_1324 = 1;
					}
					func_7(&(iParam0->f_16), 2);
					func_239(&iLocal_1141, 2);
				}
				break;
			case 2:
				Global_1394141.f_1321 = 1;
				if (!iParam0->f_14)
				{
					func_7(&(Global_1394141.f_1325), 4);
					func_7(&(Global_1394141.f_1325), (1 << 13));
				}
				func_7(&(Global_1394141.f_1325), 128);
				func_7(&(Global_1394141.f_1325), 32);
				func_7(&(iParam0->f_16), (1 << 23));
				func_239(&iLocal_1141, 3);
				break;
			case 3:
				break;
		}
	}
}

float func_64()
{
	return 0.95f;
}

int func_65(int iParam0)
{
	if (!func_2(iParam0->f_16, (1 << 21)))
	{
		if (GRAPHICS::GET_TV_CHANNEL() == 0)
		{
			if (!func_40(&(iParam0->f_29)))
			{
				func_41(&(iParam0->f_29));
			}
			else if (func_42(&(iParam0->f_29)) > 5.0f)
			{
				func_43(&(iParam0->f_29));
				func_7(&(iParam0->f_16), (1 << 21));
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_66(int iParam0, bool bParam1)
{
	if (GRAPHICS::GET_TV_CHANNEL() == -1)
	{
		return;
	}
	if (iParam0->f_1071)
	{
		if (!bParam1)
		{
			GRAPHICS::_0x32DE2BFFDA43E62A();
		}
		HUD::SET_TEXT_RENDER_ID(iParam0->f_1074);
		GRAPHICS::DRAW_TV_CHANNEL(iParam0->f_1093, iParam0->f_1094, iParam0->f_1091, iParam0->f_1092, 0.0f, 255, 255, 255, 128);
	}
}

bool func_67()
{
	if (GRAPHICS::GET_TV_CHANNEL() == -1)
	{
		return true;
	}
	if (GRAPHICS::IS_TVSHOW_CURRENTLY_PLAYING(joaat("END_OF_MOVIE_MARKER")))
	{
		return true;
	}
	return false;
}

struct<2> /*16*/ func_68(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_69(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_70(int iParam0)
{
	if (CAM::DOES_CAM_EXIST(iParam0->f_4))
	{
		if (CAM::IS_CAM_RENDERING(iParam0->f_4))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(iParam0->f_4, false);
		}
		CAM::DESTROY_CAM(iParam0->f_4, false);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	func_3(&(Global_1394141.f_1326), (1 << 9));
	if (func_223(iParam0->f_1053[3]))
	{
		func_240(&(iParam0->f_1053[3]), 1, 1);
	}
}

void func_71(int iParam0)
{
	if (GRAPHICS::GET_TV_CHANNEL() == -1)
	{
		return;
	}
	GRAPHICS::SET_TV_CHANNEL(-1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1088))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_1088, false);
	}
	if (iParam0->f_1072)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089))
		{
			OBJECT::_SET_LIGHT_INTENSITY_FOR_OBJECT(iParam0->f_1089, 0.0f);
			OBJECT::_SET_LIGHT_SCATTERING_DISABLED_FOR_OBJECT(iParam0->f_1089, false);
		}
	}
	if (AUDIO::IS_STREAM_PLAYING(iParam0->f_1100))
	{
		AUDIO::STOP_STREAM(iParam0->f_1100);
	}
}

void func_72(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_4(Global_35, iParam0->f_35[0], 1, 0))
	{
		bVar0 = true;
	}
	if (iParam0->f_1 == 2)
	{
		if (Global_36.f_2 > 51.8f)
		{
			bVar0 = true;
		}
	}
	switch (iParam0->f_3)
	{
		case 0:
			if (bVar0)
			{
				if (!CAM::DOES_CAM_EXIST(iParam0->f_4))
				{
					iParam0->f_4 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), func_241(iParam0->f_1, 0), func_242(iParam0->f_1, 0), CAM::GET_FINAL_RENDERED_CAM_FOV(), false, 2);
				}
				func_243(&(iParam0->f_3), 1);
			}
			break;
		case 1:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				if (!func_40(&(iParam0->f_5)))
				{
					func_41(&(iParam0->f_5));
					return;
				}
				else if (func_47(&(iParam0->f_5)) < 800)
				{
					return;
				}
			}
			else
			{
				if (func_40(&(iParam0->f_5)))
				{
					func_43(&(iParam0->f_5));
				}
				if (func_223(iParam0->f_1053[3]))
				{
					func_240(&(iParam0->f_1053[3]), 1, 1);
				}
				return;
			}
			if (!func_223(iParam0->f_1053[3]))
			{
				iParam0->f_1053[3] = func_244("INTERACT_LOOK", joaat("INPUT_FOCUS_CAM"), 6, 570, 570, 10, (1 << 30), 0, 1065353216, 0, 1, joaat("SHORT_TIMED_EVENT"), 0);
				func_245(iParam0->f_1053[3], 13, 1, 1);
			}
			else if (func_246(iParam0->f_1053[3], 1))
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_4))
				{
					if (!CAM::IS_CAM_RENDERING(iParam0->f_4))
					{
						CAM::SET_CAM_ACTIVE(iParam0->f_4, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						func_240(&(iParam0->f_1053[3]), 1, 1);
						func_7(&(Global_1394141.f_1326), (1 << 9));
						func_243(&(iParam0->f_3), 2);
					}
				}
			}
			break;
		case 2:
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				func_243(&(iParam0->f_3), 3);
			}
			break;
		case 3:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				func_3(&(Global_1394141.f_1326), (1 << 9));
				func_43(&(iParam0->f_5));
				func_243(&(iParam0->f_3), 4);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CINEMATIC_CAM_CHANGE_SHOT")))
			{
				iParam0->f_8++;
				if (iParam0->f_8 > 2)
				{
					iParam0->f_8 = 0;
				}
				CAM::SET_CAM_COORD(iParam0->f_4, func_241(iParam0->f_1, iParam0->f_8));
				CAM::SET_CAM_ROT(iParam0->f_4, func_242(iParam0->f_1, iParam0->f_8), 2);
			}
			if (func_8(iParam0) == 10 || !bVar0)
			{
				func_243(&(iParam0->f_3), 5);
			}
			break;
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				func_243(&(iParam0->f_3), 1);
			}
			break;
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			if (!bVar0)
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_4) && CAM::IS_CAM_RENDERING(iParam0->f_4))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iParam0->f_4, false);
				}
				if (func_223(iParam0->f_1053[3]))
				{
					func_240(&(iParam0->f_1053[3]), 1, 1);
				}
				func_243(&(iParam0->f_3), 0);
			}
			else if (CAM::DOES_CAM_EXIST(iParam0->f_4))
			{
				if (CAM::IS_CAM_RENDERING(iParam0->f_4))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iParam0->f_4, false);
				}
				else
				{
					CAM::DESTROY_CAM(iParam0->f_4, false);
					if (func_223(iParam0->f_1053[3]))
					{
						func_240(&(iParam0->f_1053[3]), 1, 1);
					}
					func_243(&(iParam0->f_3), 6);
				}
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			func_3(&(Global_1394141.f_1326), (1 << 9));
			break;
		case 6:
			break;
	}
}

void func_73(char* sParam0, char* sParam1)
{
	AUDIO::_STOP_SOUND_WITH_NAME(sParam0, sParam1);
}

void func_74(int iParam0)
{
	switch (sLocal_8.f_1)
	{
		case 0:
			if (!func_40(&(iParam0->f_941)))
			{
				func_41(&(iParam0->f_941));
			}
			if (func_2(iParam0->f_16, (1 << 25)))
			{
				func_78(&(iParam0->f_349), Global_1394141.f_7[*iParam0 /*31*/].f_4);
				return;
			}
			if (func_2(iParam0->f_16, (1 << 16)))
			{
				func_247(&(iParam0->f_349));
				func_3(&(iParam0->f_16), (1 << 16));
				func_7(&(iParam0->f_16), (1 << 13));
				func_7(&(iParam0->f_16), (1 << 14));
				func_7(&(iParam0->f_16), (1 << 15));
			}
			else if (!func_2(iParam0->f_16, (1 << 13)))
			{
				func_248(&(iParam0->f_349), 54, 64);
				func_7(&(iParam0->f_16), (1 << 13));
			}
			else if (!func_2(iParam0->f_16, (1 << 14)))
			{
				if (func_42(&(iParam0->f_941)) > 12.0f)
				{
					func_248(&(iParam0->f_349), 15, 26);
					func_248(&(iParam0->f_349), 40, 52);
					func_41(&(iParam0->f_941));
					func_7(&(iParam0->f_16), (1 << 14));
				}
			}
			else if (!func_2(iParam0->f_16, (1 << 15)))
			{
				if (func_42(&(iParam0->f_941)) > 12.0f)
				{
					func_248(&(iParam0->f_349), 0, 13);
					func_248(&(iParam0->f_349), 27, 39);
					func_41(&(iParam0->f_941));
					func_7(&(iParam0->f_16), (1 << 15));
				}
			}
			break;
	}
}

void func_75(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_1053)
	{
		if (func_223(iParam0->f_1053[iVar0]))
		{
			func_240(&(iParam0->f_1053[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

Vector3 func_76(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return { -779.4891f, -1362.618f, 45.14579f };
		case 1:
		case 2:
			return { 2696.776f, -1353.734f, 48.56572f };
		case 0:
			return { 2546.481f, -1299.015f, 48.74436f };
		case 3:
			return { -348.3176f, 698.5706f, 117.706f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_77(var uParam0)
{
	int iVar0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_9))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_9);
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_3[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		PED::DELETE_PED(&(uParam0->f_2));
	}
}

void func_78(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1 /*10*/]))
		{
			if (!func_4((*uParam0)[iVar1 /*10*/], iParam1, 1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar1 /*10*/]);
			}
			else
			{
				PED::DELETE_PED(uParam0[iVar1 /*10*/]);
			}
		}
		iVar1++;
	}
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		iVar1 = iVar0;
		if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_35[iVar1]))
		{
			VOLUME::DELETE_VOLUME(iParam0->f_35[iVar1]);
		}
		iVar0++;
	}
}

bool func_80(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
	{
		if (func_249() == 76)
		{
			if (func_250())
			{
				return true;
			}
		}
		else
		{
			return true;
		}
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1394141.f_7[iParam0 /*31*/].f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!func_251(iVar1) && !func_252(iVar1))
			{
				func_253(iVar1, 1, 0, 0, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_81(int iParam0)
{
	if (func_254(iParam0))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(func_213(iParam0));
	}
}

void func_82()
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 489 /*PCF_0xF9EE4C8A*/, false);
	INVENTORY::_INVENTORY_ENABLE_WEAPONS(func_93(0));
	func_3(&(Global_1394141.f_1326), 1);
	func_3(&(Global_1394141.f_1326), 2);
	func_3(&(Global_1394141.f_1326), 4);
	func_3(&(Global_1394141.f_1326), 64);
	func_3(&(Global_1394141.f_1326), (1 << 9));
}

bool func_83(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1394141.f_7[iParam0 /*31*/].f_7[iVar0];
		if (iVar1 != 0)
		{
			if (func_255(iVar1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_84(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1394141.f_7[iParam0 /*31*/].f_7[iVar0];
		if (iVar1 != 0)
		{
			if (func_256(iVar1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_85(int iParam0)
{
	GRAPHICS::SET_TV_CHANNEL(-1);
	if (iParam0->f_1071)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089))
		{
			OBJECT::_SET_LIGHT_SCATTERING_DISABLED_FOR_OBJECT(iParam0->f_1089, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_1089));
		}
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(iParam0->f_1075))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(iParam0->f_1075);
		}
		iParam0->f_1071 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1088))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_1088));
	}
}

void func_86(int iParam0)
{
	PED::_UNRESERVE_AMBIENT_PEDS(1);
}

void func_87(var uParam0)
{
	func_257(uParam0);
	func_257(&(uParam0->f_31));
	func_257(&(uParam0->f_107));
	func_257(&(uParam0->f_118));
	Global_1394141.f_1325 = 0;
}

void func_88(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_90(int iParam0)
{
	iParam0->f_10 = 1;
}

void func_91(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_259(func_258(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		func_260(4);
	}
	func_260(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

int func_93(bool bParam0)
{
	if (func_261() == -1)
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

void func_94(int iParam0)
{
	if (!bLocal_1)
	{
		WEAPON::_0xD63B4BA3A02A99E0(Global_35, iParam0);
		bLocal_1 = true;
	}
}

void func_95(int iParam0, bool bParam1)
{
	if (bLocal_1)
	{
		WEAPON::_0x404514D231DB27A0(Global_35, *iParam0);
		bLocal_1 = false;
		if (bParam1)
		{
			*iParam0 = 0;
		}
	}
}

void func_96()
{
	if (!bLocal_0)
	{
		INVENTORY::_INVENTORY_DISABLE_WEAPONS(func_93(0), 0);
		bLocal_0 = true;
	}
}

void func_97()
{
	if (bLocal_0)
	{
		INVENTORY::_INVENTORY_ENABLE_WEAPONS(func_93(0));
		bLocal_0 = false;
	}
}

bool func_98()
{
	int iVar0;

	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_TYPE(iVar0) == 1)
	{
		return true;
	}
	return false;
}

void func_99(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_100(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
	{
		if (func_249() == 76)
		{
			if (func_262())
			{
				return true;
			}
		}
		else
		{
			return true;
		}
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1394141.f_7[iParam0 /*31*/].f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!func_256(iVar1))
			{
				func_263(iVar1, 0, 0);
			}
		}
		iVar0++;
	}
	return true;
}

int func_101(bool bParam0, bool bParam1, bool bParam2)
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

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 0;
		case 4:
			return 4;
	}
	return 0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_LAMP35X");
		case 1:
			return joaat("P_LAMPWALL03X");
		case 2:
			return joaat("P_LAMPWALL03X");
		case 3:
			return 0;
		case 4:
			return joaat("P_LIGHTBULB01X");
	}
	return 0;
}

Vector3 func_104(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 2553.688f, -1306.052f, 49.97987f };
				case 1:
					return { 2539.203f, -1306.098f, 49.9794f };
				case 2:
					return { 2539.188f, -1291.61f, 49.97276f };
				case 3:
					return { 2543.014f, -1290.244f, 49.95035f };
				case 4:
					return { 2549.863f, -1290.254f, 50.00306f };
				case 5:
					return { 2553.694f, -1291.636f, 49.96515f };
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return { 2698.354f, -1347.851f, 48.38391f };
				case 1:
					return { 2702.992f, -1353.339f, 48.37968f };
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return { -777.252f, -1367.02f, 44.965f };
				case 1:
					return { -780.828f, -1366.866f, 45.282f };
				case 2:
					return { -777.252f, -1358.225f, 44.965f };
				case 3:
					return { -780.85f, -1358.394f, 45.282f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_105(var uParam0, int iParam1, Vector3 vParam2, int iParam5)
{
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = ENTITY::PIN_CLOSEST_MAP_ENTITY(iParam1, vParam2, 7);
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_1))
	{
		*uParam0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(uParam0->f_1));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	uParam0->f_2 = 1.0f;
	return true;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 13;
		case 2:
			return 10;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_STAGESHELLLIGHT01X");
		case 1:
			return joaat("P_BULB_G_STAGE01X");
		case 2:
			return joaat("P_BULB_G_STAGE01X");
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

Vector3 func_108(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 2550.559f, -1306.926f, 48.30644f };
				case 1:
					return { 2549.975f, -1306.784f, 48.30579f };
				case 2:
					return { 2549.373f, -1306.661f, 48.27742f };
				case 3:
					return { 2548.778f, -1306.565f, 48.3292f };
				case 4:
					return { 2548.191f, -1306.501f, 48.33652f };
				case 5:
					return { 2547.599f, -1306.461f, 48.33248f };
				case 6:
					return { 2547.012f, -1306.439f, 48.3321f };
				case 7:
					return { 2546.379f, -1306.432f, 48.32198f };
				case 8:
					return { 2545.83f, -1306.439f, 48.32955f };
				case 9:
					return { 2545.216f, -1306.474f, 48.32186f };
				case 10:
					return { 2544.61f, -1306.53f, 48.32782f };
				case 11:
					return { 2544.018f, -1306.617f, 48.31695f };
				case 12:
					return { 2543.43f, -1306.736f, 48.32981f };
				case 13:
					return { 2542.867f, -1306.884f, 48.33492f };
				case 14:
					return { 2542.276f, -1307.063f, 48.32477f };
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return { 2700.432f, -1348.183f, 47.87681f };
				case 1:
					return { 2700.377f, -1348.514f, 47.85976f };
				case 2:
					return { 2700.37f, -1348.888f, 47.8551f };
				case 3:
					return { 2700.434f, -1349.257f, 47.86578f };
				case 4:
					return { 2700.558f, -1349.631f, 47.84948f };
				case 5:
					return { 2701.542f, -1350.802f, 47.85961f };
				case 6:
					return { 2701.878f, -1350.986f, 47.88033f };
				case 7:
					return { 2702.219f, -1351.111f, 47.86714f };
				case 8:
					return { 2702.572f, -1351.179f, 47.87275f };
				case 9:
					return { 2702.962f, -1351.181f, 47.87634f };
				case 10:
					return { 2701.173f, -1350.579f, 47.846f };
				case 11:
					return { 2700.92f, -1350.285f, 47.846f };
				case 12:
					return { 2700.691f, -1349.987f, 47.846f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return { 2700.432f, -1348.183f, 47.87681f };
				case 1:
					return { 2700.377f, -1348.514f, 47.85976f };
				case 2:
					return { 2700.37f, -1348.888f, 47.8551f };
				case 3:
					return { 2700.434f, -1349.257f, 47.86578f };
				case 4:
					return { 2700.558f, -1349.631f, 47.84948f };
				case 5:
					return { 2701.542f, -1350.802f, 47.85961f };
				case 6:
					return { 2701.878f, -1350.986f, 47.88033f };
				case 7:
					return { 2702.219f, -1351.111f, 47.86714f };
				case 8:
					return { 2702.572f, -1351.179f, 47.87275f };
				case 9:
					return { 2702.962f, -1351.181f, 47.87634f };
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 0;
		case 4:
			return 2;
	}
	return 0;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_LAMPWALL04X");
		case 1:
			return joaat("P_NAPOLEONLIGHT01X");
		case 2:
			return joaat("P_NAPOLEONLIGHT01X");
		case 3:
			return 0;
		case 4:
			return joaat("P_LAMPWALL04X");
	}
	return 0;
}

Vector3 func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 2548.641f, -1292.548f, 53.95758f };
				case 1:
					return { 2544.289f, -1292.548f, 53.96331f };
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return { 2691.054f, -1352.816f, 52.59f };
				case 1:
					return { 2696.695f, -1359.527f, 52.59f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return { 2688.867f, -1354.651f, 53.697f };
				case 1:
					return { 2694.49f, -1361.375f, 53.697f };
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return { -783.34f, -1367.153f, 45.388f };
				case 1:
					return { -783.939f, -1360.04f, 45.325f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_112(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("P_STAGESHELLLIGHT_LONG01X");
				case 1:
					return joaat("P_STAGESHELLLIGHT_RED01X");
				case 2:
					return joaat("P_STAGESHELLLIGHT_RED01X");
				default:
					break;
			}
			break;
		case 1:
		case 2:
			return joaat("P_BULB_G_01X");
		case 3:
			break;
		case 4:
			break;
	}
	return 0;
}

Vector3 func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 2546.694f, -1306.438f, 48.21665f };
				case 1:
					return { 2551.421f, -1308.492f, 48.21665f };
				case 2:
					return { 2541.836f, -1308.431f, 48.21665f };
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return { 2697.828f, -1347.849f, 48.061f };
				case 1:
					return { 2697.828f, -1347.854f, 48.89f };
				case 2:
					return { 2697.827f, -1347.856f, 49.633f };
				case 3:
					return { 2697.825f, -1347.853f, 50.458f };
				case 4:
					return { 2697.889f, -1347.932f, 51.201f };
				case 5:
					return { 2698.051f, -1348.127f, 52.013f };
				case 6:
					return { 2698.298f, -1348.42f, 52.674f };
				case 7:
					return { 2698.682f, -1348.865f, 53.307f };
				case 8:
					return { 2699.068f, -1349.323f, 53.747f };
				case 9:
					return { 2699.578f, -1349.924f, 54.096f };
				case 10:
					return { 2700.049f, -1350.493f, 54.234f };
				case 11:
					return { 2700.6f, -1351.151f, 54.236f };
				case 12:
					return { 2701.085f, -1351.721f, 54.095f };
				case 13:
					return { 2701.579f, -1352.32f, 53.744f };
				case 14:
					return { 2701.959f, -1352.784f, 53.318f };
				case 15:
					return { 2702.34f, -1353.231f, 52.683f };
				case 16:
					return { 2702.584f, -1353.52f, 52.034f };
				case 17:
					return { 2702.747f, -1353.716f, 51.212f };
				case 18:
					return { 2702.814f, -1353.797f, 50.457f };
				case 19:
					return { 2702.818f, -1353.797f, 49.618f };
				case 20:
					return { 2702.819f, -1353.797f, 48.896f };
				case 21:
					return { 2702.817f, -1353.803f, 48.036f };
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 22;
		case 2:
			return 22;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

float func_115(var uParam0)
{
	float fVar0;

	fVar0 = 0.0f;
	return fVar0;
}

float func_116(var uParam0)
{
	float fVar0;

	fVar0 = 5.0f;
	return fVar0;
}

int func_117(var uParam0)
{
	int iVar0;

	iVar0 = 10;
	return iVar0;
}

bool func_118(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;

	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar1 = func_42(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_264(uParam0[iVar0 /*5*/], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_43(uParam2);
		return true;
	}
	return false;
}

float func_119(var uParam0)
{
	float fVar0;

	fVar0 = 1.0f;
	return fVar0;
}

bool func_120(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;

	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar1 = func_42(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_265(uParam0[iVar0 /*5*/], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_43(uParam2);
		return true;
	}
	return false;
}

float func_121(var uParam0)
{
	float fVar0;

	fVar0 = 0.0f;
	return fVar0;
}

float func_122(var uParam0)
{
	float fVar0;

	fVar0 = 5.0f;
	return fVar0;
}

float func_123(var uParam0)
{
	float fVar0;

	fVar0 = 1.0f;
	return fVar0;
}

float func_124(var uParam0)
{
	float fVar0;

	fVar0 = 0.0f;
	return fVar0;
}

float func_125(var uParam0)
{
	float fVar0;

	fVar0 = 5.0f;
	return fVar0;
}

float func_126(var uParam0)
{
	float fVar0;

	fVar0 = 1.0f;
	return fVar0;
}

float func_127(var uParam0)
{
	float fVar0;

	fVar0 = 0.0f;
	return fVar0;
}

float func_128(var uParam0)
{
	float fVar0;

	fVar0 = 3.0f;
	return fVar0;
}

bool func_129(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	float fVar0;

	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar0 = func_42(uParam2);
	func_264(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_43(uParam2);
		return true;
	}
	return false;
}

float func_130(var uParam0)
{
	float fVar0;

	fVar0 = 1.0f;
	return fVar0;
}

bool func_131(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	float fVar0;

	if (!func_40(uParam2))
	{
		func_41(uParam2);
	}
	fVar0 = func_42(uParam2);
	func_265(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_43(uParam2);
		return true;
	}
	return false;
}

float func_132(var uParam0)
{
	float fVar0;

	fVar0 = 0.0f;
	return fVar0;
}

float func_133(var uParam0)
{
	float fVar0;

	fVar0 = 3.0f;
	return fVar0;
}

bool func_134(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return true;
	}
	if (!func_40(uParam4))
	{
		func_41(uParam4);
	}
	fVar2 = func_42(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_264(uParam2[iVar3 /*5*/], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_43(uParam4);
		return true;
	}
	return false;
}

float func_135(var uParam0)
{
	float fVar0;

	fVar0 = 1.0f;
	return fVar0;
}

bool func_136(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return true;
	}
	if (!func_40(uParam4))
	{
		func_41(uParam4);
	}
	fVar2 = func_42(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_265(uParam2[iVar3 /*5*/], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_43(uParam4);
		return true;
	}
	return false;
}

float func_137(var uParam0)
{
	float fVar0;

	fVar0 = 0.3f;
	return fVar0;
}

float func_138(var uParam0)
{
	float fVar0;

	fVar0 = 5.0f;
	return fVar0;
}

float func_139(var uParam0)
{
	float fVar0;

	fVar0 = 1.0f;
	return fVar0;
}

char* func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
		case 1:
			return "PBL_OPEN_SLOW";
		case 2:
			return "PBL_CLOSE_SLOW";
		case 3:
			return "PBL_IDLE_OPEN";
		default:
			break;
	}
	return "FAIL";
}

char* func_141()
{
	return "script@shows@curtains@curtains";
}

bool func_142(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam0, sParam1) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(iParam0, sParam1))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam0, sParam1))
	{
		return false;
	}
	return true;
}

void func_143(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_144()
{
	return "CURTAIN";
}

void func_145(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iParam0, sParam1, true);
}

void func_146(int iParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam0, sParam1))
	{
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(iParam0, sParam1);
	}
}

int func_147()
{
	return Global_1310750.f_16037;
}

bool func_148(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_149(int iParam0, int iParam1)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] & iParam1) != 0;
}

bool func_150(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	if (func_58(64) && func_266(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_151(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_152(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_148(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_267(iParam0);
	Global_1310750.f_16037--;
}

void func_153(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

bool func_154()
{
	if (func_261() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_155(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_268(uParam0, iParam1, sParam2))
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

char* func_156()
{
	return "script@shows@sword_dancer@act3_p1@action";
}

char* func_157(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "s_Performance";
		case 1:
			return "s_Breakout_DownStage";
		case 2:
			return "s_Breakout_CenterStage";
		default:
			break;
	}
	return "FAIL";
}

char* func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CROWD_SWORDDANCE_01";
		case 1:
			return "CROWD_SWORDDANCE_02";
		case 2:
			return "CROWD_SWORDDANCE_03";
		case 3:
			return "CROWD_SWORDDANCE_04";
		case 4:
			return "CROWD_SWORDDANCE_05";
		case 5:
			return "CROWD_SWORDDANCE_06";
		case 6:
			return "CROWD_SWORDDANCE_07";
		case 7:
			return "CROWD_SWORDDANCE_08";
		case 8:
			return "CROWD_SWORDDANCE_09";
		default:
			break;
	}
	return "";
}

char* func_159()
{
	return "script_shows@show_audience@ig_arthur_applause";
}

bool func_160(int iParam0)
{
	return PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY();
}

bool func_161(int iParam0)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;

	bVar0 = false;
	if (!func_40(&(iParam0->f_23)))
	{
		func_41(&(iParam0->f_23));
	}
	else if (func_42(&(iParam0->f_23)) > 10.0f)
	{
		bVar0 = true;
	}
	if (func_2(iParam0->f_17, 1))
	{
		sVar1 = func_55(*iParam0);
		sVar2 = func_56(*iParam0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1) || MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			bVar0 = true;
		}
		else if (AUDIO::LOAD_STREAM(sVar1, sVar2))
		{
			bVar0 = true;
			AUDIO::_0x839C9F124BE74D94(AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(sVar1, sVar2), 0, 2548.749f, -1305.267f, 50.01453f);
			AUDIO::_0x839C9F124BE74D94(AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(sVar1, sVar2), 1, 2543.801f, -1305.251f, 50.01453f);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_43(&(iParam0->f_23));
		return true;
	}
	return false;
}

bool func_162(var uParam0, int iParam1, Vector3 vParam2)
{
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	return true;
}

char* func_163()
{
	return "script@shows@curtains@curtains";
}

char* func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
		case 1:
			return "PBL_OPEN_SLOW";
		case 2:
			return "PBL_CLOSE_SLOW";
		case 3:
			return "PBL_IDLE_OPEN";
		default:
			break;
	}
	return "FAIL";
}

bool func_165(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		func_3(uParam1, 1);
		return true;
	}
	if (!func_2(*uParam1, 1) && !ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam4)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, 0, sParam3, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		func_7(uParam1, 1);
	}
	return false;
}

bool func_166(var uParam0, int iParam1, Vector3 vParam2, float fParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return false;
	}
	bVar0 = true;
	bVar1 = false;
	iVar2 = func_269(iParam1);
	if (iVar2 != joaat("META_OUTFIT_DEFAULT"))
	{
		bVar0 = false;
		bVar1 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = func_181(iParam1, vParam2, fParam5, 1, 1, 0, 1, 1, bVar0, 0, bVar1, 0, 0);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && PED::IS_PED_READY_TO_RENDER(*uParam0))
	{
		if (!bVar0)
		{
			func_201(*uParam0, iVar2);
		}
		func_188(*uParam0, 0);
		return true;
	}
	return false;
}

bool func_167(int iParam0)
{
	return true;
}

void func_168(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[0]))
	{
		iParam0->f_66[0] = OBJECT::CREATE_OBJECT(iParam0->f_58[0], 2546.948f, -1311.025f, 48.21665f, true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[0], true);
	}
	iParam0->f_12 = iParam0->f_81[0];
}

void func_169(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "DANCER", iParam0->f_81[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Sword", iParam0->f_66[0], 0);
}

struct<11> /*88*/ func_170(int iParam0, int iParam1)
{
	struct<11> /*88*/ sVar0;

	switch (iParam1)
	{
		case 1:
		case 2:
			switch (iParam0)
			{
				case 0:
					sVar0 = { 2695.674f, -1354.701f, 48.474f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 42.536f /*3*/ };
					sVar0.f_6 = { 12.531f, 9.1f, 9.0f /*3*/ };
					sVar0.f_9 = "SHOW_FOCUS_CAM";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 1:
					sVar0 = { 2694.922f, -1351.853f, 47.97008f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 41.00079f /*3*/ };
					sVar0.f_6 = { 7.095272f, 3.680561f, 4.124079f /*3*/ };
					sVar0.f_9 = "SHOW_SEATS_LEFT";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 2:
					sVar0 = { 2698.459f, -1355.921f, 47.97008f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 41.00079f /*3*/ };
					sVar0.f_6 = { 7.095272f, 3.680561f, 4.124079f /*3*/ };
					sVar0.f_9 = "SHOW_SEATS_RIGHT";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 3:
					sVar0 = { 2686.465f, -1362.323f, 47.97008f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 41.00078f /*3*/ };
					sVar0.f_6 = { 4.481431f, 8.317011f, 4.124079f /*3*/ };
					sVar0.f_9 = "SHOW_FRONT_BUFFER";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 4:
					sVar0 = { 2695.047f, -1355.205f, 49.07318f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 39.99998f /*3*/ };
					sVar0.f_6 = { 19.67865f, 9.058702f, 4.067907f /*3*/ };
					sVar0.f_9 = "SHOW_CROWD_DELETE";
					sVar0.f_10 = joaat("VOLBOX");
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					sVar0 = { -780.252f, -1362.48f, 45.687f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 0.496f /*3*/ };
					sVar0.f_6 = { 11.467f, 8.9f, 8.0f /*3*/ };
					sVar0.f_9 = "SHOW_FOCUS_CAM";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 1:
					sVar0 = { -779.944f, -1359.784f, 44.57523f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 0.0f /*3*/ };
					sVar0.f_6 = { 11.65175f, 4.094016f, 3.77397f /*3*/ };
					sVar0.f_9 = "SHOW_SEATS_LEFT";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 2:
					sVar0 = { -779.944f, -1365.717f, 44.57523f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 0.0f /*3*/ };
					sVar0.f_6 = { 11.65175f, 4.094016f, 3.77397f /*3*/ };
					sVar0.f_9 = "SHOW_SEATS_RIGHT";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 3:
					sVar0 = { -788.271f, -1362.526f, 44.57523f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 0.0f /*3*/ };
					sVar0.f_6 = { 6.064409f, 8.635888f, 3.77397f /*3*/ };
					sVar0.f_9 = "SHOW_FRONT_BUFFER";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 4:
					sVar0 = { -778.6844f, -1362.457f, 45.677f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 0.496382f /*3*/ };
					sVar0.f_6 = { 16.0f, 8.9f, 8.0f /*3*/ };
					sVar0.f_9 = "SHOW_CROWD_DELETE";
					sVar0.f_10 = joaat("VOLBOX");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					sVar0 = { -347.867f, 697.444f, 117.8f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 39.038f /*3*/ };
					sVar0.f_6 = { 12.531f, 9.1f, 9.0f /*3*/ };
					sVar0.f_9 = "SHOW_FOCUS_CAM";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 1:
					sVar0 = { -345.8821f, 697.2924f, 117.5554f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 14.26797f /*3*/ };
					sVar0.f_6 = { 3.162789f, 6.641141f, 2.407862f /*3*/ };
					sVar0.f_9 = "SHOW_SEATS_LEFT";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 2:
					sVar0 = { -349.6249f, 696.3406f, 117.5554f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 14.26797f /*3*/ };
					sVar0.f_6 = { 2.509765f, 6.641141f, 2.407862f /*3*/ };
					sVar0.f_9 = "SHOW_SEATS_RIGHT";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 3:
					sVar0 = { -350.7378f, 705.5359f, 117.5554f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 14.26797f /*3*/ };
					sVar0.f_6 = { 8.752253f, 6.118175f, 4.255467f /*3*/ };
					sVar0.f_9 = "SHOW_FRONT_BUFFER";
					sVar0.f_10 = joaat("VOLBOX");
					break;
				case 4:
					sVar0 = { -347.6639f, 696.6296f, 118.3223f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 15.66641f /*3*/ };
					sVar0.f_6 = { 7.262365f, 9.866415f, 4.317828f /*3*/ };
					sVar0.f_9 = "SHOW_CROWD_DELETE";
					sVar0.f_10 = joaat("VOLBOX");
					break;
			}
			break;
	}
	return sVar0;
}

bool func_171(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 8:
			return true;
		case 4:
			switch (iParam1)
			{
				case 11:
				case 13:
				case 19:
					return false;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 6:
				case 8:
				case 10:
				case 14:
				case 15:
				case 17:
					return false;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 11:
				case 12:
				case 13:
				case 14:
				case 16:
				case 18:
				case 19:
					return false;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return false;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return false;
			}
			break;
	}
	return true;
}

char* func_172(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
		case 1:
			return "script_shows@show_audience@ig2_reaction_oneshot";
		case 2:
			return "script_shows@show_audience@ig1_reaction_loops@t02_regular_rowdy";
		case 3:
			return "script_shows@show_audience@ig1_reaction_loops@t04_musical";
		case 4:
			return "script_shows@show_audience@ig1_reaction_loops@t05_dancing";
		case 5:
			return "script_shows@show_audience@ig1_reaction_loops@t06_comedic_displeased";
		case 6:
			return "script_shows@show_audience@ig1_reaction_loops@t07_suspense_applause";
		case 7:
			return "script_shows@show_audience@ig1_reaction_loops@t08_applause_horrified";
		case 8:
			return "script_shows@show_audience@ig1_reaction_loops@t09_blocked";
		case 9:
			return "script_shows@escapeartist@escapeartist_react";
		case 10:
			return "script_shows@show_audience@ig5_hatfire_react@t01_hatfire_right";
		case 11:
			return "script_shows@show_audience@ig5_hatfire_react@t05_hatfire_front";
		default:
			break;
	}
	return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
}

char[] func_173(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return func_270(iParam1);
		case 0:
			return func_271(iParam1);
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_VERSION";
}

bool func_174(var uParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		uParam0->f_1 = 1;
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return false;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 56;
		case 1:
		case 2:
			return 22;
		case 3:
			return 10;
		case 4:
			return 23;
	}
	return 0;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("NBX_CIVILIANS");
		case 1:
			return joaat("NBX_CIVILIANS");
		case 3:
			return joaat("VAL_CIVILIANS");
		case 4:
			return joaat("BLA_UPPERCLASS");
	}
	return joaat("NBX_CIVILIANS");
}

int func_177(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return 2;
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return 2;
				case 17:
					return 1;
				case 18:
					return 1;
				case 20:
					return 2;
				case 31:
					return 2;
				case 32:
					return 2;
				case 39:
					return 2;
				case 53:
				case 54:
				case 55:
					return 2;
				default:
					break;
			}
			break;
		case 3:
			break;
	}
	return 0;
}

Vector3 func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 2541.954f, -1303.652f, 47.51162f };
				case 1:
					return { 2542.625f, -1303.628f, 47.50835f };
				case 2:
					return { 2543.253f, -1303.504f, 47.51194f };
				case 3:
					return { 2543.914f, -1303.447f, 47.50978f };
				case 4:
					return { 2544.554f, -1303.35f, 47.51124f };
				case 5:
					return { 2545.212f, -1303.286f, 47.48675f };
				case 6:
					return { 2540.851f, -1302.391f, 47.83032f };
				case 7:
					return { 2541.405f, -1302.162f, 47.83151f };
				case 8:
					return { 2542.039f, -1301.995f, 47.83165f };
				case 9:
					return { 2542.659f, -1301.895f, 47.83114f };
				case 10:
					return { 2543.281f, -1301.785f, 47.83141f };
				case 11:
					return { 2543.887f, -1301.719f, 47.8308f };
				case 12:
					return { 2544.536f, -1301.635f, 47.831f };
				case 13:
					return { 2545.165f, -1301.591f, 47.81311f };
				case 14:
					return { 2540.816f, -1300.638f, 48.12306f };
				case 15:
					return { 2541.43f, -1300.473f, 48.12244f };
				case 16:
					return { 2542.034f, -1300.312f, 48.12096f };
				case 17:
					return { 2542.644f, -1300.153f, 48.12228f };
				case 18:
					return { 2543.269f, -1300.039f, 48.12248f };
				case 19:
					return { 2543.896f, -1299.926f, 48.12423f };
				case 20:
					return { 2545.169f, -1299.818f, 48.10023f };
				case 21:
					return { 2540.844f, -1298.88f, 48.39516f };
				case 22:
					return { 2541.442f, -1298.742f, 48.39409f };
				case 23:
					return { 2542.07f, -1298.587f, 48.39284f };
				case 24:
					return { 2543.302f, -1298.275f, 48.39411f };
				case 25:
					return { 2543.898f, -1298.179f, 48.39465f };
				case 26:
					return { 2544.536f, -1298.092f, 48.39633f };
				case 27:
					return { 2550.958f, -1303.615f, 47.48922f };
				case 28:
					return { 2550.302f, -1303.543f, 47.48922f };
				case 29:
					return { 2549.651f, -1303.483f, 47.48394f };
				case 30:
					return { 2549.005f, -1303.43f, 47.48394f };
				case 31:
					return { 2548.356f, -1303.367f, 47.48394f };
				case 32:
					return { 2547.713f, -1303.341f, 47.48394f };
				case 33:
					return { 2552.097f, -1302.355f, 47.80622f };
				case 34:
					return { 2551.509f, -1302.193f, 47.80622f };
				case 35:
					return { 2550.899f, -1302.034f, 47.80622f };
				case 36:
					return { 2550.298f, -1301.884f, 47.80622f };
				case 37:
					return { 2549.661f, -1301.76f, 47.80622f };
				case 38:
					return { 2549.037f, -1301.683f, 47.80622f };
				case 39:
					return { 2548.413f, -1301.624f, 47.80622f };
				case 40:
					return { 2552.122f, -1300.556f, 48.09521f };
				case 41:
					return { 2551.499f, -1300.414f, 48.09521f };
				case 42:
					return { 2550.871f, -1300.243f, 48.09521f };
				case 43:
					return { 2550.255f, -1300.129f, 48.09521f };
				case 44:
					return { 2549.635f, -1300.029f, 48.09521f };
				case 45:
					return { 2549.016f, -1299.949f, 48.09521f };
				case 46:
					return { 2552.115f, -1298.813f, 48.36841f };
				case 47:
					return { 2551.499f, -1298.658f, 48.36841f };
				case 48:
					return { 2550.254f, -1298.388f, 48.36841f };
				case 49:
					return { 2549.629f, -1298.312f, 48.36841f };
				case 50:
					return { 2549.001f, -1298.207f, 48.36841f };
				case 51:
					return { 2548.368f, -1298.123f, 48.36841f };
				case 52:
					return { 2547.733f, -1298.041f, 48.36841f };
				case 53:
					return { 2553.102f, -1299.667f, 49.214f };
				case 54:
					return { 2553.129f, -1302.399f, 49.214f };
				case 55:
					return { 2539.789f, -1302.37f, 49.214f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return { -349.1009f, 693.7693f, 116.8875f };
				case 1:
					return { -348.4168f, 693.9259f, 116.8925f };
				case 2:
					return { -345.9169f, 694.5858f, 116.8741f };
				case 3:
					return { -344.2555f, 695.0604f, 116.876f };
				case 4:
					return { -349.5025f, 695.6313f, 117.0018f };
				case 5:
					return { -345.2958f, 696.7811f, 117.0189f };
				case 6:
					return { -350.5786f, 697.272f, 117.1134f };
				case 7:
					return { -346.918f, 698.2223f, 117.1139f };
				case 8:
					return { -345.2069f, 698.744f, 117.1184f };
				case 9:
					return { -350.4303f, 699.0625f, 117.1308f };
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return { 2701.17f, -1354.493f, 47.77215f };
				case 1:
					return { 2700.708f, -1354.073f, 47.77014f };
				case 2:
					return { 2700.242f, -1353.635f, 47.76572f };
				case 3:
					return { 2699.766f, -1353.23f, 47.74422f };
				case 4:
					return { 2697.559f, -1350.386f, 47.76871f };
				case 5:
					return { 2697.222f, -1349.843f, 47.76798f };
				case 6:
					return { 2696.885f, -1349.309f, 47.76988f };
				case 7:
					return { 2699.731f, -1355.699f, 47.94025f };
				case 8:
					return { 2699.25f, -1355.287f, 47.93497f };
				case 9:
					return { 2698.764f, -1354.877f, 47.93819f };
				case 10:
					return { 2695.774f, -1351.042f, 47.93525f };
				case 11:
					return { 2695.439f, -1350.499f, 47.93626f };
				case 12:
					return { 2698.316f, -1356.914f, 48.10247f };
				case 13:
					return { 2697.834f, -1356.48f, 48.09552f };
				case 14:
					return { 2694.688f, -1352.778f, 48.10484f };
				case 15:
					return { 2694.39f, -1352.196f, 48.09603f };
				case 16:
					return { 2694.055f, -1351.671f, 48.0974f };
				case 17:
					return { 2696.514f, -1357.575f, 48.25399f };
				case 18:
					return { 2696.022f, -1357.168f, 48.25772f };
				case 19:
					return { 2695.554f, -1356.731f, 48.23498f };
				case 20:
					return { 2693.692f, -1354.44f, 48.26648f };
				case 21:
					return { 2693.319f, -1353.92f, 48.26515f };
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return { -776.0957f, -1365.928f, 43.26698f };
				case 1:
					return { -776.1156f, -1365.257f, 43.26892f };
				case 2:
					return { -776.1213f, -1364.023f, 43.26947f };
				case 3:
					return { -776.0749f, -1361.318f, 43.29291f };
				case 4:
					return { -776.0781f, -1360.655f, 43.26656f };
				case 5:
					return { -776.107f, -1359.996f, 43.26938f };
				case 6:
					return { -777.7452f, -1365.929f, 43.43242f };
				case 7:
					return { -778.02f, -1365.272f, 43.45926f };
				case 8:
					return { -777.9575f, -1361.315f, 43.4812f };
				case 9:
					return { -777.9938f, -1360.662f, 43.45993f };
				case 10:
					return { -777.9775f, -1360f, 43.45834f };
				case 11:
					return { -779.8451f, -1365.909f, 43.6443f };
				case 12:
					return { -779.8615f, -1365.263f, 43.64589f };
				case 13:
					return { -779.8595f, -1364.639f, 43.64569f };
				case 14:
					return { -779.835f, -1361.3f, 43.67118f };
				case 15:
					return { -779.8181f, -1360.642f, 43.64128f };
				case 16:
					return { -781.7369f, -1365.253f, 43.83224f };
				case 17:
					return { -781.7541f, -1364.628f, 43.83392f };
				case 18:
					return { -781.7646f, -1364f, 43.83494f };
				case 19:
					return { -781.7217f, -1360.638f, 43.83135f };
				case 20:
					return { -781.7209f, -1359.973f, 43.83129f };
				case 21:
					return { -781.7397f, -1359.346f, 43.83311f };
				case 22:
					return { -781.7122f, -1358.722f, 43.83042f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_179(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 189.76f;
				case 1:
					return 194.54f;
				case 2:
					return 185.02f;
				case 3:
					return 185.67f;
				case 4:
					return 186.48f;
				case 5:
					return 189.64f;
				case 6:
					return 194.87f;
				case 7:
					return 197.45f;
				case 8:
					return 192.94f;
				case 9:
					return 190.4f;
				case 10:
					return 187.74f;
				case 11:
					return 188.21f;
				case 12:
					return 191.46f;
				case 13:
					return 187.8f;
				case 14:
					return 197.77f;
				case 15:
					return 197.28f;
				case 16:
					return 195.7f;
				case 17:
					return 194.38f;
				case 18:
					return 189.91f;
				case 19:
					return 187.19f;
				case 20:
					return 183.35f;
				case 21:
					return 195.68f;
				case 22:
					return 195.08f;
				case 23:
					return 197.6f;
				case 24:
					return 192.22f;
				case 25:
					return 187.31f;
				case 26:
					return 186.63f;
				case 27:
					return 174.21f;
				case 28:
					return 175.4f;
				case 29:
					return 177.33f;
				case 30:
					return 177.62f;
				case 31:
					return 175.4f;
				case 32:
					return 176.59f;
				case 33:
					return 165.32f;
				case 34:
					return 170.16f;
				case 35:
					return 170.37f;
				case 36:
					return 174.13f;
				case 37:
					return 175.59f;
				case 38:
					return 173.64f;
				case 39:
					return 178.62f;
				case 40:
					return 169.96f;
				case 41:
					return 171.41f;
				case 42:
					return 170.19f;
				case 43:
					return 171.15f;
				case 44:
					return 174.93f;
				case 45:
					return 177.61f;
				case 46:
					return 169.6f;
				case 47:
					return 171.53f;
				case 48:
					return 172.77f;
				case 49:
					return 174.2f;
				case 50:
					return 175.33f;
				case 51:
					return 175.1f;
				case 52:
					return 176.09f;
				case 53:
					return 152.8307f;
				case 54:
					return 152.8307f;
				case 55:
					return 190.6648f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -164.0f;
				case 1:
					return -164.0f;
				case 2:
					return -164.0f;
				case 3:
					return -164.0f;
				case 4:
					return -164.0f;
				case 5:
					return -164.0f;
				case 6:
					return -164.0f;
				case 7:
					return -164.0f;
				case 8:
					return -164.0f;
				case 9:
					return -164.0f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return -37.72f;
				case 1:
					return -39.69f;
				case 2:
					return -39.97f;
				case 3:
					return -39.02f;
				case 4:
					return -52.61f;
				case 5:
					return -55.28f;
				case 6:
					return -56.79f;
				case 7:
					return -39.3f;
				case 8:
					return -38.34f;
				case 9:
					return -39.92f;
				case 10:
					return -57.96f;
				case 11:
					return -56.65f;
				case 12:
					return -38.24f;
				case 13:
					return -39.76f;
				case 14:
					return -56.13f;
				case 15:
					return -58.55f;
				case 16:
					return -54.07f;
				case 17:
					return -40.84f;
				case 18:
					return -40.21f;
				case 19:
					return -44.17f;
				case 20:
					return -52.32f;
				case 21:
					return -54.76f;
				default:
					break;
			}
			break;
		case 4:
			return -88.69f;
	}
	return -175.57f;
}

bool func_180(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return true;
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return true;
				case 17:
					return 2;
				case 18:
					return 2;
				case 20:
				case 31:
					return true;
				case 32:
					return true;
				case 39:
					return true;
				case 53:
				case 54:
				case 55:
					return true;
				default:
					break;
			}
			break;
		case 3:
			break;
	}
	return false;
}

int func_181(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_272(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_182(var uParam0, int iParam1)
{
	int iVar0;
	struct<11> /*88*/ sVar1;

	if (func_273(iParam1) != -1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= func_273(iParam1))
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_22[iVar0]))
			{
				sVar1 = { func_274(iParam1, iVar0) /*11*/ };
				uParam0->f_22[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(sVar1.f_9, sVar1, sVar1.f_3, sVar1.f_6, sVar1.f_10);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= func_273(iParam1))
		{
			if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_22[iVar0]))
			{
				PED::_ADD_SCENARIO_BLOCKING_VOLUME(uParam0->f_22[iVar0], false, 2);
			}
			iVar0++;
		}
		return true;
	}
	else
	{
		return true;
	}
	return false;
}

bool func_183(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 2:
				case 3:
				case 4:
				case 5:
					return true;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 10:
				case 11:
				case 12:
					return true;
				default:
					break;
			}
			Jump @544; // curOff = 175
			switch (iParam0)
			{
				case 3:
				case 4:
				case 8:
				case 9:
				case 10:
					return true;
				default:
					break;
			}
			Jump @544; // curOff = 220
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
					return true;
				default:
					break;
			}
			Jump @544; // curOff = 253
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			Jump @544; // curOff = 304
			switch (iParam0)
			{
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			Jump @544; // curOff = 337
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			Jump @544; // curOff = 388
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			Jump @544; // curOff = 439
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			Jump @544; // curOff = 490
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			return false;
		}

char* func_184(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 2:
							return "Male5";
						case 3:
							return "Male1";
						case 4:
							return "Male3";
						case 5:
							return "Male0";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 1:
							return "Male5";
						case 10:
							return "Male1";
						case 11:
							return "Male3";
						case 12:
							return "Male0";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
						case 4:
							return "Male5";
						case 8:
							return "Male3";
						case 9:
							return "Male0";
						case 10:
							return "Male1";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						default:
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						case 17:
							return "Male3";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
						case 10:
							return "Male3";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
						case 10:
							return "Male2";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male3";
						default:
							break;
					}
					break;
			}
			break;
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 2:
							return "Male5";
						case 3:
							return "Male1";
						case 4:
							return "Male3";
						case 5:
							return "Male0";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 1:
							return "Male5";
						case 10:
							return "Male1";
						case 11:
							return "Male3";
						case 12:
							return "Male0";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
						case 4:
							return "Male5";
						case 8:
							return "Male3";
						case 9:
							return "Male0";
						case 10:
							return "Male1";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						default:
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						case 17:
							return "Male3";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
						case 10:
							return "Male3";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
						case 10:
							return "Male2";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male3";
						default:
							break;
					}
					break;
			}
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_HANDLE";
}

bool func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 3:
			return true;
		case 1:
		case 2:
			return true;
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

void func_186(var uParam0, int iParam1)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		TASK::TASK_START_SCENARIO_AT_POSITION(*uParam0, joaat("PROP_HUMAN_SEAT_CHAIR"), func_178(iParam1, uParam0->f_2), func_179(iParam1, uParam0->f_2), -1, false, true, 0, 0.25f, false);
	}
}

void func_187(var uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	Vector3 vVar5;
	int iVar8;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_178(iParam1, uParam0->f_2) /*3*/ };
		fVar4 = func_179(iParam1, uParam0->f_2);
		vVar5 = { 0.0f, 0.0f, fVar4 /*3*/ };
		iVar8 = func_275(iParam1, uParam0->f_2);
		uParam0->f_5 = 1;
		uParam0->f_6 = -1;
		uParam0->f_7 = func_276(uParam0->f_5);
		uParam0->f_8 = func_277(uParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000.0f, -1000.0f, -1, 49153, func_278(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000.0f, -1000.0f, -1, 49153, func_278(), 2, 0, 0);
		}
	}
}

void func_188(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 |= func_279(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

bool func_189(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_190(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_192() - fParam1);
	func_280(uParam0, 1);
	func_281(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_191(var uParam0)
{
	return func_189(*uParam0, 2);
}

float func_192()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_193(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
			return true;
	}
	return false;
}

void func_194(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_195()
{
	return joaat("S_M_M_MAGICLANTERN_01");
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return joaat("P_MAGICLANTERNSLIDE01X");
		default:
			break;
	}
	return joaat("P_MAGICLANTERNSLIDE01X");
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return { 2693.964f, -1356.467f, 50.81907f };
		case 2:
			return { 2688.162f, -1362.869f, 54.23667f };
		case 0:
			return { 0.0f, 0.0f, 0.0f };
		case 4:
			return { -782.7046f, -1364.543f, 46.42249f };
		case 3:
			return { -350.1178f, 702.2504f, 117.7055f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_199(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -52.52f;
		case 2:
			return 16.48f;
		case 0:
			return 0.0f;
		case 4:
			return -20.0f;
		case 3:
			return -164.26f;
		default:
			break;
	}
	return 0.0f;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("MAGICLANTERN_PROJECTOR_VAL_01");
		default:
			break;
	}
	return 0;
}

void func_201(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_282(iParam0, iParam1))
		{
			if (func_283(iParam0, iParam1))
			{
				if (func_284(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_285(iParam0);
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

Vector3 func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { -349.8668f, 701.5555f, 118.5235f };
		case 1:
			return { -349.7668f, 701.5555f, 118.5235f };
		case 2:
			return { -349.5668f, 701.5555f, 118.5235f };
		case 3:
			return { -349.9668f, 701.3555f, 118.5235f };
		case 4:
			return { -349.7668f, 701.3555f, 118.5235f };
		default:
			break;
	}
	return { -349.8668f, 701.5555f, 118.5235f };
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "script@shows@magic_lantern@ig2_projectionist@thebear";
		case 22:
		case 32:
			return "script@shows@magic_lantern@ig2_projectionist@legendofblackwater";
		case 23:
		case 33:
			return "script@shows@magic_lantern@ig2_projectionist@manflight";
		case 24:
		case 34:
			return "script@shows@magic_lantern@ig2_projectionist@saviorsandsavages";
		case 25:
		case 35:
			return "script@shows@magic_lantern@ig2_projectionist@ghastlyserenade";
	}
	return "script@shows@magic_lantern@ig2_projectionist@thebear";
}

char* func_204(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "pl_action";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 22:
		case 32:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 23:
		case 33:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 24:
		case 34:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 25:
		case 35:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
	}
	return "[SHOW_PROJECTIONIST_GET_PLAYLIST] fail - no playlist";
}

Vector3 func_205(int iParam0)
{
	switch (iParam0)
	{
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return { -350.055f, 701.392f, 117.679f };
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return { 2694.933f, -1356.293f, 50.879f };
	}
	return { -350.055f, 701.392f, 117.679f };
}

Vector3 func_206(int iParam0)
{
	switch (iParam0)
	{
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return { 0.0f, 0.0f, 30.0f };
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return { 7.1f, 0.0f, 145.6f };
	}
	return { 0.0f, 0.0f, 30.0f };
}

char* func_207(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "PROJECTIONIST";
		case 22:
		case 32:
			return "PROJECTIONIST";
		case 23:
		case 33:
			return "PROJECTIONIST";
		case 24:
		case 34:
			return "PROJECTIONIST";
		case 25:
		case 35:
			return "PROJECTIONIST";
	}
	return "PROJECTIONIST";
}

char* func_208(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 22:
		case 32:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 23:
		case 33:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 24:
		case 34:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 25:
		case 35:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
	}
	return "SLIDE0";
}

int func_209()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

char* func_210(int iParam0)
{
	switch (iParam0)
	{
		case 21:
			return "ML_Bear_Story_Soundset";
		case 22:
			return "ML_Blackwater_Soundset";
		case 23:
			return "ML_Man_Flight_Soundset";
		case 24:
			return "ML_See_The_World_Soundset";
		case 25:
			return "ML_Ghost_Story_Soundset";
		case 31:
			return "ML_Bear_Story_Soundset_Tent";
		case 32:
			return "ML_Blackwater_Soundset_Tent";
		case 33:
			return "ML_Man_Flight_Soundset_Tent";
		case 34:
			return "ML_See_The_World_Soundset_Tent";
		case 35:
			return "ML_Ghost_Story_Soundset_Tent";
		case 26:
		case 36:
			return "Cartoon_Direct_Current_Soundset";
		case 27:
		case 37:
			return "Cartoon_Farmers_Daughter_Soundset";
		case 28:
		case 38:
			return "Cartoon_Modern_Medicine_Soundset";
		case 29:
		case 39:
			return "Cartoon_Strongest_Man_Soundset";
		case 30:
		case 40:
			return "Cartoon_Sketching_For_Sweetheart_Soundset";
	}
	return "ERROR!";
}

void func_211()
{
	Global_40.f_9028.f_15++;
	Global_40.f_9028.f_13++;
}

void func_212()
{
	Global_40.f_9028.f_16++;
	Global_40.f_9028.f_13++;
}

char* func_213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "shows_sd_vaudeville";
		case 1:
		case 2:
			return "shows_sd_magic";
		case 3:
			return "shows_val_magic";
		case 4:
			return "shows_bla_movie";
		default:
			break;
	}
	return "shows_sd_vaudeville";
}

void func_214(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	bool bVar7;

	bVar0 = func_14(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	iVar1 = func_175(iParam2);
	fVar2 = 0.0f;
	if (func_40(&(uParam0->f_8)))
	{
		fVar2 = func_42(&(uParam0->f_8));
	}
	iVar5 = 0;
	while (iVar5 <= (iVar1 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5 /*10*/]) || ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
		{
		}
		else
		{
			PED::SET_PED_RESET_FLAG((*uParam1)[iVar5 /*10*/], 153 /*PRF_0x6AB3F2F2*/, true);
			if (Global_1394141.f_1334)
			{
				if (func_286(*uParam0, iVar5) && (uParam1[iVar5 /*10*/])->f_1 != 5)
				{
					(uParam1[iVar5 /*10*/])->f_1 = 5;
				}
			}
			else if (func_286(*uParam0, iVar5) && (uParam1[iVar5 /*10*/])->f_1 == 5)
			{
				func_287(&(uParam0->f_11), 0);
				(uParam1[iVar5 /*10*/])->f_1 = 3;
			}
			if (uParam0->f_19 & func_288(iParam2))
			{
				if (!func_40(&(uParam0->f_8)))
				{
					func_7(&(uParam0->f_18), 1);
					func_7(&(uParam0->f_18), 8);
					func_41(&(uParam0->f_8));
				}
				else if ((uParam1[iVar5 /*10*/])->f_1 < 7)
				{
					if (func_289(iParam2, iVar5) >= 0.0f && fVar2 > func_289(iParam2, iVar5))
					{
						(uParam1[iVar5 /*10*/])->f_1 = 7;
					}
				}
			}
			if ((!uParam0->f_19 && !func_286(*uParam0, iVar5)) && (uParam1[iVar5 /*10*/])->f_1 != 5)
			{
				if ((uParam1[iVar5 /*10*/])->f_9)
				{
					fVar6 = func_290(Global_35, (*uParam1)[iVar5 /*10*/], 1, 1);
					if (fVar6 > 2.0f || !func_291(uParam1[iVar5 /*10*/]))
					{
						(uParam1[iVar5 /*10*/])->f_9 = 0;
						uParam0->f_21 = 0;
						(uParam1[iVar5 /*10*/])->f_5 = 2;
						func_292(uParam1[iVar5 /*10*/], iParam2);
					}
				}
				else if (!uParam0->f_21 && (uParam1[iVar5 /*10*/])->f_1 != 6)
				{
					fVar6 = func_290(Global_35, (*uParam1)[iVar5 /*10*/], 1, 1);
					if (fVar6 < 1.5f && func_291(uParam1[iVar5 /*10*/]))
					{
						(uParam1[iVar5 /*10*/])->f_5 = func_293(iVar5);
						func_292(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_9 = 1;
						uParam0->f_21 = 1;
					}
				}
			}
			switch ((uParam1[iVar5 /*10*/])->f_1)
			{
				case 0:
					break;
				case 1:
					if (func_294(iParam2, iVar5))
					{
						func_296(uParam1[iVar5 /*10*/], func_295(iParam2), 500);
					}
					break;
				case 3:
					func_297(uParam1[iVar5 /*10*/], iParam2);
					(uParam1[iVar5 /*10*/])->f_1 = 4;
					break;
				case 4:
					bVar7 = false;
					if ((uParam1[iVar5 /*10*/])->f_6 == -1)
					{
						func_292(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_1 = 1;
						return;
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam1)[iVar5 /*10*/], (uParam1[iVar5 /*10*/])->f_7, (uParam1[iVar5 /*10*/])->f_8, 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME((*uParam1)[iVar5 /*10*/], (uParam1[iVar5 /*10*/])->f_7, (uParam1[iVar5 /*10*/])->f_8) > 0.97f)
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						func_292(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_1 = 1;
					}
					break;
				case 5:
					if (!uParam0->f_19)
					{
						func_298(uParam0, uParam1[iVar5 /*10*/]);
					}
					break;
				case 6:
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_12[1 /*2*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
						{
							PED::SET_PED_RESET_FLAG((*uParam1)[iVar5 /*10*/], 261 /*PRF_0x6C4415CE*/, true);
						}
						if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_12[1 /*2*/], func_184(1, iVar5, uParam0->f_17)) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_12[1 /*2*/], false))
						{
							func_187(uParam1[iVar5 /*10*/], iParam2);
							(uParam1[iVar5 /*10*/])->f_1 = 1;
						}
						if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE((*uParam1)[iVar5 /*10*/], uParam0->f_12[1 /*2*/]))
						{
							func_187(uParam1[iVar5 /*10*/], iParam2);
							(uParam1[iVar5 /*10*/])->f_1 = 1;
						}
					}
					break;
				case 2:
					TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), func_178(iParam2, iVar5), func_179(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
					(uParam1[iVar5 /*10*/])->f_1 = 1;
					break;
				case 7:
					if (!func_2(uParam0->f_18, 4))
					{
						return;
					}
					if (func_275(iParam2, iVar5) == 0 && !func_185(iParam2))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), func_178(iParam2, iVar5), func_179(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE((*uParam1)[iVar5 /*10*/], false, false);
						(uParam1[iVar5 /*10*/])->f_1 = 8;
					}
					else
					{
						(uParam1[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				case 8:
					if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5 /*10*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO((*uParam1)[iVar5 /*10*/], 0))
						{
							PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT((*uParam1)[iVar5 /*10*/], 2546.344f, -1307.994f, 48.42698f, 0, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], true);
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
						else if (fVar2 > (func_289(iParam2, iVar5) + 2.0f))
						{
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
					}
					break;
				case 9:
					if (func_254(iParam2))
					{
						if (func_2(uParam0->f_18, 16))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING((*uParam1)[iVar5 /*10*/], func_213(iParam2), 0, 10, -1, false, 0, -1);
							(uParam1[iVar5 /*10*/])->f_1 = 10;
						}
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[iVar5 /*10*/], func_299(iParam2), 1.0f, -1, 0.25f, 5373953, 40000.0f);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE((*uParam1)[iVar5 /*10*/], false, false);
						(uParam1[iVar5 /*10*/])->f_1 = 10;
					}
					break;
				case 10:
					if ((bVar0 || PED::IS_PED_SHOOTING(Global_35)) || func_2(uParam0->f_18, 32))
					{
						func_7(&(uParam0->f_18), 32);
						(uParam1[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					if (func_254(iParam2))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], joaat("SCRIPT_TASK_FOLLOW_WAYPOINT_RECORDING"), true) == 1)
						{
							(uParam1[iVar5 /*10*/])->f_1 = 11;
						}
						else if (fVar2 > (func_289(iParam2, iVar5) + 3.0f))
						{
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
					}
					else if (!func_300(ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar5 /*10*/], true, false)))
					{
						PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
						PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), true) != 1 && fVar2 > (func_289(iParam2, iVar5) + 3.0f))
					{
						(uParam1[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				case 11:
					if ((bVar0 || PED::IS_PED_SHOOTING(Global_35)) || func_2(uParam0->f_18, 32))
					{
						func_7(&(uParam0->f_18), 32);
						(uParam1[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_213(iParam2), &iVar3);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_213(iParam2), ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar5 /*10*/], true, false), &iVar4);
					if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], joaat("SCRIPT_TASK_FOLLOW_WAYPOINT_RECORDING"), true) != 1 || iVar4 >= (iVar3 - 2))
					{
						PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
						PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					break;
				case 12:
					PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
					PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
					TASK::TASK_FLEE_PED((*uParam1)[iVar5 /*10*/], Global_35, 3, 0, -1.0f, -1, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
					(uParam1[iVar5 /*10*/])->f_1 = 14;
					break;
				case 13:
					if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), true) != 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO((*uParam1)[iVar5 /*10*/], 0))
					{
						PED::DELETE_PED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					else
					{
						(uParam1[iVar5 /*10*/])->f_1 = 8;
					}
					break;
				case 14:
					break;
			}
		}
		iVar5++;
	}
}

struct<21> /*168*/ func_215(int iParam0, int iParam1, int iParam2)
{
	struct<21> /*168*/ sVar0;

	sVar0 = 4;
	sVar0.f_5 = 4;
	sVar0.f_10 = 4;
	sVar0.f_15 = 4;
	sVar0[0] = -1;
	sVar0[1] = -1;
	sVar0[2] = -1;
	sVar0[3] = -1;
	sVar0.f_5[0] = 0;
	sVar0.f_5[1] = 0;
	sVar0.f_5[2] = 0;
	sVar0.f_5[3] = 0;
	sVar0.f_10[0] = -1;
	sVar0.f_10[1] = -1;
	sVar0.f_10[2] = -1;
	sVar0.f_10[3] = -1;
	sVar0.f_15[0] = 0;
	sVar0.f_15[1] = 0;
	sVar0.f_15[2] = 0;
	sVar0.f_15[3] = 0;
	sVar0.f_20 = "";
	if (iParam2 == 49)
	{
		sVar0.f_10[0] = 35;
	}
	if (iParam2 == 48)
	{
		sVar0.f_10[0] = 2;
		sVar0.f_15[0] = 100;
	}
	switch (iParam0)
	{
		case 9:
			switch (iParam2)
			{
				case 1:
					sVar0[0] = 16;
					sVar0.f_5[0] = 100;
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 75;
					sVar0.f_15[1] = 25;
					sVar0.f_20 = "mc_set1_int_mc_appears";
					break;
				case 2:
					sVar0[0] = 16;
					sVar0.f_5[0] = 50;
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 90;
					sVar0.f_15[1] = 10;
					sVar0.f_20 = "mc_set1_int_name_applause";
					break;
				case 3:
					sVar0.f_20 = "mc_set1_int_ticket_price_applause";
					break;
				case 4:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					break;
				case 5:
					sVar0.f_10[0] = 0;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 80;
					sVar0.f_20 = "mc_bulc_int_act_discovery";
					break;
				case 6:
					sVar0[0] = 24;
					sVar0.f_5[0] = 75;
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 75;
					sVar0.f_15[1] = 25;
					break;
				case 7:
					sVar0.f_10[0] = 11;
					sVar0.f_15[0] = 100;
					sVar0.f_20 = "mc_bulc_int_name_applause";
					break;
				case 8:
					sVar0[0] = 21;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 10;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 30;
					sVar0.f_20 = "mc_outro_pos_finishes";
					break;
				case 9:
					sVar0.f_10[0] = 10;
					sVar0.f_15[0] = 100;
					break;
				case 10:
					sVar0.f_10[0] = 6;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					sVar0.f_20 = "mc_outro_neg_applause";
					break;
				case 11:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					sVar0.f_20 = "mc_outro_neg_finishes";
					break;
				case 12:
					sVar0.f_10[0] = 10;
					sVar0.f_15[0] = 100;
					sVar0.f_20 = "mc_outro_neg_finishes";
					break;
				case 13:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 3;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 10;
					sVar0.f_20 = "bullet_catch_initial_banter";
					break;
				case 14:
					sVar0.f_20 = "bullet_catch_horrible_disease";
					break;
				case 15:
					sVar0[0] = 22;
					sVar0.f_5[0] = 75;
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					sVar0.f_20 = "bullet_catch_gun_reveal";
					break;
				case 16:
					sVar0[0] = 20;
					sVar0.f_5[0] = 40;
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					sVar0.f_20 = "bullet_catch_bedding_my_wife";
					break;
				case 17:
					sVar0[0] = 24;
					sVar0.f_5[0] = 50;
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 8;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 10;
					sVar0.f_15[2] = 40;
					sVar0.f_20 = "bullet_catch_i_joke";
					break;
				case 18:
					sVar0[0] = 23;
					sVar0.f_5[0] = 50;
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 75;
					sVar0.f_15[1] = 25;
					sVar0.f_20 = "bullet_catch_in_my_teeth";
					break;
				case 19:
					break;
				case 20:
					sVar0.f_10[0] = 9;
					sVar0.f_15[0] = 100;
					break;
				case 21:
					sVar0[0] = 19;
					sVar0.f_5[0] = 100;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 22:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					sVar0.f_20 = "bullet_catch_as_if_it_were_nothing";
					break;
				case 23:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_15[0] = 75;
					sVar0.f_15[1] = 25;
					break;
				case 24:
					sVar0.f_10[0] = 0;
					sVar0.f_15[0] = 100;
					break;
				case 25:
					sVar0[0] = 20;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					sVar0.f_20 = "bullet_catch_lets_do_that_again";
					break;
				case 26:
					sVar0.f_10[0] = 11;
					sVar0.f_15[0] = 100;
					break;
				case 27:
					sVar0.f_10[0] = 0;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 28:
					sVar0[0] = 19;
					sVar0[1] = 24;
					sVar0.f_5[0] = 60;
					sVar0.f_5[1] = 40;
					sVar0.f_10[0] = 6;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 29:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 30:
					sVar0[0] = 16;
					sVar0.f_5[0] = 100;
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 8;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					sVar0.f_20 = "bullet_catch_player_volunteers";
					break;
				case 31:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 9;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					sVar0.f_20 = "bullet_catch_take_aim";
					break;
				case 32:
					sVar0.f_20 = "bullet_catch_waiting_for_shot";
					break;
				case 33:
					sVar0[0] = 21;
					sVar0.f_5[0] = 100;
					sVar0.f_10[0] = 13;
					sVar0.f_15[0] = 100;
					sVar0.f_20 = "bullet_catch_g_alt_player_shot";
					break;
				case 34:
					sVar0[0] = 17;
					sVar0[1] = 23;
					sVar0.f_5[0] = 50;
					sVar0.f_5[1] = 50;
					sVar0.f_10[0] = 12;
					sVar0.f_15[0] = 100;
					sVar0.f_20 = "bullet_catch_g_alt_player_shot_reveal";
					break;
				case 35:
					sVar0[0] = 21;
					sVar0.f_5[0] = 100;
					sVar0.f_10[0] = 13;
					sVar0.f_15[0] = 100;
					sVar0.f_20 = "bullet_catch_g_alt_player_shot_stomach";
					break;
				case 36:
					sVar0.f_10[0] = 13;
					sVar0.f_10[1] = 6;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 20;
					sVar0.f_20 = "bullet_catch_supposed_to_shoot_head";
					break;
				case 37:
					sVar0.f_10[0] = 6;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 30;
					sVar0.f_20 = "bullet_catch_absolute_pillock";
					break;
				case 38:
					sVar0[0] = 16;
					sVar0.f_5[0] = 50;
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 8;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 80;
					sVar0.f_20 = "bullet_catch_npc_volunteers";
					break;
				case 39:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 9;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					sVar0.f_20 = "bullet_catch_npc_aims";
					break;
				case 40:
					sVar0[0] = 21;
					sVar0.f_5[0] = 100;
					sVar0.f_10[0] = 13;
					sVar0.f_15[0] = 100;
					sVar0.f_20 = "bullet_catch_npc_shoots";
					break;
				case 41:
					sVar0[0] = 17;
					sVar0[1] = 23;
					sVar0.f_5[0] = 50;
					sVar0.f_5[1] = 50;
					sVar0.f_10[0] = 12;
					sVar0.f_15[0] = 100;
					sVar0.f_20 = "bullet_catch_npc_shot_reveal";
					break;
				case 42:
					sVar0[0] = 16;
					sVar0.f_5[0] = 50;
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 8;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					sVar0.f_20 = "bullet_catch_npc_volunteers";
					break;
				case 43:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 9;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					sVar0.f_20 = "bullet_catch_npc_aims";
					break;
				case 44:
					sVar0[0] = 21;
					sVar0.f_5[0] = 100;
					sVar0.f_10[0] = 13;
					sVar0.f_15[0] = 100;
					sVar0.f_20 = "bullet_catch_npc_shoots";
					break;
				case 45:
					sVar0[0] = 17;
					sVar0[1] = 23;
					sVar0.f_5[0] = 50;
					sVar0.f_5[1] = 50;
					sVar0.f_10[0] = 12;
					sVar0.f_15[0] = 100;
					sVar0.f_20 = "bullet_catch_npc_shot_reveal";
					break;
			}
			break;
		case 12:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 1;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 2:
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 6;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 3:
					sVar0[0] = 25;
					sVar0[1] = 24;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 30;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 4:
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 40;
					break;
				case 5:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 6:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 6;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 30;
					break;
				case 13:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 8;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 30;
					break;
				case 14:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 60;
					break;
				case 15:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 4;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 30;
					sVar0.f_15[3] = 40;
					break;
				case 16:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 40;
					break;
				case 17:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 8;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 30;
					break;
				case 18:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					break;
				case 19:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 4;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 30;
					sVar0.f_15[3] = 40;
					break;
				case 20:
					sVar0.f_10[0] = 10;
					sVar0.f_15[0] = 70;
					break;
				case 21:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 4;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 30;
					sVar0.f_15[3] = 40;
					break;
				case 22:
					sVar0[0] = 23;
					sVar0[1] = 20;
					sVar0[2] = 16;
					sVar0[3] = 19;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 20;
					sVar0.f_5[2] = 20;
					sVar0.f_5[3] = 30;
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 4;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 23:
					sVar0[0] = 25;
					sVar0[1] = 23;
					sVar0[2] = 16;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 20;
					sVar0.f_5[2] = 50;
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 10;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 40;
					break;
				case 24:
					sVar0[0] = 23;
					sVar0[1] = 22;
					sVar0[2] = 16;
					sVar0[3] = 25;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 30;
					sVar0.f_5[1] = 10;
					sVar0.f_5[1] = 30;
					sVar0.f_10[0] = 12;
					sVar0.f_15[0] = 100;
					break;
				case 25:
					sVar0[0] = 17;
					sVar0.f_5[0] = 10;
					sVar0.f_10[0] = 12;
					sVar0.f_15[0] = 100;
					break;
				case 26:
					sVar0[0] = 31;
					sVar0.f_5[0] = 100;
					sVar0.f_10[0] = 13;
					sVar0.f_15[0] = 100;
					break;
			}
			break;
		case 7:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 2:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 8;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 30;
					break;
				case 3:
					sVar0.f_10[0] = 6;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 30;
					break;
				case 4:
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 10;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 70;
					sVar0.f_15[2] = 20;
					break;
				case 5:
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 13:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 8;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 30;
					break;
				case 14:
					sVar0[0] = 24;
					sVar0.f_5[0] = 20;
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 30;
					break;
				case 15:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 8;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 30;
					break;
				case 16:
					sVar0[0] = 24;
					sVar0[1] = 16;
					sVar0.f_5[0] = 50;
					sVar0.f_5[1] = 10;
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					break;
				case 17:
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 18:
					sVar0[0] = 17;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 12;
					sVar0.f_15[0] = 100;
					break;
			}
			break;
		case 5:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 2:
					sVar0.f_10[0] = 1;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 20;
					break;
				case 3:
					sVar0[0] = 24;
					sVar0.f_5[0] = 40;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 4:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 3;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 20;
					break;
				case 5:
					sVar0.f_10[0] = 1;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 6:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 12;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 7:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 10;
					sVar0.f_15[2] = 30;
					break;
				case 13:
					sVar0.f_10[0] = 5;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 14:
					sVar0[0] = 25;
					sVar0.f_5[0] = 20;
					sVar0.f_10[0] = 5;
					sVar0.f_10[1] = 4;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 15:
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 90;
					break;
				case 16:
					sVar0.f_10[0] = 5;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 4;
					sVar0.f_10[3] = 11;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 50;
					sVar0.f_15[3] = 10;
					break;
				case 17:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 12;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 50;
					break;
				case 18:
					sVar0[0] = 17;
					sVar0.f_5[0] = 5;
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 19:
					sVar0[0] = 17;
					sVar0.f_5[0] = 60;
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
			}
			break;
		case 16:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 10;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 2:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 20;
					break;
				case 3:
					sVar0[0] = 24;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 4:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 20;
					break;
				case 13:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 14:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 50;
					break;
				case 15:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 16:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 50;
					break;
				case 17:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 18:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 12;
					sVar0.f_10[3] = 2;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 40;
					break;
				case 19:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 20:
					sVar0.f_10[0] = 9;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 21:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 12;
					sVar0.f_10[3] = 2;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 40;
					break;
				case 22:
					sVar0.f_10[0] = 12;
					sVar0.f_15[0] = 60;
					break;
				case 23:
					sVar0[0] = 21;
					sVar0[1] = 20;
					sVar0[2] = 19;
					sVar0.f_5[0] = 25;
					sVar0.f_5[1] = 25;
					sVar0.f_5[2] = 25;
					sVar0.f_10[0] = 3;
					sVar0.f_15[0] = 100;
					break;
			}
			break;
		case 18:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 2:
					sVar0.f_10[0] = 6;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 6:
					sVar0.f_10[0] = 0;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 10;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					break;
				case 3:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 4:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 30;
					break;
				case 5:
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 13:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					break;
				case 14:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 15:
					sVar0.f_10[0] = 0;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					break;
				case 16:
					sVar0[0] = 16;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 17:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 12;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 10;
					break;
				case 18:
					sVar0.f_10[0] = 0;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					break;
				case 19:
					sVar0[0] = 16;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 3;
					sVar0.f_15[0] = 100;
					break;
				case 20:
					sVar0.f_10[0] = 6;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 21:
					sVar0.f_10[0] = 9;
					sVar0.f_10[1] = 8;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 20;
					break;
				case 22:
					sVar0.f_10[0] = 9;
					sVar0.f_10[1] = 8;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 20;
					break;
				case 23:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 30;
					break;
				case 24:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 60;
					break;
				case 25:
					sVar0[0] = 21;
					sVar0[1] = 20;
					sVar0[2] = 19;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 30;
					sVar0.f_5[2] = 40;
					sVar0.f_10[0] = 3;
					sVar0.f_15[0] = 100;
					break;
			}
			break;
		case 17:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 2:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 3:
					sVar0[0] = 24;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 4:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 20;
					break;
				case 5:
					break;
				case 6:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 7:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 8;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 70;
					sVar0.f_15[2] = 10;
					break;
				case 13:
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 14:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 30;
					break;
				case 15:
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 16:
					sVar0.f_10[0] = 10;
					sVar0.f_15[0] = 80;
					break;
				case 17:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 8;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 10;
					sVar0.f_15[2] = 10;
					break;
				case 18:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 12;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					break;
				case 19:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 10;
					break;
				case 20:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 9;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 21:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 15;
					sVar0.f_15[1] = 85;
					break;
				case 22:
					sVar0[0] = 23;
					sVar0[1] = 22;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 30;
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 70;
					break;
				case 23:
					sVar0[0] = 21;
					sVar0[1] = 20;
					sVar0[2] = 19;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 30;
					sVar0.f_5[2] = 40;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					break;
				case 2:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 70;
					break;
				case 3:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 70;
					sVar0.f_15[2] = 20;
					break;
				case 4:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 40;
					break;
				case 5:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					break;
				case 13:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 0;
					sVar0.f_10[3] = 3;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 14:
					sVar0[0] = 23;
					sVar0.f_5[0] = 15;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 15:
					sVar0[0] = 23;
					sVar0.f_5[0] = 15;
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 40;
					break;
				case 16:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 0;
					sVar0.f_10[3] = 3;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 60;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 10;
					break;
				case 17:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 20;
					break;
				case 18:
					sVar0[0] = 21;
					sVar0[1] = 20;
					sVar0[2] = 19;
					sVar0.f_5[0] = 15;
					sVar0.f_5[1] = 15;
					sVar0.f_5[2] = 15;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 19:
					sVar0[0] = 26;
					sVar0.f_5[0] = 100;
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 20:
					sVar0[0] = 17;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 11;
					sVar0.f_15[0] = 100;
					break;
			}
			break;
		case 15:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 2:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 80;
					break;
				case 3:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 70;
					sVar0.f_15[1] = 30;
					break;
				case 4:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 10;
					sVar0.f_15[2] = 40;
					break;
				case 5:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 70;
					sVar0.f_15[1] = 30;
					break;
				case 13:
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 5;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 10;
					sVar0.f_15[2] = 60;
					break;
				case 14:
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 5;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 60;
					sVar0.f_15[2] = 10;
					break;
				case 15:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 70;
					break;
				case 16:
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 5;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 20;
					break;
				case 17:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_10[2] = 5;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 20;
					break;
				case 18:
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 5;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 20;
					break;
				case 19:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 80;
					break;
				case 20:
					sVar0[0] = 25;
					sVar0[1] = 24;
					sVar0.f_5[0] = 20;
					sVar0.f_5[1] = 20;
					sVar0.f_10[0] = 0;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 21:
					sVar0[0] = 24;
					sVar0[1] = 25;
					sVar0.f_5[0] = 40;
					sVar0.f_5[1] = 10;
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 22:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 40;
					break;
				case 23:
					sVar0[0] = 23;
					sVar0.f_5[0] = 40;
					sVar0.f_10[0] = 6;
					sVar0.f_15[0] = 100;
					break;
				case 24:
					sVar0[0] = 24;
					sVar0[1] = 25;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 10;
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 25:
					sVar0[0] = 23;
					sVar0[1] = 24;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 30;
					sVar0.f_10[0] = 6;
					sVar0.f_15[0] = 100;
					break;
				case 26:
					sVar0[0] = 23;
					sVar0.f_5[0] = 20;
					sVar0.f_10[0] = 6;
					sVar0.f_15[0] = 100;
					break;
				case 27:
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 80;
					break;
				case 28:
					sVar0[0] = 17;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 29:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 5;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 15;
					sVar0.f_15[2] = 15;
					sVar0.f_15[3] = 20;
					break;
			}
			break;
		case 11:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 12;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 20;
					break;
				case 2:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 10;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 25;
					sVar0.f_15[2] = 25;
					break;
				case 3:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 60;
					break;
				case 4:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 10;
					sVar0.f_15[2] = 70;
					break;
				case 5:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 25;
					sVar0.f_15[2] = 25;
					break;
				case 6:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_10[2] = 10;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 13:
					sVar0.f_10[0] = 0;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 70;
					break;
				case 14:
					break;
				case 15:
					sVar0[0] = 19;
					sVar0.f_5[0] = 10;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 16:
					sVar0[0] = 24;
					sVar0.f_5[0] = 15;
					sVar0.f_10[0] = 0;
					sVar0.f_15[0] = 100;
					break;
				case 17:
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 40;
					break;
				case 18:
					sVar0.f_10[0] = 0;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 8;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 19:
					sVar0.f_10[0] = 0;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 8;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 30;
					break;
				case 20:
					sVar0[0] = 20;
					sVar0.f_5[0] = 20;
					sVar0.f_10[0] = 0;
					sVar0.f_15[0] = 100;
					break;
				case 21:
					sVar0.f_10[0] = 0;
					sVar0.f_10[1] = 8;
					sVar0.f_10[2] = 9;
					sVar0.f_10[3] = 2;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 30;
					sVar0.f_15[3] = 30;
					break;
				case 22:
					sVar0[0] = 21;
					sVar0[1] = 20;
					sVar0[2] = 19;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 30;
					sVar0.f_5[2] = 10;
					sVar0.f_10[0] = 13;
					sVar0.f_15[0] = 100;
					break;
				case 23:
					sVar0[0] = 21;
					sVar0[1] = 20;
					sVar0[2] = 23;
					sVar0[3] = 22;
					sVar0.f_5[0] = 25;
					sVar0.f_5[1] = 25;
					sVar0.f_5[2] = 25;
					sVar0.f_5[3] = 25;
					sVar0.f_10[0] = 13;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 2;
					sVar0.f_10[3] = 6;
					sVar0.f_15[0] = 25;
					sVar0.f_15[1] = 25;
					sVar0.f_15[2] = 25;
					sVar0.f_15[3] = 25;
					break;
				case 24:
					sVar0.f_10[0] = 13;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 2;
					sVar0.f_10[3] = 6;
					sVar0.f_15[0] = 25;
					sVar0.f_15[1] = 25;
					sVar0.f_15[2] = 25;
					sVar0.f_15[3] = 25;
					break;
			}
			break;
		case 13:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 70;
					sVar0.f_15[1] = 30;
					break;
				case 2:
					sVar0.f_10[0] = 1;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 20;
					break;
				case 3:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					break;
				case 4:
					sVar0.f_10[0] = 1;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 20;
					break;
				case 5:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					break;
				case 6:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 10;
					sVar0.f_15[2] = 10;
					break;
				case 13:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 20;
					break;
				case 14:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 20;
					break;
				case 15:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 20;
					break;
				case 16:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 17:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 20;
					break;
				case 18:
					sVar0[0] = 16;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 11;
					sVar0.f_15[0] = 100;
					break;
				case 19:
					sVar0[0] = 23;
					sVar0[1] = 22;
					sVar0.f_5[0] = 20;
					sVar0.f_5[1] = 20;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 20:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 80;
					break;
				case 21:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 0;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 20;
					break;
				case 22:
					sVar0[0] = 23;
					sVar0[1] = 22;
					sVar0[2] = 19;
					sVar0.f_5[0] = 20;
					sVar0.f_5[1] = 20;
					sVar0.f_5[2] = 20;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 23:
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 10;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 20;
					break;
			}
			break;
		case 14:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 2:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 70;
					sVar0.f_15[2] = 20;
					break;
				case 3:
					sVar0[0] = 24;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 13:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					break;
				case 14:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 70;
					sVar0.f_15[1] = 30;
					break;
				case 15:
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 70;
					sVar0.f_15[1] = 30;
					break;
				case 16:
					sVar0.f_10[0] = 8;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 4;
					sVar0.f_10[3] = 10;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 17:
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 50;
					sVar0.f_15[2] = 20;
					break;
				case 18:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 19:
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 4;
					sVar0.f_10[3] = 10;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 20;
					break;
				case 20:
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 30;
					break;
				case 21:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 60;
					break;
				case 22:
					sVar0.f_10[0] = 3;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 30;
					break;
				case 23:
					sVar0.f_10[0] = 11;
					sVar0.f_15[0] = 30;
					break;
				case 24:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 70;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 10;
					break;
				case 2:
					sVar0.f_10[0] = 1;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 13:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 30;
					break;
				case 14:
					sVar0[0] = 16;
					sVar0[1] = 25;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 10;
					sVar0.f_10[0] = 4;
					sVar0.f_15[0] = 100;
					break;
				case 15:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 30;
					break;
				case 16:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 30;
					break;
				case 17:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 70;
					break;
				case 18:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 30;
					break;
				case 19:
					sVar0[0] = 25;
					sVar0.f_5[0] = 20;
					sVar0.f_10[0] = 3;
					sVar0.f_15[0] = 100;
					break;
				case 20:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 50;
					break;
				case 21:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
			}
			break;
		case 8:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 2:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 8;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 10;
					break;
				case 3:
					sVar0[0] = 16;
					sVar0.f_5[0] = 20;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 4:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 12;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 20;
					break;
				case 5:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 3;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 10;
					break;
				case 13:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_10[2] = 8;
					sVar0.f_10[3] = 3;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 10;
					break;
				case 14:
					sVar0.f_10[0] = 4;
					sVar0.f_15[0] = 50;
					break;
				case 15:
					sVar0[0] = 16;
					sVar0[1] = 17;
					sVar0.f_5[0] = 80;
					sVar0.f_5[1] = 20;
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
			}
			break;
		case 6:
			switch (iParam2)
			{
				case 1:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 2:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					break;
				case 3:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					break;
				case 13:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 20;
					break;
				case 14:
					sVar0.f_10[0] = 5;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 70;
					break;
				case 15:
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 10;
					sVar0.f_15[1] = 90;
					break;
				case 16:
					sVar0[0] = 25;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 3;
					sVar0.f_15[0] = 100;
					break;
				case 17:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 5;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 10;
					break;
				case 18:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 5;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 10;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 30;
					break;
				case 19:
					sVar0[0] = 25;
					sVar0.f_5[0] = 30;
					sVar0.f_10[0] = 2;
					sVar0.f_15[0] = 100;
					break;
				case 20:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_10[3] = 5;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 10;
					sVar0.f_15[2] = 40;
					sVar0.f_15[3] = 10;
					break;
				case 21:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
				case 22:
					sVar0.f_10[0] = 4;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 10;
					sVar0.f_10[3] = 5;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 10;
					break;
				case 23:
					sVar0[0] = 17;
					sVar0.f_5[0] = 100;
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 50;
					break;
			}
			break;
		case 20:
			switch (iParam2)
			{
				case 1:
					switch (iParam1)
					{
						case 9:
							sVar0[0] = 16;
							sVar0.f_5[0] = 100;
							sVar0.f_10[0] = 2;
							sVar0.f_10[1] = 3;
							sVar0.f_15[0] = 75;
							sVar0.f_15[1] = 25;
							sVar0.f_20 = "mc_set1_int_mc_appears";
							break;
						case 5:
							sVar0.f_10[0] = 11;
							sVar0.f_10[1] = 10;
							sVar0.f_15[0] = 50;
							sVar0.f_15[1] = 50;
							break;
						case 8:
							sVar0.f_10[0] = 11;
							sVar0.f_10[1] = 10;
							sVar0.f_15[0] = 50;
							sVar0.f_15[1] = 50;
							break;
						case 17:
							sVar0.f_10[0] = 11;
							sVar0.f_10[1] = 10;
							sVar0.f_15[0] = 50;
							sVar0.f_15[1] = 50;
							break;
						case 13:
							sVar0.f_10[0] = 10;
							sVar0.f_10[1] = 11;
							sVar0.f_15[0] = 80;
							sVar0.f_15[1] = 20;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 9:
							sVar0[0] = 16;
							sVar0.f_5[0] = 50;
							sVar0.f_10[0] = 2;
							sVar0.f_10[1] = 3;
							sVar0.f_15[0] = 90;
							sVar0.f_15[1] = 10;
							sVar0.f_20 = "mc_set1_int_name_applause";
							break;
						case 5:
							sVar0.f_10[0] = 1;
							sVar0.f_10[1] = 2;
							sVar0.f_10[2] = 3;
							sVar0.f_10[3] = 0;
							sVar0.f_15[0] = 10;
							sVar0.f_15[1] = 50;
							sVar0.f_15[2] = 20;
							sVar0.f_15[3] = 20;
							break;
						case 8:
							sVar0.f_10[0] = 2;
							sVar0.f_10[1] = 0;
							sVar0.f_10[2] = 8;
							sVar0.f_15[0] = 60;
							sVar0.f_15[1] = 30;
							sVar0.f_15[2] = 10;
							break;
						case 17:
							sVar0.f_10[0] = 4;
							sVar0.f_10[1] = 2;
							sVar0.f_10[2] = 8;
							sVar0.f_10[3] = 0;
							sVar0.f_15[0] = 10;
							sVar0.f_15[1] = 50;
							sVar0.f_15[2] = 20;
							sVar0.f_15[3] = 20;
							break;
						case 13:
							sVar0.f_10[0] = 1;
							sVar0.f_10[1] = 2;
							sVar0.f_10[2] = 3;
							sVar0.f_10[3] = 0;
							sVar0.f_15[0] = 20;
							sVar0.f_15[1] = 50;
							sVar0.f_15[2] = 10;
							sVar0.f_15[3] = 20;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							sVar0.f_20 = "mc_set1_int_ticket_price_applause";
							break;
						case 5:
							sVar0[0] = 24;
							sVar0.f_5[0] = 40;
							sVar0.f_10[0] = 2;
							sVar0.f_15[0] = 100;
							break;
						case 8:
							sVar0[0] = 16;
							sVar0.f_5[0] = 20;
							sVar0.f_10[0] = 2;
							sVar0.f_15[0] = 100;
							break;
						case 17:
							sVar0[0] = 24;
							sVar0.f_5[0] = 30;
							sVar0.f_10[0] = 2;
							sVar0.f_15[0] = 100;
							break;
						case 13:
							sVar0.f_10[0] = 10;
							sVar0.f_10[1] = 11;
							sVar0.f_15[0] = 80;
							sVar0.f_15[1] = 20;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							sVar0.f_10[0] = 11;
							sVar0.f_10[1] = 2;
							sVar0.f_15[0] = 80;
							sVar0.f_15[1] = 20;
							break;
						case 5:
							sVar0.f_10[0] = 11;
							sVar0.f_10[1] = 10;
							sVar0.f_10[2] = 3;
							sVar0.f_15[0] = 40;
							sVar0.f_15[1] = 40;
							sVar0.f_15[2] = 20;
							break;
						case 8:
							break;
						case 17:
							sVar0.f_10[0] = 11;
							sVar0.f_10[1] = 10;
							sVar0.f_15[0] = 40;
							sVar0.f_15[1] = 60;
							break;
						case 13:
							break;
					}
					break;
				case 5:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 0;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					break;
				case 6:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 70;
					sVar0.f_15[1] = 30;
					break;
				case 7:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 8:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 70;
					break;
				case 13:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_10[2] = 6;
					sVar0.f_10[3] = 3;
					sVar0.f_15[0] = 40;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 10;
					sVar0.f_15[3] = 30;
					break;
				case 14:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 20;
					break;
				case 15:
					sVar0.f_10[0] = 10;
					sVar0.f_10[1] = 11;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 40;
					break;
				case 16:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 20;
					break;
				case 17:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_15[0] = 80;
					sVar0.f_15[1] = 20;
					break;
				case 18:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 0;
					sVar0.f_10[3] = 8;
					sVar0.f_15[0] = 50;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 20;
					sVar0.f_15[3] = 10;
					break;
				case 19:
					sVar0[0] = 21;
					sVar0[1] = 20;
					sVar0[2] = 24;
					sVar0.f_5[0] = 20;
					sVar0.f_5[1] = 20;
					sVar0.f_5[2] = 20;
					sVar0.f_10[0] = 13;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 20:
					sVar0[0] = 21;
					sVar0[1] = 20;
					sVar0[2] = 24;
					sVar0.f_5[0] = 20;
					sVar0.f_5[1] = 20;
					sVar0.f_5[2] = 20;
					sVar0.f_10[0] = 13;
					sVar0.f_10[1] = 2;
					sVar0.f_10[2] = 3;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 21:
					sVar0[0] = 20;
					sVar0[1] = 19;
					sVar0[2] = 23;
					sVar0[3] = 22;
					sVar0.f_5[0] = 20;
					sVar0.f_5[1] = 20;
					sVar0.f_5[2] = 20;
					sVar0.f_5[3] = 20;
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 30;
					break;
				case 22:
					sVar0.f_10[0] = 12;
					sVar0.f_10[1] = 2;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 80;
					break;
				case 23:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 20;
					break;
				case 24:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 70;
					break;
				case 25:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 12;
					sVar0.f_15[0] = 70;
					sVar0.f_15[1] = 30;
					break;
				case 26:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 0;
					sVar0.f_15[0] = 60;
					sVar0.f_15[1] = 20;
					sVar0.f_15[2] = 20;
					break;
				case 27:
					sVar0[0] = 24;
					sVar0[1] = 23;
					sVar0[2] = 22;
					sVar0.f_5[0] = 30;
					sVar0.f_5[1] = 30;
					sVar0.f_5[2] = 40;
					sVar0.f_10[0] = 6;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 2;
					sVar0.f_15[0] = 20;
					sVar0.f_15[1] = 40;
					sVar0.f_15[2] = 40;
					break;
				case 28:
					sVar0.f_10[0] = 2;
					sVar0.f_10[1] = 3;
					sVar0.f_10[2] = 4;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 30;
					sVar0.f_15[2] = 40;
					break;
				case 29:
					sVar0.f_10[0] = 11;
					sVar0.f_10[1] = 10;
					sVar0.f_10[2] = 12;
					sVar0.f_15[0] = 30;
					sVar0.f_15[1] = 60;
					sVar0.f_15[2] = 10;
					break;
			}
			break;
	}
	return sVar0;
}

void func_216(var uParam0, var uParam1, int iParam2, struct<16> /*128*/ sParam3, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_175(iParam2);
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = sParam3.f_10;
	iVar7 = sParam3.f_0;
	iVar2 = 0;
	while (iVar2 <= (iVar6 - 1))
	{
		iVar4 += sParam3.f_15[iVar2];
		iVar2++;
	}
	func_41(&(uParam0->f_2));
	func_41(&(uParam0->f_5));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3.f_20))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam3.f_20);
	}
	if (sParam3[0] == -1 && sParam3.f_10[0] == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((uParam1[iVar1 /*10*/])->f_1 == 6)
		{
		}
		else if (sParam3.f_10[0] == 35)
		{
			(uParam1[iVar1 /*10*/])->f_1 = 13;
		}
		else
		{
			if (sParam3[0] != -1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				iVar5 = 0;
				iVar2 = 0;
				while (iVar2 <= (iVar7 - 1))
				{
					iVar5 += sParam3.f_5[iVar2];
					if (iVar3 <= iVar5)
					{
						(uParam1[iVar1 /*10*/])->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(100, 700);
						(uParam1[iVar1 /*10*/])->f_6 = sParam3[iVar2];
						Jump @290; // curOff = 266
					}
					else
					{
						(uParam1[iVar1 /*10*/])->f_6 = -1;
					}
					iVar2++;
				}
			}
			else
			{
				(uParam1[iVar1 /*10*/])->f_6 = -1;
			}
			if (sParam3.f_10[0] != -1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
				iVar5 = 0;
				iVar2 = 0;
				while (iVar2 <= (iVar6 - 1))
				{
					iVar5 += sParam3.f_15[iVar2];
					if (iVar3 <= iVar5)
					{
						(uParam1[iVar1 /*10*/])->f_5 = sParam3.f_10[iVar2];
						Jump @397; // curOff = 373
					}
					else
					{
						(uParam1[iVar1 /*10*/])->f_5 = -1;
					}
					iVar2++;
				}
			}
			else
			{
				(uParam1[iVar1 /*10*/])->f_5 = -1;
			}
			(uParam1[iVar1 /*10*/])->f_1 = 3;
		}
		iVar1++;
	}
}

Vector3 func_217(Vector3 vParam0)
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

float func_218(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_219(var uParam0)
{
	struct<23> /*184*/ sVar0;

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
	sVar0.f_3 = *uParam0;
	sVar0.f_4 = 21030;
	sVar0.f_8 = 4;
	sVar0.f_19 = 3;
	sVar0.f_20 = 2;
	sVar0.f_21 = 3;
	sVar0.f_22 = 3;
	sVar0.f_13 = 3;
	sVar0.f_7 = 500;
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_35, &sVar0);
}

void func_220(int iParam0)
{
	if (func_223(iParam0->f_1053[1]))
	{
		func_240(&(iParam0->f_1053[1]), 1, 1);
	}
	if (func_223(iParam0->f_1053[0]))
	{
		func_240(&(iParam0->f_1053[0]), 1, 1);
	}
	if (func_223(iParam0->f_1053[2]))
	{
		func_240(&(iParam0->f_1053[2]), 1, 1);
	}
}

void func_221(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_222(var uParam0)
{
	return uParam0;
}

bool func_223(int iParam0)
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

int func_224(int iParam0, var uParam1)
{
	if (!func_4(Global_35, Global_1394141.f_7[*iParam0 /*31*/].f_4, 1, 0))
	{
		return 0;
	}
	if (!func_231(&(iParam0->f_1053[1]), uParam1, "SHOW_POS_RESPONSE", joaat("INPUT_INTERACT_LOCKON_POS")))
	{
		return 0;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[func_301(iParam0->f_1053[1]) /*18*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0->f_12), 0);
	if (!func_231(&(iParam0->f_1053[0]), uParam1, "SHOW_NEG_RESPONSE", joaat("INPUT_INTERACT_LOCKON_NEG")))
	{
		return 0;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[func_301(iParam0->f_1053[0]) /*18*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0->f_12), 0);
	return 1;
}

void func_225(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_301(iParam0);
	if (bParam1)
	{
		func_302(iParam0, 4);
		func_303(iVar0, 1);
		func_304(iVar0, 1);
	}
	else
	{
		func_305(iParam0, 4);
		func_304(iVar0, 0);
	}
}

bool func_226(int iParam0, bool bParam1)
{
	if (bParam1 && !func_223(iParam0))
	{
		return false;
	}
	return !func_306(iParam0, 4);
}

bool func_227(var uParam0)
{
	if (func_223(*uParam0))
	{
		if (func_234(*uParam0, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_228(int iParam0)
{
	bool bVar0;
	Vector3 vVar1;
	int iVar4;

	bVar0 = false;
	if ((func_40(&(iParam0->f_950)) && iParam0->f_18 < func_307(*iParam0)) && func_47(&(iParam0->f_950)) > 35000)
	{
		iParam0->f_18++;
		vVar1 = { func_308(*iParam0, 0, 1) /*3*/ };
		bVar0 = true;
	}
	else if (func_309(*iParam0) && !func_310(36))
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		if (iVar4 < 5)
		{
			vVar1 = { func_308(*iParam0, 2, 1) /*3*/ };
		}
		else
		{
			vVar1 = { func_308(*iParam0, 1, 1) /*3*/ };
		}
	}
	else
	{
		vVar1 = { func_308(*iParam0, 1, 1) /*3*/ };
	}
	if (func_311(iParam0))
	{
		vVar1 = { func_308(*iParam0, 3, 1) /*3*/ };
	}
	if (func_312(&(iParam0->f_954), vVar1, 1, -1, 0, 0))
	{
		iParam0->f_1052++;
		func_313(iParam0);
		if (bVar0)
		{
			func_41(&(iParam0->f_950));
		}
		func_7(&(iParam0->f_16), 16);
		return true;
	}
	return false;
}

void func_229()
{
	bool bVar0;

	if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, joaat("SCRIPT_TASK_PLAY_ANIM"), true) == 1)
	{
		return;
	}
	bVar0 = false;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || (func_310(36) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1)))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		TASK::TASK_PLAY_ANIM(Global_35, func_159(), func_314(1), 8.0f, -8.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	}
	else
	{
		TASK::TASK_PLAY_ANIM(Global_35, func_159(), func_314(0), 8.0f, -8.0f, -1, 67108880, 0.0f, false, 1114114, false, 0, false);
	}
}

bool func_230(int iParam0)
{
	bool bVar0;
	Vector3 vVar1;
	int iVar4;

	bVar0 = false;
	if ((func_40(&(iParam0->f_950)) && iParam0->f_19 < func_307(*iParam0)) && func_47(&(iParam0->f_950)) > 35000)
	{
		iParam0->f_19++;
		vVar1 = { func_308(*iParam0, 0, 0) /*3*/ };
		bVar0 = true;
	}
	else if (func_309(*iParam0) && !func_310(36))
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		if (iVar4 < 5)
		{
			vVar1 = { func_308(*iParam0, 2, 0) /*3*/ };
		}
		else
		{
			vVar1 = { func_308(*iParam0, 1, 0) /*3*/ };
		}
	}
	else
	{
		vVar1 = { func_308(*iParam0, 1, 0) /*3*/ };
	}
	if (func_311(iParam0))
	{
		vVar1 = { func_308(*iParam0, 3, 0) /*3*/ };
	}
	if (func_312(&(iParam0->f_954), vVar1, 1, -1, 0, 0))
	{
		iParam0->f_1052--;
		func_315(iParam0);
		if (bVar0)
		{
			func_41(&(iParam0->f_950));
		}
		func_7(&(iParam0->f_16), 32);
		return true;
	}
	return false;
}

bool func_231(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	if (!func_223(*uParam0))
	{
		*uParam0 = func_316(sParam2, iParam3, *uParam1, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	}
	if (!func_223(*uParam0))
	{
		return false;
	}
	return true;
}

int func_232(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_233(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_234(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_223(iParam0))
	{
		return false;
	}
	iVar0 = func_301(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_235(var uParam0)
{
	struct<23> /*184*/ sVar0;

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
	sVar0.f_4 = 21030;
	sVar0.f_8 = 4;
	sVar0.f_19 = 3;
	sVar0.f_20 = 2;
	sVar0.f_21 = 3;
	sVar0.f_22 = 3;
	sVar0.f_13 = 3;
	sVar0.f_7 = 500;
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*uParam0, &sVar0);
}

void func_236()
{
	switch (iLocal_1148)
	{
		case 1:
			if (AUDIO::LOAD_STREAM(func_317(2), func_318()))
			{
				func_238(&iLocal_1148, 2);
			}
			break;
		case 2:
			break;
		case 3:
			if (AUDIO::LOAD_STREAM(func_317(3), func_318()))
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(2552.53f, -1310.069f, 49.21665f, AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_317(3), func_318()));
				func_43(&uLocal_1142);
				func_238(&iLocal_1148, 0);
			}
			break;
		case 4:
			break;
	}
}

void func_237(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		iVar1 = iVar0;
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1149[iVar1]))
		{
			if (iVar1 == 1)
			{
				func_7(&(Global_1394141.f_1326), (1 << 15));
			}
			Global_1394141.f_1332 = func_319(iVar1);
		}
		iVar0++;
	}
}

void func_238(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_239(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_240(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_223(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_301(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_320(iVar0);
	*uParam0 = 0;
}

Vector3 func_241(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return { -347.6828f, 695.3319f, 118.3399f };
				case 1:
					return { -348.5953f, 698.8133f, 119.6875f };
				case 2:
					return { -348.8144f, 699.8091f, 118.9698f };
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 2546.278f, -1301.387f, 49.2503f };
				case 1:
					return { 2546.278f, -1301.387f, 49.2503f };
				case 2:
					return { 2546.278f, -1301.387f, 49.2503f };
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return { 2698.999f, -1351.896f, 48.8643f };
				case 1:
					return { 2696.904f, -1353.697f, 50.4856f };
				case 2:
					return { 2699.875f, -1351.404f, 49.7629f };
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return { -776.4824f, -1362.639f, 44.7983f };
				case 1:
					return { -781.2149f, -1362.732f, 45.4177f };
				case 2:
					return { -780.0249f, -1362.867f, 47.5554f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_242(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return { -1.3561f, 0.0f, -165.0047f };
				case 1:
					return { -15.1795f, 0.0f, -165.8691f };
				case 2:
					return { -3.653f, 0.0f, -165.8691f };
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 1.2492f, 0.0f, -179.3095f };
				case 1:
					return { 1.2492f, 0.0f, -179.3095f };
				case 2:
					return { 1.2492f, 0.0f, -179.3095f };
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return { 5.5654f, 0.0f, -49.4849f };
				case 1:
					return { -12.2595f, 0.0f, -50.4561f };
				case 2:
					return { -3.2839f, 0.0f, -49.6209f };
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return { 5.1961f, 0.0f, -90.3272f };
				case 1:
					return { -3.1228f, 1.0856f, -90.1785f };
				case 2:
					return { -25.3626f, 1.0856f, -88.2647f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_243(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_244(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, int iParam11, bool bParam12)
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
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_306(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_321(iVar1, iParam1, sParam0, 0, iParam10, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, fParam6, fParam7, fParam8, bParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_245(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_301(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

bool func_246(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_223(iParam0))
	{
		return false;
	}
	iVar0 = func_301(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_247(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		func_322((*uParam0)[iVar1 /*10*/]);
		iVar1++;
	}
}

void func_248(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 >= 56)
	{
		iParam2 = 55;
	}
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*10*/]))
		{
			PED::SET_PED_CAN_BE_TARGETTED((*uParam0)[iVar0 /*10*/], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*10*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[iVar0 /*10*/], joaat("REL_NO_RELATIONSHIP"));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*10*/]);
		}
		iVar0++;
	}
}

int func_249()
{
	return Global_1894899.f_2;
}

bool func_250()
{
	int iVar0;
	bool bVar1;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-348.416f, 699.4218f, 117.6852f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		bVar1 = true;
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_closed"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_closed", 0);
			bVar1 = false;
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_open"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_open", true);
			bVar1 = false;
		}
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

bool func_251(int iParam0)
{
	func_323(iParam0, 0, 0);
	if (func_324(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return false;
}

int func_252(int iParam0)
{
	return func_325(iParam0, 23);
}

void func_253(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_323(iParam0, 0, 0);
	if (func_324(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0.0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_326(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_327(iParam0, 1);
			}
			else
			{
				func_328(iParam0, 1);
			}
		}
		else
		{
			func_329(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_330())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 3:
			return true;
		case 1:
		case 2:
			return true;
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

bool func_255(int iParam0)
{
	func_323(iParam0, 0, 0);
	if (func_324(iParam0))
	{
		return !OBJECT::IS_DOOR_CLOSED(iParam0);
	}
	return false;
}

bool func_256(int iParam0)
{
	func_323(iParam0, 0, 0);
	if (func_324(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return false;
}

void func_257(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if ((uParam0[iVar0 /*5*/])->f_1 != 0 && ENTITY::IS_MAP_ENTITY_PINNED((uParam0[iVar0 /*5*/])->f_1))
		{
			ENTITY::_UNPIN_MAP_ENTITY((uParam0[iVar0 /*5*/])->f_1);
		}
		iVar0++;
	}
}

int func_258()
{
	return Global_1899515;
}

void func_259(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_331(iParam0, iParam1, 1))
	{
		iVar0 = func_332(iParam1);
		iVar1 = func_333(iParam0);
		iVar2 = (func_333(iParam0) - func_333(iParam1));
		iVar3 = (func_332(iParam0) - func_332(iParam1));
		iVar4 = (func_334(iParam0) - func_334(iParam1));
		iVar5 = (func_335(iParam0) - func_335(iParam1));
		iVar6 = (func_336(iParam0) - func_336(iParam1));
		iVar7 = (func_337(iParam0) - func_337(iParam1));
	}
	else
	{
		iVar0 = func_332(iParam0);
		iVar1 = func_333(iParam1);
		iVar2 = (func_333(iParam1) - func_333(iParam0));
		iVar3 = (func_332(iParam1) - func_332(iParam0));
		iVar4 = (func_334(iParam1) - func_334(iParam0));
		iVar5 = (func_335(iParam1) - func_335(iParam0));
		iVar6 = (func_336(iParam1) - func_336(iParam0));
		iVar7 = (func_337(iParam1) - func_337(iParam0));
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
		iVar4 += func_338(iVar0, iVar1);
		iVar3--;
		iVar0 = BUILTIN::ROUND(func_339(BUILTIN::TO_FLOAT(iVar0 + 1), 0.0f, 12.0f));
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

void func_260(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

int func_261()
{
	return Global_1572887.f_12;
}

bool func_262()
{
	int iVar0;
	bool bVar1;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-348.416f, 699.4218f, 117.6852f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		bVar1 = true;
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_closed"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_closed", true);
			bVar1 = false;
		}
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_open"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_open", 0);
			bVar1 = false;
		}
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

void func_263(int iParam0, int iParam1, bool bParam2)
{
	func_323(iParam0, 0, 0);
	if (func_324(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

void func_264(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (uParam0->f_2 > fParam1 && uParam0->f_2 > uParam0->f_3)
		{
			fVar1 = (fParam3 - fParam2);
			fVar0 = (fVar1 / fParam3);
			uParam0->f_2 = func_340(fParam1, uParam0->f_4, fVar0);
			if (uParam0->f_2 < fParam1)
			{
				uParam0->f_2 = fParam1;
			}
		}
		fVar2 = BUILTIN::POW(uParam0->f_2, BUILTIN::TO_FLOAT(iParam4));
		OBJECT::_SET_LIGHT_INTENSITY_FOR_OBJECT(*uParam0, fVar2);
	}
}

void func_265(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (uParam0->f_2 < fParam1 && uParam0->f_2 < uParam0->f_4)
		{
			fVar0 = (fParam2 / fParam3);
			uParam0->f_2 = func_340(uParam0->f_3, fParam1, fVar0);
			if (uParam0->f_2 > fParam1)
			{
				uParam0->f_2 = fParam1;
			}
			fVar1 = BUILTIN::POW(uParam0->f_2, BUILTIN::TO_FLOAT(iParam4));
			OBJECT::_SET_LIGHT_INTENSITY_FOR_OBJECT(*uParam0, fVar1);
		}
	}
}

bool func_266(int iParam0)
{
	return func_149(iParam0, Global_1310750.f_16072 | 64);
}

void func_267(int iParam0)
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

bool func_268(var uParam0, int iParam1, char* sParam2)
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

int func_269(int iParam0)
{
	return joaat("META_OUTFIT_DEFAULT");
}

char* func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_01";
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_02";
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_03";
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_04";
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_05";
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_06";
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_07";
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_08";
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_09";
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_10";
		default:
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_ENTER";
}

char* func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_01";
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_02";
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_03";
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_04";
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_05";
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_06";
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_07";
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_08";
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_09";
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_10";
		default:
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_IDLE";
}

void func_272(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_341(iParam1))
		{
			func_201(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_342(iParam0, 0, 1);
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
			func_343(iParam0, 0);
			bVar0 = true;
		}
		func_344(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1;
		case 1:
			return -1;
		case 2:
			return -1;
		case 0:
			return 7;
		case 3:
			return -1;
		default:
			break;
	}
	return -1;
}

struct<11> /*88*/ func_274(int iParam0, int iParam1)
{
	struct<11> /*88*/ sVar0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2543.514f, -1303.811f, 47.16364f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 9.568836f /*3*/ };
					sVar0.f_6 = { 4.336886f, 2.0f, 2.155625f /*3*/ };
					sVar0.f_10 = "SHOW_BLOCKING_ROW1_LEFT";
					sVar0.f_9 = joaat("VOLBOX");
					break;
				case 1:
					sVar0 = { 2549.294f, -1303.83f, 47.04182f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, -9.89514f /*3*/ };
					sVar0.f_6 = { 4.260345f, 2.0f, 2.0f /*3*/ };
					sVar0.f_10 = "SHOW_BLOCKING_ROW1_RIGHT";
					sVar0.f_9 = joaat("VOLBOX");
					break;
				case 2:
					sVar0 = { 2543.097f, -1302.039f, 47.34119f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 8.842982f /*3*/ };
					sVar0.f_6 = { 5.463117f, 2.0f, 2.0f /*3*/ };
					sVar0.f_10 = "SHOW_BLOCKING_ROW2_LEFT";
					sVar0.f_9 = joaat("VOLBOX");
					break;
				case 3:
					sVar0 = { 2550.183f, -1302.069f, 47.34119f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, -10.03278f /*3*/ };
					sVar0.f_6 = { 4.277905f, 2.0f, 2.0f /*3*/ };
					sVar0.f_10 = "SHOW_BLOCKING_ROW2_RIGHT";
					sVar0.f_9 = joaat("VOLBOX");
					break;
				case 4:
					sVar0 = { 2542.933f, -1300.3f, 47.63106f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 9.537826f /*3*/ };
					sVar0.f_6 = { 5.29451f, 2.0f, 2.0f /*3*/ };
					sVar0.f_10 = "SHOW_BLOCKING_ROW3_LEFT";
					sVar0.f_9 = joaat("VOLBOX");
					break;
				case 5:
					sVar0 = { 2550.596f, -1300.471f, 47.63106f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, -9.448911f /*3*/ };
					sVar0.f_6 = { 3.957135f, 2.0f, 2.0f /*3*/ };
					sVar0.f_10 = "SHOW_BLOCKING_ROW3_RIGHT";
					sVar0.f_9 = joaat("VOLBOX");
					break;
				case 6:
					sVar0 = { 2542.582f, -1298.776f, 47.90404f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, 9.277945f /*3*/ };
					sVar0.f_6 = { 4.706136f, 2.0f, 2.0f /*3*/ };
					sVar0.f_10 = "SHOW_BLOCKING_ROW4_LEFT";
					sVar0.f_9 = joaat("VOLBOX");
					break;
				case 7:
					sVar0 = { 2549.868f, -1298.625f, 47.904f /*3*/ };
					sVar0.f_3 = { 0.0f, 0.0f, -9.896723f /*3*/ };
					sVar0.f_6 = { 5.116724f, 2.0f, 2.0f /*3*/ };
					sVar0.f_10 = "SHOW_BLOCKING_ROW4_RIGHT";
					sVar0.f_9 = joaat("VOLBOX");
					break;
			}
			break;
	}
	return sVar0;
}

int func_275(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 53:
				case 54:
					return 2;
				case 55:
				case 56:
					return 1;
				default:
					break;
			}
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
	}
	return 0;
}

char* func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_172(0);
		case 1:
			return func_172(0);
		case 2:
			return func_172(2);
		case 3:
			return func_172(2);
		case 4:
			return func_172(3);
		case 5:
			return func_172(4);
		case 6:
			return func_172(5);
		case 7:
			return func_172(5);
		case 8:
			return func_172(6);
		case 9:
			return func_172(6);
		case 10:
			return func_172(6);
		case 11:
			return func_172(6);
		case 12:
			return func_172(7);
		case 13:
			return func_172(7);
		case 14:
			return func_172(8);
		case 15:
			return func_172(8);
		case 16:
			return func_172(1);
		case 17:
			return func_172(1);
		case 18:
			return func_172(1);
		case 19:
			return func_172(1);
		case 20:
			return func_172(1);
		case 21:
			return func_172(1);
		case 22:
			return func_172(1);
		case 23:
			return func_172(1);
		case 24:
			return func_172(1);
		case 25:
			return func_172(1);
		case 26:
			return func_172(9);
		case 27:
			return func_172(9);
		case 28:
			return func_172(9);
		case 29:
			return func_172(9);
		case 30:
			return func_172(9);
		case 31:
			return func_172(10);
		case 32:
			return func_172(10);
		case 33:
			return func_172(10);
		case 34:
			return func_172(11);
		default:
			break;
	}
	return "FAIL";
}

char* func_277(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_346(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_347(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_348(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_349(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_350(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_351(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_352(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_353(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_354(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_355(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_356(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_357(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_358(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_359(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_360(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_361(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_362(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_363(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_364(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_365(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_366(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_367(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_368(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_369(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_370(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_371(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_372(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_373(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_374(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_375(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_376(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_377(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_378(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_379(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_380(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_381(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_382(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_383(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_384(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_385(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_386(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_387(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_388(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_389(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_390(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_391(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_392(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_393(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_394(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_395(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_396(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_397(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_398(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_399(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_400(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_401(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_402(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_403(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_404(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_405(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_406(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_407(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_408(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_409(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_410(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_411(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_412(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_413(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_414(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_415(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_416(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_417(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_418(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_419(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_420(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_421(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_422(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_423(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_424(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_425(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_426(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_403(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(16, iParam1, iParam2)));
						case 2:
							return func_404(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(16, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_427(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_428(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_429(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_430(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_431(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_432(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_433(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_434(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_435(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_436(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_437(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_438(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_439(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 26:
			break;
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_440(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_441(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_442(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_443(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_444(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_441(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_442(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_445(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_446(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_441(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_442(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_447(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_448(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_441(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_442(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_449(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
			}
			break;
		case 31:
			break;
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_450(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_451(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_452(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_453(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_454(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_455(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_456(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_457(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_458(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_459(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_460(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 1:
							return func_457(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
						case 2:
							return func_458(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_461(MISC::GET_RANDOM_INT_IN_RANGE(0, func_345(iParam0, iParam1, iParam2)));
			}
			break;
	}
	return "FAIL";
}

float func_278()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 0.25f);
}

int func_279(int iParam0)
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

void func_280(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_281(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_282(int iParam0, int iParam1)
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

bool func_283(int iParam0, int iParam1)
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

bool func_284(int iParam0, int iParam1)
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
	if (!func_282(iParam0, iVar0))
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

void func_285(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 5:
					return true;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 31:
					return true;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 39:
					return true;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 32:
					return true;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 4:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_288(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
		case 4:
			return 1;
		case 0:
			if (func_462(Global_1835011[36 /*74*/].f_1))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
		case 2:
			return 1;
	}
	return 0;
}

float func_289(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1.0f;
				case 1:
					return -1.0f;
				case 2:
					return 140.0f;
				case 3:
					return 137.0f;
				case 4:
					return 13.0f;
				case 5:
					return 4.0f;
				case 6:
					return -1.0f;
				case 7:
					return -1.0f;
				case 8:
					return -1.0f;
				case 9:
					return 134.0f;
				case 10:
					return 90.0f;
				case 11:
					return 52.5f;
				case 12:
					return 34.5f;
				case 13:
					return 7.0f;
				case 14:
					return -1.0f;
				case 15:
					return -1.0f;
				case 16:
					return -1.0f;
				case 17:
					return 149.0f;
				case 18:
					return 105.0f;
				case 19:
					return 75.0f;
				case 20:
					return 57.0f;
				case 21:
					return -1.0f;
				case 22:
					return -1.0f;
				case 23:
					return -1.0f;
				case 24:
					return 125.0f;
				case 25:
					return 109.0f;
				case 26:
					return 84.0f;
				case 27:
					return -1.0f;
				case 28:
					return -1.0f;
				case 29:
					return -1.0f;
				case 30:
					return 70.5f;
				case 31:
					return 47.5f;
				case 32:
					return 8.5f;
				case 33:
					return -1.0f;
				case 34:
					return -1.0f;
				case 35:
					return -1.0f;
				case 36:
					return 130.0f;
				case 37:
					return 114.0f;
				case 38:
					return 94.0f;
				case 39:
					return 0.0f;
				case 40:
					return -1.0f;
				case 41:
					return -1.0f;
				case 42:
					return -1.0f;
				case 43:
					return 145.0f;
				case 44:
					return 40.0f;
				case 45:
					return 27.0f;
				case 46:
					return -1.0f;
				case 47:
					return -1.0f;
				case 48:
					return -1.0f;
				case 49:
					return 120.0f;
				case 50:
					return 100.0f;
				case 51:
					return 81.0f;
				case 52:
					return 62.0f;
				case 53:
					return 0.5f;
				case 54:
					return 1.5f;
				case 55:
					return 1.0f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 44.0f;
				case 1:
					return 17.0f;
				case 2:
					return 23.0f;
				case 3:
					return 56.0f;
				case 4:
					return 60.0f;
				case 5:
					return 0.0f;
				case 6:
					return 10.0f;
				case 7:
					return 30.0f;
				case 8:
					return 37.0f;
				case 9:
					return 52.0f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 60.0f;
				case 1:
					return 46.0f;
				case 2:
					return 24.0f;
				case 3:
					return 8.0f;
				case 4:
					return 12.0f;
				case 5:
					return 31.0f;
				case 6:
					return 44.0f;
				case 7:
					return 40.0f;
				case 8:
					return 21.0f;
				case 9:
					return 0.0f;
				case 10:
					return 4.0f;
				case 11:
					return 54.0f;
				case 12:
					return 58.0f;
				case 13:
					return 36.0f;
				case 14:
					return 17.0f;
				case 15:
					return 28.0f;
				case 16:
					return 70.0f;
				case 17:
					return 65.0f;
				case 18:
					return 50.0f;
				case 19:
					return 33.0f;
				case 20:
					return 1.5f;
				case 21:
					return 62.0f;
				default:
					break;
			}
			return 75.0f;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 60.0f;
				case 1:
					return 46.0f;
				case 2:
					return 24.0f;
				case 3:
					return 8.0f;
				case 4:
					return 12.0f;
				case 5:
					return 31.0f;
				case 6:
					return 44.0f;
				case 7:
					return 40.0f;
				case 8:
					return 21.0f;
				case 9:
					return 0.0f;
				case 10:
					return 4.0f;
				case 11:
					return 54.0f;
				case 12:
					return 58.0f;
				case 13:
					return 36.0f;
				case 14:
					return 17.0f;
				case 15:
					return 28.0f;
				case 16:
					return 70.0f;
				case 17:
					return 65.0f;
				case 18:
					return 50.0f;
				case 19:
					return 33.0f;
				case 20:
					return 1.5f;
				case 21:
					return 62.0f;
				case 22:
					return 72.0f;
				default:
					break;
			}
			return 75.0f;
	}
	return 20.0f;
}

float func_290(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_291(var uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) /*3*/ };
	vVar3 = { Global_36 - vVar0 /*3*/ };
	vVar6 = { Vector(49.51665f, -1308.839f, 2546.548f) - vVar0 /*3*/ };
	vVar3 = { func_217(vVar3) /*3*/ };
	vVar6 = { func_217(vVar6) /*3*/ };
	if (func_218(vVar6, vVar3) > 0.95f)
	{
		return true;
	}
	return false;
}

void func_292(int* iParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	Vector3 vVar5;
	int iVar8;

	if ((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !iParam0->f_9) && iParam0->f_5 != -1)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*iParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_178(iParam1, iParam0->f_2) /*3*/ };
		fVar4 = func_179(iParam1, iParam0->f_2);
		vVar5 = { 0.0f, 0.0f, fVar4 /*3*/ };
		iVar8 = func_275(iParam1, iParam0->f_2);
		iParam0->f_6 = -1;
		iParam0->f_7 = func_276(iParam0->f_5);
		iParam0->f_8 = func_277(iParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, func_278(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, func_278(), 2, 0, 0);
		}
	}
	if (!iParam0->f_9)
	{
		iParam0->f_5 = -1;
		iParam0->f_6 = -1;
	}
}

int func_293(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 15;
	}
	else if (iParam0 >= 27 && iParam0 <= 52)
	{
		return 14;
	}
	else if (iParam0 >= 53 && iParam0 <= 55)
	{
		return 2;
	}
	return 2;
}

bool func_294(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return false;
				case 1:
					return false;
				case 2:
					return false;
				case 3:
					return false;
				case 4:
					return false;
				case 5:
					return false;
				case 6:
					return false;
				case 7:
					return false;
				case 8:
					return false;
				case 9:
					return false;
				case 10:
					return false;
				case 11:
					return false;
				case 12:
					return false;
				case 13:
					return false;
				case 14:
					return false;
				case 15:
					return false;
				case 16:
					return false;
				case 17:
					return false;
				case 18:
					return false;
				case 19:
					return false;
				case 20:
					return false;
				case 21:
					return false;
				case 22:
					return false;
				case 23:
					return false;
				case 24:
					return false;
				case 25:
					return false;
				case 26:
					return false;
				case 27:
					return false;
				case 28:
					return false;
				case 29:
					return false;
				case 30:
					return false;
				case 31:
					return false;
				case 32:
					return false;
				case 33:
					return false;
				case 34:
					return false;
				case 35:
					return false;
				case 36:
					return false;
				case 37:
					return false;
				case 38:
					return false;
				case 39:
					return false;
				case 40:
					return false;
				case 41:
					return false;
				case 42:
					return false;
				case 43:
					return false;
				case 44:
					return false;
				case 45:
					return false;
				case 46:
					return false;
				case 47:
					return false;
				case 48:
					return false;
				case 49:
					return false;
				case 50:
					return false;
				case 51:
					return false;
				case 52:
					return false;
				case 53:
					return false;
				case 54:
					return false;
				case 55:
					return false;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					return true;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
					return true;
				case 9:
					return false;
				case 10:
				case 11:
					return true;
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
					return false;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					return true;
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return false;
				default:
					break;
			}
			break;
	}
	return false;
}

Vector3 func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 0.0f, 0.0f, 0.0f };
		case 3:
			return { -346.8185f, 692.4758f, 118.2631f };
		case 1:
		case 2:
			return { 2700.367f, -1349.699f, 49.78757f };
		case 4:
			return { -772.6649f, -1362.613f, 45.39102f };
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_296(var uParam0, Vector3 vParam1, int iParam4)
{
	struct<14> /*112*/ sVar0;

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
	sVar0 = { vParam1 /*3*/ };
	sVar0.f_3 = 0;
	sVar0.f_8 = 4;
	sVar0.f_13 = 3;
	sVar0.f_7 = iParam4;
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*uParam0, &sVar0);
}

void func_297(var uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	Vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;

	if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && uParam0->f_6 != -1) && !uParam0->f_9)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_178(iParam1, uParam0->f_2) /*3*/ };
		fVar4 = func_179(iParam1, uParam0->f_2);
		vVar5 = { 0.0f, 0.0f, fVar4 /*3*/ };
		iVar8 = func_275(iParam1, uParam0->f_2);
		if (uParam0->f_6 == 26)
		{
			iVar9 = func_463(uParam0->f_2);
			uParam0->f_6 = iVar9;
			uParam0->f_7 = func_276(uParam0->f_6);
			uParam0->f_8 = func_277(uParam0->f_6, iVar0, iVar8);
		}
		else if (uParam0->f_6 == 31)
		{
			iVar10 = func_464(uParam0->f_2);
			uParam0->f_6 = iVar10;
			uParam0->f_7 = func_276(uParam0->f_6);
			uParam0->f_8 = func_277(uParam0->f_6, iVar0, iVar8);
		}
		else
		{
			uParam0->f_7 = func_276(uParam0->f_6);
			uParam0->f_8 = func_277(uParam0->f_6, iVar0, iVar8);
		}
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0.0f, 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0.0f, 2, 0, 0);
		}
	}
}

void func_298(var uParam0, int* iParam1)
{
	float fVar0;
	bool bVar1;

	fVar0 = 0.0f;
	bVar1 = false;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335))
	{
		fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1394141.f_1335);
		bVar1 = true;
	}
	switch (*uParam0)
	{
		case 9:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "PL_A_Performance") && fVar0 > 0.82f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "Crowd_Member", *iParam1, 0);
							func_287(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "PL_A_Performance") && fVar0 > 0.9f)
						{
							func_292(iParam1, 0);
							func_287(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "PL_D_LOOP_2_Challenge_Crowd") && fVar0 > 0.95f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "Crowd_Member", *iParam1, 0);
							func_287(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 12:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "Pl_BreathLoop"))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "male", *iParam1, 0);
							func_287(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "Pl_BreathFail") && ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(Global_1394141.f_1335, "male"))
						{
							PED::FORCE_PED_MOTION_STATE(*iParam1, joaat("MOTIONSTATE_WALK"), false, 0, false);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 2504.978f, -1245.074f, 48.2112f, 1.0f, -1, 0.25f, 0, 40000.0f);
							func_287(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (func_465(*iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
						{
							PED::SET_PED_KEEP_TASK(*iParam1, true);
							func_322(*iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							func_287(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 10:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Global_1394141.f_1335, "BoolLoop"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							func_287(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						break;
				}
			}
			break;
		case 15:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "pbl_CrowdChallenge_P2") && ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(Global_1394141.f_1335, "CrowdMember"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							func_287(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						Global_1394141.f_1334 = 0;
						break;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				PED::DELETE_PED(iParam1);
				*iParam1 = 0;
				Global_1394141.f_1334 = 0;
			}
			break;
		case 20:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1394141.f_1335, false)) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_1394141.f_1335, "pl_Performance")) && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Global_1394141.f_1335, "s_Performance_P2", true))
						{
							func_287(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (func_2(Global_1394141.f_1326, (1 << 11)) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1394141.f_1335) > 0.96f)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "CS_GENSTORYMALE", *iParam1);
							ENTITY::SET_ENTITY_COORDS(*iParam1, 2538.857f, -1312.293f, 48.21665f, true, false, true, true);
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							func_287(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						break;
				}
			}
			else
			{
				iParam1->f_5 = 2;
				func_292(iParam1, 0);
				Global_1394141.f_1334 = 0;
			}
			break;
	}
}

Vector3 func_299(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return { -307.226f, 789.081f, 116.7509f };
		case 4:
			return { -836.5425f, -1317.775f, 42.55259f };
		case 1:
		case 2:
			return { 2631.464f, -1288.41f, 51.26936f };
		case 0:
			return { 2546.444f, -1287.778f, 48.21795f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_300(Vector3 vParam0)
{
	int iVar0;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return true;
		}
	}
	return false;
}

int func_301(int iParam0)
{
	return iParam0;
}

void func_302(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_303(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_306(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_304(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_305(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

bool func_306(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 3;
		case 7:
			return 4;
		case 8:
			return 3;
		case 5:
			return 4;
		case 6:
			return 4;
		case 10:
			return 3;
		case 11:
			return 3;
		case 15:
			return 3;
		case 18:
			return 3;
		case 12:
			return 5;
		case 16:
			return 5;
		case 17:
			return 5;
		case 20:
			return 2;
		case 13:
			return 5;
		case 14:
			return 5;
		case 19:
			return 3;
		default:
			break;
	}
	return 0;
}

Vector3 func_308(int iParam0, int iParam1, bool bParam2)
{
	Vector3 vVar0;

	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(1) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(3) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(0) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(2) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(13) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(15) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(12) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(14) /*3*/ };
					}
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(25) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(27) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(24) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(26) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(25) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(27) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(24) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(26) /*3*/ };
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(1) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(3) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(0) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(2) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(17) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(19) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(16) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(18) /*3*/ };
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(29) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(31) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(28) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(30) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(33) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(35) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(32) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(34) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(37) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(39) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(36) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(38) /*3*/ };
					}
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(41) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(43) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(40) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(42) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(21) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(23) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(20) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(22) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(25) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(27) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(24) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(26) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(29) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(31) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(28) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(30) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(33) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(35) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(32) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(34) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(37) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(39) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(36) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(38) /*3*/ };
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(45) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(47) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(44) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(46) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(49) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(51) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(48) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(50) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(53) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(55) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(52) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(54) /*3*/ };
					}
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(25) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(27) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(24) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(26) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(61) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(63) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(60) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(62) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(65) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(67) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(64) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(66) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(73) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(75) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(72) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(74) /*3*/ };
					}
					break;
				case 1:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(5) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(7) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(4) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(6) /*3*/ };
					}
					break;
				case 2:
					if (func_154())
					{
						if (bParam2)
						{
							vVar0 = { func_466(9) /*3*/ };
						}
						else
						{
							vVar0 = { func_466(11) /*3*/ };
						}
					}
					else if (bParam2)
					{
						vVar0 = { func_466(8) /*3*/ };
					}
					else
					{
						vVar0 = { func_466(10) /*3*/ };
					}
					break;
				case 3:
					break;
			}
			break;
	}
	return vVar0;
}

bool func_309(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 15:
		case 18:
		case 20:
			return false;
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 16:
		case 17:
		case 19:
			return true;
		default:
			break;
	}
	return false;
}

bool func_310(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_462(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_311(int iParam0)
{
	float fVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_48) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_48, false))
	{
		return false;
	}
	fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0->f_48);
	switch (*iParam0)
	{
		case 9:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_48, "PL_A_Performance"))
			{
				if (fVar0 > 0.73f && fVar0 < 0.76f)
				{
					return true;
				}
			}
			break;
		case 7:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_48, "PL_P1"))
			{
				if (fVar0 > 0.26f && fVar0 < 0.28f)
				{
					return true;
				}
				if (fVar0 > 0.72f && fVar0 < 0.8f)
				{
					return true;
				}
			}
			break;
		case 8:
			break;
		case 10:
			break;
		case 11:
			break;
		case 15:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_48, "pbl_CrowdChallenge_P1"))
			{
				return true;
			}
			break;
		case 20:
			break;
		case 18:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_48, "Pbl_Intro"))
			{
				if (fVar0 > 0.95f && fVar0 < 1.0f)
				{
					return true;
				}
			}
			break;
		case 5:
		case 6:
			break;
		case 12:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_48, "Pl_BreathLoop"))
			{
				return true;
			}
			break;
		case 13:
		case 14:
			break;
		case 16:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_48, "PL_KissLoop"))
			{
				return true;
			}
			break;
		case 17:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0->f_48, "PL_KissLoop"))
			{
				return true;
			}
			break;
		case 19:
			return false;
	}
	return false;
}

bool func_312(var uParam0, Vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_467(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

void func_313(int iParam0)
{
	switch (iParam0->f_1052)
	{
		case 0:
		case 1:
		case 2:
			iParam0->f_944 = 0;
			func_54(func_52(0), func_53());
			break;
		case 3:
		case 4:
			iParam0->f_944 = 1;
			func_54(func_52(1), func_53());
			break;
		default:
			iParam0->f_944 = 2;
			func_54(func_52(2), func_53());
			break;
	}
}

char* func_314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_08_maryjohnapplause";
		case 1:
			return "idle_08_maryjohnapplause_standing";
		default:
			break;
	}
	return "idle_08_maryjohnapplause_standing";
}

void func_315(int iParam0)
{
	switch (iParam0->f_1052)
	{
		case 0:
			iParam0->f_944 = 0;
			func_54(func_52(0), func_53());
			break;
		case -2:
		case -1:
			iParam0->f_944 = 3;
			func_54(func_52(3), func_53());
			break;
		case -4:
		case -3:
			iParam0->f_944 = 4;
			func_54(func_52(4), func_53());
			break;
		default:
			iParam0->f_944 = 5;
			func_54(func_52(5), func_53());
			break;
	}
}

int func_316(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_306(iVar0, 2))
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
				func_321(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

char* func_317(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Getup_Music";
		case 1:
			return "Interrupt1_Music";
		case 2:
			return "Interrupt2_Music";
		case 3:
			return "Run_Music";
		default:
			break;
	}
	return "Interrupt2_Music";
}

char* func_318()
{
	return "1181848519_action";
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		case 1:
			return 14;
		case 2:
			return 15;
		case 3:
			return 16;
		case 4:
			return 17;
		case 5:
			return 18;
		case 6:
			return 19;
		case 7:
			return 20;
		case 8:
			return 21;
		default:
			break;
	}
	return 0;
}

void func_320(int iParam0)
{
	if (!func_468(iParam0))
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

void func_321(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_303(iParam0, 1);
	func_304(iParam0, 1);
	func_305(iParam0, 128);
}

void func_322(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_NO_RELATIONSHIP"));
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

int func_323(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(iParam0, true);
	}
	return iParam0;
}

bool func_324(int iParam0)
{
	if (func_469(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

int func_325(int iParam0, int iParam1)
{
	int iVar0;

	if (func_261() == 0)
	{
		return 0;
	}
	func_323(iParam0, 0, 0);
	if (func_324(iParam0))
	{
		iVar0 = ENTITY::_GET_ENTITY_BY_DOORHASH(iParam0, 0);
		if (iVar0 != 0)
		{
			return OBJECT::_0x0943113E02322164(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), iParam1);
		}
	}
	return 0;
}

void func_326(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_324(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_327(int iParam0, bool bParam1)
{
	if (func_324(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_328(int iParam0, bool bParam1)
{
	if (func_324(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_329(int iParam0, bool bParam1)
{
	if (func_324(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_330()
{
	return true;
}

bool func_331(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_470(iParam1) || !func_470(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_332(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_333(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_471(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_334(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_335(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_336(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_337(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_338(int iParam0, int iParam1)
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

float func_339(float fParam0, float fParam1, float fParam2)
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

float func_340(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_341(int iParam0)
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

void func_342(int iParam0, int iParam1, bool bParam2)
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

void func_343(int iParam0, bool bParam1)
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

void func_344(int iParam0, int iParam1)
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

int func_345(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 26:
			return 0;
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 1;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 12;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

char* func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(4);
		case 1:
			return func_472(5);
		case 2:
			return func_472(6);
		case 3:
			return func_472(7);
		default:
			break;
	}
	return func_472(4);
}

char* func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(14);
		default:
			break;
	}
	return func_472(14);
}

char* func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(16);
		default:
			break;
	}
	return func_472(16);
}

char* func_349(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(0);
		case 1:
			return func_472(1);
		default:
			break;
	}
	return func_472(0);
}

char* func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(8);
		case 1:
			return func_472(9);
		case 2:
			return func_472(10);
		case 3:
			return func_472(11);
		default:
			break;
	}
	return func_472(8);
}

char* func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(15);
		default:
			break;
	}
	return func_472(15);
}

char* func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(17);
		default:
			break;
	}
	return func_472(17);
}

char* func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(2);
		case 1:
			return func_472(3);
		default:
			break;
	}
	return func_472(2);
}

char* func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_473(8);
		case 1:
			return func_473(9);
		case 2:
			return func_473(12);
		case 3:
			return func_473(13);
		case 4:
			return func_473(14);
		case 5:
			return func_473(15);
		case 6:
			return func_473(18);
		case 7:
			return func_473(19);
		default:
			break;
	}
	return func_473(8);
}

char* func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_473(26);
		case 1:
			return func_473(27);
		default:
			break;
	}
	return func_473(26);
}

char* func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_473(30);
		case 1:
			return func_473(31);
		default:
			break;
	}
	return func_473(30);
}

char* func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_473(0);
		case 1:
			return func_473(1);
		case 2:
			return func_473(4);
		case 3:
			return func_473(5);
		default:
			break;
	}
	return func_473(0);
}

char* func_358(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_473(10);
		case 1:
			return func_473(11);
		case 2:
			return func_473(16);
		case 3:
			return func_473(17);
		case 4:
			return func_473(20);
		case 5:
			return func_473(21);
		default:
			break;
	}
	return func_473(10);
}

char* func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_473(28);
		case 1:
			return func_473(29);
		default:
			break;
	}
	return func_473(28);
}

char* func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_473(32);
		case 1:
			return func_473(33);
		default:
			break;
	}
	return func_473(32);
}

char* func_361(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_473(2);
		case 1:
			return func_473(3);
		case 2:
			return func_473(6);
		case 3:
			return func_473(7);
		default:
			break;
	}
	return func_473(2);
}

char* func_362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_474(2);
		case 1:
			return func_474(3);
		case 2:
			return func_474(4);
		case 3:
			return func_474(5);
		default:
			break;
	}
	return func_474(2);
}

char* func_363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_474(7);
		default:
			break;
	}
	return func_474(7);
}

char* func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_474(8);
		default:
			break;
	}
	return func_474(8);
}

char* func_365(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_474(0);
		case 1:
			return func_474(1);
		default:
			break;
	}
	return func_474(0);
}

char* func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_475(4);
		case 1:
			return func_475(5);
		case 2:
			return func_475(6);
		case 3:
			return func_475(7);
		case 4:
			return func_475(8);
		case 5:
			return func_475(9);
		case 6:
			return func_475(10);
		case 7:
			return func_475(11);
		default:
			break;
	}
	return func_475(4);
}

char* func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_475(14);
		case 1:
			return func_475(15);
		default:
			break;
	}
	return func_475(14);
}

char* func_368(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_475(16);
		case 1:
			return func_475(17);
		default:
			break;
	}
	return func_475(16);
}

char* func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_475(0);
		case 1:
			return func_475(1);
		case 2:
			return func_475(2);
		case 3:
			return func_475(3);
		default:
			break;
	}
	return func_475(0);
}

char* func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(8);
		case 1:
			return func_476(9);
		case 2:
			return func_476(12);
		case 3:
			return func_476(13);
		case 4:
			return func_476(16);
		case 5:
			return func_476(17);
		default:
			break;
	}
	return func_476(8);
}

char* func_371(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(24);
		case 1:
			return func_476(25);
		default:
			break;
	}
	return func_476(24);
}

char* func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(28);
		case 1:
			return func_476(29);
		default:
			break;
	}
	return func_476(28);
}

char* func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(0);
		case 1:
			return func_476(1);
		case 2:
			return func_476(4);
		case 3:
			return func_476(5);
		default:
			break;
	}
	return func_476(0);
}

char* func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(10);
		case 1:
			return func_476(11);
		case 2:
			return func_476(14);
		case 3:
			return func_476(15);
		case 4:
			return func_476(18);
		case 5:
			return func_476(19);
		default:
			break;
	}
	return func_476(10);
}

char* func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(26);
		case 1:
			return func_476(27);
		default:
			break;
	}
	return func_476(26);
}

char* func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(30);
		case 1:
			return func_476(31);
		default:
			break;
	}
	return func_476(30);
}

char* func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_476(2);
		case 1:
			return func_476(3);
		case 2:
			return func_476(6);
		case 3:
			return func_476(7);
		default:
			break;
	}
	return func_476(2);
}

char* func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(11);
		case 1:
			return func_477(15);
		case 2:
			return func_477(19);
		default:
			break;
	}
	return func_477(11);
}

char* func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(27);
		default:
			break;
	}
	return func_477(27);
}

char* func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(31);
		default:
			break;
	}
	return func_477(31);
}

char* func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(3);
		case 1:
			return func_477(7);
		default:
			break;
	}
	return func_477(3);
}

char* func_382(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(10);
		case 1:
			return func_477(14);
		case 2:
			return func_477(18);
		default:
			break;
	}
	return func_477(10);
}

char* func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(26);
		default:
			break;
	}
	return func_477(26);
}

char* func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(30);
		default:
			break;
	}
	return func_477(30);
}

char* func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(2);
		case 1:
			return func_477(6);
		default:
			break;
	}
	return func_477(2);
}

char* func_386(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(9);
		case 1:
			return func_477(13);
		case 2:
			return func_477(17);
		default:
			break;
	}
	return func_477(9);
}

char* func_387(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(25);
		default:
			break;
	}
	return func_477(25);
}

char* func_388(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(29);
		default:
			break;
	}
	return func_477(29);
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(1);
		case 1:
			return func_477(5);
		default:
			break;
	}
	return func_477(0);
}

char* func_390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(8);
		case 1:
			return func_477(12);
		case 2:
			return func_477(16);
		default:
			break;
	}
	return func_477(8);
}

char* func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(24);
		default:
			break;
	}
	return func_477(24);
}

char* func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(28);
		default:
			break;
	}
	return func_477(28);
}

char* func_393(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_477(0);
		case 1:
			return func_477(4);
		default:
			break;
	}
	return func_477(0);
}

char* func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(4);
		case 1:
			return func_478(6);
		case 2:
			return func_478(8);
		default:
			break;
	}
	return func_478(4);
}

char* func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(12);
		default:
			break;
	}
	return func_478(12);
}

char* func_396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(14);
		default:
			break;
	}
	return func_478(14);
}

char* func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(0);
		case 1:
			return func_478(2);
		default:
			break;
	}
	return func_478(0);
}

char* func_398(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(5);
		case 1:
			return func_478(7);
		case 2:
			return func_478(9);
		default:
			break;
	}
	return func_478(5);
}

char* func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(13);
		default:
			break;
	}
	return func_478(13);
}

char* func_400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(15);
		default:
			break;
	}
	return func_478(15);
}

char* func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_478(1);
		case 1:
			return func_478(3);
		default:
			break;
	}
	return func_478(1);
}

char* func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(56);
		case 1:
			return func_479(70);
		case 2:
			return func_479(84);
		default:
			break;
	}
	return func_479(56);
}

char* func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(0);
		default:
			break;
	}
	return func_479(0);
}

char* func_404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(14);
		default:
			break;
	}
	return func_479(14);
}

char* func_405(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(28);
		case 1:
			return func_479(42);
		default:
			break;
	}
	return func_479(42);
}

char* func_406(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(57);
		case 1:
			return func_479(58);
		case 2:
			return func_479(71);
		case 3:
			return func_479(72);
		case 4:
			return func_479(85);
		case 5:
			return func_479(86);
		default:
			break;
	}
	return func_479(57);
}

char* func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(1);
		case 1:
			return func_479(2);
		default:
			break;
	}
	return func_479(1);
}

char* func_408(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(15);
		case 1:
			return func_479(16);
		default:
			break;
	}
	return func_479(15);
}

char* func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(29);
		case 1:
			return func_479(30);
		case 2:
			return func_479(43);
		case 3:
			return func_479(44);
		default:
			break;
	}
	return func_479(43);
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(59);
		case 1:
			return func_479(60);
		case 2:
			return func_479(73);
		case 3:
			return func_479(74);
		case 4:
			return func_479(87);
		case 5:
			return func_479(88);
		default:
			break;
	}
	return func_479(59);
}

char* func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(3);
		case 1:
			return func_479(4);
		default:
			break;
	}
	return func_479(3);
}

char* func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(17);
		case 1:
			return func_479(18);
		default:
			break;
	}
	return func_479(17);
}

char* func_413(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(31);
		case 1:
			return func_479(32);
		case 2:
			return func_479(45);
		case 3:
			return func_479(46);
		default:
			break;
	}
	return func_479(42);
}

char* func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(63);
		case 1:
			return func_479(77);
		case 2:
			return func_479(91);
		default:
			break;
	}
	return func_479(63);
}

char* func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(7);
		default:
			break;
	}
	return func_479(7);
}

char* func_416(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(21);
		default:
			break;
	}
	return func_479(21);
}

char* func_417(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(35);
		case 1:
			return func_479(49);
		default:
			break;
	}
	return func_479(35);
}

char* func_418(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(62);
		case 1:
			return func_479(76);
		case 2:
			return func_479(90);
		default:
			break;
	}
	return func_479(62);
}

char* func_419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(6);
		default:
			break;
	}
	return func_479(6);
}

char* func_420(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(20);
		default:
			break;
	}
	return func_479(20);
}

char* func_421(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(34);
		case 1:
			return func_479(48);
		default:
			break;
	}
	return func_479(34);
}

char* func_422(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(61);
		case 1:
			return func_479(75);
		case 2:
			return func_479(89);
		default:
			break;
	}
	return func_479(61);
}

char* func_423(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(5);
		default:
			break;
	}
	return func_479(5);
}

char* func_424(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(19);
		default:
			break;
	}
	return func_479(19);
}

char* func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(33);
		case 1:
			return func_479(47);
		default:
			break;
	}
	return func_479(33);
}

char* func_426(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(65);
		case 1:
			return func_479(79);
		case 2:
			return func_479(93);
		default:
			break;
	}
	return func_479(65);
}

char* func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(37);
		case 1:
			return func_479(51);
		default:
			break;
	}
	return func_479(37);
}

char* func_428(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(64);
		case 1:
			return func_479(78);
		case 2:
			return func_479(92);
		default:
			break;
	}
	return func_479(64);
}

char* func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(8);
		default:
			break;
	}
	return func_479(8);
}

char* func_430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(22);
		default:
			break;
	}
	return func_479(22);
}

char* func_431(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(36);
		case 1:
			return func_479(50);
		default:
			break;
	}
	return func_479(36);
}

char* func_432(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(66);
		case 1:
			return func_479(67);
		case 2:
			return func_479(80);
		case 3:
			return func_479(81);
		case 4:
			return func_479(94);
		case 5:
			return func_479(95);
		default:
			break;
	}
	return func_479(66);
}

char* func_433(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(10);
		case 1:
			return func_479(11);
		default:
			break;
	}
	return func_479(10);
}

char* func_434(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(24);
		case 1:
			return func_479(25);
		default:
			break;
	}
	return func_479(24);
}

char* func_435(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(38);
		case 1:
			return func_479(39);
		case 2:
			return func_479(52);
		case 3:
			return func_479(53);
		default:
			break;
	}
	return func_479(38);
}

char* func_436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(68);
		case 1:
			return func_479(69);
		case 2:
			return func_479(82);
		case 3:
			return func_479(83);
		case 4:
			return func_479(96);
		case 5:
			return func_479(97);
		default:
			break;
	}
	return func_479(68);
}

char* func_437(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(12);
		case 1:
			return func_479(13);
		default:
			break;
	}
	return func_479(12);
}

char* func_438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(26);
		case 1:
			return func_479(27);
		default:
			break;
	}
	return func_479(26);
}

char* func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(40);
		case 1:
			return func_479(41);
		case 2:
			return func_479(54);
		case 3:
			return func_479(55);
		default:
			break;
	}
	return func_479(40);
}

char* func_440(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(109);
		case 1:
			return func_479(110);
		case 2:
			return func_479(111);
		default:
			break;
	}
	return func_479(109);
}

char* func_441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(98);
		default:
			break;
	}
	return func_479(98);
}

char* func_442(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(99);
		default:
			break;
	}
	return func_479(99);
}

char* func_443(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(102);
		case 1:
			return func_479(103);
		default:
			break;
	}
	return func_479(102);
}

char* func_444(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(108);
		default:
			break;
	}
	return func_479(108);
}

char* func_445(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(100);
		case 1:
			return func_479(101);
		default:
			break;
	}
	return func_479(100);
}

char* func_446(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(112);
		case 1:
			return func_479(113);
		case 2:
			return func_479(114);
		default:
			break;
	}
	return func_479(112);
}

char* func_447(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(104);
		case 1:
			return func_479(105);
		default:
			break;
	}
	return func_479(104);
}

char* func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(115);
		case 1:
			return func_479(116);
		case 2:
			return func_479(117);
		default:
			break;
	}
	return func_479(115);
}

char* func_449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(106);
		case 1:
			return func_479(107);
		default:
			break;
	}
	return func_479(106);
}

char* func_450(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(122);
		case 1:
			return func_479(124);
		case 2:
			return func_479(126);
		case 3:
			return func_479(128);
		case 4:
			return func_479(130);
		case 5:
			return func_479(132);
		default:
			break;
	}
	return func_479(122);
}

char* func_451(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(118);
		case 1:
			return func_479(120);
		default:
			break;
	}
	return func_479(118);
}

char* func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(123);
		case 1:
			return func_479(125);
		case 2:
			return func_479(127);
		case 3:
			return func_479(129);
		case 4:
			return func_479(131);
		case 5:
			return func_479(133);
		default:
			break;
	}
	return func_479(123);
}

char* func_453(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(119);
		case 1:
			return func_479(121);
		default:
			break;
	}
	return func_479(119);
}

char* func_454(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(138);
		case 1:
			return func_479(139);
		case 2:
			return func_479(140);
		case 3:
			return func_479(141);
		case 4:
			return func_479(142);
		case 5:
			return func_479(143);
		case 6:
			return func_479(144);
		case 7:
			return func_479(145);
		case 8:
			return func_479(146);
		case 9:
			return func_479(147);
		case 10:
			return func_479(148);
		case 11:
			return func_479(149);
		default:
			break;
	}
	return func_479(138);
}

char* func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_479(134);
		case 1:
			return func_479(135);
		case 2:
			return func_479(136);
		case 3:
			return func_479(137);
		default:
			break;
	}
	return func_479(134);
}

char* func_456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(6);
		case 1:
			return func_480(7);
		case 2:
			return func_480(9);
		case 3:
			return func_480(10);
		case 4:
			return func_480(12);
		case 5:
			return func_480(13);
		default:
			break;
	}
	return func_480(6);
}

char* func_457(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(16);
		case 1:
			return func_480(19);
		default:
			break;
	}
	return func_480(16);
}

char* func_458(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(17);
		case 1:
			return func_480(20);
		default:
			break;
	}
	return func_480(17);
}

char* func_459(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(0);
		case 1:
			return func_480(1);
		case 2:
			return func_480(3);
		case 3:
			return func_480(4);
		default:
			break;
	}
	return func_480(0);
}

char* func_460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(6);
		case 1:
			return func_480(8);
		case 2:
			return func_480(9);
		case 3:
			return func_480(11);
		case 4:
			return func_480(12);
		case 5:
			return func_480(14);
		default:
			break;
	}
	return func_480(6);
}

char* func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_480(0);
		case 1:
			return func_480(2);
		case 2:
			return func_480(3);
		case 3:
			return func_480(5);
		default:
			break;
	}
	return func_480(0);
}

bool func_462(int iParam0)
{
	int iVar0;

	iVar0 = func_481(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_463(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 30;
	}
	else if (iParam0 >= 27 && iParam0 <= 32)
	{
		return 27;
	}
	else if (iParam0 >= 33 && iParam0 <= 38)
	{
		return 29;
	}
	else if (iParam0 >= 39 && iParam0 <= 56)
	{
		return 28;
	}
	return 23;
}

int func_464(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 34;
	}
	else if (iParam0 >= 27 && iParam0 <= 32)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) >= 50)
		{
			return 32;
		}
		else
		{
			return 33;
		}
	}
	else if (iParam0 >= 33 && iParam0 <= 54)
	{
		return 34;
	}
	return 19;
}

bool func_465(int iParam0, int iParam1)
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

Vector3 func_466(int iParam0)
{
	Vector3 vVar0[24];

	switch (iParam0)
	{
		case -1:
			strcpy_s(&cVar0, 24, "");
			break;
		case 0:
			strcpy_s(&cVar0, 24, "SHRCT_PRCHEER_A");
			break;
		case 1:
			strcpy_s(&cVar0, 24, "SHRCT_PRCHEER_J");
			break;
		case 2:
			strcpy_s(&cVar0, 24, "SHRCT_PRBOO_A");
			break;
		case 3:
			strcpy_s(&cVar0, 24, "SHRCT_PRBOO_J");
			break;
		case 4:
			strcpy_s(&cVar0, 24, "SHRCT_GENCHEERA");
			break;
		case 5:
			strcpy_s(&cVar0, 24, "SHRCT_GENCHEERJ");
			break;
		case 6:
			strcpy_s(&cVar0, 24, "SHRCT_GENBOOA");
			break;
		case 7:
			strcpy_s(&cVar0, 24, "SHRCT_GENBOOJ");
			break;
		case 8:
			strcpy_s(&cVar0, 24, "SHRCT_FEMCHEERA");
			break;
		case 9:
			strcpy_s(&cVar0, 24, "SHRCT_FEMCHEERJ");
			break;
		case 10:
			strcpy_s(&cVar0, 24, "SHRCT_FEMBOOA");
			break;
		case 11:
			strcpy_s(&cVar0, 24, "SHRCT_FEMBOOJ");
			break;
		case 12:
			strcpy_s(&cVar0, 24, "SHBC_CHEER_A");
			break;
		case 13:
			strcpy_s(&cVar0, 24, "SHBC_CHEER_J");
			break;
		case 14:
			strcpy_s(&cVar0, 24, "SHBC_BOO_A");
			break;
		case 15:
			strcpy_s(&cVar0, 24, "SHBC_BOO_J");
			break;
		case 16:
			strcpy_s(&cVar0, 24, "BND1_CHEER_A");
			break;
		case 17:
			strcpy_s(&cVar0, 24, "BND1_CHEER_J");
			break;
		case 18:
			strcpy_s(&cVar0, 24, "BND1_BOO_A");
			break;
		case 19:
			strcpy_s(&cVar0, 24, "BND1_BOO_J");
			break;
		case 20:
			strcpy_s(&cVar0, 24, "BND2_CHEER_A");
			break;
		case 21:
			strcpy_s(&cVar0, 24, "BND2_CHEER_J");
			break;
		case 22:
			strcpy_s(&cVar0, 24, "BND2_BOO_A");
			break;
		case 23:
			strcpy_s(&cVar0, 24, "BND2_BOO_J");
			break;
		case 24:
			strcpy_s(&cVar0, 24, "SFIRE_CHEER_A");
			break;
		case 25:
			strcpy_s(&cVar0, 24, "SFIRE_CHEER_J");
			break;
		case 26:
			strcpy_s(&cVar0, 24, "SFIRE_BOO_A");
			break;
		case 27:
			strcpy_s(&cVar0, 24, "SFIRE_BOO_J");
			break;
		case 28:
			strcpy_s(&cVar0, 24, "SHCAN_CHEER_A");
			break;
		case 29:
			strcpy_s(&cVar0, 24, "SHCAN_CHEER_J");
			break;
		case 30:
			strcpy_s(&cVar0, 24, "SHCAN_BOO_A");
			break;
		case 31:
			strcpy_s(&cVar0, 24, "SHCAN_BOO_J");
			break;
		case 32:
			strcpy_s(&cVar0, 24, "SSNKE_CHEER_A");
			break;
		case 33:
			strcpy_s(&cVar0, 24, "SSNKE_CHEER_J");
			break;
		case 34:
			strcpy_s(&cVar0, 24, "SSNKE_BOO_A");
			break;
		case 35:
			strcpy_s(&cVar0, 24, "SSNKE_BOO_J");
			break;
		case 36:
			strcpy_s(&cVar0, 24, "SSNKE_BRN_POS_A");
			break;
		case 37:
			strcpy_s(&cVar0, 24, "SSNKE_BRN_POS_J");
			break;
		case 38:
			strcpy_s(&cVar0, 24, "SSNKE_BRN_NEG_A");
			break;
		case 39:
			strcpy_s(&cVar0, 24, "SSNKE_BRN_NEG_J");
			break;
		case 40:
			strcpy_s(&cVar0, 24, "SHFOS_CHEER_A");
			break;
		case 41:
			strcpy_s(&cVar0, 24, "SHFOS_CHEER_J");
			break;
		case 42:
			strcpy_s(&cVar0, 24, "SHFOS_BOO_A");
			break;
		case 43:
			strcpy_s(&cVar0, 24, "SHFOS_BOO_J");
			break;
		case 44:
			strcpy_s(&cVar0, 24, "SHEA_CHEER_A");
			break;
		case 45:
			strcpy_s(&cVar0, 24, "SHEA_CHEER_J");
			break;
		case 46:
			strcpy_s(&cVar0, 24, "SHEA_BOO_A");
			break;
		case 47:
			strcpy_s(&cVar0, 24, "SHEA_BOO_J");
			break;
		case 48:
			strcpy_s(&cVar0, 24, "SHFF_CHEER_A");
			break;
		case 49:
			strcpy_s(&cVar0, 24, "SHFF_CHEER_J");
			break;
		case 50:
			strcpy_s(&cVar0, 24, "SHFF_BOO_A");
			break;
		case 51:
			strcpy_s(&cVar0, 24, "SHFF_BOO_J");
			break;
		case 52:
			strcpy_s(&cVar0, 24, "SHFF_FAUDC_A");
			break;
		case 53:
			strcpy_s(&cVar0, 24, "SHFF_FAUDC_J");
			break;
		case 54:
			strcpy_s(&cVar0, 24, "SHFF_FAUDB_A");
			break;
		case 55:
			strcpy_s(&cVar0, 24, "SHFF_FAUDB_J");
			break;
		case 56:
			strcpy_s(&cVar0, 24, "SHEA_APPEARC_A");
			break;
		case 57:
			strcpy_s(&cVar0, 24, "SHEA_APPEARC_J");
			break;
		case 58:
			strcpy_s(&cVar0, 24, "SHEA_APPEARB_A");
			break;
		case 59:
			strcpy_s(&cVar0, 24, "SHEA_APPEARB_J");
			break;
		case 60:
			strcpy_s(&cVar0, 24, "SHSD_CHEER_A");
			break;
		case 61:
			strcpy_s(&cVar0, 24, "SHSD_CHEER_J");
			break;
		case 62:
			strcpy_s(&cVar0, 24, "SHSD_BOO_A");
			break;
		case 63:
			strcpy_s(&cVar0, 24, "SHSD_BOO_J");
			break;
		case 64:
			strcpy_s(&cVar0, 24, "SHEN_CHEER_A");
			break;
		case 65:
			strcpy_s(&cVar0, 24, "SHEN_CHEER_J");
			break;
		case 66:
			strcpy_s(&cVar0, 24, "SHEN_BOO_A");
			break;
		case 67:
			strcpy_s(&cVar0, 24, "SHEN_BOO_J");
			break;
		case 68:
			strcpy_s(&cVar0, 24, "SHEN_HANGED_A");
			break;
		case 69:
			strcpy_s(&cVar0, 24, "SHEN_HANGED_J");
			break;
		case 70:
			strcpy_s(&cVar0, 24, "SHEN_SHOTDWN_A");
			break;
		case 71:
			strcpy_s(&cVar0, 24, "SHEN_SHOTDWN_J");
			break;
		case 72:
			strcpy_s(&cVar0, 24, "RODDF_CHEER_A");
			break;
		case 73:
			strcpy_s(&cVar0, 24, "RODDF_CHEER_J");
			break;
		case 74:
			strcpy_s(&cVar0, 24, "RODDF_BOO_A");
			break;
		case 75:
			strcpy_s(&cVar0, 24, "RODDF_BOO_J");
			break;
	}
	return cVar0;
}

void func_467(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

bool func_468(int iParam0)
{
	return func_306(iParam0, 2);
}

bool func_469(int iParam0)
{
	return iParam0 != 0;
}

bool func_470(int iParam0)
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
	iVar0 = func_337(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_336(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_335(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_333(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_332(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_334(iParam0);
	if (iVar5 < 1 || iVar5 > func_338(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_471(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_472(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_enthralled_b";
		case 1:
			return "seated_loop_female1_enthralled_b";
		case 2:
			return "seated_loop_female0_waiting_a";
		case 3:
			return "seated_loop_female1_waiting_a";
		case 4:
			return "seated_loop_male1_enthralled_b";
		case 5:
			return "seated_loop_male2_enthralled_b";
		case 6:
			return "seated_loop_male3_enthralled_b";
		case 7:
			return "seated_loop_male4_enthralled_b";
		case 8:
			return "seated_loop_male1_waiting_a";
		case 9:
			return "seated_loop_male2_waiting_a";
		case 10:
			return "seated_loop_male3_waiting_a";
		case 11:
			return "seated_loop_male4_waiting_a";
		case 12:
			return "railing_loop_male0_enthralled_b";
		case 13:
			return "railing_loop_male0_waiting_a";
		case 14:
			return "railingl_male0_enthralled_b";
		case 15:
			return "railingl_male0_waiting_a";
		case 16:
			return "railingr_male5_enthralled_b";
		case 17:
			return "railingr_male5_waiting_a";
		default:
			break;
	}
	return "seated_loop_male1_waiting_a";
}

char* func_473(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_regular_a";
		case 1:
			return "seated_loop_female0_regular_b";
		case 2:
			return "seated_loop_female0_rowdy_b";
		case 3:
			return "seated_loop_female0_rowdy_c";
		case 4:
			return "seated_loop_female1_regular_a";
		case 5:
			return "seated_loop_female1_regular_b";
		case 6:
			return "seated_loop_female1_rowdy_b";
		case 7:
			return "seated_loop_female1_rowdy_c";
		case 8:
			return "seated_loop_male1_regular_a";
		case 9:
			return "seated_loop_male1_regular_b";
		case 10:
			return "seated_loop_male1_rowdy_b";
		case 11:
			return "seated_loop_male1_rowdy_c";
		case 12:
			return "seated_loop_male2_regular_a";
		case 13:
			return "seated_loop_male2_regular_b";
		case 14:
			return "seated_loop_male3_regular_a";
		case 15:
			return "seated_loop_male3_regular_b";
		case 16:
			return "seated_loop_male3_rowdy_b";
		case 17:
			return "seated_loop_male3_rowdy_c";
		case 18:
			return "seated_loop_male4_regular_a";
		case 19:
			return "seated_loop_male4_regular_b";
		case 20:
			return "seated_loop_male4_rowdy_b";
		case 21:
			return "seated_loop_male4_rowdy_c";
		case 22:
			return "railing_loop_male0_regular_a";
		case 23:
			return "railing_loop_male0_regular_b";
		case 24:
			return "railing_loop_male0_rowdy_b";
		case 25:
			return "railing_loop_male0_rowdy_c";
		case 26:
			return "railingl_male0_regular_a";
		case 27:
			return "railingl_male0_regular_b";
		case 28:
			return "railingl_male0_rowdy_b";
		case 29:
			return "railingl_male0_rowdy_c";
		case 30:
			return "railingr_male5_regular_a";
		case 31:
			return "railingr_male5_regular_b";
		case 32:
			return "railingr_male5_rowdy_b";
		case 33:
			return "railingr_male5_rowdy_c";
		default:
			break;
	}
	return "seated_loop_male1_regular_a";
}

char* func_474(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_musical_b";
		case 1:
			return "seated_loop_female1_musical_b";
		case 2:
			return "seated_loop_mail0_musical_b";
		case 3:
			return "seated_loop_male2_musical_b";
		case 4:
			return "seated_loop_male3_musical_b";
		case 5:
			return "seated_loop_male4_musical_b";
		case 6:
			return "railing_loop_male1_musical_b";
		case 7:
			return "railingl_male1_musical_b";
		case 8:
			return "railingr_male5_musical_b";
		default:
			break;
	}
	return "seated_loop_mail0_musical_b";
}

char* func_475(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_dancing_b";
		case 1:
			return "seated_loop_female0_dancing_c";
		case 2:
			return "seated_loop_female1_dancing_b";
		case 3:
			return "seated_loop_female1_dancing_c";
		case 4:
			return "seated_loop_male0_dancing_b";
		case 5:
			return "seated_loop_male0_dancing_c";
		case 6:
			return "seated_loop_male2_dancing_b";
		case 7:
			return "seated_loop_male2_dancing_c";
		case 8:
			return "seated_loop_male3_dancing_b";
		case 9:
			return "seated_loop_male3_dancing_c";
		case 10:
			return "seated_loop_male4_dancing_b";
		case 11:
			return "seated_loop_male4_dancing_c";
		case 12:
			return "railing_loop_male1_dancing_b";
		case 13:
			return "railing_loop_male1_dancing_c";
		case 14:
			return "railingl_male1_dancing_b";
		case 15:
			return "railingl_male1_dancing_c";
		case 16:
			return "railingr_male5_dancing_b";
		case 17:
			return "railingr_male5_dancing_c";
		default:
			break;
	}
	return "seated_loop_male0_dancing_b";
}

char* func_476(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_comedic_b";
		case 1:
			return "seated_loop_female0_comedic_c";
		case 2:
			return "seated_loop_female0_displeased_b";
		case 3:
			return "seated_loop_female0_displeased_c";
		case 4:
			return "seated_loop_female1_comedic_b";
		case 5:
			return "seated_loop_female1_comedic_c";
		case 6:
			return "seated_loop_female1_displeased_b";
		case 7:
			return "seated_loop_female1_displeased_c";
		case 8:
			return "seated_loop_male0_comedic_b";
		case 9:
			return "seated_loop_male0_comedic_c";
		case 10:
			return "seated_loop_male0_displeased_b";
		case 11:
			return "seated_loop_male0_displeased_c";
		case 12:
			return "seated_loop_male2_comedic_b";
		case 13:
			return "seated_loop_male2_comedic_c";
		case 14:
			return "seated_loop_male2_displeased_b";
		case 15:
			return "seated_loop_male2_displeased_c";
		case 16:
			return "seated_loop_male3_comedic_b";
		case 17:
			return "seated_loop_male3_comedic_c";
		case 18:
			return "seated_loop_male3_displeased_b";
		case 19:
			return "seated_loop_male3_displeased_c";
		case 20:
			return "railing_loop_male1_comedic_b";
		case 21:
			return "railing_loop_male1_comedic_c";
		case 22:
			return "railing_loop_male1_displeased_b";
		case 23:
			return "railing_loop_male1_displeased_c";
		case 24:
			return "railingl_male1_comedic_b";
		case 25:
			return "railingl_male1_comedic_c";
		case 26:
			return "railingl_male1_displeased_b";
		case 27:
			return "railingl_male1_displeased_c";
		case 28:
			return "railingr_male4_comedic_b";
		case 29:
			return "railingr_male4_comedic_c";
		case 30:
			return "railingr_male4_displeased_b";
		case 31:
			return "railingr_male4_displeased_c";
		default:
			break;
	}
	return "seated_loop_male0_comedic_b";
}

char* func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_med_b";
		case 1:
			return "seated_loop_female0_applause_small_a";
		case 2:
			return "seated_loop_female0_suspense_neg_b";
		case 3:
			return "seated_loop_female0_suspense_pos_b";
		case 4:
			return "seated_loop_female1_applause_med_b";
		case 5:
			return "seated_loop_female1_applause_small_a";
		case 6:
			return "seated_loop_female1_suspense_neg_b";
		case 7:
			return "seated_loop_female1_suspense_pos_b";
		case 8:
			return "seated_loop_male0_applause_med_b";
		case 9:
			return "seated_loop_male0_applause_small_a";
		case 10:
			return "seated_loop_male0_suspense_neg_b";
		case 11:
			return "seated_loop_male0_suspense_pos_b";
		case 12:
			return "seated_loop_male2_applause_med_b";
		case 13:
			return "seated_loop_male2_applause_small_a";
		case 14:
			return "seated_loop_male2_suspense_neg_b";
		case 15:
			return "seated_loop_male2_suspense_pos_b";
		case 16:
			return "seated_loop_male3_applause_med_b";
		case 17:
			return "seated_loop_male3_applause_small_a";
		case 18:
			return "seated_loop_male3_suspense_neg_b";
		case 19:
			return "seated_loop_male3_suspense_pos_b";
		case 20:
			return "railing_loop_male1_applause_med_b";
		case 21:
			return "railing_loop_male1_applause_small_a";
		case 22:
			return "railing_loop_male1_suspense_neg_b";
		case 23:
			return "railing_loop_male1_suspense_pos_b";
		case 24:
			return "railingl_male1_applause_med_b";
		case 25:
			return "railingl_male1_applause_small_a";
		case 26:
			return "railingl_male1_suspense_neg_b";
		case 27:
			return "railingl_male1_suspense_pos_b";
		case 28:
			return "railingr_male4_applause_med_b";
		case 29:
			return "railingr_male4_applause_small_a";
		case 30:
			return "railingr_male4_suspense_neg_b";
		case 31:
			return "railingr_male4_suspense_pos_b";
		default:
			break;
	}
	return "seated_loop_male0_applause_med_b";
}

char* func_478(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_big_c";
		case 1:
			return "seated_loop_female0_horrified_c";
		case 2:
			return "seated_loop_female2_applause_big_c";
		case 3:
			return "seated_loop_female2_horrified_c";
		case 4:
			return "seated_loop_male0_applause_big_c";
		case 5:
			return "seated_loop_male0_horrified_c";
		case 6:
			return "seated_loop_male2_applause_big_c";
		case 7:
			return "seated_loop_male2_horrified_c";
		case 8:
			return "seated_loop_male3_applause_big_c";
		case 9:
			return "seated_loop_male3_horrified_c";
		case 10:
			return "railing_loop_male1_applause_big_c";
		case 11:
			return "railing_loop_male1_horrified_c";
		case 12:
			return "railingl_male1_applause_big_c";
		case 13:
			return "railingl_male1_horrified_c";
		case 14:
			return "railingr_male4_applause_big_c";
		case 15:
			return "railingr_male4_horrified_c";
		default:
			break;
	}
	return "seated_loop_male0_applause_big_c";
}

char* func_479(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "railingl_male0_applause_quick";
		case 1:
			return "railingl_male0_applause_standing_01";
		case 2:
			return "railingl_male0_applause_standing_02";
		case 3:
			return "railingl_male0_boo_high";
		case 4:
			return "railingl_male0_boo_low";
		case 5:
			return "railingl_male0_horrified_amused";
		case 6:
			return "railingl_male0_horrified_high";
		case 7:
			return "railingl_male0_horrified_low";
		case 8:
			return "railingl_male0_impressed_high";
		case 9:
			return "railingl_male0_impressed_low";
		case 10:
			return "railingl_male0_laugh";
		case 11:
			return "railingl_male0_laugh_02";
		case 12:
			return "railingl_male0_raunchy";
		case 13:
			return "railingl_male0_raunchy_02";
		case 14:
			return "railingr_male4_applause_quick";
		case 15:
			return "railingr_male4_applause_standing_01";
		case 16:
			return "railingr_male4_applause_standing_02";
		case 17:
			return "railingr_male4_boo_high";
		case 18:
			return "railingr_male4_boo_low";
		case 19:
			return "railingr_male4_horrified_amused";
		case 20:
			return "railingr_male4_horrified_high";
		case 21:
			return "railingr_male4_horrified_low";
		case 22:
			return "railingr_male4_impressed_high";
		case 23:
			return "railingr_male4_impressed_low";
		case 24:
			return "railingr_male4_laugh";
		case 25:
			return "railingr_male4_laugh_02";
		case 26:
			return "railingr_male4_raunchy";
		case 27:
			return "railingr_male4_raunchy_02";
		case 28:
			return "seated_loop_female0_applause_quick";
		case 29:
			return "seated_loop_female0_applause_standing_01";
		case 30:
			return "seated_loop_female0_applause_standing_02";
		case 31:
			return "seated_loop_female0_boo_high";
		case 32:
			return "seated_loop_female0_boo_low";
		case 33:
			return "seated_loop_female0_horrified_amused";
		case 34:
			return "seated_loop_female0_horrified_high";
		case 35:
			return "seated_loop_female0_horrified_low";
		case 36:
			return "seated_loop_female0_impressed_high";
		case 37:
			return "seated_loop_female0_impressed_low";
		case 38:
			return "seated_loop_female0_laugh";
		case 39:
			return "seated_loop_female0_laugh_02";
		case 40:
			return "seated_loop_female0_raunchy";
		case 41:
			return "seated_loop_female0_raunchy_02";
		case 42:
			return "seated_loop_female1_applause_quick";
		case 43:
			return "seated_loop_female1_applause_standing_01";
		case 44:
			return "seated_loop_female1_applause_standing_02";
		case 45:
			return "seated_loop_female1_boo_high";
		case 46:
			return "seated_loop_female1_boo_low";
		case 47:
			return "seated_loop_female1_horrified_amused";
		case 48:
			return "seated_loop_female1_horrified_high";
		case 49:
			return "seated_loop_female1_horrified_low";
		case 50:
			return "seated_loop_female1_impressed_high";
		case 51:
			return "seated_loop_female1_impressed_low";
		case 52:
			return "seated_loop_female1_laugh";
		case 53:
			return "seated_loop_female1_laugh_02";
		case 54:
			return "seated_loop_female1_raunchy";
		case 55:
			return "seated_loop_female1_raunchy_02";
		case 56:
			return "seated_loop_male1_applause_quick";
		case 57:
			return "seated_loop_male1_applause_standing_01";
		case 58:
			return "seated_loop_male1_applause_standing_02";
		case 59:
			return "seated_loop_male1_boo_high";
		case 60:
			return "seated_loop_male1_boo_low";
		case 61:
			return "seated_loop_male1_horrified_amused";
		case 62:
			return "seated_loop_male1_horrified_high";
		case 63:
			return "seated_loop_male1_horrified_low";
		case 64:
			return "seated_loop_male1_impressed_high";
		case 65:
			return "seated_loop_male1_impressed_low";
		case 66:
			return "seated_loop_male1_laugh";
		case 67:
			return "seated_loop_male1_laugh_02";
		case 68:
			return "seated_loop_male1_raunchy";
		case 69:
			return "seated_loop_male1_raunchy_02";
		case 70:
			return "seated_loop_male2_applause_quick";
		case 71:
			return "seated_loop_male2_applause_standing_01";
		case 72:
			return "seated_loop_male2_applause_standing_02";
		case 73:
			return "seated_loop_male2_boo_high";
		case 74:
			return "seated_loop_male2_boo_low";
		case 75:
			return "seated_loop_male2_horrified_amused";
		case 76:
			return "seated_loop_male2_horrified_high";
		case 77:
			return "seated_loop_male2_horrified_low";
		case 78:
			return "seated_loop_male2_impressed_high";
		case 79:
			return "seated_loop_male2_impressed_low";
		case 80:
			return "seated_loop_male2_laugh";
		case 81:
			return "seated_loop_male2_laugh_02";
		case 82:
			return "seated_loop_male2_raunchy";
		case 83:
			return "seated_loop_male2_raunchy_02";
		case 84:
			return "seated_loop_male3_applause_quick";
		case 85:
			return "seated_loop_male3_applause_standing_01";
		case 86:
			return "seated_loop_male3_applause_standing_02";
		case 87:
			return "seated_loop_male3_boo_high";
		case 88:
			return "seated_loop_male3_boo_low";
		case 89:
			return "seated_loop_male3_horrified_amused";
		case 90:
			return "seated_loop_male3_horrified_high";
		case 91:
			return "seated_loop_male3_horrified_low";
		case 92:
			return "seated_loop_male3_impressed_high";
		case 93:
			return "seated_loop_male3_impressed_low";
		case 94:
			return "seated_loop_male3_laugh";
		case 95:
			return "seated_loop_male3_laugh_02";
		case 96:
			return "seated_loop_male3_raunchy";
		case 97:
			return "seated_loop_male3_raunchy_02";
		case 98:
			return "railsl_oneshot_male_escapeartistreact_a_male4";
		case 99:
			return "railsr_oneshot_male_escapeartistreact_a_male4";
		case 100:
			return "seated_oneshot_female_escapeartistreact_backward_a_female0";
		case 101:
			return "seated_oneshot_female_escapeartistreact_backward_b_female0";
		case 102:
			return "seated_oneshot_female_escapeartistreact_forward_a_female0";
		case 103:
			return "seated_oneshot_female_escapeartistreact_forward_b_female0";
		case 104:
			return "seated_oneshot_female_escapeartistreact_left_a_female0";
		case 105:
			return "seated_oneshot_female_escapeartistreact_left_b_female0";
		case 106:
			return "seated_oneshot_female_escapeartistreact_right_a_female0";
		case 107:
			return "seated_oneshot_female_escapeartistreact_right_b_female0";
		case 108:
			return "seated_oneshot_male_escapeartistreact_backward_a_male4";
		case 109:
			return "seated_oneshot_male_escapeartistreact_forward_a_male4";
		case 110:
			return "seated_oneshot_male_escapeartistreact_forward_b_male4";
		case 111:
			return "seated_oneshot_male_escapeartistreact_forward_c_male4";
		case 112:
			return "seated_oneshot_male_escapeartistreact_left_a_male4";
		case 113:
			return "seated_oneshot_male_escapeartistreact_left_b_male4";
		case 114:
			return "seated_oneshot_male_escapeartistreact_left_c_male4";
		case 115:
			return "seated_oneshot_male_escapeartistreact_right_a_male4";
		case 116:
			return "seated_oneshot_male_escapeartistreact_right_b_male4";
		case 117:
			return "seated_oneshot_male_escapeartistreact_right_c_male4";
		case 118:
			return "seated_oneshot_female0_hatfire_close_rt_a";
		case 119:
			return "seated_oneshot_female0_hatfire_concerned_rt_a";
		case 120:
			return "seated_oneshot_female1_hatfire_close_rt_a";
		case 121:
			return "seated_oneshot_female1_hatfire_concerned_rt_a";
		case 122:
			return "seated_oneshot_male0_hatfire_close_rt_a";
		case 123:
			return "seated_oneshot_male0_hatfire_concerned_rt_a";
		case 124:
			return "seated_oneshot_male1_hatfire_close_rt_a";
		case 125:
			return "seated_oneshot_male1_hatfire_concerned_rt_a";
		case 126:
			return "seated_oneshot_male2_hatfire_close_rt_a";
		case 127:
			return "seated_oneshot_male2_hatfire_concerned_rt_a";
		case 128:
			return "seated_oneshot_male3_hatfire_close_rt_a";
		case 129:
			return "seated_oneshot_male3_hatfire_concerned_rt_a";
		case 130:
			return "seated_oneshot_male4_hatfire_close_rt_a";
		case 131:
			return "seated_oneshot_male4_hatfire_concerned_rt_a";
		case 132:
			return "seated_oneshot_male5_hatfire_close_rt_a";
		case 133:
			return "seated_oneshot_male5_hatfire_concerned_rt_a";
		case 134:
			return "seated_oneshot_female0_hatfire_laugh_ft_a";
		case 135:
			return "seated_oneshot_female0_hatfire_laugh_ft_b";
		case 136:
			return "seated_oneshot_female1_hatfire_laugh_ft_a";
		case 137:
			return "seated_oneshot_female1_hatfire_laugh_ft_b";
		case 138:
			return "seated_oneshot_male0_hatfire_laugh_ft_a";
		case 139:
			return "seated_oneshot_male0_hatfire_laugh_ft_b";
		case 140:
			return "seated_oneshot_male1_hatfire_laugh_ft_a";
		case 141:
			return "seated_oneshot_male1_hatfire_laugh_ft_b";
		case 142:
			return "seated_oneshot_male2_hatfire_laugh_ft_a";
		case 143:
			return "seated_oneshot_male2_hatfire_laugh_ft_b";
		case 144:
			return "seated_oneshot_male3_hatfire_laugh_ft_a";
		case 145:
			return "seated_oneshot_male3_hatfire_laugh_ft_b";
		case 146:
			return "seated_oneshot_male4_hatfire_laugh_ft_a";
		case 147:
			return "seated_oneshot_male4_hatfire_laugh_ft_b";
		case 148:
			return "seated_oneshot_male5_hatfire_laugh_ft_a";
		case 149:
			return "seated_oneshot_male5_hatfire_laugh_ft_b";
		default:
			break;
	}
	return "seated_loop_male1_applause_quick";
}

char* func_480(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_blocked_a";
		case 1:
			return "seated_loop_female0_blocked_left_a";
		case 2:
			return "seated_loop_female0_blocked_right_a";
		case 3:
			return "seated_loop_female1_blocked_a";
		case 4:
			return "seated_loop_female1_blocked_left_a";
		case 5:
			return "seated_loop_female1_blocked_right_a";
		case 6:
			return "seated_loop_male0_blocked_a";
		case 7:
			return "seated_loop_male0_blocked_left_a";
		case 8:
			return "seated_loop_male0_blocked_right_a";
		case 9:
			return "seated_loop_male2_blocked_a";
		case 10:
			return "seated_loop_male2_blocked_left_a";
		case 11:
			return "seated_loop_male2_blocked_right_a";
		case 12:
			return "seated_loop_male3_blocked_a";
		case 13:
			return "seated_loop_male3_blocked_left_a";
		case 14:
			return "seated_loop_male3_blocked_right_a";
		case 15:
			return "railingl_male1_blocked_a";
		case 16:
			return "railingl_male1_blocked_left_a";
		case 17:
			return "railingl_male1_blocked_right_a";
		case 18:
			return "railingr_male4_blocked_a";
		case 19:
			return "railingr_male4_blocked_left_a";
		case 20:
			return "railingr_male4_blocked_right_a";
		default:
			break;
	}
	return "seated_loop_male0_blocked_a";
}

int func_481(int iParam0)
{
	if (!func_482(iParam0))
	{
		return -1;
	}
	return func_483(iParam0);
}

bool func_482(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_483(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_484(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_484(int iParam0)
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

