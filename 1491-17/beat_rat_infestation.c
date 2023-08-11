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
	bool bLocal_15 = false;
	int iLocal_16 = 0;
	int iLocal_17[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	char* sLocal_43 = NULL;
	var uLocal_44 = 4;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	Vector3 vLocal_77 = { 0.0f, 0.0f, 0.0f };
	var uLocal_80[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97 = 0;
	int iLocal_98[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122[4] = { 0, 0, 0, 0 };
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	struct<2> /*16*/ sLocal_136[4];
	struct<6> /*48*/ sLocal_145 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	struct<7> /*56*/ sLocal_153 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_160 = 0;
	struct<193> /*1544*/ sLocal_161 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 1176256512;
	struct<32> /*256*/ sLocal_358[16];
	struct<12> /*96*/ sLocal_871[3];
	struct<23> /*184*/ sLocal_908 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	float fLocal_942 = 0.0f;
	bool bLocal_943 = false;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	var uLocal_946[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	int iLocal_966 = 0;
	struct<76> /*608*/ sLocal_967 = { 0, 1112014848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0 } ;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 1;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 24;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
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
	var uLocal_1151 = -1082130432;
	var uLocal_1152 = -1082130432;
	var uLocal_1153 = 1103626240;
	var uLocal_1154 = -1067450368;
	var uLocal_1155 = 1097859072;
	var uLocal_1156 = 1073741824;
	var uLocal_1157 = 4000;
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
	var uLocal_1179 = 1073741824;
	int iLocal_1180 = 0;
	var uLocal_1181 = 0;
	struct<4> /*32*/ sLocal_1182 = { 0, 0, 0, 0 } ;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	Vector3 vLocal_1194 = { 0.0f, 0.0f, 0.0f };
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	int iLocal_1206 = 0;
	var uLocal_1207 = 0;
	int iLocal_1208[2] = { 0, 0 };
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	bool bLocal_1213 = false;
	bool bLocal_1214 = false;
	float fLocal_1215 = 0.0f;
	float fLocal_1216 = 0.0f;
	float fLocal_1217 = 0.0f;
	var uLocal_1218 = 0;
	int iLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	int iLocal_1222 = 0;
	int iLocal_1223 = 0;
	int iLocal_1224 = 0;
	int iLocal_1225 = 0;
	int iLocal_1226 = 0;
	int iLocal_1227 = 0;
	char* sLocal_1228 = NULL;
	int iLocal_1229 = 0;
	int iLocal_1230[2] = { 0, 0 };
	int iLocal_1233 = 0;
	int iLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 1065353216;
	var uLocal_1268 = 1119092736;
	var uLocal_1269 = 1092616192;
	var uLocal_1270 = 1085276160;
	int iLocal_1271 = 0;
	Vector3 vLocal_1272 = { 0.0f, 0.0f, 0.0f };
	int iLocal_1275 = 0;
	int iLocal_1276 = 0;
	int iLocal_1277 = 0;
	int iLocal_1278 = 0;
	var uLocal_1279 = -1;
	var uLocal_1280 = 0;
	var uLocal_1281 = -1;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = -1;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 1073741824;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 1;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	struct<17> /*136*/ sLocal_1299[2];
	int iLocal_1334 = 0;
	int iLocal_1335 = 0;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	int iLocal_1344 = 0;
	int iLocal_1345 = 0;
	int iLocal_1346 = 0;
	int iLocal_1347 = 0;
	int iLocal_1348 = 0;
	int iLocal_1349 = 0;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	sLocal_43 = "RE_RI";
	iLocal_1180 = 138;
	fLocal_1215 = 2.0f;
	fLocal_1216 = 5.0f;
	fLocal_1217 = 5.0f;
	sLocal_1228 = "";
	vLocal_1272 = { 2795.084f, -1169.017f, 46.924f /*3*/ };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1214 = true;
	}
	if (!bLocal_1214)
	{
		sLocal_161.f_3 = func_1(&vScriptParam_0);
		sLocal_161.f_43 = func_2();
		sLocal_161.f_161 = func_3(vScriptParam_0.z, 2);
		func_4(&sLocal_1299);
		func_5(&sLocal_161, 1);
		func_6();
		iLocal_944 = func_7(vScriptParam_0.x, 2, 0);
	}
	while (true)
	{
		func_9(bLocal_1214, 1009, 0);
		if (bLocal_1214)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_966)
			{
				case 0:
					if (func_10())
					{
						iLocal_966 = 1;
					}
					break;
				case 1:
					if (func_11(&sLocal_161, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_12(&sLocal_161, &uLocal_1207, &uLocal_1218);
						func_13();
						func_14();
						iLocal_966 = 3;
					}
					else if (sLocal_161.f_160)
					{
						func_8();
					}
					break;
				case 3:
					if (!func_15(iLocal_35, (1 << 25)))
					{
						func_16(iLocal_127, 1, 0, 0, 0);
						func_17(&iLocal_35, (1 << 25));
					}
					if (func_18() & func_19())
					{
						if (func_20())
						{
							func_21();
							func_22(1, -1, -1);
							func_23(sLocal_161.f_51, &sLocal_871, 0, 0, 0, -1, 0);
							ENTITY::SET_ENTITY_VISIBLE(sLocal_871[0 /*12*/].f_8, false);
							func_24();
							iLocal_966 = 4;
						}
					}
					else
					{
						if (!func_25(&uLocal_939))
						{
							func_26(&uLocal_939);
						}
						else if (func_27(&uLocal_939) > 15.0f)
						{
							func_8();
						}
						if (func_28(&sLocal_161, &iLocal_98, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0) || func_29(Global_35, iLocal_129, 1, 0))
						{
							func_8();
						}
					}
					break;
				case 4:
					if (!func_30(&sLocal_161, &iLocal_98, iLocal_944, 0, 0, 0, 1, 0))
					{
						func_8();
					}
					if (!sLocal_161.f_46)
					{
						if (func_31(&iLocal_34) || func_15(iLocal_34, (1 << 13)))
						{
							sLocal_161.f_46 = 1;
							if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, iLocal_120))
							{
								func_17(&iLocal_34, (1 << 13));
							}
							if (func_15(iLocal_1275, 8) && !bLocal_1213)
							{
								func_32(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", iLocal_98[0], 0, 1065353216, 0);
							}
							func_33(1);
							if (!func_15(iLocal_35, 1))
							{
								func_34();
							}
							else if (func_15(iLocal_34, (1 << 13)) && !func_15(iLocal_34, 32))
							{
								func_36(iLocal_98[0], Global_35, func_35("DESTROYED"), 0, -1082130432, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							}
							if (iLocal_965 < 12)
							{
								func_37();
								func_38(&(uLocal_80[0]));
								iLocal_965 = 12;
							}
						}
					}
					if (func_39())
					{
						sLocal_161.f_50 = 1;
						func_8();
					}
					if (func_28(&sLocal_161, &iLocal_98, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_8();
					}
					break;
			}
			BUILTIN::WAIT(sLocal_161.f_158);
		}
	}
}

var func_1(int iParam0)
{
	return *iParam0;
}

int func_2()
{
	return Global_1894899.f_2;
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_4(var uParam0)
{
	func_40(uParam0[0 /*17*/], "BEAT_GRT_POS", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_40(uParam0[1 /*17*/], "BEAT_GRT_NEG", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_5(var uParam0, bool bParam1)
{
	func_41(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_42("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_6()
{
	func_43(&(sLocal_161.f_5), 1);
	func_44(&(sLocal_161.f_5), 1);
	func_45(&(sLocal_161.f_5), 0);
	func_46(&(sLocal_161.f_5), 3.0f);
	func_47(&(sLocal_161.f_5), 2000);
}

int func_7(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_48(iParam0) % iParam1);
	}
	return (func_49(iParam0) % iParam1);
}

void func_8()
{
	int iVar0;

	if (func_50("RE_RI_OBJ_RETURN", 1) || func_50("RE_RI_OBJ_KILL", 1))
	{
		func_51();
	}
	func_37();
	func_52(&sLocal_1299, 0, 0, 1, 0);
	func_22(0, -1, -1);
	func_53(0);
	func_54();
	func_33(1);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1271))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_1271);
	}
	if (func_15(iLocal_34, (1 << 14)))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	if (!func_15(iLocal_34, (1 << 26)))
	{
		sLocal_161.f_45 = 0;
	}
	else
	{
		func_55();
	}
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_871[0 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(sLocal_871[0 /*12*/].f_8));
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_120))
	{
		if (func_29(Global_35, iLocal_120, 1, 0))
		{
			func_56();
		}
		EVENT::_0x56B3410626A473E7(&uLocal_97);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_120);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_127);
		VOLUME::DELETE_VOLUME(iLocal_120);
		VOLUME::DELETE_VOLUME(iLocal_127);
	}
	func_57(iLocal_130);
	func_57(iLocal_131);
	func_57(iLocal_133);
	func_57(iLocal_134);
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(iLocal_115))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_115, false);
	}
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(iLocal_116))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_116, false);
	}
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(iLocal_117))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_117, false);
	}
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(iLocal_117))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_118, false);
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (func_58(iLocal_98[iVar0], 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[iVar0], false);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[0]))
	{
		if (func_59(iLocal_98[0], 0))
		{
			func_60(iLocal_98[0]);
			func_61(iLocal_1180, 0, 1, 0, 0);
		}
	}
	if (bLocal_15)
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(func_62(287));
		PERSCHAR::_0x4F81EAD1DE8FA19B(func_62(288));
		PERSCHAR::_0x4F81EAD1DE8FA19B(func_62(286));
		PERSCHAR::_0x4F81EAD1DE8FA19B(func_62(298));
	}
	func_60(Global_35);
	if (func_63(iLocal_1208[0]))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[0], 0);
	}
	if (func_63(iLocal_1208[1]))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[1], 0);
	}
	if (func_63(iLocal_1211))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1211, 0);
	}
	if (func_63(iLocal_1212))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1212, 0);
	}
	if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_42))
	{
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_42);
	}
	if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_41))
	{
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_41);
	}
	func_64(&sLocal_161, &iLocal_98, &uLocal_80, iLocal_944, uLocal_1207, uLocal_1218, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_65(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Stack.Invoke(iParam1);
		}
	}
}

bool func_10()
{
	switch (iLocal_964)
	{
		case 0:
			if (func_66(&sLocal_161))
			{
				func_67();
				func_68(&sLocal_358);
				func_69();
				func_70(&sLocal_967);
				func_71();
				func_72();
				func_73(&sLocal_871);
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SMOKE"), 15, 0, joaat("WORLD_HUMAN_SMOKE_MALE_A"));
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_TWNREC_SCRUB_BLOOD_FLOOR_BUCKET"), 15, 0, 0);
				STREAMING::REQUEST_MODEL(joaat("P_DOOR_NEW_SALOON02X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_CANDLELAMP01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_GLASS01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_BOTTLEJD01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_BOTTLEWINE03X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_WHISKEYGLASS01X"), false);
				STREAMING::REQUEST_MODEL(joaat("S_INV_WHISKEY01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_SAL_SHELFSET04X"), false);
				iLocal_964 = 1;
			}
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CANDLELAMP01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_GLASS01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEJD01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEWINE03X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHISKEYGLASS01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("S_INV_WHISKEY01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_SAL_SHELFSET04X")))
			{
				return false;
			}
			if (!func_74(&uLocal_963, sLocal_43))
			{
				return false;
			}
			if (!func_75(&uLocal_44))
			{
				return false;
			}
			if (!func_76(&sLocal_871))
			{
				return false;
			}
			if (!func_77(&sLocal_358))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_DOOR_NEW_SALOON02X")))
			{
				return false;
			}
			if (!func_78())
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_SMOKE"), false))
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_TWNREC_SCRUB_BLOOD_FLOOR_BUCKET"), false))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_11(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam6 || func_79(*iParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *iParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_80(uParam0, *iParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7.0f;
				if (func_81(uParam0->f_3, 1))
				{
					fVar0 = 20.0f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, (1 << 21));
			}
			if (iParam5 == 1)
			{
				func_82(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5.0f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_83(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_12(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
	}
}

void func_13()
{
	vLocal_77 = { 2796.746f, -1167.405f, 46.92401f /*3*/ };
	iLocal_122[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.383f, -1169.701f, 48.64964f, 0.0f, 0.0f, 149.9696f, 7.680243f, 7.442864f, 4.887091f, "volFront");
	iLocal_122[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2797.689f, -1164.03f, 48.64964f, 0.0f, 0.0f, 149.9696f, 7.593349f, 5.83218f, 4.887091f, "volBack");
	iLocal_122[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2802.157f, -1166.223f, 48.64964f, 0.0f, 0.0f, 149.9696f, 2.432765f, 5.624192f, 4.887091f, "volHall");
	iLocal_122[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2799.795f, -1169.92f, 48.64964f, 0.0f, 0.0f, 149.9696f, 2.878195f, 2.828049f, 4.887091f, "volBackRoom");
	iLocal_120 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2796.799f, -1167.807f, 49.224f, 0.0f, 0.0f, 150.0f, 10.315f, 13.684f, 5.096f, "m_volStore");
	func_16(iLocal_120, 1, 0, 0, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_120, 0, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_120, 0, 0, 0, -1, -1, 0);
	iLocal_115 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iLocal_120, false, 15);
	iLocal_121 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.136f, -1173.19f, 48.0258f, 0.0f, 0.0f, -29.6619f, 2.388672f, 2.484698f, 2.493898f, "m_volShopDoor");
	iLocal_127 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2792.137f, -1175.657f, 47.09799f, 0.0f, 0.0f, -30.95912f, 9.80044f, 4.089561f, 4.642987f, "m_volStoreSidewalk");
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_127, 0, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_127, 0, 0, joaat("SPECIES_HUMAN"), -1, -1, 2);
	iLocal_116 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iLocal_127, false, 15);
	iLocal_128 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2787.507f, -1182.052f, 46.8672f, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 1.0f, "m_volRoad");
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_128, 0, 0, 0, -1, -1, 0);
	iLocal_117 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iLocal_128, false, 15);
	iLocal_119 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(2787.705f, -1182.19f, 46.85251f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, "m_volHorseCartAcrossStreet");
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_119, 0, 0, 0, -1, -1, 0);
	iLocal_118 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iLocal_119, false, 15);
	iLocal_130 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2790.919f, -1172.553f, 48.8768f, 0.0f, 0.0f, -29.66189f, 1.878804f, 0.624271f, 2.500972f, "m_volWindow");
	iLocal_129 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2790.019f, -1180.614f, 47.098f, 0.0f, 0.0f, -30.959f, 17.0f, 13.0f, 10.0f, "m_volCallover");
	iLocal_132 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2790.978f, -1173.951f, 48.026f, 0.0f, 0.0f, -29.662f, 3.144f, 2.232f, 2.494f, "m_volSidewalk");
	iLocal_133 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), sLocal_161.f_51, 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(iLocal_133, true);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(iLocal_133, false);
	iLocal_134 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), 2793.75f, -1174.116f, 46.88817f, 0.0f, 0.0f, 0.0f, 3.5f, 3.5f, 3.5f);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(iLocal_134, true);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(iLocal_134, false);
	uLocal_97 = EVENT::_0x18E93EBFC1FCFA48(iLocal_120, true, true);
	if (iLocal_944 == 0)
	{
		iLocal_135 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volOpeningDialogue");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_135, VOLUME::CREATE_VOLUME_BOX(2821.35f, -1173.793f, 48.026f, 0.0f, 0.0f, 5.789957f, 58.59459f, 23.87292f, 10.70794f));
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_135, VOLUME::CREATE_VOLUME_BOX(2801.273f, -1187.073f, 48.026f, 0.0f, 0.0f, -75.61369f, 87.07604f, 26.24648f, 10.70794f));
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_135, VOLUME::CREATE_VOLUME_BOX(2758.489f, -1185.248f, 48.026f, 0.0f, 0.0f, -117.6775f, 67.96555f, 26.24648f, 10.70794f));
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_135, VOLUME::CREATE_VOLUME_BOX(2758.746f, -1161.83f, 48.026f, 0.0f, 0.0f, -31.0f, 64.31004f, 14.15442f, 10.70794f));
	}
}

void func_14()
{
	sLocal_358[0 /*32*/].f_6 = { 2792.286f, -1174.795f, 46.89715f /*3*/ };
	sLocal_358[0 /*32*/].f_9 = 155.2901f;
	strcpy_s(&(sLocal_358[0 /*32*/].f_23), 64, "0312_U_M_M_NbxBartender_02");
	func_84(&(sLocal_358[0 /*32*/].f_22));
	sLocal_358[1 /*32*/].f_6 = { 2793.74f, -1176.192f, 46.86639f /*3*/ };
	sLocal_358[1 /*32*/].f_9 = 268.4264f;
	if (iLocal_944 == 0)
	{
		strcpy_s(&(sLocal_358[1 /*32*/].f_23), 64, "0878_A_M_M_Civ_Poor_Asian_AVOID_02");
	}
	else
	{
		strcpy_s(&(sLocal_358[1 /*32*/].f_23), 64, "0950_A_M_M_Guard_White_AGGRESSIVE_05");
	}
	func_84(&(sLocal_358[1 /*32*/].f_22));
	sLocal_358[2 /*32*/].f_6 = { 2797.846f, -1167.75f, 46.924f /*3*/ };
	sLocal_358[2 /*32*/].f_9 = 226.8494f;
	func_84(&(sLocal_358[2 /*32*/].f_22));
	sLocal_358[3 /*32*/].f_6 = { 2793.011f, -1166.657f, 46.93268f /*3*/ };
	sLocal_358[3 /*32*/].f_9 = 209.8502f;
	func_84(&(sLocal_358[3 /*32*/].f_22));
	func_85(&(sLocal_358[3 /*32*/].f_22));
	func_86(&(sLocal_358[3 /*32*/].f_22));
	sLocal_358[4 /*32*/].f_6 = { 2790.815f, -1169.837f, 46.924f /*3*/ };
	sLocal_358[4 /*32*/].f_9 = 63.8435f;
	func_84(&(sLocal_358[4 /*32*/].f_22));
	sLocal_358[5 /*32*/].f_6 = { 2793.942f, -1167.316f, 47.97197f /*3*/ };
	sLocal_358[5 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 359.0f);
	func_84(&(sLocal_358[5 /*32*/].f_22));
	func_86(&(sLocal_358[5 /*32*/].f_22));
	sLocal_358[6 /*32*/].f_6 = { 2795.769f, -1164.274f, 46.924f /*3*/ };
	sLocal_358[6 /*32*/].f_9 = 91.8245f;
	func_84(&(sLocal_358[6 /*32*/].f_22));
	func_86(&(sLocal_358[6 /*32*/].f_22));
	sLocal_358[7 /*32*/].f_6 = { 2799.974f, -1164.842f, 46.92401f /*3*/ };
	sLocal_358[7 /*32*/].f_9 = 81.9027f;
	func_84(&(sLocal_358[7 /*32*/].f_22));
	sLocal_358[8 /*32*/].f_6 = { 2802.033f, -1166.782f, 46.92401f /*3*/ };
	sLocal_358[8 /*32*/].f_9 = 71.2798f;
	func_84(&(sLocal_358[8 /*32*/].f_22));
	sLocal_358[9 /*32*/].f_6 = { 2802.678f, -1164.265f, 46.924f /*3*/ };
	sLocal_358[9 /*32*/].f_9 = 71.2798f;
	func_84(&(sLocal_358[9 /*32*/].f_22));
	sLocal_358[10 /*32*/].f_6 = { 2799.45f, -1169.807f, 46.924f /*3*/ };
	sLocal_358[10 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 359.0f);
	func_84(&(sLocal_358[10 /*32*/].f_22));
	func_86(&(sLocal_358[10 /*32*/].f_22));
	sLocal_358[11 /*32*/].f_6 = { 2799.674f, -1169.394f, 46.924f /*3*/ };
	sLocal_358[11 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 359.0f);
	func_84(&(sLocal_358[11 /*32*/].f_22));
	func_86(&(sLocal_358[11 /*32*/].f_22));
	sLocal_358[12 /*32*/].f_6 = { 2800.018f, -1169.773f, 46.924f /*3*/ };
	sLocal_358[12 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 359.0f);
	func_84(&(sLocal_358[12 /*32*/].f_22));
	func_86(&(sLocal_358[12 /*32*/].f_22));
	sLocal_358[13 /*32*/].f_6 = { 2800.355f, -1169.263f, 46.924f /*3*/ };
	sLocal_358[13 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 359.0f);
	func_84(&(sLocal_358[13 /*32*/].f_22));
	func_86(&(sLocal_358[13 /*32*/].f_22));
	sLocal_358[14 /*32*/].f_6 = { 2799.819f, -1170.586f, 46.924f /*3*/ };
	sLocal_358[14 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 359.0f);
	func_84(&(sLocal_358[14 /*32*/].f_22));
	func_86(&(sLocal_358[14 /*32*/].f_22));
	sLocal_358[15 /*32*/].f_6 = { 2800.611f, -1169.293f, 46.924f /*3*/ };
	sLocal_358[15 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 359.0f);
	func_84(&(sLocal_358[15 /*32*/].f_22));
	func_86(&(sLocal_358[15 /*32*/].f_22));
}

bool func_15(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_16(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 2442122;
	if (bParam1)
	{
		iVar0 |= 1;
	}
	if (bParam2)
	{
		iVar0 |= 72;
	}
	if (bParam3)
	{
		iVar0 |= 6;
	}
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

void func_17(int iParam0, int iParam1)
{
	func_87(iParam0, iParam1);
}

int func_18()
{
	if (func_58(iLocal_98[0], 0, 1))
	{
		return 1;
	}
	if (func_88(iLocal_1180, 0))
	{
		iLocal_98[0] = func_89(iLocal_1180, 0, 0, 0, 1, 1);
	}
	if (!func_58(iLocal_98[0], 0, 1))
	{
		func_90(iLocal_1180, 1, sLocal_358[0 /*32*/].f_6, sLocal_358[0 /*32*/].f_6.f_1, sLocal_358[0 /*32*/].f_6.f_2, 0);
		return 0;
	}
	return 0;
}

int func_19()
{
	switch (iLocal_37)
	{
		case 0:
			iLocal_41 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("P_DOOR_NEW_SALOON02X"), 2793.192f, -1173.657f, 46.924f, 5);
			iLocal_42 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("P_DOOR_NEW_SALOON02X"), 2794.293f, -1174.435f, 46.924f, 5);
			iLocal_37++;
			break;
		case 1:
			if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_42) && ENTITY::IS_MAP_ENTITY_PINNED(iLocal_41))
			{
				iLocal_1230[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_41));
				iLocal_1230[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_42));
				iLocal_37++;
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1230[0]))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1230[1]))
			{
			}
			iLocal_37++;
			return 1;
		case 3:
			return 1;
	}
	return 0;
}

bool func_20()
{
	switch (iLocal_1206)
	{
		case 0:
			iLocal_1206 = 1;
			break;
		case 1:
			if (!func_91(sLocal_161.f_51, sLocal_161.f_51.f_3, &sLocal_358, &iLocal_98, 1, 0, -1, 1))
			{
				return false;
			}
			iLocal_1206 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

int func_21()
{
	int iVar0;

	if (func_58(iLocal_98[0], 0, 1))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_98[0]);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[0], true);
		func_92(iLocal_98[0], &(sLocal_358[0 /*32*/].f_23), 0);
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_133))
		{
			PED::_ATTACH_VOLUME_TO_ENTITY(iLocal_133, iLocal_98[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
		}
		if (func_58(iLocal_98[1], 0, 1))
		{
			PED::_SET_PED_INTERACTION_PERSONALITY(iLocal_98[1], joaat("AGGRESSIVE"));
			func_93(iLocal_98[1], 1);
			func_94(iLocal_98[1], 1, 1);
		}
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (func_58(iLocal_98[iVar0], 0, 1) && iVar0 != 1)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_98[iVar0], sLocal_358[iVar0 /*32*/].f_6, sLocal_358[iVar0 /*32*/].f_9, true, false, true);
			}
			if (iLocal_98[iVar0] != iLocal_98[0] && iLocal_98[iVar0] != iLocal_98[1])
			{
				if (func_58(iLocal_98[iVar0], 0, 1))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_98[iVar0], "RAT_INFESTATION_RATS_GROUP", 0.0f);
					func_95(iLocal_98[iVar0], joaat("HONOR_EVENT_KILL_VERMIN"));
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_98[iVar0], true);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_358[iVar0 /*32*/].f_23)))
			{
				func_92(iLocal_98[iVar0], &(sLocal_358[iVar0 /*32*/].f_23), 0);
			}
			iVar0++;
		}
		func_96();
		func_97(iLocal_98[0], &sLocal_161, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[1]))
		{
			func_97(iLocal_98[1], &sLocal_161, 0);
		}
		return 1;
	}
	return 0;
}

void func_22(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		if ((iVar0 >= 2 && iVar0 != iParam1) && iVar0 != iParam2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_98[iVar0], bParam0);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_98[iVar0], bParam0);
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
}

int func_23(Vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	Vector3 vVar5;
	int iVar8;
	Vector3 vVar9;

	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST((iParam3[iVar0 /*12*/])->f_8))
		{
		}
		else if ((iParam3[iVar0 /*12*/])->f_7 != 0 && !func_15((iParam3[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED((iParam3[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((iParam3[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = (iParam3[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((iParam3[iVar8 /*12*/])->f_8, *(iParam3[iVar0 /*12*/])) /*3*/ };
					if (func_15((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((iParam3[iVar0 /*12*/])->f_8, (iParam3[iVar8 /*12*/])->f_8, 0, *(iParam3[iVar0 /*12*/]), (iParam3[iVar0 /*12*/])->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_15((iParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam4, *(iParam3[iVar0 /*12*/])) /*3*/ };
					}
					else
					{
						vVar5 = { *(iParam3[iVar0 /*12*/]) /*3*/ };
					}
					if (!func_15((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						func_98(&vVar5, (iParam3[iVar0 /*12*/])->f_10);
					}
					if (func_15((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_99((iParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0.0f, 0.0f, (iParam3[iVar0 /*12*/])->f_3 /*3*/ };
					}
					else
					{
						vVar1 = { (iParam3[iVar0 /*12*/])->f_4 /*3*/ };
					}
					if (func_15((iParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_100((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((iParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_15((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((iParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY((iParam3[iVar0 /*12*/])->f_8, false);
						}
					}
				}
				if (func_15((iParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((iParam3[iVar0 /*12*/])->f_8, true);
				}
				if (func_15((iParam3[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE((iParam3[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((iParam3[iVar0 /*12*/])->f_8, true);
					PHYSICS::ACTIVATE_PHYSICS((iParam3[iVar0 /*12*/])->f_8);
				}
				ENTITY::_SET_ENTITY_FADE_IN((iParam3[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS((iParam3[iVar0 /*12*/])->f_8, true, false) /*3*/ };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_24()
{
	if (iLocal_944 == 0)
	{
		sLocal_145.f_0 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_145.f_4, 0, "PBL_Intro_Idle", false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_145.f_0, sLocal_161.f_51, 0.0f, 0.0f, -30.0f, 2);
		if (func_58(iLocal_98[0], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_145.f_0, "barman", iLocal_98[0], 0);
		}
		if (func_58(iLocal_98[1], 0, 1))
		{
			TASK::CLEAR_PED_TASKS(iLocal_98[1], true, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_145.f_0, "man", iLocal_98[1], 0);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_145.f_4))
		{
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_145.f_0, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(sLocal_145.f_0);
			}
		}
	}
}

bool func_25(var uParam0)
{
	return func_101(*uParam0, 1);
}

void func_26(var uParam0)
{
	func_102(uParam0, 0.0f);
}

float func_27(var uParam0)
{
	if (!func_25(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_103(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_104() - uParam0->f_1);
}

bool func_28(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	Vector3 vVar1;

	fVar0 = 0.0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_105())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300.0f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 -= 65.0f;
				}
			}
			else if (func_106(uParam0->f_3))
			{
				fVar0 = 250.0f;
			}
			else if (func_81(uParam0->f_3, (1 << 17)))
			{
				fVar0 = 70.0f;
				fVar0 += 10.0f;
			}
			else if (func_81(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215.0f;
				fVar0 += 20.0f;
				if (uParam0->f_48)
				{
					fVar0 -= 80.0f;
				}
			}
			else if (func_81(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125.0f;
				fVar0 += 10.0f;
				if (uParam0->f_48)
				{
					fVar0 -= 50.0f;
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 *= fVar0;
		if (bParam2)
		{
			if (uParam0->f_188 < *iParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*iParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_188])) || !bParam3)
						{
							if ((uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0.0f)
			{
				if (func_107(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 /*3*/ };
				if (func_107(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *iParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

bool func_29(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_30(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_108(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_109(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !(uParam0->f_5 & (1 << 14)) != 0)
		{
			if ((uParam0->f_5.f_1 & 256) != 0)
			{
				func_110(&(uParam0->f_5));
			}
			func_111(&(uParam0->f_5), (1 << 14));
		}
	}
	if (!uParam0->f_48 && !func_112(uParam0->f_3, (1 << 18)))
	{
		if ((uParam0->f_5 & (1 << 11)) != 0)
		{
			func_113(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_114(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_115(uParam0, uParam0->f_193, 2.0f);
				}
			}
			break;
		case 2:
			if (!func_116(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_81(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				func_117(uParam0, (*iParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_31(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[0]))
	{
		if (func_118(iLocal_98[0], 0, &(sLocal_161.f_5), &uLocal_1181, 0, 0))
		{
			func_17(iParam0, 1);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[1]))
	{
		if (func_118(iLocal_98[1], 0, &(sLocal_161.f_5), &uLocal_1181, 0, 0))
		{
			return true;
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_120))
	{
		if (func_29(Global_35, iLocal_120, 1, 0))
		{
			if (bLocal_943)
			{
				return true;
			}
		}
		else if (func_119())
		{
			return true;
		}
	}
	if (func_15(iLocal_34, (1 << 17)))
	{
		return true;
	}
	return false;
}

void func_32(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_120() != -1)
	{
		return;
	}
	if ((Global_36616 & func_121(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_122(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_123(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_124(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_123(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		if (func_15(iLocal_34, 128))
		{
			PED::CLEAR_PED_NON_CREATION_AREA();
			func_125(&iLocal_34, 128);
		}
	}
	else if (!func_15(iLocal_34, 128))
	{
		PED::SET_PED_NON_CREATION_AREA(2784.866f, -1179.439f, 40.3084f, 2808.771f, -1155.45f, 50.432f);
		func_17(&iLocal_34, 128);
	}
}

void func_34()
{
	int iVar0;

	PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iLocal_98[0], Global_36, 3);
	TASK::_0x2E1D6D87346BB7D2(iLocal_98[0], Global_35, 0, 0);
	if (!func_126(iLocal_98[0]))
	{
		func_127(iLocal_98[0], 0);
		if (!func_15(iLocal_34, 32))
		{
			func_36(iLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_17(&iLocal_34, 32);
		}
		TASK::TASK_SMART_FLEE_PED(iLocal_98[0], Global_35, 500.0f, -1, 0, 3.0f, 0);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2795.592f, -1164.554f, 46.924f, 2.0f, 20000, 0.25f, 0, 40000.0f);
		TASK::TASK_COWER(0, -1, Global_35, 0);
		func_128(iLocal_98[0], &iVar0, 0, 0, 1, 1);
	}
}

char* func_35(char* sParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	sVar8 = { func_129(sParam0) /*8*/ };
	if (iLocal_944 == 0)
	{
		strcpy_s(&cVar0, 64, "RE_RI_NBX_V1_");
	}
	else
	{
		strcpy_s(&cVar0, 64, "RE_RI_NBX_V2_");
	}
	strcat_s(&cVar0, 64, &sVar8);
	return func_130(cVar0);
}

bool func_36(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_131(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_37()
{
	func_38(&iLocal_1229);
}

void func_38(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_39()
{
	func_132();
	func_133();
	func_134();
	func_135();
	func_136();
	func_137();
	if (iLocal_965 > 2)
	{
		if (iLocal_944 == 0)
		{
			func_138();
		}
		func_139();
		func_140();
	}
	if (!func_15(iLocal_34, (1 << 18)))
	{
		if (iLocal_965 <= 8)
		{
			func_141(Global_35, iLocal_98[0], 5.0f, &uLocal_14, 0, 1, 0);
		}
		else
		{
			func_142();
		}
	}
	if (iLocal_965 > 0)
	{
		func_143();
		func_144();
		func_145();
	}
	switch (iLocal_965)
	{
		case 0:
			if (func_146())
			{
				if (iLocal_944 == 0)
				{
					ANIMSCENE::START_ANIM_SCENE(sLocal_145.f_0);
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_145.f_0, "PBL_Intro_Idle", true);
				}
				func_147();
				func_148();
				func_33(0);
				func_149();
				func_92(iLocal_98[0], &(sLocal_358[0 /*32*/].f_23), 0);
				iLocal_965 = 1;
			}
			break;
		case 1:
			if (iLocal_944 == 0)
			{
				if (func_150(&sLocal_161, &uLocal_355, 1077936128, 1114636288, 35.0f, 1500, 5.5f, 2.0f, 1, 0, 0, -1082130432, 1, 1, 0))
				{
					if (func_151(0, 1, iLocal_98[0], 1) && func_151(0, 1, iLocal_98[1], 1))
					{
						func_22(0, 4, 5);
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_145.f_0, "PBL_Intro_Action", true);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_145.f_0, "BOOL_Intro", true, false);
						func_114(&(sLocal_161.f_121));
						iLocal_965 = 2;
					}
				}
				else if (func_152(Global_35, iLocal_98[0], 1, 1) < 60.0f)
				{
					func_153();
				}
			}
			else if (func_150(&sLocal_161, &uLocal_355, 1077936128, 50.0f, 35.0f, 1500, 5.5f, 1065353216, 1, 0, 0, -1082130432, 1, 0, 0))
			{
				func_22(0, 4, 5);
				func_114(&(sLocal_161.f_121));
				iLocal_965 = 2;
			}
			break;
		case 2:
			if (func_154())
			{
				func_96();
				func_155(&sLocal_1182, 2.0f);
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_145.f_0))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_145.f_0, "barman", iLocal_98[0]);
				}
				func_156();
				iLocal_965 = 3;
			}
			break;
		case 3:
			if (func_29(Global_35, iLocal_129, 1, 0) && !func_157())
			{
				if (!MAP::DOES_BLIP_EXIST(uLocal_80[0]))
				{
					func_158();
				}
				iLocal_965 = 4;
			}
			break;
		case 4:
			if (func_159(&sLocal_161, 1.0f, (40.0f / 2.0f), 10.0f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_98[0]))
			{
				if (func_160())
				{
				}
				func_161();
				func_162();
				IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_98[0], &sLocal_908);
				if (func_152(Global_35, iLocal_98[0], 1, 1) > 5.0f)
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_98[0], sLocal_136[0 /*2*/], "close_callover_f_barman", Global_35, -1, 4.0f, -4.0f, (1 << 26), 0.0f, false, false, -1.0f, 0, (1 << 16), -1.0f);
					func_163();
				}
				iLocal_965 = 5;
			}
			break;
		case 5:
			func_162();
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], sLocal_136[0 /*2*/], "close_callover_f_barman", 1))
			{
				if (func_152(Global_35, iLocal_98[0], 1, 1) < 13.0f && func_151(0, 1, iLocal_98[0], 1))
				{
					func_164();
					func_165(iLocal_120, joaat("P_MASONJARMOONSHINE01X"), 0);
					IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_98[0], &sLocal_908);
					iLocal_965 = 6;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], joaat("SCRIPT_TASK_PLAY_UPPER_ANIM_FACING_ENTITY"), true) != 1)
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_98[0], sLocal_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4.0f, -4.0f, 67108865, 0.0f, false, false, -1.0f, 0, (1 << 16), -1.0f);
				}
			}
			break;
		case 6:
			func_162();
			if (func_15(iLocal_34, (1 << 26)))
			{
				func_56();
			}
			if (func_166())
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], joaat("SCRIPT_TASK_PLAY_UPPER_ANIM_FACING_ENTITY"), true) != 1 && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], sLocal_136[0 /*2*/], "interact_01_barman", 1)) && !func_29(Global_35, iLocal_120, 1, 0))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_98[0], sLocal_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4.0f, -4.0f, (1 << 26), 0.0f, false, false, -1.0f, 0, (1 << 16), -1.0f);
				}
				if (func_15(iLocal_1275, 8))
				{
					sLocal_161.f_44 = 1;
					func_167();
					MAP::REMOVE_BLIP(&(uLocal_80[0]));
					iLocal_965 = 8;
					Jump @2902; // curOff = 1147
				}
				else if (func_15(iLocal_1275, 16))
				{
					sLocal_161.f_44 = 1;
					func_167();
					MAP::REMOVE_BLIP(&(uLocal_80[0]));
					iLocal_965 = 7;
				}
				else
				{
					func_168();
					if (func_15(iLocal_1275, 32))
					{
						func_167();
						MAP::REMOVE_BLIP(&(uLocal_80[0]));
						iLocal_965 = 7;
					}
					Jump @2902; // curOff = 1223
					func_169();
					if (func_151(-2.0f, 1, Global_35, 1) || func_15(iLocal_34, (1 << 16)))
					{
						func_170();
						iLocal_965 = 14;
					}
					Jump @2902; // curOff = 1272
					if (func_15(iLocal_1275, (1 << 10)))
					{
						func_171(1);
						func_167();
						MAP::REMOVE_BLIP(&(uLocal_80[0]));
						iLocal_965 = 7;
						Jump @2902; // curOff = 1310
					}
					else if (func_15(iLocal_1275, 16))
					{
						func_171(1);
					}
					func_172();
					func_173();
					func_174();
					func_175();
					func_176();
					if (!func_15(iLocal_34, (1 << 18)))
					{
						if (func_29(Global_35, iLocal_120, 1, 0))
						{
							func_142();
						}
					}
					if (func_177() && func_178(Global_35, vLocal_1194, 1) > 2.0f)
					{
						func_37();
						func_179(iLocal_98[0], &(uLocal_80[0]), joaat("BLIP_STYLE_FRIENDLY"), joaat("BLIP_MODIFIER_OBJECTIVE"), 0, "BLIP_BARTENDER");
						func_180("RE_RI_OBJ_RETURN", 7500, 0, 0, -1, -1, 0);
						iLocal_965 = 9;
					}
					else if (func_15(iLocal_34, 2))
					{
						if (!func_15(iLocal_34, (1 << 27)))
						{
							if (func_151(-1.0f, 1, 0, 0))
							{
								func_38(&(uLocal_80[0]));
								func_181();
								func_180("RE_RI_OBJ_KILL", 7500, 0, 0, -1, -1, 0);
								func_17(&iLocal_34, (1 << 27));
							}
						}
					}
					Jump @2902; // curOff = 1543
					func_172();
					func_174();
					func_176();
					if (func_178(Global_35, vLocal_1194, 1) < 1.0f)
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_121, true, 0))
						{
							ENTITY::SET_ENTITY_VISIBLE(sLocal_871[0 /*12*/].f_8, true);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
							func_17(&iLocal_34, (1 << 14));
							iLocal_965 = 10;
						}
					}
					else
					{
						func_173();
					}
					Jump @2902; // curOff = 1637
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
					ANIMSCENE::START_ANIM_SCENE(sLocal_145.f_1);
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_145.f_1, "PBL_Window_Idle", true);
					CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
					func_182("RE_RI_OBJ_RETURN", 1);
					func_51();
					if (func_15(iLocal_34, (1 << 9)) || func_15(iLocal_34, 256))
					{
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_145.f_1, "PBL_Reward_Avg", true);
						sLocal_967.f_75 = func_183(joaat("REWARD_BEAT_LARGE"), 0, -1);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_145.f_1, "PBL_Reward_Good", true);
						sLocal_967.f_75 = func_183(joaat("REWARD_BEAT_HUGE"), 0, -1);
					}
					if (iLocal_944 == 1)
					{
						sLocal_967.f_75 *= 2;
					}
					iLocal_965 = 11;
					Jump @2902; // curOff = 1805
					func_184();
					if (func_15(iLocal_34, (1 << 14)))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("ENDSINWALK")) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, sLocal_145.f_1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(sLocal_871[0 /*12*/].f_8))
							{
								OBJECT::DELETE_OBJECT(&(sLocal_871[0 /*12*/].f_8));
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
							func_38(&(uLocal_80[0]));
							func_185(&sLocal_967);
							func_186();
							func_187(33, Global_35);
							func_32(12, 0, 0, "RE_HONOR_HELPED_STRANGER", iLocal_98[0], 0, 1065353216, 0);
							func_188(iLocal_98[0], 3);
							EVENT::_REMOVE_ALL_SHOCKING_EVENTS_IN_AREA(2796.864f, -1168.91f, 46.924f, 5.0f, false);
							LAW::_0x61B98367D93F012F(PLAYER::PLAYER_ID());
							iLocal_131 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), 2793.771f, -1174.144f, 46.88809f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
							func_171(1);
							bLocal_1213 = true;
							func_125(&iLocal_34, (1 << 14));
						}
						else
						{
							CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
						}
					}
					if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_145.f_1, false))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_98[0], vLocal_77, 1.0f, 20000, 0.25f, 0, 40000.0f);
						func_189(&(sLocal_161.f_5), 1);
						iLocal_965 = 13;
					}
					Jump @2902; // curOff = 2107
					func_22(0, -1, -1);
					func_175();
					if (func_15(iLocal_34, (1 << 13)))
					{
					}
					else if (!func_15(iLocal_34, 32))
					{
						func_36(iLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						func_17(&iLocal_34, 32);
					}
					if (func_15(iLocal_34, (1 << 14)))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						func_125(&iLocal_34, (1 << 14));
					}
					if (func_58(iLocal_98[0], 0, 1) && !func_15(iLocal_35, 1))
					{
						if (func_126(iLocal_98[0]))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 315 /*PCF_0xD38AEF95*/, false);
							PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 146 /*PCF_0x861831C4*/, false);
							PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 178 /*PCF_AllowNonTempExceptionEvents*/, true);
							if (sLocal_161.f_5.f_10 != 0)
							{
								LAW::_LAW_WITNESS_RESPONSE_TASK(iLocal_98[0], Global_35, sLocal_161.f_5.f_10, Global_36, joaat("CRIME_THREATEN"));
							}
							else
							{
								LAW::_LAW_WITNESS_RESPONSE_TASK(iLocal_98[0], Global_35, iLocal_98[0], Global_36, joaat("CRIME_THREATEN"));
							}
						}
					}
					if (func_58(iLocal_98[1], 0, 1))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_98[1], Global_35, 500.0f, -1, 0, 3.0f, 0);
						PED::SET_PED_KEEP_TASK(iLocal_98[1], true);
					}
					sLocal_161.f_50 = 1;
					iLocal_965 = 14;
					Jump @2902; // curOff = 2434
					if (func_190())
					{
						iLocal_965 = 14;
					}
					Jump @2902; // curOff = 2449
					func_169();
					func_191();
					func_175();
					if (func_15(iLocal_35, 1))
					{
						func_174();
					}
					if (func_15(iLocal_34, (1 << 13)))
					{
						if (!func_15(iLocal_34, (1 << 20)))
						{
							if (func_151(-3.0f, 1, iLocal_98[0], 0))
							{
								if (!func_15(iLocal_34, 32))
								{
									func_36(iLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
									func_17(&iLocal_34, 32);
								}
								func_192(joaat("CRIME_VANDALISM"));
							}
						}
					}
					else
					{
						if (((func_178(Global_35, sLocal_161.f_51, 1) > 25.0f && !func_29(Global_35, iLocal_120, 1, 0)) && !func_29(Global_35, iLocal_121, 1, 0)) && func_193())
						{
							return true;
						}
						if (func_15(iLocal_34, 1))
						{
							if (!func_15(iLocal_34, (1 << 20)))
							{
								if (func_151(-3.0f, 1, 0, 0))
								{
									if (!func_15(iLocal_34, 32))
									{
										func_36(iLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
										func_17(&iLocal_34, 32);
									}
									func_192(joaat("CRIME_ASSAULT"));
								}
							}
						}
						else
						{
							if (func_15(iLocal_34, (1 << 16)))
							{
								if (!func_15(iLocal_34, 4))
								{
									if (func_151(0, 1, iLocal_98[0], 1))
									{
										if (sLocal_161.f_98[0] < 20.0f)
										{
											func_36(Global_35, iLocal_98[0], func_35("BOREDNOW"), 0, -1082130432, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
										}
										func_17(&iLocal_34, 4);
									}
								}
							}
							func_194(&(iLocal_98[0]), 0, Global_35, 1, 0, 0, 0, 1);
						}
					}
				}
				return false;
			}
			default:
				break;
	}
}

void func_40(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_195(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_196(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_197(iParam0->f_6, iParam0->f_5, 0);
			}
			func_198(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_199(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_41(int iParam0)
{
	func_43(iParam0, 0);
	func_200(iParam0, 0);
	func_189(iParam0, 1);
	func_201(iParam0, 1);
	func_202(iParam0, 0);
	func_203(iParam0, 1);
	func_204(iParam0, 1, 1, 1);
}

int func_42(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_205(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_206(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_205(sVar0, iParam1, 0, 0, 1, 1);
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_111(&(uParam0->f_1), (1 << 14));
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), 4);
	}
	else
	{
		func_111(&(uParam0->f_1), 4);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), (1 << 10));
	}
	else
	{
		func_111(&(uParam0->f_1), (1 << 10));
	}
}

void func_46(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_47(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

int func_48(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

int func_49(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/];
}

bool func_50(char* sParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = sParam0;
	return func_208(UIFEED::_0x4E88A65968A55C78(&sVar0, bParam1));
}

void func_51()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_52(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_195((uParam0[iVar0 /*17*/])->f_6))
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

void func_53(bool bParam0)
{
	if (bParam0)
	{
		EVENT::_0xB6F4825153920582();
		LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), joaat("CRIME_VANDALISM"), 0, 0, -1);
		PLAYER::SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (!func_15(iLocal_34, 64))
		{
			LAW::_ENABLE_DISPATCH_LAW_2(false);
			LAW::_ENABLE_DISPATCH_LAW(false);
			func_17(&iLocal_34, 64);
		}
	}
	else if (func_15(iLocal_34, 64))
	{
		LAW::_ENABLE_DISPATCH_LAW_2(true);
		LAW::_ENABLE_DISPATCH_LAW(true);
		func_125(&iLocal_34, 64);
	}
}

void func_54()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_55()
{
	int iVar0;
	int iVar1;

	if (!func_15(iLocal_34, (1 << 30)))
	{
		iVar1 = 6;
		iVar0 = func_210();
		func_211(&iVar0, 0, 0, iVar1, 0, 0, 0, 0);
		func_212(33, 53, iVar0);
		func_213(9, joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"), 1, 977356591, iVar1);
		func_17(&iLocal_34, (1 << 30));
	}
}

void func_56()
{
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[0]) != 0)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[0], 0);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[1]) != 0)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[1], 0);
	}
}

void func_57(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_58(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_214(iParam0, iParam1);
}

bool func_59(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_215(iParam0, 0, (954 - 1), 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!func_216(iVar0) && bParam1)
	{
		return false;
	}
	return func_217(iVar0, 1);
}

void func_60(int iParam0)
{
	TASK::TASK_CLEAR_LOOK_AT(iParam0);
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
}

void func_61(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_218(iParam0))
	{
		return;
	}
	if (!func_217(iParam0, 1))
	{
		return;
	}
	if (!func_217(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_216(iParam0)) && func_219(iParam0))
	{
		return;
	}
	func_220(iParam0, 1);
	func_221(iParam0);
	if (func_223(func_222(iParam0)))
	{
		iVar0 = func_62(iParam0);
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
		func_220(iParam0, 16);
	}
	if (func_217(iParam0, 128) && !bParam3)
	{
		func_224(iParam0, 0);
	}
}

int func_62(int iParam0)
{
	if (!func_218(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_63(int iParam0)
{
	return iParam0 != 0;
}

void func_64(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_225(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_226(uParam0->f_3, (1 << 19));
		}
	}
	if (func_58(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43 /*PCF_DisableLadderClimbing*/, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_58((*iParam1)[iVar0], 0, 0))
			{
				func_227((*iParam1)[iVar0], bVar3);
				if (func_228(uParam0, iParam1[iVar0]))
				{
					func_229(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_58((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], false, 0, 0);
						}
						else if (PED::GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_231((*iParam1)[iVar0], (1 << 30), func_230(iVar0 < iVar2, uParam0->f_98[iVar0], -1.0f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000.0f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_232(uParam0);
	}
	func_233(uParam0);
	if (!uParam0->f_186)
	{
		func_108(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_234(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_235(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

bool func_65(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_236(iVar0))
	{
		return false;
	}
	if (func_237(iVar0, 1) || func_237(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_66(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_238(uParam0->f_3);
	iVar1 = func_239(1);
	if (iVar1 > 0)
	{
		iVar0 += iVar1;
	}
	PED::_RESERVE_AMBIENT_PEDS(iVar0);
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_67()
{
	int iVar0;

	if (iLocal_944 == 0)
	{
		iLocal_16 = (9 - 2);
		sLocal_358[1 /*32*/].f_1 = joaat("RE_RATINFESTATION_MALES_01");
		strcpy_s(&(sLocal_358[1 /*32*/].f_23), 64, "0878_A_M_M_Civ_Poor_Asian_AVOID_02");
		sLocal_358[1 /*32*/].f_3 = -754402027;
	}
	else
	{
		iLocal_16 = 14;
	}
	iVar0 = 2;
	while (iVar0 <= ((2 + iLocal_16) - 1))
	{
		sLocal_358[iVar0 /*32*/].f_1 = joaat("A_C_RAT_01");
		func_84(&(sLocal_358[iVar0 /*32*/].f_22));
		func_240(&(sLocal_358[iVar0 /*32*/].f_22));
		iVar0++;
	}
}

void func_68(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_241(&((uParam0[iVar0 /*32*/])->f_1));
		func_241(&((uParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_69()
{
	sLocal_136[0 /*2*/] = "script_re@rat_infestation";
	sLocal_136[0 /*2*/].f_1 = "wait_idle_barman";
	func_242(sLocal_136[0 /*2*/], &uLocal_44);
	sLocal_136[1 /*2*/] = "creatures_mammal@rat@normal@idle";
	sLocal_136[1 /*2*/].f_1 = "idle";
	func_242(sLocal_136[1 /*2*/], &uLocal_44);
	sLocal_136[2 /*2*/] = "AI_GESTURES@GEN_MALE@STANDING@SPEAKER";
	sLocal_136[2 /*2*/].f_1 = "confused_punctuate_f_002";
	func_242(sLocal_136[2 /*2*/], &uLocal_44);
}

void func_70(var uParam0)
{
	strcpy_s(&(uParam0->f_34), 64, func_35("THANKS"));
	strcpy_s(&(uParam0->f_42), 64, func_35("REWARD"));
	if (func_243())
	{
		strcpy_s(&(uParam0->f_54), 64, func_35("WLCM_JHN"));
	}
	else
	{
		strcpy_s(&(uParam0->f_54), 64, func_35("WLCM_ART"));
	}
	uParam0->f_78 = 0;
	uParam0->f_79 = 1;
	uParam0->f_72 = func_244(sLocal_161.f_3);
}

void func_71()
{
	sLocal_145.f_4 = "script@beat@town@ratInfestation@saloon";
	sLocal_145.f_5 = "script@beat@town@ratInfestation@saloonWindow";
	sLocal_153.f_4 = "script@beat@town@ratInfestation@rat";
	sLocal_153.f_5 = "script@beat@town@ratInfestation@rat_2";
	sLocal_153.f_6 = "script@beat@town@ratInfestation@rat_3";
}

void func_72()
{
	sLocal_871[0 /*12*/].f_7 = joaat("P_FOLDEDBILLS01X");
}

void func_73(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL((uParam0[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

bool func_74(var uParam0, char* sParam1)
{
	return true;
}

bool func_75(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0[iVar1 /*8*/]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_76(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((uParam0[iVar0 /*12*/])->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_77(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_245(uParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_78()
{
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1271))
	{
		return INTERIOR::IS_INTERIOR_READY(iLocal_1271);
	}
	else
	{
		iLocal_1271 = INTERIOR::GET_INTERIOR_AT_COORDS(2798.769f, -1165.372f, 48.24032f);
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1271);
	}
	return false;
}

int func_79(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> /*56*/ sParam4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (sParam4.f_6 > -1)
	{
		*uParam1 = { func_246(iParam0, sParam4.f_6) /*3*/ };
		uParam1->f_4 = sParam4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_247(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_112(iParam0, 128))
			{
				if (!func_248(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_249(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_250(&bVar4, iParam0, uVar2, uVar1) /*3*/ };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_99(*uParam1))
				{
					return func_251(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_252(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(sParam4.f_2, 8))
				{
					func_247(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_253(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_254(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_255(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_112(iParam0, 128))
			{
				if (!func_256(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_251(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_249(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_253(uParam1))
					{
						return func_251(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_257(iParam0, sParam4.f_1, uParam1, sParam4, iParam14))
			{
				func_247(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_251(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_42("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_42("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_80(var uParam0, int iParam1)
{
	if (func_81(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_259(iParam1, func_258(uParam0), &(uParam0->f_172)))
		{
			if (func_58(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_81(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] & iParam1) != 0;
}

void func_82(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_261(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, (float)iParam1, (float)iParam1, 5.0f, "Custom Sized Ambient Avoidance");
	}
	else if (func_81(uParam0->f_3, 1) && !func_81(uParam0->f_3, 32))
	{
		func_261(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 6.0f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_81(uParam0->f_3, 2) && !func_81(uParam0->f_3, 32))
	{
		func_261(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 5.0f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171, 2228255, (1 << 18), 0, -1, -1, uParam0->f_175);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_262(uParam0->f_171, 1);
	}
	if (func_81(uParam0->f_3, 1))
	{
		func_261(&(uParam0->f_174), uParam0->f_51, 0.0f, 0.0f, 0.0f, VOLUME::GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_263(uParam0->f_174, 0, (1 << 18), 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_171, iParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
	}
}

float func_83(Vector3 vParam0)
{
	Vector3 vVar0;

	vVar0 = { Global_36 - vParam0 /*3*/ };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

void func_84(int iParam0)
{
	func_17(iParam0, 2);
}

void func_85(int iParam0)
{
	func_17(iParam0, 1);
}

void func_86(int iParam0)
{
	func_17(iParam0, 128);
}

void func_87(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

bool func_88(int iParam0, bool bParam1)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	if ((func_217(iParam0, 1) && !func_216(iParam0)) && func_219(iParam0))
	{
		return false;
	}
	if (!func_217(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_264(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_89(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_88(iParam0, 1))
	{
		return 0;
	}
	if (func_223(func_222(iParam0)))
	{
		iVar1 = func_62(iParam0);
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
	if ((bParam4 && !func_216(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171 /*PCF_0x6868B572*/, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_265(iParam0, 1);
	func_266(iParam0);
	if (bParam3)
	{
		func_265(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_90(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	Vector3 vVar0;
	int iVar3;

	if (!func_218(iParam0))
	{
		return 0;
	}
	if (!func_223(func_222(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(iParam0)))
	{
		func_267(iParam0, 0);
		return 0;
	}
	vVar0 = { uParam2, uParam3, uParam4 /*3*/ };
	if (!func_264(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_268(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_99(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(func_62(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(func_62(iParam0), false);
	}
	else
	{
		iVar3 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_62(iParam0), false);
	}
	if (!func_99(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(func_62(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_91(Vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;

	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_269() || !func_270(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_92(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_58(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_93(int iParam0, bool bParam1)
{
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), iParam0, 3, 2, bParam1);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), iParam0, 4, 2, bParam1);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::GET_PLAYER_INDEX(), iParam0, 7, 2, bParam1);
}

void func_94(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330 /*PCF_0x7C7AF264*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
}

void func_95(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 |= func_121(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_96()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (func_58(iLocal_98[iVar0], 0, 1) && iVar0 >= 2)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_98[iVar0], 301 /*PCF_DisableInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_98[iVar0], 317 /*PCF_0x8E385F10*/, false);
			PLAYER::_0xCB0B9506BC91E441(iLocal_98[iVar0], 2);
			if (PED::GET_PED_CONFIG_FLAG(iLocal_98[iVar0], 317 /*PCF_0x8E385F10*/, true))
			{
			}
		}
		iVar0++;
	}
}

int func_97(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_271(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_98(var uParam0, bool bParam1)
{
	Vector3 vVar0;

	vVar0 = { *uParam0 /*3*/ };
	vVar0.f_2 = (vVar0.z + 5.0f);
	if (bParam1)
	{
		if (!func_272(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 /*3*/ };
		}
	}
}

bool func_99(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

float func_100(float fParam0)
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

bool func_101(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_102(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_104() - fParam1);
	func_273(uParam0, 1);
	func_274(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_103(var uParam0)
{
	return func_101(*uParam0, 2);
}

float func_104()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_105()
{
	if (!func_275(Global_1395482.f_1))
	{
		return false;
	}
	return func_276(Global_1395482.f_1, 32);
}

bool func_106(int iParam0)
{
	if (func_81(iParam0, 1))
	{
		return false;
	}
	return (1 == func_277(iParam0) || 2 == func_277(iParam0));
}

float func_107(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_108(var uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;

	vVar0 = { func_278(uParam0) /*3*/ };
	iVar3 = func_234(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_109(var uParam0, int iParam1)
{
	if (uParam0->f_2 >= *iParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS((*iParam1)[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0.0f;
	}
}

void func_110(var uParam0)
{
	func_189(uParam0, 1);
	func_279(uParam0, 20);
}

void func_111(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

bool func_112(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 & iParam1) != 0;
}

void func_113(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_260(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_280())
	{
		func_281(1);
	}
	func_282(iParam2, uParam0->f_43);
	func_283(iParam2, 0, 0, 0, 0);
	if (func_284(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_225(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_285(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_114(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*9*/])->f_7 = 0.0f;
		(uParam0[iVar0 /*9*/])->f_8 = 0.0f;
		iVar0++;
	}
}

void func_115(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 & func_286())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_112(uParam0->f_3, (1 << 18)))
	{
		if ((uParam0->f_5 & (1 << 11)) != 0)
		{
			func_113(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_114(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_29(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_287(uParam0, bVar0);
		func_288(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432, 0, 90.0f, 0, uParam0->f_98[iParam1]);
		if (func_289(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_113(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_114(&(uParam0->f_121));
		}
	}
}

bool func_116(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30.0f;
	fVar1 = 150.0f;
	if (func_81(uParam2->f_3, 1))
	{
		fVar1 = 150.0f;
	}
	else
	{
		fVar1 = 70.0f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_290())
			{
				fVar0 = 15.0f;
			}
		}
		if (func_291(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_292(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_291(uParam2, fVar1))
		{
			if (!func_293(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_294(uParam2->f_3, 2) && func_295(2))
		{
			return false;
		}
		if (func_81(iParam0, (1 << 22)) || func_81(iParam0, (1 << 25)))
		{
			if (func_296(1))
			{
				return false;
			}
		}
	}
	if (func_297(Global_35))
	{
		return false;
	}
	if (func_298(0, 1, 1) && !func_299(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_81(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_300(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_292(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_301())
		{
			return false;
		}
		iVar2 = func_302(func_2());
		if (func_303(iVar2))
		{
			if (func_304(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_305(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_306(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_117(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_307(uParam0->f_51))
	{
		func_308(uParam0->f_51, 0);
		fVar0 = func_309(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, func_310());
		bVar1 = func_230(!func_81(uParam0->f_3, 1), 20.0f, -1.0f);
		uParam0->f_51.f_11 = func_312(iVar2, func_311(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_118(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_313(iParam2, 1, iVar0);
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
			if (func_314(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_315(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!(iParam2->f_1 & 8) != 0)
			{
				if (func_316(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_315(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_317(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_315(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if ((*iParam2 & 32) != 0)
			{
				if (func_318(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_315(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_292(PLAYER::PLAYER_ID(), 0, 1, (iParam2->f_1 & (1 << 19)) == 0))
		{
			if (!(iParam2->f_1 & (1 << 14)) != 0)
			{
				*uParam3 = (1 << 14);
				func_315(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_319(iParam2, 1065353216))
			{
				if (!(iParam2->f_1 & 4) != 0)
				{
					if (func_320(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_315(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!(iParam2->f_1 & 256) != 0)
				{
					if (func_321(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_315(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(iParam2->f_1 & 16) != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_322(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_315(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_322(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_315(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if ((*iParam2 & 8) != 0)
			{
				if (func_323(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_315(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if ((*iParam2 & (1 << 18)) != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20.0f)
			{
				if (func_324(&iParam0, iParam2))
				{
					*uParam3 = (1 << 12);
					func_315(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(iParam2->f_1 & 2) != 0)
			{
				if (func_325(iParam2, 4000))
				{
					if ((func_326(iParam0, Global_1935630.f_41, (*iParam2 & 128) != 0, 0, (*iParam2 & 256) != 0) & func_327(iParam2, iParam0)) && func_328(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_315(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(iParam2->f_1 & 2) != 0)
		{
			if (iParam2->f_12 < 4.0f)
			{
				if ((func_326(iParam0, Global_1935630.f_41, (*iParam2 & 128) != 0, 1, (*iParam2 & 256) != 0) & func_327(iParam2, iParam0)) && func_328(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_315(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if ((*iParam2 & (1 << 17)) == 0)
						{
							if (func_329(iParam0, Global_1935630.f_41))
							{
								func_330();
								*uParam3 = 2;
								func_315(iParam0, iParam2, *uParam3);
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
						if (func_329(iParam0, Global_1935630.f_41))
						{
							func_330();
							*uParam3 = 2;
							func_315(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10.0f)
			{
				if (func_331(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_332() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_330();
						*uParam3 = 2;
						func_315(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if ((*iParam2 & (1 << 17)) == 0)
				{
					if (func_333())
					{
						if (func_329(iParam0, Global_1935630.f_42))
						{
							func_330();
							*uParam3 = 2;
							func_315(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!(iParam2->f_1 & (1 << 10)) != 0)
		{
			if (func_334(iParam2, iParam0))
			{
				*uParam3 = (1 << 10);
				func_315(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!(iParam2->f_1 & (1 << 11)) != 0)
			{
				if (func_335(iParam0, iParam1, iParam2))
				{
					*uParam3 = (1 << 11);
					func_315(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if ((*iParam2 & 16) != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_336(iParam0, iParam2))
					{
						*uParam3 = (1 << 13);
						func_315(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if ((*iParam2 & 64) != 0)
			{
				if (func_337(iParam0, iParam2))
				{
					*uParam3 = (1 << 15);
					func_315(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12.0f)
		{
			if ((*iParam2 & (1 << 20)) != 0)
			{
				if (func_338(iParam2, 4000))
				{
					if (func_339(&iParam0, iParam2))
					{
						*uParam3 = (1 << 9);
						func_315(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if ((*iParam2 & (1 << 10)) != 0)
			{
				if (func_340(iParam0, iParam2))
				{
					*uParam3 = (1 << 16);
					iParam2->f_4 = 0;
					func_315(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(iParam2->f_1 & 1) != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_341(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_315(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_119()
{
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"), 2791.884f, -1173.433f, 48.86314f, 5.25f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_WINDOW_SMASHED"), 2791.884f, -1173.433f, 48.86314f, 5.25f))
	{
		return true;
	}
	return false;
}

int func_120()
{
	return Global_1572887.f_12;
}

int func_121(int iParam0)
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

int func_122(int iParam0)
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

void func_123(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_342();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_343(iParam0);
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
	if (func_344(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_243())
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
	Global_40.f_11095.f_35 = func_345(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_342();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_346(iVar1);
		func_348(func_347(), 0, 4000);
		func_349(Global_40.f_11095.f_35);
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
		func_350(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_352(func_351(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_122(14))
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
					sParam4 = func_353(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_354(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_354(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_352(func_351(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_122(4))
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
					sParam4 = func_353(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_354(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_354(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_351(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_355(10, 1);
	}
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

void func_125(int iParam0, int iParam1)
{
	func_356(iParam0, iParam1);
}

bool func_126(int iParam0)
{
	if (func_29(iParam0, iLocal_120, 1, 0) || func_29(iParam0, iLocal_121, 1, 0))
	{
		return true;
	}
	return false;
}

void func_127(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

void func_128(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

struct<8> /*64*/ func_129(char* sParam0)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, sParam0);
	return cVar0;
}

char* func_130(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_131(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_290())
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
				if (func_357(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_152(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_26(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_358(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_360(func_359(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_132()
{
	if (sLocal_161.f_46)
	{
		func_53(0);
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_120))
	{
		if (func_29(Global_35, iLocal_120, 1, 0))
		{
			if (!func_292(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_53(1);
			}
		}
		else
		{
			func_53(0);
		}
	}
}

void func_133()
{
	int iVar0;
	int iVar1;

	if (iLocal_965 > 0)
	{
		iVar0 = 2;
		while (iVar0 <= 15)
		{
			if (sLocal_358[iVar0 /*32*/].f_1 != 0)
			{
				if (!func_58(iLocal_98[iVar0], 0, 1))
				{
					iVar1++;
				}
				else if (!func_126(iLocal_98[iVar0]))
				{
					func_361(iLocal_98[iVar0], 0, 0);
					iVar1++;
				}
			}
			iVar0++;
		}
		iLocal_1220 = iVar1;
	}
}

void func_134()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(10)))
	{
		func_36(iLocal_98[0], iLocal_98[1], func_35("IGNORE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(11)))
	{
		func_36(iLocal_98[0], iLocal_98[0], func_35("FRUSTRATED"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		func_363(1891783641, iLocal_98[0], 1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(12)))
	{
		func_36(iLocal_98[0], iLocal_98[0], func_35("WORRY"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		func_363(1891783641, iLocal_98[0], 1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(13)))
	{
		func_36(iLocal_98[0], iLocal_98[0], func_35("ANGER"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(14)))
	{
		func_163();
		if (iLocal_944 == 1 && !func_15(iLocal_34, (1 << 28)))
		{
			func_36(iLocal_98[0], Global_35, func_35("CALL_LONG_ALT"), "", -1.0f, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
		else
		{
			func_36(iLocal_98[0], Global_35, func_35("CALL_LONG"), "", -1.0f, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_98[0], &sLocal_908);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(15)))
	{
		func_163();
		func_36(iLocal_98[0], Global_35, func_35("CALL_SHORT"), "", -1.0f, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_98[0], &sLocal_908);
	}
	if (!func_15(iLocal_34, (1 << 26)) && !func_15(iLocal_35, (1 << 24)))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(16)) || (func_15(iLocal_34, (1 << 28)) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], sLocal_136[0 /*2*/], "interact_01_barman", 1)))
		{
			if (!func_15(iLocal_34, (1 << 28)))
			{
				func_36(iLocal_98[0], Global_35, func_35("EXPLAIN"), "", -1.0f, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			}
			else if (func_364(0))
			{
				func_36(iLocal_98[0], Global_35, func_35("EXPLAIN_SICK"), "", -1.0f, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			}
			else
			{
				func_36(iLocal_98[0], Global_35, func_35("EXPLAIN_ALT"), "", -1.0f, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			}
			IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_98[0], &sLocal_908);
			func_163();
			func_17(&iLocal_35, (1 << 24));
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(17)) && !func_15(iLocal_34, (1 << 26)))
	{
		if (!func_15(iLocal_34, (1 << 28)))
		{
			func_36(iLocal_98[0], Global_35, func_35("NEED_HELP"), "", -1.0f, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
		else if (func_364(0))
		{
			func_36(iLocal_98[0], Global_35, func_35("NEED_HELP_SICK"), "", -1.0f, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
		else
		{
			func_36(iLocal_98[0], Global_35, func_35("NEED_HELP_ALT"), "", -1.0f, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_98[0], &sLocal_908);
		func_17(&iLocal_34, (1 << 26));
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(20)) && func_151(-2.0f, 1, iLocal_98[0], 0))
	{
		func_36(iLocal_98[0], Global_35, func_35("HASNT_STARTED"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(21)))
	{
		func_36(iLocal_98[0], Global_35, func_35("DEAD_POSITIVE_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(22)))
	{
		func_36(iLocal_98[0], Global_35, func_35("DEAD_POSITIVE_B"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(23)))
	{
		func_36(iLocal_98[0], Global_35, func_35("DAMAGE_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(24)))
	{
		func_36(iLocal_98[0], Global_35, func_35("DAMAGE_B"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
	}
	if (iLocal_944 == 0)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], -2034435946))
		{
			func_36(iLocal_98[0], Global_35, func_35("THANKS_BEST"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
		}
	}
	else if (iLocal_944 == 1 && !func_364(0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], 1422968249))
		{
			func_36(iLocal_98[0], Global_35, func_35("THANKS_BEST"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], 983934627))
	{
		func_36(iLocal_98[0], Global_35, func_35("THANKS_BEST_SICK"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, func_362(25)))
	{
		if (iLocal_944 == 1)
		{
			func_36(Global_35, iLocal_98[0], func_35("WELCOME_BEST"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
		}
		else if (func_243())
		{
			func_36(Global_35, iLocal_98[0], func_35("WELCOME_BEST_JHN"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
		}
		else
		{
			func_36(Global_35, iLocal_98[0], func_35("WELCOME_BEST_ART"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
		}
	}
	if (iLocal_944 == 0)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], 1545820527))
		{
			func_36(iLocal_98[0], Global_35, func_35("THANKS_OK"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
		}
	}
	else if (iLocal_944 == 1 && !func_364(0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], 1328225310))
		{
			func_36(iLocal_98[0], Global_35, func_35("THANKS_OK"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], -1504940390))
	{
		func_36(iLocal_98[0], Global_35, func_35("THANKS_OK_SICK"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, func_362(26)))
	{
		if (func_243())
		{
			func_36(Global_35, iLocal_98[0], func_35("WELCOME_OK_JHN"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
		}
		else if (iLocal_944 == 0 || (iLocal_944 == 1 && !func_364(0)))
		{
			func_36(Global_35, iLocal_98[0], func_35("WELCOME_OK_ART"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
		}
		else
		{
			func_36(Global_35, iLocal_98[0], func_35("WELCOME_OK_ART_SICK"), 0, -1082130432, 0, 0, 1, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL_SUB"), 1, 0, 0);
		}
	}
}

void func_135()
{
	if (!func_63(iLocal_1208[0]))
	{
		iLocal_1208[0] = func_365(-1334037078, 0, 0);
	}
	if (!func_63(iLocal_1208[1]))
	{
		iLocal_1208[1] = func_365(-1641377529, 0, 0);
	}
	if (!func_63(iLocal_1211))
	{
		iLocal_1211 = func_365(-3907007, 0, 0);
	}
	if (!func_63(iLocal_1212))
	{
		iLocal_1212 = func_365(-74215266, 0, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1211))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1211) != 1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1211, 1);
		}
	}
	if (!sLocal_161.f_46)
	{
		if ((iLocal_965 <= 6 && !func_15(iLocal_34, (1 << 26))) || (iLocal_965 > 13 && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_120, true, 0)))
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1208[0]))
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[0]) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[0], 1);
				}
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1208[1]))
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[1]) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[1], 1);
				}
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1212))
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1212) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1212, 1);
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_120, true, 0))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1208[0]))
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[0]) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[0], 0);
			}
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1208[1]))
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[1]) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[1], 0);
			}
		}
	}
}

void func_136()
{
	if (!func_15(iLocal_35, (1 << 18)))
	{
		if (iLocal_965 >= 6)
		{
			if (!func_15(iLocal_35, (1 << 17)))
			{
				func_366();
			}
			else if (func_367())
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(sLocal_145.f_1, "barman", &sLocal_1182, true, "PBL_Window_Idle", 2) && ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(sLocal_145.f_1, "plr", &vLocal_1194, true, "PBL_Reward_Good", 2))
				{
					func_17(&iLocal_35, (1 << 18));
				}
				else
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_145.f_1, "PBL_Window_Idle"))
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_145.f_1, "PBL_Window_Idle");
					}
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_145.f_1, "PBL_Reward_Good"))
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_145.f_1, "PBL_Reward_Good");
					}
				}
			}
		}
	}
}

void func_137()
{
	if (func_15(iLocal_1275, 256))
	{
		return;
	}
	if (sLocal_161.f_46)
	{
		func_368(&iLocal_1278, &sLocal_1299);
		func_17(&iLocal_1275, 256);
		return;
	}
	if (iLocal_1277 > 0)
	{
		if (func_15(iLocal_1275, 4))
		{
			if (((iLocal_965 == 6 && !func_15(iLocal_1275, 8)) && !func_15(iLocal_1275, 16)) && !func_15(iLocal_1275, 32))
			{
				iLocal_1276 = func_370(&(iLocal_98[0]), &iLocal_1278, 20.0f, &sLocal_1299, &(sLocal_161.f_192), 0.0f, 1, 0, "", func_369(2, 0, 0), 0, 0, 2, 0, -1082130432, 0);
			}
			else
			{
				iLocal_1276 = func_370(&(iLocal_98[0]), &iLocal_1278, 20.0f, &sLocal_1299, &(sLocal_161.f_192), 0.0f, 1, 0, "", func_369(3, 0, 0), 0, 0, 2, 0, -1082130432, 0);
			}
		}
	}
	switch (iLocal_1277)
	{
		case 0:
			func_40(&(sLocal_1299[0 /*17*/]), func_371(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_40(&(sLocal_1299[1 /*17*/]), func_371(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			func_372(&(sLocal_1299[0 /*17*/]), 0, 0);
			func_372(&(sLocal_1299[1 /*17*/]), 0, 0);
			func_17(&iLocal_1275, 4);
			iLocal_1277 = 1;
			break;
		case 1:
			if (func_15(iLocal_34, 8) || func_29(Global_35, iLocal_120, 1, 0))
			{
				func_373(&iLocal_1278, 0);
				func_40(&(sLocal_1299[0 /*17*/]), func_371(4), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_40(&(sLocal_1299[1 /*17*/]), func_371(1), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_372(&(sLocal_1299[0 /*17*/]), 1, 0);
				func_372(&(sLocal_1299[1 /*17*/]), 1, 0);
				iLocal_1277 = 2;
			}
			break;
		case 2:
			if (!func_15(iLocal_1275, 32))
			{
				if (func_29(Global_35, iLocal_120, 1, 0))
				{
					iLocal_1276 = 0;
				}
				switch (iLocal_1276)
				{
					case 0:
						func_127(iLocal_98[0], 500);
						func_373(&iLocal_1278, 0);
						func_372(&(sLocal_1299[0 /*17*/]), 0, 0);
						func_372(&(sLocal_1299[1 /*17*/]), 0, 0);
						if (func_243())
						{
							if ((func_374(sLocal_161.f_3, 0) == 1 && iLocal_944 == 1) && func_15(iLocal_34, (1 << 28)))
							{
								func_36(Global_35, iLocal_98[0], func_35("YES_JHN_AGAIN"), "", -1.0f, 0, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
							}
							else
							{
								func_36(Global_35, iLocal_98[0], func_35("YES_JHN"), "", -1.0f, 0, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
							}
						}
						else if (func_374(sLocal_161.f_3, 0) == 1 && iLocal_944 == 1)
						{
							func_36(Global_35, iLocal_98[0], func_35("YES_ART_AGAIN"), "", -1.0f, 0, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
						}
						else
						{
							func_36(Global_35, iLocal_98[0], func_35("YES_ART"), "", -1.0f, 0, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
						}
						func_17(&iLocal_1275, 8);
						func_26(&uLocal_1256);
						iLocal_1277 = 3;
						break;
					case 1:
						func_373(&iLocal_1278, 0);
						func_372(&(sLocal_1299[0 /*17*/]), 0, 0);
						func_372(&(sLocal_1299[1 /*17*/]), 0, 0);
						if (func_243())
						{
							func_36(Global_35, iLocal_98[0], func_35("NO_JHN"), "", -1.0f, 0, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
						}
						else
						{
							func_36(Global_35, iLocal_98[0], func_35("NO_ART"), "", -1.0f, 0, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
						}
						func_17(&iLocal_1275, 16);
						iLocal_1277 = 4;
						break;
				}
			}
			else
			{
				func_373(&iLocal_1278, 0);
				func_372(&(sLocal_1299[0 /*17*/]), 0, 0);
				func_372(&(sLocal_1299[1 /*17*/]), 0, 0);
				iLocal_1277 = 4;
			}
			break;
		case 3:
			if (!func_15(iLocal_34, (1 << 24)))
			{
				if (!func_15(iLocal_1275, (1 << 9)))
				{
					if (!func_15(iLocal_1275, (1 << 12)))
					{
						func_375(1);
					}
					else if (func_27(&uLocal_1256) > 10.0f)
					{
						if ((!func_29(Global_35, iLocal_120, 1, 0) && !func_29(Global_35, iLocal_121, 1, 0)) && !func_376(PLAYER::PLAYER_ID(), &(iLocal_98[0])))
						{
							func_372(&(sLocal_1299[1 /*17*/]), 1, 0);
							func_17(&iLocal_1275, (1 << 9));
						}
					}
				}
				else
				{
					func_377();
					if (func_15(iLocal_34, (1 << 16)))
					{
						func_372(&(sLocal_1299[1 /*17*/]), 0, 0);
						func_26(&uLocal_1256);
						func_125(&iLocal_1275, (1 << 12));
						iLocal_1277 = 4;
					}
					else
					{
						switch (iLocal_1276)
						{
							case 0:
								break;
							case 1:
								func_372(&(sLocal_1299[1 /*17*/]), 0, 0);
								func_36(Global_35, iLocal_98[0], func_35("CHANGE_MIND"), "", -1.0f, 0, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
								func_17(&iLocal_1275, 16);
								func_17(&iLocal_1275, (1 << 10));
								func_26(&uLocal_1256);
								func_125(&iLocal_1275, (1 << 12));
								iLocal_1277 = 4;
								break;
						}
					}
				}
			}
			else
			{
				func_368(&iLocal_1278, &sLocal_1299);
				iLocal_1277 = 10;
			}
			break;
		case 4:
			if (!func_15(iLocal_1275, (1 << 12)))
			{
				func_375(0);
			}
			else if (func_15(iLocal_35, (1 << 20)) || func_15(iLocal_34, 4))
			{
				func_26(&uLocal_1256);
				iLocal_1277 = 5;
			}
			break;
		case 5:
			if (!func_15(iLocal_1275, (1 << 12)))
			{
				func_375(0);
			}
			else
			{
				func_372(&(sLocal_1299[0 /*17*/]), 1, 0);
				func_372(&(sLocal_1299[1 /*17*/]), 1, 0);
				iLocal_1277 = 6;
			}
			break;
		case 6:
			switch (iLocal_1276)
			{
				case 0:
					func_36(Global_35, iLocal_98[0], func_35("POST_QUIT_PLY_POS"), "", -1.0f, 0, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
					func_372(&(sLocal_1299[0 /*17*/]), 0, 0);
					func_372(&(sLocal_1299[1 /*17*/]), 0, 0);
					func_26(&uLocal_1256);
					iLocal_1277 = 7;
					break;
				case 1:
					func_36(Global_35, iLocal_98[0], func_35("POST_QUIT_PLY_NEG"), "", -1.0f, 0, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
					func_372(&(sLocal_1299[0 /*17*/]), 0, 0);
					func_372(&(sLocal_1299[1 /*17*/]), 0, 0);
					func_26(&uLocal_1256);
					iLocal_1277 = 8;
					break;
			}
			break;
		case 7:
			if (func_27(&uLocal_1256) > 3.0f && func_151(0, 1, Global_35, 1))
			{
				if (iLocal_944 == 0)
				{
					func_36(iLocal_98[0], Global_35, func_35("GOODBYE_POS"), "", -1.0f, 0, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				else
				{
					func_36(iLocal_98[0], Global_35, "GENERIC_YES", "", -1.0f, 2, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				iLocal_1277 = 9;
			}
			break;
		case 8:
			if (func_27(&uLocal_1256) > 3.0f && func_151(0, 1, Global_35, 1))
			{
				func_36(iLocal_98[0], Global_35, func_35("GOODBYE_NEG"), "", -1.0f, 0, 0, 0, 2, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
				iLocal_1277 = 9;
			}
			break;
		case 9:
			break;
	}
}

void func_138()
{
	int iVar0;

	if (iLocal_944 != 0)
	{
		return;
	}
	if (!func_15(iLocal_34, 16))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[1], joaat("ENDSINWALK")))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_145.f_0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_145.f_0, "man", iLocal_98[1]);
			}
			PED::FORCE_PED_MOTION_STATE(iLocal_98[1], joaat("MOTIONSTATE_WALK"), false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2790.094f, -1186.867f, 46.58545f, 1.0f, 20000, 5.0f, 524289, 40000.0f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2799.103f, -1192.156f, 46.13103f, 1.0f, 20000, 5.0f, 524289, 40000.0f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2801.462f, -1196.941f, 46.23405f, 1.0f, 20000, 5.0f, 524289, 40000.0f);
			TASK::TASK_SMART_FLEE_COORD(0, sLocal_161.f_51, 100.0f, -1, 0, 1.0f);
			TASK::TASK_WANDER_STANDARD(0, 40000.0f, 0);
			func_128(iLocal_98[1], &iVar0, 0, 0, 1, 1);
			func_17(&iLocal_34, 16);
		}
	}
}

void func_139()
{
	if (func_15(iLocal_1275, 8))
	{
		if (func_29(Global_35, iLocal_120, 1, 0))
		{
			if (func_378(&(sLocal_161.f_5), 256))
			{
				func_189(&(sLocal_161.f_5), 0);
				func_47(&(sLocal_161.f_5), 6000);
			}
		}
		else if (!func_378(&(sLocal_161.f_5), 256))
		{
			func_189(&(sLocal_161.f_5), 1);
			func_47(&(sLocal_161.f_5), 2000);
		}
	}
}

void func_140()
{
	if (sLocal_161.f_46)
	{
		func_379(1);
	}
	else if (func_15(iLocal_1275, 8))
	{
		if (func_126(Global_35))
		{
			func_379(0);
		}
		else
		{
			func_379(1);
		}
	}
}

int func_141(int iParam0, int iParam1, float fParam2, var uParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!func_58(iParam0, 0, 1) || !func_58(iParam1, 0, 1))
	{
		return 0;
	}
	if (func_380(iParam0, iParam1, 1) <= (fParam2 * fParam2) || func_381(iParam0, iParam4, 0, 1))
	{
		if (!*uParam3)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 0, 51, 0);
			TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, -1, 0, 51, 0);
			PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
			*uParam3 = 1;
		}
		if (bParam6)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		}
		if (bParam5)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.0f);
		}
	}
	else if (*uParam3)
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
		TASK::TASK_CLEAR_LOOK_AT(iParam1);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
		*uParam3 = 0;
	}
	return *uParam3;
}

void func_142()
{
	if (!func_15(iLocal_34, (1 << 18)))
	{
		func_60(iLocal_98[0]);
		func_60(Global_35);
		func_17(&iLocal_34, (1 << 18));
	}
}

void func_143()
{
	if (func_15(iLocal_35, (1 << 21)))
	{
		return;
	}
	switch (iLocal_38)
	{
		case 0:
			sLocal_153.f_0 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_153.f_4, 0, "pbl_Rat", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_153.f_0, 2801.41f, -1168.59f, 48.19f, 0.0f, 0.0f, 0.0f, 2);
			if (func_58(iLocal_98[3], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_153.f_0, "A_C_RAT_01", iLocal_98[3], 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(sLocal_153.f_0);
			iLocal_1343 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("P_CANDLELAMP01X"), 2791.268f, -1168.866f, 48.06049f, 5);
			iLocal_38++;
			break;
		case 1:
			if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1343))
			{
				iLocal_1334 = ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_1343);
				if (iLocal_1334 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_153.f_0, "candle", iLocal_1334, 0);
					iLocal_1344 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("P_GLASS01X"), 2791.383f, -1168.21f, 47.99231f, 5);
					iLocal_38++;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1344))
			{
				iLocal_1335 = ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_1344);
				if (iLocal_1335 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_153.f_0, "glass01", iLocal_1335, 0);
					iLocal_1345 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("P_GLASS01X"), 2791.398f, -1168.19f, 48.09696f, 5);
					iLocal_38++;
				}
			}
			break;
		case 3:
			if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1345))
			{
				iLocal_1336 = ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_1345);
				if (iLocal_1336 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_153.f_0, "glass02", iLocal_1336, 0);
					iLocal_1346 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("P_GLASS01X"), 2791.398f, -1168.19f, 48.09696f, 5);
					iLocal_38++;
				}
			}
			break;
		case 4:
			if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1346))
			{
				iLocal_1337 = ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_1346);
				if (iLocal_1337 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_153.f_0, "glass03", iLocal_1337, 0);
					iLocal_1347 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("P_GLASS01X"), 2791.269f, -1168.444f, 47.98463f, 5);
					iLocal_38++;
				}
			}
			break;
		case 5:
			if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1347))
			{
				iLocal_1338 = ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_1347);
				if (iLocal_1338 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_153.f_0, "glass04", iLocal_1338, 0);
					iLocal_1348 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("P_GLASS01X"), 2791.204f, -1168.556f, 47.99098f, 5);
					iLocal_38++;
				}
			}
			break;
		case 6:
			if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1348))
			{
				iLocal_1339 = ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_1348);
				if (iLocal_1339 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_153.f_0, "glass05", iLocal_1339, 0);
					iLocal_38++;
				}
			}
			break;
		case 7:
			break;
		case 8:
			func_17(&iLocal_35, (1 << 21));
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_153.f_4))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_153.f_0, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(sLocal_153.f_0);
		}
	}
}

void func_144()
{
	if (func_15(iLocal_35, (1 << 22)))
	{
		return;
	}
	switch (iLocal_39)
	{
		case 0:
			sLocal_153.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_153.f_5, 0, "pblWindowAction1", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_153.f_1, 2801.41f, -1168.59f, 48.2f, 0.0f, 0.0f, 0.0f, 2);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_1, "breakoutLoop1", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_1, "breakoutLoop2", false, false);
			if (func_58(iLocal_98[5], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_153.f_1, "RAT", iLocal_98[5], 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(sLocal_153.f_1);
			iLocal_39++;
			break;
		case 1:
			iLocal_1340 = OBJECT::CREATE_OBJECT(joaat("P_WHISKEYGLASS01X"), 2794.263f, -1165.707f, 47.99822f, true, true, false, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_153.f_1, "GLASS", iLocal_1340, 0);
			iLocal_39++;
			break;
		case 2:
			func_17(&iLocal_35, (1 << 22));
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_153.f_5))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_153.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(sLocal_153.f_1);
		}
	}
}

void func_145()
{
	if (func_15(iLocal_35, (1 << 23)))
	{
		return;
	}
	switch (iLocal_40)
	{
		case 0:
			sLocal_153.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_153.f_6, 0, "pblAll", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_153.f_2, 2801.41f, -1168.59f, 48.2f, 0.0f, 0.0f, 0.0f, 2);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_2, "breakoutLoop1", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_2, "breakoutLoop2", false, false);
			if (func_58(iLocal_98[4], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_153.f_2, "RAT", iLocal_98[4], 0);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(sLocal_153.f_2);
			iLocal_40++;
			break;
		case 1:
			iLocal_1341 = OBJECT::CREATE_OBJECT(joaat("P_GLASS01X"), 2796.597f, -1171.83f, 47.97153f, true, true, false, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_153.f_2, "GLASS", iLocal_1341, 0);
			iLocal_40++;
			break;
		case 2:
			iLocal_1349 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("P_CHAIR27X"), 2797.317f, -1170.767f, 47.97153f, 5);
			iLocal_40++;
			break;
		case 3:
			if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1349))
			{
				iLocal_1342 = ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_1349);
				if (iLocal_1342 != 0)
				{
					func_17(&iLocal_35, (1 << 23));
				}
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_153.f_6))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_153.f_2, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(sLocal_153.f_2);
		}
	}
}

bool func_146()
{
	switch (iLocal_944)
	{
		case 0:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_145.f_0, true, false))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_145.f_0, "PBL_Intro_Idle") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_145.f_0, "PBL_Intro_Action"))
				{
					return true;
				}
				else
				{
					func_382();
				}
			}
			break;
		case 1:
			return true;
	}
	return false;
}

void func_147()
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

	iVar0 = func_62(287);
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		iVar4 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
		if ((iVar4 == 0 || func_29(iVar4, iLocal_120, 1, 0)) || ENTITY::IS_ENTITY_OCCLUDED(iVar4))
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(iVar0);
			PED::SET_PED_CONFIG_FLAG(iVar4, 171 /*PCF_0x6868B572*/, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, true, false);
			PED::_SET_REMOVE_PED_NETWORKED(iVar4, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar4);
		}
	}
	iVar1 = func_62(288);
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
	{
		iVar5 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar1);
		if ((iVar5 == 0 || func_29(iVar5, iLocal_120, 1, 0)) || ENTITY::IS_ENTITY_OCCLUDED(iVar5))
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar1);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar5, 171 /*PCF_0x6868B572*/, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, false);
			PED::_SET_REMOVE_PED_NETWORKED(iVar5, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar5);
		}
	}
	iVar2 = func_62(286);
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar2))
	{
		iVar6 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar2);
		iVar8 = func_383(PERSCHAR::_0xF8DE7154F7D1458F(iVar2));
		if (((iVar6 == 0 && iVar8 == 0) || (func_29(iVar6, iLocal_120, 1, 0) && (iVar8 == 0 || ENTITY::IS_ENTITY_OCCLUDED(iVar8)))) || (ENTITY::IS_ENTITY_OCCLUDED(iVar6) && (iVar8 == 0 || ENTITY::IS_ENTITY_OCCLUDED(iVar8))))
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar2);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar6, 171 /*PCF_0x6868B572*/, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, false);
			PED::_SET_REMOVE_PED_NETWORKED(iVar6, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar8, true, false);
				VEHICLE::_0xC399CC89FBA05DA0(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar8), true);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar8);
			}
		}
	}
	iVar3 = func_62(298);
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar3))
	{
		iVar7 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar3);
		if ((iVar7 == 0 || func_29(iVar7, iLocal_120, 1, 0)) || ENTITY::IS_ENTITY_OCCLUDED(iVar7))
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar3);
		}
		else
		{
			PERSCHAR::_0xA8C406C2A56EDC16(iVar3);
			PED::SET_PED_CONFIG_FLAG(iVar7, 171 /*PCF_0x6868B572*/, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, false);
			PED::_SET_REMOVE_PED_NETWORKED(iVar7, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar7);
		}
	}
	bLocal_15 = true;
}

void func_148()
{
	if (iLocal_944 == 0)
	{
		iLocal_17[0] = 0;
		iLocal_17[1] = 0;
		iLocal_17[2] = 1;
		iLocal_17[3] = 1;
		iLocal_17[4] = 1;
		iLocal_17[5] = 1;
		iLocal_17[6] = 1;
		iLocal_17[7] = 1;
		iLocal_17[8] = 1;
		iLocal_17[9] = 1;
		iLocal_17[10] = 0;
		iLocal_17[11] = 0;
		iLocal_17[12] = 0;
		iLocal_17[13] = 0;
		iLocal_17[14] = 0;
		iLocal_17[15] = 0;
	}
	else
	{
		iLocal_17[0] = 0;
		iLocal_17[1] = 0;
		iLocal_17[2] = 1;
		iLocal_17[3] = 1;
		iLocal_17[4] = 1;
		iLocal_17[5] = 1;
		iLocal_17[6] = 1;
		iLocal_17[7] = 1;
		iLocal_17[8] = 1;
		iLocal_17[9] = 1;
		iLocal_17[10] = 1;
		iLocal_17[11] = 1;
		iLocal_17[12] = 1;
		iLocal_17[13] = 1;
		iLocal_17[14] = 1;
		iLocal_17[15] = 1;
	}
}

void func_149()
{
	sLocal_908.f_3 = Global_35;
	sLocal_908 = { 0.0f, 0.0f, 0.0f /*3*/ };
	sLocal_908.f_8 = 4;
	sLocal_908.f_4 = 21030;
	sLocal_908.f_20 = 4;
	sLocal_908.f_19 = 4;
	sLocal_908.f_22 = 4;
	sLocal_908.f_21 = 4;
	sLocal_908.f_17 = 4;
	sLocal_908.f_18 = 4;
	sLocal_908.f_7 = -1;
	sLocal_908.f_13 = 2;
}

bool func_150(var uParam0, var uParam1, float fParam2, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;

	func_384(Global_35, uParam0->f_51, uParam1, 0.0f, 0, 0);
	fVar0 = 0.0f;
	if (func_385(uParam1, iParam5))
	{
		if (PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (func_159(uParam0, fParam2, 1114636288, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264, bParam14, 1))
	{
		return true;
	}
	return false;
}

bool func_151(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_386(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_387(fParam0))
	{
		return false;
	}
	return true;
}

float func_152(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_153()
{
	if ((iLocal_1219 >= 7 || iLocal_944 == 1) || !VOLUME::DOES_VOLUME_EXIST(iLocal_135))
	{
		return;
	}
	if (func_381(Global_35, iLocal_135, 0, 1))
	{
		if (!func_15(iLocal_35, (1 << 10)))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(0)))
			{
				func_36(iLocal_98[0], iLocal_98[1], func_35("DENY"), "", -1.0f, 0, 0, 0, 1, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_363(1891783641, iLocal_98[0], 1);
				func_17(&iLocal_35, (1 << 10));
				iLocal_1219++;
			}
		}
		if (!func_15(iLocal_35, (1 << 11)))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(1)))
			{
				func_36(iLocal_98[0], iLocal_98[1], func_35("CLOSED"), "", -1.0f, 0, 0, 0, 1, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_363(1891783641, iLocal_98[0], 1);
				iLocal_1219++;
				func_17(&iLocal_35, (1 << 11));
			}
		}
		if (!func_15(iLocal_35, (1 << 12)))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(2)))
			{
				func_36(iLocal_98[0], iLocal_98[1], func_35("NOT_SURE"), "", -1.0f, 0, 0, 0, 1, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_363(1891783641, iLocal_98[0], 1);
				iLocal_1219++;
				func_17(&iLocal_35, (1 << 12));
			}
		}
		if (!func_15(iLocal_35, (1 << 13)))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(3)))
			{
				func_36(iLocal_98[0], iLocal_98[1], func_35("SORRY"), "", -1.0f, 0, 0, 0, 1, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_363(1891783641, iLocal_98[0], 1);
				iLocal_1219++;
				func_17(&iLocal_35, (1 << 13));
			}
		}
		if (!func_15(iLocal_35, (1 << 14)))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[1], func_362(4)))
			{
				func_36(iLocal_98[1], iLocal_98[0], func_35("CONFUSED"), "", -1.0f, 0, 0, 0, 1, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_363(1891783641, iLocal_98[1], 1);
				iLocal_1219++;
				func_17(&iLocal_35, (1 << 14));
			}
		}
		if (!func_15(iLocal_35, (1 << 15)))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[1], func_362(5)))
			{
				func_36(iLocal_98[1], iLocal_98[0], func_35("CLOSED_WHEN"), "", -1.0f, 0, 0, 0, 1, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_363(1891783641, iLocal_98[1], 1);
				iLocal_1219++;
				func_17(&iLocal_35, (1 << 15));
			}
		}
		if (!func_15(iLocal_35, (1 << 16)))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[1], func_362(6)))
			{
				func_36(iLocal_98[1], iLocal_98[0], func_35("ANGRY"), "", -1.0f, 0, 0, 0, 1, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_363(1891783641, iLocal_98[1], 1);
				iLocal_1219++;
				func_17(&iLocal_35, (1 << 16));
			}
		}
	}
}

bool func_154()
{
	float fVar0;

	if (iLocal_944 == 1)
	{
		return true;
	}
	func_388();
	func_138();
	fVar0 = func_389(sLocal_145.f_0);
	if ((fVar0 >= 0.99f || fVar0 == -1.0f) || (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], -816493370) && sLocal_161.f_98[0] < 5.0f))
	{
		return true;
	}
	return false;
}

int func_155(var uParam0, float fParam1)
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

void func_156()
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], sLocal_136[0 /*2*/].f_1, 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], "IDLE_LINE_01_BARMAN", 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	if (func_390())
	{
		TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], sLocal_136[0 /*2*/].f_1, 8.0f, -8.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	}
	TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], "IDLE_LINE_02_BARMAN", 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	if (func_390())
	{
		TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], sLocal_136[0 /*2*/].f_1, 8.0f, -8.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	}
	TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], "IDLE_LINE_04_BARMAN", 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], sLocal_136[0 /*2*/].f_1, 4.0f, -4.0f, -1, 1, 0.0f, false, 0, false, 0, false);
	func_128(iLocal_98[0], &iVar0, 0, 0, 1, 1);
}

bool func_157()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1228))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], sLocal_136[0 /*2*/], sLocal_1228, 1) || func_391(iLocal_98[0], "bCanBreakout", 1067030938))
		{
			return true;
		}
	}
	return false;
}

void func_158()
{
	func_179(iLocal_98[0], &(uLocal_80[0]), joaat("BLIP_STYLE_FRIENDLY"), 0, 0, "BLIP_BARTENDER");
}

bool func_159(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_287(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0.0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0.0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 & func_286())
	{
		bVar1 = true;
		fVar3 = func_230(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_288(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432, 1, 90.0f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_288(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432, 1, 90.0f, 0, 0);
		}
		if (func_289(&(uParam0->f_121), iParam4, fParam1))
		{
			func_114(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_234(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_113(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_114(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_234(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_160()
{
	if (func_374(107, 0) == 1 || func_374(107, 1) == 1)
	{
		if (func_243())
		{
			if (func_392(107, 0) == joaat("CS_JOHNMARSTON") || func_392(107, 1) == joaat("CS_JOHNMARSTON"))
			{
				return true;
			}
		}
		else if (func_392(107, 0) != joaat("CS_JOHNMARSTON") || func_392(107, 1) != joaat("CS_JOHNMARSTON"))
		{
			return true;
		}
	}
	return false;
}

void func_161()
{
	if (iLocal_944 == 0)
	{
		if (func_243())
		{
			func_393(sLocal_161.f_3, 9, 7, 0, joaat("CS_JOHNMARSTON"));
		}
		else
		{
			func_393(sLocal_161.f_3, 9, 7, 0, 0);
		}
	}
	else if (func_374(107, 0) == 1 || func_374(107, 1) == 1)
	{
		if (func_243())
		{
			if (func_392(sLocal_161.f_3, 9) == joaat("CS_JOHNMARSTON"))
			{
				func_17(&iLocal_34, (1 << 28));
			}
		}
		else
		{
			func_17(&iLocal_34, (1 << 28));
		}
	}
}

void func_162()
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_145.f_0))
	{
		return;
	}
	if (iLocal_944 == 0)
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(sLocal_145.f_0, "man"))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(sLocal_145.f_0);
		}
	}
}

void func_163()
{
	if (!func_15(iLocal_34, (1 << 25)))
	{
		func_363(1891783641, iLocal_98[0], 1);
		func_17(&iLocal_34, (1 << 25));
	}
}

void func_164()
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_136[0 /*2*/], "interact_01_barman", Global_35, -1, 4.0f, -4.0f, (1 << 26), 0.0f, false, false, -1.0f, 0, (1 << 16), -1.0f);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4.0f, -4.0f, 67108865, 0.0f, false, false, -1.0f, 0, (1 << 16), -1.0f);
	func_128(iLocal_98[0], &iVar0, 0, 0, 1, 1);
}

void func_165(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	iVar3 = ITEMSET::CREATE_ITEMSET(false);
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		iVar0 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam0, iVar3, 3);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar3);
			if (ENTITY::DOES_ENTITY_EXIST(MISC::_GET_ENTITY_FROM_ITEM(iVar2)))
			{
				if (ENTITY::GET_ENTITY_MODEL(MISC::_GET_ENTITY_FROM_ITEM(iVar2)) == iParam1)
				{
					OBJECT::SET_OBJECT_TARGETTABLE(MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar2), bParam2);
				}
			}
			iVar1++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar3);
}

bool func_166()
{
	if (func_15(iLocal_34, 8) || (func_15(iLocal_34, (1 << 26)) && func_29(Global_35, iLocal_120, 1, 0)))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], sLocal_136[0 /*2*/], "interact_01_barman", 1) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], sLocal_136[0 /*2*/], "interact_01_barman", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_98[0], sLocal_136[0 /*2*/], "interact_01_barman") > 0.7f))
	{
		func_17(&iLocal_34, 8);
		return true;
	}
	return false;
}

void func_167()
{
	CAM::_0x88544C0E3291DCAE(true);
	func_54();
}

void func_168()
{
	float fVar0;

	if (func_15(iLocal_1275, 32))
	{
		return;
	}
	if (!func_15(iLocal_34, (1 << 19)))
	{
		func_26(&uLocal_1238);
		func_17(&iLocal_34, (1 << 19));
	}
	else if (sLocal_161.f_98[0] < 15.0f)
	{
		if (func_103(&uLocal_1238))
		{
			func_394(&uLocal_1238);
		}
		else
		{
			fVar0 = func_27(&uLocal_1238);
			if (fVar0 > 20.0f)
			{
				func_17(&iLocal_1275, 32);
			}
			else if (fVar0 > 10.0f && !func_15(iLocal_1275, (1 << 13)))
			{
				func_36(iLocal_98[0], Global_35, "TAKE_YOUR_TIME_WARY", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_17(&iLocal_1275, (1 << 13));
			}
		}
	}
	else if (!func_103(&uLocal_1238))
	{
		func_395(&uLocal_1238);
	}
}

void func_169()
{
	if (func_126(Global_35))
	{
		func_56();
	}
	else if (!sLocal_161.f_46)
	{
		func_171(0);
	}
}

void func_170()
{
	int iVar0;

	func_37();
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_98[0], &sLocal_908);
	if (func_15(iLocal_1275, (1 << 10)))
	{
		func_36(iLocal_98[0], Global_35, func_35("CHANGE_MIND"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
	}
	else if (func_15(iLocal_34, (1 << 16)))
	{
		func_36(iLocal_98[0], Global_35, func_35("ABANDON"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
	}
	else
	{
		func_36(iLocal_98[0], Global_35, func_35("NO_RESPONSE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
	}
	iLocal_1233 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_HUMAN_SMOKE"), 2789.377f, -1172.297f, 47.1749f, 161.6934f, 0.0f, 0.0f, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!func_15(iLocal_34, (1 << 16)))
	{
		TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], "INTERACT_03_BARMAN", 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	}
	else
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 4000, -1.0f, -1.0f, -1.0f);
	}
	TASK::TASK_USE_SCENARIO_POINT(0, iLocal_1233, "WORLD_HUMAN_SMOKE_MALE_A", -1, true, false, joaat("WORLD_HUMAN_SMOKE"), false, -1.0f, false);
	func_128(iLocal_98[0], &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(iLocal_98[0], true);
	func_17(&iLocal_35, (1 << 20));
}

void func_171(bool bParam0)
{
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[0]) != 1)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[0], 1);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1208[1]) != 1)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1208[1], 1);
	}
	if (bParam0)
	{
		func_55();
	}
}

void func_172()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_BROKEN"):
			case joaat("EVENT_ENTITY_DESTROYED"):
				func_396(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_173()
{
	if (func_29(Global_35, iLocal_120, 1, 0))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_121, true, 0))
		{
			if (!CAM::IS_SPHERE_VISIBLE(2793.62f, -1174.031f, 46.92401f, 1.5f))
			{
				if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1208[0]) != 0.0f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1208[0], 0.0f, true);
				}
				if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1208[1]) != 0.0f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1208[1], 0.0f, true);
				}
			}
		}
	}
}

void func_174()
{
	int iVar0;
	float fVar1;

	func_397();
	func_398();
	switch (iLocal_945)
	{
		case 0:
			if (iLocal_965 == 8)
			{
				if (!func_15(iLocal_34, 2) && func_151(0, 1, Global_35, 1))
				{
					IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_98[0], &sLocal_908);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (!func_29(Global_35, iLocal_120, 1, 0))
					{
						TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], "interact_02_barman", 4.0f, -4.0f, -1, (1 << 26), 0.0f, false, 0, false, 0, false);
					}
					if (!func_29(Global_35, iLocal_132, 1, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, sLocal_1182, 1.0f, 20000, 0.25f, 0, sLocal_1182.f_3.f_2);
					}
					TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], "window_idle_barman", 2.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
					func_128(iLocal_98[0], &iVar0, 0, 0, 1, 1);
					func_36(iLocal_98[0], Global_35, func_35("ENTER"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					func_17(&iLocal_34, 2);
					func_56();
					iLocal_945 = 1;
				}
			}
			break;
		case 1:
			if (!func_15(iLocal_35, 16))
			{
				if (func_178(iLocal_98[0], sLocal_1182, 1) < 1.0f || func_29(Global_35, iLocal_132, 1, 0))
				{
					iLocal_945 = 2;
				}
			}
			break;
		case 2:
			if (!func_15(iLocal_35, 16))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_145.f_1, true, false))
				{
					if (func_29(Global_35, iLocal_120, 1, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), true) != 1)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_98[0]))
							{
								TASK::CLEAR_PED_TASKS(iLocal_98[0], true, false);
								TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_98[0], sLocal_136[0 /*2*/], "window_idle_barman", sLocal_1182, 0.0f, 0.0f, sLocal_1182.f_3.f_2, 4.0f, -4.0f, -1, 1, 0.0f, 2, 0, 0);
								func_26(&uLocal_1235);
								func_17(&iLocal_35, 16);
								iLocal_945 = 3;
							}
						}
					}
					else
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], joaat("SCRIPT_TASK_PLAY_ANIM"), true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], joaat("SCRIPT_TASK_PLAY_UPPER_ANIM_FACING_ENTITY"), true) != 1)
						{
							if (func_178(iLocal_98[0], sLocal_1182, 1) > 1.5f && !func_29(Global_35, iLocal_132, 1, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), true) != 1)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_98[0], sLocal_1182, 1.0f, 20000, 0.25f, 0, sLocal_1182.f_3.f_2);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY"), true) != 1 && !PED::IS_PED_FACING_PED(iLocal_98[0], Global_35, 10.0f))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_98[0], Global_35, -1, -1.0f, -1.0f, -1.0f);
							}
						}
						if (!func_15(iLocal_34, (1 << 15)))
						{
							if (iLocal_1220 == 0)
							{
								fVar1 = func_399();
								if (fVar1 > 20.0f)
								{
									if (func_29(Global_35, iLocal_120, 1, 0) || PED::IS_PED_FACING_PED(iLocal_98[0], Global_35, 5.0f))
									{
										func_36(iLocal_98[0], Global_35, func_35("HASNT_STARTED"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
										func_17(&iLocal_34, (1 << 15));
									}
								}
							}
						}
					}
				}
			}
			break;
		case 3:
			if (iLocal_1220 == 0 && func_29(Global_35, iLocal_120, 1, 0))
			{
				if (!func_15(iLocal_34, (1 << 15)))
				{
					fVar1 = func_399();
					if (fVar1 > 20.0f)
					{
						func_17(&iLocal_34, (1 << 15));
						iLocal_945 = 4;
					}
				}
			}
			break;
		case 4:
			func_400(sLocal_136[0 /*2*/], "window_line_01_barman", 1, 0, 0);
			iLocal_945 = 3;
			break;
		case 5:
			func_400(sLocal_136[0 /*2*/], "window_line_02_barman", 1, 0, 0);
			iLocal_945 = 3;
			break;
		case 6:
			func_400(sLocal_136[0 /*2*/], "window_line_03_barman", 1, 0, 0);
			iLocal_945 = 3;
			break;
		case 7:
			if (func_151(0, 1, iLocal_98[0], 1))
			{
				func_36(iLocal_98[0], Global_35, func_35("DEAD_POSITIVE_C"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				iLocal_945 = 3;
			}
			break;
		case 8:
			if (func_151(0, 1, iLocal_98[0], 1))
			{
				func_36(iLocal_98[0], Global_35, func_35("DEAD_POSITIVE_D"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				iLocal_945 = 3;
			}
			break;
		case 9:
			if (func_151(0, 1, iLocal_98[0], 1))
			{
				func_400(sLocal_136[0 /*2*/], "window_line_04_barman", 1, 0, 0);
				iLocal_945 = 3;
			}
			break;
		case 10:
			if (func_151(0, 1, iLocal_98[0], 1))
			{
				func_400(sLocal_136[0 /*2*/], "window_line_05_barman", 1, 0, 0);
				iLocal_945 = 3;
			}
			break;
		case 11:
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_145.f_1, "window_idle", true) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], sLocal_136[0 /*2*/], "window_idle_barman", 1))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_145.f_1, false))
				{
					func_127(iLocal_98[0], 250);
					ANIMSCENE::START_ANIM_SCENE(sLocal_145.f_1);
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_98[0], sLocal_145.f_1))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_145.f_1, "barman", iLocal_98[0], 0);
					}
				}
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_145.f_1, "PBL_GET_THE_LAW", true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_145.f_1, "BOOL_Window", true, false);
				func_17(&iLocal_35, 1);
				iLocal_945 = 12;
			}
			else
			{
				iLocal_945 = 13;
			}
			break;
		case 12:
			if ((ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(sLocal_145.f_1, "barman") || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], joaat("ENDSINWALK"))) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_98[0], sLocal_145.f_1))
			{
				TASK::_0x2E1D6D87346BB7D2(iLocal_98[0], Global_35, 0, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_98[0], Global_35, 500.0f, -1, 256, 2.0f, 0);
				iLocal_945 = 16;
			}
			else if (!func_15(iLocal_34, 32))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(27)))
				{
					func_36(iLocal_98[0], Global_35, func_35("DESTROYED"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					func_17(&iLocal_34, 32);
				}
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(28)))
			{
				func_36(iLocal_98[0], Global_35, func_35("CALL_LAW"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_17(&iLocal_34, 32);
			}
			break;
		case 14:
			func_125(&iLocal_35, 16);
			if (!func_15(iLocal_34, (1 << 29)))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], "window_line_06_barman", 8.0f, -8.0f, -1, 0, 0.0f, false, 0, false, 0, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1.0f, -1.0f, -1.0f);
				func_128(iLocal_98[0], &iVar0, 0, 0, 1, 1);
				func_36(iLocal_98[0], Global_35, func_35("LEAVE_EARLY"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_17(&iLocal_34, (1 << 29));
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_98[0], Global_35, -1, -1.0f, -1.0f, -1.0f);
			}
			if (func_25(&uLocal_1259))
			{
				if (func_27(&uLocal_1259) > 10.0f)
				{
					func_102(&uLocal_1259, 10.0f);
				}
				func_395(&uLocal_1259);
			}
			else
			{
				func_26(&uLocal_1259);
			}
			iLocal_945 = 15;
			break;
		case 15:
			if (func_29(Global_35, iLocal_120, 1, 0))
			{
				func_125(&iLocal_34, (1 << 11));
				iLocal_945 = 2;
			}
			else if (func_103(&uLocal_1259))
			{
				func_394(&uLocal_1259);
			}
			else if (!func_25(&uLocal_1259))
			{
				func_26(&uLocal_1259);
			}
			else if (func_27(&uLocal_1259) > 20.0f && func_151(0, 1, iLocal_98[0], 1))
			{
				func_17(&iLocal_34, (1 << 16));
			}
			break;
		case 16:
			break;
	}
}

void func_175()
{
	int iVar0;

	if (func_177())
	{
		return;
	}
	func_401();
	func_402();
	func_403();
	func_404();
	iLocal_1227 = func_405();
	if (iLocal_1227 == 0)
	{
		return;
	}
	iVar0 = iLocal_1227;
	if (func_58(iLocal_98[iLocal_1227], 0, 1))
	{
		switch (iVar0)
		{
			case 2:
				func_406(iLocal_98[2], &(uLocal_946[2]), 2);
				break;
			case 3:
				func_406(iLocal_98[3], &(uLocal_946[3]), 3);
				break;
			case 4:
				func_406(iLocal_98[4], &(uLocal_946[4]), 4);
				break;
			case 5:
				func_406(iLocal_98[5], &(uLocal_946[5]), 5);
				break;
			case 6:
				func_406(iLocal_98[6], &(uLocal_946[6]), 6);
				break;
			case 7:
				func_406(iLocal_98[7], &(uLocal_946[7]), 7);
				break;
			case 8:
				func_406(iLocal_98[8], &(uLocal_946[8]), 8);
				break;
			case 9:
				func_406(iLocal_98[9], &(uLocal_946[9]), 9);
				break;
			case 10:
				func_406(iLocal_98[10], &(uLocal_946[10]), 10);
				break;
			case 11:
				func_406(iLocal_98[11], &(uLocal_946[11]), 11);
				break;
			case 12:
				func_406(iLocal_98[12], &(uLocal_946[12]), 12);
				break;
			case 13:
				func_406(iLocal_98[13], &(uLocal_946[13]), 13);
				break;
			case 14:
				func_406(iLocal_98[14], &(uLocal_946[14]), 14);
				break;
			case 15:
				func_406(iLocal_98[15], &(uLocal_946[15]), 15);
				break;
		}
	}
	else
	{
		func_407(iLocal_1227);
	}
	iLocal_1227++;
	if (iLocal_944 == 0)
	{
		if (iLocal_1227 >= 10)
		{
			iLocal_1227 = 2;
		}
	}
	else if (iLocal_1227 >= 16)
	{
		iLocal_1227 = 2;
	}
}

void func_176()
{
	if (func_29(Global_35, iLocal_120, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
}

bool func_177()
{
	int iVar0;

	if (func_15(iLocal_34, (1 << 24)))
	{
		return true;
	}
	iVar0 = 2;
	while (iVar0 <= 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iVar0]))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_98[iVar0], iLocal_120, true, 0))
			{
				if (func_58(iLocal_98[iVar0], 0, 1))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	func_17(&iLocal_34, (1 << 24));
	return true;
}

float func_178(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_179(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_180(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_42(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

void func_181()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_1229))
	{
		func_408(&iLocal_1229, iLocal_120, joaat("BLIP_STYLE_AREA"));
	}
}

void func_182(char* sParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;
	int iVar2;

	sVar0.f_1 = sParam0;
	iVar2 = UIFEED::_0x4E88A65968A55C78(&sVar0, bParam1);
	if (func_409(iVar2))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iVar2, false);
	}
}

int func_183(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> /*104*/ sVar1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1.0f;
	if (bParam1 && func_410(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 += 0.1f;
	}
	sVar1.f_1 = 10;
	sVar1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, true, true, iParam0, &sVar1, 0);
	iVar24 = 0;
	while (iVar24 < sVar1.f_0)
	{
		if (sVar1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
		}
		else
		{
			iVar25 = sVar1.f_1[iVar24];
			if (func_411(iVar25, 0) && func_412(iVar25, joaat("CI_TAG_ITEM_MONEY")))
			{
				return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_184()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	int iVar5;
	int iVar6;

	if (func_15(iLocal_35, (1 << 19)))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
	{
		iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0);
		iVar6 = MISC::_GET_ENTITY_FROM_ITEM(iVar5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			PED::DETACH_CARRIABLE_ENTITY(iVar6, false, true);
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0.0f, (float)(-1 + iVar1), 0.0f) /*3*/ };
			func_155(&vVar2, 1.0f);
			ENTITY::SET_ENTITY_COORDS(iVar6, vVar2, false, true, true, true);
		}
		iVar1++;
	}
	func_17(&iLocal_35, (1 << 19));
}

void func_185(var uParam0)
{
	int iVar0;

	if (uParam0->f_75 != 0)
	{
		func_413(uParam0->f_75, 0, 1065353216, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
	}
	else if (uParam0->f_70 != 0)
	{
		func_414(uParam0->f_70, 0, 1065353216, 1, 0, 0, 0, -1);
	}
	if (func_411(uParam0->f_74, 0))
	{
		func_415(uParam0->f_74, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
	}
	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			iVar0 = (func_416() + uParam0->f_72);
			func_417(iVar0);
		}
		else
		{
			func_418(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		func_32(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216, 0);
	}
}

void func_186()
{
	if (func_243())
	{
		func_393(sLocal_161.f_3, iLocal_944, 1, 0, joaat("CS_JOHNMARSTON"));
	}
	else
	{
		func_393(sLocal_161.f_3, iLocal_944, 1, 0, 0);
	}
}

int func_187(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_419(iParam0))
	{
		return 0;
	}
	if (!func_420(iParam0, &iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (func_120() == -1)
	{
		iVar1 = Global_1914319.f_3[iParam0 /*446*/].f_10;
	}
	else
	{
		iVar1 = Global_1051260.f_48[iParam0 /*78*/].f_16;
	}
	func_422(iVar0, uParam1, func_421(iVar1), 0, 10);
	return 1;
}

void func_188(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = func_122(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_bank", MISC::ABSI(iVar0));
	}
}

void func_189(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), 256);
	}
	else
	{
		func_111(&(uParam0->f_1), 256);
	}
}

bool func_190()
{
	switch (iLocal_1222)
	{
		case 0:
			if (func_151(0, 1, 0, 0))
			{
				func_57(iLocal_131);
				func_36(iLocal_98[0], Global_35, func_35("STORE_POST"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				iLocal_1234 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_HUMAN_TWNREC_SCRUB_BLOOD_FLOOR_BUCKET"), vLocal_1272, 355.7023f, 0.0f, 0.0f, false);
				iLocal_1222++;
			}
			break;
		case 1:
			if (func_178(iLocal_98[0], vLocal_1272, 0) < 2.0f)
			{
				TASK::TASK_USE_SCENARIO_POINT(iLocal_98[0], iLocal_1234, 0, -1, true, false, 0, false, -1.0f, false);
				iLocal_1222++;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98[0], joaat("SCRIPT_TASK_ANY"), true) != 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_98[0], vLocal_1272, 1.0f, 20000, 0.25f, 0, 40000.0f);
			}
			break;
		case 2:
			if (func_151(0, 1, 0, 0))
			{
				func_36(iLocal_98[0], Global_35, func_35("STORE_CLEAN"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				iLocal_1222++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_191()
{
	float fVar0;

	if (sLocal_161.f_46 || !func_15(iLocal_1275, 16))
	{
		return;
	}
	if (sLocal_161.f_98[0] < 3.0f)
	{
		if (!func_25(&uLocal_936))
		{
			func_26(&uLocal_936);
			fLocal_942 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3.0f, 7.0f);
		}
		else
		{
			fVar0 = func_27(&uLocal_936);
			if (fVar0 < fLocal_942)
			{
				func_194(&(iLocal_98[0]), 0, Global_35, 1, 0, 0, 0, 1);
			}
			else if (fVar0 >= (fLocal_942 * 2.0f))
			{
				fLocal_942 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3.0f, 7.0f);
				func_26(&uLocal_936);
			}
		}
	}
}

void func_192(int iParam0)
{
	if (func_15(iLocal_34, (1 << 20)))
	{
		return;
	}
	if (func_58(iLocal_98[0], 0, 1))
	{
		func_423(1);
		LAW::_ENABLE_DISPATCH_LAW_2(true);
		PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 146 /*PCF_0x861831C4*/, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 148 /*PCF_0x0DD984BE*/, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 315 /*PCF_0xD38AEF95*/, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 146 /*PCF_0x861831C4*/, true);
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), iParam0, 0, 0.0f, 0.0f, false, 0.0f, 0.0f, 0);
		PED::_0xC6C4E15CF7D52FEA(iLocal_98[0], 1000.0f);
		LAW::_ADD_WITNESS_RESPONSE(PLAYER::PLAYER_ID(), iParam0, iLocal_98[0]);
		LAW::_LAW_WITNESS_RESPONSE_TASK(iLocal_98[0], Global_35, iLocal_98[0], Global_36, iParam0);
		LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), iParam0, 0, 0, true);
		func_17(&iLocal_34, (1 << 20));
	}
	else
	{
		func_423(1);
		LAW::_ENABLE_DISPATCH_LAW_2(true);
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), iParam0, 0, 0.0f, 0.0f, false, 0.0f, 0.0f, 0);
		LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), iParam0, 0, 0, true);
		func_17(&iLocal_34, (1 << 20));
	}
}

bool func_193()
{
	if (func_58(iLocal_98[0], 0, 1))
	{
		if (sLocal_161.f_98[0] < 50.0f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_98[0]))
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

void func_194(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> /*112*/ sVar0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
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
	sVar0.f_4 = 21030;
	sVar0.f_3 = iParam2;
	sVar0.f_8 = 4;
	if (bParam7)
	{
		sVar0.f_17 = 4;
		sVar0.f_18 = 1;
	}
	else
	{
		sVar0.f_17 = 0;
		sVar0.f_18 = 0;
	}
	sVar0.f_19 = 4;
	sVar0.f_20 = 2;
	sVar0.f_21 = 4;
	sVar0.f_22 = 3;
	sVar0 = { iParam4, iParam5, iParam6 /*3*/ };
	sVar0.f_12 = 0;
	sVar0.f_9 = 1;
	sVar0.f_10 = 1;
	sVar0.f_11 = 1;
	if (bParam3)
	{
		func_17(&(sVar0.f_5), 1);
	}
	sVar0.f_13 = 0;
	sVar0.f_7 = iParam1;
	func_125(&(sVar0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*uParam0, &sVar0);
	}
}

bool func_195(int iParam0)
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

void func_196(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_424(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_197(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_424(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_198(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_424(iParam0);
	if (bParam1)
	{
		func_425(iParam0, 4);
		func_426(iVar0, 1);
		func_427(iVar0, 1);
	}
	else
	{
		func_428(iParam0, 4);
		func_427(iVar0, 0);
	}
}

void func_199(int* iParam0, char* sParam1)
{
	if (func_195(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_197(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_429(iParam0, 1);
}

void func_200(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_111(&(uParam0->f_1), (1 << 11));
	}
}

void func_201(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_111(iParam0, 16);
	}
	else
	{
		func_207(iParam0, (1 << 26));
		func_207(iParam0, 16);
	}
}

void func_202(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(iParam0->f_1), 128);
	}
	else
	{
		func_111(&(iParam0->f_1), 128);
	}
}

void func_203(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_111(iParam0, 256);
	}
	else
	{
		func_207(iParam0, 256);
	}
}

void func_204(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_111(iParam0, (1 << 28));
	}
	else
	{
		func_207(iParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_111(iParam0, (1 << 30));
	}
	else
	{
		func_207(iParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_111(iParam0, (1 << 29));
	}
	else
	{
		func_207(iParam0, (1 << 29));
	}
}

int func_205(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
	iVar15 = UIFEED::_UI_FEED_POST_OBJECTIVE(&sVar0, &sVar13, bParam5);
	return iVar15;
}

char* func_206(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::VAR_STRING(2, func_430(sParam1));
}

void func_207(int iParam0, int iParam1)
{
	*iParam0 -= (*iParam0 & iParam1);
}

bool func_208(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_409(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
	}
	return iVar0 != 6;
}

void func_209(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_195(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_424(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_431(iVar0);
	*uParam0 = 0;
}

int func_210()
{
	return Global_1899515;
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_432(*iParam0);
	iVar1 = func_433(*iParam0);
	iVar2 = func_434(*iParam0);
	iVar3 = func_435(*iParam0);
	iVar4 = func_436(*iParam0);
	iVar5 = func_437(*iParam0);
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
	iVar6 = func_438(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_438(iVar1, iVar0);
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
	func_439(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -15 || !func_440(iParam1))
	{
		return;
	}
	if (Global_1914319.f_3[iParam0 /*446*/].f_4 != -15)
	{
		if (func_441(iParam2, Global_1914319.f_3[iParam0 /*446*/].f_4))
		{
			Global_1914319.f_3[iParam0 /*446*/].f_4 = iParam2;
		}
	}
	else
	{
		Global_1914319.f_3[iParam0 /*446*/].f_4 = iParam2;
	}
}

int func_213(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_442(iParam0))
	{
		return 0;
	}
	iVar2 = func_443(iParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			if (func_444(Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1, 1) > func_444(iParam3, 1))
			{
				return 1;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_2 = iParam2;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_210();
				func_211(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_4 = iVar1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 = iVar2;
			func_445(iParam0, iParam1, 1);
			Global_1935183.f_24 = 1;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == joaat("TSTAG_NO_TAGS"))
		{
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] = iParam1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_2 = iParam2;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_210();
				func_211(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_4 = iVar1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 = iVar2;
			func_445(iParam0, iParam1, 1);
			Global_1935183.f_24 = 1;
			if (func_446(iVar2))
			{
				iVar3 = 0;
				while (iVar3 < 5)
				{
					if (Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/].f_3 == iVar2 && Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] != iParam1)
					{
						if ((Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] == joaat("TSTAG_LOCKDOWN_SALOON") || Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] == joaat("TSTAG_LOCKDOWN_SALOON_SLUMS")) && (iParam1 == joaat("TSTAG_LOCKDOWN_SALOON") || iParam1 == joaat("TSTAG_LOCKDOWN_SALOON_SLUMS")))
						{
							return 0;
						}
						func_447(iParam0, &(Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/]));
					}
					iVar3++;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_214(int iParam0, int iParam1)
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
	if (func_15(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_15(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_15(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_15(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_15(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_15(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_15(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_15(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_215(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_222(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(iVar2)))
		{
			if (func_62(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_216(int iParam0)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_217(int iParam0, int iParam1)
{
	if (func_120() != -1)
	{
		return false;
	}
	if (!func_218(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] & iParam1) != 0;
}

bool func_218(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_219(int iParam0)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_220(int iParam0, int iParam1)
{
	if (func_120() != -1)
	{
		return;
	}
	if (!func_218(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= (Global_24887[iParam0 /*2*/] & iParam1);
}

void func_221(int iParam0)
{
	int iVar0;

	if (!func_218(iParam0))
	{
		return;
	}
	iVar0 = func_448(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_222(int iParam0)
{
	if (!func_218(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_223(int iParam0)
{
	return iParam0 != 0;
}

int func_224(int iParam0, bool bParam1)
{
	if (!func_218(iParam0))
	{
		return 0;
	}
	if (!func_217(iParam0, 2))
	{
		return 0;
	}
	if (func_222(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(iParam0)))
	{
		return 1;
	}
	if (func_217(iParam0, 1) && !bParam1)
	{
		func_265(iParam0, 128);
		return 1;
	}
	func_220(iParam0, 129);
	func_221(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_62(iParam0));
	func_449(iParam0, 0);
	return 1;
}

char* func_225(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_226(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 |= iParam1;
}

void func_227(int iParam0, bool bParam1)
{
	if (func_58(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_450(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

bool func_228(var uParam0, var uParam1)
{
	if (func_81(uParam0->f_3, (1 << 24)))
	{
		if (func_451(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_229(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6 /*PCF_DontInfluenceWantedLevel*/, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4 /*PCF_HasBounty*/, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494 /*PCF_0x5BD8B9DC*/, true);
}

float func_230(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_231(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_58(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_230(fParam2 >= 0.0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25.0f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_452(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000.0f, -1, 0, fParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_SET_REMOVE_PED_NETWORKED(iVar1, -1);
				}
				PED::_SET_REMOVE_PED_NETWORKED(iParam0, -1);
			}
		}
	}
}

void func_232(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_453(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_454(uParam0);
	func_455(uParam0);
	func_456(uParam0);
	if (!func_457(uParam0))
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_51.f_11))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(uParam0->f_51.f_11);
		}
		func_308(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_54();
	}
	if (!func_458(uParam0->f_3) && !func_81(uParam0->f_3, 256))
	{
		func_459(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_57(uParam0->f_173);
	func_57(uParam0->f_172);
}

void func_233(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_234(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_235(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_120() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_236(int iParam0)
{
	if (((func_237(iParam0, 1) && func_237(iParam0, 2)) && func_237(iParam0, 8)) && func_237(iParam0, (1 << 9)))
	{
		return true;
	}
	return false;
}

bool func_237(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_239(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_460(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_461(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_461(), iVar3);
		if (func_462(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_240(int iParam0)
{
	func_17(iParam0, (1 << 12));
}

void func_241(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

void func_242(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1[iVar0 /*8*/]))
		{
			strcpy_s(uParam1[iVar0 /*8*/], 64, sParam0);
			STREAMING::REQUEST_ANIM_DICT(uParam1[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

bool func_243()
{
	if (func_120() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 60;
		case 1:
			return 50;
		case 2:
			return 30;
		case 3:
			return 60;
		case 4:
			return 60;
		case 10:
			return 50;
		case 79:
			return 50;
		case 14:
			return 50;
		case 80:
			return 50;
		case 82:
			return 50;
		case 87:
			return 50;
		case 90:
			return 50;
		case 27:
			return 50;
		case 28:
			return 60;
		case 31:
			return 50;
		case 32:
			return 50;
		case 33:
			return 50;
		case 34:
			return 50;
		case 37:
			return 30;
		case 97:
			return 30;
		case 38:
			return 30;
		case 39:
			return 30;
		case 40:
			return 30;
		case 100:
			return 30;
		case 102:
			return 30;
		case 45:
			return 50;
		case 48:
			return 50;
		case 49:
			return 50;
		case 50:
			return 50;
		case 106:
			return 60;
		case 107:
			return 60;
		case 54:
			return 60;
		case 109:
			return 50;
		case 62:
			return 50;
		case 115:
			return 50;
		case 119:
			return 50;
		default:
			break;
	}
	return 0;
	return 0;
}

bool func_245(var uParam0)
{
	if (!func_463(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_463(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = joaat("META_OUTFIT_DEFAULT");
			}
			return false;
		}
		else if (!PED::_HAS_METAPED_OUTFIT_LOADED(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_246(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (!func_260(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (func_464(iParam0) == 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	iVar0 = (func_465(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_247(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;

	if (func_81(iParam0, 32))
	{
		if (func_466(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_467(Global_35, &(uParam1->f_12)) /*3*/ };
				if (!func_99(vVar1))
				{
					*uParam1 = { vVar1 /*3*/ };
				}
			}
		}
	}
	if (bParam2)
	{
		func_468(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_309(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0.0f, 0.0f, 0.0f, fVar4, fVar4, fVar4, func_310());
		if (func_469(Global_1310750[iParam0 /*111*/], (1 << 25)))
		{
			func_312(iVar0, func_311(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_312(iVar0, func_311(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_81(iParam0, 1))
		{
			func_470(*uParam1 + Vector(1.0f, 0.0f, 0.0f), 25.0f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_471(iParam0);
}

bool func_248(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/].f_1 != -1)
		{
			func_472(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_112(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_473(iParam0));
		fVar1 = 60.0f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_473(iParam0));
		fVar1 = 60.0f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35.0f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10.0f));
	TASK::_0x8F8C84363810691A(*uParam1, 7.0f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return true;
}

void func_249(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_474(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225.0f;
				*fParam2 = 6400.0f;
			}
			else
			{
				*fParam1 = 225.0f;
				*fParam2 = 4900.0f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_81(iParam0, 1))
			{
				if (func_112(iParam0, 2))
				{
				}
			}
			func_475(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 2:
			func_476(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 3:
			func_476(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7.0f;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		default:
			break;
	}
	if (func_106(iParam0))
	{
		*fParam2 = 40000.0f;
	}
}

Vector3 func_250(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0.0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_464(iParam1))
	{
		if (!func_477(iParam1, iVar0))
		{
			vVar4 = { func_246(iParam1, iVar0) /*3*/ };
			if (!func_99(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_255(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_478(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 /*3*/ };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_99(vVar4))
	{
	}
	return vVar1;
}

int func_251(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_42("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_252(int iParam0, Vector3 vParam1)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_464(iParam0))
	{
		vVar1 = { func_246(iParam0, iVar0) /*3*/ };
		if (func_479(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_253(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4.0f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_254(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	vVar2 = { *uParam0 /*3*/ };
	func_384(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_385(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_99(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] /*3*/ };
				vVar8 = { MISC::GET_CLOSEST_POINT_ON_LINE(Global_36, vVar2, vVar5, true) /*3*/ };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35.0f * 35.0f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80.0f * 80.0f))
				{
					if (bParam4)
					{
						iVar1 = func_480(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] /*3*/ };
						}
					}
					uParam0->f_8 = 0;
					return true;
				}
			}
			iVar0++;
		}
	}
	return func_251(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_255(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_249(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_81(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_256(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) /*3*/ };
		return true;
	}
	return false;
}

bool func_257(int iParam0, var uParam1, var uParam2, struct<7> /*56*/ sParam3, bool bParam10)
{
	if (func_481(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_482(iParam0, uParam2))
	{
		return false;
	}
	if (!func_483(sParam3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_484(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_258(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_259(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -771.7f, -1343.6f, 43.9f, 0.0f, 0.0f, 0.0f, 95.0f, 140.0f, 50.0f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -852.4f, -1349.5f, 45.0f, 5.0f, 0.0f, 0.0f, 70.0f, 130.0f, 50.0f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -907.6f, -1362.1f, 49.0f, 0.0f, 0.0f, 0.0f, 50.0f, 100.0f, 50.0f);
					return true;
				case 2:
					*uParam2 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -270.606f, 827.282f, 118.4249f, 0.0f, 0.0f, 11.275f, 80.0f, 100.4f, 86.6f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -235.442f, 653.1498f, 112.3099f, 0.0f, 0.0f, 49.575f, 44.4f, 76.775f, 50.0f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0.0f, 0.0f, 17.55f, 53.975f, 105.5f, 20.0f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -339.8f, 829.675f, 100.0f, 0.0f, 0.0f, 14.975f, 25.0f, 75.0f, 50.0f);
					return true;
			}
			break;
	}
	return false;
}

bool func_260(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_261(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_262(int iParam0, int iParam1)
{
	if (func_485(iParam0))
	{
		return;
	}
	if (func_486(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602 /*2*/].f_1 = iParam1;
	Global_36581[Global_36602 /*2*/] = iParam0;
	Global_36602++;
}

void func_263(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 0);
	if (bParam3)
	{
		func_207(&iParam1, (1 << 13));
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, iParam0);
	}
}

bool func_264(int iParam0, bool bParam1)
{
	if (func_120() != -1)
	{
		return false;
	}
	if (!func_218(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_448(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_62(iParam0));
}

void func_265(int iParam0, int iParam1)
{
	if (func_120() != -1)
	{
		return;
	}
	if (!func_218(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

void func_266(int iParam0)
{
	if (!func_218(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_267(int iParam0, bool bParam1)
{
	if (!func_218(iParam0))
	{
		return 0;
	}
	if (!func_217(iParam0, 2))
	{
		return 0;
	}
	if (func_217(iParam0, 32) && !bParam1)
	{
		func_449(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_222(iParam0)));
		if (func_120() == -1)
		{
			if (func_217(iParam0, (1 << 11)))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_62(iParam0));
				func_220(iParam0, (1 << 11));
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_62(iParam0));
		}
		return 0;
	}
	if (!func_487(iParam0) && func_120() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(iParam0)))
	{
		func_220(iParam0, 128);
		return 1;
	}
	func_449(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_222(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_62(iParam0));
	if (func_217(iParam0, (1 << 11)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_62(iParam0));
		func_220(iParam0, (1 << 11));
	}
	return 1;
}

bool func_268(int iParam0)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_62(iParam0)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_62(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_62(iParam0), false)))
		{
			return false;
		}
	}
	return true;
}

bool func_269()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_270(var uParam0, var uParam1, Vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> /*32*/ sVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				sVar2 = { func_488(vParam2, fParam5, uParam0->f_15, uParam0->f_19) /*3*/ };
				sVar2.f_3 = func_489(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_490(uParam0->f_12, uParam0, sVar2, sVar2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_491(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_95(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					sVar2 = { func_488(vParam2, fParam5, uParam0->f_15, uParam0->f_19) /*3*/ };
					sVar2.f_3 = func_489(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_492(&(uParam0->f_22)));
					sVar2 = { func_488(vParam2, fParam5, uParam0->f_6, bVar1) /*3*/ };
					sVar2.f_3 = func_489(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_490(uParam0->f_1, uParam0, sVar2, sVar2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307 /*PCF_DisableMountSpawning*/, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_493(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_92(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

bool func_271(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			(uParam1[iVar0 /*9*/])->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_272(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_494(*uParam0, 0.0f, 0.0f, 0.0f))
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

void func_273(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_274(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_275(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_276(int iParam0, int iParam1)
{
	if (!func_275(iParam0))
	{
		return false;
	}
	return (Global_1395482.f_2[iParam0] & iParam1) != 0;
}

int func_277(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

Vector3 func_278(var uParam0)
{
	return uParam0->f_51;
}

void func_279(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_280()
{
	return Global_1935436 == 2;
}

void func_281(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_282(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_81(iParam0, 2))
	{
		func_496(iParam0, func_495(iParam1));
	}
	else
	{
		func_498(iParam0, func_497());
	}
	fVar0 = (1.0f + (BUILTIN::TO_FLOAT((Global_17504.f_42[iParam0 /*8*/].f_1 / 2)) * 0.1f));
	if (fVar0 > 2.0f)
	{
		fVar0 = 2.0f;
	}
	else if (fVar0 < 1.0f)
	{
		fVar0 = 1.0f;
	}
	func_499(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_500(iParam0, 0);
	func_501(iParam0);
	func_502(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514 /*PCF_DisableFriendlyAmbientAnimalFollowing*/, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	Global_1310750[iParam0 /*111*/].f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_81(iParam0, 16))
	{
		func_283(iParam0, 0, 0, 0, 0);
	}
}

void func_283(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_503() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_260(iVar1) && !func_81(iVar1, iParam2)) && (!bParam3 || !func_299(iVar1))) && (!bParam4 || !func_504(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_505(iVar0);
			}
		}
		iVar0++;
	}
}

int func_284(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_285(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_469(Global_1310750[uParam0->f_3 /*111*/], (1 << 24)))
	{
		if (bParam2)
		{
			if (func_81(uParam0->f_3, (1 << 30)))
			{
				func_506(2, -1, 0, 0, 0);
			}
			else
			{
				func_506(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_506(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_507(1, uParam0->f_177))
				{
					func_508(16, uParam0->f_177);
					func_509(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_510(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_506(8, -1, 0, 0, 0);
	}
}

int func_286()
{
	if (func_511(Global_1935630.f_44))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_512())
		{
			return 1;
		}
	}
	return 0;
}

float func_287(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1.0f)
	{
		if (func_81(uParam0->f_3, (1 << 10)))
		{
			fVar0 = 95.0f;
		}
		else if (func_81(uParam0->f_3, (1 << 11)))
		{
			fVar0 = 80.0f;
		}
		else if (func_81(uParam0->f_3, (1 << 12)))
		{
			fVar0 = 65.0f;
		}
		else if (func_81(uParam0->f_3, (1 << 13)))
		{
			fVar0 = 55.0f;
		}
		else if (func_81(uParam0->f_3, (1 << 14)))
		{
			fVar0 = 30.0f;
		}
		else
		{
			fVar0 = 85.0f;
		}
		if (func_81(uParam0->f_3, 1))
		{
		}
		else if (func_81(uParam0->f_3, 2))
		{
			fVar0 -= 15.0f;
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 += 150.0f;
	}
	return fVar0;
}

int func_288(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_IS_PED_VISIBILITY_TRACKED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_513(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0.0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0.0f)
				{
					bVar1 = PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_IS_TRACKED_ENTITY_VISIBLE(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_514(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0.0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0.0f)
	{
		uParam0->f_7 = (func_104() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0.0f;
	}
	return 1;
}

bool func_289(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0.0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0.0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 += (uParam0[iVar0 /*9*/])->f_7;
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1--;
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_114(uParam0);
	return true;
}

bool func_290()
{
	return ((Global_1894899 & 1) != 0 && func_2() != -1);
}

bool func_291(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (uParam0->f_98[iVar0] != 0.0f)
		{
			if (uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_292(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_515(bParam1, bParam2, bParam3);
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

bool func_293(int iParam0)
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
	iVar0 = func_435(func_210());
	if (func_3(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_3(iParam0, (1 << 12)))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_3(iParam0, (1 << 10)))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_3(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, (1 << 9)))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, (1 << 13)))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, (1 << 11)))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_3(iParam0, (1 << 14)))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, (1 << 15)))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, (1 << 16)))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_294(int iParam0, int iParam1)
{
	return (func_284(iParam0) & iParam1) != 0;
}

bool func_295(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return false;
	}
	else if ((iParam0 & -1) == -1)
	{
		return true;
	}
	MISC::GET_CURR_WEATHER_STATE(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if ((iParam0 & 1) == 1 && func_516(iVar3))
	{
		return true;
	}
	if ((iParam0 & 2) == 2 && func_517(iVar3))
	{
		return true;
	}
	if ((iParam0 & 4) == 4 && func_518(iVar3))
	{
		return true;
	}
	if ((iParam0 & 8) == 8 && func_519(iVar3))
	{
		return true;
	}
	if ((iParam0 & 16) == 16 && func_520(iVar3))
	{
		return true;
	}
	if ((iParam0 & 32) == 32 && func_521(iVar3))
	{
		return true;
	}
	if ((iParam0 & 64) == 64 && func_522(iVar3))
	{
		return true;
	}
	return false;
}

bool func_296(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_523(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_297(int iParam0)
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

bool func_298(int iParam0, bool bParam1, bool bParam2)
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
		if (func_524())
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
		iVar0 = func_525(Global_1898164.f_1[0 /*5*/]);
		if (func_526(iVar0) && func_527(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_528(Global_1898164.f_1[0 /*5*/]))
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

bool func_299(int iParam0)
{
	if (!func_260(iParam0))
	{
		return false;
	}
	if (func_529(64) && func_530(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_300(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_531(iVar0) | func_532(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_301()
{
	return (Global_1894899 & 4) != 0;
}

int func_302(int iParam0)
{
	if (!func_533(iParam0))
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

bool func_303(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_304(Vector3 vParam0, int iParam3)
{
	if (!func_303(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_305(Vector3 vParam0)
{
	float fVar0;

	if (func_99(vParam0))
	{
		return false;
	}
	fVar0 = func_230(func_290(), 6.0f, 22.0f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, (1 << 14));
}

bool func_306(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_IS_PLAYER_FREE_FOCUSING(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_26(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_26(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_25(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_534(uParam0, fParam2))
		{
			return true;
		}
		if (func_25(uParam0))
		{
			func_535(uParam0);
		}
	}
	return false;
}

bool func_307(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

void func_308(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_99(vParam0))
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
			if (func_479(vVar2, vParam0, 2.0f, 1))
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

float func_309(int iParam0)
{
	if (!func_260(iParam0))
	{
		return 0.0f;
	}
	if (!func_536(iParam0))
	{
		return 0.0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_310()
{
	return "unnamed";
}

char* func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_312(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_470(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_313(int iParam0, bool bParam1, int iParam2)
{
	func_537(iParam2);
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
		iParam0->f_13 = func_538(0);
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
							func_111(iParam0, (1 << 25));
						}
					}
					else if (!(*iParam0 & (1 << 13)) != 0)
					{
						if (func_296(1))
						{
							func_111(iParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_296(1) || (*iParam0 & (1 << 13)) != 0))
				{
					func_207(iParam0, (1 << 25));
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
			if (func_539(iParam0))
			{
				iParam0->f_15 = func_332();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_332() - iParam0->f_15) > 500)
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
	func_540(iParam0);
}

bool func_314(int iParam0, int iParam1)
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
			if (!func_541(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_542(iParam0, iVar2) <= func_543(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_315(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		iParam1->f_10 = iParam0;
	}
	if (func_544(iParam2, 1, 1, 1, 0))
	{
		func_111(iParam1, (1 << 11));
	}
	iParam1->f_16 = iParam2;
	func_545(iParam1, 1);
	func_54();
}

bool func_316(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_546(iParam0, !(*iParam1 & (1 << 28)) != 0, !(*iParam1 & (1 << 29)) != 0, !(*iParam1 & (1 << 30)) != 0, 0, 0))
		{
			if (iParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (iParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_547(iParam1);
			if (func_548(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_549(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_545(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_545(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_317(int iParam0, int iParam1, int iParam2)
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
	if (func_550(iParam1, !(*iParam2 & (1 << 28)) != 0, !(*iParam2 & (1 << 29)) != 0, !(*iParam2 & (1 << 30)) != 0, 0))
	{
		if (iParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (iParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_547(iParam2);
		if (func_548(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_549(iParam2)
				{
					func_545(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_318(int iParam0, int iParam1)
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
	if (func_541(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_549(iParam1)
		{
			fVar3 = func_547(iParam1);
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

bool func_319(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_332();
	iVar1 = (iVar0 - iParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_320(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_551(iParam2);
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
			if (func_328(iParam2, iParam1))
			{
				func_545(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_321(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < (float)func_552(iParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_328(iParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_545(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_322(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_553(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_545(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_545(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_554(iParam1, vVar0, vVar4))
					{
						func_545(iParam2, 1);
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
					func_545(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_554(iParam1, vVar0, vVar7))
					{
						func_545(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_323(int iParam0, int iParam1)
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
		if (!func_541(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_555(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_556(Global_1935630.f_34[iVar0]))
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
			if (func_557(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_558(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_559(iParam1, iParam0, fVar1, iVar0))
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

bool func_324(int iParam0, int iParam1)
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

bool func_325(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_332();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_326(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_560(iVar0, &iVar2))
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
	if (func_561(iVar0, iParam0))
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

int func_327(int iParam0, int iParam1)
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

bool func_328(int iParam0, int iParam1)
{
	if (func_562(iParam0))
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

bool func_329(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_152(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_330()
{
}

bool func_331(int iParam0, int iParam1)
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
		if (func_563(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_332();
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
						if (func_178(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_332();
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

int func_332()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_333()
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
	if ((func_332() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_334(int iParam0, int iParam1)
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
	fVar0 = func_543(iParam0);
	if (iParam0->f_12 > func_564(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_565(iParam1);
	iVar1 = func_566(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_335(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4.0f)
	{
		return false;
	}
	bVar0 = (*iParam2 & 256) != false;
	bVar1 = (*iParam2 & (1 << 19)) != false;
	bVar2 = (*iParam2 & 128) != false;
	return func_567(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_336(int iParam0, int iParam1)
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
		if (func_568(iParam0, iParam1, 1))
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
					if (!func_569(iParam1, iParam0))
					{
						if (func_178(iVar4, Global_36, 1) < 7.0f)
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

bool func_337(int iParam0, int iParam1)
{
	if (!func_364(0))
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

bool func_338(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_332();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_339(int iParam0, int iParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

bool func_340(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_332();
	}
	else if (func_332() - iParam1->f_4) > func_570(iParam1)
	{
		return func_571(iParam0, iParam1, 0, -1082130432);
	}
	return false;
}

bool func_341(int iParam0, int iParam1)
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

int func_342()
{
	int iVar0;

	iVar0 = func_572();
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

int func_343(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_120() != -1)
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
	fVar1 = func_230(MISC::ABSF(fVar1) < 1.0f, func_230(fVar1 < 0.0f, -1.0f, 1.0f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_344(int iParam0)
{
	if (!func_573(iParam0))
	{
		return false;
	}
	return func_574(iParam0);
}

int func_345(int iParam0, int iParam1, int iParam2)
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

int func_346(int iParam0)
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

int func_347()
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

void func_348(int iParam0, bool bParam1, int iParam2)
{
	func_575((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_576(iParam0);
}

void func_349(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_577(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_350(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_578(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_579(iVar5, &iVar2, &iVar0))
			{
				if (!func_411(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_580(iVar2);
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
							if (func_581(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_342() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_342() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_582();
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

struct<2> /*16*/ func_351(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_352(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_353(int iParam0)
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

int func_354(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_583(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_355(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_584(iParam0))
	{
		return 0;
	}
	if (!func_585())
	{
		return 0;
	}
	if (!func_586(iParam0, &iVar0, &iVar1))
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

void func_356(int iParam0, int iParam1)
{
	*iParam0 -= (*iParam0 & iParam1);
}

float func_357(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_152(Global_35, iParam0, bParam1, bParam2);
}

bool func_358(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_359(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_587(iParam0, &sVar0);
}

int func_360(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_361(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243 /*PCF_0x0831CCD1*/, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_362(int iParam0)
{
	switch (iLocal_944)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -835911159;
				case 1:
					return -239426822;
				case 2:
					return 2062284241;
				case 3:
					return 1391603815;
				case 4:
					return 1261664333;
				case 5:
					return 1340138956;
				case 6:
					return -2023012722;
				case 7:
					return 770895521;
				case 8:
					return 193948615;
				case 9:
					return -1637869902;
				case 10:
					return 607609997;
				case 11:
					return -1551970008;
				case 12:
					return 90170334;
				case 13:
					return 1923663917;
				case 14:
					return -2054049802;
				case 15:
					return -646838161;
				case 16:
					return -584496966;
				case 17:
					return 1303876790;
				case 18:
					return -849543827;
				case 19:
					return 558196059;
				case 20:
					return -1503521451;
				case 21:
					return 1766689619;
				case 22:
					return -836872973;
				case 23:
					return 2119991082;
				case 24:
					return 1823595477;
				case 25:
					if (func_243())
					{
						return 1710800346;
					}
					else
					{
						return -920878148;
					}
					break;
				case 26:
					if (func_243())
					{
						return 251419705;
					}
					else
					{
						return -932459019;
					}
					break;
				case 27:
					return 1437497331;
				case 28:
					return 1086036713;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -357535812;
				case 1:
					return -719497186;
				case 2:
					return -1383488703;
				case 3:
					return -700147833;
				case 4:
					return -1365423608;
				case 5:
					return 1197613306;
				case 6:
					return -888114428;
				case 7:
					return 526634380;
				case 8:
					return -1840420869;
				case 9:
					return 1877924238;
				case 10:
					return -1163092522;
				case 11:
					return 194852930;
				case 12:
					return -1725526833;
				case 13:
					return 1853146033;
				case 14:
					return 1762573504;
				case 15:
					return 1336977289;
				case 16:
					if (!func_15(iLocal_34, (1 << 28)))
					{
						return -474238259;
					}
					else if (func_364(0))
					{
						return -474238259;
					}
					else
					{
						return 157403391;
					}
					break;
				case 17:
					return 101739314;
				case 18:
					return -854755896;
				case 19:
					return -563585625;
				case 20:
					return 1829891480;
				case 21:
					return -1049231860;
				case 22:
					return -1876092037;
				case 23:
					return -2069287102;
				case 24:
					return -1341225460;
				case 25:
					return 248935820;
				case 26:
					if (func_243())
					{
						return 1963982468;
					}
					else
					{
						return 1805689030;
					}
					break;
				case 27:
					return -1802744252;
				case 28:
					return 783207280;
			}
			break;
	}
	return -1;
}

void func_363(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam0, iParam1);
}

bool func_364(int iParam0)
{
	if (func_243())
	{
		return false;
	}
	return func_588(Global_1347702[58 /*49*/].f_15, 1);
}

int func_365(int iParam0, bool bParam1, bool bParam2)
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

void func_366()
{
	if (!func_15(iLocal_35, (1 << 17)))
	{
		sLocal_145.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_145.f_5, 0, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_145.f_1, sLocal_161.f_51, 0.0f, 0.0f, -30.0f, 2);
		if (func_58(iLocal_98[0], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_145.f_1, "barman", iLocal_98[0], 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_145.f_1, "plr", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_145.f_1, "MONEY", sLocal_871[0 /*12*/].f_8, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_145.f_1, "R_Door", iLocal_1230[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_145.f_1, "L_Door", iLocal_1230[1], 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_145.f_5))
		{
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_145.f_1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(sLocal_145.f_1);
			}
		}
		func_17(&iLocal_35, (1 << 17));
	}
}

bool func_367()
{
	switch (iLocal_944)
	{
		case 0:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_145.f_1, true, false))
			{
				if (((ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_145.f_1, "PBL_Window_Idle") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_145.f_1, "PBL_Reward_Avg")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_145.f_1, "PBL_Reward_Good")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_145.f_1, "PBL_GET_THE_LAW"))
				{
					return true;
				}
				else
				{
					func_589();
				}
			}
			break;
		case 1:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_145.f_1, true, false))
			{
				if ((ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_145.f_1, "PBL_Window_Idle") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_145.f_1, "PBL_Reward_Avg")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_145.f_1, "PBL_Reward_Good"))
				{
					return true;
				}
				else
				{
					func_589();
				}
			}
			break;
	}
	return false;
}

void func_368(int* iParam0, var uParam1)
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
	func_590(iParam0, uParam1, 1);
	func_52(uParam1, 0, 1, 1, 0);
	MISC::COPY_SCRIPT_STRUCT(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

int func_369(int iParam0, int iParam1, int iParam2)
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

int func_370(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_591(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= (1 << 23);
	}
	iVar1 = func_592(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, (1 << 27)))
	{
		func_593(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_594(558))
				{
					func_595(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char[] func_371(int iParam0)
{
	if (func_596(iParam0))
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

void func_372(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_597(iParam0, 13))
	{
		func_598(iParam0, 0);
	}
	else
	{
		func_429(iParam0, 0);
	}
	if (func_195(iParam0->f_6))
	{
		if (bParam2)
		{
			func_209(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_373(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_535(&(iParam0->f_18));
}

int func_374(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != -1)
	{
		iVar0 = func_599(iParam0, iParam1);
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

void func_375(bool bParam0)
{
	if (!func_376(PLAYER::PLAYER_ID(), &(iLocal_98[0])))
	{
		func_368(&iLocal_1278, &sLocal_1299);
		func_40(&(sLocal_1299[0 /*17*/]), func_371(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		if (bParam0)
		{
			func_40(&(sLocal_1299[1 /*17*/]), func_371(6), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		}
		else
		{
			func_40(&(sLocal_1299[1 /*17*/]), func_371(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		}
		func_372(&(sLocal_1299[0 /*17*/]), 0, 0);
		func_372(&(sLocal_1299[1 /*17*/]), 0, 0);
		func_17(&iLocal_1275, (1 << 12));
	}
}

bool func_376(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = *uParam1;
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

void func_377()
{
	if (func_126(Global_35))
	{
		if (func_600(&(sLocal_1299[1 /*17*/]), 1, 0))
		{
			func_372(&(sLocal_1299[1 /*17*/]), 0, 0);
		}
	}
	else if (!func_600(&(sLocal_1299[1 /*17*/]), 1, 0))
	{
		func_372(&(sLocal_1299[1 /*17*/]), 1, 0);
	}
}

bool func_378(var uParam0, int iParam1)
{
	if (func_601(iParam1))
	{
		return !(uParam0->f_1 & iParam1) != 0;
	}
	else
	{
		switch (iParam1)
		{
			case 262144:
				return func_3(*uParam0, 4);
			case 32:
				return func_3(*uParam0, 8);
			case 8192:
				return func_3(*uParam0, 16);
			case 64:
				return func_3(*uParam0, 32);
			case 32768:
				return func_3(*uParam0, 64);
			case 65536:
				return func_3(*uParam0, (1 << 10));
			case 4096:
				return func_3(*uParam0, (1 << 18));
			case 512:
				return func_3(*uParam0, (1 << 20));
			default:
				break;
		}
	}
	return false;
}

void func_379(bool bParam0)
{
	if (bParam0)
	{
		if (!func_15(iLocal_34, (1 << 31)))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_98[0], true);
			func_17(&iLocal_34, (1 << 31));
		}
	}
	else if (func_15(iLocal_34, (1 << 31)))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_98[0], false);
		func_125(&iLocal_34, (1 << 31));
	}
}

float func_380(int iParam0, int iParam1, bool bParam2)
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
	return func_107(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_381(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_382()
{
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_145.f_0, "PBL_Intro_Idle");
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_145.f_0, "PBL_Intro_Action");
}

int func_383(int iParam0)
{
	return iParam0;
}

void func_384(int iParam0, Vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_230(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_484(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_332();
			iParam4->f_2 = func_178(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_484(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_332();
		iParam4->f_2 = func_178(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_385(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_332() - *uParam0) >= iParam1;
	}
	return false;
}

bool func_386(int iParam0, bool bParam1)
{
	if (func_58(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_387(float fParam0)
{
	if (func_602(1))
	{
		return true;
	}
	if (func_25(&uLocal_0) && !func_603(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_388()
{
	if (!func_15(iLocal_34, (1 << 21)))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(7)))
		{
			func_363(1891783641, iLocal_98[0], 1);
			func_36(iLocal_98[0], iLocal_98[1], func_35("NOT_OPEN"), "", 75.0f, 0, 0, 0, 1, 0, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_17(&iLocal_34, (1 << 21));
		}
	}
	if (!func_15(iLocal_34, (1 << 22)))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[1], func_362(8)))
		{
			func_363(1891783641, iLocal_98[0], 1);
			func_36(iLocal_98[1], iLocal_98[0], func_35("PRE_LEAVE"), "", 75.0f, 0, 0, 0, 1, 0, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_17(&iLocal_34, (1 << 22));
		}
	}
	if (!func_15(iLocal_34, (1 << 23)))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_98[0], func_362(9)))
		{
			func_363(1891783641, iLocal_98[0], 1);
			func_36(iLocal_98[0], iLocal_98[1], func_35("CUSTOMER_LEAVE"), "", 75.0f, 0, 0, 0, 1, 0, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_17(&iLocal_34, (1 << 23));
		}
	}
}

float func_389(int iParam0)
{
	float fVar0;

	fVar0 = -1.0f;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
	{
		fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0);
	}
	return fVar0;
}

bool func_390()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

bool func_391(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, MISC::GET_HASH_KEY(sParam1)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_392(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_604(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_3;
	}
	return 0;
}

void func_393(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 != 0)
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
		if (iVar0 != 0)
		{
			func_605(iParam0, iParam1, iVar0);
			func_607(iParam0, iParam1, func_606(iParam3));
		}
	}
	else if (iParam4 != 0)
	{
		func_605(iParam0, iParam1, iParam4);
		func_607(iParam0, iParam1, func_606(iParam3));
	}
	func_608(iParam0, iParam1, iParam2);
	func_610(iParam0, iParam1, func_609(1));
	func_611(iParam0, iParam1, func_210());
}

void func_394(var uParam0)
{
	if (!func_25(uParam0))
	{
	}
	if (func_103(uParam0))
	{
		uParam0->f_1 = (func_104() - uParam0->f_2);
		uParam0->f_2 = 0.0f;
		func_274(uParam0, 2);
	}
}

void func_395(var uParam0)
{
	if (!func_25(uParam0))
	{
	}
	if (!func_103(uParam0))
	{
		uParam0->f_2 = (func_104() - uParam0->f_1);
		func_273(uParam0, 2);
	}
}

void func_396(int iParam0)
{
	struct<7> /*56*/ sVar0;
	Vector3 vVar9;

	if (SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 9))
	{
		if (!func_15(iLocal_34, (1 << 17)))
		{
			if (VOLUME::IS_POINT_IN_VOLUME(iLocal_130, sVar0.f_6))
			{
				func_17(&iLocal_34, (1 << 17));
			}
		}
		if (ENTITY::GET_ENTITY_TYPE(sVar0.f_0) == 1)
		{
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_120) && func_29(Global_35, iLocal_120, 1, 0))
			{
				if (!func_29(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_0), iLocal_120, 1, 0) && !func_612(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_0), &iLocal_98))
				{
					if (sVar0.f_1 == func_383(Global_35))
					{
						bLocal_943 = true;
						vVar9 = { ENTITY::GET_ENTITY_COORDS(sVar0.f_0, true, false) /*3*/ };
					}
				}
			}
			return;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(2791.55f, -1167.62f, 47.9797f, sVar0.f_6, true) <= 0.3f || MISC::GET_DISTANCE_BETWEEN_COORDS(2790.95f, -1168.47f, 47.5391f, sVar0.f_6, true) <= 0.3f)
		{
			return;
		}
		if (!VOLUME::IS_POINT_IN_VOLUME(iLocal_120, sVar0.f_6))
		{
			return;
		}
		if (sVar0.f_1 != func_383(Global_35))
		{
			return;
		}
		if (ENTITY::GET_ENTITY_TYPE(sVar0.f_0) == 0)
		{
			if (sVar0.f_6.f_2 < 47.05f)
			{
				return;
			}
		}
		if (ENTITY::GET_ENTITY_TYPE(sVar0.f_0) == 3)
		{
			if (sVar0.f_6.f_2 < 47.0f)
			{
				return;
			}
		}
		iLocal_1221++;
	}
}

void func_397()
{
	if (func_613())
	{
		switch (iLocal_36)
		{
			case 0:
				if (iLocal_1220 > 3)
				{
					iLocal_36++;
				}
				else if (iLocal_1220 > 1 && iLocal_1220 <= 3)
				{
					if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) < 2.0f || (func_614() && !func_15(iLocal_35, 32)))
					{
						func_17(&iLocal_35, 32);
						iLocal_945 = 5;
						iLocal_36++;
					}
				}
				break;
			case 1:
				if (iLocal_1220 > 5)
				{
					iLocal_36++;
				}
				else if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) < 2.0f || (func_614() && !func_15(iLocal_35, 64)))
				{
					if (iLocal_1220 > 3 && iLocal_1220 <= 5)
					{
						func_17(&iLocal_35, 64);
						iLocal_945 = 6;
						iLocal_36++;
					}
				}
				break;
			case 2:
				if (iLocal_1220 > 7)
				{
					iLocal_36++;
				}
				else if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) < 2.0f || (func_614() && !func_15(iLocal_35, 128)))
				{
					if (iLocal_1220 > 5 && iLocal_1220 <= 7)
					{
						func_17(&iLocal_35, 128);
						iLocal_945 = 7;
						iLocal_36++;
					}
				}
				break;
			case 3:
				if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) < 2.0f || (func_614() && !func_15(iLocal_35, 256)))
				{
					if (iLocal_1220 > 7 && iLocal_1220 != iLocal_16)
					{
						func_17(&iLocal_35, 256);
						iLocal_945 = 8;
						iLocal_36++;
					}
				}
				break;
			case 4:
				break;
		}
		if (!func_15(iLocal_34, 256))
		{
			if (iLocal_1221 > 3)
			{
				func_17(&iLocal_34, 256);
				iLocal_945 = 9;
			}
		}
		else if (!func_15(iLocal_34, (1 << 9)))
		{
			if (iLocal_1221 > 5)
			{
				func_17(&iLocal_34, (1 << 9));
				iLocal_945 = 10;
			}
		}
		else if (iLocal_1221 > 12)
		{
			func_17(&iLocal_34, (1 << 13));
			func_51();
			iLocal_945 = 11;
		}
	}
}

void func_398()
{
	if (sLocal_161.f_46 == 1)
	{
		return;
	}
	func_615();
	if (!func_15(iLocal_34, (1 << 11)))
	{
		if (func_15(iLocal_34, (1 << 12)))
		{
			if (!func_29(Global_35, iLocal_120, 1, 0))
			{
				func_17(&iLocal_34, (1 << 11));
				iLocal_945 = 14;
			}
		}
	}
}

float func_399()
{
	if (!func_25(&uLocal_1235))
	{
		func_26(&uLocal_1235);
	}
	return func_27(&uLocal_1235);
}

void func_400(char* sParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam3)
	{
		if (bParam4)
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sParam0, sParam1, Global_35, -1, 4.0f, -4.0f, 67108865, 0.0f, false, false, -1.0f, 0, (1 << 16), -1.0f);
		}
		else
		{
			TASK::TASK_PLAY_ANIM(0, sParam0, sParam1, 4.0f, -4.0f, -1, 67108880, 0.0f, false, 0, false, 0, false);
		}
	}
	else
	{
		TASK::TASK_PLAY_ANIM(0, sParam0, sParam1, 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	}
	if (bParam2)
	{
		TASK::TASK_PLAY_ANIM(0, sLocal_136[0 /*2*/], "window_idle_barman", 4.0f, -4.0f, -1, 1, 0.0f, false, 0, false, 0, false);
	}
	else
	{
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_98[0], sLocal_136[0 /*2*/], "wait_idle_barman", Global_35, -1, 4.0f, -4.0f, 67108865, 0.0f, false, false, -1.0f, 0, (1 << 16), -1.0f);
	}
	func_128(iLocal_98[0], &iVar0, 0, 0, 1, 1);
}

void func_401()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iVar0]))
		{
			if (uLocal_946[iVar0] == 10)
			{
				if (!func_29(iLocal_98[iVar0], iLocal_122[0], 1, 0))
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_98[iVar0], 2.5f);
				}
			}
			else if (uLocal_946[iVar0] == 11)
			{
				if (!func_29(iLocal_98[iVar0], iLocal_122[1], 1, 0))
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_98[iVar0], 2.5f);
				}
			}
			else if (uLocal_946[iVar0] == 12)
			{
				if (!func_29(iLocal_98[iVar0], iLocal_122[2], 1, 0))
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_98[iVar0], 2.5f);
				}
			}
		}
		iVar0++;
	}
}

void func_402()
{
	if (!func_15(iLocal_34, (1 << 10)))
	{
		if (func_29(Global_35, iLocal_120, 1, 0))
		{
			func_22(0, -1, -1);
			func_17(&iLocal_34, (1 << 10));
		}
	}
}

void func_403()
{
	if (!func_15(iLocal_35, 4))
	{
		if (func_15(iLocal_35, 2) && func_15(iLocal_35, 8))
		{
			if (iLocal_1220 > (iLocal_16 - 2))
			{
				func_17(&iLocal_35, 4);
			}
		}
	}
}

void func_404()
{
	int iVar0;

	if (!func_25(&uLocal_1253))
	{
		func_26(&uLocal_1253);
	}
	else if (func_27(&uLocal_1253) > fLocal_1216)
	{
		iVar0 = func_616(1084227584);
		if (iVar0 != 0)
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "SQUEAK", false);
			func_26(&uLocal_1253);
			fLocal_1216 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2.0f, 10.0f);
		}
	}
}

int func_405()
{
	int iVar0;

	iVar0 = -1;
	iVar0 = iLocal_1227;
	while (iVar0 <= 15)
	{
		if (iLocal_17[iVar0] == 1)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 2;
	iVar0 = 2;
	while (iVar0 <= 15)
	{
		if (iLocal_17[iVar0] == 1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 2;
}

void func_406(int iParam0, var uParam1, int iParam2)
{
	if (!func_58(iParam0, 0, 1))
	{
		return;
	}
	switch (*uParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 2:
					*uParam1 = 1;
					break;
				case 3:
					*uParam1 = 2;
					break;
				case 4:
					*uParam1 = 4;
					break;
				case 5:
					*uParam1 = 3;
					break;
				case 6:
				case 7:
				case 8:
					func_617(iParam0, iLocal_122[1], 0, 0, 0);
					*uParam1 = 7;
					break;
				case 9:
					func_617(iParam0, iLocal_122[2], 0, 0, 0);
					*uParam1 = 8;
					break;
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
					*uParam1 = 9;
					break;
			}
			break;
		case 1:
			if (func_618(iParam0))
			{
				func_617(iParam0, iLocal_122[0], 0, 0, 0);
				*uParam1 = 6;
			}
			break;
		case 2:
			if (func_619(iParam0))
			{
				func_620(iParam0, iLocal_122[1], 0, 0);
				func_617(iParam0, iLocal_122[1], 0, 0, 0);
				*uParam1 = 11;
			}
			break;
		case 3:
			if (func_621(iParam0))
			{
				func_620(iParam0, iLocal_122[1], 0, 0);
				func_617(iParam0, iLocal_122[1], 0, 0, 0);
				*uParam1 = 11;
			}
			break;
		case 4:
			if (func_622(iParam0))
			{
				func_620(iParam0, iLocal_122[0], 0, 0);
				func_617(iParam0, iLocal_122[0], 0, 0, 0);
				*uParam1 = 11;
			}
			break;
		case 5:
			if (func_623(iParam0))
			{
				if ((iParam2 % 4) == 0 || (iParam2 % 4) == 1)
				{
					func_620(iParam0, iLocal_122[0], 0, 0);
					func_617(iParam0, iLocal_122[0], 0.0f, 0.0f, 0);
					*uParam1 = 10;
				}
				else if ((iParam2 % 4) == 2)
				{
					func_620(iParam0, iLocal_122[1], 0, 0);
					func_617(iParam0, iLocal_122[1], 0.0f, 0.0f, 0);
					*uParam1 = 11;
				}
				else
				{
					func_620(iParam0, iLocal_122[2], 0, 0);
					func_617(iParam0, iLocal_122[2], 0.0f, 0.0f, 0);
					*uParam1 = 12;
				}
			}
			else
			{
				func_624(iParam0, iParam2);
			}
			break;
		case 6:
			if (func_625(iParam0, (1 << 30)))
			{
				*uParam1 = 10;
			}
			func_624(iParam0, iParam2);
			break;
		case 7:
			if (func_625(iParam0, (1 << 30)))
			{
				*uParam1 = 11;
			}
			func_624(iParam0, iParam2);
			break;
		case 8:
			if (func_625(iParam0, (1 << 30)))
			{
				*uParam1 = 12;
			}
			func_624(iParam0, iParam2);
			break;
		case 9:
			if (func_626())
			{
				if ((iParam2 % 3) == 0)
				{
					func_627(iParam0, iLocal_122[0]);
				}
				else if ((iParam2 % 3) == 1)
				{
					func_627(iParam0, iLocal_122[1]);
				}
				else
				{
					func_627(iParam0, iLocal_122[2]);
				}
				func_26(&uLocal_933);
				*uParam1 = 5;
			}
			break;
		case 10:
			if (func_29(iParam0, iLocal_122[0], 1, 0))
			{
				if (func_625(iParam0, (1 << 30)))
				{
					if (func_390())
					{
						func_620(iParam0, iLocal_122[1], 0, 0);
						func_617(iParam0, iLocal_122[1], 0, 0, 0);
						*uParam1 = 11;
					}
					else
					{
						func_620(iParam0, iLocal_122[2], 0, 0);
						func_617(iParam0, iLocal_122[2], 0, 0, 0);
						*uParam1 = 12;
					}
				}
			}
			if (func_15(iLocal_35, 4))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
				func_628(iParam0, iLocal_120, vLocal_1272, 0, 0, 0);
				*uParam1 = 13;
			}
			func_624(iParam0, iParam2);
			break;
		case 11:
			if (func_29(iParam0, iLocal_122[1], 1, 0))
			{
				if (func_625(iParam0, (1 << 30)))
				{
					if (func_390())
					{
						func_620(iParam0, iLocal_122[0], 0, 0);
						func_617(iParam0, iLocal_122[0], 0, 0, 0);
						*uParam1 = 10;
					}
					else
					{
						func_620(iParam0, iLocal_122[2], 0, 0);
						func_617(iParam0, iLocal_122[2], 0, 0, 0);
						*uParam1 = 12;
					}
				}
			}
			if (func_15(iLocal_35, 4))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
				func_628(iParam0, iLocal_120, vLocal_1272, 0, 0, 0);
				*uParam1 = 13;
			}
			func_624(iParam0, iParam2);
			break;
		case 12:
			if (func_29(iParam0, iLocal_122[2], 1, 0))
			{
				if (func_625(iParam0, (1 << 30)))
				{
					if (func_390())
					{
						func_620(iParam0, iLocal_122[0], 0, 0);
						func_617(iParam0, iLocal_122[0], 0, 0, 0);
						*uParam1 = 10;
					}
					else
					{
						func_620(iParam0, iLocal_122[1], 0, 0);
						func_617(iParam0, iLocal_122[1], 0, 0, 0);
						*uParam1 = 11;
					}
				}
			}
			if (func_15(iLocal_35, 4))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
				func_628(iParam0, iLocal_120, vLocal_1272, 0, 0, 0);
				*uParam1 = 13;
			}
			func_624(iParam0, iParam2);
			break;
		case 13:
			func_624(iParam0, iParam2);
			break;
		case 14:
			break;
	}
}

void func_407(int iParam0)
{
	iLocal_17[iParam0] = 0;
}

void func_408(int* iParam0, int iParam1, int iParam2)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	*iParam0 = MAP::_BLIP_ADD_FOR_VOLUME(iParam2, iParam1);
}

bool func_409(int iParam0)
{
	return iParam0 != 0;
}

bool func_410(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_411(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_581(iParam0);
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
		if (!func_629(iParam0, 1))
		{
			return false;
		}
	}
	return func_630(iParam0, 0, bParam2) >= iParam1;
}

bool func_411(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_412(int iParam0, int iParam1)
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

void func_413(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_631(iParam0, sParam4, iParam5);
	}
	func_632(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_414(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_183(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_631(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_632(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

int func_415(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> /*104*/ sVar11;
	int iVar34;
	struct<2> /*16*/ sVar35;
	bool bVar37;

	if (!func_411(iParam0, 0))
	{
		return 0;
	}
	if (!func_633(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_634(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_635(iParam0, bParam2);
	iVar2 = 0;
	if (func_630(iParam0, 0, 0) == 0)
	{
		if (func_636(iParam0))
		{
			iVar5 = func_637(iParam0);
			iVar6 = func_638(iVar5);
			iVar7 = func_639(iVar6) + 1;
			func_640(iVar5);
			if (func_641(38))
			{
				func_595(483, 0);
			}
			else
			{
				func_595(482, 0);
			}
			if (iVar7 == func_642(iVar6))
			{
				func_415(func_643(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_585() && func_644(4))
				{
					if (func_585() && (func_645(38) || func_641(38)))
					{
						func_647(38, func_643(iVar6), 0, 0, func_646(), 0, -1, 0);
						func_648(2);
					}
					else
					{
						func_647(38, func_643(iVar6), 0, 0, func_646(), 0, -1, 0);
						func_648(1);
					}
				}
			}
			else if (func_585() && func_644(4))
			{
				if (func_585() && (func_645(38) || func_641(38)))
				{
					func_647(38, 0, 0, 0, func_646(), 0, -1, 0);
					func_648(2);
				}
				else
				{
					func_647(38, 0, 0, 0, func_646(), 0, -1, 0);
					func_648(1);
				}
			}
			if (func_585() && func_644(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_585() && (func_645(38) || func_641(38)))
					{
						func_649(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), iVar6), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_649(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_581(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_412(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && !func_412(iParam0, joaat("CI_TAG_ITEM_UPGRADE"))) && !func_412(iParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			bVar3 = true;
		}
	}
	if (func_650(iParam0, (1 << 23)) && !func_344(28))
	{
		func_651(28);
	}
	if (!bVar3)
	{
		if (func_412(iParam0, joaat("CI_TAG_ITEM_THROWN")))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_652(iParam0) == joaat("CI_CATEGORY_AMMO"))
			{
				iVar1 = func_654(func_653(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_120() == -1)
					{
						func_655(iVar1);
					}
					if (func_656(0) && func_657(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_658(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (func_120() == -1)
					{
						func_655(iParam0);
					}
					if (func_656(0) && func_657(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_658(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_581(iParam0) == joaat("WEAPON"))
		{
			if (!func_659(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_581(iParam0) == joaat("AMMO") && func_660(iParam0))
		{
			if (!func_661(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_TALISMAN")))
		{
			func_662(iParam0);
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_TRINKET")))
		{
			func_663(iParam0);
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_ANIMAL_CLAW")))
		{
			func_352(func_664(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_352(func_665(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_VALUABLE")) && !func_412(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_588(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_595(498, 0);
				}
			}
			if (func_412(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_412(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
			{
				func_666(iParam0);
			}
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_CANNED")))
		{
			if (func_412(iParam0, joaat("CI_TAG_ITEM_FRUIT")))
			{
			}
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_USED")) && func_412(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			func_595(484, 0);
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")) && func_412(iParam0, joaat("CI_TAG_ITEM_SNACK")))
		{
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_CONFECTIONARY")))
		{
		}
		else if (func_412(iParam0, 589988438))
		{
			if (func_667())
			{
				func_414(joaat("REWARD_SMALL"), 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_LETTER_INVITATION")) && func_412(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_668(iParam0);
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_DINO_BONES")))
		{
			func_669(iParam0);
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_ROCK_CARVINGS")))
		{
			func_670(iParam0);
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_412(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_671(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_TREASURE_HUNTER_MAP")))
		{
			func_672();
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_673(iParam0, iParam1);
			func_674(iParam0);
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_412(iParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_675(iParam0, 0, 0, 0);
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_412(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
		{
			func_666(iParam0);
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_MONEY")))
		{
			if (func_120() != -1)
			{
				return 0;
			}
			func_676(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_FISHING_LURE")))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_410(215778062, 1, 0))
					{
						func_415(215778062, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_410(670273567, 1, 0))
					{
						func_415(670273567, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_410(-967317137, 1, 0))
					{
						func_415(-967317137, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_410(526074061, 1, 0))
					{
						func_415(526074061, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_410(-1045488665, 1, 0))
					{
						func_415(-1045488665, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_410(471514780, 1, 0))
					{
						func_415(471514780, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")) && func_650(iParam0, 4))
		{
			if (!func_641(42))
			{
				func_677(iParam0);
			}
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
		{
			func_678(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_412(iParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_415(iVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_651(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_679(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_680(&iVar9, 0))
				{
					func_657(iVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_120() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_679(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_595(415, 0);
				Global_40.f_11095.f_60 += 0.1f;
				func_681();
				Global_40.f_11095.f_61 += 0.1f;
				func_682();
				Global_40.f_11095.f_55 += 0.1f;
				Global_40.f_11095.f_57 += 0.1f;
				Global_40.f_11095.f_56 += 0.1f;
				Global_40.f_11095.f_58 += 0.5f;
				func_683();
				Global_40.f_11095.f_63 += 0.1f;
				func_684();
				Global_40.f_11095.f_49 += 0.1f;
				Global_40.f_11095.f_50 += 0.1f;
				Global_40.f_11095.f_51 += 0.1f;
				func_685();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_686(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_687(499813453, 0);
				func_688(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_686(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_687(499813453, 0);
				func_688(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_686(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_687(499813453, 0);
				func_688(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_686(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_687(666607663, 0);
				func_689(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_686(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_687(666607663, 0);
				func_689(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_686(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_687(666607663, 0);
				func_689(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_686(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_687(-220219788, 0);
				func_690(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_686(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_687(-220219788, 0);
				func_690(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_686(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_687(-220219788, 0);
				func_690(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_686(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_687(218622660, 0);
				func_691(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_686(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_687(218622660, 0);
				func_691(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_686(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_687(390004462, 0);
				func_692(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_686(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_687(390004462, 0);
				func_692(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_686(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_687(390004462, 0);
				func_692(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_686(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_687(6410548, 0);
				func_693(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_686(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_687(6410548, 0);
				func_693(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_686(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_687(6410548, 0);
				func_693(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_686(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_687(6410548, 0);
				func_693(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_695(242, func_694(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_695(240, func_694(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_695(241, func_694(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_696(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_696(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_696(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_696(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_696(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_696(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_595(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_595(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_595(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 3) == 0)
				{
					func_415(func_697(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_415(func_698(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_344(1))
				{
					func_595(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_595(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_120() == -1)
				{
					iParam0 = joaat("UPGRADE_UPG_MORTAR_PESTLE_SP");
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_595(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_699(&iVar10);
		if (!func_700(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_656(0))
		{
			return 1;
		}
		if (func_581(iParam0) == joaat("CLOTHING"))
		{
			func_701(iParam0);
		}
		if (func_412(iParam0, joaat("CI_TAG_ITEM_UPGRADE")))
		{
			func_702(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_656(0))
		{
			sVar11.f_1 = 10;
			sVar11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, false, false, iVar2, &sVar11, 0);
			iVar34 = 0;
			while (iVar34 < sVar11.f_0)
			{
				func_415(sVar11.f_1[iVar34], sVar11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_703(iVar2, 0);
		}
	}
	sVar35 = { func_704(iParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&sVar35, iVar0);
	}
	func_705(iParam0);
	if (fParam6 > 0.0f)
	{
		if (func_412(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
		{
			func_706(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_707(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_416()
{
	if (func_120() != -1)
	{
		return 0;
	}
	return func_708(joaat("FAME"));
}

void func_417(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (func_120() != -1)
	{
		return;
	}
	if (iParam0 > 3000 || iParam0 < 0)
	{
		return;
	}
	else
	{
		sVar0 = { func_351(joaat("FAME")) /*2*/ };
		STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
	}
}

void func_418(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_120() != -1)
	{
		return;
	}
	if (func_709(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_710())
	{
		iVar1 = 0;
	}
	func_711(iParam0, iVar1);
}

bool func_419(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_420(int iParam0, int iParam1)
{
	if (!func_419(iParam0))
	{
		return false;
	}
	if (func_120() != -1)
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

int func_421(int iParam0)
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

void func_422(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	struct<15> /*120*/ sVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		sVar0.f_14 = iParam0;
		sVar0.f_0 = uParam1;
		sVar0.f_12 = 14;
		sVar0.f_8 = iParam3;
		sVar0.f_11 = iParam4;
		sVar0.f_13 = iParam2;
		MISC::_CREATE_AI_MEMORY(&sVar0, 17);
	}
}

void func_423(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_712(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_713(&Global_1935630, (1 << 22));
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

int func_424(int iParam0)
{
	return iParam0;
}

void func_425(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_426(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_714(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_427(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_428(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_429(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

char* func_430(char* sParam0)
{
	return sParam0;
}

void func_431(int iParam0)
{
	if (!func_715(iParam0))
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

int func_432(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_360(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_433(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_434(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_435(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_436(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_437(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_438(int iParam0, int iParam1)
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

void func_439(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_716(iParam0, iParam6);
	func_717(iParam0, iParam5);
	func_718(iParam0, iParam4);
	func_719(iParam0, iParam3);
	func_720(iParam0, iParam2);
	func_721(iParam0, iParam1);
}

bool func_440(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_441(int iParam0, int iParam1)
{
	if (!func_722(iParam1) || !func_722(iParam0))
	{
		return true;
	}
	return iParam0 >= iParam1;
}

bool func_442(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

int func_443(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_723(iParam0, 1);
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = func_723(func_724(iVar3), 1);
		iVar2 = func_723(func_725(iVar3), 1);
		if (iVar0 >= iVar1)
		{
			if (iVar0 <= iVar2)
			{
				return iVar3;
			}
		}
		iVar3++;
	}
	return 0;
}

int func_444(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2120502580:
			return 5;
		case -1784359682:
			return 1;
		case -518918701:
			return 3;
		case 820723243:
			return 0;
		case 977356591:
			return 4;
		case 1461274691:
			return 6;
		case 1710500858:
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

void func_445(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_442(iParam0))
	{
		return;
	}
	func_726(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1935183.f_73[iParam0 /*7*/][iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1935183.f_73[iParam0 /*7*/][iVar0]), iVar1);
	}
}

bool func_446(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return false;
		default:
			break;
	}
	return false;
}

void func_447(int iParam0, var uParam1)
{
	if (!func_442(iParam0))
	{
		return;
	}
	if (*uParam1 == joaat("TSTAG_NO_TAGS"))
	{
		return;
	}
	func_445(iParam0, *uParam1, 0);
	func_727(uParam1);
	Global_1935183.f_24 = 1;
}

int func_448(int iParam0)
{
	int iVar0;

	iVar0 = func_62(iParam0);
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

void func_449(int iParam0, int iParam1)
{
	if (!func_218(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

int func_450(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331 /*PCF_0x9663C8F2*/, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331 /*PCF_0x9663C8F2*/, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iParam0, "INTERACT_LOCKON", fParam1, 0.0f, 0, 0.0f, 0.0f, 0, false, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_451(int iParam0)
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

void func_452(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
	}
	PED::DELETE_PED(iParam0);
}

void func_453(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			Global_36581[iVar0 /*2*/].f_1 = 3;
		}
		iVar0++;
	}
}

void func_454(var uParam0)
{
	if (func_195(uParam0->f_162))
	{
		func_209(&(uParam0->f_162), 1, 1);
	}
	if (func_195(uParam0->f_163))
	{
		func_209(&(uParam0->f_163), 1, 1);
	}
	if (func_195(uParam0->f_164))
	{
		func_209(&(uParam0->f_164), 1, 1);
	}
	if (func_195(uParam0->f_165))
	{
		func_209(&(uParam0->f_165), 1, 1);
	}
}

void func_455(var uParam0)
{
	if (uParam0->f_170)
	{
		func_728();
	}
}

void func_456(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_729(32);
		func_459(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_457(var uParam0)
{
	if (func_730(uParam0) | uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_731(uParam0->f_3);
		func_285(uParam0, 0, 1);
		func_732(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_733(0, 0);
		return true;
	}
	return false;
}

bool func_458(int iParam0)
{
	if (!func_260(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_459(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_277(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_120() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 += iVar0;
}

int func_460(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_356(&iVar1, (1 << 31));
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

int func_461()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_462(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_120() != -1)
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

bool func_463(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

bool func_466(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f /*3*/ };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f /*3*/ };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f /*3*/ };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f /*3*/ };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f /*3*/ };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f /*3*/ };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f /*3*/ };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f /*3*/ };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f /*3*/ };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f /*3*/ };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f /*3*/ };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f /*3*/ };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f /*3*/ };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f /*3*/ };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f /*3*/ };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f /*3*/ };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f /*3*/ };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f /*3*/ };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f /*3*/ };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f /*3*/ };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f /*3*/ };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f /*3*/ };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f /*3*/ };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f /*3*/ };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 26:
					*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f /*3*/ };
					*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 27:
					*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f /*3*/ };
					*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f /*3*/ };
					*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f /*3*/ };
					*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f /*3*/ };
					*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f /*3*/ };
					*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f /*3*/ };
					*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f /*3*/ };
					*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f /*3*/ };
					*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f /*3*/ };
					*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 24:
					*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 25:
					*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f /*3*/ };
					*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 31:
					*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f /*3*/ };
					*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 32:
					*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f /*3*/ };
					*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 33:
					*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_467(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_99(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_468(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_DEBUG_PINK"), *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, joaat("BLIP_MODIFIER_URGENT_ALERT"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_42("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100.0f, 1, 0);
	}
}

bool func_469(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_470(Vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_99(vParam0))
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
		if (func_307(vParam0))
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
	func_734(iVar0, bParam8);
	return iVar0;
}

void func_471(int iParam0)
{
	if (!func_260(iParam0))
	{
		return;
	}
	func_735(iParam0);
}

void func_472(var uParam0, Vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_473(int iParam0)
{
	if (func_112(iParam0, 2))
	{
		return 200;
	}
	if (func_112(iParam0, 4))
	{
		return 70;
	}
	if (func_112(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_474(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_81(iParam0, (1 << 17)))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_497() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_81(iParam0, 2);
		bVar1 = func_81(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_290())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_475(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45.0f;
		*fParam1 = 135.0f;
	}
	else
	{
		*fParam0 = 45.0f;
		*fParam1 = 125.0f;
	}
	if (func_112(iParam3, (1 << 21)))
	{
		*fParam0 += 15.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_476(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240.0f;
	}
	else
	{
		*fParam1 = 215.0f;
	}
	*fParam0 = 110.0f;
	if (func_112(iParam3, 2))
	{
		*fParam0 += 60.0f;
		*fParam1 += 60.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110.0f));
	}
	else if (func_112(iParam3, (1 << 21)))
	{
		*fParam0 += 30.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_477(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_465(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_478(int iParam0, Vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_99(vParam1))
	{
		return false;
	}
	if (func_481(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_106(iParam0))
	{
		fParam4 = 40000.0f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_479(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

int func_480(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_99(uParam0->f_12[iVar0 /*3*/]))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar1 /*3*/]) < BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_481(int iParam0, Vector3 vParam1)
{
	int iVar0;

	if (!func_81(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_736(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_81(iParam0, (1 << 25)))
	{
		if (func_737(vParam1, 200.0f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_482(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_112(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40.0f), &uVar1, false))
		{
			return false;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40.0f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_81(iParam0, 1) && !func_81(iParam0, 2))
	{
		if (func_81(iParam0, (1 << 12)) || func_81(iParam0, (1 << 11)))
		{
			if (func_738(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_483(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_739())
	{
		return false;
	}
	return true;
}

bool func_484(Vector3 vParam0, int iParam3)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) /*3*/ };
	return func_740(vVar0, vParam0) > func_740(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_485(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_486(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return Global_36581[Global_36602 /*2*/].f_1;
		}
		iVar0++;
	}
	return 3;
}

bool func_487(int iParam0)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	if (!func_217(iParam0, 2))
	{
		return false;
	}
	return true;
}

Vector3 func_488(Vector3 vParam0, bool bParam3, Vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, bParam3, vParam4);
}

float func_489(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_100((fParam0 + fParam1));
}

int func_490(int iParam0, var uParam1, Vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_741(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_742(uParam1))
	{
		iVar0 = PED::_CREATE_METAPED_OUTFIT_PED(uParam1->f_5, vParam2, bParam5, true, true, bParam9, bParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_743(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_743(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_744(iVar0))
		{
			func_92(iVar0, &(uParam1->f_23), 0);
		}
		if (func_744(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307 /*PCF_DisableMountSpawning*/, true);
		}
		if (func_745(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, 0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186 /*PCF_CorpseIsPersistent*/, !func_746(&(uParam1->f_22)));
			func_361(iVar0, func_747(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_748(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_749(&(uParam1->f_22)))
		{
			func_750(iVar0, 1);
		}
		ENTITY::_SET_ENTITY_FADE_IN(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6 /*PCF_DontInfluenceWantedLevel*/, func_751(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393 /*PCF_0x96B7B497*/, true);
		if (!func_15(uParam1->f_22, (1 << 13)))
		{
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
		}
		if (!func_744(iVar0))
		{
			func_753(iVar0, !func_752(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4 /*PCF_HasBounty*/, func_754(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, !func_755(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317 /*PCF_0x8E385F10*/, !func_755(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_491(int iParam0, int iParam1)
{
	if (func_756(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("G_M_M_UNISWAMP_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return true;
		case joaat("G_M_M_UNICRIMINALS_02"):
		case joaat("G_M_M_UNICRIMINALS_01"):
			return iParam1;
		default:
			break;
	}
	return false;
}

bool func_492(var uParam0)
{
	return func_15(*uParam0, 32);
}

int func_493(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

bool func_494(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_495(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_609(1);
	}
	else
	{
		iVar0 = func_757(iParam0);
	}
	return iVar0;
}

void func_496(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_758(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_759(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

int func_497()
{
	return Global_1897952.f_41;
}

void func_498(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_112(iParam0, (1 << 13)))
	{
		iVar0 = func_759(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_499(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_459(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_500(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_81(iParam0, (1 << 18)))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_760((1 << 18), iVar0, 0, 1);
		}
	}
	if (func_81(iParam0, 128))
	{
		func_760(128, iVar0, 0, 1);
	}
	else if (func_81(iParam0, (1 << 19)))
	{
		func_760((1 << 19), iVar0, 0, 1);
	}
	else if (func_81(iParam0, (1 << 29)))
	{
		func_760((1 << 29), iVar0, 0, 1);
	}
	else if (func_81(iParam0, (1 << 22)))
	{
		func_760((1 << 22), iVar0, 0, 1);
	}
	else if (func_81(iParam0, (1 << 23)))
	{
		func_760((1 << 23), iVar0, 0, 1);
	}
}

void func_501(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_502(bool bParam0)
{
	if (!bParam0 && func_761(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_503()
{
	return Global_1310750.f_16037;
}

bool func_504(int iParam0)
{
	if (!func_260(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_505(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_260(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_762(iParam0);
	Global_1310750.f_16037--;
}

void func_506(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_763(&Global_1393447, 1);
	func_764();
	func_765();
	func_766((BUILTIN::TO_FLOAT(200) / 3.0f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_332() / 1000);
		if ((Global_1392135.f_1 & 4) != 0)
		{
			Global_1392135.f_1 -= (Global_1392135.f_1 & 4);
		}
		func_767();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_760((1 << 24), 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240.0f);
			}
			else if (func_3(iParam0, 2))
			{
				func_760((1 << 24), 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60.0f);
			}
			else if (func_3(iParam0, 4))
			{
				func_760((1 << 24), 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900.0f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_768(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_769(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_769((BUILTIN::TO_FLOAT(200) / 3.0f), 1, 0);
	}
}

bool func_507(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] & iParam0) != 0;
}

void func_508(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 -= (Global_1392050[iParam1 /*14*/].f_1 & iParam0);
}

void func_509(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] |= iParam0;
}

int func_510(int iParam0)
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

bool func_511(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_512()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_513(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_514(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_513(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0.0f)
		{
			uParam0->f_8 = (func_104() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0.0f;
	return false;
}

int func_515(bool bParam0, bool bParam1, bool bParam2)
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

bool func_516(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OVERCAST"):
		case joaat("HIGHPRESSURE"):
		case joaat("OVERCASTDARK"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_517(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_518(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_519(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FOG"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_520(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_521(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_522(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SANDSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_523(bool bParam0, int iParam1, int iParam2)
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

bool func_524()
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

int func_525(int iParam0)
{
	if (!func_528(iParam0))
	{
		return -1;
	}
	return func_771(func_770(iParam0));
}

bool func_526(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_527(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_528(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_529(int iParam0)
{
	return (Global_1310750.f_16035 & iParam0) != 0;
}

bool func_530(int iParam0)
{
	return func_81(iParam0, Global_1310750.f_16072 | 64);
}

int func_531(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_532(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("Q0304_TUNNEL_ENT"):
			case joaat("J_10P_TUNNEL_1A_INT"):
			case joaat("BAC_TUNNELCURVE_INT"):
			case joaat("Q0304_TUNNEL_INT"):
			case joaat("L_08_TRAIN_TUNNEL2_INT"):
			case joaat("BAC_TUNNELEXIT_INT"):
			case joaat("BAC_TUNNELENT_INT"):
			case joaat("J_14_TUNNEL01_INT"):
			case 653987431:
			case joaat("BAC_TUNNEL_INT"):
			case joaat("HEA_TUNNEL_01"):
			case joaat("HEA_TUNNEL_02"):
			case joaat("Q0304_TUNNEL_EXIT"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

bool func_533(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_534(var uParam0, float fParam1)
{
	if (!func_25(uParam0))
	{
		return false;
	}
	if (func_27(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_535(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

bool func_536(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

void func_537(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_22 & 4) != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_772();
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
			func_773(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_538(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_539(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_120() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_774(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_774(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_566(iVar0) == -1)
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

void func_540(int iParam0)
{
	if ((*iParam0 & 8) != 0 || (*iParam0 & 16) != 0)
	{
		func_775(iParam0);
	}
}

bool func_541(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_566(iParam2);
	}
	else
	{
		iVar1 = func_565(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_566(iParam0);
	}
	else
	{
		iVar0 = func_565(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_3(*iParam1, (1 << 23)))
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

float func_542(int iParam0, int iParam1)
{
	return func_152(iParam0, iParam1, 1, 1);
}

float func_543(int iParam0)
{
	return iParam0->f_26;
}

bool func_544(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_545(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_111(iParam0, (1 << 27));
	}
	else
	{
		func_207(iParam0, (1 << 27));
	}
}

bool func_546(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_152(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_776(iVar0, 0)))
		{
			if (func_777(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_547(int iParam0)
{
	return iParam0->f_17;
}

bool func_548(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_3(*iParam0, (1 << 22)))
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

int func_549(int iParam0)
{
	return iParam0->f_18;
}

bool func_550(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_776(iVar0, 0)))
		{
			if (func_778(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_551(int iParam0)
{
	return iParam0->f_23;
}

int func_552(int iParam0)
{
	return iParam0->f_21;
}

int func_553(int iParam0)
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

bool func_554(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_779(iParam0, vParam4, 0.5f))
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

int func_555(int iParam0)
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
	if (func_780(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_556(int iParam0)
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

bool func_557(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_297(iParam1))
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

bool func_558(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_297(iParam1))
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

bool func_559(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_297(iParam1))
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

bool func_560(int iParam0, int iParam1)
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

bool func_561(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_781(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_562(int iParam0)
{
	return !(*iParam0 & 2) != 0;
}

bool func_563(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_178(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_564(int iParam0)
{
	return iParam0->f_24;
}

int func_565(int iParam0)
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

int func_566(int iParam0)
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

int func_567(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_560(Global_35, &iVar1))
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
		fVar2 = func_152(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_152(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_568(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_523(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_569(iParam1, iVar0))
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
				if (!bParam2 || !func_569(iParam1, iVar1))
				{
					if (func_178(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_569(int iParam0, int iParam1)
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

int func_570(int iParam0)
{
	return iParam0->f_20;
}

int func_571(int iParam0, int iParam1, bool bParam2, float fParam3)
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

int func_572()
{
	return Global_40.f_11095.f_35;
}

bool func_573(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_574(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_575(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_782(bParam1);
	}
}

void func_576(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_577(int iParam0)
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

bool func_578(int iParam0)
{
	Vector3 vVar0;

	if (!func_783(23, &vVar0))
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

bool func_579(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_783(23, &sVar0))
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

int func_580(int iParam0)
{
	return iParam0;
}

int func_581(int iParam0)
{
	Vector3 vVar0;

	if (!func_411(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_582()
{
	int iVar0;

	iVar0 = func_342();
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

void func_583(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_584(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_585()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_586(int iParam0, int iParam1, int iParam2)
{
	if (!func_584(iParam0))
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

bool func_587(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_588(int iParam0, bool bParam1)
{
	switch (func_784(iParam0))
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

void func_589()
{
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_145.f_1, "PBL_Window_Idle");
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_145.f_1, "PBL_Reward_Avg");
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_145.f_1, "PBL_Reward_Good");
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_145.f_1, "PBL_GET_THE_LAW");
}

void func_590(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_209(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_373(iParam0, 0);
		}
	}
}

void func_591(int iParam0)
{
	if ((*iParam0 & 1) != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

int func_592(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_591(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = (iParam8 & 32) != false;
		bVar4 = (iParam8 & (1 << 19)) != false;
		bVar5 = (iParam8 & (1 << 24)) != false;
		bVar6 = (iParam8 & (1 << 24)) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_230(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_26(&(iParam1->f_13));
		}
		if (func_785(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_786(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_592(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_787(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!(iParam8 & (1 << 25)) != 0)
				{
					if ((iParam8 & 18) != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317 /*PCF_0x8E385F10*/, true))
						{
							func_788(*uParam0, 1, 1);
						}
					}
					else if (func_789(iParam1, 22))
					{
						func_788(*uParam0, 0, 1);
					}
				}
				if (func_790(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_791(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_792(iParam8);
					if (func_793(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_794(uParam3);
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
					func_795(iParam1, uParam3, fVar8);
					if (func_796(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_52(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_797(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_790(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_798(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_793(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_791(uParam0, func_790(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_792(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_52(uParam3, 0, 0, 1, 1);
					}
					func_799(iParam1, 1);
				}
				func_795(iParam1, uParam3, fVar8);
				if (func_797(uParam0, iParam1, fParam4, bVar6))
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
			func_368(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_593(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_800(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_36(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
}

bool func_594(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_120() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_595(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_801(iParam0, &iVar0, &iVar1);
	if (!func_802(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_803(iVar0, iVar1);
}

bool func_596(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

bool func_597(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_598(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_599(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_604(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_1;
	}
	return 0;
}

bool func_600(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_195(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_804(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_601(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 128:
		case 256:
		case 1024:
		case 2048:
		case 16384:
		case 131072:
			return true;
		case 32:
		case 64:
		case 512:
		case 4096:
		case 8192:
		case 32768:
		case 65536:
		case 262144:
			return false;
		default:
			break;
	}
	return false;
}

bool func_602(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

bool func_603(var uParam0, float fParam1)
{
	if (func_534(uParam0, fParam1))
	{
		func_535(uParam0);
		return true;
	}
	return false;
}

int func_604(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_805(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_605(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_806(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_3 = iParam2;
}

int func_606(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = (ENTITY::GET_ENTITY_MODEL(iParam0) + SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	PED::_0xCB1A3864C524F784(iParam0, iVar0);
	return iVar0;
}

void func_607(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_806(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_2 = iParam2;
}

void func_608(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_806(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_1 = iParam2;
}

int func_609(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_807(1, 0, 0);
	}
	else
	{
		iVar0 = func_2();
	}
	return func_757(iVar0);
}

void func_610(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_806(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_4 = iParam2;
}

void func_611(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_806(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_5 = iParam2;
}

bool func_612(int iParam0, int iParam1)
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

bool func_613()
{
	if (func_58(iLocal_98[0], 0, 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_98[0], sLocal_136[0 /*2*/], "window_idle_barman", 1))
		{
			return true;
		}
	}
	return false;
}

bool func_614()
{
	int iVar0;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, (1 << 15), 0))
	{
		iVar0 = PED::GET_MELEE_TARGET_FOR_PED(Global_35);
		if ((iVar0 != 0 && iVar0 != iLocal_98[0]) && iVar0 != iLocal_98[1])
		{
			if (func_612(iVar0, &iLocal_98))
			{
				return true;
			}
		}
	}
	return false;
}

int func_615()
{
	if (func_15(iLocal_34, (1 << 12)))
	{
		return 1;
	}
	else if (func_29(Global_35, iLocal_120, 1, 0))
	{
		func_17(&iLocal_34, (1 << 12));
		return 1;
	}
	return 0;
}

int func_616(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iVar0 >= 2)
		{
			if (func_58(iLocal_98[iVar0], 0, 1))
			{
				if (func_152(iLocal_98[iVar0], Global_35, 0, 1) <= fParam0)
				{
					return iLocal_98[iVar0];
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_617(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	if (func_58(iParam0, 0, 1) && VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		TASK::TASK_WANDER_IN_VOLUME(iParam0, iParam1, fParam2, fParam3, iParam4);
	}
}

bool func_618(int iParam0)
{
	if (!func_15(iLocal_35, 8))
	{
		if (func_29(Global_35, iLocal_122[0], 1, 0) && (CAM::IS_SPHERE_VISIBLE(sLocal_358[2 /*32*/].f_6, 3.0f) || func_178(Global_35, sLocal_161.f_51, 1) >= 2.0f))
		{
			func_808(iParam0, 1, 2792.425f, -1167.989f, 46.91565f);
			func_17(&iLocal_35, 8);
			func_809(&uLocal_1262);
			func_114(&(sLocal_161.f_121));
		}
	}
	else if (func_58(iParam0, 0, 1))
	{
		if (func_178(iParam0, 2792.425f, -1167.989f, 46.91565f, 1) < 1.0f)
		{
			return true;
		}
	}
	return false;
}

bool func_619(int iParam0)
{
	switch (iLocal_1223)
	{
		case 0:
			func_810(sLocal_153.f_0, "pbl_Rat");
			iLocal_1223++;
			break;
		case 1:
			if (func_811(sLocal_153.f_0, "pbl_Rat"))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_98[3], 2792.123f, -1166.463f, 47.97344f, true, false, true, true);
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_153.f_0, "pbl_Rat", true);
				ANIMSCENE::START_ANIM_SCENE(sLocal_153.f_0);
				iLocal_1223++;
			}
			break;
		case 2:
			if ((func_29(Global_35, iLocal_122[0], 1, 0) && func_15(iLocal_35, 8)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (!func_25(&uLocal_1241))
				{
					func_26(&uLocal_1241);
				}
				else if ((func_27(&uLocal_1241) > 1.0f || func_152(Global_35, iParam0, 1, 1) < 3.0f) || func_546(iParam0, 1, 1, 1, 0, 0))
				{
					func_26(&uLocal_1241);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_0, "bool_intro", true, false);
					iLocal_1223++;
				}
			}
			break;
		case 3:
			if (func_29(Global_35, iLocal_122[0], 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_153.f_0, "s_P3_Eat", true))
				{
					if ((func_27(&uLocal_1241) > 10.0f || func_152(Global_35, iParam0, 1, 1) < 3.0f) || (func_27(&uLocal_1241) > 3.0f && func_546(iParam0, 1, 1, 1, 0, 0)))
					{
						func_26(&uLocal_1241);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_0, "bool_middle", true, false);
						iLocal_1223++;
					}
				}
			}
			break;
		case 4:
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_153.f_0, "s_P5_Eat", true))
			{
				func_17(&iLocal_35, 2);
				iLocal_1223++;
			}
			break;
		case 5:
			if (func_625(iParam0, (1 << 30)))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, sLocal_153.f_0))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_153.f_0, "A_C_RAT_01", iParam0);
				}
				iLocal_1223++;
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_620(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, bParam3);
		PED::SET_PED_DEFENSIVE_AREA_VOLUME(iParam0, iParam1, bParam2, bParam3, false);
	}
}

bool func_621(int iParam0)
{
	switch (iLocal_1224)
	{
		case 0:
			func_810(sLocal_153.f_1, "pblWindowAction1");
			iLocal_1224++;
			break;
		case 1:
			if (func_811(sLocal_153.f_1, "pblWindowAction1"))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_153.f_1, "pblWindowAction1", true);
				ANIMSCENE::START_ANIM_SCENE(sLocal_153.f_1);
				iLocal_1224++;
			}
			break;
		case 2:
			if ((func_29(Global_35, iLocal_122[0], 1, 0) && func_15(iLocal_35, 8)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (func_152(Global_35, iParam0, 1, 1) < 3.0f || func_546(iParam0, 1, 1, 1, 0, 0))
				{
					func_26(&uLocal_1244);
					fLocal_1217 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5.0f, 20.0f);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_1, "breakoutLoop1", true, false);
					iLocal_1224++;
				}
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_153.f_1, "loop2", true))
				{
					if (func_625(iParam0, 0.5f))
					{
						func_26(&uLocal_1244);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_1, "breakoutLoop2", true, false);
						if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, sLocal_153.f_0))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_153.f_0, "A_C_RAT_01", iParam0);
						}
						iLocal_1224 = 5;
					}
					else if (func_27(&uLocal_1244) > fLocal_1217)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_1, "breakoutLoop1", false, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_1, "breakoutLoop2", true, false);
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_153.f_1, "pblWindowAction2", true);
						func_26(&uLocal_1244);
						fLocal_1217 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5.0f, 20.0f);
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_153.f_1, "pblWindowAction1");
						iLocal_1224++;
					}
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_153.f_1, "loop2", true) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ANY"), true) != 1)
				{
					if (func_625(iParam0, 0.75f))
					{
						func_26(&uLocal_1244);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_1, "breakoutLoop1", true, false);
						if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, sLocal_153.f_0))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_153.f_0, "A_C_RAT_01", iParam0);
						}
						TASK::TASK_GO_STRAIGHT_TO_COORD(iParam0, 2795.772f, -1164.1f, 46.92804f, 2.0f, 20000, 40000.0f, 0.5f, 0);
						iLocal_1224 = 5;
					}
				}
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_622(int iParam0)
{
	switch (iLocal_1225)
	{
		case 0:
			func_810(sLocal_153.f_2, "pblAll");
			iLocal_1225++;
			break;
		case 1:
			if (func_811(sLocal_153.f_2, "pblAll"))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_153.f_2, "pblAll", true);
				ANIMSCENE::START_ANIM_SCENE(sLocal_153.f_2);
				iLocal_1225++;
			}
			break;
		case 2:
			if ((func_29(Global_35, iLocal_122[0], 1, 0) && func_15(iLocal_35, 8)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (!func_25(&uLocal_1247))
				{
					func_26(&uLocal_1247);
				}
				else if ((func_27(&uLocal_1247) > 1.0f || func_152(Global_35, iParam0, 1, 1) < 3.0f) || func_546(iParam0, 1, 1, 1, 0, 0))
				{
					func_26(&uLocal_1247);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_2, "breakoutLoop1", true, false);
					iLocal_1225++;
				}
			}
			break;
		case 3:
			if (func_29(Global_35, iLocal_122[0], 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_153.f_2, "ledgeLoop2", true))
				{
					if (func_625(iParam0, (1 << 30)) || func_546(iParam0, 1, 1, 1, 0, 0))
					{
						func_26(&uLocal_1247);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_153.f_2, "breakoutLoop2", true, false);
						iLocal_1225++;
					}
				}
			}
			break;
		case 4:
			if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, sLocal_153.f_2))
			{
				if (func_58(iParam0, 0, 1))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iLocal_1342, true);
				}
				if (func_812(2797.275f, -1169.042f, 46.92398f, 1) > 1.5f)
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iParam0, 2797.275f, -1169.042f, 46.92398f, 2.0f, 20000, 40000.0f, 0.5f, 0);
				}
				else
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iParam0, 2795.733f, -1166.928f, 46.924f, 2.0f, 20000, 40000.0f, 0.5f, 0);
				}
				iLocal_1225++;
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_153.f_2) > 0.9f)
			{
				if (!func_15(iLocal_35, (1 << 9)) && func_58(iParam0, 0, 1))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iLocal_1342, true);
				}
			}
			break;
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ANY"), true) != 1)
			{
				iLocal_1225++;
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_623(int iParam0)
{
	if (func_29(iParam0, iLocal_122[3], 1, 0) || !func_29(iParam0, iLocal_120, 1, 0))
	{
		return false;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ANY"), true) != 1 || func_625(iParam0, (1 << 30)))
	{
		return true;
	}
	return true;
}

void func_624(int iParam0, int iParam1)
{
	if (func_25(&uLocal_933))
	{
		if (func_27(&uLocal_933) > 10.0f && !func_623(iParam0))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				if (!CAM::IS_SPHERE_VISIBLE(2792.515f, -1167.56f, 46.9323f, 0.5f))
				{
					ENTITY::SET_ENTITY_COORDS(iParam0, 2792.515f, -1167.56f, 46.9323f, true, false, true, true);
					func_26(&uLocal_933);
				}
				else if (!CAM::IS_SPHERE_VISIBLE(2803.389f, -1164.747f, 46.924f, 0.5f))
				{
					ENTITY::SET_ENTITY_COORDS(iParam0, 2803.389f, -1164.747f, 46.924f, true, false, true, true);
					func_26(&uLocal_933);
				}
			}
		}
	}
}

bool func_625(int iParam0, float fParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_122[3]))
	{
		if (func_29(iParam0, iLocal_122[3], 1, 0))
		{
			return false;
		}
	}
	if ((func_152(Global_35, iParam0, 1, 1) < fParam1 || PED::IS_EVENT_IN_QUEUE(iParam0, joaat("EVENT_SHOT_FIRED_WHIZZED_BY"))) || ((Global_1935630.f_25 && func_777(iParam0, 1050253722, 1060320051, 0, 1061158912)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_626()
{
	if (func_29(Global_35, iLocal_122[0], 1, 0))
	{
		if (!func_25(&uLocal_1250))
		{
			func_26(&uLocal_1250);
		}
		if (func_27(&uLocal_1250) > fLocal_1215)
		{
			if (CAM::IS_SPHERE_VISIBLE(2797.967f, -1169.832f, 46.924f, 1.0f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_627(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, 2798.641f, -1170.245f, 46.92616f, 71.7293f, true, false, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FLUSH_ROUTE();
	TASK::TASK_EXTEND_ROUTE(2798.06f, -1169.895f, 46.924f);
	TASK::TASK_EXTEND_ROUTE(2797.558f, -1169.464f, 46.924f);
	TASK::TASK_EXTEND_ROUTE(2796.951f, -1169.212f, 46.924f);
	TASK::TASK_EXTEND_ROUTE(2796.873f, -1169.089f, 46.924f);
	if (VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16));
		if (iParam1 == iLocal_122[0])
		{
			if ((iVar1 % 3) == 0)
			{
				TASK::TASK_EXTEND_ROUTE(2792.583f, -1170.926f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2790.42f, -1170.1f, 46.924f);
			}
			else if ((iVar1 % 3) == 1)
			{
				TASK::TASK_EXTEND_ROUTE(2795.596f, -1167.322f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2793.38f, -1166.115f, 46.9323f);
			}
			else
			{
				TASK::TASK_EXTEND_ROUTE(2794.16f, -1169.192f, 46.924f);
			}
		}
		else if (iParam1 == iLocal_122[1])
		{
			if ((iVar1 % 3) == 0)
			{
				TASK::TASK_EXTEND_ROUTE(2797.11f, -1166.543f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2796.77f, -1165.347f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2794.929f, -1164.093f, 46.924f);
			}
			else if ((iVar1 % 3) == 1)
			{
				TASK::TASK_EXTEND_ROUTE(2797.11f, -1166.543f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2796.77f, -1165.347f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2795.646f, -1164.293f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2796.47f, -1162.026f, 46.924f);
			}
			else if ((iVar1 % 3) == 2)
			{
				TASK::TASK_EXTEND_ROUTE(2797.529f, -1166.869f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2799.875f, -1163.502f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2799.15f, -1162.565f, 46.924f);
			}
			else
			{
				TASK::TASK_EXTEND_ROUTE(2797.529f, -1166.869f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2798.356f, -1166.651f, 46.924f);
				TASK::TASK_EXTEND_ROUTE(2799.414f, -1167.265f, 46.924f);
			}
		}
		else if (iParam1 == iLocal_122[2])
		{
			TASK::TASK_EXTEND_ROUTE(2797.529f, -1166.869f, 46.924f);
			TASK::TASK_EXTEND_ROUTE(2798.356f, -1166.651f, 46.924f);
			TASK::TASK_EXTEND_ROUTE(2801.381f, -1167.246f, 46.924f);
			if (func_390())
			{
				TASK::TASK_EXTEND_ROUTE(2803.236f, -1164.672f, 46.924f);
			}
		}
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 1.5f, 0, 1.0f, 1.0f, 1193033728);
		func_620(iParam0, iParam1, 0, 0);
	}
	else
	{
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 1.5f, 0, 1.0f, 1.0f, 1193033728);
		func_620(iParam0, iLocal_120, 0, 0);
	}
	func_128(iParam0, &iVar0, 0, 0, 1, 1);
	if (iLocal_1226 < 2)
	{
		fLocal_1215 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.6f);
	}
	else
	{
		fLocal_1215 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
	}
	iLocal_1226++;
	func_26(&uLocal_1250);
}

void func_628(int iParam0, int iParam1, Vector3 vParam2, float fParam5, float fParam6, int iParam7)
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_99(vParam2))
	{
		if (func_390())
		{
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 5.0f, -1, 0, 2.5f, 0);
		}
		else
		{
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 5.0f, -1, 0, 1.75f, 0);
		}
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam2, 1.0f, -1, MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 3.0f), (1 << 19), 40000.0f);
	}
	TASK::TASK_WANDER_IN_VOLUME(0, iParam1, fParam5, fParam6, iParam7);
	func_128(iParam0, &iVar0, 0.1f, 5.0f, 1, 1);
}

bool func_629(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_411(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_813(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_814("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_815(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_511(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_816(iVar1);
				return true;
			}
			iVar3++;
		}
		func_816(iVar1);
	}
	return false;
}

int func_630(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_411(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_581(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_813(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_817(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(bParam2), iParam0, false);
	return iVar2;
}

void func_631(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_354(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_632(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_819())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_354(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_820(iVar0);
			func_821(iVar0, 0, 0);
		}
		func_354(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_352(func_351(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_633(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_120() == -1)
	{
		if (func_822(iParam0) && func_823(iParam0))
		{
			func_824(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_634(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_825(iParam0, iParam1);
	sVar0 = { func_826(iParam0, 0, 1) /*5*/ };
	iVar5 = func_827(iParam0, &sVar0, 0, 0);
	iVar6 = func_828(iParam0, 0);
	if ((iVar5 > 1 && !func_829()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_412(iParam0, joaat("CI_TAG_ITEM_ANIMAL_PART")))
		{
			func_595(583, 1);
		}
		else
		{
			func_595(582, 0);
		}
	}
	if (func_830(iParam0, &sVar0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_635(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_831(iParam0, joaat("TAG_INTERACTION_TYPE")))
	{
		case joaat("CI_TAG_PAPER_W15_24_H10_16"):
		case joaat("CI_TAG_PAPER_W11_5_H20_5"):
		case -1239610997:
		case joaat("CI_TAG_PAPER_W18_9_H28_2_FOLDVERTICALX2"):
		case joaat("CI_TAG_PAPER_W32_2_H48_2_FOLDVERTICALHORIZONTAL"):
		case -873135685:
		case joaat("CI_TAG_PAPER_W12_7_H17_78"):
		case 10252101:
		case 24248412:
		case joaat("CI_TAG_PAPER_NEWSPAPER"):
		case 632545869:
		case joaat("CI_TAG_PAPER_W10_16_H15_24"):
		case joaat("CI_TAG_PAPER_D2_H32_ROLLED"):
		case joaat("CI_TAG_PAPER_W48_2_H32_2_FOLDVERTICALHORIZONTAL"):
		case joaat("CI_TAG_PAPER_W15_1_H24_FOLDVERTICAL"):
		case joaat("CI_TAG_PAPER_W17_78_H12_7"):
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = iParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_636(int iParam0)
{
	if (func_120() != -1)
	{
		return false;
	}
	return func_637(iParam0) != 0;
}

int func_637(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_832())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_833(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_638(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(iParam0);
}

int func_639(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_832())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_638(iVar0))
		{
			if (func_410(func_833(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_640(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	func_834(48);
	func_733(0, -1);
}

bool func_641(int iParam0)
{
	if (func_120() != -1)
	{
		return false;
	}
	return func_588(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_642(int iParam0)
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), iParam0);
}

int func_643(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_644(int iParam0)
{
	if (func_120() != -1)
	{
		return false;
	}
	return func_588(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_645(int iParam0)
{
	if (func_120() != -1)
	{
		return false;
	}
	if (!func_526(iParam0))
	{
		return false;
	}
	return func_835(Global_1347702[iParam0 /*49*/].f_15);
}

int func_646()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_410(func_836(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_647(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_585() && (func_645(38) || func_641(38)))
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
			if (func_585() && (func_645(39) || func_641(39)))
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
			iVar9 = func_837(iParam3, 19);
			iVar14 = joaat("EXOTIC_ITEMS");
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_585() && (func_645(41) || func_641(41)))
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
			if (func_585() && (func_645(49) || func_641(49)))
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
			iVar9 = func_837(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_838(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_839(iParam0, iVar13, iVar14))
	{
	}
	if (func_840(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_841(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_842(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_843(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_844(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_648(int iParam0)
{
	Global_40.f_12004 |= iParam0;
}

void func_649(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_585() && (func_645(38) || func_641(38)))
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
			if (func_585() && (func_645(39) || func_641(39)))
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
			if (func_585() && (func_645(49) || func_641(49)))
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
		if (func_585() && (func_645(38) || func_641(38)))
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
			func_845(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_845(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_847(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_846(func_643(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_845(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_845(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_585() && (func_645(39) || func_641(39)))
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
			func_845(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_845(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_585() && (func_645(49) || func_641(49)))
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
			func_845(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_845(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_845(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_845(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_650(int iParam0, int iParam1)
{
	if (!func_411(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, iParam1);
}

void func_651(int iParam0)
{
	if (!func_573(iParam0))
	{
		return;
	}
	func_848(iParam0);
	func_849(iParam0);
}

int func_652(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_411(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_653(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_411(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_850(iVar0) || func_851(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_654(int iParam0, bool bParam1)
{
	if (!func_411(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_655(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_511(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_656(bool bParam0)
{
	if (func_120() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_818(bParam0));
}

bool func_657(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		sVar0 = { func_826(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_852((398 + iVar28), 1);
			if (func_853(iParam0, &sVar0, iVar5, 0))
			{
				if (func_854(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_855(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_856(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_656(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_658(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_857(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
				return true;
			}
		}
	}
}

bool func_658(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_660(iParam0))
	{
		return false;
	}
	if (!func_656(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_659(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_654(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_120() == -1)
		{
			func_655(iVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_858(iVar0);
			}
		}
		if (!func_830(iParam0, &uVar1, 1, 0, 0))
		{
			func_824(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_859(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_657(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_657(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_657(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_243())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_860(iVar0))
				{
					func_657(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_657(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_861(Global_35, 2, 0, 1);
				if ((((func_511(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_344(24)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_511(iVar7) && func_344(24))
				{
					if (!func_657(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_657(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_657(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == joaat("ADD_REASON_PURCHASED"))
	{
		func_595(480, 1);
	}
	return true;
}

bool func_660(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_661(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_660(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_511(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_410(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
	{
		iVar6 = BUILTIN::CEIL(((float)iVar6 * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_695(func_862(iParam0), func_694(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_120() == -1)
		{
			if (func_588(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_595(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_656(0))
	{
		if (func_658(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_700(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_662(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_863()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_864(Global_35, iParam0, &uVar0))
		{
			func_679(PLAYER::PLAYER_PED_ID(), iParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 += 0.1f;
			func_685();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 += 0.1f;
			func_685();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 += 0.1f;
			func_685();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 += 0.5f;
			func_683();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 += 0.2f;
			func_681();
			break;
	}
}

void func_663(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 += 0.1f;
			func_681();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 += 0.1f;
			func_682();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 += 0.5f;
			func_683();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 += 0.1f;
			func_684();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 += 0.15f;
			Global_40.f_11095.f_50 += 0.15f;
			Global_40.f_11095.f_51 += 0.15f;
			func_685();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 += 0.3f;
			func_865();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 += 0.1f;
			func_866();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 += 0.2f;
			break;
	}
}

struct<2> /*16*/ func_664(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

struct<2> /*16*/ func_665(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

void func_666(int iParam0)
{
	bool bVar0;

	bVar0 = func_412(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT"));
	if (func_867() < 3)
	{
		if (bVar0)
		{
			if (func_869(func_868(iParam0), iParam0))
			{
				func_695(79, func_694(func_868(iParam0)), 1);
			}
			else
			{
				func_695(78, func_694(func_868(iParam0)), 1);
			}
		}
		else
		{
			func_695(80, func_694(func_870(iParam0)), 1);
		}
	}
}

bool func_667()
{
	if (((((func_871(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_871(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_871(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_871(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_871(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_871(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

void func_668(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_647(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_649(51, 0, 0, 0, 0, -1, 0);
			func_872((1 << 13));
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_647(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_649(51, 0, 0, 0, 0, -1, 0);
			func_872((1 << 19));
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_647(39, 0, 0, 0, 0, 0, 1, 0);
			func_649(39, 0, 0, 0, 0, -1, 0);
			func_873(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_647(41, 0, 0, 0, 0, 0, 1, 0);
			func_649(41, 0, 0, 0, 0, -1, 0);
			func_874(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_647(49, 0, 0, 0, 0, 0, 1, 0);
			func_649(49, 0, 0, 0, 0, -1, 0);
			func_875(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_647(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_876(1), 0, -1, 0);
			func_877(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_647(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_876(2), 0, -1, 0);
			func_877(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_647(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_876(4), 0, -1, 0);
			func_877(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_647(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_876(8), 0, -1, 0);
			func_877(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_647(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_876(16), 0, -1, 0);
			func_877(16);
			break;
	}
}

void func_669(int iParam0)
{
	if (func_878() == 1)
	{
		if (func_641(39))
		{
			func_595(342, 0);
		}
		else
		{
			func_595(343, 0);
			func_873(1);
		}
	}
	if (func_878() >= 30)
	{
		func_595(344, 0);
	}
	func_647(39, 0, 0, 0, 0, 0, -1, 0);
	func_649(39, 0, 0, func_878(), 30, 1, 0);
}

void func_670(int iParam0)
{
	if (func_879() == 1)
	{
		if (func_641(49))
		{
			func_595(409, 0);
		}
		else
		{
			func_595(410, 0);
			func_875(1);
		}
	}
	if (func_879() >= 10)
	{
		func_595(411, 0);
	}
	func_647(49, 0, 0, 0, 0, 0, -1, 0);
	func_649(49, 0, 0, func_879(), 10, 1, 0);
}

void func_671(int iParam0)
{
	char[] cVar0[8];

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_01"), 1);
			func_595(437, 0);
			func_595(440, 0);
			func_880(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &cVar0, 1, 0, 0);
			func_647(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), cVar0, 0, -1, 0);
			func_649(51, 0, 0, cVar0, func_837(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_872(1);
			func_881(joaat("WS_TAXIDERMY_NOTICES"), 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_02"), 1);
			func_880(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &cVar0, 1, 0, 0);
			func_647(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), cVar0, 0, -1, 0);
			func_649(51, 0, 0, cVar0, func_837(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_872(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_03"), 1);
			func_880(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &cVar0, 1, 0, 0);
			func_647(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), cVar0, 0, -1, 0);
			func_649(51, 0, 0, cVar0, func_837(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_872(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_04"), 1);
			func_880(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &cVar0, 1, 0, 0);
			func_647(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), cVar0, 0, -1, 0);
			func_649(51, 0, 0, cVar0, func_837(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_872((1 << 9));
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_05"), 1);
			func_595(438, 0);
			func_880(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &cVar0, 1, 0, 0);
			func_647(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), cVar0, 0, -1, 0);
			func_649(51, 0, 0, cVar0, func_837(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_872((1 << 15));
			break;
		default:
			func_595(439, 0);
			break;
	}
}

void func_672()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_673(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_120() == -1)
	{
		if (!func_641(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_595(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_595(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_595(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_595(400, 0);
			}
		}
		else if (func_412(iParam0, 412399755))
		{
			func_882(joaat("EXOTIC_STAGE_01"));
			if (func_883() == 0)
			{
				func_733(0, 10);
				iVar1 = func_884(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_885(iParam0) < func_886(iParam0))
					{
						func_647(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_649(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_641(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_595(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_595(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_595(401, 0);
			}
		}
		else if (func_412(iParam0, 709057512))
		{
			func_882(joaat("EXOTIC_STAGE_02"));
			if (func_883() == 1)
			{
				func_733(0, 10);
				iVar1 = func_884(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_885(iParam0) < func_886(iParam0))
					{
						func_647(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_649(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_641(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_595(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_595(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_595(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_595(398, 0);
			}
		}
		else if (func_412(iParam0, -1478961327))
		{
			func_882(joaat("EXOTIC_STAGE_03"));
			if (func_883() == 2)
			{
				func_733(0, 10);
				iVar1 = func_884(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_887(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_888(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_834(48);
					}
					if (func_885(iParam0) < func_886(iParam0))
					{
						func_647(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_649(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_885(iParam0) < func_886(iParam0))
					{
						func_647(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_649(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_641(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_595(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_595(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_595(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_595(406, 0);
			}
		}
		else if (func_412(iParam0, -1238404098))
		{
			func_882(joaat("EXOTIC_STAGE_04"));
			if (func_883() == 3)
			{
				func_733(0, 10);
				iVar1 = func_884(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_885(iParam0) < func_886(iParam0))
					{
						func_647(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_649(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_641(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_595(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_595(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_595(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_595(403, 0);
			}
		}
		else if (func_412(iParam0, 1160548794))
		{
			func_882(joaat("EXOTIC_STAGE_05"));
			if (func_883() == 4)
			{
				func_733(0, 10);
				iVar1 = func_884(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_885(iParam0) < func_886(iParam0))
					{
						func_647(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_649(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_674(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_887(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_888(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_834(48);
		}
	}
}

void func_675(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_410(func_889(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_890(iParam0, iVar0, cVar2, iParam1, bParam2);
			}
			else
			{
				func_891(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_676(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_120() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_414(0, 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_414(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_414(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_414(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_414(joaat("REWARD_BILLFOLD"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_414(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_414(joaat("REWARD_BILLSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_414(joaat("REWARD_COIN"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_414(joaat("REWARD_COINPURSE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_414(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_414(joaat("REWARD_COINS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_414(joaat("REWARD_MONEYCLIP"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_414(joaat("REWARD_MONEYSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_892())
			{
				func_414(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_414(joaat("REWARD_COINCUP_SM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_414(joaat("REWARD_COINCUP_LG"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_414(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_414(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_414(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_414(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_414(joaat("REWARD_RARE_FISH"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_414(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_414(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_414(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_414(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_414(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_414(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_677(int iParam0)
{
	if (func_641(41))
	{
		func_595(363, 0);
	}
	else
	{
		func_595(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_01"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_02"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_03"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_04"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_05"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_06"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_07"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_08"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_09"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_10"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_11"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_12"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_13"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_733(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_893(joaat("LEGENDARY_FISH_14"));
			func_894(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_895(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_678(int iParam0, int iParam1)
{
	var uVar0;

	func_896(iParam0, iParam1, &uVar0);
}

int func_679(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
	{
		sVar0 = { func_826(iParam1, 1, 0) /*5*/ };
		iParam3 = func_897(sVar0.f_4);
		if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
		{
			return 0;
		}
	}
	if (!func_899(iParam1, iParam2, func_898(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_900(1, (func_120() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (bParam8 && iParam1 != Global_1946054.f_57[func_898(iParam3, 1) /*11*/])
			{
				func_901(31, 0, 0, 0, 0);
			}
			break;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (func_902((1 << 15)) && iParam1 != Global_1946054.f_57[func_898(iParam3, 1) /*11*/])
			{
				func_903();
				func_901(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_901(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_904(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_901(19, 0, iVar5, 0, 0);
		if ((iParam3 == joaat("MP_COMPONENT_TYPE_NECKWEAR_1") || iParam3 == joaat("MP_COMPONENT_TYPE_HEADWEAR")) || iParam3 == joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"))
		{
			func_905(0);
			func_906(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_901(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_680(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> /*80*/ sVar3;
	bool bVar17;
	int iVar18;
	int iVar19;

	sVar3.f_9 = joaat("SLOTID_NONE");
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_861(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_861(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_814("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_815(&sVar3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(sVar3.f_4))
				{
					if (!bParam1)
					{
						if (sVar3.f_4 == iVar18 || sVar3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = sVar3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_816(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_681()
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_60));
}

void func_682()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - fVar0), (1.0f - fVar1));
}

void func_683()
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f / (1.0f + Global_40.f_11095.f_58)));
}

void func_684()
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_63));
}

void func_685()
{
	func_907();
	func_908();
	func_909();
}

void func_686(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	Vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	switch (iParam1)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::VAR_STRING(2, sVar3));
}

void func_687(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_845(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_688(int iParam0)
{
	Global_40.f_12004.f_7 |= iParam0;
}

void func_689(int iParam0)
{
	Global_40.f_12004.f_8 |= iParam0;
}

void func_690(int iParam0)
{
	Global_40.f_12004.f_9 |= iParam0;
}

void func_691(int iParam0)
{
	Global_40.f_12004.f_10 |= iParam0;
}

void func_692(int iParam0)
{
	Global_40.f_12004.f_11 |= iParam0;
}

void func_693(int iParam0)
{
	Global_40.f_12004.f_12 |= iParam0;
}

int func_694(int iParam0)
{
	if (!func_411(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_695(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_801(iParam0, &iVar0, &iVar1);
	if (!func_802(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_910(iParam0, (1 << 10)))
	{
		return;
	}
	func_803(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_696(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_801(iParam0, &iVar0, &iVar1);
	if (!func_802(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_910(iParam0, (1 << 10)))
	{
		return;
	}
	func_803(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

int func_697()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);
	if (iVar0 == func_832())
	{
		return func_698();
	}
	iVar4 = (func_832() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_832())
	{
		iVar1 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar2, joaat("CIGARETTE_CARDS"), 0);
		if (!func_911(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_833(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_698()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_832());
	return func_833(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("CIGARETTE_CARDS"), 0));
}

void func_699(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

int func_700(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_411(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	sVar0 = { func_826(iParam0, 0, 1) /*5*/ };
	sVar5 = { func_855(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_912(iParam0, &sVar5, &sVar0, iParam1, iParam2, 0);
}

void func_701(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_120() != -1)
	{
		return;
	}
	switch (func_652(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			if (iParam0 == joaat("KIT_BANDANA") && func_913(joaat("CI_CATEGORY_WARDROBE_MASK"), 0) <= 0)
			{
				func_901(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_901(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = func_914(iParam0);
			if (func_915(iVar0))
			{
				func_916(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_901(30, iParam0, 0, 0, 0);
			}
			if (func_917() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || func_917() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"):
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_901(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_917() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"):
						func_901(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			if (!func_918(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), 0))
			{
				if (func_919(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), &iVar1))
				{
					func_901(33, iVar1, 0, 0, 0);
				}
			}
			func_901(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_920(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_679(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_651(24);
		if (func_680(&iVar2, 0))
		{
			func_657(iVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_702(int iParam0)
{
	if (func_412(iParam0, 943695443))
	{
		func_921(0, iParam0);
	}
	else if (func_412(iParam0, -2096528786))
	{
		func_921(1, iParam0);
	}
	else if (func_412(iParam0, -1094167013))
	{
		func_921(2, iParam0);
	}
	else if (func_412(iParam0, 1936654645))
	{
		func_921(3, iParam0);
	}
	else if (func_412(iParam0, 1306489306))
	{
		func_921(4, iParam0);
	}
	else if (func_412(iParam0, 435762317))
	{
		func_921(5, iParam0);
	}
	else if (func_412(iParam0, 1259363210))
	{
		func_921(6, iParam0);
	}
	else if (func_412(iParam0, 881398259))
	{
		func_921(7, iParam0);
	}
	else if (func_412(iParam0, -541549214))
	{
		func_921(8, iParam0);
	}
	else if (func_412(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_921(-1, iParam0);
	}
}

int func_703(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	sVar4.f_1 = 10;
	func_922(&sVar4, joaat("LOOT_TYPE_NORMAL"));
	return func_923(iParam0, &sVar4, &uVar0, iParam1);
}

struct<2> /*16*/ func_704(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_411(iParam0, 0))
	{
		return sVar0;
	}
	if (func_412(iParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_120() == -1)
		{
			if (func_412(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_351(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_351(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_412(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_351(joaat("MEDICINE_ITEMS"));
	}
	if (func_412(iParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_351(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

void func_705(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_120() == -1)
			{
				if (func_588(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_595(109, 1);
				}
			}
			break;
	}
}

void func_706(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_925(func_924(0));
	func_354(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_926(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_707(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_411(iParam0, 0))
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
	if (!func_927())
	{
		func_928(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_929(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_929(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
		}
		else if (bParam2 && func_650(iParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT");
		}
		bVar0 = true;
	}
	iVar6 = func_581(iParam0);
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
	else if (!func_930(iParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_931(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_694(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_412(iParam0, joaat("CI_TAG_SMOKING_CIGARETTE"))) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_694(iParam0));
	}
	func_354(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

var func_708(int iParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_351(iParam0) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

bool func_709(var uParam0)
{
	if (joaat("MASK_UP") == func_932(joaat("CI_CATEGORY_WARDROBE_MASK")))
	{
		if (func_933(uParam0))
		{
			return true;
		}
	}
	else if (func_934(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), uParam0))
	{
		if (func_933(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_710()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_711(int iParam0, int iParam1)
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

	if (func_120() != -1)
	{
		return;
	}
	iVar0 = func_416();
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
	iVar4 = func_345(BUILTIN::CEIL(((fVar6 / fVar7) * 100.0f)), 0, 100);
	iVar5 = func_345(BUILTIN::CEIL(((fVar8 / fVar7) * 100.0f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_935())
		{
			func_936(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_937())
		{
			func_936(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_938())
		{
			func_936(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_939())
	{
		func_936(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_352(func_351(joaat("FAME")), iVar1);
	iVar10 = func_416();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

void func_712(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_713(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_714(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

bool func_715(int iParam0)
{
	return func_714(iParam0, 2);
}

void func_716(int iParam0, int iParam1)
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

void func_717(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_718(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_433(*iParam0);
	iVar1 = func_432(*iParam0);
	if (iParam1 < 1 || iParam1 > func_438(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_719(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_720(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_721(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_722(int iParam0)
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
	iVar0 = func_437(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_436(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_435(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_432(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_433(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_434(iParam0);
	if (iVar5 < 1 || iVar5 > func_438(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_723(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1993529370:
			return 14;
		case -1910231185:
			return 27;
		case joaat("TSTAG_VAL_MUD3_ACTIVE_CHASE"):
			return 30;
		case -1751068532:
			return 19;
		case joaat("TSTAG_NO_TAGS"):
			return 0;
		case joaat("TSTAG_LOCKDOWN_LAST"):
			return 13;
		case joaat("TSTAG_VAL_MUD3_ACTIVE_RIDE_TO_VAL"):
			return 28;
		case -1132827806:
			return 18;
		case -1066004925:
			return 36;
		case -586199837:
			return 23;
		case -529686691:
			return 20;
		case joaat("TSTAG_VAL_MUD3_ACTIVE_GO_TO_STORE"):
			return 29;
		case joaat("TSTAG_LOCKDOWN"):
			return 9;
		case -415041951:
			return 3;
		case joaat("TSTAG_FLOW_PRE_BOUNTY_1"):
			return 15;
		case joaat("TSTAG_FIRST_VISIT"):
			return 1;
		case joaat("TSTAG_LOCKDOWN_FIRST"):
			return 8;
		case joaat("TSTAG_ENDLESS_SUMMER"):
			return 4;
		case 0:
			return 38;
		case 508286680:
			return 5;
		case joaat("TSTAG_LOCKDOWN_SALOON"):
			return 11;
		case 623901469:
			return 16;
		case joaat("TSTAG_VAL_MUD4_ACTIVE_WALK_WITH_JOHN"):
			return 31;
		case joaat("TSTAG_RHD_FEUD1_ACTIVE"):
			return 25;
		case 1274330613:
			return 22;
		case joaat("TSTAG_VAL_MUD5_ACTIVE_STEALTH_EXIT"):
			return 34;
		case 1398684735:
			return 26;
		case 1556254948:
			return 2;
		case joaat("TSTAG_RAIN"):
			return 6;
		case joaat("TSTAG_LOCKDOWN_PARTIAL"):
			return 10;
		case 1598344177:
			return 21;
		case joaat("TSTAG_VAL_MUD5_ACTIVE"):
			return 33;
		case joaat("TSTAG_VAL_MUD4_ACTIVE_GO_TO_SALOON"):
			return 32;
		case joaat("TSTAG_VHT_ODD_FELLOWS_1_ACTIVE"):
			return 35;
		case 1763394652:
			return 17;
		case joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"):
			return 12;
		case joaat("TSTAG_RHD_SADIE1_ACTIVE"):
			return 24;
		case 1843135693:
			return 7;
		case joaat("TSTAG_LAST"):
			return 37;
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

int func_724(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("TSTAG_NO_TAGS");
		case 1:
			return 508286680;
		case 2:
			return joaat("TSTAG_LOCKDOWN_FIRST");
		case 3:
			return 1274330613;
		case 4:
			return -1993529370;
		default:
			break;
	}
	return joaat("TSTAG_NO_TAGS");
}

int func_725(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("TSTAG_NO_TAGS");
		case 1:
			return 1843135693;
		case 2:
			return joaat("TSTAG_LOCKDOWN_LAST");
		case 3:
			return -1066004925;
		case 4:
			return 1598344177;
		default:
			break;
	}
	return joaat("TSTAG_NO_TAGS");
}

int func_726(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_723(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_727(var uParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = joaat("TSTAG_NO_TAGS");
	sVar0.f_1 = 820723243;
	sVar0.f_2 = 1;
	*uParam0 = { sVar0 /*5*/ };
}

void func_728()
{
	func_940(23);
}

void func_729(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

int func_730(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != (1 << 14))
		{
			return 1;
		}
	}
	return 0;
}

void func_731(int iParam0)
{
	int iVar0;

	iVar0 = func_941(iParam0);
	if (iVar0 != 0)
	{
		func_942(-1, 24, 0, iVar0);
	}
}

void func_732(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_352(func_351(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_81(iParam0, 2))
	{
		func_943(iParam0, func_495(iParam3));
	}
	if (func_81(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_497();
		}
		func_944(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_112(iParam0, (1 << 16)))
	{
		func_945(iParam0, iParam1);
		func_946(iParam0, func_246(iParam0, iParam1));
		func_729(128);
	}
	func_499(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216, 0, 0);
	func_500(iParam0, 1);
	if (!bParam2)
	{
		func_729(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_947((1 << 19));
	}
	if (func_948(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_948(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_733(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_949(&Global_0, 8);
	}
	if (!func_585() || func_120() != -1)
	{
		return;
	}
	func_949(&Global_0, 1);
}

int func_734(int iParam0, bool bParam1)
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

void func_735(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

bool func_736(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_99(vParam0))
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

bool func_737(Vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_99(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, (1 << 14));
}

bool func_738(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_99(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_107(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500.0f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_739()
{
	int iVar0;
	int iVar1;

	iVar0 = func_950(func_2());
	if (iVar0 == 8)
	{
		iVar1 = func_302(func_2());
		if (func_304(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_951(func_609(0)))
	{
		return false;
	}
	if (func_952())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_740(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_741(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0 = { *uParam0 /*3*/ };
	if (func_953(&uParam1))
	{
		return 1;
	}
	if (!func_272(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 /*3*/ };
	return 1;
}

bool func_742(var uParam0)
{
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_HAS_METAPED_OUTFIT_LOADED(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_743(int iParam0, Vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_954(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_744(int iParam0)
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

bool func_745(var uParam0)
{
	return func_15(*uParam0, 4);
}

bool func_746(var uParam0)
{
	return func_15(*uParam0, 64);
}

bool func_747(var uParam0)
{
	return func_15(*uParam0, 8);
}

bool func_748(var uParam0)
{
	return func_15(*uParam0, 128);
}

bool func_749(var uParam0)
{
	return func_15(*uParam0, (1 << 11));
}

void func_750(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, bParam1);
}

bool func_751(var uParam0)
{
	return func_15(*uParam0, (1 << 10));
}

bool func_752(var uParam0)
{
	return func_15(*uParam0, 256);
}

void func_753(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146 /*PCF_0x861831C4*/, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148 /*PCF_0x0DD984BE*/, !bParam1);
}

bool func_754(var uParam0)
{
	return func_15(*uParam0, (1 << 9));
}

bool func_755(var uParam0)
{
	return func_15(*uParam0, (1 << 12));
}

int func_756(int iParam0)
{
	switch (iParam0)
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
			return 0;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			return 2;
		case joaat("G_M_M_UNIINBRED_01"):
			return 1;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			return 3;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			return 4;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			return 5;
	}
	return -1;
}

int func_757(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return (1 << 9);
		case 3:
			return (1 << 10);
		case 61:
			return (1 << 11);
		case 110:
			return (1 << 12);
		case 5:
			return (1 << 13);
		case 35:
			return (1 << 14);
		case 22:
			return (1 << 15);
		case 105:
			return (1 << 16);
		case 8:
			return (1 << 17);
		case 32:
			return (1 << 18);
		case 26:
			return (1 << 19);
		case 115:
			return (1 << 20);
		case 76:
			return (1 << 21);
		case 92:
			return (1 << 22);
		case 56:
			return (1 << 23);
		case 120:
			return (1 << 24);
		default:
			break;
	}
	return 0;
}

int func_758(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_759(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1326862.f_512[iParam1];
	iVar1 = Global_1326862.f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == Global_1326862.f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_760(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_469(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_458(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == (1 << 24))
			{
				if (func_955(iVar0) < func_956(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_499(iVar0, iParam1, 1.0f, iVar1 | iParam2, bParam3);
		}
		iVar0++;
	}
}

bool func_761(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_957(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

void func_762(int iParam0)
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

void func_763(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_764()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_958(iVar0, 128))
		{
			func_959(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_765()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_958(iVar0, 128) && func_958(iVar0, 1))
		{
			func_959(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_766(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000.0f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_767()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_81(iVar0, (1 << 24)))
		{
			if (!func_960(iVar0))
			{
				func_961(iVar0, (1 << 12));
			}
		}
		iVar0++;
	}
}

void func_768(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_459(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_459(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_459(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_459(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_459(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_459(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_459(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_769(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_104();
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

int func_770(int iParam0)
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

int func_771(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_772()
{
	if (func_962())
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

void func_773(var uParam0, var uParam1)
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

int func_774(int iParam0)
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

void func_775(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_207(iParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_111(iParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_776(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_777(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_778(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_778(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_779(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

bool func_780(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_781(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_782(bool bParam0)
{
	func_963(bParam0);
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

bool func_783(int iParam0, var uParam1)
{
	if (!func_964(iParam0))
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

int func_784(int iParam0)
{
	if (!func_528(iParam0))
	{
		return -1;
	}
	return func_965(iParam0);
}

bool func_785(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_966(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, true);
				func_52(uParam2, 0, 0, 1, 0);
				func_111(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_967(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			func_207(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_786(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_3(iParam4, 32);
		func_590(iParam1, uParam2, 0);
		iVar5 = func_968(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			return true;
		}
		func_52(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_3(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_3(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_3(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_3(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_3(iParam4, (1 << 23)) || func_3(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_3(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_3(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_789(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_789(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_3(iParam4, (1 << 26)))
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
				iParam6 = func_969(uParam0);
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
			if (func_3(iParam4, (1 << 28)))
			{
				iVar8 = func_970(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_971(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_789(iParam1, 23))
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
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_788(*uParam0, 1, 1);
			}
			else
			{
				func_788(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_787(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	}
}

void func_788(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
	}
}

bool func_789(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_790(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_972(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_791(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_973(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_792(int iParam0)
{
	if (func_3(iParam0, 4))
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
	if (func_3(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_3(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_793(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_974(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = (iParam10 & 128) != false;
	bVar7 = (iParam10 & 64) != false;
	bVar8 = (iParam10 & (1 << 9)) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_975(Global_35)) || func_976(Global_35)) || func_977(Global_35));
	fVar12 = -1.0f;
	if (func_25(&(iParam1->f_13)))
	{
		fVar12 = func_27(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_195((uParam4[iVar0 /*17*/])->f_6);
		func_978(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_979(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_980(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_52(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_981(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_590(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_982(iParam1, fParam6, iParam1->f_9))
					{
						func_26(&(iParam1->f_18));
						if (bVar6)
						{
							func_981(uParam4, 0, 0);
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
		func_983(iParam1, fParam2);
	}
	return bVar5;
}

void func_794(var uParam0)
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

void func_795(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_984(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_983(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_796(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_985(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_986(iParam1, 0);
				func_590(iParam1, uParam2, func_789(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_797(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_26(&(iParam1->f_18));
			return false;
		}
		else if (func_25(&(iParam1->f_18)))
		{
			func_535(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_25(&(iParam1->f_18)))
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
	return func_603(&(iParam1->f_18), fParam2);
	return true;
}

void func_798(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_978(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_799(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_800(int* iParam0)
{
	if (func_789(iParam0, 0))
	{
		if (func_987(iParam0))
		{
			func_799(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_801(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_802(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_988(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_989(iParam0))
	{
		return false;
	}
	if (func_990(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_910(iParam0, 1)) || func_991((1 << 15)))
	{
		if (!func_910(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_992())
	{
		return false;
	}
	return true;
}

void func_803(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_804(int iParam0, bool bParam1)
{
	if (bParam1 && !func_195(iParam0))
	{
		return false;
	}
	return !func_714(iParam0, 4);
}

int func_805(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_806(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_805(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1 || Global_17504.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17504.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_807(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (Global_1888801[iVar2 /*35*/].f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899.f_2))
			{
				if (!bParam1 || func_993(iVar2))
				{
					vVar3 = { VOLUME::GET_VOLUME_COORDS(Global_1888801[iVar2 /*35*/].f_3) /*3*/ };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

void func_808(int iParam0, bool bParam1, Vector3 vParam2)
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FLUSH_ROUTE();
	TASK::TASK_EXTEND_ROUTE(2794.944f, -1166.643f, 46.91581f);
	TASK::TASK_EXTEND_ROUTE(2793.532f, -1166.149f, 46.9157f);
	TASK::TASK_EXTEND_ROUTE(vParam2);
	if (bParam1)
	{
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 2.0f, 0, 1056964608, 1084227584, 1193033728);
	}
	else
	{
		TASK::TASK_FOLLOW_POINT_ROUTE(0, 2.0f, 2, 1056964608, 1084227584, 1193033728);
	}
	func_128(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_809(var uParam0)
{
	func_535(uParam0);
	func_994(&(uParam0->f_3), 1);
	uParam0->f_4 = 0;
}

void func_810(int iParam0, char* sParam1)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(iParam0, sParam1))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1);
		}
	}
}

bool func_811(int iParam0, char* sParam1)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam0, sParam1))
			{
				return true;
			}
			else
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1);
			}
		}
	}
	return false;
}

float func_812(Vector3 vParam0, int iParam3)
{
	return func_178(Global_35, vParam0, iParam3);
}

int func_813(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_411(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_581(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_412(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_896(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_814(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_818(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_815(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_816(int iParam0)
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

int func_817(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_995(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_997(&sVar0, func_996(0));
	}
	if (!func_998(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_816(iVar18);
	return iVar19;
}

int func_818(bool bParam0)
{
	if (func_120() == -1)
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

bool func_819()
{
	if (func_863())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_820(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_999((Global_40.f_4283.f_325 + iParam0));
}

void func_821(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_819())
	{
		func_354(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_354(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_822(int iParam0)
{
	return func_581(iParam0) == joaat("WEAPON");
}

bool func_823(int iParam0)
{
	var uVar0;

	if (func_120() != -1)
	{
		return false;
	}
	if (func_650(iParam0, (1 << 20)))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_830(iParam0, &uVar0, 1, 0, 0);
	}
	return func_410(iParam0, 1, 0);
}

void func_824(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_581(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_654(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_851(iVar0))
	{
		if (func_120() == -1)
		{
			func_655(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_630(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_707(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_825(int iParam0, int iParam1)
{
	int iVar0;

	if (func_412(iParam0, joaat("CI_TAG_ITEM_MULTIPLE_USES")))
	{
		func_1000(iParam0, joaat("COST_SHOP_DEFAULT"), &iVar0, 1);
		*iParam1 *= iVar0;
	}
}

struct<5> /*40*/ func_826(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_1001(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_581(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_855(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_996(bParam1) /*4*/ };
			if (bParam2 && func_1002(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_853(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_853(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_854(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_1003(bParam1) /*4*/ };
			switch (func_652(iParam0))
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
			if (func_1004(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_855(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_1004(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_855(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_1005(sVar0, &sVar27, bParam1, 0))
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

int func_827(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_411(iParam0, 0))
	{
		return 0;
	}
	if (!func_656(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_1006(iParam0))
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(iParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_818(bParam3), iParam0);
}

int func_828(int iParam0, bool bParam1)
{
	if (func_660(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(bParam1), iParam0, false);
}

bool func_829()
{
	if (func_120() != -1)
	{
		return false;
	}
	if (!func_585())
	{
		return false;
	}
	if (!func_588(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_588(Global_1835011[2 /*74*/].f_1, 1) && func_588(Global_1347702[120 /*49*/].f_15, 1)) && !func_588(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_588(Global_1835011[37 /*74*/].f_1, 1) && !func_588(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_588(Global_1835011[57 /*74*/].f_1, 1) && !func_588(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_588(Global_1835011[26 /*74*/].f_1, 1) && !func_588(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_588(Global_1835011[62 /*74*/].f_1, 1) && func_588(Global_1835011[63 /*74*/].f_1, 1)) && !func_588(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_588(Global_1835011[75 /*74*/].f_1, 1) && !func_588(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_588(Global_1835011[76 /*74*/].f_1, 1) && !func_588(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_588(Global_1835011[40 /*74*/].f_1, 1) && func_588(Global_1835011[41 /*74*/].f_1, 1)) && !func_588(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_588(Global_1835011[62 /*74*/].f_1, 1) && func_588(Global_1835011[63 /*74*/].f_1, 1)) && !func_588(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_588(Global_1835011[65 /*74*/].f_1, 1) && func_588(Global_1835011[66 /*74*/].f_1, 1)) && !func_588(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_830(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1007(&iParam0);
	if (!func_411(iParam0, 0))
	{
		return false;
	}
	if (!func_656(0))
	{
		bParam3 = true;
	}
	if (func_822(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			sVar0 = { func_996(0) /*4*/ };
			sVar4.f_9 = joaat("SLOTID_NONE");
			if (!func_853(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_854(iParam0, &sVar4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_1002(iParam0, 1))
			{
				if (!func_853(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_854(iParam0, &sVar4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_1008(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_827(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_1006(iParam0))
	{
		iVar28 = func_1009(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(bParam4), iParam0, false);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_831(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(iParam0, &sVar0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (sVar0[iVar42 /*2*/].f_1 == iParam1)
			{
				return sVar0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

int func_832()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

int func_833(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_834(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_120() != -1)
	{
		return;
	}
	iVar0 = func_1010(iParam0);
	fVar1 = func_1011(iParam0);
	if ((Global_1347477.f_117 || !func_344(31)) || !func_1012(iVar0))
	{
		return;
	}
	if (fVar1 <= 0.0f)
	{
		return;
	}
	if (func_1013(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 *= (1.0f + Global_40.f_11095.f_57);
	}
	else if (iVar0 == 0)
	{
		fVar1 *= (1.0f + Global_40.f_11095.f_55);
	}
	else if (iVar0 == 2)
	{
		fVar1 *= (1.0f + Global_40.f_11095.f_56);
	}
	fVar1 *= (float)Global_1347477.f_182;
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1014(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_354(MISC::VAR_STRING(6, func_1015(iParam0), fVar1), "itemtype_textures", func_1016(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_835(int iParam0)
{
	int iVar0;

	iVar0 = func_784(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_836(int iParam0)
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

int func_837(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_783(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

char* func_838(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_646() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1017(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1018(), 12);
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
			else if (func_878() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1019(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_878(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1020(), 13);
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
			else if (func_879() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1021(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_879(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_837(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_839(int iParam0, int iParam1, int iParam2)
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

bool func_840(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_841(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_842(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_1022(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_410(iVar2, 1, 0) || func_1024(func_1023(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_846(func_1022(iVar0))), func_846(func_1022(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_878() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1025(iVar0)), func_1025(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1019() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1025(iVar0)), func_1025(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1025(iVar0)), func_1025(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("EXOTIC_ITEMS"))
		{
			iVar2 = func_889(iParam3, func_1026(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_885(iVar2) - iParam7) >= func_837(iParam3, func_1027(iVar0));
				}
				else
				{
					bVar1 = func_885(iVar2) >= func_837(iParam3, func_1027(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_885(iVar2) + iParam7) >= func_837(iParam3, func_1027(iVar0));
			}
			else
			{
				bVar1 = func_885(iVar2) >= func_837(iParam3, func_1027(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1028(iVar2)), func_1028(iVar2), bVar1, true, false);
		}
		if (iParam2 == joaat("LEGENDARY_FISH"))
		{
			if (func_1029(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("LEGENDARY_FISH"), 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1030(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_1030(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_879() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1031(iVar0)), func_1031(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1021() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1031(iVar0)), func_1031(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1031(iVar0)), func_1031(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_889(iParam3, func_1026(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_885(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1032(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1032(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1033(iVar2)), func_1033(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_843(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1020() >= 13)
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

bool func_844(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_528(func_1034(0)) && ((func_1035(0) == 1 || func_1035(0) == 8) || func_1035(0) == 6))
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

int func_845(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

char* func_846(int iParam0)
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

int func_847(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

void func_848(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_849(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1036(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1037(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1037(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1037(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1038(1);
			break;
		case 34:
			func_1039(1);
			break;
		case 35:
			func_1040(1);
			break;
		case 36:
			break;
		case 37:
			func_1041(0);
			break;
		case 38:
			func_1042(0);
			break;
		case 39:
			func_1043(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && func_585()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_847("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_595(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_585()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_847("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_595(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_585()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_847("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_595(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_585()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_847("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_595(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_120() == -1)
			{
				if (!func_920(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_1044(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_243())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_410(iVar0, 1, 0))
					{
						func_700(iVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_679(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_120() == -1)
			{
				if (!func_410(1013902307, 1, 0))
				{
					func_700(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_120() == -1)
			{
				if (!func_410(1013902307, 1, 0))
				{
					func_700(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_410(142640135, 1, 0))
				{
					func_700(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_120() == -1)
			{
				if (!func_410(786809402, 1, 0))
				{
					func_700(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_120() == -1)
			{
				if (!func_410(786809402, 1, 0))
				{
					func_700(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_410(-518019409, 1, 0))
				{
					func_700(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 23:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1045();
			break;
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_850(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_851(int iParam0)
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

int func_852(int iParam0, int iParam1)
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

bool func_853(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1009(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_854(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1046(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_855(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_411(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_818(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_856(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_1047(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1005(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_656(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_818(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_857(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_1048(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_858(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_210();
	func_211(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_859(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1049(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 -= iVar1;
		}
	}
	return iVar0;
}

bool func_860(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_861(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_862(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_344(50))
			{
				if (!func_344(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_344(51))
			{
				if (!func_344(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_863()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_864(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_411(iParam1, 0))
	{
		return false;
	}
	if (func_581(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_120() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_652(iParam1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		return true;
	}
	iVar4 = func_1050(iParam1);
	if (iVar4 == joaat("MP_COMPONENT_TYPE_END"))
	{
		*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_ITEM_META_TYPE_MISSING");
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_412(iParam1, joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar5 = func_898(iVar4, 1);
		if (func_1051(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (PED::_GET_SHOP_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_SHIRT_DOES_NOT_SUPPORT_NECKTIES");
				return false;
			}
			iVar5 = 10;
			iVar3 = func_652(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_412(iParam1, -1638171711))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_CHAPS_DO_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_2"):
			iVar5 = 36;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOT_DOES_NOT_SUPPORT_SPURS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE"):
			if (func_934(joaat("CI_CATEGORY_WARDROBE_COATS"), &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case joaat("MP_COMPONENT_TYPE_LOADOUT_7"):
		case joaat("MP_COMPONENT_TYPE_LOADOUT_5"):
		case joaat("MP_COMPONENT_TYPE_LOADOUT_6"):
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = func_1052(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1052(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; // curOff = 583
				iVar3 = func_652(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_412(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == joaat("CI_CATEGORY_WARDROBE_CHAPS") || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_1053(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
						return false;
					}
					if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_865()
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), (1.0f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_866()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1.0f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1.0f - fVar0));
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1.0f - fVar0));
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), (1.0f - fVar1));
}

int func_867()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_410(func_1054(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_868(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD"):
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH");
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("PROVISION_BRACELET_SILVER"):
		case joaat("PROVISION_RC_QUARTZ_CHUNK"):
			return joaat("PROVISION_TALISMAN_BEAR_CLAW");
		case joaat("PROVISION_RF_WOOD_COBALT"):
		case joaat("PROVISION_EARRING_GOLD"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("PROVISION_TALISMAN_BOAR_TUSK");
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("PROVISION_EARRING_SILVER"):
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"):
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN");
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW");
	}
	return 0;
}

bool func_869(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_410(iVar0, 1, 0) && func_410(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_870(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("PROVISION_TRINKET_FOX_CLAW");
		case joaat("PROVISION_LIONS_PAW"):
			return joaat("PROVISION_TRINKET_LION_PAW");
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_RAM_HORN");
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("PROVISION_TRINKET_WOLF_HEART");
		default:
			break;
	}
	return 0;
}

bool func_871(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1055(iParam0);
	if (iVar0 != -15)
	{
		func_211(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1056(iVar0, 1);
	}
	return false;
}

void func_872(int iParam0)
{
	Global_40.f_12004.f_6 |= iParam0;
}

void func_873(int iParam0)
{
	Global_40.f_12004.f_1 |= iParam0;
}

void func_874(int iParam0)
{
	Global_40.f_12004.f_3 |= iParam0;
}

void func_875(int iParam0)
{
	Global_40.f_12004.f_5 |= iParam0;
}

int func_876(int iParam0)
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
	switch (iParam0)
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
	iVar1 = func_885(iVar9);
	iVar2 = func_885(iVar10);
	iVar3 = func_885(iVar11);
	iVar5 = func_886(iVar9);
	iVar6 = func_886(iVar10);
	iVar7 = func_886(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_885(iVar12);
		iVar8 = func_886(iVar12);
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
	if (iParam0 != 2)
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

void func_877(int iParam0)
{
	Global_40.f_12004.f_2 |= iParam0;
}

int func_878()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1057(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_879()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

bool func_880(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1032(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1032(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1032(iVar0))
		{
			*sParam2++;
		}
		if (func_1032(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_1032(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1032(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1032(iVar0))
		{
			*sParam2++;
		}
		if (func_1032(iVar1))
		{
			*sParam2++;
		}
		if (func_1032(iVar0) && func_1032(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_1032(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1032(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1032(iVar0))
		{
			*sParam2++;
		}
		if (func_1032(iVar1))
		{
			*sParam2++;
		}
		if (func_1032(iVar2))
		{
			*sParam2++;
		}
		if ((func_1032(iVar0) && func_1032(iVar1)) && func_1032(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1032(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1032(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1032(iVar0))
		{
			*sParam2++;
		}
		if (func_1032(iVar1))
		{
			*sParam2++;
		}
		if (func_1032(iVar2))
		{
			*sParam2++;
		}
		if (func_1032(iVar3))
		{
			*sParam2++;
		}
		if (((func_1032(iVar0) && func_1032(iVar1)) && func_1032(iVar2)) && func_1032(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_881(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_1058(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1059(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1059(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1059(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_1059(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1058(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1059(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1059(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_1059(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1059(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1058(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1059(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_1059(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1059(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1059(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1058(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_1059(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_1059(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_1059(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_1058(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_1060();
			func_1058(iParam0);
			break;
		case joaat("WS_BEECHERS_HOUSE_ABIGAIL3"):
		case joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"):
		case joaat("WS_BEECHERS_HOUSE_DECORATED"):
		case joaat("WS_BEECHERS_HOUSE_FINISHED"):
		case joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"):
		case joaat("WS_BEECHERS_SHACK_WITH_FIRE"):
		case joaat("WS_BEECHERS_SHACK"):
		case joaat("WS_BEECHERS_BARN_FINISHED"):
		case joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"):
		case joaat("WS_BEECHERS_CAMP_WITH_SHACK"):
			func_1061();
			func_1058(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_1059(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_1059(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_1058(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_1059(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_1059(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_1058(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_1059(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_1059(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_1058(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_1059(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_1059(joaat("WS_RHODES_GRAVE_OPEN"));
			func_1058(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_1059(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_1059(joaat("WS_RHODES_GRAVE_OPEN"));
			func_1058(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_1059(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_1059(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_1058(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_1059(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_1058(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_1059(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_1058(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_1059(joaat("WS_UTOPIA_TREE_MISSION"));
			func_1059(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_1059(joaat("WS_UTOPIA_TREE_STUMP"));
			func_1058(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_1059(joaat("WS_UTOPIA_TREE_STANDING"));
			func_1059(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_1059(joaat("WS_UTOPIA_TREE_STUMP"));
			func_1058(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_1059(joaat("WS_UTOPIA_TREE_STANDING"));
			func_1059(joaat("WS_UTOPIA_TREE_MISSION"));
			func_1059(joaat("WS_UTOPIA_TREE_STUMP"));
			func_1058(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_1059(joaat("WS_UTOPIA_TREE_STANDING"));
			func_1059(joaat("WS_UTOPIA_TREE_MISSION"));
			func_1059(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_1058(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_1059(joaat("WS_MICAH_CAMP"));
			func_1059(joaat("WS_MICAH_CAMP_POST"));
			func_1058(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_1059(joaat("WS_MICAH_CAMP_EMPTY"));
			func_1059(joaat("WS_MICAH_CAMP_POST"));
			func_1058(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_1059(joaat("WS_MICAH_CAMP_EMPTY"));
			func_1059(joaat("WS_MICAH_CAMP"));
			func_1058(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_1059(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_1058(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_1059(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_1059(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_761(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_1058(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_1059(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_1059(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_1058(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_1059(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_1058(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_1059(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1058(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_1059(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1058(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_1059(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1058(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_1059(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1058(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_1059(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1059(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1058(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_1059(joaat("WS_NEW_COM_BANK_START"));
			func_1059(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1059(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1059(joaat("WS_NEW_COM_BANK_POST"));
			func_1058(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_1059(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1059(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1059(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1059(joaat("WS_NEW_COM_BANK_POST"));
			func_1058(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_1059(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1059(joaat("WS_NEW_COM_BANK_START"));
			func_1059(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1059(joaat("WS_NEW_COM_BANK_POST"));
			func_1058(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_1059(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1059(joaat("WS_NEW_COM_BANK_START"));
			func_1059(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1059(joaat("WS_NEW_COM_BANK_POST"));
			func_1058(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_1059(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1059(joaat("WS_NEW_COM_BANK_START"));
			func_1059(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1059(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1058(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_1059(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_1059(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_1059(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_1058(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_1059(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_1059(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_1059(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_1058(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_1059(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_1059(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_1059(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_1058(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_1059(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_1059(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_1059(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_1058(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_1058(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1058(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1058(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1059(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1058(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_1058(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_1058(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_1058(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_1058(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1059(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_1058(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_1059(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_1058(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_1059(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_1058(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_1059(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_1058(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_1059(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_1058(0);
			func_1059(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_1059(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_1058(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_1059(0);
			func_1059(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_1058(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_1059(0);
			func_1059(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_1058(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_1059(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_1058(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_1059(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_1058(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_1058(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_1058(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_1058(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1059(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_1058(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_1059(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_1059(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_1059(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_1058(joaat("WS_SHADY_BELLE_ABANDON"));
			func_1059(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_1059(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_1058(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_1059(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_1059(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_1058(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_1059(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_1058(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_1059(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_761(iParam0))
				{
					func_1058(iParam0);
				}
			}
			else if (func_761(iParam0))
			{
				func_1059(iParam0);
			}
			break;
	}
}

void func_882(int iParam0)
{
	if (!func_1062(iParam0))
	{
		func_1064(func_1063(iParam0));
	}
}

int func_883()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1062(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("EXOTIC_ITEMS"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_884(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_885(iVar9);
	iVar2 = func_885(iVar10);
	iVar3 = func_885(iVar11);
	iVar5 = func_886(iVar9);
	iVar6 = func_886(iVar10);
	iVar7 = func_886(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_885(iVar12);
		iVar8 = func_886(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 += iVar5;
		}
		else
		{
			iVar0 += (iVar1 + iParam1);
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 += iVar5;
	}
	else
	{
		iVar0 += iVar1;
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 += iVar6;
		}
		else
		{
			iVar0 += (iVar2 + iParam1);
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 += iVar6;
	}
	else
	{
		iVar0 += iVar2;
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 += iVar7;
		}
		else
		{
			iVar0 += (iVar3 + iParam1);
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 += iVar7;
	}
	else
	{
		iVar0 += iVar3;
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 += iVar8;
			}
			else
			{
				iVar0 += (iVar4 + iParam1);
			}
		}
		else if (iVar4 >= iVar8)
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

int func_885(int iParam0)
{
	int iVar0;

	if (func_410(iParam0, 1, 0))
	{
		iVar0 = func_630(iParam0, 0, 0);
	}
	return iVar0;
}

int func_886(int iParam0)
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

int func_887(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0);
}

void func_888(int iParam0, int iParam1)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, iParam1);
}

int func_889(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_783(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

void func_890(int iParam0, int iParam1, char[4] cParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_889(iParam1, 5) || iParam0 == func_889(iParam1, 6)) || iParam0 == func_889(iParam1, 7)) || iParam0 == func_889(iParam1, 8)) || iParam0 == func_889(iParam1, 9))
	{
		func_880(iParam1, iParam0, &cParam2, 0, iParam3, bParam4);
		func_647(51, 0, 0, iParam1, cParam2, 0, -1, 0);
		func_649(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_891(int iParam0, int iParam1, bool bParam2)
{
	char[] cVar0[8];

	cVar0 = 1;
	if ((((iParam0 == func_889(iParam1, 5) || iParam0 == func_889(iParam1, 6)) || iParam0 == func_889(iParam1, 7)) || iParam0 == func_889(iParam1, 8)) || iParam0 == func_889(iParam1, 9))
	{
		if (func_880(iParam1, iParam0, &cVar0, 0, 0, 0))
		{
			func_647(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_649(51, 0, 0, cVar0, func_837(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_647(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_649(51, 0, 0, cVar0, func_837(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_892()
{
	if (func_835(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_893(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

void func_894(int iParam0)
{
	if (!func_1065(iParam0))
	{
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	}
}

void func_895(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(iParam0, 1);
}

void func_896(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

int func_897(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_1066(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

int func_898(int iParam0, int iParam1)
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

bool func_899(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_1067();
	if (iParam2 == 39)
	{
		sVar0 = { func_826(iParam0, 1, 0) /*5*/ };
		iParam2 = func_898(func_897(sVar0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_412(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && func_1051(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_902((1 << 15)) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_1068(func_1066(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1069(iParam2);
	func_1070(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_1071(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_1071(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_1072(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_1073(iParam0, iParam2, iParam1, func_120() != -1);
	if (bParam4)
	{
		func_1074(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_1074(&(Global_1946054.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946054.f_2589)
		{
			if (Global_1946054.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946054.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_1075(func_1066(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_900(bool bParam0, bool bParam1, bool bParam2)
{
	func_1076(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_901(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_1077((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_1078(sVar0);
}

bool func_902(int iParam0)
{
	return (Global_1946054 & iParam0) != 0;
}

void func_903()
{
	func_1079(&(Global_1946054.f_2776));
	func_1080((1 << 15));
	func_1075(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

int func_904(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_898(iParam0, 1);
	switch (iParam0)
	{
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/] || Global_1946054.f_1378.f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_905(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_1081(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_1082(sVar0);
}

void func_906(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = iParam2;
	sVar0.f_0 = iParam0;
	sVar0.f_2 = iParam1;
	func_1082(sVar0);
}

float func_907()
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

	if (func_1083())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1084(2);
	}
	if (Global_1347477.f_119)
	{
		return func_1084(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1085();
	fVar2 = func_1086();
	fVar3 = func_1087();
	fVar4 = func_1088();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_1089());
	fVar7 = (func_1084(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1090(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1091(3, fVar9, fVar9 > 100.0f);
	return func_1092(fVar7, -100.0f, 100.0f);
}

float func_908()
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

	if (func_1083())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1084(1);
	}
	if (Global_1347477.f_119)
	{
		return func_1084(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1085();
	fVar2 = func_1086();
	fVar3 = func_1087();
	fVar4 = func_1088();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_1089());
	fVar7 = (func_1084(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1090(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1091(2, fVar9, fVar9 > 100.0f);
	return func_1092(fVar7, -100.0f, 100.0f);
}

float func_909()
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

	if (func_1083())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1084(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_1093())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_1094())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_1084(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1085();
	fVar2 = func_1086();
	fVar3 = func_1087();
	fVar4 = func_1088();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_1089());
	fVar7 = (func_1084(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1090(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1091(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_1084(0);
	}
	return func_1092(fVar7, -100.0f, 100.0f);
}

bool func_910(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_911(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_912(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_411(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_830(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_656(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_818(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_913(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return Global_1946054.f_2657.f_21;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return Global_1946054.f_2657.f_23;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return Global_1946054.f_2657.f_22;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			return Global_1946054.f_2657.f_24;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			return Global_1946054.f_2657.f_25;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			if (bParam1)
			{
				return Global_1946054.f_2657.f_20;
			}
			else
			{
				return func_1095();
			}
			break;
	}
	return 0;
}

int func_914(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_FANCY_SUIT"):
			return 14;
		case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
			return 6;
		case joaat("CLOTHING_WINTER_OUTFIT"):
			return 7;
		case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
			return 9;
		case joaat("CLOTHING_ISLAND_OUTFIT"):
			return 10;
		case joaat("CLOTHING_ROBBERY_OUTFIT"):
			return 15;
		case joaat("CLOTHING_HEIST_OUTFIT"):
			return 16;
		case joaat("CLOTHING_POLICE_OUTFIT"):
			return 20;
		case joaat("CLOTHING_CUSTOM_ONE_OUTFIT"):
			return 0;
		case joaat("CLOTHING_OUTFIT_OWNED_001"):
			return 24;
		case joaat("CLOTHING_OUTFIT_OWNED_002"):
			return 25;
		case joaat("CLOTHING_OUTFIT_OWNED_003"):
			return 26;
		case joaat("CLOTHING_OUTFIT_OWNED_005"):
			return 27;
		case joaat("CLOTHING_OUTFIT_OWNED_006"):
			return 28;
		case joaat("CLOTHING_SP_OUTFIT_SONY_001"):
			return 21;
		case joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001"):
			return 22;
		case 1784889667:
			return 13;
		case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"):
			return 8;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_ONE"):
			return 1;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_TWO"):
			return 2;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_THREE"):
			return 3;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR"):
			return 4;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE"):
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER"):
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT"):
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"):
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM"):
			return 65;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L"):
			return 58;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
		case joaat("CLOTHING_SP_NUDE"):
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_915(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_916(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_915(iParam0))
	{
		return;
	}
	if (func_1096(iParam0))
	{
		return;
	}
	if (!func_1097(iParam0))
	{
		func_1098(iParam0, 1, 0);
	}
	iVar0 = func_1099(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1100(iParam0, (1 << 9)))
		{
			func_901(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1101() && !bParam1) && !func_298(0, 0, 1))
	{
		func_1102(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1103(iParam0, 6);
	if (bParam2)
	{
		if (!func_298(0, 0, 1))
		{
			func_733(1, 4);
		}
	}
}

int func_917()
{
	return Global_1946054.f_1;
}

bool func_918(int iParam0, bool bParam1)
{
	return func_913(iParam0, 0) < func_1104(iParam0, bParam1);
}

bool func_919(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_652(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_920(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_898(iParam0, 1) /*3*/] != Global_1946054.f_57[func_898(iParam0, 1) /*11*/];
}

void func_921(int iParam0, int iParam1)
{
	if (func_412(iParam1, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_1105(iParam1, 0);
	}
	else if (func_412(iParam1, 930141731))
	{
		func_1105(iParam1, 1);
		func_1106(iParam0);
	}
}

void func_922(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_FEMALE")) || (iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_MALE"))) || (iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_SKINNING"))) || (iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_NORMAL")))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_923(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> /*112*/ sVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1107(uParam1);
	LOCAL_STORE_S(&uVar0, iParam0);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	sVar1.f_2.f_1 = 10;
	sVar1.f_0 = iParam3;
	sVar1.f_2 = { *uParam1 /*12*/ };
	func_1108(uParam2, iParam0, sVar1);
	return 1;
}

int func_924(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_925(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_926(int iParam0)
{
	var uVar0;

	if (!func_1109(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

bool func_927()
{
	return !Global_1911774;
}

void func_928(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_929(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_930(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_931(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_932(int iParam0)
{
	int iVar0;

	iVar0 = func_898(func_1110(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_933(var uParam0)
{
	if (func_934(joaat("CI_CATEGORY_WARDROBE_MASK"), uParam0))
	{
		return true;
	}
	if (func_934(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), uParam0))
	{
		return true;
	}
	return false;
}

bool func_934(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_898(func_1110(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_652(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

bool func_935()
{
	return Global_1347398.f_1 == 0;
}

void func_936(int iParam0)
{
	Global_1347398.f_1 = iParam0;
}

bool func_937()
{
	return Global_1347398.f_1 == 1000;
}

bool func_938()
{
	return Global_1347398.f_1 == 2000;
}

bool func_939()
{
	return Global_1347398.f_1 == 3000;
}

void func_940(int iParam0)
{
	int iVar0;

	if (func_120() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_214(func_1111(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_1111(iVar0), func_461(), true))
			{
				func_1112(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_941(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_942(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_1113() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_1113();
					}
					func_211(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_207(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_943(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_758(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_759(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_944(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_112(iParam0, (1 << 13)))
	{
		iVar0 = func_759(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_945(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_465(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_946(int iParam0, Vector3 vParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_81(iParam0, (1 << 9)))
	{
		vParam1 = { Global_36 /*3*/ };
	}
	if (func_99(vParam1))
	{
		return;
	}
	if (!func_260(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] /*3*/ };
		if (func_99(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_479(vVar2, vParam1, 1.0f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		Global_17504.f_2084[iVar1 /*5*/] = { vParam1 /*3*/ };
		Global_17504.f_2084[iVar1 /*5*/].f_3 = iParam0;
		Global_17504.f_2084[iVar1 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				Global_17504.f_2084[iVar0 /*5*/] = { vParam1 /*3*/ };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = iParam0;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
			}
			else
			{
				Global_17504.f_2084[iVar0 /*5*/] = { Global_17504.f_2084[iVar0 + 1 /*5*/] /*5*/ };
			}
			iVar0++;
		}
	}
}

void func_947(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_961(iVar0, iParam0);
		iVar0++;
	}
}

int func_948(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_949(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

int func_950(int iParam0)
{
	if (!func_533(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_951(int iParam0)
{
	return (Global_1310750.f_16074 & iParam0) != 0;
}

bool func_952()
{
	return (Global_1894899 & 2) != 0;
}

bool func_953(var uParam0)
{
	return func_15(*uParam0, 1);
}

void func_954(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_1114(iParam1))
		{
			func_1115(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_1116(iParam0, 0, 1);
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
			func_1117(iParam0, 0);
			bVar0 = true;
		}
		func_1118(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_955(int iParam0)
{
	if (func_260(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_956(int iParam0)
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

int func_957(int iParam0, int iParam1)
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

bool func_958(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 & iParam1) != 0;
}

void func_959(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

bool func_960(int iParam0)
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

void func_961(int iParam0, int iParam1)
{
	if (!func_260(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 -= (Global_1310750[iParam0 /*111*/].f_1 & iParam1);
}

bool func_962()
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

void func_963(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_964(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_965(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_1119(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_966(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_1120((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_967(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_984(uParam0[iVar0 /*17*/]))
		{
			func_598(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_968(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_1121(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_195((uParam2[iVar0 /*17*/])->f_6))
		{
			func_598(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_969(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_451(*uParam0);
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

int func_970(var uParam0, int iParam1)
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

void func_971(int* iParam0, int* iParam1)
{
	if (!func_789(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_598(iParam1, 19);
			func_986(iParam0, 23);
			func_1122(iParam1, 2);
		}
	}
}

bool func_972(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_1123(16))
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
					func_1124(16);
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

void func_973(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1121(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_974(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_975(int iParam0)
{
	return func_1125(iParam0, 4) | func_1125(iParam0, 5);
}

int func_976(int iParam0)
{
	return func_1125(iParam0, 7);
}

int func_977(int iParam0)
{
	return func_1125(iParam0, 6);
}

void func_978(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_984(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1121(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_979(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1126(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_804(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_198(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_198(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1127(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_980(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_1128(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1129(iParam1, 1))
	{
		func_1130(iParam1, 1);
		return true;
	}
	return false;
}

void func_981(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_372(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_982(int* iParam0, float fParam1, bool bParam2)
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

void func_983(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203 /*PRF_0x010BCD70*/, true);
	}
}

bool func_984(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_985(int iParam0)
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

void func_986(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_987(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_988(int iParam0, int iParam1)
{
	if (func_120() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_989(int iParam0)
{
	if (func_120() != -1)
	{
		if (func_910(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_910(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_990(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_910(iParam0, (1 << 16)) && !func_910(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_910(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_910(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_991(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_992()
{
	return Global_1905944.f_5694;
}

bool func_993(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & 32) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & 32) != 0;
}

void func_994(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

struct<18> /*144*/ func_995(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> /*32*/ func_996(bool bParam0)
{
	int iVar0;

	iVar0 = func_818(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_855(joaat("CARRIED_WEAPONS"), func_1001(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_855(joaat("CARRIED_WEAPONS"), func_1001(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_855(joaat("CARRIED_WEAPONS"), func_1001(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_997(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_998(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_818(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_999(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_351(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

int func_1000(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_411(iParam0, 0))
	{
		return 0;
	}
	sVar0.f_4 = 15;
	sVar0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &sVar0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = sVar0.f_1;
	return 1;
}

struct<4> /*32*/ func_1001(bool bParam0)
{
	return func_855(joaat("CHARACTER"), func_1131(), joaat("SLOTID_NONE"), bParam0);
}

bool func_1002(int iParam0, bool bParam1)
{
	if (func_652(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_344(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_1003(bool bParam0)
{
	int iVar0;

	iVar0 = func_818(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_855(joaat("EMOTE_ITEM"), func_1001(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_855(joaat("EMOTE_ITEM"), func_1001(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_1004(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_652(iParam0);
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

bool func_1005(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_818(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_1006(int iParam0)
{
	if (func_1132(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_1007(int iParam0)
{
	if (!func_411(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			return 1;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1008(int iParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_411(iParam0, 0))
	{
		return false;
	}
	sVar0 = { func_826(iParam0, 0, 1) /*5*/ };
	iVar5 = joaat("SLOTID_WEAPON_0");
	sVar6.f_9 = joaat("SLOTID_NONE");
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_852((398 + iVar29), 1);
		if (func_853(iParam0, &sVar0, iVar5, 0))
		{
			bVar28 = func_854(iParam0, &sVar6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_1009(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_411(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_855(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_818(bParam6), &sVar0, false);
	return iVar4;
}

int func_1010(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1011(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5.0f;
		case 2:
			return 20.0f;
		case 3:
			return 10.0f;
		case 4:
			return 10.0f;
		case 5:
			return 20.0f;
		case 6:
			return 10.0f;
		case 7:
			return 15.0f;
		case 8:
			return 15.0f;
		case 9:
			return 20.0f;
		case 10:
			return 5.0f;
		case 11:
			return 5.0f;
		case 12:
			return 10.0f;
		case 13:
			return 20.0f;
		case 14:
			return 30.0f;
		case 15:
			return 5.0f;
		case 16:
			return 5.0f;
		case 17:
			return 3.0f;
		case 18:
			return 20.0f;
		case 19:
			return func_1133(iParam0);
		case 20:
			return 25.0f;
		case 21:
			return 50.0f;
		case 22:
			return 100.0f;
		case 23:
			return 150.0f;
		case 24:
			return 20.0f;
		case 25:
			return 10.0f;
		case 26:
			return 20.0f;
		case 27:
			return 20.0f;
		case 28:
			return 20.0f;
		case 29:
			return 20.0f;
		case 30:
			return func_1133(iParam0);
		case 31:
			return 25.0f;
		case 32:
			return 50.0f;
		case 33:
			return 100.0f;
		case 34:
			return 150.0f;
		case 35:
			return 1.0f;
		case 36:
			return 5.0f;
		case 37:
			return 1.0f;
		case 38:
			return 3.0f;
		case 39:
			return 1.0f;
		case 40:
			return 1.0f;
		case 41:
			return 1.0f;
		case 42:
			return 5.0f;
		case 43:
			return 10.0f;
		case 49:
			return 20.0f;
		case 44:
			return 5.0f;
		case 45:
			return 5.0f;
		case 46:
			return 10.0f;
		case 47:
			return 10.0f;
		case 48:
			return 5.0f;
		case 50:
			return func_1133(iParam0);
		case 51:
			return 25.0f;
		case 52:
			return 50.0f;
		case 53:
			return 100.0f;
		case 54:
			return 150.0f;
		case 55:
			return 5.0f;
		default:
			break;
	}
	return 0.0f;
}

bool func_1012(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_344(18);
		case 2:
			return func_344(20);
		case 1:
			return func_344(19);
		default:
			break;
	}
	return true;
}

int func_1013(int iParam0)
{
	return func_1134(Global_40.f_11095.f_11[iParam0]);
}

void func_1014(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_120() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_344(31))
	{
		return;
	}
	iVar0 = func_1013(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1013(iParam0);
	if (func_1135(iParam0) & func_1136(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1137(fVar1, fParam1);
			if (fParam1 > (float)func_1138(iParam0) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_595(func_1139(iParam0), 0);
					}
					func_1140(iParam0, iVar2, iVar3);
					func_1141(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1015(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1016(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("ITEMTYPE_PLAYER_STAMINA");
		case 0:
			return joaat("ITEMTYPE_PLAYER_HEALTH");
		case 2:
			return joaat("ITEMTYPE_PLAYER_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_1017()
{
	return func_1142(Global_40.f_12019);
}

int func_1018()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_836(iVar1);
		if (func_410(iVar2, 1, 0) || func_1024(func_1023(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1019()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1143(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1020()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1029(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("LEGENDARY_FISH"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1021()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_1022(int iParam0)
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

int func_1023(int iParam0)
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

bool func_1024(int iParam0)
{
	return (Global_40.f_12019 & iParam0) != 0;
}

char* func_1025(int iParam0)
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

int func_1026(int iParam0)
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

int func_1027(int iParam0)
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

char* func_1028(int iParam0)
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

bool func_1029(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

char* func_1030(int iParam0)
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

char* func_1031(int iParam0)
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

bool func_1032(int iParam0)
{
	if (func_1144(iParam0) && func_410(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1145(iParam0) & func_1146(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1033(int iParam0)
{
	if (!func_411(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_694(iParam0));
}

int func_1034(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_1035(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_1036(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}
}

void func_1037(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1954819.f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954819.f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954819.f_5.f_1, iParam0);
		if (iVar0 == Global_1954819.f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_1, iParam0, "pause_info_panel_list", Global_1954819.f_5.f_2[iParam0 /*36*/]);
}

void func_1038(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440 /*PCF_0xDBD31C9C*/, !bParam0);
}

void func_1039(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439 /*PCF_0x8519377E*/, !bParam0);
}

void func_1040(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438 /*PCF_0x14013CF9*/, !bParam0);
}

void func_1041(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("HUD_CTX_SP_INTRO_HORSE_ITEMS_RESTRICTED");
	if (bParam0)
	{
		HUD::_ENABLE_HUD_CONTEXT(iVar0);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(iVar0);
	}
}

void func_1042(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

void func_1043(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

int func_1044(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_898(iParam0, 1) /*3*/];
}

void func_1045()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1147();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_655(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_700(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_655(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_700(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_1046(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_818(0);
	*uParam1 = { func_855(iParam0, func_996(0), iParam3, 0) /*4*/ };
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

bool func_1047(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_1048(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1049(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_1050(int iParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_826(iParam0, 1, 0) /*5*/ };
	return func_897(sVar0.f_4);
}

int func_1051(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_412(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_412(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_412(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_412(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_412(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_412(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1052(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_898(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_902((1 << 19)))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				iVar0++;
				break;
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				iVar0++;
				break;
		}
	}
	iVar0 += PED::_0x31B2E7F2E3C58B89(iParam0, joaat("BASE"), iParam2, bParam3);
	return iVar0;
}

bool func_1053(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_HL_PLAYER_BOOT_007_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_009_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_2"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_3"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_4"):
			return true;
		default:
			break;
	}
	return false;
}

int func_1054(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
		case 7:
			return joaat("PROVISION_LIONS_PAW");
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
		case 15:
			return joaat("PROVISION_BRACELET_GOLD");
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK");
		case 18:
			return joaat("PROVISION_BRACELET_SILVER");
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT");
		case 21:
			return joaat("PROVISION_EARRING_GOLD");
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
		case 24:
			return joaat("PROVISION_EARRING_SILVER");
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
		default:
			break;
	}
	return 0;
}

int func_1055(int iParam0)
{
	return func_1148(iParam0, -1);
}

bool func_1056(int iParam0, bool bParam1)
{
	return func_1149(func_210(), iParam0, bParam1);
}

bool func_1057(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

void func_1058(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_957(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40497.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
		MISC::SET_BIT(&(Global_1058888.f_40497[iVar1]), iVar2);
	}
	Global_1934765 = 0;
}

void func_1059(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_957(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40497.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_1060()
{
	func_1059(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_1059(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_1059(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_1059(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_1059(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_1059(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_1059(joaat("WS_COLTER_STAGE_MP"));
}

void func_1061()
{
	func_1059(joaat("WS_BEECHERS_SHACK"));
	func_1059(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_1059(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_1059(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_1059(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_1059(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_1059(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_1059(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_1059(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_1059(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_1062(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_1063(int iParam0)
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

void func_1064(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

bool func_1065(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_1066(int iParam0, int iParam1)
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

void func_1067()
{
	int iVar0;

	Global_1946054.f_1378 = Global_1946054.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946054.f_1378.f_1[iVar0 /*3*/] = { Global_1946054.f_1497.f_1[iVar0 /*3*/] /*3*/ };
		iVar0++;
	}
}

void func_1068(int iParam0)
{
	func_1075(iParam0, 8, 6);
}

void func_1069(int iParam0)
{
	func_1150(&(Global_1946054.f_2589), iParam0);
}

void func_1070(int iParam0, int iParam1)
{
	func_1151(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_1071(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 |= iParam1;
}

void func_1072(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_652(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1152(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_1070(iVar1, iVar3);
		}
	}
	if (func_920(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_1152(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_1070(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case joaat("CI_CATEGORY_WARDROBE_VEST"):
			if (iParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1070(iVar1, iVar3);
					}
				}
			}
			func_1153(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_1153(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1070(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 525
				func_1153(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_1070(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_1070(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 656
				func_1153(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; // curOff = 691
				func_1153(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1070(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 786
				func_1153(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; // curOff = 807
				if (iParam1 == Global_1946054.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1070(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1070(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_652(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1070(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1053(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_652(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1070(iVar1, iVar3);
						}
					}
				}
				Jump @1415; // curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_412(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1070(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 1228
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1070(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_1053(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_412(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1070(iVar1, iVar3);
					}
				}
			}
			switch (func_652(iParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_652(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1070(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_652(uParam0->f_1[iVar1 /*3*/]) || func_412(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1070(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1073(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_1154(0);
	if (iParam2 != 0 && func_1155(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1156(iParam0, func_1066(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1074(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_120() != -1;
	iVar7 = func_1154(0);
	if (func_902((1 << 15)))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = Global_1946054.f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1066(iVar0, 1);
			if (func_1157(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1157(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1052(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_1158(uParam0);
				if (iVar3 > 0)
				{
					if (!func_902((1 << 19)))
					{
						func_1077((1 << 19));
						iVar1 -= iVar8;
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = Global_1946054.f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1066(iVar0, 1);
							if (func_1157(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1157(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1052(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_1070(iVar0, iParam2);
									}
								}
								iVar1 += iVar4;
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1080((1 << 19));
				}
			}
		}
	}
}

void func_1075(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_898(iParam0, 1) /*11*/].f_10 -= (Global_1946054.f_57[func_898(iParam0, 1) /*11*/].f_10 & iParam1);
}

void func_1076(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1159(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_120() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1160(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_1099(0))
		{
			if ((Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9)) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12));
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_1099(Global_40.f_7729);
				Global_1946054.f_1378 = func_1099(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1161(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1162(0, 1);
	}
}

void func_1077(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_1078(struct<4> /*32*/ sParam0)
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
			if (func_1163(sParam0.f_0))
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
			func_1164(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_1077(8);
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
			if (func_1163(sParam0.f_0))
			{
				return;
			}
			func_1164(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_1077(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_906(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

void func_1079(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_RELEASE_METAPED_ASSET_REQUEST(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1080(int iParam0)
{
	Global_1946054 -= (Global_1946054 & iParam0);
}

bool func_1081(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_1082(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_1163(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_1163(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1164(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_1077(8);
}

bool func_1083()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_1084(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_1085()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1165(13);
	iVar1 = func_1166(fVar0);
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

float func_1086()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_1087()
{
	if (func_863())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_1088()
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

float func_1089()
{
	return Global_1954815.f_3;
}

void func_1090(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1167(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_1091(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1167(iParam0, 2, 0, 0);
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

float func_1092(float fParam0, float fParam1, float fParam2)
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

bool func_1093()
{
	return func_1165(12) <= -99.0f;
}

bool func_1094()
{
	return func_1165(12) >= 99.0f;
}

int func_1095()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_652(iVar1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			if (func_1168() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1096(int iParam0)
{
	if (!func_915(iParam0))
	{
		return false;
	}
	if (func_1100(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1097(int iParam0)
{
	if (!func_915(iParam0))
	{
		return false;
	}
	if (func_1100(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1098(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_915(iParam0))
	{
		return;
	}
	if (!func_1097(iParam0))
	{
		func_1103(iParam0, 2);
		if (bParam2)
		{
			if (!func_298(0, 0, 1))
			{
				func_733(1, 4);
			}
		}
		if ((!func_1101() && !bParam1) && !func_298(0, 0, 1))
		{
			func_1102(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_1169(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1099(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return joaat("CLOTHING_FANCY_SUIT");
		case 6:
			return joaat("CLOTHING_GUNSLINGER_OUTFIT");
		case 7:
			return joaat("CLOTHING_WINTER_OUTFIT");
		case 8:
			return joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT");
		case 9:
			return joaat("CLOTHING_WARM_WEATHER_OUTFIT");
		case 10:
			return joaat("CLOTHING_ISLAND_OUTFIT");
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return joaat("CLOTHING_ROBBERY_OUTFIT");
		case 16:
			return joaat("CLOTHING_HEIST_OUTFIT");
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return joaat("CLOTHING_POLICE_OUTFIT");
		case 0:
			return joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
		case 1:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_ONE");
		case 2:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_TWO");
		case 3:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_THREE");
		case 4:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR");
		case 5:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE");
		case 24:
			return joaat("CLOTHING_OUTFIT_OWNED_001");
		case 25:
			return joaat("CLOTHING_OUTFIT_OWNED_002");
		case 26:
			return joaat("CLOTHING_OUTFIT_OWNED_003");
		case 27:
			return joaat("CLOTHING_OUTFIT_OWNED_005");
		case 28:
			return joaat("CLOTHING_OUTFIT_OWNED_006");
		case 21:
			return joaat("CLOTHING_SP_OUTFIT_SONY_001");
		case 22:
			return joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001");
		case 23:
			return joaat("CLOTHING_SP_NUDE");
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER");
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT");
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER");
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM");
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
		case 58:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L");
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
		default:
			break;
	}
	return 0;
}

bool func_1100(int iParam0, int iParam1)
{
	if (!func_915(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] & iParam1) != 0;
}

bool func_1101()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

int func_1102(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_1103(int iParam0, int iParam1)
{
	if (!func_915(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] |= iParam1;
}

int func_1104(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			iVar0 = Global_1946054.f_2657.f_26.f_1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			iVar0 = 1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			iVar0 = Global_1946054.f_2657.f_26.f_2;
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			iVar0 = 1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = Global_1946054.f_2657.f_26;
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			if (iVar0 > 0 && !bParam1)
			{
				iVar0--;
			}
			break;
	}
	return iVar0;
}

void func_1105(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1170(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_651(50);
			}
			else
			{
				func_651(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_651(51);
			}
			else
			{
				func_651(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1171(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_681();
				}
			}
			else
			{
				Global_40.f_11095.f_60 += 0.1f;
				func_681();
			}
			break;
		case 3:
			func_651(24);
			if (bParam1)
			{
				if (!func_1171(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_681();
				}
			}
			break;
	}
}

void func_1106(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1172(0))
			{
				iVar0++;
			}
			if (func_1172(2))
			{
				iVar0++;
			}
			if (func_1172(4))
			{
				iVar0++;
			}
			if (!func_1173(16))
			{
				if (iVar0 == 1)
				{
					func_1174();
					func_595(456, 1);
					func_1175(16);
				}
			}
			if (!func_1173(32))
			{
				if (iVar0 >= 3)
				{
					func_1174();
					func_595(456, 1);
					func_1175(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1172(1))
			{
				iVar0++;
			}
			if (func_1172(3))
			{
				iVar0++;
			}
			if (func_1172(7))
			{
				iVar0++;
			}
			if (!func_1173(1))
			{
				if (iVar0 == 1)
				{
					func_1176();
					func_595(457, 1);
					func_1175(1);
				}
			}
			if (!func_1173(2))
			{
				if (iVar0 >= 3)
				{
					func_1176();
					func_595(457, 1);
					func_1175(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1172(5))
			{
				iVar0++;
			}
			if (func_1172(6))
			{
				iVar0++;
			}
			if (func_1172(8))
			{
				iVar0++;
			}
			if (!func_1173(4))
			{
				if (iVar0 == 1)
				{
					func_1177();
					func_595(455, 1);
					func_1175(4);
				}
			}
			if (!func_1173(8))
			{
				if (iVar0 >= 3)
				{
					func_1177();
					func_595(455, 1);
					func_1175(8);
				}
			}
			break;
	}
}

void func_1107(var uParam0)
{
	func_922(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_922(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_922(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_1108(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_1178(uParam0))
	{
		return;
	}
	if (Global_1223851 < 20)
	{
		Global_1223851++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223851.f_1[iVar0 /*21*/] = { Global_1223851.f_1[iVar0 + 1 /*21*/] /*21*/ };
			iVar0++;
		}
	}
	sVar1.f_7.f_2.f_1 = 10;
	sVar1 = { *uParam0 /*4*/ };
	sVar1.f_4 = iParam1;
	sVar1.f_6 = 1;
	sVar1.f_7 = { sParam2 /*14*/ };
	Global_1223851.f_1[(Global_1223851 - 1) /*21*/] = { sVar1 /*21*/ };
}

bool func_1109(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; // curOff = 56
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
					Jump @230; // curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; // curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; // curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_1110(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_897(iVar0);
}

int func_1111(int iParam0)
{
	if (!func_1179(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_1112(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1180(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_1113()
{
	return Global_1899515;
}

bool func_1114(int iParam0)
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

void func_1115(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1181(iParam0, iParam1))
		{
			if (func_1182(iParam0, iParam1))
			{
				if (func_1183(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1184(iParam0);
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

void func_1116(int iParam0, int iParam1, bool bParam2)
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

void func_1117(int iParam0, bool bParam1)
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

void func_1118(int iParam0, int iParam1)
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

int func_1119(int iParam0)
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

int func_1120(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1121(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_195(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_209(&(iParam1->f_6), 0, 1);
	}
	if (!func_195(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_984(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1185(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_195(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1127(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1186(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1187(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_196(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1186(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_198(iParam1->f_6, 0, 1);
				}
				else
				{
					func_198(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_1122(int* iParam0, int iParam1)
{
	if (!func_597(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_598(iParam0, 14);
		}
	}
}

bool func_1123(int iParam0)
{
	return (Global_22 & iParam0) != 0;
}

void func_1124(int iParam0)
{
	Global_22 |= iParam0;
}

int func_1125(int iParam0, int iParam1)
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

bool func_1126(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1127(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_195(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_424(iParam0);
	func_1186(iParam0, 18, 0, 1);
	func_1186(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_1128(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_195(iParam0))
	{
		return false;
	}
	iVar0 = func_424(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_1129(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_195(iParam0))
	{
		return false;
	}
	iVar0 = func_424(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_1130(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_424(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

struct<4> /*32*/ func_1131()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_1132(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(iParam0, iParam1);
}

float func_1133(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1010(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1134(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1188(iVar6) - func_1188(iVar5));
			fVar2 = ((float)iVar1 * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1.0f;
}

int func_1134(float fParam0)
{
	if (fParam0 <= (float)-1)
	{
		return -1;
	}
	if (fParam0 < (float)50)
	{
		return 0;
	}
	if (fParam0 < (float)100)
	{
		return 1;
	}
	if (fParam0 < (float)200)
	{
		return 2;
	}
	if (fParam0 < (float)350)
	{
		return 3;
	}
	if (fParam0 < (float)550)
	{
		return 4;
	}
	if (fParam0 < (float)800)
	{
		return 5;
	}
	if (fParam0 < (float)1100)
	{
		return 6;
	}
	return 7;
}

int func_1135(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1136(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1137(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1134(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1188(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1188(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4.0f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4.0f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_1138(int iParam0)
{
	int iVar0;

	if (func_1189(iParam0, &iVar0))
	{
		return func_1188(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1190())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1190())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1190())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_1139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_1140(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> /*48*/ sVar10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 += func_1191(iParam0);
	sVar4 = func_1193(func_1192(iVar3, iParam2));
	sVar6 = func_1194(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_1195(iParam0));
	iVar8 = func_1196(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		sVar10.f_0 = sVar7;
		sVar10.f_1 = sVar1;
		sVar10.f_3 = iVar9;
		sVar10.f_2 = iVar8;
		sVar10.f_4 = 1;
		sVar10.f_5 = func_1197(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&sVar10);
	}
	func_845(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_1198(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1141(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_1142(int iParam0)
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

bool func_1143(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_1144(int iParam0)
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

int func_1145(int iParam0)
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

int func_1146(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1199(&iVar0, 0, iVar95, &sVar1) && !func_1199(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_1200(iVar0, &sVar1);
			if (func_411(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1147()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_1201(Global_35, &iVar0);
	sVar30 = { func_1001(0) /*4*/ };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &sVar30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, joaat("REMOVE_REASON_DEFAULT"));
	func_1202(0);
	func_1203(7);
	func_1204(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_917() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		func_1204(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_1204(joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"), 1, 1, 1);
	}
	func_1205(Global_35, &iVar0);
}

int func_1148(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_818(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_716(&uVar6, iVar0);
	func_717(&uVar6, iVar1);
	func_718(&uVar6, iVar2);
	func_719(&uVar6, iVar3);
	func_720(&uVar6, iVar4);
	func_721(&uVar6, iVar5);
	return uVar6;
}

bool func_1149(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_722(iParam1) || !func_722(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1150(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;
	struct<2> /*16*/ sVar4;

	sVar2 = 39;
	sVar4 = 10;
	sVar4.f_1 = 39;
	sVar4.f_1.f_2 = 39;
	sVar4.f_1.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1206(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			else
			{
				if (func_1206(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1207(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				sVar4[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] /*2*/ };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar4[iVar0 /*2*/] /*2*/ };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_1151(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1208(uParam0, 1))
	{
		func_1209(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_1152(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1) != 0;
}

void func_1153(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3 /*3*/].f_1 == 1216705912 || uParam0->f_1[iVar3 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
		}
		else
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
			uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
		}
		if (bParam2)
		{
			func_1070(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1070(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_1070(iVar2, iVar0);
		}
	}
}

int func_1154(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_917();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1155(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1156(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_1157(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_898(iParam0, 1) /*11*/].f_10 & iParam1) != 0;
}

int func_1158(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1159(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] /*3*/ };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_120() == -1)
	{
		func_1210(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_1211(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1160(int iParam0, int iParam1)
{
	if (func_120() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1 /*120*/] & iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] & iParam0) != 0;
	}
	return false;
}

void func_1161(int iParam0, bool bParam1, int iParam2)
{
	func_1212(&(Global_1946054.f_1378), iParam0);
	func_1213(2, iParam0, 6);
	if (bParam1)
	{
		func_1162(0, 1);
	}
}

void func_1162(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1214(0);
	}
	if (bParam0)
	{
		func_1077(8);
		func_1077((1 << 9));
	}
	else
	{
		func_1077(8);
		func_1077(16);
	}
}

bool func_1163(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_1164(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

float func_1165(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_1166(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1167(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_929(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_929(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1168()
{
	return Global_1946054.f_1497;
}

char* func_1169(int iParam0)
{
	int iVar0;

	iVar0 = func_1099(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1033(iVar0);
}

int func_1170(int iParam0)
{
	int iVar0;

	if (func_1215(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1216(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1217(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1218(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1171(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_410(func_1219(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_1172(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_410(func_1220(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_1173(int iParam0)
{
	return (Global_40.f_12003 & iParam0) != 0;
}

void func_1174()
{
	int iVar0;

	if (func_120() != -1)
	{
		return;
	}
	func_700(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_1013(1);
	func_1140(1, iVar0, 0);
}

void func_1175(int iParam0)
{
	Global_40.f_12003 |= iParam0;
}

void func_1176()
{
	int iVar0;

	if (func_120() != -1)
	{
		return;
	}
	func_700(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_1013(2);
	func_1140(2, iVar0, 0);
}

void func_1177()
{
	int iVar0;

	if (func_120() != -1)
	{
		return;
	}
	func_700(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_1013(0);
	func_1140(0, iVar0, 0);
}

bool func_1178(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_1179(int iParam0)
{
	return iParam0 > -1;
}

bool func_1180(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_1181(int iParam0, int iParam1)
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

bool func_1182(int iParam0, int iParam1)
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

bool func_1183(int iParam0, int iParam1)
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
	if (!func_1181(iParam0, iVar0))
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

void func_1184(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_1185(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_714(iVar0, 2))
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
				func_1221(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1186(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_424(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_1187(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_195(iParam0))
	{
		return;
	}
	iVar0 = func_424(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_1188(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_1189(int iParam0, int iParam1)
{
	return false;
}

bool func_1190()
{
	return false;
}

int func_1191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(0), joaat("UPGRADE_HEALTH_TANK_1"), false);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(0), joaat("UPGRADE_STAMINA_TANK_1"), false);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_818(0), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}
	return 0;
}

struct<4> /*32*/ func_1192(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	strcpy_s(&cVar0, 32, "TOAST_RPG_LEVEL_");
	StringIntConCat(&cVar0, iParam0, 32);
	strcat_s(&cVar0, 32, "_");
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_1193(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1194(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1195(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1196(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("TOAST_RPG_LEVEL_STAMINA");
		case 0:
			return joaat("TOAST_RPG_LEVEL_HEALTH");
		case 2:
			return joaat("TOAST_RPG_LEVEL_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_1197(int iParam0)
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

int func_1198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("STATS_HEALTH");
		case 1:
			return joaat("STATS_STAMINA");
		case 2:
			return joaat("STATS_DEADEYE");
		default:
			break;
	}
	return 0;
}

bool func_1199(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_1222(iParam1) && !func_1223(iParam1))
	{
		iVar0 = func_1224(iParam1);
	}
	else
	{
		return false;
	}
	func_1225(uParam3);
	iVar5 = func_1226(iParam2);
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

void func_1200(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1227(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1228(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1201(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::COPY_SCRIPT_STRUCT(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_511(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1202(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_411(iVar1, 0))
		{
			func_1229(iVar1, 0, bParam0);
		}
		Global_1946054.f_2657[iVar0] = 0;
		iVar0 += -1;
	}
	Global_1946054.f_2657.f_20 = 0;
	Global_1946054.f_2657.f_21 = 0;
	Global_1946054.f_2657.f_22 = 0;
	Global_1946054.f_2657.f_23 = 0;
	Global_1946054.f_2657.f_24 = 0;
	Global_1946054.f_2657.f_25 = 0;
	Global_1946054.f_2657.f_19 = 0;
	Global_1946054.f_2657.f_26.f_6 = 0;
}

void func_1203(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_120() == -1)
	{
		func_1230(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946054.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946054.f_2657.f_20 = Global_26796.f_20;
		Global_1946054.f_2657.f_21 = Global_26796.f_21;
		Global_1946054.f_2657.f_22 = Global_26796.f_22;
		Global_1946054.f_2657.f_23 = Global_26796.f_23;
		Global_1946054.f_2657.f_24 = Global_26796.f_24;
		Global_1946054.f_2657.f_25 = Global_26796.f_25;
		Global_1946054.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946054.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946054.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946054.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946054.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946054.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946054.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946054.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946054.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar2 = Global_1946054.f_2657[iVar0];
		if (func_652(iVar2) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_1231(&(Global_1946054.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1232(iVar2, 0))
		{
			func_1233(iVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1204(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1234(iParam0))
	{
		return;
	}
	iVar0 = func_652(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar1 = func_1235(iParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar1 = func_1235(iParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar1 = func_1235(iParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar1 = func_1235(iParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar1 = func_1235(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar1 = func_1235(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1236(0))
	{
		func_1237(iParam0, 1);
		if (func_917() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			func_1237(func_1236(joaat("MPC_PLAYER_TYPE_SP_ARTHUR")), 0);
		}
		else
		{
			func_1237(func_1236(joaat("MPC_PLAYER_TYPE_SP_MARSTON")), 0);
		}
	}
	func_1238();
	if (func_1239(iVar0))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_818(0), iParam0, 0);
	}
	func_1233(iParam0, bParam3);
	if (bParam2)
	{
		func_1162(0, 0);
	}
}

void func_1205(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if ((*iParam1)[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, (*iParam1)[iVar0], 0, false))
			{
				if (func_851((*iParam1)[iVar0]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam0, (*iParam1)[iVar0], 0, false, false, 0, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != (*iParam1)[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, (*iParam1)[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1206(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_1207(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

bool func_1208(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_1209(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

void func_1210(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1211(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1212(var uParam0, int iParam1)
{
	int iVar0;

	if (func_120() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1210(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1211(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_1213(int iParam0, int iParam1, int iParam2)
{
	if (func_120() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1 /*120*/] |= iParam0;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] |= iParam0;
	}
}

void func_1214(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

bool func_1215(int iParam0)
{
	if (!func_411(iParam0, 0))
	{
		return false;
	}
	if (func_412(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1216(int iParam0)
{
	if (!func_411(iParam0, 0))
	{
		return false;
	}
	if (func_412(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1217(int iParam0)
{
	if (!func_411(iParam0, 0))
	{
		return false;
	}
	if (func_412(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT_HOLSTER")))
	{
		return true;
	}
	return false;
}

bool func_1218(int iParam0)
{
	if (!func_411(iParam0, 0))
	{
		return false;
	}
	if (func_412(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT_OFFHAND")))
	{
		return true;
	}
	return false;
}

int func_1219(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1240(iParam0);
		case 1:
			return func_1241(iParam0);
		case 2:
			return func_1242(iParam0);
		case 3:
			return func_1243(iParam0);
	}
	return 0;
}

int func_1220(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1244(iParam0);
		case 1:
			return func_1245(iParam0);
		case 2:
			return func_1246(iParam0);
		case 3:
			return func_1247(iParam0);
		case 4:
			return func_1248(iParam0);
		case 5:
			return func_1249(iParam0);
		case 6:
			return func_1250(iParam0);
		case 7:
			return func_1251(iParam0);
		case 8:
			return func_1252(iParam0);
	}
	return 0;
}

void func_1221(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_426(iParam0, 1);
	func_427(iParam0, 1);
	func_428(iParam0, 128);
}

bool func_1222(int iParam0)
{
	iParam0 = func_1253(iParam0);
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

bool func_1223(int iParam0)
{
	int iVar0;

	iParam0 = func_1253(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1222(iParam0))
	{
		return false;
	}
	iVar0 = func_1224(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_1224(int iParam0)
{
	iParam0 = func_1253(iParam0);
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

void func_1225(var uParam0)
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

int func_1226(int iParam0)
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

void func_1227(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1228(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1229(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_652(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar0 = func_1254(iParam0, &(Global_1946054.f_2657.f_21));
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar0 = func_1254(iParam0, &(Global_1946054.f_2657.f_23));
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar0 = func_1254(iParam0, &(Global_1946054.f_2657.f_20));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar0 = func_1254(iParam0, &(Global_1946054.f_2657.f_22));
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar0 = func_1254(iParam0, &(Global_1946054.f_2657.f_24));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar0 = func_1254(iParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1238();
	}
	if (bParam1)
	{
		func_1162(0, 0);
	}
}

void func_1230(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<18> /*144*/ sVar2;

	sVar2 = -1;
	sVar2.f_1 = -1;
	sVar2.f_2 = -1;
	sVar2.f_3 = -1;
	sVar2.f_4 = -1;
	sVar2.f_5 = -1;
	sVar2.f_6 = -1;
	sVar2.f_7 = -1;
	sVar2.f_8 = -1;
	sVar2.f_13 = -1;
	sVar2.f_14 = -1;
	sVar2.f_15 = -1;
	sVar2.f_16 = -1;
	sVar2.f_17 = -1;
	sVar2 = { func_995(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) /*18*/ };
	if (func_998(&sVar2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946054.f_2657.f_26.f_2 = 5;
					Global_1946054.f_2657.f_26.f_1 = 5;
					Global_1946054.f_2657.f_26 = 5;
					break;
			}
		}
		func_816(iVar0);
	}
}

void func_1231(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1255(iParam2, *uParam0);
	func_1256(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1232(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_826(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_855(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_1009(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_818(0), &sVar5, bParam1);
	return true;
}

void func_1233(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_826(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_855(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_1009(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_818(0), &sVar5, bParam1);
}

bool func_1234(int iParam0)
{
	if (func_120() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == joaat("CLOTHING_WINTER_OUTFIT"))
			{
				return false;
			}
		}
	}
	return true;
}

int func_1235(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946054.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1257(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1232(iParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = iVar1;
	if (func_652(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_1231(&(Global_1946054.f_2657.f_26.f_26), iParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1236(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_917();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_1237(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_826(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_855(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_1009(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(bParam1, func_818(0), &sVar5);
	return 1;
}

void func_1238()
{
	int iVar0;

	if (func_120() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_2657.f_19)
		{
			Global_26796[iVar0] = Global_1946054.f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946054.f_2657.f_20;
		Global_26796.f_21 = Global_1946054.f_2657.f_21;
		Global_26796.f_22 = Global_1946054.f_2657.f_22;
		Global_26796.f_23 = Global_1946054.f_2657.f_23;
		Global_26796.f_24 = Global_1946054.f_2657.f_24;
		Global_26796.f_19 = Global_1946054.f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = Global_1946054.f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946054.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946054.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946054.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946054.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946054.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946054.f_2657.f_19;
}

bool func_1239(int iParam0)
{
	return func_1259(func_1258(iParam0));
}

int func_1240(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1241(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		default:
			break;
	}
	return 0;
}

int func_1245(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		default:
			break;
	}
	return 0;
}

int func_1246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		default:
			break;
	}
	return 0;
}

int func_1247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		default:
			break;
	}
	return 0;
}

int func_1248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		default:
			break;
	}
	return 0;
}

int func_1249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		default:
			break;
	}
	return 0;
}

int func_1250(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		default:
			break;
	}
	return 0;
}

int func_1251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		default:
			break;
	}
	return 0;
}

int func_1252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1253(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1254(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1257(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_652(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_1260(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19--;
	*uParam1--;
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_652(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_1260(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_1232(iParam0, 1);
	return 1;
}

void func_1255(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1256(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_IS_METAPED_ASSET_VALID(uParam0->f_3.f_1))
	{
		func_1261(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_898(func_1050(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1262(uParam0);
	}
}

bool func_1257(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (iParam0 == Global_1946054.f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_1258(int iParam0)
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

bool func_1259(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 & iParam0) != 0;
}

void func_1260(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1263(iParam1);
	func_1264(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1265(&(uParam0->f_26), iVar1);
		if (func_1266(uParam0->f_26, &iVar0))
		{
			func_1267(iVar0, iVar1);
		}
	}
}

void func_1261(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1268(&(uParam0->f_3));
}

void func_1262(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1269(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_1263(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_1264(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1265(var uParam0, int iParam1)
{
	*uParam0--;
	func_1261(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] /*5*/ };
}

bool func_1266(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1267(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1268(var uParam0)
{
	if (*uParam0 && PED::_IS_METAPED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_METAPED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1269(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1270(func_917());
	if (*uParam0)
	{
		func_1268(uParam0);
	}
	uParam0->f_1 = PED::_REQUEST_METAPED_COMPONENT(iVar0, uParam1, 0, func_120() != -1, iParam2);
	*uParam0 = 1;
}

int func_1270(int iParam0)
{
	if (func_120() == -1)
	{
		switch (iParam0)
		{
			case joaat("MPC_PLAYER_TYPE_SP_ARTHUR"):
				return 0;
			case joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"):
				return 0;
			case joaat("MPC_PLAYER_TYPE_SP_MARSTON"):
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
		default:
			break;
	}
	return 0;
}

