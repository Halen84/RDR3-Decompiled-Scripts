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
	var uLocal_20 = 6;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 6;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 6;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 6;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 4;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 3;
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
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	float fLocal_83 = 0.0f;
	bool bLocal_84 = false;
	int iLocal_85[2] = { 0, 0 };
	int iLocal_88[2] = { 0, 0 };
	Vector3 vLocal_91[8] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	Vector3 vLocal_116 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_119 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_122 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_125 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_128 = { 0.0f, 0.0f, 0.0f };
	struct<213> /*1704*/ sLocal_131[2];
	var uLocal_558 = 2;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561[3] = { 0, 0, 0 };
	var uLocal_565[3] = { 0, 0, 0 };
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	struct<193> /*1544*/ sLocal_573 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_766 = 0;
	int iLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	struct<2> /*16*/ sLocal_783[2];
	var uLocal_788 = 2;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	struct<32> /*256*/ sLocal_805[3];
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 1065353216;
	var uLocal_907 = 1065353216;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 1065353216;
	var uLocal_912 = 1065353216;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 1065353216;
	var uLocal_917 = 1065353216;
	var uLocal_918 = 0;
	var uLocal_919 = 1040187392;
	var uLocal_920 = 1040187392;
	var uLocal_921 = -1;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = -1082130432;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942 = 0;
	int iLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = -1;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 2;
	var uLocal_953 = 1;
	var uLocal_954 = 1;
	var uLocal_955 = 1;
	var uLocal_956 = 0;
	var uLocal_957 = 1;
	var uLocal_958 = 2;
	var uLocal_959 = 2;
	var uLocal_960 = 3;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 3;
	var uLocal_964 = 1;
	var uLocal_965 = 3;
	var uLocal_966 = 3;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	int iLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	int iLocal_994 = 0;
	var uLocal_995[3] = { 0, 0, 0 };
	int iLocal_999[3] = { 0, 0, 0 };
	int iLocal_1003 = 0;
	struct<75> /*600*/ sLocal_1004[3];
	int iLocal_1230[3] = { 0, 0, 0 };
	var uLocal_1234 = 0;
	struct<23> /*184*/ sLocal_1235[4];
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#pragma endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_78 = -1;
	iLocal_82 = 5000;
	fLocal_83 = 150.0f;
	iLocal_778 = 1;
	iLocal_994 = -1;
	sLocal_573.f_3 = func_1(&vScriptParam_0);
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		sLocal_573.f_161 = func_2(vScriptParam_0.z, 2);
		func_3(&sLocal_573, 1);
		func_4(&iLocal_572, sLocal_573.f_161);
		func_5(&(sLocal_573.f_5), 1);
		func_6(&(sLocal_573.f_5), 1);
		func_7(&(sLocal_573.f_5), 1);
		func_8(&(sLocal_573.f_5), 1);
		func_9(&(sLocal_573.f_5), 1);
	}
	while (true)
	{
		if (bVar0)
		{
			func_11(bVar0, 1626, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_778)
			{
				case 1:
					if (func_12(&sLocal_573, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_13(&sLocal_573, &iLocal_942, &iLocal_943);
						func_14(7, sLocal_573.f_51.f_4, &vLocal_91);
						sLocal_573.f_51.f_4 = iLocal_943;
						func_16(&sLocal_573, iLocal_942, 10255);
						func_17(&sLocal_805, iLocal_942, iLocal_943);
						func_18(&uLocal_944, Global_35, 0, 7000, 2, 2, 2, 1, 0, 0, 0, 0);
						iLocal_778 = 0;
					}
					else if (sLocal_573.f_160)
					{
						func_10();
					}
					break;
				case 0:
					if (func_19())
					{
						iLocal_778 = 3;
					}
					break;
				case 3:
					if (func_20())
					{
						func_21();
						func_22(iLocal_942, &sLocal_783, &uLocal_788, &sLocal_131, &uLocal_558);
						iLocal_1230[0] = func_23(1, 0, 0) | 64 | 256;
						iLocal_1230[1] = func_23(1, 0, 0) | 64 | 256;
						iLocal_1230[2] = func_23(1, 0, 0) | 64 | 256;
						func_24(&(sLocal_1004[0 /*75*/].f_21), &(sLocal_1004[1 /*75*/].f_21), &(sLocal_1004[2 /*75*/].f_21), iLocal_942, iLocal_572);
						func_25(&(sLocal_1004[2 /*75*/].f_21), 1);
						func_26(&(sLocal_1004[0 /*75*/].f_21[0 /*17*/]), 8);
						func_26(&(sLocal_1004[0 /*75*/].f_21[1 /*17*/]), 8);
						func_26(&(sLocal_1004[1 /*75*/].f_21[0 /*17*/]), 8);
						func_26(&(sLocal_1004[1 /*75*/].f_21[1 /*17*/]), 8);
						func_26(&(sLocal_1004[2 /*75*/].f_21[0 /*17*/]), 8);
						func_26(&(sLocal_1004[2 /*75*/].f_21[1 /*17*/]), 8);
						if (iLocal_942 == 1 && iLocal_943 == 2)
						{
							func_27((1 << 13), 0, 48.0f);
						}
						iLocal_778 = 4;
					}
					break;
				case 4:
					if (!func_28(&sLocal_573, &uLocal_561, iLocal_572, 0, 1, 0, 1, 0))
					{
						func_10();
					}
					if (func_29())
					{
						func_10();
					}
					if (!sLocal_573.f_46)
					{
						if ((func_30(&uLocal_561, &(sLocal_573.f_5), &iLocal_941, &uLocal_79, 0, 1, 1) || func_31((1 << 14))) || func_32(8, 0))
						{
							if (func_31((1 << 14)) || func_32(8, 0))
							{
								bVar1 = true;
							}
							else if (sLocal_573.f_5.f_10 == uLocal_561[0])
							{
								if (!iLocal_88[0])
								{
									bVar1 = true;
								}
							}
							else if (sLocal_573.f_5.f_10 == uLocal_561[1])
							{
								if (!iLocal_88[1])
								{
									bVar1 = true;
								}
							}
							if (bVar1)
							{
								switch (iLocal_941)
								{
									case 2:
									case 4:
									case 16:
									case 256:
										func_33((1 << 15));
										break;
								}
								if (!iLocal_88[0])
								{
									func_34(uLocal_561[0], &(uLocal_565[0]), joaat("BLIP_STYLE_ENEMY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
								}
								if (!iLocal_88[1])
								{
									func_34(uLocal_561[1], &(uLocal_565[1]), joaat("BLIP_STYLE_ENEMY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
								}
								func_35(4, 2);
								sLocal_573.f_46 = 1;
							}
						}
						if (sLocal_573.f_46)
						{
							switch (iLocal_572)
							{
								case 0:
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && !iLocal_88[0])
									{
										func_36(0);
										func_37(uLocal_561[2], 0);
										func_38(uLocal_561[0], Global_35, 2, -1073741824, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
									}
									else if ((!func_39(iLocal_942) && !ENTITY::IS_ENTITY_DEAD(uLocal_561[1])) && !iLocal_88[1])
									{
										func_36(0);
										func_37(uLocal_561[2], 0);
										func_38(uLocal_561[1], Global_35, 2, -1073741824, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
									}
									break;
								case 1:
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && !iLocal_88[0])
									{
										func_36(0);
										func_37(uLocal_561[2], 0);
										func_38(uLocal_561[0], Global_35, 1, -1073741824, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
									}
									else if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[1]) && !iLocal_88[1])
									{
										func_36(0);
										func_37(uLocal_561[2], 0);
										func_38(uLocal_561[1], Global_35, 2, -1073741824, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
									}
									break;
							}
							func_40(&iLocal_776, 4);
						}
					}
					if (func_41())
					{
						sLocal_573.f_50 = 1;
						func_10();
					}
					if (func_42(&sLocal_573, &uLocal_561, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						sLocal_573.f_50 = 1;
						func_10();
					}
					break;
			}
			BUILTIN::WAIT(sLocal_573.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

bool func_2(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_3(var uParam0, bool bParam1)
{
	func_43(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_44("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_4(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_45(7, 2, 0);
	*iParam0 = iVar0;
}

void func_5(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_46(&(uParam0->f_1), (1 << 10));
	}
	else
	{
		func_47(&(uParam0->f_1), (1 << 10));
	}
}

void func_6(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_46(&(uParam0->f_1), 256);
	}
	else
	{
		func_47(&(uParam0->f_1), 256);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_46(&(uParam0->f_1), 4);
	}
	else
	{
		func_47(&(uParam0->f_1), 4);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_46(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_47(&(uParam0->f_1), (1 << 14));
	}
}

void func_9(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_47(iParam0, (1 << 13));
	}
	else
	{
		func_46(iParam0, (1 << 13));
	}
}

void func_10()
{
	func_48(&(uLocal_565[0]));
	func_48(&(uLocal_565[1]));
	func_48(&(uLocal_565[2]));
	if (PED::DOES_GROUP_EXIST(iLocal_570))
	{
		PED::REMOVE_GROUP(iLocal_570);
	}
	func_49(uLocal_561[2], 1);
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 448, false);
		func_50(uLocal_561[2], 1);
		if (!sLocal_573.f_48)
		{
			if (func_51(Global_35, uLocal_561[2], 0, 55.0f, 0))
			{
				PED::_SET_REMOVE_PED_NETWORKED(uLocal_561[2], -1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_561[2]));
			}
			else
			{
				func_52(&(uLocal_561[2]));
			}
		}
		else if (iLocal_572 == 0)
		{
			func_53(0);
		}
		else
		{
			func_53(1);
		}
	}
	func_54(0, 0);
	func_54(1, 0);
	func_55(&iLocal_78);
	func_56(iLocal_969);
	func_57();
	func_58(&sLocal_573, &uLocal_561, &uLocal_565, iLocal_572, iLocal_942, iLocal_943, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_11(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_59(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Stack.Invoke(iParam1);
		}
	}
}

bool func_12(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam6 || func_60(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_61(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7.0f;
				if (func_62(uParam0->f_3, 1))
				{
					fVar0 = 20.0f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, (1 << 21));
			}
			if (iParam5 == 1)
			{
				func_63(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5.0f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_64(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_13(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 1;
			*iParam2 = 1;
			break;
		case 2:
			*iParam1 = 1;
			*iParam2 = 2;
			break;
		case 3:
			*iParam1 = 1;
			*iParam2 = 3;
			break;
		case 4:
			*iParam1 = 1;
			*iParam2 = 4;
			break;
		case 5:
			*iParam1 = 1;
			*iParam2 = 5;
			break;
		case 6:
			*iParam1 = 3;
			*iParam2 = 0;
			break;
		case 7:
			*iParam1 = 3;
			*iParam2 = 1;
			break;
		case 8:
			*iParam1 = 3;
			*iParam2 = 2;
			break;
		case 9:
			*iParam1 = 6;
			*iParam2 = 0;
			break;
		case 10:
			*iParam1 = 6;
			*iParam2 = 1;
			break;
		case 11:
			*iParam1 = 6;
			*iParam2 = 2;
			break;
		case 12:
			*iParam1 = 6;
			*iParam2 = 3;
			break;
		case 13:
			*iParam1 = 6;
			*iParam2 = 4;
			break;
		case 14:
			*iParam1 = 9;
			*iParam2 = 0;
			break;
		case 15:
			*iParam1 = 9;
			*iParam2 = 1;
			break;
		case 16:
			*iParam1 = 9;
			*iParam2 = 2;
			break;
		case 17:
			*iParam1 = 10;
			*iParam2 = 0;
			break;
		case 18:
			*iParam1 = 10;
			*iParam2 = 1;
			break;
		case 19:
			*iParam1 = 10;
			*iParam2 = 2;
			break;
		case 20:
			*iParam1 = 10;
			*iParam2 = 3;
			break;
		case 21:
			*iParam1 = 10;
			*iParam2 = 4;
			break;
		case 22:
			*iParam1 = 10;
			*iParam2 = 5;
			break;
	}
}

bool func_14(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(iParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f /*3*/ };
					*(iParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f /*3*/ };
					*(iParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 1:
					*(iParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f /*3*/ };
					*(iParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f /*3*/ };
					*(iParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 2:
					*(iParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f /*3*/ };
					*(iParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 3:
					*(iParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f /*3*/ };
					*(iParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f /*3*/ };
					*(iParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f /*3*/ };
					*(iParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 4:
					*(iParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f /*3*/ };
					*(iParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 5:
					*(iParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f /*3*/ };
					*(iParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(iParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f /*3*/ };
					*(iParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f /*3*/ };
					*(iParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(iParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f /*3*/ };
					*(iParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f /*3*/ };
					*(iParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 8:
					*(iParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f /*3*/ };
					*(iParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 9:
					*(iParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f /*3*/ };
					*(iParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 10:
					*(iParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 11:
					*(iParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 12:
					*(iParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f /*3*/ };
					*(iParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f /*3*/ };
					*(iParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 13:
					*(iParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 14:
					*(iParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f /*3*/ };
					*(iParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 15:
					*(iParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f /*3*/ };
					*(iParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 16:
					*(iParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f /*3*/ };
					*(iParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f /*3*/ };
					*(iParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 17:
					*(iParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f /*3*/ };
					*(iParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f /*3*/ };
					*(iParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 18:
					*(iParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f /*3*/ };
					*(iParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f /*3*/ };
					*(iParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 19:
					*(iParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f /*3*/ };
					*(iParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 20:
					*(iParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f /*3*/ };
					*(iParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 21:
					*(iParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f /*3*/ };
					*(iParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 22:
					*(iParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(iParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f /*3*/ };
					*(iParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(iParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f /*3*/ };
					*(iParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(iParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f /*3*/ };
					*(iParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 8:
					*(iParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f /*3*/ };
					*(iParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 9:
					*(iParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 10:
					*(iParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(iParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 1:
					*(iParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 2:
					*(iParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 12:
					*(iParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 13:
					*(iParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 14:
					*(iParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 26:
					*(iParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f /*3*/ };
					*(iParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 27:
					*(iParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 28:
					*(iParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f /*3*/ };
					*(iParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 29:
					*(iParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 30:
					*(iParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(iParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(iParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(iParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f /*3*/ };
					*(iParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 8:
					*(iParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(iParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f /*3*/ };
					*(iParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 1:
					*(iParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f /*3*/ };
					*(iParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 3:
					*(iParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f /*3*/ };
					*(iParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(iParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f /*3*/ };
					*(iParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(iParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f /*3*/ };
					*(iParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(iParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f /*3*/ };
					*(iParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 15:
					*(iParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f /*3*/ };
					*(iParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 16:
					*(iParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f /*3*/ };
					*(iParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 17:
					*(iParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f /*3*/ };
					*(iParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 18:
					*(iParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f /*3*/ };
					*(iParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 19:
					*(iParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f /*3*/ };
					*(iParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 24:
					*(iParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 25:
					*(iParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f /*3*/ };
					*(iParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f /*3*/ };
					*(iParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 28:
					*(iParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 29:
					*(iParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 30:
					*(iParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f /*3*/ };
					*(iParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 31:
					*(iParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f /*3*/ };
					*(iParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 32:
					*(iParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f /*3*/ };
					*(iParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 33:
					*(iParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f /*3*/ };
					*(iParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f /*3*/ };
					*(iParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(iParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 118.52f };
				case 1:
					return { 0.0f, 0.0f, -189.21f };
				case 2:
					return { 0.0f, 0.0f, 156.13f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 121.78f };
				case 1:
					return { 0.0f, 0.0f, -62.64f };
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 3:
					return { 0.0f, 0.0f, 91.44f };
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, -41.78f };
				case 1:
					return { 0.0f, 0.0f, 8.88f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_16(var uParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	Stack.Invoke(iParam2, iParam1, uParam0->f_51.f_4);
	vVar0 = { StackVal, StackVal, StackVal /*3*/ };
	uParam0->f_51.f_3 = vVar0.z;
}

void func_17(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;

	switch (iParam1)
	{
		case 10:
			switch (iParam2)
			{
				case 1:
				case 2:
					(uParam0[0 /*32*/])->f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
					(uParam0[1 /*32*/])->f_6 = { 2.0f, 3.0f, 0.0f /*3*/ };
					(uParam0[2 /*32*/])->f_6 = { -3.0f, 0.0f, 0.0f /*3*/ };
					(uParam0[0 /*32*/])->f_15 = { 0.0f, 0.0f, 0.0f /*3*/ };
					(uParam0[1 /*32*/])->f_15 = { 0.0f, 5.0f, 0.0f /*3*/ };
					break;
				default:
					(uParam0[0 /*32*/])->f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
					(uParam0[1 /*32*/])->f_6 = { -2.0f, -3.0f, 0.0f /*3*/ };
					(uParam0[2 /*32*/])->f_6 = { 3.0f, 0.0f, 0.0f /*3*/ };
					(uParam0[0 /*32*/])->f_15 = { 0.0f, 0.0f, 0.0f /*3*/ };
					(uParam0[1 /*32*/])->f_15 = { 0.0f, -5.0f, 0.0f /*3*/ };
					break;
			}
			break;
		default:
			(uParam0[0 /*32*/])->f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
			(uParam0[1 /*32*/])->f_6 = { -2.0f, -3.0f, 0.0f /*3*/ };
			(uParam0[2 /*32*/])->f_6 = { 3.0f, 0.0f, 0.0f /*3*/ };
			(uParam0[0 /*32*/])->f_15 = { 0.0f, 0.0f, 0.0f /*3*/ };
			(uParam0[1 /*32*/])->f_15 = { 0.0f, -5.0f, 0.0f /*3*/ };
			break;
	}
	fVar0 = func_65((uParam0[0 /*32*/])->f_6, Global_36);
	fVar1 = func_66(fVar0);
	(uParam0[0 /*32*/])->f_9 = -fVar1;
	fVar0 = func_65((uParam0[1 /*32*/])->f_6, Global_36);
	fVar1 = func_66(fVar0);
	(uParam0[1 /*32*/])->f_9 = -fVar1;
	(uParam0[2 /*32*/])->f_9 = 180.0f;
}

void func_18(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
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
	uParam0->f_3 = uParam1;
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

bool func_19()
{
	switch (iLocal_775)
	{
		case 0:
			if (func_67(&sLocal_573))
			{
				HUD::TEXT_BLOCK_REQUEST("BHCR");
				func_68(&sLocal_805, iLocal_942, iLocal_572);
				func_69();
				AUDIO::PREPARE_SOUNDSET(func_70(), false);
				func_71(iLocal_572, &iLocal_767);
				func_72(&sLocal_783, &uLocal_788);
				iLocal_775 = 1;
			}
			break;
		case 1:
			if (!func_73(&uLocal_788))
			{
				return false;
			}
			if (!func_74(&sLocal_805))
			{
				return false;
			}
			if (!HUD::TEXT_BLOCK_IS_LOADED("BHCR"))
			{
				return false;
			}
			if (iLocal_572 == 1)
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_767, true, false))
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

bool func_20()
{
	switch (iLocal_940)
	{
		case 0:
			if (func_75(sLocal_573.f_51, &uLocal_1234, 1101004800, 1))
			{
				iLocal_940 = 1;
			}
			break;
		case 1:
			if (!func_76(sLocal_573.f_51, 0.0f, &sLocal_805, &uLocal_561, 0, 0, -1, 1))
			{
				return false;
			}
			iLocal_940 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_21()
{
	if (PED::ADD_RELATIONSHIP_GROUP("REL_REBNT", &iLocal_571))
	{
		PED::_0xDC91F22F09BC6C2F(iLocal_571, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]))
	{
		func_77(uLocal_561[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608, 1065353216, 0);
		ENTITY::SET_ENTITY_HEADING(uLocal_561[0], func_78(ENTITY::GET_ENTITY_COORDS(uLocal_561[0], true, false), Global_35, 0));
		PED::_SET_PED_VOICE_VOLUME(uLocal_561[0], 10.0f);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[0], iLocal_571);
		func_80(uLocal_561[0], func_79(joaat("REWARD_BEAT_SMALL"), 0, -1));
		func_81(&(uLocal_561[0]), joaat("MOODAGITATED"));
		func_82(uLocal_561[0], 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_561[0], 6, false);
		LAW::_0x00DB0BC05E3FAA4E(uLocal_561[0], 64);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[1]))
	{
		func_77(uLocal_561[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 1, 0, 1056964608, 1065353216, 0);
		ENTITY::SET_ENTITY_HEADING(uLocal_561[1], func_78(ENTITY::GET_ENTITY_COORDS(uLocal_561[1], true, false), Global_35, 0));
		PED::_SET_PED_VOICE_VOLUME(uLocal_561[1], 10.0f);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[1], iLocal_571);
		func_80(uLocal_561[1], func_79(joaat("REWARD_BEAT_SMALL"), 0, -1));
		func_81(&(uLocal_561[1]), joaat("MOODAGITATED"));
		func_82(uLocal_561[1], 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_561[1], 6, false);
		LAW::_0x00DB0BC05E3FAA4E(uLocal_561[1], 64);
	}
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_805[0 /*32*/].f_11))
	{
		sLocal_1235[0 /*23*/].f_1[0] = joaat("AMMO_REVOLVER");
		sLocal_1235[0 /*23*/].f_12[0] = 2;
		sLocal_1235[0 /*23*/] = 2;
		sLocal_1235[1 /*23*/].f_1[0] = joaat("CONSUMABLE_BAKED_BEANS_CAN");
		sLocal_1235[1 /*23*/].f_1[1] = joaat("CONSUMABLE_PEACHES_CAN");
		sLocal_1235[1 /*23*/].f_12[0] = 1;
		sLocal_1235[1 /*23*/].f_12[1] = 1;
		sLocal_1235[1 /*23*/] = 2;
		ENTITY::_0xA88E215CEB0435C0(sLocal_805[0 /*32*/].f_11, &(sLocal_1235[0 /*23*/]), joaat("VISIBLELOOTSLOTREQUEST_ANY"), 128, 2, false);
		ENTITY::_0xA88E215CEB0435C0(sLocal_805[0 /*32*/].f_11, &(sLocal_1235[1 /*23*/]), joaat("VISIBLELOOTSLOTREQUEST_ANY"), 128, 2, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_805[1 /*32*/].f_11))
	{
		sLocal_1235[2 /*23*/].f_1[0] = joaat("AMMO_REVOLVER");
		sLocal_1235[2 /*23*/].f_12[0] = 2;
		sLocal_1235[2 /*23*/] = 2;
		sLocal_1235[3 /*23*/].f_1[0] = joaat("CONSUMABLE_SWEET_CORN_CAN");
		sLocal_1235[3 /*23*/].f_1[1] = joaat("CONSUMABLE_PEAS_CAN");
		sLocal_1235[3 /*23*/].f_12[0] = 1;
		sLocal_1235[3 /*23*/].f_12[1] = 1;
		sLocal_1235[3 /*23*/] = 2;
		ENTITY::_0xA88E215CEB0435C0(sLocal_805[1 /*32*/].f_11, &(sLocal_1235[2 /*23*/]), joaat("VISIBLELOOTSLOTREQUEST_ANY"), 128, 2, false);
		ENTITY::_0xA88E215CEB0435C0(sLocal_805[1 /*32*/].f_11, &(sLocal_1235[3 /*23*/]), joaat("VISIBLELOOTSLOTREQUEST_ANY"), 128, 2, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		if (VOLUME::DOES_VOLUME_EXIST(sLocal_573.f_174))
		{
			PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_573.f_174, uLocal_561[2], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
		}
		PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 448, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_561[2], true, true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_561[2], false);
		func_49(uLocal_561[2], 0);
		func_83(uLocal_561[2], 0, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 6, true);
		PED::_SET_PED_INTERACTION_PERSONALITY(uLocal_561[2], joaat("TIMID"));
		PED::_0xB8B6430EAD2D2437(uLocal_561[2], 673924189);
		func_82(uLocal_561[2], 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[2], joaat("REL_NO_RELATIONSHIP"));
		func_81(&(uLocal_561[2]), joaat("MOODPANIC"));
	}
	if (!PED::DOES_GROUP_EXIST(iLocal_570))
	{
		if (func_84(&iLocal_570, 0, 10, 1))
		{
			PED::_0xD5BD1B5318A81994(iLocal_570, true);
			PED::SET_PED_AS_GROUP_LEADER(uLocal_561[0], iLocal_570, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_561[0], 279, true);
			PED::SET_PED_AS_GROUP_MEMBER(uLocal_561[1], iLocal_570);
			PED::SET_PED_CONFIG_FLAG(uLocal_561[1], 279, true);
		}
		else
		{
			TASK::TASK_MOVE_IN_TRAFFIC(uLocal_561[1], 2.5f, 0, 0);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_561[1], uLocal_561[1], -0.5f, -1.0f, 0.0f, 2.5f, -1, 0.1f, true, true, false, false, true, false);
		}
	}
	func_85(uLocal_561[0], &sLocal_573, 0);
	func_85(uLocal_561[1], &sLocal_573, 0);
	func_85(uLocal_561[2], &sLocal_573, 0);
}

void func_22(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 1:
		case 9:
			strcpy_s(&((uParam3[0 /*213*/])->f_34), 64, "RE_BTR_MTN_V1_THANK");
			strcpy_s(&((uParam3[1 /*213*/])->f_54), 64, "RE_BTR_MTN_V1_WLCOM");
			break;
		case 3:
		case 6:
		case 10:
			strcpy_s(&((uParam3[0 /*213*/])->f_34), 64, "RE_BTR_FTH_V1_THANK");
			strcpy_s(&((uParam3[1 /*213*/])->f_54), 64, "RE_BTR_FTH_V1_WLCOM");
			break;
	}
	strcpy_s(&((uParam3[0 /*213*/])->f_2), 64, (*uParam1)[0 /*2*/]);
	strcpy_s(&((uParam3[0 /*213*/])->f_10), 64, (uParam1[0 /*2*/])->f_1);
	strcpy_s(&((uParam3[1 /*213*/])->f_2), 64, (*uParam1)[1 /*2*/]);
	strcpy_s(&((uParam3[1 /*213*/])->f_10), 64, (uParam1[1 /*2*/])->f_1);
	func_86(&((uParam3[0 /*213*/])->f_2), uParam2);
	(uParam3[0 /*213*/])->f_78 = 0;
	(*uParam4)[0] = 0;
	(*uParam4)[1] = 0;
}

int func_23(int iParam0, int iParam1, int iParam2)
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

void func_24(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_39(iParam3))
	{
		switch (iParam4)
		{
			case 0:
				func_88(uParam0[0 /*17*/], func_87(7), "RE_BTR_FTH_V1_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam0[1 /*17*/], func_87(26), "RE_BTR_FTH_V1_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_88(uParam1[0 /*17*/], func_87(7), "RE_BTR_FTH_V1_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam1[1 /*17*/], func_87(26), "RE_BTR_FTH_V1_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_88(uParam2[0 /*17*/], func_87(7), "RE_BTR_FTH_V1_GREET_PRISONER", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam2[1 /*17*/], func_87(10), "RE_BTR_FTH_V1_ANTAGONIZE_PRISONER", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				break;
			case 1:
				func_88(uParam0[0 /*17*/], func_87(7), "RE_BTR_FTH_V2_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam0[1 /*17*/], func_87(26), "RE_BTR_FTH_V2_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_88(uParam1[0 /*17*/], func_87(7), "RE_BTR_FTH_V2_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam1[1 /*17*/], func_87(26), "RE_BTR_FTH_V2_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_88(uParam2[0 /*17*/], func_87(7), "RE_BTR_FTH_V2_GREET_PRISONER", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam2[1 /*17*/], func_87(10), "RE_BTR_FTH_V2_ANTAGONIZE_PRISONER", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				break;
		}
	}
	else
	{
		switch (iParam4)
		{
			case 0:
				func_88(uParam0[0 /*17*/], func_87(7), "RE_BTR_MTN_V1_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam0[1 /*17*/], func_87(26), "RE_BTR_FTH_V1_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_88(uParam1[0 /*17*/], func_87(7), "RE_BTR_MTN_V1_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam1[1 /*17*/], func_87(26), "RE_BTR_MTN_V1_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_88(uParam2[0 /*17*/], func_87(7), "RE_BTR_MTN_V1_GREET_PRISONER", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam2[1 /*17*/], func_87(10), "RE_BTR_MTN_V1_ANTAGONIZE_PRISONER", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				break;
			case 1:
				func_88(uParam0[0 /*17*/], func_87(7), "RE_BTR_MTN_V2_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam0[1 /*17*/], func_87(26), "RE_BTR_FTH_V2_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_88(uParam1[0 /*17*/], func_87(7), "RE_BTR_MTN_V2_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam1[1 /*17*/], func_87(26), "RE_BTR_MTN_V2_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_88(uParam2[0 /*17*/], func_87(7), "RE_BTR_MTN_V2_GREET_PRISONER", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_88(uParam2[1 /*17*/], func_87(10), "RE_BTR_MTN_V2_ANTAGONIZE_PRISONER", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				break;
		}
	}
}

void func_25(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_89(uParam0[iVar0 /*17*/], bParam1);
		iVar0++;
	}
}

void func_26(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_27(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	var uVar1;

	if (!func_90(iVar0))
	{
		iVar0 = func_93(func_91(iParam0), iParam1, 3, func_92(iParam0));
	}
	if (func_94(iParam0, fParam2) & func_95(iParam0, &uVar1))
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_96(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_97(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & (1 << 14) != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_98(&(uParam0->f_5));
			}
			func_47(&(uParam0->f_5), (1 << 14));
		}
	}
	if (!uParam0->f_48 && !func_99(uParam0->f_3, (1 << 18)))
	{
		if (uParam0->f_5 & (1 << 11) != 0)
		{
			func_100(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_101(&(uParam0->f_121));
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
					func_102(uParam0, uParam0->f_193, 2.0f);
				}
			}
			break;
		case 2:
			if (!func_103(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_62(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				func_104(uParam0, (*uParam1)[0]);
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

bool func_29()
{
	if (!func_105(Global_1395482.f_1))
	{
		return false;
	}
	return func_106(Global_1395482.f_1, 32);
}

bool func_30(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_107(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_108((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
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

bool func_31(int iParam0)
{
	return func_109(iLocal_75, iParam0);
}

bool func_32(int iParam0, int iParam1)
{
	return func_109(uLocal_995[iParam1], iParam0);
}

void func_33(int iParam0)
{
	if (!func_31(iParam0))
	{
		func_110(&iLocal_75, iParam0);
	}
}

void func_34(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_35(int iParam0, int iParam1)
{
	if (func_32(iParam0, iParam1))
	{
		func_111(&(uLocal_995[iParam1]), iParam0);
	}
}

void func_36(bool bParam0)
{
	func_112(&uLocal_0);
	func_113(1, bParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	func_114();
}

void func_37(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

bool func_38(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4, int iParam5)
{
	if (!func_115(iParam0, 0, 0))
	{
		return false;
	}
	if (func_116(fParam3, 1, 0, 0) || bParam4)
	{
		if (!func_117(iParam2))
		{
			if (func_119(iParam0, iParam1, func_118(iLocal_942, iLocal_572, iParam2), 0, -1082130432, 0, 0, 0, 1, 1, 1, iParam5, 1, 0, 0))
			{
				func_120(iParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_39(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 6:
		case 10:
			return true;
		default:
			break;
	}
	return false;
}

void func_40(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_41()
{
	bool bVar0;

	switch (iLocal_776)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(sLocal_805[1 /*32*/].f_11) && !ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
			{
				TASK::TASK_CARRIABLE(uLocal_561[2], ENTITY::_GET_OPTIMAL_CARRY_CONFIG(uLocal_561[2], 1), sLocal_805[0 /*32*/].f_11, 0, 0);
			}
			func_40(&iLocal_776, 1);
			break;
		case 1:
			func_121();
			func_122();
			func_123();
			if (func_124())
			{
				func_40(&iLocal_776, 2);
			}
			break;
		case 2:
			func_121();
			func_125();
			if (ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && ENTITY::IS_ENTITY_DEAD(uLocal_561[1]))
			{
				func_40(&iLocal_776, 4);
			}
			else if (iLocal_88[0] && iLocal_88[1])
			{
				func_40(&iLocal_776, 5);
			}
			else if (func_126((1 << 11)) || func_127(uLocal_561[0], 1, 1) > 120.0f)
			{
				func_40(&iLocal_776, 13);
			}
			break;
		case 4:
			if (!MAP::DOES_BLIP_EXIST(uLocal_565[2]))
			{
				func_128(&sLocal_573, uLocal_561[2], 0);
				uLocal_565[2] = sLocal_573.f_181;
			}
			sLocal_573.f_44 = 1;
			func_129(uLocal_565[2], 1);
			if (!iLocal_88[0])
			{
				func_130(&(sLocal_1004[0 /*75*/].f_21), 0, 0, 1, 0);
			}
			if (!iLocal_88[1])
			{
				func_130(&(sLocal_1004[1 /*75*/].f_21), 0, 0, 1, 0);
			}
			func_131();
			func_40(&iLocal_776, 5);
			break;
		case 5:
			func_132();
			func_133();
			func_134();
			if (!iLocal_88[1])
			{
				if (func_127(uLocal_561[1], 1, 1) > 120.0f)
				{
					func_54(1, 1);
				}
			}
			if ((!func_31((1 << 26)) && ENTITY::IS_ENTITY_DEAD(uLocal_561[0])) && !iLocal_88[0])
			{
				func_33((1 << 26));
				func_81(&(uLocal_561[0]), joaat("MOODDEAD"));
				if (!ENTITY::IS_ENTITY_DEAD(sLocal_805[0 /*32*/].f_11))
				{
					TASK::_0x216343750545A486(sLocal_805[0 /*32*/].f_11, 1, 1065353216);
				}
			}
			if ((!func_31((1 << 27)) && ENTITY::IS_ENTITY_DEAD(uLocal_561[1])) && !iLocal_88[1])
			{
				func_33((1 << 27));
				func_81(&(uLocal_561[1]), joaat("MOODDEAD"));
			}
			if (!func_31(8))
			{
				if (iLocal_73 == 0)
				{
					func_53(1);
					func_135();
					func_33(8);
				}
			}
			if (func_136())
			{
				bVar0 = true;
			}
			if ((!func_115(uLocal_561[0], 0, 1) || iLocal_88[0]) && (!func_115(uLocal_561[1], 0, 1) || iLocal_88[1]))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_33(32);
				func_36(0);
				if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]) || func_31(8))
				{
					func_40(&iLocal_776, 13);
				}
				else
				{
					if (iLocal_572 == 0)
					{
						func_81(&(uLocal_561[2]), joaat("MOODNERVOUS"));
					}
					else
					{
						func_81(&(uLocal_561[2]), joaat("MOODAGITATED"));
					}
					iLocal_78 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), uLocal_561[2], -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, 180.0f, false, false, -1, -1);
					TASK::_0x2E1D6D87346BB7D2(uLocal_561[2], Global_35, 1, 0);
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_561[2], true);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_561[2]);
					func_25(&(sLocal_1004[2 /*75*/].f_21), 0);
					func_137(&(sLocal_1004[2 /*75*/].f_21), 1, 0);
					func_138(&(sLocal_1004[2 /*75*/]), 0);
					func_129(uLocal_565[2], 0);
					func_5(&(sLocal_573.f_5), 0);
					func_6(&(sLocal_573.f_5), 0);
					func_7(&(sLocal_573.f_5), 1);
					func_8(&(sLocal_573.f_5), 0);
					func_139(&(sLocal_573.f_5), &iLocal_941);
					func_40(&iLocal_776, 6);
				}
			}
			break;
		case 6:
			func_134();
			func_140();
			if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
			{
				func_141();
				func_36(0);
				func_40(&iLocal_776, 13);
			}
			else
			{
				func_133();
				func_142();
				switch (iLocal_73)
				{
					case 3:
						if (iLocal_572 == 1)
						{
							if (func_143())
							{
								PED::SET_PED_RESET_FLAG(Global_35, 282, true);
							}
						}
						break;
					case 0:
					case 10:
						switch (iLocal_572)
						{
							case 0:
								if (func_31(4))
								{
									func_137(&(sLocal_1004[2 /*75*/].f_21), 0, 0);
									func_138(&(sLocal_1004[2 /*75*/]), 0);
									if (func_31((1 << 19)))
									{
										func_53(1);
										func_135();
										func_144();
										func_40(&iLocal_776, 13);
									}
									else
									{
										func_40(&iLocal_776, 9);
									}
								}
								break;
							case 1:
								if (func_31((1 << 17)))
								{
									PED::SET_PED_RESET_FLAG(Global_35, 282, true);
								}
								if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_561[2], -6107317) || !PED::IS_PED_HOGTIED(uLocal_561[2]))
								{
									func_137(&(sLocal_1004[2 /*75*/].f_21), 0, 0);
									func_138(&(sLocal_1004[2 /*75*/]), 0);
									if (func_31((1 << 17)))
									{
										func_145();
										func_40(&iLocal_776, 7);
										func_81(&(uLocal_561[2]), joaat("MOODANGRY"));
									}
									else
									{
										func_40(&iLocal_776, 8);
									}
								}
								break;
						}
						break;
				}
				Jump @1918; // curOff = 1376
				PED::SET_PED_RESET_FLAG(Global_35, 282, true);
				if (func_146())
				{
					if (!func_117((1 << 20)))
					{
						func_38(uLocal_561[2], Global_35, (1 << 20), -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
					}
					func_81(&(uLocal_561[2]), joaat("MOODSCARED"));
					func_48(&(uLocal_565[2]));
					func_56(iLocal_969);
					func_53(1);
					func_135();
					func_40(&iLocal_776, 13);
				}
				Jump @1918; // curOff = 1488
				if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
				{
					func_40(&iLocal_776, 13);
				}
				else if (!TASK::IS_PED_GETTING_UP(uLocal_561[2]))
				{
					func_147(1);
					func_36(0);
					func_148(uLocal_561[2], Global_35, (1 << 12), -1073741824, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
					func_53(1);
					func_135();
					func_48(&(uLocal_565[2]));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[2], joaat("REL_PLAYER_ENEMY"));
					func_56(iLocal_969);
					func_40(&iLocal_776, 13);
				}
				Jump @1918; // curOff = 1620
				func_149();
				func_150(&(sLocal_573.f_5), 1);
				func_40(&iLocal_776, 11);
				Jump @1918; // curOff = 1646
				if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
				{
					func_56(iLocal_969);
					func_40(&iLocal_776, 13);
				}
				if (func_108(uLocal_561[2], 0, &(sLocal_573.f_5), &iLocal_941, 0, 0))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[2], joaat("REL_PLAYER_DISLIKE"));
					func_81(&(uLocal_561[2]), joaat("MOODPANIC"));
					func_53(1);
					func_135();
					func_144();
					func_40(&iLocal_776, 13);
				}
				if (func_151())
				{
					func_56(iLocal_969);
					func_40(&iLocal_776, 13);
				}
				Jump @1918; // curOff = 1777
				func_125();
				if (iLocal_88[0] && iLocal_88[1])
				{
					func_40(&iLocal_776, 5);
					return false;
				}
				if (func_31((1 << 31)))
				{
					func_48(&(uLocal_565[2]));
					return true;
				}
				if (func_152(Global_35, uLocal_561[2], 1, 1) > 120.0f)
				{
					if (sLocal_573.f_46)
					{
						func_48(&(uLocal_565[2]));
						return true;
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]) || func_32(2, 2))
				{
					return true;
				}
			}
			if (func_31((1 << 23)))
			{
				func_153(0);
				func_153(1);
				func_153(2);
				func_154();
			}
			return false;
			default:
				break;
	}
}

bool func_42(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	Vector3 vVar1;

	fVar0 = 0.0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_29())
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
			else if (func_155(uParam0->f_3))
			{
				fVar0 = 250.0f;
			}
			else if (func_62(uParam0->f_3, (1 << 17)))
			{
				fVar0 = 70.0f;
				fVar0 += 10.0f;
			}
			else if (func_62(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215.0f;
				fVar0 += 20.0f;
				if (uParam0->f_48)
				{
					fVar0 -= 80.0f;
				}
			}
			else if (func_62(uParam0->f_3, 2) || iParam12 == 1)
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
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*uParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_188])) || !bParam3)
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
				if (func_156(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 /*3*/ };
				if (func_156(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_191]))
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

void func_43(var uParam0)
{
	func_8(uParam0, 0);
	func_157(uParam0, 0);
	func_6(uParam0, 1);
	func_158(uParam0, 1);
	func_159(uParam0, 0);
	func_150(uParam0, 1);
	func_160(uParam0, 1, 1, 1);
}

int func_44(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_161(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_162(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_161(sVar0, iParam1, 0, 0, 1, 1);
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_163(iParam0) % iParam1);
	}
	return (func_164(iParam0) % iParam1);
}

void func_46(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

void func_47(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

void func_48(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_49(int iParam0, bool bParam1)
{
	func_165(iParam0, bParam1);
}

void func_50(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

bool func_51(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_166(iParam0, iParam1, 0.0f))
		{
			return false;
		}
	}
	if (!func_167(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

void func_52(int* iParam0)
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

void func_53(bool bParam0)
{
	float fVar0;

	if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]) || func_32(2, 2))
	{
		return;
	}
	func_48(&(uLocal_565[2]));
	func_56(iLocal_969);
	func_168(2, 2);
	fVar0 = 1.5f;
	if (PED::IS_PED_ON_MOUNT(uLocal_561[2]))
	{
		fVar0 = 2.0f;
	}
	func_169(uLocal_561[2], 1088421888, 0, 0);
	func_170(&(uLocal_561[2]), &(sLocal_1004[2 /*75*/]), &(sLocal_1004[2 /*75*/].f_21), 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_561[2], false);
	if (bParam0)
	{
		TASK::TASK_FLEE_PED(uLocal_561[2], Global_35, 3, 0, -1.0f, -1, 0);
	}
	else
	{
		TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(uLocal_561[2], uLocal_561[0], fVar0, 0, 0);
	}
	PED::SET_PED_KEEP_TASK(uLocal_561[2], true);
	PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 130, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 178, true);
	if (func_31((1 << 19)))
	{
		func_171(&(uLocal_561[2]), 24);
	}
	else
	{
		func_171(&(uLocal_561[2]), 35);
	}
	PED::_SET_PED_INTERACTION_PERSONALITY(uLocal_561[2], joaat("TIMID"));
	PED::_0xE737D5F14304A2EC(uLocal_561[2], PLAYER::GET_PLAYER_INDEX(), 120000);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), uLocal_561[2], 7, 0, true);
}

void func_54(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_561[iParam0]))
	{
		return;
	}
	TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(uLocal_561[iParam0], Global_35, 2.001f, 0, 0);
	PED::SET_PED_KEEP_TASK(uLocal_561[iParam0], true);
	func_48(&(uLocal_565[iParam0]));
	PED::SET_PED_CONFIG_FLAG(uLocal_561[iParam0], 146, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_561[iParam0], 130, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_561[iParam0], 178, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[iParam0], joaat("REL_PLAYER_DISLIKE"));
	if (bParam1)
	{
		func_172(uLocal_561[iParam0]);
	}
	if (sLocal_573.f_48)
	{
		func_171(&(uLocal_561[iParam0]), 30);
		func_171(&(uLocal_561[iParam0]), 34);
		func_171(&(uLocal_561[iParam0]), 32);
		func_171(&(uLocal_561[iParam0]), 47);
	}
	iLocal_88[iParam0] = 1;
	func_170(&(uLocal_561[iParam0]), &(sLocal_1004[iParam0 /*75*/]), &(sLocal_1004[iParam0 /*75*/].f_21), 1, 1);
	PED::_0xB8B6430EAD2D2437(uLocal_561[iParam0], joaat("BOUNTY_HUNTER"));
	PED::_SET_PED_INTERACTION_PERSONALITY(uLocal_561[iParam0], joaat("AGGRESSIVE"));
	PED::_0xE737D5F14304A2EC(uLocal_561[iParam0], PLAYER::GET_PLAYER_INDEX(), 120000);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_561[iParam0], false);
}

void func_55(int iParam0)
{
	if (*iParam0 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(*iParam0);
		*iParam0 = 0;
	}
}

void func_56(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_57()
{
	if (iLocal_572 != 1)
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_767))
	{
		return;
	}
	if (func_31((1 << 9)))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_767, "player", Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_561[2]) && func_115(uLocal_561[2], 0, 0))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_767, "Criminal", uLocal_561[2]);
		}
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_767);
}

void func_58(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_173(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_174(uParam0->f_3, (1 << 19));
		}
	}
	if (func_115(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_115((*uParam1)[iVar0], 0, 0))
			{
				func_175((*uParam1)[iVar0], bVar3);
				if (func_176(uParam0, uParam1[iVar0]))
				{
					func_177(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_115((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], false, 0, 0);
						}
						else if (PED::GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_179((*uParam1)[iVar0], (1 << 30), func_178(iVar0 < iVar2, uParam0->f_98[iVar0], -1.0f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000.0f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_180(uParam0);
	}
	func_181(uParam0);
	if (!uParam0->f_186)
	{
		func_96(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_182(uParam0->f_3, uParam0->f_185);
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
		func_183(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

bool func_59(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_184(iVar0))
	{
		return false;
	}
	if (func_185(iVar0, 1) || func_185(iVar0, 2))
	{
		return true;
	}
	return false;
}

int func_60(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> /*56*/ sParam4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (sParam4.f_6 > -1)
	{
		*uParam1 = { func_186(iParam0, sParam4.f_6) /*3*/ };
		uParam1->f_4 = sParam4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_187(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_99(iParam0, 128))
			{
				if (!func_188(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_189(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_190(&bVar4, iParam0, uVar2, uVar1) /*3*/ };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_191(*uParam1))
				{
					return func_192(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_193(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_2(sParam4.f_2, 8))
				{
					func_187(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_194(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_195(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_196(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
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
			if (func_99(iParam0, 128))
			{
				if (!func_197(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_192(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_189(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_194(uParam1))
					{
						return func_192(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_198(iParam0, sParam4.f_1, uParam1, sParam4, iParam14))
			{
				func_187(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_192(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_44("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_44("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_61(var uParam0, int iParam1)
{
	if (func_62(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_200(iParam1, func_199(uParam0), &(uParam0->f_172)))
		{
			if (func_115(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_62(int iParam0, int iParam1)
{
	if (!func_201(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/] & iParam1 != 0;
}

void func_63(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_202(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, (float)iParam1, (float)iParam1, 5.0f, "Custom Sized Ambient Avoidance");
	}
	else if (func_62(uParam0->f_3, 1) && !func_62(uParam0->f_3, 32))
	{
		func_202(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 6.0f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_62(uParam0->f_3, 2) && !func_62(uParam0->f_3, 32))
	{
		func_202(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 5.0f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171, 2228255, (1 << 18), 0, -1, -1, uParam0->f_175);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_203(uParam0->f_171, 1);
	}
	if (func_62(uParam0->f_3, 1))
	{
		func_202(&(uParam0->f_174), uParam0->f_51, 0.0f, 0.0f, 0.0f, VOLUME::GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_204(uParam0->f_174, 0, (1 << 18), 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_171, iParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
	}
}

float func_64(Vector3 vParam0)
{
	Vector3 vVar0;

	vVar0 = { Global_36 - vParam0 /*3*/ };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

float func_65(Vector3 vParam0, Vector3 vParam3)
{
	Vector3 vVar0;

	vVar0 = { vParam3 - vParam0 /*3*/ };
	if (vVar0.y == 0.0f)
	{
		if (vVar0.x < 0.0f)
		{
			return -90.0f;
		}
		else
		{
			return 90.0f;
		}
	}
	return MISC::ATAN2(vVar0.x, vVar0.y);
}

float func_66(float fParam0)
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

bool func_67(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_205(uParam0->f_3);
	iVar1 = func_206(1);
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

void func_68(var uParam0, int iParam1, int iParam2)
{
	(uParam0[0 /*32*/])->f_1 = joaat("G_M_M_BOUNTYHUNTERS_01");
	(uParam0[1 /*32*/])->f_1 = joaat("G_M_M_BOUNTYHUNTERS_01");
	(uParam0[2 /*32*/])->f_1 = joaat("G_M_M_UNICRIMINALS_01");
	(uParam0[0 /*32*/])->f_12 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	(uParam0[1 /*32*/])->f_12 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	func_207(&((uParam0[0 /*32*/])->f_22));
	func_207(&((uParam0[1 /*32*/])->f_22));
	func_207(&((uParam0[2 /*32*/])->f_22));
	if (func_39(iParam1))
	{
		switch (iParam2)
		{
			case 1:
				(uParam0[0 /*32*/])->f_3 = -1414685225;
				(uParam0[1 /*32*/])->f_3 = 467926594;
				(uParam0[2 /*32*/])->f_3 = -1375282377;
				strcpy_s(&((uParam0[0 /*32*/])->f_23), 64, "0745_G_M_M_BountyHunters_01_WHITE_07");
				strcpy_s(&((uParam0[1 /*32*/])->f_23), 64, "0746_G_M_M_BountyHunters_01_WHITE_08");
				strcpy_s(&((uParam0[2 /*32*/])->f_23), 64, "0970_A_M_M_RoughTravellers_White_01");
				break;
			default:
				(uParam0[0 /*32*/])->f_3 = -955755380;
				(uParam0[1 /*32*/])->f_3 = -1253658359;
				(uParam0[2 /*32*/])->f_3 = -1161759573;
				strcpy_s(&((uParam0[0 /*32*/])->f_23), 64, "0747_G_M_M_BountyHunters_01_WHITE_09");
				strcpy_s(&((uParam0[1 /*32*/])->f_23), 64, "0744_G_M_M_BountyHunters_01_WHITE_06");
				strcpy_s(&((uParam0[2 /*32*/])->f_23), 64, "0976_A_M_M_RoughTravellers_White_07");
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				(uParam0[0 /*32*/])->f_3 = 534840840;
				(uParam0[1 /*32*/])->f_3 = -955755380;
				(uParam0[2 /*32*/])->f_3 = 1415292890;
				strcpy_s(&((uParam0[0 /*32*/])->f_23), 64, "0743_G_M_M_BountyHunters_01_WHITE_05");
				strcpy_s(&((uParam0[1 /*32*/])->f_23), 64, "0742_G_M_M_BountyHunters_01_WHITE_04");
				strcpy_s(&((uParam0[2 /*32*/])->f_23), 64, "0977_A_M_M_RoughTravellers_White_08");
				break;
			default:
				(uParam0[0 /*32*/])->f_3 = 1433891124;
				(uParam0[1 /*32*/])->f_3 = 1270504890;
				(uParam0[2 /*32*/])->f_3 = 1153534118;
				strcpy_s(&((uParam0[0 /*32*/])->f_23), 64, "1065_G_M_M_UniCriminals_01_BLACK_04");
				strcpy_s(&((uParam0[1 /*32*/])->f_23), 64, "0740_G_M_M_BountyHunters_01_WHITE_02");
				strcpy_s(&((uParam0[2 /*32*/])->f_23), 64, "1058_G_M_M_UniCriminals_01_WHITE_05");
				break;
		}
	}
}

void func_69()
{
	func_208(&sLocal_805);
}

char* func_70()
{
	return "HUD_Toast_Soundset";
}

void func_71(int iParam0, int iParam1)
{
	if (iParam0 != 1)
	{
		return;
	}
	iParam1->f_4 = "script@beat@wilderness@bountytransport@knock";
	*iParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam1->f_4, 64, "PBL_KNOCK", false, true);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_4))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*iParam1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam1);
		}
	}
}

void func_72(var uParam0, var uParam1)
{
	(*uParam0)[0 /*2*/] = "script_re@bounty_transport@thanks_hint";
	(uParam0[0 /*2*/])->f_1 = "thanks";
	(*uParam0)[1 /*2*/] = "script_re@bounty_transport@thanks_hint";
	(uParam0[1 /*2*/])->f_1 = "hint";
	func_86((*uParam0)[0 /*2*/], uParam1);
}

bool func_73(var uParam0)
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

bool func_74(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_209(uParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_75(Vector3 vParam0, int iParam3, float fParam4, bool bParam5)
{
	float fVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	fVar0 = (fParam4 * 0.5f);
	vVar1 = { vParam0 - Vector(fVar0, fVar0, fVar0) /*3*/ };
	vVar4 = { vParam0 + Vector(fVar0, fVar0, fVar0) /*3*/ };
	if (!bParam5 && *iParam3 != 1)
	{
		*iParam3 = 1;
	}
	switch (*iParam3)
	{
		case 0:
			if (bParam5)
			{
				STREAMING::REQUEST_COLLISION_AT_COORD(vParam0);
			}
			*iParam3++;
			break;
		case 1:
			if (PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar1, vVar4))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_76(Vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
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
		if (func_210() || !func_211(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, fParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_212(iParam3, 1);
	bVar1 = func_212(iParam3, 2);
	bVar2 = !func_212(iParam3, 4);
	bVar3 = func_212(iParam3, 8);
	bVar4 = !func_212(iParam3, 16);
	bVar5 = func_212(iParam3, 32);
	bVar6 = func_212(iParam3, 64);
	return func_213(iParam0, iParam1, bVar0, bVar1, bParam4, bVar2, bVar3, fParam5, fParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

float func_78(Vector3 vParam0, int iParam3, bool bParam4)
{
	if (!bParam4 || !ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return func_214(vParam0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
	}
	return 0.0f;
}

int func_79(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_215(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_216(iVar25, 0) && func_217(iVar25, joaat("CI_TAG_ITEM_MONEY")))
			{
				return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_80(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_218(iParam0);
		return func_219(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_81(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		PED::_REQUEST_PED_FACIAL_MOOD_THIS_FRAME(*uParam0, iParam1, 6);
	}
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 |= func_220(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_83(int iParam0, int iParam1, bool bParam2)
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

bool func_84(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!PED::DOES_GROUP_EXIST(*iParam0))
	{
		*iParam0 = PED::CREATE_GROUP(iParam1);
		if (PED::DOES_GROUP_EXIST(*iParam0))
		{
			PED::SET_GROUP_FORMATION(*iParam0, iParam2);
			PED::_0xD5BD1B5318A81994(*iParam0, bParam3);
			return true;
		}
	}
	return false;
}

int func_85(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_221(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_86(char* sParam0, var uParam1)
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

char* func_87(int iParam0)
{
	if (func_222(iParam0))
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

void func_88(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_223(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_224(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_225(iParam0->f_6, iParam0->f_5, 0);
			}
			func_226(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_227(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_89(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_228(iParam0, 4))
		{
			func_229(&(iParam0->f_6), 1, 1);
			func_26(iParam0, 4);
		}
	}
	else if (func_228(iParam0, 4))
	{
		func_230(iParam0, 4);
		func_26(iParam0, 14);
	}
}

bool func_90(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		case 4:
			return 105;
		case 8:
			return 78;
		case 16:
			return 51;
		case 32:
			return 41;
		case 64:
			return 108;
		case 128:
			return 44;
		case 256:
			return 53;
		case 512:
			return 84;
		case 1024:
			return 22;
		case 2048:
			return 73;
		case 4096:
			return 103;
		case 8192:
			return 18;
		case 16384:
			return 46;
		case 32768:
			return 0;
		case 65536:
			return 106;
		case 131072:
			return 47;
		case 262144:
			return 101;
		default:
			break;
	}
	return -1;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		case 4:
			return -520696743;
		case 8:
			return -295901403;
		case 16:
			return -1445837674;
		case 32:
			return -75278298;
		case 64:
			return -675249331;
		case 128:
			return -1822243680;
		case 256:
			return -1307199059;
		case 512:
			return -17701163;
		case 1024:
			return -172170798;
		case 2048:
			return 1836682179;
		case 4096:
			return -67934460;
		case 8192:
			return 410776537;
		case 16384:
			return -240986174;
		case 32768:
			return 1505721140;
		case 65536:
			return 2023114891;
		case 131072:
			return -30217677;
		case 262144:
			return 653209800;
		default:
			break;
	}
	return 0;
}

int func_93(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_231())
	{
		iVar2 = func_231();
	}
	iVar5 = func_232(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_233(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_233(iVar6) == 0)
			{
				return func_234(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_233(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_233(iVar6) == 0)
			{
				return func_234(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_234(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_94(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_235(iParam0);
	if (iVar0 != 0)
	{
		func_236(iParam0, fParam1);
		return 1;
	}
	return 0;
}

int func_95(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_235(iParam0);
	if (iVar0 != 0)
	{
		*uParam1 = func_237();
		func_238(iParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_96(var uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;

	vVar0 = { func_239(uParam0) /*3*/ };
	iVar3 = func_182(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_97(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS((*uParam1)[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0.0f;
	}
}

void func_98(var uParam0)
{
	func_6(uParam0, 1);
	func_240(uParam0, 20);
}

bool func_99(int iParam0, int iParam1)
{
	if (!func_201(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_1 & iParam1 != 0;
}

void func_100(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_201(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_241())
	{
		func_242(1);
	}
	func_243(iParam2, uParam0->f_43);
	func_244(iParam2, 0, 0, 0, 0);
	if (func_245(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_173(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_246(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_101(var uParam0)
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

void func_102(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 & func_247())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_99(uParam0->f_3, (1 << 18)))
	{
		if (uParam0->f_5 & (1 << 11) != 0)
		{
			func_100(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_101(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_248(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_249(uParam0, bVar0);
		func_250(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432, 0, 90.0f, 0, uParam0->f_98[iParam1]);
		if (func_251(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_100(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_101(&(uParam0->f_121));
		}
	}
}

bool func_103(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30.0f;
	fVar1 = 150.0f;
	if (func_62(uParam2->f_3, 1))
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
			if (func_252())
			{
				fVar0 = 15.0f;
			}
		}
		if (func_253(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_254(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_253(uParam2, fVar1))
		{
			if (!func_255(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_256(uParam2->f_3, 2) && func_257(2))
		{
			return false;
		}
		if (func_62(iParam0, (1 << 22)) || func_62(iParam0, (1 << 25)))
		{
			if (func_258(1))
			{
				return false;
			}
		}
	}
	if (func_259(Global_35))
	{
		return false;
	}
	if (func_260(0, 1, 1) && !func_261(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_62(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_262(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_254(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_263())
		{
			return false;
		}
		iVar2 = func_265(func_264());
		if (func_266(iVar2))
		{
			if (func_267(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_268(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_269(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_104(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_270(uParam0->f_51))
	{
		func_271(uParam0->f_51, 0);
		fVar0 = func_272(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, func_273());
		bVar1 = func_178(!func_62(uParam0->f_3, 1), 20.0f, -1.0f);
		uParam0->f_51.f_11 = func_275(iVar2, func_274(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_105(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_106(int iParam0, int iParam1)
{
	if (!func_105(iParam0))
	{
		return false;
	}
	return Global_1395482.f_2[iParam0] & iParam1 != 0;
}

int func_107(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_276(iParam2, 1, iVar0);
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
			if (func_277(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_278(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_279(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_278(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_280(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_278(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_281(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_278(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_254(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & (1 << 19) == 0))
		{
			if (!iParam2->f_1 & (1 << 14) != 0)
			{
				*iParam3 = (1 << 14);
				func_278(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_282(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_283(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_278(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_284(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_278(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_285(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_278(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_285(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_278(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_286(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_278(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & (1 << 18) != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20.0f)
			{
				if (func_287(&iParam0, iParam2))
				{
					*iParam3 = (1 << 12);
					func_278(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_288(iParam2, 4000))
				{
					if (func_289(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) & func_290(iParam2, iParam0) && func_291(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_278(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4.0f)
			{
				if (func_289(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) & func_290(iParam2, iParam0) && func_291(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_278(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & (1 << 17) == 0)
						{
							if (func_292(iParam0, Global_1935630.f_41))
							{
								func_293();
								*iParam3 = 2;
								func_278(iParam0, iParam2, *iParam3);
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
						if (func_292(iParam0, Global_1935630.f_41))
						{
							func_293();
							*iParam3 = 2;
							func_278(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10.0f)
			{
				if (func_294(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_295() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_293();
						*iParam3 = 2;
						func_278(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & (1 << 17) == 0)
				{
					if (func_296())
					{
						if (func_292(iParam0, Global_1935630.f_42))
						{
							func_293();
							*iParam3 = 2;
							func_278(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & (1 << 10) != 0)
		{
			if (func_297(iParam2, iParam0))
			{
				*iParam3 = (1 << 10);
				func_278(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & (1 << 11) != 0)
			{
				if (func_298(iParam0, iParam1, iParam2))
				{
					*iParam3 = (1 << 11);
					func_278(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_299(iParam0, iParam2))
					{
						*iParam3 = (1 << 13);
						func_278(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_300(iParam0, iParam2))
				{
					*iParam3 = (1 << 15);
					func_278(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12.0f)
		{
			if (*iParam2 & (1 << 20) != 0)
			{
				if (func_301(iParam2, 4000))
				{
					if (func_302(&iParam0, iParam2))
					{
						*iParam3 = (1 << 9);
						func_278(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & (1 << 10) != 0)
			{
				if (func_303(iParam0, iParam2))
				{
					*iParam3 = (1 << 16);
					iParam2->f_4 = 0;
					func_278(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_304(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_278(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_109(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_110(int iParam0, int iParam1)
{
	func_305(iParam0, iParam1);
}

void func_111(int iParam0, int iParam1)
{
	func_306(iParam0, iParam1);
}

void func_112(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_113(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

void func_114()
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(4, true, false);
}

bool func_115(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_307(iParam0, iParam1);
}

bool func_116(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_308(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_309(fParam0))
	{
		return false;
	}
	return true;
}

bool func_117(int iParam0)
{
	return func_109(iLocal_77, iParam0);
}

char* func_118(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			return func_312("BTR", func_310(iParam0), "AGGRO", func_311(iParam1));
		case 2:
			return func_312("BTR", func_310(iParam0), "AGGRO_B", func_311(iParam1));
		case 32:
			return func_312("BTR", func_310(iParam0), "AGGRO_HORSE", func_311(iParam1));
		case 64:
			return func_312("BTR", func_310(iParam0), "UAGGRO_A", func_311(iParam1));
		case 128:
			return func_312("BTR", func_310(iParam0), "UAGGRO_01", func_311(iParam1));
		case 256:
			return func_312("BTR", func_310(iParam0), "UAGGRO_02", func_311(iParam1));
		case 512:
			return func_312("BTR", func_310(iParam0), "UAGGRO_03", func_311(iParam1));
		case 4:
			return func_312("BTR", func_310(iParam0), "UAGGRO_A", func_311(iParam1));
		case 8:
			return func_312("BTR", func_310(iParam0), "UAGGRO_01", func_311(iParam1));
		case 16:
			return func_312("BTR", func_310(iParam0), "UAGGRO_02", func_311(iParam1));
		case 1024:
			return func_312("BTR", func_310(iParam0), "AREST_01", func_311(iParam1));
		case 2048:
			return func_312("BTR", func_310(iParam0), "AREST_02", func_311(iParam1));
		case 4096:
			return func_312("BTR", func_310(iParam0), "AREST_03", func_311(iParam1));
		case 8192:
			return func_312("BTR", func_310(iParam0), "AREST_01", func_311(iParam1));
		case 16384:
			return func_312("BTR", func_310(iParam0), "AREST_02", func_311(iParam1));
		case 32768:
			return func_312("BTR", func_310(iParam0), "AREST_03", func_311(iParam1));
		case 65536:
			return func_312("BTR", func_310(iParam0), "FIGHT_TO_PLR", func_311(iParam1));
		case 131072:
			return func_312("BTR", func_310(iParam0), "FIGHT_TO_BNTY", func_311(iParam1));
		case 262144:
			return func_312("BTR", func_310(iParam0), "FIGHT_TO_PLR", func_311(iParam1));
		case 524288:
			return func_312("BTR", func_310(iParam0), "FIGHT_TO_BNTY", func_311(iParam1));
		case 1048576:
			return func_312("BTR", func_310(iParam0), "THANK", func_311(iParam1));
		default:
			break;
	}
	return "INVALID DIALOGUE BIT";
}

bool func_119(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_313(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_120(int iParam0)
{
	if (!func_117(iParam0))
	{
		func_110(&iLocal_77, iParam0);
	}
}

void func_121()
{
	if ((!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_561[1])) && !ENTITY::IS_ENTITY_DEAD(sLocal_805[0 /*32*/].f_11))
	{
		if (func_152(uLocal_561[0], uLocal_561[1], 1, 1) > 15.0f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(sLocal_805[0 /*32*/].f_11, 1.501f);
		}
	}
}

void func_122()
{
	if (!func_126(128))
	{
		if (func_152(uLocal_561[0], Global_35, 1, 1) < 60.0f)
		{
			if (func_148(uLocal_561[2], Global_35, 128, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR")))
			{
				func_314(1891783641, uLocal_561[2], 1);
			}
		}
	}
}

bool func_123()
{
	if ((ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) || ENTITY::IS_ENTITY_DEAD(uLocal_561[1])) || ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		return false;
	}
	switch (iLocal_782)
	{
		case 0:
			if ((ENTITY::IS_ENTITY_DEAD(sLocal_805[0 /*32*/].f_11) && !iLocal_85[0]) || (ENTITY::IS_ENTITY_DEAD(sLocal_805[1 /*32*/].f_11) && !iLocal_85[1]))
			{
				func_315(&iLocal_782, 2);
				return false;
			}
			if (!func_316(uLocal_561[0]) || (!func_316(uLocal_561[1]) && !iLocal_88[1]))
			{
				func_315(&iLocal_782, 1);
				return false;
			}
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_561[2], sLocal_805[0 /*32*/].f_11) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_561[2], sLocal_805[1 /*32*/].f_11))
			{
				func_315(&iLocal_782, 6);
				return false;
			}
			break;
		case 1:
			if ((ENTITY::IS_ENTITY_DEAD(sLocal_805[0 /*32*/].f_11) && !iLocal_85[0]) || (ENTITY::IS_ENTITY_DEAD(sLocal_805[1 /*32*/].f_11) && !iLocal_85[1]))
			{
				func_315(&iLocal_782, 2);
				return false;
			}
			if (!func_316(uLocal_561[0]) && !func_317(uLocal_561[0], joaat("SCRIPT_TASK_MOUNT_ANIMAL")))
			{
				if (iLocal_85[0])
				{
					func_318(uLocal_561[0], sLocal_805[1 /*32*/].f_11, 0, 2.0f, -1);
				}
				else
				{
					func_318(uLocal_561[0], sLocal_805[0 /*32*/].f_11, 0, 2.0f, -1);
				}
			}
			if ((!iLocal_88[1] && !func_316(uLocal_561[1])) && !func_317(uLocal_561[1], joaat("SCRIPT_TASK_MOUNT_ANIMAL")))
			{
				func_318(uLocal_561[1], sLocal_805[1 /*32*/].f_11, 0, 2.0f, -1);
			}
			if (func_316(uLocal_561[0]) && (func_316(uLocal_561[1]) || iLocal_88[1]))
			{
				TASK::TASK_MOVE_IN_TRAFFIC(uLocal_561[0], 1.75f, 16, 0);
				func_315(&iLocal_782, 0);
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(sLocal_805[0 /*32*/].f_11) && !iLocal_85[0])
			{
				if (ENTITY::IS_ENTITY_DEAD(sLocal_805[1 /*32*/].f_11) && !iLocal_85[1])
				{
					func_315(&iLocal_782, 5);
				}
				else
				{
					func_315(&iLocal_782, 3);
				}
			}
			else if (ENTITY::IS_ENTITY_DEAD(sLocal_805[1 /*32*/].f_11) && !iLocal_85[1])
			{
				func_315(&iLocal_782, 4);
			}
			else
			{
				func_315(&iLocal_782, 0);
				return false;
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_DEAD(sLocal_805[1 /*32*/].f_11))
			{
				func_315(&iLocal_782, 5);
				return false;
			}
			if (PED::IS_PED_CARRYING_SOMETHING(uLocal_561[0]))
			{
				if (!func_317(uLocal_561[0], joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_ON_MOUNT")))
				{
					TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(uLocal_561[0], uLocal_561[2], sLocal_805[1 /*32*/].f_11, (1 << 30));
				}
			}
			else if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_561[2], sLocal_805[1 /*32*/].f_11))
			{
				iLocal_85[0] = 1;
				func_54(1, 1);
				func_315(&iLocal_782, 0);
			}
			else if (!func_317(uLocal_561[0], joaat("SCRIPT_TASK_PICKUP_CARRIABLE_ENTITY")))
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(uLocal_561[0], uLocal_561[2]);
			}
			return false;
		case 4:
			iLocal_85[1] = 1;
			func_54(1, 1);
			func_315(&iLocal_782, 0);
			return false;
		case 5:
			iLocal_85[0] = 1;
			func_54(0, 0);
			iLocal_85[1] = 1;
			func_54(1, 0);
			func_315(&iLocal_782, 7);
			break;
		case 6:
			if (ENTITY::IS_ENTITY_DEAD(sLocal_805[0 /*32*/].f_11) && ENTITY::IS_ENTITY_DEAD(sLocal_805[1 /*32*/].f_11))
			{
				func_315(&iLocal_782, 5);
				return false;
			}
			if (PED::IS_PED_CARRYING_SOMETHING(uLocal_561[0]))
			{
				if (!func_317(uLocal_561[0], joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_ON_MOUNT")))
				{
					if (ENTITY::IS_ENTITY_DEAD(sLocal_805[0 /*32*/].f_11))
					{
						TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(uLocal_561[0], uLocal_561[2], sLocal_805[1 /*32*/].f_11, (1 << 30));
					}
					else
					{
						TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(uLocal_561[0], uLocal_561[2], sLocal_805[0 /*32*/].f_11, (1 << 30));
					}
				}
			}
			else if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_561[2], sLocal_805[0 /*32*/].f_11))
			{
				func_315(&iLocal_782, 0);
			}
			else if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_561[2], sLocal_805[1 /*32*/].f_11))
			{
				iLocal_85[0] = 1;
				func_54(1, 1);
				func_315(&iLocal_782, 0);
			}
			else if (!func_317(uLocal_561[0], joaat("SCRIPT_TASK_PICKUP_CARRIABLE_ENTITY")))
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(uLocal_561[0], uLocal_561[2]);
			}
			return false;
		case 7:
			break;
	}
	return true;
}

bool func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iLocal_779)
	{
		case 0:
			func_319(&iLocal_779, 1);
			break;
		case 1:
			if (!func_75(sLocal_573.f_51, &uLocal_80, 1101004800, 1))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < vLocal_91.x)
			{
				if (!func_191(vLocal_91[iVar0 /*3*/]))
				{
					if (func_191(vLocal_116))
					{
						vLocal_116 = { vLocal_91[iVar0 /*3*/] /*3*/ };
					}
					else if (func_320(vLocal_91[iVar0 /*3*/], 1) < func_320(vLocal_116, 1))
					{
						vLocal_116 = { vLocal_91[iVar0 /*3*/] /*3*/ };
					}
				}
				iVar0++;
			}
			if (func_191(vLocal_116))
			{
				vLocal_116 = { Global_36 /*3*/ };
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vLocal_116, (1 << 30), 1.75f, 0, 0);
				TASK::TASK_MOVE_IN_TRAFFIC(0, 1.75f, 16, 0);
				func_321(uLocal_561[0], &iVar1, 0, 0, 1, 1);
				func_319(&iLocal_779, 2);
			}
			break;
		case 2:
			if (func_322(&sLocal_573, 1.0f, 80.0f, 55.0f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
			{
				func_137(&(sLocal_1004[0 /*75*/].f_21), 1, 0);
				func_137(&(sLocal_1004[1 /*75*/].f_21), 1, 0);
				func_323(&iLocal_969, ENTITY::GET_ENTITY_COORDS(uLocal_561[2], true, false), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f, "REBNT_ANIMAL_RESTRICTION");
				func_324(iLocal_969, 0);
				if (VOLUME::DOES_VOLUME_EXIST(iLocal_969))
				{
					PED::_ATTACH_VOLUME_TO_ENTITY(iLocal_969, uLocal_561[2], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
				}
				if (func_152(uLocal_561[0], uLocal_561[1], 1, 1) > 35.0f)
				{
					func_54(1, 1);
				}
				else if (!PED::IS_PED_IN_GROUP(uLocal_561[1]))
				{
					func_54(1, 1);
				}
				if (func_115(uLocal_561[0], 0, 1))
				{
					TASK::TASK_MOVE_IN_TRAFFIC(uLocal_561[0], 1.75f, 16, 0);
					PED::SET_PED_KEEP_TASK(uLocal_561[0], true);
				}
				func_33((1 << 23));
				func_319(&iLocal_779, 3);
			}
			else if (!func_317(uLocal_561[0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
			{
				if (func_325(uLocal_561[0]) && iLocal_782 == 0)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vLocal_116, (1 << 30), 1.75f, 0, 0);
					TASK::TASK_MOVE_IN_TRAFFIC(0, 1.75f, 16, 0);
					func_321(uLocal_561[0], &iVar2, 0, 0, 1, 1);
					func_319(&iLocal_779, 2);
				}
			}
			break;
		case 3:
			if (func_127(uLocal_561[0], 1, 1) < 35.0f)
			{
				func_319(&iLocal_779, 8);
				return true;
			}
			break;
		case 8:
			return true;
	}
	return false;
}

void func_125()
{
	if (((((!func_115(uLocal_561[0], 0, 1) || !func_115(uLocal_561[1], 0, 1)) || !func_115(uLocal_561[2], 0, 0)) || func_31((1 << 14))) || func_32(4, 2)) || sLocal_573.f_46)
	{
		return;
	}
	if (!func_123())
	{
		return;
	}
	if (func_31((1 << 21)) || func_31((1 << 22)))
	{
		if (func_326(&uLocal_973))
		{
			func_327(&uLocal_973);
		}
		return;
	}
	if (func_328(15.0f))
	{
		if (func_326(&uLocal_973) && func_329(&uLocal_973) < iLocal_82)
		{
			return;
		}
		if (!func_126(1))
		{
			if (func_148(uLocal_561[0], Global_35, 1, -4.0f, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR")))
			{
				func_330(uLocal_561[0], &uLocal_944);
				sLocal_573.f_45 = 1;
				iLocal_82 = 3000;
				func_327(&uLocal_973);
			}
		}
		else if (!func_126((1 << 25)))
		{
			if (func_331(iLocal_942, iLocal_572))
			{
				if (func_332(-4.0f) && func_334(uLocal_561[2], func_333(iLocal_942, iLocal_572, 0), joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, &(sLocal_805[2 /*32*/].f_23), 1, 1))
				{
					func_335((1 << 25));
					func_330(uLocal_561[2], &uLocal_944);
					func_128(&sLocal_573, uLocal_561[2], 0);
					func_314(1891783641, uLocal_561[2], 1);
					uLocal_565[2] = sLocal_573.f_181;
					iLocal_82 = 5000;
					func_327(&uLocal_973);
				}
			}
			else if (func_332(-4.0f) && func_148(uLocal_561[2], Global_35, (1 << 25), -4.0f, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR")))
			{
				func_335((1 << 25));
				func_330(uLocal_561[2], &uLocal_944);
				func_128(&sLocal_573, uLocal_561[2], 0);
				func_314(1891783641, uLocal_561[2], 1);
				uLocal_565[2] = sLocal_573.f_181;
				iLocal_82 = 5000;
				func_327(&uLocal_973);
			}
		}
		else if (!func_126(2))
		{
			if (func_148(uLocal_561[0], Global_35, 2, -3.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR")))
			{
				iLocal_82 = 7000;
				if (!iLocal_88[1])
				{
					func_330(uLocal_561[1], &uLocal_944);
					if (PED::DOES_GROUP_EXIST(iLocal_570))
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_561[1], 279, false);
						func_336(uLocal_561[1], iLocal_570);
					}
					func_337(uLocal_561[1], uLocal_561[0]);
					func_327(&uLocal_973);
				}
			}
		}
		else
		{
			func_33((1 << 14));
		}
	}
	else
	{
		if ((!func_31(1) && func_126(2)) && func_329(&uLocal_973) > iLocal_82)
		{
			if (PED::DOES_GROUP_EXIST(iLocal_570))
			{
				PED::SET_PED_AS_GROUP_MEMBER(uLocal_561[1], iLocal_570);
				PED::SET_PED_CONFIG_FLAG(uLocal_561[1], 279, true);
			}
			TASK::CLEAR_PED_TASKS(uLocal_561[1], true, false);
			func_33(1);
		}
		if ((AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[0]) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[1])) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[2]))
		{
			return;
		}
		if (!func_126(256))
		{
			if (iLocal_572 == 0)
			{
				if (func_148(uLocal_561[0], uLocal_561[2], 256, func_338(256), 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR")))
				{
					func_314(1891783641, uLocal_561[0], 1);
				}
			}
			else if (func_148(uLocal_561[2], uLocal_561[0], 256, func_338(256), 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR")))
			{
				func_314(1891783641, uLocal_561[2], 1);
			}
		}
		else if (!func_126((1 << 9)))
		{
			if (iLocal_572 == 0)
			{
				if (func_148(uLocal_561[2], uLocal_561[0], (1 << 9), func_338((1 << 9)), 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR")))
				{
					func_314(1891783641, uLocal_561[2], 1);
				}
			}
			else if (func_148(uLocal_561[0], Global_35, (1 << 9), func_338((1 << 9)), 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR")))
			{
				func_314(1891783641, uLocal_561[0], 1);
			}
		}
		else if (!func_126((1 << 10)))
		{
			if (iLocal_572 == 0)
			{
				func_148(uLocal_561[0], uLocal_561[2], (1 << 10), func_338((1 << 10)), 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
			}
			else
			{
				func_148(uLocal_561[2], uLocal_561[0], (1 << 10), func_338((1 << 10)), 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
			}
		}
		else if (!func_126((1 << 11)))
		{
			if (iLocal_572 == 0)
			{
				func_148(uLocal_561[2], uLocal_561[0], (1 << 11), func_338((1 << 11)), 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
			}
			else
			{
				func_148(uLocal_561[0], uLocal_561[2], (1 << 11), func_338((1 << 11)), 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
			}
		}
	}
}

bool func_126(int iParam0)
{
	return func_109(iLocal_76, iParam0);
}

float func_127(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_152(Global_35, iParam0, bParam1, bParam2);
}

void func_128(var uParam0, int iParam1, char* sParam2)
{
	if (!uParam0->f_179)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			uParam0->f_181 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_FRIENDLY"), iParam1);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				sParam2 = "RE_INTER_STRANGER";
			}
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_181, sParam2);
			uParam0->f_179 = 1;
		}
	}
}

bool func_129(int iParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return MAP::BLIP_ADD_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HIDDEN"));
	}
	return MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HIDDEN"));
}

void func_130(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_223((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_229(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_131()
{
	int iVar0;
	int iVar1;

	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_571, joaat("PLAYER"));
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && !iLocal_88[0])
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_561[0], 279, false);
		func_336(uLocal_561[0], iLocal_570);
		func_81(&(uLocal_561[0]), joaat("MOODANGRY"));
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (func_31((1 << 15)))
		{
			TASK::TASK_REACT(0, Global_35, Global_36, "Default_Brave", 1.0f, 0.0f, 4);
		}
		if (func_127(uLocal_561[0], 1, 1) < 20.0f && func_339(uLocal_561[0], Global_35, 0.0f) == 0)
		{
			TASK::TASK_MOVE_IN_TRAFFIC(0, 1.501f, 16, 1);
		}
		else
		{
			TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(0, Global_35, 1.75f, 16, 1);
		}
		func_321(uLocal_561[0], &iVar0, 0, 0, 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[1]) && !iLocal_88[1])
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_561[1], 279, false);
		func_336(uLocal_561[1], iLocal_570);
		func_81(&(uLocal_561[1]), joaat("MOODANGRY"));
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		if (func_31((1 << 15)))
		{
			TASK::TASK_REACT(0, Global_35, Global_36, "Default_Shocked", 1.0f, 0.0f, 4);
		}
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_321(uLocal_561[1], &iVar1, 0.4f, 0.4f, 1, 1);
	}
}

void func_132()
{
	int iVar0;
	int iVar1;

	if (iLocal_780 == 11 || !func_332(-2.0f))
	{
		return;
	}
	iVar0 = func_340(&uLocal_561, Global_36, 0, 1, 0, 1);
	iVar1 = iVar0;
	if (iVar1 == 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) || func_117((1 << 12)))
		{
			iVar1 = 1;
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(uLocal_561[1]) || func_117((1 << 15)))
	{
		iVar1 = 0;
	}
	switch (iLocal_780)
	{
		case 0:
			func_341(&iLocal_780, 1);
			break;
		case 1:
			if (func_342(iVar1))
			{
				func_341(&iLocal_780, 2);
			}
			break;
		case 2:
			if (func_343())
			{
				func_120((1 << 16));
				func_341(&iLocal_780, 3);
			}
			break;
		case 3:
			if (func_342(iVar1))
			{
				func_341(&iLocal_780, 4);
			}
			break;
		case 4:
			if (func_342(iVar1))
			{
				func_341(&iLocal_780, 5);
			}
			break;
		case 5:
			if (func_343())
			{
				func_120((1 << 17));
				func_341(&iLocal_780, 6);
			}
			break;
		case 6:
			if (func_342(iVar1))
			{
				func_341(&iLocal_780, 7);
			}
			break;
		case 7:
			if (func_343())
			{
				func_120((1 << 18));
				func_341(&iLocal_780, 8);
			}
			break;
		case 8:
			if (func_342(iVar1))
			{
				func_341(&iLocal_780, 9);
			}
			break;
		case 9:
			if (func_342(iVar1))
			{
				func_341(&iLocal_780, 10);
			}
			break;
		case 10:
			if (func_343())
			{
				func_120((1 << 19));
				func_341(&iLocal_780, 11);
			}
			break;
		case 11:
			break;
	}
}

int func_133()
{
	int iVar0;
	bool bVar1;

	if (func_115(uLocal_561[2], 0, 0))
	{
		iLocal_73 = func_344(uLocal_561[2]);
		if ((iLocal_73 == 0 && func_31(2)) || (!PED::IS_PED_HOGTIED(uLocal_561[2]) && !TASK::GET_IS_TASK_ACTIVE(uLocal_561[2], 3)))
		{
			func_33(4);
			iLocal_74 = 0;
			return 1;
		}
		if (iLocal_74 != iLocal_73)
		{
			if (func_31(32))
			{
				if (iLocal_572 == 1)
				{
					if (iLocal_73 == 10)
					{
						iVar0 = 0;
						bVar1 = false;
						ENTITY::_0xD46BF94C4C66FAB0(&iVar0, &bVar1, uLocal_561[2], 3);
						if ((func_143() && iVar0 == 1) && !bVar1)
						{
							func_33((1 << 17));
						}
						else
						{
							func_33((1 << 18));
						}
					}
				}
				func_327(&uLocal_970);
			}
		}
		if (!func_31((1 << 20)) && iLocal_73 != 7)
		{
			func_33((1 << 20));
		}
		if (!func_326(&uLocal_970))
		{
			func_327(&uLocal_970);
		}
		if ((func_116(2.5f, 1, 0, 0) && !PED::IS_PED_RAGDOLL(uLocal_561[2])) && func_31(32))
		{
			switch (iLocal_73)
			{
				case 3:
					iLocal_74 = 3;
					if (iLocal_572 == 1 && !func_31((1 << 30)))
					{
						func_81(&(uLocal_561[2]), joaat("MOODPANIC"));
						func_33((1 << 30));
					}
					if (func_345(&uLocal_970, 0.25f))
					{
						func_346(uLocal_561[2], Global_35, (1 << 15), (1 << 16), (1 << 17), 0.0f, 0, 0);
					}
					break;
				case 5:
					iLocal_74 = 5;
					if (iLocal_572 == 1 && !func_31((1 << 28)))
					{
						func_81(&(uLocal_561[2]), joaat("MOODNERVOUS"));
						func_33((1 << 28));
					}
					if (func_345(&uLocal_970, 2.0f))
					{
						func_346(uLocal_561[2], Global_35, (1 << 18), (1 << 19), (1 << 20), 0.0f, 0, 0);
					}
					break;
				case 10:
					iLocal_74 = 10;
					if (!func_31(2))
					{
						if (iLocal_572 == 1)
						{
							func_81(&(uLocal_561[2]), joaat("MOODPANIC"));
						}
						func_137(&(sLocal_1004[2 /*75*/].f_21), 0, 0);
						func_138(&(sLocal_1004[2 /*75*/]), 0);
						func_33(2);
					}
					break;
				case 7:
					iLocal_74 = 7;
					if (!func_31((1 << 20)))
					{
						if ((iLocal_572 == 1 && !func_31((1 << 29))) && func_126((1 << 24)))
						{
							func_81(&(uLocal_561[2]), joaat("MOODANGRY"));
							func_33((1 << 29));
						}
						if (func_345(&uLocal_970, 4.0f))
						{
							func_346(uLocal_561[2], Global_35, (1 << 22), (1 << 23), (1 << 24), -1073741824, 0, 1);
						}
					}
					break;
			}
		}
		func_347();
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_134()
{
	if (func_31(16))
	{
		if (func_326(&uLocal_979))
		{
			if (ENTITY::IS_ENTITY_DEAD(sLocal_805[0 /*32*/].f_11))
			{
				func_112(&uLocal_979);
			}
			else if (func_348(&uLocal_979) > 3.0f && func_152(uLocal_561[0], sLocal_805[0 /*32*/].f_11, 1, 0) > 5.0f)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_805[0 /*32*/].f_11, true);
				func_349(sLocal_805[0 /*32*/].f_11, &uLocal_81, 64, 0, 0, 10.0f, 3000, 0, 0);
				func_112(&uLocal_979);
			}
		}
	}
	else if (!func_115(uLocal_561[0], 0, 1) && !ENTITY::IS_ENTITY_DEAD(sLocal_805[0 /*32*/].f_11))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_805[0 /*32*/].f_11, false);
		func_327(&uLocal_979);
		func_33(16);
	}
}

void func_135()
{
	if (func_31((1 << 31)))
	{
		return;
	}
	func_350();
	func_351(&(uLocal_561[2]), 1);
	func_352();
	func_33((1 << 31));
}

bool func_136()
{
	int iVar0;

	if (func_152(Global_35, uLocal_561[0], 1, 1) > fLocal_83 && func_152(Global_35, uLocal_561[1], 1, 1) > fLocal_83)
	{
		func_48(&(uLocal_565[0]));
		func_48(&(uLocal_565[1]));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iVar0 != 2 && func_115(uLocal_561[iVar0], 0, 1))
			{
				TASK::TASK_SMART_FLEE_PED(uLocal_561[iVar0], Global_35, 1000.0f, -1, 0, 3.0f, 0);
				PED::SET_PED_KEEP_TASK(uLocal_561[iVar0], true);
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_137(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_353(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_138(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_112(&(iParam0->f_18));
}

void func_139(int iParam0, int iParam1)
{
	if (iParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		iParam0->f_8 = func_295();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_354(iParam0, 0);
	*iParam1 = 0;
	iParam0->f_16 = 0;
}

void func_140()
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!func_31((1 << 12)))
	{
		if (iLocal_73 != 7)
		{
			if (!ENTITY::IS_ENTITY_DEAD(sLocal_805[0 /*32*/].f_11))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(sLocal_805[0 /*32*/].f_11, true, false) /*3*/ };
				TASK::TASK_WANDER_IN_AREA(sLocal_805[0 /*32*/].f_11, vVar0, 20.0f, 3.5f, 3.5f, 0);
				func_33((1 << 12));
			}
		}
	}
	if (!func_31((1 << 13)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(sLocal_805[1 /*32*/].f_11))
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(sLocal_805[1 /*32*/].f_11, true, false) /*3*/ };
			TASK::TASK_WANDER_IN_AREA(sLocal_805[1 /*32*/].f_11, vVar3, 20.0f, 0.5f, 0.7f, 0);
			func_33((1 << 13));
		}
	}
}

void func_141()
{
	if (bLocal_84)
	{
		return;
	}
	bLocal_84 = true;
	func_355(1, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, uLocal_561[2], 0, 1065353216, 0);
}

void func_142()
{
	float fVar0;

	switch (iLocal_781)
	{
		case 0:
			func_327(&uLocal_982);
			func_356(&iLocal_781, 1);
			break;
		case 1:
			if (func_117(4))
			{
				fVar0 = 3.0f;
			}
			else
			{
				fVar0 = 4.0f;
			}
			if (func_357(&uLocal_982, fVar0))
			{
				func_139(&(sLocal_573.f_5), &iLocal_941);
				func_356(&iLocal_781, 2);
			}
			break;
		case 2:
			if (func_108(uLocal_561[2], 0, &(sLocal_573.f_5), &iLocal_941, 0, 0))
			{
				if (iLocal_941 == 2)
				{
					func_33((1 << 19));
				}
				func_33((1 << 11));
				func_139(&(sLocal_573.f_5), &iLocal_941);
				func_356(&iLocal_781, 3);
			}
			break;
		case 3:
			if (func_358())
			{
				func_327(&uLocal_982);
				func_359((1 << 11));
				func_356(&iLocal_781, 1);
			}
			break;
		case 4:
			break;
	}
}

bool func_143()
{
	bool bVar0;
	bool bVar1;

	if (func_31((1 << 18)))
	{
		return false;
	}
	else if (func_31((1 << 17)))
	{
		return true;
	}
	bVar0 = false;
	vLocal_119 = { ENTITY::GET_ENTITY_COORDS(uLocal_561[2], true, false) /*3*/ };
	func_360(&vLocal_119, 50, 10, 0);
	vLocal_122 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_119, ENTITY::GET_ENTITY_HEADING(Global_35), 0.0f, 2.6f, 0.0f) /*3*/ };
	func_360(&vLocal_122, 50, 10, 0);
	if (vLocal_119.z > vLocal_122.z)
	{
		bVar0 = func_361(vLocal_119.z, vLocal_122.z, 1060320051);
	}
	else
	{
		bVar0 = func_361(vLocal_122.z, vLocal_119.z, 1060320051);
	}
	if (bVar0)
	{
		vLocal_125 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_119, ENTITY::GET_ENTITY_HEADING(Global_35), 0.0f, -2.0f, 0.0f) /*3*/ };
		func_360(&vLocal_125, 50, 10, 0);
		if (vLocal_119.z > vLocal_125.z)
		{
			bVar0 = func_361(vLocal_119.z, vLocal_125.z, 1060320051);
		}
		else
		{
			bVar0 = func_361(vLocal_125.z, vLocal_119.z, 1060320051);
		}
	}
	if (!bVar0)
	{
		return false;
	}
	bVar1 = false;
	vLocal_128 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_119, ENTITY::GET_ENTITY_HEADING(Global_35), 0.0f, 6.0f, 0.0f) /*3*/ };
	func_360(&vLocal_128, 50, 10, 0);
	if (vLocal_119.z > vLocal_128.z)
	{
		bVar1 = func_361(vLocal_119.z, vLocal_128.z, 1.5f);
	}
	else
	{
		bVar1 = func_361(vLocal_128.z, vLocal_119.z, 1.5f);
	}
	if (!bVar1)
	{
		return false;
	}
	return true;
}

void func_144()
{
	if (func_39(iLocal_942))
	{
		func_38(uLocal_561[2], Global_35, 64, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
	}
	else if (!func_117(4))
	{
		func_38(uLocal_561[2], Global_35, 64, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
	}
	else if (!func_117(8))
	{
		func_38(uLocal_561[2], Global_35, 128, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
	}
	else if (!func_117(16))
	{
		func_38(uLocal_561[2], Global_35, 256, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
	}
	else
	{
		func_38(uLocal_561[2], Global_35, 64, -1073741824, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
	}
}

void func_145()
{
	Vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(uLocal_561[2], true, false) + Vector(-1.0f, 0.0f, 0.0f) /*3*/ };
	fVar3 = ENTITY::GET_ENTITY_HEADING(uLocal_561[2]);
	func_360(&vVar0, 50, 10, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_767, vVar0, 0.0f, 0.0f, fVar3, 2);
	TASK::_0x9EBD34958AB6F824(uLocal_561[2]);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_767, "CRIMINAL", uLocal_561[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_767, "player", Global_35, 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_767);
	func_33((1 << 9));
}

bool func_146()
{
	float fVar0;

	if (!func_115(uLocal_561[2], 0, 0))
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_767) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_767, false))
	{
		return true;
	}
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uLocal_561[2], iLocal_767))
	{
		return true;
	}
	fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_767);
	if (!func_117((1 << 20)))
	{
		if (func_39(iLocal_942))
		{
			if (fVar0 > 0.0193f)
			{
				func_120((1 << 20));
			}
		}
		else if (fVar0 > 0.0322f)
		{
			func_120((1 << 20));
		}
	}
	if (fVar0 > 0.589f)
	{
		func_147(1);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_767, "Criminal", uLocal_561[2]);
		func_362();
		return true;
	}
	return false;
}

void func_147(bool bParam0)
{
	int iVar0[3];
	Vector3 vVar4;
	bool bVar7;

	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		iVar0[0] = sLocal_805[0 /*32*/].f_11;
		iVar0[1] = sLocal_805[1 /*32*/].f_11;
		iVar0[2] = func_363(7);
		vVar4 = { ENTITY::GET_ENTITY_COORDS(uLocal_561[2], true, false) /*3*/ };
		bVar7 = -1;
		if (!bParam0)
		{
			bVar7 = true;
		}
		iLocal_569 = func_364(&iVar0, vVar4, 1, 0, bVar7, 0, -1082130432);
		if (func_152(uLocal_561[2], iLocal_569, 1, 1) > 35.0f)
		{
			iLocal_569 = 0;
		}
	}
}

bool func_148(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4, int iParam5)
{
	if (!func_115(iParam0, 0, 0) || func_126(iParam2))
	{
		return false;
	}
	if ((func_116(fParam3, 1, 0, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0)) || bParam4)
	{
		if (bParam4)
		{
			func_36(0);
		}
		if (func_119(iParam0, iParam1, func_365(iLocal_942, iLocal_572, iParam2), 0, -1082130432, 0, 0, 0, 1, 1, 1, iParam5, 1, 0, 0))
		{
			func_335(iParam2);
			return true;
		}
	}
	return false;
}

void func_149()
{
	int iVar0;
	int iVar1[3];
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;

	iVar0 = 3;
	if (func_366(61) && !func_367(61))
	{
		iVar1[0] = 61;
	}
	else
	{
		iVar1[0] = -1;
	}
	if (func_366(73) && !func_367(73))
	{
		iVar1[1] = 73;
	}
	else
	{
		iVar1[1] = -1;
	}
	if (func_366(43) && !func_367(43))
	{
		iVar1[2] = 43;
	}
	else
	{
		iVar1[2] = -1;
	}
	iVar6 = -1;
	fVar7 = 1E+10f;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		if (iVar1[iVar5] != -1)
		{
			fVar8 = BUILTIN::VDIST2(func_368(PLAYER::PLAYER_ID()), func_370(func_369(iVar1[iVar5]), 1));
			if (fVar8 < fVar7)
			{
				fVar7 = fVar8;
				iVar6 = iVar5;
			}
		}
		iVar5++;
	}
	if (iVar6 != -1)
	{
		iLocal_994 = iVar1[iVar6];
	}
	func_371();
}

void func_150(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_47(iParam0, 256);
	}
	else
	{
		func_46(iParam0, 256);
	}
}

bool func_151()
{
	float fVar0;

	if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		return false;
	}
	switch (iLocal_777)
	{
		case 0:
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[2], joaat("REL_PLAYER_LIKE"));
			func_327(&uLocal_976);
			func_81(&(uLocal_561[2]), joaat("MOODHAPPY"));
			func_372(&iLocal_777, 1);
			break;
		case 1:
			if (func_329(&uLocal_976) > 1500 && !TASK::IS_PED_GETTING_UP(uLocal_561[2]))
			{
				func_373(uLocal_561[2], Global_35, &uLocal_902, -1.0f, 0, 0, -1.0f, 5.0f, 1, 256, 0, 0, 1069547520, (1 << 30), 1050253722, 3.0f, 0, 0, 1, 1, -1082130432, -1082130432, 1);
				TASK::TASK_PLAY_ANIM(uLocal_561[2], sLocal_783[0 /*2*/], sLocal_783[0 /*2*/].f_1, 2.0f, -2.0f, -1, 67109392, 0.0f, false, (1 << 16), false, 0, false);
				func_157(&(sLocal_573.f_5), 1);
				func_372(&iLocal_777, 2);
			}
			break;
		case 2:
			func_374(uLocal_561[2], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_561[2], sLocal_783[0 /*2*/], sLocal_783[0 /*2*/].f_1, 1) && func_116(-3.0f, 1, uLocal_561[2], 1))
			{
				if (iLocal_994 != -1)
				{
					func_372(&iLocal_777, 3);
				}
				else
				{
					func_50(uLocal_561[2], 1);
					func_372(&iLocal_777, 5);
				}
			}
			break;
		case 3:
			func_374(uLocal_561[2], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (func_116(-3.0f, 1, uLocal_561[2], 1))
			{
				TASK::TASK_PLAY_ANIM(uLocal_561[2], sLocal_783[1 /*2*/], sLocal_783[1 /*2*/].f_1, 2.0f, -2.0f, -1, 67109392, 0.0f, false, (1 << 16), false, 0, false);
				func_372(&iLocal_777, 4);
			}
			break;
		case 4:
			func_374(uLocal_561[2], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_561[2], joaat("RE_BTR_FTH_V1_TH_STR")))
			{
				func_36(0);
				func_119(uLocal_561[2], Global_35, &(sLocal_131[1 /*213*/].f_34), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_372(&iLocal_777, 5);
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_561[2], sLocal_783[1 /*2*/], sLocal_783[1 /*2*/].f_1, 1))
			{
				func_372(&iLocal_777, 10);
			}
			break;
		case 5:
			func_374(uLocal_561[2], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (func_116(-1.0f, 1, 0, 0))
			{
				if (iLocal_994 != -1)
				{
					func_375(iLocal_994);
				}
				iLocal_994 = -1;
				func_372(&iLocal_777, 8);
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_561[2], sLocal_783[1 /*2*/], sLocal_783[1 /*2*/].f_1, 1))
			{
				func_50(uLocal_561[2], 1);
				func_147(0);
				func_168(1, 2);
				func_88(&(sLocal_1004[2 /*75*/].f_21[0 /*17*/]), func_87(7), &(sLocal_131[1 /*213*/].f_54), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
				func_353(&(sLocal_1004[2 /*75*/].f_21[0 /*17*/]), 1, 0);
				func_353(&(sLocal_1004[2 /*75*/].f_21[1 /*17*/]), 0, 0);
				func_138(&(sLocal_1004[2 /*75*/]), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_569) && !ENTITY::IS_ENTITY_DEAD(iLocal_569))
				{
					func_48(&(uLocal_565[2]));
					func_318(uLocal_561[2], iLocal_569, 0, 1.5f, -1);
					func_372(&iLocal_777, 9);
				}
				else
				{
					func_372(&iLocal_777, 10);
				}
			}
			break;
		case 9:
			if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_569) || ENTITY::IS_ENTITY_DEAD(iLocal_569)) || func_376(Global_35, iLocal_569, 0)) || func_376(uLocal_561[2], iLocal_569, 1))
			{
				func_372(&iLocal_777, 10);
			}
			break;
		case 10:
			func_48(&(uLocal_565[2]));
			func_377(uLocal_561[2]);
			func_327(&uLocal_988);
			if (PED::IS_PED_ON_MOUNT(uLocal_561[2]))
			{
				fVar0 = 2.0f;
			}
			else
			{
				fVar0 = 1.5f;
			}
			TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(uLocal_561[2], uLocal_561[0], fVar0, 0, 0);
			if (func_31(64))
			{
				func_378(7, 1, 1);
			}
			else if (func_31(128))
			{
				func_378(7, 2, 1);
			}
			else if (func_31(256))
			{
				func_378(7, 3, 1);
			}
			func_372(&iLocal_777, 11);
			break;
		case 11:
			if (func_357(&uLocal_988, 10.0f))
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 448, false);
				func_53(0);
				func_135();
				func_372(&iLocal_777, 12);
			}
			break;
		case 12:
			return true;
	}
	return false;
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

void func_153(int iParam0)
{
	float fVar0;

	if (func_32(4, 2) && iParam0 != iLocal_1003)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uLocal_561[iParam0]))
	{
		return;
	}
	if (func_31((1 << 21)))
	{
		fVar0 = -4.0f;
		if (iLocal_572 == 0 && !func_39(iLocal_942))
		{
			fVar0 = -5.0f;
		}
		if (func_116(fVar0, 1, 0, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			switch (iParam0)
			{
				case 0:
				case 1:
					if (!func_126(1))
					{
						func_148(uLocal_561[0], Global_35, 1, 0.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
					}
					else if (!func_126(2))
					{
						func_148(uLocal_561[0], Global_35, 2, 0.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
					}
					else if (iLocal_572 == 0 && !func_39(iLocal_942))
					{
						func_148(uLocal_561[0], Global_35, 4, 0.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
					}
					else
					{
						func_334(uLocal_561[0], "STOP_IN_THE_NAME_OF_THE_LAW", joaat("SPEECH_PARAMS_BEAT_SHOUTED_NORMAL"), Global_35, 1, &(sLocal_805[0 /*32*/].f_23), 1, 1);
					}
					func_353(&(sLocal_1004[0 /*75*/].f_21[1 /*17*/]), 1, 0);
					func_353(&(sLocal_1004[1 /*75*/].f_21[1 /*17*/]), 1, 0);
					func_138(&(sLocal_1004[0 /*75*/]), 0);
					func_138(&(sLocal_1004[1 /*75*/]), 0);
					break;
				case 2:
					if (!func_32(1, iParam0))
					{
						if (func_39(iLocal_942))
						{
							func_334(uLocal_561[iParam0], "RELIEVED_REACT", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), Global_35, 1, &(sLocal_805[iParam0 /*32*/].f_23), 1, 1);
						}
						else
						{
							func_148(uLocal_561[iParam0], Global_35, (1 << 28), 0.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
						}
						func_33((1 << 24));
						if (!func_31((1 << 25)))
						{
							func_353(&(sLocal_1004[2 /*75*/].f_21[1 /*17*/]), 1, 0);
							func_138(&(sLocal_1004[iParam0 /*75*/]), 0);
						}
					}
					break;
			}
			func_327(&uLocal_973);
			func_35(4, 2);
			func_359((1 << 21));
			func_359((1 << 22));
		}
	}
	else if (func_31((1 << 22)))
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && func_116(-4.0f, 1, 0, 0))
		{
			switch (iParam0)
			{
				case 0:
				case 1:
					func_168(8, 0);
					break;
				case 2:
					func_148(uLocal_561[iParam0], Global_35, (1 << 29), 0.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
					func_33((1 << 25));
					if (!func_31((1 << 24)))
					{
						func_353(&(sLocal_1004[2 /*75*/].f_21[0 /*17*/]), 1, 0);
						func_138(&(sLocal_1004[iParam0 /*75*/]), 0);
					}
					break;
			}
			func_327(&uLocal_973);
			func_35(4, 2);
			func_359((1 << 21));
			func_359((1 << 22));
		}
	}
	else if (func_379(&(sLocal_1004[iParam0 /*75*/])))
	{
		switch (iLocal_999[iParam0])
		{
			case 0:
				func_33((1 << 21));
				break;
			case 1:
				func_33((1 << 22));
				break;
			default:
				return;
		}
		sLocal_573.f_44 = 1;
		iLocal_1003 = iParam0;
		func_327(&uLocal_973);
		func_168(4, 2);
		func_137(&(sLocal_1004[0 /*75*/].f_21), 0, 0);
		func_137(&(sLocal_1004[1 /*75*/].f_21), 0, 0);
		func_137(&(sLocal_1004[2 /*75*/].f_21), 0, 0);
	}
}

void func_154()
{
	if (!sLocal_573.f_46)
	{
		iLocal_999[0] = func_380(&(uLocal_561[0]), &(sLocal_1004[0 /*75*/]), 30.0f, &(sLocal_1004[0 /*75*/].f_21), &(sLocal_573.f_192), 0, 1, 0, 0, iLocal_1230[0], 0, 0, 2, 1, -1082130432, 0);
		iLocal_999[1] = func_380(&(uLocal_561[1]), &(sLocal_1004[1 /*75*/]), 30.0f, &(sLocal_1004[1 /*75*/].f_21), &(sLocal_573.f_192), 0, 1, 0, 0, iLocal_1230[1], 0, 0, 2, 1, -1082130432, 0);
	}
	if (!func_32(2, 2))
	{
		iLocal_999[2] = func_380(&(uLocal_561[2]), &(sLocal_1004[2 /*75*/]), 30.0f, &(sLocal_1004[2 /*75*/].f_21), &(sLocal_573.f_192), 0, 1, 0, 0, iLocal_1230[2], 0, 0, 2, 1, -1082130432, 0);
	}
}

bool func_155(int iParam0)
{
	if (func_62(iParam0, 1))
	{
		return false;
	}
	return (1 == func_381(iParam0) || 2 == func_381(iParam0));
}

float func_156(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_157(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_46(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_47(&(uParam0->f_1), (1 << 11));
	}
}

void func_158(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_47(iParam0, 16);
	}
	else
	{
		func_46(iParam0, (1 << 26));
		func_46(iParam0, 16);
	}
}

void func_159(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_46(&(uParam0->f_1), 128);
	}
	else
	{
		func_47(&(uParam0->f_1), 128);
	}
}

void func_160(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_47(iParam0, (1 << 28));
	}
	else
	{
		func_46(iParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_47(iParam0, (1 << 30));
	}
	else
	{
		func_46(iParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_47(iParam0, (1 << 29));
	}
	else
	{
		func_46(iParam0, (1 << 29));
	}
}

int func_161(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

char* func_162(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_382(sParam1));
}

int func_163(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

int func_164(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/];
}

void func_165(int iParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::SET_LOOTING_FLAG(iVar0, 0, bParam1);
	PED::SET_LOOTING_FLAG(iVar0, 1, bParam1);
}

bool func_166(int iParam0, int iParam1, float fParam2)
{
	return func_383(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
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

void func_168(int iParam0, int iParam1)
{
	if (!func_32(iParam0, iParam1))
	{
		func_110(&(uLocal_995[iParam1]), iParam0);
	}
}

int func_169(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
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

void func_170(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_384(uParam0);
		func_385(iParam1, uParam2);
	}
	func_386(*uParam0, 1, bParam4);
}

void func_171(var uParam0, int iParam1)
{
	struct<15> /*120*/ sVar0;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	sVar0.f_14 = *uParam0;
	sVar0.f_0 = Global_35;
	sVar0.f_7 = func_264();
	sVar0.f_8 = 0;
	sVar0.f_11 = 100;
	sVar0.f_12 = iParam1;
	MISC::_CREATE_AI_MEMORY(&sVar0, 17);
}

void func_172(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && PED::IS_PED_IN_GROUP(iParam0))
	{
		PED::REMOVE_PED_FROM_GROUP(iParam0);
	}
}

char* func_173(int iParam0)
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

void func_174(int iParam0, int iParam1)
{
	if (!func_201(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 |= iParam1;
}

void func_175(int iParam0, bool bParam1)
{
	if (func_115(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_169(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

bool func_176(var uParam0, var uParam1)
{
	if (func_62(uParam0->f_3, (1 << 24)))
	{
		if (func_387(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_177(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_178(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_179(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_115(iParam0, 0, 1)))
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
			fVar2 = func_178(fParam2 >= 0.0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25.0f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_52(&iParam0);
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

void func_180(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_388(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_389(uParam0);
	func_390(uParam0);
	func_391(uParam0);
	if (!func_392(uParam0))
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_51.f_11))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(uParam0->f_51.f_11);
		}
		func_271(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_393();
	}
	if (!func_394(uParam0->f_3) && !func_62(uParam0->f_3, 256))
	{
		func_395(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_56(uParam0->f_173);
	func_56(uParam0->f_172);
}

void func_181(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_182(int iParam0, int iParam1)
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

void func_183(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_396() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_184(int iParam0)
{
	if (((func_185(iParam0, 1) && func_185(iParam0, 2)) && func_185(iParam0, 8)) && func_185(iParam0, (1 << 9)))
	{
		return true;
	}
	return false;
}

bool func_185(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

Vector3 func_186(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (!func_201(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (func_397(iParam0) == 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	iVar0 = (func_398(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_187(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;

	if (func_62(iParam0, 32))
	{
		if (func_14(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_399(Global_35, &(uParam1->f_12)) /*3*/ };
				if (!func_191(vVar1))
				{
					*uParam1 = { vVar1 /*3*/ };
				}
			}
		}
	}
	if (bParam2)
	{
		func_400(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_272(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0.0f, 0.0f, 0.0f, fVar4, fVar4, fVar4, func_273());
		if (func_401(Global_1310750[iParam0 /*111*/], (1 << 25)))
		{
			func_275(iVar0, func_274(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_275(iVar0, func_274(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_62(iParam0, 1))
		{
			func_402(*uParam1 + Vector(1.0f, 0.0f, 0.0f), 25.0f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_403(iParam0);
}

bool func_188(int iParam0, var uParam1)
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
			func_404(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_99(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_405(iParam0));
		fVar1 = 60.0f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_405(iParam0));
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

void func_189(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_406(iParam0))
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
			if (!func_62(iParam0, 1))
			{
				if (func_99(iParam0, 2))
				{
				}
			}
			func_407(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 2:
			func_408(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 3:
			func_408(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7.0f;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		default:
			break;
	}
	if (func_155(iParam0))
	{
		*fParam2 = 40000.0f;
	}
}

Vector3 func_190(bool bParam0, int iParam1, var uParam2, var uParam3)
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
	while (iVar0 < func_397(iParam1))
	{
		if (!func_409(iParam1, iVar0))
		{
			vVar4 = { func_186(iParam1, iVar0) /*3*/ };
			if (!func_191(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_196(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_410(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 /*3*/ };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_191(vVar4))
	{
	}
	return vVar1;
}

bool func_191(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

int func_192(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_44("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_193(int iParam0, Vector3 vParam1)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_397(iParam0))
	{
		vVar1 = { func_186(iParam0, iVar0) /*3*/ };
		if (func_411(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_194(var uParam0)
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

int func_195(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	vVar2 = { *uParam0 /*3*/ };
	func_412(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_413(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_191(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] /*3*/ };
				vVar8 = { MISC::GET_CLOSEST_POINT_ON_LINE(Global_36, vVar2, vVar5, true) /*3*/ };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35.0f * 35.0f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80.0f * 80.0f))
				{
					if (bParam4)
					{
						iVar1 = func_414(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] /*3*/ };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_192(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_196(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_189(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_62(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_197(var uParam0, bool bParam1)
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

bool func_198(int iParam0, var uParam1, var uParam2, struct<7> /*56*/ sParam3, bool bParam10)
{
	if (func_415(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_416(iParam0, uParam2))
	{
		return false;
	}
	if (!func_417(sParam3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_418(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_199(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_200(int iParam0, int iParam1, var uParam2)
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

bool func_201(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_202(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_203(int iParam0, int iParam1)
{
	if (func_419(iParam0))
	{
		return;
	}
	if (func_420(iParam0) == iParam1)
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

void func_204(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 0);
	if (bParam3)
	{
		func_46(&iParam1, (1 << 13));
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, iParam0);
	}
}

int func_205(int iParam0)
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

int func_206(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_421(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_422(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_422(), iVar3);
		if (func_423(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_207(int iParam0)
{
	func_110(iParam0, 256);
}

void func_208(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_424(&((uParam0[iVar0 /*32*/])->f_1));
		func_424(&((uParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

bool func_209(var uParam0)
{
	if (!func_425(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_425(uParam0->f_12))
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

bool func_210()
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

bool func_211(var uParam0, var uParam1, Vector3 vParam2, float fParam5, bool bParam6, int iParam7)
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
				sVar2 = { func_426(vParam2, fParam5, uParam0->f_15, uParam0->f_19) /*3*/ };
				sVar2.f_3 = func_427(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_428(uParam0->f_12, uParam0, sVar2, sVar2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_429(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_82(uParam0->f_11, 0);
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
					sVar2 = { func_426(vParam2, fParam5, uParam0->f_15, uParam0->f_19) /*3*/ };
					sVar2.f_3 = func_427(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_430(&(uParam0->f_22)));
					sVar2 = { func_426(vParam2, fParam5, uParam0->f_6, bVar1) /*3*/ };
					sVar2.f_3 = func_427(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_428(uParam0->f_1, uParam0, sVar2, sVar2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_431(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_432(*uParam1, &(uParam0->f_23), 0);
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

bool func_212(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_213(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_433(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_433(iVar4) && iVar4 != iVar0)
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
	if (func_396() == -1 && !func_434(iVar0))
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
				if (func_434(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_433(iVar0))
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
		func_435(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_436(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_437(iVar0))
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

float func_214(Vector3 vParam0, Vector3 vParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_191(vParam3))
	{
		return 0.0f;
	}
	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, 1.0f, 1, &vVar0, &vVar3, &uVar9, &uVar10, &uVar11, false))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam3, vVar0, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vParam3, vVar3, true))
		{
			vVar6 = { vVar0 /*3*/ };
		}
		else
		{
			vVar6 = { vVar3 /*3*/ };
		}
		return func_438(vParam0, vVar6, 1);
	}
	return func_438(vParam3, vVar6, 1);
}

bool func_215(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_216(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_439(iParam0);
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
		if (!func_440(iParam0, 1))
		{
			return false;
		}
	}
	return func_441(iParam0, 0, bParam2) >= iParam1;
}

bool func_216(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_217(int iParam0, int iParam1)
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

int func_218(int iParam0)
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

bool func_219(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_220(int iParam0)
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

bool func_221(int iParam0, var uParam1)
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

bool func_222(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
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
	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_224(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_442(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_225(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_442(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_226(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_442(iParam0);
	if (bParam1)
	{
		func_443(iParam0, 4);
		func_444(iVar0, 1);
		func_445(iVar0, 1);
	}
	else
	{
		func_446(iParam0, 4);
		func_445(iVar0, 0);
	}
}

void func_227(int* iParam0, char* sParam1)
{
	if (func_223(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_225(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_230(iParam0, 1);
}

bool func_228(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_229(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_223(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_442(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_447(iVar0);
	*uParam0 = 0;
}

void func_230(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_231()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	return iParam2 & 31 | BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) | BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

int func_233(int iParam0)
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

int func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_448(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_231())
	{
		return -1;
	}
	iVar0 = func_232(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_449(iVar1, 0);
	func_450(iVar1, 0);
	func_451(iVar1, 0);
	func_452(iVar1, 0);
	func_453(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_454(iVar1, iParam4);
	}
	return iVar1;
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 4:
			return 2;
		case 8:
			return 3;
		case 16:
			return 4;
		case 32:
			return 5;
		case 64:
			return 6;
		case 128:
			return 7;
		case 256:
			return 8;
		case 512:
			return 9;
		case 1024:
			return 10;
		case 2048:
			return 11;
		case 4096:
			return 12;
		case 8192:
			return 13;
		case 16384:
			return 14;
		case 32768:
			return 15;
		case 65536:
			return 16;
		case 131072:
			return 17;
		case 262144:
			return 18;
		default:
			break;
	}
	return 0;
}

void func_236(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_235(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Global_40.f_11959.f_20[iVar0] = fParam1;
}

float func_237()
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar6 = func_455();
	iVar4 = func_456(iVar6);
	iVar5 = func_457(iVar6);
	iVar3 = func_458(iVar5, iVar4);
	iVar2 = func_459(iVar6);
	iVar1 = func_460(iVar6);
	fVar0 = (((BUILTIN::TO_FLOAT(iVar1) + (BUILTIN::TO_FLOAT((iVar2 - 1)) * 24.0f)) + (BUILTIN::TO_FLOAT(iVar3) * 24.0f)) + ((BUILTIN::TO_FLOAT(iVar4) * 365.2422f) * 24.0f));
	return fVar0;
}

void func_238(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_235(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Global_40.f_11959[iVar0] = uParam1;
}

Vector3 func_239(var uParam0)
{
	return uParam0->f_51;
}

void func_240(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_241()
{
	return Global_1935436 == 2;
}

void func_242(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_243(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_62(iParam0, 2))
	{
		func_462(iParam0, func_461(iParam1));
	}
	else
	{
		func_464(iParam0, func_463());
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
	func_465(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_466(iParam0, 0);
	func_467(iParam0);
	func_468(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
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
	if (!func_62(iParam0, 16))
	{
		func_244(iParam0, 0, 0, 0, 0);
	}
}

void func_244(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_469() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_201(iVar1) && !func_62(iVar1, iParam2)) && (!bParam3 || !func_261(iVar1))) && (!bParam4 || !func_470(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_471(iVar0);
			}
		}
		iVar0++;
	}
}

int func_245(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_246(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_401(Global_1310750[uParam0->f_3 /*111*/], (1 << 24)))
	{
		if (bParam2)
		{
			if (func_62(uParam0->f_3, (1 << 30)))
			{
				func_472(2, -1, 0, 0, 0);
			}
			else
			{
				func_472(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_472(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_473(1, uParam0->f_177))
				{
					func_474(16, uParam0->f_177);
					func_475(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_476(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_472(8, -1, 0, 0, 0);
	}
}

int func_247()
{
	if (func_433(Global_1935630.f_44))
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
		else if (func_477())
		{
			return 1;
		}
	}
	return 0;
}

bool func_248(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_249(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1.0f)
	{
		if (func_62(uParam0->f_3, (1 << 10)))
		{
			fVar0 = 95.0f;
		}
		else if (func_62(uParam0->f_3, (1 << 11)))
		{
			fVar0 = 80.0f;
		}
		else if (func_62(uParam0->f_3, (1 << 12)))
		{
			fVar0 = 65.0f;
		}
		else if (func_62(uParam0->f_3, (1 << 13)))
		{
			fVar0 = 55.0f;
		}
		else if (func_62(uParam0->f_3, (1 << 14)))
		{
			fVar0 = 30.0f;
		}
		else
		{
			fVar0 = 85.0f;
		}
		if (func_62(uParam0->f_3, 1))
		{
		}
		else if (func_62(uParam0->f_3, 2))
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

int func_250(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_478(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_479(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_480() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0.0f;
	}
	return 1;
}

bool func_251(var uParam0, int iParam1, float fParam2)
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
	func_101(uParam0);
	return true;
}

bool func_252()
{
	return (Global_1894899 & 1 != 0 && func_264() != -1);
}

bool func_253(var uParam0, float fParam1)
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

int func_254(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_481(bParam1, bParam2, bParam3);
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

bool func_255(int iParam0)
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
	iVar0 = func_460(func_455());
	if (func_2(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_2(iParam0, (1 << 12)))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_2(iParam0, (1 << 10)))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_2(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, (1 << 9)))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, (1 << 13)))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, (1 << 11)))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_2(iParam0, (1 << 14)))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, (1 << 15)))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, (1 << 16)))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_256(int iParam0, int iParam1)
{
	return func_245(iParam0) & iParam1 != 0;
}

bool func_257(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
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
	if (iParam0 & 1 == 1 && func_482(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_483(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_484(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_485(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_486(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_487(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_488(iVar3))
	{
		return true;
	}
	return false;
}

bool func_258(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_489(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_259(int iParam0)
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

bool func_260(int iParam0, bool bParam1, bool bParam2)
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
		if (func_490())
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
		iVar0 = func_491(Global_1898164.f_1[0 /*5*/]);
		if (func_492(iVar0) && func_493(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_90(Global_1898164.f_1[0 /*5*/]))
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

bool func_261(int iParam0)
{
	if (!func_201(iParam0))
	{
		return false;
	}
	if (func_494(64) && func_495(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_262(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_496(iVar0) | func_497(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_263()
{
	return Global_1894899 & 4 != 0;
}

int func_264()
{
	return Global_1894899.f_2;
}

int func_265(int iParam0)
{
	if (!func_498(iParam0))
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

bool func_266(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_267(Vector3 vParam0, int iParam3)
{
	if (!func_266(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_268(Vector3 vParam0)
{
	float fVar0;

	if (func_191(vParam0))
	{
		return false;
	}
	fVar0 = func_178(func_252(), 6.0f, 22.0f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, (1 << 14));
}

bool func_269(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_327(uParam0);
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
		func_327(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_326(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_345(uParam0, fParam2))
		{
			return true;
		}
		if (func_326(uParam0))
		{
			func_112(uParam0);
		}
	}
	return false;
}

bool func_270(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

void func_271(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_191(vParam0))
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
			if (func_411(vVar2, vParam0, 2.0f, 1))
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

float func_272(int iParam0)
{
	if (!func_201(iParam0))
	{
		return 0.0f;
	}
	if (!func_499(iParam0))
	{
		return 0.0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_273()
{
	return "unnamed";
}

char* func_274(int iParam0)
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

int func_275(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_402(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_276(int iParam0, bool bParam1, int iParam2)
{
	func_500(iParam2);
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
		iParam0->f_13 = func_501(0);
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
							func_47(iParam0, (1 << 25));
						}
					}
					else if (!*iParam0 & (1 << 13) != 0)
					{
						if (func_258(1))
						{
							func_47(iParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_258(1) || *iParam0 & (1 << 13) != 0))
				{
					func_46(iParam0, (1 << 25));
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
			if (func_502(iParam0))
			{
				iParam0->f_15 = func_295();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_295() - iParam0->f_15) > 500)
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
	func_503(iParam0);
}

bool func_277(int iParam0, int iParam1)
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
			if (!func_504(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_505(iParam0, iVar2) <= func_506(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		iParam1->f_10 = iParam0;
	}
	if (func_507(iParam2, 1, 1, 1, 0))
	{
		func_47(iParam1, (1 << 11));
	}
	iParam1->f_16 = iParam2;
	func_354(iParam1, 1);
	func_393();
}

bool func_279(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_508(iParam0, !*iParam1 & (1 << 28) != 0, !*iParam1 & (1 << 29) != 0, !*iParam1 & (1 << 30) != 0, 0, 0))
		{
			if (iParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (iParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_509(iParam1);
			if (func_510(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_511(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_354(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_354(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_280(int iParam0, int iParam1, int iParam2)
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
	if (func_512(iParam1, !*iParam2 & (1 << 28) != 0, !*iParam2 & (1 << 29) != 0, !*iParam2 & (1 << 30) != 0, 0))
	{
		if (iParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (iParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_509(iParam2);
		if (func_510(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_511(iParam2)
				{
					func_354(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_281(int iParam0, int iParam1)
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
	if (func_504(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_511(iParam1)
		{
			fVar3 = func_509(iParam1);
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

bool func_282(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_295();
	iVar1 = (iVar0 - iParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_283(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_513(iParam2);
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
			if (func_291(iParam2, iParam1))
			{
				func_354(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_284(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < (float)func_514(iParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_291(iParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_354(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_285(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_515(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_354(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_354(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_516(iParam1, vVar0, vVar4))
					{
						func_354(iParam2, 1);
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
					func_354(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_516(iParam1, vVar0, vVar7))
					{
						func_354(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_286(int iParam0, int iParam1)
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
		if (!func_504(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_517(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_518(Global_1935630.f_34[iVar0]))
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
			if (func_519(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_520(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_521(iParam1, iParam0, fVar1, iVar0))
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

bool func_287(int iParam0, int iParam1)
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

bool func_288(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_295();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_289(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_522(iVar0, &iVar2))
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
	if (func_523(iVar0, iParam0))
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

int func_290(int iParam0, int iParam1)
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

bool func_291(int iParam0, int iParam1)
{
	if (func_524(iParam0))
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

bool func_292(int iParam0, int iParam1)
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

void func_293()
{
}

bool func_294(int iParam0, int iParam1)
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
		if (func_525(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_295();
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
						if (func_526(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_295();
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

int func_295()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_296()
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
	if ((func_295() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_297(int iParam0, int iParam1)
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
	fVar0 = func_506(iParam0);
	if (iParam0->f_12 > func_527(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_528(iParam1);
	iVar1 = func_529(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_298(int iParam0, int iParam1, int iParam2)
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
	return func_530(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_299(int iParam0, int iParam1)
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
		if (func_531(iParam0, iParam1, 1))
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
					if (!func_532(iParam1, iParam0))
					{
						if (func_526(iVar4, Global_36, 1) < 7.0f)
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

bool func_300(int iParam0, int iParam1)
{
	if (!func_533(0))
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

bool func_301(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_295();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_302(int iParam0, int iParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_303(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_295();
	}
	else if (func_295() - iParam1->f_4) > func_534(iParam1)
	{
		return func_535(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_304(int iParam0, int iParam1)
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

void func_305(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

void func_306(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

bool func_307(int iParam0, int iParam1)
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
	if (func_109(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_109(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_109(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_109(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_109(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_109(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_109(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_109(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_308(int iParam0, bool bParam1)
{
	if (func_115(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_309(float fParam0)
{
	if (func_536(1))
	{
		return true;
	}
	if (func_326(&uLocal_0) && !func_357(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

char* func_310(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MTN";
		case 3:
			return "FTH";
		case 6:
			return "FTH";
		case 9:
			return "MTN";
		case 10:
			return "FTH";
		default:
			break;
	}
	return "INVALID";
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		default:
			break;
	}
	return -1;
}

char* func_312(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	char cVar0[64];
	char cVar8[32];

	strcpy_s(&cVar0, 64, "RE_");
	strcpy_s(&cVar8, 32, sParam1);
	strcat_s(&cVar0, 64, sParam0);
	strcat_s(&cVar0, 64, "_");
	strcat_s(&cVar0, 64, &cVar8);
	if (iParam3 >= 0)
	{
		strcat_s(&cVar0, 64, "_V");
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		strcat_s(&cVar0, 64, "_ALL");
	}
	strcat_s(&cVar0, 64, "_");
	strcat_s(&cVar0, 64, sParam2);
	return func_537(cVar0);
}

int func_313(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_252())
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
				if (func_127(iParam0, 1, 1) > fParam4)
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
			func_327(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_538(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_539(func_334(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_314(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam0, iParam1);
}

void func_315(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_316(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_317(int iParam0, int iParam1)
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

int func_318(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
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

void func_319(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

float func_320(Vector3 vParam0, int iParam3)
{
	return func_526(Global_35, vParam0, iParam3);
}

void func_321(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_322(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_249(uParam0, bVar1);
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
	if (uParam0->f_178 & func_247())
	{
		bVar1 = true;
		fVar3 = func_178(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_250(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432, 1, 90.0f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_250(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432, 1, 90.0f, 0, 0);
		}
		if (func_251(&(uParam0->f_121), iParam4, fParam1))
		{
			func_101(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_182(uParam0->f_3, uParam0->f_185), 0);
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
						func_100(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_101(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_182(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_323(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_324(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, 231, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, 231, (1 << 14), 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(231, (1 << 14), 0, -1, -1, iParam0);
	}
}

bool func_325(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_326(var uParam0)
{
	return func_540(*uParam0, 1);
}

void func_327(var uParam0)
{
	func_541(uParam0, 0.0f);
}

bool func_328(float fParam0)
{
	if (func_127(uLocal_561[0], 1, 1) < fParam0 || func_127(uLocal_561[1], 1, 1) < fParam0)
	{
		return true;
	}
	return false;
}

int func_329(var uParam0)
{
	if (!func_326(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_542(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_295() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

void func_330(int iParam0, var uParam1)
{
	if (func_115(iParam0, 0, 0))
	{
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iParam0, uParam1);
	}
}

bool func_331(int iParam0, int iParam1)
{
	if (!func_39(iParam0) && iParam1 == 0)
	{
		return false;
	}
	return true;
}

bool func_332(float fParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[2]) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[2]))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[0]))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[1]) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[1]))
	{
		return false;
	}
	return func_116(fParam0, 1, 0, 0);
}

char* func_333(int iParam0, int iParam1, int iParam2)
{
	if (func_39(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam2)
				{
					case 0:
						return "PANIC_HELP";
					case 1:
						return "SCARED_HELP";
					case 2:
						return "GENERIC_FRIGHTENED_HIGH";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam2)
				{
					case 0:
						return "PANIC_HELP";
					case 1:
						return "SCARED_HELP";
					case 2:
						return "GENERIC_FRIGHTENED_HIGH";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam2)
				{
					case 0:
						return "PANIC_HELP";
					case 1:
						return "SCARED_HELP";
					case 2:
						return "GENERIC_FRIGHTENED_HIGH";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam2)
				{
					case 0:
						return "PANIC_HELP";
					case 1:
						return "LAW_TATTLE_NEUTRAL";
					case 2:
						return "SCARED_HELP";
					default:
						break;
				}
				break;
		}
	}
	return "SCARED_HELP";
}

bool func_334(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_543(iParam0, &sVar0);
}

void func_335(int iParam0)
{
	if (!func_126(iParam0))
	{
		func_110(&iLocal_76, iParam0);
	}
}

void func_336(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::_0x0455546F23FF08E4(iParam1))
	{
		if (PED::_IS_PED_GROUP_LEADER(iParam0, iParam1))
		{
			func_544(iParam1);
		}
		else
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
	}
}

void func_337(int iParam0, int iParam1)
{
	if (!func_115(iParam0, 0, 1) || !func_115(iParam1, 0, 1))
	{
		return;
	}
	TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iParam1, Global_35, 0, -1, 0.5f, 1.75f, 12);
}

float func_338(int iParam0)
{
	if (func_39(iLocal_942))
	{
		switch (iLocal_572)
		{
			case 0:
				switch (iParam0)
				{
					case 256:
						return -2.0f;
					case 512:
						return -3.5f;
					case 1024:
						return -5.5f;
					case 2048:
						return -2.0f;
					default:
						break;
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 256:
						return -2.0f;
					case 512:
						return -4.5f;
					case 1024:
						return -4.5f;
					case 2048:
						return -4.25f;
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iLocal_572)
		{
			case 0:
				switch (iParam0)
				{
					case 256:
						return -4.0f;
					case 512:
						return -3.5f;
					case 1024:
						return -3.5f;
					case 2048:
						return -4.0f;
					default:
						break;
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 256:
						return -4.0f;
					case 512:
						return -3.5f;
					case 1024:
						return -3.5f;
					case 2048:
						return -3.5f;
					default:
						break;
				}
				break;
		}
	}
	return -2.0f;
}

int func_339(int iParam0, int iParam1, float fParam2)
{
	Vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) /*3*/ };
	return func_545(iParam0, vVar0, fParam2);
}

int func_340(var uParam0, Vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *uParam0)
	{
		iParam7 = (*uParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam4 != (*uParam0)[iVar0] && (!bParam5 || (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[iVar0]))))
		{
			fVar3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0], true, false), vParam1);
			if (iVar1 < 0 || fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < 0)
	{
	}
	return iVar1;
}

void func_341(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_117((1 << 10)))
			{
				return func_38(uLocal_561[0], Global_35, (1 << 10), -2.0f, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
			}
			else if (!func_117((1 << 11)))
			{
				return func_38(uLocal_561[0], Global_35, (1 << 11), 3.0f, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
			}
			else if (!func_117((1 << 12)))
			{
				return func_38(uLocal_561[0], Global_35, (1 << 12), 3.0f, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
			}
			break;
		case 1:
			if (func_39(iLocal_942) && iLocal_572 == 1)
			{
				if (!func_117((1 << 13)))
				{
					if (func_332(0.0f))
					{
						if (func_334(uLocal_561[1], "RE_BTR_FTH_V2_AREST", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, &(sLocal_805[1 /*32*/].f_23), 1, 1))
						{
							func_120((1 << 13));
							func_327(&uLocal_991);
							return true;
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
				}
				else if (!func_117((1 << 14)))
				{
					if (func_357(&uLocal_991, 8.0f))
					{
						if (func_334(uLocal_561[1], "RE_BTR_FTH_V2_AREST", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, &(sLocal_805[1 /*32*/].f_23), 2, 1))
						{
							func_120((1 << 14));
							func_327(&uLocal_991);
							return true;
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
				}
				else if (!func_117((1 << 15)))
				{
					if (func_357(&uLocal_991, 10.0f))
					{
						if (func_334(uLocal_561[1], "RE_BTR_FTH_V2_AREST", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, &(sLocal_805[1 /*32*/].f_23), 3, 1))
						{
							func_120((1 << 15));
							return true;
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
				}
			}
			else if (!func_117((1 << 13)))
			{
				return func_38(uLocal_561[1], Global_35, (1 << 13), -2.0f, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
			}
			else if (!func_117((1 << 14)))
			{
				return func_38(uLocal_561[1], Global_35, (1 << 14), 3.0f, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
			}
			else if (!func_117((1 << 15)))
			{
				return func_38(uLocal_561[1], Global_35, (1 << 15), 3.0f, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
			}
			break;
	}
	return true;
}

bool func_343()
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		return true;
	}
	if (!func_39(iLocal_942) && iLocal_572 == 0)
	{
		if (!func_117((1 << 16)))
		{
			return func_38(uLocal_561[2], Global_35, (1 << 16), -1073741824, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
		}
		else if (!func_117((1 << 17)))
		{
			return func_38(uLocal_561[2], Global_35, (1 << 17), -1073741824, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
		}
		else if (!func_117((1 << 18)))
		{
			return func_38(uLocal_561[2], Global_35, (1 << 18), -1073741824, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
		}
		else if (!func_117((1 << 19)))
		{
			return func_38(uLocal_561[2], Global_35, (1 << 19), -1073741824, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
		}
	}
	if (!func_117((1 << 16)))
	{
		if (func_332(2.0f))
		{
			if (func_334(uLocal_561[2], func_546(iLocal_942, iLocal_572, 0), joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, &(sLocal_805[2 /*32*/].f_23), func_547(iLocal_942, iLocal_572, 0), 1))
			{
				return true;
			}
		}
	}
	else if (!func_117((1 << 17)))
	{
		if (func_332(2.0f))
		{
			if (func_334(uLocal_561[2], func_546(iLocal_942, iLocal_572, 1), joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, &(sLocal_805[2 /*32*/].f_23), func_547(iLocal_942, iLocal_572, 1), 1))
			{
				return true;
			}
		}
	}
	else if (!func_117((1 << 18)))
	{
		if (func_332(2.0f))
		{
			if (func_334(uLocal_561[2], func_546(iLocal_942, iLocal_572, 2), joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, &(sLocal_805[2 /*32*/].f_23), func_547(iLocal_942, iLocal_572, 2), 1))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_344(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0);
		if (iVar0 == 1)
		{
			return iVar0;
		}
		else if (PED::IS_PED_HOGTIED(iParam0))
		{
			return iVar0;
		}
	}
	return 0;
}

bool func_345(var uParam0, float fParam1)
{
	if (!func_326(uParam0))
	{
		return false;
	}
	if (func_348(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_346(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, bool bParam6, bool bParam7)
{
	if (func_32(4, 2))
	{
		return;
	}
	if (!bParam7 && func_31((1 << 11)))
	{
		return;
	}
	if (!func_126(iParam2))
	{
		func_148(iParam0, iParam1, iParam2, fParam5, bParam6, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
	}
	else if (!func_126(iParam3))
	{
		func_148(iParam0, iParam1, iParam3, fParam5, bParam6, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
	}
	else if (!func_126(iParam4))
	{
		func_148(iParam0, iParam1, iParam4, fParam5, bParam6, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
	}
}

void func_347()
{
	bool bVar0;
	float fVar1;

	if (iLocal_73 == 5)
	{
		bVar0 = true;
	}
	if (iLocal_73 == 7)
	{
		if (func_325(Global_35) && func_548(Global_35) == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ENTITY::GET_ENTITY_ATTACHED_TO(uLocal_561[2])))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_326(&uLocal_985) && !func_542(&uLocal_985))
		{
			func_549(&uLocal_985);
		}
		return;
	}
	if (func_326(&uLocal_985))
	{
		if (func_542(&uLocal_985))
		{
			func_550(&uLocal_985);
		}
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[2]))
		{
			fVar1 = 15.0f;
			if (iLocal_73 == 5)
			{
				fVar1 = 15.0f;
			}
			if (func_357(&uLocal_985, fVar1))
			{
				func_135();
				func_40(&iLocal_776, 13);
			}
		}
	}
	else
	{
		func_327(&uLocal_985);
	}
}

float func_348(var uParam0)
{
	if (!func_326(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_542(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_480() - uParam0->f_1);
}

int func_349(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_109(*iParam1, 128))
	{
		if (!func_317(iParam0, joaat("SCRIPT_TASK_PICKUP_CARRIABLE_ENTITY")))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_109(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_551(iVar2))
			{
				return 0;
			}
			if (!func_317(iParam0, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL")))
			{
				if (fParam7 != 0.0f && fParam8 != 0.0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_552(iVar2, vVar5))
					{
						iParam4 = (1 << 17);
					}
					else
					{
						iParam4 = (1 << 18);
					}
					if (!func_109(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_2(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			func_110(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_109(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_109(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_551(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_2(iParam2, 2) && PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (!func_2(iParam2, (1 << 11)))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (func_2(iParam2, (1 << 13)))
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
		if (func_109(*iParam1, 2336))
		{
			if (!func_551(iVar2))
			{
			}
			if (func_553(iVar2, *iParam1))
			{
				func_111(iParam1, 32);
				func_111(iParam1, 256);
				func_111(iParam1, (1 << 11));
				func_110(iParam1, (1 << 9));
				func_110(iParam1, (1 << 10));
				func_110(iParam1, (1 << 12));
			}
			else
			{
				return 0;
			}
		}
		if (func_109(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_551(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_111(iParam1, 64);
			}
		}
		if (func_2(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_2(iParam2, (1 << 10)))) || func_2(iParam2, 8)) && !func_109(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_110(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_2(iParam2, (1 << 12))) && !func_109(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_110(iParam1, (1 << 11));
			func_110(iParam1, (1 << 12));
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_2(iParam2, 32)) && !func_109(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_110(iParam1, 256);
			func_110(iParam1, (1 << 10));
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_110(iParam1, 64);
		}
		else if (!func_2(iParam2, 1))
		{
			if (!func_2(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, true, 0);
			}
			if (fParam7 != 0.0f && fParam8 != 0.0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_552(iVar2, vVar8))
				{
					iParam4 = (1 << 17);
				}
				else
				{
					iParam4 = (1 << 18);
				}
				if (!func_109(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0.0f);
			func_110(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_110(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_2(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_110(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!func_2(iParam2, (1 << 9)))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_110(iParam1, 8);
	}
	return 0;
}

void func_350()
{
	strcpy_s(&(Global_1395482.f_11), 24, "");
	strcpy_s(&(Global_1395482.f_14), 24, "");
	strcpy_s(&(Global_1395482.f_17), 24, "");
	strcpy_s(&(Global_1395482.f_76), 32, "");
	func_554();
	func_555();
	func_556();
	Global_1395482.f_115 = 0;
	Global_1395482.f_116 = 0;
	Global_1395482.f_114 = 0;
	Global_1395482.f_94 = 0;
	Global_1395482.f_72 = 0;
	Global_1395482.f_73 = 0;
	Global_1395482.f_74 = 0;
	Global_1395482.f_75 = 0;
	Global_1395482.f_117 = 0;
	Global_1395482.f_93 = 0;
	func_557();
	func_558(4);
}

int func_351(var uParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
			DECORATOR::DECOR_SET_BOOL(*uParam0, "bDeadOrAlive", true);
		}
		DECORATOR::DECOR_SET_BOOL(*uParam0, "bIsCriminal", true);
		func_559(4);
		return 1;
	}
	return 0;
}

void func_352()
{
	if (!func_39(iLocal_942) || iLocal_572 == 0)
	{
		func_561(func_560(iLocal_942, iLocal_572, 1));
	}
	func_561(func_560(iLocal_942, iLocal_572, 2));
	func_561(func_560(iLocal_942, iLocal_572, 4));
	if (!func_39(iLocal_942) && iLocal_572 == 0)
	{
		func_561(func_560(iLocal_942, iLocal_572, 8));
	}
	if (!func_39(iLocal_942) && iLocal_572 == 0)
	{
		func_562(func_560(iLocal_942, iLocal_572, 16));
		func_562(func_560(iLocal_942, iLocal_572, 32));
		func_562(func_560(iLocal_942, iLocal_572, 64));
	}
	func_563(func_560(iLocal_942, iLocal_572, (1 << 15)));
	if (!func_39(iLocal_942) || iLocal_572 == 0)
	{
		func_564(func_560(iLocal_942, iLocal_572, 128));
	}
	func_564(func_560(iLocal_942, iLocal_572, 256));
	func_564(func_560(iLocal_942, iLocal_572, (1 << 9)));
	if (!func_39(iLocal_942) && iLocal_572 == 0)
	{
		func_564(func_560(iLocal_942, iLocal_572, (1 << 10)));
	}
	func_565(func_560(iLocal_942, iLocal_572, (1 << 11)));
	func_566(func_560(iLocal_942, iLocal_572, (1 << 12)));
	func_566(func_560(iLocal_942, iLocal_572, (1 << 13)));
	func_566(func_560(iLocal_942, iLocal_572, (1 << 14)));
	if (func_567())
	{
		switch (iLocal_572)
		{
			case 0:
				func_568("REBNT_GRTJa", 0, 0);
				break;
			case 1:
				func_568("REBNT_GRTJb", 0, 0);
				break;
		}
	}
	else
	{
		switch (iLocal_572)
		{
			case 0:
				func_568("REBNT_GRT_A", 0, 0);
				break;
			case 1:
				func_568("REBNT_GRT_B", 0, 0);
				break;
		}
	}
	if (!func_39(iLocal_942))
	{
		if (iLocal_572 == 0)
		{
			func_569(1, "RE_BTR_MTN_V1_INNOCENT", -1260924842);
		}
		else
		{
			func_569(1, "RE_BTR_MTN_V2_INNOCENT", -1260924842);
		}
	}
	else if (iLocal_572 == 0)
	{
		func_569(1, "RE_BTR_FTH_V1_INNOCENT", -1260924842);
	}
	else
	{
		func_569(1, "RE_BTR_FTH_V2_INNOCENT", -1260924842);
	}
	func_569(0, "TELLS_PED_TO_SHUT_UP", 381748758);
}

void func_353(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_228(iParam0, 13))
	{
		func_26(iParam0, 0);
	}
	else
	{
		func_230(iParam0, 0);
	}
	if (func_223(iParam0->f_6))
	{
		if (bParam2)
		{
			func_229(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_354(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_47(iParam0, (1 << 27));
	}
	else
	{
		func_46(iParam0, (1 << 27));
	}
}

void func_355(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_396() != -1)
	{
		return;
	}
	if (Global_36616 & func_220(iParam1) != 0)
	{
		return;
	}
	iVar0 = func_570(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_571(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_572(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_571(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_356(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_357(var uParam0, float fParam1)
{
	if (func_345(uParam0, fParam1))
	{
		func_112(uParam0);
		return true;
	}
	return false;
}

bool func_358()
{
	if (func_39(iLocal_942) && iLocal_572 == 0)
	{
		if (!func_117(4))
		{
			func_120(4);
			func_36(0);
			func_334(uLocal_561[2], "RE_BTR_FTH_V1_UAGGRO", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, &(sLocal_805[2 /*32*/].f_23), 1, 1);
			return true;
		}
		else if (!func_117(8))
		{
			func_120(8);
			func_36(0);
			func_334(uLocal_561[2], "RE_BTR_FTH_V1_UAGGRO", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, &(sLocal_805[2 /*32*/].f_23), 2, 1);
			return true;
		}
		else if (!func_117(16))
		{
			func_120(16);
			func_36(0);
			func_334(uLocal_561[2], "RE_BTR_FTH_V1_UAGGRO", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, &(sLocal_805[2 /*32*/].f_23), 3, 1);
			return true;
		}
	}
	else if (!func_117(4))
	{
		if (func_38(uLocal_561[2], Global_35, 4, 0.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR")))
		{
			return true;
		}
	}
	else if (!func_117(8))
	{
		if (func_38(uLocal_561[2], Global_35, 8, -3.0f, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR")))
		{
			return true;
		}
	}
	else if (!func_117(16))
	{
		if (func_39(iLocal_942) || iLocal_572 == 0)
		{
			func_38(uLocal_561[2], Global_35, 16, -3.0f, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"));
		}
		else
		{
			func_120(16);
		}
		return true;
	}
	return false;
}

void func_359(int iParam0)
{
	if (func_31(iParam0))
	{
		func_111(&iLocal_75, iParam0);
	}
}

bool func_360(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_573(*uParam0, 0.0f, 0.0f, 0.0f))
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

int func_361(float fParam0, float fParam1, float fParam2)
{
	if ((fParam0 - fParam1) < fParam2)
	{
		return 1;
	}
	return 0;
}

void func_362()
{
	int iVar0;

	if (!func_115(uLocal_561[2], 0, 0))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FORCE_MOTION_STATE(0, joaat("MOTIONSTATE_SPRINT"), false);
	TASK::TASK_FLEE_PED(0, Global_35, 3, 256, -1.0f, -1, iLocal_569);
	func_321(uLocal_561[2], &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(uLocal_561[2], true);
}

int func_363(int iParam0)
{
	iParam0 = func_574(iParam0);
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

int func_364(int iParam0, Vector3 vParam1, bool bParam4, int iParam5, bool bParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	if (iParam5 < 0 || iParam5 >= *iParam0)
	{
		iParam5 = 0;
	}
	if (bParam6 < 0 || bParam6 >= *iParam0)
	{
		bParam6 = (*iParam0 - 1);
	}
	if (fParam7 < 0.0f)
	{
		fParam7 = 0.0f;
	}
	if (fParam8 < 0.0f)
	{
		fParam8 = 999999.9f;
	}
	if (fParam7 > fParam8)
	{
	}
	iVar1 = 0;
	fVar3 = 1E+07f;
	iVar0 = iParam5;
	while (iVar0 <= bParam6)
	{
		if (!bParam4 || !ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]))
		{
			fVar2 = func_526((*iParam0)[iVar0], vParam1, 1);
			if (fVar2 < fVar3)
			{
				if (fVar2 >= fParam7 && fVar2 <= fParam8)
				{
					fVar3 = fVar2;
					iVar1 = (*iParam0)[iVar0];
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

char* func_365(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			return func_312("BTR", func_310(iParam0), "APPROCH", func_311(iParam1));
		case 2:
			return func_312("BTR", func_310(iParam0), "APPROCH_B", func_311(iParam1));
		case 4:
			return func_312("BTR", func_310(iParam0), "APPROCH_C", func_311(iParam1));
		case 128:
			return func_312("BTR", func_310(iParam0), "CRY_OUT", func_311(iParam1));
		case 256:
			return func_312("BTR", func_310(iParam0), "LN1", func_311(iParam1));
		case 512:
			return func_312("BTR", func_310(iParam0), "LN2", func_311(iParam1));
		case 1024:
			return func_312("BTR", func_310(iParam0), "LN3", func_311(iParam1));
		case 2048:
			return func_312("BTR", func_310(iParam0), "LN4", func_311(iParam1));
		case 4096:
			return func_312("BTR", func_310(iParam0), "THANK", func_311(iParam1));
		case 32768:
			return func_312("BTR", func_310(iParam0), "UNTIE_A", func_311(iParam1));
		case 65536:
			return func_312("BTR", func_310(iParam0), "UNTIE_01", func_311(iParam1));
		case 131072:
			return func_312("BTR", func_310(iParam0), "UNTIE_02", func_311(iParam1));
		case 262144:
			return func_312("BTR", func_310(iParam0), "PDOWN_A", func_311(iParam1));
		case 524288:
			return func_312("BTR", func_310(iParam0), "PDOWN_01", func_311(iParam1));
		case 1048576:
			return func_312("BTR", func_310(iParam0), "PDOWN_02", func_311(iParam1));
		case 4194304:
			return func_312("BTR", func_310(iParam0), "VRIDE_A", func_311(iParam1));
		case 8388608:
			return func_312("BTR", func_310(iParam0), "VRIDE_01", func_311(iParam1));
		case 16777216:
			return func_312("BTR", func_310(iParam0), "VRIDE_02", func_311(iParam1));
		case 33554432:
			return func_312("BTR", func_310(iParam0), "HELP_01", func_311(iParam1));
		case 67108864:
			return func_312("BTR", func_310(iParam0), "HELP_02", func_311(iParam1));
		case 134217728:
			return func_312("BTR", func_310(iParam0), "HELP_03", func_311(iParam1));
		case 268435456:
			return func_312("BTR", func_310(iParam0), "RELIEF", func_311(iParam1));
		case 536870912:
			return func_312("BTR", func_310(iParam0), "LEAVE", func_311(iParam1));
		default:
			break;
	}
	return "INVALID DIALOGUE BIT";
}

bool func_366(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 43:
		case 61:
		case 73:
			return true;
		default:
			break;
	}
	return false;
}

bool func_367(int iParam0)
{
	if (!func_575(iParam0))
	{
		return false;
	}
	return func_576(iParam0, 32);
}

Vector3 func_368(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_369(int iParam0)
{
	if (!func_575(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_264() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
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
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

Vector3 func_370(int iParam0, bool bParam1)
{
	Vector3 vVar0;
	var uVar3;

	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (!func_498(iParam0))
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

void func_371()
{
	switch (iLocal_942)
	{
		case 1:
		case 9:
			switch (iLocal_994)
			{
				case 73:
					strcpy_s(&(sLocal_131[1 /*213*/].f_34), 64, "RE_BTR_MTN_V1_TH_VAL");
					func_33(64);
					break;
				case 43:
					strcpy_s(&(sLocal_131[1 /*213*/].f_34), 64, "RE_BTR_MTN_V1_TH_NBX");
					func_33(128);
					break;
				case 61:
					strcpy_s(&(sLocal_131[1 /*213*/].f_34), 64, "RE_BTR_MTN_V1_TH_STR");
					func_33(256);
					break;
			}
			break;
		default:
			switch (iLocal_994)
			{
				case 73:
					strcpy_s(&(sLocal_131[1 /*213*/].f_34), 64, "RE_BTR_FTH_V1_TH_VAL");
					func_33(64);
					break;
				case 43:
					strcpy_s(&(sLocal_131[1 /*213*/].f_34), 64, "RE_BTR_FTH_V1_TH_NBX");
					func_33(128);
					break;
				case 61:
					strcpy_s(&(sLocal_131[1 /*213*/].f_34), 64, "RE_BTR_FTH_V1_TH_STR");
					func_33(256);
					break;
			}
			break;
	}
}

void func_372(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_373(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14, float fParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> /*56*/ sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1.0f);
		sVar0.f_1 = 1050253722;
		sVar0.f_2 = 1067030938;
		sVar0.f_5 = -1082130432;
		sVar0.f_6 = -1082130432;
		sVar0.f_3 = iParam16;
		sVar0.f_1 = iParam14;
		sVar0.f_2 = fParam15;
		sVar0.f_4 = iParam17;
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
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, fParam12, fParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_577(iParam0, iParam1, iParam18);
	}
}

void func_374(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_578(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

void func_375(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_579();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_576(iParam0, (1 << 31)))
	{
		return;
	}
	switch (iParam0)
	{
		case -1:
			return;
		case 29:
			func_580(1);
			break;
		case 43:
			func_580(2);
			break;
		case 61:
			func_580(4);
			break;
		case 73:
			func_580(8);
			break;
	}
	AUDIO::_0x3D0BBCCF401B5FDB();
	func_581(iParam0, 0);
}

bool func_376(int iParam0, int iParam1, bool bParam2)
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

void func_377(int iParam0)
{
	if (func_115(iParam0, 0, 1))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

void func_378(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_582(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_1 = iParam2;
}

bool func_379(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_380(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_583(&iVar0);
	if (func_2(iVar0, 16) && !bParam15)
	{
		iParam9 |= (1 << 23);
	}
	iVar1 = func_584(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_2(iVar0, (1 << 27)))
	{
		func_585(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_586(558))
				{
					func_587(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

int func_381(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

char* func_382(char* sParam0)
{
	return sParam0;
}

bool func_383(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

void func_384(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_385(int* iParam0, var uParam1)
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
	func_588(iParam0, uParam1, 1);
	func_130(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

void func_386(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_387(int iParam0)
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

void func_388(int iParam0)
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

void func_389(var uParam0)
{
	if (func_223(uParam0->f_162))
	{
		func_229(&(uParam0->f_162), 1, 1);
	}
	if (func_223(uParam0->f_163))
	{
		func_229(&(uParam0->f_163), 1, 1);
	}
	if (func_223(uParam0->f_164))
	{
		func_229(&(uParam0->f_164), 1, 1);
	}
	if (func_223(uParam0->f_165))
	{
		func_229(&(uParam0->f_165), 1, 1);
	}
}

void func_390(var uParam0)
{
	if (uParam0->f_170)
	{
		func_589();
	}
}

void func_391(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_590(32);
		func_395(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_392(var uParam0)
{
	if (func_591(uParam0) | uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_592(uParam0->f_3);
		func_246(uParam0, 0, 1);
		func_593(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_594(0, 0);
		return true;
	}
	return false;
}

void func_393()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_394(int iParam0)
{
	if (!func_201(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_395(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_381(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_396() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 += iVar0;
}

int func_396()
{
	return Global_1572887.f_12;
}

int func_397(int iParam0)
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

int func_398(int iParam0)
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

Vector3 func_399(int iParam0, var uParam1)
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
			if (!func_191(*(uParam1[iVar0 /*3*/])))
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

void func_400(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_DEBUG_PINK"), *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, joaat("BLIP_MODIFIER_URGENT_ALERT"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_44("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100.0f, 1, 0);
	}
}

bool func_401(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_402(Vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_191(vParam0))
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
		if (func_270(vParam0))
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
	func_595(iVar0, bParam8);
	return iVar0;
}

void func_403(int iParam0)
{
	if (!func_201(iParam0))
	{
		return;
	}
	func_596(iParam0);
}

void func_404(var uParam0, Vector3 vParam1)
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

int func_405(int iParam0)
{
	if (func_99(iParam0, 2))
	{
		return 200;
	}
	if (func_99(iParam0, 4))
	{
		return 70;
	}
	if (func_99(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_406(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_62(iParam0, (1 << 17)))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_463() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_62(iParam0, 2);
		bVar1 = func_62(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_252())
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

void func_407(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_99(iParam3, (1 << 21)))
	{
		*fParam0 += 15.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_408(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_99(iParam3, 2))
	{
		*fParam0 += 60.0f;
		*fParam1 += 60.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110.0f));
	}
	else if (func_99(iParam3, (1 << 21)))
	{
		*fParam0 += 30.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_409(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_398(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_410(int iParam0, Vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_191(vParam1))
	{
		return false;
	}
	if (func_415(iParam0, vParam1))
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
	if (func_155(iParam0))
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

bool func_411(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_412(int iParam0, Vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_178(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_418(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_295();
			iParam4->f_2 = func_526(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_418(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_295();
		iParam4->f_2 = func_526(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_413(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_295() - *uParam0) >= iParam1;
	}
	return false;
}

int func_414(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_191(uParam0->f_12[iVar0 /*3*/]))
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

bool func_415(int iParam0, Vector3 vParam1)
{
	int iVar0;

	if (!func_62(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_597(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_62(iParam0, (1 << 25)))
	{
		if (func_598(vParam1, 200.0f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_416(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_99(iParam0, 128))
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
	if (func_62(iParam0, 1) && !func_62(iParam0, 2))
	{
		if (func_62(iParam0, (1 << 12)) || func_62(iParam0, (1 << 11)))
		{
			if (func_599(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_417(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_600())
	{
		return false;
	}
	return true;
}

bool func_418(Vector3 vParam0, int iParam3)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) /*3*/ };
	return func_601(vVar0, vParam0) > func_601(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_419(int iParam0)
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

int func_420(int iParam0)
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

int func_421(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_306(&iVar1, (1 << 31));
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 &= (iVar1 - 1);
		iVar0++;
	}
	return iVar0;
}

int func_422()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_423(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_396() != -1)
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

void func_424(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_425(int iParam0)
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

Vector3 func_426(Vector3 vParam0, bool bParam3, Vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, bParam3, vParam4);
}

float func_427(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_66((fParam0 + fParam1));
}

int func_428(int iParam0, var uParam1, Vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_602(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_603(uParam1))
	{
		iVar0 = PED::_CREATE_METAPED_OUTFIT_PED(uParam1->f_5, vParam2, bParam5, true, true, bParam9, bParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_604(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_604(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_605(iVar0))
		{
			func_432(iVar0, &(uParam1->f_23), 0);
		}
		if (func_605(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_606(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, 0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_607(&(uParam1->f_22)));
			func_609(iVar0, func_608(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_610(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_611(&(uParam1->f_22)))
		{
			func_612(iVar0, 1);
		}
		ENTITY::_SET_ENTITY_FADE_IN(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_613(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_109(uParam1->f_22, (1 << 13)))
		{
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
		}
		if (!func_605(iVar0))
		{
			func_615(iVar0, !func_614(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_616(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_617(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_617(&(uParam1->f_22)));
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

bool func_429(int iParam0, int iParam1)
{
	if (func_618(iParam0) != -1)
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

bool func_430(var uParam0)
{
	return func_109(*uParam0, 32);
}

int func_431(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_432(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_115(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_433(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_434(int iParam0)
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

int func_435(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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
		sVar0 = { func_619(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_620((398 + iVar28), 1);
			if (func_621(iParam0, &sVar0, iVar5, 0))
			{
				if (func_622(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_623(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_624(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_625(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_626(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_627(iParam0, iParam1);
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

void func_436(int iParam0, int iParam1, float fParam2)
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

bool func_437(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

float func_438(struct<2> /*16*/ sParam0, int iParam2, struct<2> /*16*/ sParam3, var uParam5, int iParam6)
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

int func_439(int iParam0)
{
	Vector3 vVar0;

	if (!func_216(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_440(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_216(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_628(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_629("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_630(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_433(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_631(iVar1);
				return true;
			}
			iVar3++;
		}
		func_631(iVar1);
	}
	return false;
}

int func_441(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_216(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_439(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_628(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_632(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_633(bParam2), iParam0, false);
	return iVar2;
}

int func_442(int iParam0)
{
	return iParam0;
}

void func_443(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_444(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_634(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_445(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_446(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_447(int iParam0)
{
	if (!func_635(iParam0))
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

bool func_448(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_449(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_636(iParam0);
	}
	else
	{
		func_637(iParam0, iParam1);
	}
	func_638();
}

void func_450(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_451(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_452(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_453(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_454(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

int func_455()
{
	return Global_1899515;
}

int func_456(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_539(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_457(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_458(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = (iParam0 - 1);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 += func_639(iVar1, iParam1);
			iVar0++;
		}
	}
	return iVar2;
}

int func_459(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_460(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_461(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_640(1);
	}
	else
	{
		iVar0 = func_641(iParam0);
	}
	return iVar0;
}

void func_462(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_642(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_643(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

int func_463()
{
	return Global_1897952.f_41;
}

void func_464(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_99(iParam0, (1 << 13)))
	{
		iVar0 = func_643(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_465(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_395(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_466(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_62(iParam0, (1 << 18)))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_644((1 << 18), iVar0, 0, 1);
		}
	}
	if (func_62(iParam0, 128))
	{
		func_644(128, iVar0, 0, 1);
	}
	else if (func_62(iParam0, (1 << 19)))
	{
		func_644((1 << 19), iVar0, 0, 1);
	}
	else if (func_62(iParam0, (1 << 29)))
	{
		func_644((1 << 29), iVar0, 0, 1);
	}
	else if (func_62(iParam0, (1 << 22)))
	{
		func_644((1 << 22), iVar0, 0, 1);
	}
	else if (func_62(iParam0, (1 << 23)))
	{
		func_644((1 << 23), iVar0, 0, 1);
	}
}

void func_467(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_468(bool bParam0)
{
	if (!bParam0 && func_645(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_469()
{
	return Global_1310750.f_16037;
}

bool func_470(int iParam0)
{
	if (!func_201(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_471(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_201(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_646(iParam0);
	Global_1310750.f_16037--;
}

void func_472(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_647(&Global_1393447, 1);
	func_648();
	func_649();
	func_650((BUILTIN::TO_FLOAT(200) / 3.0f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_295() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 -= Global_1392135.f_1 & 4;
		}
		func_651();
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_644((1 << 24), 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240.0f);
			}
			else if (func_2(iParam0, 2))
			{
				func_644((1 << 24), 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60.0f);
			}
			else if (func_2(iParam0, 4))
			{
				func_644((1 << 24), 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900.0f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_652(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_653(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_653((BUILTIN::TO_FLOAT(200) / 3.0f), 1, 0);
	}
}

bool func_473(int iParam0, int iParam1)
{
	return Global_40.f_9571[iParam1 /*10*/] & iParam0 != 0;
}

void func_474(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 -= Global_1392050[iParam1 /*14*/].f_1 & iParam0;
}

void func_475(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] |= iParam0;
}

int func_476(int iParam0)
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

bool func_477()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_478(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_479(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_478(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0.0f)
		{
			uParam0->f_8 = (func_480() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0.0f;
	return false;
}

float func_480()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

int func_481(bool bParam0, bool bParam1, bool bParam2)
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

bool func_482(int iParam0)
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

bool func_483(int iParam0)
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

bool func_484(int iParam0)
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

bool func_485(int iParam0)
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

bool func_486(int iParam0)
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

bool func_487(int iParam0)
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

bool func_488(int iParam0)
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

bool func_489(bool bParam0, int iParam1, int iParam2)
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

bool func_490()
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

int func_491(int iParam0)
{
	if (!func_90(iParam0))
	{
		return -1;
	}
	return func_654(func_233(iParam0));
}

bool func_492(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_493(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_494(int iParam0)
{
	return Global_1310750.f_16035 & iParam0 != 0;
}

bool func_495(int iParam0)
{
	return func_62(iParam0, Global_1310750.f_16072 | 64);
}

int func_496(int iParam0)
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

int func_497(int iParam0)
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

bool func_498(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_499(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

void func_500(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_655();
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
			func_656(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_501(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_502(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_396() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_657(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_657(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_529(iVar0) == -1)
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

void func_503(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_658(iParam0);
	}
}

bool func_504(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_529(iParam2);
	}
	else
	{
		iVar1 = func_528(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_529(iParam0);
	}
	else
	{
		iVar0 = func_528(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_2(*iParam1, (1 << 23)))
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

float func_505(int iParam0, int iParam1)
{
	return func_152(iParam0, iParam1, 1, 1);
}

float func_506(int iParam0)
{
	return iParam0->f_26;
}

bool func_507(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

bool func_508(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_659(iVar0, 0)))
		{
			if (func_660(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_509(int iParam0)
{
	return iParam0->f_17;
}

bool func_510(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_2(*iParam0, (1 << 22)))
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

int func_511(int iParam0)
{
	return iParam0->f_18;
}

bool func_512(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_659(iVar0, 0)))
		{
			if (func_661(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_513(int iParam0)
{
	return iParam0->f_23;
}

int func_514(int iParam0)
{
	return iParam0->f_21;
}

int func_515(int iParam0)
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

bool func_516(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_383(iParam0, vParam4, 0.5f))
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

int func_517(int iParam0)
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
	if (func_662(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_518(int iParam0)
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

bool func_519(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_259(iParam1))
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

bool func_520(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_259(iParam1))
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

bool func_521(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_259(iParam1))
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

bool func_522(int iParam0, int iParam1)
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

bool func_523(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_663(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_524(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_525(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_526(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_526(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_527(int iParam0)
{
	return iParam0->f_24;
}

int func_528(int iParam0)
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

int func_529(int iParam0)
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

int func_530(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_522(Global_35, &iVar1))
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

bool func_531(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_489(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_532(iParam1, iVar0))
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
				if (!bParam2 || !func_532(iParam1, iVar1))
				{
					if (func_526(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_532(int iParam0, int iParam1)
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

int func_533(int iParam0)
{
	if (func_567())
	{
		return 0;
	}
	return func_664(Global_1347702[58 /*49*/].f_15, 1);
}

int func_534(int iParam0)
{
	return iParam0->f_20;
}

int func_535(int iParam0, int iParam1, bool bParam2, float fParam3)
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

bool func_536(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

char* func_537(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_538(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_539(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_540(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_541(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_480() - fParam1);
	func_665(uParam0, 1);
	func_666(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_542(var uParam0)
{
	return func_540(*uParam0, 2);
}

bool func_543(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_544(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!PED::DOES_GROUP_EXIST(iParam0) || !PED::_0x0455546F23FF08E4(iParam0))
	{
		return;
	}
	PED::GET_GROUP_SIZE(iParam0, &uVar0, &iVar2);
	if (iVar2 > 0)
	{
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			iVar3 = PED::GET_PED_AS_GROUP_MEMBER(iParam0, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::REMOVE_PED_FROM_GROUP(iVar3);
				}
			}
			iVar1++;
		}
	}
	PED::REMOVE_GROUP(iParam0);
}

int func_545(int iParam0, Vector3 vParam1, float fParam4)
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
	fVar9 = func_667(vVar3, vVar6);
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
	if (func_668(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

char* func_546(int iParam0, int iParam1, int iParam2)
{
	if (func_39(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam2)
				{
					case 0:
						return "GENERIC_SHOCKED_HIGH";
					case 1:
						return "TAUNT_GEN_NEUTRAL";
					case 2:
						return "MELEE_TAKE_THAT";
					case 3:
						return "STEAL_BACK";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam2)
				{
					case 0:
						return "GENERIC_SHOCKED_MED";
					case 1:
						return "MELEE_THAT_ALL_YOU_GOT";
					case 2:
						return "GENERIC_THANKS_SHOUTED";
					case 3:
						return "GENERIC_EXCITING_EVENT_COMMENT";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "";
			case 1:
				switch (iParam2)
				{
					case 0:
						return "GENERIC_MOCK";
					case 1:
						return "MELEE_BRING_IT_ON";
					case 2:
						return "SICK_BASTARD";
					default:
						break;
				}
				break;
		}
	}
	return "";
}

int func_547(int iParam0, int iParam1, int iParam2)
{
	if (func_39(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam2)
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
				break;
			case 1:
				switch (iParam2)
				{
					case 0:
						return 1;
					case 1:
						return 2;
					case 2:
						return 1;
					case 3:
						return 1;
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return -1;
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
		}
	}
	return -1;
}

int func_548(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_549(var uParam0)
{
	if (!func_326(uParam0))
	{
	}
	if (!func_542(uParam0))
	{
		uParam0->f_2 = (func_480() - uParam0->f_1);
		func_665(uParam0, 2);
	}
}

void func_550(var uParam0)
{
	if (!func_326(uParam0))
	{
	}
	if (func_542(uParam0))
	{
		uParam0->f_1 = (func_480() - uParam0->f_2);
		uParam0->f_2 = 0.0f;
		func_666(uParam0, 2);
	}
}

bool func_551(int iParam0)
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
	if (func_317(iParam0, joaat("SCRIPT_TASK_HORSE_ACTION")))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_552(int iParam0, Vector3 vParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	return func_668(vVar0, vVar3, vParam1);
}

bool func_553(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_317(iParam0, joaat("SCRIPT_TASK_HORSE_ACTION")))
	{
		return true;
	}
	fVar0 = TASK::_GET_SCRIPT_TASK_ACTION_TIME(iParam0, joaat("SCRIPT_TASK_HORSE_ACTION"));
	if (func_109(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_109(iParam1, 256))
	{
		if (fVar0 >= 1.0f)
		{
			return true;
		}
		return false;
	}
	if (func_109(iParam1, (1 << 11)))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_554()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		strcpy_s(&(Global_1395482.f_20[iVar0 /*3*/]), 24, "");
		strcpy_s(&(Global_1395482.f_36[iVar0 /*3*/]), 24, "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		strcpy_s(&(Global_1395482.f_52[iVar0 /*3*/]), 24, "");
		strcpy_s(&(Global_1395482.f_62[iVar0 /*3*/]), 24, "");
		iVar0++;
	}
	Global_1395482.f_115 = 0;
	Global_1395482.f_114 = 0;
	Global_1395482.f_72 = 0;
	Global_1395482.f_73 = 0;
	Global_1395482.f_74 = 0;
	Global_1395482.f_75 = 0;
	func_669(Global_1395482.f_1, 8);
	func_669(Global_1395482.f_1, 16);
}

void func_555()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		strcpy_s(&(Global_1395482.f_95[iVar0 /*6*/]), 32, "");
		Global_1395482.f_95[iVar0 /*6*/].f_4 = 2;
		iVar0++;
	}
	Global_1395482.f_94 = 0;
	func_669(Global_1395482.f_1, (1 << 9));
}

void func_556()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		strcpy_s(&(Global_1395482.f_80[iVar0 /*4*/]), 32, "");
		iVar0++;
	}
	Global_1395482.f_93 = 0;
}

void func_557()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_558(int iParam0)
{
	Global_1395482.f_10 -= Global_1395482.f_10 & iParam0;
}

void func_559(int iParam0)
{
	Global_1395482.f_10 |= iParam0;
}

char* func_560(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			return func_312("BTR", func_310(iParam0), "PRIDE_A", func_311(iParam1));
		case 2:
			return func_312("BTR", func_310(iParam0), "PRIDE_01", func_311(iParam1));
		case 4:
			return func_312("BTR", func_310(iParam0), "PRIDE_02", func_311(iParam1));
		case 8:
			return func_312("BTR", func_310(iParam0), "PRIDE_03", func_311(iParam1));
		case 16:
			return func_312("BTR", func_310(iParam0), "CLOSE_01", func_311(iParam1));
		case 32:
			return func_312("BTR", func_310(iParam0), "CLOSE_02", func_311(iParam1));
		case 64:
			return func_312("BTR", func_310(iParam0), "CLOSE_03", func_311(iParam1));
		case 128:
			return func_312("BTR", func_310(iParam0), "RETURN_A", func_311(iParam1));
		case 256:
			return func_312("BTR", func_310(iParam0), "RETURN_01", func_311(iParam1));
		case 512:
			return func_312("BTR", func_310(iParam0), "RETURN_02", func_311(iParam1));
		case 1024:
			return func_312("BTR", func_310(iParam0), "RETURN_03", func_311(iParam1));
		case 32768:
			return func_312("BTR", func_310(iParam0), "PLY_CLOSE", func_311(iParam1));
		case 2048:
			return func_312("BTR", func_310(iParam0), "PLY_KILL_PRIS", func_311(iParam1));
		case 4096:
			return func_312("BTR", func_310(iParam0), "HOGTIE_RESP_A", func_311(iParam1));
		case 8192:
			return func_312("BTR", func_310(iParam0), "HOGTIE_RESP_B", func_311(iParam1));
		case 16384:
			return func_312("BTR", func_310(iParam0), "HOGTIE_RESP_C", func_311(iParam1));
		default:
			break;
	}
	return "INVALID DIALOGUE BIT";
}

int func_561(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_20[iVar0 /*3*/])))
		{
			Global_1395482.f_20[iVar0 /*3*/] = { func_670(sParam0) /*3*/ };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_562(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_52[iVar0 /*3*/])))
		{
			Global_1395482.f_52[iVar0 /*3*/] = { func_670(sParam0) /*3*/ };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_563(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_62[iVar0 /*3*/])))
		{
			Global_1395482.f_62[iVar0 /*3*/] = { func_670(sParam0) /*3*/ };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_564(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_36[iVar0 /*3*/])))
		{
			Global_1395482.f_36[iVar0 /*3*/] = { func_670(sParam0) /*3*/ };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_565(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		strcpy_s(&(Global_1395482.f_76), 32, sParam0);
	}
}

int func_566(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_80[iVar0 /*4*/])))
		{
			strcpy_s(&(Global_1395482.f_80[iVar0 /*4*/]), 32, sParam0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_567()
{
	if (func_396() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_568(char* sParam0, bool bParam1, bool bParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		Global_1395482.f_11 = { func_670(sParam0) /*3*/ };
		if (bParam1)
		{
			func_559(8);
		}
		if (bParam2)
		{
			func_559(16);
		}
	}
}

int func_569(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam2 != 2 && MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_95[iVar0 /*6*/])))
		{
			Global_1395482.f_95[iVar0 /*6*/].f_5 = iParam0;
			strcpy_s(&(Global_1395482.f_95[iVar0 /*6*/]), 32, sParam1);
			Global_1395482.f_95[iVar0 /*6*/].f_4 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_570(int iParam0)
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

void func_571(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_671();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_672(iParam0);
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
	if (func_673(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_567())
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
	Global_40.f_11095.f_35 = func_674(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_671();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_675(iVar1);
		func_677(func_676(), 0, 4000);
		func_678(Global_40.f_11095.f_35);
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
		func_679(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_681(func_680(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_570(14))
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
					sParam4 = func_682(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_683(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_683(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_681(func_680(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_570(4))
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
					sParam4 = func_682(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_683(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_683(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_680(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_684(10, 1);
	}
}

void func_572(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_573(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_574(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_575(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_576(int iParam0, int iParam1)
{
	return Global_20710.f_2092[iParam0] & iParam1 != 0;
}

void func_577(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

void func_578(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_685(0);
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

int func_579()
{
	if (!func_367(29))
	{
		return 29;
	}
	if (!func_367(43))
	{
		return 43;
	}
	if (!func_367(61))
	{
		return 61;
	}
	if (!func_367(73))
	{
		return 73;
	}
	return -1;
}

void func_580(int iParam0)
{
	func_110(&(Global_1310750.f_16110), iParam0);
}

void func_581(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar6 = MISC::GET_HASH_KEY("BLIP_ROBBERY_SHOP");
	iVar7 = MISC::GET_HASH_KEY("toast_log_blips");
	switch (iParam0)
	{
		case 29:
			sVar2 = "PRRGS_LOG";
			iVar3 = joaat("PRRGS_LOG");
			sVar4 = "PRRGS_LOG_DESC";
			iVar5 = joaat("PRRGS_LOG_DESC");
			sVar0 = "PRRGS_LOG_OBJ1";
			iVar1 = joaat("PRRGS_LOG_OBJ1");
			iVar8 = -1662367475;
			break;
		case 43:
			sVar2 = "PRNBG_LOG";
			iVar3 = joaat("PRNBG_LOG");
			sVar4 = "PRNBG_LOG_DESC";
			iVar5 = joaat("PRNBG_LOG_DESC");
			sVar0 = "PRNBG_LOG_OBJ2";
			iVar1 = joaat("PRNBG_LOG_OBJ2");
			iVar8 = -1637141202;
			break;
		case 61:
			sVar2 = "PRSGS_LOG";
			iVar3 = joaat("PRSGS_LOG");
			sVar4 = "PRSGS_LOG_DESC";
			iVar5 = joaat("PRSGS_LOG_DESC");
			sVar0 = "PRSGS_LOG_OBJ3";
			iVar1 = joaat("PRSGS_LOG_OBJ3");
			iVar8 = -439915887;
			break;
		case 73:
			sVar2 = "PRVDO_LOG";
			iVar3 = joaat("PRVDO_LOG");
			sVar4 = "PRVDO_LOG_DESC";
			iVar5 = joaat("PRVDO_LOG_DESC");
			sVar0 = "PRVDO_LOG_OBJ4";
			iVar1 = joaat("PRVDO_LOG_OBJ4");
			iVar8 = -366465324;
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		return;
	}
	UILOG::_UILOG_ADD_ENTRY_HASH(4, func_686(iParam0), func_687(iParam0), iVar3, iVar5, 0);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(4, func_686(iParam0), iVar8, joaat("SP_MISSIONS_20"));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(4, func_686(iParam0), iVar6, iVar7);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(4, func_686(iParam0), iVar1, sVar0, false, false, false);
	if (bParam1)
	{
		return;
	}
	func_688(sVar2, 0, iVar7, iVar6, joaat("PLAYER_MENU"), 0, -1, -2, func_70(), "robbery_tip_wipe_on", 0, 0, 1, 1, 1);
	func_689(iParam0, (1 << 31));
	func_594(0, -1);
}

int func_582(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_690(iParam0, iParam1);
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

void func_583(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

int func_584(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_583(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & (1 << 19) != false;
		bVar5 = iParam8 & (1 << 24) != false;
		bVar6 = iParam8 & (1 << 24) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_178(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_327(&(iParam1->f_13));
		}
		if (func_691(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_692(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_584(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_384(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & (1 << 25) != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_693(*uParam0, 1, 1);
						}
					}
					else if (func_694(iParam1, 22))
					{
						func_693(*uParam0, 0, 1);
					}
				}
				if (func_695(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_696(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_697(iParam8);
					if (func_698(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_699(uParam3);
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
					func_700(iParam1, uParam3, fVar8);
					if (func_701(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_130(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_702(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_695(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_703(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_698(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_696(uParam0, func_695(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_697(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_130(uParam3, 0, 0, 1, 1);
					}
					func_704(iParam1, 1);
				}
				func_700(iParam1, uParam3, fVar8);
				if (func_702(uParam0, iParam1, fParam4, bVar6))
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
			func_385(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_585(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_705(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_119(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
}

bool func_586(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_396() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_587(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_706(iParam0, &iVar0, &iVar1);
	if (!func_707(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_708(iVar0, iVar1);
}

void func_588(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_229(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_138(iParam0, 0);
		}
	}
}

void func_589()
{
	func_709(23);
}

void func_590(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

int func_591(var uParam0)
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

void func_592(int iParam0)
{
	int iVar0;

	iVar0 = func_710(iParam0);
	if (iVar0 != 0)
	{
		func_711(-1, 24, 0, iVar0);
	}
}

void func_593(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_681(func_680(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_62(iParam0, 2))
	{
		func_712(iParam0, func_461(iParam3));
	}
	if (func_62(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_463();
		}
		func_713(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_99(iParam0, (1 << 16)))
	{
		func_714(iParam0, iParam1);
		func_715(iParam0, func_186(iParam0, iParam1));
		func_590(128);
	}
	func_465(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216, 0, 0);
	func_466(iParam0, 1);
	if (!bParam2)
	{
		func_590(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_716((1 << 19));
	}
	if (func_717(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_717(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_594(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_718(&Global_0, 8);
	}
	if (!func_719() || func_396() != -1)
	{
		return;
	}
	func_718(&Global_0, 1);
}

int func_595(int iParam0, bool bParam1)
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

void func_596(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

bool func_597(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_191(vParam0))
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

bool func_598(Vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_191(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, (1 << 14));
}

bool func_599(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_191(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_156(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500.0f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_600()
{
	int iVar0;
	int iVar1;

	iVar0 = func_720(func_264());
	if (iVar0 == 8)
	{
		iVar1 = func_265(func_264());
		if (func_267(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_721(func_640(0)))
	{
		return false;
	}
	if (func_722())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_601(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_602(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0 = { *uParam0 /*3*/ };
	if (func_723(&uParam1))
	{
		return 1;
	}
	if (!func_360(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 /*3*/ };
	return 1;
}

bool func_603(var uParam0)
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

int func_604(int iParam0, Vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_724(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_605(int iParam0)
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

bool func_606(var uParam0)
{
	return func_109(*uParam0, 4);
}

bool func_607(var uParam0)
{
	return func_109(*uParam0, 64);
}

bool func_608(var uParam0)
{
	return func_109(*uParam0, 8);
}

void func_609(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_610(var uParam0)
{
	return func_109(*uParam0, 128);
}

bool func_611(var uParam0)
{
	return func_109(*uParam0, (1 << 11));
}

void func_612(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_613(var uParam0)
{
	return func_109(*uParam0, (1 << 10));
}

bool func_614(var uParam0)
{
	return func_109(*uParam0, 256);
}

void func_615(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_616(var uParam0)
{
	return func_109(*uParam0, (1 << 9));
}

bool func_617(var uParam0)
{
	return func_109(*uParam0, (1 << 12));
}

int func_618(int iParam0)
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

struct<5> /*40*/ func_619(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_725(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_439(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_623(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_726(bParam1) /*4*/ };
			if (bParam2 && func_727(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_621(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_621(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_622(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_728(bParam1) /*4*/ };
			switch (func_729(iParam0))
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
			if (func_730(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_623(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_730(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_623(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_731(sVar0, &sVar27, bParam1, 0))
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

int func_620(int iParam0, int iParam1)
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

bool func_621(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_732(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_622(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_733(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_623(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_216(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_633(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_624(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_734(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_731(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_625(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_633(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_625(bool bParam0)
{
	if (func_396() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_633(bParam0));
}

int func_626(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_735(iParam0))
	{
		return 0;
	}
	if (!func_625(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_627(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_107(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_628(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_216(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_439(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_217(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_736(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_629(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_633(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_630(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_631(int iParam0)
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

int func_632(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_737(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_738(&sVar0, func_726(0));
	}
	if (!func_739(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_631(iVar18);
	return iVar19;
}

int func_633(bool bParam0)
{
	if (func_396() == -1)
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

bool func_634(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

bool func_635(int iParam0)
{
	return func_634(iParam0, 2);
}

int func_636(int iParam0)
{
	int iVar0;

	iVar0 = func_740(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_741(iVar0);
}

int func_637(int iParam0, int iParam1)
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
			func_742(iVar2);
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

void func_638()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

int func_639(int iParam0, int iParam1)
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

int func_640(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_743(1, 0, 0);
	}
	else
	{
		iVar0 = func_264();
	}
	return func_641(iVar0);
}

int func_641(int iParam0)
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

int func_642(int iParam0)
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

int func_643(int iParam0, int iParam1)
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

void func_644(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_401(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_394(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == (1 << 24))
			{
				if (func_744(iVar0) < func_745(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_465(iVar0, iParam1, 1.0f, iVar1 | iParam2, bParam3);
		}
		iVar0++;
	}
}

bool func_645(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_746(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

void func_646(int iParam0)
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

void func_647(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_648()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_747(iVar0, 128))
		{
			func_748(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_649()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_747(iVar0, 128) && func_747(iVar0, 1))
		{
			func_748(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_650(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000.0f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_651()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_62(iVar0, (1 << 24)))
		{
			if (!func_749(iVar0))
			{
				func_750(iVar0, (1 << 12));
			}
		}
		iVar0++;
	}
}

void func_652(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_395(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_395(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_395(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_395(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_395(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_395(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_395(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_653(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_480();
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

int func_654(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_655()
{
	if (func_751())
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

void func_656(var uParam0, var uParam1)
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

int func_657(int iParam0)
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

void func_658(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_46(iParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_47(iParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_659(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_660(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_661(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_661(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_662(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_663(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_664(int iParam0, bool bParam1)
{
	switch (func_752(iParam0))
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

void func_665(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_666(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

float func_667(Vector3 vParam0, Vector3 vParam3)
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

bool func_668(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

void func_669(int iParam0, int iParam1)
{
	if (!func_105(iParam0))
	{
		return;
	}
	if (func_106(iParam0, iParam1))
	{
		Global_1395482.f_2[iParam0] -= Global_1395482.f_2[iParam0] & iParam1;
	}
}

Vector3 func_670(char* sParam0)
{
	Vector3 vVar0[24];

	strcpy_s(&cVar0, 24, sParam0);
	return cVar0;
}

int func_671()
{
	int iVar0;

	iVar0 = func_753();
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

int func_672(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_396() != -1)
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
	fVar1 = func_178(MISC::ABSF(fVar1) < 1.0f, func_178(fVar1 < 0.0f, -1.0f, 1.0f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_673(int iParam0)
{
	if (!func_754(iParam0))
	{
		return false;
	}
	return func_755(iParam0);
}

int func_674(int iParam0, int iParam1, int iParam2)
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

int func_675(int iParam0)
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

int func_676()
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

void func_677(int iParam0, bool bParam1, int iParam2)
{
	func_756((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_757(iParam0);
}

void func_678(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_758(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_679(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_759(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_760(iVar5, &iVar2, &iVar0))
			{
				if (!func_216(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_761(iVar2);
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
							if (func_439(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_671() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_671() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_762();
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

struct<2> /*16*/ func_680(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_681(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_682(int iParam0)
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

int func_683(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_763(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_684(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_764(iParam0))
	{
		return 0;
	}
	if (!func_719())
	{
		return 0;
	}
	if (!func_765(iParam0, &iVar0, &iVar1))
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

void func_685(bool bParam0)
{
	if (bParam0)
	{
		func_766(4);
	}
	func_766(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

int func_686(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return joaat("PRRGS");
		case 43:
			return joaat("PRNBG");
		case 61:
			return joaat("PRSGS");
		case 73:
			return joaat("PRVDO");
		default:
			break;
	}
	return 0;
}

Vector3 func_687(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return { 1325.468f, -1319.246f, 77.0711f };
		case 43:
			return { 2719.43f, -1283.178f, 49.6495f };
		case 61:
			return { -1789.8f, -385.6f, 160.3f };
		case 73:
			return { -283.6743f, 804.662f, 118.3859f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_688(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sParam0 = "ROB_TOAST_BODY";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "ROB_TOAST_BODY";
	}
	if (iParam2 == -1)
	{
		iParam2 = joaat("ELEMENTS_STAMPS_ICONS");
	}
	if (iParam3 == -1)
	{
		iParam3 = joaat("STAMP_CASH");
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		sParam5 = "INPUT_FEED_INTERACT_GENERIC";
	}
	if (iParam6 == -1)
	{
		iParam6 = joaat("SP_NOTIFICATIONS");
	}
	if (!bParam14)
	{
		return func_767(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, sParam8, sParam9, iParam10, iParam11, bParam12, bParam13);
	}
	return func_768(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, sParam8, sParam9, iParam10, iParam11, bParam12, bParam13);
}

void func_689(int iParam0, int iParam1)
{
	if (func_576(iParam0, iParam1))
	{
		return;
	}
	Global_20710.f_2092[iParam0] |= iParam1;
}

int func_690(int iParam0, int iParam1)
{
	if (!func_201(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

bool func_691(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_769(iParam0, iParam1))
		{
			if (!func_2(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_130(uParam2, 0, 0, 1, 0);
				func_47(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_2(iParam1->f_10, 1))
		{
			func_770(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_46(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_692(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_2(iParam4, 32);
		func_588(iParam1, uParam2, 0);
		iVar5 = func_771(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_130(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_2(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_2(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_2(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_2(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_2(iParam4, (1 << 23)) || func_2(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_2(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_2(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_694(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_694(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_2(iParam4, (1 << 26)))
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
				iParam6 = func_772(uParam0);
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
			if (func_2(iParam4, (1 << 28)))
			{
				iVar8 = func_773(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_774(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_694(iParam1, 23))
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
			if (func_2(iParam4, 2) || func_2(iParam4, 16))
			{
				func_693(*uParam0, 1, 1);
			}
			else
			{
				func_693(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_693(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_694(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_695(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_775(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_696(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_776(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_2(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_697(int iParam0)
{
	if (func_2(iParam0, 4))
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
	if (func_2(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_2(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_698(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_777(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & (1 << 9) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_778(Global_35)) || func_779(Global_35)) || func_780(Global_35));
	fVar12 = -1.0f;
	if (func_326(&(iParam1->f_13)))
	{
		fVar12 = func_348(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_223((uParam4[iVar0 /*17*/])->f_6);
		func_781(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_782(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_783(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_130(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_137(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_588(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_784(iParam1, fParam6, iParam1->f_9))
					{
						func_327(&(iParam1->f_18));
						if (bVar6)
						{
							func_137(uParam4, 0, 0);
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
		func_785(iParam1, fParam2);
	}
	return bVar5;
}

void func_699(var uParam0)
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

void func_700(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_786(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_785(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_701(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_787(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_788(iParam1, 0);
				func_588(iParam1, uParam2, func_694(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_702(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_327(&(iParam1->f_18));
			return false;
		}
		else if (func_326(&(iParam1->f_18)))
		{
			func_112(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_326(&(iParam1->f_18)))
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
	return func_357(&(iParam1->f_18), fParam2);
	return true;
}

void func_703(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_781(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_704(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_705(int* iParam0)
{
	if (func_694(iParam0, 0))
	{
		if (func_379(iParam0))
		{
			func_704(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_706(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_707(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_789(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_790(iParam0))
	{
		return false;
	}
	if (func_791(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_792(iParam0, 1)) || func_793((1 << 15)))
	{
		if (!func_792(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_794())
	{
		return false;
	}
	return true;
}

void func_708(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_709(int iParam0)
{
	int iVar0;

	if (func_396() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_307(func_795(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_795(iVar0), func_422(), true))
			{
				func_796(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_710(int iParam0)
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

void func_711(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_797() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_797();
					}
					func_798(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_46(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_712(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_642(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_643(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_713(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_99(iParam0, (1 << 13)))
	{
		iVar0 = func_643(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_714(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_398(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_715(int iParam0, Vector3 vParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_62(iParam0, (1 << 9)))
	{
		vParam1 = { Global_36 /*3*/ };
	}
	if (func_191(vParam1))
	{
		return;
	}
	if (!func_201(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] /*3*/ };
		if (func_191(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_411(vVar2, vParam1, 1.0f, 1))
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

void func_716(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_750(iVar0, iParam0);
		iVar0++;
	}
}

int func_717(int iParam0)
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

void func_718(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_719()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_720(int iParam0)
{
	if (!func_498(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_721(int iParam0)
{
	return Global_1310750.f_16074 & iParam0 != 0;
}

bool func_722()
{
	return Global_1894899 & 2 != 0;
}

bool func_723(var uParam0)
{
	return func_109(*uParam0, 1);
}

void func_724(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_799(iParam1))
		{
			func_800(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_83(iParam0, 0, 1);
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
			func_801(iParam0, 0);
			bVar0 = true;
		}
		func_802(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

struct<4> /*32*/ func_725(bool bParam0)
{
	return func_623(joaat("CHARACTER"), func_803(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_726(bool bParam0)
{
	int iVar0;

	iVar0 = func_633(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_623(joaat("CARRIED_WEAPONS"), func_725(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_623(joaat("CARRIED_WEAPONS"), func_725(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_623(joaat("CARRIED_WEAPONS"), func_725(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_727(int iParam0, bool bParam1)
{
	if (func_729(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_673(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_728(bool bParam0)
{
	int iVar0;

	iVar0 = func_633(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_623(joaat("EMOTE_ITEM"), func_725(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_623(joaat("EMOTE_ITEM"), func_725(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

int func_729(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_216(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_730(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_729(iParam0);
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

bool func_731(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_633(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_732(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_216(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_623(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_633(bParam6), &sVar0, false);
	return iVar4;
}

bool func_733(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_633(0);
	*uParam1 = { func_623(iParam0, func_726(0), iParam3, 0) /*4*/ };
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

bool func_734(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_735(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_736(int iParam0, var uParam1, var uParam2)
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

struct<18> /*144*/ func_737(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_738(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_739(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_633(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_740(int iParam0)
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

int func_741(int iParam0)
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

int func_742(int iParam0)
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

int func_743(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_804(iVar2))
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

int func_744(int iParam0)
{
	if (func_201(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_745(int iParam0)
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

int func_746(int iParam0, int iParam1)
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

bool func_747(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return Global_1393237.f_11[iParam0 /*30*/].f_10 & iParam1 != 0;
}

void func_748(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

bool func_749(int iParam0)
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

void func_750(int iParam0, int iParam1)
{
	if (!func_201(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 -= Global_1310750[iParam0 /*111*/].f_1 & iParam1;
}

bool func_751()
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

int func_752(int iParam0)
{
	if (!func_90(iParam0))
	{
		return -1;
	}
	return func_805(iParam0);
}

int func_753()
{
	return Global_40.f_11095.f_35;
}

bool func_754(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_755(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_756(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_806(bParam1);
	}
}

void func_757(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_758(int iParam0)
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

bool func_759(int iParam0)
{
	Vector3 vVar0;

	if (!func_807(23, &vVar0))
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

bool func_760(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_807(23, &sVar0))
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

int func_761(int iParam0)
{
	return iParam0;
}

int func_762()
{
	int iVar0;

	iVar0 = func_671();
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

void func_763(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_764(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_765(int iParam0, int iParam1, int iParam2)
{
	if (!func_764(iParam0))
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

void func_766(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

int func_767(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

int func_768(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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
	iVar21 = UIFEED::_0x18D6869FBFFEC0F8(&sVar0, &sVar13, bParam12, bParam13);
	return iVar21;
}

bool func_769(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_808((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_770(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_786(uParam0[iVar0 /*17*/]))
		{
			func_26(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_771(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_809(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_223((uParam2[iVar0 /*17*/])->f_6))
		{
			func_26(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_772(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_387(*uParam0);
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

int func_773(var uParam0, int iParam1)
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

void func_774(int* iParam0, int* iParam1)
{
	if (!func_694(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_26(iParam1, 19);
			func_788(iParam0, 23);
			func_810(iParam1, 2);
		}
	}
}

bool func_775(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_811(16))
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
					func_812(16);
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

void func_776(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_809(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_777(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_778(int iParam0)
{
	return func_813(iParam0, 4) | func_813(iParam0, 5);
}

int func_779(int iParam0)
{
	return func_813(iParam0, 7);
}

int func_780(int iParam0)
{
	return func_813(iParam0, 6);
}

void func_781(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_786(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_809(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_782(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_814(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_815(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_226(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_226(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_816(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_783(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_817(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_818(iParam1, 1))
	{
		func_819(iParam1, 1);
		return true;
	}
	return false;
}

bool func_784(int* iParam0, float fParam1, bool bParam2)
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

void func_785(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_786(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_787(int iParam0)
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

void func_788(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_789(int iParam0, int iParam1)
{
	if (func_396() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_790(int iParam0)
{
	if (func_396() != -1)
	{
		if (func_792(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_792(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_791(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_792(iParam0, (1 << 16)) && !func_792(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_792(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_792(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_792(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

bool func_793(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

bool func_794()
{
	return Global_1905944.f_5694;
}

int func_795(int iParam0)
{
	if (!func_820(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_796(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_821(iParam0))
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

int func_797()
{
	return Global_1899515;
}

void func_798(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_456(*uParam0);
	iVar1 = func_457(*uParam0);
	iVar2 = func_459(*uParam0);
	iVar3 = func_460(*uParam0);
	iVar4 = func_822(*uParam0);
	iVar5 = func_823(*uParam0);
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
	iVar6 = func_639(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_639(iVar1, iVar0);
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
	func_824(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_799(int iParam0)
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

void func_800(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_825(iParam0, iParam1))
		{
			if (func_826(iParam0, iParam1))
			{
				if (func_827(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_828(iParam0);
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

void func_801(int iParam0, bool bParam1)
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

void func_802(int iParam0, int iParam1)
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

struct<4> /*32*/ func_803()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_804(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & 32 != 0;
}

int func_805(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_740(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_806(bool bParam0)
{
	func_829(bParam0);
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

bool func_807(int iParam0, var uParam1)
{
	if (!func_830(iParam0))
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

int func_808(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_809(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_223(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_229(&(iParam1->f_6), 0, 1);
	}
	if (!func_223(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_786(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_831(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_223(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_816(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_832(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_833(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_224(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_832(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_226(iParam1->f_6, 0, 1);
				}
				else
				{
					func_226(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_810(int* iParam0, int iParam1)
{
	if (!func_228(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_26(iParam0, 14);
		}
	}
}

bool func_811(int iParam0)
{
	return Global_22 & iParam0 != 0;
}

void func_812(int iParam0)
{
	Global_22 |= iParam0;
}

int func_813(int iParam0, int iParam1)
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

bool func_814(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_815(int iParam0, bool bParam1)
{
	if (bParam1 && !func_223(iParam0))
	{
		return false;
	}
	return !func_634(iParam0, 4);
}

void func_816(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_223(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_442(iParam0);
	func_832(iParam0, 18, 0, 1);
	func_832(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_817(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_223(iParam0))
	{
		return false;
	}
	iVar0 = func_442(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_818(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_223(iParam0))
	{
		return false;
	}
	iVar0 = func_442(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_819(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_442(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_820(int iParam0)
{
	return iParam0 > -1;
}

bool func_821(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_822(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_823(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

void func_824(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_834(uParam0, iParam6);
	func_835(uParam0, iParam5);
	func_836(uParam0, iParam4);
	func_837(uParam0, iParam3);
	func_838(uParam0, iParam2);
	func_839(uParam0, iParam1);
}

bool func_825(int iParam0, int iParam1)
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

bool func_826(int iParam0, int iParam1)
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

bool func_827(int iParam0, int iParam1)
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
	if (!func_825(iParam0, iVar0))
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

void func_828(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_829(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_830(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_831(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_634(iVar0, 2))
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
				func_840(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_832(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_442(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_833(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_442(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_834(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 -= *uParam0 & 2080374784;
	if (iParam1 < 1898)
	{
		*uParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*uParam0 |= (1 << 31);
	}
	else
	{
		*uParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*uParam0 -= *uParam0 & (1 << 31);
	}
}

void func_835(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 62914560;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_836(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_457(*uParam0);
	iVar1 = func_456(*uParam0);
	if (iParam1 < 1 || iParam1 > func_639(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 4063232;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_837(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 -= *uParam0 & 126976;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_838(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 4032;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_839(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 63;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

void func_840(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_444(iParam0, 1);
	func_445(iParam0, 1);
	func_446(iParam0, 128);
}

