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
	struct<193> /*1544*/ sLocal_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_207 = 0;
	struct<32> /*256*/ sLocal_208[3];
	struct<2> /*16*/ sLocal_305[8];
	struct<6> /*48*/ sLocal_322 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	struct<9> /*72*/ sLocal_330[3];
	struct<13> /*104*/ sLocal_358[2];
	char[] cLocal_385[8] = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	struct<21> /*168*/ sLocal_407[3];
	struct<17> /*136*/ sLocal_471[3];
	int iLocal_523 = 0;
	Vector3 vLocal_524 = { 0.0f, 0.0f, 0.0f };
	float fLocal_527 = 0.0f;
	int iLocal_528[3] = { 0, 0, 0 };
	var uLocal_532[3] = { 0, 0, 0 };
	var uLocal_536[3] = { 0, 0, 0 };
	int iLocal_540[1] = { 0 };
	int iLocal_542[1] = { 0 };
	int iLocal_544[1] = { 0 };
	bool bLocal_546[1] = { false };
	bool bLocal_548[1] = { false };
	bool bLocal_550 = false;
	bool bLocal_551 = false;
	bool bLocal_552 = false;
	struct<22> /*176*/ sLocal_553 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_575 = 3;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	var uLocal_580[3] = { 0, 0, 0 };
	int iLocal_584[3] = { 0, 0, 0 };
	int iLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	float fLocal_593 = 0.0f;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	Vector3 vLocal_612[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	Vector3 vLocal_640 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_643 = { 0.0f, 0.0f, 0.0f };
	int iLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	bool bLocal_649 = false;
	Vector3 vLocal_650 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_653 = false;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 1065353216;
	var uLocal_665 = 1065353216;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 1065353216;
	var uLocal_670 = 1065353216;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 1065353216;
	var uLocal_675 = 1065353216;
	var uLocal_676 = 0;
	var uLocal_677 = 1040187392;
	var uLocal_678 = 1040187392;
	var uLocal_679 = -1;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = -1082130432;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
	int iLocal_701 = 0;
	int iLocal_702 = 0;
	bool bLocal_703 = false;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	bool bLocal_709 = false;
	int iLocal_710 = 0;
	bool bLocal_711 = false;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	int iLocal_729[3] = { 0, 0, 0 };
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	float fLocal_739 = 0.0f;
	bool bLocal_740 = false;
	int iLocal_741 = 0;
	int iLocal_742 = 0;
	int iLocal_743[3] = { 0, 0, 0 };
	bool bLocal_747 = false;
	int iLocal_748 = 0;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#pragma endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	fLocal_593 = 1E+08f;
	iLocal_700 = joaat("P_LANTERN04XLOWFUEL");
	fLocal_739 = -1.0f;
	sLocal_14.f_3 = func_1(&vScriptParam_0);
	sLocal_14.f_43 = func_2();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_740 = true;
	}
	if (!bLocal_740)
	{
		sLocal_14.f_161 = func_3(vScriptParam_0.z, 2);
		func_4(&sLocal_14, 1);
		func_5();
	}
	while (true)
	{
		func_7(bLocal_740, 884, 0);
		if (bLocal_740)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_713)
			{
				case 0:
					if (func_8())
					{
						PED::_0x9851DE7AEC10B4E1(sLocal_14.f_51, 5.0f, 1, 0);
						iLocal_713 = 1;
					}
					break;
				case 1:
					if (func_9(&sLocal_14, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_10(sLocal_14.f_51, 5.0f, 0);
						func_11(&sLocal_14, &iLocal_738, &iLocal_737);
						if (!sLocal_14.f_161)
						{
							if (func_12())
							{
								func_6();
							}
						}
						else if (func_13())
						{
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(22, 24);
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
							if (func_14())
							{
								iVar2 = iVar0;
							}
							else
							{
								iVar2 = iVar1;
							}
							CLOCK::SET_CLOCK_TIME(iVar2, MISC::GET_RANDOM_INT_IN_RANGE(0, 60), MISC::GET_RANDOM_INT_IN_RANGE(0, 60));
						}
						func_15();
						iLocal_713 = 3;
					}
					else if (sLocal_14.f_160)
					{
						func_6();
					}
					break;
				case 3:
					if (func_16())
					{
						func_17(0.0f);
						func_18(1);
						func_19();
						iLocal_698 = PLAYER::PLAYER_ID();
						iLocal_713 = 4;
					}
					break;
				case 4:
					if (!func_20(&sLocal_14, &iLocal_528, 0, 1, 1, 0, 1, 0))
					{
						func_6();
					}
					if (!sLocal_14.f_46)
					{
						if (func_21())
						{
							func_22(&sLocal_358);
							func_18(0);
							func_23();
							sLocal_14.f_46 = 1;
							if (iLocal_523 == 1)
							{
								if (func_24())
								{
									func_25(sLocal_322.f_0, "PBL_BREAKOUT", 1);
									func_26(1);
									func_27(&iLocal_579, (1 << 16), 0);
									func_27(&iLocal_579, 4, 0);
								}
								else
								{
									func_27(&iLocal_579, 4, 0);
								}
							}
							else
							{
								func_28();
							}
							func_29();
						}
					}
					if (func_30())
					{
						sLocal_14.f_50 = 1;
						func_23();
						func_6();
					}
					if (func_31(&sLocal_14, &iLocal_528, sLocal_14.f_46, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						sLocal_14.f_50 = 1;
						func_6();
					}
					break;
			}
			BUILTIN::WAIT(sLocal_14.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

int func_2()
{
	return Global_1894899.f_2;
}

bool func_3(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_4(var uParam0, bool bParam1)
{
	func_32(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_33("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_5()
{
	int iVar0;

	func_34();
	func_35(&(sLocal_14.f_5));
	func_32(&(sLocal_14.f_5));
	func_36(&(sLocal_14.f_5), 1);
	func_37(&(sLocal_14.f_5), 1);
	func_38(&(sLocal_14.f_5), 0);
	func_39(&(sLocal_14.f_5), 1);
	func_40(&(sLocal_14.f_5), 1);
	func_41(&(sLocal_14.f_5), 1);
	func_42(&(sLocal_14.f_5), 1);
	func_43(&(sLocal_14.f_5), 1);
	func_44(&(sLocal_14.f_5), 1);
	func_45(&(sLocal_14.f_5), 0);
	func_46(&(sLocal_14.f_5), 10.0f);
	func_47(&(sLocal_14.f_5), 10.0f);
	func_48(&(sLocal_14.f_5), 10.0f);
	func_49(&(sLocal_14.f_5), 0);
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 20 || iVar0 < 5)
	{
		if (!func_50(iLocal_579, (1 << 29)))
		{
			func_27(&iLocal_579, (1 << 29), 0);
		}
	}
}

void func_6()
{
	int iVar0;
	int iVar1;

	func_51(&uLocal_704);
	iVar0 = PLAYER::PLAYER_ID();
	if (MAP::DOES_BLIP_EXIST(uLocal_536[2]))
	{
		func_52(&(uLocal_536[2]));
	}
	if (func_53(2, 8))
	{
		if (func_54(iLocal_528[2], 0, 0))
		{
			func_55(iLocal_528[2], 0);
		}
	}
	func_56();
	func_18(0);
	func_57();
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 != 2)
		{
			if (func_54(iLocal_528[iVar1], 0, 0))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_528[iVar1], joaat("REL_PLAYER_DISLIKE"));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_528[iVar1]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_528[iVar1], 243, false);
			PED::SET_PED_KEEP_TASK(iLocal_528[iVar1], true);
			if (func_54(iLocal_528[iVar1], 0, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_528[iVar1], 301, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[iVar1], 130, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_528[iVar1]));
		}
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_528[iVar1], true);
		iVar1++;
	}
	func_58();
	PED::SET_PED_KEEP_TASK(iLocal_528[0], true);
	PED::SET_PED_KEEP_TASK(iLocal_528[1], true);
	if (iLocal_712 < 3)
	{
		sLocal_14.f_45 = 0;
	}
	func_59(&sLocal_14, &iLocal_528, &uLocal_536, 0, iLocal_738, iLocal_737, 1, 1, 1, 1);
	func_60(&iLocal_528);
	func_61(sLocal_322.f_0);
	func_62(1);
	func_22(&sLocal_358);
	PLAYER::_0x3A8611BD7BDE84F7(iVar0, -1.0f);
	PLAYER::_0xC6366A585659D15C(iVar0, 0);
	PLAYER::_0x98CD760DE43B612E(iVar0, 0);
	PLAYER::_0x628E742FE1F79C4A(iVar0, 0);
	func_57();
	func_63((1 << 10));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_64(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Stack.Invoke(iParam1);
		}
	}
}

bool func_8()
{
	switch (iLocal_715)
	{
		case 0:
			if (func_65(&sLocal_14))
			{
				func_66(&bLocal_653);
				func_67();
				func_68();
				iLocal_715 = 1;
			}
			break;
		case 1:
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_322.f_0, true, false))
			{
				return false;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_322.f_5))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_322.f_1, true, false))
				{
					return false;
				}
			}
			if (iLocal_523 == 1)
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_MAIN");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_BREAKOUT");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_QUICKEXIT");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_PUNCH");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_PUNCH2");
			}
			else
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_ACTION");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_BRKOUT_GROUND");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_BRKOUT_WALL");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_QUICK");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_1, "PBL_ACTION");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_1, "PBL_BRKOUT_GROUND");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_1, "PBL_BRKOUT_WALL");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_1, "PBL_QUICK");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_WALL_BREAKOUT_LEFT");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_WALL_BREAKOUT_RIGHT");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_WALL_BREAKOUT_BACK");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_GROUND_BREAKOUT_LEFT");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_GROUND_BREAKOUT_RIGHT");
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_GROUND_BREAKOUT_BACK");
			}
			iLocal_715 = 2;
			break;
		case 2:
			if (!func_69())
			{
				return false;
			}
			if (!func_70(&sLocal_208))
			{
				return false;
			}
			if (iLocal_523 == 1)
			{
				if ((((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_MAIN") || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_BREAKOUT")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_QUICKEXIT")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_PUNCH")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_PUNCH2"))
				{
					return false;
				}
			}
			else if (((((((((((((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_ACTION") || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_BRKOUT_GROUND")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_BRKOUT_WALL")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_QUICK")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_1, "PBL_ACTION")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_1, "PBL_BRKOUT_GROUND")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_1, "PBL_BRKOUT_WALL")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_1, "PBL_QUICK")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_WALL_BREAKOUT_LEFT")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_WALL_BREAKOUT_RIGHT")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_WALL_BREAKOUT_BACK")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_GROUND_BREAKOUT_LEFT")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_GROUND_BREAKOUT_RIGHT")) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_322.f_0, "PBL_GROUND_BREAKOUT_BACK"))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_9(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam6 || func_71(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_72(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7.0f;
				if (func_73(uParam0->f_3, 1))
				{
					fVar0 = 20.0f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, (1 << 21));
			}
			if (iParam5 == 1)
			{
				func_74(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5.0f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_75(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_10(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 9;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 9;
			*iParam2 = 1;
			break;
		case 2:
			*iParam1 = 11;
			*iParam2 = 0;
			break;
	}
}

bool func_12()
{
	if (sLocal_14.f_3 == 92)
	{
		if (func_50(iLocal_579, (1 << 22)))
		{
			return true;
		}
		if (!func_76(128))
		{
			if (func_13())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_13()
{
	switch (iLocal_738)
	{
		case 9:
			switch (iLocal_737)
			{
				case 0:
					break;
			}
			break;
		case 11:
			switch (iLocal_737)
			{
				case 0:
					break;
				case 2:
					break;
			}
			break;
	}
	return false;
}

bool func_14()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

void func_15()
{
	int iVar0;
	int iVar1;

	func_11(&sLocal_14, &iVar1, &iVar0);
	if (iVar1 == 11)
	{
		iLocal_646 = 2;
	}
	else if (iVar1 == 9)
	{
		iLocal_646 = 0;
	}
	switch (iVar1)
	{
		case 9:
			switch (iVar0)
			{
				case 0:
					sLocal_208[1 /*32*/].f_9 = 322.0161f;
					vLocal_524 = { -295.439f, 734.9f, 116.6f /*3*/ };
					fLocal_527 = 100.0f;
					sLocal_208[0 /*32*/].f_15 = { -305.3418f, 741.3826f, 117.1479f /*3*/ };
					sLocal_208[0 /*32*/].f_18 = 305.2172f;
					sLocal_208[1 /*32*/].f_15 = { -303.5301f, 739.9963f, 117.9182f /*3*/ };
					sLocal_208[1 /*32*/].f_18 = 312.2172f;
					sLocal_330[0 /*9*/] = { -299.6043f, 738.5725f, 116.726f /*3*/ };
					sLocal_330[0 /*9*/].f_3 = 4.0f;
					sLocal_330[1 /*9*/] = { -290.2604f, 736.2405f, 117.1729f /*3*/ };
					sLocal_330[1 /*9*/].f_3 = 2.55f;
					sLocal_208[2 /*32*/].f_15 = { -267.4409f, 669.7515f, 113.4242f /*3*/ };
					sLocal_208[2 /*32*/].f_18 = 150.1192f;
					break;
				case 1:
					sLocal_208[1 /*32*/].f_9 = 130.0f;
					sLocal_330[0 /*9*/] = { -386.3f, 822.5f, 115.7f /*3*/ };
					sLocal_330[0 /*9*/].f_3 = 3.0f;
					sLocal_330[1 /*9*/] = { -346.7f, 844.5f, 117.0f /*3*/ };
					sLocal_330[1 /*9*/].f_3 = 5.5f;
					vLocal_524 = { -363.15f, 832.26f, 115.8f /*3*/ };
					fLocal_527 = 200.5f;
					sLocal_208[1 /*32*/].f_15 = { -371.2f, 830.8f, 116.4f /*3*/ };
					sLocal_208[1 /*32*/].f_18 = -142.84f;
					sLocal_208[0 /*32*/].f_15 = { -373.0f, 829.99f, 116.4f /*3*/ };
					sLocal_208[0 /*32*/].f_18 = -148.82f;
					sLocal_208[2 /*32*/].f_15 = { -267.4409f, 669.7515f, 113.4242f /*3*/ };
					sLocal_208[2 /*32*/].f_18 = 150.1192f;
					break;
			}
			break;
		case 11:
			switch (iVar0)
			{
				case 0:
					sLocal_208[1 /*32*/].f_9 = 85.0f;
					sLocal_330[0 /*9*/] = { 1338.974f, -1364.828f, 78.43774f /*3*/ };
					sLocal_330[1 /*9*/] = { 1332.042f, -1363.909f, 78.46366f /*3*/ };
					sLocal_330[0 /*9*/].f_3 = 3.15f;
					sLocal_330[1 /*9*/].f_3 = 3.1f;
					vLocal_524 = { 1330.771f, -1367.377f, 79.444f /*3*/ };
					fLocal_527 = -95.15f;
					iLocal_542[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1333.232f, -1372.411f, 79.96022f, 0.0f, 0.0f, -8.999998f, 21.479f, 9.926933f, 7.257f, "volNonClose0");
					iLocal_540[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1341.319f, -1374.822f, 82.59002f, 0.0f, 0.0f, -9.0f, 23.34503f, 11.8652f, 6.637836f, "volNonApproach0");
					sLocal_208[0 /*32*/].f_15 = { 1319.263f, -1364.595f, 77.47489f /*3*/ };
					sLocal_208[0 /*32*/].f_18 = -47.96f;
					sLocal_208[1 /*32*/].f_15 = { 1322.616f, -1364.093f, 77.95048f /*3*/ };
					sLocal_208[1 /*32*/].f_18 = -51.24f;
					sLocal_208[0 /*32*/].f_6 = { 1330.311f, -1365.189f, 79.6978f /*3*/ };
					sLocal_208[0 /*32*/].f_9 = -105.91f;
					sLocal_208[1 /*32*/].f_6 = { 1329.886f, -1364.514f, 79.5578f /*3*/ };
					sLocal_208[1 /*32*/].f_9 = -140.74f;
					sLocal_208[2 /*32*/].f_6 = { 1331.398f, -1365.388f, 79.6557f /*3*/ };
					sLocal_208[2 /*32*/].f_9 = 70.92f;
					sLocal_208[2 /*32*/].f_15 = { 1342.14f, -1363.804f, 79.1335f /*3*/ };
					sLocal_208[2 /*32*/].f_18 = 166.8555f;
					break;
				case 1:
					sLocal_208[1 /*32*/].f_9 = 110.0f;
					sLocal_330[0 /*9*/] = { 1292.2f, -1316.6f, 76.6f /*3*/ };
					sLocal_330[1 /*9*/] = { 1304.2f, -1329.4f, 76.7f /*3*/ };
					sLocal_330[0 /*9*/].f_3 = 4.0f;
					sLocal_330[1 /*9*/].f_3 = 4.0f;
					vLocal_524 = { 1295.35f, -1327.66f, 76.91f /*3*/ };
					fLocal_527 = 44.95f;
					iLocal_542[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volNonApproach0");
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_542[0], 1284.786f, -1334.187f, 77.50498f, 0.0f, 0.0f, -48.52135f, 8.486638f, 7.098492f, 2.992859f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_542[0], 1289.996f, -1339.616f, 77.50498f, 0.0f, 0.0f, 5.846964f, 8.486638f, 7.098492f, 2.992859f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_542[0], 1285.414f, -1340.601f, 77.50498f, 0.0f, 0.0f, -32.81059f, 17.9757f, 7.098492f, 2.992859f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_542[0], 1287.045f, -1332.269f, 77.50498f, 0.0f, 0.0f, -25.64329f, 4.998636f, 3.091529f, 2.992859f);
					iLocal_544[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1313.728f, -1337.409f, 76.62299f, 0.0f, 0.0f, 70.00001f, 13.30591f, 95.04527f, 18.75799f, "volRoadBlock0");
					sLocal_208[0 /*32*/].f_15 = { 1299.209f, -1325.43f, 76.02338f /*3*/ };
					sLocal_208[0 /*32*/].f_18 = -155.6f;
					sLocal_208[1 /*32*/].f_15 = { 1300.854f, -1324.348f, 75.84612f /*3*/ };
					sLocal_208[1 /*32*/].f_18 = -134.69f;
					sLocal_208[2 /*32*/].f_15 = { 1342.14f, -1363.804f, 79.1335f /*3*/ };
					sLocal_208[2 /*32*/].f_18 = 166.8555f;
					break;
				case 2:
					sLocal_208[1 /*32*/].f_9 = 163.0f;
					sLocal_330[0 /*9*/] = { 1468.987f, -1366.38f, 77.7758f /*3*/ };
					sLocal_330[1 /*9*/] = { 1457.409f, -1361.21f, 77.8266f /*3*/ };
					sLocal_330[0 /*9*/].f_3 = 3.0f;
					sLocal_330[1 /*9*/].f_3 = 3.0f;
					vLocal_524 = { 1460.92f, -1362.4f, 78.49f /*3*/ };
					fLocal_527 = 240.85f;
					iLocal_542[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1461.364f, -1368.129f, 79.43551f, 0.0f, 0.0f, 154.72f, 11.502f, 10.39275f, 2.681242f, "volNonClose0");
					sLocal_208[0 /*32*/].f_15 = { 1454.292f, -1359.467f, 79.8424f /*3*/ };
					sLocal_208[0 /*32*/].f_18 = 114.26f;
					sLocal_208[1 /*32*/].f_15 = { 1452.881f, -1357.784f, 79.1527f /*3*/ };
					sLocal_208[1 /*32*/].f_18 = 93.53f;
					sLocal_208[2 /*32*/].f_15 = { 1342.14f, -1363.804f, 79.1335f /*3*/ };
					sLocal_208[2 /*32*/].f_18 = 166.8555f;
					break;
			}
			break;
	}
	if (func_77(sLocal_208[0 /*32*/].f_6))
	{
		sLocal_208[0 /*32*/].f_6 = { vLocal_524 /*3*/ };
	}
	if (func_77(sLocal_208[1 /*32*/].f_6))
	{
		sLocal_208[1 /*32*/].f_6 = { vLocal_524 /*3*/ };
	}
	if (func_77(sLocal_208[2 /*32*/].f_6))
	{
		sLocal_208[2 /*32*/].f_6 = { vLocal_524 /*3*/ };
	}
}

bool func_16()
{
	bool bVar0;
	int iVar1;

	switch (iLocal_714)
	{
		case 0:
			if (!func_78(sLocal_14.f_51, sLocal_14.f_51.f_3, &sLocal_208, &iLocal_528, 1, 0, -1, 1))
			{
				return false;
			}
			func_79();
			if (func_54(iLocal_528[2], 0, 0))
			{
				PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_528[2], "Default_Panic");
				PED::_REQUEST_MOTION_TYPE_ASSET(-1073596206, iLocal_528[2]);
			}
			iLocal_714 = 1;
			break;
		case 1:
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < iLocal_528)
			{
				iLocal_584[iVar1] = -1;
				if (func_54(iLocal_528[iVar1], 0, 0))
				{
					if (!PED::IS_PED_READY_TO_RENDER(iLocal_528[iVar1]))
					{
						bVar0 = false;
					}
				}
				iVar1++;
			}
			if (bVar0)
			{
				iLocal_714 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_17(float fParam0)
{
	func_80(&(sLocal_358[0 /*13*/]), joaat("EVENT_SHOCKING_BEAT_DISTURBING"), "farDisturbing", iLocal_528[0], fParam0, 25.0f, 16.0f, 0);
}

void func_18(bool bParam0)
{
	int iVar0;
	bool bVar1;

	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_544[iVar0]))
			{
				bVar1 = true;
				PATHFIND::SET_ROADS_IN_VOLUME(iLocal_544[iVar0], false, false, false);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_544[iVar0], 0, 0, 0, -1, -1, 0);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_544[iVar0], 0, 0, 0, -1, -1, 0);
			}
			iVar0++;
		}
		if (bVar1)
		{
			func_27(&iLocal_579, 32, 0);
		}
	}
	else if (func_50(iLocal_579, 32))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_544[iVar0]))
			{
				PATHFIND::RESET_ROADS_IN_VOLUME(iLocal_544[iVar0], false);
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_544[iVar0]);
				POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_544[iVar0]);
			}
			iVar0++;
		}
		func_81(&iLocal_579, 32);
	}
}

void func_19()
{
	var uVar0;
	var uVar3;
	int iVar6;
	Vector3 vVar7;
	float fVar10;

	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_322.f_0, vLocal_524, 0.0f, 0.0f, fLocal_527, 2);
	if (iLocal_523 == 1)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_322.f_0, "Odriscoll01", iLocal_528[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_322.f_0, "Odriscoll02", iLocal_528[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_322.f_0, "Victim", iLocal_528[2], 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_322.f_1, vLocal_524, 0.0f, 0.0f, fLocal_527, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_322.f_0, "thug_A", iLocal_528[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_322.f_0, "vic", iLocal_528[2], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_322.f_1, "thug_B", iLocal_528[1], 0);
	}
	ANIMSCENE::GET_ANIM_SCENE_ORIGIN(sLocal_322.f_0, &uVar0, &uVar3, 2);
	iVar6 = 0;
	while (iVar6 < iLocal_528)
	{
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iLocal_528[iVar6], true, false) /*3*/ };
		fVar10 = ENTITY::GET_ENTITY_HEADING(iLocal_528[iVar6]);
		iVar6++;
	}
}

bool func_20(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_82(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_83(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & (1 << 14) != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_84(&(uParam0->f_5));
			}
			func_85(&(uParam0->f_5), (1 << 14));
		}
	}
	if (!uParam0->f_48 && !func_86(uParam0->f_3, (1 << 18)))
	{
		if (uParam0->f_5 & (1 << 11) != 0)
		{
			func_87(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_88(&(uParam0->f_121));
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
					func_89(uParam0, uParam0->f_193, 2.0f);
				}
			}
			break;
		case 2:
			if (!func_90(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_73(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				func_91(uParam0, (*iParam1)[0]);
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

bool func_21()
{
	if (func_92() || func_50(iLocal_579, 16))
	{
		if (iLocal_716 == 8)
		{
			if (!func_93(&uLocal_628))
			{
				func_94(&uLocal_628, 0);
			}
			else if (func_95(&uLocal_628, 3.0f))
			{
				return true;
			}
		}
		else if (iLocal_716 == (1 << 14))
		{
			func_27(&iLocal_579, (1 << 22), 0);
			return false;
		}
		else if (iLocal_716 == 4)
		{
			func_27(&iLocal_579, 8, 0);
			return true;
		}
		else if (func_96(0, 1, Global_35, 1))
		{
			return true;
		}
	}
	return false;
}

void func_22(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*13*/])->f_1 != 0)
		{
			func_97(uParam0[iVar0 /*13*/], 0);
		}
		iVar0++;
	}
}

void func_23()
{
	if (!sLocal_14.f_44)
	{
		sLocal_14.f_44 = 1;
	}
}

bool func_24()
{
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_322.f_0, false))
	{
		if ((bLocal_551 || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_322.f_0, "action", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_322.f_0, "base_punch", true))
		{
			return true;
		}
	}
	return false;
}

bool func_25(int iParam0, char* sParam1, bool bParam2)
{
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam0, sParam1))
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iParam0, sParam1, bParam2);
			return true;
		}
	}
	return false;
}

void func_26(bool bParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_322.f_0, "BASE_BOOL", bParam0, false);
	bLocal_550 = bParam0;
}

void func_27(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	func_98(iParam0, iParam1);
}

int func_28()
{
	var uVar0;
	int iVar1;
	char* sVar2;

	if (func_99(iLocal_528[0], joaat("BWALLBREAKOUT"), "bWallBreakout", uVar0, 1.6f, 1))
	{
		iLocal_404 = 1;
	}
	else if (func_99(iLocal_528[0], joaat("BGROUNDBREAKOUT"), "bGroundBreakout", uVar0, 1.7f, 1))
	{
		iLocal_404 = 2;
	}
	if (iLocal_404 == 0)
	{
		if (func_99(iLocal_528[2], joaat("BWALLBREAKOUT"), "bWallBreakout", uVar0, 1.5f, 1))
		{
			iLocal_404 = 1;
		}
		else if (func_99(iLocal_528[2], joaat("BGROUNDBREAKOUT"), "bGroundBreakout", uVar0, 1.6f, 1))
		{
			iLocal_404 = 2;
		}
	}
	iVar1 = func_100();
	switch (iLocal_404)
	{
		case 1:
			switch (iVar1)
			{
				case 3:
					sVar2 = "PBL_WALL_BREAKOUT_LEFT";
					break;
				case 2:
					sVar2 = "PBL_WALL_BREAKOUT_RIGHT";
					break;
				case 1:
					sVar2 = "PBL_WALL_BREAKOUT_BACK";
					break;
				default:
					sVar2 = "PBL_BRKOUT_WALL";
					break;
			}
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, sVar2, false);
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_322.f_1, "PBL_BRKOUT_WALL", false);
			break;
		case 2:
			switch (iVar1)
			{
				case 3:
					sVar2 = "PBL_GROUND_BREAKOUT_LEFT";
					break;
				case 2:
					sVar2 = "PBL_GROUND_BREAKOUT_RIGHT";
					break;
				case 1:
					sVar2 = "PBL_GROUND_BREAKOUT_BACK";
					break;
				default:
					sVar2 = "PBL_BRKOUT_GROUND";
					break;
			}
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, sVar2, false);
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_322.f_1, "PBL_BRKOUT_GROUND", false);
			break;
		case 0:
			if (!func_53(2, 8))
			{
				if (!func_101(iLocal_528[2], sLocal_322.f_0, "vic", 0, 0, 1, 0))
				{
					if (!func_99(iLocal_528[2], joaat("BCANTBREAKOUT"), "bCantBreakout", uVar0, 1.5f, 1) && !func_99(iLocal_528[0], joaat("BCANTBREAKOUT"), "bCantBreakout", uVar0, 1.5f, 1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_322.f_0, "vic", iLocal_528[2]);
					}
					else
					{
						func_102(2, (1 << 9));
					}
				}
			}
			if (!func_101(iLocal_528[0], sLocal_322.f_0, "thug_a", 0, 0, 1, 0))
			{
				if (!func_99(iLocal_528[2], joaat("BCANTBREAKOUT"), "bCantBreakout", uVar0, 1.5f, 1) && !func_99(iLocal_528[0], joaat("BCANTBREAKOUT"), "bCantBreakout", uVar0, 1.5f, 1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_322.f_0, "thug_a", iLocal_528[0]);
				}
				else
				{
					func_102(0, (1 << 9));
				}
			}
			if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_528[1], sLocal_322.f_1))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_322.f_1, "thug_b", iLocal_528[1]);
			}
			break;
	}
	return 1;
}

void func_29()
{
	func_103(&sLocal_471, 1, 1, 1, 0);
	if (func_54(iLocal_528[2], 0, 0))
	{
		func_104(iLocal_528[2], 0);
		func_105(&(iLocal_528[2]), &(sLocal_407[2 /*21*/]), &sLocal_471, 1, 1);
	}
	if (func_54(iLocal_528[0], 0, 0) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_528[0], sLocal_322.f_0))
	{
		func_104(iLocal_528[0], 0);
	}
	func_106();
	PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 243, false);
	func_107(5);
}

bool func_30()
{
	int iVar0;
	var uVar1;

	func_108();
	iVar0 = -1;
	if (iLocal_712 >= 5)
	{
	}
	else
	{
		iVar0 = func_109(&uVar1, (fLocal_739 < 0.0f && !func_50(iLocal_579, (1 << 18))));
	}
	if (iVar0 == -1 && iLocal_712 > 2)
	{
		if (((iLocal_702 != Global_35 && (!func_54(iLocal_528[2], 0, 1) || iLocal_702 == iLocal_528[1])) && func_95(&uLocal_637, 2.5f)) && iLocal_710 < 2)
		{
			if (!func_50(iLocal_579, (1 << 26)))
			{
				if (func_50(iLocal_579, (1 << 17)) && func_50(iLocal_579, (1 << 19)))
				{
					func_110(0, 1);
				}
				else
				{
					func_110(1, 1);
				}
			}
			func_111(&uLocal_637);
		}
	}
	switch (iLocal_712)
	{
		case 0:
			func_112();
			if (func_113() == 11)
			{
				func_114(&uLocal_733, &uLocal_735, sLocal_14.f_51, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f, 0, 0, 1, 0, 0);
				func_114(&uLocal_734, &uLocal_736, 1343.603f, -1359.33f, 79.281f, 0.0f, 0.0f, -12.0f, 15.0f, 12.0f, 5.0f, 1, 0, 1, 0, "volExtraBlocking");
			}
			else
			{
				func_114(&uLocal_733, &uLocal_735, sLocal_14.f_51, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f, 0, 0, 1, 0, 0);
			}
			func_107(2);
			break;
		case 2:
			if (iLocal_523 == 1)
			{
				func_115(iVar0);
			}
			else
			{
				func_116();
			}
			break;
		case 3:
			func_117();
			if (iLocal_523 == 1)
			{
				func_118(iVar0);
			}
			else
			{
				func_119(iVar0);
			}
			break;
		case 4:
			if (func_120(iVar0))
			{
				return true;
			}
			break;
		case 5:
			func_121(0);
			func_62(0);
			if (func_122())
			{
				if (func_123())
				{
					if (func_54(iLocal_528[2], 0, 1) && !func_53(2, 8))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_528[2]);
						func_107(6);
					}
					else
					{
						return true;
					}
				}
			}
			break;
		case 6:
			if (func_124(iLocal_528[2], joaat("SCRIPT_TASK_KNOCKED_OUT")))
			{
				if (func_50(iLocal_579, 1))
				{
					func_81(&iLocal_579, 1);
				}
				if (!func_93(&uLocal_634))
				{
					func_94(&uLocal_634, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 252, false);
				}
				else if (func_95(&uLocal_634, 3.0f))
				{
					TASK::_0xFFB520A3E16F7B7B(iLocal_528[2], 0.0f);
					func_125(&uLocal_634);
				}
			}
			else if (func_126())
			{
				if (func_50(iLocal_579, (1 << 30)))
				{
					PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 3, 2, true);
					PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 4, 2, true);
				}
				func_57();
				func_107(7);
			}
			func_62(0);
			break;
		case 7:
			if (!func_54(iLocal_528[2], 0, 1) || func_127(Global_35, iLocal_528[2], 1, 1) > 20.0f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_31(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	Vector3 vVar1;

	fVar0 = 0.0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_128())
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
			else if (func_129(uParam0->f_3))
			{
				fVar0 = 250.0f;
			}
			else if (func_73(uParam0->f_3, (1 << 17)))
			{
				fVar0 = 70.0f;
				fVar0 += 10.0f;
			}
			else if (func_73(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215.0f;
				fVar0 += 20.0f;
				if (uParam0->f_48)
				{
					fVar0 -= 80.0f;
				}
			}
			else if (func_73(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_130(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 /*3*/ };
				if (func_130(Global_36, vVar1) > fVar0)
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

void func_32(var uParam0)
{
	func_45(uParam0, 0);
	func_41(uParam0, 0);
	func_43(uParam0, 1);
	func_38(uParam0, 1);
	func_131(uParam0, 0);
	func_132(uParam0, 1);
	func_133(uParam0, 1, 1, 1);
}

int func_33(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_134(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_135(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_134(sVar0, iParam1, 0, 0, 1, 1);
}

void func_34()
{
	sLocal_553 = { 0.0f, 0.0f, 0.0f /*3*/ };
	sLocal_553.f_3 = Global_35;
	sLocal_553.f_8 = 4;
	sLocal_553.f_19 = 4;
	sLocal_553.f_21 = 4;
	sLocal_553.f_17 = 4;
	sLocal_553.f_18 = 4;
	sLocal_553.f_7 = 0;
}

void func_35(var uParam0)
{
	func_47(uParam0, (func_136(uParam0) - 6.0f));
	func_49(uParam0, 1);
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 8);
	}
	else
	{
		func_85(&(uParam0->f_1), 8);
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 2);
	}
	else
	{
		func_85(&(uParam0->f_1), 2);
	}
}

void func_38(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_85(iParam0, 16);
	}
	else
	{
		func_137(iParam0, (1 << 26));
		func_137(iParam0, 16);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 16);
	}
	else
	{
		func_85(&(uParam0->f_1), 16);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 1);
	}
	else
	{
		func_85(&(uParam0->f_1), 1);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_85(&(uParam0->f_1), (1 << 11));
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 4);
	}
	else
	{
		func_85(&(uParam0->f_1), 4);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 256);
	}
	else
	{
		func_85(&(uParam0->f_1), 256);
	}
}

void func_44(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_85(iParam0, 4);
	}
	else
	{
		func_137(iParam0, 4);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_85(&(uParam0->f_1), (1 << 14));
	}
}

void func_46(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

void func_47(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_48(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_85(iParam0, 1);
	}
	else
	{
		func_137(iParam0, 1);
	}
}

bool func_50(int iParam0, int iParam1)
{
	return func_138(iParam0, iParam1);
}

void func_51(int iParam0)
{
	if (func_3(*iParam0, 8))
	{
		AUDIO::_0x660A8F876DF1D4F8(39);
		func_137(iParam0, 8);
	}
}

void func_52(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_53(int iParam0, int iParam1)
{
	return func_138(uLocal_580[iParam0], iParam1);
}

bool func_54(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_139(iParam0, iParam1);
}

void func_55(int iParam0, bool bParam1)
{
	func_140(iParam0, bParam1);
}

void func_56()
{
	func_141(&cLocal_385);
	if (func_50(iLocal_579, 64))
	{
		func_142(Global_35, 1);
		func_81(&iLocal_579, 64);
	}
	if (func_54(iLocal_528[2], 0, 0))
	{
		func_143(iLocal_528[2], 1);
	}
}

void func_57()
{
	if (bLocal_711)
	{
		switch (iLocal_523)
		{
			case 2:
				PED::_0x2B4CE170DE09F346(Global_35, joaat("PLYR_RHD_V1"));
				break;
			case 1:
				PED::_0x2B4CE170DE09F346(Global_35, joaat("PLYR_VAL_V1"));
				break;
		}
		bLocal_711 = false;
	}
}

void func_58()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;

	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	vVar3 = { func_144() /*3*/ };
	vVar6 = { func_145() /*3*/ };
	if (func_54(iLocal_528[0], 0, 1))
	{
		if (func_54(sLocal_208[0 /*32*/].f_11, 0, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar9);
			if (!func_77(vVar0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1.0f, 20000, 1.0f, 1, 40000.0f);
			}
			TASK::TASK_MOUNT_ANIMAL(0, sLocal_208[0 /*32*/].f_11, -1, -1, 1.0f, 1, 0, 0);
			if (!func_77(vVar3))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 1.5f, 20000, 4.0f, 0, 40000.0f);
			}
			TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vVar6, 5.0f, 1.0f, 0, 0);
			func_146(iLocal_528[0], &iVar9, 0, 0, 1, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_528[0], 167, true);
		}
	}
	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (func_54(iLocal_528[1], 0, 1))
	{
		if (func_54(sLocal_208[1 /*32*/].f_11, 0, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar9);
			if (!func_77(vVar0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1.0f, 20000, 1.0f, 1, 40000.0f);
			}
			TASK::TASK_MOUNT_ANIMAL(0, sLocal_208[1 /*32*/].f_11, -1, -1, 1.0f, 1, 0, 0);
			if (!func_77(vVar3))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 1.5f, 20000, 4.0f, 0, 40000.0f);
			}
			TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vVar6, 5.0f, 1.0f, 0, 0);
			func_146(iLocal_528[1], &iVar9, 0.75f, 0, 1, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_528[1], 167, true);
		}
	}
}

void func_59(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_147(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_148(uParam0->f_3, (1 << 19));
		}
	}
	if (func_54(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_54((*iParam1)[iVar0], 0, 0))
			{
				func_149((*iParam1)[iVar0], bVar3);
				if (func_150(uParam0, iParam1[iVar0]))
				{
					func_151(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_54((*iParam1)[iVar0], 0, 1))
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
							func_153((*iParam1)[iVar0], (1 << 30), func_152(iVar0 < iVar2, uParam0->f_98[iVar0], -1.0f), iVar1, 0);
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
		func_154(uParam0);
	}
	func_155(uParam0);
	if (!uParam0->f_186)
	{
		func_82(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_156(uParam0->f_3, uParam0->f_185);
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
		func_157(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_60(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_149((*iParam0)[iVar0], 0);
		iVar0++;
	}
}

void func_61(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_62(bool bParam0)
{
	int iVar0;

	if (!func_50(iLocal_579, (1 << 14)))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (func_54(iLocal_528[iVar0], 0, 1))
			{
				if (PED::IS_PED_SHOOTING(iLocal_528[iVar0]))
				{
					iLocal_741++;
				}
			}
			iVar0++;
		}
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			iLocal_741++;
		}
		if (func_95(&uLocal_603, 10.0f) || bParam0)
		{
			if (iLocal_741 > 7)
			{
				func_158(Global_35);
				func_27(&iLocal_579, (1 << 14), 0);
			}
		}
	}
}

void func_63(int iParam0)
{
	Global_1310750.f_16035 -= Global_1310750.f_16035 & iParam0;
}

bool func_64(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_159(iVar0))
	{
		return false;
	}
	if (func_160(iVar0, 1) || func_160(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_65(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_161(uParam0->f_3);
	iVar1 = func_162(1);
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

void func_66(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_113();
	iVar1 = func_163(iVar0, 0, 0, 0);
	*bParam0 = 0;
	switch (iVar0)
	{
		case 9:
			func_164(&sLocal_14, 0);
			iLocal_523 = 1;
			sLocal_208[0 /*32*/].f_1 = joaat("G_M_M_UNIDUSTER_01");
			sLocal_208[1 /*32*/].f_1 = joaat("G_M_M_UNIDUSTER_01");
			sLocal_208[2 /*32*/].f_1 = joaat("RE_FOOTROBBERY_MALES_01");
			strcpy_s(&(sLocal_208[0 /*32*/].f_23), 64, "0361_G_M_M_UniDuster_03_WHITE_01");
			strcpy_s(&(sLocal_208[1 /*32*/].f_23), 64, "0362_G_M_M_UniDuster_03_WHITE_02");
			strcpy_s(&(sLocal_208[2 /*32*/].f_23), 64, "REFR_Victim");
			sLocal_208[2 /*32*/] = 4;
			sLocal_208[0 /*32*/].f_3 = 1274234949;
			sLocal_208[1 /*32*/].f_3 = 1672902603;
			sLocal_208[2 /*32*/].f_3 = 1784611275;
			break;
		case 0:
		case 11:
			func_164(&sLocal_14, 2);
			iLocal_523 = 2;
			sLocal_208[0 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
			sLocal_208[1 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
			sLocal_208[2 /*32*/].f_1 = joaat("RE_FOOTROBBERY_MALES_01");
			strcpy_s(&(sLocal_208[0 /*32*/].f_23), 64, "0177_G_M_Y_UniExConfeds_01_WHITE_01");
			strcpy_s(&(sLocal_208[1 /*32*/].f_23), 64, "0178_G_M_Y_UniExConfeds_01_WHITE_02");
			strcpy_s(&(sLocal_208[2 /*32*/].f_23), 64, "1030_S_M_M_CoachTaxiDriver_01_WHITE_02");
			sLocal_208[2 /*32*/] = 4;
			sLocal_208[0 /*32*/].f_3 = -307000369;
			sLocal_208[1 /*32*/].f_3 = 32289857;
			sLocal_208[2 /*32*/].f_3 = 2083759476;
			break;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		func_165(&(sLocal_208[iVar2 /*32*/].f_22));
		iVar2++;
	}
	sLocal_208[2 /*32*/].f_12 = 0;
	switch (iVar1)
	{
		case 2:
			sLocal_208[0 /*32*/].f_12 = func_166(iVar1, 0, 1);
			sLocal_208[1 /*32*/].f_12 = func_166(iVar1, 0, 1);
			break;
		default:
			sLocal_208[0 /*32*/].f_12 = func_166(iVar1, 0, 0);
			sLocal_208[1 /*32*/].f_12 = func_166(iVar1, 1, 0);
			break;
	}
	sLocal_208[2 /*32*/].f_13 = 0;
	sLocal_208[0 /*32*/].f_13 = 0;
	sLocal_208[1 /*32*/].f_13 = 0;
	sLocal_208[2 /*32*/].f_19 = 1;
	sLocal_208[0 /*32*/].f_19 = 1;
	sLocal_208[1 /*32*/].f_19 = 1;
	if (*bParam0)
	{
	}
	if (func_50(iLocal_579, (1 << 29)))
	{
		if (STREAMING::IS_MODEL_VALID(iLocal_700))
		{
			STREAMING::REQUEST_MODEL(iLocal_700, false);
		}
	}
	func_167(&sLocal_208);
}

void func_67()
{
	int iVar0;
	char* sVar1;

	sLocal_305[2 /*2*/] = func_168(2);
	sLocal_305[2 /*2*/].f_1 = "dia01_odris02";
	sLocal_305[3 /*2*/] = func_168(3);
	sLocal_305[3 /*2*/].f_1 = "dia02_odris02";
	sLocal_305[4 /*2*/] = func_168(4);
	sLocal_305[4 /*2*/].f_1 = "dia03_odris02";
	sLocal_305[5 /*2*/] = func_168(5);
	sLocal_305[5 /*2*/].f_1 = "dia04_victim";
	sLocal_305[7 /*2*/] = func_168(7);
	sLocal_305[7 /*2*/].f_1 = "base";
	switch (iLocal_523)
	{
		case 2:
			sLocal_305[6 /*2*/] = func_168(6);
			sLocal_305[6 /*2*/].f_1 = "";
			break;
		default:
			sLocal_305[6 /*2*/] = "";
			sLocal_305[6 /*2*/].f_1 = "";
			break;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == 6 && iLocal_523 != 2)
		{
		}
		else
		{
			sVar1 = func_168(iVar0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				STREAMING::REQUEST_ANIM_DICT(sVar1);
			}
		}
		iVar0++;
	}
}

void func_68()
{
	char* sVar0[2];
	int iVar3;

	if (iLocal_523 == 1)
	{
		sLocal_322.f_4 = "script@beat@wilderness@footrobbery@main";
		sVar0[0] = "PBL_MAIN";
	}
	else
	{
		sLocal_322.f_4 = "script@beat@town@footrobbery@leymone_vicThugA";
		sLocal_322.f_5 = "script@beat@town@footrobbery@leymone_thugB";
		sVar0[0] = "PBL_ACTION";
		sVar0[1] = "PBL_ACTION";
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_322.f_4))
	{
		sLocal_322.f_0 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_322.f_4, iVar3, sVar0[0], false, true);
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_322.f_0, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(sLocal_322.f_0);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_322.f_5))
	{
		sLocal_322.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_322.f_5, 0, sVar0[1], false, true);
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_322.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(sLocal_322.f_1);
		}
	}
}

bool func_69()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == 6 && iLocal_523 != 2)
		{
		}
		else
		{
			sVar1 = func_168(iVar0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
				{
					iVar2 = 0;
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_70(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_169(iParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_71(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> /*56*/ sParam4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (sParam4.f_6 > -1)
	{
		*uParam1 = { func_170(iParam0, sParam4.f_6) /*3*/ };
		uParam1->f_4 = sParam4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_171(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_86(iParam0, 128))
			{
				if (!func_172(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_173(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_174(&bVar4, iParam0, uVar2, uVar1) /*3*/ };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_77(*uParam1))
				{
					return func_175(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_176(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(sParam4.f_2, 8))
				{
					func_171(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_177(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_178(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_179(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
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
			if (func_86(iParam0, 128))
			{
				if (!func_180(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_175(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_173(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_177(uParam1))
					{
						return func_175(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_181(iParam0, sParam4.f_1, uParam1, sParam4, iParam14))
			{
				func_171(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_175(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_33("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_33("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_72(var uParam0, int iParam1)
{
	if (func_73(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_183(iParam1, func_182(uParam0), &(uParam0->f_172)))
		{
			if (func_54(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_73(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/] & iParam1 != 0;
}

void func_74(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_185(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, (float)iParam1, (float)iParam1, 5.0f, "Custom Sized Ambient Avoidance");
	}
	else if (func_73(uParam0->f_3, 1) && !func_73(uParam0->f_3, 32))
	{
		func_185(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 6.0f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_73(uParam0->f_3, 2) && !func_73(uParam0->f_3, 32))
	{
		func_185(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 5.0f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171, 2228255, (1 << 18), 0, -1, -1, uParam0->f_175);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_186(uParam0->f_171, 1);
	}
	if (func_73(uParam0->f_3, 1))
	{
		func_185(&(uParam0->f_174), uParam0->f_51, 0.0f, 0.0f, 0.0f, VOLUME::GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_187(uParam0->f_174, 0, (1 << 18), 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_171, iParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
	}
}

float func_75(Vector3 vParam0)
{
	Vector3 vVar0;

	vVar0 = { Global_36 - vParam0 /*3*/ };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

bool func_76(int iParam0)
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
	iVar0 = func_189(func_188());
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

bool func_77(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_78(Vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
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
		if (func_190() || !func_191(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_79()
{
	int iVar0;
	Vector3 vVar1;

	if (func_50(iLocal_579, (1 << 29)))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_700))
		{
			iLocal_699 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_700, func_192(iLocal_738, iLocal_737), false, true, false, true);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_54(iLocal_528[iVar0], 0, 1))
		{
			vVar1 = { sLocal_208[iVar0 /*32*/].f_6 /*3*/ };
			func_193(&vVar1, sLocal_208[iVar0 /*32*/].f_22);
			func_194(iLocal_528[iVar0], &sLocal_14, 0);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_528[iVar0], false);
			PED::SET_LOOTING_FLAG(iLocal_528[iVar0], 4, false);
			if (sLocal_208[iVar0 /*32*/].f_12 != 0)
			{
				uLocal_532[iVar0] = sLocal_208[iVar0 /*32*/].f_11;
				vVar1 = { sLocal_208[iVar0 /*32*/].f_15 /*3*/ };
				func_193(&vVar1, sLocal_208[iVar0 /*32*/].f_22);
				if (!ENTITY::IS_ENTITY_DEAD(sLocal_208[iVar0 /*32*/].f_11))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(sLocal_208[iVar0 /*32*/].f_11, vVar1, sLocal_208[iVar0 /*32*/].f_18, true, false, true);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_208[iVar0 /*32*/].f_11, true);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(sLocal_208[iVar0 /*32*/].f_11, 48, true);
				if (iVar0 < 2)
				{
					PED::SET_PED_CONFIG_FLAG(sLocal_208[iVar0 /*32*/].f_11, 6, true);
				}
			}
			else
			{
				func_195(&(sLocal_208[iVar0 /*32*/].f_11));
			}
			if (iVar0 < 2)
			{
				func_196(&(sLocal_14.f_5), iLocal_528[iVar0], sLocal_208[iVar0 /*32*/].f_11, 0);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_528[iVar0], true, true);
				func_197(iLocal_528[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608, 1065353216, 0);
				func_199(func_198(sLocal_208[iVar0 /*32*/].f_1), iLocal_528[iVar0]);
				PED::SET_PED_FIRING_PATTERN(iLocal_528[iVar0], joaat("FIRING_PATTERN_BURST_FIRE"));
				PED::SET_PED_ACCURACY(iLocal_528[iVar0], 15);
				PED::SET_PED_COMBAT_RANGE(iLocal_528[iVar0], 0);
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_528[iVar0], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_528[iVar0], 93, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[iVar0], 233, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[iVar0], 6, true);
			}
		}
		iVar0++;
	}
	func_200(iLocal_528[0], &(sLocal_208[0 /*32*/].f_23), 0);
	func_200(iLocal_528[1], &(sLocal_208[1 /*32*/].f_23), 0);
	func_200(iLocal_528[2], &(sLocal_208[2 /*32*/].f_23), 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 406, true);
}

void func_80(var uParam0, int iParam1, char* sParam2, var uParam3, float fParam4, int iParam5, float fParam6, float fParam7)
{
	Vector3 vVar0;

	func_201(uParam0, iParam1, sParam2, vVar0, uParam3, fParam4, iParam5, iParam5, -1.0f, fParam6, 1127481344, fParam7);
}

void func_81(int iParam0, int iParam1)
{
	func_202(iParam0, iParam1);
}

void func_82(var uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;

	vVar0 = { func_203(uParam0) /*3*/ };
	iVar3 = func_156(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_83(var uParam0, int iParam1)
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

void func_84(var uParam0)
{
	func_43(uParam0, 1);
	func_204(uParam0, 20);
}

void func_85(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

bool func_86(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_1 & iParam1 != 0;
}

void func_87(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_184(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_205())
	{
		func_206(1);
	}
	func_207(iParam2, uParam0->f_43);
	func_208(iParam2, 0, 0, 0, 0);
	if (func_209(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_147(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_210(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_88(var uParam0)
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

void func_89(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_211())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_86(uParam0->f_3, (1 << 18)))
	{
		if (uParam0->f_5 & (1 << 11) != 0)
		{
			func_87(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_88(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_212(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_213(uParam0, bVar0);
		func_214(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432, 0, 90.0f, 0, uParam0->f_98[iParam1]);
		if (func_215(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_87(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_88(&(uParam0->f_121));
		}
	}
}

bool func_90(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30.0f;
	fVar1 = 150.0f;
	if (func_73(uParam2->f_3, 1))
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
			if (func_216())
			{
				fVar0 = 15.0f;
			}
		}
		if (func_217(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_218(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_217(uParam2, fVar1))
		{
			if (!func_76(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_219(uParam2->f_3, 2) && func_220(2))
		{
			return false;
		}
		if (func_73(iParam0, (1 << 22)) || func_73(iParam0, (1 << 25)))
		{
			if (func_221(1))
			{
				return false;
			}
		}
	}
	if (func_222(Global_35))
	{
		return false;
	}
	if (func_223(0, 1, 1) && !func_224(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_73(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_225(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_218(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_226())
		{
			return false;
		}
		iVar2 = func_227(func_2());
		if (func_228(iVar2))
		{
			if (func_229(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_230(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_231(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_91(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_232(uParam0->f_51))
	{
		func_233(uParam0->f_51, 0);
		fVar0 = func_234(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, func_235());
		bVar1 = func_152(!func_73(uParam0->f_3, 1), 20.0f, -1.0f);
		uParam0->f_51.f_11 = func_237(iVar2, func_236(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_92()
{
	bool bVar0;

	if (ENTITY::DOES_ENTITY_EXIST(sLocal_208[sLocal_14.f_0 /*32*/].f_11))
	{
		if (ENTITY::IS_ENTITY_DEAD(sLocal_208[sLocal_14.f_0 /*32*/].f_11))
		{
			return true;
		}
	}
	bVar0 = false;
	if (sLocal_14.f_98[0] < 20.0f)
	{
		if (func_3(sLocal_14.f_5.f_1, (1 << 10)))
		{
			func_238(&(sLocal_14.f_5), 1);
		}
	}
	else if (!func_3(sLocal_14.f_5.f_1, (1 << 10)))
	{
		func_238(&(sLocal_14.f_5), 0);
	}
	switch (iLocal_588)
	{
		case 0:
			bVar0 = func_239(iLocal_528[0], 0, &(sLocal_14.f_5), &iLocal_716, 0, sLocal_14.f_98[0]);
			break;
		case 1:
			bVar0 = func_239(iLocal_528[1], 0, &(sLocal_14.f_5), &iLocal_716, 0, sLocal_14.f_98[1]);
			break;
		case 2:
			bVar0 = func_239(iLocal_528[2], 0, &(sLocal_14.f_5), &iLocal_716, 0, sLocal_14.f_98[2]);
			break;
		case 3:
			bVar0 = func_239(uLocal_532[0], 0, &(sLocal_14.f_5), &iLocal_716, 0, 0);
			break;
		case 4:
			bVar0 = func_239(iLocal_528[0], 0, &(sLocal_14.f_5), &iLocal_716, 0, sLocal_14.f_98[0]);
			break;
		case 5:
			bVar0 = func_239(iLocal_528[1], 0, &(sLocal_14.f_5), &iLocal_716, 0, sLocal_14.f_98[1]);
			break;
		case 6:
			bVar0 = func_239(iLocal_528[2], 0, &(sLocal_14.f_5), &iLocal_716, 0, sLocal_14.f_98[2]);
			break;
		case 7:
			bVar0 = func_239(uLocal_532[1], 0, &(sLocal_14.f_5), &iLocal_716, 0, 0);
			break;
	}
	if (bVar0)
	{
		if (func_54(uLocal_532[0], 0, 1) && PED::_GET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_532[0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_532[0], false);
		}
		if (func_54(uLocal_532[1], 0, 1) && PED::_GET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_532[1]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_532[1], false);
		}
		return true;
	}
	return false;
}

bool func_93(var uParam0)
{
	return func_240(*uParam0, 1);
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1 || !func_93(uParam0))
	{
		func_125(uParam0);
	}
}

bool func_95(var uParam0, float fParam1)
{
	if (!func_93(uParam0))
	{
		return false;
	}
	if (func_241(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_96(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_242(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_243(fParam0))
	{
		return false;
	}
	return true;
}

void func_97(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	if (uParam0->f_1 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	func_244(uParam0->f_2);
	func_244(uParam0->f_3);
	uParam0->f_5 = -1.0f;
	uParam0->f_6 = -1.0f;
	uParam0->f_8 = -1.0f;
	uParam0->f_12 = "";
	func_125(&(uParam0->f_9));
	func_111(&(uParam0->f_9));
	*uParam0 = 0;
}

void func_98(int iParam0, int iParam1)
{
	func_245(iParam0, iParam1);
}

bool func_99(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, bool bParam5)
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

int func_100()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	float fVar12;

	fVar12 = func_246();
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_528[2], false, true) /*3*/ };
	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar0, fVar12, 0.0f, 50.0f, 0.0f) /*3*/ };
	vVar9 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar0, fVar12, 50.0f, -50.0f, 0.0f) /*3*/ };
	vVar6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar0, fVar12, -50.0f, -50.0f, 0.0f) /*3*/ };
	if (func_247(vVar0, vVar3, Global_36))
	{
		if (func_247(vVar0, vVar6, Global_36))
		{
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (func_247(vVar0, vVar9, Global_36))
	{
		return 2;
	}
	else
	{
		return 1;
	}
	return 1;
}

bool func_101(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_248(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

void func_102(int iParam0, int iParam1)
{
	func_98(&(uLocal_580[iParam0]), iParam1);
}

void func_103(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_249((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_250(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_104(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

void func_105(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_251(uParam0);
		func_252(iParam1, uParam2);
	}
	func_253(*uParam0, 1, bParam4);
}

void func_106()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_54(iLocal_528[iVar0], 0, 0))
		{
			func_254(iVar0);
		}
		iVar0++;
	}
}

void func_107(int iParam0)
{
	iLocal_712 = iParam0;
}

void func_108()
{
	int iVar0;

	switch (iLocal_588)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 1)
			{
				bLocal_546[iVar0] = func_255(iLocal_540[iVar0], Global_36);
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 1)
			{
				bLocal_548[iVar0] = func_255(iLocal_542[iVar0], Global_36);
				iVar0++;
			}
			break;
		case 2:
			if (!func_50(iLocal_579, (1 << 21)))
			{
				if (PED::HAS_MOTION_TYPE_ASSET_LOADED(-1073596206, iLocal_528[2]))
				{
					func_27(&iLocal_579, (1 << 21), 0);
				}
			}
			break;
		case 3:
			func_256();
			break;
		case 4:
			if (iLocal_523 == 1)
			{
				func_257(sLocal_322.f_0, "PBL_MAIN");
			}
			break;
		case 5:
			if (iLocal_523 == 1)
			{
				func_257(sLocal_322.f_0, "PBL_PUNCH");
			}
			break;
		case 6:
			if (iLocal_523 == 1)
			{
				func_257(sLocal_322.f_0, "PBL_PUNCH2");
			}
			break;
	}
	iLocal_588++;
	if (iLocal_588 > 7)
	{
		bLocal_551 = ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_322.f_0, "Base", true);
		iLocal_588 = 0;
	}
}

int func_109(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (func_258())
	{
		if (func_259(iLocal_528[1], 1, 1, 1, 0, 0))
		{
			if (!func_50(iLocal_579, (1 << 26)))
			{
				func_260(0, 1);
				func_27(&iLocal_579, (1 << 26), 0);
			}
		}
		else if (func_50(iLocal_579, (1 << 26)))
		{
			func_81(&iLocal_579, (1 << 26));
		}
	}
	if (fLocal_593 > 20.0f)
	{
		*uParam0 = 1;
		return -1;
	}
	if (!sLocal_14.f_48)
	{
		*uParam0 = 1;
		return -1;
	}
	if (bParam1)
	{
		fVar0 = 20.0f;
		fVar1 = 2.0f;
	}
	else
	{
		if (fLocal_739 > 15.0f)
		{
			fVar0 = (fLocal_739 + 1.0f);
		}
		else
		{
			fVar0 = 15.0f;
		}
		fVar1 = 2.0f;
	}
	iVar2 = -1;
	iVar5 = (1 << 19) | func_261(3, 0, 0);
	iVar4 = 0;
	while (iVar4 <= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_528[iVar4]))
		{
		}
		else
		{
			iVar3 = func_262(&(iLocal_528[iVar4]), &(sLocal_407[iVar4 /*21*/]), fVar0, &sLocal_471, &(sLocal_14.f_192), fVar1, 1, 0, "", iVar5, 0, 0, 2, 1, -1082130432, 0);
			if (func_263(&(sLocal_407[iVar4 /*21*/])))
			{
				if (!bLocal_703)
				{
					if (sLocal_407[iVar4 /*21*/].f_1 == 0)
					{
						if (bParam1)
						{
							if (!func_50(iLocal_579, (1 << 18)))
							{
								func_27(&iLocal_579, (1 << 18), 0);
							}
						}
						else if (!func_50(iLocal_579, (1 << 19)))
						{
							func_264(&(sLocal_471[0 /*17*/]), 1, 1);
							func_265(0, 0);
							func_27(&iLocal_579, (1 << 19), 0);
						}
					}
					else if (sLocal_407[iVar4 /*21*/].f_1 == 1)
					{
						if (!bParam1)
						{
							func_264(&(sLocal_471[0 /*17*/]), 1, 1);
							func_264(&(sLocal_471[1 /*17*/]), 1, 1);
						}
					}
					if (sLocal_407[iVar4 /*21*/].f_1 != -1)
					{
						func_260(0, 0);
						iLocal_702 = Global_35;
						func_125(&uLocal_637);
						if (!func_54(iLocal_528[2], 0, 1))
						{
							func_104(iLocal_528[0], 200);
						}
						func_104(iLocal_528[1], 300);
						bLocal_703 = true;
					}
				}
			}
			if (iVar3 != -1)
			{
				iVar2 = iVar3;
				switch (iVar2)
				{
					case 1:
						func_121(0);
						bLocal_703 = false;
						iLocal_702 = Global_35;
						iLocal_710++;
					case 0:
						bLocal_703 = false;
						iLocal_702 = Global_35;
						if (bParam1)
						{
							if (!func_50(iLocal_579, (1 << 18)))
							{
								func_121(0);
								func_27(&iLocal_579, (1 << 18), 0);
							}
						}
						else if (!func_50(iLocal_579, (1 << 17)))
						{
							func_27(&iLocal_579, (1 << 17), 0);
						}
						else
						{
							func_27(&iLocal_579, (1 << 19), 0);
						}
						break;
				}
			}
		}
		iVar4++;
	}
	*uParam0 = 1;
	if (iVar2 != -1)
	{
	}
	return iVar2;
}

void func_110(bool bParam0, bool bParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;

	if (func_54(iLocal_528[1], 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 301, true);
		switch (iLocal_523)
		{
			case 1:
				if (bParam1)
				{
					sVar0 = "RE_FOOTR_VAL_V1_GREET_RPOS";
					sVar1 = "RE_FOOTR_VAL_V1_GREET_RNEG";
				}
				else
				{
					sVar0 = "RE_FOOTR_VAL_V1_GREET_PCALL";
					sVar1 = "RE_FOOTR_VAL_V1_GREET_CALL";
				}
				break;
			case 2:
				if (bParam1)
				{
					sVar0 = "RE_FOOTR_RHD_V1_GREET_RPOS";
					sVar1 = "RE_FOOTR_RHD_V1_GREET_RNEG";
				}
				else
				{
					sVar0 = "RE_FOOTR_RHD_V1_GREET_PCALL";
					sVar1 = "RE_FOOTR_RHD_V1_GREET_CALL";
				}
				break;
		}
		if (bParam0)
		{
			if (bParam1 && fLocal_739 >= 0.0f)
			{
				sVar2 = func_266(8);
			}
			else
			{
				sVar2 = func_266(7);
			}
		}
		if (bParam1)
		{
			if (func_54(iLocal_528[2], 0, 0))
			{
				sVar3 = func_266(10);
			}
			else
			{
				sVar3 = func_266(10);
			}
		}
		else if (func_54(iLocal_528[2], 0, 0))
		{
			sVar3 = func_266(26);
		}
		else
		{
			sVar3 = func_266(10);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_267(&(sLocal_471[0 /*17*/]), sVar2, sVar0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			func_267(&(sLocal_471[1 /*17*/]), sVar3, sVar1, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
		}
		iVar4 = 0;
		while (iVar4 < sLocal_407.f_0)
		{
			func_268(&(sLocal_407[iVar4 /*21*/]), &(sLocal_471[1 /*17*/]));
			iVar4++;
		}
	}
}

void func_111(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_112()
{
	if (iLocal_523 == 1)
	{
		ANIMSCENE::START_ANIM_SCENE(sLocal_322.f_0);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_MAIN", true);
	}
	else
	{
		ANIMSCENE::START_ANIM_SCENE(sLocal_322.f_0);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_ACTION", true);
		ANIMSCENE::START_ANIM_SCENE(sLocal_322.f_1);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_322.f_1, "PBL_ACTION", true);
	}
}

int func_113()
{
	return Global_1897952.f_41;
}

void func_114(var uParam0, var uParam1, Vector3 vParam2, Vector3 vParam5, Vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_269(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_270(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_271(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_272(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(*uParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(*uParam0, false, 15);
		}
	}
}

void func_115(int iParam0)
{
	func_273();
	func_274(iParam0);
	if (func_275())
	{
		func_276(0);
		return;
	}
	if (sLocal_14.f_48)
	{
		if (bLocal_551)
		{
			if (func_277())
			{
				func_26(1);
				func_25(sLocal_322.f_0, "PBL_MAIN", 1);
				func_107(3);
				func_125(&uLocal_717);
			}
			else
			{
				func_94(&uLocal_606, 0);
				if (func_278(iLocal_528[0], "BasePunch", 1067030938))
				{
					func_279();
				}
				if (func_95(&uLocal_606, 45.0f))
				{
					if (func_280())
					{
						func_281();
						func_6();
					}
				}
			}
		}
	}
}

void func_116()
{
	if (func_282())
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_322.f_0, "loop_bool", true, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_322.f_1, "loop_bool", true, false);
		func_111(&uLocal_606);
		func_107(3);
	}
	else if (sLocal_14.f_48)
	{
		func_94(&uLocal_606, 0);
		if (func_95(&uLocal_606, 45.0f))
		{
			if (func_280())
			{
				func_281();
				func_6();
			}
		}
	}
}

void func_117()
{
	if (sLocal_14.f_48)
	{
		if (!MAP::DOES_BLIP_EXIST(uLocal_536[2]))
		{
			if (func_242(iLocal_528[2], 0))
			{
				func_283(iLocal_528[2], &(uLocal_536[2]), joaat("BLIP_STYLE_NEUTRAL"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
			}
		}
	}
}

void func_118(int iParam0)
{
	func_274(iParam0);
	if (func_275())
	{
		func_276(1);
		return;
	}
	if (func_284())
	{
		func_264(&(sLocal_471[0 /*17*/]), 1, 1);
		func_81(&iLocal_579, (1 << 17));
		func_110(0, 1);
		func_18(0);
		func_107(4);
	}
}

void func_119(int iParam0)
{
	var uVar0;

	func_285();
	func_286();
	func_287();
	func_288();
	if (!func_53(1, 256))
	{
		func_289(iParam0);
	}
	if (!func_50(iLocal_579, 256))
	{
		if (func_290())
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_QUICK", true);
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_322.f_1, "PBL_QUICK", true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_322.f_0, "ACTION_BOOL", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_322.f_1, "ACTION_BOOL", true, false);
			func_27(&iLocal_579, 256, 0);
		}
		else if (sLocal_14.f_48)
		{
			func_94(&uLocal_606, 0);
			if (func_95(&uLocal_606, 45.0f))
			{
				if (func_280())
				{
					func_281();
					func_6();
				}
			}
		}
	}
	else if (!func_53(2, 8))
	{
		if (func_99(iLocal_528[2], joaat("BKNOCKEDOUT"), "bKnockedOut", uVar0, -0.8f, 1))
		{
			if (MAP::DOES_BLIP_EXIST(uLocal_536[2]))
			{
				func_52(&(uLocal_536[2]));
			}
			func_102(2, 8);
			func_110(1, 1);
			if (iLocal_710 < 1)
			{
				if (!func_50(iLocal_579, (1 << 18)))
				{
					func_27(&iLocal_579, (1 << 18), 0);
				}
				if (!func_50(iLocal_579, (1 << 10)))
				{
					func_27(&iLocal_579, (1 << 10), 0);
				}
				iLocal_710 = 1;
			}
		}
	}
	else
	{
		if (!func_53(2, 32))
		{
			if (func_99(iLocal_528[2], joaat("BGROUNDBREAKOUT"), "bGroundBreakout", uVar0, 1.6f, 1))
			{
				func_102(2, 32);
			}
		}
		else if (!func_53(2, 64))
		{
			if (!func_99(iLocal_528[2], joaat("BGROUNDBREAKOUT"), "bGroundBreakout", uVar0, 1.6f, 1))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_528[2], sLocal_322.f_0))
				{
					func_102(2, 64);
				}
			}
		}
		if (func_291(iParam0))
		{
			func_81(&iLocal_579, (1 << 17));
			func_110(0, 1);
			func_264(&(sLocal_471[0 /*17*/]), 1, 1);
			func_17(1094713344);
			iLocal_403 = 2;
			func_107(4);
		}
	}
}

bool func_120(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	Vector3 vVar5;
	Vector3 vVar8;

	if (!func_54(iLocal_528[0], 0, 1) || !func_54(iLocal_528[1], 0, 1))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!func_292(0, (1 << 11)))
		{
			func_293(0, (1 << 11));
		}
	}
	if ((func_292(0, (1 << 11)) || iLocal_710 >= 2) && func_96(0, 1, Global_35, 1))
	{
		if (!func_294(iLocal_578, (1 << 9)))
		{
			if (func_296(0, Global_35, func_295(0), 42.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1))
			{
				func_297(&iLocal_578, (1 << 9), 0);
			}
			else if (func_296(1, Global_35, func_295(1), 42.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1))
			{
				func_297(&iLocal_578, (1 << 9), 0);
			}
		}
		func_27(&iLocal_579, 16, 0);
		func_298(0, (1 << 11));
		return false;
	}
	if (iLocal_403 > 0)
	{
		func_299();
	}
	switch (iLocal_403)
	{
		case 0:
			func_23();
			sLocal_14.f_50 = 1;
			func_80(&(sLocal_358[0 /*13*/]), joaat("EVENT_SHOCKING_BEAT_DISTURBING"), "deadDisturbing", iLocal_528[2], 8.0f, 12.0f, -1082130432, 0);
			func_300(1);
			break;
		case 1:
			if (func_301(0) & func_301(1))
			{
				vVar1 = { func_302(0) /*3*/ };
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!func_77(vVar1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1.0f, 20000, 1.0f, 1, 40000.0f);
				}
				TASK::TASK_MOUNT_ANIMAL(0, sLocal_208[0 /*32*/].f_11, -1, -1, 1.0f, 1, 0, 0);
				func_146(iLocal_528[0], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[0], 167, true);
				vVar1 = { func_302(1) /*3*/ };
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!func_77(vVar1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1.0f, 20000, 1.0f, 1, 40000.0f);
				}
				TASK::TASK_MOUNT_ANIMAL(0, sLocal_208[1 /*32*/].f_11, -1, -1, 1.0f, 1, 0, 0);
				func_146(iLocal_528[1], &iVar0, 0.75f, 0, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[1], 167, true);
				func_300(2);
			}
			else
			{
				func_300(3);
			}
			break;
		case 2:
			if (PED::IS_PED_ON_MOUNT(iLocal_528[0]) && PED::IS_PED_ON_MOUNT(iLocal_528[1]))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 243, false);
				func_300(3);
			}
			break;
		case 3:
			vVar8 = { func_144() /*3*/ };
			vVar5 = { func_145() /*3*/ };
			if (PED::IS_PED_ON_MOUNT(iLocal_528[0]) && PED::IS_PED_ON_MOUNT(iLocal_528[1]))
			{
				fVar4 = 2.0f;
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!func_77(vVar8))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar8, 1.5f, 20000, 4.0f, 0, 40000.0f);
				}
				TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vVar5, 5.0f, fVar4, 0, 0);
				func_146(iLocal_528[0], &iVar0, 0, 0, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!func_77(vVar8))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar8, 1.5f, 20000, 4.0f, 0, 40000.0f);
				}
				TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vVar5, 5.0f, fVar4, 0, 0);
				func_146(iLocal_528[1], &iVar0, 0.5f, 0, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_528[0], joaat("REL_PLAYER_DISLIKE"));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_528[1], joaat("REL_PLAYER_DISLIKE"));
				func_300(4);
			}
			break;
		case 4:
			if (func_303(iLocal_528[0], func_145(), 0) < 4.0f || func_303(iLocal_528[1], func_145(), 0) < 4.0f)
			{
				switch (func_113())
				{
					case 9:
						func_304(iLocal_528[0], 36, 0, 1);
						func_304(iLocal_528[1], 36, 0, 1);
						break;
					case 11:
						if (func_305() != 3)
						{
							func_304(iLocal_528[0], 9, 0, 1);
							func_304(iLocal_528[1], 9, 0, 1);
						}
						else
						{
							func_304(iLocal_528[0], 5, 0, 1);
							func_304(iLocal_528[1], 5, 0, 1);
						}
						break;
				}
				func_300(5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_121(bool bParam0)
{
	if (!func_50(iLocal_579, (1 << 20)))
	{
		if (func_54(iLocal_528[2], 0, 1))
		{
			if (bParam0 || func_95(&uLocal_603, 1.0f))
			{
				if (func_54(iLocal_528[2], 0, 1) && !func_53(2, 8))
				{
					if (!ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_528[2], Global_35, 1, 1) && !PED::IS_PED_LASSOED(iLocal_528[2]))
					{
						func_306(12, 0, 0, "RE_HONOR_INTERVENED", 0, 0, 1065353216, 0);
					}
					func_27(&iLocal_579, (1 << 20), 0);
				}
			}
		}
	}
}

bool func_122()
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_93(&uLocal_720))
	{
		func_125(&uLocal_720);
	}
	if (func_2() == 105)
	{
		bVar0 = func_307(&sLocal_14, &iLocal_528, 0, 1);
		if (!func_308((1 << 10)))
		{
			if (bVar0)
			{
				func_309((1 << 10));
			}
		}
		else if (!bVar0)
		{
			func_63((1 << 10));
		}
	}
	func_94(&uLocal_603, 0);
	if (iLocal_729[0] >= 2 && iLocal_729[1] >= 2)
	{
		func_310();
	}
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 0, false);
	func_311();
	iVar4 = 0;
	while (iVar4 <= 1)
	{
		if (!iLocal_743[iVar4])
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_528[iVar4]))
			{
				if (func_312(iLocal_528[iVar4]))
				{
					func_105(&(iLocal_528[iVar4]), &(sLocal_407[iVar4 /*21*/]), &sLocal_471, 1, 1);
					iLocal_743[iVar4] = 1;
				}
			}
			else
			{
				iLocal_743[iVar4] = 1;
			}
		}
		iVar4++;
	}
	if (iLocal_523 == 2)
	{
		if (func_294(iLocal_578, 256))
		{
			if (!func_294(iLocal_578, (1 << 15)))
			{
				if (func_96(-4.0f, 1, 0, 0))
				{
					func_313(0);
					func_313(1);
					func_313(2);
					if (func_54(iLocal_528[0], 0, 0))
					{
						if (!func_294(iLocal_578, (1 << 9)))
						{
							func_296(0, Global_35, func_295(0), -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1);
						}
					}
					else if (func_54(iLocal_528[1], 0, 0))
					{
						if (!func_294(iLocal_578, (1 << 9)))
						{
							func_296(1, Global_35, func_295(1), -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1);
						}
					}
					func_297(&iLocal_578, (1 << 15), 0);
				}
			}
		}
	}
	if (func_50(iLocal_579, (1 << 22)))
	{
		if (func_314())
		{
			func_6();
		}
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_54(iLocal_528[iVar2], 0, 1))
		{
			switch (iVar2)
			{
				case 0:
					switch (iLocal_729[iVar2])
					{
						case 0:
							if (iLocal_523 == 1)
							{
								if (func_315(&uLocal_720) > 3.0f || (func_315(&uLocal_720) > 0.6f && (func_50(iLocal_579, 4) || func_50(iLocal_579, 2))))
								{
									if (func_50(iLocal_579, (1 << 16)))
									{
										if (func_101(iLocal_528[iVar2], sLocal_322.f_0, "Odriscoll01", 0, 0.915f, 1, 0))
										{
											func_316(iVar2, 2);
										}
									}
									else
									{
										func_316(iVar2, 1);
									}
								}
							}
							else
							{
								func_317(iVar2, "thug_A");
								if (func_101(iLocal_528[iVar2], sLocal_322.f_0, "thug_A", 0, 0, 1, 0) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_528[2], sLocal_322.f_0))
								{
									func_316(iVar2, 2);
								}
							}
							break;
						case 1:
							if (func_318(&(sLocal_14.f_5)) != iLocal_528[iVar2])
							{
								if (!func_93(&(vLocal_612[iVar2 /*3*/])))
								{
									func_94(&(vLocal_612[iVar2 /*3*/]), 0);
									TASK::TASK_REACT(iLocal_528[iVar2], Global_35, Global_36, "Default_Shocked", 0.5f, 0.0f, 4);
								}
								else if (func_95(&(vLocal_612[iVar2 /*3*/]), 0.49f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_528[iVar2]))
								{
									func_316(iVar2, 2);
								}
							}
							else
							{
								func_316(iVar2, 2);
							}
							break;
						case 2:
							if (func_319())
							{
								func_320(iVar2);
								func_316(iVar2, 10);
							}
							else
							{
								func_321(iVar2);
								func_316(iVar2, 3);
							}
							break;
						case 3:
							if (iVar3 != joaat("WEAPON_UNARMED") && !func_77(sLocal_330[iVar2 /*9*/]))
							{
								if (func_315(&uLocal_720) > 1.0f)
								{
									func_94(&(sLocal_330[iVar2 /*9*/].f_4), 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_528[iVar2], sLocal_330[iVar2 /*9*/], sLocal_330[iVar2 /*9*/].f_3, true, false, false);
									func_316(iVar2, 4);
								}
							}
							break;
						case 4:
							if (sLocal_14.f_98[iVar2] > 25.0f)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_528[iVar2], false);
								PED::SET_PED_COMBAT_MOVEMENT(iLocal_528[iVar2], 2);
								PED::SET_PED_COMBAT_RANGE(iLocal_528[iVar2], 0);
								func_316(iVar2, 5);
							}
							break;
						case 5:
							break;
					}
					break;
				case 1:
					switch (iLocal_729[iVar2])
					{
						case 0:
							if (iLocal_523 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_528[iVar2], sLocal_305[4 /*2*/], sLocal_305[4 /*2*/].f_1, 1) && (!func_50(iLocal_579, (1 << 16)) || func_101(iLocal_528[iVar2], sLocal_322.f_0, "Odriscoll02", 0, 0, 1, 0)))
								{
									if (func_319())
									{
										func_320(iVar2);
										func_316(iVar2, 10);
									}
									else
									{
										if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_528[iVar2], sLocal_322.f_0))
										{
											TASK::CLEAR_PED_SECONDARY_TASK(iLocal_528[iVar2]);
										}
										func_321(iVar2);
										func_316(iVar2, 1);
									}
								}
							}
							else if (func_101(iLocal_528[iVar2], sLocal_322.f_1, "thug_B", 0, 0, 1, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_528[iVar2], sLocal_305[4 /*2*/], sLocal_305[4 /*2*/].f_1, 1))
							{
								if (func_319())
								{
									func_320(iVar2);
									func_316(iVar2, 10);
								}
								else
								{
									func_321(iVar2);
									func_316(iVar2, 1);
								}
							}
							break;
						case 1:
							if (iVar3 != joaat("WEAPON_UNARMED") && !func_77(sLocal_330[iVar2 /*9*/]))
							{
								if (func_315(&uLocal_720) > 1.0f)
								{
									func_94(&(sLocal_330[iVar2 /*9*/].f_4), 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_528[iVar2], sLocal_330[iVar2 /*9*/], sLocal_330[iVar2 /*9*/].f_3, true, false, false);
									func_316(iVar2, 2);
								}
							}
							if (!PED::IS_PED_IN_COMBAT(iLocal_528[iVar2], 0) && func_322(iLocal_528[iVar2], Global_35, 2.0f, 1))
							{
								if (!func_124(iLocal_528[iVar2], joaat("SCRIPT_TASK_MELEE")))
								{
									TASK::TASK_MELEE(iLocal_528[iVar2], Global_35, 0, 1, 1, 1.0f, 1, -1.0f);
								}
							}
							break;
						case 2:
							if (sLocal_14.f_98[iVar2] > 25.0f)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_528[iVar2], false);
								PED::SET_PED_COMBAT_MOVEMENT(iLocal_528[iVar2], 2);
								PED::SET_PED_COMBAT_RANGE(iLocal_528[iVar2], 0);
								func_316(iVar2, 3);
							}
							break;
						case 3:
							break;
					}
					break;
				case 2:
					switch (iLocal_729[iVar2])
					{
						case 0:
							if (iLocal_523 == 1)
							{
								if (func_50(iLocal_579, 2) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_322.f_0, "Exit", true))
								{
									if (func_99(iLocal_528[2], joaat("BKOPUNCHHIT"), "bKOPunchHit", uVar1, 1067030938, 1))
									{
										TASK::TASK_KNOCKED_OUT(iLocal_528[2], 100.0f, false);
									}
									else if (func_323())
									{
										func_52(&(uLocal_536[2]));
										func_324(iLocal_528[iVar2], 1, 1);
										func_316(iVar2, 10);
									}
									else if (func_101(iLocal_528[2], sLocal_322.f_0, "Victim", 0, 0, 1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(iLocal_528[2], 1))
									{
										func_325(iLocal_528[iVar2], 1);
										func_326(&(iLocal_528[iVar2]));
										func_316(iVar2, 1);
									}
								}
								else if (func_101(iLocal_528[2], sLocal_322.f_0, "Victim", 0, 0, 1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(iLocal_528[2], 1))
								{
									func_325(iLocal_528[iVar2], 1);
									func_326(&(iLocal_528[iVar2]));
									func_316(iVar2, 1);
								}
							}
							else
							{
								func_317(iVar2, "vic");
								if (func_101(iLocal_528[iVar2], sLocal_322.f_0, "vic", 0, 0, 1, 0))
								{
									if (iLocal_404 != 0)
									{
										func_325(iLocal_528[iVar2], 1);
										func_326(&(iLocal_528[iVar2]));
										func_316(iVar2, 1);
									}
									else
									{
										func_325(iLocal_528[iVar2], 1);
										func_326(&(iLocal_528[iVar2]));
										func_316(iVar2, 1);
									}
									func_316(iVar2, 1);
								}
								else if (iLocal_404 == 0)
								{
									if (!func_53(2, 8))
									{
										if (!func_53(iVar2, (1 << 9)))
										{
											func_325(iLocal_528[iVar2], 1);
											func_326(&(iLocal_528[iVar2]));
											func_316(iVar2, 1);
										}
									}
									else if (func_53(2, 64))
									{
										func_325(iLocal_528[iVar2], 1);
										func_316(iVar2, 10);
									}
									else if (func_99(iLocal_528[2], joaat("BGROUNDBREAKOUT"), "bGroundBreakout", uVar1, 1.6f, 1))
									{
										ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, "PBL_BRKOUT_GROUND", true);
										func_316(iVar2, 2);
									}
								}
							}
							break;
						case 1:
							if (func_327())
							{
								PED::_REMOVE_MOTION_TYPE_ASSET(-1073596206, iLocal_528[iVar2]);
								func_52(&(uLocal_536[iVar2]));
								PED::_0x16F798A05BB9E3B5(iLocal_528[2]);
								TASK::TASK_FLEE_PED(iLocal_528[iVar2], Global_35, 3, (1 << 12), -1.0f, -1, 0);
								PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
								func_27(&iLocal_579, 1, 0);
								func_316(2, 10);
							}
							break;
						case 2:
							if (func_101(iLocal_528[iVar2], sLocal_322.f_0, "vic", 0, 0, 1, 0))
							{
								func_325(iLocal_528[iVar2], 1);
								func_326(&(iLocal_528[iVar2]));
								func_316(iVar2, 1);
							}
							break;
					}
					break;
			}
		}
		iVar2++;
	}
	if (!func_54(iLocal_528[0], 0, 1) && !func_54(iLocal_528[1], 0, 1))
	{
		func_328(iLocal_528[0], 0);
		func_328(iLocal_528[1], 0);
		return true;
	}
	else if (!func_54(iLocal_528[2], 8, 1))
	{
		if (func_54(iLocal_528[2], 0, 1))
		{
			TASK::TASK_KNOCKED_OUT(iLocal_528[2], 5.0f, false);
		}
	}
	return false;
}

bool func_123()
{
	int iVar0;
	char* sVar1;

	if (!bLocal_709)
	{
		return true;
	}
	if (func_329(&uLocal_704))
	{
		return true;
	}
	else if (func_330(&uLocal_704, &iLocal_528, 0, 2, 0.0f, 0))
	{
		func_51(&uLocal_704);
		iVar0 = func_163(func_113(), 0, 0, 0);
		sVar1 = func_332(&uLocal_704, iVar0, func_331(iVar0, 1), 1);
		func_333(Global_35, Global_35, sVar1, -1082130432, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_NORMAL"), 1);
		return true;
	}
	return false;
}

bool func_124(int iParam0, int iParam1)
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

void func_125(var uParam0)
{
	func_334(uParam0, 0.0f);
}

bool func_126()
{
	if (PED::_IS_PED_COWERING(iLocal_528[2]))
	{
		PED::_0x16F798A05BB9E3B5(iLocal_528[2]);
	}
	if (!func_292(0, (1 << 10)))
	{
		if (func_54(iLocal_528[0], 0, 1) && func_54(iLocal_528[0], 8, 1))
		{
			func_335(iLocal_528[0], 0, 0, 0);
			func_293(0, (1 << 10));
		}
	}
	if (!func_292(1, (1 << 10)))
	{
		if (func_54(iLocal_528[1], 0, 1) && func_54(iLocal_528[1], 8, 1))
		{
			func_335(iLocal_528[1], 0, 0, 0);
			func_293(1, (1 << 10));
		}
	}
	if ((!func_54(iLocal_528[2], 0, 1) && !func_124(iLocal_528[2], joaat("SCRIPT_TASK_KNOCKED_OUT"))) || func_50(iLocal_579, 1))
	{
		func_336(0);
		func_56();
		return true;
	}
	if (iLocal_406 <= 2)
	{
		if (func_127(Global_35, iLocal_528[2], 1, 1) > 25.0f)
		{
			if (iLocal_406 <= 0)
			{
				PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_528[2], "Default_Nervous");
			}
			func_56();
			vLocal_640 = { func_337() /*3*/ };
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_528[2], vLocal_640, 1.0f, -1, 0.25f, (1 << 21), 40000.0f);
			func_338(10);
		}
	}
	switch (iLocal_523)
	{
		case 1:
			return func_339();
		case 2:
			return func_340();
	}
	return false;
}

float func_127(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_128()
{
	if (!func_341(Global_1395482.f_1))
	{
		return false;
	}
	return func_342(Global_1395482.f_1, 32);
}

bool func_129(int iParam0)
{
	if (func_73(iParam0, 1))
	{
		return false;
	}
	return (1 == func_343(iParam0) || 2 == func_343(iParam0));
}

float func_130(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_131(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 128);
	}
	else
	{
		func_85(&(uParam0->f_1), 128);
	}
}

void func_132(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_85(iParam0, 256);
	}
	else
	{
		func_137(iParam0, 256);
	}
}

void func_133(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_85(iParam0, (1 << 28));
	}
	else
	{
		func_137(iParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_85(iParam0, (1 << 30));
	}
	else
	{
		func_137(iParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_85(iParam0, (1 << 29));
	}
	else
	{
		func_137(iParam0, (1 << 29));
	}
}

int func_134(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

char* func_135(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_344(sParam1));
}

float func_136(int iParam0)
{
	return iParam0->f_24;
}

void func_137(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

bool func_138(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_139(int iParam0, int iParam1)
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
	if (func_138(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_138(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_138(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_138(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_138(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_138(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_138(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_138(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_140(int iParam0, bool bParam1)
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

void func_141(char* sParam0)
{
	if (CAM::_IS_CAMERA_AVAILABLE(sParam0))
	{
		CAM::_CAM_DESTROY(sParam0);
	}
	CAM::_UNLOAD_CAMERA_DATA_DICT(sParam0);
}

void func_142(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
}

void func_143(int iParam0, bool bParam1)
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

Vector3 func_144()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	func_11(&sLocal_14, &iVar0, &iVar1);
	switch (iVar0)
	{
		case 9:
			switch (iVar1)
			{
				case 0:
					vVar2 = { -264.6443f, 772.0397f, 116.958f /*3*/ };
					break;
				case 1:
					vVar2 = { -337.1412f, 786.4087f, 114.9143f /*3*/ };
					break;
			}
			break;
		case 11:
			switch (iVar1)
			{
				case 0:
					vVar2 = { 1366.95f, -1353.452f, 76.83144f /*3*/ };
					break;
				case 1:
					vVar2 = { 1357.912f, -1351.177f, 77.08829f /*3*/ };
					break;
				case 2:
					vVar2 = { 1442.785f, -1419.796f, 78.29624f /*3*/ };
					break;
			}
			break;
	}
	return vVar2;
}

Vector3 func_145()
{
	int iVar0;
	int iVar1;

	func_11(&sLocal_14, &iVar0, &iVar1);
	switch (iVar0)
	{
		case 11:
			switch (iVar1)
			{
				case 0:
					return { 1396.492f, -1416.994f, 78.70442f };
				case 1:
					return { 1372.029f, -1370.639f, 77.48544f };
				case 2:
					return { 1445.512f, -1435.908f, 76.91522f };
				default:
					break;
			}
			return { 0.0f, 0.0f, 0.0f };
		case 9:
			return { -262.3312f, 801.4066f, 117.6557f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_146(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

char* func_147(int iParam0)
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

void func_148(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 |= iParam1;
}

void func_149(int iParam0, bool bParam1)
{
	if (func_54(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_345(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

bool func_150(var uParam0, var uParam1)
{
	if (func_73(uParam0->f_3, (1 << 24)))
	{
		if (func_346(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_151(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_152(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_153(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_54(iParam0, 0, 1)))
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
			fVar2 = func_152(fParam2 >= 0.0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25.0f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_195(&iParam0);
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

void func_154(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_347(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_348(uParam0);
	func_349(uParam0);
	func_350(uParam0);
	if (!func_351(uParam0))
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_51.f_11))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(uParam0->f_51.f_11);
		}
		func_233(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_352();
	}
	if (!func_353(uParam0->f_3) && !func_73(uParam0->f_3, 256))
	{
		func_354(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_244(uParam0->f_173);
	func_244(uParam0->f_172);
}

void func_155(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_156(int iParam0, int iParam1)
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

void func_157(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_355() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_158(var uParam0)
{
}

bool func_159(int iParam0)
{
	if (((func_160(iParam0, 1) && func_160(iParam0, 2)) && func_160(iParam0, 8)) && func_160(iParam0, (1 << 9)))
	{
		return true;
	}
	return false;
}

bool func_160(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_161(int iParam0)
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

int func_162(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_356(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_357(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_357(), iVar3);
		if (func_358(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_163(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;

	bVar0 = (func_359() && !bParam2);
	switch (iParam0)
	{
		case 15:
		case 16:
			return 5;
		case 3:
		case 9:
			return 0;
		case 1:
			if (!bVar0 && !bParam1)
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 10:
			return 1;
		case 4:
		case 12:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
		case 0:
		case 11:
			return 2;
		case 5:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
	}
	return -1;
}

void func_164(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

void func_165(var uParam0)
{
	func_98(uParam0, 256);
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_360(iParam0);
	if ((func_3(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_14())
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
					if (func_14())
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
					if (func_14())
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
					if (func_14())
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
					if (func_14())
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

void func_167(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_361(&((iParam0[iVar0 /*32*/])->f_1));
		func_361(&((iParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

char* func_168(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "script_re@foot_robbery";
		case 3:
			return "script_re@foot_robbery";
		case 4:
			return "script_re@foot_robbery";
		case 5:
			return "script_re@foot_robbery";
		case 7:
			return "AMB_REST@WORLD_HUMAN_BADASS@MALE_A@base";
		case 6:
			return "script_re@foot_robbery@leymone";
		default:
			break;
	}
	return "";
}

bool func_169(var uParam0)
{
	if (!func_362(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_362(uParam0->f_12))
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

Vector3 func_170(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (!func_184(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (func_363(iParam0) == 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	iVar0 = (func_364(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_171(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;

	if (func_73(iParam0, 32))
	{
		if (func_365(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_366(Global_35, &(uParam1->f_12)) /*3*/ };
				if (!func_77(vVar1))
				{
					*uParam1 = { vVar1 /*3*/ };
				}
			}
		}
	}
	if (bParam2)
	{
		func_367(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_234(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0.0f, 0.0f, 0.0f, fVar4, fVar4, fVar4, func_235());
		if (func_368(Global_1310750[iParam0 /*111*/], (1 << 25)))
		{
			func_237(iVar0, func_236(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_237(iVar0, func_236(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_73(iParam0, 1))
		{
			func_369(*uParam1 + Vector(1.0f, 0.0f, 0.0f), 25.0f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_370(iParam0);
}

bool func_172(int iParam0, var uParam1)
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
			func_371(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_86(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_372(iParam0));
		fVar1 = 60.0f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_372(iParam0));
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

void func_173(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_373(iParam0))
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
			if (!func_73(iParam0, 1))
			{
				if (func_86(iParam0, 2))
				{
				}
			}
			func_374(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 2:
			func_375(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 3:
			func_375(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7.0f;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		default:
			break;
	}
	if (func_129(iParam0))
	{
		*fParam2 = 40000.0f;
	}
}

Vector3 func_174(bool bParam0, int iParam1, var uParam2, var uParam3)
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
	while (iVar0 < func_363(iParam1))
	{
		if (!func_376(iParam1, iVar0))
		{
			vVar4 = { func_170(iParam1, iVar0) /*3*/ };
			if (!func_77(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_179(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_377(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 /*3*/ };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_77(vVar4))
	{
	}
	return vVar1;
}

int func_175(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_33("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_176(int iParam0, Vector3 vParam1)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_363(iParam0))
	{
		vVar1 = { func_170(iParam0, iVar0) /*3*/ };
		if (func_378(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_177(var uParam0)
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

int func_178(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	vVar2 = { *uParam0 /*3*/ };
	func_379(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_380(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_77(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] /*3*/ };
				vVar8 = { MISC::GET_CLOSEST_POINT_ON_LINE(Global_36, vVar2, vVar5, true) /*3*/ };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35.0f * 35.0f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80.0f * 80.0f))
				{
					if (bParam4)
					{
						iVar1 = func_381(uParam0);
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
	return func_175(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_179(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_173(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_73(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_180(var uParam0, bool bParam1)
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

bool func_181(int iParam0, var uParam1, var uParam2, struct<7> /*56*/ sParam3, bool bParam10)
{
	if (func_382(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_383(iParam0, uParam2))
	{
		return false;
	}
	if (!func_384(sParam3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_385(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_182(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_183(int iParam0, int iParam1, var uParam2)
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

bool func_184(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_185(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_186(int iParam0, int iParam1)
{
	if (func_386(iParam0))
	{
		return;
	}
	if (func_387(iParam0) == iParam1)
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

void func_187(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 0);
	if (bParam3)
	{
		func_137(&iParam1, (1 << 13));
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, iParam0);
	}
}

int func_188()
{
	return Global_1899515;
}

int func_189(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_190()
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

bool func_191(var uParam0, var uParam1, Vector3 vParam2, float fParam5, bool bParam6, int iParam7)
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
				sVar2 = { func_388(vParam2, fParam5, uParam0->f_15, uParam0->f_19) /*3*/ };
				sVar2.f_3 = func_389(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_390(uParam0->f_12, uParam0, sVar2, sVar2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_391(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_328(uParam0->f_11, 0);
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
					sVar2 = { func_388(vParam2, fParam5, uParam0->f_15, uParam0->f_19) /*3*/ };
					sVar2.f_3 = func_389(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_392(&(uParam0->f_22)));
					sVar2 = { func_388(vParam2, fParam5, uParam0->f_6, bVar1) /*3*/ };
					sVar2.f_3 = func_389(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_390(uParam0->f_1, uParam0, sVar2, sVar2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_393(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_200(*uParam1, &(uParam0->f_23), 0);
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

Vector3 func_192(int iParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (iParam0 == 9)
	{
		if (iParam1 == 0)
		{
			vVar0 = { -297.809f, 737.8043f, 117.6715f /*3*/ };
		}
		else
		{
			vVar0 = { -362.8885f, 833.2094f, 115.816f /*3*/ };
		}
	}
	else
	{
		vVar0 = { 1331.628f, -1366.815f, 78.85887f /*3*/ };
	}
	if (func_77(vVar0))
	{
	}
	return vVar0;
}

int func_193(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0 = { *uParam0 /*3*/ };
	if (func_394(&uParam1))
	{
		return 1;
	}
	if (!func_395(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 /*3*/ };
	return 1;
}

int func_194(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_396(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_195(int* iParam0)
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

void func_196(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_397(uParam0, iParam1, iParam3);
	func_398(uParam0, iParam2, iParam3);
}

int func_197(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_399(iParam3, 1);
	bVar1 = func_399(iParam3, 2);
	bVar2 = !func_399(iParam3, 4);
	bVar3 = func_399(iParam3, 8);
	bVar4 = !func_399(iParam3, 16);
	bVar5 = func_399(iParam3, 32);
	bVar6 = func_399(iParam3, 64);
	return func_400(iParam0, iParam1, bVar0, bVar1, bParam4, bVar2, bVar3, fParam5, fParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_198(int iParam0)
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

void func_199(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	if (!func_54(iParam1, 0, 0))
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

void func_200(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_54(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_201(var uParam0, int iParam1, char* sParam2, Vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, bool bParam13)
{
	struct<4> /*32*/ sVar0;
	char cVar4[32];

	func_97(uParam0, 1);
	uParam0->f_12 = sParam2;
	uParam0->f_5 = fParam8;
	uParam0->f_6 = fParam9;
	*uParam0 = iParam1;
	uParam0->f_8 = fParam7;
	strcpy_s(&cVar4, 32, sParam2);
	sVar0 = { cVar4 /*4*/ };
	if (!func_77(vParam3))
	{
	}
	if (fParam8 > 0.0f)
	{
		strcat_s(&sVar0, 32, "Vis");
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam3, 0.0f, 0.0f, 0.0f, fParam8, fParam8, fParam8, &sVar0);
	}
	else
	{
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam3, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 3.0f, &cVar4);
	}
	if (fParam9 > 0.0f && fParam9 != fParam8)
	{
		sVar0 = { cVar4 /*4*/ };
		strcat_s(&sVar0, 32, "Aud");
		uParam0->f_3 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam3, 0.0f, 0.0f, 0.0f, fParam9, fParam9, fParam9, &sVar0);
	}
	if (!func_77(vParam3))
	{
		uParam0->f_1 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iParam1, vParam3, fParam7, fParam8, fParam9, fParam10, fParam11, -1, -1);
	}
	else
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
		{
			PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_2, iParam6, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_3))
		{
			PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_3, iParam6, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
		}
		uParam0->f_1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam1, iParam6, fParam7, fParam8, fParam9, fParam10, fParam11, fParam12, bParam13, false, -1, -1);
	}
}

void func_202(int iParam0, int iParam1)
{
	func_401(iParam0, iParam1);
}

Vector3 func_203(var uParam0)
{
	return uParam0->f_51;
}

void func_204(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_205()
{
	return Global_1935436 == 2;
}

void func_206(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_207(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_73(iParam0, 2))
	{
		func_403(iParam0, func_402(iParam1));
	}
	else
	{
		func_404(iParam0, func_113());
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
	func_405(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_406(iParam0, 0);
	func_407(iParam0);
	func_408(1);
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
	if (!func_73(iParam0, 16))
	{
		func_208(iParam0, 0, 0, 0, 0);
	}
}

void func_208(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_409() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_184(iVar1) && !func_73(iVar1, iParam2)) && (!bParam3 || !func_224(iVar1))) && (!bParam4 || !func_410(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_411(iVar0);
			}
		}
		iVar0++;
	}
}

int func_209(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_210(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_368(Global_1310750[uParam0->f_3 /*111*/], (1 << 24)))
	{
		if (bParam2)
		{
			if (func_73(uParam0->f_3, (1 << 30)))
			{
				func_412(2, -1, 0, 0, 0);
			}
			else
			{
				func_412(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_412(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_413(1, uParam0->f_177))
				{
					func_414(16, uParam0->f_177);
					func_415(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_416(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_412(8, -1, 0, 0, 0);
	}
}

bool func_211()
{
	if (func_417(Global_1935630.f_44))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return true;
				}
			}
		}
		else if (func_418())
		{
			return true;
		}
	}
	return false;
}

bool func_212(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_213(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1.0f)
	{
		if (func_73(uParam0->f_3, (1 << 10)))
		{
			fVar0 = 95.0f;
		}
		else if (func_73(uParam0->f_3, (1 << 11)))
		{
			fVar0 = 80.0f;
		}
		else if (func_73(uParam0->f_3, (1 << 12)))
		{
			fVar0 = 65.0f;
		}
		else if (func_73(uParam0->f_3, (1 << 13)))
		{
			fVar0 = 55.0f;
		}
		else if (func_73(uParam0->f_3, (1 << 14)))
		{
			fVar0 = 30.0f;
		}
		else
		{
			fVar0 = 85.0f;
		}
		if (func_73(uParam0->f_3, 1))
		{
		}
		else if (func_73(uParam0->f_3, 2))
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

int func_214(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6)
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
			else if (func_419(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_420(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_421() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0.0f;
	}
	return 1;
}

bool func_215(var uParam0, int iParam1, float fParam2)
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
	func_88(uParam0);
	return true;
}

bool func_216()
{
	return (Global_1894899 & 1 != 0 && func_2() != -1);
}

bool func_217(var uParam0, float fParam1)
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

int func_218(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_422(bParam1, bParam2, bParam3);
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

bool func_219(int iParam0, int iParam1)
{
	return func_209(iParam0) & iParam1 != 0;
}

bool func_220(int iParam0)
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
	if (iParam0 & 1 == 1 && func_423(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_424(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_425(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_426(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_427(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_428(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_429(iVar3))
	{
		return true;
	}
	return false;
}

bool func_221(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_430(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_222(int iParam0)
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

bool func_223(int iParam0, bool bParam1, bool bParam2)
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
		if (func_431())
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
		iVar0 = func_432(Global_1898164.f_1[0 /*5*/]);
		if (func_433(iVar0) && func_434(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_435(Global_1898164.f_1[0 /*5*/]))
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

bool func_224(int iParam0)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	if (func_308(64) && func_436(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_225(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_437(iVar0) | func_438(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_226()
{
	return Global_1894899 & 4 != 0;
}

int func_227(int iParam0)
{
	if (!func_439(iParam0))
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

bool func_228(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_229(Vector3 vParam0, int iParam3)
{
	if (!func_228(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_230(Vector3 vParam0)
{
	float fVar0;

	if (func_77(vParam0))
	{
		return false;
	}
	fVar0 = func_152(func_216(), 6.0f, 22.0f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, (1 << 14));
}

bool func_231(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_125(uParam0);
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
		func_125(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_93(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_95(uParam0, fParam2))
		{
			return true;
		}
		if (func_93(uParam0))
		{
			func_111(uParam0);
		}
	}
	return false;
}

bool func_232(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

void func_233(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_77(vParam0))
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
			if (func_378(vVar2, vParam0, 2.0f, 1))
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

float func_234(int iParam0)
{
	if (!func_184(iParam0))
	{
		return 0.0f;
	}
	if (!func_440(iParam0))
	{
		return 0.0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_235()
{
	return "unnamed";
}

char* func_236(int iParam0)
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

int func_237(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_369(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_238(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), (1 << 10));
	}
	else
	{
		func_85(&(uParam0->f_1), (1 << 10));
	}
}

bool func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_441(iParam2, 1, iVar0);
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
			if (func_442(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_443(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_444(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_443(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_445(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_443(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_446(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_443(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_218(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & (1 << 19) == 0))
		{
			if (!iParam2->f_1 & (1 << 14) != 0)
			{
				*iParam3 = (1 << 14);
				func_443(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_447(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_448(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_443(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_449(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_443(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_450(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_443(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_450(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_443(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_451(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_443(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & (1 << 18) != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20.0f)
			{
				if (func_452(&iParam0, iParam2))
				{
					*iParam3 = (1 << 12);
					func_443(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_453(iParam2, 4000))
				{
					if (func_454(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) & func_455(iParam2, iParam0) && func_456(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_443(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4.0f)
			{
				if (func_454(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) & func_455(iParam2, iParam0) && func_456(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_443(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & (1 << 17) == 0)
						{
							if (func_457(iParam0, Global_1935630.f_41))
							{
								func_458();
								*iParam3 = 2;
								func_443(iParam0, iParam2, *iParam3);
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
						if (func_457(iParam0, Global_1935630.f_41))
						{
							func_458();
							*iParam3 = 2;
							func_443(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10.0f)
			{
				if (func_459(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_460() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_458();
						*iParam3 = 2;
						func_443(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & (1 << 17) == 0)
				{
					if (func_461())
					{
						if (func_457(iParam0, Global_1935630.f_42))
						{
							func_458();
							*iParam3 = 2;
							func_443(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & (1 << 10) != 0)
		{
			if (func_462(iParam2, iParam0))
			{
				*iParam3 = (1 << 10);
				func_443(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & (1 << 11) != 0)
			{
				if (func_463(iParam0, iParam1, iParam2))
				{
					*iParam3 = (1 << 11);
					func_443(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_464(iParam0, iParam2))
					{
						*iParam3 = (1 << 13);
						func_443(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_465(iParam0, iParam2))
				{
					*iParam3 = (1 << 15);
					func_443(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12.0f)
		{
			if (*iParam2 & (1 << 20) != 0)
			{
				if (func_466(iParam2, 4000))
				{
					if (func_467(&iParam0, iParam2))
					{
						*iParam3 = (1 << 9);
						func_443(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & (1 << 10) != 0)
			{
				if (func_468(iParam0, iParam2))
				{
					*iParam3 = (1 << 16);
					iParam2->f_4 = 0;
					func_443(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_469(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_443(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_240(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

float func_241(var uParam0)
{
	if (!func_93(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_470(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_421() - uParam0->f_1);
}

bool func_242(int iParam0, bool bParam1)
{
	if (func_54(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_243(float fParam0)
{
	if (func_471(1))
	{
		return true;
	}
	if (func_93(&uLocal_0) && !func_472(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_244(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_245(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

float func_246()
{
	return 175.0f;
}

bool func_247(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, var uParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

bool func_248(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
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

bool func_249(int iParam0)
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

void func_250(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_249(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_473(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_474(iVar0);
	*uParam0 = 0;
}

void func_251(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_252(int* iParam0, var uParam1)
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
	func_475(iParam0, uParam1, 1);
	func_103(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

void func_253(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

void func_254(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iLocal_528[iParam0], 7, 1, true);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iLocal_528[iParam0], 3, 1, true);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iLocal_528[iParam0], 4, 1, true);
	func_105(&(iLocal_528[iParam0]), &(sLocal_407[iParam0 /*21*/]), &sLocal_471, 1, 1);
}

bool func_255(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

void func_256()
{
	float fVar0;

	if (fLocal_593 >= 10.0f)
	{
		fVar0 = sLocal_14.f_98[2];
		if (fVar0 < fLocal_593)
		{
			fLocal_593 = fVar0;
		}
	}
}

void func_257(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam0, sParam1) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0, sParam1))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1);
	}
}

bool func_258()
{
	if (func_476(4))
	{
		return Global_1935630.f_27;
	}
	return func_477();
}

bool func_259(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_127(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_478(iVar0, 0)))
		{
			if (func_479(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_260(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_480(0))
		{
			func_265(0, 1);
		}
	}
	else if (func_480(0))
	{
		func_265(0, 0);
	}
	if (bParam1)
	{
		if (!func_480(1))
		{
			func_265(1, 1);
		}
	}
	else if (func_480(1))
	{
		func_265(1, 0);
	}
}

int func_261(int iParam0, int iParam1, int iParam2)
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

int func_262(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_481(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= (1 << 23);
	}
	iVar1 = func_482(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, (1 << 27)))
	{
		func_483(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_484(558))
				{
					func_485(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_263(var uParam0)
{
	return uParam0->f_2 == 2;
}

void func_264(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_486(iParam0, 13))
		{
			if (bParam2)
			{
				func_487(iParam0, 0, 0);
			}
			func_488(iParam0, 13);
		}
	}
	else if (func_486(iParam0, 13))
	{
		func_489(iParam0, 13);
	}
}

void func_265(int iParam0, bool bParam1)
{
	func_487(&(sLocal_471[iParam0 /*17*/]), bParam1, 0);
}

char* func_266(int iParam0)
{
	if (func_490(iParam0))
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

void func_267(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_249(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_491(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_492(iParam0->f_6, iParam0->f_5, 0);
			}
			func_493(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_494(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_268(int* iParam0, int* iParam1)
{
	if (!func_495(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_488(iParam1, 19);
			func_496(iParam0, 23);
			func_497(iParam1, 2);
		}
	}
}

void func_269(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_235());
	}
}

void func_270(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_271(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_235());
	}
}

void func_272(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_273()
{
	func_498();
	if (iLocal_405 == 6)
	{
		return;
	}
	if (!func_499())
	{
		return;
	}
	switch (iLocal_405)
	{
		case 0:
			if (func_500(0, 1))
			{
				if (func_54(iLocal_528[2], 0, 0))
				{
					PED::KNOCK_OFF_PED_PROP(iLocal_528[2], false, true, false, false);
				}
				func_297(&iLocal_578, 1, 0);
				func_94(&uLocal_622, 0);
				func_501(1);
			}
			else if (sLocal_14.f_98[0] < 20.0f)
			{
				if (bLocal_551)
				{
					if (func_95(&uLocal_597, 10.0f) || !func_50(iLocal_579, 128))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(sLocal_322.f_0, "PBL_PUNCH"))
						{
							func_25(sLocal_322.f_0, "PBL_PUNCH2", 1);
						}
						else
						{
							func_25(sLocal_322.f_0, "PBL_PUNCH", 1);
						}
						func_26(1);
						func_125(&uLocal_597);
						if (!func_50(iLocal_579, 128))
						{
							func_27(&iLocal_579, 128, 0);
						}
					}
				}
			}
			break;
		case 1:
			if (!func_95(&uLocal_622, 7.5f))
			{
				return;
			}
			if (func_500(1, 1))
			{
				func_297(&iLocal_578, 2, 0);
				func_501(2);
			}
			break;
		case 2:
			if (!func_95(&uLocal_622, 7.5f))
			{
				return;
			}
			if (func_500(2, 1))
			{
				func_297(&iLocal_578, 4, 0);
				func_501(6);
			}
			break;
		case 6:
			break;
	}
}

void func_274(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = sLocal_14.f_98[1];
	if (fLocal_739 != -1.0f)
	{
		fVar1 = func_303(iLocal_528[1], func_502(Global_35, 1065353216), 1);
	}
	if (iLocal_710 >= 2)
	{
		if (func_503())
		{
			PED::SET_PED_USING_ACTION_MODE(iLocal_528[0], true, -1, 0);
			PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
			func_296(1, Global_35, func_295(1), 42.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1);
			func_504(iLocal_528[1], Global_35, -1);
			func_297(&iLocal_578, (1 << 9), 0);
			func_27(&iLocal_579, 16, 0);
		}
		return;
	}
	switch (iLocal_401)
	{
		case 0:
			func_110(1, 0);
			func_505(1);
			break;
		case 1:
			if (func_506(fVar0, fVar1) & func_507() || iParam0 != -1)
			{
				bLocal_709 = true;
				fLocal_739 = fVar0;
				func_260(0, 0);
				func_508();
				func_94(&uLocal_723, 0);
				func_505(3);
			}
			break;
		case 3:
			if (func_509(1) && func_294(iLocal_578, 128))
			{
				func_260(1, 1);
				func_505(11);
			}
			else if (func_503() || ((func_294(iLocal_578, 128) && bLocal_653) && func_96(-5.0f, 1, iLocal_528[1], 1)))
			{
				if (!func_294(iLocal_578, 128))
				{
					if (func_296(1, Global_35, func_510(11), 42.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_NORMAL"), 1))
					{
						func_297(&iLocal_578, 128, 0);
						func_23();
						PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_528[1], "brave");
						TASK::TASK_PLAY_ANIM(iLocal_528[1], sLocal_305[3 /*2*/], sLocal_305[2 /*2*/].f_1, 4.0f, -4.0f, -1, 67108880, 0.0f, false, (1 << 16), false, 0, false);
						func_125(&uLocal_723);
						if (iLocal_710 < 1)
						{
							iLocal_710 = 1;
						}
						func_505(5);
					}
				}
				else if (!func_294(iLocal_578, 256))
				{
					if (func_296(1, Global_35, func_510(12), 42.0f, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1))
					{
						if (!func_294(iLocal_578, 256))
						{
							func_297(&iLocal_578, 256, 0);
						}
						if (bLocal_653)
						{
							func_283(iLocal_528[1], &(uLocal_536[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
							PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
							func_125(&uLocal_723);
							func_505(10);
						}
						else
						{
							PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_528[1], "brave");
							TASK::TASK_PLAY_ANIM(iLocal_528[1], sLocal_305[3 /*2*/], sLocal_305[3 /*2*/].f_1, 4.0f, -4.0f, -1, 67108880, 0.0f, false, 0, false, 0, false);
							func_125(&uLocal_723);
							func_505(5);
						}
					}
				}
				else if (!func_294(iLocal_578, (1 << 9)) && !func_50(iLocal_579, 16))
				{
					if (func_296(1, Global_35, func_510(13), 42.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1))
					{
						func_297(&iLocal_578, (1 << 9), 0);
						TASK::TASK_PLAY_ANIM(iLocal_528[1], sLocal_305[4 /*2*/], sLocal_305[4 /*2*/].f_1, 4.0f, -4.0f, -1, 67108880, 0.0f, false, 0, false, 0, false);
						func_125(&uLocal_723);
						func_505(5);
					}
				}
			}
			break;
		case 5:
			if (func_509(1))
			{
				func_505(11);
			}
			else if ((func_503() && func_95(&uLocal_723, 7.0f)) || (bLocal_653 && func_96(-5.0f, 1, iLocal_528[1], 1)))
			{
				func_505(3);
			}
			else
			{
				func_511();
				switch (iParam0)
				{
					case 0:
						if (!func_292(1, (1 << 11)))
						{
							func_293(1, (1 << 11));
						}
						if (!PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 30.0f))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1.0f, -1.0f, -1.0f);
						}
						func_125(&uLocal_723);
						break;
					case 1:
						if (iLocal_710 < 2)
						{
							func_505(3);
							return;
						}
						break;
				}
				if (func_292(1, (1 << 11)) && func_96(0, 1, Global_35, 1))
				{
					TASK::TASK_PLAY_ANIM(iLocal_528[1], sLocal_305[2 /*2*/], sLocal_305[2 /*2*/].f_1, 4.0f, -4.0f, -1, 67108880, 0.0f, false, (1 << 16), false, 0, false);
					func_296(1, Global_35, "GET_LOST", -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1);
					if (!func_294(iLocal_578, 256))
					{
						func_297(&iLocal_578, 256, 0);
					}
					func_110(!func_50(iLocal_579, (1 << 19)), 1);
					bLocal_649 = false;
					vLocal_650 = { 0.0f, 0.0f, 0.0f /*3*/ };
					func_125(&uLocal_723);
					func_298(1, (1 << 11));
				}
			}
			break;
		case 10:
			if (func_509(1))
			{
				func_505(11);
			}
			else if (func_95(&uLocal_723, 2.0f) && func_96(-5.0f, 1, iLocal_528[1], 1))
			{
				if (!func_50(iLocal_579, 16))
				{
					func_296(1, Global_35, "RE_FOOTR_VAL_V1_THUG2_AGGRO", 42.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1);
					func_297(&iLocal_578, (1 << 9), 0);
					func_27(&iLocal_579, 16, 0);
				}
			}
			break;
		case 11:
			if (func_512(0))
			{
				func_513(0);
				fLocal_739 = (sLocal_14.f_98[1] - 1.0f);
				func_505(1);
			}
			break;
	}
}

bool func_275()
{
	if (func_294(iLocal_578, (1 << 9)))
	{
		return true;
	}
	if (sLocal_14.f_98[0] < 3.0f && func_514())
	{
		return true;
	}
	return false;
}

void func_276(bool bParam0)
{
	func_27(&iLocal_579, 2, 0);
	if (bParam0)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(sLocal_322.f_0, "PBL_MAIN") && ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_322.f_0) > 0.56f)
		{
			func_27(&iLocal_579, 4, 0);
		}
		else
		{
			func_25(sLocal_322.f_0, "PBL_QUICKEXIT", 1);
		}
	}
	else
	{
		func_25(sLocal_322.f_0, "PBL_QUICKEXIT", 1);
	}
	func_26(1);
	func_29();
}

bool func_277()
{
	if (!bLocal_552)
	{
		if (sLocal_14.f_98[2] < 30.0f)
		{
			if (func_515(&iLocal_528, &uLocal_654, &uLocal_659, 3.5f, 30.0f, 0, 0, 17.0f))
			{
				bLocal_552 = true;
			}
		}
	}
	if (bLocal_552)
	{
		if (func_96(0.0f, 1, iLocal_528[0], 1))
		{
			return true;
		}
	}
	return false;
}

bool func_278(int iParam0, char* sParam1, int iParam2)
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

void func_279()
{
	if (sLocal_14.f_98[2] > 15.0f)
	{
		func_516(1891783641, ENTITY::GET_ENTITY_COORDS(iLocal_528[2], true, false), 1);
	}
}

bool func_280()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_528[iVar0]))
		{
			func_125(&uLocal_609);
			return false;
		}
		iVar0++;
	}
	func_94(&uLocal_609, 0);
	if (func_95(&uLocal_609, 3.0f))
	{
		return true;
	}
	return false;
}

void func_281()
{
	func_324(iLocal_528[2], 0, 0);
	if (func_54(iLocal_528[0], 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_528[0], 167, true);
	}
	if (func_54(iLocal_528[1], 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_528[1], 167, true);
	}
	sLocal_14.f_45 = 0;
}

bool func_282()
{
	if (sLocal_14.f_48)
	{
		return true;
	}
	if (sLocal_14.f_98[2] > 37.0f || sLocal_14.f_98[2] <= 0.0f)
	{
		return false;
	}
	if (func_499() && func_514())
	{
		return true;
	}
	return false;
}

void func_283(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_284()
{
	switch (iLocal_402)
	{
		case 0:
			if (func_54(iLocal_528[2], 0, 1))
			{
				func_517();
			}
			else
			{
				func_518(1);
			}
			break;
		case 1:
			func_519();
			if (!func_294(iLocal_578, 64))
			{
				if (func_520())
				{
					if (iLocal_523 != 1)
					{
						if (func_96(-4.0f, 1, 0, 0))
						{
							func_296(0, 0, func_510(10), 42.0f, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1);
						}
					}
					func_297(&iLocal_578, 64, 0);
					PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
					func_518(2);
				}
			}
			break;
		case 2:
			func_519();
			func_521();
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(sLocal_322.f_0, false))
			{
				AUDIO::STOP_PED_SPEAKING(iLocal_528[0], false);
				return true;
			}
			break;
	}
	return false;
}

void func_285()
{
	if (!func_50(iLocal_579, (1 << 12)))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_322.f_0, "ACTION_LOOP", true))
		{
			if (func_522())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_322.f_0, "ACTION_BOOL", true, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_322.f_1, "ACTION_BOOL", true, false);
				func_27(&iLocal_579, (1 << 12), 0);
			}
		}
	}
}

void func_286()
{
	var uVar0;

	switch (iLocal_405)
	{
		case 0:
			if (func_99(iLocal_528[0], joaat("BLINESCALAWAG"), "bLineScalawag", uVar0, 1067030938, 1))
			{
				func_279();
				func_297(&iLocal_578, 1, 0);
				func_501(1);
			}
			break;
		case 1:
			if (func_99(iLocal_528[2], joaat("BLINEFAMILY"), "bLineFamily", uVar0, 1067030938, 1))
			{
				func_279();
				func_297(&iLocal_578, 2, 0);
				func_501(2);
			}
			break;
		case 2:
			if (func_99(iLocal_528[0], joaat("BLINECARPETBAGGER"), "bLineCarpetBagger", uVar0, 1067030938, 1))
			{
				func_297(&iLocal_578, 4, 0);
				func_501(3);
			}
			break;
		case 3:
			if (func_99(iLocal_528[2], joaat("BLINETOYSOLDIERS"), "bLineToySoldiers", uVar0, 1067030938, 1))
			{
				func_297(&iLocal_578, (1 << 11), 0);
				func_501(5);
			}
			break;
		case 4:
			break;
		case 5:
			if (func_99(iLocal_528[2], joaat("BLINESADDER"), "bLineSadder", uVar0, 1067030938, 1))
			{
				func_297(&iLocal_578, (1 << 13), 0);
				func_27(&iLocal_579, 256, 0);
				func_501(6);
			}
			break;
		case 6:
			break;
	}
}

void func_287()
{
	var uVar0;

	if (!func_50(iLocal_579, 256))
	{
		return;
	}
	if (func_294(iLocal_578, 16))
	{
		if (!func_53(2, 128))
		{
			if (func_99(iLocal_528[2], joaat("BDEATH"), "bDeath", uVar0, 0.3f, 1))
			{
				func_140(iLocal_528[2], 0);
				if ((fLocal_593 < 30.0f && sLocal_14.f_48) && !func_50(iLocal_579, (1 << 20)))
				{
					func_306(2, 0, 0, "RE_HONOR_WITNESSED_CRIME", 0, 0, 1065353216, 0);
				}
				func_324(iLocal_528[2], 1, 1);
				func_264(&(sLocal_471[0 /*17*/]), 1, 1);
				func_494(&(sLocal_471[1 /*17*/]), func_266(10));
				func_102(2, 128);
			}
		}
	}
	if (!func_294(iLocal_578, 16))
	{
		if (func_99(iLocal_528[2], joaat("BLINEIDIOT"), "bLineIdiot", uVar0, 1067030938, 1))
		{
			func_297(&iLocal_578, 16, 0);
		}
	}
}

void func_288()
{
	var uVar0;

	if (!func_50(iLocal_579, (1 << 9)))
	{
		if (func_99(iLocal_528[1], joaat("BINWARNPOSITION"), "bInWarnPosition", uVar0, 0.5f, 1))
		{
			func_27(&iLocal_579, (1 << 9), 0);
		}
	}
	else if (func_99(iLocal_528[1], joaat("BOUTWARNPOSITION"), "bOutWarnPosition", uVar0, 0.5f, 1))
	{
		func_81(&iLocal_579, (1 << 9));
	}
}

void func_289(int iParam0)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;

	fVar0 = sLocal_14.f_98[1];
	fVar1 = func_303(iLocal_528[1], func_502(Global_35, 1065353216), 1);
	switch (iLocal_401)
	{
		case 0:
			func_110(1, 0);
			func_505(1);
			break;
		case 1:
			if (func_506(fVar0, fVar1) & func_507() || iParam0 != -1)
			{
				bLocal_709 = true;
				func_125(&uLocal_723);
				fLocal_739 = fVar0;
				func_508();
				if (iParam0 == 1)
				{
					if (iLocal_710 >= 2 || !func_54(iLocal_528[2], 0, 1))
					{
						func_27(&iLocal_579, 16, 0);
						func_505(9);
					}
					else
					{
						func_505(5);
					}
				}
				else
				{
					func_505(3);
				}
			}
			break;
		case 4:
			func_297(&iLocal_578, 128, 0);
			func_23();
			func_125(&uLocal_723);
			func_110(1, 1);
			func_505(5);
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					PED::SET_PED_USING_ACTION_MODE(iLocal_528[0], true, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1.0f, -1.0f, -1.0f);
					if (iLocal_710 >= 2 || !func_54(iLocal_528[2], 0, 1))
					{
						func_27(&iLocal_579, 16, 0);
						func_505(9);
					}
					else
					{
						bVar2 = true;
					}
					break;
			}
			if (func_503() || bVar2)
			{
				if (!func_294(iLocal_578, 128))
				{
					if (func_296(1, Global_35, func_510(11), 42.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CRITICAL"), 1))
					{
						iLocal_702 = iLocal_528[1];
						func_297(&iLocal_578, 128, 0);
						func_23();
						PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_528[1], "brave");
						TASK::TASK_PLAY_ANIM(iLocal_528[1], sLocal_305[2 /*2*/], sLocal_305[2 /*2*/].f_1, 2.0f, -2.0f, -1, 67108880, 0.0f, false, (1 << 16), false, 0, false);
						func_125(&uLocal_723);
						func_505(5);
					}
				}
				else
				{
					func_505(5);
				}
			}
			break;
		case 5:
			if (!func_50(iLocal_579, (1 << 10)))
			{
				func_511();
			}
			switch (iParam0)
			{
				case 0:
					if (!func_292(1, (1 << 11)))
					{
						if (!PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 30.0f))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1.0f, -1.0f, -1.0f);
						}
						func_293(1, (1 << 11));
					}
					break;
				case 1:
					PED::SET_PED_USING_ACTION_MODE(iLocal_528[0], true, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1.0f, -1.0f, -1.0f);
					func_505(9);
					bVar2 = true;
					break;
			}
			if (bVar2)
			{
			}
			else
			{
				if (func_523() && !func_292(1, (1 << 11)))
				{
					if (func_509(func_50(iLocal_579, (1 << 13))))
					{
						func_505(11);
					}
					else if (func_524())
					{
						PED::SET_PED_USING_ACTION_MODE(iLocal_528[0], true, -1, 0);
						PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1.0f, -1.0f, -1.0f);
						func_505(6);
					}
				}
				else if ((func_292(1, (1 << 11)) && func_96(0, 1, Global_35, 1)) && func_96(0, 1, iLocal_528[1], 1))
				{
					TASK::TASK_PLAY_ANIM(iLocal_528[1], sLocal_305[2 /*2*/], sLocal_305[2 /*2*/].f_1, 2.0f, -2.0f, -1, 67108880, 0.0f, false, (1 << 16), false, 0, false);
					func_296(1, Global_35, "GET_LOST", -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1);
					iLocal_702 = iLocal_528[1];
					func_110(!func_50(iLocal_579, (1 << 19)), 1);
					bLocal_649 = false;
					vLocal_650 = { 0.0f, 0.0f, 0.0f /*3*/ };
					func_297(&iLocal_578, 256, 0);
					func_125(&uLocal_723);
					func_298(1, (1 << 11));
				}
				Jump @1894; // curOff = 1034
				if (PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 15.0f))
				{
					if (!func_294(iLocal_578, 256))
					{
						if (func_96(0, 1, Global_35, 1))
						{
							func_296(1, Global_35, func_510(12), -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1);
							iLocal_702 = iLocal_528[1];
							func_297(&iLocal_578, 256, 0);
						}
					}
					else
					{
						func_264(&(sLocal_471[0 /*17*/]), 1, 1);
						func_125(&uLocal_723);
						func_505(7);
					}
				}
				Jump @1894; // curOff = 1159
				switch (iParam0)
				{
					case 0:
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1.0f, -1.0f, -1.0f);
						TASK::TASK_PLAY_ANIM(iLocal_528[1], sLocal_305[2 /*2*/], sLocal_305[2 /*2*/].f_1, 2.0f, -2.0f, -1, 67108880, 0.0f, false, (1 << 16), false, 0, false);
						func_296(1, Global_35, "GET_LOST", -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1);
						iLocal_702 = iLocal_528[1];
						func_110(!func_50(iLocal_579, (1 << 19)), 1);
						bLocal_649 = false;
						vLocal_650 = { 0.0f, 0.0f, 0.0f /*3*/ };
						func_125(&uLocal_723);
						break;
					case 1:
						PED::SET_PED_USING_ACTION_MODE(iLocal_528[0], true, -1, 0);
						PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1.0f, -1.0f, -1.0f);
						func_505(9);
						break;
					default:
						if ((func_95(&uLocal_723, 3.5f) && !func_263(&(sLocal_407[1 /*21*/]))) && !func_263(&(sLocal_407[0 /*21*/])))
						{
							if (func_509(func_50(iLocal_579, (1 << 13))))
							{
								func_505(11);
							}
							else
							{
								if (sLocal_14.f_98[1] < 8.0f && (PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_528[1], true, false), 60.0f) || ENTITY::GET_ENTITY_SPEED(Global_35) < 1.0f))
								{
									func_125(&uLocal_723);
									func_505(9);
								}
								else if ((func_95(&uLocal_723, 8.0f) && (PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_528[1], true, false), 60.0f) || ENTITY::GET_ENTITY_SPEED(Global_35) < 1.0f)) && sLocal_14.f_98[1] <= (fLocal_739 + 1.0f))
								{
									func_125(&uLocal_723);
									func_505(9);
								}
							else
							{
								}
								Jump @1894; // curOff = 1638
								if (func_96(0, 1, Global_35, 1))
								{
									if (func_95(&uLocal_723, 8.0f) || func_50(iLocal_579, 16))
									{
										if (!func_50(iLocal_579, 16))
										{
											func_27(&iLocal_579, 16, 0);
										}
									}
									else if (func_96(0, 1, iLocal_528[1], 1))
									{
										if (!func_53(1, 16))
										{
											func_296(1, Global_35, func_510(13), -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1);
											iLocal_702 = iLocal_528[1];
											func_297(&iLocal_578, (1 << 9), 0);
											TASK::OPEN_SEQUENCE_TASK(&iVar3);
											TASK::TASK_REACT(0, Global_35, Global_36, "TaskCombat_React", 1.0f, 0.0f, 4);
											TASK::TASK_COMBAT_PED(0, Global_35, 68157440, (1 << 12));
											func_146(iLocal_528[0], &iVar3, 0, 0, 1, 1);
										}
									}
									func_321(1);
								}
								Jump @1894; // curOff = 1847
								if (func_512(1))
								{
									fLocal_739 = (sLocal_14.f_98[1] - 1.0f);
									func_513(0);
									func_27(&iLocal_579, (1 << 13), 0);
									func_505(1);
								}
							}
						}
				}
			}
			default:
				break;
	}
}

bool func_290()
{
	var uVar0;

	if (func_499() && func_514())
	{
		if (func_99(iLocal_528[0], joaat("BQUICKTHROW"), "bQuickThrow", uVar0, 0.5f, 1) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_322.f_0, "ACTION_LOOP", true))
		{
			if (func_525(iLocal_528[2], &(sLocal_14.f_33), &uLocal_647, &uLocal_648, 0.01f, 12.0f, 0, 0, 5.0f, 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_291(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	bool bVar4;

	if (!func_53(0, 1))
	{
		if (!func_294(iLocal_578, (1 << 9)))
		{
			if (func_101(iLocal_528[0], sLocal_322.f_0, "thug_A", 0, 0, 1, 0))
			{
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_528[0], 0.0f, 1.5f, 0.0f) /*3*/ };
				func_395(&vVar0, 1, 10, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1.0f, 20000, 0.25f, 1, 40000.0f);
				if (func_54(sLocal_208[0 /*32*/].f_11, 0, 0))
				{
					TASK::TASK_MOUNT_ANIMAL(0, sLocal_208[0 /*32*/].f_11, 20000, -1, 1.0f, 1, 0, 0);
				}
				func_146(iLocal_528[0], &iVar3, 0, 0, 1, 1);
				func_102(0, 256);
				func_102(0, 1);
			}
		}
	}
	if (!func_53(1, 1))
	{
		bVar4 = func_526();
		if (!func_53(0, 1))
		{
			if ((func_527(sLocal_322.f_0) < 0.763f || func_124(iLocal_528[1], joaat("SCRIPT_TASK_CONFRONT"))) || func_294(iLocal_578, (1 << 9)))
			{
				return false;
			}
		}
		if (func_101(iLocal_528[1], sLocal_322.f_1, "thug_B", 0, 0, 1, 0) || bVar4)
		{
			if (!bVar4)
			{
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_528[1], 0.0f, 1.5f, 0.0f) /*3*/ };
				func_395(&vVar0, 1, 10, 0);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (!bVar4)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1.0f, 20000, 0.25f, 1, 40000.0f);
			}
			if (func_54(sLocal_208[1 /*32*/].f_11, 0, 0))
			{
				TASK::TASK_MOUNT_ANIMAL(0, sLocal_208[1 /*32*/].f_11, 20000, -1, 1.0f, 1, 0, 0);
			}
			func_146(iLocal_528[1], &iVar3, 0, 0, 1, 1);
			func_102(1, 256);
			func_102(1, 1);
		}
	}
	if (func_53(0, 256) || func_53(1, 256))
	{
		func_120(iParam0);
	}
	if ((func_53(0, 1) && func_53(1, 1)) && !func_294(iLocal_578, (1 << 9)))
	{
		return true;
	}
	return false;
}

bool func_292(int iParam0, int iParam1)
{
	return func_138(uLocal_580[iParam0], iParam1);
}

void func_293(int iParam0, int iParam1)
{
	func_98(&(uLocal_580[iParam0]), iParam1);
}

bool func_294(int iParam0, int iParam1)
{
	return func_138(iParam0, iParam1);
}

char* func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_510(15);
		case 1:
			return func_510(16);
		default:
			break;
	}
	return "";
}

bool func_296(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;

	iVar0 = func_333(iLocal_528[iParam0], iParam1, sParam2, fParam3, bParam4, iParam5, bParam6);
	if (iVar0 >= 0)
	{
		iLocal_584[iParam0] = iVar0;
		return true;
	}
	return false;
}

void func_297(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	func_98(iParam0, iParam1);
}

void func_298(int iParam0, int iParam1)
{
	func_202(&(uLocal_580[iParam0]), iParam1);
}

void func_299()
{
	if (func_528())
	{
		if (func_54(iLocal_528[0], 0, 1))
		{
			IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_528[0], &sLocal_553);
		}
		if (func_54(iLocal_528[1], 0, 1))
		{
			IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_528[1], &sLocal_553);
		}
		if (func_294(iLocal_578, (1 << 16)) && func_315(&uLocal_726) > 10.0f)
		{
			if (!func_77(vLocal_643))
			{
				if (func_529(Global_36, vLocal_643) > 20.0f)
				{
					func_27(&iLocal_579, 4, 0);
					func_29();
				}
			}
		}
		else
		{
			if (!func_93(&uLocal_726))
			{
				func_125(&uLocal_726);
			}
			else if (func_470(&uLocal_726))
			{
				func_530(&uLocal_726);
			}
			if (func_531(iLocal_698, iLocal_528[1], &(sLocal_407[1 /*21*/])) | func_531(iLocal_698, iLocal_528[0], &(sLocal_407[0 /*21*/])))
			{
				return;
			}
			if (!func_294(iLocal_578, (1 << 16)))
			{
				if (func_296(1, Global_35, func_510(14), 42.0f, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1))
				{
					vLocal_643 = { Global_36 /*3*/ };
					func_297(&iLocal_578, (1 << 16), 0);
				}
			}
		}
	}
	else if (func_93(&uLocal_726) && !func_470(&uLocal_726))
	{
		func_532(&uLocal_726);
	}
}

void func_300(int iParam0)
{
	iLocal_403 = iParam0;
}

int func_301(int iParam0)
{
	if (!func_54(sLocal_208[iParam0 /*32*/].f_11, 0, 1))
	{
		return 0;
	}
	if (PED::_GET_RIDER_OF_MOUNT(sLocal_208[iParam0 /*32*/].f_11, true) != 0)
	{
		return 0;
	}
	if (func_127(sLocal_208[iParam0 /*32*/].f_11, iLocal_528[iParam0], 1, 1) > 12.0f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_302(int iParam0)
{
	return { 0.0f, 0.0f, 0.0f };
}

float func_303(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_304(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return 0;
	}
	if (!func_439(iParam1))
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
		func_533(iParam0, 0);
		if (bParam3)
		{
			func_534(iParam0, 5);
		}
		else
		{
			func_534(iParam0, 6);
		}
		func_535(iParam0, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam2);
			if (!func_536(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

int func_305()
{
	return Global_40.f_4283;
}

void func_306(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_355() != -1)
	{
		return;
	}
	if (Global_36616 & func_537(iParam1) != 0)
	{
		return;
	}
	iVar0 = func_538(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_539(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_540(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_539(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_307(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (func_54((*iParam1)[iVar0], 0, 0))
		{
			if (uParam0->f_98[iVar0] < 3.0f)
			{
				if (PED::IS_PED_IN_COMBAT((*iParam1)[iVar0], Global_35))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_308(int iParam0)
{
	return Global_1310750.f_16035 & iParam0 != 0;
}

void func_309(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

void func_310()
{
	int iVar0;

	if (func_50(iLocal_579, 8))
	{
		return;
	}
	if (func_541())
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (func_54(iLocal_528[iVar0], 0, 0))
			{
				TASK::TASK_COMBAT_PED(iLocal_528[iVar0], Global_35, 0, 0);
			}
			iVar0++;
		}
		func_27(&iLocal_579, 8, 0);
	}
}

void func_311()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!func_77(sLocal_330[iVar0 /*9*/]))
		{
			func_542(&(sLocal_330[iVar0 /*9*/]), iVar0);
		}
		iVar0++;
	}
}

bool func_312(int iParam0)
{
	if (!func_139(iParam0, 3))
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

void func_313(int iParam0)
{
	if (iLocal_584[iParam0] >= 0)
	{
		func_104(iLocal_528[iParam0], 0);
		func_543(&(iLocal_584[iParam0]));
	}
}

bool func_314()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < iLocal_528)
	{
		if (func_54(iLocal_528[iVar1], 0, 1))
		{
			if (func_544(iVar1) >= 10)
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 >= 3)
	{
		return true;
	}
	return false;
}

float func_315(var uParam0)
{
	if (!func_93(uParam0))
	{
		return 0.0f;
	}
	if (func_470(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_421() - uParam0->f_1);
}

void func_316(int iParam0, int iParam1)
{
	iLocal_729[iParam0] = iParam1;
}

void func_317(int iParam0, char* sParam1)
{
	var uVar0;
	int iVar1;
	char* sVar2;

	if (func_50(iLocal_579, (1 << 23)))
	{
		return;
	}
	if (func_53(iParam0, (1 << 9)))
	{
		iVar1 = func_100();
		switch (iVar1)
		{
			case 3:
				sVar2 = "PBL_WALL_BREAKOUT_LEFT";
				break;
			case 2:
				sVar2 = "PBL_WALL_BREAKOUT_RIGHT";
				break;
			case 1:
				sVar2 = "PBL_WALL_BREAKOUT_BACK";
				break;
			default:
				sVar2 = "PBL_BRKOUT_WALL";
				break;
		}
		if (!func_101(iLocal_528[iParam0], sLocal_322.f_0, sParam1, 0, 0, 1, 0))
		{
			if (func_99(iLocal_528[iParam0], joaat("BWALLBREAKOUT"), "bWallBreakout", uVar0, 1.6f, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_322.f_0, sVar2, false);
				func_27(&iLocal_579, (1 << 23), 0);
			}
		}
	}
}

int func_318(var uParam0)
{
	return uParam0->f_10;
}

bool func_319()
{
	if (func_50(iLocal_579, (1 << 22)))
	{
		return true;
	}
	if (iLocal_716 == (1 << 13) || iLocal_716 == (1 << 14))
	{
		if (func_218(iLocal_698, 0, 1, 0))
		{
			func_27(&iLocal_579, (1 << 22), 0);
			return true;
		}
	}
	return false;
}

void func_320(int iParam0)
{
	func_545(0);
	func_313(0);
	func_313(1);
	func_313(2);
	TASK::TASK_FLEE_PED(iLocal_528[iParam0], Global_35, 4, 0, -1.0f, -1, 0);
	func_102(iParam0, 16);
}

void func_321(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_53(iParam0, 16))
	{
		return;
	}
	if (!func_294(iLocal_578, (1 << 9)))
	{
		func_545(0);
		func_313(0);
		func_313(1);
		func_313(2);
		if (!func_294(iLocal_578, (1 << 9)))
		{
			if (func_296(iParam0, Global_35, func_295(iParam0), 42.0f, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1))
			{
				func_297(&iLocal_578, (1 << 9), 0);
			}
		}
	}
	func_283(iLocal_528[iParam0], &(uLocal_536[iParam0]), joaat("BLIP_STYLE_ENEMY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_528[iParam0], sLocal_322.f_0))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iLocal_528[iParam0]);
	}
	PED::SET_PED_CONFIG_FLAG(iLocal_528[iParam0], 167, false);
	iVar0 = 68157440;
	iVar1 = 4112;
	TASK::OPEN_SEQUENCE_TASK(&iVar2);
	if ((PED::IS_PED_ON_MOUNT(iLocal_528[iParam0]) && !func_50(iLocal_579, 8)) || func_124(iLocal_528[iParam0], joaat("SCRIPT_TASK_ENTER_TRANSPORT")))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
	}
	TASK::TASK_COMBAT_PED(0, Global_35, iVar0, iVar1);
	func_146(iLocal_528[iParam0], &iVar2, 0, 0, 1, 1);
	func_102(iParam0, 16);
	func_546();
}

bool func_322(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_323()
{
	var uVar0;

	if (func_99(iLocal_528[2], joaat("DEAD"), "Dead", uVar0, 1.4f, 1))
	{
		return true;
	}
	return false;
}

void func_324(int iParam0, bool bParam1, bool bParam2)
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

void func_325(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

void func_326(var uParam0)
{
	PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(*uParam0, "Default_Panic", 0, -1, 4);
	PED::PED_COWER_MOVE_TO_POINT(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0.1f, 0.0f, 0.0f), Global_35, (1 << 30));
}

bool func_327()
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (func_54(iLocal_528[iVar3], 0, 1) && !TASK::IS_PED_IN_WRITHE(iLocal_528[iVar3]))
		{
			iVar1++;
			if (PED::IS_PED_IN_MELEE_COMBAT(iLocal_528[iVar3]))
			{
				fVar2 = 1.5f;
			}
			else
			{
				fVar2 = 2.0f;
			}
			if (func_127(iLocal_528[2], iLocal_528[iVar3], 0, 1) < fVar2)
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (bVar0)
	{
		if (sLocal_14.f_98[2] < 1.0f)
		{
			bVar0 = false;
		}
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_528[2], Global_35, true, true))
	{
		bVar0 = false;
	}
	if (!bVar0 && iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_328(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 |= func_537(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

bool func_329(var uParam0)
{
	if (func_3(*uParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_330(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5)
{
	int iVar0;

	if (!func_3(*iParam0, 4))
	{
		if (func_3(iParam5, 1))
		{
			if (func_359())
			{
				func_547(iParam0, 4);
				return false;
			}
		}
		else if (func_3(iParam5, 2))
		{
			if (func_548())
			{
				func_547(iParam0, 4);
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (!func_3(*iParam0, 1))
	{
		if (!func_3(*iParam0, 4))
		{
			if (iParam3 < 0)
			{
				iParam3 = *iParam1;
			}
			iVar0 = iParam2;
			while (iVar0 <= ((iParam2 + iParam3) - 1))
			{
				if (func_54((*iParam1)[iVar0], 8, 1) && !PED::IS_PED_FLEEING((*iParam1)[iVar0]))
				{
					return false;
				}
				iVar0++;
			}
		}
		func_94(&(iParam0->f_1), 0);
		func_547(iParam0, 1);
	}
	if (func_3(*iParam0, 1))
	{
		if (func_95(&(iParam0->f_1), (fParam4 + 4.0f)))
		{
			func_547(iParam0, 4);
			return false;
		}
		if (!func_95(&(iParam0->f_1), fParam4))
		{
			return false;
		}
		if (!func_96(0.0f, 1, Global_35, 1))
		{
			return false;
		}
		if (func_549(Global_35))
		{
			return false;
		}
		if (Global_1935630.f_24)
		{
			return false;
		}
		func_547(iParam0, 4);
		return true;
	}
	return false;
}

bool func_331(int iParam0, bool bParam1)
{
	if (!func_550(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

char* func_332(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		if (func_3(iParam3, 1))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL";
				case 2:
					return "WON_FIGHT_EXCONFED";
				case 1:
					return "WON_FIGHT_INBRED";
				case 3:
					return "WON_FIGHT_SAVAGES";
				case 5:
					return "WON_FIGHT_BANDITOS";
				case 4:
					return "WON_FIGHT_RANCHERS";
				case 10:
					return "WON_FIGHT_PINKERTONS";
				default:
					break;
			}
		}
		else if (func_3(iParam3, 2))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL_DOM";
				case 2:
					return "WON_FIGHT_EXCONFED_DOM";
				case 1:
					return "WON_FIGHT_INBRED_DOM";
				case 3:
					return "WON_FIGHT_SAVAGES_DOM";
				case 5:
					return "WON_FIGHT_BANDITOS_DOM";
				case 4:
					return "WON_FIGHT_RANCHERS_DOM";
				case 10:
					return "WON_FIGHT_PINKERTONS_DOM";
				default:
					break;
			}
		}
		else if (func_3(iParam3, 4))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL_LOWH";
				case 2:
					return "WON_FIGHT_EXCONFED_LOWH";
				case 1:
					return "WON_FIGHT_INBRED_LOWH";
				case 3:
					return "WON_FIGHT_SAVAGES_LOWH";
				case 5:
					return "WON_FIGHT_BANDITOS_LOWH";
				case 4:
					return "WON_FIGHT_RANCHERS_LOWH";
				case 10:
					return "WON_FIGHT_PINKERTONS_LOWH";
				default:
					break;
			}
		}
	}
	return "WON_FIGHT";
}

int func_333(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;

	iVar0 = func_551(iParam0, iParam1, sParam2, "", fParam3, 0, 0, 0, 1, fParam3 > 0.0f, bParam4, iParam5, 1, 1, 0, 0);
	if (iVar0 >= 0)
	{
		if (bParam6)
		{
			func_125(&uLocal_637);
			iLocal_702 = iParam0;
			func_260(0, 0);
		}
		return iVar0;
	}
	return -1;
}

void func_334(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_421() - fParam1);
	func_552(uParam0, 1);
	func_553(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

int func_335(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
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
		DECORATOR::DECOR_SET_BOOL(iParam0, "pedRoam_bInPedRoam", true);
		func_533(iParam0, 0);
		func_534(iParam0, iParam1);
		func_554(iParam0, iParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam3);
			if (!func_536(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

void func_336(bool bParam0)
{
	if (!func_50(iLocal_579, (1 << 20)) || func_50(iLocal_579, (1 << 24)))
	{
		return;
	}
	if (bParam0 || (!func_54(iLocal_528[2], 0, 1) && !func_124(iLocal_528[2], joaat("SCRIPT_TASK_KNOCKED_OUT"))))
	{
		func_306(func_556(func_555(sLocal_14.f_3)), 0, 0, 0, 0, 0, 1065353216, 0);
		func_27(&iLocal_579, (1 << 24), 0);
	}
}

Vector3 func_337()
{
	switch (iLocal_738)
	{
		case 9:
			switch (iLocal_737)
			{
				case 0:
					return { -301.6397f, 782.3899f, 117.7477f };
				case 1:
					return { -312.2f, 795.9f, 119.0f };
			}
			break;
		case 11:
			switch (iLocal_737)
			{
				case 0:
					return { 1359.714f, -1377.673f, 78.44501f };
				case 1:
					return { 1400.807f, -1307.331f, 75.98764f };
				case 2:
					return { 1400.807f, -1307.331f, 75.98764f };
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_338(int iParam0)
{
	iLocal_406 = iParam0;
}

int func_339()
{
	if (iLocal_406 > 0)
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_528[2], 0, 1);
		if (func_557())
		{
			func_338(11);
		}
	}
	switch (iLocal_406)
	{
		case 0:
			func_558();
			func_338(1);
			break;
		case 1:
			if (func_559() && func_96(0, 1, iLocal_528[2], 1))
			{
				func_338(2);
			}
			break;
		case 2:
			func_560();
			func_561();
			if (func_562())
			{
				if (func_96(0, 1, Global_35, 1))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1);
					func_563();
					func_338(5);
				}
			}
			else
			{
				if (PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(iLocal_528[2], iLocal_698))
				{
					PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 3, 2, true);
					PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 4, 2, true);
					func_338(3);
				}
				else if (PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(iLocal_528[2], iLocal_698))
				{
					PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 3, 2, true);
					PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 4, 2, true);
					func_338(4);
				}
				if ((func_95(&uLocal_594, 7.0f) && !func_263(&(sLocal_407[2 /*21*/]))) && !func_564(iLocal_528[2], 0, 0, 0))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_GOODBYE", -1082130432, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1);
					func_565();
					func_338(10);
				}
			}
			break;
		case 3:
			func_560();
			func_561();
			if (func_562())
			{
				if (func_96(0, 1, Global_35, 1))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1);
					func_563();
					func_338(5);
				}
			}
			else if (!PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(iLocal_528[2], iLocal_698))
			{
				func_94(&uLocal_631, 0);
				if (func_95(&uLocal_631, 1.0f))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_GOODBYE", -1082130432, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1);
					func_565();
					func_338(10);
				}
			}
			break;
		case 4:
			func_560();
			func_561();
			if (func_562())
			{
				if (func_96(0, 1, Global_35, 1))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1);
					func_563();
					func_338(5);
				}
			}
			else if (func_96(0, 1, Global_35, 1) && func_96(0, 1, iLocal_528[2], 1))
			{
				func_56();
				TASK::TASK_FLEE_PED(iLocal_528[2], Global_35, 2, (1 << 12), -1.0f, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
				func_105(&(iLocal_528[2]), &(sLocal_407[2 /*21*/]), &sLocal_471, 1, 1);
				func_27(&iLocal_579, 1, 0);
			}
			break;
		case 5:
			func_561();
			func_336(1);
			if (!func_562())
			{
				if (PED::IS_PED_FLEEING(iLocal_528[2]))
				{
					PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
					func_27(&iLocal_579, 1, 0);
				}
				func_338(11);
			}
			break;
		case 10:
			func_561();
			if (func_566())
			{
				func_338(11);
			}
			else if (func_562())
			{
				if (func_96(0, 1, Global_35, 1))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1);
					func_563();
					func_338(5);
				}
			}
			break;
		case 11:
			return 1;
	}
	return 0;
}

int func_340()
{
	int iVar0;

	iVar0 = -1;
	if (iLocal_406 > 0)
	{
		if (func_557())
		{
			func_338(11);
		}
	}
	switch (iLocal_406)
	{
		case 0:
			func_558();
			func_338(1);
			break;
		case 1:
			if (func_559() && func_96(0, 1, iLocal_528[2], 1))
			{
				func_338(7);
			}
			break;
		case 7:
			func_560();
			func_561();
			if (func_562())
			{
				func_563();
				func_338(5);
			}
			else if (PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(iLocal_528[2], iLocal_698))
			{
				PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 3, 2, true);
				PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 4, 2, true);
				func_125(&uLocal_594);
				func_338(8);
			}
			else if (PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(iLocal_528[2], iLocal_698))
			{
				PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 3, 2, true);
				PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 4, 2, true);
				func_125(&uLocal_594);
				func_338(9);
			}
			else if (func_95(&uLocal_594, 9.0f) && !func_564(iLocal_528[2], 0, 0, 0))
			{
				PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 3, 2, true);
				func_333(Global_35, iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_POS_B", -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1);
				func_565();
				func_338(10);
			}
			break;
		case 8:
			func_560();
			if (func_562())
			{
				func_563();
				func_338(5);
			}
			else if (!PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(iLocal_528[2], iLocal_698))
			{
				func_334(&uLocal_594, 2.5f);
				func_333(Global_35, iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_POS_B", -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1);
				func_338(2);
			}
			break;
		case 9:
			func_56();
			if (func_562())
			{
				func_563();
				func_338(5);
			}
			else if (func_96(0, 1, Global_35, 1) && func_96(0, 1, iLocal_528[2], 1))
			{
				func_56();
				TASK::TASK_FLEE_PED(iLocal_528[2], Global_35, 1, (1 << 12), -1.0f, -1, 0);
				func_333(Global_35, iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_NEG_B", -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1);
				PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
				func_105(&(iLocal_528[2]), &(sLocal_407[2 /*21*/]), &sLocal_471, 1, 1);
				func_27(&iLocal_579, 1, 0);
			}
			break;
		case 2:
			func_561();
			if (iVar0 == 1)
			{
			}
			else
			{
				func_560();
				if (func_562())
				{
					func_563();
					func_338(5);
				}
				else if (func_95(&uLocal_594, 5.0f) && !func_263(&(sLocal_407[2 /*21*/])))
				{
					func_565();
					func_338(10);
				}
				Jump @933; // curOff = 703
				func_561();
				func_336(1);
				if (!func_562())
				{
					PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
					func_27(&iLocal_579, 1, 0);
					func_338(11);
				}
				Jump @933; // curOff = 749
				if (iVar0 == 1)
				{
				}
				else
				{
					if (func_562())
					{
						func_563();
						func_338(5);
					}
					else if (func_566())
					{
						func_567();
						func_338(11);
					}
					else if (PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(iLocal_528[2], iLocal_698) || PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(iLocal_528[2], iLocal_698))
					{
						PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 3, 2, true);
						PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 4, 2, true);
						PED::_0x20C5459379D75C1C(iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_POS");
						PED::_0xA3C53CDE922BC78B(iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_NEG");
						PED::_0x8AF46E5159A5B620(iLocal_528[2], joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"));
						func_125(&uLocal_594);
						func_338(9);
					}
					Jump @933; // curOff = 923
					return 1;
				}
			}
			return 0;
			default:
				break;
	}
}

bool func_341(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_342(int iParam0, int iParam1)
{
	if (!func_341(iParam0))
	{
		return false;
	}
	return Global_1395482.f_2[iParam0] & iParam1 != 0;
}

int func_343(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

char* func_344(char* sParam0)
{
	return sParam0;
}

int func_345(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_346(int iParam0)
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

void func_347(int iParam0)
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

void func_348(var uParam0)
{
	if (func_249(uParam0->f_162))
	{
		func_250(&(uParam0->f_162), 1, 1);
	}
	if (func_249(uParam0->f_163))
	{
		func_250(&(uParam0->f_163), 1, 1);
	}
	if (func_249(uParam0->f_164))
	{
		func_250(&(uParam0->f_164), 1, 1);
	}
	if (func_249(uParam0->f_165))
	{
		func_250(&(uParam0->f_165), 1, 1);
	}
}

void func_349(var uParam0)
{
	if (uParam0->f_170)
	{
		func_568();
	}
}

void func_350(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_309(32);
		func_354(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_351(var uParam0)
{
	if (func_569(uParam0) | uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_570(uParam0->f_3);
		func_210(uParam0, 0, 1);
		func_571(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_572(0, 0);
		return true;
	}
	return false;
}

void func_352()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_353(int iParam0)
{
	if (!func_184(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_354(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_343(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_355() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 += iVar0;
}

int func_355()
{
	return Global_1572887.f_12;
}

int func_356(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_401(&iVar1, (1 << 31));
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

int func_357()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_358(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_355() != -1)
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

bool func_359()
{
	if (func_355() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_360(int iParam0)
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

void func_361(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_362(int iParam0)
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

int func_363(int iParam0)
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

int func_364(int iParam0)
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

bool func_365(int iParam0, int iParam1, var uParam2)
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

Vector3 func_366(int iParam0, var uParam1)
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
			if (!func_77(*(uParam1[iVar0 /*3*/])))
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

void func_367(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_DEBUG_PINK"), *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, joaat("BLIP_MODIFIER_URGENT_ALERT"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_33("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100.0f, 1, 0);
	}
}

bool func_368(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_369(Vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_77(vParam0))
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
		if (func_232(vParam0))
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
	func_573(iVar0, bParam8);
	return iVar0;
}

void func_370(int iParam0)
{
	if (!func_184(iParam0))
	{
		return;
	}
	func_574(iParam0);
}

void func_371(var uParam0, Vector3 vParam1)
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

int func_372(int iParam0)
{
	if (func_86(iParam0, 2))
	{
		return 200;
	}
	if (func_86(iParam0, 4))
	{
		return 70;
	}
	if (func_86(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_373(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_73(iParam0, (1 << 17)))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_113() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_73(iParam0, 2);
		bVar1 = func_73(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_216())
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

void func_374(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_86(iParam3, (1 << 21)))
	{
		*fParam0 += 15.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_375(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_86(iParam3, 2))
	{
		*fParam0 += 60.0f;
		*fParam1 += 60.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110.0f));
	}
	else if (func_86(iParam3, (1 << 21)))
	{
		*fParam0 += 30.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_376(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_364(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_377(int iParam0, Vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_77(vParam1))
	{
		return false;
	}
	if (func_382(iParam0, vParam1))
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
	if (func_129(iParam0))
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

bool func_378(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_379(int iParam0, Vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_152(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_385(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_460();
			iParam4->f_2 = func_303(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_385(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_460();
		iParam4->f_2 = func_303(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_380(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_460() - *uParam0) >= iParam1;
	}
	return false;
}

int func_381(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_77(uParam0->f_12[iVar0 /*3*/]))
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

bool func_382(int iParam0, Vector3 vParam1)
{
	int iVar0;

	if (!func_73(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_575(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_73(iParam0, (1 << 25)))
	{
		if (func_576(vParam1, 200.0f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_383(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_86(iParam0, 128))
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
	if (func_73(iParam0, 1) && !func_73(iParam0, 2))
	{
		if (func_73(iParam0, (1 << 12)) || func_73(iParam0, (1 << 11)))
		{
			if (func_577(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_384(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_578())
	{
		return false;
	}
	return true;
}

bool func_385(Vector3 vParam0, int iParam3)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) /*3*/ };
	return func_579(vVar0, vParam0) > func_579(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_386(int iParam0)
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

int func_387(int iParam0)
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

Vector3 func_388(Vector3 vParam0, bool bParam3, Vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, bParam3, vParam4);
}

float func_389(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_580((fParam0 + fParam1));
}

int func_390(int iParam0, var uParam1, Vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_193(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_581(uParam1))
	{
		iVar0 = PED::_CREATE_METAPED_OUTFIT_PED(uParam1->f_5, vParam2, bParam5, true, true, bParam9, bParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_582(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_582(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_583(iVar0))
		{
			func_200(iVar0, &(uParam1->f_23), 0);
		}
		if (func_583(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_584(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, 0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_585(&(uParam1->f_22)));
			func_324(iVar0, func_586(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_587(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_588(&(uParam1->f_22)))
		{
			func_589(iVar0, 1);
		}
		ENTITY::_SET_ENTITY_FADE_IN(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_590(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_138(uParam1->f_22, (1 << 13)))
		{
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
		}
		if (!func_583(iVar0))
		{
			func_592(iVar0, !func_591(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_593(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_594(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_594(&(uParam1->f_22)));
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

bool func_391(int iParam0, int iParam1)
{
	if (func_198(iParam0) != -1)
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

bool func_392(var uParam0)
{
	return func_138(*uParam0, 32);
}

int func_393(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

bool func_394(var uParam0)
{
	return func_138(*uParam0, 1);
}

bool func_395(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_595(*uParam0, 0.0f, 0.0f, 0.0f))
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

bool func_396(int iParam0, var uParam1)
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

void func_397(var uParam0, int iParam1, int iParam2)
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

void func_398(var uParam0, int iParam1, int iParam2)
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

bool func_399(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_400(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_417(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_417(iVar4) && iVar4 != iVar0)
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
	if (func_355() == -1 && !func_596(iVar0))
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
				if (func_596(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_417(iVar0))
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
		func_597(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_598(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_599(iVar0))
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

void func_401(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

int func_402(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_600(1);
	}
	else
	{
		iVar0 = func_601(iParam0);
	}
	return iVar0;
}

void func_403(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_602(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_603(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

void func_404(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_86(iParam0, (1 << 13)))
	{
		iVar0 = func_603(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_405(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_354(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_406(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_73(iParam0, (1 << 18)))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_604((1 << 18), iVar0, 0, 1);
		}
	}
	if (func_73(iParam0, 128))
	{
		func_604(128, iVar0, 0, 1);
	}
	else if (func_73(iParam0, (1 << 19)))
	{
		func_604((1 << 19), iVar0, 0, 1);
	}
	else if (func_73(iParam0, (1 << 29)))
	{
		func_604((1 << 29), iVar0, 0, 1);
	}
	else if (func_73(iParam0, (1 << 22)))
	{
		func_604((1 << 22), iVar0, 0, 1);
	}
	else if (func_73(iParam0, (1 << 23)))
	{
		func_604((1 << 23), iVar0, 0, 1);
	}
}

void func_407(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_408(bool bParam0)
{
	if (!bParam0 && func_605(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_409()
{
	return Global_1310750.f_16037;
}

bool func_410(int iParam0)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_411(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_184(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_606(iParam0);
	Global_1310750.f_16037--;
}

void func_412(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_607(&Global_1393447, 1);
	func_608();
	func_609();
	func_610((BUILTIN::TO_FLOAT(200) / 3.0f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_460() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 -= Global_1392135.f_1 & 4;
		}
		func_611();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_604((1 << 24), 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240.0f);
			}
			else if (func_3(iParam0, 2))
			{
				func_604((1 << 24), 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60.0f);
			}
			else if (func_3(iParam0, 4))
			{
				func_604((1 << 24), 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900.0f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_612(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_613(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_613((BUILTIN::TO_FLOAT(200) / 3.0f), 1, 0);
	}
}

bool func_413(int iParam0, int iParam1)
{
	return Global_40.f_9571[iParam1 /*10*/] & iParam0 != 0;
}

void func_414(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 -= Global_1392050[iParam1 /*14*/].f_1 & iParam0;
}

void func_415(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] |= iParam0;
}

int func_416(int iParam0)
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

bool func_417(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_418()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_419(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_420(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_419(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0.0f)
		{
			uParam0->f_8 = (func_421() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0.0f;
	return false;
}

float func_421()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

int func_422(bool bParam0, bool bParam1, bool bParam2)
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

bool func_423(int iParam0)
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

bool func_424(int iParam0)
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

bool func_425(int iParam0)
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

bool func_426(int iParam0)
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

bool func_427(int iParam0)
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

bool func_428(int iParam0)
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

bool func_429(int iParam0)
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

bool func_430(bool bParam0, int iParam1, int iParam2)
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

bool func_431()
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

int func_432(int iParam0)
{
	if (!func_435(iParam0))
	{
		return -1;
	}
	return func_615(func_614(iParam0));
}

bool func_433(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_434(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_435(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_436(int iParam0)
{
	return func_73(iParam0, Global_1310750.f_16072 | 64);
}

int func_437(int iParam0)
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

int func_438(int iParam0)
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

bool func_439(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_440(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

void func_441(int iParam0, bool bParam1, int iParam2)
{
	func_616(iParam2);
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
		iParam0->f_13 = func_617(0);
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
							func_85(iParam0, (1 << 25));
						}
					}
					else if (!*iParam0 & (1 << 13) != 0)
					{
						if (func_221(1))
						{
							func_85(iParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_221(1) || *iParam0 & (1 << 13) != 0))
				{
					func_137(iParam0, (1 << 25));
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
			if (func_618(iParam0))
			{
				iParam0->f_15 = func_460();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_460() - iParam0->f_15) > 500)
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
	func_619(iParam0);
}

bool func_442(int iParam0, int iParam1)
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
			if (!func_620(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_621(iParam0, iVar2) <= func_622(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_443(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		iParam1->f_10 = iParam0;
	}
	if (func_623(iParam2, 1, 1, 1, 0))
	{
		func_85(iParam1, (1 << 11));
	}
	iParam1->f_16 = iParam2;
	func_624(iParam1, 1);
	func_352();
}

bool func_444(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_259(iParam0, !*iParam1 & (1 << 28) != 0, !*iParam1 & (1 << 29) != 0, !*iParam1 & (1 << 30) != 0, 0, 0))
		{
			if (iParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (iParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_625(iParam1);
			if (func_626(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_627(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_624(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_624(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_445(int iParam0, int iParam1, int iParam2)
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
	if (func_628(iParam1, !*iParam2 & (1 << 28) != 0, !*iParam2 & (1 << 29) != 0, !*iParam2 & (1 << 30) != 0, 0))
	{
		if (iParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (iParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_625(iParam2);
		if (func_626(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_627(iParam2)
				{
					func_624(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_446(int iParam0, int iParam1)
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
	if (func_620(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_627(iParam1)
		{
			fVar3 = func_625(iParam1);
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

bool func_447(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_460();
	iVar1 = (iVar0 - iParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_448(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_629(iParam2);
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
			if (func_456(iParam2, iParam1))
			{
				func_624(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_449(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < (float)func_630(iParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_456(iParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_624(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_450(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_631(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_624(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_624(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_632(iParam1, vVar0, vVar4))
					{
						func_624(iParam2, 1);
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
					func_624(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_632(iParam1, vVar0, vVar7))
					{
						func_624(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_451(int iParam0, int iParam1)
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
		if (!func_620(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_633(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_634(Global_1935630.f_34[iVar0]))
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
			if (func_635(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_636(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_637(iParam1, iParam0, fVar1, iVar0))
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

bool func_452(int iParam0, int iParam1)
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

bool func_453(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_460();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_454(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_638(iVar0, &iVar2))
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
	if (func_639(iVar0, iParam0))
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

int func_455(int iParam0, int iParam1)
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

bool func_456(int iParam0, int iParam1)
{
	if (func_640(iParam0))
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

bool func_457(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_127(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_458()
{
}

bool func_459(int iParam0, int iParam1)
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
		if (func_641(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_460();
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
						if (func_303(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_460();
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

int func_460()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_461()
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
	if ((func_460() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_462(int iParam0, int iParam1)
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
	fVar0 = func_622(iParam0);
	if (iParam0->f_12 > func_136(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_642(iParam1);
	iVar1 = func_643(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_463(int iParam0, int iParam1, int iParam2)
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
	return func_644(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_464(int iParam0, int iParam1)
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
		if (func_645(iParam0, iParam1, 1))
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
					if (!func_646(iParam1, iParam0))
					{
						if (func_303(iVar4, Global_36, 1) < 7.0f)
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

bool func_465(int iParam0, int iParam1)
{
	if (!func_647(0))
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

bool func_466(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_460();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_467(int iParam0, int iParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_468(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_460();
	}
	else if (func_460() - iParam1->f_4) > func_648(iParam1)
	{
		return func_649(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_469(int iParam0, int iParam1)
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

bool func_470(var uParam0)
{
	return func_240(*uParam0, 2);
}

bool func_471(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

bool func_472(var uParam0, float fParam1)
{
	if (func_95(uParam0, fParam1))
	{
		func_111(uParam0);
		return true;
	}
	return false;
}

int func_473(int iParam0)
{
	return iParam0;
}

void func_474(int iParam0)
{
	if (!func_650(iParam0))
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

void func_475(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_250(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_651(iParam0, 0);
		}
	}
}

bool func_476(int iParam0)
{
	return Global_22 & iParam0 != 0;
}

bool func_477()
{
	if (func_652())
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

var func_478(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_479(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_653(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_480(int iParam0)
{
	if (func_654(&(sLocal_471[iParam0 /*17*/]), 1, 0) && !func_486(&(sLocal_471[iParam0 /*17*/]), 13))
	{
		return true;
	}
	return false;
}

void func_481(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

int func_482(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_481(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & (1 << 19) != false;
		bVar5 = iParam8 & (1 << 24) != false;
		bVar6 = iParam8 & (1 << 24) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_152(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_125(&(iParam1->f_13));
		}
		if (func_655(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_656(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_482(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_251(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & (1 << 25) != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_657(*uParam0, 1, 1);
						}
					}
					else if (func_495(iParam1, 22))
					{
						func_657(*uParam0, 0, 1);
					}
				}
				if (func_658(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_659(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_660(iParam8);
					if (func_661(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_662(uParam3);
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
					func_663(iParam1, uParam3, fVar8);
					if (func_664(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_103(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_665(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_658(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_666(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_661(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_659(uParam0, func_658(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_660(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_103(uParam3, 0, 0, 1, 1);
					}
					func_667(iParam1, 1);
				}
				func_663(iParam1, uParam3, fVar8);
				if (func_665(uParam0, iParam1, fParam4, bVar6))
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
			func_252(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_483(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;

	iVar0 = func_668(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		uVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_669(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
}

bool func_484(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_355() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_485(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_670(iParam0, &iVar0, &iVar1);
	if (!func_671(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_672(iVar0, iVar1);
}

bool func_486(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_487(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_486(iParam0, 13))
	{
		func_488(iParam0, 0);
	}
	else
	{
		func_489(iParam0, 0);
	}
	if (func_249(iParam0->f_6))
	{
		if (bParam2)
		{
			func_250(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_488(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_489(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_490(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_491(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_492(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_493(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	if (bParam1)
	{
		func_673(iParam0, 4);
		func_674(iVar0, 1);
		func_675(iVar0, 1);
	}
	else
	{
		func_676(iParam0, 4);
		func_675(iVar0, 0);
	}
}

void func_494(int* iParam0, char* sParam1)
{
	if (func_249(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_492(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_489(iParam0, 1);
}

bool func_495(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_496(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_497(int* iParam0, int iParam1)
{
	if (!func_486(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_488(iParam0, 14);
		}
	}
}

void func_498()
{
	if (func_677())
	{
		if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_322.f_0, "base_punch", true))
		{
			func_26(0);
		}
	}
}

bool func_499()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (bLocal_546[iVar0])
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_500(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	func_678(iParam0, &iVar0, &iVar1, &iVar2);
	if (sLocal_14.f_98[iVar0] < 42.0f)
	{
		if (bLocal_551)
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(sLocal_322.f_0, "PBL_PUNCH"))
			{
				sVar4 = "PBL_PUNCH2";
			}
			else
			{
				sVar4 = "PBL_PUNCH";
			}
			if (iParam0 <= 0)
			{
				iVar3 = joaat("SPEECH_PARAMS_BEAT_SHOUTED_NORMAL");
			}
			else
			{
				iVar3 = joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR");
			}
			if (func_679(sLocal_322.f_0, sVar4))
			{
				if (func_296(iVar0, iVar1, func_510(iVar2), 42.0f, 0, iVar3, 0))
				{
					if (func_25(sLocal_322.f_0, sVar4, 1))
					{
						func_26(1);
						func_125(&uLocal_597);
						func_125(&uLocal_717);
						if (bParam1)
						{
							func_279();
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_501(int iParam0)
{
	iLocal_405 = iParam0;
}

Vector3 func_502(int iParam0, float fParam1)
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
	func_680(vVar6);
	vVar6 = { FloatToVector((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 /*3*/ };
	vVar3 = { vVar0 + vVar6 /*3*/ };
	return vVar3;
}

bool func_503()
{
	float fVar0;

	if (!func_96(0, 1, Global_35, 1))
	{
		return false;
	}
	else if (iLocal_710 >= 2)
	{
		return true;
	}
	if (!func_294(iLocal_578, 128))
	{
		if (!func_95(&uLocal_723, 0.5f))
		{
			return false;
		}
		else if (PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 50.0f))
		{
			return true;
		}
	}
	if (func_294(iLocal_578, 128) && !func_294(iLocal_578, 256))
	{
		fVar0 = 7.0f;
	}
	else if (func_294(iLocal_578, 256))
	{
		fVar0 = 7.0f;
	}
	else
	{
		fVar0 = 7.0f;
	}
	if ((((func_95(&uLocal_723, fVar0) && func_96(-5.0f, 1, 0, 0)) && (!func_124(iLocal_528[1], joaat("SCRIPT_TASK_CONFRONT")) || Global_1935630.f_40 != 0)) && !func_263(&(sLocal_407[0 /*21*/]))) && !func_263(&(sLocal_407[1 /*21*/])))
	{
		if (PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 50.0f))
		{
			return true;
		}
	}
	return false;
}

int func_504(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, iParam2, 3.0f, 0.25f, -1.0f);
	return 1;
}

void func_505(int iParam0)
{
	iLocal_401 = iParam0;
}

int func_506(float fParam0, float fParam1)
{
	if (fParam0 <= 20.0f)
	{
		if (fLocal_739 == -1.0f)
		{
			if (ENTITY::GET_ENTITY_SPEED(Global_35) >= 1.5f)
			{
				if (func_681(iLocal_528[1], func_502(Global_35, 3.0f), 10.0f, 1, 1))
				{
					return 1;
				}
			}
			else if (func_681(iLocal_528[1], func_502(Global_35, 2.0f), 10.0f, 1, 1))
			{
				return 1;
			}
			return 0;
		}
	}
	if (fParam0 < (fLocal_739 + 1.0f))
	{
		if (fParam0 > (fParam1 - 0.2f) || ENTITY::GET_ENTITY_SPEED(Global_35) < 0.7f)
		{
			return 1;
		}
	}
	return 0;
}

int func_507()
{
	if (fLocal_593 > 10.0f)
	{
		return 0;
	}
	if (!func_514())
	{
		return 0;
	}
	if (sLocal_14.f_98[1] < 10.0f)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_528[1], Global_35, 17))
		{
			if (func_682(iLocal_528[0], &(sLocal_14.f_5), &iLocal_716, 0) | func_682(iLocal_528[1], &(sLocal_14.f_5), &iLocal_716, 0))
			{
				func_94(&uLocal_600, 0);
			}
			if (func_95(&uLocal_600, 0.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_508()
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	func_504(0, Global_35, -1);
	func_146(iLocal_528[1], &iVar0, 0, 0, 1, 1);
}

bool func_509(bool bParam0)
{
	Vector3 vVar0;
	float fVar3;

	if (bParam0)
	{
		if (func_124(iLocal_528[1], joaat("SCRIPT_TASK_PLAY_ANIM")) || ENTITY::_0x0B7CB1300CBFE19C(iLocal_528[1], 1))
		{
			return false;
		}
	}
	if (!func_77(vLocal_650))
	{
		vVar0 = { vLocal_650 /*3*/ };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_528[1], true, false) /*3*/ };
	}
	fVar3 = BUILTIN::VDIST(vVar0, Global_36);
	if (!func_95(&uLocal_723, 4.0f))
	{
		return false;
	}
	if (fVar3 > (fLocal_739 + 1.25f))
	{
		return true;
	}
	if (!PED::IS_PED_FACING_PED(Global_35, iLocal_528[1], 80.0f))
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			return true;
		}
	}
	return false;
}

char* func_510(int iParam0)
{
	switch (iLocal_523)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "RE_FOOTR_VAL_V1_FAR_01";
				case 1:
					return "RE_FOOTR_VAL_V1_FAR_02";
				case 2:
					return "RE_FOOTR_VAL_V1_FAR_03";
				case 7:
					return "RE_FOOTR_VAL_V1_BEAT_PED_A";
				case 8:
					return "RE_FOOTR_VAL_V1_BEAT_PED_B";
				case 9:
					return "RE_FOOTR_VAL_V1_BEAT_PED_C";
				case 10:
					return "RE_FOOTR_VAL_V1_KILLED";
				case 11:
					return "RE_FOOTR_VAL_V1_WARN_01";
				case 12:
					if (bLocal_653)
					{
						return "RE_FOOTR_VAL_V2_WARN_FEUD_A";
					}
					else
					{
						return "RE_FOOTR_VAL_V1_WARN_02";
					}
					break;
				case 13:
					return "RE_FOOTR_VAL_V1_WARN_03";
				case 15:
					return "RE_FOOTR_VAL_V1_THUG1_AGGRO";
				case 16:
					return "RE_FOOTR_VAL_V1_THUG2_AGGRO";
				case 17:
					return "RE_FOOTR_VAL_V1_THANK";
				case 14:
					return "RE_FOOTR_VAL_V1_DEPART_01";
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE_FOOTR_RHD_V1_FAR_01";
				case 1:
					return "RE_FOOTR_RHD_V1_FAR_02";
				case 2:
					return "RE_FOOTR_RHD_V1_FAR_03";
				case 3:
					return "RE_FOOTR_RHD_V1_FAR_04";
				case 4:
					return "RE_FOOTR_RHD_V1_FAR_05";
				case 5:
					return "RE_FOOTR_RHD_V1_FAR_06";
				case 6:
					return "RE_FOOTR_RHD_V1_THROW";
				case 7:
					return "RE_FOOTR_RHD_V1_BEAT_PED_A";
				case 8:
					return "RE_FOOTR_RHD_V1_BEAT_PED_B";
				case 9:
					return "RE_FOOTR_RHD_V1_BEAT_PED_C";
				case 10:
					return "RE_FOOTR_RHD_V1_KILLED";
				case 11:
					if (bLocal_653)
					{
						return "RE_FOOTR_RHD_V2_WARN_FEUD";
					}
					else
					{
						return "RE_FOOTR_RHD_V1_WARN_01";
					}
					break;
				case 12:
					return "RE_FOOTR_RHD_V1_WARN_02";
				case 13:
					return "RE_FOOTR_RHD_V1_WARN_03";
				case 15:
					return "RE_FOOTR_RHD_V1_THUG1_AGGRO";
				case 16:
					return "RE_FOOTR_RHD_V1_THUG2_AGGRO";
				case 17:
					return "RE_FOOTR_RHD_V1_THANK";
				case 14:
					return "HEADS_UP_CONFRONT";
			}
			break;
	}
	return "MISSING";
}

void func_511()
{
	if (!bLocal_649)
	{
		if (((!func_124(iLocal_528[1], joaat("SCRIPT_TASK_CONFRONT")) && func_96(-4.0f, 1, iLocal_528[1], 0)) && !func_263(&(sLocal_407[0 /*21*/]))) && !func_263(&(sLocal_407[1 /*21*/])))
		{
			if (sLocal_14.f_98[1] < 4.0f)
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					vLocal_650 = { ENTITY::GET_ENTITY_COORDS(iLocal_528[1], true, false) /*3*/ };
					TASK::TASK_CONFRONT(iLocal_528[1], Global_35, 2);
					func_125(&uLocal_723);
					if (iLocal_646 != 0)
					{
						if (!func_294(iLocal_578, 256))
						{
							func_296(1, Global_35, func_510(12), -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1);
							func_297(&iLocal_578, 256, 0);
						}
					}
					bLocal_649 = true;
				}
			}
		}
	}
}

bool func_512(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = iLocal_528[0];
	}
	else
	{
		iVar0 = iLocal_528[2];
	}
	switch (iLocal_742)
	{
		case 0:
			if (!func_77(vLocal_650) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_528[1], vLocal_650, 1.0f, 1.0f, 3.0f, false, true, 0))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_528[1], vLocal_650, 1.0f, 20000, 40000.0f, 0.5f, 0);
				func_513(1);
			}
			else
			{
				func_504(iLocal_528[1], iVar0, 2000);
				func_513(2);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_528[1], vLocal_650, 1.0f, 1.0f, 3.0f, false, true, 0))
			{
				func_504(iLocal_528[1], iVar0, 2000);
				func_513(2);
			}
			else if (!func_124(iLocal_528[1], joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_528[1], vLocal_650, 1.0f, 20000, 40000.0f, 0.5f, 0);
			}
			break;
		case 2:
			if (PED::IS_PED_FACING_PED(iLocal_528[1], iVar0, 20.0f))
			{
				TASK::TASK_PLAY_ANIM(iLocal_528[1], sLocal_305[7 /*2*/], sLocal_305[7 /*2*/].f_1, 2.0f, -2.0f, -1, 1, 0.0f, false, 0, false, 0, false);
				func_513(4);
			}
			else if (!func_124(iLocal_528[1], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
			{
				func_504(iLocal_528[1], iVar0, 2000);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_513(int iParam0)
{
	iLocal_742 = iParam0;
}

bool func_514()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (bLocal_548[iVar0])
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_515(int iParam0, var uParam1, int iParam2, float fParam3, float fParam4, bool bParam5, float fParam6, float fParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < *iParam0)
	{
		if (func_683(iVar2, bParam5))
		{
			if (func_525((*iParam0)[iVar2], uParam1, iParam2, &bVar1, fParam3, fParam4, fParam6, 1, fParam7, 1))
			{
				return true;
			}
			else if (bVar1)
			{
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0)
	{
		*iParam2 = 0.0f;
	}
	return false;
}

void func_516(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::TRIGGER_SONAR_BLIP(iParam0, vParam1);
}

void func_517()
{
	if (!ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_322.f_0, "action", true) && !ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(sLocal_322.f_0, "Exit", true))
	{
		return;
	}
	if (!func_294(iLocal_578, 8))
	{
		if (func_278(iLocal_528[2], "bActionDialogue1", 1067030938))
		{
			func_297(&iLocal_578, 8, 0);
		}
	}
	else if (!func_294(iLocal_578, 16))
	{
		if (func_278(iLocal_528[2], "bActionDialogue2", 1067030938))
		{
			func_297(&iLocal_578, 16, 0);
		}
	}
	else if (!func_294(iLocal_578, 32))
	{
		if (func_278(iLocal_528[2], "bActionDialogue3", 1067030938))
		{
			func_297(&iLocal_578, 32, 0);
		}
	}
	if (func_54(iLocal_528[2], 0, 0))
	{
		if (((func_278(iLocal_528[0], "PunchOne", 1067030938) || func_278(iLocal_528[0], "PunchTwo", 1067030938)) || func_278(iLocal_528[0], "PunchThree", 1067030938)) || func_278(iLocal_528[2], "bKOPunchHit", 1067030938))
		{
			func_279();
		}
		if (func_323())
		{
			func_52(&(uLocal_536[2]));
			func_140(iLocal_528[2], 0);
			func_264(&(sLocal_471[0 /*17*/]), 1, 1);
			func_494(&(sLocal_471[1 /*17*/]), func_266(10));
			func_324(iLocal_528[2], 1, 1);
			func_17(1094713344);
			if (func_124(iLocal_528[1], joaat("SCRIPT_TASK_CONFRONT")))
			{
				PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
				TASK::CLEAR_PED_TASKS(iLocal_528[1], true, false);
			}
			if ((fLocal_593 < 30.0f && sLocal_14.f_48) && !func_50(iLocal_579, (1 << 20)))
			{
				func_306(2, 0, 0, "RE_HONOR_WITNESSED_CRIME", 0, 0, 1065353216, 0);
			}
		}
	}
}

void func_518(int iParam0)
{
	iLocal_402 = iParam0;
}

void func_519()
{
	var uVar0;

	if (!bLocal_747)
	{
		if (func_99(iLocal_528[0], joaat("BBLOCKPEDSPEECH"), "bBlockPedSpeech", uVar0, 1.5f, 1))
		{
			if (!func_96(-5.0f, 1, 0, 0) && !func_96(0.0f, 1, iLocal_528[0], 1))
			{
				AUDIO::STOP_PED_SPEAKING(iLocal_528[0], true);
				bLocal_747 = true;
			}
		}
	}
	else if (func_99(iLocal_528[0], joaat("BALLOWPEDSPEECH"), "bAllowPedSpeech", uVar0, 1.5f, 1))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_528[0], false);
	}
}

bool func_520()
{
	return ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_322.f_0) > 0.8f;
}

void func_521()
{
	var uVar0;

	if (func_99(iLocal_528[0], joaat("BBREAKOUTSTANDING"), "bBreakoutStanding", uVar0, 1.6f, 1) && PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 30.0f))
	{
		ANIMSCENE::_SET_BREAKOUT_ARCHETYPE(iLocal_528[0], "ClosestScenario");
		func_684(iLocal_528[0], Global_36, 6, 0, 1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[0], Global_35, -1, -1.0f, -1.0f, -1.0f);
	}
}

bool func_522()
{
	float fVar0;
	float fVar1;

	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		return false;
	}
	fVar0 = (func_213(&sLocal_14, func_211()) - 10.0f);
	fVar1 = BUILTIN::VDIST(Global_36, sLocal_14.f_51);
	if (fVar1 > fVar0)
	{
		return false;
	}
	if (fVar1 < 10.0f)
	{
		if (!func_225(Global_35, 1))
		{
			return true;
		}
	}
	if (!func_499() || !func_514())
	{
		return false;
	}
	if (func_685(iLocal_528[1], fVar0, -1082130432, -1082130432, -1082130432) | func_685(iLocal_528[2], fVar0, -1082130432, -1082130432, -1082130432))
	{
		if (iLocal_748 == 0)
		{
			iLocal_748 = func_460();
			return false;
		}
		else if ((func_460() - iLocal_748) > 2000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	iLocal_748 = 0;
	return false;
}

bool func_523()
{
	if (func_263(&(sLocal_407[1 /*21*/])))
	{
		return false;
	}
	if (!func_50(iLocal_579, (1 << 17)) && (func_96(0, 1, Global_35, 1) && func_96(0, 1, iLocal_528[1], 1)))
	{
		if (iLocal_702 == Global_35)
		{
			if (func_95(&uLocal_723, 2.0f))
			{
				return true;
			}
		}
		else if (func_95(&uLocal_723, 6.0f))
		{
			return true;
		}
	}
	else if (iLocal_702 == Global_35)
	{
		if (func_95(&uLocal_723, 2.0f))
		{
			return true;
		}
	}
	else if (func_95(&uLocal_723, 4.0f))
	{
		return true;
	}
	return false;
}

bool func_524()
{
	var uVar0;

	if (!func_96(0, 1, Global_35, 1))
	{
		return false;
	}
	if (func_50(iLocal_579, (1 << 18)))
	{
		return true;
	}
	if (func_99(iLocal_528[0], joaat("BCANTBREAKOUT"), "bCantBreakout", uVar0, 1.0f, 1) && func_54(iLocal_528[2], 0, 1))
	{
		return false;
	}
	if (!func_53(2, 8))
	{
		return false;
	}
	return true;
}

bool func_525(int iParam0, var uParam1, int iParam2, bool bParam3, float fParam4, bool bParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (func_686(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
	{
		*iParam2 = 0.0f;
		return true;
	}
	if (fParam6 > 0.0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return false;
		}
	}
	if (func_687(iParam0, bParam5))
	{
		if (func_688(vVar0, iParam0, uParam1, iParam2, bParam3, fParam4, bParam5, bParam7, fParam9))
		{
			return true;
		}
	}
	else if (!bParam7)
	{
		*iParam2 = 0.0f;
	}
	return false;
}

int func_526()
{
	if (iLocal_401 >= 5)
	{
		return 1;
	}
	return 0;
}

float func_527(int iParam0)
{
	float fVar0;

	fVar0 = -1.0f;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
	{
		fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0);
	}
	return fVar0;
}

bool func_528()
{
	if (sLocal_14.f_98[0] < 6.0f || sLocal_14.f_98[1] < 6.0f)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_528[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_528[1], Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

float func_529(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_530(var uParam0)
{
	if (!func_93(uParam0))
	{
	}
	if (func_470(uParam0))
	{
		uParam0->f_1 = (func_421() - uParam0->f_2);
		uParam0->f_2 = 0.0f;
		func_553(uParam0, 2);
	}
}

int func_531(int iParam0, var uParam1, var uParam2)
{
	if (func_263(uParam2))
	{
		return 1;
	}
	if (func_689(iParam0, &uParam1))
	{
		return 1;
	}
	return 0;
}

void func_532(var uParam0)
{
	if (!func_93(uParam0))
	{
	}
	if (!func_470(uParam0))
	{
		uParam0->f_2 = (func_421() - uParam0->f_1);
		func_552(uParam0, 2);
	}
}

void func_533(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_state", iParam1);
}

void func_534(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_behavior", iParam1);
}

void func_535(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_targetRegion", iParam1);
}

bool func_536(int iParam0)
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

int func_537(int iParam0)
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

int func_538(int iParam0)
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

void func_539(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_690();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_691(iParam0);
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
	if (func_692(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_359())
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
	Global_40.f_11095.f_35 = func_693(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_690();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_694(iVar1);
		func_696(func_695(), 0, 4000);
		func_697(Global_40.f_11095.f_35);
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
		func_698(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_700(func_699(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_538(14))
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
					sParam4 = func_701(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_702(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_702(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_700(func_699(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_538(4))
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
					sParam4 = func_701(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_702(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_702(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_699(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_703(10, 1);
	}
}

void func_540(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_541()
{
	if (func_704())
	{
		return false;
	}
	if (func_705(&uLocal_589, sLocal_14.f_5.f_16, &iLocal_528, &(sLocal_14.f_98), 0, 1, 15.0f))
	{
		return true;
	}
	return false;
}

void func_542(var uParam0, int iParam1)
{
	if (!uParam0->f_8)
	{
		if (func_95(&(uParam0->f_4), uParam0->f_7))
		{
			if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iLocal_528[iParam1], false))
			{
				func_706(iLocal_528[iParam1]);
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_528[iParam1], 2);
				PED::SET_PED_COMBAT_RANGE(iLocal_528[iParam1], 0);
				uParam0->f_8 = 1;
			}
		}
	}
}

int func_543(var uParam0)
{
	if (*uParam0 >= 0)
	{
		AUDIO::_0xDC93F0948F2C28F4(*uParam0);
		*uParam0 = -1;
		return 1;
	}
	return 0;
}

int func_544(int iParam0)
{
	return iLocal_729[iParam0];
}

void func_545(bool bParam0)
{
	func_111(&uLocal_0);
	func_707(1, bParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	func_708();
}

void func_546()
{
	if (!PED::DOES_GROUP_EXIST(iLocal_701))
	{
		iLocal_701 = PED::CREATE_GROUP(0);
	}
	if (PED::DOES_GROUP_EXIST(iLocal_701))
	{
		func_709(&(iLocal_528[0]), &iLocal_701, 1, 1, 1, 1, 0);
		func_709(&(iLocal_528[1]), &iLocal_701, 0, 1, 1, 1, 0);
		PED::SET_GROUP_FORMATION(iLocal_701, 3);
		PED::SET_GROUP_FORMATION_SPACING(iLocal_701, 2.0f, 1.0f, 2.0f);
		PED::_0xB05CC690CDE8A4A9(iLocal_701, 1.5f);
		PED::_0x97C475212B327666(iLocal_701, true);
		PED::_0x40C3524D4ED83554(iLocal_701, true);
	}
}

void func_547(int iParam0, int iParam1)
{
	func_85(iParam0, iParam1);
}

bool func_548()
{
	if (func_355() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_549(int iParam0)
{
	return PED::GET_PED_CONFIG_FLAG(iParam0, 161, false);
}

bool func_550(int iParam0, bool bParam1)
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

int func_551(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_216())
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
				if (func_710(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_127(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_125(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_711(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_713(func_712(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_552(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_553(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_554(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_target", iParam1);
}

int func_555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		case 1:
			return 12;
		case 2:
			return 9;
		case 3:
			return 3;
		case 76:
			return 3;
		case 4:
			return 12;
		case 7:
			return 3;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 3;
		case 82:
			return 13;
		case 87:
			return 13;
		case 17:
			return 12;
		case 18:
			return 12;
		case 92:
			return 12;
		case 119:
			return 12;
		case 27:
			return 12;
		case 29:
			return 4;
		case 95:
			return 13;
		case 31:
			return 12;
		case 32:
			return 11;
		case 33:
			return 11;
		case 34:
			return 11;
		case 97:
			return 12;
		case 98:
			return 12;
		case 38:
			return 12;
		case 40:
			return 11;
		case 102:
			return 2;
		case 48:
			return 13;
		case 49:
			return 12;
		case 106:
			return 2;
		case 107:
			return 12;
		case 54:
			return 13;
		case 57:
			return 12;
		case 109:
			return 2;
		case 58:
			return 12;
		case 111:
			return 12;
		case 112:
			return 2;
		case 113:
			return 3;
		case 115:
			return 3;
		case 67:
			return 13;
		case 64:
			return 13;
		case 65:
			return 12;
		default:
			break;
	}
	return 9;
	return 9;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 0;
		case 10:
			return 2;
		case 12:
			return 3;
		case 13:
			return 4;
		case 14:
			return 4;
		default:
			break;
	}
	return 0;
}

bool func_557()
{
	if (func_239(iLocal_528[2], 0, &(sLocal_14.f_5), &iLocal_716, 1, sLocal_14.f_98[2]))
	{
		if (func_54(iLocal_528[2], 0, 0))
		{
			if (func_562())
			{
				return false;
			}
		}
		if (func_714(iLocal_716))
		{
			func_336(1);
		}
		if (func_54(iLocal_528[2], 0, 1))
		{
			switch (iLocal_523)
			{
				case 1:
					break;
				case 2:
					if (func_714(iLocal_716))
					{
						func_296(2, Global_35, "RE_FOOTR_RHD_V1_AGGRO", -1082130432, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_NORMAL"), 1);
					}
					break;
			}
			TASK::TASK_FLEE_PED(iLocal_528[2], Global_35, 3, (1 << 12), -1.0f, -1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
			func_105(&(iLocal_528[2]), &(sLocal_407[2 /*21*/]), &sLocal_471, 1, 1);
		}
		func_27(&iLocal_579, 1, 0);
		if (MAP::DOES_BLIP_EXIST(uLocal_536[2]))
		{
			func_52(&(uLocal_536[2]));
		}
		return true;
	}
	return false;
}

void func_558()
{
	int iVar0;

	PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_528[2], "INJURED_GENERAL");
	PED::_0x16F798A05BB9E3B5(iLocal_528[2]);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_STAND_STILL(0, 100);
	func_146(iLocal_528[2], &iVar0, 0.5f, 0, 1, 1);
	func_94(&uLocal_594, 0);
	func_715();
	func_260(0, 0);
	func_131(&(sLocal_14.f_5), 0);
	func_132(&(sLocal_14.f_5), 1);
	func_42(&(sLocal_14.f_5), 0);
	func_38(&(sLocal_14.f_5), 0);
	func_43(&(sLocal_14.f_5), 0);
}

bool func_559()
{
	int iVar0;
	float fVar1;

	iVar0 = -1;
	if (func_294(iLocal_578, (1 << 10)))
	{
		if (MAP::DOES_BLIP_EXIST(uLocal_536[2]))
		{
			func_52(&(uLocal_536[2]));
		}
		func_561();
		return true;
	}
	if (func_54(iLocal_528[2], 8, 1))
	{
		if (!func_50(iLocal_579, (1 << 25)))
		{
			iVar0 = func_716();
			if (sLocal_407[2 /*21*/].f_1 != -1)
			{
				func_94(&uLocal_625, 0);
				func_265(0, 0);
				func_27(&iLocal_579, (1 << 25), 0);
			}
		}
		func_717();
		fVar1 = 3.0f;
		if (func_53(2, 8))
		{
			fVar1 = 7.0f;
		}
		if (func_95(&uLocal_594, fVar1))
		{
			if (!func_50(iLocal_579, 64))
			{
				PED::_REMOVE_MOTION_TYPE_ASSET(-1073596206, iLocal_528[2]);
				func_718();
				func_27(&iLocal_579, 64, 0);
			}
			func_560();
			if (func_50(iLocal_579, (1 << 25)) && !func_95(&uLocal_625, 3.0f))
			{
			}
			else if (func_296(2, Global_35, func_510(17), 8.0f, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 252, false);
				MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(1359446981, iLocal_528[2]);
				func_105(&(iLocal_528[2]), &(sLocal_407[2 /*21*/]), &sLocal_471, 1, 1);
				func_42(&(sLocal_14.f_5), 1);
				func_38(&(sLocal_14.f_5), 1);
				func_43(&(sLocal_14.f_5), 1);
				func_125(&uLocal_594);
				PLAYER::_0x3A8611BD7BDE84F7(iLocal_698, 15.0f);
				PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 3, 2, false);
				PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 7, 2, false);
				PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 4, 2, false);
				switch (iLocal_523)
				{
					case 2:
						PED::_0x1E017404784AA6A3(iLocal_528[2], joaat("VCTM_RHD_V1"));
						break;
					case 1:
						PED::_0x1E017404784AA6A3(iLocal_528[2], joaat("VCTM_VAL_V1"));
						break;
				}
				TASK::TASK_PLAY_ANIM(iLocal_528[2], sLocal_305[5 /*2*/], sLocal_305[5 /*2*/].f_1, 8.0f, -4.0f, -1, 67108880, 0.0f, false, 0, false, 0, false);
				func_297(&iLocal_578, (1 << 10), 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 252, true);
				return true;
			}
		}
	}
	return false;
}

void func_560()
{
	func_719(&cLocal_385, iLocal_528[2]);
	func_720(Global_35, iLocal_528[2], 1, 1, 1, 0, 0, 0, 0, 1, 1);
	func_721(iLocal_528[2], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
}

void func_561()
{
	if (func_564(iLocal_528[2], 0, 0, 0) || sLocal_14.f_98[2] < 15.0f)
	{
		switch (iLocal_523)
		{
			case 1:
				if (!func_50(iLocal_579, (1 << 30)))
				{
					PLAYER::_0xC6366A585659D15C(iLocal_698, "RE_FOOTR_VAL_V1_THANK_RPOS");
					PLAYER::_0x98CD760DE43B612E(iLocal_698, "RE_FOOTR_VAL_V1_THANK_RNEG");
					PED::_0x20C5459379D75C1C(iLocal_528[2], "RE_FOOTR_VAL_V1_THANK_POS");
					PED::_0xA3C53CDE922BC78B(iLocal_528[2], "RE_FOOTR_VAL_V1_THANK_NEG");
				}
				else
				{
					PLAYER::_0xC6366A585659D15C(iLocal_698, 0);
					PLAYER::_0x98CD760DE43B612E(iLocal_698, 0);
					PLAYER::_0x628E742FE1F79C4A(iLocal_698, 0);
					PED::_0xE37ACEE15AC50C7E(iLocal_528[2], 0);
					PED::_0x20C5459379D75C1C(iLocal_528[2], 0);
				}
				break;
			case 2:
				if (!func_50(iLocal_579, (1 << 30)))
				{
					PLAYER::_0xC6366A585659D15C(iLocal_698, "RE_FOOTR_RHD_V1_POST_ILO_POS");
					PLAYER::_0x98CD760DE43B612E(iLocal_698, "RE_FOOTR_RHD_V1_POST_ILO_NEG");
					PED::_0x20C5459379D75C1C(iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_POS");
					PED::_0xA3C53CDE922BC78B(iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_NEG");
				}
				else
				{
					PLAYER::_0xC6366A585659D15C(iLocal_698, 0);
					PLAYER::_0x98CD760DE43B612E(iLocal_698, 0);
					PLAYER::_0x628E742FE1F79C4A(iLocal_698, 0);
					PED::_0xE37ACEE15AC50C7E(iLocal_528[2], 0);
					PED::_0x20C5459379D75C1C(iLocal_528[2], 0);
				}
				break;
		}
		PLAYER::_0x628E742FE1F79C4A(iLocal_698, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"));
		func_722();
		PED::SET_PED_RESET_FLAG(iLocal_528[2], 49, true);
		PED::SET_PED_RESET_FLAG(iLocal_528[2], 177, true);
	}
	else
	{
		PLAYER::_0xC6366A585659D15C(iLocal_698, 0);
		PLAYER::_0x98CD760DE43B612E(iLocal_698, 0);
		PLAYER::_0x628E742FE1F79C4A(iLocal_698, 0);
		func_57();
	}
}

bool func_562()
{
	if (PED::_GET_IS_PED_BEING_ROBBED(iLocal_528[2], iLocal_698, false) || PED::_GET_PED_GRAPPLER(Global_35) == iLocal_528[2])
	{
		return true;
	}
	return false;
}

void func_563()
{
	PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_528[2]);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_528[2], false);
	func_56();
	func_27(&iLocal_579, (1 << 30), 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_528[2], (1 << 10), true);
}

bool func_564(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_476(16))
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
					func_723(16);
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

void func_565()
{
	func_56();
	vLocal_640 = { func_337() /*3*/ };
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_528[2], vLocal_640, 1.0f, -1, 0.25f, 0, 40000.0f);
}

bool func_566()
{
	if (MAP::DOES_BLIP_EXIST(uLocal_536[2]))
	{
		func_52(&(uLocal_536[2]));
	}
	if (func_303(iLocal_528[2], vLocal_640, 0) < 5.0f)
	{
		return true;
	}
	return false;
}

void func_567()
{
	switch (func_113())
	{
		case 9:
			TASK::TASK_WANDER_STANDARD(iLocal_528[2], 40000.0f, 0);
			break;
		case 11:
			TASK::TASK_WANDER_STANDARD(iLocal_528[2], 40000.0f, 0);
			break;
	}
}

void func_568()
{
	func_724(23);
}

int func_569(var uParam0)
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

void func_570(int iParam0)
{
	int iVar0;

	iVar0 = func_725(iParam0);
	if (iVar0 != 0)
	{
		func_726(-1, 24, 0, iVar0);
	}
}

void func_571(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_700(func_699(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_73(iParam0, 2))
	{
		func_727(iParam0, func_402(iParam3));
	}
	if (func_73(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_113();
		}
		func_728(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_86(iParam0, (1 << 16)))
	{
		func_729(iParam0, iParam1);
		func_730(iParam0, func_170(iParam0, iParam1));
		func_309(128);
	}
	func_405(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216, 0, 0);
	func_406(iParam0, 1);
	if (!bParam2)
	{
		func_309(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_731((1 << 19));
	}
	if (func_732(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_732(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_572(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_733(&Global_0, 8);
	}
	if (!func_734() || func_355() != -1)
	{
		return;
	}
	func_733(&Global_0, 1);
}

int func_573(int iParam0, bool bParam1)
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

void func_574(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

bool func_575(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_77(vParam0))
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

bool func_576(Vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_77(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, (1 << 14));
}

bool func_577(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_77(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_130(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500.0f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_578()
{
	int iVar0;
	int iVar1;

	iVar0 = func_735(func_2());
	if (iVar0 == 8)
	{
		iVar1 = func_227(func_2());
		if (func_229(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_736(func_600(0)))
	{
		return false;
	}
	if (func_737())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_579(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_580(float fParam0)
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

bool func_581(var uParam0)
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

int func_582(int iParam0, Vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_738(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_583(int iParam0)
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

bool func_584(var uParam0)
{
	return func_138(*uParam0, 4);
}

bool func_585(var uParam0)
{
	return func_138(*uParam0, 64);
}

bool func_586(var uParam0)
{
	return func_138(*uParam0, 8);
}

bool func_587(var uParam0)
{
	return func_138(*uParam0, 128);
}

bool func_588(var uParam0)
{
	return func_138(*uParam0, (1 << 11));
}

void func_589(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_590(var uParam0)
{
	return func_138(*uParam0, (1 << 10));
}

bool func_591(var uParam0)
{
	return func_138(*uParam0, 256);
}

void func_592(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_593(var uParam0)
{
	return func_138(*uParam0, (1 << 9));
}

bool func_594(var uParam0)
{
	return func_138(*uParam0, (1 << 12));
}

bool func_595(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_596(int iParam0)
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

int func_597(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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
		sVar0 = { func_739(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_740((398 + iVar28), 1);
			if (func_741(iParam0, &sVar0, iVar5, 0))
			{
				if (func_742(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_743(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_744(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_745(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_746(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_747(iParam0, iParam1);
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

void func_598(int iParam0, int iParam1, float fParam2)
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

bool func_599(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_600(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_748(1, 0, 0);
	}
	else
	{
		iVar0 = func_2();
	}
	return func_601(iVar0);
}

int func_601(int iParam0)
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

int func_602(int iParam0)
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

int func_603(int iParam0, int iParam1)
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

void func_604(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_368(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_353(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == (1 << 24))
			{
				if (func_749(iVar0) < func_750(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_405(iVar0, iParam1, 1.0f, iVar1 | iParam2, bParam3);
		}
		iVar0++;
	}
}

bool func_605(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_751(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

void func_606(int iParam0)
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

void func_607(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_608()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_752(iVar0, 128))
		{
			func_753(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_609()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_752(iVar0, 128) && func_752(iVar0, 1))
		{
			func_753(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_610(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000.0f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_611()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_73(iVar0, (1 << 24)))
		{
			if (!func_754(iVar0))
			{
				func_755(iVar0, (1 << 12));
			}
		}
		iVar0++;
	}
}

void func_612(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_354(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_354(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_354(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_354(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_354(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_354(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_613(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_421();
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

int func_614(int iParam0)
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

int func_615(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_616(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_477();
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
			func_756(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_617(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_618(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_355() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_757(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_757(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_643(iVar0) == -1)
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

void func_619(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_758(iParam0);
	}
}

bool func_620(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_643(iParam2);
	}
	else
	{
		iVar1 = func_642(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_643(iParam0);
	}
	else
	{
		iVar0 = func_642(iParam0);
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

float func_621(int iParam0, int iParam1)
{
	return func_127(iParam0, iParam1, 1, 1);
}

float func_622(int iParam0)
{
	return iParam0->f_26;
}

bool func_623(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_624(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_85(iParam0, (1 << 27));
	}
	else
	{
		func_137(iParam0, (1 << 27));
	}
}

float func_625(int iParam0)
{
	return iParam0->f_17;
}

bool func_626(int iParam0, int iParam1, float fParam2, float fParam3)
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
	if (*iParam0 & (1 << 15) != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_627(int iParam0)
{
	return iParam0->f_18;
}

bool func_628(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_478(iVar0, 0)))
		{
			if (func_653(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_629(int iParam0)
{
	return iParam0->f_23;
}

int func_630(int iParam0)
{
	return iParam0->f_21;
}

int func_631(int iParam0)
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

bool func_632(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_759(iParam0, vParam4, 0.5f))
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

int func_633(int iParam0)
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
	if (func_760(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_634(int iParam0)
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

bool func_635(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_222(iParam1))
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

bool func_636(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_222(iParam1))
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

bool func_637(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_222(iParam1))
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

bool func_638(int iParam0, int iParam1)
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

bool func_639(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_761(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_640(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_641(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_303(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_642(int iParam0)
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

int func_643(int iParam0)
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

int func_644(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_638(Global_35, &iVar1))
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
		fVar2 = func_127(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_127(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_645(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_430(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_646(iParam1, iVar0))
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
				if (!bParam2 || !func_646(iParam1, iVar1))
				{
					if (func_303(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_646(int iParam0, int iParam1)
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

int func_647(int iParam0)
{
	if (func_359())
	{
		return 0;
	}
	return func_762(Global_1347702[58 /*49*/].f_15, 1);
}

int func_648(int iParam0)
{
	return iParam0->f_20;
}

int func_649(int iParam0, int iParam1, bool bParam2, float fParam3)
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

bool func_650(int iParam0)
{
	return func_763(iParam0, 2);
}

void func_651(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_111(&(iParam0->f_18));
}

bool func_652()
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

bool func_653(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_654(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_249(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_764(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_655(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_765(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_103(uParam2, 0, 0, 1, 0);
				func_85(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_766(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_137(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_656(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		func_475(iParam1, uParam2, 0);
		iVar5 = func_767(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_103(uParam2, 0, 0, 1, 0);
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
		if (func_495(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_495(iParam1, 26))
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
				iParam6 = func_768(uParam0);
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
			if (func_3(iParam4, (1 << 28)))
			{
				iVar8 = func_769(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_268(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_495(iParam1, 23))
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
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_657(*uParam0, 1, 1);
			}
			else
			{
				func_657(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_657(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_658(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_564(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_659(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_770(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_660(int iParam0)
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

bool func_661(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_771(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & (1 << 9) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_772(Global_35)) || func_773(Global_35)) || func_774(Global_35));
	fVar12 = -1.0f;
	if (func_93(&(iParam1->f_13)))
	{
		fVar12 = func_241(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_249((uParam4[iVar0 /*17*/])->f_6);
		func_775(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_776(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_777(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_103(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_778(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_475(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_779(iParam1, fParam6, iParam1->f_9))
					{
						func_125(&(iParam1->f_18));
						if (bVar6)
						{
							func_778(uParam4, 0, 0);
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
		func_780(iParam1, fParam2);
	}
	return bVar5;
}

void func_662(var uParam0)
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

void func_663(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_781(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_780(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_664(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_782(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_496(iParam1, 0);
				func_475(iParam1, uParam2, func_495(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_665(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_125(&(iParam1->f_18));
			return false;
		}
		else if (func_93(&(iParam1->f_18)))
		{
			func_111(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_93(&(iParam1->f_18)))
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
	return func_472(&(iParam1->f_18), fParam2);
	return true;
}

void func_666(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_775(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_667(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_668(int* iParam0)
{
	if (func_495(iParam0, 0))
	{
		if (func_783(iParam0))
		{
			func_667(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_669(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_551(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_670(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_671(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_784(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_785(iParam0))
	{
		return false;
	}
	if (func_786(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_787(iParam0, 1)) || func_788((1 << 15)))
	{
		if (!func_787(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_789())
	{
		return false;
	}
	return true;
}

void func_672(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_673(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_674(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_763(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_675(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_676(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

bool func_677()
{
	if (bLocal_550)
	{
		return ANIMSCENE::GET_ANIM_SCENE_BOOL(sLocal_322.f_0, "BASE_BOOL");
	}
	return false;
}

void func_678(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_523 == 1)
			{
				*iParam1 = 0;
				*iParam2 = iLocal_528[2];
			}
			else
			{
				*iParam1 = 0;
				*iParam2 = iLocal_528[2];
			}
			*iParam3 = 0;
			break;
		case 1:
			if (iLocal_523 == 1)
			{
				*iParam1 = 0;
				*iParam2 = iLocal_528[2];
			}
			else
			{
				*iParam1 = 2;
				*iParam2 = iLocal_528[0];
			}
			*iParam3 = 1;
			break;
		case 2:
			if (iLocal_523 == 1)
			{
				*iParam1 = 0;
				*iParam2 = iLocal_528[2];
			}
			else
			{
				*iParam1 = 0;
				*iParam2 = iLocal_528[2];
			}
			*iParam3 = 2;
			break;
		case 3:
			*iParam1 = 2;
			*iParam2 = iLocal_528[0];
			*iParam3 = 3;
			break;
		case 4:
			*iParam1 = 0;
			*iParam2 = iLocal_528[2];
			*iParam3 = 4;
			break;
		case 5:
			*iParam1 = 2;
			*iParam2 = iLocal_528[0];
			*iParam3 = 5;
			break;
	}
}

bool func_679(int iParam0, char* sParam1)
{
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam0, sParam1))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_680(Vector3 vParam0)
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

bool func_681(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_130(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_682(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		func_441(iParam1, 0, iVar0);
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
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_453(iParam1, 4000))
				{
					if (func_454(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) & func_455(iParam1, iParam0) && func_456(iParam1, iParam0))
					{
						func_458();
						*iParam2 = 2;
						func_443(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4.0f)
			{
				if (func_453(iParam1, 4000))
				{
					if (func_454(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) & func_455(iParam1, iParam0) && func_456(iParam1, iParam0))
					{
						func_458();
						*iParam2 = 2;
						func_443(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & (1 << 17) == 0)
						{
							if (func_457(iParam0, Global_1935630.f_41))
							{
								func_458();
								*iParam2 = 2;
								func_443(iParam0, iParam1, *iParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*iParam1 & (1 << 17) == 0)
					{
						if (func_457(iParam0, Global_1935630.f_41))
						{
							func_458();
							*iParam2 = 2;
							func_443(iParam0, iParam1, *iParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & (1 << 17) == 0)
				{
					if (func_461())
					{
						if (func_457(iParam0, Global_1935630.f_42))
						{
							func_458();
							*iParam2 = 2;
							func_443(iParam0, iParam1, *iParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_447(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_448(Global_35, iParam0, iParam1))
					{
						func_458();
						*iParam2 = 4;
						func_443(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_449(Global_35, iParam0, iParam1))
					{
						func_458();
						*iParam2 = 256;
						func_443(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & (1 << 17) != 0)
		{
			if (func_790(iParam0, iParam1))
			{
				func_458();
				*iParam2 = (1 << 17);
				func_443(iParam0, iParam1, *iParam2);
				return 1;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_791(iParam0, iParam1))
			{
				func_458();
				*iParam2 = (1 << 18);
				func_443(iParam0, iParam1, *iParam2);
				return 1;
			}
		}
	}
	return 0;
}

bool func_683(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return true;
	}
	if ((iParam0 % 2) == 0)
	{
		return true;
	}
	return false;
}

void func_684(int iParam0, Vector3 vParam1, int iParam4, bool bParam5, int iParam6)
{
	if (!func_139(iParam0, 0))
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
	if (func_77(vParam1))
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

int func_685(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0.0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_303(iParam0, Global_36, 1);
	}
	if (fParam2 > 0.0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
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
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_686(int iParam0, int iParam1, bool bParam2)
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
	return func_130(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_687(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (func_686(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam1 * fParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_688(Vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = func_792(iParam10);
				if (fVar2 < 0.0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_793(bParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = func_794(bParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*bParam6 = 1;
		if (*iParam5 != 0.0f)
		{
		}
		if (*iParam5 <= 0.0f)
		{
			*iParam5 = func_421();
		}
		else if ((func_421() - *iParam5) > bParam7)
		{
			*iParam5 = 0.0f;
			return true;
		}
	}
	else if (*bParam4 == 2 && bParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0.0f;
		}
	}
	else
	{
		*bParam6 = 1;
	}
	return false;
}

bool func_689(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = *uParam1;
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

int func_690()
{
	int iVar0;

	iVar0 = func_795();
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

int func_691(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_355() != -1)
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
	fVar1 = func_152(MISC::ABSF(fVar1) < 1.0f, func_152(fVar1 < 0.0f, -1.0f, 1.0f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_692(int iParam0)
{
	if (!func_796(iParam0))
	{
		return false;
	}
	return func_797(iParam0);
}

int func_693(int iParam0, int iParam1, int iParam2)
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

int func_694(int iParam0)
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

int func_695()
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

void func_696(int iParam0, bool bParam1, int iParam2)
{
	func_798((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_799(iParam0);
}

void func_697(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_800(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_698(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_801(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_802(iVar5, &iVar2, &iVar0))
			{
				if (!func_803(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_804(iVar2);
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
							if (func_805(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_690() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_690() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_806();
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

struct<2> /*16*/ func_699(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_700(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_701(int iParam0)
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

int func_702(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_807(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_703(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_808(iParam0))
	{
		return 0;
	}
	if (!func_734())
	{
		return 0;
	}
	if (!func_809(iParam0, &iVar0, &iVar1))
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

bool func_704()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (func_810(16) && !func_810(21))
	{
		return true;
	}
	return false;
}

bool func_705(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, float fParam6)
{
	bool bVar0;
	int iVar1[6];
	int iVar8[6];
	int iVar15;
	float fVar16;
	float fVar17;
	Vector3 vVar18;
	int iVar21;
	bool bVar22;
	float fVar23;
	bool bVar24;
	bool bVar25;

	if (func_3(uParam0->f_3, 16))
	{
		return true;
	}
	bVar0 = false;
	if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) < 1.0f || (func_417(Global_1935630.f_44) && WEAPON::IS_WEAPON_A_GUN(Global_1935630.f_44)))
	{
		bVar0 = true;
	}
	switch (iParam1)
	{
		case 1:
		case 4:
		case 8:
		case 16:
		case 64:
		case 4096:
			bVar0 = true;
			break;
	}
	func_811(uParam0, iParam1);
	func_94(uParam0, 0);
	if (iParam5 < iParam4)
	{
		iParam5 = (*iParam2 - 1);
	}
	fVar16 = Global_36.f_2;
	if ((((((PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 8000) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(Global_35, joaat("WEAPON_UNARMED"), 8000)) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(Global_35, joaat("WEAPON_MELEE_KNIFE"), 8000)) || PED::GET_PED_IS_BEING_GRAPPLED(Global_35)) || PED::GET_PED_IS_GRAPPLING(Global_35)) || func_54(PED::GET_PEDS_JACKER(Global_35), 0, 1)) || PED::GET_JACK_TARGET(Global_35) != 0)
	{
		func_125(uParam0);
	}
	iVar21 = 1;
	bVar22 = func_812();
	iVar15 = iParam4;
	while (iVar15 <= iParam5)
	{
		if (func_54((*iParam2)[iVar15], 0, 0))
		{
			if (PED::_GET_LASSO_TARGET(Global_35) == (*iParam2)[iVar15] || PED::IS_PED_HOGTIED((*iParam2)[iVar15]))
			{
				bVar0 = true;
			}
			fVar23 = func_303((*iParam2)[iVar15], Global_36, 1);
			if (fVar23 >= (10.0f + fParam6))
			{
				iVar1[iVar15] = 1;
			}
			vVar18 = { ENTITY::GET_ENTITY_COORDS((*iParam2)[iVar15], true, false) /*3*/ };
			fVar17 = vVar18.z;
			if (!bVar22 && MISC::ABSF((fVar17 - fVar16)) > 0.75f)
			{
				iVar8[iVar15] = 1;
			}
			iVar21 = 0;
		}
		else
		{
			iVar1[iVar15] = 1;
			iVar8[iVar15] = 1;
		}
		iVar15++;
	}
	if (iVar21 == 1)
	{
		return false;
	}
	bVar24 = true;
	bVar25 = true;
	iVar15 = iParam4;
	while (iVar15 <= iParam5)
	{
		if (!iVar1[iVar15])
		{
			bVar24 = false;
		}
		if (!iVar8[iVar15])
		{
			bVar25 = false;
		}
		iVar15++;
	}
	if (bVar24)
	{
		bVar0 = true;
	}
	if (bVar25)
	{
		bVar0 = true;
	}
	if ((func_124(Global_35, joaat("SCRIPT_TASK_MOUNT_ANIMAL")) || func_124(Global_35, joaat("SCRIPT_TASK_ENTER_TRANSPORT"))) || func_124(Global_35, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
	{
		bVar0 = true;
	}
	if (func_95(uParam0, 8.0f))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_3(uParam0->f_3, 1) || !func_3(uParam0->f_3, 32))
		{
			func_813(iParam2, iParam4, iParam5, 1);
		}
		else
		{
			func_813(iParam2, iParam4, iParam5, 0);
			LAW::SET_POSTPONE_DISTURBANCE_CRIMES_DURING_COMBAT(PLAYER::PLAYER_ID(), true);
			func_85(&(uParam0->f_3), 4);
			func_814(uParam0);
		}
		func_85(&(uParam0->f_3), 16);
		return true;
	}
	return false;
}

void func_706(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_707(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

void func_708()
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(4, true, false);
}

void func_709(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!PED::DOES_GROUP_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 279, bParam3);
	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*uParam0, *iParam1, false);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*uParam0, *iParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 280, bParam4);
		PED::_0xBAD2A311667A50D7(*uParam0, bParam5);
	}
	PED::_0x97C475212B327666(*iParam1, bParam6);
}

float func_710(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_127(Global_35, iParam0, bParam1, bParam2);
}

bool func_711(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_712(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_815(iParam0, &sVar0);
}

int func_713(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_714(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 2048:
			return true;
		default:
			break;
	}
	return false;
}

void func_715()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	if (func_54(iLocal_528[2], 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 301, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 317, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 406, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 505, true);
		func_651(&(sLocal_407[2 /*21*/]), 0);
		func_103(&sLocal_471, 1, 1, 1, 0);
		switch (iLocal_523)
		{
			case 1:
				sVar0 = "RE_FOOTR_VAL_V1_THANK_CALLOUT";
				sVar1 = "RE_FOOTR_VAL_V1_THANK_RNEG";
				sVar2 = "";
				break;
			case 2:
				sVar0 = "RE_FOOTR_RHD_V1_THANK_CALLOUT";
				sVar1 = "RE_FOOTR_RHD_V1_POST_ILO_NEG";
				sVar2 = "";
				break;
		}
		func_267(&(sLocal_471[0 /*17*/]), func_266(7), sVar0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_267(&(sLocal_471[1 /*17*/]), func_266(10), sVar1, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		func_267(&(sLocal_471[2 /*17*/]), func_266(12), sVar2, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		func_265(1, 0);
		func_265(2, 0);
		PLAYER::_0x3A8611BD7BDE84F7(iLocal_698, 15.0f);
		PED::_SET_PED_INTERACTION_PERSONALITY(iLocal_528[2], joaat("TIMID"));
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 7, 2, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iLocal_698, iLocal_528[2], 4, 2, true);
		PED::_SET_PED_MOTIVATION(iLocal_528[2], 8, 1.0f, 0);
	}
}

int func_716()
{
	int iVar0;
	int iVar1;

	iVar0 = func_262(&(iLocal_528[2]), &(sLocal_407[2 /*21*/]), 15.0f, &sLocal_471, &(sLocal_14.f_192), 2.0f, 1, 0, "", func_261(3, 0, 0), 0, 0, 2, 0, -1082130432, 0);
	iVar1 = iVar0;
	if (sLocal_407[2 /*21*/].f_1 != -1)
	{
		func_260(0, 0);
	}
	switch (iVar1)
	{
		case 1:
			if (iLocal_523 == 1)
			{
				PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
				TASK::TASK_FLEE_PED(iLocal_528[2], Global_35, 3, (1 << 12), -1.0f, -1, 0);
				func_27(&iLocal_579, 1, 0);
			}
			func_816(&sLocal_471, 1, 1);
			func_27(&iLocal_579, (1 << 15), 0);
			break;
		case 0:
			func_816(&sLocal_471, 1, 1);
			func_27(&iLocal_579, (1 << 15), 0);
			break;
	}
	return iVar1;
}

void func_717()
{
	if (func_564(iLocal_528[2], 0, 0, 0))
	{
		switch (iLocal_523)
		{
			case 1:
				PLAYER::_0xC6366A585659D15C(iLocal_698, "RE_FOOTR_VAL_V1_CALLOUT");
				break;
			case 2:
				PLAYER::_0xC6366A585659D15C(iLocal_698, "RE_FOOTR_RHD_V1_CALLOUT");
				break;
		}
		PLAYER::_0x628E742FE1F79C4A(iLocal_698, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"));
	}
	else
	{
		PLAYER::_0xC6366A585659D15C(iLocal_698, 0);
		PLAYER::_0x98CD760DE43B612E(iLocal_698, 0);
		PLAYER::_0x628E742FE1F79C4A(iLocal_698, 0);
	}
}

void func_718()
{
	func_817(&uLocal_660);
	func_818(Global_35, iLocal_528[2], &uLocal_660, 0.0f, 0.0f, 0.0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
	func_819(iLocal_528[2], Global_35, &uLocal_660, -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, (1 << 30), 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
	func_820(&cLocal_385);
}

void func_719(char* sParam0, var uParam1)
{
	var uVar0[1];

	if (CAM::_IS_CAM_DATA_DICT_LOADED(sParam0) && !CAM::_IS_CAMERA_AVAILABLE(sParam0))
	{
		CAM::_CAM_CREATE(sParam0);
		uVar0[0] = uParam1;
		CAM::_0xFEB8646818294C75(sParam0, &uVar0);
	}
}

void func_720(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_821(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

void func_721(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_821(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

void func_722()
{
	if (!bLocal_711)
	{
		switch (iLocal_523)
		{
			case 2:
				PED::_0x1E017404784AA6A3(Global_35, joaat("PLYR_RHD_V1"));
				break;
			case 1:
				PED::_0x1E017404784AA6A3(Global_35, joaat("PLYR_VAL_V1"));
				break;
		}
		bLocal_711 = true;
	}
}

void func_723(int iParam0)
{
	Global_22 |= iParam0;
}

void func_724(int iParam0)
{
	int iVar0;

	if (func_355() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_139(func_822(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_822(iVar0), func_357(), true))
			{
				func_823(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_725(int iParam0)
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

void func_726(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_824() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_824();
					}
					func_825(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_137(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_727(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_602(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_603(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_728(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_86(iParam0, (1 << 13)))
	{
		iVar0 = func_603(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_729(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_364(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_730(int iParam0, Vector3 vParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_73(iParam0, (1 << 9)))
	{
		vParam1 = { Global_36 /*3*/ };
	}
	if (func_77(vParam1))
	{
		return;
	}
	if (!func_184(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] /*3*/ };
		if (func_77(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_378(vVar2, vParam1, 1.0f, 1))
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

void func_731(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_755(iVar0, iParam0);
		iVar0++;
	}
}

int func_732(int iParam0)
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

void func_733(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_734()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_735(int iParam0)
{
	if (!func_439(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_736(int iParam0)
{
	return Global_1310750.f_16074 & iParam0 != 0;
}

bool func_737()
{
	return Global_1894899 & 2 != 0;
}

void func_738(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_826(iParam1))
		{
			func_827(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_828(iParam0, 0, 1);
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
			func_829(iParam0, 0);
			bVar0 = true;
		}
		func_830(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

struct<5> /*40*/ func_739(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_831(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_805(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_743(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_832(bParam1) /*4*/ };
			if (bParam2 && func_833(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_741(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_741(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_742(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_834(bParam1) /*4*/ };
			switch (func_835(iParam0))
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
			if (func_836(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_743(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_836(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_743(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_837(sVar0, &sVar27, bParam1, 0))
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

int func_740(int iParam0, int iParam1)
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

bool func_741(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_838(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_742(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_839(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_743(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_803(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_840(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_744(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_841(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_837(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_745(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_840(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_745(bool bParam0)
{
	if (func_355() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_840(bParam0));
}

int func_746(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_842(iParam0))
	{
		return 0;
	}
	if (!func_745(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_747(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_843(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_748(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_844(iVar2))
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

int func_749(int iParam0)
{
	if (func_184(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_750(int iParam0)
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

int func_751(int iParam0, int iParam1)
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

bool func_752(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return Global_1393237.f_11[iParam0 /*30*/].f_10 & iParam1 != 0;
}

void func_753(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

bool func_754(int iParam0)
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

void func_755(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 -= Global_1310750[iParam0 /*111*/].f_1 & iParam1;
}

void func_756(var uParam0, var uParam1)
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

int func_757(int iParam0)
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

void func_758(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_137(iParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_85(iParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_759(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

bool func_760(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_761(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_762(int iParam0, bool bParam1)
{
	switch (func_845(iParam0))
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

bool func_763(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

bool func_764(int iParam0, bool bParam1)
{
	if (bParam1 && !func_249(iParam0))
	{
		return false;
	}
	return !func_763(iParam0, 4);
}

bool func_765(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_846((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_766(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_781(uParam0[iVar0 /*17*/]))
		{
			func_488(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_767(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_847(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_249((uParam2[iVar0 /*17*/])->f_6))
		{
			func_488(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_768(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_346(*uParam0);
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

int func_769(var uParam0, int iParam1)
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

void func_770(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_847(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_771(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_772(int iParam0)
{
	return func_848(iParam0, 4) | func_848(iParam0, 5);
}

int func_773(int iParam0)
{
	return func_848(iParam0, 7);
}

int func_774(int iParam0)
{
	return func_848(iParam0, 6);
}

void func_775(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_781(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_847(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_776(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_849(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_764(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_493(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_493(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_850(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_777(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_851(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_852(iParam1, 1))
	{
		func_853(iParam1, 1);
		return true;
	}
	return false;
}

void func_778(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_487(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_779(int* iParam0, float fParam1, bool bParam2)
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

void func_780(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_781(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_782(int iParam0)
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

bool func_783(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_784(int iParam0, int iParam1)
{
	if (func_355() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_785(int iParam0)
{
	if (func_355() != -1)
	{
		if (func_787(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_787(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_786(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_787(iParam0, (1 << 16)) && !func_787(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_787(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_787(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_787(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

bool func_788(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

bool func_789()
{
	return Global_1905944.f_5694;
}

bool func_790(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_854(iParam1);
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
		fVar2 = func_855(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5.0f));
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
					if (func_856())
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

bool func_791(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (func_222(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::GET_PED_CROUCH_MOVEMENT(Global_35) || PED::IS_PED_IN_COVER(Global_35, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *iParam1 & (1 << 21) != 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, bVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4.0f)
	{
		if (*iParam1 & (1 << 9) != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return false;
			}
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35) || ((PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1.0f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8.0f) && *iParam1 & (1 << 21) != 0))
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

float func_792(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1.0f;
		case 1:
			return 30.0f;
		case 2:
			return 80.0f;
		default:
			break;
	}
	return -1.0f;
}

int func_793(bool bParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { func_857(iParam1) /*3*/ };
	vVar3 = { func_857(iParam2) /*3*/ };
	return func_858(bParam0, vVar0, vVar3, iParam2);
}

int func_794(bool bParam0, int iParam1, Vector3 vParam2)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_857(iParam1) /*3*/ };
	return func_858(bParam0, vVar0, vParam2, 0);
}

int func_795()
{
	return Global_40.f_11095.f_35;
}

bool func_796(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_797(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_798(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_859(bParam1);
	}
}

void func_799(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_800(int iParam0)
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

bool func_801(int iParam0)
{
	Vector3 vVar0;

	if (!func_860(23, &vVar0))
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

bool func_802(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_860(23, &sVar0))
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

bool func_803(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_804(int iParam0)
{
	return iParam0;
}

int func_805(int iParam0)
{
	Vector3 vVar0;

	if (!func_803(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_806()
{
	int iVar0;

	iVar0 = func_690();
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

void func_807(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_808(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_809(int iParam0, int iParam1, int iParam2)
{
	if (!func_808(iParam0))
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

bool func_810(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_762(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_811(var uParam0, int iParam1)
{
	if (func_3(uParam0->f_3, 8))
	{
		return;
	}
	if (func_3(uParam0->f_3, 2))
	{
		return;
	}
	switch (iParam1)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 64:
		case 128:
		case 256:
		case 512:
		case 1024:
		case 2048:
			func_85(&(uParam0->f_3), 1);
			break;
	}
	func_85(&(uParam0->f_3), 8);
}

int func_812()
{
	if (Global_1935630.f_40 != 0)
	{
		return 1;
	}
	if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(Global_35, joaat("WEAPON_UNARMED"), 5000) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(Global_35, joaat("WEAPON_MELEE_KNIFE"), 5000))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return 1;
	}
	if (PED::IS_PED_BEING_JACKED(Global_35))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(Global_35, 90.0f))
	{
		return 1;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return 1;
	}
	return 0;
}

void func_813(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		iVar0 = iParam1;
		while (iVar0 <= iParam2)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
			{
				PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0], 494, true);
				PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0], 6, false);
			}
			iVar0++;
		}
	}
}

void func_814(var uParam0)
{
	if (func_3(uParam0->f_3, 4))
	{
		LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), joaat("CRIME_VANDALISM"), 0, 0, -1);
		LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), joaat("CRIME_VANDALISM_VEHICLE"), 0, 0, -1);
		LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), joaat("CRIME_TRAMPLE"), 3, 0, -1);
	}
}

bool func_815(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_816(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_264(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_817(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = 0.0f;
	uParam0->f_4 = 1.0f;
	uParam0->f_5 = 1.0f;
	uParam0->f_16 = joaat("FACIALONLY_FILTER");
	uParam0->f_17 = 0.0f;
	uParam0->f_18 = 0.5f;
	uParam0->f_19 = -1;
	uParam0->f_20 = 6;
	uParam0->f_21 = 1;
	uParam0->f_23 = 69632;
}

void func_818(int iParam0, int iParam1, var uParam2, Vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11, float fParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<10> /*80*/ sVar0;
	struct<10> /*80*/ sVar11;

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
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &sVar0, iParam8, fParam9, fParam10, fParam11, iParam13, fParam12);
	}
	else if (!func_595(vParam3, 0.0f, 0.0f, 0.0f))
	{
		sVar11.f_0 = 0;
		sVar11.f_1 = { vParam3 /*3*/ };
		sVar11.f_7 = iParam16;
		sVar11.f_9 = iParam17;
		sVar11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &sVar11, iParam8, fParam9, fParam10, fParam11, iParam13, fParam12);
	}
	if (bParam15)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		func_861(iParam0, iParam1, iParam14);
	}
}

void func_819(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		sVar0.f_2 = iParam15;
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
		func_861(iParam0, iParam1, iParam18);
	}
}

void func_820(char* sParam0)
{
	strcpy_s(sParam0, 64, "walk_and_talk");
	strcpy_s(&(sParam0->f_8), 64, "WALK_AND_TALK_REQUEST");
	CAM::_LOAD_CAMERA_DATA_DICT(sParam0);
}

void func_821(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_862(0);
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

int func_822(int iParam0)
{
	if (!func_863(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_823(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_864(iParam0))
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

int func_824()
{
	return Global_1899515;
}

void func_825(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_865(*uParam0);
	iVar1 = func_866(*uParam0);
	iVar2 = func_867(*uParam0);
	iVar3 = func_189(*uParam0);
	iVar4 = func_868(*uParam0);
	iVar5 = func_869(*uParam0);
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
	iVar6 = func_870(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_870(iVar1, iVar0);
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
	func_871(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_826(int iParam0)
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

void func_827(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_872(iParam0, iParam1))
		{
			if (func_873(iParam0, iParam1))
			{
				if (func_874(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_875(iParam0);
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

void func_828(int iParam0, int iParam1, bool bParam2)
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

void func_829(int iParam0, bool bParam1)
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

void func_830(int iParam0, int iParam1)
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

struct<4> /*32*/ func_831(bool bParam0)
{
	return func_743(joaat("CHARACTER"), func_876(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_832(bool bParam0)
{
	int iVar0;

	iVar0 = func_840(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_743(joaat("CARRIED_WEAPONS"), func_831(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_743(joaat("CARRIED_WEAPONS"), func_831(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_743(joaat("CARRIED_WEAPONS"), func_831(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_833(int iParam0, bool bParam1)
{
	if (func_835(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_692(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_834(bool bParam0)
{
	int iVar0;

	iVar0 = func_840(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_743(joaat("EMOTE_ITEM"), func_831(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_743(joaat("EMOTE_ITEM"), func_831(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

int func_835(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_803(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_836(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_835(iParam0);
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

bool func_837(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_840(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_838(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_803(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_743(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_840(bParam6), &sVar0, false);
	return iVar4;
}

bool func_839(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_840(0);
	*uParam1 = { func_743(iParam0, func_832(0), iParam3, 0) /*4*/ };
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

int func_840(bool bParam0)
{
	if (func_355() == -1)
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

bool func_841(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_842(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_843(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_844(int iParam0)
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

int func_845(int iParam0)
{
	if (!func_435(iParam0))
	{
		return -1;
	}
	return func_877(iParam0);
}

int func_846(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_847(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_249(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_250(&(iParam1->f_6), 0, 1);
	}
	if (!func_249(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_781(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_878(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_249(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_850(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_879(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_880(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_491(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_879(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_493(iParam1->f_6, 0, 1);
				}
				else
				{
					func_493(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_848(int iParam0, int iParam1)
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

bool func_849(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_850(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_249(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	func_879(iParam0, 18, 0, 1);
	func_879(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_851(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_249(iParam0))
	{
		return false;
	}
	iVar0 = func_473(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_852(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_249(iParam0))
	{
		return false;
	}
	iVar0 = func_473(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_853(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

float func_854(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_136(iParam0);
	}
	if (GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE() > 0.833f)
	{
		return func_881(iParam0);
	}
	return func_136(iParam0);
}

float func_855(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_856()
{
	int iVar0;
	int iVar1;

	iVar0 = func_189(func_188());
	iVar1 = func_868(func_188());
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

Vector3 func_857(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0.0f, 0.0f, 0.0f) /*3*/ };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) /*3*/ };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) /*3*/ };
			vVar0.x = ((vVar3.x + vVar6.x) / 2.0f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2.0f);
			vVar0.f_2 = func_882(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_77(vVar0))
	{
	}
	return vVar0;
}

int func_858(bool bParam0, Vector3 vParam1, Vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	bParam0->f_4 = 0;
	switch (*bParam0)
	{
		case 0:
			func_883(bParam0);
			bParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(bParam0->f_1, 15);
			*bParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (bParam0->f_2 == 0)
				{
					*bParam0 = 3;
					return 1;
				}
				else
				{
					bParam0->f_4 = 1;
					*bParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*bParam0 = 3;
			}
			break;
		case 3:
			*bParam0 = 0;
			break;
	}
	return 0;
}

void func_859(bool bParam0)
{
	func_884(bParam0);
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

bool func_860(int iParam0, var uParam1)
{
	if (!func_885(iParam0))
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

void func_861(int iParam0, int iParam1, int iParam2)
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

void func_862(bool bParam0)
{
	if (bParam0)
	{
		func_886(4);
	}
	func_886(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

bool func_863(int iParam0)
{
	return iParam0 > -1;
}

bool func_864(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_865(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_713(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_866(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_867(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_868(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_869(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_870(int iParam0, int iParam1)
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

void func_871(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_887(uParam0, iParam6);
	func_888(uParam0, iParam5);
	func_889(uParam0, iParam4);
	func_890(uParam0, iParam3);
	func_891(uParam0, iParam2);
	func_892(uParam0, iParam1);
}

bool func_872(int iParam0, int iParam1)
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

bool func_873(int iParam0, int iParam1)
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

bool func_874(int iParam0, int iParam1)
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
	if (!func_872(iParam0, iVar0))
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

void func_875(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> /*32*/ func_876()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_877(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_893(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_878(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_763(iVar0, 2))
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
				func_894(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_879(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_880(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

var func_881(int iParam0)
{
	return iParam0->f_25;
}

float func_882(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_883(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
}

void func_884(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_885(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_886(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

void func_887(var uParam0, int iParam1)
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

void func_888(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 62914560;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_889(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_866(*uParam0);
	iVar1 = func_865(*uParam0);
	if (iParam1 < 1 || iParam1 > func_870(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 4063232;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_890(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 -= *uParam0 & 126976;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_891(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 4032;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_892(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 63;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

int func_893(int iParam0)
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

void func_894(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_674(iParam0, 1);
	func_675(iParam0, 1);
	func_676(iParam0, 128);
}

