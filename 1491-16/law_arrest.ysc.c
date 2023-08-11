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
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	bool bLocal_26 = false;
	int iLocal_27 = 0;
	bool bLocal_28 = false;
	int iLocal_29 = 0;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	var uLocal_34 = 0;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	Vector3 vLocal_40 = { 0.0f, 0.0f, 0.0f };
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<1008> /*8064*/ sLocal_45 = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 1;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 24;
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
	var uLocal_1103 = 0;
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
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	int iLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	struct<11> /*88*/ sLocal_1194 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7 } ;
	int iLocal_1205 = 0;
	struct<11> /*88*/ sLocal_1206 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 10000;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 1;
	var uScriptParam_59 = 34;
	var uScriptParam_60 = 0;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_20 = 15;
	iLocal_21 = 20;
	iLocal_22 = 6;
	iLocal_23 = 5000;
	iLocal_24 = -1;
	iLocal_25 = -1;
	bLocal_32 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&uScriptParam_0, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2(&uScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::CLEAR_FOCUS();
		STREAMING::LOAD_SCENE_STOP();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_3(uParam0, bParam1);
	}
	func_4(&sLocal_45);
	func_5(1);
	func_6();
	if (func_7(7))
	{
		func_8(&(Global_1835011[7 /*74*/]), (1 << 13));
	}
	Global_1934266.f_60 = 0;
}

bool func_2(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (iLocal_1189)
	{
		case 0:
			func_9();
			func_10();
			PED::_0x9851DE7AEC10B4E1(func_11(PLAYER::PLAYER_ID()), 500.0f, 1, 0);
			func_12(func_11(PLAYER::PLAYER_ID()), 500.0f, 0);
			func_13(func_11(PLAYER::PLAYER_ID()), 500.0f, 0, 0, 0, 0, 0);
			PED::INSTANTLY_FILL_PED_POPULATION();
			VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
			func_14(uParam0->f_60);
			func_15(1);
			Global_1934266.f_60 = 1;
			iLocal_24 = iLocal_24;
			iLocal_25 = iLocal_25;
			Global_1934266.f_61 = 1;
			func_16(0);
			func_17(1);
			func_18(0);
			func_19(0, 1);
			func_20(0);
			func_21();
			func_22();
			func_23();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
			iLocal_19 = func_24(uParam0->f_60);
			func_25(&iLocal_1189, 1);
			break;
		case 1:
			if (func_26(uParam0->f_60))
			{
				func_25(&iLocal_1189, 2);
			}
			break;
		case 2:
			if (func_27(uParam0) & func_28(uParam0->f_60, &sLocal_45))
			{
				bLocal_28 = true;
				func_29(sLocal_45.f_970);
			}
			LAW::SET_PLAYER_ARRESTED_IN_REGION(PLAYER::PLAYER_ID(), func_30(uParam0->f_60, 1, 1));
			iVar0 = 0;
			while (iVar0 < func_31(uParam0->f_60))
			{
				func_32(uParam0->f_60, iVar0);
				iVar0++;
			}
			func_33(uParam0);
			func_34(1);
			func_35(&sLocal_45);
			func_36();
			if (bLocal_28)
			{
				func_25(&iLocal_1189, 3);
			}
			else
			{
				func_37();
				func_25(&iLocal_1189, 8);
			}
			break;
		case 3:
			bLocal_32 = true;
			bLocal_38 = false;
			LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			func_38(&sLocal_45);
			func_39(&sLocal_45);
			if (func_40(sLocal_45.f_970))
			{
				func_41(&sLocal_45);
			}
			if (func_42(sLocal_45.f_970))
			{
				func_37();
				func_43();
			}
			else
			{
				iLocal_29 = 1;
			}
			POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
			func_44(uParam0);
			func_45();
			func_25(&iLocal_1189, 4);
			break;
		case 4:
			func_46(sLocal_45.f_970);
			if (bLocal_32)
			{
				func_47();
				PED::_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.0f);
				PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.0f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.0f);
				POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
				iVar1 = func_48(&sLocal_45);
				if ((iVar1 == 3 && !bLocal_38) && Global_1310720.f_5 < (MISC::GET_GAME_TIMER() - 2000))
				{
					func_49();
					func_50();
					func_5(0);
					AUDIO::_SET_AUDIO_SCENESET("Jail_Cell", "Arrest_Fail_Respawn_Scenes");
					bLocal_38 = true;
				}
				if (iVar1 == 5)
				{
					AUDIO::_SET_AUDIO_SCENESET("Fade_To_Gameplay", "Arrest_Fail_Respawn_Scenes");
					if (sLocal_45.f_970 == 5 || sLocal_45.f_970 == 4)
					{
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(Global_35);
					}
					if (sLocal_45.f_970 == 4)
					{
						if (!func_51(11))
						{
							sLocal_45.f_1007 = 1;
						}
					}
					func_52(uParam0);
					bLocal_32 = false;
				}
			}
			else
			{
				func_53(&sLocal_45);
				if (func_40(sLocal_45.f_970))
				{
					func_54();
					func_25(&iLocal_1189, 5);
				}
				else
				{
					func_54();
					func_25(&iLocal_1189, 6);
				}
			}
			break;
		case 5:
			if (!bLocal_35)
			{
				if (!bLocal_37)
				{
					func_55(&sLocal_45);
					func_56(1, 1114636288, 1117847552, 1116602368);
					func_57(&sLocal_45, &uLocal_1090);
					func_58(&sLocal_45);
					func_59(0);
					if (sLocal_45.f_1007)
					{
						func_60(&sLocal_45, &uLocal_1090);
					}
					bLocal_37 = true;
				}
				func_61();
				bLocal_33 = true;
				vLocal_40 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
				iLocal_1188 = func_62();
				iLocal_25 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Global_35, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, 180.0f, false, false, -1, -1);
				if (func_63(&sLocal_45))
				{
					iLocal_24 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_EXPLOSION"), vLocal_40, -1.0f, 50.0f, 50.0f, -1.0f, -1.0f, -1, -1);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_5(1);
				LAW::_0x07E8B8B20570271C(PLAYER::PLAYER_ID());
				LAW::_0x22741652985C84D0(PLAYER::PLAYER_ID(), func_30(func_62(), 1, 1));
				LAW::_REPORT_PLAYER_LAW_DISPATCH_RESPONSE_OVERRIDE(PLAYER::PLAYER_ID(), joaat("LAW_JAILBREAK_VALENTINE"));
				LAW::_SET_LAW_DISABLED(false);
				LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), false);
				func_64(1);
				if (!bLocal_31)
				{
					LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_JAIL_BREAK"), 0, 0, true);
					LAW::_CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS(vLocal_40, func_65(func_30(iLocal_1188, 1, 1)));
					bLocal_31 = true;
				}
				func_64(0);
				bLocal_35 = true;
			}
			if (bLocal_33)
			{
				func_66(&sLocal_45);
			}
			else
			{
				bLocal_35 = false;
				func_67(&sLocal_45, &uLocal_1090);
				func_25(&iLocal_1189, 10);
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				func_68(&sLocal_45);
				func_25(&iLocal_1189, 10);
			}
			break;
		case 6:
			func_69(&sLocal_45, &uLocal_1090);
			POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
			func_25(&iLocal_1189, 7);
			break;
		case 7:
			if (func_70(&sLocal_45))
			{
				func_25(&iLocal_1189, 10);
			}
			break;
		case 8:
			func_43();
			PED::_RESERVE_AMBIENT_PEDS(1);
			while (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() < 1)
			{
				BUILTIN::WAIT(0);
			}
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			func_49();
			func_50();
			AUDIO::_SET_AUDIO_SCENESET("Jail_Cell", "Arrest_Fail_Respawn_Scenes");
			func_44(uParam0);
			func_45();
			func_5(0);
			func_25(&iLocal_1189, 9);
			break;
		case 9:
			if (!func_71(&uLocal_1054, uParam0->f_60))
			{
				func_72();
				PED::SET_PED_RESET_FLAG(Global_35, 103 /*PRF_0xF55B2A2A*/, true);
			}
			else if (CLOCK::GET_CLOCK_HOURS() >= iLocal_21 || CLOCK::GET_CLOCK_HOURS() < iLocal_22)
			{
				func_72();
				CLOCK::ADD_TO_CLOCK_TIME(0, iLocal_20, 0);
				return false;
			}
			else
			{
				func_25(&iLocal_1189, 10);
			}
			break;
		case 10:
			if (func_3(uParam0, 0))
			{
				func_1(uParam0, 0);
				TELEMETRY::_TELEMETRY_PLAYER_SPAWNED(Global_35);
				if (iLocal_29 == 0)
				{
					if (!bLocal_28)
					{
						func_73(1);
					}
					else
					{
						func_74();
						func_73(0);
					}
					Global_40.f_11956 = 0;
					iLocal_29 = 1;
				}
				if (!sLocal_45.f_1005)
				{
					if (bLocal_36)
					{
						return true;
					}
				}
				else
				{
					func_25(&iLocal_1189, 11);
				}
			}
			break;
		case 11:
			if (sLocal_45.f_949 == func_62())
			{
			}
			else
			{
				func_68(&sLocal_45);
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				func_68(&sLocal_45);
			}
			if (CAM::IS_SCREEN_FADING_OUT())
			{
				func_68(&sLocal_45);
			}
			if (!sLocal_45.f_1005)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_3(var uParam0, bool bParam1)
{
	switch (iLocal_1192)
	{
		case 0:
			func_52(uParam0);
			func_75();
			func_16(1);
			if (func_42(sLocal_45.f_970))
			{
				if (!func_76(275))
				{
					func_77(275, 0);
				}
			}
			func_78(6, (1 << 14));
			func_78(7, (1 << 14));
			if (bLocal_28)
			{
				PED::INSTANTLY_FILL_PED_POPULATION();
				func_79(&iLocal_1192, 1);
			}
			else
			{
				func_79(&iLocal_1192, 2);
			}
			if (bParam1)
			{
				func_3(uParam0, bParam1);
			}
			break;
		case 1:
			func_80(&sLocal_45);
			func_81(&(sLocal_45.f_950));
			func_82();
			func_56(0, 1114636288, 1117847552, 1116602368);
			func_83(iLocal_19);
			func_84();
			func_85(120, 0, 1);
			Global_1934266.f_63 = -1;
			LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
			func_86(uParam0);
			func_82();
			func_56(0, 1114636288, 1117847552, 1116602368);
			func_87();
			func_88();
			func_34(0);
			func_59(1);
			func_15(0);
			func_89(&sLocal_45);
			if (!bLocal_39)
			{
				func_90(0, -1);
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				sLocal_45.f_1005 = 0;
				bLocal_36 = true;
				return true;
			}
			if (PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
			{
				bLocal_36 = true;
				return true;
			}
			break;
		case 2:
			PED::_UNRESERVE_AMBIENT_PEDS(1);
			func_83(iLocal_19);
			func_84();
			func_85(120, 0, 1);
			Global_1934266.f_63 = -1;
			LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
			PED::INSTANTLY_FILL_PED_POPULATION();
			func_82();
			func_56(0, 1114636288, 1117847552, 1116602368);
			func_87();
			func_88();
			func_91(12, 0, 0, 0, 0, 0, 1065353216, 0);
			func_34(0);
			func_59(1);
			func_15(0);
			func_79(&iLocal_1192, 3);
			if (bParam1)
			{
				func_3(uParam0, bParam1);
			}
			break;
		case 3:
			if (!bLocal_39)
			{
				func_90(0, -1);
			}
			if (PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
			{
				bLocal_36 = true;
				if (func_92(uParam0))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_4(var uParam0)
{
	if (uParam0->f_1001 > 0)
	{
		ENTITY::_0x20FAEE47427A4497();
		PED::_UNRESERVE_AMBIENT_PEDS(uParam0->f_1001);
	}
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_93(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_94(&Global_1935630, (1 << 22));
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

void func_6()
{
	Global_1347477.f_6 = 0;
}

bool func_7(int iParam0)
{
	int iVar0;

	if (!func_95(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case joaat("FLOW_DO_MISSION_AT_BLIP"):
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_8(var uParam0, int iParam1)
{
	uParam0->f_63 |= iParam1;
}

void func_9()
{
	int iVar0;

	iVar0 = func_96();
	if (func_97(iVar0))
	{
		Global_1934266.f_317[iVar0] = func_98();
	}
}

void func_10()
{
	int iVar0;

	iVar0 = func_99();
	if (func_100(Global_1934266.f_63) && Global_1934266.f_63 != iVar0)
	{
		sLocal_45.f_1002 = func_101(Global_1934266.f_63);
	}
	else
	{
		sLocal_45.f_1002 = LAW::GET_BOUNTY(PLAYER::PLAYER_ID());
	}
}

Vector3 func_11(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_12(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_13(Vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= (1 << 17);
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			if (!func_102(6, (1 << 14)))
			{
				func_103(6, (1 << 14));
				func_104(6);
			}
			if (!func_102(7, (1 << 14)))
			{
				func_103(7, (1 << 14));
				func_104(7);
			}
			if (func_102(6, (1 << 14)) && func_102(7, (1 << 14)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_15(bool bParam0)
{
	if (!bParam0 && func_105(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_16(int iParam0)
{
	Global_1905944.f_5694 = iParam0;
}

void func_17(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_18(bool bParam0)
{
	if (func_106() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_107();
	if (bParam1)
	{
		func_108(-1);
	}
}

void func_20(bool bParam0)
{
	if (func_106() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_109();
}

void func_21()
{
	if (func_110(282))
	{
		func_111(282);
	}
	if (func_110(281))
	{
		func_111(281);
	}
	if (func_110(263))
	{
		func_111(263);
	}
	if (func_110(264))
	{
		func_111(264);
	}
	if (func_110(272))
	{
		func_111(272);
	}
}

void func_22()
{
	var uVar0;
	int iVar1;

	if (!func_112())
	{
		if (func_113(&uVar0))
		{
			func_114();
		}
	}
	if (func_115())
	{
		func_116(joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"), Global_35, 0, 1);
		iVar1 = 0;
		while (iVar1 < 29)
		{
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, iVar1, false);
			iVar1++;
		}
	}
}

void func_23()
{
	PED::_SET_PED_DIRT_CLEANED(Global_35, 0.0f, -1, true, true);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 3);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 0);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 5);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 7);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 8);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 9);
}

int func_24(int iParam0)
{
	return func_118(iParam0, 0, 3, func_117());
}

void func_25(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_26(int iParam0)
{
	if (!func_119(iLocal_19))
	{
		iLocal_19 = func_24(iParam0);
		return false;
	}
	if (func_120(iLocal_19))
	{
		return true;
	}
	if (!func_121(iLocal_19))
	{
		func_122(iLocal_19, 1);
	}
	else
	{
		func_94(&Global_1935630, 128);
		func_123(iLocal_19, 1, 0);
	}
	return false;
}

int func_27(var uParam0)
{
	if (((((uParam0->f_60 == 76 || uParam0->f_60 == 26) || uParam0->f_60 == 105) || uParam0->f_60 == 78) || uParam0->f_60 == 38) || uParam0->f_60 == 5)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	uParam1->f_970 = -1;
	if (!func_124(iParam0))
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	iVar0 = func_127(func_126(iParam0));
	if (!func_100(iVar0))
	{
		return 0;
	}
	func_128(iParam0, &iVar1, uParam1);
	if (func_129(iVar1))
	{
		uParam1->f_970 = iVar1;
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (!func_129(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_11182), iParam0);
}

int func_30(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_130(iParam0))
			{
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 105:
			if (func_130(iParam0))
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
			if (!bParam1 || func_106() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (func_131(45))
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
			if (!bParam1 || func_106() != -1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (func_131(45))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			if (!bParam1 || func_106() != -1)
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			if (func_132(Global_1835011[59 /*74*/].f_1, 1))
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			else
			{
				return joaat("LAW_REGION_BIG_VALLEY");
			}
			break;
		case 37:
			if (!bParam1 || func_106() != -1)
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			if (func_132(Global_1347702[9 /*49*/].f_15, 1))
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			else if (func_131(45))
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
			if (iParam0 == func_133())
			{
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			}
			break;
		case 110:
			if (!bParam1 || func_106() != -1)
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			if (func_131(45))
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
		iVar0 = func_126(iParam0);
		if (iVar0 != -1)
		{
			return func_134(iVar0, bParam1);
		}
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 2;
		case 26:
			return 2;
		case 105:
			return 1;
		case 78:
			return 2;
		case 5:
			return 2;
		case 38:
			return 2;
		case 115:
			return 6;
	}
	return 0;
}

void func_32(int iParam0, int iParam1)
{
	func_136(func_135(iParam0, iParam1));
}

void func_33(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 78:
			func_12(2902.057f, 1311.149f, 44.9349f, 3.0f, 0);
			break;
		case 76:
			func_12(-272.9033f, 808.8414f, 119.3715f, 4.0f, 0);
			break;
		case 38:
			func_12(-764.9592f, -1263.492f, 44.1678f, 3.5f, 0);
			break;
		case 105:
			func_12(1355.627f, -1302.07f, 77.7605f, 3.0f, 0);
			break;
		case 26:
			func_12(-1811.578f, -353.199f, 161.4108f, 4.0f, 0);
			break;
		case 5:
			func_12(2503.272f, -1306.936f, 48.9537f, 2.0f, 0);
			break;
	}
}

void func_34(int iParam0)
{
	Global_1396116.f_139 = iParam0;
}

void func_35(var uParam0)
{
	func_137(uParam0);
	func_138(iLocal_16, 0, 114688, 0);
}

void func_36()
{
	Global_1347477.f_6 = 1;
}

void func_37()
{
	int iVar0;

	iVar0 = func_99();
	if (func_100(Global_1934266.f_63) && Global_1934266.f_63 != iVar0)
	{
		func_139(Global_1934266.f_63);
		func_140(Global_1934266.f_63);
		func_141(Global_1934266.f_63, 0);
		func_140(iVar0);
	}
	else
	{
		func_139(Global_1934266.f_63);
		func_140(Global_1934266.f_63);
	}
	LAW::CLEAR_WANTED_SCORE(PLAYER::PLAYER_ID());
}

void func_38(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 1:
			uParam0->f_1003 = 1;
			strcpy_s(&(uParam0->f_984), 32, "JBO3_EXT");
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-274.9539f, 807.9131f, 121.9488f, 0.0f, 0.0f, 9.543586f, 10.13485f, 10.82004f, 7.605244f, "JBO3_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -269.002f, 806.5345f, 118.2811f, 1, -270.53f, 791.97f, 117.58f, 220.6354f, 0);
			func_142(uParam0, 0, "DUTCH", -269.002f, 806.5345f, 118.2811f, 1, -271.82f, 791.26f, 117.59f, 202.4148f, 0);
			func_143(uParam0, Global_35, "arthur", -269.002f, 806.5345f, 118.2811f, 1, -268.18f, 793.36f, 117.53f, 203.3375f, 0);
			break;
		case 2:
			uParam0->f_1003 = 1;
			strcpy_s(&(uParam0->f_984), 32, "JBO7_EXT");
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-274.9539f, 807.9131f, 121.9488f, 0.0f, 0.0f, 9.543586f, 10.13485f, 10.82004f, 7.605244f, "JBO7_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -262.9f, 819.2f, 119.5f, 1, -266.4f, 818.8f, 119.5f, 154.3179f, "HORSE_01");
			func_142(uParam0, 0, "Dutch", -268.8f, 815.9f, 119.5f, 1, -265.8f, 814.1f, 119.5f, 165.487f, "Horse_01^1");
			func_143(uParam0, Global_35, "ARTHUR", -272.7f, 811.4f, 119.5f, 1, -269.9f, 819.3f, 119.5f, 186.387f, "Horse_01^2");
			break;
		case 3:
			uParam0->f_1003 = 0;
			strcpy_s(&(uParam0->f_984), 32, "JBO2_EXT");
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-286.7853f, 805.7806f, 119.0863f, 0.0f, 0.0f, 11.78279f, 42.17782f, 34.87466f, 15.87478f, "JBO2_Restrictions");
			func_142(uParam0, 0, "Dutch", -274.8124f, 800.249f, 118.3808f, 1, -294.5992f, 819.6844f, 118.2036f, 272.9581f, 0);
			func_143(uParam0, Global_35, "ARTHUR", -272.7505f, 811.0136f, 118.38f, 1, -303.235f, 793.9093f, 118.1267f, 5.5524f, 0);
			break;
		case 4:
			uParam0->f_1003 = 1;
			strcpy_s(&(uParam0->f_984), 32, "JBO5_EXT");
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1811.271f, -351.171f, 165.12f, 0.0f, 0.0f, 65.01599f, 11.6f, 8.2f, 8.0f, "JBO5_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -1803.529f, -344.7994f, 163.5501f, 1, -1793.58f, -367.07f, 160.21f, 216.8521f, 0);
			func_142(uParam0, 1, "JohnMarston", -1803.529f, -344.7994f, 163.5501f, 1, -1791.94f, -364.9f, 160.64f, 202.8108f, 0);
			func_143(uParam0, Global_35, "arthur", -269.002f, 806.5345f, 118.2811f, 1, -1795.35f, -369.44f, 159.86f, 210.9395f, 0);
			break;
		case 5:
			uParam0->f_1003 = 1;
			strcpy_s(&(uParam0->f_984), 32, "JBO9_EXT");
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1811.271f, -351.171f, 163.953f, 0.0f, 0.0f, 65.01599f, 11.6f, 8.2f, 8.0f, "JBO9_Restrictions");
			func_143(uParam0, Global_35, "JOHN", -1810.377f, -351.2475f, 161.4798f, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			break;
		case 6:
			uParam0->f_1003 = 1;
			strcpy_s(&(uParam0->f_984), 32, "JBO1_EXT");
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.724f, -1304.623f, 78.07324f, 0.0f, 0.0f, -20f, 15.45211f, 22.1697f, 6.84831f, "JBO1_Restrictions");
			func_142(uParam0, 0, "DUTCH", 1352.871f, -1299.193f, 75.6088f, 1, 1348.682f, -1311.307f, 76.5695f, 85.1549f, "Horse_01^1");
			func_143(uParam0, Global_35, "arthur", 1354.891f, -1301.46f, 77.1865f, 1, 1350.86f, -1309.55f, 76.71f, 85.1549f, "Horse_01");
			break;
		case 7:
			uParam0->f_1003 = 0;
			strcpy_s(&(uParam0->f_984), 32, "JBO4_EXT");
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.926f, 1312.666f, 45.85957f, 0.0f, 0.0f, -18.92808f, 21.62638f, 10.55981f, 7.126882f, "JBO4_Restrictions");
			func_142(uParam0, 5, "HoseaMatthews", 2916.183f, 1308.597f, 44.59514f, 1, 2911.277f, 1303.386f, 43.7005f, 158.1667f, 0);
			func_143(uParam0, Global_35, "ARTHUR", 2916.527f, 1312.022f, 44.4304f, 1, 2916.746f, 1317.201f, 43.34f, 64.3745f, 0);
			break;
		case 8:
			uParam0->f_1003 = 1;
			strcpy_s(&(uParam0->f_984), 32, "JBO6_EXT");
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.926f, 1312.666f, 45.85957f, 0.0f, 0.0f, -18.92808f, 21.62638f, 10.55981f, 7.126882f, "JBO6_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", 2913.348f, 1309.59f, 43.5983f, 1, 2911.918f, 1304.091f, 43.5851f, 163.1755f, "Horse_01");
			func_143(uParam0, Global_35, "ARTHUR", 2902.42f, 1312.024f, 43.9416f, 1, 2916.746f, 1317.201f, 43.34f, 64.3745f, 0);
			func_144(uParam0, joaat("S_M_M_AMBIENTLAWRURAL_01"), "S_M_M_AMBIENTLAWRURAL_01", 2916.527f, 1312.022f, 44.4304f, joaat("ASB_LAW_DEPUTIES"));
			func_144(uParam0, joaat("S_M_M_AMBIENTLAWRURAL_01"), "S_M_M_AMBIENTLAWRURAL_01^1", 2913.348f, 1309.59f, 43.5983f, joaat("ASB_LAW_DEPUTIES"));
			break;
		case 9:
			uParam0->f_1003 = 0;
			strcpy_s(&(uParam0->f_984), 32, "JBO11_EXT");
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-759.3268f, -1267.945f, 44.01426f, 0.0f, 0.0f, 0.0f, 21.59153f, 12.84869f, 6.995106f, "JBO11_Restrictions");
			func_142(uParam0, 13, "AbigailRoberts", -751.2921f, -1269.159f, 42.3344f, 1, -751.6697f, -1266.675f, 42.3642f, 351.0406f, "Horse_01");
			func_143(uParam0, Global_35, "JOHN", -762.8563f, -1263.777f, 42.8484f, 1, -752.6035f, -1276.804f, 42.4938f, 88.8295f, 0);
			break;
		case 10:
			uParam0->f_1003 = 0;
			strcpy_s(&(uParam0->f_984), 32, "JBO8_EXT");
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.094f, -1308.998f, 48.54811f, 0.0f, 0.0f, 0.0f, 40.58993f, 17.2809f, 9.483007f, "JB10_Restrictions");
			func_142(uParam0, 5, "HoseaMatthews", 2529.161f, -1307.163f, 48.2126f, 1, 2522.156f, -1316.749f, 47.8753f, 77.2207f, 0);
			func_143(uParam0, Global_35, "ARTHUR", 2512.193f, -1308.456f, 47.9537f, 1, 2522.22f, -1302.554f, 48.0213f, 93.0952f, 0);
			break;
		case 11:
			uParam0->f_1003 = 0;
			strcpy_s(&(uParam0->f_984), 32, "JBO10_EXT");
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.094f, -1308.998f, 48.54811f, 0.0f, 0.0f, 0.0f, 40.58993f, 17.2809f, 9.483007f, "JB10_Restrictions");
			func_143(uParam0, Global_35, "John", 2503.278f, -1306.994f, 47.9537f, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			break;
	}
}

void func_39(var uParam0)
{
	int iVar0;

	if ((uParam0->f_998 > 0 || uParam0->f_999 > 0) || uParam0->f_1000 > 0)
	{
		if (uParam0->f_950.f_18)
		{
			iVar0 = 1;
		}
		uParam0->f_1001 = (((uParam0->f_998 + uParam0->f_999) + uParam0->f_1000 * 2) + iVar0);
		PED::_RESERVE_AMBIENT_PEDS(uParam0->f_1001);
	}
}

bool func_40(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 4:
		case 6:
			return true;
	}
	return false;
}

void func_41(var uParam0)
{
	func_145(uParam0);
	func_138(iLocal_17, 0, (1 << 11), 0);
}

bool func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
			return false;
	}
	return true;
}

void func_43()
{
	func_139(func_99());
}

void func_44(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 76:
			func_136(32);
			func_146(32, 32);
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-270.6571f, 785.237f, 118.2027f, 0.0f, 0.0f, 11.43384f, 44.26319f, 53.83985f, 21.44312f, "volClearScriptWagons");
			break;
		case 26:
			func_136(883);
			func_136(884);
			func_146(883, 32);
			func_146(884, 32);
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1795.738f, -362.124f, 163.6816f, 0.0f, 0.0f, -23.81512f, 51.10044f, 45.75085f, 22.93521f, "volClearScriptWagons");
			break;
		case 105:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1347.627f, -1309.533f, 76.47682f, 0.0f, 0.0f, -19.9999f, 64.97517f, 24.37222f, 16.81363f, "volClearScriptWagons");
			break;
		case 78:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2910.424f, 1294.851f, 43.97159f, 0.0f, 0.0f, -20.00017f, 44.69428f, 76.72396f, 18.23014f, "volClearScriptWagons");
			break;
		case 38:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-747.7532f, -1267.985f, 42.28417f, 0.0f, 0.0f, 0.0f, 19.36348f, 27.39255f, 21.49196f, "volClearScriptWagons");
			break;
		case 5:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2521.402f, -1300.223f, 47.53965f, 0.0f, 0.0f, 0.0f, 23.75947f, 61.34023f, 26.76055f, "volClearScriptWagons");
			break;
		case 120:
			break;
	}
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (VOLUME::DOES_VOLUME_EXIST(iLocal_18))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		ENTITY::_GET_ENTITIES_IN_VOLUME(iLocal_18, iVar0, 2);
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
		if (iVar1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0)));
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
					VEHICLE::DELETE_VEHICLE(&iVar3);
				}
				iVar2++;
			}
		}
	}
}

void func_46(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (!func_147(0, (1 << 14)))
			{
				func_148(0, (1 << 14), 1);
			}
			if (!func_147(7, (1 << 14)))
			{
				func_148(7, (1 << 14), 1);
			}
			break;
		case 6:
			if (!func_147(0, (1 << 14)))
			{
				func_148(0, (1 << 14), 1);
			}
			break;
		case 8:
			if (!func_147(7, (1 << 14)))
			{
				func_148(7, (1 << 14), 1);
			}
			break;
		case 4:
			if (!func_147(1, (1 << 14)))
			{
				func_148(1, (1 << 14), 1);
			}
			if (!func_147(7, (1 << 14)))
			{
				func_148(7, (1 << 14), 1);
			}
			break;
	}
}

void func_47()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 29)
	{
		iVar0 = func_149(Global_35, iVar1, 0, 1);
		if ((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			func_150(iVar0);
		}
		iVar1++;
	}
}

int func_48(var uParam0)
{
	switch (uParam0->f_969)
	{
		case 0:
			if (func_151(uParam0))
			{
				uParam0->f_969 = 1;
			}
			break;
		case 1:
			func_152(uParam0);
			func_153(uParam0);
			func_154(uParam0);
			func_155(uParam0);
			uParam0->f_969 = 2;
			break;
		case 2:
			AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", uParam0->f_1003);
			if (func_156(uParam0))
			{
				uParam0->f_969 = 3;
			}
			break;
		case 3:
			if (func_63(uParam0))
			{
				func_157(uParam0);
			}
			if (uParam0->f_1006 == 0)
			{
				if (func_158(uParam0))
				{
					uParam0->f_969 = 4;
				}
			}
			break;
		case 4:
			func_159(uParam0);
			if (uParam0->f_1003)
			{
				AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", false);
			}
			uParam0->f_969 = 5;
			break;
		case 5:
			break;
	}
	return uParam0->f_969;
}

void func_49()
{
	if (Global_1935630.f_3 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1935630.f_3);
		Global_1935630.f_3 = 0;
	}
}

void func_50()
{
	func_93(&Global_1935630, (1 << 12));
	func_160();
	func_161(0, 0);
	func_162();
	func_163(0.0f, 0.0f, 0.0f);
	Global_40.f_9.f_15 = -1;
	func_164(0);
	Global_1310720.f_1 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0.0f;
	Global_1310720.f_4 = 0;
	Global_1310720.f_6 = 0;
	Global_1310720.f_7 = 0;
	Global_1310720.f_8 = 1;
	Global_1310720.f_13 = 0;
	Global_1310720.f_14 = 0;
	Global_1310720.f_12 = 0;
	Global_1310720.f_27 = 0;
	Global_1310720.f_28 = 0;
	Global_1310720.f_29 = -1;
	Global_1935630.f_4 = 0;
	Global_1897952.f_40 = 0;
	Global_1310720.f_24 = joaat("WEAPON_UNARMED");
	Global_1310720.f_22 = -1;
	func_165(0);
	func_166(0);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_5(1);
	func_167(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DEATH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DYING_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DYING_SCENE");
	}
}

bool func_51(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_132(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_52(var uParam0)
{
	int iVar0;
	int iVar1;

	if (bLocal_30)
	{
		return;
	}
	func_168();
	func_169(&(uParam0->f_43));
	func_169(&(uParam0->f_46));
	func_169(&(uParam0->f_49));
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (bLocal_28)
	{
		func_16(1);
		func_75();
		func_170(&sLocal_45);
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		if (!func_40(sLocal_45.f_970))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(iLocal_23);
		}
		if (!func_76(288))
		{
			func_77(288, 0);
		}
	}
	else
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
			if (TASK::_0x9FF5F9B24E870748(iVar0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
			}
			iVar1 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(iVar0, true);
			if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
			{
				TASK::TASK_USE_SCENARIO_POINT(iVar0, iVar1, 0, 1, false, false, 0, false, -1.0f, false);
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), uParam0->f_30, false) > 2.0f)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, uParam0->f_30, uParam0->f_33, false, false, true);
			}
		}
	}
	AUDIO::_STOP_AUDIO_SCENESET("Arrest_Fail_Respawn_Scenes");
	Global_1934266.f_61 = 0;
	bLocal_30 = true;
}

void func_53(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 3:
			func_171(joaat("DOOR_VAL_JAIL_CELL_01"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_VAL_JAIL_CELL_02"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_VAL_JAIL_CELL_03"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			break;
		case 1:
		case 2:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(joaat("DOOR_VAL_JAIL_BACK"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_VAL_JAIL_CELL_01"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_VAL_JAIL_CELL_02"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_VAL_JAIL_CELL_03"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_VAL_JAIL_FRONT"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			break;
		case 4:
		case 5:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(joaat("DOOR_STR_JAILPOST_INT_1"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_STR_JAILPOST_INT_2"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_STR_JAILPOST_INT_3"), 1, 0.0f, 1, 0, 1.0f, 1, 1);
			func_171(joaat("DOOR_STR_JAILPOST_INT_4"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			break;
		case 8:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(-2082598623, 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(1657401918, 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(1502928852, 1, 0.0f, 0, 0, 1.0f, 0, 0);
			break;
		case 6:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(joaat("DOOR_RHO_SHERIFF_BACK"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_RHO_SHERIFF_FRONT"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(1878514758, 1, 0.0f, 0, 0, 1.0f, 0, 0);
			break;
		case 9:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(-473782212, 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(-884246706, 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_BLA_JAIL_INT_1"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_BLA_JAIL_INT_2"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_BLA_JAIL_INT_3"), 1, 0.0f, 0, 0, 1.0f, 0, 0);
			break;
	}
}

void func_54()
{
	WEAPON::_SET_PED_ALL_WEAPONS_VISIBILITY(Global_35, true);
}

void func_55(var uParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<4> /*32*/ sVar9;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) /*3*/ };
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	LAW::_0x0C392DB374655176(vVar0, func_172(&(uParam0->f_970)), iVar3);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar3);
	if (iVar4 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar3);
			iVar8 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_DEAD_OR_DYING(iVar8, true))
			{
				if (iVar6 < 4)
				{
					sVar9 = { func_173(&(uParam0->f_970), iVar6) /*4*/ };
					if (!func_174(sVar9))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar8, true, true);
						func_175(iVar8, sVar9, 2, (1 << 30));
					}
					iVar6++;
				}
			}
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar3);
}

void func_56(bool bParam0, float fParam1, float fParam2, float fParam3)
{
	if (bParam0)
	{
		MISC::_SET_DISPATCH_MIN_SPAWN_DISTANCE(fParam1);
		MISC::_SET_DISPATCH_MAX_SPAWN_DISTANCE(fParam2);
		MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(fParam3);
	}
	else
	{
		MISC::_RESET_DISPATCH_MIN_SPAWN_DISTANCE();
		MISC::_RESET_DISPATCH_MAX_SPAWN_DISTANCE();
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
	}
}

void func_57(var uParam0, var uParam1)
{
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
			func_177(uParam1, func_176(uParam0, 0), "DUTCH", 0);
			func_177(uParam1, func_176(uParam0, 7), "CHARLES_SMITH", 0);
			func_177(uParam1, Global_35, "ARTHUR", 0);
			break;
		case 4:
			func_177(uParam1, func_176(uParam0, 1), "JOHN", 0);
			func_177(uParam1, func_176(uParam0, 7), "CHARLES_SMITH", 0);
			func_177(uParam1, Global_35, "ARTHUR", 0);
			break;
		case 6:
			func_177(uParam1, func_176(uParam0, 0), "DUTCH", 0);
			func_177(uParam1, Global_35, "ARTHUR", 0);
			break;
	}
}

void func_58(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155 /*PCF_EnableCompanionAIAnalysis*/, true);
			COMPANION::_ACTIVATE_COMPANION_ANALYSIS(iLocal_14);
			PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_950.f_2, 113 /*PCF_DisableShockingEvents*/, true);
			PED::FORCE_PED_MOTION_STATE(uParam0->f_950.f_2, joaat("MOTIONSTATE_JOG"), false, 1, false);
			func_178(func_176(uParam0, 7));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 113 /*PCF_DisableShockingEvents*/, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 156 /*PCF_EnableCompanionAISupport*/, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 7), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 7), joaat("SUPPORT"));
			PED::_SET_PED_COMBAT_BEHAVIOUR(func_176(uParam0, 7), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 7), 113 /*PCF_DisableShockingEvents*/, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 7), true);
			PED::FORCE_PED_MOTION_STATE(func_179(uParam0, 7), joaat("MOTIONSTATE_JOG"), false, 1, false);
			func_178(func_176(uParam0, 0));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 113 /*PCF_DisableShockingEvents*/, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 156 /*PCF_EnableCompanionAISupport*/, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 0), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 0), joaat("SUPPORT"));
			PED::_SET_PED_COMBAT_BEHAVIOUR(func_176(uParam0, 0), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 0), 113 /*PCF_DisableShockingEvents*/, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 0), true);
			PED::FORCE_PED_MOTION_STATE(func_179(uParam0, 0), joaat("MOTIONSTATE_JOG"), false, 1, false);
			break;
		case 4:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155 /*PCF_EnableCompanionAIAnalysis*/, true);
			COMPANION::_ACTIVATE_COMPANION_ANALYSIS(iLocal_14);
			PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
			func_178(func_176(uParam0, 7));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 113 /*PCF_DisableShockingEvents*/, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 156 /*PCF_EnableCompanionAISupport*/, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 7), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 7), joaat("SUPPORT"));
			PED::_SET_PED_COMBAT_BEHAVIOUR(func_176(uParam0, 7), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 7), 113 /*PCF_DisableShockingEvents*/, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 7), true);
			func_178(func_176(uParam0, 1));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 1), 113 /*PCF_DisableShockingEvents*/, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 1), 156 /*PCF_EnableCompanionAISupport*/, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 1), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 1), joaat("SUPPORT"));
			PED::_SET_PED_COMBAT_BEHAVIOUR(func_176(uParam0, 1), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 1), 113 /*PCF_DisableShockingEvents*/, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 1), true);
			break;
		case 6:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155 /*PCF_EnableCompanionAIAnalysis*/, true);
			COMPANION::_ACTIVATE_COMPANION_ANALYSIS(iLocal_14);
			PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_950.f_2, 113 /*PCF_DisableShockingEvents*/, true);
			PED::FORCE_PED_MOTION_STATE(uParam0->f_950.f_2, joaat("MOTIONSTATE_JOG"), false, 1, false);
			func_178(func_176(uParam0, 0));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 113 /*PCF_DisableShockingEvents*/, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 156 /*PCF_EnableCompanionAISupport*/, true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 0), joaat("SUPPORT"));
			PED::_SET_PED_COMBAT_BEHAVIOUR(func_176(uParam0, 0), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 0), 113 /*PCF_DisableShockingEvents*/, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 0), true);
			break;
	}
}

void func_59(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_103(iVar0, (1 << 12));
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iVar0 /*373*/].f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[iVar0 /*373*/].f_1, false);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iVar1 /*373*/].f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[iVar1 /*373*/].f_1, true);
			}
			iVar1++;
		}
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}
	if (func_106() == -1)
	{
		Global_1430221.f_1 = !bParam0;
	}
}

void func_60(var uParam0, var uParam1)
{
	Vector3 vVar0;
	char* sVar3;

	vVar0 = { func_180(uParam0) /*3*/ };
	sVar3 = func_181(vVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		func_182(uParam1, vVar0, 0, -1, 0, 0);
	}
}

void func_61()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[iVar0 /*638*/].f_635, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1396257[iVar0 /*638*/].f_635, 1);
		}
		iVar0++;
	}
}

int func_62()
{
	return Global_1894899.f_2;
}

bool func_63(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
		case 6:
			return true;
	}
	return false;
}

void func_64(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15 /*DT_OnFoot*/, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6 /*DT_PoliceRiders*/, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1 /*DT_PoliceAutomobile*/, bParam0);
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case joaat("LAW_REGION_HEARTLANDS"):
			return joaat("LAW_WILDERNESS_HEARTLANDS");
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return joaat("LAW_WILDERNESS_SCARLETT_MEADOWS");
		case joaat("LAW_REGION_BAYOU_NWA"):
			return joaat("LAW_WILDERNESS_BAYOU_NWA");
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
			return joaat("LAW_WILDERNESS_BLUEGILL_MARSH");
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
			return joaat("LAW_WILDERNESS_ROANOKE_RIDGE");
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
			return joaat("LAW_WILDERNESS_CUMBERLAND_FOREST");
		case joaat("LAW_REGION_GRIZZLIES"):
			return joaat("LAW_WILDERNESS_GRIZZLIES");
		case joaat("LAW_REGION_BIG_VALLEY"):
			return joaat("LAW_WILDERNESS_BIG_VALLEY");
		case joaat("LAW_REGION_TALL_TREES"):
			return joaat("LAW_WILDERNESS_TALL_TREES");
		case joaat("LAW_REGION_GREAT_PLAINS"):
			return joaat("LAW_WILDERNESS_GREAT_PLAINS");
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
			return joaat("LAW_WILDERNESS_TALL_TREES_MAINGAME");
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
			return joaat("LAW_WILDERNESS_GREAT_PLAINS_MAINGAME");
		case joaat("LAW_REGION_GUAMA"):
			return joaat("LAW_WILDERNESS_GUAMA");
		case joaat("LAW_REGION_VALENTINE"):
			return joaat("LAW_LOCAL_VALENTINE");
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
			return joaat("LAW_LOCAL_VALENTINE_LOCKDOWN");
		case joaat("LAW_REGION_RHODES"):
			return joaat("LAW_LOCAL_RHODES");
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
			return joaat("LAW_LOCAL_RHODES_LOCKDOWN");
		case joaat("LAW_REGION_SAINT_DENIS"):
			return joaat("LAW_LOCAL_SAINT_DENIS");
		case joaat("LAW_REGION_SAINT_DENIS_RURAL"):
			return joaat("LAW_LOCAL_SAINT_DENIS_RURAL");
		case joaat("LAW_REGION_MANICATO"):
			return joaat("LAW_LOCAL_MANICATO");
		case joaat("LAW_REGION_ANNESBURG"):
			return joaat("LAW_LOCAL_ANNESBUG");
		case joaat("LAW_REGION_STRAWBERRY"):
			return joaat("LAW_LOCAL_STRAWBERRY");
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
			return joaat("LAW_LOCAL_PRONGHORN_RANCH");
		case joaat("LAW_REGION_BLACKWATER"):
			return joaat("LAW_LOCAL_BLACKWATER");
		case joaat("LAW_REGION_VAN_HORN"):
			return joaat("LAW_LOCAL_VAN_HORN");
		case joaat("LAW_REGION_CORNWALL"):
			return joaat("LAW_LOCAL_CORNWALL");
		case joaat("LAW_REGION_EMERALD_RANCH"):
			return joaat("LAW_LOCAL_EMERALD_RANCH");
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
			return joaat("LAW_LOCAL_BRAITHWAITE_MANOR");
		case joaat("LAW_REGION_CALIGA_HALL"):
			return joaat("LAW_LOCAL_CALIGA_HALL");
		case joaat("LAW_REGION_AGUASDULCES"):
			return joaat("LAW_LOCAL_AGUASDULCES");
		case joaat("LAW_REGION_LAGRAS"):
			return joaat("LAW_LOCAL_LAGRAS");
		case joaat("LAW_REGION_SISIKA"):
			return joaat("LAW_LOCAL_SISIKA");
		case joaat("LAW_REGION_BUTCHER_CREEK"):
			return joaat("LAW_LOCAL_BUTCHER_CREEK");
		case joaat("LAW_REGION_FORT_WALLACE"):
			return joaat("LAW_LOCAL_FORT_WALLACE");
		case joaat("LAW_REGION_WAPITI"):
			return joaat("LAW_LOCAL_WAPITI");
		case joaat("LAW_REGION_BEECHERS_HOPE"):
			return joaat("LAW_LOCAL_BEECHERS_HOPE");
		case joaat("LAW_REGION_MANZANITA_POST"):
			return joaat("LAW_LOCAL_MANZANITA_POST");
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return joaat("LAW_LOCAL_BLACKWATER_MAINGAME");
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return joaat("LAW_LOCAL_OCCUPIED_CARAVAN_CAMP");
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
			return joaat("LAW_WILDERNESS_OLD_MAP");
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
			return joaat("LAW_WILDERNESS_OLD_MAP_MAINGAME");
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
			return joaat("LAW_LOCAL_MACFARLANES_RANCH");
		case joaat("LAW_REGION_ARMADILLO"):
			return joaat("LAW_LOCAL_ARMADILLO");
		case joaat("LAW_REGION_THIEVES_LANDING"):
			return joaat("LAW_LOCAL_THIEVES_LANDING");
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
			return joaat("LAW_LOCAL_THIEVES_LANDING_MAINGAME");
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return joaat("LAW_LOCAL_RIDGEWOOD_FARM");
		default:
			break;
	}
	return 0;
}

void func_66(var uParam0)
{
	func_183();
	if (!func_130(iLocal_1188))
	{
		func_184(iLocal_1188, 1, 350);
	}
	if (func_185(uParam0) && !LAW::IS_LAW_INCIDENT_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
	{
		bLocal_33 = false;
	}
}

void func_67(var uParam0, var uParam1)
{
	Vector3 vVar0;
	char* sVar3;

	vVar0 = { func_186(uParam0) /*3*/ };
	sVar3 = func_181(vVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		func_182(uParam1, vVar0, 0, -1, 0, 0);
	}
}

void func_68(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
			func_171(joaat("DOOR_VAL_JAIL_BACK"), 0, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_VAL_JAIL_FRONT"), 0, 0.0f, 0, 0, 1.0f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 4:
		case 5:
			func_171(joaat("DOOR_STR_JAILPOST_INT_1"), 0, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_STR_JAILPOST_INT_2"), 0, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_STR_JAILPOST_INT_3"), 0, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_STR_JAILPOST_INT_4"), 0, 0.0f, 0, 0, 1.0f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 8:
			func_171(-2082598623, 0, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(1657401918, 1, 0.0f, 0, 0, 1.0f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 6:
			func_171(joaat("DOOR_RHO_SHERIFF_BACK"), 0, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(joaat("DOOR_RHO_SHERIFF_FRONT"), 0, 0.0f, 0, 0, 1.0f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 9:
			func_171(-473782212, 0, 0.0f, 0, 0, 1.0f, 0, 0);
			func_171(-884246706, 0, 0.0f, 0, 0, 1.0f, 0, 0);
			uParam0->f_1005 = 0;
			break;
	}
}

void func_69(var uParam0, var uParam1)
{
	Vector3 vVar0;
	char* sVar3;

	vVar0 = { func_187(uParam0) /*3*/ };
	sVar3 = func_181(vVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		func_182(uParam1, vVar0, 0, -1, 0, 0);
	}
}

bool func_70(var uParam0)
{
	int iVar0;
	Vector3 vVar1;

	if (func_188(iVar0) == -1)
	{
		vVar1 = { 224.566f, 171.2736f, 96.9528f /*3*/ };
	}
	else
	{
		vVar1 = { func_189(func_133(), 1) /*3*/ };
	}
	switch (uParam0->f_970)
	{
		case 1:
			if (!uParam0->f_1008)
			{
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1.0f, 20000);
				func_190(func_176(uParam0, 7), func_179(uParam0, 7), 0, 1.0f, 20000);
				uParam0->f_1008 = 1;
			}
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 0), 1.75f, vVar1, 0);
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 7), 1.75f, vVar1, 0);
				return true;
			}
			break;
		case 9:
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 13), 1.25f, vVar1, 0);
				return true;
			}
			break;
		case 3:
			if (!uParam0->f_1008)
			{
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1.0f, 20000);
				uParam0->f_1008 = 1;
			}
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 0), 1.25f, vVar1, 0);
				return true;
			}
			break;
		case 7:
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 5), 1.25f, vVar1, 0);
				return true;
			}
			break;
		case 8:
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 7), 1.75f, vVar1, 0);
				return true;
			}
			break;
		case 10:
			if (func_191(uParam0))
			{
				TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(func_176(uParam0, 5), 1.0f, vVar1, 0);
				return true;
			}
			break;
		case 5:
		case 11:
			return true;
	}
	return false;
}

bool func_71(var uParam0, int iParam1)
{
	switch (uParam0->f_26)
	{
		case 0:
			func_192(uParam0, iParam1);
			func_193(uParam0, 1);
			break;
		case 1:
			func_193(uParam0, 2);
			break;
		case 2:
			if (func_194(uParam0))
			{
				func_193(uParam0, 4);
			}
			break;
		case 4:
			if (func_195(uParam0))
			{
				func_193(uParam0, 7);
			}
			break;
		case 5:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_25))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_25);
			}
			if (CAM::HAS_LETTER_BOX())
			{
				CAM::_FORCE_LETTER_BOX_THIS_UPDATE();
			}
			func_193(uParam0, 7);
			break;
		case 7:
			return true;
	}
	return false;
}

void func_72()
{
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_SCRIPTED_IN_GAME_CUTSCENE"));
}

void func_73(bool bParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = ((float)sLocal_45.f_1002 * 0.2f);
	iVar1 = (sLocal_45.f_1002 - BUILTIN::ROUND(fVar0));
	if (bParam0)
	{
		iVar2 = func_196(1);
		if (iVar2 >= iVar1)
		{
			func_197(iVar1, 0, 0, 1, 1);
		}
		else
		{
			func_197(iVar2, 0, 0, 1, 1);
		}
	}
}

void func_74()
{
	Global_40.f_11182.f_1 = func_198();
}

void func_75()
{
	if (func_199(543))
	{
		func_200(543);
	}
}

bool func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_106() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_77(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_201(iParam0, &iVar0, &iVar1);
	if (!func_202(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_203(iVar0, iVar1);
}

void func_78(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] -= (Global_40.f_11029[iParam0 /*5*/] & iParam1);
}

void func_79(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_80(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		func_205(&(uParam0->f_868[iVar0 /*20*/]));
		if (uParam0->f_868[iVar0 /*20*/].f_19)
		{
			func_206(&(uParam0->f_868[iVar0 /*20*/]));
		}
		iVar0++;
	}
}

void func_81(var uParam0)
{
	if (!uParam0->f_18)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, false);
		func_207(uParam0->f_2, 0);
	}
}

void func_82()
{
	MISC::_RESET_DISPATCH_MIN_SPAWN_DISTANCE();
	MISC::_RESET_DISPATCH_MAX_SPAWN_DISTANCE();
	MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
}

void func_83(int iParam0)
{
	func_93(&Global_1935630, 128);
	if (!func_119(iParam0))
	{
		return;
	}
	if (func_121(iParam0) || func_120(iParam0))
	{
		func_208(iParam0, 0, 2);
	}
}

void func_84()
{
	if (!func_209(Global_1327479))
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
	func_210(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_85(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_211(iParam0, iParam1, bParam2);
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

void func_86(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 76:
			func_212(32);
			func_213(32, 32);
			break;
		case 26:
			func_212(883);
			func_213(883, 32);
			func_212(884);
			func_213(884, 32);
			break;
	}
}

void func_87()
{
	func_214(iLocal_16);
	func_215(iLocal_16);
}

void func_88()
{
	func_214(iLocal_17);
}

void func_89(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
			if (!func_216(145))
			{
				func_217(145);
				func_218(146);
				func_219(-276.3671f, 802.3903f, 117.9588f, "val_jail_int_walla", 145, 0, 1, 0, 0);
			}
			break;
		case 6:
			if (!func_216(143))
			{
				func_217(143);
				func_218(144);
				func_219(1353.237f, -1302.472f, 77.547f, "rho_sheriff_int_JBO1_01", 143, 0, 1, 0, 0);
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(uParam0->f_974, uParam0->f_975, true);
			}
			break;
	}
}

void func_90(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_220(&Global_0, 8);
	}
	if (!func_221() || func_106() != -1)
	{
		return;
	}
	func_220(&Global_0, 1);
}

void func_91(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_106() != -1)
	{
		return;
	}
	if ((Global_36616 & func_222(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_223(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_224(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_225(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_224(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_92(var uParam0)
{
	Vector3 vVar0;
	Vector3 vVar4;
	int iVar8;

	vVar0 = { func_226(uParam0->f_60) /*4*/ };
	vVar4 = { func_227(uParam0->f_60) /*4*/ };
	iVar8 = 60000;
	switch (iLocal_1191)
	{
		case 0:
			func_228(Global_35, joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"), 0);
			func_168();
			uParam0->f_42 = MISC::GET_GAME_TIMER();
			func_229(&iLocal_1191, 1);
			break;
		case 1:
			if (func_230(uParam0) || (uParam0->f_42 + iVar8) < MISC::GET_GAME_TIMER())
			{
				func_229(&iLocal_1191, 3);
			}
			break;
		case 3:
			func_175(iLocal_43, vVar0, 2, (1 << 30));
			func_175(iLocal_44, vVar4, 2, (1 << 30));
			if (!func_125(uParam0->f_60))
			{
				func_231(iLocal_43, vVar0, 5.0f, 0);
				func_231(iLocal_44, vVar4, 5.0f, 0);
			}
			if (func_232(uParam0))
			{
				if (PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
				{
					func_229(&iLocal_1191, 4);
				}
			}
			break;
		case 4:
			if (func_233(uParam0))
			{
				if (func_234(uParam0))
				{
					if (func_235(iLocal_43, 0))
					{
						func_207(iLocal_43, 0);
					}
					if (func_235(iLocal_44, 0))
					{
						func_207(iLocal_44, 0);
					}
					return true;
				}
			}
			break;
	}
	return false;
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_94(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_95(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_96()
{
	return Global_1897952.f_41;
}

bool func_97(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_98()
{
	return Global_1899515;
}

int func_99()
{
	return Global_1934266.f_4;
}

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_101(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42196[iParam0 /*12*/];
}

bool func_102(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0 /*5*/] & iParam1) != 0;
}

void func_103(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] |= iParam1;
}

int func_104(int iParam0)
{
	if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1))
	{
		VEHICLE::_0xA230A5DDE12ED374(Global_1425371[iParam0 /*373*/].f_1);
		Global_1425371[iParam0 /*373*/].f_1 = 0;
	}
	return 1;
}

bool func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_236(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

int func_106()
{
	return Global_1572887.f_12;
}

void func_107()
{
}

void func_108(int iParam0)
{
	int iVar0;

	if (func_106() != -1)
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

void func_109()
{
	PLAYER::_ENABLE_CUSTOM_DEADEYE_ABILITY(PLAYER::PLAYER_ID(), true);
	if (func_131(47))
	{
		PLAYER::_ENABLE_EAGLEEYE(PLAYER::PLAYER_ID(), true);
	}
	else
	{
		PLAYER::_ENABLE_EAGLEEYE(PLAYER::PLAYER_ID(), false);
	}
}

bool func_110(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944.f_22[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_111(int iParam0)
{
	if (!func_110(iParam0))
	{
		return;
	}
	func_17(1);
}

bool func_112()
{
	return bLocal_26;
}

bool func_113(int iParam0)
{
	if (joaat("MASK_UP") == func_237(joaat("CI_CATEGORY_WARDROBE_MASK")))
	{
		if (func_238(iParam0))
		{
			return true;
		}
	}
	else if (func_239(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), iParam0))
	{
		if (func_238(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_114()
{
	int iVar0;

	if (!func_240())
	{
		return 0;
	}
	if (!func_238(&iVar0))
	{
		return 0;
	}
	if (!func_241(iVar0))
	{
		return 0;
	}
	return func_242(iVar0, 0);
}

bool func_115()
{
	if (!bLocal_26)
	{
		bLocal_26 = true;
		return true;
	}
	return false;
}

int func_116(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_243(iParam0, iParam1, bParam2, bParam3);
}

int func_117()
{
	return -683745558;
}

int func_118(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_244())
	{
		iVar2 = func_244();
	}
	iVar5 = func_245(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_246(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_246(iVar6) == 0)
			{
				return func_247(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_246(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_246(iVar6) == 0)
			{
				return func_247(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_247(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_119(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_120(int iParam0)
{
	int iVar0;

	iVar0 = func_248(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_121(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_249(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

void func_122(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (!func_250(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_251(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_251(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_252(iParam0), func_253(iParam0), func_254(iParam0), func_251(iParam0), Global_36);
		}
	}
	func_255(iParam0, 1);
	bParam1 = bParam1;
}

void func_123(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_119(iParam0))
	{
		return;
	}
	if (!func_121(iParam0))
	{
		return;
	}
	iVar0 = func_252(iParam0);
	if (bParam1)
	{
		if (func_251(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_251(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				func_256(func_253(iParam0));
			}
			if (func_106() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_251(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_251(iParam0), Global_265073.f_73815.f_208.f_12);
			}
		}
	}
	func_257(iParam0);
	if (!func_119(func_258(0)))
	{
		func_255(iParam0, 3);
		func_5(bParam2);
		if (func_106() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_15(1);
		}
		func_259(iParam0, -1);
		if (bParam1 && !func_260(2))
		{
			func_220(&Global_0, (1 << 10));
		}
		if (func_106() == -1)
		{
			func_261(&(Global_1347343.f_11), (1 << 29));
			func_262(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_263(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_264(0);
			}
		}
		if (func_106() == -1)
		{
			iVar1 = func_265(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_266();
				switch (iVar1)
				{
					case 0:
						func_267(0);
						break;
					case 1:
						func_267(1);
						break;
					case 2:
						func_267(2);
						break;
					case 3:
						func_267(3);
						break;
					case 4:
						func_267(4);
						break;
					case 5:
						func_267(5);
						break;
					case 6:
						func_267(5);
						break;
					case 7:
						func_267(7);
						break;
					case 8:
						func_267(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_253(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_267(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_253(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_267(11);
						break;
					default:
						iVar1 = func_266();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_268(0);
									break;
								case 1:
									func_268(1);
									break;
								case 2:
									func_268(2);
									break;
								case 3:
									func_268(3);
									break;
								case 4:
									func_268(4);
									break;
								case 5:
									func_268(5);
									break;
								case 6:
									func_268(5);
									break;
								case 7:
									func_268(7);
									break;
								case 8:
									func_268(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_269(1);
	}
	else
	{
		func_259(iParam0, -1);
		func_255(iParam0, 4);
	}
	func_270(iParam0, 0);
}

bool func_124(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_125(int iParam0)
{
	if (!func_124(iParam0))
	{
		return false;
	}
	return func_271(iParam0, (1 << 24));
}

int func_126(int iParam0)
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

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_128(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	*iParam1 = -1;
	if (!func_272())
	{
		return 0;
	}
	if (!func_273(iParam0, &iVar0, uParam2))
	{
		return 0;
	}
	if (func_274(iVar0))
	{
		return 0;
	}
	if (!func_275(iVar0))
	{
		return 0;
	}
	if (!func_276(iVar0))
	{
		return 0;
	}
	if (!func_277(&iVar0))
	{
		return 0;
	}
	*iParam1 = iVar0;
	return 1;
}

bool func_129(int iParam0)
{
	return iParam0 != -1;
}

bool func_130(int iParam0)
{
	if (!func_124(iParam0))
	{
		return false;
	}
	return func_271(iParam0, (1 << 25));
}

bool func_131(int iParam0)
{
	if (!func_278(iParam0))
	{
		return false;
	}
	return func_279(iParam0);
}

bool func_132(int iParam0, bool bParam1)
{
	switch (func_248(iParam0))
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

int func_133()
{
	return Global_40.f_4283.f_1;
}

int func_134(int iParam0, bool bParam1)
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
			if (!bParam1 || func_106() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (func_131(45))
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
			if (!bParam1 || func_106() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (func_131(45))
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
			if (!bParam1 || func_106() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_131(45))
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

int func_135(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = (1 << 9);
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_136(int iParam0)
{
	int iVar0;

	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_282(func_281(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_283(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_283(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_283(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_283(iParam0));
	return 1;
}

void func_137(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_16))
	{
		return;
	}
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
		case 3:
			iLocal_16 = VOLUME::CREATE_VOLUME_BOX(-268.8677f, 792.1881f, 118.7011f, 0.0f, 0.0f, 7.124719f, 35.4679f, 40.30593f, 9.127473f);
			break;
		case 4:
			iLocal_16 = VOLUME::CREATE_VOLUME_BOX(-1799.767f, -355.932f, 164.8285f, 0.0f, 0.0f, 0.0f, 29.4004f, 39.85352f, 15.19435f);
			break;
		case 6:
			iLocal_16 = VOLUME::CREATE_VOLUME_BOX(1354.038f, -1312.003f, 76.54549f, 0.0f, 0.0f, -20.45403f, 23.79081f, 16.56885f, 6.591243f);
			break;
	}
}

void func_138(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	func_284(iParam0, bParam1);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

void func_139(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(0);
	if (!func_100(iParam0))
	{
		return;
	}
	func_285(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_124(iVar0))
		{
			if (func_286(func_30(iVar0, 1, 1)) == iParam0)
			{
				func_287(iVar0, 0);
				func_184(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_97(iVar1))
		{
			if (func_127(iVar1) == iParam0)
			{
				func_288(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_140(int iParam0)
{
	if (!func_100(iParam0))
	{
		return;
	}
	func_141(iParam0, 0);
}

void func_141(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		return;
	}
	iVar0 = func_289();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	PLAYER::_SET_MAX_WANTED_LEVEL_2(iVar0);
	if (iParam0 == func_99())
	{
		LAW::SET_BOUNTY(PLAYER::PLAYER_ID(), iParam1);
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_358[iParam0 /*12*/] != iParam1)
		{
			func_290(iParam0, iParam1);
			func_291(iParam0);
		}
		Global_40.f_358[iParam0 /*12*/] = iParam1;
		if (!func_292(iParam0, 4))
		{
			if (Global_40.f_358[iParam0 /*12*/] >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
			{
				func_293(iParam0, 1);
			}
		}
		else if (Global_40.f_358[iParam0 /*12*/] == 0)
		{
			func_293(iParam0, 0);
		}
		return;
	}
	Global_1058888.f_42196[iParam0 /*12*/] = iParam1;
}

void func_142(var uParam0, int iParam1, char* sParam2, Vector3 vParam3, int iParam6, Vector3 vParam7, float fParam10, char* sParam11)
{
	if (uParam0->f_1000 < 4)
	{
		uParam0->f_868[uParam0->f_1000 /*20*/].f_1 = iParam1;
		uParam0->f_868[uParam0->f_1000 /*20*/].f_4 = { func_294(sParam2) /*4*/ };
		uParam0->f_868[uParam0->f_1000 /*20*/].f_12 = { vParam3 /*3*/ };
		uParam0->f_868[uParam0->f_1000 /*20*/].f_19 = iParam6;
		uParam0->f_868[uParam0->f_1000 /*20*/].f_15 = { vParam7 /*3*/ };
		uParam0->f_868[uParam0->f_1000 /*20*/].f_18 = fParam10;
		if (!MISC::IS_STRING_NULL(sParam11))
		{
			uParam0->f_868[uParam0->f_1000 /*20*/].f_8 = { func_294(sParam11) /*4*/ };
		}
		uParam0->f_1000++;
	}
}

void func_143(var uParam0, int iParam1, char* sParam2, Vector3 vParam3, int iParam6, Vector3 vParam7, float fParam10, char* sParam11)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	uParam0->f_950 = ENTITY::GET_ENTITY_MODEL(iParam1);
	uParam0->f_950.f_1 = iParam1;
	uParam0->f_950.f_3 = { func_294(sParam2) /*4*/ };
	uParam0->f_950.f_11 = { vParam3 /*3*/ };
	uParam0->f_950.f_18 = iParam6;
	uParam0->f_950.f_14 = { vParam7 /*3*/ };
	uParam0->f_950.f_17 = fParam10;
	if (!MISC::IS_STRING_NULL(sParam11))
	{
		uParam0->f_950.f_7 = { func_294(sParam11) /*4*/ };
	}
}

void func_144(var uParam0, int iParam1, char* sParam2, Vector3 vParam3, int iParam6)
{
	if (uParam0->f_998 < 4)
	{
		uParam0->f_782[uParam0->f_998 /*11*/] = iParam1;
		uParam0->f_782[uParam0->f_998 /*11*/].f_2 = { func_294(sParam2) /*4*/ };
		uParam0->f_782[uParam0->f_998 /*11*/].f_6 = { vParam3 /*3*/ };
		uParam0->f_782[uParam0->f_998 /*11*/].f_9 = iParam6;
		uParam0->f_998++;
	}
}

void func_145(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_17))
	{
		return;
	}
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
		case 3:
			iLocal_17 = func_295(76);
			break;
		case 4:
			iLocal_17 = func_295(26);
			break;
		case 6:
			iLocal_17 = func_295(105);
			break;
	}
}

void func_146(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (!func_280(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

bool func_147(int iParam0, int iParam1)
{
	return (Global_40.f_4942[iParam0 /*60*/].f_5 & iParam1) > 0;
}

void func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_296(iParam0);
				func_297(iParam0, 0);
				break;
		}
		func_298(iParam0, iParam1);
		if (func_299(iParam1, &iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			{
				if (func_300(Global_1360165[iParam0 /*1157*/], iVar0))
				{
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[iParam0 /*1157*/], iVar0);
				}
				PED::_EQUIP_META_PED_OUTFIT(Global_1360165[iParam0 /*1157*/], PED::_GET_PED_META_OUTFIT_HASH(Global_1360165[iParam0 /*1157*/]));
				PED::_UPDATE_PED_VARIATION(Global_1360165[iParam0 /*1157*/], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_296(iParam0);
				func_297(iParam0, 1);
				break;
		}
		func_301(iParam0, iParam1);
		func_302(iParam0, Global_1360165[iParam0 /*1157*/], 1);
	}
}

int func_149(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_150(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		return;
	}
	if (Global_43891)
	{
		return;
	}
	WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, iParam0);
}

bool func_151(var uParam0)
{
	uParam0->f_1004 = 0;
	if (!func_303(uParam0))
	{
		return false;
	}
	if (!func_304(uParam0))
	{
		return false;
	}
	if (!func_305(&(uParam0->f_950)))
	{
		return false;
	}
	if (!func_306(uParam0))
	{
		return false;
	}
	if (!func_307(uParam0))
	{
		return false;
	}
	if (!func_308(uParam0))
	{
		return false;
	}
	if (!func_309(uParam0))
	{
		return false;
	}
	return true;
}

void func_152(var uParam0)
{
	func_310(uParam0);
	func_311(uParam0);
	func_312(uParam0);
	func_313(uParam0);
	func_314(uParam0);
	func_315(uParam0);
	func_316(uParam0);
}

void func_153(var uParam0)
{
	char cVar0[64];

	cVar0 = { func_317(uParam0) /*8*/ };
	func_318(uParam0, &cVar0);
}

void func_154(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_973))
	{
		uParam0->f_4 = uParam0->f_973;
	}
}

void func_155(var uParam0)
{
	char* sVar0;

	sVar0 = func_319(uParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_318(uParam0, sVar0);
		func_320(uParam0, sVar0, 0);
	}
}

bool func_156(var uParam0)
{
	if (func_321(uParam0, &(uParam0->f_984), 1, 1))
	{
		return true;
	}
	return false;
}

void func_157(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 6:
			uParam0->f_975 = "rho_sheriff_int_explosion";
			uParam0->f_974 = INTERIOR::GET_INTERIOR_AT_COORDS(1353.237f, -1302.472f, 77.547f);
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > 0.33f)
			{
				if (func_216(143))
				{
					func_217(144);
					func_218(143);
					func_219(1353.237f, -1302.472f, 77.547f, "rho_sheriff_int_JBO1_02", 144, 0, 1, 0, 0);
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(uParam0->f_974, uParam0->f_975, 0);
				}
			}
			break;
		case 2:
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > 0.64f)
			{
				if (func_216(145))
				{
					func_217(146);
					func_218(145);
					func_219(-276.3671f, 802.3903f, 117.9588f, "val_jail_int_wallb", 146, 0, 1, 0, 0);
				}
			}
			break;
	}
}

bool func_158(var uParam0)
{
	switch (uParam0->f_971)
	{
		case 0:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
					uParam0->f_971 = 1;
				}
			}
			break;
		case 1:
			if (func_322(uParam0->f_970))
			{
				func_323(uParam0);
			}
			func_324(uParam0);
			POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
			if (!ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444))
			{
				if (func_325(uParam0))
				{
					func_326(uParam0->f_444);
					uParam0->f_971 = 3;
				}
			}
			else
			{
				uParam0->f_971 = 2;
			}
			break;
		case 2:
			CAM::DO_SCREEN_FADE_OUT(0);
			if (func_327(uParam0->f_970, uParam0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10.0f, 1.0f);
				func_328(1);
				uParam0->f_971 = 3;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_159(var uParam0)
{
	func_329(uParam0);
	func_330(uParam0);
	func_331(uParam0);
	if (!func_40(uParam0->f_970))
	{
		func_80(uParam0);
		func_81(&(uParam0->f_950));
	}
	func_332(uParam0);
	func_333(uParam0);
}

void func_160()
{
	int iVar0;
	bool bVar1;
	struct<12> /*96*/ sVar2;
	int iVar19;
	struct<11> /*88*/ sVar20;
	int iVar37;

	iVar0 = func_334();
	bVar1 = (!func_335(Global_1935630, (1 << 22)) || Global_1935630.f_17 > 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (bVar1)
		{
			Global_1935630.f_13 = (LAW::ARE_WITNESSES_ACTIVE(iVar0) || LAW::_ARE_INVESTIGATORS_ACTIVE(iVar0, false, 0));
			Global_1935630.f_15 = LAW::_0x148E7AC8141C9E64(iVar0);
			Global_1935630.f_14 = LAW::_0x9945A3E2528A02E8(iVar0);
			Global_1935630.f_16 = LAW::_0xF46108C50A22B029();
			Global_1935630.f_17 = LAW::GET_WANTED_SCORE(iVar0);
			Global_1935630.f_26 = LAW::_0x9D5C9A5A3321B128(iVar0);
			Global_1935630.f_21 = LAW::_0xDAEFDFDB2AEECE37(LAW::_GET_HUD_PLAYER_CRIME_TYPE(iVar0), 0);
			Global_1935630.f_18 = LAW::IS_LAW_INCIDENT_ACTIVE(iVar0);
			if (Global_1935630.f_18)
			{
				LAW::_0x9C5BD8C562565CE6(&sVar2);
				Global_1935630.f_19 = sVar2.f_10;
				Global_1935630.f_23 = sVar2.f_11 == 6;
			}
			Global_1935630.f_20 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (LAW::GET_PLAYER_REGISTERED_CRIME(iVar0, iVar19, &sVar20))
				{
					if (sVar20.f_10)
					{
						iVar37 = LAW::_0xDAEFDFDB2AEECE37(sVar20.f_0, 0);
						if (iVar37 > Global_1935630.f_20)
						{
							Global_1935630.f_20 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_336();
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		Global_1935630.f_41 = Global_1935630.f_40;
	}
	Global_1935630.f_22 = PLAYER::IS_PLAYER_BEING_ARRESTED(iVar0, true);
	Global_1935630.f_12 = ENTITY::IS_ENTITY_DEAD(Global_35);
	if (!Global_1935630.f_12)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(Global_1935630.f_44), false, 0, false);
		Global_1935630.f_40 = PED::GET_MOUNT(Global_35);
		if (Global_1572887.f_12 == -1 && (Global_1935630 & (1 << 18)) != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 174 /*PRF_0xE3667800*/, true);
		}
		if (Global_1572887.f_12 != -1)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154 /*PRF_0x8A63AAF1*/, true);
		}
		else if ((Global_1935630 & (1 << 16)) != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154 /*PRF_0x8A63AAF1*/, true);
		}
		if (Global_1572887.f_12 == -1)
		{
			if (!func_131(9))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 135 /*PRF_0x50E07A43*/, true);
			}
			if (!func_131(14))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 144 /*PRF_0xEA31EF02*/, true);
			}
			if (!func_131(36))
			{
				HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
			}
			if (CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
				HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			}
			else if ((CAM::IS_SCREEN_FADED_OUT() && func_337()) && !func_338(0, 0, 1))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25 /*PRF_CannotBeTargetedByAI*/, true);
			}
			if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SELECT_RADAR_MODE")))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ATTACK2"), false);
			}
			if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
			}
		}
	}
	else
	{
		if (func_106() == -1 && CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
		{
			HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		}
		Global_1935630.f_44 = 0;
		Global_1935630.f_40 = 0;
	}
}

void func_161(int iParam0, bool bParam1)
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

void func_162()
{
	if (func_106() != -1)
	{
		return;
	}
	func_109();
}

void func_163(Vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 /*3*/ };
}

void func_164(int iParam0)
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
}

void func_165(int iParam0)
{
	Global_1310720.f_9 = iParam0;
}

void func_166(int iParam0)
{
	Global_1310720.f_10 = iParam0;
}

int func_167(bool bParam0)
{
	if (!bParam0 && func_105(joaat("WS_GUARMA_EXISTS")))
	{
		LAW::_0xE9AC8466ABE484BB(false, 0);
		LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), true, 0);
		return 0;
	}
	LAW::_0xE9AC8466ABE484BB(bParam0, 0);
	return 1;
}

void func_168()
{
	if (!func_339())
	{
		if (func_112())
		{
			func_340(1);
			func_341();
			WEAPON::_SET_PED_ALL_WEAPONS_VISIBILITY(Global_35, true);
		}
	}
}

void func_169(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_170(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_973))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_973);
	}
}

void func_171(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_342(iParam0, 0, 0);
	if (func_343(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0.0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_344(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_345(iParam0, 1);
			}
			else
			{
				func_346(iParam0, 1);
			}
		}
		else
		{
			func_347(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_348())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

float func_172(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 2:
			return 200.0f;
		case 4:
			return 200.0f;
		case 6:
			return 200.0f;
	}
	return 200.0f;
}

struct<4> /*32*/ func_173(var uParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	switch (*uParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					sVar0 = { -272.4783f, 809.284f, 118.3711f /*3*/ };
					sVar0.f_3 = 103.992f;
					break;
				case 1:
					sVar0 = { -274.1379f, 808.532f, 118.3723f /*3*/ };
					sVar0.f_3 = 87.475f;
					break;
				case 2:
					sVar0 = { -309.8212f, 780.2781f, 117.7613f /*3*/ };
					sVar0.f_3 = 7.6015f;
					break;
				case 3:
					sVar0 = { -320.2737f, 799.5449f, 116.8817f /*3*/ };
					sVar0.f_3 = 279.7465f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = { -276.9078f, 809.5782f, 118.3781f /*3*/ };
					sVar0.f_3 = 287.1772f;
					break;
				case 1:
					sVar0 = { -309.8212f, 780.2781f, 117.7613f /*3*/ };
					sVar0.f_3 = 7.6015f;
					break;
				case 2:
					sVar0 = { -292.2865f, 747.412f, 117.2355f /*3*/ };
					sVar0.f_3 = 156.9073f;
					break;
				case 3:
					sVar0 = { -313.3065f, 726.3862f, 119.6276f /*3*/ };
					sVar0.f_3 = 34.53f;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					sVar0 = { -1812.424f, -352.8654f, 160.4154f /*3*/ };
					sVar0.f_3 = 56.8545f;
					break;
				case 1:
					sVar0 = { -1815.833f, -353.5223f, 160.4529f /*3*/ };
					sVar0.f_3 = 316.3524f;
					break;
				case 2:
					sVar0 = { -1805.574f, -426.7131f, 157.7882f /*3*/ };
					sVar0.f_3 = 347.183f;
					break;
				case 3:
					sVar0 = { -1775.714f, -438.922f, 153.9937f /*3*/ };
					sVar0.f_3 = 217.3517f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 1358.375f, -1303.417f, 76.7606f /*3*/ };
					sVar0.f_3 = 196.0932f;
					break;
				case 1:
					sVar0 = { 1330.127f, -1367.839f, 79.504f /*3*/ };
					sVar0.f_3 = 72.4056f;
					break;
				case 2:
					sVar0 = { 1362.746f, -1268.791f, 76.9478f /*3*/ };
					sVar0.f_3 = 162.3188f;
					break;
				case 3:
					sVar0 = { 1238.99f, -1309.599f, 75.9094f /*3*/ };
					sVar0.f_3 = 113.614f;
					break;
			}
			break;
		default:
			sVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
			sVar0.f_3 = 0.0f;
			break;
	}
	return sVar0;
}

bool func_174(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

void func_175(int iParam0, struct<4> /*32*/ sParam1, int iParam5, float fParam6)
{
	func_349(iParam0, sParam1, sParam1.f_3, iParam5, fParam6);
}

int func_176(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (uParam0->f_868[iVar0 /*20*/].f_1 == iParam1)
		{
			return uParam0->f_868[iVar0 /*20*/].f_2;
		}
		iVar0++;
	}
	return 0;
}

void func_177(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_350(uParam0, iParam1, sParam2))
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

void func_178(int iParam0)
{
	if (PED::DOES_GROUP_EXIST(iLocal_14) && ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		func_351(&iParam0, &iLocal_14, 0, 1, 1, 1, 0);
	}
}

int func_179(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (uParam0->f_868[iVar0 /*20*/].f_1 == iParam1)
		{
			return uParam0->f_868[iVar0 /*20*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_180(var uParam0)
{
	Vector3 vVar0[24];

	switch (uParam0->f_970)
	{
		case 1:
			strcpy_s(&cVar0, 24, "JBO3_COMEON");
			break;
		case 2:
			strcpy_s(&cVar0, 24, "JBO7_COMEON");
			break;
		case 4:
			strcpy_s(&cVar0, 24, "JBO5_COMEON");
			break;
		case 6:
			strcpy_s(&cVar0, 24, "JBO1_COMEON");
			break;
		default:
			strcpy_s(&cVar0, 24, "");
			break;
	}
	return cVar0;
}

char* func_181(var uParam0, var uParam1, var uParam2)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_182(var uParam0, Vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_352(vParam1, uParam0);
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

void func_183()
{
	POPULATION::_0xF45E46DEECF7DF6E(6144, 0, 0, -1, -1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.0f);
	PED::_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
}

void func_184(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_124(iParam0))
	{
		return;
	}
	if (func_125(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_5))
	{
		iVar0 = Global_1888801[iParam0 /*35*/].f_5;
	}
	else
	{
		iVar0 = func_295(iParam0);
	}
	bVar1 = func_271(iParam0, (1 << 25));
	if (bParam1)
	{
		iVar2 = func_353(iParam0);
		if (iParam2 > iVar2 || !func_355(func_354(iParam0)))
		{
			func_356(iParam0, func_98());
			func_357(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_358(iParam0, (1 << 25));
			if (VOLUME::DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_359(iParam0, (1 << 25));
		func_356(iParam0, -15);
		if (VOLUME::DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_360(iParam0);
}

bool func_185(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 4:
			if (func_361(Global_35, func_176(uParam0, 1)) < 10.0f && func_361(Global_35, func_176(uParam0, 7)) < 10.0f)
			{
				return true;
			}
			break;
		case 2:
			if (func_361(Global_35, func_176(uParam0, 0)) < 10.0f && func_361(Global_35, func_176(uParam0, 7)) < 10.0f)
			{
				return true;
			}
			break;
		case 6:
			if (func_361(Global_35, func_176(uParam0, 0)) < 10.0f)
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_186(var uParam0)
{
	Vector3 vVar0[24];

	switch (uParam0->f_970)
	{
		case 1:
			strcpy_s(&cVar0, 24, "JBO3_LOSTTHEM");
			break;
		case 2:
			strcpy_s(&cVar0, 24, "JBO7_LOSTTHEM");
			break;
		case 4:
			strcpy_s(&cVar0, 24, "JBO5_LOSTTHEM");
			break;
		case 6:
			strcpy_s(&cVar0, 24, "JBO1_LOSTTHEM");
			break;
		default:
			strcpy_s(&cVar0, 24, "");
			break;
	}
	return cVar0;
}

Vector3 func_187(var uParam0)
{
	Vector3 vVar0[24];

	switch (uParam0->f_970)
	{
		case 7:
			strcpy_s(&cVar0, 24, "JBO4_HBANT");
			break;
		case 10:
			strcpy_s(&cVar0, 24, "JBO8_HBANT");
			break;
		case 6:
			strcpy_s(&cVar0, 24, "JBO1_BANT");
			break;
		case 1:
			strcpy_s(&cVar0, 24, "JBO3_BANT");
			break;
		case 2:
			strcpy_s(&cVar0, 24, "JBO7_BANT");
			break;
		case 4:
			strcpy_s(&cVar0, 24, "JBO5_SPLIT");
			break;
		default:
			strcpy_s(&cVar0, 24, "");
			break;
	}
	return cVar0;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

Vector3 func_189(int iParam0, bool bParam1)
{
	Vector3 vVar0;
	var uVar3;

	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (!func_124(iParam0))
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

int func_190(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
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

bool func_191(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_868[iVar0 /*20*/].f_2))
		{
			if (!PED::IS_PED_FULLY_ON_MOUNT(uParam0->f_868[iVar0 /*20*/].f_2, true))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_192(var uParam0, int iParam1)
{
	func_362(uParam0, iParam1);
	uParam0->f_26 = 0;
	return 0;
}

void func_193(var uParam0, int iParam1)
{
	uParam0->f_26 = iParam1;
}

bool func_194(var uParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_25, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_25, true) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_25, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_25);
			}
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_25, true, false))
			{
				CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_25, "ARTHUR", Global_35, 0);
				CAM::DO_SCREEN_FADE_IN(240);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_25);
				return true;
			}
		}
	}
	return false;
}

bool func_195(var uParam0)
{
	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_25) > 0.85f)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			return true;
		}
	}
	return false;
}

int func_196(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_197(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_363(iParam0);
	if (bParam3)
	{
		func_364(iParam0, sParam1, iParam2);
	}
}

var func_198()
{
	return Global_1899515;
}

bool func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_201(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_200(int iParam0)
{
	int iVar0;
	int iVar1;

	func_201(iParam0, &iVar0, &iVar1);
	func_365(iVar0, iVar1);
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_202(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_366(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_367(iParam0))
	{
		return false;
	}
	if (func_368(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_369(iParam0, 1)) || func_260((1 << 15)))
	{
		if (!func_369(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_370())
	{
		return false;
	}
	return true;
}

void func_203(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_204(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

void func_205(var uParam0)
{
	if (func_371(uParam0->f_1))
	{
		func_372(uParam0->f_1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
}

void func_206(var uParam0)
{
	if (func_373(uParam0->f_1))
	{
		func_374(uParam0->f_3, uParam0->f_1, 1, 0, 0);
	}
}

void func_207(int iParam0, bool bParam1)
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
	if (!func_375(iParam0))
	{
		return;
	}
	iVar0 = func_376(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_377(iVar0);
	func_378(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_379(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_380(iVar0))
		{
			return;
		}
	}
	func_381(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_106() == -1)
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_208(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_119(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_120(iParam0) && !func_121(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_251(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_120(iParam0))
	{
		iParam2 = -1;
	}
	if (func_249(iParam0) == 3 || (func_249(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_251(iParam0))))
	{
		func_382(func_252(iParam0), func_251(iParam0), iParam2);
		if ((!func_119(Global_1572864.f_8) && !func_338(0, 1, 0)) && !func_335(Global_1935630, (1 << 15)))
		{
			iVar0 = func_265(iParam0);
			if (iVar0 != -1)
			{
				func_383(0);
			}
			else if (func_252(iParam0) == 8)
			{
				iVar0 = func_266();
				if (iVar0 != -1)
				{
					func_383(0);
				}
			}
		}
	}
	func_255(iParam0, 0);
	if (func_258(0) == iParam0)
	{
		func_5(1);
		func_15(0);
		func_269(1);
	}
	func_270(iParam0, 1);
	func_384(iParam0);
}

bool func_209(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_210(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

void func_211(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_385(iParam0, iParam1, bParam2);
}

int func_212(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_282(func_281(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_283(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_283(iParam0));
	return 1;
}

void func_213(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (!func_280(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= (Global_24887[iParam0 /*2*/] & iParam1);
}

void func_214(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam0);
	POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam0);
}

void func_215(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_1934765.f_30[iVar1], iVar2);
}

void func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

void func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

void func_219(Vector3 vParam0, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	bool bVar0;

	bVar0 = func_386(iParam4);
	if (!INTERIOR::IS_VALID_INTERIOR(iParam8))
	{
		if (iParam5 != 0)
		{
			iParam8 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(vParam0, iParam5);
		}
		else
		{
			iParam8 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
		}
	}
	if (INTERIOR::IS_VALID_INTERIOR(iParam8))
	{
		if (func_216(iParam4) != bVar0 || INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam8, sParam3) != bVar0)
		{
			if (func_387(iParam8, iParam6, bParam7))
			{
				if (bVar0)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iParam8, sParam3, 0);
					func_388(iParam4);
					if (bParam7)
					{
						INTERIOR::_0x2533F2AB0EB9C6F9(iParam8, 1);
						INTERIOR::_0xFE2B3D5500B1B2E4(iParam8, 1);
					}
				}
				else
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iParam8, sParam3, true);
					func_389(iParam4);
					if (bParam7)
					{
						INTERIOR::_0x2533F2AB0EB9C6F9(iParam8, 0);
						INTERIOR::_0xFE2B3D5500B1B2E4(iParam8, 0);
					}
				}
			}
		}
	}
}

void func_220(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_221()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_222(int iParam0)
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

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_224(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> /*16*/ sVar8;

	iVar0 = func_390();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_391(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 -= DECORATOR::DECOR_GET_INT(iParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1.0f;
	if (func_131(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_392())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL(((float)iParam0 * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(((float)iParam0 * fVar4));
	}
	Global_40.f_11095.f_35 += iVar5;
	Global_40.f_11095.f_35 = func_393(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_390();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_394(iVar1);
		func_396(func_395(), 0, 4000);
		func_397(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_398(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_400(func_399(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_223(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_401(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_402(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_402(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_400(func_399(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_223(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_401(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_402(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_402(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_399(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_403(10, 1);
	}
}

void func_225(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

struct<4> /*32*/ func_226(int iParam0)
{
	struct<4> /*32*/ sVar0;
	bool bVar4;

	sVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	sVar0.f_3 = 0.0f;
	if (!func_124(iParam0))
	{
		return sVar0;
	}
	if (func_125(iParam0))
	{
		bVar4 = true;
	}
	switch (iParam0)
	{
		case 78:
			if (!bVar4)
			{
				sVar0 = { 2918.7f, 1321.6f, 44.3f /*3*/ };
				sVar0.f_3 = 69.27f;
			}
			else
			{
				sVar0 = { 2821.36f, 1121.52f, 48.54f /*3*/ };
				sVar0.f_3 = 79.23f;
			}
			func_404(&sVar0, 50, 10, 0);
			return sVar0;
		case 105:
			if (!bVar4)
			{
				sVar0 = { 1344.9f, -1307.3f, 76.6f /*3*/ };
				sVar0.f_3 = 343.68f;
			}
			else
			{
				sVar0 = { 1155.33f, -1155.41f, 71.29f /*3*/ };
				sVar0.f_3 = 156.78f;
			}
			func_404(&sVar0, 50, 10, 0);
			return sVar0;
		case 26:
			if (!bVar4)
			{
				sVar0 = { -1805.89f, -344.45f, 164.65f /*3*/ };
				sVar0.f_3 = 99.0f;
			}
			else
			{
				sVar0 = { -1706.68f, -450.12f, 150.0f /*3*/ };
				sVar0.f_3 = 295.67f;
			}
			func_404(&sVar0, 50, 10, 0);
			return sVar0;
		case 38:
			if (!bVar4)
			{
				sVar0 = { -751.16f, -1267.38f, 43.32f /*3*/ };
				sVar0.f_3 = 115.96f;
			}
			else
			{
				sVar0 = { -1065.66f, -1211.78f, 63.78f /*3*/ };
				sVar0.f_3 = 178.78f;
			}
			func_404(&sVar0, 50, 10, 0);
			return sVar0;
		case 76:
			if (!bVar4)
			{
				sVar0 = { -279.45f, 789.98f, 118.63f /*3*/ };
				sVar0.f_3 = 165.4f;
			}
			else
			{
				sVar0 = { -108.0f, 586.45f, 114.08f /*3*/ };
				sVar0.f_3 = 164.78f;
			}
			func_404(&sVar0, 50, 10, 0);
			return sVar0;
		case 5:
			if (!bVar4)
			{
				sVar0 = { 2525.45f, -1310.37f, 49.07f /*3*/ };
				sVar0.f_3 = 266.56f;
			}
			else
			{
				sVar0 = { 2147.36f, -1336.09f, 42.96f /*3*/ };
				sVar0.f_3 = 352.0f;
			}
			func_404(&sVar0, 50, 10, 0);
			return sVar0;
		case 115:
			sVar0 = { -5525.004f, -2923.18f, -2.0688f /*3*/ };
			sVar0.f_3 = 114.01f;
			func_404(&sVar0, 50, 10, 0);
			return sVar0;
	}
	return sVar0;
}

struct<4> /*32*/ func_227(int iParam0)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	sVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	sVar0.f_3 = 0.0f;
	if (!func_124(iParam0))
	{
		return sVar0;
	}
	iVar4 = func_405();
	func_406(iVar4, &sVar0, &(sVar0.f_3));
	return sVar0;
}

void func_228(int iParam0, int iParam1, bool bParam2)
{
	func_407(iParam0, iParam1, bParam2, 1);
}

void func_229(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_230(var uParam0)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar4;
	int iVar8;
	int iVar9;

	sVar0 = { func_226(uParam0->f_60) /*4*/ };
	sVar4 = { func_227(uParam0->f_60) /*4*/ };
	iVar8 = 0;
	iVar9 = 0;
	if (func_408(0))
	{
		sLocal_1194.f_10 = 0;
		sLocal_1194.f_0 = 1;
		sLocal_1194.f_5 = 1;
		sLocal_1194.f_1 = 1;
		sLocal_1194.f_6 = { sVar0 /*3*/ };
		sLocal_1194.f_9 = sVar0.f_3;
		iLocal_43 = func_409(&iLocal_1193, &sLocal_1194);
		if (iLocal_1193 == 2)
		{
			iVar8 = 1;
		}
	}
	else
	{
		iVar8 = 1;
	}
	if (func_408(1))
	{
		sLocal_1206.f_10 = 1;
		sLocal_1206.f_0 = 1;
		sLocal_1206.f_1 = 1;
		sLocal_1206.f_5 = 1;
		sLocal_1206.f_6 = { sVar4 /*3*/ };
		sLocal_1206.f_9 = sVar4.f_3;
		iLocal_44 = func_409(&iLocal_1205, &sLocal_1206);
		if (iLocal_1205 == 2)
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = 1;
	}
	if (iVar8 & iVar9)
	{
		return true;
	}
	return false;
}

int func_231(int iParam0, Vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

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
	func_12(vParam1, fParam4, 0);
	TASK::CLEAR_PED_TASKS(iParam0, true, false);
	iVar0 = joaat("PROP_HITCHINGPOST");
	iVar1 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vParam1, iVar0, fParam4, 1, false);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		TASK::TASK_USE_SCENARIO_POINT(iParam0, iVar1, 0, -1, true, bParam5, iVar0, false, -1.0f, false);
	}
	else
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
	return 1;
}

bool func_232(var uParam0)
{
	Vector3 vVar0;

	switch (iLocal_1190)
	{
		case 0:
			switch (uParam0->f_60)
			{
				case 76:
					vVar0 = { -275.5043f, 805.0f, 118.3801f /*3*/ };
					break;
				case 78:
					vVar0 = { 2910.3f, 1310.8f, 44.4f /*3*/ };
					break;
				case 105:
					vVar0 = { 1359.6f, -1304.5f, 77.3f /*3*/ };
					break;
				case 38:
					vVar0 = { -758.5f, -1269.2f, 43.8f /*3*/ };
					break;
				case 5:
					vVar0 = { 2514.3f, -1308.8f, 48.7f /*3*/ };
					break;
				case 26:
					vVar0 = { -1808.2f, -350.1f, 164.4f /*3*/ };
					break;
				case 115:
					vVar0 = { -5528.724f, -2929.566f, -1.3609f /*3*/ };
					break;
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vVar0, uParam0->f_33, false, true, false, false);
			}
			else
			{
				uParam0->f_41 = MISC::GET_GAME_TIMER();
				func_410(&iLocal_1190, 1);
			}
			break;
		case 1:
			if (!PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::PLAYER_ID()))
			{
				if (uParam0->f_41 + 6000 < MISC::GET_GAME_TIMER())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
			}
			else
			{
				uParam0->f_41 = MISC::GET_GAME_TIMER();
				func_410(&iLocal_1190, 2);
			}
			break;
		case 2:
			func_411(1, 0);
			func_412();
			switch (func_413(func_62()))
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 8:
					if (!func_414(func_62()) && uParam0->f_41 + 6000 > MISC::GET_GAME_TIMER())
					{
					}
					else
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(uParam0->f_27, 0.0f, 0.0f, 0.0f);
						func_410(&iLocal_1190, 3);
					}
					break;
			}
			break;
		case 3:
			if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				STREAMING::LOAD_SCENE_START(uParam0->f_27, BUILTIN::COS((uParam0->f_33 + 90.0f)), BUILTIN::SIN((uParam0->f_33 + 90.0f)), 0.0f, 500.0f, 4);
				uParam0->f_41 = MISC::GET_GAME_TIMER();
			}
			else if (!STREAMING::IS_LOAD_SCENE_LOADED())
			{
				if (uParam0->f_41 + 6000 < MISC::GET_GAME_TIMER())
				{
					func_410(&iLocal_1190, 4);
				}
			}
			else
			{
				func_410(&iLocal_1190, 4);
			}
			break;
		case 4:
			if (STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				STREAMING::CLEAR_FOCUS();
				STREAMING::LOAD_SCENE_STOP();
			}
			return true;
	}
	return false;
}

bool func_233(var uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;

	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::DO_SCREEN_FADE_IN(240);
		return true;
	}
	else
	{
		switch (uParam0->f_60)
		{
			case 76:
				vVar0 = { -260.7436f, 793.9495f, 121.5746f /*3*/ };
				vVar3 = { -2.9074f, 0.0f, 80.7498f /*3*/ };
				fVar6 = 37.7527f;
				break;
			case 105:
				vVar0 = { 1365.147f, -1320.555f, 79.1558f /*3*/ };
				vVar3 = { -3.2928f, 0.0f, 44.6132f /*3*/ };
				fVar6 = 37.7527f;
				break;
			case 78:
				vVar0 = { 2911.884f, 1297.416f, 46.0857f /*3*/ };
				vVar3 = { -0.2822f, 0.0f, -12.0966f /*3*/ };
				fVar6 = 37.7527f;
				break;
			case 38:
				vVar0 = { -745.5821f, -1255.027f, 46.204f /*3*/ };
				vVar3 = { -3.8931f, 0.0f, 158.8413f /*3*/ };
				fVar6 = 37.7527f;
				break;
			case 26:
				vVar0 = { -1794.439f, -342.4006f, 166.2039f /*3*/ };
				vVar3 = { -2.2206f, 0.0f, 146.2695f /*3*/ };
				fVar6 = 37.7527f;
				break;
			case 5:
				vVar0 = { 2526.214f, -1321.603f, 51.8709f /*3*/ };
				vVar3 = { -1.1109f, 0.0f, 21.3832f /*3*/ };
				fVar6 = 37.7527f;
				break;
			case 115:
				vVar0 = { -5530.495f, -2941.743f, 0.393f /*3*/ };
				vVar3 = { -6.1555f, 0.0f, -32.786f /*3*/ };
				fVar6 = 51.282f;
				break;
		}
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, vVar3, fVar6, true, 2);
	}
	return false;
}

bool func_234(var uParam0)
{
	Vector3 vVar0;

	if (!func_415(&(uParam0->f_52)))
	{
		func_416(&(uParam0->f_52), 0);
	}
	switch (uParam0->f_60)
	{
		case 76:
			vVar0 = { -274.6761f, 797.9018f, 118.9569f /*3*/ };
			break;
		case 105:
			vVar0 = { 1357.729f, -1311.525f, 76.9169f /*3*/ };
			break;
		case 78:
			vVar0 = { 2914.548f, 1309.378f, 44.3854f /*3*/ };
			break;
		case 38:
			vVar0 = { -752.4509f, -1269.742f, 43.3936f /*3*/ };
			break;
		case 26:
			vVar0 = { -1803.195f, -352.7251f, 164.1432f /*3*/ };
			break;
		case 5:
			vVar0 = { 2519.256f, -1308.59f, 48.9806f /*3*/ };
			break;
		case 115:
			vVar0 = { -5526.707f, -2933.721f, -1.9662f /*3*/ };
			break;
	}
	if (!uParam0->f_57)
	{
		if (TASK::IS_PED_STILL(Global_35))
		{
			uParam0->f_57 = 1;
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vVar0, 1.0f, 20000, 0.25f, 0, 40000.0f);
		}
	}
	if (func_417(Global_36, vVar0, 1.0f, 0) || func_418(&(uParam0->f_52)) >= 10.0f)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		func_419(uParam0);
		return true;
	}
	return false;
}

bool func_235(int iParam0, int iParam1)
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
	if (func_420(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_420(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_420(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_420(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_420(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_420(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_420(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_420(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_236(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MICAH_HIDEOUT_ABANDON"):
			return 292;
		case joaat("WS_RIDE_THE_LIGHTNING_CHAIR"):
			return 104;
		case joaat("WS_FAST_TRAVEL_MARKERS"):
			return 195;
		case joaat("WS_RHODES_SADIE3_COVER_ON"):
			return 59;
		case joaat("WS_SHOWS_SD_MOV_01"):
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case joaat("WS_CLAY_EXIST"):
			return 197;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
			return 49;
		case joaat("WS_HIDEOUT_SIX_POINT_LIGHTS"):
			return 92;
		case joaat("WS_GRAND_KORRIGAN_LOW_RAILING"):
			return 265;
		case joaat("WS_NBX_BUILDING_FUNDED"):
			return 112;
		case joaat("WS_RHODES_BANK_WALL_INTACT"):
			return 278;
		case joaat("WS_WAR_VETERAN_WOLF_TROPHY_ON"):
			return 208;
		case joaat("WS_BOOBY_TRAP_ROANOKE_01_END"):
			return 165;
		case joaat("WS_DEWCLM_DOMINOES_SEATS"):
			return 276;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case joaat("WS_SHOWS_SD_VAUD_02"):
			return 10;
		case joaat("WS_SAINT_DENIS_BOATS_FOUND"):
			return 376;
		case joaat("WS_SWA_CHAIRS_CINEMATIC"):
			return 289;
		case joaat("WS_SHOWS_SD_MOV_02"):
			return 26;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			return 57;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			return 56;
		case joaat("WS_VALENTINE_BANK_WINDOWS"):
			return 123;
		case joaat("WS_ANTENOR_DOCKED"):
			return 266;
		case joaat("WS_GRZ_WEST_CAMP_SITE"):
			return 277;
		case joaat("WS_FIN1_DISABLE_VANHORN_FIRE"):
			return 253;
		case joaat("WS_VALENTINE_BANK_SHUTTERS_CLOSED"):
			return 257;
		case joaat("WS_FEUD1_WATER_TOWER_UP"):
			return 372;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_DOORS"):
			return 141;
		case joaat("WS_RHODES_BANK_LIGHTS_OFF"):
			return 64;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			return 3;
		case joaat("WS_SHOWS_SD_MAG_04"):
			return 23;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			return 61;
		case joaat("WS_SHOWS_SD_VAUD_05"):
			return 13;
		case joaat("WS_INDUSTRY3_POKER_TABLES"):
			return 233;
		case joaat("WS_MP_PROPERTY_LOCATIONS"):
			return 53;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			return 55;
		case joaat("WS_GUARMA_RUIN1_FLOOR_INTACT"):
			return 33;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case joaat("WS_BLACKWATER_LOCKDOWN_SALOON"):
			return 146;
		case joaat("WS_BLACKWATER_LOCKDOWN_SALOON_DOORS"):
			return 147;
		case joaat("WS_THOMAS_DOWNES"):
			return 301;
		case -1556423728:
			return 218;
		case joaat("WS_BEAVER_HOLLOW_HIDEOUT"):
			return 116;
		case joaat("WS_CRD_CHIMNEY_OFF"):
			return 311;
		case joaat("WS_STRAWBERRY_JAIL_INTACT"):
			return 209;
		case joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON_DOORS"):
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case joaat("WS_MP_LAKAY"):
			return 215;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_02"):
			return 172;
		case joaat("WS_SHOWS_SD_VAUD_04"):
			return 12;
		case joaat("WS_ROCKY_SEVEN_ENDLESS"):
			return 32;
		case joaat("WS_SHOWS_SD_MAG_03"):
			return 22;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			return 73;
		case joaat("WS_RIDE_THE_LIGHTNING_WAGON"):
			return 105;
		case joaat("WS_MP_HIDEOUT_HANGING_DOG"):
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON"):
			return 140;
		case -1318987693:
			return 222;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case joaat("WS_ON_THE_RUN_SHACK_HELPED_CONVICT"):
			return 270;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_01"):
			return 171;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			return 98;
		case joaat("WS_SHOWS_SD_MAG_02"):
			return 21;
		case joaat("WS_GRAVE_SUSAN"):
			return 300;
		case joaat("WS_VALENTINE_JAIL_INTACT"):
			return 235;
		case joaat("WS_STD_GALA_BALCONY_HIGH_MEM"):
			return 113;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_03"):
			return 170;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			return 126;
		case joaat("WS_VALENTINE_LOCKDOWN_BANK"):
			return 131;
		case joaat("WS_MP_HIDEOUT_TWIN_ROCKS"):
			return 333;
		case joaat("WS_VAN_HORN_LOCKDOWN_SALOON"):
			return 156;
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
			return 45;
		case joaat("WS_VALENTINE_LOCKDOWN_JAIL"):
			return 136;
		case joaat("WS_COLTER_STAGE_FIRES_LIT"):
			return 46;
		case joaat("WS_RHODES_JAIL_INTACT"):
			return 234;
		case joaat("WS_VALENTINE_SALOON_WINDOWS"):
			return 124;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			return 100;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			return 242;
		case joaat("WB_DISCO_ALCHEMIST_HOUSE"):
			return 29;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			return 378;
		case joaat("WS_GUARMA3_ARTILLERY_01_DESTROYED"):
			return 194;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_DOORS"):
			return 151;
		case joaat("WS_ORCHIDS_APPLESEED"):
			return 79;
		case joaat("WS_CHELONIAN_CAMP"):
			return 239;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
			return 176;
		case joaat("WS_RHODES_GRAYS3_COVER_ON"):
			return 58;
		case joaat("WS_RIDE_THE_LIGHTNING_BARRELS"):
			return 106;
		case joaat("WS_SWA_CHAIRS_REGULAR"):
			return 288;
		case joaat("WS_THIEVES_LANDING_BOAT"):
			return 251;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			return 36;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS"):
			return 152;
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
			return 44;
		case -939114198:
			return 221;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case joaat("WS_LAK_BUNKHOUSE_SHOOT_THROUGH"):
			return 236;
		case joaat("WS_HIDEOUT_SHADY_BELLE_INACTIVE"):
			return 84;
		case joaat("WS_HIDEOUT_HANGING_DOG_INACTIVE"):
			return 83;
		case joaat("WS_RHODES_SHERIFF_LOCKED"):
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case joaat("WS_BACCHUS_BRIDGE_DESTROYED"):
			return 260;
		case joaat("WS_STRAWBERRY_TOURISTS_ENDLESS_SUMMER"):
			return 245;
		case joaat("WS_HIDEOUT_TWIN_ROCKS_INACTIVE"):
			return 88;
		case joaat("WS_SHADY_BELLE_DOMINO_SEATS"):
			return 254;
		case joaat("WS_GRAND_KORRIGAN_HIDE_ON_WATER"):
			return 262;
		case joaat("WS_SAINTDENIS_BOAT"):
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case joaat("WS_NEW_COM_BANK_VAULT_RF"):
			return 228;
		case joaat("WS_TAXIDERMY_NOTICES"):
			return 78;
		case joaat("WS_RHODES_SALOON_POST_BRAITHWAITES"):
			return 60;
		case joaat("WS_SEAN_1_TENT"):
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case joaat("WS_BRAITHWAITES_3_ACTIVE"):
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case joaat("WS_RARE_FISH_CABIN_END"):
			return 80;
		case joaat("WS_VAN_HORN_LOCKDOWN_SALOON_DOORS"):
			return 157;
		case joaat("WS_RHODES_ENDLESS_SUMMER"):
			return 67;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			return 191;
		case joaat("WS_RHODES_FENCE_OPEN"):
			return 261;
		case joaat("WS_MP_EVENT_AREAS"):
			return 214;
		case joaat("WS_BEECHERS_HOUSE_ABIGAIL3"):
			return 185;
		case joaat("WS_VALENTINE_GENSTORE_LIGHTS_OFF"):
			return 71;
		case joaat("WS_NATIVE1_ARMY_CAMP"):
			return 370;
		case joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"):
			return 187;
		case joaat("WS_BGV_SHACK_LADDER_DOWN"):
			return 377;
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
			return 175;
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			return 174;
		case joaat("WS_VALENTINE_SALOON_BED_BLOODY"):
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			return 117;
		case joaat("WS_POST_CARAVAN_SHADY"):
			return 364;
		case joaat("WS_VALENTINE_SHOOTOUT"):
			return 238;
		case joaat("WS_FLAG_BRONTE_ADD_SP_DRESSING"):
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			return 8;
		case joaat("WS_BEECHERS_HOUSE_DECORATED"):
			return 186;
		case joaat("WS_NBX_MAUSOLEUM_PLUNDERED"):
			return 111;
		case joaat("WS_LONE_MULE_CELLAR_DOORS_OPEN"):
			return 268;
		case joaat("WS_MP_HIDEOUT_MILLESANI_CLAIM"):
			return 316;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			return 225;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			return 205;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_SLUMS_DOORS"):
			return 143;
		case joaat("WS_WAPITI_TENT_OPEN"):
			return 272;
		case joaat("WS_MOB3_TROLLEY_DAMAGE"):
			return 368;
		case joaat("WS_SERIAL_KILLER_CABIN_OPEN"):
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case joaat("WS_BOOBY_TRAP_GUAMA_01"):
			return 162;
		case joaat("WS_POST_CARAVAN_HORSESHOE"):
			return 362;
		case joaat("WS_WATSON_GRAVE"):
			return 69;
		case joaat("WS_SISIKA_WINDOW_COVER"):
			return 361;
		case joaat("WS_MP_SDS_WELL_COVER"):
			return 360;
		case joaat("WS_VANHORN_BOATS_FOUND"):
			return 375;
		case joaat("WS_MP_STRAWBERRY_DR_MILO"):
			return 213;
		case joaat("WS_NEW_MRK_04_HIDEFORIND3"):
			return 267;
		case joaat("WS_DISCO_DEAD_SNAKE"):
			return 30;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			return 244;
		case joaat("WS_VALENTINE_LOCKDOWN_DOCTOR"):
			return 132;
		case joaat("WS_VALENTINE_WAGON"):
			return 121;
		case joaat("WS_CLM_DOMINOES_LANTERN"):
			return 273;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			return 204;
		case joaat("WS_VALENTINE_LOCKDOWN_RESTAURANT"):
			return 139;
		case joaat("WS_RHODES_LOCKDOWN_SALOON_DOORS"):
			return 149;
		case joaat("WS_PRONGHORN_RANCH_BURNED"):
			return 177;
		case joaat("WS_RID_CHIMNEY_OFF"):
			return 309;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			return 97;
		case -144653976:
			return 219;
		case joaat("WS_SHOWS_SD_VAUD_03"):
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case joaat("WS_DISCO_LOVE_MESSAGE_HEARTLAND"):
			return 28;
		case joaat("WS_BOOBY_TRAP_ROANOKE_02_END"):
			return 167;
		case joaat("WS_ARMADILLO_LOCKDOWN_SALOON_DOORS"):
			return 145;
		case joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON"):
			return 154;
		case joaat("WS_TRAINROB1_SHOOTOUT"):
			return 373;
		case joaat("WS_VALENTINE_GENSTORE_ACTIVE"):
			return 258;
		case joaat("WS_HIDEOUT_HANGING_DOG_ENDLESS"):
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case joaat("WS_SHOWS_SD_MAG_05"):
			return 24;
		case joaat("WS_FIN2_EXT_P19_FRAMES"):
			return 290;
		case joaat("WS_VALENTINE_HOTEL_CURTAINS_MUD3"):
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS_DOORS"):
			return 153;
		case joaat("WS_GRAVE_HOSEA"):
			return 297;
		case joaat("WS_FLAG_BRONTE_ADD_MP_DRESSING"):
			return 248;
		case joaat("WS_VALENTINE_SHOOTOUT_START"):
			return 237;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			return 74;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			return 243;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case joaat("WS_MICAH_HIDEOUT"):
			return 291;
		case joaat("WS_UTP1_COVER01"):
			return 101;
		case joaat("WS_STD_DOCTORS_OFFICE"):
			return 114;
		case joaat("WS_HIDEOUT_SMUGGLER_DOCKS_INACTIVE"):
			return 86;
		case joaat("WS_BEECHERS_HOUSE_FINISHED"):
			return 183;
		case 171107021:
			return 381;
		case joaat("WS_ROANOKE_BOOBY_TRAP_HOLES"):
			return 283;
		case joaat("WS_SHOWS_VAL_MAG_03"):
			return 16;
		case joaat("WS_SHOWS_VAL_MAG_01"):
			return 14;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			return 241;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			return 62;
		case joaat("WS_VALENTINE_LOCKDOWN_SALOON_SLUMS"):
			return 142;
		case joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"):
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case joaat("WS_CRN1_BURNT_BARN"):
			return 286;
		case joaat("WS_BOOBY_TRAP_ROANOKE_01"):
			return 164;
		case joaat("WS_CARMODY_DELL_ABANDONED"):
			return 54;
		case joaat("WS_HIDEOUT_BEAVER_HOLLOW_INACTIVE"):
			return 81;
		case joaat("WS_MICAH_CAMP"):
			return 95;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			return 119;
		case joaat("WS_SHB_DOMINOES_LANTERN"):
			return 275;
		case joaat("WS_VALENTINE_LOCKDOWN_RENT"):
			return 138;
		case joaat("WS_MP_BLACKWATER"):
			return 216;
		case joaat("WS_SADIE_BEDROLL"):
			return 198;
		case joaat("WS_VALENTINE_LOCKDOWN_GENERAL_STORE"):
			return 133;
		case joaat("WS_RHODES_GUNSMITH_FIRE_OFF"):
			return 66;
		case joaat("WS_FIN1_BURNT_LADDER"):
			return 287;
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
			return 47;
		case joaat("WS_FUSSAR2_LIGHTING"):
			return 281;
		case joaat("WS_GUARMA_EXISTS"):
			return 188;
		case joaat("WS_HIDEOUT_BEAVER_HOLLOW_ENDLESS"):
			return 90;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			return 34;
		case joaat("WS_SAVAGE_AFTERMATH_WEEPING_03"):
			return 173;
		case joaat("WS_GRAVE_EAGLE_FLIES"):
			return 293;
		case joaat("WS_SHOWS_VAL_MAG_04"):
			return 17;
		case joaat("WS_HSO_TABLE_SEATS"):
			return 303;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			return 42;
		case joaat("WS_SHOWS_VAL_MAG_02"):
			return 15;
		case joaat("WS_TANNERSREACH_BURNT"):
			return 199;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			return 108;
		case joaat("WS_DROUGHT_ENDED"):
			return 31;
		case joaat("WS_HSO_DOMINOES_SEATS"):
			return 302;
		case joaat("WS_NEW_COM_BANK_POST"):
			return 227;
		case joaat("WS_COLTER_STAGE_MP"):
			return 52;
		case joaat("WS_RE_MUC_ROCK_SCENE"):
			return 231;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			return 2;
		case joaat("WS_RE_MUC_KNIFE_SCENE"):
			return 232;
		case joaat("WS_RHODES_LOCKDOWN_SALOON"):
			return 148;
		case joaat("WS_COOTS_GRAVE_2_DUG"):
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case joaat("WS_STRAWBERRY_IGNORE_NEM_HOUSE"):
			return 246;
		case joaat("WS_SAINT_DENIS_DOCK_TRAINS"):
			return 279;
		case joaat("WS_MP_FETCH_OTH_MAC"):
			return 355;
		case joaat("WS_BLACKWATER_BURIAL"):
			return 159;
		case joaat("WS_STD_GAMBLING_DEN"):
			return 115;
		case joaat("WS_SAINTDENIS_MAGIC_LANTERN_ES"):
			return 252;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case joaat("WS_BEECHERS_SHACK_WITH_FIRE"):
			return 179;
		case joaat("WS_TAXIDERMY_MARITAL"):
			return 77;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			return 128;
		case joaat("WS_GRAVE_KIERAN"):
			return 294;
		case 657241756:
			return 189;
		case joaat("WS_NO_OIL_DELIVERY_WAGONS"):
			return 312;
		case joaat("WS_GRAVE_LENNY"):
			return 296;
		case 682839815:
			return 327;
		case joaat("WS_VALENTINE_LOCKDOWN_GUNSMITH"):
			return 134;
		case joaat("WS_WAR_VETERAN_FISH_TROPHY_ON"):
			return 207;
		case joaat("WS_BEECHERS_SHACK"):
			return 178;
		case joaat("WS_GRAND_KORRIGAN_DOCKED_INTERIOR"):
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
			return 48;
		case joaat("WS_FOR_MY_ART_NOBARPROPS"):
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case joaat("WS_SHOWS_VAL_MAG_05"):
			return 18;
		case joaat("WS_ANNES_SETTLERS_CLOSED_OFF"):
			return 240;
		case joaat("WS_RE_SP_SAVAGEWARNING_02"):
			return 285;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case joaat("WS_MP_HIDEOUT_MANTECA_FALLS"):
			return 335;
		case joaat("WS_NEW_COM_BANK_START"):
			return 224;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			return 298;
		case joaat("WS_BRONTE_MANSION_CLOSE_SHUTTERS"):
			return 247;
		case joaat("WS_SHOWS_VAL_MAG_CLOSED"):
			return 19;
		case joaat("WS_PAI_CHIMNEY_OFF"):
			return 310;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			return 7;
		case joaat("WS_VALENTINE_MAGIC_LANTERN_DOOR"):
			return 122;
		case joaat("WS_RE_SP_SAVAGEWARNING_01"):
			return 284;
		case joaat("WS_NBX_ART_RC_MASON_PASSED"):
			return 110;
		case 1067254646:
			return 319;
		case joaat("WS_ARMADILLO_LOCKDOWN_SALOON"):
			return 144;
		case joaat("WS_SHOWS_SD_MOV_05"):
			return 27;
		case joaat("WS_VALENTINE_RES_CURTAINS_CLOSED"):
			return 256;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case joaat("WS_VALENTINE_LOCKDOWN_HOTEL"):
			return 135;
		case joaat("WS_RHODES_BURIAL"):
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case joaat("WS_MFR_CHIMNEY_OFF"):
			return 307;
		case joaat("WS_CINCO_TORRES_DOOR_INTACT"):
			return 38;
		case joaat("WS_RE_MUC_TREE_SCENE"):
			return 230;
		case joaat("WS_BEECHERS_BARN_FINISHED"):
			return 184;
		case joaat("WS_HSO_DOMINOES_LANTERN"):
			return 274;
		case joaat("WS_HIDEOUT_SIX_POINT_INACTIVE"):
			return 85;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_02"):
			return 169;
		case joaat("WS_HORSESHOE_BARREL"):
			return 160;
		case 1216784232:
			return 269;
		case joaat("WS_PHONOGRAPH_BOAT_FOUND"):
			return 374;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case joaat("WS_VALENTINE_BUTCHER_ACTIVE"):
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case joaat("WS_SHOWS_SD_MAG_01"):
			return 20;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			return 75;
		case joaat("WS_ON_THE_RUN_SHACK_REWARD_FOUND"):
			return 271;
		case joaat("WS_GRAND_KORRIGAN_SHOW_DOCKED"):
			return 263;
		case joaat("WS_HIDEOUT_FORT_MERCER_INACTIVE"):
			return 82;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			return 223;
		case joaat("WS_STRAWBERRY_JAIL_IGNORE"):
			return 210;
		case joaat("WS_HUNTING_2_ABANDONED_CAMP"):
			return 217;
		case joaat("WS_BOOBY_TRAP_ROANOKE_02"):
			return 166;
		case joaat("WS_TRELAWNY_1_HOUSE_TRASHED"):
			return 211;
		case 1446719356:
			return 380;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			return 125;
		case joaat("WS_SHADY_BELLE_EXTRA_BLOCKER"):
			return 120;
		case joaat("WS_SEAN_1_CAMP"):
			return 367;
		case joaat("WS_COLTER_STAGE_SCHOOL_INTERIOR"):
			return 50;
		case joaat("WS_NATIVE_SON2_TREE_FALLEN"):
			return 102;
		case joaat("WS_GRAVE_SEAN"):
			return 295;
		case joaat("WS_MP_VALENTINE_AMBIENT"):
			return 212;
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			return 5;
		case joaat("WS_VALENTINE_AUCTION_GATES_OPEN"):
			return 72;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			return 35;
		case joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_01"):
			return 168;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			return 206;
		case joaat("WS_SAINT_DENIS_DOCK_BOATS"):
			return 280;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case joaat("WS_BOOBY_TRAP_GUAMA_01_END"):
			return 163;
		case joaat("WS_NEW_GAR_BRON_MPCOVER_01"):
			return 359;
		case joaat("WS_COOTS_GRAVE_1_DUG"):
			return 304;
		case joaat("WS_POST_CARAVAN_BEAVERHOLLOW"):
			return 365;
		case joaat("WS_SHOWS_SD_VAUD_01"):
			return 9;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			return 107;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			return 118;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			return 127;
		case joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"):
			return 181;
		case joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON"):
			return 150;
		case joaat("WS_HIDEOUT_HANGING_DOG_MARSTON4"):
			return 93;
		case 1672143046:
			return 383;
		case joaat("WS_RHODES_TRELAWNY_WAGON_ABANDONED"):
			return 68;
		case joaat("WS_MP_HIDEOUT_MOSSY_FLATS"):
			return 318;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case joaat("WS_VALENTINE_LOCKDOWN_LAW_OFFICE"):
			return 137;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			return 226;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			return 94;
		case joaat("WS_POST_CARAVAN_CLEMENS"):
			return 363;
		case 1804403874:
			return 382;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			return 200;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			return 99;
		case joaat("WS_PRONGHORN_GEDDES_UNAVAILABLE"):
			return 196;
		case joaat("WS_VALENTINE_POKER_LESS_CHAIRS"):
			return 70;
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			return 51;
		case joaat("WS_MICAH_CAMP_POST"):
			return 96;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 328;
		case joaat("WS_CLEMENS_POINT_BARREL"):
			return 161;
		case joaat("WS_NBD1_ABANDONED_BUILDING_INTERIOR"):
			return 229;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			return 203;
		case joaat("WS_POISONED_WELL_BLOCKED_ENTRY"):
			return 371;
		case joaat("WS_HIDEOUT_SIX_POINT_TABLE"):
			return 91;
		case joaat("WS_BEECHERS_CAMP_WITH_SHACK"):
			return 180;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			return 6;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			return 190;
		case joaat("WS_GUARMA3_GUARDS_DISABLED"):
			return 193;
		case joaat("WS_NATIVE1_COH_DESTROYED"):
			return 369;
		case joaat("WS_MAC_CHIMNEY_OFF"):
			return 308;
		case joaat("WS_RHODES_SALOON2_GRAVE"):
			return 63;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			return 299;
		case joaat("WS_COOTS_GRAVE_FILLED_IN"):
			return 306;
		case joaat("WS_FUSSAR2_NOCLIMB"):
			return 282;
		case joaat("WS_CRASHED_BOAT"):
			return 39;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			return 192;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 341;
		case joaat("WS_SHADY_BELLE_SHUTTERS_CLOSED"):
			return 255;
		case joaat("WS_HIDEOUT_THIEVES_LANDING_INACTIVE"):
			return 87;
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

int func_237(int iParam0)
{
	int iVar0;

	iVar0 = func_422(func_421(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_238(int iParam0)
{
	if (func_239(joaat("CI_CATEGORY_WARDROBE_MASK"), iParam0))
	{
		return true;
	}
	if (func_239(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), iParam0))
	{
		return true;
	}
	return false;
}

bool func_239(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_422(func_421(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_423(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_240()
{
	return Global_1946054.f_2792;
}

bool func_241(int iParam0)
{
	if (func_424())
	{
		return false;
	}
	if (!func_425(iParam0, 0))
	{
		return false;
	}
	if (!func_426(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_242(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_427(iParam0);
	if (func_428(iParam0, joaat("CI_TAG_ITEM_MASK")))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_113(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_429();
			}
			else
			{
				iVar0 = func_430();
			}
		}
		else if (func_420(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_431();
		}
		else
		{
			iVar0 = func_432();
		}
	}
	else if (func_238(&iVar2))
	{
		if (func_428(iVar2, joaat("CI_TAG_ITEM_MASK")))
		{
			iVar0 = func_429();
		}
		else
		{
			iVar0 = func_430();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_431();
	}
	else
	{
		iVar0 = func_432();
	}
	if (iVar0 != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1.0f);
		return 1;
	}
	return 0;
}

int func_243(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (Global_1946054.f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!func_433(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_434(iParam0);
	return func_435(iParam1, iVar0, bParam2, 1);
}

int func_244()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_245(int iParam0, int iParam1, int iParam2)
{
	return (iParam2 & 31) | BUILTIN::SHIFT_LEFT((iParam0 & 1023), 5) | BUILTIN::SHIFT_LEFT((iParam1 & 16383), 15);
}

int func_246(int iParam0)
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

int func_247(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_436(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_244())
	{
		return -1;
	}
	iVar0 = func_245(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_437(iVar1, 0);
	func_438(iVar1, 0);
	func_439(iVar1, 0);
	func_440(iVar1, 0);
	func_441(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_442(iVar1, iParam4);
	}
	return iVar1;
}

int func_248(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_249(iParam0);
}

int func_249(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_443(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_250(int iParam0)
{
	return func_248(iParam0) == 0;
}

int func_251(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_252(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	return func_444(func_246(iParam0));
}

int func_253(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_445(func_246(iParam0));
}

int func_254(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_446(func_246(iParam0));
}

void func_255(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	func_437(iParam0, iParam1);
}

void func_256(int iParam0)
{
	var uVar0;
	int iVar1;
	Vector3 vVar2;
	struct<8> /*64*/ sVar5;
	struct<8> /*64*/ sVar13;
	int iVar21;

	if (!func_95(iParam0))
	{
		return;
	}
	uVar0 = Global_1835011[iParam0 /*74*/].f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { Global_1835011[iParam0 /*74*/].f_18 /*3*/ };
	MemCopy(&sVar5, {Global_1835011[iParam0 /*74*/].f_8}, 8);
	sVar13 = { sVar5 /*8*/ };
	strcat_s(&sVar13, 64, "_DESC");
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, Global_1835011[iParam0 /*74*/].f_26, MISC::GET_HASH_KEY(&sVar13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, Global_1835011[iParam0 /*74*/].f_26, joaat("TOAST_LOG_BLIPS"));
}

void func_257(int iParam0)
{
	if (!func_119(iParam0))
	{
		return;
	}
	func_438(iParam0, func_447(iParam0) + 1);
}

int func_258(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_259(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_448(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164.f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164.f_162;
	func_449(iParam0, iVar0);
	Global_1898164.f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
	{
		return iVar0;
	}
	func_450(iVar0, iParam1);
	return iParam1;
}

bool func_260(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

void func_261(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_262(int iParam0)
{
	Global_1572864.f_3 -= (Global_1572864.f_3 & iParam0);
}

void func_263(bool bParam0)
{
	func_451(bParam0);
	func_452(bParam0);
	func_453(bParam0);
	func_454(bParam0);
	func_455(bParam0);
	func_456(bParam0);
	func_457(bParam0);
	func_458(bParam0);
}

void func_264(bool bParam0)
{
	if (func_106() != -1)
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
		func_77(89, 1);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_77(90, 1);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	func_459(1, bParam0, 1);
	func_460();
	Global_40.f_11095.f_43 = bParam0;
}

int func_265(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_252(iParam0))
	{
		case 1:
			iVar0 = func_253(iParam0);
			return func_461(iVar0);
		case 8:
			iVar1 = func_253(iParam0);
			if (func_462(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_463(iVar1);
			}
			break;
	}
	return -1;
}

int func_266()
{
	if (!func_132(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_132(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_132(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_132(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_132(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_132(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_132(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_267(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_106() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_464(Global_1898077.f_7, Global_1898077.f_3);
}

void func_268(int iParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_106() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_465(Global_1898077.f_7, Global_1898077.f_4);
}

void func_269(int iParam0)
{
	Global_1898164 |= iParam0;
}

void func_270(int iParam0, bool bParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (func_258(0) != iParam0)
	{
		return;
	}
	if (func_466(iParam0))
	{
		if (bParam1)
		{
			func_467(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
		else
		{
			func_468(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
	}
}

bool func_271(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

bool func_272()
{
	if (!MISC::IS_BIT_SET(Global_40.f_11182, 0))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 0);
		return false;
	}
	return true;
}

bool func_273(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	*iParam1 = -1;
	iVar0 = 3000;
	iVar1 = 5000;
	if (!func_124(iParam0))
	{
		return false;
	}
	if (!func_469(iParam0))
	{
		return false;
	}
	if (uParam2->f_1002 < iVar0)
	{
	}
	switch (iParam0)
	{
		case 76:
			if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 3))
			{
				*iParam1 = 3;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 1))
			{
				*iParam1 = 1;
				return true;
			}
			else if (uParam2->f_1002 >= iVar1 && !MISC::IS_BIT_SET(Global_40.f_11182, 2))
			{
				*iParam1 = 2;
				return true;
			}
			break;
		case 26:
			if (uParam2->f_1002 >= iVar0 && ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("PLAYER_ZERO"))
			{
				*iParam1 = 4;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0)
			{
				*iParam1 = 5;
				return true;
			}
			break;
		case 105:
			if (uParam2->f_1002 >= iVar1)
			{
				*iParam1 = 6;
				return true;
			}
			break;
		case 78:
			if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 7))
			{
				*iParam1 = 7;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 8))
			{
				*iParam1 = 8;
				return true;
			}
			break;
		case 38:
			if (uParam2->f_1002 >= iVar0)
			{
				*iParam1 = 9;
				return true;
			}
			break;
		case 5:
			if (uParam2->f_1002 >= iVar0 && ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("PLAYER_ZERO"))
			{
				*iParam1 = 10;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0)
			{
				*iParam1 = 11;
				return true;
			}
			break;
	}
	return false;
}

bool func_274(int iParam0)
{
	if (!func_129(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_11182, iParam0);
}

bool func_275(int iParam0)
{
	if (!func_129(iParam0))
	{
		return false;
	}
	if (!func_470())
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_471(7) && func_471(0))
			{
				return true;
			}
			break;
		case 3:
			if (func_471(0))
			{
				return true;
			}
			break;
		case 4:
			if (func_471(7) && func_471(1))
			{
				return true;
			}
			break;
		case 5:
			return true;
		case 6:
			if (func_471(0))
			{
				return true;
			}
			break;
		case 7:
			if (func_471(5))
			{
				return true;
			}
			break;
		case 8:
			if (func_471(7))
			{
				return true;
			}
			break;
		case 9:
			if (func_471(13))
			{
				return true;
			}
			break;
		case 10:
			if (func_471(5))
			{
				return true;
			}
			break;
		case 11:
			return true;
	}
	return false;
}

bool func_276(int iParam0)
{
	int iVar0;

	if (!func_129(iParam0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(Global_35);
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return func_472(iVar0);
		case 4:
			return func_472(iVar0);
		case 5:
			return !func_472(iVar0);
		case 6:
			return func_472(iVar0);
		case 7:
		case 8:
			return func_472(iVar0);
		case 9:
			return !func_472(iVar0);
		case 10:
			return func_472(iVar0);
		case 11:
			return !func_472(iVar0);
	}
	return false;
}

bool func_277(int iParam0)
{
	if (!MISC::IS_BIT_SET(Global_40.f_11182, 12) && !MISC::IS_BIT_SET(Global_40.f_11182, *iParam0))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 12);
		return true;
	}
	if (MISC::IS_BIT_SET(Global_40.f_11182, *iParam0) && !MISC::IS_BIT_SET(Global_40.f_11182, 12))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 12);
		return false;
	}
	if ((MISC::IS_BIT_SET(Global_40.f_11182, *iParam0) && MISC::IS_BIT_SET(Global_40.f_11182, 12)) && !MISC::IS_BIT_SET(Global_40.f_11182, 13))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 13);
		return false;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_11182, 13) && MISC::IS_BIT_SET(Global_40.f_11182, 12))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 13);
		return false;
	}
	if (MISC::IS_BIT_SET(Global_40.f_11182, 12) && MISC::IS_BIT_SET(Global_40.f_11182, 13))
	{
		MISC::CLEAR_BIT(&(Global_40.f_11182), 13);
		MISC::CLEAR_BIT(&(Global_40.f_11182), 12);
		return false;
	}
	return true;
}

bool func_278(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_280(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_281(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_282(int iParam0)
{
	return iParam0 != 0;
}

int func_283(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_284(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam1)
	{
		iVar0 |= (1 << 19);
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

void func_285(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		return;
	}
	if (func_292(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_473(iParam0, 1);
	}
	else
	{
		func_474(iParam0, 1);
	}
	func_475(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_127(iVar0) == iParam0)
		{
			func_288(iVar0, 0);
		}
		iVar0++;
	}
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

void func_287(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_124(iParam0))
	{
		return;
	}
	bVar0 = func_271(iParam0, (1 << 26));
	if (bParam1)
	{
		if (((!bVar0 && func_413(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_476(iParam0, func_98());
			func_358(iParam0, (1 << 26));
		}
	}
	else if (bVar0)
	{
		func_359(iParam0, (1 << 26));
		func_476(iParam0, -15);
	}
	func_477(iParam0);
}

void func_288(int iParam0, bool bParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_478(iParam0, 1);
	}
	else
	{
		if (func_479(iParam0))
		{
			return;
		}
		func_480(iParam0, 1);
	}
	func_481(iParam0, bParam1);
}

int func_289()
{
	int iVar0;

	if (func_106() == 0)
	{
		return -1;
	}
	iVar0 = func_266();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !func_51(24))
	{
		return 50000;
	}
	return 150000;
}

void func_290(int iParam0, int iParam1)
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

void func_291(int iParam0)
{
	int iVar0;

	iVar0 = func_482(iParam0);
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

bool func_292(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 & iParam1) != 0;
	}
	return (Global_1058888.f_42196[iParam0 /*12*/].f_5 & iParam1) != 0;
}

void func_293(int iParam0, bool bParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_473(iParam0, 4);
	}
	else
	{
		func_474(iParam0, 4);
	}
	func_483(iParam0, bParam1);
}

struct<4> /*32*/ func_294(char* sParam0)
{
	char cVar0[32];

	strcpy_s(&cVar0, 32, sParam0);
	return cVar0;
}

int func_295(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

void func_296(int iParam0)
{
	func_298(iParam0, 1);
	func_298(iParam0, 128);
	func_298(iParam0, 256);
	func_298(iParam0, (1 << 9));
	func_298(iParam0, (1 << 10));
	func_298(iParam0, (1 << 11));
	func_298(iParam0, (1 << 12));
	func_298(iParam0, (1 << 16));
	func_298(iParam0, (1 << 14));
	func_298(iParam0, (1 << 18));
	func_298(iParam0, (1 << 19));
	func_298(iParam0, (1 << 20));
	func_298(iParam0, (1 << 21));
	func_298(iParam0, (1 << 15));
	func_298(iParam0, (1 << 17));
	func_298(iParam0, (1 << 27));
	func_298(iParam0, (1 << 30));
}

void func_297(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_298(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 -= (Global_40.f_4942[iParam0 /*60*/].f_5 & iParam1);
}

bool func_299(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 860729266;
			return true;
		case 128:
			*iParam1 = 1606325429;
			return true;
		case 256:
			*iParam1 = 1743550585;
			return true;
		case 512:
			*iParam1 = 1064646155;
			return true;
		case 1024:
			*iParam1 = -536694793;
			return true;
		case 2048:
			*iParam1 = -1304053509;
			return true;
		case 4096:
			*iParam1 = 879715242;
			return true;
		case 65536:
			*iParam1 = -972364774;
			return true;
		case 16384:
			*iParam1 = -1100875244;
			return true;
		case 262144:
			*iParam1 = 1153596794;
			return true;
		case 524288:
			*iParam1 = 1016389820;
			return true;
		case 1048576:
			*iParam1 = -726966617;
			return true;
		case 2097152:
			*iParam1 = 1365901568;
			return true;
		case 32768:
			*iParam1 = -1658942149;
			return true;
		case 131072:
			*iParam1 = -1980913856;
			return true;
		case 134217728:
			*iParam1 = -1683207356;
			return true;
		case 1073741824:
			*iParam1 = -1712783565;
			return true;
	}
	return false;
}

bool func_300(int iParam0, int iParam1)
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

void func_301(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 |= iParam1;
}

void func_302(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, joaat("WEARABLE_MASKS")))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, joaat("WEARABLE_MASKS"), 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 494009478))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 1) > 0 && func_300(iParam1, 860729266))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 12)) > 0 && func_300(iParam1, 879715242))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 128) > 0 && func_300(iParam1, 1606325429))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 256) > 0 && func_300(iParam1, 1743550585))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 9)) > 0 && func_300(iParam1, 1064646155))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 10)) > 0 && func_300(iParam1, -536694793))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 11)) > 0 && func_300(iParam1, -1304053509))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 31)) > 0 && func_300(iParam1, 718939204))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 16)) > 0 && func_300(iParam1, -972364774))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 14)) > 0 && func_300(iParam1, -1100875244))
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, -134124598))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, -134124598, 1);
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 2071466316))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, 2071466316, 1);
		}
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 18)) > 0 && func_300(iParam1, 1153596794))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 19)) > 0 && func_300(iParam1, 1016389820))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 20)) > 0 && func_300(iParam1, -726966617))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 21)) > 0 && func_300(iParam1, 1365901568))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 15)) > 0 && func_300(iParam1, -1658942149))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 17)) > 0 && func_300(iParam1, -1980913856))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 22)) > 0 && func_300(iParam1, 491764525))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 23)) > 0 && func_300(iParam1, -76015264))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 24)) > 0 && func_300(iParam1, 622113465))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 25)) > 0 && func_300(iParam1, 781533162))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 26)) > 0 && func_300(iParam1, -271415321))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 27)) > 0 && func_300(iParam1, -1683207356))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 28)) > 0 && func_300(iParam1, -254794762))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 29)) > 0 && func_300(iParam1, 609066278))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 30)) > 0 && func_300(iParam1, -1712783565))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 13)) > 0 && func_300(iParam1, 1544915253))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

bool func_303(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (!func_484(&(uParam0->f_868[iVar0 /*20*/])))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_304(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (uParam0->f_868[iVar0 /*20*/].f_19)
		{
			if (!func_485(&(uParam0->f_868[iVar0 /*20*/])))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_305(var uParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;

	if (!uParam0->f_18)
	{
		return true;
	}
	if (func_235(uParam0->f_2, 0))
	{
		return true;
	}
	else
	{
		sVar1.f_10 = 7;
		sVar1.f_1 = 1;
		sVar1.f_0 = 1;
		sVar1.f_5 = 1;
		sVar1.f_6 = { uParam0->f_14 /*3*/ };
		uParam0->f_2 = func_409(&iVar0, &sVar1);
		if (iVar0 == 1)
		{
			return true;
		}
		func_349(uParam0->f_2, uParam0->f_14, uParam0->f_17, 2, (1 << 30));
		TASK::TASK_STAND_STILL(uParam0->f_2, -1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, true);
	}
	return false;
}

bool func_306(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		if (!func_486(&(uParam0->f_827[iVar0 /*10*/])))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_307(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if (!func_487(&(uParam0->f_782[iVar0 /*11*/]), &(uParam0->f_1004), uParam0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_308(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (!func_488(&(uParam0->f_530[iVar0 /*10*/]), &(uParam0->f_1004), uParam0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_309(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		if (!func_489(&(uParam0->f_731[iVar0 /*10*/]), &(uParam0->f_1004)))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_310(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		func_490(uParam0, uParam0->f_868[iVar0 /*20*/].f_2, &(uParam0->f_868[iVar0 /*20*/].f_4), 0, 0, 0);
		if (uParam0->f_868[iVar0 /*20*/].f_19 && !MISC::IS_STRING_NULL_OR_EMPTY(func_491(uParam0->f_868[iVar0 /*20*/].f_8)))
		{
			func_490(uParam0, uParam0->f_868[iVar0 /*20*/].f_3, &(uParam0->f_868[iVar0 /*20*/].f_8), 0, 0, 0);
		}
		iVar0++;
	}
}

void func_311(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		func_490(uParam0, uParam0->f_827[iVar0 /*10*/].f_2, &(uParam0->f_827[iVar0 /*10*/].f_3), 0, 0, 0);
		iVar0++;
	}
}

void func_312(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		func_490(uParam0, uParam0->f_782[iVar0 /*11*/].f_1, &(uParam0->f_782[iVar0 /*11*/].f_2), 0, 0, 0);
		iVar0++;
	}
}

void func_313(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		func_492(uParam0, uParam0->f_530[iVar0 /*10*/].f_1, &(uParam0->f_530[iVar0 /*10*/].f_2), 0, 0, 0);
		iVar0++;
	}
}

void func_314(var uParam0)
{
	func_490(uParam0, uParam0->f_950.f_1, &(uParam0->f_950.f_3), 0, 0, 0);
}

void func_315(var uParam0)
{
	if (uParam0->f_950.f_18 && !MISC::IS_STRING_NULL_OR_EMPTY(func_491(uParam0->f_950.f_7)))
	{
		func_490(uParam0, uParam0->f_950.f_2, &(uParam0->f_950.f_7), 0, 0, 0);
	}
}

void func_316(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		func_492(uParam0, uParam0->f_731[iVar0 /*10*/].f_1, &(uParam0->f_731[iVar0 /*10*/].f_2), 0, 0, 0);
		iVar0++;
	}
}

struct<8> /*64*/ func_317(var uParam0)
{
	struct<8> /*64*/ sVar0;

	sVar0 = { func_493(uParam0) /*8*/ };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
	{
		sVar0 = { func_494() /*8*/ };
	}
	return sVar0;
}

void func_318(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	strcpy_s(&(uParam0->f_446), 64, sParam1);
}

char* func_319(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 10:
			return "PL1_Hosea_Left";
	}
	return "";
}

void func_320(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_495(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])))
		{
			if (!func_496(uParam0, sParam1) || func_497(uParam0, (1 << 23)))
			{
				strcpy_s(&(uParam0->f_462[iVar0 /*9*/]), 64, sParam1);
				if (!bParam2)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, sParam1))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1);
						}
					}
					else
					{
						func_498(uParam0, (1 << 22));
					}
				}
				else
				{
					func_498(uParam0, (1 << 22));
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

bool func_321(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	Vector3 vVar0;
	float fVar3;
	struct<8> /*64*/ sVar4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> /*64*/ sVar15;

	if (bParam3)
	{
		uParam0->f_511++;
		if (uParam0->f_511 < 10)
		{
			return (func_497(uParam0, 256) && !func_497(uParam0, (1 << 22)));
		}
		uParam0->f_511 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_499(uParam0, sParam1);
	if (!func_497(uParam0, 64))
	{
		if (!func_174(func_500(uParam0)))
		{
			func_498(uParam0, 64);
		}
		else
		{
			vVar0 = { func_501(uParam0) /*3*/ };
			if (!func_174(vVar0))
			{
				func_502(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_503(Global_35, func_500(uParam0), 1);
	if (func_497(uParam0, 128) || func_497(uParam0, 256))
	{
		if ((fVar3 >= func_504(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_505();
				uParam0->f_529 = 0;
			}
			func_506(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
			}
			func_507(uParam0);
			func_508(uParam0, 128, 1);
			func_508(uParam0, 256, 1);
			func_508(uParam0, (1 << 12), 1);
			func_508(uParam0, (1 << 15), 1);
			func_508(uParam0, (1 << 24), 1);
		}
	}
	else if (fVar3 <= func_509(uParam0) || bParam2)
	{
		if (!func_497(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				if (func_509(uParam0) >= func_504(uParam0))
				{
				}
				sVar4 = { func_510(uParam0) /*8*/ };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&sVar4))
				{
					func_511(uParam0);
				}
				sVar4 = { func_510(uParam0) /*8*/ };
				iVar12 = 256;
				if (!func_497(uParam0, 1))
				{
					iVar12 |= (1 << 11);
				}
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), iVar12, &sVar4, false, true);
				func_512(uParam0, 0, 0, 0, 0);
				func_498(uParam0, 128);
			}
		}
	}
	if (func_497(uParam0, 128))
	{
		if (func_497(uParam0, 256) && !func_497(uParam0, (1 << 22)))
		{
			return true;
		}
		func_513(uParam0);
		if (!uParam0->f_529)
		{
			if (func_514())
			{
				func_515((1 << 12));
				uParam0->f_529 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		{
			bVar13 = true;
			sVar15 = { func_317(uParam0) /*8*/ };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_462[iVar14 /*9*/]), &sVar15))
					{
						if (!uParam0->f_462[iVar14 /*9*/].f_8)
						{
							uParam0->f_462[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_497(uParam0, (1 << 23)))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, &sVar15))
				{
					if (!func_497(uParam0, (1 << 24)))
					{
						if ((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_444, &sVar15) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &sVar15)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_444, &sVar15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &sVar15);
						}
						func_498(uParam0, (1 << 24));
					}
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &sVar15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_498(uParam0, 256);
			func_508(uParam0, (1 << 22), 1);
			return true;
		}
	}
	return false;
}

bool func_322(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 7:
		case 10:
			return true;
	}
	return false;
}

void func_323(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false)) || ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444)) || func_497(uParam0, (1 << 9)))
	{
		if (!func_516(uParam0->f_501, 128))
		{
			func_517();
		}
		return;
	}
	if ((func_518(uParam0, Global_35, 4) || (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_519(Global_35)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, func_519(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!func_516(uParam0->f_501, 128))
		{
			func_517();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);
	if (iVar1 != 0)
	{
		if (func_520(iVar1))
		{
			if (func_521(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_516(uParam0->f_501, (1 << 9)))
	{
		bVar2 = true;
	}
	if (func_522(bVar0, bVar2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_444);
		func_517();
	}
}

void func_324(var uParam0)
{
	float fVar0;

	switch (uParam0->f_970)
	{
		case 1:
			fVar0 = 0.85f;
			break;
		case 2:
			fVar0 = 0.75f;
			break;
		case 3:
			fVar0 = 0.67f;
			break;
		case 4:
			fVar0 = 0.84f;
			break;
		case 5:
			fVar0 = 0.77f;
			break;
		case 6:
			fVar0 = 0.85f;
			break;
		case 7:
			fVar0 = 0.69f;
			break;
		case 8:
			fVar0 = 0.71f;
			break;
		case 9:
			fVar0 = 0.57f;
			break;
		case 10:
			fVar0 = 0.72f;
			break;
		case 11:
			fVar0 = 0.88f;
			break;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > fVar0)
	{
		func_228(Global_35, joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"), 0);
		func_54();
	}
}

bool func_325(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (uParam0->f_970)
	{
		case 9:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 10:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 11:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(joaat("MOTIONSTATE_JOG"), 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 3:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 5:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 7:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 8:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				return true;
			}
			break;
		case 4:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(joaat("MOTIONSTATE_RUN"), 2000, 0, 1, 0, -152.8f, 0, 0);
				return true;
			}
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > 0.96f)
			{
				if (iVar0 == 1)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(1), func_176(uParam0, 1));
					func_190(func_176(uParam0, 1), func_179(uParam0, 1), 0, 2.0f, 20000);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(7), func_176(uParam0, 7));
					func_190(func_176(uParam0, 7), func_179(uParam0, 7), 0, 2.0f, 20000);
					iVar0++;
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				return true;
			}
			break;
		case 1:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 0, -96.63f, 0, 0);
				return true;
			}
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > 0.96f)
			{
				if (iVar0 == 1)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(0), func_176(uParam0, 0));
					func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 2.0f, 20000);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(7), func_176(uParam0, 7));
					func_190(func_176(uParam0, 7), func_179(uParam0, 7), 0, 2.0f, 20000);
					iVar0++;
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				return true;
			}
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				return true;
			}
			break;
		case 6:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				return true;
			}
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_444) > 0.935f)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, "DUTCH", func_176(uParam0, 0));
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1.5f, 20000);
			}
			break;
	}
	return false;
}

void func_326(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

bool func_327(int iParam0, var uParam1)
{
	Vector3 vVar0;
	float fVar3;

	switch (iParam0)
	{
		case 7:
			vVar0 = { 2916.061f, 1311.538f, 44.2142f /*3*/ };
			fVar3 = -54.69f;
			break;
		case 10:
			vVar0 = { 2518.293f, -1305.46f, 48.9726f /*3*/ };
			fVar3 = -8.52f;
			break;
		case 3:
			vVar0 = { -292.2816f, 800.4503f, 119.2814f /*3*/ };
			fVar3 = 96.96f;
			break;
	}
	switch (uParam1->f_972)
	{
		case 0:
			PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vVar0, fVar3, false, true, false, false);
			uParam1->f_972 = 1;
			break;
		case 1:
			if (PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::PLAYER_ID()))
			{
				uParam1->f_972 = 2;
			}
			break;
		case 2:
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_328(bool bParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43800))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43800);
		}
	}
	Global_43800 = -1;
	strcpy_s(&Global_43802, 24, "");
	Global_16 = 0;
	if (bParam0)
	{
		func_517();
	}
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0);
}

void func_329(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if (uParam0->f_782[iVar0 /*11*/].f_10)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_782[iVar0 /*11*/]);
		}
		iVar0++;
	}
}

void func_330(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (uParam0->f_530[iVar0 /*10*/].f_9)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_530[iVar0 /*10*/]);
		}
		iVar0++;
	}
}

void func_331(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		if (uParam0->f_731[iVar0 /*10*/].f_9)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::_GET_WEAPONTYPE_MODEL(uParam0->f_731[iVar0 /*10*/]));
		}
		iVar0++;
	}
}

void func_332(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		func_526(&(uParam0->f_827[iVar0 /*10*/]));
		iVar0++;
	}
}

void func_333(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_530[iVar0 /*10*/].f_1) && uParam0->f_530[iVar0 /*10*/].f_9)
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_530[iVar0 /*10*/].f_1));
		}
		iVar0++;
	}
}

int func_334()
{
	if (Global_1572887.f_12 != -1)
	{
		Global_35 = Global_1224589.f_3;
		Global_36 = { Global_1224589.f_11 /*3*/ };
		return Global_1224589.f_5;
	}
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) /*3*/ };
	return PLAYER::PLAYER_ID();
}

bool func_335(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_336()
{
	Global_1935630.f_13 = 0;
	Global_1935630.f_14 = 0;
	Global_1935630.f_26 = 0;
	Global_1935630.f_15 = 0;
	Global_1935630.f_16 = 0;
	Global_1935630.f_17 = 0;
	Global_1935630.f_18 = 0;
	Global_1935630.f_19 = -1;
	Global_1935630.f_20 = -1;
	Global_1935630.f_21 = -1;
	Global_1935630.f_23 = 0;
}

bool func_337()
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_221())
	{
		return false;
	}
	if (!func_132(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_132(Global_1835011[2 /*74*/].f_1, 1) && func_132(Global_1347702[120 /*49*/].f_15, 1)) && !func_132(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_132(Global_1835011[37 /*74*/].f_1, 1) && !func_132(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_132(Global_1835011[57 /*74*/].f_1, 1) && !func_132(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_132(Global_1835011[26 /*74*/].f_1, 1) && !func_132(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_132(Global_1835011[62 /*74*/].f_1, 1) && func_132(Global_1835011[63 /*74*/].f_1, 1)) && !func_132(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_132(Global_1835011[75 /*74*/].f_1, 1) && !func_132(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_132(Global_1835011[76 /*74*/].f_1, 1) && !func_132(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_132(Global_1835011[40 /*74*/].f_1, 1) && func_132(Global_1835011[41 /*74*/].f_1, 1)) && !func_132(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_132(Global_1835011[62 /*74*/].f_1, 1) && func_132(Global_1835011[63 /*74*/].f_1, 1)) && !func_132(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_132(Global_1835011[65 /*74*/].f_1, 1) && func_132(Global_1835011[66 /*74*/].f_1, 1)) && !func_132(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_338(int iParam0, bool bParam1, bool bParam2)
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
		if (func_527())
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
		iVar0 = func_253(Global_1898164.f_1[0 /*5*/]);
		if (func_528(iVar0) && func_462(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_119(Global_1898164.f_1[0 /*5*/]))
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

bool func_339()
{
	return iLocal_27;
}

void func_340(int iParam0)
{
	iLocal_27 = iParam0;
}

int func_341()
{
	if (bLocal_26)
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0, bool bParam1, bool bParam2)
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

bool func_343(int iParam0)
{
	if (func_529(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_344(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_343(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_345(int iParam0, bool bParam1)
{
	if (func_343(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_346(int iParam0, bool bParam1)
{
	if (func_343(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_347(int iParam0, bool bParam1)
{
	if (func_343(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_348()
{
	return true;
}

void func_349(int iParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_SET_PED_TO_DISABLE_RAGDOLL(iVar1, true);
		}
	}
	if (iParam0 == func_530(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_531(iParam0))
	{
		if (func_532(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_420(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 -= (iParam5 & 4);
				func_349(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 -= (iParam5 & 4);
				func_349(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_420(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_420(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_420(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_420(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_420(iParam5, 129))
	{
		if (func_420(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_420(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_420(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_420(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_531(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_420(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_420(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

bool func_350(var uParam0, int iParam1, char* sParam2)
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

void func_351(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!PED::DOES_GROUP_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*iParam0, true))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*iParam0, 279 /*PCF_NeverLeavesGroup*/, bParam3);
	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*iParam0, *iParam1, false);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*iParam0, *iParam1);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 280 /*PCF_DontEnterLeadersVehicle*/, bParam4);
		PED::_0xBAD2A311667A50D7(*iParam0, bParam5);
	}
	PED::_0x97C475212B327666(*iParam1, bParam6);
}

void func_352(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_353(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_124(iParam0))
	{
		return 0;
	}
	iVar0 = func_533(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_534(func_354(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

int func_354(int iParam0)
{
	if (!func_124(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/].f_1;
	}
	return Global_1058888.f_40545[iParam0 /*11*/].f_1;
}

bool func_355(int iParam0)
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
	iVar0 = func_535(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_536(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_537(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_538(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_539(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_540(iParam0);
	if (iVar5 < 1 || iVar5 > func_541(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_356(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_1 = iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/].f_1 = iParam1;
}

void func_357(int iParam0, int iParam1)
{
	if (!func_124(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_23118[iParam0 /*11*/].f_3 = iParam1;
}

void func_358(int iParam0, int iParam1)
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

void func_359(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] -= (Global_23118[iParam0 /*11*/] & iParam1);
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] -= (Global_1058888.f_40545[iParam0 /*11*/] & iParam1);
}

void func_360(int iParam0)
{
	if (!func_124(iParam0))
	{
		return;
	}
	if (func_130(iParam0) && func_542(iParam0))
	{
		func_544(func_543(iParam0));
	}
	else
	{
		func_545(func_543(iParam0));
	}
}

float func_361(int iParam0, int iParam1)
{
	return func_546(iParam0, iParam1, 1, 1);
}

int func_362(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(Global_35);
	switch (iParam1)
	{
		case 76:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(0), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(1), "PBL_1"))
			{
				return 1;
			}
			break;
		case 26:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(9), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(10), "PBL_1"))
			{
				return 1;
			}
			break;
		case 105:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(2), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(3), "PBL_1"))
			{
				return 1;
			}
			break;
		case 78:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(4), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(5), "PBL_1"))
			{
				return 1;
			}
			break;
		case 38:
			if (func_548(&(uParam0->f_25), func_547(6), "PBL_1"))
			{
				return 1;
			}
			break;
		case 5:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(7), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(8), "PBL_1"))
			{
				return 1;
			}
			break;
		case 115:
			if (func_548(&(uParam0->f_25), func_547(11), "PBL_1"))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_363(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_196(1) < iParam0)
	{
		iParam0 = func_196(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_399(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_364(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_402(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

void func_365(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_366(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_367(int iParam0)
{
	if (func_106() != -1)
	{
		if (func_369(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_369(iParam0, 2))
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
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_369(iParam0, (1 << 16)) && !func_369(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_369(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_369(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_369(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_370()
{
	return Global_1905944.f_5694;
}

bool func_371(int iParam0)
{
	return func_549(iParam0, 16, 1);
}

void func_372(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_550(iParam0))
	{
		return;
	}
	if (func_371(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_551(iParam0, 56, 1);
		func_416(&(Global_1359489.f_40), 1);
	}
	func_552(iParam0, 0);
	func_553(iParam0, 4, 0);
	func_554(iParam0);
	func_555(iParam0);
	func_556(iParam0, 37, 1);
	bVar0 = func_235(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_557(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true) && (Global_1359489.f_16 & (1 << 23)) == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, false);
	}
	if (func_558(iParam0, 64, 1))
	{
		func_556(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_556(iParam0, 33, 1);
		func_556(iParam0, 34, 1);
		func_559(iParam0, 1056964608, -1, 1061158912);
		func_560(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_551(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_551(iParam0, 35, 1);
			if (bParam8)
			{
				func_551(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_561(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		func_556(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_551(iParam0, 33, 1);
		func_560(iParam0, 0, 1, 0);
		if (fParam4 > 0.0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_416(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_562(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_551(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_563(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_558(iParam0, 45, 1))
	{
		func_556(iParam0, 45, 1);
	}
	func_564(iParam0, 16, 1);
	func_556(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_235(func_565(iParam0), 0))
		{
			func_374(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_373(int iParam0)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

void func_374(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_566(iParam1))
	{
		return;
	}
	iVar0 = func_565(iParam1);
	if (func_373(iParam1))
	{
		if (!func_567(iParam1))
		{
			return;
		}
	}
	func_556(iParam1, 39, 1);
	func_568(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_568(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_568(iParam1, (1 << 9), 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_551(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_569(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_375(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_376(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_376(int iParam0)
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

void func_377(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_571(iParam0, 32);
	func_572();
}

void func_378(int iParam0)
{
	int iVar0;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_379(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_381(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_381(iParam0);
	}
}

int func_379(int iParam0)
{
	iParam0 = func_570(iParam0);
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

bool func_380(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_381(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_382(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_106() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_383(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_106() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_573(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_574();
		Global_1898077.f_9 = func_575(Global_1894899.f_2);
		func_576(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_384(int iParam0)
{
	return func_577(func_448(iParam0));
}

void func_385(int iParam0, int iParam1, bool bParam2)
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

bool func_386(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_1934765.f_21[iVar1], iVar2);
}

bool func_387(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!INTERIOR::IS_INTERIOR_READY(iParam0))
		{
			return false;
		}
	}
	if (iParam1 | Global_1934765.f_271)
	{
		return true;
	}
	return ((INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW() != iParam0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != iParam0) || CAM::IS_SCREEN_FADED_OUT());
}

void func_388(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_1934765.f_30[iVar1]), iVar2);
}

void func_389(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_1934765.f_30[iVar1]), iVar2);
}

int func_390()
{
	int iVar0;

	iVar0 = func_578();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_391(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_106() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1.0f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2.0f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_579(MISC::ABSF(fVar1) < 1.0f, func_579(fVar1 < 0.0f, -1.0f, 1.0f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_392()
{
	if (func_106() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_393(int iParam0, int iParam1, int iParam2)
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

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_395()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_396(int iParam0, bool bParam1, int iParam2)
{
	func_580((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_581(iParam0);
}

void func_397(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_582(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_398(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_583(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_584(iVar5, &iVar2, &iVar0))
			{
				if (!func_425(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_585(iVar2);
					if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_586(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_390() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_390() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_587();
							}
							if (bVar3)
							{
								UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> /*16*/ func_399(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_400(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_401(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_402(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_588(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_403(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_589(iParam0))
	{
		return 0;
	}
	if (!func_221())
	{
		return 0;
	}
	if (!func_590(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_404(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_591(*uParam0, 0.0f, 0.0f, 0.0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

int func_405()
{
	return Global_40.f_4283;
}

int func_406(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f /*3*/ };
			*uParam2 = 186.0f;
			break;
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f /*3*/ };
			*uParam2 = 0.0f;
			break;
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f /*3*/ };
			*uParam2 = 0.0f;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_407(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!func_592(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_434(iParam1);
	return func_593(iParam0, iVar0, bParam2, bParam2);
}

bool func_408(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_594(iParam0) == 0)
	{
		return false;
	}
	return true;
}

int func_409(int iParam0, int iParam1)
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

	iParam1->f_10 = func_570(iParam1->f_10);
	if (iParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (iParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*iParam1)
	{
		if (func_174(iParam1->f_6))
		{
		}
	}
	bVar0 = func_221();
	if (*iParam1)
	{
		if (bVar0 && !func_132(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_408(5))
			{
				func_595(5);
				func_596(5);
				func_597(0);
				func_598(0);
			}
		}
	}
	if (func_599(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_132(Global_1835011[37 /*74*/].f_1, 1)) && !func_132(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_132(Global_1835011[43 /*74*/].f_1, 1)) && !func_132(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (iParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = iParam1->f_10;
	iVar2 = func_600(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_601(iVar1))
	{
		bVar3 = true;
		if (func_602(iVar1))
		{
			bVar4 = true;
		}
		if (func_603(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*iParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !iParam1->f_5)
			{
				func_604(iParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*iParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (iParam1->f_3)
	{
		if (iParam1->f_10 == 0)
		{
			if (!func_408(0) && func_408(1))
			{
				func_605(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (iParam1->f_4)
	{
		if (iParam1->f_10 == 0)
		{
			if (func_606())
			{
				func_607();
			}
			func_597(0);
			func_598(0);
			func_608(iParam1->f_6);
		}
	}
	if (!func_601(iParam1->f_10))
	{
		if (*iParam1)
		{
			if ((func_609(iParam1->f_10) == 0 || func_610(iParam1->f_10) == 0) || func_594(iParam1->f_10) == 0)
			{
				func_611(iParam1->f_10);
			}
			func_612(iParam1->f_10);
			func_613(iParam1->f_10, iParam1->f_6, iParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = iParam1->f_10;
	iVar2 = func_600(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_601(iVar1))
	{
		bVar3 = true;
		if (func_602(iVar1))
		{
			bVar4 = true;
		}
		if (func_603(iVar1))
		{
			bVar5 = true;
		}
	}
	if (iParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_174(iParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, iParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, iParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
			}
		}
	}
	if (func_614(iParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*iParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !iParam1->f_5)
		{
			if (*iParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (iParam1->f_4)
	{
		if (iParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(iVar2))
			{
				*iParam0 = 0;
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
			sVar8 = { func_615(iParam1->f_10) /*2*/ };
			sVar10 = { func_616() /*6*/ };
			func_617(iVar2, &sVar8, &sVar10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186 /*PCF_CorpseIsPersistent*/, false);
		}
	}
	if (!iParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_380(iParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_618(iParam1->f_10);
		if (iParam1->f_2 && !func_174(iParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_UNHITCH_HORSE(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, iParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, iParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_378(iParam1->f_10);
	if (func_380(iParam1->f_10))
	{
		iVar16 = func_379(iParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

void func_410(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_411(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_619())
	{
		if (func_620(255))
		{
			if (!func_621(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_124(Global_1894899.f_2) && func_414(Global_1894899.f_2))
		{
			func_622(Global_1894899.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_623(16);
			}
		}
		else if (func_124(Global_1894899.f_2) && !func_271(Global_1894899.f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1894899.f_7 = 0;
		func_624(16);
		func_625();
		if (bVar0)
		{
			func_624(1);
		}
	}
}

void func_412()
{
	func_624(8);
}

int func_413(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_414(int iParam0)
{
	if (!func_124(iParam0))
	{
		return false;
	}
	return func_271(iParam0, 8);
}

bool func_415(var uParam0)
{
	return func_626(*uParam0, 1);
}

void func_416(var uParam0, bool bParam1)
{
	if (bParam1 || !func_415(uParam0))
	{
		func_627(uParam0);
	}
}

bool func_417(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

float func_418(var uParam0)
{
	if (!func_415(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_628(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_629() - uParam0->f_1);
}

int func_419(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(*uParam0, false);
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_420(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_421(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_630(iVar0);
}

int func_422(int iParam0, int iParam1)
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

int func_423(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_424()
{
	if (Global_1946054.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946054.f_2791)) < 1250)
	{
		return true;
	}
	if (func_631())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	return false;
}

bool func_425(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_426(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_425(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_586(iParam0);
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
		if (!func_632(iParam0, 1))
		{
			return false;
		}
	}
	return func_633(iParam0, 0, bParam2) >= iParam1;
}

int func_427(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_238(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_428(int iParam0, int iParam1)
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

int func_429()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_634())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_430()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_634())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_431()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_634())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_432()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_634())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_433(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> /*32*/ sVar3;

	sVar3.f_0 = -961687407;
	if (func_106() == -1)
	{
		sVar3.f_0 = 1444744190;
	}
	sVar3.f_1 = iParam0;
	sVar3.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar3);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar3))
	{
		return false;
	}
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar3, joaat("META_TYPE")))
	{
		return false;
	}
	iVar2 = func_635(iParam0);
	if (func_636(iVar0, &iVar1))
	{
		func_637(iVar1, iVar2);
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar3))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar3, joaat("META_TYPE")))
		{
		}
		else if (!func_636(iVar0, &iVar1))
		{
		}
		else
		{
			func_637(iVar1, iVar2);
		}
	}
	return true;
}

int func_434(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	sVar1.f_0 = -961687407;
	if (func_106() == -1)
	{
		sVar1.f_0 = 1444744190;
	}
	sVar1.f_1 = iParam0;
	sVar1.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar1);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar1))
	{
		return 0;
	}
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar1, joaat("META_TAG")))
	{
		return 0;
	}
	return func_638(iVar0);
}

int func_435(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_639(13, iParam1, 0, 0, 0);
		}
		else
		{
			func_639(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_640(0))
	{
	}
	func_641(&(Global_1946054.f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

bool func_436(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_437(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_642(iParam0);
	}
	else
	{
		func_643(iParam0, iParam1);
	}
	func_644();
}

void func_438(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_439(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_440(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_441(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_442(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

int func_443(int iParam0)
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

int func_444(int iParam0)
{
	return (iParam0 & 31);
}

int func_445(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_446(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383);
}

int func_447(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_2;
	}
	return -1;
}

int func_448(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1898164.f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_449(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	if (iParam0 == -1 || iParam0 == 0)
	{
		Global_1898164.f_1[iParam1 /*5*/] = { sVar0 /*5*/ };
	}
	else
	{
		Global_1898164.f_1[iParam1 /*5*/] = iParam0;
		Global_1898164.f_1[iParam1 /*5*/].f_1 = func_246(iParam0);
		func_645(Global_1898164.f_1[iParam1 /*5*/].f_1, &(Global_1898164.f_1[iParam1 /*5*/].f_3), &(Global_1898164.f_1[iParam1 /*5*/].f_4), &(Global_1898164.f_1[iParam1 /*5*/].f_2));
	}
}

void func_450(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_646((iVar0 - 1), iVar0);
			iVar0--;
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_646(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_119(Global_1898164.f_1[0 /*5*/]))
	{
		func_255(Global_1898164.f_1[0 /*5*/], 3);
	}
}

void func_451(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319.f_15936[iVar0 /*6*/].f_5)
		{
			Global_1914319.f_15936[iVar0 /*6*/].f_5 = 0;
		}
		func_647(&(Global_1914319.f_15936[iVar0 /*6*/]), bParam0);
		iVar0++;
	}
}

void func_452(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_647(&(Global_1934051.f_23[iVar0]), bParam0);
		iVar0++;
	}
}

void func_453(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_647(&(Global_1899778.f_34[iVar0]), bParam0);
		Global_1899778[iVar0] = 0;
		iVar0++;
	}
}

void func_454(bool bParam0)
{
	func_647(&Global_1955864, bParam0);
}

void func_455(bool bParam0)
{
	func_647(&(Global_1415412.f_3), bParam0);
}

void func_456(bool bParam0)
{
	if (func_648(Global_1934051.f_33))
	{
		func_649(Global_1934051.f_33, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));
	}
	func_647(&(Global_1934051.f_33), bParam0);
}

void func_457(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_651(func_650(iVar0));
		if (iVar1 != 0)
		{
			func_649(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (Global_1934051[iVar0 /*2*/].f_1)
		{
			Global_1934051[iVar0 /*2*/].f_1 = 0;
		}
		func_647(&(Global_1934051[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
}

void func_458(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_652(iVar0, -1);
		func_653(iVar0, 0);
		func_654(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[iVar0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[iVar0]));
		}
		iVar0++;
	}
}

void func_459(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
}

void func_460()
{
	func_655();
	func_656();
	func_657();
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

bool func_462(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_464(var uParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = uParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &sVar0, 2, 2);
}

void func_465(var uParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = uParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &sVar0, 2, 2);
}

bool func_466(int iParam0)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	switch (func_252(iParam0))
	{
		case 1:
			switch (func_253(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_253(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_467(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_658(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_423(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iVar2, iVar1);
		}
		iVar0++;
	}
	func_660(func_659(iParam0), 6);
}

void func_468(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_658(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_423(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_661(func_659(iParam0), 6);
}

bool func_469(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 26:
		case 38:
		case 76:
		case 78:
		case 105:
			return true;
	}
	return false;
}

bool func_470()
{
	if (func_408(0) || func_408(1))
	{
		return true;
	}
	return false;
}

bool func_471(int iParam0)
{
	if (!func_662(iParam0, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_472(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return true;
	}
	return false;
}

void func_473(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (!func_292(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 |= iParam1;
		return;
	}
	Global_1058888.f_42196[iParam0 /*12*/].f_5 |= iParam1;
}

void func_474(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
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

void func_475(int iParam0, bool bParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_544(func_663(iParam0));
	}
	else
	{
		func_545(func_663(iParam0));
	}
}

void func_476(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/].f_2 = iParam1;
}

void func_477(int iParam0)
{
	if (!func_124(iParam0))
	{
		return;
	}
	if (func_664(iParam0))
	{
		func_665(iParam0);
	}
	else
	{
		func_666(iParam0);
	}
}

void func_478(int iParam0, int iParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (!func_667(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] |= iParam1;
		return;
	}
	Global_1058888.f_42269[iParam0] |= iParam1;
}

bool func_479(int iParam0)
{
	if (!func_97(iParam0))
	{
		return false;
	}
	return func_667(iParam0, 2);
}

void func_480(int iParam0, int iParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] -= (Global_40.f_431[iParam0] & iParam1);
		return;
	}
	Global_1058888.f_42269[iParam0] -= (Global_1058888.f_42269[iParam0] & iParam1);
}

void func_481(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_97(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_668(iParam0);
	if (bParam1)
	{
		func_544(iVar0);
	}
	else
	{
		func_545(iVar0);
	}
}

int func_482(int iParam0)
{
	if (!func_100(iParam0))
	{
		return 0;
	}
	if ((Global_40.f_358[iParam0 /*12*/].f_5 & 2) != 0)
	{
		return 5;
	}
	if (Global_40.f_358[iParam0 /*12*/] > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
	{
		return func_669(Global_40.f_358[iParam0 /*12*/]);
	}
	return 0;
}

void func_483(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(func_670(iParam0), joaat("BLIP_STYLE_WANTED_REGION"));
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_670(iParam0), joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(func_670(iParam0), joaat("BLIP_STYLE_WANTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(func_670(iParam0));
	}
}

bool func_484(var uParam0)
{
	if (!func_671(uParam0->f_1))
	{
		uParam0->f_2 = func_672(uParam0->f_1, 1, 0, uParam0->f_12, uParam0->f_12.f_1, uParam0->f_12.f_2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		if (func_235(uParam0->f_2, 0))
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

bool func_485(var uParam0)
{
	int iVar0;

	if (func_235(uParam0->f_3, 0))
	{
		return true;
	}
	if (!func_567(uParam0->f_1))
	{
		uParam0->f_3 = func_673(&iVar0, uParam0->f_1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
		if (func_235(uParam0->f_3, 0) && iVar0 == 2)
		{
			if (!func_174(uParam0->f_15))
			{
				func_349(uParam0->f_3, uParam0->f_15, uParam0->f_18, 2, (1 << 30));
				TASK::TASK_STAND_STILL(uParam0->f_3, -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_486(var uParam0)
{
	if (!func_674(uParam0->f_1, 0))
	{
		func_675(uParam0->f_1, 1, 0, 0, 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_676(uParam0->f_1)))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_676(uParam0->f_1), true);
		PED::SET_PED_CONFIG_FLAG(func_676(uParam0->f_1), 168 /*PCF_EnableShockingEvents*/, false);
		PERSCHAR::_0x6759BEE6762E140B(func_283(uParam0->f_1));
	}
	else
	{
		return false;
	}
	uParam0->f_2 = func_676(uParam0->f_1);
	return true;
}

bool func_487(var uParam0, var uParam1, var uParam2)
{
	var uVar0[15];
	var uVar16[1];
	int iVar18;
	int iVar19;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return true;
	}
	if (*uParam1)
	{
		return false;
	}
	uVar16[0] = Global_35;
	iVar18 = func_677(&uVar0, &uVar16, 15, uParam0->f_6, 1101004800, 0, 1, 1, uParam0->f_9, 1, 0, -1082130432, 0, 0);
	iVar19 = 0;
	while (iVar19 < iVar18)
	{
		if (!func_678(uParam2, uVar0[iVar19]))
		{
			if (*uParam0 == ENTITY::GET_ENTITY_MODEL(uVar0[iVar19]))
			{
				uParam0->f_1 = uVar0[iVar19];
				PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(uParam0->f_1, joaat("LAW"));
				return true;
			}
		}
		iVar19++;
	}
	STREAMING::REQUEST_MODEL(*uParam0, false);
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		uParam0->f_1 = func_679(*uParam0, uParam0->f_6, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(uParam0->f_1, joaat("LAW"));
		uParam0->f_10 = 1;
		*uParam1 = 1;
		return true;
	}
	return false;
}

bool func_488(var uParam0, var uParam1, var uParam2)
{
	var uVar0[8];
	var uVar9[1];
	int iVar11;
	int iVar12;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return true;
	}
	if (*uParam1)
	{
		return false;
	}
	uVar9[0] = *uParam0;
	iVar11 = func_680(&uVar0, &uVar9, 8, uParam0->f_6, 1101004800);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if (!func_681(uParam2, uVar0[iVar12]))
		{
			uParam0->f_1 = uVar0[iVar12];
			return true;
		}
		iVar12++;
	}
	STREAMING::REQUEST_MODEL(*uParam0, false);
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		uParam0->f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(*uParam0, uParam0->f_6, true, true, false, true);
		uParam0->f_9 = 1;
		*uParam1 = 1;
		return true;
	}
	return false;
}

bool func_489(var uParam0, var uParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return true;
	}
	if (*uParam1)
	{
		return false;
	}
	iVar0 = WEAPON::_GET_WEAPONTYPE_MODEL(*uParam0);
	STREAMING::REQUEST_MODEL(iVar0, false);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		uParam0->f_1 = WEAPON::_CREATE_WEAPON_OBJECT(*uParam0, 100, uParam0->f_6, true, 1.0f);
		uParam0->f_9 = 1;
		*uParam1 = 1;
		return true;
	}
	return false;
}

void func_490(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_492(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

char* func_491(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_492(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_682(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_683(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_684(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_685(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_686(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		strcpy_s(&(uParam0->f_13[iVar0 /*12*/].f_1), 64, sParam2);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_687(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			func_688(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

struct<8> /*64*/ func_493(var uParam0)
{
	return uParam0->f_454;
}

struct<8> /*64*/ func_494()
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "MultiStart");
	return cVar0;
}

bool func_495(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_462[iVar0 /*9*/]), sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_496(var uParam0, char* sParam1)
{
	struct<8> /*64*/ sVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	sVar0 = { func_317(uParam0) /*8*/ };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &sVar0);
}

bool func_497(var uParam0, int iParam1)
{
	return (uParam0->f_8 & iParam1) != 0;
}

void func_498(var uParam0, int iParam1)
{
	uParam0->f_8 |= iParam1;
}

void func_499(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_497(uParam0, (1 << 13)))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_440), {func_689("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_440), {func_689("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_498(uParam0, (1 << 13));
}

Vector3 func_500(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_501(var uParam0)
{
	var uVar0;
	Vector3 vVar8;
	var uVar11;
	Vector3 vVar14;

	MemCopy(&uVar0, {func_690(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_445, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_445, func_519(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 /*3*/ };
		}
		else
		{
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_445, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_445);
		return vVar8;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_502(var uParam0, Vector3 vParam1)
{
	if (func_174(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 /*3*/ };
}

float func_503(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_504(var uParam0)
{
	return uParam0->f_435;
}

void func_505()
{
	struct<4> /*32*/ sVar0;

	Global_1946054.f_858--;
	if (Global_1946054.f_858 <= 0)
	{
		sVar0.f_0 = 35;
		func_691(sVar0);
	}
}

void func_506(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/])) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/]))))
		{
			ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/]));
		}
		uParam0->f_462[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_507(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_497(uParam0, 16))
		{
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_692(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, false);
		}
	}
	if (func_497(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_508(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_508(uParam0, 16, 1);
}

void func_508(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 -= (uParam0->f_8 & iParam1);
	if (((iParam1 == (1 << 9) && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444))
	{
		ANIMSCENE::_CLEAR_ANIM_SCENE_WAS_SKIPPED(uParam0->f_444);
	}
}

float func_509(var uParam0)
{
	return uParam0->f_434;
}

struct<8> /*64*/ func_510(var uParam0)
{
	return uParam0->f_446;
}

void func_511(var uParam0)
{
	char cVar0[64];

	cVar0 = { func_693() /*8*/ };
	func_318(uParam0, &cVar0);
}

void func_512(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_497(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_591(uParam0->f_5, 0.0f, 0.0f, 0.0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f, func_694());
		func_498(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_695(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_498(uParam0, 16);
	}
}

void func_513(var uParam0)
{
	if ((!func_497(uParam0, (1 << 15)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_444, false))
	{
		func_696(uParam0);
		func_697(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_444, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_444);
		}
		func_498(uParam0, (1 << 15));
	}
}

bool func_514()
{
	return Global_1946054.f_1497 != Global_1946054.f_2163.f_1;
}

void func_515(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_698(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_691(sVar0);
}

bool func_516(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_517()
{
	if (func_699(Global_43801))
	{
		func_700(&Global_43801, 0, 0);
	}
}

bool func_518(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && func_701(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_519(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("PLAYER_THREE"))
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_702(iVar0);
}

bool func_520(int iParam0)
{
	int iVar0;

	if (func_703(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_521(int iParam0, bool bParam1)
{
	if (bParam1 && !func_699(iParam0))
	{
		return false;
	}
	return !func_704(iParam0, 4);
}

bool func_522(bool bParam0, bool bParam1)
{
	if (!func_699(Global_43801))
	{
		Global_43801 = func_705("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, (1 << 30), 0, 1065353216, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
		Global_1945188[Global_43801 /*18*/].f_16 = Global_23[3];
		func_706(Global_43801, 0, 1);
		func_707(Global_43801, 6, 1);
		if (bParam1)
		{
			func_707(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_521(Global_43801, 0))
		{
			func_708(Global_43801, 1, 1);
		}
		if (func_709(Global_43801, 1) != 0.0f && bParam0)
		{
			func_706(Global_43801, 1, 1);
		}
		else
		{
			func_706(Global_43801, 0, 1);
		}
		return func_710(Global_43801, 1);
	}
	return false;
}

bool func_523(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_711(uParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_524(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (Global_1935630.f_12)
	{
		return;
	}
	fVar0 = 1.0f;
	switch (iParam0)
	{
		case joaat("MOTIONSTATE_IDLE"):
		case joaat("MOTIONSTATE_CROUCH_IDLE"):
			fVar0 = 0.0f;
			break;
		case joaat("MOTIONSTATE_JOG"):
		case joaat("MOTIONSTATE_CROUCH_JOG"):
			fVar0 = 1.5f;
			break;
		case joaat("MOTIONSTATE_RUN"):
		case joaat("MOTIONSTATE_CROUCH_RUN"):
			fVar0 = 2.0f;
			break;
		case joaat("MOTIONSTATE_SPRINT"):
			fVar0 = 3.0f;
			break;
		case joaat("MOTIONSTATE_WALK"):
		case joaat("MOTIONSTATE_CROUCH_WALK"):
			break;
	}
	PED::FORCE_PED_MOTION_STATE(Global_35, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, ENTITY::GET_ENTITY_HEADING(Global_35), bParam6, bParam7);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

char* func_525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILLWILLIAMSON";
		case 1:
			return "JOHN";
		case 2:
			return "JavierEscuella";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAHBELL";
		case 7:
			return "CharlesSmith";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "AbigailRoberts";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "MrPearson";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLE_FLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

void func_526(var uParam0)
{
	if (func_674(uParam0->f_1, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_676(uParam0->f_1)))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_676(uParam0->f_1), false);
			PED::SET_PED_CONFIG_FLAG(func_676(uParam0->f_1), 234 /*PCF_0x2EEFF534*/, true);
			PED::SET_PED_CONFIG_FLAG(func_676(uParam0->f_1), 168 /*PCF_EnableShockingEvents*/, true);
		}
		func_712(uParam0->f_1, 0, 1, 0, 0);
		PERSCHAR::_0x6759BEE6762E140B(func_283(uParam0->f_1));
	}
}

bool func_527()
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

bool func_528(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_529(int iParam0)
{
	return iParam0 != 0;
}

int func_530(var uParam0)
{
	return uParam0;
}

bool func_531(int iParam0)
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

bool func_532(int iParam0)
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

int func_533(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return -1;
	}
	return Global_23118[iParam0 /*11*/].f_3;
}

int func_534(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_355(iParam0))
	{
		return 0;
	}
	func_713(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60.0f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60.0f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24.0f) * 60.0f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24.0f) * 60.0f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24.0f) * 60.0f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

int func_535(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_536(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_537(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_538(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_714(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_539(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_540(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_541(int iParam0, int iParam1)
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

bool func_542(int iParam0)
{
	if (!func_124(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return true;
	}
	return false;
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 29:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 30:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 31:
			return joaat("REGION_BLU_COPPERHEAD");
		case 32:
			return joaat("REGION_BLU_SISIKA");
		case 33:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 34:
			return joaat("REGION_CML_DINO_LADY");
		case 35:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 36:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 37:
			return joaat("REGION_GRT_BEECHERS");
		case 38:
			return joaat("REGION_GRT_BLACKWATER");
		case 39:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 40:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 41:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 50:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 51:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 42:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 52:
			return joaat("REGION_GRZ_COHUTTA");
		case 43:
			return joaat("REGION_GRZ_COLTER");
		case 44:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 53:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 45:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 46:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 47:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 48:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 54:
			return joaat("REGION_GRZ_THELOFT");
		case 55:
			return joaat("REGION_GRE_VETERAN");
		case 56:
			return joaat("REGION_GRZ_WAPITI");
		case 49:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 57:
			return joaat("REGION_GUA_AGUASDULCES");
		case 58:
			return joaat("REGION_GUA_CAMP");
		case 59:
			return joaat("REGION_GUA_CINCOTORRES");
		case 60:
			return joaat("REGION_GUA_LACAPILLA");
		case 61:
			return joaat("REGION_GUA_MANICATO");
		case 62:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 64:
			return joaat("REGION_HRT_CARMODYDELL");
		case 65:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 66:
			return joaat("REGION_HRT_CROP_FARM");
		case 67:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 68:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 69:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 70:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 71:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 72:
			return joaat("REGION_HRT_LARNEDSOD");
		case 73:
			return joaat("REGION_HRT_LOONY_CULT");
		case 74:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 75:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 76:
			return joaat("REGION_HRT_VALENTINE");
		case 77:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 78:
			return joaat("REGION_ROA_ANNESBURG");
		case 79:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 63:
			return joaat("REGION_ROA_BEECHERS_C");
		case 80:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 81:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 82:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 83:
			return joaat("REGION_ROA_DOVERHILL");
		case 84:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 85:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 86:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 87:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 88:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 89:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 90:
			return joaat("REGION_ROA_TRAPPER");
		case 91:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 92:
			return joaat("REGION_ROA_VANHORNPOST");
		case 93:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 94:
			return joaat("REGION_SCM_BULGERGLADE");
		case 95:
			return joaat("REGION_SCM_CALIGAHALL");
		case 96:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 97:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 98:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 99:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 100:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 101:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 102:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 103:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 104:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 105:
			return joaat("REGION_SCM_RHODES");
		case 106:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 107:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 109:
			return joaat("REGION_TAL_COCHINAY");
		case 110:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 111:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 112:
			return joaat("REGION_TAL_TANNERSREACH");
		case 108:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 113:
			return joaat("REGION_TAL_TRAPPER");
		case 126:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 127:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 120:
			return joaat("REGION_CHO_ARMADILLO");
		case 121:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 122:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 124:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 123:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 125:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 114:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 115:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 116:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 129:
			return joaat("REGION_GAP_SOLOMONS_FOLLY");
		case 117:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 118:
			return joaat("REGION_RIO_FORT_MERCER");
		case 119:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 128:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	return 0;
}

void func_544(int iParam0)
{
	int iVar0;

	if (func_715(iParam0) == 57)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(-1145496915, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1043953850, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1783502982, joaat("BLIP_STYLE_WANTED_REGION"));
	}
	else
	{
		iVar0 = joaat("BLIP_STYLE_WANTED_REGION");
		if (((func_716(iParam0) == 4 || func_716(iParam0) == 12) || func_127(func_716(iParam0)) == 4) || (func_667(func_716(iParam0), 8) && ((func_716(iParam0) == 2 || func_716(iParam0) == 0) || func_716(iParam0) == 10)))
		{
			iVar0 = joaat("BLIP_STYLE_REGION_LOCKDOWN");
		}
		MAP::_MAP_ENABLE_REGION_BLIP(iParam0, iVar0);
	}
}

void func_545(int iParam0)
{
	if (func_715(iParam0) == 57)
	{
		MAP::_MAP_DISABLE_REGION_BLIP(-1145496915);
		MAP::_MAP_DISABLE_REGION_BLIP(-1043953850);
		MAP::_MAP_DISABLE_REGION_BLIP(-1783502982);
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, joaat("BLIP_STYLE_WANTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iParam0);
	}
}

float func_546(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_547(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "script@proc@jailcells@annesburg";
		case 0:
			return "script@proc@jailcells@valentine";
		case 2:
			return "script@proc@jailcells@rhodes";
		case 7:
			return "script@proc@jailcells@saintdenis";
		case 9:
			return "script@proc@jailcells@strawberry";
		case 5:
			return "script@proc@jailcells@annesburg_john";
		case 1:
			return "script@proc@jailcells@valentine_john";
		case 8:
			return "script@proc@jailcells@saintdenis_john";
		case 3:
			return "script@proc@jailcells@rhodes_john";
		case 10:
			return "script@proc@jailcells@strawberry_john";
		case 6:
			return "script@proc@jailcells@blackwater_john";
		case 11:
			return "script@proc@jailcells@tumbleweed_john";
		default:
			break;
	}
	return "FAIL";
}

bool func_548(var uParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return false;
	}
	return true;
}

bool func_549(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] & iParam1) != 0;
}

bool func_550(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_551(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return;
		}
	}
	func_717(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_552(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_718(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_553(iParam0, 1, 0);
		}
	}
	func_553(iParam0, 16, bParam1);
}

void func_553(int iParam0, int iParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return;
	}
	func_719(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_554(int iParam0)
{
	func_553(iParam0, 8, 0);
}

void func_555(int iParam0)
{
	func_551(iParam0, 36, 1);
}

void func_556(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return;
		}
	}
	func_717(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

int func_557(int iParam0, bool bParam1)
{
	if (!func_550(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_720(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

bool func_558(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return false;
		}
	}
	func_717(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_559(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_550(iParam0))
	{
		iVar1 = func_721(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179 /*PCF_0x605C7288*/, true);
			func_722(iParam0);
		}
	}
	if (func_558(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_721(iParam0), 137 /*PCF_0xE18960DE*/, true);
	}
}

void func_560(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_556(iParam0, 50, 1);
		func_556(iParam0, 48, 1);
		func_556(iParam0, 49, 1);
		func_556(iParam0, 51, 1);
		func_556(iParam0, 52, 1);
		func_556(iParam0, 54, 1);
		func_556(iParam0, 55, 1);
	}
	else
	{
		func_551(iParam0, 50, 1);
		func_551(iParam0, 48, 1);
		func_551(iParam0, 49, 1);
		func_551(iParam0, 51, 1);
		if (bParam3)
		{
			func_551(iParam0, 54, 1);
		}
		else
		{
			func_556(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_551(iParam0, 52, 1);
			if (bParam3)
			{
				func_551(iParam0, 55, 1);
			}
		}
		else
		{
			func_556(iParam0, 52, 1);
			if (!bParam3)
			{
				func_556(iParam0, 55, 1);
			}
		}
	}
}

void func_561(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_721(iParam0), 204 /*PCF_0x435F091E*/, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_721(iParam0), 204 /*PCF_0x435F091E*/, false);
	}
}

void func_562(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_563(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_550(iParam0))
	{
		return;
	}
	if (func_371(iParam0))
	{
		if (!func_671(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_558(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_557(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = func_721(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_723(iParam0) < 10000.0f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(iVar1, true)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_551(iParam0, 2, 1);
	}
	else
	{
		func_724(iParam0);
		func_551(iParam0, 1, 1);
	}
}

void func_564(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_550(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] -= (Global_40.f_4942[iParam0 /*60*/] & iParam1);
}

int func_565(int iParam0)
{
	if (!func_550(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

bool func_566(int iParam0)
{
	return iParam0 > -1;
}

bool func_567(int iParam0)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_568(int iParam0, int iParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 |= iParam1;
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 -= (Global_1360165[iParam0 /*1157*/].f_70.f_1 & iParam1);
	}
}

int func_569(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_566(iParam0))
	{
		return 0;
	}
	iVar0 = func_565(iParam0);
	if (func_235(iVar0, 0))
	{
		if (func_235(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_373(iParam0)) || func_567(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_725(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000.0f))
			{
				iVar1 = func_726(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_727(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_728(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_728(iParam0, 0));
					func_729(iParam0);
				}
			}
			else
			{
				if (func_549(iParam0, (1 << 15), 1))
				{
					iVar2 = func_728(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_235(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_549(iParam0, (1 << 15), 1))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_727(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_728(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_728(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_727(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_730(iParam0, 0);
	return 1;
}

int func_570(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_571(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

void func_572()
{
	if (func_601(0))
	{
		func_731(0);
	}
	if (func_601(1))
	{
		func_731(1);
	}
	if (func_601(5))
	{
		func_731(5);
	}
	if (func_601(6))
	{
		func_732(6);
	}
}

void func_573(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &sVar0, 2, 2);
}

int func_574()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_575(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_576(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_577(int iParam0)
{
	struct<5> /*40*/ sVar0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { sVar0 /*5*/ };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { sVar0 /*5*/ };
	Global_1898164.f_162--;
	func_450(iParam0, Global_1898164.f_162);
	return 1;
}

int func_578()
{
	return Global_40.f_11095.f_35;
}

float func_579(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_580(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_733(bParam1);
	}
}

void func_581(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_582(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_583(int iParam0)
{
	Vector3 vVar0;

	if (!func_734(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&vVar0);
		return true;
	}
	return false;
}

bool func_584(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_734(23, &sVar0))
	{
		return false;
	}
	sVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = -57097983;
		sVar0.f_3 = iParam0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
		{
			sVar0.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
			*iParam1 = uVar5;
			sVar0.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_585(int iParam0)
{
	return iParam0;
}

int func_586(int iParam0)
{
	Vector3 vVar0;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_587()
{
	int iVar0;

	iVar0 = func_390();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
		default:
			break;
	}
	return joaat("SHOP_HONOR_AMORAL");
}

void func_588(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_589(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_590(int iParam0, int iParam1, int iParam2)
{
	if (!func_589(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			break;
		case 12:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			break;
		case 16:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return false;
	}
	return true;
}

bool func_591(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_592(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;

	if (Global_1946054.f_2535.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1946054.f_2535.f_2 = 0;
		Global_1946054.f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1946054.f_2535.f_43[iVar0 /*2*/] = { sVar2 /*2*/ };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946054.f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_735(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1946054.f_2535.f_2 -= (Global_1946054.f_2535.f_2 && Global_1946054.f_2535.f_43[iVar0 /*2*/].f_1);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_736(iVar1, Global_1946054.f_2535.f_43[iVar0 /*2*/].f_1))
		{
			func_737(iVar1, Global_1946054.f_2535.f_43[iVar0 /*2*/].f_1);
		}
		iVar1++;
	}
	Global_1946054.f_2535.f_1--;
	Global_1946054.f_2535.f_43[iVar0 /*2*/] = { Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/] /*2*/ };
	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/].f_1 = 0;
	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/] = 0;
	return true;
}

int func_593(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_639(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_639(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_738(0))
	{
	}
	func_641(&(Global_1946054.f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

int func_594(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_595(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_601(iParam0))
	{
		return;
	}
	iVar0 = func_600(iParam0);
	func_739(iParam0);
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_IS_PED_MODEL_SUPPRESSED(iVar1))
	{
		if (!func_740(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_741(iParam0, 0);
	func_381(iParam0);
}

void func_596(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;

	iParam0 = func_570(iParam0);
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
	func_742(&sVar0);
	func_743(iParam0, sVar0);
	func_744(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_745(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_746(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_747(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_748(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_749(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_750(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_751(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_752(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
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

void func_597(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_598(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_599(Vector3 vParam0)
{
	return func_753(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_600(int iParam0)
{
	iParam0 = func_570(iParam0);
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

bool func_601(int iParam0)
{
	iParam0 = func_570(iParam0);
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

bool func_602(int iParam0)
{
	int iVar0;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_601(iParam0))
	{
		return false;
	}
	iVar0 = func_600(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_603(int iParam0)
{
	int iVar0;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_601(iParam0))
	{
		return false;
	}
	iVar0 = func_600(iParam0);
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

void func_604(int iParam0)
{
	int iVar0;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_601(iParam0))
	{
		return;
	}
	iVar0 = func_600(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_605(int iParam0, int iParam1)
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
	func_732(iParam0);
	func_732(iParam0);
	func_754(iParam0, iParam1);
	func_755(iParam0, iParam1);
	func_756(iParam0, iParam1);
	iVar1 = func_600(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_757(iVar1);
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
	iVar3 = func_600(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_757(iVar3);
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
	func_572();
}

bool func_606()
{
	int iVar0;

	iVar0 = func_758();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_607()
{
	int iVar0;

	iVar0 = func_758();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_759(0);
}

void func_608(Vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 /*3*/ };
}

int func_609(int iParam0)
{
	iParam0 = func_570(iParam0);
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

int func_610(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_611(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_760(&uVar0, &uVar1, &uVar2);
	func_761(iParam0, uVar0);
	func_762(iParam0, uVar1);
	func_763(iParam0, uVar2);
	func_764(iParam0, 1);
	func_765(iParam0, 1);
}

void func_612(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_766(iParam0, 1);
}

void func_613(int iParam0, Vector3 vParam1, var uParam4)
{
	iParam0 = func_570(iParam0);
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

bool func_614(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_767(iParam0, 1);
}

struct<2> /*16*/ func_615(int iParam0)
{
	struct<2> /*16*/ sVar0;
	var uVar2;
	var uVar3;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return sVar0;
	}
	if (iParam0 >= 7)
	{
		return sVar0;
	}
	if (!func_768(iParam0, &uVar2))
	{
	}
	if (!func_769(iParam0, &uVar3))
	{
	}
	sVar0.f_0 = uVar2;
	sVar0.f_1 = uVar3;
	return sVar0;
}

struct<6> /*48*/ func_616()
{
	struct<6> /*48*/ sVar0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_770(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		sVar0.f_4 = uVar6;
	}
	if (func_770(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		sVar0.f_0 = uVar7;
	}
	if (func_770(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		sVar0.f_2 = uVar8;
	}
	if (func_770(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		sVar0.f_5 = uVar9;
	}
	if (func_770(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		sVar0.f_3 = uVar10;
	}
	if (func_770(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		sVar0.f_1 = uVar11;
	}
	return sVar0;
}

void func_617(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_771(iParam0);
	func_772(iParam0, uParam1);
	func_773(iParam0);
	func_774(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_775(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

void func_618(int iParam0)
{
	iParam0 = func_570(iParam0);
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

bool func_619()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_4;
}

bool func_620(int iParam0)
{
	return func_621(23, iParam0);
}

bool func_621(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_776(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_777())
	{
		return func_776(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_776(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

void func_622(int iParam0, int iParam1)
{
	if (!func_124(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

void func_623(int iParam0)
{
	Global_1894899 |= iParam0;
}

void func_624(int iParam0)
{
	Global_1894899 -= (Global_1894899 & iParam0);
}

bool func_625()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_271(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1888801[iVar1 /*35*/].f_26)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[iVar1 /*35*/].f_26));
			}
		}
		if (Global_1888801[iVar1 /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iVar1 /*35*/].f_9, false))
			{
				if (func_106() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9, 523);
				}
				else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9))
				{
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1888801[iVar1 /*35*/].f_9);
				}
			}
			else if (func_271(iVar1, 2))
			{
				if (func_106() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[iVar1 /*35*/].f_26), 523);
				}
				else
				{
					SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(Global_1888801[iVar1 /*35*/].f_26)));
				}
			}
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[iVar1 /*35*/].f_9))
			{
				Global_1888801[iVar1 /*35*/].f_9 = 0;
				func_359(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_626(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_627(var uParam0)
{
	func_778(uParam0, 0.0f);
}

bool func_628(var uParam0)
{
	return func_626(*uParam0, 2);
}

float func_629()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

int func_630(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_779(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

bool func_631()
{
	int iVar0;

	iVar0 = Global_1946054.f_529[9];
	iVar0 += Global_1946054.f_529[4];
	iVar0 += Global_1946054.f_529[10];
	iVar0 += Global_1946054.f_529[1];
	iVar0 += Global_1946054.f_529[2];
	iVar0 += Global_1946054.f_529[6];
	iVar0 += Global_1946054.f_529[29];
	iVar0 += Global_1946054.f_529[26];
	iVar0 += Global_1946054.f_529[18];
	iVar0 += Global_1946054.f_529[19];
	return iVar0 > 0;
}

bool func_632(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_425(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_780(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_781("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_782(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_783(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_784(iVar1);
				return true;
			}
			iVar3++;
		}
		func_784(iVar1);
	}
	return false;
}

int func_633(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_586(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_780(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_785(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_658(bParam2), iParam0, false);
	return iVar2;
}

int func_634()
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_786(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_786(iVar0)) || iVar0 == joaat("WEAPON_LASSO"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_635(int iParam0)
{
	int iVar0;

	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/] = iParam0;
	iVar0 = Global_1946054.f_2535.f_2 ^ -1;
	iVar0 = (iVar0 & -iVar0);
	Global_1946054.f_2535.f_2 |= iVar0;
	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/].f_1 = iVar0;
	Global_1946054.f_2535.f_1++;
	return iVar0;
}

bool func_636(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -696754231)
	{
		iVar0 = joaat("MP_COMPONENT_TYPE_NECKWEAR_1");
		if (func_423(func_787(iVar0)) != joaat("CI_CATEGORY_WARDROBE_MASK"))
		{
			return false;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	*iParam1 = func_422(iVar0, 1);
	return true;
}

void func_637(int iParam0, int iParam1)
{
	Global_1946054.f_2535.f_3[iParam0] |= iParam1;
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return (1 << 9);
		case joaat("MPC_SYSTEM_TAG_INFO_EQUIPMENT"):
			return (1 << 10);
		case joaat("MPC_SYSTEM_TAG_INFO_HAND_APPAREL"):
			return (1 << 11);
		case joaat("MPC_SYSTEM_TAG_INFO_SATCHEL"):
			return (1 << 12);
		case joaat("MPC_SYSTEM_TAG_INFO_BASE_GUNBELT"):
			return (1 << 13);
		case joaat("MPC_SYSTEM_TAG_INFO_SECONDARY_HOLSTER"):
			return (1 << 14);
		case joaat("MPC_SYSTEM_TAG_INFO_NECKWEAR"):
			return (1 << 15);
		case -2125161702:
			return (1 << 17);
		case 1929486675:
			return (1 << 18);
		case joaat("MPC_SYSTEM_TAG_INFO_TORSO_APPAREL"):
			return (1 << 16);
		case 315750675:
			return (1 << 19);
		case joaat("MPC_SYSTEM_TAG_INFO_ALL"):
			return -1;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY"):
			return 112;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BUT_SATCHEL"):
			return 1136;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY_AND_SATCHEL"):
			return 4208;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY_AND_BASE_GUNBELT"):
			return 8304;
		case joaat("MPC_SYSTEM_TAG_INFO_SATCHEL_AND_SECONDARY_HOLSTER"):
			return 20480;
		case joaat("MPC_SYSTEM_TAG_INFO_BARBER_SHOP"):
			return 32833;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_HEAD"):
			return 96;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY_AND_SHACKLES"):
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case joaat("MPC_SYSTEM_TAG_INFO_NULL"):
			return 0;
		default:
			break;
	}
	return 0;
}

void func_639(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_788((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_789(sVar0);
}

bool func_640(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1946054.f_2535.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_779(iVar0, 1);
		if (func_790(iVar2, 2))
		{
		}
		else if (Global_1946054.f_2535.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_791(iVar0) == -1)
			{
				func_792(iVar0, 0);
				func_793(&(Global_1946054.f_2589.f_2[(Global_1946054.f_2589 - 1) /*2*/]), 2, 6);
			}
			func_794(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_641(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_106() != -1;
	Global_1946054.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_RESET_PED_COMPONENTS(iParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_EQUIP_META_PED_OUTFIT(iParam1, Global_1347477.f_189);
			}
			if ((Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK")) && Global_1347477.f_190 != 0)
			{
				PED::_EQUIP_META_PED_OUTFIT(iParam1, Global_1347477.f_190);
			}
			func_788((1 << 18));
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_795(iParam1, 29, bVar4, 1, 0);
			func_795(iParam1, 31, bVar4, 1, 0);
			func_795(iParam1, 30, bVar4, 1, 0);
			func_795(iParam1, 22, bVar4, 1, 0);
			func_795(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_796((1 << 15)) && func_790(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8)) && func_797(10, iParam3))
	{
		func_798(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = Global_1946054.f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_779(iVar1, 1);
			if (func_790(iVar3, 8))
			{
			}
			else if (Global_1946054.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_797(iVar1, iParam3))
				{
				}
				else if ((func_790(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == joaat("REMOVE_COMPONENT"))
				{
					if (!func_790(iVar3, 1) || bParam2)
					{
						Global_1946054.f_857++;
						if (!bParam6)
						{
							func_795(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("REMOVE_COMPONENT"))
						{
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = joaat("REMOVE_COMPONENT");
						}
						func_794(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_2456[iVar1 /*2*/]) && uParam0->f_1[iVar1 /*3*/].f_1 == Global_1946054.f_2456[iVar1 /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946054.f_57[iVar1 /*11*/].f_1 > 1)
							{
								func_795(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946054.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_790(iVar3, 1))
							{
								func_799(iVar3, 1, 6);
							}
							Global_1946054.f_857++;
							PED::_APPLY_SHOP_ITEM_TO_PED(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(iParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946054.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

int func_642(int iParam0)
{
	int iVar0;

	iVar0 = func_443(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_800(iVar0);
}

int func_643(int iParam0, int iParam1)
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
			func_801(iVar2);
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

void func_644()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

void func_645(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_444(iParam0);
	*uParam1 = func_445(iParam0);
	*uParam2 = func_446(iParam0);
}

void func_646(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { Global_1898164.f_1[iParam0 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam1 /*5*/] = { sVar0 /*5*/ };
}

void func_647(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_652(*uParam0, -1);
		func_653(*uParam0, 0);
		func_654(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[*uParam0]))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[*uParam0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[*uParam0]));
		}
	}
	*uParam0 = -1;
}

bool func_648(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

void func_649(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], iParam1);
		}
	}
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MODIFIER_GROUPING_LAGRAS_LEADER");
		case 5:
			return joaat("BLIP_MODIFIER_GROUPING_SAINT_DENIS_LEADER");
		case 26:
			return joaat("BLIP_MODIFIER_GROUPING_STRAWBERRY_LEADER");
		case 38:
			return joaat("BLIP_MODIFIER_GROUPING_BLACKWATER_LEADER");
		case 69:
			return joaat("BLIP_MODIFIER_GROUPING_EMERALD_RANCH_LEADER");
		case 76:
			return joaat("BLIP_MODIFIER_GROUPING_VALENTINE_LEADER");
		case 78:
			return joaat("BLIP_MODIFIER_GROUPING_ANNESBURG_LEADER");
		case 92:
			return joaat("BLIP_MODIFIER_GROUPING_VAN_HORN_LEADER");
		case 105:
			return joaat("BLIP_MODIFIER_GROUPING_RHODES_LEADER");
		case 115:
			return joaat("BLIP_MODIFIER_GROUPING_TUMBLEWEED_LEADER");
		case 120:
			return joaat("BLIP_MODIFIER_GROUPING_ARMADILLO_LEADER");
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER");
		default:
			break;
	}
	return 0;
}

void func_652(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_653(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_654(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

float func_655()
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

	if (func_802())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_803(2);
	}
	if (Global_1347477.f_119)
	{
		return func_803(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_804();
	fVar2 = func_805();
	fVar3 = func_806();
	fVar4 = func_807();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_808());
	fVar7 = (func_803(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_809(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_810(3, fVar9, fVar9 > 100.0f);
	return func_811(fVar7, -100.0f, 100.0f);
}

float func_656()
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

	if (func_802())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_803(1);
	}
	if (Global_1347477.f_119)
	{
		return func_803(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_804();
	fVar2 = func_805();
	fVar3 = func_806();
	fVar4 = func_807();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_808());
	fVar7 = (func_803(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_809(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_810(2, fVar9, fVar9 > 100.0f);
	return func_811(fVar7, -100.0f, 100.0f);
}

float func_657()
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

	if (func_802())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_803(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_812())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_813())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_803(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_804();
	fVar2 = func_805();
	fVar3 = func_806();
	fVar4 = func_807();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_808());
	fVar7 = (func_803(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_809(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_810(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_803(0);
	}
	return func_811(fVar7, -100.0f, 100.0f);
}

int func_658(bool bParam0)
{
	if (func_106() == -1)
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

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return 2;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			return 16;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			return 1;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return 4;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return 8;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			return 32;
		default:
			break;
	}
	return 0;
}

void func_660(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 -= (Global_1946054.f_2657.f_26.f_6 & iParam0);
}

void func_661(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 |= iParam0;
}

bool func_662(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_558(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_235(func_721(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_814(iParam0, 1, 0))
	{
		return false;
	}
	if (func_558(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("STATE_LEMOYNE");
		case 3:
			return joaat("STATE_WEST_ELIZABETH");
		case 1:
			return joaat("STATE_NEW_HANOVER");
		case 0:
			return joaat("STATE_AMBARINO");
		case 4:
			return joaat("STATE_NEW_AUSTIN");
		case 5:
			return joaat("STATE_GUARMA");
		default:
			break;
	}
	return 0;
}

bool func_664(int iParam0)
{
	if (!func_124(iParam0))
	{
		return false;
	}
	return func_271(iParam0, (1 << 26));
}

void func_665(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	strcpy_s(&cVar0, 64, func_815(iParam0));
	strcat_s(&cVar0, 64, "_OUTLINE");
	sVar8 = func_816(cVar0);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(sVar8), joaat("BLIP_STYLE_WANTED_REGION"));
}

void func_666(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	strcpy_s(&cVar0, 64, func_815(iParam0));
	strcat_s(&cVar0, 64, "_OUTLINE");
	sVar8 = func_816(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, joaat("BLIP_STYLE_WANTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iVar9);
	}
}

bool func_667(int iParam0, int iParam1)
{
	if (!func_97(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_431[iParam0] & iParam1) != 0;
	}
	return (Global_1058888.f_42269[iParam0] & iParam1) != 0;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		default:
			break;
	}
	return joaat("DISTRICT_INVALID");
}

int func_669(int iParam0)
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

int func_670(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	strcpy_s(&cVar0, 64, func_817(iParam0));
	sVar8 = func_816(cVar0);
	return MISC::GET_HASH_KEY(sVar8);
}

bool func_671(int iParam0)
{
	if (!func_550(iParam0))
	{
		return false;
	}
	if (!func_371(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_672(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	Vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_550(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || (Global_1391438.f_5 & 8) != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_558(iParam0, 2, 1))
			{
				func_556(iParam0, 2, 1);
			}
			if (func_549(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_551(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_372(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_235(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_235(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_818(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_551(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_819(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_551(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_819(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!func_558(iParam0, 44, 0))
			{
				func_551(iParam0, 44, 0);
			}
			if (func_820(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_819(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171 /*PCF_0x6868B572*/, true);
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_556(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130 /*PCF_DisableTalkTo*/, false);
			func_560(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_821(iParam0, 0, 0, 1);
			}
			func_556(iParam0, 33, 1);
			func_556(iParam0, 34, 1);
			func_556(iParam0, 29, 1);
			if (!func_174(vVar0) && bParam7)
			{
				func_819(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_819(iParam0, 4);
			}
			else
			{
				func_819(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_818(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_349(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, (1 << 30));
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], true))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_819(iParam0, 4);
			}
			else
			{
				func_819(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (func_822(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_823(iParam0, iParam13, 0);
						func_824(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_558(iParam0, 25, 0))
						{
							func_556(iParam0, 25, 0);
						}
						func_551(iParam0, 66, 0);
						func_819(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_819(iParam0, 5);
				}
				func_551(iParam0, 28, 1);
			}
			else
			{
				func_819(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_819(iParam0, 6);
			}
			break;
		case 6:
			if (func_235(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_SET_PED_DIRT_CLEANED(Global_1360165[iParam0 /*1157*/], 0.0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0.0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_825(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_826(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_819(iParam0, 7);
		case 7:
			func_560(iParam0, bParam9, bParam15, 0);
			func_553(iParam0, 4, bParam11);
			func_555(iParam0);
			if (bParam20)
			{
				if (func_827(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_828(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_819(iParam0, 0);
			func_829(iParam0, 16, 1);
			func_556(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_673(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;

	if (!func_566(iParam1))
	{
		return 0;
	}
	iVar0 = func_565(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !func_235(iVar0, 0)) || (bParam3 && !func_567(iParam1)))
	{
		if (bParam2)
		{
			if (func_726(iParam1, 1) != 0)
			{
				iVar0 = func_830(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*iParam0 = 1;
				return 0;
			}
		}
		else
		{
			*iParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_235(iVar0, 0))
	{
		*iParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		func_831(iParam1, iVar0);
		func_832(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*iParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_674(int iParam0, bool bParam1)
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_280(iParam0))
	{
		return false;
	}
	if (!func_833(iParam0) && bParam1)
	{
		return false;
	}
	return func_834(iParam0, 1);
}

int func_675(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_835(iParam0, 1))
	{
		return 0;
	}
	if (func_282(func_281(iParam0)))
	{
		iVar1 = func_283(iParam0);
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
	if ((bParam4 && !func_833(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171 /*PCF_0x6868B572*/, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_146(iParam0, 1);
	func_836(iParam0);
	if (bParam3)
	{
		func_146(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_676(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_834(iParam0, 2))
	{
		return 0;
	}
	if (func_282(func_281(iParam0)))
	{
		return func_837(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_838(iParam0), 0);
}

int func_677(var uParam0, var uParam1, int iParam2, Vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (fParam13 <= 0.0f)
	{
		iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_839(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_215(iVar0);
	return iVar1;
}

bool func_678(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if (uParam0->f_782[iVar0 /*11*/].f_1 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_679(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_840(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_680(var uParam0, var uParam1, int iParam2, Vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	iVar1 = func_841(uParam0, uParam1, iVar0, iParam2);
	func_215(iVar0);
	return iVar1;
}

bool func_681(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (uParam0->f_530[iVar0 /*10*/].f_1 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_682(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_519(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_842(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_843(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_683(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_684(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_13[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_685(var uParam0, int iParam1)
{
	struct<12> /*96*/ sVar0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 35)
	{
		if (uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { sVar0 /*12*/ };
			return;
		}
		iVar12++;
	}
}

int func_686(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_687(var uParam0, int iParam1)
{
	uParam0->f_11 |= iParam1;
}

void func_688(var uParam0, int iParam1)
{
	uParam0->f_11 -= (uParam0->f_11 & iParam1);
}

struct<8> /*64*/ func_689(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> /*64*/ sVar18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		strcpy_s(&cVar2, 64, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0));
	}
	else
	{
		strcpy_s(&cVar2, 64, sParam0);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		strcpy_s(&cVar10, 64, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1));
	}
	else
	{
		strcpy_s(&cVar10, 64, sParam1);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			strcpy_s(&cVar10, 64, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1));
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		strcpy_s(&cVar2, 64, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0));
	}
	sVar18 = { cVar2 /*8*/ };
	strcat_s(&sVar18, 64, &cVar10);
	return sVar18;
}

struct<4> /*32*/ func_690(var uParam0)
{
	return uParam0->f_440;
}

void func_691(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_844(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_844(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_845(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_788(8);
}

void func_692(var uParam0)
{
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

struct<8> /*64*/ func_693()
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "NormalStart");
	return cVar0;
}

char* func_694()
{
	return "unnamed";
}

void func_695(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iParam1, bParam2, iVar0);
}

void func_696(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_701(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_687(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_697(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_701(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (func_701(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_846(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
					if (iVar1 != Global_35 && !func_701(&(uParam0->f_13[iVar0 /*12*/]), 16))
					{
						func_847(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_698(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_699(int iParam0)
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

void func_700(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_699(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_848(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_849(iVar0);
	*uParam0 = 0;
}

bool func_701(var uParam0, int iParam1)
{
	return (uParam0->f_11 & iParam1) != 0;
}

char* func_702(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return "Arthur";
		case joaat("CS_ABE"):
			return "Abe";
		case joaat("CS_EDMUNDLOWRY"):
			return "EdmundLowry";
		case joaat("CS_ABERDEENPIGFARMER"):
			return "ABERDEENPIGFARMER";
		case joaat("CS_ABERDEENSISTER"):
			return "ABERDEENSISTER";
		case joaat("CS_ABIGAILROBERTS"):
			return "AbigailRoberts";
		case joaat("CS_ALBERTMASON"):
			return "AlbertMason";
		case joaat("CS_ARCHIEDOWN"):
			return "ArchieDown";
		case joaat("CS_BAPTISTE"):
			return "Baptiste";
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
			return "BartholomewBraithwaite";
		case joaat("CS_BEATENUPCAPTAIN"):
			return "CS_BEATENUPCAPTAIN";
		case joaat("CS_BEAUGRAY"):
			return "BeauGray";
		case joaat("CS_PENELOPEBRAITHWAITE"):
			return "PenelopeBraithwaite";
		case joaat("CS_BILLWILLIAMSON"):
			return "BillWilliamson";
		case joaat("CS_BRAITHWAITESERVANT"):
			return "BraithwaiteServant";
		case joaat("CS_CATHERINEBRAITHWAITE"):
			return "CatherineBraithwaite";
		case joaat("CS_CHARLESSMITH"):
			return "CharlesSmith";
		case joaat("CS_CIGCARDGUY"):
			return "CS_CIGCARDGUY";
		case joaat("CS_DINOBONESLADY"):
			return "CS_DINOBONESLADY";
		case joaat("CS_CLEET"):
			return "Cleet";
		case joaat("CS_COLMODRISCOLL"):
			return "ColmODriscoll";
		case joaat("CS_CREOLEGUY"):
			return "CreoleGuy";
		case joaat("CS_SDDOCTOR_01"):
			return "SDDoctor_01";
		case joaat("CS_DALEMARONEY"):
			return "DaleMaroney";
		case joaat("CS_DUTCH"):
			return "Dutch";
		case joaat("CS_EDITHDOWN"):
			return "EdithDown";
		case joaat("CS_FUSSAR"):
			return "Fussar";
		case joaat("CS_FISHCOLLECTOR"):
			return "cs_fishcollector";
		case joaat("CS_BRONTE"):
			return "Bronte";
		case joaat("CS_GUIDOMARTELLI"):
			return "GuidoMartelli";
		case joaat("U_M_M_NBXBRONTEGOON_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case joaat("CS_GARETHBRAITHWAITE"):
			return "GarethBraithwaite";
		case joaat("CS_GENSTORYFEMALE"):
			return "GenStoryFemale";
		case joaat("CS_GENSTORYMALE"):
			return "GenStoryMale";
		case joaat("CS_LEON"):
			return "Leon";
		case joaat("CS_GERALDBRAITHWAITE"):
			return "GeraldBraithwaite";
		case joaat("CS_HOSEAMATTHEWS"):
			return "HoseaMatthews";
		case joaat("CS_JACKMARSTON"):
			return "JackMarston";
		case joaat("CS_JACKMARSTON_TEEN"):
			return "JackMarston_Teen";
		case joaat("CS_JAMIE"):
			return "Jamie";
		case joaat("CS_JAVIERESCUELLA"):
			return "JavierEscuella";
		case joaat("CS_JIMCALLOWAY"):
			return "JimCalloway";
		case joaat("CS_JOE"):
			return "Joe";
		case joaat("CS_JOHNMARSTON"):
			return "JohnMarston";
		case joaat("CS_JOHNWEATHERS"):
			return "CS_JOHNWEATHERS";
		case joaat("CS_JOSIAHTRELAWNY"):
			return "JosiahTrelawny";
		case joaat("CS_KAREN"):
			return "Karen";
		case joaat("CS_MRSADLER"):
			return "MrsAdler";
		case joaat("CS_KIERAN"):
			return "Kieran";
		case joaat("CS_LEOSTRAUSS"):
			return "LeoStrauss";
		case joaat("CS_LONDONDERRYSON"):
			return "LondonderrySon";
		case joaat("CS_MARYBETH"):
			return "MaryBeth";
		case joaat("CS_MARYLINTON"):
			return "MaryLinton";
		case joaat("CS_MICAHBELL"):
			return "MicahBell";
		case joaat("CS_MOLLYOSHEA"):
			return "MollyOshea";
		case joaat("CS_MRLINTON"):
			return "CS_MrLinton";
		case joaat("CS_MRPEARSON"):
			return "MrPearson";
		case joaat("CS_MRSLONDONDERRY"):
			return "MrsLondonderry";
		case joaat("CS_MUD2BIGGUY"):
			return "Mud2BigGuy";
		case joaat("CS_PROFESSORBELL"):
			return "ProfessorBell";
		case joaat("CS_REVSWANSON"):
			return "RevSwanson";
		case joaat("CS_SAMARITAN"):
			return "CS_Samaritan";
		case joaat("CS_STRDEPUTY_01"):
			return "StrDeputy_01";
		case joaat("CS_STRDEPUTY_02"):
			return "StrDeputy_02";
		case joaat("CS_STRSHERIFF_01"):
		case joaat("U_M_M_STRSHERRIFF_01"):
			return "StrSheriff_01";
		case joaat("CS_SUSANGRIMSHAW"):
			return "SusanGrimshaw";
		case joaat("CS_TAVISHGRAY"):
			return "TavishGray";
		case joaat("CS_THEODORELEVIN"):
			return "TheodoreLevin";
		case joaat("CS_THOMASDOWN"):
			return "ThomasDown";
		case joaat("CS_TILLY"):
			return "Tilly";
		case joaat("CS_UNCLE"):
			return "Uncle";
		case joaat("G_M_M_UNICRIMINALS_01"):
			return "G_M_M_UniCriminals_01";
		case joaat("G_M_M_UNIDUSTER_01"):
			return "G_M_M_UNIDUSTER_01";
		case joaat("CS_VALSHERIFF"):
			return "CS_VALSHERIFF";
		case joaat("S_M_M_MARSHALLSRURAL_01"):
			return "S_M_M_MARSHALLSRURAL_01";
		case joaat("U_M_O_VHTEXOTICSHOPKEEPER_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case joaat("CS_SEAN"):
			return "Sean";
		case joaat("CS_LENNY"):
			return "Lenny";
		case joaat("CS_HERCULE"):
			return "Hercule";
		case joaat("CS_CREOLECAPTAIN"):
			return "CreoleCaptain";
		case joaat("U_M_M_CREOLECAPTAIN_01"):
			return "U_M_M_CREOLECAPTAIN_01";
		case joaat("CS_RINGMASTER"):
			return "RingMaster";
		case joaat("U_M_M_VALBARTENDER_01"):
			return "U_M_M_VALBARTENDER_01";
		case joaat("A_M_M_EMRFARMHAND_01"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("A_M_M_GRISURVIVALIST_01"):
			return "A_M_M_GriSurvivalist_01";
		case joaat("CS_LILLYMILLET"):
			return "LillyMillet";
		case joaat("A_F_M_STRTOWNFOLK_01"):
			return "A_F_M_STRTOWNFOLK_01";
		case joaat("A_M_M_STRTOWNFOLK_01"):
			return "A_M_M_STRTOWNFOLK_01";
		case joaat("S_M_M_STRLUMBERJACK_01"):
			return "S_M_M_STRLUMBERJACK_01";
		case joaat("G_M_M_UNICRIMINALS_02"):
			return "G_M_M_UniCriminals_02";
		case joaat("G_M_M_UNICORNWALLGOONS_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
		case joaat("A_M_M_NBXUPPERCLASS_01"):
			return "A_M_M_NBXUPPERCLASS_01";
		case joaat("A_F_M_NBXUPPERCLASS_01"):
			return "A_F_M_NBXUPPERCLASS_01";
		case joaat("A_M_M_VALFARMER_01"):
			return "A_M_M_VALFARMER_01";
		case joaat("A_M_M_VALTOWNFOLK_01"):
			return "A_M_M_VALTOWNFOLK_01";
		case joaat("A_M_M_VALTOWNFOLK_02"):
			return "A_M_M_VALTOWNFOLK_02";
		case joaat("A_F_M_VALTOWNFOLK_01"):
			return "A_F_M_VALTOWNFOLK_01";
		case joaat("U_M_M_NBXBARTENDER_01"):
			return "U_M_M_NBXBARTENDER_01";
		case joaat("CS_NBXEXECUTED"):
			return "NBXExecuted";
		case joaat("CS_RHODEPUTY_01"):
			return "RHODEPUTY_01";
		case joaat("U_M_M_RHDSHERIFF_01"):
			return "RHDSHERIFF_01";
		case joaat("CS_LEIGHGRAY"):
			return "LeighGray";
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return "Horse_01";
		case joaat("U_M_M_STRGENSTOREOWNER_01"):
			return "U_M_M_StrGenStoreOwner_01";
		case joaat("CS_TOMDICKENS"):
			return "TomDickens";
		case joaat("CS_DAVIDGEDDES"):
			return "DavidGeddes";
		case joaat("CS_ANSEL_ATHERTON"):
			return "ANSEL_ATHERTON";
		case joaat("CS_WROBEL"):
			return "CS_Wrobel";
		case joaat("A_C_COW"):
			return "COW";
		case joaat("A_C_BULL_01"):
			return "BULL";
		case joaat("CS_ALBERTCAKEESQUIRE"):
			return "ALBERTCAKEESQUIRE";
		case joaat("U_M_O_BLWGENERALSTOREOWNER_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case joaat("A_C_DOGCATAHOULACUR_01"):
			return "A_C_DOGCATAHOULACUR_01";
		case joaat("A_C_DOGRUFUS_01"):
			return "A_C_DOGRUFUS_01";
		case joaat("A_C_DOGLION_01"):
			return "A_C_DOGLION_01";
		case joaat("CS_TIGERHANDLER"):
			return "Handler";
		case joaat("CS_VALAUCTIONBOSS_01"):
			return "VALAUCTIONBOSS_01";
		case joaat("CS_NBXRECEPTIONIST_01"):
			return "NbxReceptionist_01";
		case joaat("U_M_M_BIVFOREMAN_01"):
			return "U_M_M_BiVForeman_01";
		case joaat("U_M_M_RACFOREMAN_01"):
			return "U_M_M_RACFOREMAN_01";
		case joaat("CS_CHAINPRISONER_01"):
			return "CHAINPRISONER_01";
		case joaat("CS_CHAINPRISONER_02"):
			return "CHAINPRISONER_02";
		case joaat("U_M_M_VALPOKERPLAYER_01"):
			return "U_M_M_ValPokerPlayer_01";
		case joaat("U_M_M_VALPOKERPLAYER_02"):
			return "U_M_M_ValPokerPlayer_02";
		case joaat("CS_DUNCANGEDDES"):
			return "DUNCANGEDDES";
		case joaat("CS_ANGUSGEDDES"):
			return "ANGUSGEDDES";
		case joaat("CS_EVELYNMILLER"):
			return "EvelynMiller";
		case joaat("CS_SISTERCALDERON"):
			return "SISTERCALDERON";
		case joaat("CS_EDGARROSS"):
			return "EDGARROSS";
		case joaat("CS_WINTONHOLMES"):
			return "U_M_M_GriSurvivalist_01";
		case joaat("U_F_M_RKSHOMESTEADTENANT_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("CS_ROCKYSEVEN_WIDOW"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("U_M_M_BHT_STRAWBERRYDUEL"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case joaat("U_M_M_RHDTRAINSTATIONWORKER_01"):
			return "StationWorker";
		case joaat("CS_LEVISIMON"):
			return "LEVISIMON";
		case joaat("S_M_M_FUSSARHENCHMAN_01"):
			return "S_M_M_GULFUSSARS_01";
		case joaat("A_C_DONKEY_01"):
			return "A_C_DONKEY_01";
		case joaat("A_M_M_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_01";
		case joaat("A_M_O_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_02";
		case joaat("U_M_O_VALBARTENDER_01"):
			return "U_M_O_ValBartender_01";
		case joaat("U_M_M_NBXBARTENDER_02"):
			return "U_M_M_NBXBARTENDER_02";
		case joaat("CS_UNIDUSTERJAIL_01"):
			return "CS_UNIDUSTERJAIL_01";
		case joaat("A_M_M_RHDTOWNFOLK_01"):
			return "A_M_M_RHDTOWNFOLK_01";
		case joaat("U_M_M_UNIBOUNTYHUNTER_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case joaat("U_M_M_UNIBOUNTYHUNTER_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case joaat("CS_BROTHERDORKINS"):
			return "BrotherDorkins";
		case joaat("G_M_M_UNIBRAITHWAITES_01"):
			return "G_M_M_UniBraithwaites_01";
		case joaat("A_M_M_GAMHIGHSOCIETY_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
		case joaat("U_M_M_STRFREIGHTSTATIONOWNER_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case joaat("CS_EAGLEFLIES"):
			return "EagleFlies";
		case joaat("CS_RAINSFALL"):
			return "CS_RAINSFALL";
		case joaat("A_M_M_WAPWARRIORS_01"):
			return "A_M_M_WapWarriors_01";
		case joaat("A_M_Y_NBXSTREETKIDS_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
		case joaat("U_M_M_BHT_SHACKESCAPE"):
			return "U_M_M_BHT_SHACKESCAPE";
		case joaat("A_M_M_HTLROUGHTRAVELLERS_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case joaat("CS_LEMIUXASSISTANT"):
			return "LemiuxAssistant";
		case joaat("P_KEYS01X"):
			return "p_keys01x";
		case joaat("CS_BALLOONOPERATOR"):
			return "CS_BALLOONOPERATOR";
		case joaat("A_M_M_BIVWORKER_01"):
			return "Worker1";
		case joaat("U_M_M_BHT_MINEFOREMAN"):
			return "U_M_M_BHT_MINEFOREMAN";
		case joaat("A_M_M_NBXSLUMS_01"):
			return "A_M_M_NbxSlums_01";
		case joaat("CS_SDPRIEST"):
			return "U_M_M_NBXPRIEST_01";
		case joaat("A_C_BEAR_01"):
			return "A_C_BEAR_01";
		case joaat("CS_MARSHALL_THURWELL"):
			return "MARSHALL_THURWELL";
		case joaat("CS_FAMOUSGUNSLINGER_02"):
			return "CS_FAMOUSGUNSLINGER_02";
		case joaat("CS_SD_STREETKID_01"):
			return "cs_sd_streetkid_01";
		case joaat("CS_SD_STREETKID_02"):
			return "cs_sd_streetkid_02";
		case joaat("CS_OBEDIAHHINTON"):
			return "ObediahHinton";
		case joaat("CS_POISONWELLSHAMAN"):
			return "PoisonWellShaman";
		case joaat("CS_COOPER"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("U_M_M_BHT_BENEDICTALLBRIGHT"):
			return "u_m_m_bht_benedictallbright";
		case joaat("CS_JULES"):
			return "Jules";
		case joaat("CS_MRDEVON"):
			return "MRDEVON";
		case joaat("CS_MRWAYNE"):
			return "MRWAYNE";
		case joaat("CS_PAYTAH"):
			return "PAYTAH";
		case joaat("CS_VALDEPUTY_01"):
			return "CS_VALDEPUTY_01";
		case joaat("MES_SADIE5_MALES_01"):
			return "MES_SADIE5_MALES_01^1";
		case joaat("A_M_M_NBXDOCKWORKERS_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
		case joaat("U_M_M_VALSHERIFF_01"):
			return "U_M_M_VALSHERIFF_01";
		case joaat("S_M_M_BANKCLERK_01"):
			return "S_M_M_BANKCLERK_01";
		case joaat("U_M_M_NBXBRONTEASC_01"):
			return "U_M_M_NBXBRONTEASC_01";
		case joaat("P_C_HORSE_01"):
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_703(int iParam0)
{
	return iParam0 != 0;
}

bool func_704(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

int func_705(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_704(iVar0, 2))
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
		func_850(iVar1, iParam1, sParam0, 0, iParam10, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, fParam6, fParam7, fParam8, bParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_706(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_699(iParam0))
	{
		return;
	}
	iVar0 = func_848(iParam0);
	func_851(iVar0, bParam1);
}

void func_707(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_699(iParam0))
	{
		return;
	}
	iVar0 = func_848(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TYPE(Global_1945188[iVar0 /*18*/].f_3, iParam1);
}

void func_708(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_699(iParam0))
	{
		return;
	}
	iVar0 = func_848(iParam0);
	if (bParam1)
	{
		func_852(iParam0, 4);
		func_851(iVar0, 1);
		func_853(iVar0, 1);
	}
	else
	{
		func_854(iParam0, 4);
		func_853(iVar0, 0);
	}
}

float func_709(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_699(iParam0))
	{
		return 0.0f;
	}
	iVar0 = func_848(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_710(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_699(iParam0))
	{
		return false;
	}
	iVar0 = func_848(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

int func_711(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_682(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = ENTITY::GET_ENTITY_MODEL(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
	}
	if (!func_518(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, sParam2))
		{
			func_855(uParam0, iParam1, 4);
			return 1;
		}
		else if (bParam5 && ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_444, sParam2))
		{
			func_855(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

void func_712(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_280(iParam0))
	{
		return;
	}
	if (!func_834(iParam0, 1))
	{
		return;
	}
	if (!func_834(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_833(iParam0)) && func_856(iParam0))
	{
		return;
	}
	func_213(iParam0, 1);
	func_857(iParam0);
	if (func_282(func_281(iParam0)))
	{
		iVar0 = func_283(iParam0);
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
			PED::SET_PED_CONFIG_FLAG(iVar1, 171 /*PCF_0x6868B572*/, false);
		}
		if (bParam1)
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		func_213(iParam0, 16);
	}
	if (func_834(iParam0, 128) && !bParam3)
	{
		func_858(iParam0, 0);
	}
}

void func_713(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_859(func_98(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

int func_714(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case joaat("REGION_FIRST"):
			return 0;
		case joaat("REGION_BAY_CRAWDADWILLIES"):
			return 0;
		case joaat("REGION_BAY_MACOMBS_END"):
			return 1;
		case joaat("REGION_BAY_MERKINSWALLER"):
			return 2;
		case joaat("REGION_BAY_LAGRAS"):
			return 3;
		case joaat("REGION_BAY_LAKAY"):
			return 4;
		case joaat("REGION_BAY_SAINT_DENIS"):
			return 5;
		case joaat("REGION_BAY_ORANGE_PLANTATION"):
			return 6;
		case joaat("REGION_BAY_SERIAL_KILLER"):
			return 7;
		case joaat("REGION_BAY_SERENDIPITY"):
			return 8;
		case joaat("REGION_BAY_SHADYBELLE"):
			return 9;
		case joaat("REGION_BAY_SILTWATERSTRAND"):
			return 10;
		case joaat("REGION_BGV_APPLESEEDTIMBER"):
			return 11;
		case joaat("REGION_BGV_BERYLS_DREAM"):
			return 12;
		case joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER"):
			return 13;
		case joaat("REGION_BGV_DAKOTARIVER_TRAPPER"):
			return 14;
		case joaat("REGION_BGV_FORTRIGGS"):
			return 15;
		case joaat("REGION_BGV_HANGINGDOG"):
			return 16;
		case joaat("REGION_BGV_LONEMULESTEAD"):
			return 17;
		case joaat("REGION_BGV_MISSING_HUSBAND"):
			return 18;
		case joaat("REGION_BGV_MONTO_REST"):
			return 19;
		case joaat("REGION_BGV_OWANJILA_DAM"):
			return 20;
		case joaat("REGION_BGV_PAINTEDSKY"):
			return 21;
		case joaat("REGION_BGV_PRONGHORN"):
			return 22;
		case joaat("REGION_BGV_RIGGS_STATION"):
			return 23;
		case joaat("REGION_BGV_SHACK"):
			return 24;
		case joaat("REGION_BGV_SHEPHERDS_RISE"):
			return 25;
		case joaat("REGION_BGV_STRAWBERRY"):
			return 26;
		case joaat("REGION_BGV_VALLEY_VIEW"):
			return 27;
		case joaat("REGION_BGV_WATSONSCABIN"):
			return 29;
		case joaat("REGION_BLU_CANEBREAK_MANOR"):
			return 30;
		case joaat("REGION_BLU_COPPERHEAD"):
			return 31;
		case joaat("REGION_BLU_SISIKA"):
			return 32;
		case joaat("REGION_CML_BACCHUSBRIDGE"):
			return 33;
		case joaat("REGION_CML_DINO_LADY"):
			return 34;
		case joaat("REGION_CML_OLDFORTWALLACE"):
			return 35;
		case joaat("REGION_CML_SIXPOINTCABIN"):
			return 36;
		case joaat("REGION_GRT_BEECHERS"):
			return 37;
		case joaat("REGION_GRT_BLACKWATER"):
			return 38;
		case joaat("REGION_GRT_QUAKERS_COVE"):
			return 39;
		case joaat("REGION_GRZ_ADLERRANCH"):
			return 40;
		case joaat("REGION_GRZ_DEAD_RIVAL"):
			return 41;
		case joaat("REGION_GRZ_CALUMETRAVINE"):
			return 50;
		case joaat("REGION_GRE_CIVIL_WAR_BRIDE"):
			return 51;
		case joaat("REGION_GRZ_CHEZPORTER"):
			return 42;
		case joaat("REGION_GRZ_COHUTTA"):
			return 52;
		case joaat("REGION_GRZ_COLTER"):
			return 43;
		case joaat("REGION_GRZ_FROZEN_EXPLORER"):
			return 44;
		case joaat("REGION_GRZ_GUNFIGHT"):
			return 53;
		case joaat("REGION_GRZ_MILLESANI_CLAIM"):
			return 45;
		case joaat("REGION_GRZ_MOUNTAIN_MAN"):
			return 46;
		case joaat("REGION_GRZ_STARVING_CHILDREN"):
			return 47;
		case joaat("REGION_GRZ_TEMPEST_RIM"):
			return 48;
		case joaat("REGION_GRZ_THELOFT"):
			return 54;
		case joaat("REGION_BGV_WALLACE_STATION"):
			return 28;
		case joaat("REGION_GRE_VETERAN"):
			return 55;
		case joaat("REGION_GRZ_WAPITI"):
			return 56;
		case joaat("REGION_GRZ_WINTERMINING_TOWN"):
			return 49;
		case joaat("REGION_GUA_AGUASDULCES"):
			return 57;
		case joaat("REGION_GUA_CAMP"):
			return 58;
		case joaat("REGION_GUA_CINCOTORRES"):
			return 59;
		case joaat("REGION_GUA_LACAPILLA"):
			return 60;
		case joaat("REGION_GUA_MANICATO"):
			return 61;
		case joaat("REGION_HRT_ABANDONED_MILL"):
			return 62;
		case joaat("REGION_HRT_CARMODYDELL"):
			return 64;
		case joaat("REGION_HRT_CORNWALLKEROSENE"):
			return 65;
		case joaat("REGION_HRT_CROP_FARM"):
			return 66;
		case joaat("REGION_HRT_CUMBERLANDFALLS"):
			return 67;
		case joaat("REGION_HRT_DOWNSRANCH"):
			return 68;
		case joaat("REGION_HRT_EMERALDRANCH"):
			return 69;
		case joaat("REGION_HRT_GRANGERS_HOGGERY"):
			return 70;
		case joaat("REGION_HRT_HORSESHOEOVERLOOK"):
			return 71;
		case joaat("REGION_HRT_LARNEDSOD"):
			return 72;
		case joaat("REGION_HRT_LOONY_CULT"):
			return 73;
		case joaat("REGION_HRT_LUCKYSCABIN"):
			return 74;
		case joaat("REGION_HRT_SWANSONS_STATION"):
			return 75;
		case joaat("REGION_HRT_VALENTINE"):
			return 76;
		case joaat("REGION_ROA_ABERDEENPIGFARM"):
			return 77;
		case joaat("REGION_ROA_ANNESBURG"):
			return 78;
		case joaat("REGION_ROA_BEECHERS_C"):
			return 63;
		case joaat("REGION_ROA_BEAVERHOLLOW"):
			return 79;
		case joaat("REGION_ROA_BLACK_BALSAM_RISE"):
			return 80;
		case joaat("REGION_ROA_BRANDYWINE_DROP"):
			return 81;
		case joaat("REGION_ROA_BUTCHERCREEK"):
			return 82;
		case joaat("REGION_ROA_DOVERHILL"):
			return 83;
		case joaat("REGION_ROA_HAPPY_FAMILY"):
			return 84;
		case joaat("REGION_ROA_ISOLATIONIST"):
			return 85;
		case joaat("REGION_ROA_MACLEANSHOUSE"):
			return 86;
		case joaat("REGION_ROA_MOSSY_FLATS"):
			return 87;
		case joaat("REGION_ROA_ROANOKE_VALLEY"):
			return 88;
		case joaat("REGION_ROA_ROCKYSEVEN"):
			return 89;
		case joaat("REGION_ROA_TRAPPER"):
			return 90;
		case joaat("REGION_ROA_VANHORNMANSION"):
			return 91;
		case joaat("REGION_ROA_VANHORNPOST"):
			return 92;
		case joaat("REGION_SCM_BRAITHWAITEMANOR"):
			return 93;
		case joaat("REGION_SCM_BULGERGLADE"):
			return 94;
		case joaat("REGION_SCM_CALIGAHALL"):
			return 95;
		case joaat("REGION_SCM_CATFISHJACKSONS"):
			return 96;
		case joaat("REGION_SCM_CLEMENSCOVE"):
			return 97;
		case joaat("REGION_SCM_CLEMENSPOINT"):
			return 98;
		case joaat("REGION_SCM_HORSE_SHOP"):
			return 101;
		case joaat("REGION_SCM_LONNIESSHACK"):
			return 102;
		case joaat("REGION_SCM_LOVE_TRIANGLE"):
			return 103;
		case joaat("REGION_SCM_COMPSONS_STEAD"):
			return 99;
		case joaat("REGION_SCM_DAIRY_FARM"):
			return 100;
		case joaat("REGION_SCM_RADLEYS_PASTURE"):
			return 104;
		case joaat("REGION_SCM_RHODES"):
			return 105;
		case joaat("REGION_SCM_SLAVE_PEN"):
			return 106;
		case joaat("REGION_TAL_AURORA_BASIN"):
			return 107;
		case joaat("REGION_TAL_DEAD_SETTLER"):
			return 108;
		case joaat("REGION_TAL_COCHINAY"):
			return 109;
		case joaat("REGION_TAL_MANZANITAPOST"):
			return 110;
		case joaat("REGION_TAL_PACIFICUNIONRR"):
			return 111;
		case joaat("REGION_TAL_TANNERSREACH"):
			return 112;
		case joaat("REGION_TAL_TRAPPER"):
			return 113;
		case joaat("REGION_HEN_MACFARLANES_RANCH"):
			return 126;
		case joaat("REGION_HEN_THIEVES_LANDING"):
			return 127;
		case joaat("REGION_CHO_ARMADILLO"):
			return 120;
		case joaat("REGION_CHO_COOTS_CHAPEL"):
			return 121;
		case joaat("REGION_CHO_DON_JULIO_HOUSE"):
			return 122;
		case joaat("REGION_CHO_RIDGEWOOD_FARM"):
			return 124;
		case joaat("REGION_CHO_RILEYS_CHARGE"):
			return 123;
		case joaat("REGION_CHO_TWIN_ROCKS"):
			return 125;
		case joaat("REGION_GAP_GAPTOOTH_BREACH"):
			return 114;
		case joaat("REGION_GAP_TUMBLEWEED"):
			return 115;
		case joaat("REGION_GAP_RATHSKELLER_FORK"):
			return 116;
		case joaat("REGION_GAP_SOLOMONS_FOLLY"):
			return 129;
		case joaat("REGION_RIO_BENEDICT_POINT"):
			return 117;
		case joaat("REGION_RIO_FORT_MERCER"):
			return 118;
		case joaat("REGION_RIO_PLAIN_VIEW"):
			return 119;
		case joaat("REGION_CENTRALUNIONRR"):
			return 128;
		default:
			break;
	}
	return -1;
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISTRICT_BAYOU_NWA"):
			return 0;
		case joaat("DISTRICT_BIG_VALLEY"):
			return 1;
		case joaat("DISTRICT_BLUEGILL_MARSH"):
			return 2;
		case joaat("DISTRICT_CUMBERLAND_FOREST"):
			return 3;
		case joaat("DISTRICT_GREAT_PLAINS"):
			return 4;
		case joaat("DISTRICT_GRIZZLIES"):
			return 5;
		case joaat("DISTRICT_GRIZZLIES_EAST"):
			return 6;
		case joaat("DISTRICT_GRIZZLIES_WEST"):
			return 7;
		case joaat("DISTRICT_GUAMA"):
			return 8;
		case joaat("DISTRICT_HEARTLAND"):
			return 9;
		case joaat("DISTRICT_ROANOKE_RIDGE"):
			return 10;
		case joaat("DISTRICT_SCARLETT_MEADOWS"):
			return 11;
		case joaat("DISTRICT_TALL_TREES"):
			return 12;
		case joaat("DISTRICT_GAPTOOTH_RIDGE"):
			return 13;
		case joaat("DISTRICT_RIO_BRAVO"):
			return 14;
		case joaat("DISTRICT_CHOLLA_SPRINGS"):
			return 15;
		case joaat("DISTRICT_HENNIGANS_STEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

int func_717(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_718(var uParam0, int iParam1)
{
	return (*uParam0 & iParam1) != 0;
}

void func_719(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 |= iParam1;
	}
	else
	{
		*uParam0 -= (*uParam0 & iParam1);
	}
}

void func_720(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_860(iParam0);
		if (iVar0 != 0)
		{
			Global_1360165[iParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[iParam0 /*1157*/].f_1 = 0;
		}
	}
}

int func_721(int iParam0)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_722(int iParam0)
{
	if (func_550(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_721(iParam0)))
		{
			func_829(iParam0, (1 << 26), 1);
			func_556(iParam0, 19, 1);
		}
	}
}

float func_723(int iParam0)
{
	if (!func_566(iParam0))
	{
		return 0.0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_724(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_721(iParam0);
	iVar1 = func_557(iParam0, 0);
	func_861(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar1);
		if (bVar2)
		{
			PED::_UNRESERVE_AMBIENT_PEDS(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

float func_725(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0.0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_862(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_726(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (Global_1360165[iParam0 /*1157*/].f_127 != 0)
	{
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	switch (iParam0)
	{
		case 3:
			return joaat("PERSCHAR_COMP_HORSE_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_HORSE_CHARLES");
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_DUTCH");
		case 5:
			return joaat("PERSCHAR_COMP_HORSE_HOSEA");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_JAVIER");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_JOHN");
		case 9:
			return joaat("PERSCHAR_COMP_HORSE_LENNY");
		case 6:
			return joaat("PERSCHAR_COMP_HORSE_MICAH");
		case 11:
			return joaat("PERSCHAR_COMP_HORSE_SADIE");
		case 8:
			return joaat("PERSCHAR_COMP_HORSE_SEAN");
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
		case 20:
			return joaat("PERSCHAR_COMP_HORSE_KAREN");
		case 4:
			return joaat("PERSCHAR_COMP_HORSE_UNCLE");
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_127 = func_863(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_727(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_565(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_DELETE_CARRIABLE(&iVar3);
		}
		iVar2++;
	}
}

int func_728(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_864(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_729(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549.f_1675[iVar0 /*5*/].f_1 == iParam0)
		{
			Global_1357549.f_1675[iVar0 /*5*/].f_1 = -1;
			Global_1360165[iParam0 /*1157*/].f_127 = 0;
		}
		iVar0++;
	}
}

void func_730(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

void func_731(int iParam0)
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
	iVar0 = func_600(iParam0);
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
	if (func_767(iParam0, 64))
	{
		func_732(iParam0);
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
	bVar3 = func_131(42);
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
				func_865(&(Global_1900383[iParam0 /*45*/].f_27));
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
		func_732(iParam0);
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
		if (func_866(1) < 1)
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
		func_867(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_767(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_868(iParam0);
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
	fVar15 = func_869(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_870(iParam0))
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
		func_871(Global_1900383[iParam0 /*45*/].f_26);
		func_872(Global_1900383[iParam0 /*45*/].f_26);
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
	if (func_532(iVar0) && !bVar9)
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
	iVar21 = func_866(iParam0);
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

void func_732(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_733(bool bParam0)
{
	func_873(bParam0);
	Global_1954819.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	}
}

bool func_734(int iParam0, var uParam1)
{
	if (!func_874(iParam0))
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

int func_735(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2535.f_1)
	{
		if (Global_1946054.f_2535.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_736(int iParam0, var uParam1)
{
	return (Global_1946054.f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_737(int iParam0, var uParam1)
{
	Global_1946054.f_2535.f_3[iParam0] -= (Global_1946054.f_2535.f_3[iParam0] && uParam1);
}

bool func_738(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_779(iVar0, 1);
		if (!func_790(iVar2, 2))
		{
		}
		else if (Global_1946054.f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_791(iVar0) == -1)
			{
				func_792(iVar0, 0);
				func_793(&(Global_1946054.f_2589.f_2[(Global_1946054.f_2589 - 1) /*2*/]), 2, 6);
			}
			func_799(iVar2, 3, 6);
			Global_1946054.f_2456[iVar0 /*2*/] = 0;
			Global_1946054.f_2456[iVar0 /*2*/].f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

void func_739(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;
	int iVar6;
	int iVar7;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_600(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_875(iVar6);
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

bool func_740(int iParam0)
{
	if (!func_876(iParam0))
	{
		return false;
	}
	if (!func_877())
	{
		return true;
	}
	return false;
}

void func_741(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

void func_742(var uParam0)
{
	*uParam0 = joaat("HORSE_EQUIPMENT_MANE_DEFAULT");
	uParam0->f_1 = joaat("HORSE_EQUIPMENT_TAIL_DEFAULT");
}

void func_743(int iParam0, struct<2> /*16*/ sParam1)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_878(iParam0, sParam1.f_0))
	{
	}
	if (!func_879(iParam0, sParam1.f_1))
	{
	}
}

void func_744(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_880(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_745(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_746(var uParam0)
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

void func_747(var uParam0)
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

void func_748(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_749(int iParam0, var uParam1)
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

void func_750(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1.0f;
}

void func_751(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_752(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_753(int iParam0)
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

void func_754(int iParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::COPY_SCRIPT_STRUCT(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::COPY_SCRIPT_STRUCT(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_755(int iParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_756(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;
	bool bVar58;
	int iVar59;

	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!func_881(iParam0, &sVar0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_881(iParam1, &sVar29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_882(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_883(sVar0, sVar0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_884(sVar0, sVar29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_757(int iParam0)
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
	if (func_885(iParam0))
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
	if (func_375(iParam0))
	{
		iVar3 = func_376(iParam0);
		if (func_886(iVar3))
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

int func_758()
{
	return Global_1900383.f_393;
}

void func_759(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

int func_760(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_221())
	{
		if (func_887())
		{
			bVar0 = false;
			if (!func_132(Global_1835011[15 /*74*/].f_1, 1) && !func_131(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_888();
				*iParam1 = func_889();
				*uParam2 = func_890();
				return 1;
			}
			else
			{
				*uParam0 = func_891();
				*iParam1 = func_892();
				*uParam2 = func_893();
				return 1;
			}
		}
		else if (func_392())
		{
			if (!func_132(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_894();
				*iParam1 = func_895();
				*uParam2 = func_896();
				return 1;
			}
			else
			{
				*uParam0 = func_897();
				*iParam1 = func_898();
				*uParam2 = func_899();
				return 1;
			}
		}
	}
	else if (func_887())
	{
		*uParam0 = func_900();
		*iParam1 = func_901();
		*uParam2 = func_902();
		return 1;
	}
	else if (func_392())
	{
		*uParam0 = func_903();
		*iParam1 = func_904();
		*uParam2 = func_905();
		return 1;
	}
	return 0;
}

void func_761(int iParam0, var uParam1)
{
	iParam0 = func_570(iParam0);
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

void func_762(int iParam0, var uParam1)
{
	iParam0 = func_570(iParam0);
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

void func_763(int iParam0, var uParam1)
{
	iParam0 = func_570(iParam0);
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

void func_764(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

void func_765(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_609(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_760(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_906(iParam1);
	iVar5 = func_600(iParam0);
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

void func_766(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

bool func_767(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

bool func_768(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_881(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_907(sVar0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!func_425(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_769(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_881(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_907(sVar0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!func_425(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_770(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_908(856287005, iParam0))
	{
		return false;
	}
	sVar0 = { func_909() /*4*/ };
	*uParam1 = func_907(sVar0, iParam0, 0);
	if (!func_425(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_771(int iParam0)
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

void func_772(int iParam0, var uParam1)
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
	func_910(iParam0, *uParam1);
	func_910(iParam0, uParam1->f_1);
}

void func_773(int iParam0)
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

void func_774(int iParam0, var uParam1)
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
	func_910(iParam0, *uParam1);
	func_910(iParam0, uParam1->f_1);
	func_910(iParam0, uParam1->f_2);
	func_910(iParam0, uParam1->f_3);
	func_910(iParam0, uParam1->f_4);
	func_910(iParam0, uParam1->f_5);
}

int func_775(int iParam0, int iParam1, bool bParam2)
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

bool func_776(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_777()
{
	return Global_1109000.f_245;
}

void func_778(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_629() - fParam1);
	func_911(uParam0, 1);
	func_912(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

int func_779(int iParam0, int iParam1)
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

int func_780(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_586(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_428(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_913(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_781(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_658(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_782(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_783(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_784(int iParam0)
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

int func_785(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_914(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_916(&sVar0, func_915(0));
	}
	if (!func_917(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_784(iVar18);
	return iVar19;
}

bool func_786(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_787(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_422(iParam0, 1) /*3*/];
}

void func_788(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_789(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	switch (sParam0.f_0)
	{
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
		case 26:
			if (Global_1946054.f_850 >= 25)
			{
				return;
			}
			if (func_844(sParam0.f_0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946054.f_850)
				{
					iVar1 = ((Global_1946054.f_855 + iVar0) % 25);
					if ((Global_1946054.f_668[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_668[iVar1 /*4*/].f_1 == sParam0.f_1) && Global_1946054.f_668[iVar1 /*4*/].f_2 == sParam0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_845(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_788(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
			{
				return;
			}
			if (func_844(sParam0.f_0))
			{
				return;
			}
			func_845(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_788(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_918(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

bool func_790(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_422(iParam0, 1) /*11*/].f_10 & iParam1) != 0;
}

int func_791(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2589)
	{
		if (Global_1946054.f_2589.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_792(int iParam0, int iParam1)
{
	func_919(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_793(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

void func_794(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_422(iParam0, 1) /*11*/].f_10 |= iParam1;
}

void func_795(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_779(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == joaat("MP_COMPONENT_TYPE_HEADWEAR"))
		{
			iVar1 = func_920(iParam4);
		}
		else if (iParam4 != Global_1946054.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_SHOP_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_META_PED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_TAG_FROM_META_PED(iParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

bool func_796(int iParam0)
{
	return (Global_1946054 & iParam0) != 0;
}

bool func_797(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1) != 0;
}

void func_798(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_790(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 6))
	{
		if (bParam2)
		{
			func_795(iParam0, iVar0, func_106() != -1, 0, 0);
			func_794(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(iParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_799(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
	}
	Global_1946054.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

void func_799(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_422(iParam0, 1) /*11*/].f_10 -= (Global_1946054.f_57[func_422(iParam0, 1) /*11*/].f_10 & iParam1);
}

int func_800(int iParam0)
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

int func_801(int iParam0)
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

bool func_802()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_803(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_804()
{
	float fVar0;
	int iVar1;

	fVar0 = func_921(13);
	iVar1 = func_922(fVar0);
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

float func_805()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_806()
{
	if (func_923())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_807()
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

float func_808()
{
	return Global_1954815.f_3;
}

void func_809(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_924(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_810(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_924(iParam0, 2, 0, 0);
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

float func_811(float fParam0, float fParam1, float fParam2)
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

bool func_812()
{
	return func_921(12) <= -99.0f;
}

bool func_813()
{
	return func_921(12) >= 99.0f;
}

bool func_814(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	if (func_549(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_549(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_549(iParam0, 4, 1))
	{
		return false;
	}
	if (func_558(iParam0, 33, 1))
	{
		return false;
	}
	if (func_371(iParam0))
	{
		return false;
	}
	if (func_925(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549.f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

char* func_815(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_816(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_817(int iParam0)
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

void func_818(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_721(iParam0);
	if (!func_550(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
}

void func_819(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
}

bool func_820(int iParam0, Vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_926(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (func_121(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_120(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_926(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_927(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!func_928(iParam0, 0))
					{
						func_551(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { func_929(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) /*7*/ };
			if (!bParam6)
			{
				func_556(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!func_235(func_721(iParam0), 0))
			{
				return false;
			}
			if (iParam5 & iParam10)
			{
				if (!func_235(func_565(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_821(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_550(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_930(iParam0, bParam3);
	}
	else
	{
		func_931(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_932(iParam0, bParam3);
	}
	else
	{
		func_933(iParam0, bParam3);
	}
}

bool func_822(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_550(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_934(iParam0, iParam1);
	return bVar0;
}

void func_823(int iParam0, int iParam1, bool bParam2)
{
	if (!func_550(iParam0))
	{
		return;
	}
	if (!func_822(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_551(iParam0, 25, 1);
	}
}

void func_824(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_935(iParam2))
		{
			iVar0 = func_936(iParam2, -1);
			if (func_300(iParam1, iVar0))
			{
				if (func_937(iParam1, iVar0))
				{
					if (func_938(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_939(iParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(iParam1, iVar0);
				}
			}
		}
		func_302(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
		PED::_SET_PED_DIRT_CLEANED(iParam1, 0.0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_551(iParam0, 66, 0);
		}
	}
}

void func_825(int iParam0)
{
	func_296(iParam0);
	func_297(iParam0, 0);
}

void func_826(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), false);
			}
		}
	}
}

bool func_827(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_SEND_WEAPON_TO_INVENTORY(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_828(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_940(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_940(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_829(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_550(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] |= iParam1;
}

int func_830(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	Vector3 vVar0;
	int iVar3;
	char[] cVar4[8];
	char* sVar12;

	if (!func_566(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 /*3*/ };
	iVar3 = func_728(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (func_235(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_730(iParam0, 3);
			}
			else
			{
				if (!func_941(iParam0) && func_942(iParam0, &cVar4))
				{
					PERSCHAR::_SET_PERSCHAR_SCHEDULE(func_726(iParam0, 1), &cVar4);
				}
				func_568(iParam0, 256, 0);
				func_730(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return func_943();
				}
				if (bParam2 && !func_174(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!func_944(iParam0, vVar0, iParam6, iParam10))
				{
					return func_943();
				}
				if (func_235(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					func_730(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_235(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_730(iParam0, 1);
				return func_943();
			}
			if (!bParam9 || PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/].f_124))
			{
				func_730(iParam0, 3);
			}
			break;
		case 3:
			if (!func_235(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_730(iParam0, 1);
				return func_943();
			}
			if (bParam7)
			{
				if (!func_945(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return func_943();
				}
			}
			if ((bParam2 && !func_174(vVar0)) && !func_417(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_349(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, (1 << 30));
			}
			if (bParam1)
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (func_558(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_551(iParam0, 39, 1);
				func_568(iParam0, 8, 1);
				func_568(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			func_946(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = func_947(iParam0, func_392());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(func_726(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			func_556(iParam0, 40, 0);
			func_568(iParam0, 32, 0);
			func_730(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return func_943();
}

void func_831(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND(((float)iVar1 * 0.4f)), BUILTIN::ROUND(((float)iVar1 * 0.75f)));
			break;
		default:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND(((float)iVar1 * 0.1f)), BUILTIN::ROUND(((float)iVar1 * 0.4f)));
			break;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam1, 16, iVar0);
}

void func_832(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_550(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_948(func_565(iParam0), 1.0f, 0);
	}
	if (bParam1)
	{
		func_949(iParam0);
	}
	else
	{
		func_950(iParam0);
	}
	if (bParam2)
	{
		func_951(iParam0);
	}
	else
	{
		func_952(iParam0);
	}
}

bool func_833(int iParam0)
{
	if (!func_280(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_834(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_280(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] & iParam1) != 0;
}

bool func_835(int iParam0, bool bParam1)
{
	if (!func_280(iParam0))
	{
		return false;
	}
	if ((func_834(iParam0, 1) && !func_833(iParam0)) && func_856(iParam0))
	{
		return false;
	}
	if (!func_834(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_953(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_836(int iParam0)
{
	if (!func_280(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_837(int iParam0)
{
	int iVar0;

	iVar0 = func_283(iParam0);
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

int func_838(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1895087[iParam0 /*3*/]);
}

int func_839(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
				if (func_954(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_955(iVar2, uParam1))
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

void func_840(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_956(iParam1))
		{
			func_957(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_958(iParam0, 0, 1);
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
			func_959(iParam0, 0);
			bVar0 = true;
		}
		func_960(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_841(var uParam0, var uParam1, int iParam2, int iParam3)
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

char* func_842(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_961(iVar0);
}

char* func_843(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("CANOE"):
			return "CANOE";
		case joaat("WAGON02X"):
			return "WAGON02X";
		case joaat("WAGON04X"):
			return "WAGON04X";
		case joaat("WAGON05X"):
			return "WAGON05X";
		case joaat("CHUCKWAGON000X"):
			return "CHUCKWAGON000X";
		case joaat("WAGONCIRCUS02X"):
			return "WAGONCIRCUS02X";
		case joaat("COACH2"):
			return "COACH2";
		case joaat("PRIVATECOALCAR01X"):
			return "PRIVATECOALCAR01X";
		case joaat("NORTHPASSENGER01X"):
			return "NORTHPASSENGER01X";
		case joaat("PRIVATESTEAMER01X"):
			return "PRIVATESTEAMER01X";
		case joaat("PRIVATEDINING01X"):
			return "PRIVATEDINING01X";
		case joaat("UTILLIWAG"):
			return "UTILLIWAG";
		case joaat("SKIFF"):
			return "SKIFF";
		case joaat("HANDCART"):
			return "HANDCART";
		case joaat("ROWBOATSWAMP"):
			return "ROWBOATSWAMP";
		case joaat("ROWBOATSWAMP02"):
			return "ROWBOATSWAMP02";
	}
	return "";
}

bool func_844(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_845(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

void func_846(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(uParam0->f_444, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_444, sParam1, iParam2, iParam3);
}

void func_847(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
		iVar0++;
	}
}

int func_848(int iParam0)
{
	return iParam0;
}

void func_849(int iParam0)
{
	if (!func_962(iParam0))
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

void func_850(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_851(iParam0, 1);
	func_853(iParam0, 1);
	func_854(iParam0, 128);
}

void func_851(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_704(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_852(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_853(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_854(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_855(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			func_687(&(uParam0->f_13[iVar0 /*12*/]), iParam2);
		}
		iVar0++;
	}
}

bool func_856(int iParam0)
{
	if (!func_280(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_857(int iParam0)
{
	int iVar0;

	if (!func_280(iParam0))
	{
		return;
	}
	iVar0 = func_837(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_858(int iParam0, bool bParam1)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_834(iParam0, 2))
	{
		return 0;
	}
	if (func_281(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_283(iParam0)))
	{
		return 1;
	}
	if (func_834(iParam0, 1) && !bParam1)
	{
		func_146(iParam0, 128);
		return 1;
	}
	func_213(iParam0, 129);
	func_857(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_283(iParam0));
	func_963(iParam0, 0);
	return 1;
}

void func_859(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_964(iParam0, iParam1, 1))
	{
		iVar0 = func_539(iParam1);
		iVar1 = func_538(iParam0);
		iVar2 = (func_538(iParam0) - func_538(iParam1));
		iVar3 = (func_539(iParam0) - func_539(iParam1));
		iVar4 = (func_540(iParam0) - func_540(iParam1));
		iVar5 = (func_537(iParam0) - func_537(iParam1));
		iVar6 = (func_536(iParam0) - func_536(iParam1));
		iVar7 = (func_535(iParam0) - func_535(iParam1));
	}
	else
	{
		iVar0 = func_539(iParam0);
		iVar1 = func_538(iParam1);
		iVar2 = (func_538(iParam1) - func_538(iParam0));
		iVar3 = (func_539(iParam1) - func_539(iParam0));
		iVar4 = (func_540(iParam1) - func_540(iParam0));
		iVar5 = (func_537(iParam1) - func_537(iParam0));
		iVar6 = (func_536(iParam1) - func_536(iParam0));
		iVar7 = (func_535(iParam1) - func_535(iParam0));
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
		iVar4 += func_541(iVar0, iVar1);
		iVar3--;
		iVar0 = BUILTIN::ROUND(func_965(BUILTIN::TO_FLOAT(iVar0 + 1), 0.0f, 12.0f));
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
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

int func_860(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("PERSCHAR_COMP_JOHN");
		case 0:
			return joaat("PERSCHAR_COMP_DUTCH");
		case 6:
			return joaat("PERSCHAR_COMP_MICAH");
		case 3:
			return joaat("PERSCHAR_COMP_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_CHARLES");
		case 4:
			return joaat("PERSCHAR_COMP_UNCLE");
		case 2:
			return joaat("PERSCHAR_COMP_JAVIER");
		case 5:
			return joaat("PERSCHAR_COMP_HOSEA");
		case 8:
			return joaat("PERSCHAR_COMP_SEAN");
		case 9:
			return joaat("PERSCHAR_COMP_LENNY");
		case 13:
			return joaat("PERSCHAR_COMP_ABIGAIL");
		case 14:
			return joaat("PERSCHAR_COMP_JACK");
		case 15:
			return joaat("PERSCHAR_COMP_MARYBETH");
		case 16:
			return joaat("PERSCHAR_COMP_MOLLY");
		case 17:
			return joaat("PERSCHAR_COMP_PEARSON");
		case 18:
			return joaat("PERSCHAR_COMP_STRAUSS");
		case 19:
			return joaat("PERSCHAR_COMP_GRIMSHAW");
		case 20:
			return joaat("PERSCHAR_COMP_KAREN");
		case 21:
			return joaat("PERSCHAR_COMP_SWANSON");
		case 22:
			return joaat("PERSCHAR_COMP_TILLY");
		case 23:
			return joaat("PERSCHAR_COMP_TRELAWNY");
		case 10:
			return joaat("PERSCHAR_COMP_KIERAN");
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
		case 26:
			return joaat("PERSCHAR_COMP_EAGLEFLIES");
		case 11:
			return joaat("PERSCHAR_COMP_SADIE");
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	}
	return 0;
}

void func_861(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_966(iParam1);
	}
}

float func_862(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_863(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_566(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549.f_1675[iVar1 /*5*/].f_1 == iParam0)
			{
				Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
				return Global_1357549.f_1675[iVar1 /*5*/];
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] != 0 && Global_1357549.f_1675[iVar1 /*5*/].f_1 == -1)
		{
			iVar0 = Global_1357549.f_1675[iVar1 /*5*/];
			Jump @165; // curOff = 150
		}
		iVar1++;
	}
	if (!func_566(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_864(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_566(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_726(iParam0, 1);
		iVar1 = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(iVar0);
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && iVar1 != Global_40.f_4942[iParam0 /*60*/].f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, Global_40.f_4942[iParam0 /*60*/].f_7);
		}
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_865(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_968(func_967(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_887())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_392();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_866(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_867(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_968(func_967(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_887())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_392())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_868(int iParam0)
{
	iParam0 = func_570(iParam0);
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

float func_869(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_870(int iParam0)
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

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return -1.0f;
	}
	if (iParam0 >= 7)
	{
		return -1.0f;
	}
	iVar0 = func_609(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1.0f;
	}
	iVar1 = func_866(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_866(iParam0) + 1;
	fVar6 = func_969(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_970(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_871(int iParam0)
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

void func_872(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
}

void func_873(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_874(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_875(int iParam0)
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

bool func_876(int iParam0)
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

bool func_877()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_878(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_881(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_971(iParam1, sVar0, joaat("SLOTID_HORSE_MANE"), 0) /*4*/ };
	return func_972(sVar29, 1);
}

bool func_879(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_881(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_971(iParam1, sVar0, joaat("SLOTID_HORSE_TAIL"), 0) /*4*/ };
	return func_972(sVar29, 1);
}

void func_880(var uParam0)
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

bool func_881(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_973(iParam0))
	{
		return false;
	}
	iVar0 = func_882(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	sVar15 = { func_974(0) /*4*/ };
	if (!func_975(sVar15, iVar0, &sVar1, 0, 0))
	{
		return false;
	}
	if (!func_976(&sVar1, uParam1))
	{
		return false;
	}
	return true;
}

int func_882(int iParam0)
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

bool func_883(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> /*96*/ sVar0;
	struct<4> /*32*/ sVar14;

	if (!func_977(bParam10))
	{
		return func_978(sParam0, sParam4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_979(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (func_980(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_658(0), &sParam0, &sParam4, iParam8, sVar0.f_11, &sVar14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_972(sVar14, 1))
		{
		}
	}
	return true;
}

bool func_884(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	int iVar28;

	if (!func_977(bParam9))
	{
		return func_981(sParam0, sParam4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	if (func_980(&sParam0, &sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_979(sParam0, &sVar0, bParam9, 1) || !func_979(sParam4, &sVar14, bParam9, 1))
	{
		return false;
	}
	if (func_980(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return false;
	}
	iVar28 = func_658(0);
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

bool func_885(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_982(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_886(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

bool func_887()
{
	if (func_106() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_888()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_889()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_890()
{
	return 1;
}

int func_891()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_892()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_893()
{
	return 1;
}

int func_894()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_895()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_896()
{
	return 2;
}

int func_897()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_898()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_899()
{
	return 1;
}

int func_900()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_901()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_902()
{
	return 1;
}

int func_903()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_904()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_905()
{
	return 1;
}

void func_906(int iParam0)
{
	if (func_983() < iParam0)
	{
		func_984(iParam0);
	}
}

int func_907(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (func_985(sParam0, iParam4, &sVar0, iParam5))
	{
		return sVar0.f_4;
	}
	return 0;
}

bool func_908(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_423(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_986(iParam0);
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

struct<4> /*32*/ func_909()
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_974(0) /*4*/ };
	return func_971(856287005, sVar0, joaat("SLOTID_CARRIED_HORSE_EQUIPMENT"), 0);
}

void func_910(int iParam0, int iParam1)
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

void func_911(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_912(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_913(int iParam0, var uParam1, var uParam2)
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

struct<18> /*144*/ func_914(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> /*32*/ func_915(bool bParam0)
{
	int iVar0;

	iVar0 = func_658(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_971(joaat("CARRIED_WEAPONS"), func_974(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_971(joaat("CARRIED_WEAPONS"), func_974(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_971(joaat("CARRIED_WEAPONS"), func_974(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_916(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_917(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_658(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_918(var uParam0, var uParam1, var uParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = uParam2;
	sVar0.f_0 = uParam0;
	sVar0.f_2 = uParam1;
	func_691(sVar0);
}

void func_919(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_987(uParam0, 1))
	{
		func_988(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_920(int iParam0)
{
	int iVar0;

	iVar0 = func_423(iParam0);
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return joaat("HATS");
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return joaat("MASKS_LARGE");
		default:
			break;
	}
	return 0;
}

float func_921(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_922(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

bool func_923()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

char* func_924(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_989(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_989(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

bool func_925(int iParam0)
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
	{
		return true;
	}
	return false;
}

int func_926(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_566(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_132(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_990(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_132(Global_1347702[63 /*49*/].f_15, 1) || func_120(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_990(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_132(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_549(18, (1 << 27), 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_990(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_132(Global_1347702[134 /*49*/].f_15, 1) || func_120(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_132(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_990(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = joaat("COMPANION_OUTFIT_DEFAULT");
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_991(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !func_132(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_721(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = iVar1[iVar11];
	}
	if (!func_822(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_927(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_928(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_371(iParam0) || func_558(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
	{
		return false;
	}
	iVar0 = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return iVar0 == joaat("SLEEP");
}

struct<7> /*56*/ func_929(int iParam0, int iParam1, Vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_3 = { vParam2 /*3*/ };
	sVar0.f_2 = uParam8;
	sVar0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(sVar0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(sVar0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(sVar0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(sVar0.f_6), 3);
	}
	return sVar0;
}

void func_930(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	bVar0 = func_721(iParam0);
	func_992(bVar0);
	func_551(iParam0, 60, 1);
	if (bParam1)
	{
		func_949(iParam0);
	}
}

void func_931(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	func_993(iVar0);
	func_556(iParam0, 60, 1);
	if (bParam1)
	{
		func_950(iParam0);
	}
}

void func_932(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	func_994(iVar0);
	if (iParam0 == 14)
	{
		func_995(iVar0);
	}
	func_551(iParam0, 61, 1);
	if (bParam1)
	{
		func_951(iParam0);
	}
}

void func_933(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	func_996(iVar0);
	func_556(iParam0, 61, 1);
	if (bParam1)
	{
		func_952(iParam0);
	}
}

bool func_934(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_566(iParam0))
	{
		return false;
	}
	func_997(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

bool func_935(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_936(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
		case 2094043703:
			return joaat("META_OUTFIT_COLD_WEATHER_INJURED");
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return joaat("META_OUTFIT_ISLAND");
		case 1593315648:
			return joaat("META_OUTFIT_ISLAND_HOLSTER");
		case -1559986688:
			return 174754238;
		case 1071744295:
			return joaat("META_OUTFIT_PRISON");
		case 977450639:
			return 2111449038;
		case 1901494236:
			return joaat("META_OUTFIT_PROSTITUTE");
		case 713940276:
			return -1949892659;
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
		case 283037683:
			return joaat("META_OUTFIT_WARM_WEATHER_WORKING");
		case -2051275045:
			return joaat("META_OUTFIT_OUTLAW");
		case 1495063555:
			return joaat("META_OUTFIT_ROBBERY");
		case 1046468203:
			return joaat("META_OUTFIT_ROBBERY_ALT");
		case 1018353621:
			return joaat("META_OUTFIT_HEIST");
		case -433615745:
			return 643643053;
		case 777603945:
			return joaat("META_OUTFIT_KIDNAPPED");
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return joaat("META_OUTFIT_GUARD");
		case -1684458716:
			return 1976273473;
		case -973332710:
			return joaat("META_OUTFIT_BEATUP");
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
				default:
					break;
			}
			return joaat("META_OUTFIT_WARM_WEATHER");
		case 1205492208:
			return joaat("META_OUTFIT_WARM_WEATHER_PANTS");
		case 1199580439:
			return joaat("META_OUTFIT_COMBAT");
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_998(296923297, iParam1);
			return func_999(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_998(1237718549, iParam1);
			return func_999(iVar0);
		case -23947011:
			return joaat("META_OUTFIT_COOL_WEATHER_CASUAL");
		case 1295334688:
			return 869636257;
		case 1200878026:
			return joaat("META_OUTFIT_WARM_WEATHER_INJURED");
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return joaat("META_OUTFIT_JAIL");
		case -571427255:
			return joaat("META_OUTFIT_JAIL_ARMED");
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return joaat("META_OUTFIT_SHOOTOUT");
		case -445211559:
			return joaat("META_OUTFIT_SLEEPING");
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return joaat("META_OUTFIT_FISHING");
		case 876535472:
			return joaat("META_OUTFIT_ISLAND_INJURED");
		case -1205468859:
			return joaat("META_OUTFIT_SLEEPING");
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case joaat("COMPANION_OUTFIT_DEFAULT"):
			return joaat("META_OUTFIT_DEFAULT");
	}
	return joaat("META_OUTFIT_DEFAULT");
}

bool func_937(int iParam0, int iParam1)
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

bool func_938(int iParam0, int iParam1)
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
	if (!func_300(iParam0, iVar0))
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

void func_939(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_940(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_783(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_783(iVar4) && iVar4 != iVar0)
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
	if (func_106() == -1 && !func_1000(iVar0))
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
				if (func_1000(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_783(iVar0))
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
		func_1001(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_1002(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1003(iVar0))
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

bool func_941(int iParam0)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_127)
	{
		case joaat("PERSCHAR_COMP_HORSE_COMMON_2"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_3"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_1"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_4"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_5"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_942(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "colter/col_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "colter/col_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "colter/col_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "colter/col_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "colter/col_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "colter/col_default_horse_john");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "colter/col_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "colter/col_default_horse_micah");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "colter/col_default_horses1");
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_john");
					return true;
				case 10:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horses1");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_sadie");
					return true;
				case 8:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_sean");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_uncle");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horses1");
			return true;
		case 2:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_john");
					return true;
				case 10:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_kieran");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_sadie");
					return true;
				case 8:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_sean");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_uncle");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "clemensPoint/clm_default_horses1");
			return true;
		case 3:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_john");
					return true;
				case 10:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horses1");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_sadie");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_uncle");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "shadyBelle/shb_default_horses1");
			return true;
		case 5:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_dutch");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_john");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_sadie");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "lakay/lak_default_horses1");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "lakay/lak_default_horses1");
			return true;
		case 6:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_dutch");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_john");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_sadie");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horses1");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horses1");
			return true;
		case 8:
			strcpy_s(sParam1, 64, "beechersHope/bch_default_horses");
			return true;
	}
	return false;
}

int func_943()
{
	return -1;
}

bool func_944(int iParam0, Vector3 vParam1, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489.f_12) || (bParam5 && Global_1359489.f_13 < 8))
	{
		if (Global_1360165[iParam0 /*1157*/].f_125 <= 300)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(Global_1360165[iParam0 /*1157*/].f_126))
			{
				PERSCHAR::_REVIVE_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126);
			}
			if (bParam5)
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_126, false);
				Global_1359489.f_13++;
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126, false);
			}
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_126);
			Global_1360165[iParam0 /*1157*/].f_125++;
		}
		else
		{
			iVar0 = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(func_726(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1360165[iParam0 /*1157*/].f_124 = func_679(iVar0, vParam1, iParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126);
			}
		}
		if (!func_235(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			return false;
		}
		Global_1359489.f_12 = 1;
		func_568(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_945(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return false;
	}
	if (func_1004(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_235(iParam1, iVar0))
	{
		return false;
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam1, func_1005(iParam0));
	PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
	func_568(iParam0, 256, 1);
	return true;
}

void func_946(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	func_960(iParam0, func_1006(iParam1));
	if (func_1004(iParam1, 8))
	{
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 412 /*PCF_BlockHorsePromptsForTargetPed*/, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 412 /*PCF_BlockHorsePromptsForTargetPed*/, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_721(iParam1)))
	{
		PED::SET_PED_OWNS_ANIMAL(func_721(iParam1), iParam0, false);
		PED::_0xED1C764997A86D5A(func_721(iParam1), iParam0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 367 /*PCF_0x0E3CB695*/, true);
	}
	else
	{
		func_551(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 172 /*PCF_ForceDeepSurfaceCheck*/, true);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 324 /*PCF_0x8D1AEDEF*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330 /*PCF_0x7C7AF264*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331 /*PCF_0x9663C8F2*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471 /*PCF_DisableHorseKick*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442 /*PCF_0x78525B66*/, true);
	if (func_1004(iParam1, (1 << 12)))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1 /*PCF_0x24B45566*/, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54 /*PCF_PreventAllMeleeTaunts*/, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121 /*PCF_ForceIgnoreMeleeActiveCombatant*/, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302 /*PCF_DisableMeleeKnockout*/, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1 /*PCF_0x24B45566*/, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54 /*PCF_PreventAllMeleeTaunts*/, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121 /*PCF_ForceIgnoreMeleeActiveCombatant*/, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302 /*PCF_DisableMeleeKnockout*/, true);
	}
	PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0, 2, false);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0, 3, false);
	func_832(iParam1, func_1004(iParam1, (1 << 13)), func_1004(iParam1, (1 << 14)), 1);
}

char* func_947(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_948(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_811(fParam1, 0.0f, 1.0f);
		iVar0 = BUILTIN::FLOOR((fParam1 * (float)ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2)));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

void func_949(int iParam0)
{
	bool bVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_565(iParam0);
	func_992(bVar0);
	func_568(iParam0, (1 << 13), 1);
}

void func_950(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_565(iParam0);
	func_993(iVar0);
	func_568(iParam0, (1 << 13), 0);
}

void func_951(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_565(iParam0);
	func_994(iVar0);
	func_568(iParam0, (1 << 14), 1);
}

void func_952(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_565(iParam0);
	func_996(iVar0);
	func_568(iParam0, (1 << 14), 0);
}

bool func_953(int iParam0, bool bParam1)
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_280(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_283(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_837(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_283(iParam0));
}

bool func_954(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_1007(iParam0))
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
		if (func_1008(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_955(int iParam0, var uParam1)
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

bool func_956(int iParam0)
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

void func_957(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_300(iParam0, iParam1))
		{
			if (func_937(iParam0, iParam1))
			{
				if (func_938(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_939(iParam0);
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

void func_958(int iParam0, int iParam1, bool bParam2)
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

void func_959(int iParam0, bool bParam1)
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

void func_960(int iParam0, int iParam1)
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

char* func_961(int iParam0)
{
	switch (iParam0)
	{
		case joaat("P_CS_LEDGER01X"):
			return "P_CS_LEDGER01X";
		case joaat("P_CS_ROPE01X"):
			return "P_CS_ROPE01X";
		case joaat("P_DOOR01X"):
			return "P_DOOR01X";
		case joaat("P_DOOR03X"):
			return "P_DOOR03X";
		case joaat("P_DOOR12X"):
			return "p_door12x";
		case joaat("P_DOOR13X"):
			return "P_DOOR13X";
		case joaat("P_DOOR45X"):
			return "p_door45x";
		case joaat("P_CHAIRVICTORIAN01X"):
			return "p_chairvictorian01x";
		case joaat("P_CRATE03X"):
			return "p_crate03x";
		case joaat("P_CS_JUG01X"):
			return "p_cs_jug01x";
		case joaat("P_CS_WAGON02X"):
			return "p_cs_wagon02x";
		case joaat("P_DOOR37X"):
			return "P_DOOR37X";
		case joaat("P_DOOR_VAL_GENSTORE"):
			return "p_door_val_genstore";
		case joaat("P_DOORSTRAWBERRY01X"):
			return "p_doorstrawberry01x";
		case joaat("P_DOORFRENCH01L"):
			return "p_doorfrench01l";
		case joaat("P_DOORFRENCH01R"):
			return "p_doorfrench01r";
		case joaat("P_DOORMANSIONGATE01X"):
			return "p_doormansiongate01x";
		case joaat("P_DOORNBD39X"):
			return "p_doornbd39x";
		case joaat("P_DOORSALOON02X"):
			return "p_doorsaloon02x";
		case joaat("P_DOORVH_SALOON_L"):
			return "P_DOORVH_SALOON_L";
		case joaat("P_DOORVH_SALOON_R"):
			return "P_DOORVH_SALOON_R";
		case joaat("P_CIGARLIT01X"):
			return "p_cigarlit01x";
		case joaat("P_PEBBLE01X"):
			return "p_pebble01x";
		case joaat("P_CS_ROPE03X"):
			return "p_cs_rope03x";
		case joaat("P_CARDS01X"):
			return "P_CARDS01X";
		case joaat("P_CS_POKERHAND01X"):
			return "P_CS_POKERHAND01X";
		case joaat("P_CS_POKERHAND02X"):
			return "P_CS_POKERHAND02X";
		case joaat("P_CS_HOLDEMHAND01X"):
			return "P_CS_HOLDEMHAND01X";
		case joaat("P_CS_HOLDEMHAND02X"):
			return "P_CS_HOLDEMHAND02X";
		case joaat("P_CS_BUCKET01X"):
			return "P_CS_BUCKET01X";
		case joaat("P_CS_SYRINGE01X"):
			return "p_cs_syringe01x";
		case joaat("P_BOTTLEJD01X"):
			return "p_bottleJD01x";
		case joaat("P_RAG02X"):
			return "p_rag02x";
		case joaat("P_MAGNETO02X"):
			return "p_magneto02x";
		case joaat("P_MAGNETO01X"):
			return "p_magneto01x";
		case joaat("P_CS_WANTEDALIVE01X"):
			return "p_cs_wantedalive01x";
		case joaat("P_CS_RCRIDETHELIGHTNING"):
			return "P_CS_RCRIDETHELIGHTNING";
		case joaat("P_PEN01X"):
			return "p_pen01x";
		case joaat("P_CS_LETTER01A_X"):
			return "p_cs_letter01a_x";
		case joaat("P_CS_ELECTRICCHAIR01X"):
			return "p_cs_electricchair01x";
		case joaat("P_CS_GENERATOR01X"):
			return "p_cs_generator01x";
		case joaat("P_CS_ELECTRICHELMET01X"):
			return "p_cs_electricHelmet01x";
		case joaat("P_CS_GAG01X"):
			return "p_cs_gag01x";
		case joaat("P_DOOR_SHA_MAN01X"):
			return "p_door_sha_man01x";
		case joaat("P_STOOL01X"):
			return "p_stool01x";
		case joaat("P_STOOL02X"):
			return "p_stool02x";
		case joaat("P_JUGGLINGBALL01X"):
			return "p_jugglingball01x";
		case joaat("P_CHAIR02X"):
			return "p_chair02x";
		case joaat("P_CHAIR04X"):
			return "p_chair04x";
		case joaat("P_CRATE15X"):
			return "p_crate15x";
		case joaat("P_CLEAVER01X"):
			return "p_cleaver01x";
		case joaat("P_BOTTLE003X"):
			return "p_bottle003x";
		case joaat("P_CS_BOOK02X"):
			return "p_cs_book02x";
		case joaat("P_STICKYDYMT_SINGLE"):
			return "p_stickydymt_single";
		case joaat("P_CS_FUSEDYNAMITE01X"):
			return "p_cs_fusedynamite01x";
		case joaat("P_DYNAMITE01X"):
			return "p_dynamite01x";
		case joaat("P_CS_FUSESPOOL01X"):
			return "p_cs_fusespool01x";
		case joaat("P_CS_DETONATOR01X"):
			return "p_cs_detonator01x";
		case joaat("P_CS_BEDROLLCLSD01X"):
			return "p_cs_bedrollclsd01x";
		case joaat("P_CIGARETTE_CS01X"):
			return "P_CIGARETTE_CS01X";
		case joaat("P_MATCHES01X"):
			return "P_MATCHES01X";
		case joaat("P_MATCHSTICK01X"):
			return "P_MATCHSTICK01X";
		case joaat("P_WOODENCHAIR01X"):
			return "P_WOODENCHAIR01X";
		case joaat("P_CHAIR_CRATE02X"):
			return "P_CHAIR_CRATE02X";
		case joaat("P_KNITTINGNEEDLE01X"):
			return "p_knittingneedle01x";
		case joaat("P_KNITTINGSQUARE01X"):
			return "p_knittingsquare01x";
		case joaat("P_CS_RABBITMEAT01X"):
			return "p_cs_rabbitMeat01x";
		case joaat("P_CS_RABBITMEAT02X"):
			return "p_cs_rabbitMeat02x";
		case joaat("P_BOTTLE03X"):
			return "p_bottle03x";
		case joaat("P_CS_BILLSTACK01X"):
			return "p_cs_billstack01x";
		case joaat("P_CS_BILLSINGLE01X"):
			return "p_cs_billSingle01x";
		case joaat("P_BINOCULARS01X"):
			return "p_binoculars01x";
		case joaat("P_DOORRHOSHERIFF02X"):
			return "p_doorrhosheriff02x";
		case joaat("P_BARSTOOL01X"):
			return "P_BARSTOOL01X";
		case joaat("P_CS_SHOTGLASS01X"):
			return "p_cs_shotglass01x";
		case joaat("P_LAMP18X"):
			return "p_lamp18x";
		case joaat("P_CLOCK06X"):
			return "p_clock06x";
		case joaat("P_BOTTLE02X"):
			return "p_bottle02x";
		case joaat("P_CS_LOOTSACK01X"):
			return "p_cs_lootSack01x";
		case joaat("P_WINEBOX01X"):
			return "p_wineBox01x";
		case joaat("P_STRONGBOX01X"):
			return "p_strongBox01x";
		case joaat("P_CLOCKTABLE02X"):
			return "P_CLOCKTABLE02X";
		case joaat("P_GEN_STATUE03B"):
			return "p_gen_statue03b";
		case joaat("P_STOOLWINTER01X"):
			return "P_STOOLWINTER01X";
		case joaat("P_CS_BARRAG01X"):
			return "P_CS_BARRAG01X";
		case joaat("P_PLATE01X"):
			return "P_PLATE01X";
		case joaat("P_KNIFE01X"):
			return "P_KNIFE01X";
		case joaat("P_KNIFE02X"):
			return "P_KNIFE02X";
		case joaat("P_CS_CATFISH_WHOLE01X"):
			return "P_CS_CATFISH_WHOLE01X";
		case joaat("P_CS_CATFISH_WHOLE01BX"):
			return "P_CS_CATFISH_WHOLE01BX";
		case joaat("P_WOODWHITTLE01X"):
			return "P_WOODWHITTLE01X";
		case joaat("P_STICKFIREPOKER01X"):
			return "P_STICKFIREPOKER01X";
		case joaat("P_CS_WOODPILE01X"):
			return "P_CS_WOODPILE01X";
		case joaat("P_FORK01X"):
			return "P_FORK01X";
		case joaat("P_KNIFE04X"):
			return "P_KNIFE04X";
		case joaat("P_KNIFE03X"):
			return "p_knife03x";
		case joaat("P_CS_BOTTLESLIM01X"):
			return "P_CS_BOTTLESLIM01X";
		case joaat("P_CS_BLANKET01X"):
			return "P_CS_BLANKET01X";
		case joaat("P_BEDROLLCLOSED01X"):
			return "P_BEDROLLCLOSED01X";
		case joaat("P_CS_KINDLING01X"):
			return "P_CS_KINDLING01X";
		case joaat("P_CIGARTHIN01X"):
			return "P_CIGARTHIN01X";
		case joaat("P_DOOR_WGLASS01X"):
			return "p_door_wglass01x";
		case joaat("P_BROOM02X"):
			return "p_broom02x";
		case joaat("P_AMB_CLIPBOARD_01"):
			return "P_AMB_CLIPBOARD_01";
		case joaat("P_CHAIR07X"):
			return "P_CHAIR07X";
		case joaat("P_CS_CRATETNT01X"):
			return "p_cs_cratetnt01x";
		case joaat("P_CS_FLOURBAG01X"):
			return "p_cs_flourbag01x";
		case joaat("P_CS_SUPPLIES01X"):
			return "p_cs_supplies01x";
		case joaat("P_CS_SUPPLIES02X"):
			return "p_cs_supplies02x";
		case joaat("P_CS_SUPPLIES03X"):
			return "p_cs_supplies03x";
		case joaat("P_DOOR04X"):
			return "p_door04x";
		case joaat("P_DOOR11X"):
			return "p_door11x";
		case joaat("P_DOORRHOSALOON01_L"):
			return "p_doorrhosaloon01_l";
		case joaat("P_DOORRHOSALOON01_R"):
			return "p_doorrhosaloon01_r";
		case joaat("P_VAL_GATE2M02X"):
			return "P_VAL_GATE2M02X";
		case joaat("P_CS_STMDNKY01X"):
			return "P_CS_STMDNKY01X";
		case joaat("P_CS_HOOKPULLEY01X"):
			return "P_CS_HOOKPULLEY01X";
		case joaat("P_CHAIR_CS05X"):
			return "P_CHAIR_CS05X";
		case joaat("P_CHAIR18X"):
			return "P_CHAIR_18X";
		case joaat("P_CHAIR19X"):
			return "P_CHAIR19X";
		case joaat("P_CHAIR20X"):
			return "P_CHAIR20X";
		case joaat("P_CHAIR05X"):
			return "P_CHAIR05X";
		case joaat("P_CHAIR22X"):
			return "p_chair22x";
		case joaat("P_GLASS01X"):
			return "p_glass01x";
		case joaat("P_DININGCHAIRS01X"):
			return "P_DININGCHAIRS01X";
		case joaat("P_WINDSORCHAIR03X"):
			return "P_WINDSORCHAIR03X";
		case joaat("P_WINDSORCHAIR02X"):
			return "P_WINDSORCHAIR02X";
		case joaat("P_DOOR_VAL_JAIL02X"):
			return "p_door_val_jail02x";
		case joaat("P_CRATETNT01X"):
			return "P_CRATETNT01X";
		case joaat("P_CRATETNT02X"):
			return "P_CRATETNT02X";
		case joaat("P_MONEYSTACK01X"):
			return "P_MONEYSTACK01X";
		case joaat("P_AXE01X"):
			return "P_AXE01X";
		case joaat("P_HOE01X"):
			return "P_HOE01X";
		case joaat("P_SHOVEL01X"):
			return "P_SHOVEL01X";
		case joaat("P_SHOVEL04X"):
			return "P_SHOVEL04X";
		case joaat("P_BROOM01X"):
			return "P_BROOM01X";
		case joaat("P_PITCHFORK01X"):
			return "P_PITCHFORK01X";
		case joaat("P_SCYTHE01X"):
			return "P_SCYTHE01X";
		case joaat("P_SKIFF02X"):
			return "P_SKIFF02x";
		case joaat("P_DOOR_NBX_DOC01X_L"):
			return "p_door_nbx_doc01x_l";
		case joaat("P_DOOR_NBX_DOC01X_R"):
			return "p_door_nbx_doc01x_r";
		case joaat("P_CS_CAMERA"):
			return "p_cs_camera";
		case joaat("P_CS_CAMERATRIPOD"):
			return "p_cs_cameratripod";
		case joaat("P_CS_CAMERABAG01X"):
			return "p_cs_camerabag01x";
		case joaat("P_CAMERAFLASH01X"):
			return "p_cameraflash01x";
		case joaat("P_CS_SHUTTERRELEASE"):
			return "p_cs_shutterrelease";
		case joaat("ROWBOATSWAMP"):
			return "rowboatswamp";
		case joaat("P_CHAIR25X"):
			return "P_CHAIR25X";
		case joaat("P_DOORBRAIT01BX"):
			return "P_DOORBRAIT01BX";
		case joaat("P_CS_MAP01X"):
			return "P_CS_MAP01X";
		case joaat("P_HAMMER03X"):
			return "p_hammer03x";
		case joaat("P_CS_NAILBARREL01X"):
			return "p_cs_nailbarrel01x";
		case joaat("P_CS_BOOK04X"):
			return "p_cs_book04x";
		case joaat("P_CS_FAN01X"):
			return "p_cs_Fan01x";
		case joaat("P_CS_LEDGERSMALL01X"):
			return "p_cs_ledgerSmall01x";
		case joaat("P_CS_ENVELOPE01X"):
			return "p_cs_envelope01x";
		case joaat("P_WRAPPEDMEAT01X"):
			return "p_wrappedmeat01x";
		case joaat("P_CS_LETTER02X"):
			return "P_CS_LETTER02X";
		case joaat("P_CS_BOOK03X"):
			return "p_cs_book03x";
		case joaat("P_CS_GIFTBOX01X"):
			return "p_cs_giftBox01x";
		case joaat("P_BOILER01X"):
			return "p_boiler01x";
		case joaat("P_BOILER02X"):
			return "p_boiler02x";
		case joaat("P_MUGCOFFEE01X"):
			return "p_mugCoffee01x";
		case joaat("P_GLASSTALLBEER01X"):
			return "p_glasstallbeer01x";
		case joaat("P_PITCHER02X"):
			return "p_pitcher02x";
		case joaat("P_TRAY03X"):
			return "p_tray03x";
		case joaat("P_SIT_CHAIRWICKER01B"):
			return "p_sit_chairwicker01b";
		case joaat("S_INV_ORLEANDER01CX"):
			return "S_INV_ORLEANDER01CX";
		case joaat("S_INV_ORLEANDER01DX"):
			return "S_INV_ORLEANDER01DX";
		case joaat("P_LADLE02X"):
			return "P_LADLE02X";
		case joaat("P_CS_POT01X"):
			return "P_CS_POT01X";
		case joaat("P_CHAIRDINING03X"):
			return "P_CHAIRDINING03X";
		case joaat("P_SPOON01X"):
			return "P_SPOON01X";
		case joaat("P_BOWL03X"):
			return "P_BOWL03X";
		case joaat("P_CS_BRIDECATALOGUE01X"):
			return "P_CS_BRIDECATALOGUE01X";
		case joaat("P_JEWELRYBOX02BX"):
			return "P_JEWELRYBOX02BX";
		case joaat("P_CS_LETTERFOLDED01X"):
			return "P_CS_LETTERFOLDED01X";
		case joaat("P_CS_ARTHURHAT01X"):
			return "P_CS_ARTHURHAT01X";
		case joaat("P_OAR03X"):
			return "P_OAR03X";
		case joaat("P_DOOR_VAL_BANKVAULT"):
			return "P_DOOR_VAL_BANKVAULT";
		case joaat("P_DOOR_COMBANK01X"):
			return "P_DOOR_COMBANK01X";
		case joaat("P_CS_DONATION01X"):
			return "P_CS_DONATION01X";
		case joaat("P_DOOR_NBX_BANK03X_R"):
			return "p_door_nbx_bank03x_R";
		case joaat("P_DOOR_NBX_BANK03X_L"):
			return "p_door_nbx_bank03x_L";
		case joaat("P_CAMP_PLATE_02X"):
			return "p_camp_plate_02x";
		case joaat("P_STEWPLATE02X"):
			return "p_stewplate02x";
		case joaat("P_CS_LOG01X"):
			return "p_cs_log01x";
		case joaat("P_NDB_HOTELPLANK01X"):
			return "p_ndb_hotelplank01x";
		case joaat("P_GLASS06X"):
			return "p_glass06x";
		case joaat("P_CS_RAG01X"):
			return "p_cs_rag01x";
		case joaat("P_INKWELL01X"):
			return "p_inkwell01x";
		case joaat("P_CIGAR02X"):
			return "p_cigar02x";
		case joaat("P_BOTTLEBEER01X"):
			return "p_bottleBeer01x";
		case joaat("P_BEERMUGGLASS01X"):
			return "p_beermugglass01x";
		case joaat("P_NUTBOWL01X"):
			return "p_nutBowl01x";
		case joaat("P_CS_SACKLARGE01X"):
			return "p_cs_sacklarge01x";
		case joaat("P_CS_DRESSBOX01X"):
			return "p_cs_dressbox01x";
		case joaat("P_BELL05X"):
			return "p_bell05x";
		case joaat("P_WOODENDESKCHAIR01X"):
			return "p_woodendeskchair01x";
		case joaat("P_CHAIR06X"):
			return "p_chair06x";
		case joaat("P_JUG01X"):
			return "p_jug01x";
		case joaat("S_INV_MEDICINE01X"):
			return "S_INV_MEDICINE01X";
		case joaat("S_INV_MEDICINE_FTY"):
			return "S_INV_MEDICINE_FTY";
		case joaat("S_INV_MILKWEED01BX"):
			return "S_INV_Milkweed01bx";
		case joaat("P_BOTTLESLIM01X"):
			return "p_bottleslim01x";
		case joaat("P_CS_JOURNAL01X"):
			return "p_cs_journal01x";
		case joaat("P_MORTARPESTLE02X"):
			return "p_mortarpestle02x";
		case joaat("S_INV_BURDOCK01DX"):
			return "s_inv_burdock01dx";
		case joaat("P_CS_ROPELEGSPLIT"):
			return "p_cs_ropeLegSplit";
		case joaat("P_CS_ROPEHANDSSPLIT"):
			return "p_cs_ropeHandsSplit";
		case joaat("P_FISHINGPOLE01X"):
			return "p_fishingpole01x";
		case joaat("P_FISHINGPOLE02X"):
			return "P_FISHINGPOLE02X";
		case joaat("P_CS_FLOWERNECKLACE"):
			return "p_cs_flowernecklace";
		case joaat("P_CS_FLOWERS01X"):
			return "P_CS_FLOWERS01X";
		case joaat("S_INV_YARROW01CX"):
			return "s_inv_yarrow01cx";
		case joaat("P_CS_FISHINGPOLEBAG01X"):
			return "P_CS_FISHINGPOLEBAG01X";
		case joaat("P_STICK02X"):
			return "P_STICK02X";
		case joaat("P_CS_SOCK01X"):
			return "P_CS_SOCK01X";
		case joaat("P_DOOR_VAL_BANK00_RX"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("P_DOOR_VAL_BANK00_LX"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("P_CAN10X"):
			return "p_can10x";
		case joaat("P_CS_RABBITGUT"):
			return "p_cs_rabbitgut";
		case joaat("P_CS_RABBITHEADLESS"):
			return "p_cs_rabbitheadless";
		case joaat("P_CS_RABBITFEETLESS"):
			return "p_cs_rabbitfeetless";
		case joaat("P_KETTLE03X"):
			return "p_kettle03x";
		case joaat("S_CHE_WOODBIN01X"):
			return "s_che_woodbin01x";
		case joaat("S_LOOTABLEPOORCASE"):
			return "s_lootablepoorcase";
		case joaat("P_CS_BOOKHARDCV01X"):
			return "P_CS_BOOKHARDCV01X";
		case joaat("P_LETTERBUNDLE_01X"):
			return "P_LETTERBUNDLE_01X";
		case joaat("P_LETTERENVELOPE_CS01X"):
			return "P_LETTERENVELOPE_CS01X";
		case joaat("P_PACKAGE08X"):
			return "P_PACKAGE08X";
		case joaat("P_CIGARBOX02X"):
			return "P_CIGARBOX02X";
		case joaat("P_CRUCIFIX02X"):
			return "p_crucifix02x";
		case joaat("P_BOTTLECRATE01X"):
			return "p_bottleCrate01x";
		case joaat("P_CAN05X"):
			return "p_can05x";
		case joaat("P_CS_SUITCASE04X"):
			return "p_cs_suitcase04x";
		case joaat("P_CS_BAGSTRAUSS01X"):
			return "p_cs_bagstrauss01x";
		case joaat("P_BOTTLE008X"):
			return "P_BOTTLE008X";
		case joaat("P_BOTTLE009X"):
			return "P_BOTTLE009X";
		case joaat("P_BOTTLE010X"):
			return "P_BOTTLE010X";
		case joaat("P_POCKETMIRROR01X"):
			return "p_pocketMirror01x";
		case joaat("P_CIGARETTE01X"):
			return "P_CIGARETTE01X";
		case joaat("P_TRAVELTRUNK02X"):
			return "P_TRAVELTRUNK02X";
		case joaat("P_CHAIRWHITE01X"):
			return "P_CHAIRWHITE01X";
		case joaat("P_JOURNAL_OPEN01X"):
			return "P_JOURNAL_OPEN01X";
		case joaat("P_TABLE42_CS"):
			return "p_table42_cs";
		case joaat("P_CS_NEWSPAPER_02X"):
			return "p_cs_newspaper_02x";
		case joaat("P_CS_POTATOSLICE01X"):
			return "P_CS_POTATOSLICE01X";
		case joaat("S_APLSD_LOG"):
			return "S_APLSD_LOG";
		case joaat("S_APLSD_HRSATT"):
			return "S_APLSD_HRSATT";
		case joaat("P_SPITTOON01X"):
			return "p_spittoon01x";
		case joaat("P_WOODBOWL01X"):
			return "p_woodbowl01x";
		case joaat("P_PENCIL01X"):
			return "p_pencil01x";
		case joaat("P_SPOONMID01X"):
			return "P_SPOONMID01X";
		case joaat("P_PAN01X"):
			return "P_PAN01X";
		case joaat("P_PIPE01X"):
			return "P_Pipe01x";
		case joaat("P_CS_RAILROADBOND01X"):
			return "p_cs_railroadbond01x";
		case joaat("P_SHARPENINGSTONE01X"):
			return "p_sharpeningstone01x";
		case joaat("P_TREESTUMP02X"):
			return "p_treestump02x";
		case joaat("P_PLATE17X"):
			return "p_plate17x";
		case joaat("P_CS_NEWSPAPER_01X"):
			return "p_cs_newspaper_01x";
		case joaat("P_SADIEHAT01X"):
			return "p_sadiehat01x";
		case joaat("P_DOOR_BLA_JAIL_L_01X"):
			return "p_door_bla_jail_l_01x";
		case joaat("P_DOOR_BLA_JAIL_R_01X"):
			return "p_door_bla_jail_r_01x";
		case joaat("P_MASHEDPOTATO02X"):
			return "p_mashedPotato02x";
		case joaat("P_CS_BOOKHARDCV08X"):
			return "p_cs_bookHardCv08x";
	}
	return "";
}

bool func_962(int iParam0)
{
	return func_704(iParam0, 2);
}

void func_963(int iParam0, int iParam1)
{
	if (!func_280(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

bool func_964(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_355(iParam1) || !func_355(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_965(float fParam0, float fParam1, float fParam2)
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

void func_966(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

char* func_967(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_621(37, iParam0))
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
	if (func_621(37, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_968(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1009(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_969(int iParam0)
{
	iParam0 = func_570(iParam0);
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

float func_970(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<4> /*32*/ func_971(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_425(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_658(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_972(struct<4> /*32*/ sParam0, bool bParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_977(0))
	{
		return func_1010(sParam0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_979(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (sVar0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_658(0), &sParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_973(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = func_882(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1 = { func_974(0) /*4*/ };
	if (func_1011(&sVar1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

struct<4> /*32*/ func_974(bool bParam0)
{
	return func_971(joaat("CHARACTER"), func_1012(), joaat("SLOTID_NONE"), bParam0);
}

bool func_975(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_658(bParam7);
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

bool func_976(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_658(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_977(bool bParam0)
{
	if (func_106() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_658(bParam0));
}

int func_978(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
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
	if (!func_979(sParam0, &sVar0, 1, 0))
	{
		return -1;
	}
	if (func_980(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1013(sVar0.f_4, sParam4, iParam8, 0);
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
	sVar16 = { func_1014(&sVar0) /*17*/ };
	sVar16.f_4 = { sParam4 /*4*/ };
	sVar16.f_11 = iParam8;
	sVar16.f_10 = bParam10;
	iVar33 = func_1015(joaat("MOVEITEMS"), &sVar16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_979(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_658(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_980(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_981(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
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
	if (func_980(&sParam0, &sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_979(sParam0, &sVar0, 1, 0) || !func_979(sParam4, &sVar14, 1, 0))
	{
		return -1;
	}
	if (func_980(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return -1;
	}
	sVar28 = { func_1014(&sVar0) /*17*/ };
	sVar28.f_4 = { sVar14.f_5 /*4*/ };
	sVar28.f_11 = sVar14.f_9;
	sVar28.f_10 = sVar14.f_10 | iParam8;
	sVar45 = { func_1014(&sVar14) /*17*/ };
	sVar45.f_4 = { sVar0.f_5 /*4*/ };
	sVar45.f_11 = sVar0.f_9;
	sVar45.f_10 = sVar0.f_10 | iParam8;
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, joaat("BASKET"), joaat("MOVEITEMS")))
		{
			if (func_1016(iVar62, joaat("MOVEITEMS"), &sVar28) && func_1016(iVar62, joaat("MOVEITEMS"), &sVar45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_1017(iVar62, 1);
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
		iVar62 = func_1015(joaat("MOVEITEMS"), &sVar28, 0);
		iVar62 = func_1015(joaat("MOVEITEMS"), &sVar45, 0);
	}
	return iVar62;
}

bool func_982(int iParam0)
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

int func_983()
{
	return Global_40.f_1095.f_3135;
}

void func_984(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_985(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_658(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_979(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_986(int iParam0)
{
	int iVar0;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_423(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_987(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_988(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

char* func_989(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_990(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_991(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1018(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_992(bool bParam0)
{
	if (func_1019(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179 /*PCF_0x605C7288*/, true);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(bParam0))
	{
		FIRE::STOP_ENTITY_FIRE(bParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	}
}

void func_993(bool bParam0)
{
	if (func_1019(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179 /*PCF_0x605C7288*/, false);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 0, false);
}

void func_994(bool bParam0)
{
	if (func_1019(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, false);
}

void func_995(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_371(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1357549.f_3[4], true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_996(bool bParam0)
{
	if (func_1019(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
}

int func_997(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1020(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_998(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_822(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_999(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return joaat("META_OUTFIT_WARM_WEATHER");
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

bool func_1000(int iParam0)
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

int func_1001(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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
		sVar0 = { func_1021(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1022((398 + iVar28), 1);
			if (func_1023(iParam0, &sVar0, iVar5, 0))
			{
				if (func_1024(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_971(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_1025(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_977(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_1026(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_1027(iParam0, iParam1);
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

void func_1002(int iParam0, int iParam1, float fParam2)
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

bool func_1003(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

bool func_1004(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	return (Global_1360165[iParam0 /*1157*/].f_70.f_1 & iParam1) != 0;
}

int func_1005(int iParam0)
{
	return joaat("META_HORSE_SADDLE_ONLY");
}

int func_1006(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_131(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_131(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_1007(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_1028(), true))
	{
		return true;
	}
	return false;
}

int func_1008(int iParam0, bool bParam1)
{
	return func_1029(iParam0, Global_1894899.f_2, bParam1);
}

char* func_1009(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1010(struct<4> /*32*/ sParam0, bool bParam4, bool bParam5)
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
	if (!func_979(sParam0, &sVar1, 1, 0))
	{
		return iVar0;
	}
	if (sVar1.f_10 == bParam4)
	{
		return iVar0;
	}
	iVar15 = func_586(sVar1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		sVar16 = { func_1030(sParam0, 1) /*29*/ };
		sVar16.f_10 = bParam4;
		iVar0 = func_1031(joaat("UPDATE"), &sVar16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		sVar45 = { func_1032(sParam0, 1) /*18*/ };
		sVar45.f_10 = bParam4;
		iVar0 = func_1033(joaat("UPDATE"), &sVar45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		sVar63 = { func_1014(&sVar1) /*17*/ };
		sVar63.f_10 = bParam4;
		iVar0 = func_1015(joaat("UPDATE"), &sVar63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1011(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_658(bParam2), uParam0, iParam1);
}

struct<4> /*32*/ func_1012()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_1013(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_971(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_658(bParam6), &sVar0, false);
	return iVar4;
}

struct<17> /*136*/ func_1014(var uParam0)
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

int func_1015(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1016(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1017(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1017(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1017(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_1016(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_1017(int iParam0, int iParam1)
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
	func_1034(iParam0, iParam1);
}

bool func_1018(int iParam0)
{
	int iVar0;
	int iVar1;

	func_1035(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

bool func_1019(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(bParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(bParam0);
		}
	}
	return true;
}

int func_1020(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case joaat("COMPANION_OUTFIT_DEFAULT"):
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

struct<5> /*40*/ func_1021(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_974(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_586(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_971(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_915(bParam1) /*4*/ };
			if (bParam2 && func_1036(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_1023(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_1023(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_1024(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_1037(bParam1) /*4*/ };
			switch (func_423(iParam0))
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
			if (func_1038(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_971(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_1038(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_971(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_979(sVar0, &sVar27, bParam1, 0))
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

int func_1022(int iParam0, int iParam1)
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
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_SIGHT");
			return -1150323212;
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWED_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_STOCK");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_WRAP1");
			return 1254273765;
			return -792172668;
			return 1905987493;
			return joaat("SLOTID_WEAPON_SNIPERRIFLE_ROLLINGBLOCK_GRIP");
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return joaat("SLOTID_WEB_INBOX");
			return joaat("SLOTID_WEB_INBOX_AMMO");
			return joaat("SLOTID_WEB_INBOX_CONSUMABLES");
			return joaat("SLOTID_WEB_INBOX_DOCUMENTS");
			return joaat("SLOTID_WEB_INBOX_GIFTS");
			return 1084576580;
			return joaat("SLOTID_WEB_INBOX_HORSES");
			return joaat("SLOTID_WEB_INBOX_KIT");
			return joaat("SLOTID_WEB_INBOX_OFFERS");
			return joaat("SLOTID_WEB_INBOX_WEAPONS");
			return -386012962;
			return joaat("SLOTID_CARAVAN_UPGRADE");
			return joaat("SLOTID_CARRIED_HORSE_EQUIPMENT");
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return joaat("SLOTID_TEMPORARY_HORSE");
			return -319249747;
			return -16955722;
			return joaat("SLOTID_WARDROBE_BEARD_CHIN");
			return joaat("SLOTID_WARDROBE_BEARD_CHOPS");
			return joaat("SLOTID_WARDROBE_BEARD_MUSTACHE");
			return joaat("SLOTID_WARDROBE_FOOTWEAR_3");
			return joaat("SLOTID_WARDROBE_LOADOUT");
			return joaat("SLOTID_WARDROBE_MISC");
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return joaat("SLOTID_NONE");
			return joaat("SLOTID_ANY");
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_1023(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_1013(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_1024(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1039(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

bool func_1025(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_1040(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_979(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_977(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_658(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1026(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1041(iParam0))
	{
		return 0;
	}
	if (!func_977(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_1027(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_1042(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_1028()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_1029(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_1043(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_1044(iParam0, uVar0, iVar1, bParam2);
}

struct<29> /*232*/ func_1030(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_658(bParam4), &uParam0, &sVar29, 29, 1))
	{
		return sVar0;
	}
	sVar0 = { func_1014(&sVar29) /*17*/ };
	sVar0.f_17 = { sVar29.f_16 /*8*/ };
	sVar0.f_25 = sVar29.f_25;
	sVar0.f_26 = sVar29.f_27;
	sVar0.f_27 = sVar29.f_28;
	sVar0.f_28 = sVar29.f_24;
	return sVar0;
}

int func_1031(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1045(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1017(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1017(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_1017(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_1032(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_658(bParam4), &uParam0, &sVar18, 15, 1))
	{
		return sVar0;
	}
	sVar0 = { func_1014(&sVar18) /*17*/ };
	sVar0.f_17 = sVar18.f_14;
	return sVar0;
}

int func_1033(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1046(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1017(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1017(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_1017(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1034(int iParam0, int iParam1)
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

int func_1035(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1047(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_1036(int iParam0, bool bParam1)
{
	if (func_423(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_131(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_1037(bool bParam0)
{
	int iVar0;

	iVar0 = func_658(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_971(joaat("EMOTE_ITEM"), func_974(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_971(joaat("EMOTE_ITEM"), func_974(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_1038(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_423(iParam0);
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

bool func_1039(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_658(0);
	*uParam1 = { func_971(iParam0, func_915(0), iParam3, 0) /*4*/ };
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

bool func_1040(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1041(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_1042(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1043(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_106() != -1;
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

int func_1044(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_281(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_283(iVar2)))
		{
			if (func_283(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_1045(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_1046(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

int func_1047(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
		case -2104294676:
			return 83;
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
		case -2033572567:
			return 92;
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
		case -1885734028:
			return 110;
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
		case -1818590041:
			return 246;
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
		case joaat("CSTAG_BCH_BASE"):
			return 10;
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
		case -1584659518:
			return 210;
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
		case -1565979762:
			return 507;
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
		case -1426009748:
			return 119;
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
		case -1235200494:
			return 165;
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
		case joaat("CSTAG_PRG_BASE"):
			return 9;
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
		case -1171086122:
			return 41;
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
		case -1152282847:
			return 33;
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
		case -1061998329:
			return 164;
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
		case -1045864225:
			return 510;
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
		case -978287173:
			return 12;
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
		case joaat("CSTAG_COL_BASE"):
			return 2;
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
		case -830432609:
			return 492;
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
		case -818926670:
			return 200;
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
		case joaat("CSTAG_HSO_BASE"):
			return 3;
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
		case -803062666:
			return 65;
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
		case -671103079:
			return 504;
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
		case -650501093:
			return 509;
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
		case -636774257:
			return 146;
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
		case -604891653:
			return 237;
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
		case -534913305:
			return 174;
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
		case -453449739:
			return 182;
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
		case -399703928:
			return 155;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
		case -381477663:
			return 37;
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
		case -317452243:
			return 128;
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
		case -98209688:
			return 55;
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
		case -58291054:
			return 201;
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
		case -21372580:
			return 46;
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
		case -8269375:
			return 137;
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
		case joaat("CSTAG_FLOW_TRN4_PRE"):
			return 321;
		case joaat("CSTAG_MOOD_BILL_BEAVER"):
			return 81;
		case joaat("CSTAG_MOOD_DUTCH_DRUNK"):
			return 51;
		case joaat("CSTAG_MOOD_DUTCH_BEAVER"):
			return 54;
		case joaat("CSTAG_MOOD_MOLLY_UPBEAT"):
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case joaat("CSTAG_FLOW_FUD1_POST"):
			return 408;
		case joaat("CSTAG_FLOW_RDST61_POST"):
			return 458;
		case joaat("CSTAG_VIG_RDOWN1_WNT"):
			return 358;
		case joaat("CSTAG_FLOW_MR53_POST"):
			return 476;
		case 121466883:
			return 498;
		case joaat("CSTAG_FLOW_BE22_POST"):
			return 477;
		case joaat("CSTAG_FLOW_MAR7_POST"):
			return 480;
		case joaat("CSTAG_FLOW_NTV3_POST"):
			return 455;
		case 132239274:
			return 494;
		case joaat("CSTAG_MOOD_MOLLY_DEFAULT"):
			return 184;
		case 137433874:
			return 227;
		case joaat("CSTAG_MOOD_JOHN_DRUNK"):
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"):
			return 279;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_POST"):
			return 282;
		case joaat("CSTAG_FLOW_RMOB01_POST"):
			return 433;
		case joaat("CSTAG_SUPPLY_LOW"):
			return 35;
		case 207369059:
			return 64;
		case joaat("CSTAG_FLOW_MOB2_PRE"):
			return 304;
		case joaat("CSTAG_MOOD_TILLY_DRUNK"):
			return 241;
		case joaat("CSTAG_MOOD_LENNY_COLTER"):
			return 134;
		case 228261307:
			return 74;
		case joaat("CSTAG_FLOW_MUD4_PRE"):
			return 270;
		case joaat("CSTAG_FLOW_UTP1_POST"):
			return 399;
		case joaat("CSTAG_FLOW_RXCF1_POST"):
			return 419;
		case joaat("CSTAG_VIG_SDB_ONLY"):
			return 364;
		case joaat("CSTAG_MOOD_TRELAWNY_DRUNK"):
			return 250;
		case joaat("CSTAG_MOOD_MICAH_DOWN"):
			return 103;
		case joaat("CSTAG_MOOD_UNCLE_BEAVER"):
			return 90;
		case joaat("CSTAG_MOOD_TILLY_ANNOYED"):
			return 240;
		case joaat("CSTAG_MOOD_PEARSON_DEFAULT"):
			return 193;
		case 319124397:
			return 506;
		case joaat("CSTAG_MOOD_UNCLE_DEFAULT"):
			return 84;
		case 388356689:
			return 101;
		case joaat("CSTAG_CAMP_MONEY_LOW"):
			return 335;
		case joaat("CSTAG_MOOD_JAVIER_COLTER"):
			return 71;
		case joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"):
			return 291;
		case 404260466:
			return 73;
		case joaat("CSTAG_MOOD_BILL_COLTER"):
			return 80;
		case joaat("CSTAG_MOOD_LENNY_DRUNK"):
			return 132;
		case joaat("CSTAG_FLOW_RGNG01_POST"):
			return 446;
		case joaat("CSTAG_CAMP_FOOD_HIGH"):
			return 332;
		case joaat("CSTAG_FLOW_RNATV2_POST"):
			return 436;
		case joaat("CSTAG_MOOD_KAREN_DEFAULT"):
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case joaat("CSTAG_VIG_PRIORITY_NINE"):
			return 370;
		case joaat("CSTAG_MOOD_ABIGAIL_BEAVER"):
			return 163;
		case joaat("CSTAG_GRIEFING_MAYHEM"):
			return 40;
		case joaat("CSTAG_FLOW_MAR1_POST"):
			return 471;
		case joaat("CSTAG_FLOW_NTS3_POST"):
			return 452;
		case joaat("CSTAG_MOOD_ABIGAIL_DRUNK"):
			return 160;
		case 531203229:
			return 245;
		case joaat("CSTAG_MOOD_STRAUSS_DOWN"):
			return 203;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DEBT_COLLECTED"):
			return 346;
		case joaat("CSTAG_FLOW_SAD4_POST"):
			return 488;
		case joaat("CSTAG_PLAYER_KILLING_INNOCENT"):
			return 349;
		case joaat("CSTAG_VIG_RHMRO_WNT"):
			return 360;
		case joaat("CSTAG_FLOW_SEN1_POST"):
			return 398;
		case joaat("CSTAG_MOOD_BILL_DRUNK"):
			return 78;
		case joaat("CSTAG_FLOW_TRE1_POST"):
			return 420;
		case joaat("CSTAG_FLOW_RDST2_POST"):
			return 389;
		case joaat("CSTAG_MOOD_MARYBETH_DRUNK"):
			return 178;
		case joaat("CSTAG_FLOW_CA_BR01_POST"):
			return 315;
		case joaat("CSTAG_FLOW_JOHN_RECOVER"):
			return 268;
		case joaat("CSTAG_MOOD_JAVIER_DEFAULT"):
			return 66;
		case joaat("CSTAG_FLOW_RODDF1_POST"):
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case joaat("CSTAG_BVH_BASE"):
			return 8;
		case joaat("CSTAG_MOOD_SUSAN_DEFAULT"):
			return 211;
		case joaat("CSTAG_MOOD_SEAN_BEAVER"):
			return 126;
		case joaat("CSTAG_MOOD_SUSAN_BEAVER"):
			return 217;
		case joaat("CSTAG_FLOW_TRN4_POST"):
			return 467;
		case joaat("CSTAG_MOOD_MARYBETH_ANNOYED"):
			return 177;
		case joaat("CSTAG_FLOW_CA_HR01_POST"):
			return 328;
		case joaat("CSTAG_VIG_BVH_BASE"):
			return 365;
		case joaat("CSTAG_FLOW_RBNP10_POST"):
			return 414;
		case joaat("CSTAG_MOOD_CHARLES_UPBEAT"):
			return 115;
		case joaat("CSTAG_MOOD_SADIE_COLTER"):
			return 153;
		case joaat("CSTAG_MOOD_ABIGAIL_DEFAULT"):
			return 157;
		case joaat("CSTAG_MOOD_DUTCH_ANNOYED"):
			return 50;
		case joaat("CSTAG_FLOW_MAR8_POST"):
			return 481;
		case joaat("CSTAG_VIG_NTV2_HONOR_HIGH"):
			return 367;
		case 761196368:
			return 218;
		case joaat("CSTAG_FLOW_FIRST_VISIT_BRT2_POST"):
			return 296;
		case joaat("CSTAG_ARRANGEMENT_SDB_TEARDOWN"):
			return 28;
		case joaat("CSTAG_LOITERING"):
			return 336;
		case joaat("CSTAG_MOOD_STRAUSS_DEFAULT"):
			return 202;
		case joaat("CSTAG_ARRANGEMENT_COL_SETUP"):
			return 14;
		case 812866778:
			return 355;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RXCF1_POST"):
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case joaat("CSTAG_MOOD_DUTCH_DOWN"):
			return 49;
		case 856952521:
			return 42;
		case joaat("CSTAG_CLM_BASE"):
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case joaat("CSTAG_FLOW_GRY3_POST"):
			return 412;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDOWN3_POST"):
			return 272;
		case joaat("CSTAG_FLOW_DST3_POST"):
			return 407;
		case joaat("CSTAG_MOOD_SUSAN_DOWN"):
			return 212;
		case joaat("CSTAG_MOOD_ABIGAIL_ANNOYED"):
			return 159;
		case joaat("CSTAG_MOOD_JAVIER_UPBEAT"):
			return 70;
		case joaat("CSTAG_CAMP_FOOD_LOW"):
			return 333;
		case joaat("CSTAG_GRIEFING_KNOCKOUT_POST"):
			return 38;
		case 1019519723:
			return 256;
		case joaat("CSTAG_MOOD_JACK_COLTER"):
			return 171;
		case joaat("CSTAG_FLOW_RDCH3_POST"):
			return 456;
		case joaat("CSTAG_VIG_HSO_BASE"):
			return 356;
		case joaat("CSTAG_MOOD_PEARSON_COLTER"):
			return 198;
		case joaat("CSTAG_FLOW_BRT3_PRE"):
			return 299;
		case joaat("CSTAG_FLOW_RCHRB_POST"):
			return 417;
		case joaat("CSTAG_MOOD_MOLLY_COLTER"):
			return 189;
		case joaat("CSTAG_FLOW_SEN1_PRE"):
			return 265;
		case joaat("CSTAG_MOOD_CHARLES_COLTER"):
			return 116;
		case joaat("CSTAG_FLOW_ODR4_PRE"):
			return 305;
		case joaat("CSTAG_FLOW_MUD3_PRE"):
			return 264;
		case joaat("CSTAG_FLOW_RSAD1_POST"):
			return 402;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RABI1_POST"):
			return 271;
		case joaat("CSTAG_FLOW_RSAD1_PRE"):
			return 286;
		case joaat("CSTAG_FLOW_HNT1_POST"):
			return 378;
		case joaat("CSTAG_FLOW_RMARY1_POST"):
			return 392;
		case joaat("CSTAG_VIG_BVH_ONLY"):
			return 366;
		case joaat("CSTAG_FLOW_NTS2_POST"):
			return 451;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDTC1_POST"):
			return 292;
		case joaat("CSTAG_VIG_SDB_BASE"):
			return 363;
		case joaat("CSTAG_MOOD_KAREN_UPBEAT"):
			return 224;
		case joaat("CSTAG_MOOD_UNCLE_DRUNK"):
			return 87;
		case joaat("CSTAG_FLOW_GRY1_POST"):
			return 410;
		case joaat("CSTAG_MOOD_SUSAN_DRUNK"):
			return 214;
		case joaat("CSTAG_MOOD_JACK_DEFAULT"):
			return 166;
		case joaat("CSTAG_FLOW_RSTR33_POST"):
			return 463;
		case joaat("CSTAG_FLOW_MRY3_POST"):
			return 428;
		case joaat("CSTAG_FLOW_NTS1_POST"):
			return 450;
		case joaat("CSTAG_LAK_BASE"):
			return 7;
		case 1267957796:
			return 32;
		case joaat("CSTAG_MOOD_SUSAN_UPBEAT"):
			return 215;
		case joaat("CSTAG_MOOD_MICAH_COLTER"):
			return 107;
		case joaat("CSTAG_MOOD_LENNY_DOWN"):
			return 130;
		case joaat("CSTAG_MOOD_ARTHUR_BEAVER"):
			return 45;
		case 1305416676:
			return 495;
		case joaat("CSTAG_MOOD_SEAN_ANNOYED"):
			return 122;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RPRSN_POST"):
			return 258;
		case joaat("CSTAG_MOOD_MICAH_DEFAULT"):
			return 102;
		case joaat("CSTAG_MOOD_TRELAWNY_DOWN"):
			return 248;
		case joaat("CSTAG_MOOD_SADIE_UPBEAT"):
			return 152;
		case joaat("CSTAG_FLOW_CA_HT06_POST"):
			return 314;
		case joaat("CSTAG_MOOD_JACK_ANNOYED"):
			return 168;
		case joaat("CSTAG_GUA_BASE"):
			return 6;
		case joaat("CSTAG_FLOW_RDTC2_ACTIVE"):
			return 300;
		case joaat("CSTAG_FLOW_MUD1_POST_EVENING"):
			return 267;
		case joaat("CSTAG_VIG_CAMP_ENTER"):
			return 368;
		case joaat("CSTAG_FLOW_GOONS_ARRIVE_POST"):
			return 322;
		case joaat("CSTAG_MOOD_UNCLE_DOWN"):
			return 85;
		case 1366067161:
			return 91;
		case joaat("CSTAG_MOOD_PEARSON_ANNOYED"):
			return 195;
		case joaat("CSTAG_MOOD_DUTCH_COLTER"):
			return 53;
		case joaat("CSTAG_MOOD_MARYBETH_BEAVER"):
			return 181;
		case joaat("CSTAG_FLOW_RDTC2_POST"):
			return 432;
		case joaat("CSTAG_FLOW_MAR6_POST"):
			return 479;
		case joaat("CSTAG_MOOD_SWANSON_DOWN"):
			return 230;
		case joaat("CSTAG_FLOW_FIRST_VISIT_ODR4_POST"):
			return 306;
		case joaat("CSTAG_MOOD_CHARLES_DEFAULT"):
			return 111;
		case 1441230304:
			return 502;
		case joaat("CSTAG_SP_TRELAWNY_FAMILY"):
			return 352;
		case joaat("CSTAG_MOOD_HOSEA_BEAVER"):
			return 99;
		case joaat("CSTAG_FLOW_IND1_POST"):
			return 421;
		case joaat("CSTAG_FLOW_SAL1_POST"):
			return 397;
		case joaat("CSTAG_MOOD_JAVIER_DRUNK"):
			return 69;
		case joaat("CSTAG_FLOW_RMUD31_POST"):
			return 394;
		case joaat("CSTAG_FLOW_RMOB02_POST"):
			return 434;
		case joaat("CSTAG_MOOD_DUTCH_DEFAULT"):
			return 48;
		case joaat("CSTAG_MOOD_BILL_UPBEAT"):
			return 79;
		case joaat("CSTAG_FLOW_CA_CR02_POST"):
			return 301;
		case joaat("CSTAG_MOOD_SUSAN_COLTER"):
			return 216;
		case joaat("CSTAG_MOOD_JOHN_BEAVER"):
			return 63;
		case joaat("CSTAG_MOOD_BILL_DEFAULT"):
			return 75;
		case joaat("CSTAG_MOOD_KIERAN_BEAVER"):
			return 144;
		case joaat("CSTAG_FLOW_RSTR31_POST"):
			return 462;
		case joaat("CSTAG_PLAYER_DIRTY"):
			return 339;
		case joaat("CSTAG_MOOD_ARTHUR_COLTER"):
			return 44;
		case 1623482561:
			return 503;
		case joaat("CSTAG_FLOW_FIN2_POST"):
			return 478;
		case joaat("CSTAG_ARRANGEMENT_CLM_A"):
			return 20;
		case joaat("CSTAG_EVENT_HSO_UPBEAT"):
			return 278;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_LATE"):
			return 281;
		case 1675028401:
			return 109;
		case joaat("CSTAG_CAMP_MONEY_HIGH"):
			return 334;
		case 1688887348:
			return 209;
		case joaat("CSTAG_FLOW_KIERAN_TIED"):
			return 263;
		case joaat("CSTAG_MOOD_STRAUSS_COLTER"):
			return 207;
		case joaat("CSTAG_MOOD_JACK_DOWN"):
			return 167;
		case joaat("CSTAG_MOOD_ABIGAIL_UPBEAT"):
			return 161;
		case joaat("CSTAG_FLOW_KIERAN_FREE"):
			return 262;
		case 1750892420:
			return 183;
		case joaat("CSTAG_MOOD_ABIGAIL_COLTER"):
			return 162;
		case joaat("CSTAG_MOOD_JAVIER_BEAVER"):
			return 72;
		case joaat("CSTAG_FLOW_FIN1_POST"):
			return 468;
		case joaat("CSTAG_MOOD_SWANSON_ANNOYED"):
			return 231;
		case joaat("CSTAG_PLAYER_AWAY"):
			return 340;
		case joaat("CSTAG_FLOW_MUD6_POST"):
			return 384;
		case joaat("CSTAG_MOOD_KIERAN_COLTER"):
			return 143;
		case joaat("CSTAG_ARRANGEMENT_BVH_SETUP"):
			return 31;
		case joaat("CSTAG_MOOD_CHARLES_BEAVER"):
			return 117;
		case 1792418811:
			return 100;
		case joaat("CSTAG_FLOW_MRY1_POST"):
			return 379;
		case joaat("CSTAG_FLOW_REV1_POST"):
			return 390;
		case joaat("CSTAG_FLOW_SAL1_SPLITUP_POST"):
			return 276;
		case joaat("CSTAG_FLOW_GNG3_POST"):
			return 449;
		case joaat("CSTAG_FLOW_TILLY_TRAUMATIZED"):
			return 307;
		case joaat("CSTAG_FLOW_FIRST_VISIT_REV1_POST"):
			return 274;
		case 1874987418:
			return 191;
		case joaat("CSTAG_FLOW_DST5_POST"):
			return 447;
		case 1889392998:
			return 508;
		case joaat("CSTAG_MOOD_SWANSON_BEAVER"):
			return 235;
		case joaat("CSTAG_FLOW_RDOWN3_POST"):
			return 388;
		case joaat("CSTAG_FLOW_RCLDN1_POST"):
			return 430;
		case joaat("CSTAG_MOOD_MARYBETH_DOWN"):
			return 176;
		case joaat("CSTAG_FLOW_GNG2_POST"):
			return 448;
		case joaat("CSTAG_FLOW_MR52_POST"):
			return 475;
		case joaat("CSTAG_FLOW_RDST62_POST"):
			return 459;
		case joaat("CSTAG_MOOD_JOHN_COLTER"):
			return 62;
		case joaat("CSTAG_MOOD_KAREN_BEAVER"):
			return 226;
		case 1964695690:
			return 491;
		case joaat("CSTAG_FLOW_NTV1_POST"):
			return 453;
		case 1974689262:
			return 500;
		case joaat("CSTAG_MOOD_SADIE_BEAVER"):
			return 154;
		case joaat("CSTAG_MOOD_SEAN_DRUNK"):
			return 123;
		case joaat("CSTAG_MOOD_KAREN_DOWN"):
			return 221;
		case 2016323151:
			return 36;
		case joaat("CSTAG_FLOW_MUD2_POST"):
			return 381;
		case 2033246305:
			return 82;
		case joaat("CSTAG_FLOW_NTS1_PRE"):
			return 319;
		case joaat("CSTAG_MOOD_SEAN_DOWN"):
			return 121;
		case 2050878222:
			return 497;
		case joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"):
			return 348;
		case joaat("CSTAG_FLOW_DEBT_CONTRIBUTED"):
			return 347;
		case joaat("CSTAG_MOOD_SUSAN_ANNOYED"):
			return 213;
		case joaat("CSTAG_SDB_BASE"):
			return 5;
		case joaat("CSTAG_ARRANGEMENT_HSO_SETUP"):
			return 15;
		case joaat("CSTAG_FLOW_RDOWN1_POST"):
			return 386;
		case joaat("CSTAG_FLOW_RBRT0_POST"):
			return 416;
		case joaat("CSTAG_FLOW_TRN2_POST"):
			return 465;
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

