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
	Vector3 vLocal_14 = { 0.0f, 0.0f, 1.401298E-45.0f };
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = -1;
	var uLocal_30 = 0;
	var uLocal_31 = -1;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = -1;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 1073741824;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 1;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1106247680;
	var uLocal_55 = 1067450368;
	var uLocal_56 = 0;
	var uLocal_57 = 1092616192;
	var uLocal_58 = 1112014848;
	var uLocal_59 = 1106247680;
	var uLocal_60 = 1101529088;
	var uLocal_61 = 1101004800;
	var uLocal_62 = 1084227584;
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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<17> /*136*/ sLocal_89[1];
	struct<2907> /*23256*/ sLocal_107 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = 0;
#pragma endregion

void __EntryFunction__()
{
	bool bVar0;
	struct<4> /*32*/ sVar1;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (func_1(sLocal_107.f_0))
		{
			func_2(&Global_1935630, (1 << 15));
		}
		func_3(&sLocal_107, 1);
	}
	func_4(&uScriptParam_0, &sLocal_107);
	while (!func_5(&sLocal_107, 1))
	{
		if (func_6(&sLocal_107) != 10)
		{
			if ((func_6(&sLocal_107) == 3 || func_6(&sLocal_107) == 4) && (!func_7(&sLocal_107) || func_8(&(sLocal_107.f_958)) > 0))
			{
				func_9(&sLocal_107, func_5(&sLocal_107, (1 << 26)));
				bVar0 = true;
			}
			if ((!bVar0 && func_10(&sLocal_107)) && func_5(&sLocal_107, (1 << 16)))
			{
				func_9(&sLocal_107, 1);
			}
		}
		if (func_6(&sLocal_107) >= 3 && func_6(&sLocal_107) <= 7)
		{
			func_11(&sLocal_107);
		}
		if (((((func_6(&sLocal_107) >= 5 && func_6(&sLocal_107) <= 7) && !func_5(&sLocal_107, (1 << 12))) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_107.f_428.f_444)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_107.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(sLocal_107.f_428.f_444))
		{
			MemCopy(&sVar1, {func_12(sLocal_107.f_0)}, 4);
			func_13(sVar1, &(sLocal_107.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (func_6(&sLocal_107))
		{
			case 8:
				if (func_14(&sLocal_107))
				{
					func_15(&sLocal_107);
					func_16(&sLocal_107);
					func_17(&sLocal_107, 0);
				}
				else if (!func_10(&sLocal_107))
				{
					if (!func_18(&(sLocal_107.f_2899)))
					{
						func_19(&(sLocal_107.f_2899), 0);
					}
					if (!func_20(&sLocal_107))
					{
						if (func_21(&(sLocal_107.f_2899)) >= 1.0f)
						{
							func_22(sLocal_107.f_2889, (1 << 21));
							func_23(&sLocal_107);
							func_24(&sLocal_107);
							func_17(&sLocal_107, 10);
						}
					}
					else
					{
						if (!func_5(&sLocal_107, (1 << 29)))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&sLocal_107, (1 << 29));
						}
						func_26(&(sLocal_107.f_2899));
					}
				}
				break;
			case 0:
				if (func_10(&sLocal_107))
				{
					func_16(&sLocal_107);
				}
				if (!func_10(&sLocal_107) || func_5(&sLocal_107, (1 << 16)))
				{
					if (func_27(&sLocal_107))
					{
						func_17(&sLocal_107, 1);
					}
				}
				break;
			case 1:
				if (func_10(&sLocal_107))
				{
					func_16(&sLocal_107);
				}
				if (func_28(&sLocal_107))
				{
					func_17(&sLocal_107, 2);
				}
				break;
			case 2:
				if (func_10(&sLocal_107))
				{
					func_16(&sLocal_107);
				}
				if (func_29(&sLocal_107))
				{
					if (!func_7(&sLocal_107) || func_10(&sLocal_107))
					{
						if (!func_30(sLocal_107.f_2889))
						{
							sLocal_107.f_2889 = func_32(func_31(sLocal_107.f_0));
						}
						func_22(sLocal_107.f_2889, 4);
						func_25(&sLocal_107, (1 << 13));
					}
					if (func_10(&sLocal_107))
					{
						func_33(&sLocal_107);
						func_17(&sLocal_107, 9);
					}
					else
					{
						func_17(&sLocal_107, 3);
					}
				}
				break;
			case 9:
				if (func_16(&sLocal_107))
				{
					func_34(&sLocal_107);
					func_15(&sLocal_107);
					func_35(&sLocal_107);
					if (!func_5(&sLocal_107, 256))
					{
						func_36(&sLocal_107);
						func_37(sLocal_107.f_0);
						func_38(&sLocal_107);
						func_17(&sLocal_107, 7);
					}
					else
					{
						func_17(&sLocal_107, 5);
					}
				}
				break;
			case 3:
				if (!func_5(&sLocal_107, (1 << 13)))
				{
					if (func_8(&(sLocal_107.f_958)) != 3)
					{
					}
					else
					{
						func_22(sLocal_107.f_2889, 4);
						func_25(&sLocal_107, (1 << 13));
					}
				}
				func_39(&sLocal_107);
				if (func_40(func_32(Global_1835011[sLocal_107.f_0 /*74*/].f_1), (1 << 9)))
				{
				}
				else if (func_41(&sLocal_107) || func_42(&sLocal_107, (1 << 15)))
				{
					func_34(&sLocal_107);
					func_15(&sLocal_107);
					func_17(&sLocal_107, 4);
					func_19(&(sLocal_107.f_2890), 0);
				}
				else if (func_10(&sLocal_107) && !func_1(sLocal_107.f_0))
				{
					if (!func_18(&(sLocal_107.f_2899)))
					{
						func_19(&(sLocal_107.f_2899), 0);
					}
					if (!func_20(&sLocal_107))
					{
						if (func_21(&(sLocal_107.f_2899)) >= 1.0f)
						{
							func_22(sLocal_107.f_2889, (1 << 21));
							func_23(&sLocal_107);
							func_24(&sLocal_107);
							func_17(&sLocal_107, 10);
						}
					}
					else
					{
						if (!func_5(&sLocal_107, (1 << 29)))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&sLocal_107, (1 << 29));
						}
						func_26(&(sLocal_107.f_2899));
					}
				}
				break;
			case 4:
				func_43(&sLocal_107);
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, true);
				if (func_44(&sLocal_107) || (func_42(&sLocal_107, (1 << 15)) && !func_5(&sLocal_107, (1 << 28))))
				{
					func_35(&sLocal_107);
					if (!func_5(&sLocal_107, 256))
					{
						func_36(&sLocal_107);
						func_38(&sLocal_107);
						if (!func_45(Global_1935630, (1 << 19)) || func_42(&sLocal_107, (1 << 19)))
						{
							func_37(sLocal_107.f_0);
							func_17(&sLocal_107, 7);
						}
						else
						{
							func_17(&sLocal_107, 6);
						}
					}
					else
					{
						func_37(sLocal_107.f_0);
						func_17(&sLocal_107, 5);
					}
				}
				break;
			case 5:
				func_46(&sLocal_107);
				func_47(&sLocal_107);
				if (func_48(&(sLocal_107.f_2884)) >= func_49(&sLocal_107))
				{
					func_36(&sLocal_107);
					func_38(&sLocal_107);
					func_26(&(sLocal_107.f_2884));
					if (!func_42(&sLocal_107, (1 << 19)))
					{
						func_37(sLocal_107.f_0);
						func_17(&sLocal_107, 7);
					}
					else
					{
						func_17(&sLocal_107, 6);
					}
				}
				break;
			case 6:
				if (!func_18(&(sLocal_107.f_2906)))
				{
					func_19(&(sLocal_107.f_2906), 0);
				}
				if ((func_50(&(sLocal_107.f_428)) == 4 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_107.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(sLocal_107.f_428.f_444))
				{
					func_37(sLocal_107.f_0);
					func_17(&sLocal_107, 7);
				}
				else if (func_48(&(sLocal_107.f_2906)) >= 5.0f)
				{
					func_37(sLocal_107.f_0);
					func_17(&sLocal_107, 7);
				}
				break;
			case 7:
				func_51(&sLocal_107);
				if (func_52(&sLocal_107))
				{
					func_17(&sLocal_107, 10);
				}
				break;
			case 10:
				if (func_3(&sLocal_107, 0))
				{
					func_25(&sLocal_107, 1);
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(int iParam0)
{
	int iVar0;

	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return false;
	}
	return func_40(iVar0, (1 << 10));
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_3(int iParam0, bool bParam1)
{
	iParam0->f_2902 = bParam1;
	if (!func_53(iParam0) && !bParam1)
	{
		return false;
	}
	func_54(iParam0);
	func_55(iParam0);
	func_56(iParam0);
	func_57(iParam0);
	func_58(iParam0);
	func_59(*iParam0);
	func_60(*iParam0);
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	}
	if (!Global_1935630.f_12)
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
	}
	if (func_5(iParam0, (1 << 10)))
	{
		func_61(1);
		func_2(&Global_1935630, (1 << 15));
	}
	else
	{
		func_62();
	}
	if (bParam1)
	{
		if (func_63(&(iParam0->f_958), 33554436) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		func_64(&(iParam0->f_958));
	}
	func_65(iParam0, 0);
	if (func_5(iParam0, (1 << 29)))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		func_66(iParam0, (1 << 29));
	}
	if (bParam1)
	{
		func_67(1, 0, 0);
	}
	if (func_5(iParam0, (1 << 31)))
	{
		func_68();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_4(var uParam0, int iParam1)
{
	Vector3 vVar0;

	*iParam1 = *uParam0;
	PED::_RESERVE_AMBIENT_PEDS(10);
	iParam1->f_2889 = func_32(func_31(*uParam0));
	func_69(iParam1);
	if (func_10(iParam1))
	{
		func_70(&(iParam1->f_428));
		func_71(iParam1);
		func_25(iParam1, (1 << 24));
		func_17(iParam1, 8);
	}
	else
	{
		func_17(iParam1, 0);
	}
	if (!func_5(iParam1, (1 << 30)))
	{
		func_72(*iParam1);
		func_73(*iParam1);
	}
	vVar0 = { func_12(*iParam1) /*3*/ };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		func_25(iParam1, (1 << 27));
	}
	func_19(&(iParam1->f_2896), 0);
	return 1;
}

bool func_5(int iParam0, int iParam1)
{
	return iParam0->f_2 & iParam1 != 0;
}

int func_6(int iParam0)
{
	return iParam0->f_1;
}

bool func_7(int iParam0)
{
	if (func_5(iParam0, 16))
	{
		return false;
	}
	return func_5(iParam0, (1 << 19));
}

int func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(int iParam0, bool bParam1)
{
	Vector3 vVar0[24];

	if (!CAM::IS_SCREEN_FADED_OUT() && !func_5(iParam0, 4))
	{
		if (func_48(&(iParam0->f_2896)) <= 0.5f)
		{
			return;
		}
		func_26(&(iParam0->f_2896));
		if ((func_74(0, 0, 1) && !func_5(iParam0, (1 << 16))) && !func_40(iParam0->f_2889, (1 << 10)))
		{
			return;
		}
	}
	if (func_5(iParam0, 128))
	{
		return;
	}
	if (func_5(iParam0, (1 << 27)))
	{
		if (!func_5(iParam0, (1 << 24)))
		{
			func_75(iParam0, 16);
			if (func_7(iParam0))
			{
				func_76(iParam0);
			}
			func_25(iParam0, (1 << 24));
		}
		cVar0 = { func_12(*iParam0) /*3*/ };
		if (func_77(&(iParam0->f_428), &cVar0, bParam1, 0))
		{
			if (!func_40(iParam0->f_2889, 128))
			{
				func_22(iParam0->f_2889, 128);
			}
		}
		else if (func_40(iParam0->f_2889, 128))
		{
			func_78(iParam0->f_2889, 128);
		}
	}
}

bool func_10(int iParam0)
{
	if (func_5(iParam0, (1 << 16)))
	{
		return true;
	}
	if (!func_79(&(Global_1835011[*iParam0 /*74*/])))
	{
		return true;
	}
	return false;
}

void func_11(int iParam0)
{
	int iVar0;

	if (!func_18(&(iParam0->f_2893)))
	{
		func_19(&(iParam0->f_2893), 0);
	}
	if (func_48(&(iParam0->f_2893)) >= 1.0f)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
		{
			iVar0 = func_80(7);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (!func_5(iParam0, (1 << 9)))
				{
					PED::_ADD_PED_STAY_OUT_VOLUME(iVar0, iParam0->f_425);
					func_25(iParam0, (1 << 9));
				}
			}
			else if (func_5(iParam0, (1 << 9)))
			{
				func_66(iParam0, (1 << 9));
			}
		}
		func_26(&(iParam0->f_2893));
	}
}

Vector3 func_12(int iParam0)
{
	Vector3 vVar0;

	if (!func_81(iParam0))
	{
		return vVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_9;
}

int func_13(char[4] cParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	func_82(uParam4, &cParam0);
	if (func_83(uParam4, 2) && !func_83(uParam4, (1 << 26)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (func_50(uParam4) != 1)
	{
		func_84(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E((1 << 12), 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, true);
	switch (func_50(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_444, false))
				{
					func_85(uParam4, &cParam0);
				}
				else if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
				{
					func_86(uParam4, 4);
					return 0;
				}
				else if (func_87(uParam4, 2))
				{
					Stack.Invoke(uParam4->f_437, uParam4);
				}
				func_86(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_446)) && func_83(uParam4, (1 << 27)))
				{
				}
				else
				{
					func_70(uParam4);
				}
				func_26(&(uParam4->f_1));
				func_86(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_88(uParam4);
				if (!func_18(&(uParam4->f_1)))
				{
					func_19(&(uParam4->f_1), 0);
				}
				else if (func_48(&(uParam4->f_1)) >= 60.0f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (func_77(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
					{
						func_86(uParam4, 4);
					}
					else if (!func_90(func_89(uParam4)) && !func_91(Global_35, func_89(uParam4), 100.0f, 1, 1))
					{
						func_92(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_89(uParam4), 0.0f, true, true, true, false);
					}
				}
				else if (func_48(&(uParam4->f_1)) >= 60.0f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_93(1, 0);
					func_85(uParam4, &cParam0);
					func_86(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_48(&(uParam4->f_1)) >= 60.0f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
				}
				func_86(uParam4, 4);
			}
			break;
		case 3:
			func_94(uParam4);
			if (func_87(uParam4, 2))
			{
				Stack.Invoke(uParam4->f_437, uParam4);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_444, false)) && (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444) || func_83(uParam4, (1 << 9))))
			{
				if (!func_83(uParam4, (1 << 10)) && func_95(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
				}
				if (!func_83(uParam4, (1 << 9)))
				{
					func_26(&(uParam4->f_1));
					func_96(uParam4, (1 << 9));
					func_86(uParam4, 4);
				}
				else if (func_83(uParam4, (1 << 19)))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_84(uParam4);
			}
			if (func_83(uParam4, (1 << 19)))
			{
				if ((float)MISC::ABSI((func_97(uParam4) - func_98(uParam4))) <= 2.0f)
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
					{
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
					}
				}
				if (func_99(uParam4, Global_35, 4))
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_98(uParam4) > 5000)
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
				}
			}
			if (func_100(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
				}
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			else
			{
				if (func_83(uParam4, (1 << 26)))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_444);
						}
						func_26(&(uParam4->f_1));
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
						func_96(uParam4, (1 << 9));
						func_103(uParam4, (1 << 26), 1);
						func_86(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_83(uParam4, (1 << 14)) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444)) && CAM::IS_SCREEN_FADED_OUT()) && func_98(uParam4) <= 5000) && func_98(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_83(uParam4, (1 << 29)) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("ENABLEPLAYERCONTROL")))
				{
					func_104(&(uParam4->f_501), 0);
					func_96(uParam4, (1 << 29));
				}
				if (func_98(uParam4) >= 5000 && func_98(uParam4) <= (func_97(uParam4) - 5000))
				{
					func_105();
				}
			}
			break;
		case 6:
			if (func_100(uParam4))
			{
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_83(uParam4, (1 << 19)))
			{
				ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						func_96(uParam4, (1 << 30));
					}
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, true);
						if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
						{
							UIFEED::UI_FEED_CLEAR_CHANNEL(9, true, false);
						}
						return 0;
					}
					else if (ANIMSCENE::_IS_ANIM_SCENE_SKIPPABLE(uParam4->f_444))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Invoke(uParam4->f_438, !func_87(uParam4, 4), uParam4);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
						}
						func_86(uParam4, 3);
					}
					else if (func_48(&(uParam4->f_1)) >= 30.0f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
						}
						func_86(uParam4, 3);
					}
				}
				if (func_50(uParam4) == 3)
				{
					if (func_83(uParam4, (1 << 19)))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_86(uParam4, 4);
			break;
	}
	return 0;
}

bool func_14(int iParam0)
{
	func_25(iParam0, (1 << 18));
	if (func_106(iParam0))
	{
		func_25(iParam0, (1 << 16));
		return true;
	}
	return false;
}

void func_15(int iParam0)
{
	if (!func_5(iParam0, (1 << 17)))
	{
		if (!func_5(iParam0, (1 << 11)) && !func_7(iParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
			HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
		}
		func_107(*iParam0);
		func_25(iParam0, (1 << 10));
		func_108(0);
		func_109(&Global_1935630, (1 << 15));
		func_110(2);
		func_111(iParam0);
		func_112(1);
		func_59(*iParam0);
		func_60(*iParam0);
		func_33(iParam0);
		if (!func_5(iParam0, (1 << 31)))
		{
			func_68();
		}
		func_58(iParam0);
		func_25(iParam0, (1 << 17));
	}
}

bool func_16(int iParam0)
{
	return true;
}

void func_17(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_18(var uParam0)
{
	return func_113(*uParam0, 1);
}

void func_19(var uParam0, bool bParam1)
{
	if (bParam1 || !func_18(uParam0))
	{
		func_26(uParam0);
	}
}

bool func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_114(iVar1) && func_115(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_116(iVar1))
				{
					if (func_117(iVar2, 1116471296, -1082130432, -1082130432, -1082130432))
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

float func_21(var uParam0)
{
	if (!func_18(uParam0))
	{
		return 0.0f;
	}
	if (func_118(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_119() - uParam0->f_1);
}

void func_22(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 |= iParam1;
}

void func_23(int iParam0)
{
	func_120(&(iParam0->f_428));
}

void func_24(int iParam0)
{
	func_121(&(iParam0->f_958), iParam0->f_958);
}

void func_25(int iParam0, int iParam1)
{
	iParam0->f_2 |= iParam1;
	if (iParam1 == (1 << 16))
	{
		func_109(&Global_1935630, (1 << 15));
		func_107(*iParam0);
	}
}

void func_26(var uParam0)
{
	func_122(uParam0, 0.0f);
}

bool func_27(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		iParam0->f_5 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_6))
	{
		iParam0->f_6 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_7))
	{
		iParam0->f_7 = ITEMSET::CREATE_ITEMSET(true);
	}
	func_123(*iParam0, iParam0->f_5, iParam0->f_6, iParam0->f_7);
	if (func_90(func_124(iParam0)))
	{
		vVar0 = { func_12(*iParam0) /*3*/ };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			strcpy_s(&(iParam0->f_428.f_440), 32, "cutscene@");
			strcat_s(&(iParam0->f_428.f_440), 32, &vVar0);
			vVar3 = { func_125(&(iParam0->f_428)) /*3*/ };
			if (!func_90(vVar3))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, func_126(*iParam0), true) >= 10.0f)
				{
					func_127(iParam0, func_126(*iParam0));
				}
				else
				{
					func_127(iParam0, vVar3);
				}
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_128(iParam0))
	{
		return false;
	}
	iParam0->f_55.f_1 = 67108863;
	iParam0->f_55 = 2;
	iParam0->f_55 = 1;
	func_71(iParam0);
	func_129(iParam0);
	func_130(iParam0);
	func_131(iParam0, Global_35, 0, 0, 0, 1);
	func_132(iParam0);
	func_133(iParam0);
	return true;
}

bool func_28(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_134(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_135(iParam0, 0))
	{
		iVar0 = 0;
	}
	if (!func_5(iParam0, (1 << 30)) && !func_136(*iParam0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_29(int iParam0)
{
	int iVar0;

	if (!func_137())
	{
		return false;
	}
	func_138(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(bLocal_20))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_20, true);
		WEAPON::SET_CURRENT_PED_WEAPON(bLocal_20, joaat("WEAPON_UNARMED"), true, 0, false, false);
		func_140(bLocal_20, func_139(0, 0), 2, (1 << 30));
		func_131(iParam0, bLocal_20, 0, 0, 0, 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19, "ARTHUR", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19, "MARYBETH", bLocal_20, 0);
	}
	func_141(-1, 1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_14.f_2[iVar0]) && iVar0 == 0)
		{
			func_142(iParam0, vLocal_14.f_2[iVar0], 0);
			func_143(iParam0, vLocal_14.f_2[iVar0], "p_cs_book_small01x", 0, 0, 1, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_14.f_2[iVar0]) && iVar0 == 0)
		{
			if (iVar0 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19, "P_CS_BOOK_SMALL01X", vLocal_14.f_2[iVar0], 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_19, func_144(vLocal_14.f_2[iVar0]), vLocal_14.f_2[iVar0], 0);
			}
		}
		iVar0++;
	}
	ANIMSCENE::START_ANIM_SCENE(iLocal_19);
	func_25(iParam0, (1 << 11));
	return true;
}

bool func_30(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

int func_31(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_32(int iParam0)
{
	int iVar0;

	if (Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_33(int iParam0)
{
	var uVar0;

	MemCopy(&uVar0, {func_145(*iParam0)}, 3);
	SCRIPTS::REQUEST_SCRIPT(&uVar0);
}

void func_34(int iParam0)
{
}

void func_35(int iParam0)
{
	func_56(iParam0);
	func_2(&Global_1935630, (1 << 15));
	func_146(iParam0);
	func_26(&(iParam0->f_2884));
	if (func_147())
	{
		func_148();
	}
	if (func_42(iParam0, (1 << 19)))
	{
		func_109(&Global_1935630, (1 << 19));
	}
	else if (!func_42(iParam0, (1 << 15)))
	{
		Global_43805 = iParam0->f_958.f_1684;
	}
	func_149(&(iParam0->f_428), &(iParam0->f_958));
	if (func_5(iParam0, (1 << 18)))
	{
		if (func_150(&(Global_1835011[*iParam0 /*74*/].f_29), 4))
		{
			CLOCK::SET_CLOCK_TIME(func_151(4), 0, 0);
		}
		else if (func_150(&(Global_1835011[*iParam0 /*74*/].f_29), 2))
		{
			CLOCK::SET_CLOCK_TIME(func_151(2), 0, 0);
		}
		else if (func_150(&(Global_1835011[*iParam0 /*74*/].f_29), 8))
		{
			CLOCK::SET_CLOCK_TIME(func_151(8), 0, 0);
		}
		else if (func_150(&(Global_1835011[*iParam0 /*74*/].f_29), 16))
		{
			CLOCK::SET_CLOCK_TIME(func_151(16), 0, 0);
		}
		else if (func_150(&(Global_1835011[*iParam0 /*74*/].f_29), 32))
		{
			CLOCK::SET_CLOCK_TIME(func_151(32), 0, 0);
		}
	}
}

int func_36(int iParam0)
{
	func_152(&iLocal_28, 0);
	if (func_153(iLocal_27, 1))
	{
		func_154(&iLocal_27, 1);
	}
	return 1;
}

void func_37(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_155(iParam0))
	{
		return;
	}
	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, (1 << 11));
	Global_1835011[iParam0 /*74*/].f_71 = 0;
	uVar1 = func_156(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
	{
		HUD::SET_MISSION_NAME(true, &uVar1);
		MISC::_0x1096603B519C905F(&uVar1);
	}
}

void func_38(int iParam0)
{
	Vector3 vVar0;
	struct<4> /*32*/ sVar3;

	vVar0 = { func_12(*iParam0) /*3*/ };
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_428.f_444))
	{
	}
	else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_428.f_444, true, false))
	{
		Global_43800 = iParam0->f_428.f_444;
	}
	else
	{
		if (func_63(&(iParam0->f_958), 8))
		{
			if (!func_63(&(iParam0->f_958), (1 << 17)))
			{
				if (!func_63(&(iParam0->f_958), (1 << 15)))
				{
					if (!func_5(iParam0, 8))
					{
						func_157(&(iParam0->f_428), &(iParam0->f_958));
					}
				}
			}
		}
		MemCopy(&sVar3, {vVar0}, 4);
		func_13(sVar3, &(iParam0->f_428));
	}
}

void func_39(int iParam0)
{
}

bool func_40(int iParam0, int iParam1)
{
	return (func_30(iParam0) && Global_1898346[iParam0 /*6*/].f_1 & iParam1 != 0);
}

bool func_41(int iParam0)
{
	func_158(&bLocal_20, &iLocal_28, &sLocal_89, 7.0f, -1082130432, 0);
	func_159();
	if (func_160(iParam0))
	{
		func_161(&iLocal_27, 1);
		return true;
	}
	return false;
}

bool func_42(int iParam0, int iParam1)
{
	return func_63(&(iParam0->f_958), iParam1);
}

int func_43(int iParam0)
{
	return 0;
}

bool func_44(int iParam0)
{
	func_159();
	return true;
}

bool func_45(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_46(int iParam0)
{
}

void func_47(int iParam0)
{
	if ((!func_5(iParam0, (1 << 25)) && !func_42(iParam0, (1 << 19))) && !func_42(iParam0, (1 << 15)))
	{
		if (func_162(&(iParam0->f_958)))
		{
			func_163(&(iParam0->f_958), 0, 0);
			func_25(iParam0, (1 << 25));
		}
	}
}

float func_48(var uParam0)
{
	if (!func_18(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_118(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_119() - uParam0->f_1);
}

float func_49(int iParam0)
{
	return iParam0->f_2887;
}

int func_50(var uParam0)
{
	return *uParam0;
}

void func_51(int iParam0)
{
}

bool func_52(int iParam0)
{
	Vector3 vVar0;
	bool bVar3;

	vVar0 = { func_12(*iParam0) /*3*/ };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		if (func_155(*iParam0))
		{
			return true;
		}
		return false;
	}
	bVar3 = func_164();
	if (bVar3)
	{
		HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	}
	if (!func_5(iParam0, 32))
	{
		if (func_164())
		{
			func_25(iParam0, 32);
		}
		else if (func_48(&(iParam0->f_2884)) >= 60.0f)
		{
			return true;
		}
	}
	else
	{
		if (!func_164())
		{
			return true;
		}
		if (!func_5(iParam0, (1 << 12)))
		{
			if (func_155(*iParam0))
			{
				func_25(iParam0, (1 << 12));
			}
			else
			{
				func_111(iParam0);
			}
		}
		else if (!func_155(*iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_53(int iParam0)
{
	func_152(&iLocal_28, 0);
	func_165(iLocal_21);
	func_165(iLocal_22);
	func_166();
	func_167(&iLocal_28, bLocal_20);
	if (func_153(iLocal_27, 1))
	{
		func_154(&iLocal_27, 1);
	}
	return true;
}

void func_54(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_426))
	{
		func_168(iParam0->f_426);
	}
}

void func_55(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
	{
		func_169(&(iParam0->f_427), iParam0->f_425, 0);
		if (PATHFIND::_DOES_NAVMESH_BLOCKING_VOLUME_EXIST(iParam0->f_425))
		{
			PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(iParam0->f_425);
		}
		func_66(iParam0, (1 << 9));
		func_60(*iParam0);
		VOLUME::DELETE_VOLUME(iParam0->f_425);
	}
}

void func_56(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_40(iParam0->f_2889, (1 << 21));
	bVar1 = func_5(iParam0, (1 << 10));
	iVar2 = 0;
	while (iVar2 < 27)
	{
		iVar3 = iVar2;
		if (!func_114(iVar3))
		{
		}
		else if (!func_115(iVar3))
		{
		}
		else if (!func_116(iVar3))
		{
		}
		else
		{
			iVar4 = Global_1360165[iVar2 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
			}
			else
			{
				func_170(iParam0, iVar3, iVar4, 0, bVar0, !bVar1, 0);
			}
		}
		iVar2++;
	}
}

void func_57(int iParam0)
{
	func_171(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

int func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iParam0->f_5))
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iParam0->f_5));
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
		{
			iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			EVENT::_0xA86B0EE9B39D15D6(&iVar2);
		}
		else if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			ANIMSCENE::_CLEAR_BREAKOUT_ARCHETYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1));
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	return 1;
}

void func_59(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	Global_1835011[iParam0 /*74*/].f_58 = 0;
	Global_1835011[iParam0 /*74*/].f_59 = 0;
	Global_1835011[iParam0 /*74*/].f_60 = 0;
}

void func_60(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	Global_1835011[iParam0 /*74*/].f_61 = 0;
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		Global_1945188.f_865 -= Global_1945188.f_865 & 2;
	}
	else
	{
		Global_1945188.f_865 |= 2;
	}
	func_172(bParam0);
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_173())
	{
		return;
	}
	func_174();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (!func_114(iVar1))
		{
		}
		else
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (func_175(iVar2))
			{
				PED::SET_PED_CONFIG_FLAG(iVar2, 230, true);
			}
		}
		iVar0++;
	}
}

bool func_63(var uParam0, int iParam1)
{
	return uParam0->f_1664 & iParam1 != 0;
}

void func_64(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2));
				if (func_63(uParam0, (1 << 19)) && CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), false, true);
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
				{
					PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), true);
				}
			}
		}
		iVar0++;
	}
}

void func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && !ITEMSET::IS_ITEMSET_VALID(iParam0->f_2888))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_2888))
	{
		iParam0->f_2888 = ITEMSET::CREATE_ITEMSET(true);
	}
	LAW::_0x522F74636DF10201(PLAYER::GET_PLAYER_INDEX(), iParam0->f_2888);
	if (ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888) <= 0)
	{
		LAW::_0xDA1A9ADC4E3D4B16(iParam0->f_2888, true, false);
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_2888);
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iParam0->f_2888)));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 148, bParam1);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iParam0->f_2888);
}

void func_66(int iParam0, int iParam1)
{
	iParam0->f_2 -= iParam0->f_2 & iParam1;
}

void func_67(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

void func_68()
{
	int iVar0;

	if (func_176(Global_1898437) && func_177(Global_1898437) == 1)
	{
		iVar0 = func_178(Global_1898437);
		if ((func_81(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[iVar0 /*74*/].f_22))) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_22))) > 0)
		{
			PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1835011[iVar0 /*74*/].f_22), 1);
		}
	}
}

int func_69(int iParam0)
{
	return 1;
}

void func_70(var uParam0)
{
	char cVar0[64];

	cVar0 = { func_179(uParam0) /*8*/ };
	func_180(uParam0, &cVar0);
}

void func_71(int iParam0)
{
	char cVar0[64];
	char cVar8[64];

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
	{
		strcpy_s(&cVar0, 64, func_181());
		strcat_s(&cVar0, 64, "_NO_AMBIENT_CONTENT");
		iParam0->f_425 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_182(*iParam0), 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f, &cVar0);
		func_183(iParam0, iParam0->f_425, 0);
		func_184(*iParam0, iParam0->f_425);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_426))
	{
		strcpy_s(&cVar8, 64, func_181());
		strcat_s(&cVar8, 64, "_NO_SCRIPT_CONTENT");
		iParam0->f_426 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_182(*iParam0), 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 25.0f, &cVar8);
		func_185(iParam0, iParam0->f_426);
	}
}

void func_72(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0 = { func_186(iParam0) /*2*/ };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
	{
		HUD::TEXT_BLOCK_REQUEST(&sVar0);
	}
}

void func_73(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0 = { func_187(iParam0) /*2*/ };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
	{
		HUD::TEXT_BLOCK_REQUEST(&sVar0);
	}
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
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
		if (func_188())
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
		iVar0 = func_178(Global_1898164.f_1[0 /*5*/]);
		if (func_189(iVar0) && func_190(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_176(Global_1898164.f_1[0 /*5*/]))
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

void func_75(int iParam0, int iParam1)
{
	func_96(&(iParam0->f_428), iParam1);
}

void func_76(int iParam0)
{
	func_191(&(iParam0->f_428), &(iParam0->f_958));
}

bool func_77(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_83(uParam0, 256) && !func_83(uParam0, (1 << 22)));
		}
		uParam0->f_511 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_82(uParam0, sParam1);
	if (!func_83(uParam0, 64))
	{
		if (!func_90(func_89(uParam0)))
		{
			func_96(uParam0, 64);
		}
		else
		{
			vVar0 = { func_125(uParam0) /*3*/ };
			if (!func_90(vVar0))
			{
				func_192(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_193(Global_35, func_89(uParam0), 1);
	if (func_83(uParam0, 128) || func_83(uParam0, 256))
	{
		if ((fVar3 >= func_194(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_195();
				uParam0->f_529 = 0;
			}
			func_196(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
			}
			func_197(uParam0);
			func_103(uParam0, 128, 1);
			func_103(uParam0, 256, 1);
			func_103(uParam0, (1 << 12), 1);
			func_103(uParam0, (1 << 15), 1);
			func_103(uParam0, (1 << 24), 1);
		}
	}
	else if (fVar3 <= func_198(uParam0) || bParam2)
	{
		if (!func_83(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				if (func_198(uParam0) >= func_194(uParam0))
				{
				}
				sVar4 = { func_199(uParam0) /*8*/ };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&sVar4))
				{
					func_200(uParam0);
				}
				sVar4 = { func_199(uParam0) /*8*/ };
				iVar12 = 256;
				if (!func_83(uParam0, 1))
				{
					iVar12 |= (1 << 11);
				}
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), iVar12, &sVar4, false, true);
				func_201(uParam0, 0, 0, 0, 0);
				func_96(uParam0, 128);
			}
		}
	}
	if (func_83(uParam0, 128))
	{
		if (func_83(uParam0, 256) && !func_83(uParam0, (1 << 22)))
		{
			return true;
		}
		func_88(uParam0);
		if (!uParam0->f_529)
		{
			if (func_202())
			{
				func_203((1 << 12));
				uParam0->f_529 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		{
			bVar13 = true;
			sVar15 = { func_179(uParam0) /*8*/ };
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
			if (!func_83(uParam0, (1 << 23)))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, &sVar15))
				{
					if (!func_83(uParam0, (1 << 24)))
					{
						if ((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_444, &sVar15) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &sVar15)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_444, &sVar15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &sVar15);
						}
						func_96(uParam0, (1 << 24));
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
			func_96(uParam0, 256);
			func_103(uParam0, (1 << 22), 1);
			return true;
		}
	}
	return false;
}

void func_78(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 -= Global_1898346[iParam0 /*6*/].f_1 & iParam1;
}

bool func_79(var uParam0)
{
	if (func_150(&(uParam0->f_29), 62))
	{
		switch (func_204())
		{
			case 1:
				if (!func_150(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_150(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_150(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_150(&(uParam0->f_29), 32))
				{
					if (func_150(&(uParam0->f_29), 2))
					{
						if (func_206(func_205()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

int func_80(int iParam0)
{
	iParam0 = func_207(iParam0);
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

bool func_81(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_82(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_83(uParam0, (1 << 13)))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_440), {func_208("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_440), {func_208("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_96(uParam0, (1 << 13));
}

bool func_83(var uParam0, int iParam1)
{
	return uParam0->f_8 & iParam1 != 0;
}

void func_84(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false)) || ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444)) || func_83(uParam0, (1 << 9)))
	{
		if (!func_209(uParam0->f_501, 128))
		{
			func_210();
		}
		return;
	}
	if ((func_99(uParam0, Global_35, 4) || (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_211(Global_35)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, func_211(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!func_209(uParam0->f_501, 128))
		{
			func_210();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);
	if (iVar1 != 0)
	{
		if (func_212(iVar1))
		{
			if (func_213(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_209(uParam0->f_501, (1 << 9)))
	{
		bVar2 = true;
	}
	if (func_214(bVar0, bVar2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_444);
		func_210();
	}
}

void func_85(var uParam0, char* sParam1)
{
	char cVar0[64];
	char cVar8[32];

	if (func_50(uParam0) == 2 && (func_215(uParam0->f_500, (1 << 14)) || func_83(uParam0, (1 << 28))))
	{
		cVar0 = { func_179(uParam0) /*8*/ };
		func_216(uParam0, &cVar0);
	}
	func_217(uParam0, sParam1);
	if (func_83(uParam0, (1 << 17)))
	{
		func_218(uParam0, 0);
	}
	if (func_219())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_220();
	}
	if (func_221())
	{
		func_222(1);
	}
	func_201(uParam0, 0, 0, 0, 0);
	strcpy_s(&cVar8, 32, sParam1);
	func_223(uParam0, cVar8);
	func_93(1, 0);
	func_196(uParam0);
	if (func_224() && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_211(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_87(uParam0, 1))
	{
		Stack.Invoke(uParam0->f_436, uParam0);
	}
	func_225(uParam0);
	func_226(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
	Global_43800 = uParam0->f_444;
	strcpy_s(&Global_43802, 24, sParam1);
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_26(&(uParam0->f_1));
}

bool func_87(var uParam0, int iParam1)
{
	return uParam0->f_439 & iParam1 != 0;
}

void func_88(var uParam0)
{
	if ((!func_83(uParam0, (1 << 15)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_444, false))
	{
		func_227(uParam0);
		func_226(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_444, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_444);
		}
		func_96(uParam0, (1 << 15));
	}
}

Vector3 func_89(var uParam0)
{
	return uParam0->f_5;
}

bool func_90(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_91(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_228(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_92(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_93(bool bParam0, bool bParam1)
{
	if (func_229())
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	}
	if (bParam0)
	{
		if (func_230())
		{
			func_231(1);
		}
	}
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, bParam1, false);
}

void func_94(var uParam0)
{
	Vector3 vVar0;

	if (!func_83(uParam0, 4))
	{
		if (func_215(uParam0->f_500, (1 << 14)))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_232(uParam0) /*3*/ };
		if (!func_215(uParam0->f_500, (1 << 19)))
		{
			func_233(&(uParam0->f_512));
		}
		func_234(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_235(uParam0, 0.0f, 0.0f, 0.0f);
		func_236(uParam0);
		func_237(uParam0);
		func_238(uParam0, 0.0f, 0.0f, 0.0f, 0, 0);
		func_239(uParam0);
		func_96(uParam0, 4);
		func_240(uParam0, 0);
		func_241(&(Global_1946054.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_513)))
		{
			CAM::_CAM_DESTROY(&(uParam0->f_513));
		}
	}
}

bool func_95(var uParam0, bool bParam1)
{
	if (func_83(uParam0, (1 << 18)))
	{
		return false;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, "ExportCamera") || (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_444, "ExportCamera") && bParam1)) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_444))
	{
		func_96(uParam0, (1 << 18));
		func_240(uParam0, 1);
		return true;
	}
	return false;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_8 |= iParam1;
}

int func_97(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_444) * 1000.0f));
}

int func_98(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_444) * 1000.0f));
}

bool func_99(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && func_242(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_100(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return true;
	}
	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_444, false))
	{
		if (func_83(uParam0, (1 << 19)))
		{
			ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
		}
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_444) && func_83(uParam0, (1 << 20)))
	{
		return true;
	}
	return false;
}

void func_101(var uParam0)
{
	if (((func_83(uParam0, (1 << 30)) && !func_83(uParam0, (1 << 19))) && func_83(uParam0, (1 << 9))) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_102(var uParam0)
{
	if (!func_83(uParam0, (1 << 29)))
	{
		func_240(uParam0, 1);
		func_104(&(uParam0->f_501), uParam0->f_512);
		func_195();
		func_96(uParam0, (1 << 29));
	}
	if (func_83(uParam0, (1 << 19)))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_243(uParam0);
	func_86(uParam0, 1);
	func_197(uParam0);
	func_244(uParam0);
	func_245(uParam0);
	func_246(uParam0, 4);
	func_200(uParam0);
	func_218(uParam0, 1);
	func_196(uParam0);
	func_247(&(uParam0->f_1));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
	func_248(!func_209(uParam0->f_501, 128));
	if (!func_209(uParam0->f_501, 128))
	{
		func_210();
	}
}

void func_103(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 -= uParam0->f_8 & iParam1;
	if (((iParam1 == (1 << 9) && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444))
	{
		ANIMSCENE::_CLEAR_ANIM_SCENE_WAS_SKIPPED(uParam0->f_444);
	}
}

void func_104(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	func_249(2000);
	Global_16 = 0;
	func_250();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_209(*uParam0, 8));
	if (!func_209(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_209(*uParam0, 2) || func_209(*uParam0, 4))
	{
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	}
	if (!func_209(*uParam0, 16))
	{
		func_61(1);
	}
	if (func_209(*uParam0, 32))
	{
		func_251(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, joaat("MP_COMPONENT_TYPE_NECKWEAR_1"), 0, 1, 0, 0, 1, 0);
		func_252(joaat("KIT_BANDANA"), 0);
	}
	func_241(&(Global_1946054.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & (1 << 22) != 0)
	{
		Global_1359489.f_16 -= Global_1359489.f_16 & (1 << 22);
	}
	*uParam0 = 0;
}

void func_105()
{
	Global_1935630.f_52 = 1;
}

bool func_106(int iParam0)
{
	bool bVar0;
	int iVar1;
	Vector3 vVar2;

	bVar0 = PED::IS_PED_ON_FOOT(Global_35);
	if (!bVar0 && func_5(iParam0, (1 << 20)))
	{
		func_66(iParam0, (1 << 20));
		return false;
	}
	if (!func_5(iParam0, (1 << 23)))
	{
		if (BUILTIN::VDIST2(func_182(*iParam0), Global_36) < (10.0f * 10.0f))
		{
			func_25(iParam0, (1 << 23));
			func_19(&(iParam0->f_2890), 0);
		}
		else
		{
			return false;
		}
	}
	if (!func_5(iParam0, (1 << 20)))
	{
		if (bVar0)
		{
			func_25(iParam0, (1 << 20));
		}
		else
		{
			iVar1 = (1 << 17);
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, func_182(*iParam0)) /*3*/ };
			if (vVar2.x > 0.0f)
			{
				iVar1 = (1 << 18);
			}
			if (func_253(Global_35, &(iParam0->f_421), 0, 256, iVar1, 1084227584, 100, 0, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_422) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_422, true, 0))
	{
		return true;
	}
	else if (BUILTIN::VDIST2(func_182(*iParam0), Global_36) < (2.5f * 2.5f))
	{
		return true;
	}
	else if (!func_5(iParam0, (1 << 21)))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_182(*iParam0), 1.0f, 20000, 0.25f, 0, 40000.0f);
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
		PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iParam0->f_3, -1, 0, 51, 0);
		}
		func_25(iParam0, (1 << 21));
	}
	if (func_18(&(iParam0->f_2890)))
	{
		if (func_48(&(iParam0->f_2890)) >= 15.0f)
		{
			return true;
		}
	}
	return false;
}

void func_107(int iParam0)
{
	int iVar0;

	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, (1 << 10));
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_2(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_109(&Global_1935630, (1 << 22));
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

void func_109(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_110(int iParam0)
{
	int iVar0;

	if (func_254() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_256(func_255(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_255(iVar0), func_257(), true))
			{
				func_258(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_111(int iParam0)
{
	if (Global_1935630.f_13)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
		func_108(0);
		func_65(iParam0, 1);
	}
	func_259(1, 0, 1);
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436.f_9 = 0.0f;
	}
	Global_1935436.f_8 = 0.0f;
	Global_1935436.f_12.f_1 = 0.0f;
	Global_1935436.f_12 = 0.0f;
	Global_1935436.f_12.f_3 = 0.0f;
	Global_1935436.f_12.f_2 = 0.0f;
	Global_1935436.f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_SET_PED_MOTIVATION(Global_35, 10, 0.0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_SET_PED_DRUNKNESS(Global_35, false, 0.0f);
	func_260(0.0f);
	Global_1935436.f_11 = 1;
	if (func_261())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_262();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

bool func_113(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_114(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_115(int iParam0)
{
	return func_263(iParam0, 16, 1);
}

bool func_116(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (!func_115(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_117(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0.0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_193(iParam0, Global_36, 1);
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

bool func_118(var uParam0)
{
	return func_113(*uParam0, 2);
}

float func_119()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_120(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
}

void func_121(var uParam0, int iParam1)
{
	func_264(uParam0, 4);
	func_265(uParam0, 10);
	func_266(uParam0, iParam1);
}

void func_122(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_119() - fParam1);
	func_267(uParam0, 1);
	func_268(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if ((!ITEMSET::IS_ITEMSET_VALID(iParam1) || !ITEMSET::IS_ITEMSET_VALID(iParam2)) || !ITEMSET::IS_ITEMSET_VALID(iParam3))
	{
		return;
	}
	if (!func_269(iParam0))
	{
	}
	Global_1835011[iParam0 /*74*/].f_58 = iParam1;
	Global_1835011[iParam0 /*74*/].f_59 = iParam2;
	Global_1835011[iParam0 /*74*/].f_60 = iParam3;
}

Vector3 func_124(int iParam0)
{
	return func_89(&(iParam0->f_428));
}

Vector3 func_125(var uParam0)
{
	var uVar0;
	Vector3 vVar8;
	var uVar11;
	Vector3 vVar14;

	MemCopy(&uVar0, {func_270(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_445, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_445, func_211(Global_35), &vVar14, false, 0, 2))
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

Vector3 func_126(int iParam0)
{
	return func_182(iParam0);
}

void func_127(int iParam0, Vector3 vParam1)
{
	func_192(&(iParam0->f_428), vParam1);
}

bool func_128(int iParam0)
{
	func_25(iParam0, 2);
	func_25(iParam0, 16);
	if (!func_271(9))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_21))
	{
		iLocal_21 = VOLUME::CREATE_VOLUME_BOX(1877.251f, -1881.726f, 42.148f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 12.0f);
		func_272(iParam0, iLocal_21);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_22))
	{
		iLocal_22 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLSPHERE"), 1876.89f, -1881.36f, 41.92f, 0.0f, 0.0f, 0.0f, 1.2f, 1.2f, 1.2f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bLocal_20))
	{
		func_273(iParam0, 15, &bLocal_20, 0, 1, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bLocal_26))
	{
		func_273(iParam0, 19, &bLocal_26, 0, 1, 1896.34f, -1866.56f, 51.25f, 0.0f, 0, 1, 1, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(bLocal_20) && ENTITY::DOES_ENTITY_EXIST(bLocal_26)) && PED::IS_PED_READY_TO_RENDER(bLocal_26))
	{
		if (func_274(joaat("SUNNY")))
		{
			func_275(bLocal_26, 464906090);
		}
		else if (!func_274(joaat("SUNNY")))
		{
			func_275(bLocal_26, 1052055818);
		}
		func_275(bLocal_20, 464906090);
		func_143(iParam0, bLocal_20, "MARYBETH", 0, 0, 1, 0);
		func_143(iParam0, bLocal_26, "SusanGrimshaw", 0, 0, 1, 0);
		iLocal_19 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@sus1@leadin@INT@ilo", 2, 0, false, true);
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_19, "PL_ILO");
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iLocal_19, "PL_ILO"))
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_19, "PL_ILO", true);
		}
		func_276();
		return true;
	}
	return false;
}

void func_129(int iParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(vLocal_14.x))
	{
		vLocal_14.x = ITEMSET::CREATE_ITEMSET(false);
	}
}

void func_130(int iParam0)
{
	func_171(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

void func_131(int iParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_143(iParam0, bParam1, sParam2, iParam3, iParam4, bParam5, 0);
}

void func_132(int iParam0)
{
	Vector3 vVar0[24];

	cVar0 = { func_12(*iParam0) /*3*/ };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return;
	}
	if (func_7(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, (1 << 14)))
	{
		func_25(iParam0, (1 << 14));
		if (!func_277(&cVar0))
		{
			return;
		}
		func_278(iParam0, cVar0, 0);
		func_25(iParam0, (1 << 19));
	}
}

void func_133(int iParam0)
{
	if (func_198(&(iParam0->f_428)) != 15.0f || func_194(&(iParam0->f_428)) != 20.0f)
	{
		return;
	}
	switch (*iParam0)
	{
		case 31:
			func_279(&(iParam0->f_428), 50.0f);
			func_280(&(iParam0->f_428), 75.0f);
			break;
		case 34:
			func_279(&(iParam0->f_428), 35.0f);
			func_280(&(iParam0->f_428), 50.0f);
			break;
		case 62:
			func_279(&(iParam0->f_428), 25.0f);
			func_280(&(iParam0->f_428), 30.0f);
			break;
		default:
			break;
	}
}

bool func_134(var uParam0)
{
	return func_281(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
}

bool func_135(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_5(iParam0, 2))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	iVar0 = func_282(*iParam0);
	if (!func_114(iVar0))
	{
		return true;
	}
	iParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(func_255(iVar0));
	return func_273(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_136(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	char cVar9[64];

	iVar0 = 1;
	MemCopy(&uVar1, {func_186(iParam0)}, 8);
	strcpy_s(&cVar9, 64, HUD::_GET_LABEL_TEXT_2(&uVar1));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
	{
		if (!func_283(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_187(iParam0)}, 8);
		strcpy_s(&cVar9, 64, HUD::_GET_LABEL_TEXT_2(&uVar1));
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
		{
			if (!func_284(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_137()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BOOK_SMALL01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("WAGON02X")))
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_19, true, false))
	{
		return false;
	}
	func_285();
	return true;
}

void func_138(int iParam0)
{
	func_70(&(iParam0->f_428));
	func_25(iParam0, 8);
}

struct<4> /*32*/ func_139(int iParam0, int iParam1)
{
	return func_286(iParam0, iParam1);
}

void func_140(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, float fParam6)
{
	func_287(bParam0, sParam1, sParam1.f_3, iParam5, fParam6);
}

void func_141(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(vLocal_14.y))
	{
		vLocal_14.f_1 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vLocal_14.f_2[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		vLocal_14.f_2[0] = OBJECT::CREATE_OBJECT(joaat("P_CS_BOOK_SMALL01X"), 1883.958f, -1877.707f, 42.8094f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(vLocal_14.f_2[0], 0.0f, 0.0f, 75.1454f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(vLocal_14.f_2[0], bParam1);
	}
	func_288(vLocal_14.f_2[0], vLocal_14.x);
	func_288(vLocal_14.f_2[0], vLocal_14.y);
}

void func_142(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		Global_43616 = ITEMSET::CREATE_ITEMSET(false);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, Global_43616))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, Global_43616);
	}
	if (bParam2)
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, func_289(), true);
	}
}

void func_143(int iParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_290(&(iParam0->f_428), bParam1, sParam2, iParam3, iParam4, bParam6);
	func_291(iParam0, bParam1, sParam2);
	if (bParam5)
	{
		func_292(iParam0, bParam1);
	}
}

char* func_144(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_293(iVar0);
}

struct<4> /*32*/ func_145(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (!func_81(iParam0))
	{
		return sVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_3;
}

void func_146(var uParam0)
{
	struct<12> /*96*/ sVar0;
	int iVar12;

	if (func_294(&(uParam0->f_428)) > 15)
	{
	}
	iVar12 = 0;
	while (iVar12 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428.f_13[iVar12 /*12*/]))
		{
			Global_43619[iVar12 /*12*/] = { uParam0->f_428.f_13[iVar12 /*12*/] /*12*/ };
		}
		else
		{
			Global_43619[iVar12 /*12*/] = { sVar0 /*12*/ };
		}
		iVar12++;
	}
}

bool func_147()
{
	return func_295(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_148()
{
	if (func_147())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_164())
		{
			func_61(1);
		}
	}
}

void func_149(var uParam0, var uParam1)
{
	char cVar0[64];

	if (func_63(uParam1, (1 << 15)))
	{
		cVar0 = { func_179(uParam0) /*8*/ };
		func_216(uParam0, &cVar0);
		if (func_63(uParam1, (1 << 17)))
		{
			func_96(uParam0, (1 << 28));
			if (func_90(uParam0->f_505))
			{
				uParam0->f_505 = { func_296(uParam1, uParam1->f_1684) /*3*/ };
			}
			if (func_90(uParam0->f_502))
			{
				uParam0->f_502 = { func_296(uParam1, uParam1->f_1684) /*3*/ };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_502, &(uParam0->f_502.f_2), false);
				uParam0->f_502.f_2 += 0.5f;
			}
		}
		if (func_63(uParam1, (1 << 28)))
		{
			func_297(&(uParam0->f_500), (1 << 14));
		}
	}
	else if (func_63(uParam1, (1 << 19)))
	{
		func_96(uParam0, (1 << 26));
		func_298(uParam1, (1 << 19));
	}
	if (func_299(uParam1, 128))
	{
		func_96(uParam0, 32);
	}
	if (uParam1->f_1903 != 0)
	{
		uParam0->f_512 = uParam1->f_1903;
		if (uParam1->f_1684 >= 0 && func_300(&(uParam1->f_1016[uParam1->f_1684 /*41*/]), 256))
		{
			func_297(&(uParam0->f_500), (1 << 19));
		}
	}
	if (*uParam1 == 0 && CAM::_IS_CAMERA_AVAILABLE(&(uParam1->f_1692)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_513), &(uParam1->f_1692), 16);
	}
}

bool func_150(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = *uParam0 & iParam1;
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_151(int iParam0)
{
	if (iParam0 & 36 == 4)
	{
		return 6;
	}
	else if (iParam0 & 34 == 4)
	{
		return 5;
	}
	else if (iParam0 & 12 == 8)
	{
		return 12;
	}
	else if (iParam0 & 24 == 16)
	{
		return 18;
	}
	else if (iParam0 & 48 == 32)
	{
		return 0;
	}
	return 0;
}

void func_152(int iParam0, bool bParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_247(&(iParam0->f_18));
	if (bParam1)
	{
		iParam0->f_21 = 0;
		iParam0->f_25 = 0.0f;
		iParam0->f_26 = 30.0f;
		iParam0->f_27 = 1.25f;
		iParam0->f_29 = 10.0f;
		iParam0->f_30 = 50.0f;
		iParam0->f_31 = 30.0f;
		iParam0->f_32 = 21.0f;
		iParam0->f_33 = 20.0f;
		iParam0->f_34 = 5.0f;
		iParam0->f_28 = 0;
		iParam0->f_60 = 0;
		iParam0->f_57 = { 0.0f, 0.0f, 0.0f /*3*/ };
		iParam0->f_55 = 0;
		func_247(&(iParam0->f_22));
		func_247(&(iParam0->f_37));
		func_247(&(iParam0->f_40));
		func_247(&(iParam0->f_43));
		func_247(&(iParam0->f_49));
		func_247(&(iParam0->f_52));
		func_301(iParam0);
		func_302(iParam0);
		if (MAP::DOES_BLIP_EXIST(iParam0->f_56))
		{
			MAP::REMOVE_BLIP(&(iParam0->f_56));
		}
	}
}

bool func_153(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_154(int iParam0, int iParam1)
{
	func_303(iParam0, iParam1);
}

bool func_155(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_304(Global_1835011[iParam0 /*74*/].f_1);
}

var func_156(int iParam0)
{
	var uVar0;

	if (!func_81(iParam0))
	{
		return uVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_8;
}

int func_157(var uParam0, var uParam1)
{
	if (uParam1->f_1684 < 0 || uParam1->f_1684 >= 8)
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
			{
				func_216(uParam0, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30));
				func_96(uParam0, (1 << 21));
				return 1;
			}
		}
	}
	return 0;
}

void func_158(bool bParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (ENTITY::IS_ENTITY_DEAD(*bParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	func_305(iParam1, *bParam0, iParam1->f_56, 0);
	fVar0 = func_306(fParam4 >= 0.0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
	func_307(iParam1, fParam3);
	func_308(bParam0, iParam1, uParam2, fVar0);
	func_309(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_310(iParam1, uParam2, bParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = func_311(iParam1, bParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_312(iParam1);
			}
		}
	}
}

void func_159()
{
	if (func_153(iLocal_27, 1))
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
	}
}

bool func_160(int iParam0)
{
	int iVar0;

	func_158(&bLocal_20, &iLocal_28, &sLocal_89, 7.0f, -1082130432, 0);
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_18, true, 0))
	{
		PED::SET_PED_CONFIG_FLAG(bLocal_20, 301, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(bLocal_20, 301, false);
	}
	if (bLocal_24)
	{
	}
	else if (!bLocal_23)
	{
		if (func_256(bLocal_20, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_18, true, 0))
		{
			func_313();
			bLocal_23 = true;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_18, true, 0))
	{
		iVar0 = -1;
		iVar0 = func_314(&bLocal_20, &iLocal_28, 7.0f, &sLocal_89, 0.0f, 3, 0, "", 1, iLocal_18, 0, 2, -1082130432);
		HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
		HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
		if (iVar0 == 0 || bLocal_25)
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL"), true) == 8)
				{
					bLocal_25 = true;
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				if (func_7(iParam0))
				{
					func_316(&(iParam0->f_958), func_315(iParam0), 0, 0);
				}
				func_317(&bLocal_20);
				func_318(&sLocal_89, 0, 0, 1, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_19, "Loop", true, false);
				bLocal_23 = false;
				bLocal_24 = true;
				HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
			}
		}
	}
	else
	{
		func_319();
		bLocal_23 = false;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_19) > 0.98f)
	{
		return true;
	}
	return false;
}

void func_161(int iParam0, int iParam1)
{
	func_320(iParam0, iParam1);
}

bool func_162(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> /*64*/ sVar3;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0 /*18*/].f_17 == 0 && uParam0->f_475[iVar0 /*18*/].f_2 == 9) && uParam0->f_475[iVar0 /*18*/].f_4 >= 0)
		{
			iVar1 = uParam0->f_1522[uParam0->f_475[iVar0 /*18*/].f_4 /*10*/].f_8;
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar1) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar1, true, false))
			{
				iVar2 = 0;
				while (iVar2 < 35)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar2 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar2 /*13*/].f_2))
					{
						sVar3 = { func_321(uParam0, uParam0->f_3[iVar2 /*13*/].f_2) /*8*/ };
						if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iVar1, &sVar3))
						{
							if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_3[iVar2 /*13*/].f_2, iVar1) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_3[iVar2 /*13*/].f_2, -1))
							{
								return true;
							}
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_163(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout")) && !uParam0->f_1769)
					{
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout", true);
					}
				}
				else if (func_63(uParam0, (1 << 15)) && func_322(&(uParam0->f_1522[iVar0 /*10*/]), 128))
				{
					func_323(uParam0->f_1522[iVar0 /*10*/].f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8, 0);
			}
		}
		iVar0++;
	}
}

bool func_164()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_165(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_166()
{
	VOLUME::DELETE_VOLUME(iLocal_18);
}

void func_167(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 20))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 20);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 0);
	}
	MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
	func_324(iParam0, &bParam1, 0);
	func_317(&bParam1);
	func_152(iParam0, 0);
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		func_325(iParam0, 0);
	}
	func_326(iParam0);
	func_327(iParam0, bParam1);
	func_301(iParam0);
	func_302(iParam0);
}

void func_168(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	func_328(vVar0, 0);
}

void func_169(var uParam0, int iParam1, bool bParam2)
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

void func_170(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!func_114(iParam1))
	{
		return;
	}
	func_329(iParam2);
	if (bParam4)
	{
		func_330(iParam0, iParam2, 0);
	}
	if (!bParam6)
	{
		if (!func_5(iParam0, (1 << 22)))
		{
			bParam6 = func_331(&(Global_1835011[*iParam0 /*74*/]), (1 << 10));
			bVar0 = func_331(&(Global_1835011[*iParam0 /*74*/]), (1 << 16));
		}
	}
	func_332(iParam1, iParam3, bParam4, bParam5, -1082130432, 1, 1, bParam6, bVar0, 0, 0);
}

void func_171(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_333(uParam0[iVar0 /*3*/]))
		{
			if (func_334((uParam0[iVar0 /*3*/])->f_2, iParam12))
			{
				func_335(uParam0[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_336(uParam1[iVar0 /*5*/]))
		{
			if (func_334((uParam1[iVar0 /*5*/])->f_4, iParam12))
			{
				func_337(uParam1[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_338(uParam2[iVar0 /*3*/]))
		{
			if (func_334((uParam2[iVar0 /*3*/])->f_2, iParam12))
			{
				func_339(uParam2[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_340(uParam3[iVar0 /*3*/]))
		{
			if (func_334((uParam3[iVar0 /*3*/])->f_2, iParam12))
			{
				func_341(uParam3[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (func_334(uParam4->f_1, iParam12))
	{
		func_342(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_343(uParam5[iVar0 /*67*/]))
		{
			if (func_334((uParam5[iVar0 /*67*/])->f_3, iParam12))
			{
				func_344(uParam5[iVar0 /*67*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_343(uParam5[iVar0 /*67*/]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_345(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/])))
				{
					if (func_334((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/].f_2, iParam12))
					{
						func_346(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/]), (uParam5[iVar0 /*67*/])->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_347(uParam6[iVar0 /*4*/]))
		{
			if (func_334((uParam6[iVar0 /*4*/])->f_3, iParam12))
			{
				func_348(uParam6[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_349(uParam7[iVar0 /*5*/]))
		{
			if (func_334((uParam7[iVar0 /*5*/])->f_4, iParam12))
			{
				func_350(uParam7[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_351(uParam8[iVar0 /*3*/]))
		{
			if (func_334((uParam8[iVar0 /*3*/])->f_2, iParam12))
			{
				func_352(uParam8[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_353(uParam9[iVar0 /*3*/]))
		{
			if (func_334((uParam9[iVar0 /*3*/])->f_2, iParam12))
			{
				func_354(uParam9[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_355(uParam10[iVar0 /*4*/]))
		{
			if (func_334((uParam10[iVar0 /*4*/])->f_3, iParam12))
			{
				func_356(uParam10[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_357(uParam11[iVar0 /*3*/]))
		{
			if (func_334((uParam11[iVar0 /*3*/])->f_2, iParam12))
			{
				func_358(uParam11[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

void func_172(bool bParam0)
{
	Global_1935496.f_18 = !bParam0;
}

bool func_173()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[iVar0 /*6*/].f_1, false)) && Global_43806[iVar0 /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD()) && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(Global_43806[iVar0 /*6*/], "pl_breakout")) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_43806[iVar0 /*6*/], "pl_breakout"))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_174()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[iVar0 /*6*/].f_1, false)) && Global_43806[iVar0 /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD()) && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(Global_43806[iVar0 /*6*/], "pl_breakout")) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Global_43806[iVar0 /*6*/], "pl_breakout"))
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Global_43806[iVar0 /*6*/], "pl_breakout", true);
		}
		iVar0++;
	}
}

bool func_175(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43806[iVar0 /*6*/], false)) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, Global_43806[iVar0 /*6*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_176(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_177(int iParam0)
{
	if (!func_176(iParam0))
	{
		return 0;
	}
	return func_360(func_359(iParam0));
}

int func_178(int iParam0)
{
	if (!func_176(iParam0))
	{
		return -1;
	}
	return func_361(func_359(iParam0));
}

struct<8> /*64*/ func_179(var uParam0)
{
	struct<8> /*64*/ sVar0;

	sVar0 = { func_362(uParam0) /*8*/ };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
	{
		sVar0 = { func_363() /*8*/ };
	}
	return sVar0;
}

void func_180(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	strcpy_s(&(uParam0->f_446), 64, sParam1);
}

char* func_181()
{
	return "unnamed";
}

Vector3 func_182(int iParam0)
{
	if (func_364(iParam0))
	{
		return func_365(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

void func_183(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	iParam0->f_425 = iParam1;
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam1, 0, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam1, 0, 0, 0, -1, -1, iParam2);
	PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iParam1, 15);
	func_66(iParam0, (1 << 9));
	iParam0->f_427 = func_366(iParam1, 0, 0, 0);
}

void func_184(int iParam0, int iParam1)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_269(iParam0))
	{
	}
	Global_1835011[iParam0 /*74*/].f_61 = iParam1;
}

void func_185(int iParam0, int iParam1)
{
	char cVar0[64];

	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	iParam0->f_426 = iParam1;
	func_367(iParam1);
	strcpy_s(&cVar0, 64, func_181());
	func_368(iParam1, &cVar0, 1, 0, 0, 0, -1082130432);
}

struct<2> /*16*/ func_186(int iParam0)
{
	struct<2> /*16*/ sVar0;

	MemCopy(&sVar0, {func_156(iParam0)}, 2);
	return sVar0;
}

struct<2> /*16*/ func_187(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0 = { func_186(iParam0) /*2*/ };
	strcat_s(&sVar0, 16, "AUD");
	return sVar0;
}

bool func_188()
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

bool func_189(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_190(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_191(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[iVar0 /*41*/].f_30)))
		{
			func_369(uParam0, &(uParam1->f_1016[iVar0 /*41*/].f_30), 1);
		}
		iVar0++;
	}
}

void func_192(var uParam0, Vector3 vParam1)
{
	if (func_90(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 /*3*/ };
}

float func_193(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_194(var uParam0)
{
	return uParam0->f_435;
}

void func_195()
{
	struct<4> /*32*/ sVar0;

	Global_1946054.f_858--;
	if (Global_1946054.f_858 <= 0)
	{
		sVar0.f_0 = 35;
		func_370(sVar0);
	}
}

void func_196(var uParam0)
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

void func_197(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_83(uParam0, 16))
		{
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_371(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, false);
		}
	}
	if (func_83(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_103(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_103(uParam0, 16, 1);
}

float func_198(var uParam0)
{
	return uParam0->f_434;
}

struct<8> /*64*/ func_199(var uParam0)
{
	return uParam0->f_446;
}

void func_200(var uParam0)
{
	char cVar0[64];

	cVar0 = { func_372() /*8*/ };
	func_180(uParam0, &cVar0);
}

void func_201(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_83(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_373(uParam0->f_5, 0.0f, 0.0f, 0.0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f, func_181());
		func_96(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_374(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_96(uParam0, 16);
	}
}

bool func_202()
{
	return Global_1946054.f_1497 != Global_1946054.f_2163.f_1;
}

void func_203(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_375(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_370(sVar0);
}

int func_204()
{
	return Global_1899516;
}

int func_205()
{
	return Global_1899515;
}

int func_206(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_207(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

struct<8> /*64*/ func_208(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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

bool func_209(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_210()
{
	if (func_376(Global_43801))
	{
		func_377(&Global_43801, 0, 0);
	}
}

char* func_211(int iParam0)
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
	return func_378(iVar0);
}

bool func_212(int iParam0)
{
	int iVar0;

	if (func_379(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_213(int iParam0, bool bParam1)
{
	if (bParam1 && !func_376(iParam0))
	{
		return false;
	}
	return !func_380(iParam0, 4);
}

bool func_214(bool bParam0, bool bParam1)
{
	if (!func_376(Global_43801))
	{
		Global_43801 = func_381("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, (1 << 30), 0, 1065353216, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
		Global_1945188[Global_43801 /*18*/].f_16 = Global_23[3];
		func_382(Global_43801, 0, 1);
		func_383(Global_43801, 6, 1);
		if (bParam1)
		{
			func_383(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_213(Global_43801, 0))
		{
			func_384(Global_43801, 1, 1);
		}
		if (func_385(Global_43801, 1) != 0.0f && bParam0)
		{
			func_382(Global_43801, 1, 1);
		}
		else
		{
			func_382(Global_43801, 0, 1);
		}
		return func_386(Global_43801, 1);
	}
	return false;
}

bool func_215(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_216(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> /*64*/ sVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_462[iVar0 /*9*/])))
		{
			sVar1 = { uParam0->f_446 /*8*/ };
			uParam0->f_462[iVar0 /*9*/] = { sVar1 /*8*/ };
		}
		iVar0++;
	}
	func_180(uParam0, sParam1);
	func_103(uParam0, (1 << 21), 1);
	func_96(uParam0, (1 << 25));
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1, true);
}

void func_217(var uParam0, char* sParam1)
{
	if (((!func_83(uParam0, 32) || func_387(uParam0)) || func_83(uParam0, (1 << 28))) && !func_83(uParam0, (1 << 16)))
	{
		func_297(&(uParam0->f_500), 256);
	}
}

void func_218(var uParam0, bool bParam1)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 9, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 7, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 8, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 10, bParam1);
	}
}

bool func_219()
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("DOC_PLAYER_JOURNAL")) > 0;
}

void func_220()
{
	int iVar0;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == joaat("DOC_PLAYER_JOURNAL"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
			}
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
			return;
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
}

bool func_221()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	return false;
}

void func_222(bool bParam0)
{
	if (func_221())
	{
		Global_1357509 = 1;
	}
	if (func_388(joaat("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == joaat("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}
}

void func_223(var uParam0, char[16] cParam1)
{
	uParam0->f_440 = { cParam1 /*4*/ };
}

bool func_224()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		return true;
	}
	return false;
}

void func_225(var uParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])))
		{
			func_389(uParam0, &(uParam0->f_462[iVar0 /*9*/]));
		}
		iVar0++;
	}
	cVar1 = { func_372() /*8*/ };
	func_389(uParam0, &cVar1);
	cVar1 = { func_179(uParam0) /*8*/ };
	func_389(uParam0, &cVar1);
}

void func_226(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_242(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (func_242(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_390(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
					if (iVar1 != Global_35 && !func_242(&(uParam0->f_13[iVar0 /*12*/]), 16))
					{
						func_391(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_227(var uParam0)
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
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_242(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_392(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

float func_228(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_229()
{
	return func_379(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_230()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

void func_231(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

Vector3 func_232(var uParam0)
{
	return uParam0->f_502;
}

void func_233(var uParam0)
{
	bool bVar0;

	if (func_393(&bVar0))
	{
		if (func_394(bVar0, 0))
		{
			if (func_395(bVar0) == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("MASKS_LARGE"), 0);
				func_251(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, joaat("MP_COMPONENT_TYPE_HEADWEAR"), 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!func_394(*uParam0, 0))
			{
				*uParam0 = bVar0;
			}
		}
	}
}

void func_234(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_396(0, 0);
		func_397(-1);
	}
	func_92(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_215(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_215(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_215(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_215(*uParam0, (1 << 17)))
	{
		iParam1 |= (1 << 11);
	}
	if (!func_215(*uParam0, (1 << 15)))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!func_215(*uParam0, 1))
	{
		PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(0, 0);
	}
	if (!func_215(*uParam0, (1 << 16)))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_215(*uParam0, 4) && !func_215(*uParam0, 2))
	{
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	}
	if (!func_215(*uParam0, (1 << 11)))
	{
		func_398(0, 0);
	}
	if (func_215(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_215(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (func_215(*uParam0, (1 << 13)))
	{
		func_399();
	}
	if (!func_215(*uParam0, (1 << 18)))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_215(*uParam0, (1 << 9)))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_215(*uParam0, (1 << 10)))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0.0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0.0f, 0.0f, 0.0f);
		}
		if (!func_215(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_400() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_90(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0.0f, (float)(-1 + iVar2), 0.0f) /*3*/ };
						func_401(&vVar3, 50, 10, 0);
					}
					PED::DETACH_CARRIABLE_ENTITY(iVar7, false, true);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_402(2);
						func_403(-1);
						func_404(vVar3);
						func_406(func_405());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_215(*uParam0, (1 << 12)))
	{
		func_391(Global_35);
	}
	if (!func_215(*uParam0, (1 << 20)))
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, true, false);
	}
	if (!func_215(*uParam0, (1 << 21)))
	{
		if (func_407() || PED::_IS_PED_DRUNK(Global_35))
		{
			func_112(1);
		}
	}
	if (Global_1359489.f_16 & (1 << 22) == 0)
	{
		Global_1359489.f_16 |= (1 << 22);
	}
	*uParam0 = 0;
}

void func_235(var uParam0, Vector3 vParam1)
{
	uParam0->f_502 = { vParam1 /*3*/ };
}

void func_236(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	if (func_83(uParam0, (1 << 11)) && !func_90(func_408(uParam0)))
	{
		bVar0 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_4);
		bVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(bVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(bVar1, uParam0->f_4, true, 0)) || func_83(uParam0, (1 << 31)))) && PED::GET_MOUNT(Global_35) != bVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(bVar1))
			{
				iVar2 |= 32;
			}
			func_287(bVar1, func_408(uParam0), func_409(uParam0), iVar2, (1 << 30));
		}
		bVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(bVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(bVar3, uParam0->f_4, true, 0)) || func_83(uParam0, (1 << 31)))) && !PED::IS_PED_IN_VEHICLE(Global_35, bVar3, true))
		{
			func_287(bVar3, func_408(uParam0), func_409(uParam0), 2, (1 << 30));
		}
	}
}

void func_237(var uParam0)
{
	bool bVar0;
	Vector3 vVar1;

	if ((func_83(uParam0, (1 << 28)) && !func_90(func_408(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(bVar0))
		{
			vVar1 = { func_408(uParam0) /*3*/ };
			func_287(bVar0, vVar1, func_410(vVar1, Global_36, 1), 2, (1 << 30));
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bVar0, false);
			ENTITY::SET_ENTITY_VELOCITY(bVar0, 0.0f, 0.0f, 0.0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(bVar0, 0.0f);
		}
	}
}

void func_238(var uParam0, Vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_505 = { vParam1 /*3*/ };
	uParam0->f_508 = iParam4;
	if (func_90(vParam1))
	{
		func_103(uParam0, (1 << 11), 1);
	}
	else
	{
		func_96(uParam0, (1 << 11));
		if (bParam5)
		{
			func_96(uParam0, (1 << 31));
		}
	}
}

void func_239(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
				{
					if (!func_242(&(uParam0->f_13[iVar0 /*12*/]), 8))
					{
						if (func_412(func_411(iVar1, 0, 1, 0)))
						{
							if (!func_413(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (func_412(func_411(iVar1, 1, 1, 0)))
						{
							if (!func_413(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_240(var uParam0, bool bParam1)
{
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("HOLSTERS_LEFT"), 0);
			Global_17 = !bParam1;
		}
	}
}

void func_241(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_254() != -1;
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
			func_414((1 << 18));
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_415(iParam1, 29, bVar4, 1, 0);
			func_415(iParam1, 31, bVar4, 1, 0);
			func_415(iParam1, 30, bVar4, 1, 0);
			func_415(iParam1, 22, bVar4, 1, 0);
			func_415(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_416((1 << 15)) && func_417(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8)) && func_418(10, iParam3))
	{
		func_419(iParam1, 0, 1);
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
			iVar3 = func_420(iVar1, 1);
			if (func_417(iVar3, 8))
			{
			}
			else if (Global_1946054.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_418(iVar1, iParam3))
				{
				}
				else if ((func_417(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_417(iVar3, 1) || bParam2)
					{
						Global_1946054.f_857++;
						if (!bParam6)
						{
							func_415(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_421(iVar3, 1, 6);
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
								func_415(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946054.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_417(iVar3, 1))
							{
								func_422(iVar3, 1, 6);
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

bool func_242(var uParam0, int iParam1)
{
	return uParam0->f_11 & iParam1 != 0;
}

void func_243(var uParam0)
{
	strcpy_s(&(uParam0->f_440), 32, "");
	func_423(uParam0);
	func_192(uParam0, 0.0f, 0.0f, 0.0f);
	func_424(uParam0);
}

void func_244(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		uParam0->f_13[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_245(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_246(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		func_425(&(uParam0->f_13[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_247(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_248(bool bParam0)
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
		func_210();
	}
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0);
}

void func_249(int iParam0)
{
	func_426();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
}

void func_250()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

int func_251(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
	{
		sVar0 = { func_427(bParam1, 1, 0) /*5*/ };
		iParam3 = func_428(sVar0.f_4);
		if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
		{
			return 0;
		}
	}
	if (!func_430(bParam1, iParam2, func_429(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_431(1, (func_254() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (bParam8 && bParam1 != Global_1946054.f_57[func_429(iParam3, 1) /*11*/])
			{
				func_432(31, 0, 0, 0, 0);
			}
			break;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (func_416((1 << 15)) && bParam1 != Global_1946054.f_57[func_429(iParam3, 1) /*11*/])
			{
				func_433();
				func_432(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_432(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_434(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_432(19, 0, iVar5, 0, 0);
		if ((iParam3 == joaat("MP_COMPONENT_TYPE_NECKWEAR_1") || iParam3 == joaat("MP_COMPONENT_TYPE_HEADWEAR")) || iParam3 == joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"))
		{
			func_203(0);
			func_435(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_432(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_252(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_427(bParam0, 0, 0) /*5*/ };
	sVar5 = { func_436(bParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_437(bParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_438(0), &sVar5, bParam1);
}

bool func_253(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	Vector3 vVar5;
	Vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(bParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(bParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(bParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(bParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_153(*iParam1, 128))
	{
		if (!func_439(bParam0, joaat("SCRIPT_TASK_PICKUP_CARRIABLE_ENTITY")))
		{
			TASK::CLEAR_PED_TASKS(bParam0, true, false);
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_153(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_440(iVar2))
			{
				return false;
			}
			if (!func_439(bParam0, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")))
			{
				if (fParam7 != 0.0f && fParam8 != 0.0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(bParam0, true, false) /*3*/ };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_441(iVar2, vVar5))
					{
						iParam4 = (1 << 17);
					}
					else
					{
						iParam4 = (1 << 18);
					}
					if (!func_153(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(bParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_442(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(bParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(bParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(bParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(bParam0)));
			func_161(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (func_153(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bParam0, false, true);
			*iParam1 = 0;
			return true;
		}
	}
	if (func_153(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_440(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(bParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_442(iParam2, 2) && PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (!func_442(iParam2, (1 << 11)))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (func_442(iParam2, (1 << 13)))
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
		if (func_153(*iParam1, 2336))
		{
			if (!func_440(iVar2))
			{
			}
			if (func_443(iVar2, *iParam1))
			{
				func_154(iParam1, 32);
				func_154(iParam1, 256);
				func_154(iParam1, (1 << 11));
				func_161(iParam1, (1 << 9));
				func_161(iParam1, (1 << 10));
				func_161(iParam1, (1 << 12));
			}
			else
			{
				return false;
			}
		}
		if (func_153(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_440(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return false;
			}
			else
			{
				func_154(iParam1, 64);
			}
		}
		if (func_442(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_442(iParam2, (1 << 10)))) || func_442(iParam2, 8)) && !func_153(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_161(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_442(iParam2, (1 << 12))) && !func_153(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_161(iParam1, (1 << 11));
			func_161(iParam1, (1 << 12));
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_442(iParam2, 32)) && !func_153(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_161(iParam1, 256);
			func_161(iParam1, (1 << 10));
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_161(iParam1, 64);
		}
		else if (!func_442(iParam2, 1))
		{
			if (!func_442(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(bParam0, true, 0);
			}
			if (fParam7 != 0.0f && fParam8 != 0.0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_441(iVar2, vVar8))
				{
					iParam4 = (1 << 17);
				}
				else
				{
					iParam4 = (1 << 18);
				}
				if (!func_153(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0.0f);
			func_161(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(bParam0, 1000);
			func_161(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_442(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(bParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_161(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!func_442(iParam2, (1 << 9)))
	{
		TASK::TASK_STAND_STILL(bParam0, 200);
		func_161(iParam1, 8);
	}
	return false;
}

int func_254()
{
	return Global_1572887.f_12;
}

bool func_255(int iParam0)
{
	if (!func_444(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_256(bool bParam0, int iParam1)
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
	if (func_153(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_153(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_153(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_153(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_153(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_153(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_153(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_153(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

int func_257()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_258(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_114(iParam0))
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

void func_259(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (PED::_GET_PEDS_IN_COMBAT_WITH_TARGET(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (bParam0)
				{
					if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iVar3)))
					{
						PERSCHAR::_FORCE_DESPAWN_PERSCHAR(PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iVar3));
					}
					else
					{
						PED::DELETE_PED(&iVar3);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar3, false, false);
					if (bParam2)
					{
						TASK::_0xDF94844D474F31E5(iVar3);
					}
				}
			}
			iVar1 += -1;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_260(float fParam0)
{
	func_445(10, fParam0);
}

bool func_261()
{
	if (func_254() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_262()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0.0f;
}

bool func_263(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_444(iParam0))
		{
			return false;
		}
	}
	return Global_40.f_4942[iParam0 /*60*/] & iParam1 != 0;
}

void func_264(var uParam0, int iParam1)
{
	uParam0->f_1683 = iParam1;
}

void func_265(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_266(var uParam0, int iParam1)
{
	int iVar0;

	if (func_299(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HACK_RADAR_FORCE_HIDE"));
			break;
		default:
			if (func_147())
			{
				if (!func_63(uParam0, (1 << 19)))
				{
					HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
				}
				HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HACK_RADAR_FORCE_HIDE"));
			}
			break;
	}
	if (func_147())
	{
		func_298(uParam0, (1 << 9));
		func_446(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (func_447(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_448(uParam0->f_1016[uParam0->f_1684 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_148();
	func_163(uParam0, 1, 0);
	func_64(uParam0);
	if (func_63(uParam0, (1 << 19)) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	func_446(uParam0, 4);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_1875);
	}
	if (func_299(uParam0, 8) && CAM::_IS_CAM_DATA_DICT_LOADED(func_449()))
	{
		CAM::_UNLOAD_CAMERA_DATA_DICT(func_449());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[iVar0 /*22*/].f_2), func_449())) && CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1345[iVar0 /*22*/].f_21)
			{
				CAM::_UNLOAD_CAMERA_DATA_DICT(&(uParam0->f_1345[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_63(uParam0, (1 << 19)) || iParam1 == 1)
	{
		func_210();
	}
	if (func_299(uParam0, 16))
	{
		if (func_450(uParam0) == 0)
		{
			if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
			{
			}
		}
		else if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
		{
			CAM::_CAM_DESTROY(&(uParam0->f_1692));
		}
	}
	func_451();
	if (func_299(uParam0, 32))
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1.0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901))
	{
		if (!func_63(uParam0, (1 << 13)))
		{
			if (VEHICLE::_GET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901) != 50.0f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50.0f);
			}
		}
		if (VEHICLE::_IS_VEHICLE_BROUGHT_TO_HALT(uParam0->f_1901))
		{
			VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(uParam0->f_1901);
		}
	}
	func_452(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1921);
	}
	return 1;
}

void func_267(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_268(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_269(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_453(Global_1835011[iParam0 /*74*/].f_1);
}

struct<4> /*32*/ func_270(var uParam0)
{
	return uParam0->f_440;
}

bool func_271(int iParam0)
{
	if (!func_454(iParam0))
	{
		return false;
	}
	return func_455(iParam0, 8);
}

void func_272(int iParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	func_54(iParam0);
	func_55(iParam0);
	func_183(iParam0, iParam1, 0);
	func_185(iParam0, iParam1);
	func_184(*iParam0, iParam1);
}

int func_273(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	Vector3 vVar0;

	if (!func_114(iParam1))
	{
		return 0;
	}
	if (func_456(iParam0, *bParam2))
	{
		if (*bParam2 != func_457(iParam1))
		{
		}
		return 1;
	}
	vVar0 = { fParam5, fParam6, fParam7 /*3*/ };
	if (func_90(vVar0))
	{
		vVar0 = { func_126(*iParam0) /*3*/ };
	}
	if (!func_458(iParam1, 28, 1))
	{
		func_459(iParam1, 28, 1);
	}
	*bParam2 = func_460(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*bParam2))
	{
		if (!PED::IS_PED_READY_TO_RENDER(*bParam2))
		{
			return 0;
		}
		func_292(iParam0, *bParam2);
		func_461(iParam0, *bParam2);
		func_462(*bParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam2, true);
			if (!func_439(*bParam2, joaat("SCRIPT_TASK_STAND_STILL")))
			{
				TASK::TASK_STAND_STILL(*bParam2, -1);
			}
		}
		func_143(iParam0, *bParam2, 0, 0, 0, 1, 0);
		func_463(iParam1, 0, 0, 1);
		func_464(iParam1);
		return 1;
	}
	return 0;
}

bool func_274(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HIGHPRESSURE"):
		case joaat("SUNNY"):
			return true;
		default:
			break;
	}
	return false;
}

void func_275(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_465(bParam0, iParam1))
		{
			if (func_466(bParam0, iParam1))
			{
				if (func_467(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_468(bParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(bParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
			}
			PED::_SET_PED_DIRT_CLEANED(bParam0, 0.0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 9);
		}
	}
}

void func_276()
{
	STREAMING::REQUEST_MODEL(joaat("P_CS_BOOK_SMALL01X"), false);
	STREAMING::REQUEST_MODEL(joaat("WAGON02X"), false);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_19);
}

bool func_277(char* sParam0)
{
	if (DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam0)))
	{
		return true;
	}
	return false;
}

void func_278(int iParam0, char[12] cParam1, var uParam4)
{
	MemCopy(&(iParam0->f_2880), {cParam1}, 4);
	func_25(iParam0, (1 << 15));
	func_469(&(iParam0->f_958), uParam4);
}

void func_279(var uParam0, float fParam1)
{
	uParam0->f_434 = fParam1;
}

void func_280(var uParam0, float fParam1)
{
	uParam0->f_435 = fParam1;
}

int func_281(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_333(uParam0[iVar1 /*3*/]))
		{
			if (func_334((uParam0[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_470(uParam0[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (func_336(uParam1[iVar1 /*5*/]))
		{
			if (func_334((uParam1[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_471(uParam1[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (func_338(uParam2[iVar1 /*3*/]))
		{
			if (func_334((uParam2[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_472(uParam2[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (func_340(uParam3[iVar1 /*3*/]))
		{
			if (func_334((uParam3[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_341(uParam3[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_334(uParam4->f_1, iParam12))
	{
		if (!func_342(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_343(uParam5[iVar1 /*67*/]))
		{
			if (func_334((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_473(uParam5[iVar1 /*67*/]))
				{
					if (!func_474(uParam5[iVar1 /*67*/]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_343(uParam5[iVar1 /*67*/]))
		{
			if (func_334((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_473(uParam5[iVar1 /*67*/]))
				{
					if (func_474(uParam5[iVar1 /*67*/]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_345(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/])))
							{
								if (!func_475(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/]), (uParam5[iVar1 /*67*/])->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (func_347(uParam6[iVar1 /*4*/]))
		{
			if (func_334((uParam6[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_476(uParam6[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (func_349(uParam7[iVar1 /*5*/]))
		{
			if (func_334((uParam7[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_477(uParam7[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (func_351(uParam8[iVar1 /*3*/]))
		{
			if (func_334((uParam8[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_478(uParam8[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (func_353(uParam9[iVar1 /*3*/]))
		{
			if (func_334((uParam9[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_479(uParam9[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (func_355(uParam10[iVar1 /*4*/]))
		{
			if (func_334((uParam10[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_480(uParam10[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (func_357(uParam11[iVar1 /*3*/]))
		{
			if (func_334((uParam11[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_481(uParam11[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_282(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	return func_482(iParam0);
	return -1;
}

bool func_283(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0 = { func_186(iParam0) /*2*/ };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&sVar0))
		{
			return false;
		}
	}
	return true;
}

bool func_284(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0 = { func_187(iParam0) /*2*/ };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&sVar0))
		{
			return false;
		}
	}
	return true;
}

void func_285()
{
	iLocal_18 = VOLUME::CREATE_VOLUME_CYLINDER(1877.226f, -1879.845f, 42.88964f, 0.0f, 0.0f, 0.0f, 2.469328f, 3.598513f, 1.218163f);
}

struct<4> /*32*/ func_286(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_483(iParam0, iParam1) /*3*/ };
	sVar0.f_3 = func_484(iParam0, iParam1);
	return sVar0;
}

void func_287(bool bParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(bParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_SET_PED_TO_DISABLE_RAGDOLL(iVar1, true);
		}
	}
	if (bParam0 == func_485(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_486(bParam0))
	{
		if (func_487(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(bParam0);
		}
	}
	if (func_153(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			bVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				iParam5 -= iParam5 & 4;
				func_287(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			bVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2) && !ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				iParam5 -= iParam5 & 4;
				func_287(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_153(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (func_153(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_153(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_153(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bParam0, false);
		}
	}
	else if (func_153(iParam5, 129))
	{
		if (func_153(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, func_153(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_153(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_153(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (func_486(bParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_153(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !func_153(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

void func_288(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::ADD_TO_ITEMSET(iParam0, iParam1);
		}
	}
}

char* func_289()
{
	return "cutDeleteMe";
}

void func_290(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(bParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_488(bParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam1))
		{
		}
		return;
	}
	iVar0 = func_489(uParam0, bParam1);
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
		bVar1 = func_490(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(bVar1) && bVar1 != bParam1)
		{
			func_491(uParam0, bVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_492(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = bParam1;
		strcpy_s(&(uParam0->f_13[iVar0 /*12*/].f_1), 64, sParam2);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_392(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			func_425(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

void func_291(int iParam0, bool bParam1, char* sParam2)
{
	func_493(&(iParam0->f_958), bParam1, sParam2, 0);
}

void func_292(int iParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(bParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(bParam1, iParam0->f_5))
	{
		ITEMSET::ADD_TO_ITEMSET(bParam1, iParam0->f_5);
		if (ENTITY::IS_ENTITY_AN_OBJECT(bParam1))
		{
			if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam1)))
			{
				EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam1), true, true);
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(bParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(iVar0, "SpMissionTriggers", 0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				ANIMSCENE::_SET_BREAKOUT_ARCHETYPE(iVar0, "ClosestScenario");
			}
			EVENT::_0x1A5C5D350068A673(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1), 0);
			ITEMSET::ADD_TO_ITEMSET(bParam1, iParam0->f_6);
		}
	}
}

char* func_293(int iParam0)
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

int func_294(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar1 /*12*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_295(int iParam0)
{
	return Global_43884 == iParam0;
}

Vector3 func_296(var uParam0, int iParam1)
{
	Vector3 vVar0[2];
	Vector3 vVar7;
	Vector3 vVar10;
	float fVar13;

	switch (uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { uParam0->f_1016[iParam1 /*41*/].f_4 - uParam0->f_1016[iParam1 /*41*/].f_1 /*3*/ };
			vVar10 = { vVar7.y, (vVar7.x * -1.0f), 0.0f /*3*/ };
			vVar10 = { func_494(vVar10) * Vector(2.0f, 2.0f, 2.0f) /*3*/ };
			vVar0[0 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + uParam0->f_1016[iParam1 /*41*/].f_4 / Vector(2.0f, 2.0f, 2.0f) + vVar10 /*3*/ };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + uParam0->f_1016[iParam1 /*41*/].f_4 / Vector(2.0f, 2.0f, 2.0f) - vVar10 /*3*/ };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!func_90(vVar0[0 /*3*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[0 /*3*/], uParam0->f_1016[iParam1 /*41*/].f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[1 /*3*/], uParam0->f_1016[iParam1 /*41*/].f_7, true))
				{
					return vVar0[1 /*3*/];
				}
				else
				{
					return vVar0[0 /*3*/];
				}
			}
			break;
		case 1:
			fVar13 = 0.0f;
			if (uParam0->f_1016[iParam1 /*41*/].f_13 < uParam0->f_1016[iParam1 /*41*/].f_12)
			{
				fVar13 = ((uParam0->f_1016[iParam1 /*41*/].f_12 + (uParam0->f_1016[iParam1 /*41*/].f_13 + 360.0f)) / 2.0f);
			}
			else
			{
				fVar13 = ((uParam0->f_1016[iParam1 /*41*/].f_12 + uParam0->f_1016[iParam1 /*41*/].f_13) / 2.0f);
			}
			vVar0[0 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0.0f, (BUILTIN::COS(fVar13) * (uParam0->f_1016[iParam1 /*41*/].f_11 + 5.0f)), (BUILTIN::SIN(fVar13) * (uParam0->f_1016[iParam1 /*41*/].f_11 + 5.0f))) /*3*/ };
			vVar0[0 /*3*/].f_2 += 10.0f;
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			if (!func_90(vVar0[0 /*3*/]))
			{
				return vVar0[0 /*3*/];
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_298(var uParam0, int iParam1)
{
	uParam0->f_1664 -= uParam0->f_1664 & iParam1;
}

bool func_299(var uParam0, int iParam1)
{
	return uParam0->f_1666.f_1 & iParam1 != 0;
}

bool func_300(var uParam0, int iParam1)
{
	return func_495(uParam0->f_27, iParam1);
}

void func_301(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 2) && VOLUME::DOES_VOLUME_EXIST(iParam0->f_35))
	{
		func_496(iParam0->f_35);
		func_165(iParam0->f_35);
		MISC::CLEAR_BIT(&(iParam0->f_21), 2);
	}
}

void func_302(int iParam0)
{
	func_165(iParam0->f_36);
}

void func_303(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

bool func_304(int iParam0)
{
	int iVar0;

	iVar0 = func_497(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_305(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!func_256(bParam1, 0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(iParam2) && MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 17))
	{
		MAP::_0x97F6F158CC5B5CA2(bParam1, iParam2);
		MISC::SET_BIT(&(uParam0->f_21), 17);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 18) && iParam3 != 0)
	{
		if (!MAP::_0x3CB8859F04763C78(bParam1, iParam2))
		{
			MAP::_0xBB68D4D3CA3DE402(bParam1, iParam3);
		}
		MISC::SET_BIT(&(uParam0->f_21), 18);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 17) && MISC::IS_BIT_SET(uParam0->f_21, 18))
	{
		return 1;
	}
	return 0;
}

float func_306(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_307(var uParam0, float fParam1)
{
	if (!MISC::IS_BIT_SET(*uParam0, 14))
	{
		uParam0->f_26 = fParam1;
	}
}

void func_308(bool bParam0, int* iParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		return;
	}
	func_498(bParam0, iParam1);
	fVar0 = func_306(fParam3 >= 0.0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		func_499(iParam1, uParam2);
		func_500(iParam1);
		func_501(iParam1);
		if (!MISC::IS_BIT_SET(*iParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), iParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), iParam1->f_27);
				}
			}
		}
		func_502(0);
		POPULATION::_0xF45E46DEECF7DF6E((1 << 12), 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E((1 << 12), 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(iParam1->f_21, 2))
		{
			if (!VOLUME::DOES_VOLUME_EXIST(iParam1->f_35))
			{
				iParam1->f_35 = VOLUME::CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*bParam0, true, false), 0.0f, 0.0f, 0.0f, iParam1->f_26, iParam1->f_26, 20.0f);
			}
			else
			{
				func_503(iParam1->f_35, 0, 0);
				MISC::SET_BIT(&(iParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15)))
		{
			iVar1 = 0;
			if (func_504(Global_35, *bParam0, 1.0f) == 3)
			{
				iVar1 = (1 << 17);
			}
			else
			{
				iVar1 = (1 << 18);
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			func_505(Global_35, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, func_306(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && func_256(iParam1->f_28, 0)) && func_506(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !func_439(iParam1->f_28, joaat("SCRIPT_TASK_FLEE"))) && !func_439(iParam1->f_28, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

void func_309(int iParam0)
{
	if (MISC::IS_BIT_SET(*iParam0, 7))
	{
		if (MISC::IS_BIT_SET(iParam0->f_21, 3))
		{
			func_325(iParam0, 0);
		}
		return;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		func_19(&(iParam0->f_22), 0);
		if (iParam0->f_25 == 0.0f || func_507(&(iParam0->f_22), iParam0->f_25))
		{
			MISC::SET_BIT(&(Global_1955830.f_1), 5);
			CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
			HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
			if (!MISC::IS_BIT_SET(iParam0->f_21, 4))
			{
				MISC::SET_BIT(&(iParam0->f_21), 4);
			}
		}
	}
}

void func_310(int* iParam0, var uParam1, bool bParam2, bool bParam3, char* sParam4, float fParam5)
{
	float fVar0;

	if (ENTITY::IS_ENTITY_DEAD(*bParam2))
	{
		return;
	}
	fVar0 = func_306(fParam5 >= 0.0f, fParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam2, true, false)));
	if ((fVar0 >= (iParam0->f_26 + 0.5f) && MISC::IS_BIT_SET(iParam0->f_21, 20)) && MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (!func_439(Global_35, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *bParam2, 5000, -1.0f, -1.0f, -1.0f);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0.0f);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (bParam3 == 0)
	{
		func_508(iParam0, uParam1, bParam2, sParam4);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *bParam2, "ForcedILO", 0.0f, 0.0f, 0.0f, *bParam2, 0);
		MISC::SET_BIT(&(iParam0->f_21), 5);
	}
}

bool func_311(int* iParam0, bool bParam1)
{
	Vector3 vVar0;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		return true;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_439(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD")))
	{
		if (!MISC::IS_BIT_SET(iParam0->f_21, 19) && MISC::IS_BIT_SET(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 /*3*/ };
			iParam0->f_57 = { func_509(*bParam1, Global_35, 2.5f) /*3*/ };
			iParam0->f_57 = { iParam0->f_57 + Global_36 /*3*/ };
			iParam0->f_57.f_2 += 3.0f;
			func_510(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 /*3*/ };
			MISC::SET_BIT(&(iParam0->f_21), 19);
		}
		return true;
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_439(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD")))
	{
		if (func_511(Global_35))
		{
			iParam0->f_60 = func_400();
		}
		else
		{
			iParam0->f_60 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_60))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iParam0->f_60, Global_36, (1 << 30), 9);
		}
	}
	return false;
}

bool func_312(int* iParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*iParam0, 13))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM_IN_AIR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 6))
	{
		if (func_412(func_411(Global_35, 0, 1, 0)) || func_412(func_411(Global_35, 1, 1, 0)))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 6);
			MISC::CLEAR_BIT(&(iParam0->f_21), 7);
		}
		else
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		if (!func_412(func_411(Global_35, 0, 1, 0)) && !func_412(func_411(Global_35, 1, 1, 0)))
		{
			func_247(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
		else if (((func_412(func_411(Global_35, 0, 1, 0)) || func_412(func_411(Global_35, 1, 1, 0))) && !func_439(Global_35, joaat("SCRIPT_TASK_SWAP_WEAPON"))) && !func_439(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_19(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = func_21(&(iParam0->f_52)) >= 1.5f;
		if ((!func_412(func_411(Global_35, 0, 1, 0)) && !func_412(func_411(Global_35, 1, 1, 0))) || bVar0)
		{
			func_247(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

void func_313()
{
	func_152(&iLocal_28, 0);
	func_512(&(sLocal_89[0 /*17*/]), "SUS1_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_514(&iLocal_28, &sLocal_89, 0, func_513(35), 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

int func_314(bool bParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
	int iVar9;
	int iVar10;
	bool bVar11;

	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		func_515(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & (1 << 19) != false;
		bVar5 = iParam8 & (1 << 24) != false;
		bVar6 = iParam8 & (1 << 24) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0));
		fVar8 = func_306(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
		func_158(bParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
		if (!iParam8 & (1 << 21) != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 184, true);
		}
		if (iParam8 & (1 << 23) != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_26(&(iParam1->f_13));
		}
		if (func_516(*bParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_517(bParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_314(bParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_317(bParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & (1 << 25) != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*bParam0, 317, true))
						{
							func_518(*bParam0, 1, 1);
						}
					}
					else if (func_519(iParam1, 22))
					{
						func_518(*bParam0, 0, 1);
					}
				}
				if (func_520(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_521(bParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_522(iParam8);
					func_499(iParam1, uParam3);
					if (func_523(bParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_524(uParam3);
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
					func_525(iParam1, uParam3, fVar8);
					if (func_526(*bParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_318(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				if (func_520(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_527(*bParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_523(bParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_521(bParam0, func_520(bParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_522(iParam8);
					func_499(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					func_318(uParam3, 0, 0, 1, 1);
					func_528(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_439(Global_35, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")) && !func_439(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							iVar9 = 0;
							if (func_504(Global_35, *bParam0, 1.0f) == 3)
							{
								iVar9 = (1 << 17);
							}
							else
							{
								iVar9 = (1 << 18);
							}
							iParam1->f_28 = PED::GET_MOUNT(Global_35);
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, iVar9, 0, 0, 0, 0);
						}
					}
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && func_256(iParam1->f_28, 0)) && func_506(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !func_439(iParam1->f_28, joaat("SCRIPT_TASK_FLEE"))) && !func_439(iParam1->f_28, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3.0f), -1, 2304, 1.0f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!func_439(Global_35, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) && !func_439(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							iVar10 = 0;
							if (func_504(Global_35, *bParam0, 1.0f) == 3)
							{
								iVar10 = (1 << 17);
							}
							else
							{
								iVar10 = (1 << 18);
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, iVar10);
						}
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || func_311(iParam1, bParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_312(iParam1)))
					{
					}
					else if (!func_529(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0.0f)
						{
							func_26(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								func_530(uParam3, 0, 0);
							}
							iParam1->f_2 = 4;
						}
						if (iParam1->f_2 != 2 && iParam1->f_2 != 4)
						{
							iVar0 = iParam1->f_1;
							if (iVar0 != -1)
							{
								iParam1->f_1 = -1;
							}
							return iVar0;
						}
					}
				}
				break;
			case 4:
				if (func_531(bParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_520(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_527(*bParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_523(bParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_521(bParam0, func_520(bParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_522(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_318(uParam3, 0, 0, 1, 1);
					}
					func_528(iParam1, 1);
				}
				func_525(iParam1, uParam3, fVar8);
				if (func_531(bParam0, iParam1, fParam4, bVar6))
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
			func_532(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

struct<4> /*32*/ func_315(int iParam0)
{
	return iParam0->f_2880;
}

int func_316(var uParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (func_63(uParam0, (1 << 15)))
	{
		return 1;
	}
	if (func_8(uParam0) >= 3)
	{
		uParam0->f_1896 = func_533(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1897 = PED::IS_PED_FULLY_ON_MOUNT(Global_35, true);
		uParam0->f_1899 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1897)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1898 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1898 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1899)
		{
			uParam0->f_1901 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1902 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		func_534(uParam0);
	}
	if (func_8(uParam0) < 10)
	{
		if (func_8(uParam0) == 3)
		{
			func_535(uParam0, iParam5, bParam6);
		}
		else if (func_8(uParam0) > 3)
		{
			if (func_450(uParam0) == 0)
			{
				if (!func_63(uParam0, (1 << 19)))
				{
					func_536(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_264(uParam0, 4);
					func_265(uParam0, 10);
					func_266(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_63(uParam0, (1 << 26)) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_300(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
			func_502(0);
			func_537();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1684 >= 0)
			{
				if (!func_300(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), (1 << 15)))
				{
					HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_538(uParam0, uParam0->f_1684))
				{
					if (func_539(uParam0) < 7 && uParam0->f_1688 >= 0)
					{
						func_540(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216);
					}
				}
				else if (uParam0->f_1688 >= 0)
				{
					func_540(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216);
				}
				func_541(uParam0);
			}
		}
	}
	bVar0 = func_542(uParam0, iParam5, bParam6);
	bVar1 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);
	if (bVar0)
	{
		if ((!func_63(uParam0, (1 << 28)) && bVar1) && !func_63(uParam0, (1 << 18)))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902);
			if (uParam0->f_1684 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1016[uParam0->f_1684 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1902)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				func_543(uParam0, (1 << 17));
				func_543(uParam0, (1 << 28));
			}
		}
		if (func_299(uParam0, 64) || (uParam0->f_1684 >= 0 && !func_300(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), (1 << 19))))
		{
			if (CAM::GET_LETTER_BOX_RATIO() > 0.0f || func_450(uParam0) == 0)
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
				CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
			}
		}
	}
	if (func_8(uParam0) == 3 || func_63(uParam0, (1 << 17)))
	{
		func_544(uParam0);
		if (!func_63(uParam0, (1 << 18)))
		{
			if ((bVar0 && func_63(uParam0, (1 << 16))) || func_63(uParam0, (1 << 17)))
			{
				func_543(uParam0, (1 << 15));
				func_264(uParam0, 4);
				func_265(uParam0, 10);
				uParam0->f_1769 = 1;
				func_266(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_8(uParam0) >= 3)
	{
		func_545(uParam0, iParam5);
		func_546(uParam0);
		if (!func_547(uParam0, 1))
		{
			func_452(uParam0);
		}
		func_548(uParam0);
	}
	switch (func_8(uParam0))
	{
		case 0:
			func_549(uParam0, sParam1, iParam5);
			break;
		case 1:
			func_550(uParam0);
			break;
		case 2:
			func_551(uParam0);
			break;
		case 3:
			if (func_552(uParam0))
			{
				func_110(2);
				func_540(uParam0, uParam0->f_1016[uParam0->f_1684 /*41*/].f_27, uParam0->f_1345[uParam0->f_1684 /*22*/].f_1, 1065353216);
				func_26(&(uParam0->f_1872));
				func_264(uParam0, 1);
				func_553();
				func_265(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, true);
			if (!func_63(uParam0, (1 << 26)))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_8(uParam0) == 5)
			{
				if (func_554(uParam0))
				{
					func_264(uParam0, 2);
					func_265(uParam0, 6);
				}
			}
			if (func_8(uParam0) == 6)
			{
				if (func_555(uParam0))
				{
					func_264(uParam0, 3);
					func_265(uParam0, 8);
				}
			}
			if (uParam0->f_1685 >= 0 || func_21(&(uParam0->f_1872)) >= 15.0f)
			{
				if (func_556(uParam0, iParam5))
				{
					if (func_557(uParam0))
					{
						uParam0->f_1685 = func_558(uParam0);
						func_26(&(uParam0->f_1872));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						func_264(uParam0, 6);
						func_265(uParam0, 9);
					}
					else
					{
						func_264(uParam0, 4);
						func_265(uParam0, 10);
						func_266(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (func_556(uParam0, iParam5))
			{
				func_266(uParam0, iParam5);
				func_265(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

void func_317(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*bParam0);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 297, false);
	}
}

void func_318(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_376((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_377(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_319()
{
	func_318(&sLocal_89, 0, 0, 1, 0);
	func_152(&iLocal_28, 0);
	MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(bLocal_20);
}

void func_320(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

struct<8> /*64*/ func_321(var uParam0, bool bParam1)
{
	char cVar0[64];
	int iVar8;

	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		strcpy_s(&cVar0, 64, func_488(bParam1));
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			iVar8 = func_559(uParam0, bParam1);
			if (iVar8 > 0)
			{
				strcat_s(&cVar0, 64, "^");
				StringIntConCat(&cVar0, iVar8, 64);
			}
		}
	}
	return cVar0;
}

bool func_322(var uParam0, int iParam1)
{
	return uParam0->f_9 & iParam1 != 0;
}

void func_323(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (!bParam4)
	{
		if (func_74(0, 0, 1))
		{
			return;
		}
	}
	if (Global_43837 >= 5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]))
		{
			Global_43806[iVar0 /*6*/] = iParam0;
			Global_43806[iVar0 /*6*/].f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_43806[iVar0 /*6*/].f_3 = iParam1;
			Global_43806[iVar0 /*6*/].f_4 = iParam2;
			Global_43806[iVar0 /*6*/].f_5 = iParam3;
			Global_43837++;
			return;
		}
		iVar0++;
	}
}

int func_324(int iParam0, bool bParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_60) || !func_256(*bParam1, 0))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_60) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_60)) && iParam2 == 0)
	{
		return 0;
	}
	if (func_90(iParam0->f_57))
	{
		func_560(iParam0, bParam1);
	}
	func_510(iParam0->f_60, iParam0->f_57);
	iParam0->f_57 = { 0.0f, 0.0f, 0.0f /*3*/ };
	iParam0->f_60 = 0;
	return 0;
}

void func_325(int iParam0, bool bParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 7))
	{
		if (bParam1)
		{
			CAM::_FORCE_LETTER_BOX_THIS_UPDATE();
		}
		else
		{
			CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
		}
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 3);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 4))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 4);
	}
	HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
}

void func_326(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		MISC::CLEAR_BIT(&(iParam0->f_21), 5);
	}
	func_561();
}

void func_327(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_256(bParam1, 0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam1);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(iParam0->f_56))
		{
			iVar0 = iParam0->f_56;
		}
		else
		{
			return;
		}
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 16);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 18);
	}
	if (MAP::_0x3CB8859F04763C78(bParam1, iVar0))
	{
		MAP::_0x44813684F72B563C(bParam1, iVar0);
	}
	if (iParam0->f_55 != 0)
	{
		iParam0->f_55 = 0;
	}
}

void func_328(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_90(vParam0))
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
			if (func_562(vVar2, vParam0, 2.0f, 1))
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

void func_329(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_GROUP(iParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		PED::SET_PED_CAN_RAGDOLL(iParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
	}
}

void func_330(int iParam0, int iParam1, char* sParam2)
{
	func_563(&(iParam0->f_428), iParam1, sParam2);
}

bool func_331(var uParam0, int iParam1)
{
	return uParam0->f_63 & iParam1 != 0;
}

void func_332(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_459(iParam0, 56, 1);
		func_19(&(Global_1359489.f_40), 1);
	}
	func_564(iParam0, 0);
	func_565(iParam0, 4, 0);
	func_566(iParam0);
	func_567(iParam0);
	func_568(iParam0, 37, 1);
	bVar0 = func_256(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_569(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & (1 << 23) == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_458(iParam0, 64, 1))
	{
		func_568(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_568(iParam0, 33, 1);
		func_568(iParam0, 34, 1);
		func_570(iParam0, 1056964608, -1, 1061158912);
		func_571(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_459(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_459(iParam0, 35, 1);
			if (bParam8)
			{
				func_459(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_572(iParam0, 0);
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
		func_568(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_459(iParam0, 33, 1);
		func_571(iParam0, 0, 1, 0);
		if (fParam4 > 0.0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_19(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_247(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_459(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_573(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_458(iParam0, 45, 1))
	{
		func_568(iParam0, 45, 1);
	}
	func_574(iParam0, 16, 1);
	func_568(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_256(func_575(iParam0), 0))
		{
			func_576(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_333(var uParam0)
{
	return *uParam0 != 0;
}

bool func_334(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_577(iParam1);
	return iParam0 & iVar0 != 0;
}

void func_335(var uParam0)
{
	if (!func_578(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
		func_579(&(uParam0->f_1), 1);
	}
}

bool func_336(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_337(var uParam0)
{
	if (!func_578(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				TASK::REQUEST_WAYPOINT_RECORDING(*uParam0);
				break;
			case 1:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				break;
			default:
				break;
		}
		func_579(&(uParam0->f_3), 1);
	}
}

bool func_338(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_339(var uParam0)
{
	if (!func_578(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		func_579(&(uParam0->f_1), 1);
	}
}

bool func_340(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

bool func_341(var uParam0)
{
	if (func_578(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_578(uParam0->f_1, 1))
	{
		func_580(uParam0);
	}
	if (STREAMING::_0x85B8F04555AB49B8(*uParam0))
	{
		func_579(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_342(var uParam0)
{
	if (func_578(*uParam0, 2))
	{
		return true;
	}
	if (!func_578(*uParam0, 1))
	{
		func_581(uParam0);
	}
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_579(uParam0, 2);
		return true;
	}
	return false;
}

bool func_343(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_344(var uParam0)
{
	char* sVar0;

	if (!func_578(uParam0->f_2, 1))
	{
		if (func_473(uParam0))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
			{
				sVar0 = func_378(ENTITY::GET_ENTITY_MODEL(Global_35));
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, sVar0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_zero") && func_261())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_three") && func_582())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_three", Global_35, 0);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
				func_579(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_345(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_346(var uParam0, int iParam1)
{
	if (!func_578(uParam0->f_1, 1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1, true, false))
		{
			return;
		}
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam1, *uParam0);
		func_579(&(uParam0->f_1), 1);
	}
}

bool func_347(var uParam0)
{
	return *uParam0 != 0;
}

void func_348(var uParam0)
{
	if (!func_578(uParam0->f_2, 1))
	{
		PROPSET::_REQUEST_PROP_SET(*uParam0);
		func_579(&(uParam0->f_2), 1);
	}
}

bool func_349(var uParam0)
{
	return *uParam0 != 0;
}

void func_350(var uParam0)
{
	if (!func_578(uParam0->f_3, 1))
	{
		WEAPON::_REQUEST_WEAPON_ASSET(*uParam0, uParam0->f_1, uParam0->f_2);
		func_579(&(uParam0->f_3), 1);
	}
}

bool func_351(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_352(var uParam0)
{
	if (!func_578(uParam0->f_1, 1))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0);
		func_579(&(uParam0->f_1), 1);
	}
}

bool func_353(var uParam0)
{
	return func_583(*uParam0);
}

void func_354(var uParam0)
{
	if (!func_578(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_IPL_HASH(*uParam0);
		func_579(&(uParam0->f_1), 1);
	}
}

bool func_355(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_356(var uParam0)
{
	if (!func_578(uParam0->f_2, 1))
	{
		AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2);
		func_579(&(uParam0->f_2), 1);
	}
}

bool func_357(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_358(var uParam0)
{
	if (!func_578(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MOVE_NETWORK_DEF(*uParam0);
		func_579(&(uParam0->f_1), 1);
	}
}

int func_359(int iParam0)
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

int func_360(int iParam0)
{
	return iParam0 & 31;
}

int func_361(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

struct<8> /*64*/ func_362(var uParam0)
{
	return uParam0->f_454;
}

struct<8> /*64*/ func_363()
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "MultiStart");
	return cVar0;
}

bool func_364(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_79(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

Vector3 func_365(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return { -240.576f, 769.614f, 117.085f };
		case 34:
			return { 2544.982f, -1187.344f, 52.3104f };
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

int func_366(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return iVar0;
	}
	func_584(iParam0, bParam2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 2);
	iVar0 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iParam0, bParam2, 15);
	return iVar0;
}

void func_367(int iParam0)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(iParam0, Global_1393237.f_11[iVar0 /*30*/].f_3))
		{
			func_585(iVar0, (1 << 12), 0);
			func_585(iVar0, (1 << 17), 0);
			func_586(iVar0, 1);
		}
		iVar0++;
	}
}

int func_368(int iParam0, char[4] cParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_587(vVar0, vVar3.x, cParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_369(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_588(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])))
		{
			if (!func_589(uParam0, sParam1) || func_83(uParam0, (1 << 23)))
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
						func_96(uParam0, (1 << 22));
					}
				}
				else
				{
					func_96(uParam0, (1 << 22));
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

void func_370(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_590(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_590(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_591(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_414(8);
}

void func_371(var uParam0)
{
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

struct<8> /*64*/ func_372()
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "NormalStart");
	return cVar0;
}

bool func_373(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_374(var uParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_375(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_376(int iParam0)
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

void func_377(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_376(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_592(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_593(iVar0);
	*uParam0 = 0;
}

char* func_378(int iParam0)
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

bool func_379(int iParam0)
{
	return iParam0 != 0;
}

bool func_380(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

int func_381(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_380(iVar0, 2))
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
		func_594(iVar1, iParam1, sParam0, 0, iParam10, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, fParam6, fParam7, fParam8, bParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_382(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_376(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0);
	func_595(iVar0, bParam1);
}

void func_383(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_376(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TYPE(Global_1945188[iVar0 /*18*/].f_3, iParam1);
}

void func_384(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_376(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0);
	if (bParam1)
	{
		func_596(iParam0, 4);
		func_595(iVar0, 1);
		func_597(iVar0, 1);
	}
	else
	{
		func_598(iParam0, 4);
		func_597(iVar0, 0);
	}
}

float func_385(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_376(iParam0))
	{
		return 0.0f;
	}
	iVar0 = func_592(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_386(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_376(iParam0))
	{
		return false;
	}
	iVar0 = func_592(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_387(var uParam0)
{
	struct<8> /*64*/ sVar0;
	struct<8> /*64*/ sVar8;

	sVar0 = { func_199(uParam0) /*8*/ };
	sVar8 = { func_179(uParam0) /*8*/ };
	return MISC::ARE_STRINGS_EQUAL(&sVar0, &sVar8);
}

bool func_388(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			func_599(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_389(var uParam0, char* sParam1)
{
	struct<8> /*64*/ sVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	sVar0 = { func_199(uParam0) /*8*/ };
	if ((!MISC::ARE_STRINGS_EQUAL(&sVar0, sParam1) && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, sParam1)) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, sParam1))
	{
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1);
	}
}

void func_390(var uParam0, char* sParam1, int iParam2, int iParam3)
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

void func_391(int iParam0)
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

void func_392(var uParam0, int iParam1)
{
	uParam0->f_11 |= iParam1;
}

bool func_393(bool bParam0)
{
	if (-1829635046 == func_600(joaat("CI_CATEGORY_WARDROBE_MASK")))
	{
		if (func_601(bParam0))
		{
			return true;
		}
	}
	else if (func_602(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), bParam0))
	{
		if (func_601(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_394(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_395(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_394(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

void func_396(int iParam0, bool bParam1)
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

void func_397(int iParam0)
{
	int iVar0;

	if (func_254() != -1)
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

void func_398(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_412(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4)
					{
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar3), (WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), joaat("ADD_REASON_DEFAULT"));
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::GET_WEAPON_CLIP_SIZE(iVar3))
				{
					iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_603(1);
	}
}

void func_399()
{
	int iVar0;

	iVar0 = func_411(Global_35, 9, 1, 0);
	if (func_412(iVar0))
	{
		return;
	}
	iVar0 = func_411(Global_35, 7, 1, 0);
	if (func_412(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_411(Global_35, 0, 1, 0);
	if (func_412(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_411(Global_35, 1, 1, 0);
	if (func_412(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_411(Global_35, 18, 1, 0);
	if (func_412(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_604();
	if (func_412(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_605(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_606(6291456, 0);
	if (func_412(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_605(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_400()
{
	return Global_1900383.f_393;
}

int func_401(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_373(*uParam0, 0.0f, 0.0f, 0.0f))
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

void func_402(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_403(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_404(Vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 /*3*/ };
}

var func_405()
{
	return Global_1899515;
}

void func_406(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

bool func_407()
{
	return (func_607() || func_608());
}

Vector3 func_408(var uParam0)
{
	return uParam0->f_505;
}

float func_409(var uParam0)
{
	return uParam0->f_508;
}

float func_410(struct<2> /*16*/ sParam0, int iParam2, struct<2> /*16*/ sParam3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (sParam3.f_0 - sParam0.f_0);
	fVar2 = (sParam3.f_1 - sParam0.f_1);
	if (fVar2 != 0.0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0.0f)
	{
		fVar0 = -90.0f;
	}
	else
	{
		fVar0 = 90.0f;
	}
	if (iParam6 == 1)
	{
		fVar0 *= -1.0f;
		if (fVar0 < 0.0f)
		{
			fVar0 += 360.0f;
		}
	}
	return fVar0;
}

bool func_411(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_412(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

bool func_413(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_414(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_415(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_420(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (bParam4 != 0)
	{
		if (iVar2 == joaat("MP_COMPONENT_TYPE_HEADWEAR"))
		{
			iVar1 = func_609(bParam4);
		}
		else if (bParam4 != Global_1946054.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_SHOP_PED_COMPONENT_CATEGORY(bParam4, PED::_GET_META_PED_TYPE(iParam0), bParam2);
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

bool func_416(int iParam0)
{
	return Global_1946054 & iParam0 != 0;
}

bool func_417(int iParam0, int iParam1)
{
	return Global_1946054.f_57[func_429(iParam0, 1) /*11*/].f_10 & iParam1 != 0;
}

bool func_418(int iParam0, int iParam1)
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1 != 0;
}

void func_419(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_417(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 6))
	{
		if (bParam2)
		{
			func_415(iParam0, iVar0, func_254() != -1, 0, 0);
			func_421(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(iParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_422(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
	}
	Global_1946054.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

int func_420(int iParam0, int iParam1)
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

void func_421(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_429(iParam0, 1) /*11*/].f_10 |= iParam1;
}

void func_422(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_429(iParam0, 1) /*11*/].f_10 -= Global_1946054.f_57[func_429(iParam0, 1) /*11*/].f_10 & iParam1;
}

void func_423(var uParam0)
{
	struct<8> /*64*/ sVar0;

	uParam0->f_454 = { sVar0 /*8*/ };
}

void func_424(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		strcpy_s(&(uParam0->f_462[iVar0 /*9*/]), 64, "");
		iVar0++;
	}
}

void func_425(var uParam0, int iParam1)
{
	uParam0->f_11 -= uParam0->f_11 & iParam1;
}

void func_426()
{
	Global_1911774 = 1;
}

struct<5> /*40*/ func_427(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_610(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_611(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_436(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_612(bParam1) /*4*/ };
			if (bParam2 && func_613(bParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_614(bParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_614(bParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_615(bParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_616(bParam1) /*4*/ };
			switch (func_395(bParam0))
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
			if (func_617(bParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_436(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_617(bParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_436(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_618(sVar0, &sVar27, bParam1, 0))
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

int func_428(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_420(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

int func_429(int iParam0, int iParam1)
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

bool func_430(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_619();
	if (iParam2 == 39)
	{
		sVar0 = { func_427(bParam0, 1, 0) /*5*/ };
		iParam2 = func_429(func_428(sVar0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_620(bParam0, joaat("CI_TAG_ITEM_TALISMAN")) && func_621(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_416((1 << 15)) && iParam2 == 10) && bParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_622(func_420(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_623(iParam2);
	func_624(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_625(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_625(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_626(&(Global_1946054.f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = bParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_627(bParam0, iParam2, iParam1, func_254() != -1);
	if (bParam4)
	{
		func_628(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_628(&(Global_1946054.f_1378), 1, 0);
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
				func_422(func_420(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_431(bool bParam0, bool bParam1, bool bParam2)
{
	func_629(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_432(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_414((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_630(sVar0);
}

void func_433()
{
	func_631(&(Global_1946054.f_2776));
	func_632((1 << 15));
	func_422(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

int func_434(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_429(iParam0, 1);
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

void func_435(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = iParam2;
	sVar0.f_0 = iParam0;
	sVar0.f_2 = iParam1;
	func_370(sVar0);
}

struct<4> /*32*/ func_436(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_394(bParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_438(bParam6), &uParam1, bParam0, iParam5, &sVar0);
	return sVar0;
}

int func_437(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_394(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_436(bParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_438(bParam6), &sVar0, false);
	return iVar4;
}

int func_438(bool bParam0)
{
	if (func_254() == -1)
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

bool func_439(bool bParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			if (iParam1 == joaat("SCRIPT_TASK_DRIVE_BY") && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(bParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_440(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_GET_RIDER_OF_MOUNT(bParam0, false) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 0.0f);
	if (func_439(bParam0, joaat("SCRIPT_TASK_HORSE_ACTION")))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bParam0)))
	{
		return true;
	}
	return false;
}

bool func_441(int iParam0, Vector3 vParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	return func_633(vVar0, vVar3, vParam1);
}

bool func_442(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_443(bool bParam0, int iParam1)
{
	float fVar0;

	if (!func_439(bParam0, joaat("SCRIPT_TASK_HORSE_ACTION")))
	{
		return true;
	}
	fVar0 = TASK::_GET_SCRIPT_TASK_ACTION_TIME(bParam0, joaat("SCRIPT_TASK_HORSE_ACTION"));
	if (func_153(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_153(iParam1, 256))
	{
		if (fVar0 >= 1.0f)
		{
			return true;
		}
		return false;
	}
	if (func_153(iParam1, (1 << 11)))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

bool func_444(int iParam0)
{
	return iParam0 > -1;
}

void func_445(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0.0f;
		sVar2 = func_634(fParam1 < 0.0f, "rpg_cold", "rpg_hot");
		func_635(1, bVar1, 1, sVar2);
		func_636(!bVar1, fParam1 < 0.0f, bVar1);
		iVar0 = func_637(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_638();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_637(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_637(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_446(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 |= iParam1;
}

bool func_447(var uParam0, int iParam1)
{
	return uParam0->f_26 & iParam1 != 0;
}

char* func_448(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}
	return "Disabled";
}

char* func_449()
{
	return "default_leadin_camera";
}

int func_450(var uParam0)
{
	return *uParam0;
}

void func_451()
{
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("BANDANA"));
	STREAMING::REMOVE_ANIM_DICT(func_639(1));
}

void func_452(var uParam0)
{
	func_640(&(uParam0->f_1904));
}

bool func_453(int iParam0)
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
		iVar0 = func_641(iParam0);
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

bool func_454(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_455(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & iParam1 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & iParam1 != 0;
}

bool func_456(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return false;
	}
	return ITEMSET::IS_IN_ITEMSET(iParam1, iParam0->f_5);
}

int func_457(int iParam0)
{
	if (func_114(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_458(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_444(iParam0))
		{
			return false;
		}
	}
	func_642(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_459(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_444(iParam0))
		{
			return;
		}
	}
	func_642(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

int func_460(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	Vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_114(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_458(iParam0, 2, 1))
			{
				func_568(iParam0, 2, 1);
			}
			if (func_263(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_459(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_332(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_256(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_256(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_643(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_459(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_644(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_459(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_644(iParam0, 1);
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
			if (!func_458(iParam0, 44, 0))
			{
				func_459(iParam0, 44, 0);
			}
			if (func_645(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_644(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_568(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_571(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_463(iParam0, 0, 0, 1);
			}
			func_568(iParam0, 33, 1);
			func_568(iParam0, 34, 1);
			func_568(iParam0, 29, 1);
			if (!func_90(vVar0) && bParam7)
			{
				func_644(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_644(iParam0, 4);
			}
			else
			{
				func_644(iParam0, 5);
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
						func_643(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_287(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, (1 << 30));
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
				func_644(iParam0, 4);
			}
			else
			{
				func_644(iParam0, 5);
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
				if (func_646(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_647(iParam0, iParam13, 0);
						func_648(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_458(iParam0, 25, 0))
						{
							func_568(iParam0, 25, 0);
						}
						func_459(iParam0, 66, 0);
						func_644(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_644(iParam0, 5);
				}
				func_459(iParam0, 28, 1);
			}
			else
			{
				func_644(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_644(iParam0, 6);
			}
			break;
		case 6:
			if (func_256(Global_1360165[iParam0 /*1157*/], 0))
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
					func_649(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_650(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_644(iParam0, 7);
		case 7:
			func_571(iParam0, bParam9, bParam15, 0);
			func_565(iParam0, 4, bParam11);
			func_567(iParam0);
			if (bParam20)
			{
				if (func_651(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_652(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_644(iParam0, 0);
			func_653(iParam0, 16, 1);
			func_568(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_461(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_7))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, iParam0->f_7))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, iParam0->f_7);
	}
}

void func_462(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	if (bParam2 && (!func_164() || !ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(Global_43800, func_211(iParam0))))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iParam0, true, false);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
		if (!Global_1935630.f_12)
		{
			if (bParam1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
			}
		}
		PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_IDLE"), true, 0, false);
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS"));
	ENTITY::SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, false), 0);
	if (bParam3)
	{
		func_651(iParam0);
	}
}

void func_463(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_654(iParam0, bParam3);
	}
	else
	{
		func_655(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_656(iParam0, bParam3);
	}
	else
	{
		func_657(iParam0, bParam3);
	}
}

void func_464(int iParam0)
{
	bool bVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	bVar0 = func_255(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	PED::_SET_PED_DRUNKNESS(bVar0, false, 0.0f);
}

bool func_465(bool bParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(bParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_466(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_467(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (!func_465(bParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	return PED::_HAS_METAPED_OUTFIT_LOADED(iVar1);
}

void func_468(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

void func_469(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_470(var uParam0)
{
	if (func_578(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_578(uParam0->f_1, 1))
	{
		func_335(uParam0);
	}
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		func_579(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_471(var uParam0)
{
	if (func_578(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_578(uParam0->f_3, 1))
	{
		func_337(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
			{
				func_579(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
			{
				func_579(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_472(var uParam0)
{
	if (func_578(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_578(uParam0->f_1, 1))
	{
		func_339(uParam0);
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
	{
		func_579(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_473(var uParam0)
{
	Vector3 vVar0;
	var uVar3;

	if (func_578(uParam0->f_2, 1))
	{
		return true;
	}
	if (!uParam0->f_66)
	{
		return false;
	}
	if (uParam0->f_65 <= 0.0f)
	{
		return true;
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
	{
		ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_1, &vVar0, &uVar3, 2);
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true) > uParam0->f_65)
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_474(var uParam0)
{
	if (func_578(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_578(uParam0->f_2, 1))
	{
		func_344(uParam0);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		func_579(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_475(var uParam0, int iParam1)
{
	if (func_578(uParam0->f_1, 2))
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1, true, false))
	{
		return false;
	}
	if (!func_578(uParam0->f_1, 1))
	{
		func_346(uParam0, iParam1);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam1, *uParam0))
	{
		func_579(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_476(var uParam0)
{
	if (func_578(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_578(uParam0->f_2, 1))
	{
		func_348(uParam0);
	}
	if (PROPSET::_HAS_PROP_SET_LOADED(*uParam0))
	{
		func_579(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_477(var uParam0)
{
	if (func_578(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_578(uParam0->f_3, 1))
	{
		func_350(uParam0);
	}
	if (WEAPON::_HAS_WEAPON_ASSET_LOADED(*uParam0))
	{
		func_579(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_478(var uParam0)
{
	if (func_578(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_578(uParam0->f_1, 1))
	{
		func_352(uParam0);
	}
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0))
	{
		func_579(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_479(var uParam0)
{
	if (func_578(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_578(uParam0->f_1, 1))
	{
		func_354(uParam0);
	}
	if (STREAMING::IS_IPL_ACTIVE_HASH(*uParam0))
	{
		func_579(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_480(var uParam0)
{
	if (func_578(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_578(uParam0->f_2, 1))
	{
		func_356(uParam0);
	}
	if (AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2))
	{
		func_579(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_481(var uParam0)
{
	if (func_578(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_578(uParam0->f_1, 1))
	{
		func_358(uParam0);
	}
	if (STREAMING::HAS_MOVE_NETWORK_DEF_LOADED(*uParam0))
	{
		func_579(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_482(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

Vector3 func_483(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 1883.958f, -1877.707f, 42.8094f };
				case 1:
					return { 1859.414f, -1833.675f, 43.0346f };
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

float func_484(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 75.1454f;
				case 1:
					return 419.975f;
			}
			break;
	}
	return 0.0f;
}

bool func_485(var uParam0)
{
	return uParam0;
}

bool func_486(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_487(int iParam0)
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

char* func_488(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return func_211(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
	{
		return func_144(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
	{
		return func_658(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	return "";
}

int func_489(var uParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_490(var uParam0, char* sParam1)
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

void func_491(var uParam0, bool bParam1)
{
	struct<12> /*96*/ sVar0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 35)
	{
		if (uParam0->f_13[iVar12 /*12*/] == bParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { sVar0 /*12*/ };
			return;
		}
		iVar12++;
	}
}

int func_492(var uParam0)
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

void func_493(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	struct<11> /*88*/ sVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	func_659(uParam0);
	iVar0 = func_660(uParam0, bParam1);
	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = func_488(bParam1);
		}
		iVar0 = func_661(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_662(uParam0);
		}
		else
		{
			sVar1.f_10 = joaat("WEAPON_UNARMED");
			MISC::_COPY_MEMORY(&(uParam0->f_3[iVar0 /*13*/]), &sVar1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = func_662(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0 /*13*/].f_2 = bParam1;
	uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(bParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
	{
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, sParam2))
		{
		}
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	func_543(uParam0, 2);
}

Vector3 func_494(Vector3 vParam0)
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

bool func_495(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_496(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam0);
	POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam0);
}

int func_497(int iParam0)
{
	if (!func_176(iParam0))
	{
		return -1;
	}
	return func_641(iParam0);
}

void func_498(bool bParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(*iParam1, 21))
	{
		func_302(iParam1);
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam1->f_36) || !func_256(*bParam0, 0))
	{
		return;
	}
	iParam1->f_36 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(*bParam0, true, false), 0.0f, 0.0f, 0.0f, 0.55f, 0.55f, 3.0f);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(iParam1->f_36, true);
}

int func_499(int* iParam0, var uParam1)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || func_663()) || func_664()) || func_665())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_26(&(iParam0->f_46));
	}
	if (func_18(&(iParam0->f_46)) && !func_507(&(iParam0->f_46), 0.25f))
	{
		func_666(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_500(int* iParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*iParam0, 8))
	{
		return 1;
	}
	func_667(64);
	if (MISC::IS_BIT_SET(iParam0->f_21, 14))
	{
		if (func_412(func_411(Global_35, 0, 1, 0)) && func_411(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA"))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 14);
			MISC::CLEAR_BIT(&(iParam0->f_21), 15);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		if (((func_412(func_411(Global_35, 0, 1, 0)) && func_411(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA")) && !func_439(Global_35, joaat("SCRIPT_TASK_SWAP_WEAPON"))) && !func_439(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_19(&(iParam0->f_49), 0);
			MISC::SET_BIT(&(iParam0->f_21), 15);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		bVar0 = func_21(&(iParam0->f_49)) >= 1.5f;
		if (!func_412(func_411(Global_35, 0, 1, 0)) || bVar0)
		{
			func_222(0);
			func_247(&(iParam0->f_49));
			MISC::SET_BIT(&(iParam0->f_21), 14);
			return 1;
		}
	}
	return 0;
}

int func_501(int* iParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*iParam0, 10))
	{
		return 1;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	if (MISC::IS_BIT_SET(iParam0->f_21, 12))
	{
		if (Global_1357517)
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 12);
			MISC::CLEAR_BIT(&(iParam0->f_21), 13);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		if (Global_1357517)
		{
			Global_1357516 = 0;
		}
		func_19(&(iParam0->f_40), 0);
		MISC::SET_BIT(&(iParam0->f_21), 13);
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		bVar0 = func_21(&(iParam0->f_40)) >= 1.5f;
		if (!Global_1357517 || bVar0)
		{
			func_247(&(iParam0->f_40));
			MISC::SET_BIT(&(iParam0->f_21), 12);
			return 1;
		}
	}
	return 0;
}

void func_502(bool bParam0)
{
	if (bParam0)
	{
		func_668(4);
	}
	func_668(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

void func_503(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1, iParam2, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1, iParam2, 0, -1, -1, 2);
}

int func_504(int iParam0, int iParam1, float fParam2)
{
	Vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) /*3*/ };
	return func_669(iParam0, vVar0, fParam2);
}

void func_505(int iParam0, Vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (func_373(vParam1, 0.0f, 0.0f, 0.0f))
	{
		return;
	}
	if (((fParam5 < 0.0f || fParam6 < 0.0f) || fParam7 < 0.0f) || fParam8 < 0.0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = func_193(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_670() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.0f);
			if (iParam9 == 1)
			{
				if (PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(iVar0, 3))
				{
					PED::_SET_PED_MOTIVATION(iVar0, 3, 0.0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.0f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(iVar0, 3))
							{
								PED::_SET_PED_MOTIVATION(iVar2, 3, 0.0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.0f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 28, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_671(iParam0, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_671(iParam0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

bool func_506(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_507(var uParam0, float fParam1)
{
	if (!func_18(uParam0))
	{
		return false;
	}
	if (func_48(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_508(int* iParam0, var uParam1, bool bParam2, char* sParam3)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(*bParam2))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*bParam2, iParam0->f_26, 3, 1, 0, sParam3, 0);
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			if (!func_376((uParam1[iVar1 /*17*/])->f_6) || func_672((uParam1[iVar1 /*17*/])->f_6) == 0)
			{
			}
			else
			{
				HUD::_UI_PROMPT_SET_GROUP(func_672((uParam1[iVar1 /*17*/])->f_6), iVar0, 0);
			}
			iVar1++;
		}
	}
}

Vector3 func_509(int iParam0, int iParam1, float fParam2)
{
	return func_673(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam2);
}

void func_510(int iParam0, Vector3 vParam1)
{
	Vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 /*3*/ };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

bool func_511(bool bParam0)
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
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return false;
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
		iVar2 = func_674(iVar9);
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
					return true;
				}
			}
		}
		iVar9++;
	}
	return false;
}

void func_512(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_376(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_675(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_676(iParam0->f_6, iParam0->f_5, 0);
			}
			func_384(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_677(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

int func_513(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_27;
}

void func_514(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iParam0->f_57 = { 0.0f, 0.0f, 0.0f /*3*/ };
	func_678(iParam0, iParam3, 0);
	func_679(uParam1, iParam2);
	func_680(iParam0, iParam4);
	if (!MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::SET_BIT(&(iParam0->f_21), 0);
	}
	if (fParam5 > -1.0f)
	{
		func_681(iParam0, fParam5);
	}
	if (iParam6 == 1)
	{
		func_682(iParam0, 17);
	}
	if (iParam7 == 1)
	{
		func_682(iParam0, 16);
	}
	if (iParam8 == 1)
	{
		func_682(iParam0, 15);
	}
	if (iParam9 == 1)
	{
		func_682(iParam0, 13);
	}
	if (iParam10 == 1)
	{
		func_682(iParam0, 12);
	}
	if (iParam11 == 1)
	{
		func_682(iParam0, 11);
	}
	if (iParam12 == 1)
	{
		func_682(iParam0, 8);
	}
	if (iParam13 == 1)
	{
		func_682(iParam0, 10);
	}
	if (iParam14 == 1)
	{
		func_682(iParam0, 9);
	}
	if (iParam15 == 1)
	{
		func_682(iParam0, 18);
	}
	if (iParam16 == 1)
	{
		func_682(iParam0, 20);
	}
	if (iParam17 == 1)
	{
		func_682(iParam0, 19);
	}
}

void func_515(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | (1 << 24);
	}
}

bool func_516(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_683(iParam0, uParam1))
		{
			if (!func_442(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_318(uParam2, 0, 0, 1, 0);
				func_684(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (func_442(uParam1->f_10, 1))
		{
			func_685(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_686(&(uParam1->f_10), 1);
		}
	}
	return false;
}

bool func_517(bool bParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*bParam0);
		bVar4 = func_442(iParam4, 32);
		func_687(iParam1, uParam2, 0);
		iVar5 = func_688(*bParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			return true;
		}
		func_318(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_442(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_442(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_442(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_442(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_442(iParam4, (1 << 23)) || func_442(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_442(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_442(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_519(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*bParam0, "IloGeneralEvents", 2);
		}
		if (!func_519(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_442(iParam4, (1 << 26)))
		{
			iVar6 |= (1 << 14);
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*bParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_689(bParam0);
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
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*bParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 301, false);
			if (func_442(iParam4, (1 << 28)))
			{
				iVar8 = func_690(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_691(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_519(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, false);
			}
			if (func_442(iParam4, 2) || func_442(iParam4, 16))
			{
				func_518(*bParam0, 1, 1);
			}
			else
			{
				func_518(*bParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_518(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_519(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_520(bool bParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_692(*bParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_521(bool bParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_693(*bParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_442(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_522(int iParam0)
{
	if (func_442(iParam0, 4))
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
	if (func_442(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_442(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_523(bool bParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	bool bVar13;

	iVar1 = func_694(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & (1 << 9) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*bParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_695(Global_35)) || func_696(Global_35)) || func_697(Global_35));
	fVar12 = -1.0f;
	if (func_18(&(iParam1->f_13)))
	{
		fVar12 = func_48(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_376((uParam4[iVar0 /*17*/])->f_6);
		func_698(*bParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_699(*bParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_700(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_318(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_530(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_687(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							func_701(iParam1, uParam4, bParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_310(iParam1, uParam4, bParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (func_412(func_411(Global_35, 0, 1, 0)) || func_412(func_411(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
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
					if (func_702(iParam1, fParam6, iParam1->f_9))
					{
						func_26(&(iParam1->f_18));
						if (bVar6)
						{
							func_530(uParam4, 0, 0);
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
		func_703(iParam1, fParam2);
	}
	return bVar5;
}

void func_524(var uParam0)
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

void func_525(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_704(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_703(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_526(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_705(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_682(iParam1, 0);
				func_687(iParam1, uParam2, func_519(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_527(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_698(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_528(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_529(int* iParam0)
{
	var uVar0;
	bool bVar1;

	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (func_393(&uVar0))
		{
			func_19(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_706())
			{
			}
		}
		else
		{
			func_19(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = func_21(&(iParam0->f_37)) >= 1.5f;
		if ((!func_393(&uVar0) || func_706()) || bVar1)
		{
			if (bVar1)
			{
				func_707();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

void func_530(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_708(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_531(bool bParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0.0f)
		{
			func_26(&(iParam1->f_18));
			return 0;
		}
		else if (func_18(&(iParam1->f_18)))
		{
			func_247(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_18(&(iParam1->f_18)))
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
	return func_709(&(iParam1->f_18), fParam2);
	return 1;
}

void func_532(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> /*280*/ sVar1;
	struct<10> /*80*/ sVar62;

	sVar1.f_1 = -1;
	sVar1.f_3 = -1;
	sVar1.f_6 = -1;
	sVar1.f_12 = (1 << 30);
	sVar1.f_16 = 1;
	sVar1.f_26 = 1106247680;
	sVar1.f_27 = 1067450368;
	sVar1.f_29 = 1092616192;
	sVar1.f_30 = 1112014848;
	sVar1.f_31 = 1106247680;
	sVar1.f_32 = 1101529088;
	sVar1.f_33 = 1101004800;
	sVar1.f_34 = 1084227584;
	sVar62.f_2 = 570;
	sVar62.f_3 = 1065353216;
	sVar62.f_4 = -1082130432;
	sVar62.f_9 = 3;
	func_167(iParam0, 0);
	func_687(iParam0, uParam1, 1);
	func_318(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &sVar1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &sVar62, 17);
		iVar0++;
	}
}

int func_533(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_710(bParam1, bParam2, bParam3);
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

void func_534(var uParam0)
{
	bool bVar0;

	if (!func_63(uParam0, (1 << 27)))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("BANDANA"));
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("BANDANA")))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_639(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_639(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_543(uParam0, (1 << 27));
		}
	}
}

void func_535(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!func_63(uParam0, (1 << 16)))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!func_63(uParam0, (1 << 12)) && uParam0->f_1896)
	{
		return;
	}
	if (!func_63(uParam0, (1 << 24)))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_541(uParam0);
	func_711(uParam0, uParam0->f_1897, uParam0->f_1899);
	func_712(uParam0);
	if (uParam0->f_1900 && !uParam0->f_1899)
	{
		if (((((uParam0->f_1895 >= 0 && uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 > 0.0f) && uParam0->f_1688 >= 0) && !func_91(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, (uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 + 5.0f), 1, 1)) && !func_63(uParam0, (1 << 25))) && !func_63(uParam0, 4))
		{
			func_713(uParam0, uParam0->f_1897);
			return;
		}
	}
	if (!func_63(uParam0, 4))
	{
		if (func_714(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1684 = uParam0->f_1688;
				func_543(uParam0, 8);
				return;
			}
		}
		else
		{
			func_713(uParam0, uParam0->f_1897);
		}
		if (uParam0->f_1016[uParam0->f_1690 /*41*/].f_29)
		{
			fVar0 = func_715(uParam0, uParam0->f_1690);
			if (fVar0 < 0.0f || (uParam0->f_1897 && fVar0 < 1.0f))
			{
				uParam0->f_1688 = uParam0->f_1690;
				if (!bParam2)
				{
					uParam0->f_1684 = uParam0->f_1690;
					func_543(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0.0f && fVar0 < 10000.0f)
			{
				if ((uParam0->f_1689 == -1.0f || fVar0 <= uParam0->f_1689) || uParam0->f_1690 == uParam0->f_1688)
				{
					if (uParam0->f_1690 != uParam0->f_1688)
					{
					}
					uParam0->f_1688 = uParam0->f_1690;
					uParam0->f_1689 = fVar0;
					func_543(uParam0, 16);
					if (((!func_63(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true) < (uParam0->f_1016[uParam0->f_1688 /*41*/].f_11 + 5.0f))
					{
						func_716(uParam0);
						func_543(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1688 == uParam0->f_1690)
			{
				func_298(uParam0, 16);
			}
		}
		if (uParam0->f_1690 + 1 >= 8)
		{
			uParam0->f_1690 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1690 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_1016[iVar2 /*41*/].f_29)
				{
					uParam0->f_1690 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1690 = 0;
			}
		}
		if (uParam0->f_1688 < 0)
		{
			return;
		}
		if (func_300(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && uParam0->f_1897)
		{
			return;
		}
	}
	if (func_63(uParam0, 16))
	{
		fVar4 = func_193(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		if (uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5.0f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = func_410(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		fVar6 = 2.0f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90.0f)
		{
			fVar6 = 1.0f;
		}
		if (fVar4 <= uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 || VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 + uParam0->f_1016[uParam0->f_1688 /*41*/].f_10))
			{
				func_540(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1899 && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1901) > 5.0f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && !VEHICLE::_IS_VEHICLE_BROUGHT_TO_HALT(uParam0->f_1901))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 1.0f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && VEHICLE::_IS_VEHICLE_BROUGHT_TO_HALT(uParam0->f_1901))
			{
				VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(uParam0->f_1901);
			}
		}
		else if ((uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5.0f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1898))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1898, 1.0f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if ((uParam0->f_1897 & iVar3 && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1898) > 1.25f) || func_63(uParam0, 4))
	{
		if (((VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879) && func_715(uParam0, uParam0->f_1688) < 10000.0f) && func_63(uParam0, 16)) || func_63(uParam0, 4))
		{
			if (!func_63(uParam0, 4))
			{
				func_543(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= (1 << 12);
			iVar7 |= 1;
			if (!func_538(uParam0, uParam0->f_1688))
			{
				iVar7 |= (1 << 11);
			}
			if (func_253(Global_35, &(uParam0->f_1686), iVar7, 0, 0, 1084227584, 100, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1686 = 0;
				func_298(uParam0, 4);
			}
		}
	}
	else if (func_63(uParam0, 4))
	{
		func_298(uParam0, 4);
	}
}

void func_536(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_63(uParam0, (1 << 9)))
	{
		return;
	}
	if (func_21(&(uParam0->f_1872)) < 2.0f)
	{
		return;
	}
	if (func_214(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_543(uParam0, (1 << 19));
	}
}

void func_537()
{
	Global_1905944.f_5695 = 1;
}

bool func_538(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0 /*18*/].f_17 == 1 && uParam0->f_475[iVar0 /*18*/].f_2 == 4) && uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_539(var uParam0)
{
	return uParam0->f_2;
}

void func_540(var uParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (func_495(iParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_495(iParam1, (1 << 13)))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1897)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1898, 214, true);
	}
	if (uParam0->f_1896 && func_63(uParam0, (1 << 12)))
	{
		iVar0 |= 16;
	}
	if (func_495(iParam1, (1 << 18)) && Global_1935630.f_44 == joaat("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	func_717(&iVar1, uParam2);
	func_718(&(uParam0->f_1904), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!func_63(uParam0, (1 << 26)))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_719();
	func_720(uParam0, 1);
}

void func_541(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> /*128*/ sVar2;
	bool bVar18;
	int iVar19;
	Vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;

	iVar0 = uParam0->f_1688;
	if (iVar0 >= 0 && !func_547(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iVar0 /*41*/].f_1, true) <= uParam0->f_1016[iVar0 /*41*/].f_16;
		sVar2 = { uParam0->f_1692 /*16*/ };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
			{
				strcpy_s(&(uParam0->f_1692), 64, func_721(uParam0->f_1345[iVar0 /*22*/].f_2));
			}
			else
			{
				strcpy_s(&(uParam0->f_1692), 64, func_449());
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_10)))
			{
				strcpy_s(&(uParam0->f_1692.f_8), 64, func_721(uParam0->f_1345[iVar0 /*22*/].f_10));
			}
			else
			{
				strcpy_s(&(uParam0->f_1692.f_8), 64, func_722());
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&sVar2, &(uParam0->f_1692)) || !MISC::ARE_STRINGS_EQUAL(&(sVar2.f_8), &(uParam0->f_1692.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_IS_CAMERA_AVAILABLE(&sVar2))
			{
				CAM::_CAM_DESTROY(&sVar2);
			}
		}
		if (bVar1 && !uParam0->f_1345[iVar0 /*22*/])
		{
			if (!func_723(uParam0->f_1345[iVar0 /*22*/].f_1, 8))
			{
				if (!func_723(uParam0->f_1345[iVar0 /*22*/].f_1, 8))
				{
					func_717(&iVar19, uParam0->f_1345[iVar0 /*22*/].f_1);
					func_724(&(uParam0->f_1904), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_1016[iVar0 /*41*/].f_1 /*3*/ };
				iVar24 = -1;
				if (uParam0->f_1345[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 35)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1345[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (func_723(uParam0->f_1345[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1345[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2.0f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) /*3*/ };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902) || iVar26 != uParam0->f_1902))
									{
										if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
										{
											CAM::_CAM_DESTROY(&(uParam0->f_1692));
											func_446(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1345[iVar0 /*22*/].f_18 != 0.0f || uParam0->f_1345[iVar0 /*22*/].f_19 != 0.0f)
								{
									vVar20 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar20, func_725(Global_35, iVar23, 1), uParam0->f_1345[iVar0 /*22*/].f_18, 0.0f, uParam0->f_1345[iVar0 /*22*/].f_19) /*3*/ };
								}
							}
							else if (uParam0->f_1345[iVar0 /*22*/].f_18 != 0.0f || uParam0->f_1345[iVar0 /*22*/].f_19 != 0.0f)
							{
								vVar20 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar20, func_410(Global_36, uParam0->f_1016[iVar0 /*41*/].f_1, 1), uParam0->f_1345[iVar0 /*22*/].f_18, 0.0f, uParam0->f_1345[iVar0 /*22*/].f_19) /*3*/ };
							}
							fVar27 = uParam0->f_1016[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_1016[iVar0 /*41*/].f_14;
							bVar29 = func_723(uParam0->f_1345[iVar0 /*22*/].f_1, 2);
							bVar30 = (func_723(uParam0->f_1345[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = func_723(uParam0->f_1345[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
							{
								CAM::_CAM_CREATE(&(uParam0->f_1692));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_726(0, 0);
								}
								bVar32 = true;
								func_446(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1708.f_16 != iVar23);
								bVar32 = (bVar32 || !func_562(uParam0->f_1708.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1708.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1708.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1708.f_22 != bVar30);
								uParam0->f_1708.f_16 = iVar23;
								uParam0->f_1708.f_17 = { vVar20 /*3*/ };
								uParam0->f_1708.f_20 = fVar27;
								uParam0->f_1708.f_21 = fVar28;
								uParam0->f_1708.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1708 = { uParam0->f_1692 /*16*/ };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1708));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1731.f_16 != iVar23);
								bVar32 = (bVar32 || !func_562(uParam0->f_1731.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || uParam0->f_1731.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1731.f_21 != bVar30);
								uParam0->f_1731.f_16 = iVar23;
								uParam0->f_1731.f_17 = { vVar20 /*3*/ };
								uParam0->f_1731.f_20 = !bVar31;
								uParam0->f_1731.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1731 = { uParam0->f_1692 /*16*/ };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1731));
								}
							}
							Jump @1466; // curOff = 1420
							if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
							{
								CAM::_CAM_DESTROY(&(uParam0->f_1692));
							}
							strcpy_s(&(uParam0->f_1692), 64, "");
							strcpy_s(&(uParam0->f_1692.f_8), 64, "");
							func_727(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

int func_542(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_728(uParam0, &iVar0))
	{
		func_729(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_543(var uParam0, int iParam1)
{
	uParam0->f_1664 |= iParam1;
}

void func_544(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	Vector3 vVar6;
	int iVar9;

	if (func_450(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1688;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_1016[iVar0 /*41*/].f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_1016[iVar0 /*41*/].f_15;
		if (fVar1 <= 0.0f)
		{
			fVar1 = uParam0->f_1016[iVar0 /*41*/].f_14;
		}
		if (fVar1 <= 0.0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iVar0 /*41*/].f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - uParam0->f_1016[iVar0 /*41*/].f_1.f_2));
		bVar4 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875);
		if (bVar4)
		{
			vVar6 = { VOLUME::GET_VOLUME_COORDS(uParam0->f_1875) /*3*/ };
			fVar5 = MISC::ABSF((vVar6.z - uParam0->f_1016[iVar0 /*41*/].f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_1016[iVar0 /*41*/].f_10 || (bVar4 && fVar5 <= uParam0->f_1016[iVar0 /*41*/].f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1016[iVar0 /*41*/].f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902))
			{
				func_543(uParam0, (1 << 16));
				return;
			}
			else if (uParam0->f_1902 == iVar9)
			{
				func_543(uParam0, (1 << 16));
				return;
			}
		}
		func_298(uParam0, (1 << 16));
	}
}

void func_545(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	if (func_8(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1894)
		{
			if (uParam0->f_475[iVar0 /*18*/].f_7)
			{
				func_730(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_475[iVar0 /*18*/].f_6)
			{
				bVar1 = func_731(uParam0, iVar0);
				if (bVar1)
				{
					func_732(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_538(uParam0, uParam0->f_1684))
		{
			func_733(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1691;
	while (iVar0 <= (uParam0->f_1894 - 1))
	{
		if (uParam0->f_475[iVar0 /*18*/].f_7)
		{
			func_730(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_475[iVar0 /*18*/].f_6)
		{
			bVar1 = func_731(uParam0, iVar0);
			if (bVar1)
			{
				func_732(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1691 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1691 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_546(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1921);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1921);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_547(var uParam0, int iParam1)
{
	return uParam0->f_1665 & iParam1 != 0;
}

void func_548(var uParam0)
{
	uParam0->f_1665 = 0;
}

void func_549(var uParam0, char[4] cParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	func_734(uParam0, 4);
	if (func_735(uParam0, &cParam1, iParam5))
	{
		func_265(uParam0, 1);
	}
}

void func_550(var uParam0)
{
	if (!func_736(uParam0))
	{
		return;
	}
	if (!func_63(uParam0, (1 << 22)))
	{
		func_737(uParam0);
		func_543(uParam0, (1 << 22));
	}
	if (func_738(uParam0))
	{
		func_739(uParam0);
		func_740(uParam0);
		func_265(uParam0, 2);
	}
}

void func_551(var uParam0)
{
	uParam0->f_1685 = -1;
	func_264(uParam0, 0);
	func_265(uParam0, 3);
	func_741(uParam0, 0);
	func_247(&(uParam0->f_1869));
	func_742(uParam0);
	func_247(&(uParam0->f_1872));
}

bool func_552(var uParam0)
{
	if (uParam0->f_1770)
	{
		return false;
	}
	return uParam0->f_1769;
}

void func_553()
{
	Global_18 = 1;
	Global_43884 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_554(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (func_193(Global_35, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 0) < uParam0->f_1016[uParam0->f_1684 /*41*/].f_14)
		{
			return true;
		}
		else if (uParam0->f_1016[uParam0->f_1684 /*41*/].f_14 >= uParam0->f_1016[uParam0->f_1684 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_555(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (func_193(Global_35, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 0) < uParam0->f_1016[uParam0->f_1684 /*41*/].f_15)
		{
			return true;
		}
		else if (uParam0->f_1016[uParam0->f_1684 /*41*/].f_15 >= uParam0->f_1016[uParam0->f_1684 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_556(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (uParam0->f_1685 < 0)
	{
		return true;
	}
	switch (uParam0->f_475[uParam0->f_1685 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), true) == 8)
			{
				return true;
			}
			else if (func_48(&(uParam0->f_1872)) >= 15.0f)
			{
				func_543(uParam0, (1 << 15));
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1768)
			{
				if (func_48(&(uParam0->f_1872)) >= 15.0f)
				{
					func_543(uParam0, (1 << 15));
					return true;
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_743(uParam0)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(func_743(uParam0), false))
				{
					uParam0->f_1768 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(func_743(uParam0));
				bVar1 = ANIMSCENE::IS_ANIM_SCENE_FINISHED(func_743(uParam0), false);
				bVar2 = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(func_743(uParam0));
				return ((fVar0 >= 1.0f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return func_48(&(uParam0->f_1872)) >= 15.0f;
	}
	return false;
}

bool func_557(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*18*/].f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_558(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*18*/].f_17 == 2 && func_744(&(uParam0->f_475[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_559(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar1 /*13*/].f_2))
			{
				if (ENTITY::GET_ENTITY_MODEL(bParam1) == ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar1 /*13*/].f_2))
				{
					iVar0++;
					if (bParam1 == uParam0->f_3[iVar1 /*13*/].f_2)
					{
						return iVar0;
					}
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_560(int iParam0, bool bParam1)
{
	if (!func_256(*bParam1, 0))
	{
		return;
	}
	iParam0->f_57 = { func_509(*bParam1, Global_35, iParam0->f_26) /*3*/ };
	iParam0->f_57 = { iParam0->f_57 + Global_36 /*3*/ };
	iParam0->f_57.f_2 += 10.0f;
}

void func_561()
{
	CAM::_0x88544C0E3291DCAE(true);
	func_745();
}

bool func_562(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_563(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!func_413(uParam0, iParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_746(uParam0, iParam1);
	}
	if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, sParam2))
	{
		if (((ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_444, sParam2, false))) || (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_444, sParam2, false)))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_444, sParam2, false))))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, sParam2, iParam1);
		}
	}
}

void func_564(int iParam0, bool bParam1)
{
	if (!func_444(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_747(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_565(iParam0, 1, 0);
		}
	}
	func_565(iParam0, 16, bParam1);
}

void func_565(int iParam0, int iParam1, bool bParam2)
{
	if (!func_444(iParam0))
	{
		return;
	}
	func_748(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_566(int iParam0)
{
	func_565(iParam0, 8, 0);
}

void func_567(int iParam0)
{
	func_459(iParam0, 36, 1);
}

void func_568(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_444(iParam0))
		{
			return;
		}
	}
	func_642(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

int func_569(int iParam0, bool bParam1)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_749(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_570(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_114(iParam0))
	{
		bVar1 = func_255(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(bVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(bVar1);
			PED::SET_PED_CONFIG_FLAG(bVar1, 179, true);
			func_750(iParam0);
		}
	}
	if (func_458(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_255(iParam0), 137, true);
	}
}

void func_571(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_444(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_568(iParam0, 50, 1);
		func_568(iParam0, 48, 1);
		func_568(iParam0, 49, 1);
		func_568(iParam0, 51, 1);
		func_568(iParam0, 52, 1);
		func_568(iParam0, 54, 1);
		func_568(iParam0, 55, 1);
	}
	else
	{
		func_459(iParam0, 50, 1);
		func_459(iParam0, 48, 1);
		func_459(iParam0, 49, 1);
		func_459(iParam0, 51, 1);
		if (bParam3)
		{
			func_459(iParam0, 54, 1);
		}
		else
		{
			func_568(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_459(iParam0, 52, 1);
			if (bParam3)
			{
				func_459(iParam0, 55, 1);
			}
		}
		else
		{
			func_568(iParam0, 52, 1);
			if (!bParam3)
			{
				func_568(iParam0, 55, 1);
			}
		}
	}
}

void func_572(int iParam0, bool bParam1)
{
	if (!func_444(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_255(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_255(iParam0), 204, false);
	}
}

void func_573(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if (!func_116(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_458(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_569(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	bVar1 = func_255(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(bVar1) && func_751(iParam0) < 10000.0f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1) && ENTITY::IS_ENTITY_ATTACHED(bVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(bVar1, true)) || PED::IS_PED_ON_MOUNT(bVar1)) || PED::IS_PED_IN_ANY_VEHICLE(bVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(bVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(bVar1, true, true);
	}
	if (bParam4)
	{
		func_459(iParam0, 2, 1);
	}
	else
	{
		func_752(iParam0);
		func_459(iParam0, 1, 1);
	}
}

void func_574(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] -= Global_40.f_4942[iParam0 /*60*/] & iParam1;
}

bool func_575(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_576(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;

	if (!func_444(iParam1))
	{
		return;
	}
	bVar0 = func_575(iParam1);
	if (func_753(iParam1))
	{
		if (!func_754(iParam1))
		{
			return;
		}
	}
	func_568(iParam1, 39, 1);
	func_755(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_755(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!bParam2)
		{
			func_755(iParam1, (1 << 9), 1);
			PED::SET_PED_KEEP_TASK(bVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, false);
			func_459(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_756(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return (1 << 9);
		case 10:
			return (1 << 10);
		case 11:
			return (1 << 11);
		case 12:
			return (1 << 12);
		case 13:
			return (1 << 13);
		case 14:
			return (1 << 14);
		case 15:
			return (1 << 15);
		case 16:
			return (1 << 16);
		case 17:
			return (1 << 17);
		case 18:
			return (1 << 18);
		case 19:
			return (1 << 20);
		case 20:
			return (1 << 21);
		case 21:
			return (1 << 22);
		case 22:
			return (1 << 23);
		case 23:
			return (1 << 24);
		case 24:
			return (1 << 25);
		case 25:
			return (1 << 19);
	}
	return 0;
}

bool func_578(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_579(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_580(var uParam0)
{
	if (!func_578(uParam0->f_1, 1))
	{
		STREAMING::_0x03DDBF2D73799F9E(*uParam0);
		func_579(&(uParam0->f_1), 1);
	}
}

void func_581(var uParam0)
{
	if (!func_578(*uParam0, 1))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		func_579(uParam0, 1);
	}
}

bool func_582()
{
	if (func_254() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_583(int iParam0)
{
	return iParam0 != 0;
}

void func_584(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam1)
	{
		iVar0 |= (1 << 19);
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

void func_585(int iParam0, int iParam1, bool bParam2)
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

void func_586(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;
	}
}

int func_587(Vector3 vParam0, float fParam3, char[4] cParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_90(vParam0))
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
		if (func_757(vParam0))
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
	func_758(iVar0, bParam8);
	return iVar0;
}

bool func_588(var uParam0, char* sParam1)
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

bool func_589(var uParam0, char* sParam1)
{
	struct<8> /*64*/ sVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	sVar0 = { func_179(uParam0) /*8*/ };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &sVar0);
}

bool func_590(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_591(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

int func_592(int iParam0)
{
	return iParam0;
}

void func_593(int iParam0)
{
	if (!func_759(iParam0))
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

void func_594(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_595(iParam0, 1);
	func_597(iParam0, 1);
	func_598(iParam0, 128);
}

void func_595(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_380(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_596(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_597(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_598(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_599(int iParam0)
{
	struct<16> /*128*/ sVar0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1934603[iParam0 /*16*/] = { sVar0 /*16*/ };
	Global_1934603.f_161--;
	if (Global_1934603.f_161 < 0)
	{
		Global_1934603.f_161 = 0;
	}
}

int func_600(int iParam0)
{
	int iVar0;

	iVar0 = func_429(func_760(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_601(bool bParam0)
{
	if (func_602(joaat("CI_CATEGORY_WARDROBE_MASK"), bParam0))
	{
		return true;
	}
	if (func_602(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), bParam0))
	{
		return true;
	}
	return false;
}

bool func_602(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_429(func_760(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		bVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_395(bVar0) == iParam0)
		{
			*bParam1 = bVar0;
			return true;
		}
	}
	*bParam1 = 0;
	return false;
}

void func_603(int iParam0)
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

int func_604()
{
	if (!func_412(Global_1935630.f_45))
	{
		return joaat("WEAPON_UNARMED");
	}
	return Global_1935630.f_45;
}

bool func_605(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_412(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_412(bVar4) && bVar4 != bVar0)
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
	if (func_254() == -1 && !func_761(bVar0))
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
				if (func_761(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_412(bVar0))
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
		func_762(bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_763(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_764(bVar0))
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

int func_606(int iParam0, int iParam1)
{
	var uVar0;

	return func_765(&uVar0, iParam0, iParam1);
}

bool func_607()
{
	return Global_1935436 == 1;
}

bool func_608()
{
	return Global_1935436 == 2;
}

int func_609(bool bParam0)
{
	int iVar0;

	iVar0 = func_395(bParam0);
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

struct<4> /*32*/ func_610(bool bParam0)
{
	return func_436(joaat("CHARACTER"), func_766(), joaat("SLOTID_NONE"), bParam0);
}

int func_611(bool bParam0)
{
	Vector3 vVar0;

	if (!func_394(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> /*32*/ func_612(bool bParam0)
{
	int iVar0;

	iVar0 = func_438(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_436(joaat("CARRIED_WEAPONS"), func_610(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_436(joaat("CARRIED_WEAPONS"), func_610(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_436(joaat("CARRIED_WEAPONS"), func_610(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_613(bool bParam0, bool bParam1)
{
	if (func_395(bParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_767(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_614(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	return func_437(bParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_615(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_768(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_616(bool bParam0)
{
	int iVar0;

	iVar0 = func_438(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_436(joaat("EMOTE_ITEM"), func_610(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_436(joaat("EMOTE_ITEM"), func_610(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_617(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_395(bParam0);
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

bool func_618(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_438(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_619()
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

bool func_620(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_621(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_620(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_620(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_620(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_620(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_620(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_620(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	return iVar0;
}

void func_622(int iParam0)
{
	func_422(iParam0, 8, 6);
}

void func_623(int iParam0)
{
	func_769(&(Global_1946054.f_2589), iParam0);
}

void func_624(int iParam0, int iParam1)
{
	func_770(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_625(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 |= iParam1;
}

void func_626(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_395(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_418(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_624(iVar1, iVar3);
		}
	}
	if (func_771(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_418(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_624(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case joaat("CI_CATEGORY_WARDROBE_VEST"):
			if (bParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_624(iVar1, iVar3);
					}
				}
			}
			func_772(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_772(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_624(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 525
				func_772(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_624(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_624(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 656
				func_772(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; // curOff = 691
				func_772(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_624(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 786
				func_772(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; // curOff = 807
				if (bParam1 == Global_1946054.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_624(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_624(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_395(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_624(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_773(bParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_395(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_624(iVar1, iVar3);
						}
					}
				}
				Jump @1415; // curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_620(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_624(iVar1, iVar3);
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
						func_624(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_773(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_620(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_624(iVar1, iVar3);
					}
				}
			}
			switch (func_395(bParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_395(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_624(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_395(uParam0->f_1[iVar1 /*3*/]) || func_620(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_624(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_627(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_774(0);
	if (iParam2 != 0 && func_775(bParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_776(bParam0, func_420(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_628(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_254() != -1;
	iVar7 = func_774(0);
	if (func_416((1 << 15)))
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
			iVar5 = func_420(iVar0, 1);
			if (func_417(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_417(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_777(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_778(uParam0);
				if (iVar3 > 0)
				{
					if (!func_416((1 << 19)))
					{
						func_414((1 << 19));
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
							iVar5 = func_420(iVar0, 1);
							if (func_417(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_417(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_777(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_624(iVar0, iParam2);
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
					func_632((1 << 19));
				}
			}
		}
	}
}

void func_629(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_779(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_254() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_780(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_781(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_781(Global_40.f_7729);
				Global_1946054.f_1378 = func_781(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_782(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_783(0, 1);
	}
}

void func_630(struct<4> /*32*/ sParam0)
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
			if (func_590(sParam0.f_0))
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
			func_591(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_414(8);
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
			if (func_590(sParam0.f_0))
			{
				return;
			}
			func_591(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_414(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_435(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

void func_631(var uParam0)
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

void func_632(int iParam0)
{
	Global_1946054 -= Global_1946054 & iParam0;
}

bool func_633(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

char* func_634(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_635(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_636(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_784(0, 1, bParam0, bParam1);
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

int func_637(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200.0f);
	return BUILTIN::CEIL((100.0f * fVar0));
}

void func_638()
{
	func_785();
	func_786();
	func_787();
}

char* func_639(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@clothing@bandana";
		case 1:
			return "mech_inventory@clothing@mask";
		case 2:
			return "mech_inventory@clothing@mask";
		case 3:
			return "mech_inventory@clothing@mask";
		case 4:
			return "mech_inventory@clothing@mask";
		case 5:
			return "mech_inventory@clothing@mask";
	}
	return "";
}

void func_640(char* sParam0)
{
	if (sParam0->f_16)
	{
		CAM::_CAM_DESTROY(sParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && CAM::_IS_CAM_DATA_DICT_LOADED(sParam0))
		{
			CAM::_UNLOAD_CAMERA_DATA_DICT(sParam0);
		}
		sParam0->f_16 = 0;
		strcpy_s(sParam0, 64, "");
		strcpy_s(&(sParam0->f_8), 64, "");
	}
}

int func_641(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_788(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_642(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_643(int iParam0, bool bParam1, char* sParam2)
{
	bool bVar0;

	bVar0 = func_255(iParam0);
	if (!func_114(iParam0) || ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(bVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar0, false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(bVar0, true, false);
	}
}

void func_644(int iParam0, int iParam1)
{
	if (!func_444(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
}

bool func_645(int iParam0, Vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_444(iParam0))
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
					iParam4 = func_789(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (func_453(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_304(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_789(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_790(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!func_791(iParam0, 0))
					{
						func_459(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { func_792(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) /*7*/ };
			if (!bParam6)
			{
				func_568(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!func_256(func_255(iParam0), 0))
			{
				return false;
			}
			if (iParam5 & iParam10)
			{
				if (!func_256(func_575(iParam0), 0))
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

bool func_646(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_114(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_793(iParam0, iParam1);
	return bVar0;
}

void func_647(int iParam0, int iParam1, bool bParam2)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_646(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_459(iParam0, 25, 1);
	}
}

void func_648(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (func_794(iParam2))
		{
			iVar0 = func_795(iParam2, -1);
			if (func_465(bParam1, iVar0))
			{
				if (func_466(bParam1, iVar0))
				{
					if (func_467(bParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam1, "metaped_outfit_request"), bParam1, true, false);
						func_468(bParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(bParam1, iVar0);
				}
			}
		}
		func_796(iParam0, bParam1, 0);
		PED::_UPDATE_PED_VARIATION(bParam1, false, true, true, true, false);
		PED::_SET_PED_DIRT_CLEANED(bParam1, 0.0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam1, 9);
		if (bParam3)
		{
			func_459(iParam0, 66, 0);
		}
	}
}

void func_649(int iParam0)
{
	func_797(iParam0);
	func_798(iParam0, 0);
}

void func_650(int iParam0, int iParam1)
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

bool func_651(int iParam0)
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

void func_652(int iParam0, int iParam1)
{
	if (!func_444(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_605(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_605(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_653(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] |= iParam1;
}

void func_654(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_444(iParam0))
	{
		return;
	}
	bVar0 = func_255(iParam0);
	func_799(bVar0);
	func_459(iParam0, 60, 1);
	if (bParam1)
	{
		func_800(iParam0);
	}
}

void func_655(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_444(iParam0))
	{
		return;
	}
	bVar0 = func_255(iParam0);
	func_801(bVar0);
	func_568(iParam0, 60, 1);
	if (bParam1)
	{
		func_802(iParam0);
	}
}

void func_656(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_444(iParam0))
	{
		return;
	}
	bVar0 = func_255(iParam0);
	func_803(bVar0);
	if (iParam0 == 14)
	{
		func_804(bVar0);
	}
	func_459(iParam0, 61, 1);
	if (bParam1)
	{
		func_805(iParam0);
	}
}

void func_657(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_444(iParam0))
	{
		return;
	}
	bVar0 = func_255(iParam0);
	func_806(bVar0);
	func_568(iParam0, 61, 1);
	if (bParam1)
	{
		func_807(iParam0);
	}
}

char* func_658(int iParam0)
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

void func_659(var uParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;

	sVar1.f_10 = joaat("WEAPON_UNARMED");
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9) && ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			MISC::_COPY_MEMORY(&(uParam0->f_3[iVar0 /*13*/]), &sVar1, 13);
		}
		iVar0++;
	}
}

int func_660(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_661(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1)) && MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, sParam1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_662(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_663()
{
	return (Global_1935689.f_1 || Global_1935689 == 1);
}

bool func_664()
{
	return Global_1935689.f_1;
}

bool func_665()
{
	return Global_1357517;
}

void func_666(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_808(uParam0[iVar0 /*17*/], 9);
		iVar0++;
	}
}

void func_667(int iParam0)
{
	Global_1935496.f_29 |= iParam0;
}

void func_668(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

int func_669(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	}
	vVar6 = { vParam1 - vVar0 /*3*/ };
	fVar9 = func_809(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0.0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_633(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_670()
{
	if (func_254() == -1 && func_74(0, 0, 1))
	{
		return (Global_1357549.f_1495 & (1 << 9) != 0 && Global_1357549.f_1494 & 2 != 0);
	}
	return false;
}

bool func_671(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_672(int iParam0)
{
	int iVar0;

	iVar0 = func_592(iParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return Global_1945188[iVar0 /*18*/].f_3;
}

Vector3 func_673(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	return func_494(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

int func_674(int iParam0)
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

void func_675(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_376(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_676(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_376(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_677(int* iParam0, char* sParam1)
{
	if (func_376(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_676(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_810(iParam0, 1);
}

void func_678(int* iParam0, int iParam1, int iParam2)
{
	if (MAP::DOES_BLIP_EXIST(iParam1))
	{
		iParam0->f_56 = iParam1;
		if (!MISC::IS_BIT_SET(iParam0->f_21, 16))
		{
			MISC::SET_BIT(&(iParam0->f_21), 16);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 16);
	}
	if (iParam2 != 0)
	{
		iParam0->f_55 = iParam2;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 18);
	}
}

void func_679(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (iVar0 == iParam1)
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 12))
			{
				MISC::SET_BIT(uParam0[iVar0 /*17*/], 12);
			}
		}
		else if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 12))
		{
			MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 12);
		}
		iVar0++;
	}
}

void func_680(int* iParam0, int iParam1)
{
	func_247(&(iParam0->f_22));
	iParam0->f_25 = iParam1;
}

void func_681(int* iParam0, float fParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 14))
	{
		iParam0->f_26 = fParam1;
		MISC::SET_BIT(iParam0, 14);
	}
}

void func_682(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_683(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_811((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_684(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_685(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_704(uParam0[iVar0 /*17*/]))
		{
			func_808(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_686(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_687(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_377(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_152(iParam0, 0);
		}
	}
}

int func_688(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_812(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_376((uParam2[iVar0 /*17*/])->f_6))
		{
			func_808(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_689(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_813(*bParam0);
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

int func_690(var uParam0, int iParam1)
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

void func_691(int* iParam0, int* iParam1)
{
	if (!func_519(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_808(iParam1, 19);
			func_682(iParam0, 23);
			func_814(iParam1, 2);
		}
	}
}

bool func_692(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_815(16))
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
					func_816(16);
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

void func_693(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_812(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_694(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_695(int iParam0)
{
	return func_817(iParam0, 4) | func_817(iParam0, 5);
}

int func_696(int iParam0)
{
	return func_817(iParam0, 7);
}

int func_697(int iParam0)
{
	return func_817(iParam0, 6);
}

void func_698(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_704(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_812(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_699(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_818(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_213(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_384(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_384(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_819(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_700(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_386(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_820(iParam1, 1))
	{
		func_821(iParam1, 1);
		return true;
	}
	return false;
}

void func_701(int* iParam0, var uParam1, bool bParam2, float fParam3, char* sParam4)
{
	func_318(uParam1, 1, 1, 1, 0);
	func_317(bParam2);
	MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*bParam2, sParam4, fParam3, 0.0f, 8, 0.0f, 0.0f, 0, false, -1);
}

bool func_702(int* iParam0, float fParam1, bool bParam2)
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

void func_703(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_704(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_705(int iParam0)
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

int func_706()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_822())
	{
		return 0;
	}
	if (!func_601(&bVar0))
	{
		return 0;
	}
	if (!func_823(bVar0))
	{
		return 0;
	}
	iVar1 = func_824(bVar0);
	if (iVar1 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	func_161(&iVar2, 1);
	return func_825(bVar0, iVar2);
}

int func_707()
{
	bool bVar0;
	int iVar1;

	if (!func_601(&bVar0))
	{
		return 0;
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = func_824(bVar0);
	if (iVar1 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	func_826(Global_1946054.f_57[func_429(iVar1, 1) /*11*/], 8);
	func_432(26, 0, 0, 0, 0);
	return 1;
}

void func_708(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_827(iParam0, 13))
	{
		func_808(iParam0, 0);
	}
	else
	{
		func_810(iParam0, 0);
	}
	if (func_376(iParam0->f_6))
	{
		if (bParam2)
		{
			func_377(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_709(var uParam0, float fParam1)
{
	if (func_507(uParam0, fParam1))
	{
		func_247(uParam0);
		return 1;
	}
	return 0;
}

int func_710(bool bParam0, bool bParam1, bool bParam2)
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

void func_711(var uParam0, bool bParam1, bool bParam2)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		if (!bParam1)
		{
			func_828(uParam0);
		}
		else if (bParam2)
		{
			func_829(uParam0);
		}
		else
		{
			func_830(uParam0, uParam0->f_1898);
		}
	}
	else
	{
		if (!func_63(uParam0, (1 << 20)) && bParam1)
		{
			func_830(uParam0, uParam0->f_1898);
		}
		else if (!func_63(uParam0, (1 << 21)) && bParam2)
		{
			func_829(uParam0);
		}
		else if ((func_63(uParam0, (1 << 20)) && !bParam1) || (func_63(uParam0, (1 << 21)) && !bParam2))
		{
			func_828(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1882 * FloatToVector(func_831(uParam0->f_1898)) /*3*/ };
			if (!func_562(vVar0, VOLUME::GET_VOLUME_SCALE(uParam0->f_1875), 1056964608, 1) && !func_90(vVar0))
			{
				VOLUME::SET_VOLUME_SCALE(uParam0->f_1875, vVar0);
			}
		}
	}
}

void func_712(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_1688 < 0)
	{
		return;
	}
	if ((uParam0->f_1899 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901)) && VEHICLE::IS_DRAFT_VEHICLE(uParam0->f_1901))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(uParam0->f_1901, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || func_193(iVar2, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1) < func_193(iVar1, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1))
				{
					iVar1 = iVar2;
				}
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		if (!func_63(uParam0, (1 << 13)))
		{
			if (func_193(iVar1, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1) <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5.0f) || VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879))
			{
				if (VEHICLE::_GET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901) != 5.0f)
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 5.0f);
				}
			}
			else if ((!func_832((1 << 9)) || func_833(2)) && VEHICLE::_GET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901) != 50.0f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50.0f);
			}
		}
	}
}

void func_713(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_1633[iVar2 /*15*/].f_11 && VOLUME::DOES_VOLUME_EXIST(uParam0->f_1633[iVar2 /*15*/].f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1898) && !uParam0->f_1633[iVar2 /*15*/].f_13)
			{
				PED::_ADD_PED_STAY_OUT_VOLUME(uParam0->f_1898, uParam0->f_1633[iVar2 /*15*/].f_12);
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_1898, 1);
				uParam0->f_1633[iVar2 /*15*/].f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1687 != 0 || func_63(uParam0, (1 << 25)))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
					}
					uParam0->f_1687 = 0;
					func_298(uParam0, (1 << 25));
				}
				bVar3 = func_495(uParam0->f_1633[iVar2 /*15*/].f_10, (1 << 17));
				if (func_834(Global_35, uParam0->f_1633[iVar2 /*15*/].f_12, 0, 1))
				{
					if (uParam0->f_1688 >= 0)
					{
						func_540(uParam0, uParam0->f_1633[iVar2 /*15*/].f_10, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					}
					if (bVar3)
					{
						func_835();
					}
					func_836(uParam0, iVar2, iVar0, bVar3);
				}
				else if (func_837(&(uParam0->f_1633[iVar2 /*15*/])) != 0)
				{
					func_836(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (func_495(uParam0->f_1633[iVar2 /*15*/].f_10, 4))
			{
				if (uParam0->f_1688 >= 0)
				{
					if (((func_193(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1) > uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 && func_834(uParam0->f_1898, uParam0->f_1633[iVar2 /*15*/].f_12, 0, 1)) || uParam0->f_1687 != 0) || func_63(uParam0, (1 << 25)))
					{
						iVar4 = 5152;
						if (func_253(Global_35, &(uParam0->f_1687), iVar4, 0, 0, 1084227584, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							uParam0->f_1687 = 0;
							func_298(uParam0, (1 << 25));
						}
						else
						{
							func_543(uParam0, (1 << 25));
						}
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_714(var uParam0)
{
	if (uParam0->f_1688 < 0)
	{
		return false;
	}
	if (func_63(uParam0, (1 << 25)))
	{
		return false;
	}
	if (func_300(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && uParam0->f_1897)
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875) && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1876))
	{
		return true;
	}
	if (func_63(uParam0, (1 << 16)))
	{
		return true;
	}
	return false;
}

float func_715(var uParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	var uVar6;
	Vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;

	fVar16 = 10000.0f;
	switch (uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_4, true);
			vVar0 = { uParam0->f_1016[iParam1 /*41*/].f_4 - uParam0->f_1016[iParam1 /*41*/].f_1 /*3*/ };
			if (func_838(&vVar3, uParam0->f_1016[iParam1 /*41*/].f_1, uParam0->f_1016[iParam1 /*41*/].f_4, vVar0, Global_36))
			{
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		case 1:
			if (Global_36.f_2 >= uParam0->f_1016[iParam1 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[iParam1 /*41*/].f_1.f_2 + uParam0->f_1016[iParam1 /*41*/].f_10))
			{
				func_839(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_1, true) - uParam0->f_1016[iParam1 /*41*/].f_11);
					if (fVar16 < 0.0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000.0f;
}

void func_716(var uParam0)
{
	int iVar0;

	func_840(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar0 /*41*/].f_22)) && func_841(uParam0, iVar0)) && !func_447(&(uParam0->f_1016[iVar0 /*41*/]), 1))
			{
				if (!func_842(uParam0, &(uParam0->f_1016[iVar0 /*41*/].f_22)))
				{
					func_843(&(uParam0->f_1771), uParam0->f_1016[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				func_844(&(uParam0->f_1016[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_717(int iParam0, var uParam1)
{
	*iParam0 = 0;
	if (!func_723(uParam1, 8))
	{
		if (func_723(uParam1, 1))
		{
			*iParam0 = 1;
		}
		else if (func_723(uParam1, 4))
		{
			*iParam0 = 4;
		}
		else if (func_723(uParam1, 2))
		{
			*iParam0 = 2;
		}
	}
}

void func_718(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	func_724(sParam0, iParam2);
	func_845(iParam1, fParam3);
}

void func_719()
{
	if (MISC::IS_BIT_SET(Global_1357510, 4))
	{
	}
	else
	{
		MISC::SET_BIT(&Global_1357510, 0);
	}
}

void func_720(var uParam0, int iParam1)
{
	uParam0->f_1665 |= iParam1;
}

char* func_721(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_722()
{
	return "CAMERA_LEADIN_ACTIVE_CONVERSATION_REQUEST";
}

bool func_723(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_724(char* sParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			strcpy_s(sParam0, 64, "default_leadin_camera");
			if (func_846(iParam1, 1))
			{
				strcpy_s(&(sParam0->f_8), 64, "LEADIN_TREATMENT_RIGHT_REQUEST");
			}
			else if (func_846(iParam1, 2))
			{
				strcpy_s(&(sParam0->f_8), 64, "LEADIN_TREATMENT_LEFT_REQUEST");
			}
			else if (func_846(iParam1, 4))
			{
				strcpy_s(&(sParam0->f_8), 64, "LEADIN_TREATMENT_CENTER_REQUEST");
			}
			CAM::_LOAD_CAMERA_DATA_DICT(sParam0);
			sParam0->f_16 = 1;
		}
		else if (CAM::_IS_CAM_DATA_DICT_LOADED(sParam0) && !CAM::_IS_CAMERA_AVAILABLE(sParam0))
		{
			CAM::_CAM_CREATE(sParam0);
		}
	}
}

float func_725(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) /*3*/ };
	return func_410(vVar0, vVar3, iParam2);
}

void func_726(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1.0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1.0f);
}

void func_727(var uParam0, int iParam1)
{
	uParam0->f_1665 -= uParam0->f_1665 & iParam1;
}

bool func_728(var uParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;

	if (func_63(uParam0, 4))
	{
		return false;
	}
	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (uParam0->f_1688 < 0 || uParam0->f_1688 >= 8)
	{
		return false;
	}
	if (!uParam0->f_1016[uParam0->f_1688 /*41*/].f_29)
	{
		return false;
	}
	if (!func_63(uParam0, (1 << 12)) && uParam0->f_1896)
	{
		return false;
	}
	if (Global_1430231.f_4)
	{
		return false;
	}
	if (uParam0->f_1016[uParam0->f_1688 /*41*/].f_29)
	{
		if (uParam0->f_1016[uParam0->f_1688 /*41*/] == 0)
		{
			vVar3 = { uParam0->f_1016[uParam0->f_1688 /*41*/].f_4 - uParam0->f_1016[uParam0->f_1688 /*41*/].f_1 /*3*/ };
			vVar6 = { 0.0f, 0.0f, 0.0f /*3*/ };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1.0f);
			if (func_838(&vVar0, uParam0->f_1765, Global_36, vVar6, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1))
			{
				iVar9 = 1;
				if (vVar0.x > uParam0->f_1016[uParam0->f_1688 /*41*/].f_1)
				{
					if (vVar0.x > uParam0->f_1016[uParam0->f_1688 /*41*/].f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < uParam0->f_1016[uParam0->f_1688 /*41*/].f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_1)
					{
						if (vVar0.y > uParam0->f_1016[uParam0->f_1688 /*41*/].f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < uParam0->f_1016[uParam0->f_1688 /*41*/].f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 - 0.1f) || vVar0.z > (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 + uParam0->f_1016[uParam0->f_1688 /*41*/].f_10)) || (func_300(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && (uParam0->f_1897 || uParam0->f_1899)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*iParam1 = uParam0->f_1688;
					return true;
				}
			}
		}
		else if (func_63(uParam0, 8))
		{
			*iParam1 = uParam0->f_1684;
			return true;
		}
	}
	return false;
}

void func_729(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		uParam0->f_1016[iParam1 /*41*/].f_28 = 1;
		uParam0->f_1684 = iParam1;
		uParam0->f_1688 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_1769 = 1;
	}
}

void func_730(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;

	switch (uParam0->f_475[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 35)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0.0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((func_744(&(uParam0->f_475[iParam1 /*18*/]), 4) && uParam0->f_475[iParam1 /*18*/].f_12 < 1.0f) && fVar1 >= uParam0->f_475[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (func_744(&(uParam0->f_475[iParam1 /*18*/]), 64) && func_847(uParam0, iParam1, 0))
				{
					func_848(uParam0, uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_475[iParam1 /*18*/].f_3 >= 0 && uParam0->f_475[iParam1 /*18*/].f_5 >= 0) && uParam0->f_475[iParam1 /*18*/].f_3 != uParam0->f_475[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						func_849(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
					}
					if ((func_744(&(uParam0->f_475[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						func_849(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			func_733(uParam0, iParam1, 0, 0);
			break;
	}
}

int func_731(var uParam0, int iParam1)
{
	if (uParam0->f_475[iParam1 /*18*/].f_1 > uParam0->f_1683)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2))
	{
	}
	if (uParam0->f_1683 < 0 || uParam0->f_1683 > 6)
	{
		return 0;
	}
	if (uParam0->f_475[iParam1 /*18*/].f_1 == 0)
	{
		return 1;
	}
	if (uParam0->f_475[iParam1 /*18*/].f_17 == 2 && func_8(uParam0) == 9)
	{
		return 1;
	}
	if (!func_63(uParam0, (1 << 12)) && uParam0->f_1896)
	{
		return 0;
	}
	if (Global_1430231.f_4)
	{
		return 0;
	}
	if (uParam0->f_475[iParam1 /*18*/] != uParam0->f_1684)
	{
		return 0;
	}
	if (func_8(uParam0) > 3 && uParam0->f_475[iParam1 /*18*/] != uParam0->f_1684)
	{
		return 0;
	}
	if ((((func_8(uParam0) > 3 && uParam0->f_475[iParam1 /*18*/].f_17 == 1) && func_539(uParam0) != 11) && func_538(uParam0, uParam0->f_1684)) && uParam0->f_475[iParam1 /*18*/].f_2 != 4)
	{
		return 0;
	}
	if ((uParam0->f_475[iParam1 /*18*/].f_2 == 9 && uParam0->f_475[iParam1 /*18*/].f_4 >= 0) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, true, false))
		{
			return 0;
		}
		else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, func_211(Global_35)))
		{
			if (func_322(&(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/]), 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (func_322(&(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/]), 8))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_732(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_475[iParam1 /*18*/].f_2)
	{
		case 9:
			func_850(uParam0, iParam2, iParam1);
			break;
		case 4:
			func_733(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (func_48(&(uParam0->f_1872)) >= (float)(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_25 / 1000))
				{
					func_840(uParam0);
					if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22)))
					{
						func_843(&(uParam0->f_1771), uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_475[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1685 = iParam1;
			break;
	}
}

int func_733(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;

	iVar2 = uParam0->f_1688;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_475[iParam1 /*18*/];
		fVar3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_7;
		fVar4 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.0f);
	}
	switch (func_539(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!func_851(uParam0, iVar2))
				{
					uParam0->f_1685 = iParam1;
				}
				uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			}
			if (((!func_300(&(uParam0->f_1016[iVar2 /*41*/]), 32) && func_852()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_459))) || (!func_300(&(uParam0->f_1016[iVar2 /*41*/]), 128) && uParam0->f_1899))
			{
				if (uParam0->f_1899)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 0.1f, -1, false);
					if (!func_63(uParam0, (1 << 13)))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 0.0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1901, 24, 1000);
					func_741(uParam0, 8);
				}
				else
				{
					func_543(uParam0, (1 << 17));
					func_741(uParam0, 11);
				}
			}
			else if (uParam0->f_1897)
			{
				func_741(uParam0, 5);
			}
			else
			{
				func_853(uParam0);
			}
			break;
		case 1:
			bVar0 = func_21(&(uParam0->f_1869)) >= 3.0f;
			if ((((!func_439(Global_35, joaat("SCRIPT_TASK_SWAP_WEAPON")) && !func_439(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"))) && func_21(&(uParam0->f_1869)) >= 2.5f) || (!func_412(func_411(Global_35, 0, 1, 0)) && !func_412(func_411(Global_35, 1, 1, 0)))) || bVar0)
			{
				func_853(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = func_21(&(uParam0->f_1869)) >= 3.5f;
			iVar1 = 5664;
			if (func_300(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), (1 << 9)))
			{
				iVar1 |= 128;
			}
			if (!func_538(uParam0, uParam0->f_1688))
			{
				iVar1 |= (1 << 11);
			}
			if (func_253(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4))
			{
				func_853(uParam0);
			}
			if ((!uParam0->f_1897 && !uParam0->f_1899) || bVar0)
			{
				uParam0->f_1686 = 0;
				if (func_539(uParam0) == 5 || iParam1 < 0)
				{
					func_853(uParam0);
				}
				else
				{
					func_854(uParam0, iParam1, bParam2);
					func_26(&(uParam0->f_1869));
					func_741(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = func_21(&(uParam0->f_1869)) >= 1.0f;
			if (func_671(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) || bVar0)
			{
				func_741(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!func_300(&(uParam0->f_1016[iVar2 /*41*/]), 256))
			{
				if (func_393(&(uParam0->f_1903)))
				{
					func_855(uParam0->f_1903, 0);
				}
			}
			func_26(&(uParam0->f_1869));
			func_741(uParam0, 4);
			break;
		case 4:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2.0f;
			if ((func_300(&(uParam0->f_1016[iVar2 /*41*/]), 256) || !func_393(&uVar5)) || bVar0)
			{
				if (func_665())
				{
					func_856();
					func_741(uParam0, 10);
				}
				else
				{
					func_741(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2.0f;
			if (func_665() || bVar0)
			{
				func_741(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2.0f;
			iVar1 = 5664;
			if (func_300(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), (1 << 9)))
			{
				iVar1 |= 128;
			}
			if (!func_538(uParam0, uParam0->f_1688))
			{
				iVar1 |= (1 << 11);
			}
			if (func_253(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1686 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1901, 0.0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				func_741(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (func_21(&(uParam0->f_1869)) >= 0.75f)
			{
				if (!func_63(uParam0, (1 << 13)))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50.0f);
				}
				VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(uParam0->f_1901);
				func_543(uParam0, (1 << 17));
				func_741(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_734(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 -= uParam0->f_1666.f_1 & iParam1;
}

bool func_735(var uParam0, char* sParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	struct<13> /*104*/ sVar2;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	char cVar20[64];
	int iVar28;
	Vector3 vVar29;
	int iVar32;
	int iVar33;

	bVar0 = DATAFILE::PARSEDDATA_IS_FILE_VALID(uParam0->f_1889);
	if (!bVar0)
	{
		uParam0->f_1889 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::PARSEDDATA_IS_FILE_LOADED(uParam0->f_1889);
	if (!bVar1)
	{
		return false;
	}
	func_857(uParam0);
	func_469(uParam0, iParam2);
	if (func_63(uParam0, (1 << 14)))
	{
		func_858(uParam0);
	}
	sVar2.f_10 = joaat("WEAPON_UNARMED");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		func_859(uParam0, iVar18);
		if (func_860(uParam0, 0))
		{
			if (func_861(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_1016[iVar16 /*41*/].f_27 = 0;
					func_862(uParam0, 1, &(uParam0->f_1016[iVar16 /*41*/].f_1));
					func_862(uParam0, 2, &(uParam0->f_1016[iVar16 /*41*/].f_1.f_1));
					func_862(uParam0, 3, &(uParam0->f_1016[iVar16 /*41*/].f_1.f_2));
					func_862(uParam0, 4, &(uParam0->f_1016[iVar16 /*41*/].f_11));
					func_862(uParam0, 5, &(uParam0->f_1016[iVar16 /*41*/].f_12));
					func_862(uParam0, 6, &(uParam0->f_1016[iVar16 /*41*/].f_13));
					func_862(uParam0, 7, &(uParam0->f_1016[iVar16 /*41*/].f_4));
					func_862(uParam0, 8, &(uParam0->f_1016[iVar16 /*41*/].f_4.f_1));
					func_862(uParam0, 9, &(uParam0->f_1016[iVar16 /*41*/].f_4.f_2));
					func_862(uParam0, 10, &(uParam0->f_1016[iVar16 /*41*/].f_7));
					func_862(uParam0, 11, &(uParam0->f_1016[iVar16 /*41*/].f_7.f_1));
					func_862(uParam0, 12, &(uParam0->f_1016[iVar16 /*41*/].f_7.f_2));
					func_862(uParam0, 13, &(uParam0->f_1016[iVar16 /*41*/].f_10));
					func_862(uParam0, 14, &(uParam0->f_1016[iVar16 /*41*/].f_14));
					func_862(uParam0, 15, &(uParam0->f_1016[iVar16 /*41*/].f_15));
					if (func_861(uParam0, 16, &iVar17))
					{
						uParam0->f_1016[iVar16 /*41*/] = iVar17;
					}
					func_862(uParam0, 19, &(uParam0->f_1016[iVar16 /*41*/].f_16));
					func_862(uParam0, 20, &(uParam0->f_1016[iVar16 /*41*/].f_17));
					func_862(uParam0, 31, &(uParam0->f_1016[iVar16 /*41*/].f_18));
					if (func_863(uParam0, 21, &cVar20))
					{
						MemCopy(&(uParam0->f_1016[iVar16 /*41*/].f_19), {cVar20}, 3);
					}
					if (func_863(uParam0, 22, &cVar20))
					{
						MemCopy(&(uParam0->f_1016[iVar16 /*41*/].f_22), {cVar20}, 3);
					}
					func_861(uParam0, 23, &(uParam0->f_1016[iVar16 /*41*/].f_25));
					func_864(uParam0, &(uParam0->f_1016[iVar16 /*41*/].f_27));
					if (func_863(uParam0, 35, &(uParam0->f_1016[iVar16 /*41*/].f_30)))
					{
					}
					if (func_861(uParam0, 39, &iVar17))
					{
						uParam0->f_1016[iVar16 /*41*/].f_39 = iVar17;
					}
					else
					{
						uParam0->f_1016[iVar16 /*41*/].f_39 = 1;
					}
					if (func_862(uParam0, 40, &(uParam0->f_1016[iVar16 /*41*/].f_40)))
					{
						func_844(&(uParam0->f_1016[iVar16 /*41*/]), 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar16 /*41*/].f_30)))
					{
						uParam0->f_1016[iVar16 /*41*/].f_30 = { func_372() /*8*/ };
					}
					uParam0->f_1016[iVar16 /*41*/].f_29 = 1;
					if (uParam0->f_1895 == -1 || uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 < uParam0->f_1016[iVar16 /*41*/].f_17)
					{
						uParam0->f_1895 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1016[iVar18 /*41*/].f_29)
		{
			vVar29 = { vVar29 + uParam0->f_1016[iVar18 /*41*/].f_1 /*3*/ };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FloatToVector(BUILTIN::TO_FLOAT(iVar28)) /*3*/ };
	uParam0->f_1900 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1016[iVar18 /*41*/].f_29)
		{
			if (!func_865(vVar29, uParam0->f_1016[iVar18 /*41*/].f_1, 5.0f, 1))
			{
				uParam0->f_1900 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				func_859(uParam0, iVar18);
				if (func_860(uParam0, 45))
				{
					if (func_861(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							func_866(&(uParam0->f_1522[iVar16 /*10*/]), 2);
							func_863(uParam0, 46, &(uParam0->f_1522[iVar16 /*10*/]));
							if (func_867(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									func_866(&(uParam0->f_1522[iVar16 /*10*/]), 1);
								}
							}
							if (func_861(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									func_866(&(uParam0->f_1522[iVar16 /*10*/]), 8);
								}
								else if (iVar17 == 2)
								{
									func_866(&(uParam0->f_1522[iVar16 /*10*/]), 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 35)
			{
				iVar16 = -1;
				func_859(uParam0, iVar18);
				if (func_860(uParam0, 50))
				{
					if (func_861(uParam0, 51, &iVar17))
					{
						sVar2.f_1 = iVar17;
					}
					func_861(uParam0, 43, &(sVar2.f_3));
					if (func_863(uParam0, 52, &cVar20))
					{
						MemCopy(&(sVar2.f_4), {cVar20}, 4);
					}
					func_862(uParam0, 53, &(sVar2.f_8));
					if (func_861(uParam0, 54, &iVar17))
					{
						sVar2.f_10 = iVar17;
					}
					func_867(uParam0, 55, &(sVar2.f_11));
					func_867(uParam0, 56, &(sVar2.f_12));
					iVar32 = -1;
					if (func_868(uParam0, sVar2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 35)
						{
							uParam0->f_3[iVar32 /*13*/].f_3 = sVar2.f_3;
							uParam0->f_3[iVar32 /*13*/].f_4 = { sVar2.f_4 /*4*/ };
							uParam0->f_3[iVar32 /*13*/].f_8 = sVar2.f_8;
							uParam0->f_3[iVar32 /*13*/].f_10 = sVar2.f_10;
							uParam0->f_3[iVar32 /*13*/].f_11 = sVar2.f_11;
							uParam0->f_3[iVar32 /*13*/].f_12 = sVar2.f_12;
							uParam0->f_3[iVar32 /*13*/] = 1;
							if (func_869(sVar2.f_1))
							{
								func_543(uParam0, (1 << 24));
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			func_859(uParam0, iVar18);
			if (func_860(uParam0, 82))
			{
				if (func_863(uParam0, 83, &cVar20))
				{
					MemCopy(&(uParam0->f_459), {cVar20}, 4);
				}
				func_863(uParam0, 84, &(uParam0->f_459.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_459.f_4)))
				{
					if (uParam0->f_459.f_15 == 1)
					{
						uParam0->f_459.f_4 = { func_363() /*8*/ };
					}
					else if (uParam0->f_459.f_15 == 2)
					{
						uParam0->f_459.f_4 = { func_372() /*8*/ };
					}
					else
					{
						uParam0->f_459.f_4 = { func_372() /*8*/ };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				func_859(uParam0, iVar18);
				if (func_860(uParam0, 57))
				{
					if (func_861(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_475[iVar16 /*18*/].f_8 = 0;
							func_861(uParam0, 58, &(uParam0->f_475[iVar16 /*18*/]));
							if (func_861(uParam0, 59, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_1 = func_870(iVar17);
							}
							if (func_861(uParam0, 60, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_2 = func_871(iVar17);
							}
							func_861(uParam0, 61, &(uParam0->f_475[iVar16 /*18*/].f_3));
							func_862(uParam0, 67, &(uParam0->f_475[iVar16 /*18*/].f_10));
							func_862(uParam0, 70, &(uParam0->f_475[iVar16 /*18*/].f_11));
							func_862(uParam0, 68, &(uParam0->f_475[iVar16 /*18*/].f_9));
							func_861(uParam0, 72, &(uParam0->f_475[iVar16 /*18*/].f_5));
							func_862(uParam0, 77, &(uParam0->f_475[iVar16 /*18*/].f_12));
							func_861(uParam0, 78, &(uParam0->f_475[iVar16 /*18*/].f_13));
							func_861(uParam0, 79, &(uParam0->f_475[iVar16 /*18*/].f_14));
							if (func_861(uParam0, 73, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_17 = iVar17;
							}
							if (func_861(uParam0, 75, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_4 = iVar17;
								bVar15 = true;
							}
							func_862(uParam0, 80, &(uParam0->f_475[iVar16 /*18*/].f_15));
							if (func_867(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 1;
								}
							}
							if (func_867(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= (1 << 9);
								}
							}
							if (func_867(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 2;
								}
							}
							if (func_867(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 16;
								}
							}
							if (func_867(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 32;
								}
							}
							if (func_867(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 4;
								}
							}
							if (func_867(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 64;
								}
							}
							if (func_867(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 128;
								}
							}
							if (func_867(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_475[iVar16 /*18*/].f_2 == 9)
							{
								uParam0->f_475[iVar16 /*18*/].f_4 = uParam0->f_475[iVar16 /*18*/].f_3;
								uParam0->f_475[iVar16 /*18*/].f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_475[iVar16 /*18*/].f_16 = uParam0->f_475[iVar16 /*18*/].f_2;
							uParam0->f_475[iVar16 /*18*/].f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1894 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				func_859(uParam0, iVar18);
				if (func_860(uParam0, 85))
				{
					func_861(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						func_867(uParam0, 87, &(uParam0->f_1345[iVar18 /*22*/]));
						func_863(uParam0, 96, &(uParam0->f_1345[iVar18 /*22*/].f_2));
						func_863(uParam0, 97, &(uParam0->f_1345[iVar18 /*22*/].f_10));
						func_862(uParam0, 93, &(uParam0->f_1345[iVar18 /*22*/].f_18));
						func_862(uParam0, 94, &(uParam0->f_1345[iVar18 /*22*/].f_19));
						func_861(uParam0, 95, &(uParam0->f_1345[iVar18 /*22*/].f_20));
						uParam0->f_1345[iVar18 /*22*/].f_1 = 0;
						func_872(uParam0, &(uParam0->f_1345[iVar18 /*22*/].f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				func_859(uParam0, iVar18);
				if (func_860(uParam0, 98))
				{
					if (func_861(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_1633[iVar16 /*15*/].f_10 = 0;
							func_873(uParam0, 99, &(uParam0->f_1633[iVar16 /*15*/]));
							func_873(uParam0, 100, &(uParam0->f_1633[iVar16 /*15*/].f_6));
							func_873(uParam0, 101, &(uParam0->f_1633[iVar16 /*15*/].f_3));
							if (func_861(uParam0, 102, &iVar17))
							{
								uParam0->f_1633[iVar16 /*15*/].f_9 = iVar17;
							}
							func_864(uParam0, &(uParam0->f_1633[iVar16 /*15*/].f_10));
							uParam0->f_1633[iVar16 /*15*/].f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_PARSEDDATA_UNLOAD_FILE(uParam0->f_1889);
			func_543(uParam0, 1);
			func_543(uParam0, (1 << 14));
			func_874(uParam0);
			return true;
		}
	}
}

bool func_736(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1522[iVar0 /*10*/])) && func_322(&(uParam0->f_1522[iVar0 /*10*/]), 2)) && !func_322(&(uParam0->f_1522[iVar0 /*10*/]), 16)) && func_875(uParam0, iVar0))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
			{
				uParam0->f_1522[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1522[iVar0 /*10*/]), 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				return false;
			}
			else if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, false))
			{
				return false;
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout"))
			{
				func_866(&(uParam0->f_1522[iVar0 /*10*/]), 32);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
			func_866(&(uParam0->f_1522[iVar0 /*10*/]), 16);
		}
		iVar0++;
	}
	return true;
}

void func_737(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<16> /*128*/ sVar2;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1522[iVar0 /*10*/])) && func_322(&(uParam0->f_1522[iVar0 /*10*/]), 2))
		{
			iVar1 = 0;
			if (func_875(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			uParam0->f_1522[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1522[iVar0 /*10*/]), iVar1, 0, false, true);
		}
		iVar0++;
	}
	strcpy_s(&sVar2, 64, func_449());
	strcpy_s(&(sVar2.f_8), 64, func_722());
	uParam0->f_1708 = { sVar2 /*16*/ };
	uParam0->f_1731 = { sVar2 /*16*/ };
	if (!func_299(uParam0, 8))
	{
		CAM::_LOAD_CAMERA_DATA_DICT(func_449());
		func_446(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[iVar0 /*22*/].f_2), func_449()))
		{
			if (!CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
			{
				CAM::_LOAD_CAMERA_DATA_DICT(&(uParam0->f_1345[iVar0 /*22*/].f_2));
				uParam0->f_1345[iVar0 /*22*/].f_21 = 1;
			}
		}
		iVar0++;
	}
}

bool func_738(var uParam0)
{
	int iVar0;
	bool bVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	bool bVar8;

	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
		{
			if (!func_322(&(uParam0->f_1522[iVar0 /*10*/]), 64))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, false))
				{
					func_876(uParam0, uParam0->f_1522[iVar0 /*10*/].f_8);
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
					bVar1 = false;
					func_866(&(uParam0->f_1522[iVar0 /*10*/]), 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar0 /*41*/].f_19)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1016[iVar0 /*41*/].f_19), "empty"))
		{
			HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_1016[iVar0 /*41*/].f_19));
			if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_1016[iVar0 /*41*/].f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (func_299(uParam0, 8) && !CAM::_IS_CAM_DATA_DICT_LOADED(func_449()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && uParam0->f_1345[iVar0 /*22*/].f_21) && !CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!func_90(uParam0->f_1885) || uParam0->f_1888 != 0.0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout"))
				{
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar2, uParam0->f_1888, uParam0->f_1885) /*3*/ };
					vVar5.f_2 = (vVar5.z - uParam0->f_1888);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_739(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !func_486(uParam0->f_3[iVar0 /*13*/].f_2)) && func_412(uParam0->f_3[iVar0 /*13*/].f_10)) && !func_869(uParam0->f_3[iVar0 /*13*/].f_1))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 0, false))
				{
					if (func_877(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::GIVE_WEAPON_TO_PED(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 7, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::GIVE_WEAPON_TO_PED(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 9, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
					}
					else
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::GIVE_WEAPON_TO_PED(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 2, true, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
					}
				}
				if (uParam0->f_3[iVar0 /*13*/].f_11)
				{
					if (func_878(iVar1, 0, 0, 0) != uParam0->f_3[iVar0 /*13*/].f_10)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_740(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_12)
		{
			func_879(&(uParam0->f_3[iVar0 /*13*/]));
		}
		iVar0++;
	}
}

void func_741(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	func_26(&(uParam0->f_1869));
}

void func_742(var uParam0)
{
	func_880(uParam0);
	func_881(uParam0);
}

int func_743(var uParam0)
{
	if (uParam0->f_1685 < 0 || uParam0->f_475[uParam0->f_1685 /*18*/].f_4 < 0)
	{
		return -1;
	}
	return uParam0->f_1522[uParam0->f_475[uParam0->f_1685 /*18*/].f_4 /*10*/].f_8;
}

bool func_744(var uParam0, int iParam1)
{
	return uParam0->f_8 & iParam1 != 0;
}

void func_745()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

char* func_746(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return func_882(uParam0->f_13[iVar0 /*12*/].f_1);
		}
		iVar0++;
	}
	return "";
}

bool func_747(var uParam0, int iParam1)
{
	return *uParam0 & iParam1 != 0;
}

void func_748(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 |= iParam1;
	}
	else
	{
		*uParam0 -= *uParam0 & iParam1;
	}
}

void func_749(int iParam0)
{
	int iVar0;

	if (!func_444(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_883(iParam0);
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

void func_750(int iParam0)
{
	if (func_114(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_255(iParam0)))
		{
			func_653(iParam0, (1 << 26), 1);
			func_568(iParam0, 19, 1);
		}
	}
}

float func_751(int iParam0)
{
	if (!func_444(iParam0))
	{
		return 0.0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_752(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = func_255(iParam0);
	iVar1 = func_569(iParam0, 0);
	func_884(iParam0, bVar0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(bVar0))
		{
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
		PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar1);
		if (bVar2)
		{
			PED::_UNRESERVE_AMBIENT_PEDS(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_753(int iParam0)
{
	if (!func_444(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_754(int iParam0)
{
	if (!func_444(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_755(int iParam0, int iParam1, bool bParam2)
{
	if (!func_444(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 |= iParam1;
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 -= Global_1360165[iParam0 /*1157*/].f_70.f_1 & iParam1;
	}
}

int func_756(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_444(iParam0))
	{
		return 0;
	}
	bVar0 = func_575(iParam0);
	if (func_256(bVar0, 0))
	{
		if (func_256(PED::_GET_RIDER_OF_MOUNT(bVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_753(iParam0)) || func_754(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(bVar0) && func_885(PLAYER::PLAYER_PED_ID(), bVar0, 1) < 10000.0f))
			{
				iVar1 = func_886(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(bVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
					}
					func_887(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_888(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_888(iParam0, 0));
					func_889(iParam0);
				}
			}
			else
			{
				if (func_263(iParam0, (1 << 15), 1))
				{
					iVar2 = func_888(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_256(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_263(iParam0, (1 << 15), 1))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_887(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_888(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_888(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_887(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_890(iParam0, 0);
	return 1;
}

bool func_757(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_758(int iParam0, bool bParam1)
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

bool func_759(int iParam0)
{
	return func_380(iParam0, 2);
}

int func_760(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_428(iVar0);
}

bool func_761(bool bParam0)
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

int func_762(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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
		sVar0 = { func_427(bParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_891((398 + iVar28), 1);
			if (func_614(bParam0, &sVar0, iVar5, 0))
			{
				if (func_615(bParam0, &sVar6, iVar5))
				{
					sVar29 = { func_436(bParam0, sVar0, iVar5, 0) /*4*/ };
					func_892(bParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_893(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
					{
						return 0;
					}
					func_894(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
					func_895(bParam0, iParam1);
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

void func_763(int iParam0, bool bParam1, float fParam2)
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

bool func_764(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_765(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> /*32*/ sVar4;
	bool bVar18;
	var uVar19;
	struct<22> /*176*/ sVar23;

	iVar0 = 0;
	sVar4.f_9 = joaat("SLOTID_NONE");
	bVar18 = func_896(iParam1, 128);
	if (func_897("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		sVar23.f_9 = joaat("SLOTID_NONE");
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_898(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_412(sVar4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(sVar4.f_4) && !WEAPON::IS_WEAPON_BOW(sVar4.f_4))
			{
			}
			else if (iParam2 != 0 && sVar4.f_4 == iParam2)
			{
			}
			else if ((!func_896(iParam1, (1 << 9)) && func_768(sVar4.f_4, &uVar19, &sVar23, joaat("SLOTID_WEAPON_0"))) && !sVar23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, sVar4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(sVar4.f_4) || func_877(sVar4.f_4)) && (!WEAPON::IS_WEAPON_SHOTGUN(sVar4.f_4) || func_896(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(sVar4.f_4) || func_896(iParam1, 4))) && (!func_877(sVar4.f_4) || func_896(iParam1, 8))) && (!WEAPON::IS_WEAPON_REPEATER(sVar4.f_4) || !func_896(iParam1, (1 << 23)))) && (!WEAPON::IS_WEAPON_RIFLE(sVar4.f_4) || !func_896(iParam1, (1 << 20))))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &sVar4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = sVar4.f_4;
						*uParam0 = { sVar4 /*4*/ };
					}
				}
			}
			iVar3++;
		}
		func_899(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!func_896(iParam1, (1 << 9)) && !func_896(iParam1, (1 << 10)))
	{
		iParam1 |= (1 << 9);
		return func_765(uParam0, iParam1, iParam2);
	}
	else if (func_896(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

struct<4> /*32*/ func_766()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_767(int iParam0)
{
	if (!func_900(iParam0))
	{
		return false;
	}
	return func_901(iParam0);
}

bool func_768(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_438(0);
	*uParam1 = { func_436(bParam0, func_612(0), iParam3, 0) /*4*/ };
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

void func_769(var uParam0, int iParam1)
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
			if ((func_902(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			else
			{
				if (func_902(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_903(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_770(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_904(uParam0, 1))
	{
		func_905(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_771(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_429(iParam0, 1) /*3*/] != Global_1946054.f_57[func_429(iParam0, 1) /*11*/];
}

void func_772(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_624(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_624(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_624(iVar2, iVar0);
		}
	}
}

bool func_773(bool bParam0)
{
	switch (bParam0)
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

int func_774(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_906();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_775(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(bParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(bParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_776(bool bParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

int func_777(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam0 == Global_1946054.f_57[func_429(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_416((1 << 19)))
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
	iVar0 += PED::_0x31B2E7F2E3C58B89(bParam0, joaat("BASE"), iParam2, bParam3);
	return iVar0;
}

int func_778(var uParam0)
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

void func_779(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] /*3*/ };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_254() == -1)
	{
		func_907(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_908(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_780(int iParam0, int iParam1)
{
	if (func_254() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return Global_26796.f_26[iParam1 /*120*/] & iParam0 != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return Global_36638.f_45.f_350.f_26[iParam1 /*120*/] & iParam0 != 0;
	}
	return false;
}

int func_781(int iParam0)
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

void func_782(int iParam0, bool bParam1, int iParam2)
{
	func_909(&(Global_1946054.f_1378), iParam0);
	func_910(2, iParam0, 6);
	if (bParam1)
	{
		func_783(0, 1);
	}
}

void func_783(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_911(0);
	}
	if (bParam0)
	{
		func_414(8);
		func_414((1 << 9));
	}
	else
	{
		func_414(8);
		func_414(16);
	}
}

char* func_784(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_634(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_634(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_785()
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

	if (func_912())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_913(2);
	}
	if (Global_1347477.f_119)
	{
		return func_913(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_914();
	fVar2 = func_915();
	fVar3 = func_916();
	fVar4 = func_917();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_918());
	fVar7 = (func_913(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_919(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_920(3, fVar9, fVar9 > 100.0f);
	return func_921(fVar7, -100.0f, 100.0f);
}

float func_786()
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

	if (func_912())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_913(1);
	}
	if (Global_1347477.f_119)
	{
		return func_913(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_914();
	fVar2 = func_915();
	fVar3 = func_916();
	fVar4 = func_917();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_918());
	fVar7 = (func_913(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_919(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_920(2, fVar9, fVar9 > 100.0f);
	return func_921(fVar7, -100.0f, 100.0f);
}

float func_787()
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

	if (func_912())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_913(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_922())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_923())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_913(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_914();
	fVar2 = func_915();
	fVar3 = func_916();
	fVar4 = func_917();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_918());
	fVar7 = (func_913(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_919(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_920(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_913(0);
	}
	return func_921(fVar7, -100.0f, 100.0f);
}

int func_788(int iParam0)
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

int func_789(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_444(iParam0))
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
					if (func_924(Global_1835011[4 /*74*/].f_1, 1))
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
					if (func_925(iVar0, 9, 11))
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
					if (func_924(Global_1347702[63 /*49*/].f_15, 1) || func_304(Global_1347702[63 /*49*/].f_15))
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
					if (func_925(iVar0, 9, 12))
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
					if (!func_924(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_263(18, (1 << 27), 1))
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
					if (func_925(iVar0, 9, 11))
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
					if (func_924(Global_1347702[134 /*49*/].f_15, 1) || func_304(Global_1347702[134 /*49*/].f_15))
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
					if (func_924(Global_1835011[38 /*74*/].f_1, 1))
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
					if (func_925(iVar0, 9, 11))
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
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_926(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !func_924(Global_1347702[1 /*49*/].f_15, 1))
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
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_255(iParam0)))
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
	if (!func_646(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_790(int iParam0)
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

bool func_791(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_444(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_115(iParam0) || func_458(iParam0, 44, 1))
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

struct<7> /*56*/ func_792(int iParam0, int iParam1, Vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
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

bool func_793(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_444(iParam0))
	{
		return false;
	}
	func_927(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

bool func_794(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_795(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return joaat("META_OUTFIT_ISLAND_HOLSTER");
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return joaat("META_OUTFIT_ROBBERY");
		case 1046468203:
			return 393090546;
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
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
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
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_928(296923297, iParam1);
			return func_929(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_928(1237718549, iParam1);
			return func_929(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
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
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
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
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return joaat("META_OUTFIT_DEFAULT");
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_796(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) || ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (PED::_IS_METAPED_USING_COMPONENT(bParam1, joaat("WEARABLE_MASKS")))
	{
		PED::REMOVE_TAG_FROM_META_PED(bParam1, joaat("WEARABLE_MASKS"), 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(bParam1, 494009478))
	{
		PED::REMOVE_TAG_FROM_META_PED(bParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_465(bParam1, 860729266))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 12) > 0 && func_465(bParam1, 879715242))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_465(bParam1, 1606325429))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_465(bParam1, 1743550585))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 9) > 0 && func_465(bParam1, 1064646155))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 10) > 0 && func_465(bParam1, -536694793))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 11) > 0 && func_465(bParam1, -1304053509))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 31) > 0 && func_465(bParam1, 718939204))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 16) > 0 && func_465(bParam1, -972364774))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 14) > 0 && func_465(bParam1, -1100875244))
	{
		if (PED::_IS_METAPED_USING_COMPONENT(bParam1, -134124598))
		{
			PED::REMOVE_TAG_FROM_META_PED(bParam1, -134124598, 1);
		}
		if (PED::_IS_METAPED_USING_COMPONENT(bParam1, 2071466316))
		{
			PED::REMOVE_TAG_FROM_META_PED(bParam1, 2071466316, 1);
		}
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 18) > 0 && func_465(bParam1, 1153596794))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 19) > 0 && func_465(bParam1, 1016389820))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 20) > 0 && func_465(bParam1, -726966617))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 21) > 0 && func_465(bParam1, 1365901568))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 15) > 0 && func_465(bParam1, -1658942149))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 17) > 0 && func_465(bParam1, -1980913856))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 22) > 0 && func_465(bParam1, 491764525))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 23) > 0 && func_465(bParam1, -76015264))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 24) > 0 && func_465(bParam1, 622113465))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 25) > 0 && func_465(bParam1, 781533162))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 26) > 0 && func_465(bParam1, -271415321))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 27) > 0 && func_465(bParam1, -1683207356))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 28) > 0 && func_465(bParam1, -254794762))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 29) > 0 && func_465(bParam1, 609066278))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 30) > 0 && func_465(bParam1, -1712783565))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 13) > 0 && func_465(bParam1, 1544915253))
	{
		PED::_EQUIP_META_PED_OUTFIT(bParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

void func_797(int iParam0)
{
	func_930(iParam0, 1);
	func_930(iParam0, 128);
	func_930(iParam0, 256);
	func_930(iParam0, (1 << 9));
	func_930(iParam0, (1 << 10));
	func_930(iParam0, (1 << 11));
	func_930(iParam0, (1 << 12));
	func_930(iParam0, (1 << 16));
	func_930(iParam0, (1 << 14));
	func_930(iParam0, (1 << 18));
	func_930(iParam0, (1 << 19));
	func_930(iParam0, (1 << 20));
	func_930(iParam0, (1 << 21));
	func_930(iParam0, (1 << 15));
	func_930(iParam0, (1 << 17));
	func_930(iParam0, (1 << 27));
	func_930(iParam0, (1 << 30));
}

void func_798(int iParam0, bool bParam1)
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

void func_799(bool bParam0)
{
	if (func_931(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(bParam0))
	{
		FIRE::STOP_ENTITY_FIRE(bParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	}
}

void func_800(int iParam0)
{
	bool bVar0;

	if (!func_444(iParam0))
	{
		return;
	}
	if (func_886(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_575(iParam0);
	func_799(bVar0);
	func_755(iParam0, (1 << 13), 1);
}

void func_801(bool bParam0)
{
	if (func_931(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 0, false);
}

void func_802(int iParam0)
{
	bool bVar0;

	if (!func_444(iParam0))
	{
		return;
	}
	if (func_886(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_575(iParam0);
	func_801(bVar0);
	func_755(iParam0, (1 << 13), 0);
}

void func_803(bool bParam0)
{
	if (func_931(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, false);
}

void func_804(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (func_115(14))
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
	if (!ENTITY::IS_ENTITY_IN_VOLUME(bParam0, Global_1357549.f_3[4], true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 909522);
}

void func_805(int iParam0)
{
	bool bVar0;

	if (!func_444(iParam0))
	{
		return;
	}
	if (func_886(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_575(iParam0);
	func_803(bVar0);
	func_755(iParam0, (1 << 14), 1);
}

void func_806(bool bParam0)
{
	if (func_931(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
}

void func_807(int iParam0)
{
	bool bVar0;

	if (!func_444(iParam0))
	{
		return;
	}
	if (func_886(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_575(iParam0);
	func_806(bVar0);
	func_755(iParam0, (1 << 14), 0);
}

void func_808(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

float func_809(Vector3 vParam0, Vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0.0f)
	{
		vParam0.x /= fVar0;
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0.0f)
	{
		vParam3.x /= fVar0;
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

void func_810(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_811(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_812(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_376(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_377(&(iParam1->f_6), 0, 1);
	}
	if (!func_376(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_704(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_932(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_376(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_819(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_933(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_934(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_675(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_933(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_384(iParam1->f_6, 0, 1);
				}
				else
				{
					func_384(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_813(int iParam0)
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

void func_814(int* iParam0, int iParam1)
{
	if (!func_827(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_808(iParam0, 14);
		}
	}
}

bool func_815(int iParam0)
{
	return Global_22 & iParam0 != 0;
}

void func_816(int iParam0)
{
	Global_22 |= iParam0;
}

int func_817(int iParam0, int iParam1)
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

bool func_818(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_819(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_376(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_592(iParam0);
	func_933(iParam0, 18, 0, 1);
	func_933(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_820(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_376(iParam0))
	{
		return false;
	}
	iVar0 = func_592(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_821(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_376(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_822()
{
	return Global_1946054.f_2792;
}

bool func_823(bool bParam0)
{
	if (func_935())
	{
		return false;
	}
	if (!func_394(bParam0, 0))
	{
		return false;
	}
	if (!func_936(bParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_824(bool bParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_427(bParam0, 1, 0) /*5*/ };
	return func_428(sVar0.f_4);
}

int func_825(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_937(bParam0);
	if (func_620(bParam0, joaat("CI_TAG_ITEM_MASK")))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_393(&bVar2))
		{
			if (bVar1)
			{
				iVar0 = func_938();
			}
			else
			{
				iVar0 = func_939();
			}
		}
		else if (func_153(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_940();
		}
		else
		{
			iVar0 = func_941();
		}
	}
	else if (func_601(&bVar2))
	{
		if (func_620(bVar2, joaat("CI_TAG_ITEM_MASK")))
		{
			iVar0 = func_938();
		}
		else
		{
			iVar0 = func_939();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_940();
	}
	else
	{
		iVar0 = func_941();
	}
	if (iVar0 != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, bParam0, iVar0, 1, iParam1, -1.0f);
		return 1;
	}
	return 0;
}

void func_826(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;

	iVar0 = func_824(bParam0);
	iVar1 = func_429(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (func_942(bParam0) && func_943(bParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == joaat("MP_COMPONENT_TYPE_HEADWEAR") && func_416((1 << 15))) || Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && bParam0 != Global_1946054.f_1497.f_1[iVar1 /*3*/])
	{
		if (func_942(Global_1946054.f_1497.f_1[iVar1 /*3*/]) && func_943(Global_1946054.f_1497.f_1[iVar1 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1946054.f_57[iVar1 /*11*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (func_395(bParam0))
		{
			case joaat("CI_CATEGORY_WARDROBE_MASK"):
				if (func_602(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), &uVar3))
				{
					iVar2 = func_429(func_760(joaat("CI_CATEGORY_WARDROBE_BIG_MASK")), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946054.f_2377[iVar2 /*2*/] = Global_1946054.f_57[iVar2 /*11*/];
						Jump @434; // curOff = 294
						if (func_416((1 << 15)))
						{
							func_622(func_420(iVar1, 1));
						}
						if (func_416((1 << 15)) || (func_602(joaat("CI_CATEGORY_WARDROBE_HAT"), &bVar4) && !func_943(bVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (func_602(joaat("CI_CATEGORY_WARDROBE_MASK"), &bVar4))
						{
							iVar2 = func_429(func_760(joaat("CI_CATEGORY_WARDROBE_MASK")), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946054.f_2377[iVar2 /*2*/] = Global_1946054.f_57[iVar2 /*11*/];
							}
							Global_1946054.f_2377[iVar1 /*2*/] = bParam0;
							func_944(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

bool func_827(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_828(var uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;

	func_165(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Global_35), &vVar0, &vVar3);
	vVar0.x *= 0.35f;
	vVar3.x *= 0.35f;
	vVar6 = { vVar3 - vVar0 /*3*/ };
	vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) /*3*/ };
	uParam0->f_1875 = VOLUME::CREATE_VOLUME_CYLINDER(Global_36, 0.0f, 0.0f, 0.0f, vVar6);
	if (!Global_1935630.f_12)
	{
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_1875, Global_35, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
	}
	func_298(uParam0, (1 << 20));
	func_298(uParam0, (1 << 21));
}

void func_829(var uParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;
	Vector3 vVar11;
	int iVar14;
	int iVar15;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return;
	}
	func_165(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(iVar1, &vVar2, &vVar5);
	vVar8 = { vVar5 - vVar2 /*3*/ };
	vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) /*3*/ };
	if (VEHICLE::IS_DRAFT_VEHICLE(iVar0))
	{
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			iVar15 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0), iVar14);
			if (!ENTITY::IS_ENTITY_DEAD(iVar15))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar15), &vVar2, &vVar5);
				vVar11 = { vVar5 - vVar2 /*3*/ };
				vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) /*3*/ };
			}
			else
			{
				iVar14++;
			}
		}
		vVar8.f_1 = (vVar8.y + (vVar11.y / 2.0f));
	}
	uParam0->f_1875 = VOLUME::CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), vVar8);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_1875, iVar0, 0.0f, (vVar11.y / 2.0f), 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
	}
	func_543(uParam0, (1 << 21));
	func_298(uParam0, (1 << 20));
}

void func_830(var uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	func_165(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	uParam0->f_1882 = { vVar4 - vVar1 /*3*/ };
	vVar7 = { uParam0->f_1882 * FloatToVector(func_831(iParam1)) /*3*/ };
	uParam0->f_1875 = VOLUME::CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 0.0f, 0.0f, 0.0f, vVar7);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_1875, iParam1, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
	}
	func_543(uParam0, (1 << 20));
	func_298(uParam0, (1 << 21));
}

float func_831(int iParam0)
{
	if (TASK::IS_PED_SPRINTING(iParam0))
	{
		return 1.0f;
	}
	if (TASK::IS_PED_RUNNING(iParam0))
	{
		return 0.9f;
	}
	if (TASK::IS_PED_WALKING(iParam0))
	{
		return 0.8f;
	}
	return 0.7f;
}

bool func_832(int iParam0)
{
	switch (func_254())
	{
		case -1:
			return Global_1357549.f_1495 & iParam0 != 0;
	}
	return false;
}

bool func_833(int iParam0)
{
	switch (func_254())
	{
		case -1:
			return Global_1357549.f_1494 & iParam0 != 0;
	}
	return false;
}

bool func_834(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_835()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
}

void func_836(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (func_837(&(uParam0->f_1633[iParam1 /*15*/])))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!func_495(uParam0->f_1633[iParam1 /*15*/].f_10, 256))
			{
				if (func_393(&(uParam0->f_1903)))
				{
					func_855(uParam0->f_1903, 0);
					func_945(&(uParam0->f_1633[iParam1 /*15*/]), 2);
				}
			}
			break;
		case 1:
			if (!func_495(uParam0->f_1633[iParam1 /*15*/].f_10, 256))
			{
				if (!func_946())
				{
					func_945(&(uParam0->f_1633[iParam1 /*15*/]), 0);
				}
			}
			else
			{
				func_945(&(uParam0->f_1633[iParam1 /*15*/]), 0);
			}
			break;
		case 2:
			if (!func_947())
			{
				func_945(&(uParam0->f_1633[iParam1 /*15*/]), 0);
			}
			break;
	}
}

int func_837(var uParam0)
{
	return uParam0->f_14;
}

bool func_838(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, Vector3 vParam10)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;

	vVar0 = { vParam4 - vParam1 /*3*/ };
	vVar3 = { vParam1 - vParam10 /*3*/ };
	fVar6 = func_948(vParam7, vVar0);
	fVar7 = -func_948(vParam7, vVar3);
	if (MISC::ABSF(fVar6) < 1E-08f)
	{
		return false;
	}
	fVar8 = (fVar7 / fVar6);
	*uParam0 = { vParam1 + Vector(fVar8, fVar8, fVar8) * vVar0 /*3*/ };
	if (fVar8 < 0.0f || fVar8 > 1.0f)
	{
		return false;
	}
	return true;
}

void func_839(var uParam0, int iParam1, var uParam2, Vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	Vector3 vVar0;
	Vector3 vVar3[4];
	Vector3 vVar16[4];
	float fVar29[4];
	Vector3 vVar34;
	Vector3 vVar37;
	int iVar40;
	int iVar41;
	Vector3 vVar42;
	float fVar45;

	if (!func_949(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0.0f, (BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11)) /*3*/ };
		vParam3 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0.0f, (BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11)) /*3*/ };
	}
	else
	{
		*uParam2 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0.0f, ((BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18)) /*3*/ };
		vParam3 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0.0f, ((BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18)) /*3*/ };
	}
	vVar0 = { Global_36 /*3*/ };
	if ((uParam0->f_1897 && VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875)) && func_91(uParam0->f_1898, uParam0->f_1016[iParam1 /*41*/].f_1, uParam0->f_1016[iParam1 /*41*/].f_17, 1, 1))
	{
		vVar34 = { VOLUME::GET_VOLUME_SCALE(uParam0->f_1875) /*3*/ };
		vVar37 = { VOLUME::GET_VOLUME_COORDS(uParam0->f_1875) /*3*/ };
		vVar3[0 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (vVar34.x / 2.0f), (vVar34.y / 2.0f), 0.0f) /*3*/ };
		vVar3[1 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (vVar34.x / 2.0f), (-vVar34.y / 2.0f), 0.0f) /*3*/ };
		vVar3[2 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (-vVar34.x / 2.0f), (vVar34.y / 2.0f), 0.0f) /*3*/ };
		vVar3[3 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (-vVar34.x / 2.0f), (-vVar34.y / 2.0f), 0.0f) /*3*/ };
		vVar16[0 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[1 /*3*/], true) /*3*/ };
		vVar16[1 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[2 /*3*/], true) /*3*/ };
		vVar16[2 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[1 /*3*/], true) /*3*/ };
		vVar16[3 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[2 /*3*/], true) /*3*/ };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[0 /*3*/], true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[1 /*3*/], true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[2 /*3*/], true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[3 /*3*/], true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (fVar29[iVar40] < fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { vVar16[iVar41 /*3*/] /*3*/ };
	}
	*fParam6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, *uParam2, true);
	*fParam7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam3, true);
	*fParam8 = func_410(uParam0->f_1016[iParam1 /*41*/].f_1, vVar0, 0);
	if (*fParam8 < uParam0->f_1016[iParam1 /*41*/].f_12)
	{
		*fParam8 += 360.0f;
	}
	if (uParam0->f_1016[iParam1 /*41*/].f_13 < uParam0->f_1016[iParam1 /*41*/].f_12)
	{
		*fParam9 = (uParam0->f_1016[iParam1 /*41*/].f_13 + 360.0f);
	}
	else
	{
		*fParam9 = uParam0->f_1016[iParam1 /*41*/].f_13;
	}
	if (*fParam8 < *fParam9)
	{
		vVar42 = { uParam0->f_1016[iParam1 /*41*/].f_1 /*3*/ };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1876 = { vVar42 + Vector(0.0f, (BUILTIN::COS(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_11)) /*3*/ };
		fVar45 = 0.0f;
		uParam0->f_1879 = { vVar42 + Vector(0.0f, ((BUILTIN::COS(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_17) + fVar45), ((BUILTIN::SIN(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_17) + fVar45)) /*3*/ };
	}
}

void func_840(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (uParam0->f_3[iVar0 /*13*/].f_1 != 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[iVar0 /*13*/].f_4)))
			{
				func_950(&(uParam0->f_1771), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), &(uParam0->f_3[iVar0 /*13*/].f_4), 0);
			}
		}
		iVar0++;
	}
}

bool func_841(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (8 == uParam0->f_475[iVar0 /*18*/].f_2 && uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_842(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar0 /*41*/].f_22)) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1016[iVar0 /*41*/].f_22), sParam1)) && func_447(&(uParam0->f_1016[iVar0 /*41*/]), 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_843(var uParam0, Vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_951(vParam1, uParam0);
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

void func_844(var uParam0, int iParam1)
{
	uParam0->f_26 |= iParam1;
}

void func_845(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fParam1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), fParam1);
		}
	}
	if (!func_952(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	if (!func_952(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (!func_952(iParam0, 16))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	}
	if (!func_952(iParam0, 128))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	}
	if (!func_952(iParam0, (1 << 9)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
	if (!func_952(iParam0, 64))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	}
	if (!(func_953(17) && func_193(Global_35, Global_1835011[17 /*74*/].f_18, 0) < 10.0f))
	{
		if (!func_952(iParam0, (1 << 11)))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
	}
	if (!func_952(iParam0, (1 << 12)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!func_952(iParam0, (1 << 10)))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
		if (!func_952(iParam0, 8))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 33, true);
		if (!func_952(iParam0, 32))
		{
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
		}
	}
}

bool func_846(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_847(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_475[iParam1 /*18*/].f_17 == 0 && func_8(uParam0) == 3)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if (uParam0->f_475[iParam1 /*18*/].f_17 == 2 && func_8(uParam0) == 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if ((uParam0->f_475[iParam1 /*18*/].f_17 == 1 && func_8(uParam0) > 3) && func_8(uParam0) < 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	return false;
}

void func_848(var uParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	char cVar1[64];
	int iVar9;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			strcpy_s(&cVar1, 64, uParam0->f_3[iVar0 /*13*/].f_9);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				cVar1 = { func_321(uParam0, uParam0->f_3[iVar0 /*13*/].f_2) /*8*/ };
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1, &cVar1))
			{
				iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2);
				if (PED::IS_PED_HUMAN(iVar9) && iVar9 != Global_35)
				{
					func_849(iVar9, Global_35, uParam2, uParam3);
				}
			}
		}
		iVar0++;
	}
}

void func_849(int iParam0, var uParam1, var uParam2, var uParam3)
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
	sVar0.f_3 = uParam1;
	sVar0.f_4 = 14283;
	sVar0.f_14 = uParam2;
	sVar0.f_15 = uParam3;
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iParam0, &sVar0);
}

void func_850(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar19;
	int iVar20;
	Vector3 vVar21;

	if (uParam0->f_475[iParam2 /*18*/].f_4 < 0)
	{
		return;
	}
	iVar0 = uParam0->f_475[iParam2 /*18*/].f_4;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, true, false))
		{
			func_876(uParam0, uParam0->f_1522[iVar0 /*10*/].f_8);
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, &vVar1, &vVar4, 2);
			if (func_322(&(uParam0->f_1522[iVar0 /*10*/]), 1))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1522[iVar0 /*10*/].f_8, func_211(Global_35), &vVar7, false, 0, 2))
				{
					fVar19 = (func_410(vVar1, Global_36, 1) - func_410(vVar1, vVar7, 1));
					vVar4.f_2 = (vVar4.z + fVar19);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, vVar1, vVar4, 2);
				}
			}
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8, func_211(Global_35)) && uParam0->f_475[iParam2 /*18*/].f_17 != 0)
			{
				if ((func_8(uParam0) > 3 && !func_300(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 16)) && !func_300(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), (1 << 15)))
				{
					func_954(uParam0, 1);
				}
				if (uParam0->f_1899)
				{
					if (func_300(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 128))
					{
					}
					else
					{
						func_543(uParam0, (1 << 17));
						return;
					}
				}
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_1522[iVar0 /*10*/].f_8, false))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8, "b_PlayerArthur"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1522[iVar0 /*10*/].f_8, "b_PlayerArthur", !func_582(), false);
				}
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				if (uParam0->f_475[iParam2 /*18*/].f_17 == 0)
				{
					func_866(&(uParam0->f_1522[iVar0 /*10*/]), 128);
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout"))
					{
						func_323(uParam0->f_1522[iVar0 /*10*/].f_8, 10000, 0, -1, 0);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam0->f_1522[iVar0 /*10*/].f_8))
			{
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam0->f_1522[iVar0 /*10*/].f_8, false);
			}
			if (func_744(&(uParam0->f_475[iParam2 /*18*/]), 4))
			{
				uParam0->f_1685 = iParam2;
				if (((((func_450(uParam0) == 0 && !CAM::HAS_LETTER_BOX()) && uParam0->f_475[iParam2 /*18*/].f_17 == 1) && uParam0->f_475[iParam2 /*18*/] < 8) && !func_300(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), (1 << 15))) && !func_300(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), (1 << 19)))
				{
					CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
					func_446(uParam0, 64);
				}
			}
			iVar20 = 0;
			while (iVar20 < 35)
			{
				if ((uParam0->f_3[iVar20 /*13*/] && uParam0->f_3[iVar20 /*13*/].f_8 > 0.0f) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar20 /*13*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar20 /*13*/].f_2, false);
				}
				iVar20++;
			}
			if ((ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8, func_211(Global_35)) && uParam0->f_475[iParam2 /*18*/].f_17 != 0) && !func_300(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), (1 << 15)))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1522[iVar0 /*10*/].f_8, func_211(Global_35), &vVar21, false, 0, 2) && !func_90(vVar21))
				{
					func_955(uParam0, 0);
				}
			}
			uParam0->f_475[iParam2 /*18*/].f_7 = 1;
		}
	}
}

bool func_851(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			if (func_744(&(uParam0->f_475[iVar0 /*18*/]), 4))
			{
				return true;
			}
			if (uParam0->f_475[iVar0 /*18*/].f_2 == 11)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_852()
{
	return ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35));
}

void func_853(var uParam0)
{
	int iVar0;

	if (!uParam0->f_1897)
	{
		if (func_300(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), (1 << 13)) && PED::GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_WALK"), false, 0, false);
		}
		if (!func_300(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), (1 << 16)) || (!func_412(func_411(Global_35, 0, 1, 0)) && !func_412(func_411(Global_35, 1, 1, 0))))
		{
			if (func_538(uParam0, uParam0->f_1684))
			{
				func_956(uParam0->f_1016[uParam0->f_1684 /*41*/].f_7);
			}
		}
	}
	if (!func_300(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 16) && (func_412(func_411(Global_35, 0, 1, 0)) || func_412(func_411(Global_35, 1, 1, 0))))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
		if (func_300(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), (1 << 16)))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
		}
		func_741(uParam0, 1);
	}
	else if ((!func_538(uParam0, uParam0->f_1684) && !func_547(uParam0, 4)) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		func_741(uParam0, 3);
	}
	else
	{
		func_741(uParam0, 6);
	}
}

void func_854(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	Vector3 vVar1;
	Vector3 vVar4[5];
	int iVar20;
	var uVar21;
	int iVar24;

	fVar0 = 0.0f;
	vVar1 = { 0.0f, 0.0f, 0.0f /*3*/ };
	func_957(uParam0, iParam1, &vVar1, &fVar0);
	func_955(uParam0, func_723(uParam0->f_1345[uParam0->f_475[iParam1 /*18*/] /*22*/].f_1, 8));
	func_26(&(uParam0->f_1869));
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", true, -1);
	if (uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_39 != 0)
	{
		if (!func_958(uParam0, uParam0->f_475[iParam1 /*18*/]))
		{
			func_844(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 4);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_448(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_39), true, -1);
		}
	}
	func_956(vVar1);
	if (uParam0->f_475[iParam1 /*18*/].f_15 < 1.0f)
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, uParam0->f_475[iParam1 /*18*/].f_15);
		func_446(uParam0, 32);
	}
	if (func_744(&(uParam0->f_475[iParam1 /*18*/]), 16))
	{
		func_959(uParam0, uParam0->f_475[iParam1 /*18*/], &vVar4, vVar1, fVar0, &uVar21);
		TASK::TASK_FLUSH_ROUTE();
		iVar24 = 0;
		while (iVar24 < 5)
		{
			TASK::TASK_EXTEND_ROUTE(vVar4[iVar24 /*3*/]);
			iVar24++;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		func_960(uParam0, iParam1, bParam2, &vVar4);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		func_961(uParam0, iParam1, bParam2, vVar1);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
}

int func_855(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_822())
	{
		return 0;
	}
	if (!func_823(bParam0))
	{
		return 0;
	}
	if (func_962(bParam0))
	{
		iVar0 = 0;
		if (func_395(bParam0) == joaat("CI_CATEGORY_WARDROBE_MASK"))
		{
			if (bParam1)
			{
				func_161(&iVar0, 2);
			}
		}
		return func_825(bParam0, iVar0);
	}
	return 0;
}

void func_856()
{
	Global_1357516 = 0;
}

void func_857(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 103)
	{
		DATAFILE::_PARSEDDATA_REGISTER_QUERY(uParam0->f_1889, iVar0, func_963(iVar0));
		iVar0++;
	}
}

void func_858(var uParam0)
{
	int iVar0;
	struct<16> /*128*/ sVar1;
	struct<18> /*144*/ sVar17;
	struct<41> /*328*/ sVar35;
	struct<10> /*80*/ sVar76;
	struct<22> /*176*/ sVar86;

	sVar1.f_15 = 1;
	sVar17 = -1;
	sVar17.f_2 = 1;
	sVar17.f_12 = 1065353216;
	sVar17.f_15 = 1065353216;
	sVar17.f_16 = 1;
	sVar86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0 /*13*/] = 0;
		iVar0++;
	}
	uParam0->f_459 = { sVar1 /*16*/ };
	strcpy_s(&(uParam0->f_459), 32, "");
	iVar0 = 0;
	while (iVar0 < uParam0->f_475)
	{
		uParam0->f_475[iVar0 /*18*/] = { sVar17 /*18*/ };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1522)
	{
		uParam0->f_1522[iVar0 /*10*/] = { sVar76 /*10*/ };
		iVar0++;
	}
	uParam0->f_1683 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		uParam0->f_1016[iVar0 /*41*/] = { sVar35 /*41*/ };
		uParam0->f_1345[iVar0 /*22*/] = { sVar86 /*22*/ };
		iVar0++;
	}
	uParam0->f_1684 = -1;
	uParam0->f_1765 = { Global_36 /*3*/ };
	uParam0->f_1768 = 0;
	uParam0->f_1769 = 0;
	uParam0->f_1688 = -1;
	uParam0->f_1689 = -1.0f;
	uParam0->f_1664 = 0;
	uParam0->f_1666 = 0;
	uParam0->f_1666.f_1 = 0;
	uParam0->f_1903 = 0;
	if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
	{
		CAM::_CAM_DESTROY(&(uParam0->f_1692));
	}
}

void func_859(var uParam0, int iParam1)
{
	uParam0->f_1889.f_1 = 0;
	uParam0->f_1889.f_3 = iParam1;
}

bool func_860(var uParam0, int iParam1)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_1889.f_1), &(uParam0->f_1889));
	return bVar0;
}

bool func_861(var uParam0, int iParam1, int* iParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam2, &(uParam0->f_1889));
	return bVar0;
}

bool func_862(var uParam0, int iParam1, float* fParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam2, &(uParam0->f_1889));
	return bVar0;
}

bool func_863(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam2, &(uParam0->f_1889));
	return bVar0;
}

void func_864(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_867(uParam0, 24, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (func_867(uParam0, 25, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (func_867(uParam0, 26, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (func_867(uParam0, 27, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
	if (func_867(uParam0, 28, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32;
		}
	}
	if (func_867(uParam0, 29, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 128;
		}
	}
	if (func_867(uParam0, 32, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 256;
		}
	}
	if (func_867(uParam0, 33, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= (1 << 9);
		}
	}
	if (func_867(uParam0, 34, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= (1 << 13);
		}
	}
	if (func_867(uParam0, 36, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= (1 << 15);
		}
	}
	if (func_867(uParam0, 37, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= (1 << 16);
		}
	}
	if (func_867(uParam0, 38, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= (1 << 17);
		}
	}
	if (func_867(uParam0, 41, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= (1 << 18);
		}
	}
	if (func_867(uParam0, 42, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= (1 << 19);
		}
	}
}

bool func_865(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_228(vParam0, vParam3) <= (fParam6 * fParam6);
}

void func_866(var uParam0, int iParam1)
{
	uParam0->f_9 |= iParam1;
}

bool func_867(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(bParam2, &(uParam0->f_1889));
	return bVar0;
}

bool func_868(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		uParam0->f_1921 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (((func_869(iParam1) && !uParam0->f_3[iVar0 /*13*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) == Global_35)
			{
				iParam1 = ENTITY::GET_ENTITY_MODEL(Global_35);
			}
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2) == iParam1)
			{
				if (!uParam0->f_3[iVar0 /*13*/])
				{
					uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
					*iParam2 = iVar0;
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
					{
						ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
					}
					return true;
				}
			}
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, func_378(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
			if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, func_293(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
		}
		else if (STREAMING::IS_MODEL_VALID(iParam1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9)) && MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, "^"))
		{
			if ((ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && STREAMING::IS_MODEL_A_PED(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_378(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, func_378(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
			if ((ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[iVar0 /*13*/].f_2) && STREAMING::_IS_MODEL_AN_OBJECT(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_293(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, func_293(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_869(int iParam0)
{
	return (((iParam0 == joaat("PLAYER_ZERO") || iParam0 == joaat("PLAYER_ONE")) || iParam0 == joaat("PLAYER_TWO")) || iParam0 == joaat("PLAYER_THREE"));
}

int func_870(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
	}
	return 0;
}

int func_871(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 8:
			return 5;
		case 10:
			return 7;
		case 12:
			return 8;
		case 13:
			return 9;
		case 14:
			return 10;
		case 15:
			return 11;
	}
	return 0;
}

void func_872(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_867(uParam0, 88, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 1;
		}
	}
	if (func_867(uParam0, 89, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (func_867(uParam0, 90, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (func_867(uParam0, 91, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (func_867(uParam0, 92, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
}

bool func_873(var uParam0, int iParam1, Vector3* vParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam2, &(uParam0->f_1889));
	return bVar0;
}

void func_874(var uParam0)
{
	int iVar0;
	Vector3 vVar1;

	if (!func_63(uParam0, (1 << 23)))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0 /*41*/].f_29)
		{
			uParam0->f_1016[iVar0 /*41*/].f_1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1016[iVar0 /*41*/].f_1, -uParam0->f_1888, uParam0->f_1885) /*3*/ };
			vVar1 = { uParam0->f_1016[iVar0 /*41*/].f_7 - uParam0->f_1016[iVar0 /*41*/].f_1 /*3*/ };
			vVar1 = { vVar1 + uParam0->f_1885 /*3*/ };
			uParam0->f_1016[iVar0 /*41*/].f_7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1016[iVar0 /*41*/].f_1, -uParam0->f_1888, vVar1) /*3*/ };
			uParam0->f_1016[iVar0 /*41*/].f_12 += uParam0->f_1888;
			uParam0->f_1016[iVar0 /*41*/].f_13 += uParam0->f_1888;
			if (uParam0->f_1016[iVar0 /*41*/].f_12 > 180.0f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_12 = (-180.0f + (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_12) - 180.0f));
			}
			else if (uParam0->f_1016[iVar0 /*41*/].f_12 < -180.0f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_12 = (180.0f - (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_12) - 180.0f));
			}
			if (uParam0->f_1016[iVar0 /*41*/].f_13 > 180.0f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_13 = (-180.0f + (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_13) - 180.0f));
			}
			else if (uParam0->f_1016[iVar0 /*41*/].f_13 < -180.0f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_13 = (180.0f - (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_13) - 180.0f));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1633[iVar0 /*15*/].f_11)
		{
			uParam0->f_1633[iVar0 /*15*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1633[iVar0 /*15*/], -uParam0->f_1888, uParam0->f_1885) /*3*/ };
			uParam0->f_1633[iVar0 /*15*/].f_6.f_2 += uParam0->f_1888;
		}
		iVar0++;
	}
	func_298(uParam0, (1 << 23));
}

bool func_875(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_475[iVar0 /*18*/].f_2 == 9 && uParam0->f_475[iVar0 /*18*/].f_4 == iParam1) && !func_322(&(uParam0->f_1522[iParam1 /*10*/]), 32)) && ((uParam0->f_475[iVar0 /*18*/].f_1 == 0 && !func_744(&(uParam0->f_475[iVar0 /*18*/]), (1 << 9))) || func_744(&(uParam0->f_475[iVar0 /*18*/]), 1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_876(var uParam0, int iParam1)
{
	int iVar0;
	char cVar1[64];

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			strcpy_s(&cVar1, 64, uParam0->f_3[iVar0 /*13*/].f_9);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				cVar1 = { func_321(uParam0, uParam0->f_3[iVar0 /*13*/].f_2) /*8*/ };
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1, &cVar1))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
					{
						PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), false);
					}
				}
				else if (func_869(uParam0->f_3[iVar0 /*13*/].f_1))
				{
					if (func_582())
					{
						strcpy_s(&cVar1, 64, func_378(joaat("PLAYER_ZERO")));
						if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1, &cVar1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
						}
					}
					else
					{
						strcpy_s(&cVar1, 64, func_378(joaat("PLAYER_THREE")));
						if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1, &cVar1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_877(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

bool func_878(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_879(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && STREAMING::IS_MODEL_A_VEHICLE(uParam0->f_1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2), iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				PED::DELETE_PED(&iVar1);
			}
			iVar0++;
		}
	}
}

void func_880(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_165(uParam0->f_1633[iVar0 /*15*/].f_12);
		iVar0++;
	}
}

void func_881(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1633[iVar0 /*15*/].f_11)
		{
			func_165(uParam0->f_1633[iVar0 /*15*/].f_12);
			switch (uParam0->f_1633[iVar0 /*15*/].f_9)
			{
				case 0:
					uParam0->f_1633[iVar0 /*15*/].f_12 = VOLUME::CREATE_VOLUME_BOX(uParam0->f_1633[iVar0 /*15*/], uParam0->f_1633[iVar0 /*15*/].f_6, uParam0->f_1633[iVar0 /*15*/].f_3);
					PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(uParam0->f_1633[iVar0 /*15*/].f_12, 15);
					POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_1633[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				case 1:
					uParam0->f_1633[iVar0 /*15*/].f_12 = VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_1633[iVar0 /*15*/], uParam0->f_1633[iVar0 /*15*/].f_6, uParam0->f_1633[iVar0 /*15*/].f_3);
					PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(uParam0->f_1633[iVar0 /*15*/].f_12, 15);
					POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_1633[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				default:
					break;
					break;
			}
		}
		iVar0++;
	}
}

char* func_882(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_883(int iParam0)
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

void func_884(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		func_964(bParam1);
	}
}

float func_885(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0.0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
	}
	return func_228(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
}

int func_886(int iParam0, bool bParam1)
{
	if (!func_444(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_965(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_887(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = func_575(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(bVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(bVar0, iVar1);
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

int func_888(int iParam0, bool bParam1)
{
	if (!func_444(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_966(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_889(int iParam0)
{
	int iVar0;

	if (!func_444(iParam0))
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

void func_890(int iParam0, int iParam1)
{
	if (!func_444(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

int func_891(int iParam0, int iParam1)
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
			return -430578371;
			return -730381952;
			return -1500304973;
			return -253503777;
			return 1352275534;
			return 1666399168;
			return joaat("SLOTID_CAMP_DOG");
			return joaat("SLOTID_CAMP_DOG_COAT");
			return -1774867076;
			return joaat("SLOTID_CAMP_FLAG");
			return joaat("SLOTID_CAMP_FOLLOWER");
			return joaat("SLOTID_CAMP_FOLLOWER_OUTFIT");
			return joaat("SLOTID_CAMP_LOCKBOX");
			return joaat("SLOTID_CAMP_MUSIC");
			return joaat("SLOTID_CAMP_TENT");
			return joaat("SLOTID_CAMP_THEME");
			return joaat("SLOTID_CAMP_UPGRADE");
			return -6605744;
			return 953047564;
			return 769706682;
			return 1635590003;
			return -2047978619;
			return -586319254;
			return 249896112;
			return joaat("SLOTID_CARDS");
			return joaat("SLOTID_CARDS_DEADEYE");
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_1");
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_2");
			return joaat("SLOTID_CARDS_PASSIVE_EQUIPPED_3");
			return joaat("SLOTID_CARRIED_WEAPONS");
			return joaat("SLOTID_CARRIED_WEAPONS_MODS");
			return 1158805436;
			return -559473670;
			return -797147251;
			return -382216265;
			return joaat("SLOTID_CHIPS_GAME");
			return 1704297235;
			return -1139016418;
			return 897705377;
			return 17961769;
			return 205582207;
			return 900740963;
			return -1369589344;
			return -1695823795;
			return -41453074;
			return 539767227;
			return 1210490314;
			return -399684751;
			return 2138893455;
			return -1617010487;
			return -832377028;
			return -428040245;
			return 1279288897;
			return -594897905;
			return -1360459240;
			return 1838428396;
			return -1467846997;
			return -490610263;
			return -1885413079;
			return 708884155;
			return -134459952;
			return -1912136700;
			return -1268031552;
			return 1177953227;
			return 2130805296;
			return 38093490;
			return -269153218;
			return -1995068011;
			return -164284834;
			return 1446463345;
			return 1501315823;
			return -750379482;
			return -929560937;
			return 608323241;
			return 1030796013;
			return 1915057434;
			return -1582276476;
			return 692059311;
			return 2062839241;
			return -1884531872;
			return -866434534;
			return -1252192421;
			return 1243288963;
			return -1953772189;
			return 754411745;
			return 545309006;
			return -1089810811;
			return 1957869400;
			return -241412332;
			return -1548010959;
			return 550150488;
			return 946565453;
			return 434443248;
			return -1709914938;
			return 366686112;
			return -1370063350;
			return 2126829550;
			return 226552910;
			return 721193431;
			return -315672460;
			return 623544501;
			return 259556714;
			return -2125361825;
			return 1078230356;
			return 1885364811;
			return 1630382737;
			return 1738245512;
			return 1540262216;
			return 1016871472;
			return 13829069;
			return 737051352;
			return 1734614610;
			return -208715295;
			return 1435062936;
			return 1483055553;
			return 380335002;
			return -1079385677;
			return 676610411;
			return 2145419552;
			return 657238733;
			return 1850579281;
			return -1923957384;
			return -1142828108;
			return -1400618531;
			return -1433857135;
			return 209987206;
			return joaat("SLOTID_COACH_INSURANCE");
			return joaat("SLOTID_COACH_LIVERY");
			return -59178517;
			return 2134884601;
			return 651707517;
			return -633788535;
			return 116394463;
			return -1196973875;
			return 801752086;
			return 184475332;
			return -1880922659;
			return -898138634;
			return -2107418444;
			return -679970099;
			return -1531392549;
			return 1612483376;
			return 463930900;
			return -632148238;
			return 55303249;
			return 2108322089;
			return -1358896714;
			return 74475632;
			return -28710953;
			return -1791599168;
			return 1605938169;
			return 1255242276;
			return 636467727;
			return -1567688525;
			return -77886679;
			return -1057900679;
			return -1960888134;
			return -1719717295;
			return -1779244911;
			return joaat("SLOTID_COACH_STALL_01");
			return 223362311;
			return 1150824567;
			return 974471191;
			return 1989683968;
			return 254804477;
			return 192057609;
			return 1553957817;
			return 2099829015;
			return joaat("CLOTHING_STYLE_M_R1_OFFHAND_000_CATALOGUEDESC");
			return -1948423372;
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return joaat("SLOTID_COMPENDIUM");
			return joaat("SLOTID_COMPENDIUM_PAGE");
			return joaat("SLOTID_COMPENDIUM_STAMP");
			return joaat("SLOTID_COUPONS");
			return joaat("SLOTID_CURRENCY");
			return joaat("SLOTID_DEFAULT_STABLE");
			return joaat("SLOTID_DEFAULT_STABLE_STALLS");
			return -1578397674;
			return joaat("SLOTID_EMOTE_ACTION");
			return joaat("SLOTID_EMOTE_GREET");
			return joaat("SLOTID_EMOTE_ITEM");
			return joaat("SLOTID_EMOTE_REACT");
			return joaat("SLOTID_EMOTE_TAUNT");
			return joaat("SLOTID_EMOTE_TWIRL_GUN");
			return joaat("SLOTID_FEES");
			return joaat("SLOTID_FME_HERBS_EXPAND");
			return joaat("SLOTID_HANDGUN_BARREL");
			return 24047176;
			return joaat("SLOTID_HANDGUN_HAMMER");
			return joaat("SLOTID_HONOR");
			return joaat("SLOTID_HORSE_BEDROLL");
			return joaat("SLOTID_HORSE_BLANKET");
			return joaat("SLOTID_HORSE_CANTLE");
			return joaat("SLOTID_HORSE_FENDER");
			return joaat("SLOTID_HORSE_HORN");
			return joaat("SLOTID_HORSE_INSURANCE");
			return joaat("SLOTID_HORSE_LANTERN");
			return joaat("SLOTID_HORSE_MANE");
			return joaat("SLOTID_HORSE_MASK");
			return joaat("SLOTID_HORSE_MOUSTACHE");
			return joaat("SLOTID_HORSE_REINS");
			return joaat("SLOTID_HORSE_SADDLE");
			return joaat("SLOTID_HORSE_SADDLE_01");
			return joaat("SLOTID_HORSE_SADDLE_02");
			return joaat("SLOTID_HORSE_SADDLE_03");
			return joaat("SLOTID_HORSE_SADDLE_04");
			return joaat("SLOTID_HORSE_SADDLE_05");
			return joaat("SLOTID_HORSE_SADDLE_06");
			return joaat("SLOTID_HORSE_SADDLE_07");
			return joaat("SLOTID_HORSE_SADDLE_08");
			return joaat("SLOTID_HORSE_SADDLE_09");
			return joaat("SLOTID_HORSE_SADDLE_10");
			return joaat("SLOTID_HORSE_SADDLEBAG");
			return joaat("SLOTID_HORSE_SATCHEL");
			return joaat("SLOTID_HORSE_SEAT");
			return joaat("SLOTID_HORSE_SEX");
			return joaat("SLOTID_HORSE_SKIRT");
			return joaat("SLOTID_HORSE_STALL_01");
			return joaat("SLOTID_HORSE_STALL_02");
			return joaat("SLOTID_HORSE_STALL_03");
			return joaat("SLOTID_HORSE_STALL_04");
			return joaat("SLOTID_HORSE_STALL_05");
			return joaat("SLOTID_HORSE_STIRRUP");
			return joaat("SLOTID_HORSE_TAIL");
			return joaat("SLOTID_HUNTING_WAGON");
			return 1132377945;
			return 739936401;
			return 1201880974;
			return 819728896;
			return 1746010219;
			return 1433393959;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return joaat("SLOTID_MINIGAME");
			return joaat("SLOTID_MISSION_TIMERS");
			return -1783120823;
			return -1535745896;
			return joaat("SLOTID_MOONSHINE_COOK");
			return joaat("SLOTID_MOONSHINE_RECIPE");
			return joaat("SLOTID_MOONSHINE_STILL");
			return joaat("SLOTID_MOONSHINER_BAR_PHOTO");
			return joaat("SLOTID_MOONSHINER_CRAFT_FLAVOR");
			return joaat("SLOTID_MOONSHINER_CRAFT_INPUT");
			return 1111816631;
			return joaat("SLOTID_MOONSHINER_LOCATION");
			return joaat("SLOTID_MOONSHINER_THEME");
			return joaat("SLOTID_MOONSHINER_UPGRADE");
			return joaat("SLOTID_NOTORIETY");
			return joaat("SLOTID_OWNED_CONTENT");
			return joaat("SLOTID_PLAYER_BODY_TYPE");
			return joaat("SLOTID_PLAYER_GENDER");
			return joaat("SLOTID_PLAYER_VOICE");
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return -629387103;
			return 316207340;
			return -1909200748;
			return -939652363;
			return joaat("SLOTID_PROGRESSION");
			return 2011227407;
			return joaat("SLOTID_PROPERTY");
			return joaat("SLOTID_PURCHASED_CONTENT");
			return joaat("SLOTID_ROLE_ITEMS");
			return joaat("SLOTID_SAMPLE");
			return joaat("SLOTID_SATCHEL");
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return joaat("SLOTID_STABLE");
			return -1360128126;
			return joaat("SLOTID_UPGRADE");
			return joaat("SLOTID_VOUCHERS");
			return joaat("SLOTID_WARDROBE");
			return joaat("SLOTID_WARDROBE_AGEING");
			return joaat("SLOTID_WARDROBE_BEARD");
			return joaat("SLOTID_WARDROBE_BLUSH");
			return joaat("SLOTID_WARDROBE_COMPLEXION");
			return joaat("SLOTID_WARDROBE_COMPLEXION_2");
			return joaat("SLOTID_WARDROBE_EYEBROWS");
			return joaat("SLOTID_WARDROBE_EYELINER");
			return joaat("SLOTID_WARDROBE_EYES");
			return joaat("SLOTID_WARDROBE_EYESHADOW");
			return joaat("SLOTID_WARDROBE_EYEWEAR");
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return joaat("SLOTID_WARDROBE_FOUNDATION");
			return joaat("SLOTID_WARDROBE_FRECKLES");
			return 755611221;
			return joaat("SLOTID_WARDROBE_GLOVES");
			return joaat("SLOTID_WARDROBE_GRIME");
			return joaat("SLOTID_WARDROBE_GUNBELT");
			return joaat("SLOTID_WARDROBE_HAIR");
			return joaat("SLOTID_WARDROBE_HEAD");
			return -246340825;
			return -1410671073;
			return joaat("SLOTID_WARDROBE_LIPSTICK");
			return joaat("SLOTID_WARDROBE_LOADOUT_1");
			return joaat("SLOTID_WARDROBE_LOADOUT_2");
			return joaat("SLOTID_WARDROBE_LOADOUT_3");
			return joaat("SLOTID_WARDROBE_LOADOUT_4");
			return joaat("SLOTID_WARDROBE_LOADOUT_5");
			return joaat("SLOTID_WARDROBE_LOADOUT_6");
			return joaat("SLOTID_WARDROBE_LOADOUT_7");
			return joaat("SLOTID_WARDROBE_LOADOUT_8");
			return joaat("SLOTID_WARDROBE_LOADOUT_9");
			return joaat("SLOTID_WARDROBE_LOWER_BODY");
			return joaat("SLOTID_WARDROBE_LOWER_GARB");
			return -1384685096;
			return -2026728113;
			return joaat("SLOTID_WARDROBE_MOLES");
			return joaat("SLOTID_WARDROBE_NECKWEAR_1");
			return joaat("SLOTID_WARDROBE_NECKWEAR_2");
			return joaat("SLOTID_WARDROBE_OUTFIT");
			return joaat("SLOTID_WARDROBE_SATCHEL");
			return joaat("SLOTID_WARDROBE_SCAR");
			return joaat("SLOTID_WARDROBE_SKIN_MOTTLING");
			return joaat("SLOTID_WARDROBE_SPOTS");
			return joaat("SLOTID_WARDROBE_TEETH");
			return joaat("SLOTID_WARDROBE_UPPER_BODY");
			return joaat("SLOTID_WARDROBE_UPPER_GARB");
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return joaat("SLOTID_WATCH");
			return joaat("SLOTID_WEAPON_0");
			return joaat("SLOTID_WEAPON_1");
			return joaat("SLOTID_WEAPON_2");
			return joaat("SLOTID_WEAPON_3");
			return 1570861011;
			return joaat("SLOTID_WEAPON_BOW_FRAME_TINT");
			return joaat("SLOTID_WEAPON_BOW_GRIPSTOCK_TINT");
			return joaat("SLOTID_WEAPON_BOW_IMPROVED_GRIP");
			return joaat("SLOTID_WEAPON_BOW_TRIGGER_TINT");
			return joaat("SLOTID_WEAPON_FISHINGROD_GRIP");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_RIFLING");
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_ROLE");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_GRIP_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_TINT");
			return joaat("SLOTID_WEAPON_LONGARM_HAMMER_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_SIGHT_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_STRAP_TINT");
			return joaat("SLOTID_WEAPON_LONGARM_TRIGGER_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_TINT");
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING");
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_MELEE_BLADE_MATERIAL");
			return joaat("SLOTID_WEAPON_MELEE_GRIP_TINT");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_BARREL");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_CLIP");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_SIGHT");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_BARREL");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_CLIP");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_SIGHT");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_BARREL");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_CLIP");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_SIGHT");
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_BARREL");
			return 61132362;
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
			return 1136146715;
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_TUBE");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_WRAP1");
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_GRIP");
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_WRAP");
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_GRIP");
			return 1471419228;
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
			return 1911050315;
			return -1343525599;
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
			return 763162704;
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
			return 526744654;
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
			return 853355463;
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
			return -585289073;
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_REVOLVER");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_SHOTGUN");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_BARREL");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_AMMO_REVOLVER");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL_CROSSOVER");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP_CROSSOVER");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT_CROSSOVER");
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_BARREL");
			return -2145069367;
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
			return -2117214398;
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SIGHT");
			return -62390436;
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_CARCANO_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_BARREL");
			return 302954672;
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_STOCK");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_WRAP1");
			return joaat("SLOTID_WEAPON_RIFLE_ROLLINGBLOCK_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_WRAP1");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_CLIP");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_WRAP1");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_RIFLING");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_ROLE");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIP_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_TINT");
			return joaat("SLOTID_WEAPON_SHORTARM_HAMMER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_SIGHT_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_TRIGGER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHOTGUN_BARREL_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_CYLINDER_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_BARREL");
			return 293062146;
			return 95360094;
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP_EXOTIC");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING_ROLE");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_CLIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_WRAP1");
			return 1670843243;
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
			return -832337898;
			return -319249747;
			return -16955722;
			return joaat("SLOTID_WARDROBE_BEARD_CHIN");
			return joaat("SLOTID_WARDROBE_BEARD_CHOPS");
			return joaat("SLOTID_WARDROBE_BEARD_MUSTACHE");
			return 1380479304;
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

bool func_892(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_967(bParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_618(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_893(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_438(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_893(bool bParam0)
{
	if (func_254() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_438(bParam0));
}

int func_894(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_968(iParam0))
	{
		return 0;
	}
	if (!func_893(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_895(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar1 = func_969(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

bool func_896(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_897(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_438(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_898(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_899(int iParam0)
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

bool func_900(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_901(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_902(var uParam0, int iParam1)
{
	return uParam0->f_1 & iParam1 != 0;
}

void func_903(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

bool func_904(var uParam0, int iParam1)
{
	return uParam0->f_1 & iParam1 != 0;
}

void func_905(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

int func_906()
{
	return Global_1946054.f_1;
}

void func_907(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
}

void func_908(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
}

void func_909(var uParam0, int iParam1)
{
	int iVar0;

	if (func_254() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_907(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_908(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_910(int iParam0, int iParam1, int iParam2)
{
	if (func_254() == -1)
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

void func_911(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

bool func_912()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_913(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_914()
{
	float fVar0;
	int iVar1;

	fVar0 = func_970(13);
	iVar1 = func_971(fVar0);
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

float func_915()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_916()
{
	if (func_972())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_917()
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

float func_918()
{
	return Global_1954815.f_3;
}

void func_919(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_784(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_920(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_784(iParam0, 2, 0, 0);
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

float func_921(float fParam0, float fParam1, float fParam2)
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

bool func_922()
{
	return func_970(12) <= -99.0f;
}

bool func_923()
{
	return func_970(12) >= 99.0f;
}

bool func_924(int iParam0, bool bParam1)
{
	switch (func_497(iParam0))
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

bool func_925(int iParam0, int iParam1, int iParam2)
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

bool func_926(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_973(iParam0);
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

int func_927(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_974(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_928(int iParam0, int iParam1)
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
		if (func_646(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_929(int iParam0)
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

void func_930(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 -= Global_40.f_4942[iParam0 /*60*/].f_5 & iParam1;
}

bool func_931(bool bParam0, bool bParam1)
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

int func_932(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_380(iVar0, 2))
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
				func_594(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_933(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_376(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_934(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_376(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_935()
{
	if (Global_1946054.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946054.f_2791)) < 1250)
	{
		return true;
	}
	if (func_975())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	return false;
}

bool func_936(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_394(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_611(bParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
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
		if (!func_976(bParam0, 1))
		{
			return false;
		}
	}
	return func_977(bParam0, 0, bParam2) >= iParam1;
}

int func_937(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_601(&iVar0))
	{
		if (bParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_938()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_978())
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

int func_939()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_978())
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

int func_940()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_978())
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

int func_941()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_978())
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

bool func_942(bool bParam0)
{
	switch (func_395(bParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return true;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			return true;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			return true;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return true;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return true;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			return true;
		default:
			break;
	}
	return false;
}

int func_943(bool bParam0)
{
	var uVar0;

	return func_979(bParam0, &uVar0);
}

void func_944(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_2377[func_429(iParam0, 1) /*2*/].f_1 |= iParam1;
}

void func_945(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

bool func_946()
{
	return func_935();
}

int func_947()
{
	return func_980();
}

float func_948(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_949(var uParam0, int iParam1)
{
	var uVar0;

	if (func_852())
	{
		return true;
	}
	if (func_393(&uVar0))
	{
		return true;
	}
	if ((func_412(func_878(Global_35, 0, 0, 0)) && !func_300(&(uParam0->f_1016[iParam1 /*41*/]), 16)) && !func_300(&(uParam0->f_1016[iParam1 /*41*/]), 64))
	{
		return true;
	}
	return false;
}

void func_950(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_981(uParam0, iParam1, sParam2))
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

void func_951(var uParam0, var uParam1, var uParam2, var uParam3)
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

bool func_952(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_953(int iParam0)
{
	int iVar0;

	if (!func_81(iParam0))
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

void func_954(var uParam0, bool bParam1)
{
	bool bVar0;

	if (!func_63(uParam0, 64) && func_450(uParam0) != 0)
	{
		return;
	}
	if (!bParam1)
	{
		bVar0 = func_878(Global_35, 0, 0, 0);
		if (WEAPON::IS_WEAPON_VALID(bVar0))
		{
			if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bVar0))
			{
				WEAPON::MAKE_PED_DROP_WEAPON(Global_35, true, 0, true, false);
				func_543(uParam0, 256);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
		}
		bVar0 = func_878(Global_35, 0, 1, 0);
		if (WEAPON::IS_WEAPON_VALID(bVar0))
		{
			if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bVar0))
			{
				WEAPON::MAKE_PED_DROP_WEAPON(Global_35, true, 1, true, false);
				func_543(uParam0, 256);
			}
		}
	}
	else
	{
		func_982(0);
		func_982(1);
	}
}

void func_955(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56, false);
	}
	func_720(uParam0, 4);
	HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
	}
	if (PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
	}
	if ((func_450(uParam0) == 0 && uParam0->f_1684 >= 0) && !func_300(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), (1 << 19)))
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
		func_446(uParam0, 64);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 255, false);
	func_983(0);
	if (func_221())
	{
		func_222(0);
	}
}

void func_956(Vector3 vParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 250;
	if (func_412(func_411(Global_35, 0, 1, 0)) || func_412(func_411(Global_35, 1, 1, 0)))
	{
		iVar0 = 2000;
	}
	fVar1 = ENTITY::GET_ENTITY_HEADING(Global_35);
	if (!func_90(vParam0))
	{
		fVar1 = func_410(Global_36, vParam0, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.0f, iVar0, fVar1, false, true);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.0f, iVar0, fVar1, true, true);
	}
}

void func_957(var uParam0, int iParam1, var uParam2, float fParam3)
{
	if (func_744(&(uParam0->f_475[iParam1 /*18*/]), 32))
	{
		if (func_63(uParam0, 8))
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1684 /*41*/].f_1 + func_494(Global_36 - uParam0->f_1016[uParam0->f_1684 /*41*/].f_1) /*3*/ };
			if (!func_447(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 2))
			{
				*fParam3 = func_410(Global_36, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1684 /*41*/].f_40;
			}
		}
		else
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1688 /*41*/].f_1 + func_494(Global_36 - uParam0->f_1016[uParam0->f_1688 /*41*/].f_1) /*3*/ };
			if (!func_447(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2))
			{
				*fParam3 = func_410(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_40;
			}
		}
	}
	else
	{
		*uParam2 = { func_984(uParam0) /*3*/ };
		if (func_63(uParam0, 8))
		{
			if (!func_447(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 2))
			{
				*fParam3 = func_410(Global_36, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1684 /*41*/].f_40;
			}
		}
		else if (!func_447(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2))
		{
			*fParam3 = func_410(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		}
		else
		{
			*fParam3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_40;
		}
	}
}

bool func_958(var uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar12;
	int iVar13;

	iVar12 = 0;
	while (iVar12 < 30)
	{
		if (((uParam0->f_475[iVar12 /*18*/].f_17 == 1 && uParam0->f_475[iVar12 /*18*/].f_2 == 9) && uParam0->f_475[iVar12 /*18*/].f_4 >= 0) && uParam0->f_475[iVar12 /*18*/] == iParam1)
		{
			iVar13 = uParam0->f_1522[uParam0->f_475[iVar12 /*18*/].f_4 /*10*/].f_8;
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar13) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar13, true, false)) && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iVar13, func_211(Global_35)))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iVar13, func_211(Global_35), &vVar0, false, 0, 2))
				{
					if (!func_90(vVar0))
					{
						return true;
					}
				}
			}
		}
		iVar12++;
	}
	return false;
}

void func_959(var uParam0, int iParam1, var uParam2, Vector3 vParam3, float fParam6, var uParam7)
{
	var uVar0;
	var uVar7;
	int iVar14;
	float fVar15;

	func_985(&uVar0, 0.0f, Global_36 - Vector(1.0f, 0.0f, 0.0f), (-2.0f * BUILTIN::SIN(ENTITY::GET_ENTITY_HEADING(Global_35))), (2.0f * BUILTIN::COS(ENTITY::GET_ENTITY_HEADING(Global_35))), 0.0f);
	func_985(&uVar7, 1.0f, vParam3, (-2.0f * BUILTIN::SIN(fParam6)), (2.0f * BUILTIN::COS(fParam6)), 0.0f);
	if (MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_12) == MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_13))
	{
		if (MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_12) >= 90.0f)
		{
			fVar15 = 180.0f;
		}
		else
		{
			fVar15 = 90.0f;
		}
	}
	else
	{
		fVar15 = (uParam0->f_1016[iParam1 /*41*/].f_12 - uParam0->f_1016[iParam1 /*41*/].f_13);
		if (fVar15 >= 180.0f)
		{
			fVar15 -= 360.0f;
		}
		else if (fVar15 <= -180.0f)
		{
			fVar15 += 360.0f;
		}
		fVar15 /= 2.0f;
		if (uParam0->f_1016[iParam1 /*41*/].f_12 < uParam0->f_1016[iParam1 /*41*/].f_13)
		{
			fVar15 = (uParam0->f_1016[iParam1 /*41*/].f_12 + MISC::ABSF(fVar15));
		}
		else
		{
			fVar15 = (uParam0->f_1016[iParam1 /*41*/].f_13 + MISC::ABSF(fVar15));
		}
		if (fVar15 >= 180.0f)
		{
			fVar15 -= 360.0f;
		}
		else if (fVar15 <= -180.0f)
		{
			fVar15 += 360.0f;
		}
	}
	*uParam7 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0.0f, (BUILTIN::COS(fVar15) * (uParam0->f_1016[iParam1 /*41*/].f_11 / 2.0f)), (BUILTIN::SIN(fVar15) * (uParam0->f_1016[iParam1 /*41*/].f_11 / 2.0f))) /*3*/ };
	iVar14 = 0;
	while (iVar14 < 5)
	{
		*(uParam2[iVar14 /*3*/]) = { func_986(Global_36, *uParam7, vParam3, ((float)iVar14 + 1 / BUILTIN::TO_FLOAT(5))) /*3*/ };
		iVar14++;
	}
}

void func_960(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	Vector3 vVar0;

	if (bParam2)
	{
		TASK::TASK_ACHIEVE_HEADING(0, func_410(Global_36, *(uParam3[0 /*3*/]), 1), 0);
	}
	TASK::TASK_FOLLOW_POINT_ROUTE(0, 1.0f, 0, 1056964608, 1084227584, 1193033728);
	if (func_447(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
	{
		TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40, 0);
	}
	else
	{
		vVar0 = { func_987(uParam0, iParam1) /*3*/ };
		if (!func_90(vVar0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
	}
}

void func_961(var uParam0, int iParam1, bool bParam2, Vector3 vParam3)
{
	Vector3 vVar0;
	float fVar3;
	int iVar4;
	float fVar5;

	vVar0 = { func_987(uParam0, iParam1) /*3*/ };
	if (!func_90(vVar0))
	{
		if (bParam2)
		{
			TASK::TASK_ACHIEVE_HEADING(0, func_410(Global_36, vParam3, 1), 0);
		}
		fVar3 = func_410(vParam3, vVar0, 1);
		if (func_447(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar3 = uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40;
		}
		if (func_744(&(uParam0->f_475[iParam1 /*18*/]), 256))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam3, 1.0f, 20000, fVar3, 0.5f, 0);
		}
		else
		{
			iVar4 = 4;
			iVar4 |= (1 << 22);
			fVar3 = (fVar3 % 360.0f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1.0f, 20000, 0.25f, iVar4, fVar3);
		}
		if (!func_447(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 4) && !func_447(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
		else
		{
			TASK::TASK_ACHIEVE_HEADING(0, fVar3, 0);
			TASK::TASK_STAND_STILL(0, -1);
		}
	}
	else
	{
		fVar5 = 40000.0f;
		if (func_447(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar5 = uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40;
		}
		fVar5 = (fVar5 % 360.0f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1.0f, 20000, 0.25f, 5, fVar5);
	}
}

int func_962(bool bParam0)
{
	return func_988(bParam0);
}

char* func_963(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "leadinData/zones/zone(%i)";
		case 1:
			return ":x1";
		case 2:
			return ":y1";
		case 3:
			return ":z1";
		case 4:
			return ":x2";
		case 5:
			return ":y2";
		case 6:
			return ":z2";
		case 7:
			return ":edgex";
		case 8:
			return ":edgey";
		case 9:
			return ":edgez";
		case 10:
			return ":xhit";
		case 11:
			return ":yhit";
		case 12:
			return ":zhit";
		case 13:
			return ":height";
		case 14:
			return ":trig1";
		case 15:
			return ":trig2";
		case 16:
			return ":areaType";
		case 17:
			return ":moveBlend";
		case 18:
			return ":animBlend";
		case 19:
			return ":fCamZoom";
		case 20:
			return ":fDismount";
		case 21:
			return ":tlDialogueFile";
		case 22:
			return ":tlDialogueLabel";
		case 23:
			return ":iDialogueDelay";
		case 24:
			return ":bQuickStop";
		case 25:
			return ":nomount";
		case 26:
			return ":bAllowClimb";
		case 27:
			return ":bAllowWeapon";
		case 28:
			return ":bAllowCarry";
		case 29:
			return ":usevehicle";
		case 30:
			return ":bSwapWeapon";
		case 31:
			return ":fFixupBuffer";
		case 32:
			return ":bAllowBandana";
		case 33:
			return ":bPickupCarriable";
		case 34:
			return ":bAllowCrouch";
		case 35:
			return ":playlist";
		case 36:
			return ":bPlayerHasControl";
		case 37:
			return ":bStopToHolster";
		case 38:
			return ":bFixupPlayerEarly";
		case 39:
			return ":walkStopOptions";
		case 40:
			return ":fWalkStopHeading";
		case 41:
			return ":bAllowLasso";
		case 42:
			return ":bNoLetterbox";
		case 43:
			return ":index";
		case 44:
			return ":tele";
		case 45:
			return "leadinData/scenes/scene(%i)";
		case 46:
			return ":sceneName";
		case 47:
			return ":sceneIndex";
		case 48:
			return ":sceneRel";
		case 49:
			return ":sceneFoot";
		case 50:
			return "leadinData/entities/entity(%i)";
		case 51:
			return ":model";
		case 52:
			return ":tlVoiceID";
		case 53:
			return ":fVisible";
		case 54:
			return ":weapon";
		case 55:
			return ":forceinhand";
		case 56:
			return ":bDeleteDraftAnimals";
		case 57:
			return "leadinData/behaviours/behaviour(%i)";
		case 58:
			return ":zone";
		case 59:
			return ":when";
		case 60:
			return ":what";
		case 61:
			return ":who";
		case 62:
			return ":syncType";
		case 63:
			return ":loop";
		case 64:
			return ":pause";
		case 65:
			return ":master";
		case 66:
			return ":bezier";
		case 67:
			return ":bezheading";
		case 68:
			return ":fVisible";
		case 69:
			return ":useradoffset";
		case 70:
			return ":radoffset";
		case 71:
			return ":returnlook";
		case 72:
			return ":lookatwho";
		case 73:
			return ":behaviourtype";
		case 74:
			return ":lookatplayer";
		case 75:
			return ":animscene";
		case 76:
			return ":nonavmesh";
		case 77:
			return ":phaseplayerend";
		case 78:
			return ":lookblendin";
		case 79:
			return ":lookblendout";
		case 80:
			return ":foliagemod";
		case 81:
			return ":disableinitloop";
		case 82:
			return "leadinData/cutscenes/cutscene(%i)";
		case 83:
			return ":cutName";
		case 84:
			return ":cutPlaylist";
		case 85:
			return "leadinData/cameras/camera(%i)";
		case 86:
			return ":index";
		case 87:
			return ":bDisabled";
		case 88:
			return ":bUseRightCam";
		case 89:
			return ":bUseLeftCam";
		case 90:
			return ":bUseCenterCam";
		case 91:
			return ":bUseNewCam";
		case 92:
			return ":bFocusOnEntity";
		case 96:
			return ":sCameraDictionaryName";
		case 97:
			return ":sCameraRequestName";
		case 95:
			return ":iNewCamLookAt";
		case 93:
			return ":fNewCamFocusOffsetHorz";
		case 94:
			return ":fNewCamFocusOffsetVert";
		case 98:
			return "leadinData/prepzones/prepzone(%i)";
		case 99:
			return ":vOrigin";
		case 100:
			return ":vRotation";
		case 101:
			return ":vScale";
		case 102:
			return ":eType";
	}
	return "";
}

void func_964(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

int func_965(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_444(iParam0))
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
	if (!func_444(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_966(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_444(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_886(iParam0, 1);
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

bool func_967(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_968(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_969(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

float func_970(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_971(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

bool func_972()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_973(int iParam0)
{
	int iVar0;
	int iVar1;

	func_989(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

int func_974(int iParam0, int iParam1)
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
		case -426171916:
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

bool func_975()
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

bool func_976(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_394(bParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	bVar0 = func_990(bParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_897("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_898(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_412(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == bVar0)
			{
				func_899(iVar1);
				return true;
			}
			iVar3++;
		}
		func_899(iVar1);
	}
	return false;
}

int func_977(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_394(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_611(bParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		bVar1 = func_990(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_991(bParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_438(bParam2), bParam0, false);
	return iVar2;
}

int func_978()
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_877(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_877(iVar0)) || iVar0 == joaat("WEAPON_LASSO"))
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

int func_979(bool bParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (bParam0 == Global_1946054.f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_980()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BANDANA")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_981(var uParam0, int iParam1, char* sParam2)
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

void func_982(int iParam0)
{
	bool bVar0;

	bVar0 = func_878(Global_35, 0, iParam0, 0);
	if (func_412(bVar0))
	{
		if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bVar0))
		{
			WEAPON::MAKE_PED_DROP_WEAPON(Global_35, true, iParam0, true, false);
		}
		else if (func_877(bVar0))
		{
			if (func_412(func_878(Global_35, 0, 7, 0)) || func_412(func_878(Global_35, 0, 9, 0)))
			{
				if (func_412(func_878(Global_35, 0, 8, 0)))
				{
					func_992(bVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 8, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 7, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(bVar0) && bVar0 != joaat("WEAPON_FISHINGROD"))
		{
			if (func_412(func_878(Global_35, 0, 7, 0)) || func_412(func_878(Global_35, 0, 9, 0)))
			{
				if (func_412(func_878(Global_35, 0, 10, 0)))
				{
					func_992(bVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 10, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 9, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
		{
			if (iParam0 == 0)
			{
				if (!func_412(func_878(Global_35, 0, 2, 0)))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 2, false, false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 3, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 3, false, false);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, iParam0, false, false);
	}
}

void func_983(bool bParam0)
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

Vector3 func_984(var uParam0)
{
	if (func_63(uParam0, 8))
	{
		return uParam0->f_1016[uParam0->f_1684 /*41*/].f_7;
	}
	if (uParam0->f_1688 >= 0)
	{
		return uParam0->f_1016[uParam0->f_1688 /*41*/].f_7;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_985(var uParam0, float fParam1, Vector3 vParam2, Vector3 vParam5)
{
	*uParam0 = fParam1;
	uParam0->f_4 = { vParam2 /*3*/ };
	uParam0->f_1 = { vParam5 /*3*/ };
}

Vector3 func_986(Vector3 vParam0, Vector3 vParam3, Vector3 vParam6, float fParam9)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { func_993(vParam0, vParam3, fParam9) /*3*/ };
	vVar3 = { func_993(vParam3, vParam6, fParam9) /*3*/ };
	return func_993(vVar0, vVar3, fParam9);
}

Vector3 func_987(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_475[iParam1 /*18*/].f_3 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_475[iParam1 /*18*/].f_3 == uParam0->f_3[iVar0 /*13*/].f_3)
			{
				if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
				{
					return ENTITY::GET_ENTITY_COORDS(uParam0->f_3[iVar0 /*13*/].f_2, true, false);
				}
			}
			iVar0++;
		}
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_988(bool bParam0)
{
	int iVar0;

	iVar0 = func_395(bParam0);
	if (iVar0 == joaat("CI_CATEGORY_WARDROBE_MASK") || iVar0 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
	{
		return 1;
	}
	return 0;
}

int func_989(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_994(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_990(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_394(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_611(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_620(bParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_995(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_991(bool bParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	sVar0 = { func_996(bParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_997(&sVar0, func_612(0));
	}
	if (!func_998(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_899(iVar18);
	return iVar19;
}

void func_992(bool bParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
	{
		return;
	}
	if (Global_43891)
	{
		return;
	}
	WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, bParam0);
}

Vector3 func_993(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	return FloatToVector((1.0f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

int func_994(int iParam0, int iParam1)
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

void func_995(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
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

struct<18> /*144*/ func_996(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (bParam0 != 0)
	{
		sVar0.f_0 = bParam0;
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

void func_997(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_998(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_438(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

