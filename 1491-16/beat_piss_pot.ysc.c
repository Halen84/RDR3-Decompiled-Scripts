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
	Vector3 vLocal_14 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_17 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_20 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_23 = { 0.0f, 0.0f, 0.0f };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37[3] = { 0, 0, 0 };
	var uLocal_41 = 3;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	Vector3 vLocal_45[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	Vector3 vLocal_55[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	Vector3 vLocal_65 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_68 = { 0.0f, 0.0f, 0.0f };
	struct<12> /*96*/ sLocal_71[1];
	struct<193> /*1544*/ sLocal_84 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 1176256512;
	struct<32> /*256*/ sLocal_281[3];
	struct<6> /*48*/ sLocal_378 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	struct<21> /*168*/ sLocal_386[2];
	struct<52> /*416*/ sLocal_429[2];
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	var uLocal_536[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	var uLocal_548 = 15;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
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
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
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
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
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
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	int iLocal_687 = 0;
	var uLocal_688 = 0;
	bool bLocal_689 = false;
	char* sLocal_690 = NULL;
	float fLocal_691 = 0.0f;
	float fLocal_692 = 0.0f;
	float fLocal_693 = 0.0f;
	int iLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
	Vector3 vLocal_701 = { 0.0f, 0.0f, 0.0f };
	var uLocal_704 = 0;
	int iLocal_705 = 0;
	var uLocal_706 = 0;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#pragma endregion

void __EntryFunction__()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	vLocal_14 = { 5.0f, 5.0f, 15.0f /*3*/ };
	vLocal_17 = { 5.0f, 5.0f, 15.0f /*3*/ };
	iLocal_534 = -1;
	iLocal_535 = -1;
	sLocal_690 = "RE_PP";
	vLocal_701 = { 0.35f, 0.35f, 2.5f /*3*/ };
	sLocal_84.f_3 = func_1(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_689 = true;
	}
	if (!bLocal_689)
	{
		sLocal_84.f_161 = func_2(vScriptParam_0.z, 2);
		sLocal_84.f_3 = func_1(&vScriptParam_0);
		sLocal_84.f_43 = func_3();
		uLocal_543 = uLocal_543;
		func_4(&sLocal_84, 1);
		func_5();
		func_6(&(sLocal_84.f_5));
		func_7(&(sLocal_84.f_5), 1);
		func_8(&(sLocal_84.f_5), 1);
		func_9(&(sLocal_84.f_5), 1);
		func_10(&(sLocal_84.f_5), 1);
		func_11(&(sLocal_84.f_5), 1);
		func_12(&(sLocal_84.f_5), 0);
		func_13(&(sLocal_84.f_5), 1);
		func_14(&(sLocal_84.f_5), 1);
		func_15(&(sLocal_84.f_5), 1);
		func_16(&(sLocal_84.f_5), 1);
		sLocal_84.f_176 = 1;
	}
	while (true)
	{
		func_18(bLocal_689, 1306, 0);
		if (bLocal_689)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_546)
			{
				case 0:
					if (func_19())
					{
						iLocal_546 = 1;
					}
					break;
				case 1:
					if (func_20(&sLocal_84, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_21(&sLocal_84, &uLocal_706, &uLocal_704);
						func_22(&sLocal_84, &uLocal_706, &uLocal_704);
						func_23();
						func_24();
						func_25();
						if (VOLUME::DOES_VOLUME_EXIST(iLocal_26))
						{
							func_26(iLocal_26, 10);
							func_27(iLocal_26, 0, 0);
							iLocal_698 = func_28(iLocal_26, 0, 0, 0);
						}
						if (VOLUME::DOES_VOLUME_EXIST(sLocal_84.f_173))
						{
							func_29(sLocal_84.f_51, 4.0f, 0, 1, 1, 1, 0);
						}
						iLocal_546 = 3;
					}
					else if (sLocal_84.f_160)
					{
						func_17();
					}
					break;
				case 3:
					if (func_30())
					{
						if (func_31())
						{
							func_32();
							func_33(&uLocal_695, &uLocal_697, sLocal_84.f_51, 0.0f, 0.0f, 0.0f, vLocal_14, 1, 0, 1, 0, 0);
							iLocal_546 = 4;
						}
					}
					break;
				case 4:
					func_34();
					if (!func_36(&sLocal_84, &uLocal_37, iLocal_35, !func_35(iLocal_686, (1 << 10)), 1, 0, 1, 0))
					{
						func_17();
					}
					if (!sLocal_84.f_46)
					{
						func_37();
						if (sLocal_84.f_46 | func_38() | func_39())
						{
							sLocal_84.f_46 = 1;
							if (iLocal_685 != (1 << 14))
							{
								iLocal_545 = 2;
							}
							else
							{
								func_40(0);
								iLocal_545 = 5;
							}
						}
					}
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_0) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_378.f_0, false))
					{
						fLocal_691 = ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_378.f_0);
						fLocal_691 = fLocal_691;
					}
					if (func_41())
					{
						sLocal_84.f_50 = 1;
						func_17();
					}
					if (func_42(30))
					{
						if (func_43(&sLocal_84, &uLocal_37, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0))
						{
							func_17();
						}
					}
					else if (func_43(&sLocal_84, &uLocal_37, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_17();
					}
					break;
			}
			BUILTIN::WAIT(sLocal_84.f_158);
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

int func_3()
{
	return Global_1894899.f_2;
}

void func_4(var uParam0, bool bParam1)
{
	func_6(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_44("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_5()
{
	iLocal_36 = func_45(sLocal_84.f_3, 3, 0);
	if (func_42(30))
	{
		iLocal_36 = 1;
	}
	iLocal_35 = iLocal_36;
}

void func_6(var uParam0)
{
	func_9(uParam0, 0);
	func_10(uParam0, 0);
	func_7(uParam0, 1);
	func_16(uParam0, 1);
	func_46(uParam0, 0);
	func_11(uParam0, 1);
	func_47(uParam0, 1, 1, 1);
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), 256);
	}
	else
	{
		func_49(&(uParam0->f_1), 256);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), 4);
	}
	else
	{
		func_49(&(uParam0->f_1), 4);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_49(&(uParam0->f_1), (1 << 14));
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_49(&(uParam0->f_1), (1 << 11));
	}
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 256);
	}
	else
	{
		func_48(iParam0, 256);
	}
}

void func_12(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), (1 << 10));
	}
	else
	{
		func_49(&(uParam0->f_1), (1 << 10));
	}
}

void func_13(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 8);
	}
	else
	{
		func_48(iParam0, 8);
	}
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 32);
	}
	else
	{
		func_48(iParam0, 32);
	}
}

void func_15(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), 8);
	}
	else
	{
		func_49(&(uParam0->f_1), 8);
	}
}

void func_16(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, 16);
	}
	else
	{
		func_48(iParam0, (1 << 26));
		func_48(iParam0, 16);
	}
}

void func_17()
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_699))
	{
		VOLUME::DELETE_VOLUME(iLocal_699);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_700))
	{
		VOLUME::DELETE_VOLUME(iLocal_700);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_26))
	{
		VOLUME::DELETE_VOLUME(iLocal_26);
	}
	if (func_50(iLocal_27))
	{
		func_51(iLocal_27, 1);
	}
	if (func_50(iLocal_28))
	{
		func_51(iLocal_28, 1);
	}
	if (func_52(uLocal_37[0], 0, 1))
	{
		TASK::TASK_START_SCENARIO_IN_PLACE_HASH(uLocal_37[0], joaat("WORLD_HUMAN_FAN"), -1, true, 0, -1.0f, false);
		PED::SET_PED_KEEP_TASK(uLocal_37[0], true);
		func_53(uLocal_37[0], 1088421888, 1, 1);
		PED::_SET_REMOVE_PED_NETWORKED(uLocal_37[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_37[0]));
		if (func_52(uLocal_37[1], 0, 1))
		{
			TASK::TASK_FLEE_PED(uLocal_37[1], Global_35, 6, 256, -1.0f, -1, 0);
			PED::SET_PED_KEEP_TASK(uLocal_37[1], true);
			func_53(uLocal_37[1], 1088421888, 1, 1);
			PED::_SET_REMOVE_PED_NETWORKED(uLocal_37[1], -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_37[1]));
		}
		if (func_52(uLocal_37[2], 0, 1))
		{
			TASK::TASK_FLEE_PED(uLocal_37[2], Global_35, 6, 256, -1.0f, -1, 0);
			PED::SET_PED_KEEP_TASK(uLocal_37[2], true);
			func_53(uLocal_37[2], 1088421888, 1, 1);
			PED::_SET_REMOVE_PED_NETWORKED(uLocal_37[2], -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_37[2]));
		}
		sLocal_84.f_50 = 1;
	}
	func_54(&sLocal_84, &uLocal_37, &uLocal_41, iLocal_35, uLocal_706, uLocal_704, 0, 1, 0, 1);
	func_55();
	func_56(&uLocal_695, &uLocal_697);
	func_56(&uLocal_696, &iLocal_698);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(sLocal_71[0 /*12*/].f_8));
	if (iLocal_687 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_687);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_18(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_57(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Stack.Invoke(iParam1);
		}
	}
}

bool func_19()
{
	int iVar0;

	iVar0 = 1;
	switch (iLocal_544)
	{
		case 0:
			if (func_58(&sLocal_84))
			{
				func_59();
				func_60();
				func_61();
				func_62();
				func_63(&sLocal_71);
				sLocal_378.f_0 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_378.f_4, 0, "PBL_NORMAL", false, true);
				sLocal_378.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_378.f_5, 0, "PBL_NORMAL", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(sLocal_378.f_0);
				ANIMSCENE::LOAD_ANIM_SCENE(sLocal_378.f_1);
				iLocal_544 = 1;
			}
			break;
		case 1:
			if (!func_64(&uLocal_543, sLocal_690))
			{
				return false;
			}
			if (!func_65(&sLocal_71))
			{
				return false;
			}
			if (!func_66(&sLocal_281))
			{
				return false;
			}
			if (!func_67())
			{
				return false;
			}
			iVar0 = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_378.f_4))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_378.f_0, true, false))
				{
					iVar0 = 0;
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_378.f_5))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_378.f_1, true, false))
				{
					iVar0 = 0;
				}
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(sLocal_378.f_0, false))
			{
				iVar0 = 0;
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(sLocal_378.f_1, false))
			{
				iVar0 = 0;
			}
			if (iVar0 == 0)
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_20(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam6 || func_68(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_69(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7.0f;
				if (func_70(uParam0->f_3, 1))
				{
					fVar0 = 20.0f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, (1 << 21));
			}
			if (iParam5 == 1)
			{
				func_71(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5.0f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_72(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_21(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 0;
			*uParam2 = 2;
			break;
	}
}

void func_22(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 0:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2663.13f, -1213.915f, 53.3178f, 0.0f, 0.0f, 0.0f, 83.7422f, 13.0435f, 6.4911f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2665.778f, -1178.708f, 52.8252f, 0.0f, 0.0f, 0.0f, 11.4248f, 60.5283f, 7.5828f);
					break;
				case 1:
					uParam0->f_173 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2514.995f, -1252.154f, 51.1361f, 0.0f, 0.0f, 0.0f, 53.7495f, 43.0997f, 8.0363f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2466.635f, -1254.307f, 47.8598f, 0.0f, 0.0f, -15.0381f, 54.4846f, 26.8234f, 14.8605f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2548.249f, -1261.118f, 52.2334f, 0.0f, 0.0f, 0.0f, 14.0436f, 24.2246f, 8.8268f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2498.64f, -1221.029f, 50.3406f, 0.0f, 0.0f, 0.0f, 21.0024f, 20.4929f, 6.4938f);
					break;
				case 2:
					uParam0->f_173 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2869.837f, -1198.849f, 47.0872f, 0.0f, 0.0f, 5.0134f, 13.3964f, 66.7883f, 4.7158f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2880.193f, -1243.177f, 47.985f, 0.0f, 0.0f, -19.2557f, 42.4481f, 39.6014f, 7.6006f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2889.204f, -1225.71f, 47.4091f, 0.0f, 0.0f, 5.3433f, 25.7292f, 9.3016f, 5.2172f);
					break;
			}
			break;
	}
}

void func_23()
{
	switch (func_3())
	{
		case 38:
			break;
		case 5:
			switch (sLocal_84.f_51.f_4)
			{
				case 0:
					if (iLocal_35 == 0)
					{
						sLocal_84.f_51.f_3 = 2.736f;
						sLocal_281[0 /*32*/].f_6 = { 2663.406f, -1218.514f, 56.735f /*3*/ };
						sLocal_281[0 /*32*/].f_9 = 0.912f;
						vLocal_65 = { 2658.072f, -1219.6f, 56.66819f /*3*/ };
						vLocal_68 = { 2658.116f, -1225.227f, 56.71788f /*3*/ };
						vLocal_14 = { 5.0f, 5.0f, 9.0f /*3*/ };
						vLocal_17 = { 10.948f, 2.102f, 4.703f /*3*/ };
						vLocal_20 = { 2662.256f, -1219.119f, 58.733f /*3*/ };
						vLocal_23 = { 0.0f, 0.0f, 0.0f /*3*/ };
						iLocal_27 = 1059692064;
						iLocal_28 = -359893753;
						func_73(iLocal_27, 1);
						func_73(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						vLocal_45[2 /*3*/] = { 2661.37f, -1209.022f, 52.33669f /*3*/ };
						vLocal_55[2 /*3*/] = { 2660.332f, -1149.55f, 49.85461f /*3*/ };
						sLocal_281[2 /*32*/].f_6 = { sLocal_84.f_51 /*3*/ };
					}
					else if (iLocal_35 == 1)
					{
						sLocal_84.f_51.f_3 = -69.02f;
						sLocal_281[0 /*32*/].f_6 = { 2662.974f, -1218.56f, 56.735f /*3*/ };
						sLocal_281[0 /*32*/].f_9 = 6.544f;
						vLocal_65 = { 2658.072f, -1219.6f, 56.66819f /*3*/ };
						vLocal_68 = { 2658.116f, -1225.227f, 56.71788f /*3*/ };
						vLocal_14 = { 5.0f, 5.0f, 9.0f /*3*/ };
						vLocal_17 = { 10.948f, 2.102f, 4.703f /*3*/ };
						vLocal_20 = { 2662.256f, -1219.119f, 58.733f /*3*/ };
						vLocal_23 = { 0.0f, 0.0f, 0.0f /*3*/ };
						iLocal_27 = 1059692064;
						iLocal_28 = -359893753;
						func_73(iLocal_27, 1);
						func_73(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						sLocal_281[2 /*32*/].f_6 = { sLocal_84.f_51 /*3*/ };
						sLocal_281[1 /*32*/].f_6 = { sLocal_281[2 /*32*/].f_6 + Vector(0.0f, 0.0f, 1.0f) /*3*/ };
						vLocal_45[1 /*3*/] = { 2676.668f, -1217.01f, 52.18956f /*3*/ };
						vLocal_45[2 /*3*/] = { 2672.237f, -1218.652f, 52.30123f /*3*/ };
						vLocal_55[1 /*3*/] = { 2713.988f, -1205.209f, 50.74175f /*3*/ };
						vLocal_55[2 /*3*/] = { 2756.561f, -1247.488f, 48.49338f /*3*/ };
					}
					else if (iLocal_35 == 2)
					{
						sLocal_84.f_51.f_3 = -47.714f;
						sLocal_281[0 /*32*/].f_6 = { 2663.258f, -1218.545f, 56.735f /*3*/ };
						sLocal_281[0 /*32*/].f_9 = 0.406f;
						vLocal_65 = { 2658.072f, -1219.6f, 56.66819f /*3*/ };
						vLocal_68 = { 2658.116f, -1225.227f, 56.71788f /*3*/ };
						vLocal_14 = { 5.0f, 5.0f, 9.0f /*3*/ };
						vLocal_17 = { 10.948f, 2.102f, 4.703f /*3*/ };
						vLocal_20 = { 2662.256f, -1219.119f, 58.733f /*3*/ };
						vLocal_23 = { 0.0f, 0.0f, 0.0f /*3*/ };
						iLocal_27 = 1059692064;
						iLocal_28 = -359893753;
						func_73(iLocal_27, 1);
						func_73(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						sLocal_281[2 /*32*/].f_6 = { sLocal_84.f_51 /*3*/ };
						sLocal_281[1 /*32*/].f_6 = { sLocal_281[2 /*32*/].f_6 + Vector(0.0f, 0.0f, 1.0f) /*3*/ };
						vLocal_45[2 /*3*/] = { 2654.091f, -1217.198f, 52.30483f /*3*/ };
						vLocal_45[1 /*3*/] = { 2678.891f, -1217.977f, 52.10874f /*3*/ };
						vLocal_55[2 /*3*/] = { 2592.1f, -1175.982f, 52.3105f /*3*/ };
						vLocal_55[1 /*3*/] = { 2738.177f, -1247.727f, 48.83985f /*3*/ };
					}
					break;
				case 1:
					if (iLocal_35 == 0)
					{
						sLocal_84.f_51.f_3 = 9.687f;
						sLocal_281[0 /*32*/].f_6 = { 2497.502f, -1270.647f, 53.234f /*3*/ };
						sLocal_281[0 /*32*/].f_9 = 7.738f;
						vLocal_65 = { 2492.632f, -1270.9f, 53.3694f /*3*/ };
						vLocal_68 = { 2493.313f, -1272.858f, 54.409f /*3*/ };
						vLocal_14 = { 5.0f, 5.0f, 9.0f /*3*/ };
						vLocal_17 = { 13.869f, 1.489f, 3.65f /*3*/ };
						vLocal_20 = { 2494.406f, -1271.045f, 54.879f /*3*/ };
						vLocal_23 = { 0.0f, 0.0f, 0.0f /*3*/ };
						iLocal_27 = 1949746976;
						iLocal_28 = -1049337434;
						func_73(iLocal_27, 1);
						func_73(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						sLocal_281[2 /*32*/].f_6 = { sLocal_84.f_51 /*3*/ };
						vLocal_45[2 /*3*/] = { 2488.745f, -1256.881f, 48.20708f /*3*/ };
						vLocal_55[2 /*3*/] = { 2421.722f, -1239.377f, 44.7325f /*3*/ };
					}
					else if (iLocal_35 == 1)
					{
						sLocal_84.f_51.f_3 = -67.839f;
						sLocal_281[0 /*32*/].f_6 = { 2497.154f, -1270.702f, 53.234f /*3*/ };
						sLocal_281[0 /*32*/].f_9 = 6.142f;
						vLocal_65 = { 2492.751f, -1272.804f, 53.41405f /*3*/ };
						vLocal_68 = { 2493.313f, -1272.858f, 54.409f /*3*/ };
						vLocal_14 = { 5.0f, 5.0f, 9.0f /*3*/ };
						vLocal_17 = { 13.869f, 1.489f, 3.65f /*3*/ };
						vLocal_20 = { 2494.406f, -1271.045f, 54.879f /*3*/ };
						vLocal_23 = { 0.0f, 0.0f, 0.0f /*3*/ };
						iLocal_27 = 1949746976;
						iLocal_28 = -1049337434;
						func_73(iLocal_27, 1);
						func_73(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						sLocal_281[2 /*32*/].f_6 = { sLocal_84.f_51 /*3*/ };
						sLocal_281[1 /*32*/].f_6 = { sLocal_281[2 /*32*/].f_6 + Vector(0.0f, 0.0f, 1.0f) /*3*/ };
						vLocal_45[1 /*3*/] = { 2597.994f, -1270.784f, 51.46727f /*3*/ };
						vLocal_45[2 /*3*/] = { 2595.68f, -1255.716f, 51.66747f /*3*/ };
						vLocal_55[2 /*3*/] = { 2417.642f, -1248.713f, 44.56108f /*3*/ };
						vLocal_55[1 /*3*/] = { 2597.095f, -1270.554f, 51.41447f /*3*/ };
					}
					else if (iLocal_35 == 2)
					{
						sLocal_84.f_51.f_3 = -50.887f;
						sLocal_281[0 /*32*/].f_6 = { 2497.154f, -1270.702f, 53.234f /*3*/ };
						sLocal_281[0 /*32*/].f_9 = 6.46f;
						vLocal_65 = { 2492.751f, -1272.804f, 53.41405f /*3*/ };
						vLocal_68 = { 2493.313f, -1272.858f, 54.409f /*3*/ };
						vLocal_14 = { 5.0f, 5.0f, 9.0f /*3*/ };
						vLocal_17 = { 13.869f, 1.489f, 3.65f /*3*/ };
						vLocal_20 = { 2494.406f, -1271.045f, 54.879f /*3*/ };
						vLocal_23 = { 0.0f, 0.0f, 0.0f /*3*/ };
						iLocal_27 = 1949746976;
						iLocal_28 = -1049337434;
						func_73(iLocal_27, 1);
						func_73(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						sLocal_281[2 /*32*/].f_6 = { sLocal_84.f_51 /*3*/ };
						sLocal_281[1 /*32*/].f_6 = { sLocal_281[2 /*32*/].f_6 + Vector(0.0f, 0.0f, 1.0f) /*3*/ };
						vLocal_45[2 /*3*/] = { 2486.505f, -1269.98f, 48.16777f /*3*/ };
						vLocal_45[1 /*3*/] = { 2510.891f, -1270.31f, 48.18351f /*3*/ };
						vLocal_55[2 /*3*/] = { 2417.642f, -1248.713f, 44.56108f /*3*/ };
						vLocal_55[1 /*3*/] = { 2597.095f, -1270.554f, 51.41447f /*3*/ };
					}
					break;
				case 2:
					if (iLocal_35 == 0)
					{
						sLocal_84.f_51.f_3 = -88.327f;
						sLocal_281[0 /*32*/].f_6 = { 2865.503f, -1211.614f, 49.518f /*3*/ };
						sLocal_281[0 /*32*/].f_9 = -84.269f;
						vLocal_65 = { 2864.197f, -1209.512f, 49.62901f /*3*/ };
						vLocal_68 = { 2861.269f, -1209.808f, 49.61028f /*3*/ };
						vLocal_14 = { 5.0f, 5.0f, 9.0f /*3*/ };
						vLocal_17 = { 2.264f, 11.188f, 3.147f /*3*/ };
						vLocal_20 = { 2864.895f, -1210.885f, 50.898f /*3*/ };
						vLocal_23 = { 0.0f, 0.0f, 4.351f /*3*/ };
						iLocal_27 = -1268973804;
						iLocal_28 = 1043141302;
						func_73(iLocal_27, 1);
						func_73(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						sLocal_281[2 /*32*/].f_6 = { sLocal_84.f_51 /*3*/ };
						vLocal_45[2 /*3*/] = { 2873.815f, -1210.418f, 45.04704f /*3*/ };
						vLocal_55[2 /*3*/] = { 2872.546f, -1181.935f, 44.92761f /*3*/ };
					}
					else if (iLocal_35 == 1)
					{
						sLocal_84.f_51.f_3 = -153.216f;
						sLocal_281[0 /*32*/].f_6 = { 2865.534f, -1211.583f, 49.518f /*3*/ };
						sLocal_281[0 /*32*/].f_9 = -76.422f;
						vLocal_65 = { 2864.426f, -1209.367f, 49.62704f /*3*/ };
						vLocal_68 = { 2861.269f, -1209.808f, 49.61028f /*3*/ };
						vLocal_14 = { 5.0f, 5.0f, 9.0f /*3*/ };
						vLocal_17 = { 2.264f, 11.188f, 3.147f /*3*/ };
						vLocal_20 = { 2864.895f, -1210.885f, 50.898f /*3*/ };
						vLocal_23 = { 0.0f, 0.0f, 4.351f /*3*/ };
						iLocal_27 = -1268973804;
						iLocal_28 = 1043141302;
						func_73(iLocal_27, 1);
						func_73(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						sLocal_281[2 /*32*/].f_6 = { sLocal_84.f_51 /*3*/ };
						sLocal_281[1 /*32*/].f_6 = { sLocal_281[2 /*32*/].f_6 + Vector(0.0f, 0.0f, 1.0f) /*3*/ };
						vLocal_45[2 /*3*/] = { 2865.652f, -1227.812f, 45.34529f /*3*/ };
						vLocal_45[1 /*3*/] = { 2860.442f, -1222.509f, 46.62189f /*3*/ };
						vLocal_55[2 /*3*/] = { 2830.709f, -1283.015f, 45.8672f /*3*/ };
						vLocal_55[1 /*3*/] = { 2815.199f, -1226.221f, 46.52655f /*3*/ };
					}
					else if (iLocal_35 == 2)
					{
						sLocal_84.f_51.f_3 = -137.648f;
						sLocal_281[0 /*32*/].f_6 = { 2865.522f, -1211.691f, 49.518f /*3*/ };
						sLocal_281[0 /*32*/].f_9 = -76.422f;
						vLocal_65 = { 2864.197f, -1209.512f, 49.62901f /*3*/ };
						vLocal_68 = { 2861.269f, -1209.808f, 49.61028f /*3*/ };
						vLocal_14 = { 5.0f, 5.0f, 9.0f /*3*/ };
						vLocal_17 = { 2.264f, 11.188f, 3.147f /*3*/ };
						vLocal_20 = { 2864.895f, -1210.885f, 50.898f /*3*/ };
						vLocal_23 = { 0.0f, 0.0f, 4.351f /*3*/ };
						iLocal_27 = -1268973804;
						iLocal_28 = 1043141302;
						func_73(iLocal_27, 1);
						func_73(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						sLocal_281[2 /*32*/].f_6 = { sLocal_84.f_51 /*3*/ };
						sLocal_281[1 /*32*/].f_6 = { sLocal_281[2 /*32*/].f_6 + Vector(0.0f, 0.0f, 1.0f) /*3*/ };
						vLocal_45[2 /*3*/] = { 2654.091f, -1217.198f, 52.30483f /*3*/ };
						vLocal_45[1 /*3*/] = { 2678.891f, -1217.977f, 52.10874f /*3*/ };
						vLocal_55[2 /*3*/] = { 2849.686f, -1079.653f, 44.31217f /*3*/ };
						vLocal_55[1 /*3*/] = { 2830.709f, -1283.015f, 45.8672f /*3*/ };
					}
					break;
			}
			break;
	}
}

void func_24()
{
	STREAMING::REQUEST_COLLISION_AT_COORD(sLocal_281[0 /*32*/].f_6);
	STREAMING::REQUEST_COLLISION_FOR_MODEL(sLocal_281[0 /*32*/].f_1);
}

void func_25()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;

	if (sLocal_84.f_51.f_5 == 2)
	{
		iVar0 = 1;
	}
	func_74(0, iVar0, &uVar1, &uVar2);
	sLocal_281[0 /*32*/].f_3 = uVar2;
	iVar3 = func_75(0, iVar0);
	if (iVar3 != -1)
	{
		sLocal_281[0 /*32*/].f_5 = uLocal_536[iVar3];
	}
	func_74(1, iVar0, &uVar1, &uVar2);
	sLocal_281[1 /*32*/].f_3 = uVar2;
	iVar3 = func_75(1, iVar0);
	if (iVar3 != -1)
	{
		sLocal_281[1 /*32*/].f_5 = uLocal_536[iVar3];
	}
	func_74(2, iVar0, &uVar1, &uVar2);
	sLocal_281[2 /*32*/].f_3 = uVar2;
	iVar3 = func_75(2, iVar0);
	if (iVar3 != -1)
	{
		sLocal_281[2 /*32*/].f_5 = uLocal_536[iVar3];
	}
}

void func_26(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = (1 << 9);
	if (iParam1 & 1 != 0)
	{
		iVar0 |= (1 << 19);
	}
	if (iParam1 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam1 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam1 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam1 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

void func_27(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = (1 << 20);
	if (bParam1)
	{
		iVar0 |= (1 << 17);
	}
	if (bParam2)
	{
		iVar0 |= (1 << 19);
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

int func_28(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return iVar0;
	}
	func_76(iParam0, bParam2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 2);
	iVar0 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iParam0, bParam2, 15);
	return iVar0;
}

void func_29(Vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

bool func_30()
{
	switch (iLocal_547)
	{
		case 0:
			if (!func_77(&sLocal_84, &uLocal_548, &sLocal_281, 0, 1, 1, 0, -1))
			{
				func_17();
			}
			iLocal_547 = 1;
			break;
		case 1:
			if (!func_78(&uLocal_548, &sLocal_281, &uLocal_37, 1, 1, 0, -1))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_31()
{
	if (!func_35(iLocal_686, (1 << 11)) && func_52(uLocal_37[0], 0, 1))
	{
		func_79(uLocal_37[0], 1);
		func_80(uLocal_37[0], sLocal_281[0 /*32*/].f_6, sLocal_281[0 /*32*/].f_9, 2, (1 << 30));
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_281[0 /*32*/].f_23)))
		{
			func_81(uLocal_37[0], &(sLocal_281[0 /*32*/].f_23), 0);
		}
		PED::SET_PED_CONFIG_FLAG(uLocal_37[0], 178, false);
		if (func_52(uLocal_37[2], 0, 1))
		{
			PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(uLocal_37[0], func_82(), uLocal_37[2], -1, 4);
		}
		sLocal_84.f_98[0] = func_83(uLocal_37[0], 1, 1);
		func_84(&iLocal_686, (1 << 11));
		if (sLocal_84.f_51.f_4 == 1)
		{
			if (func_50(iLocal_27))
			{
				func_85(iLocal_27, 0, -1.0f, 1, 0, 0.0f, 0, 0);
			}
			if (func_50(iLocal_28))
			{
				func_85(iLocal_28, 0, 1.0f, 1, 0, 0.0f, 0, 0);
			}
		}
	}
	if (!func_35(iLocal_686, (1 << 13)) && func_52(uLocal_37[2], 0, 1))
	{
		ENTITY::SET_ENTITY_HEADING(uLocal_37[2], sLocal_84.f_51.f_3);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_281[2 /*32*/].f_23)))
		{
			func_81(uLocal_37[2], &(sLocal_281[2 /*32*/].f_23), 0);
		}
		PED::SET_PED_CONFIG_FLAG(uLocal_37[2], 178, false);
		sLocal_84.f_98[2] = func_83(uLocal_37[2], 1, 1);
		func_84(&iLocal_686, (1 << 13));
	}
	if (!func_35(iLocal_686, (1 << 12)) && (func_52(uLocal_37[1], 0, 1) || iLocal_35 == 0))
	{
		if (iLocal_35 == 1 || iLocal_35 == 2)
		{
			ENTITY::SET_ENTITY_HEADING(uLocal_37[1], sLocal_84.f_51.f_3);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sLocal_281[1 /*32*/].f_23)))
			{
				func_81(uLocal_37[1], &(sLocal_281[1 /*32*/].f_23), 0);
			}
			PED::SET_PED_CONFIG_FLAG(uLocal_37[1], 178, false);
			sLocal_84.f_98[1] = func_83(uLocal_37[1], 1, 1);
			func_84(&iLocal_686, (1 << 12));
		}
		else
		{
			PED::DELETE_PED(&(uLocal_37[1]));
			func_84(&iLocal_686, (1 << 12));
		}
	}
	if ((func_35(iLocal_686, (1 << 11)) && func_35(iLocal_686, (1 << 12))) && func_35(iLocal_686, (1 << 13)))
	{
		iLocal_699 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), sLocal_84.f_51, 0.0f, 0.0f, 0.0f, vLocal_701);
		iLocal_700 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), sLocal_84.f_51, 0.0f, 0.0f, 0.0f, vLocal_701);
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_699) && func_52(uLocal_37[1], 0, 1))
		{
			PED::_ATTACH_VOLUME_TO_ENTITY(iLocal_699, uLocal_37[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
		}
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_700) && func_52(uLocal_37[2], 0, 1))
		{
			PED::_ATTACH_VOLUME_TO_ENTITY(iLocal_700, uLocal_37[2], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
		}
		func_86(uLocal_37[2], &sLocal_84, 0);
		return true;
	}
	return false;
}

void func_32()
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_378.f_0, sLocal_84.f_51, 0.0f, 0.0f, sLocal_84.f_51.f_3, 2);
	if (iLocal_35 == 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_378.f_0, "PED_MALE_B", uLocal_37[2], 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_378.f_0, "PED_MALE_A", uLocal_37[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_378.f_0, "PED_MALE_B", uLocal_37[2], 0);
	}
	sLocal_71[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(sLocal_71[0 /*12*/].f_7, sLocal_281[0 /*32*/].f_6 + Vector(0.0f, 0.25f, 0.25f), true, true, false, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_378.f_1, sLocal_281[0 /*32*/].f_6, 0.0f, 0.0f, sLocal_281[0 /*32*/].f_9, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_378.f_1, "PED_WOMAN", uLocal_37[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_378.f_1, "CHAMBER_POT", sLocal_71[0 /*12*/].f_8, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_378.f_4))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_378.f_0, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(sLocal_378.f_0);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_378.f_5))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_378.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(sLocal_378.f_1);
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_378.f_0, "ACTION", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_378.f_1, "ACTION", false, false);
}

void func_33(var uParam0, var uParam1, Vector3 vParam2, Vector3 vParam5, Vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_87(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_88(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_89(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_90(uParam0, vParam2, vParam5, vParam8, sParam15);
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

void func_34()
{
	if (!sLocal_84.f_48 && func_91(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		func_17();
	}
}

bool func_35(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_36(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_92(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_93(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & (1 << 14) != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_94(&(uParam0->f_5));
			}
			func_49(&(uParam0->f_5), (1 << 14));
		}
	}
	if (!uParam0->f_48 && !func_95(uParam0->f_3, (1 << 18)))
	{
		if (uParam0->f_5 & (1 << 11) != 0)
		{
			func_96(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_97(&(uParam0->f_121));
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
					func_98(uParam0, uParam0->f_193, 2.0f);
				}
			}
			break;
		case 2:
			if (!func_99(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_70(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				func_100(uParam0, (*uParam1)[0]);
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

void func_37()
{
	int iVar0;

	if (func_101(&uLocal_37, &(sLocal_84.f_5), &iLocal_685, &uLocal_688, 0, (3 - 1), 1))
	{
		if (iLocal_685 == 8)
		{
			iVar0 = func_102(Global_35, 0, 1, 0);
			if (iVar0 == joaat("WEAPON_LASSO") || iVar0 == joaat("WEAPON_UNARMED"))
			{
				func_103(&(sLocal_84.f_5), &iLocal_685);
				return;
			}
		}
		if (sLocal_84.f_5.f_10 == uLocal_37[1])
		{
			if (func_52(uLocal_37[1], 0, 1))
			{
				func_40(0);
				func_105(uLocal_37[1], Global_35, func_104("MALE_B_AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			}
			sLocal_84.f_46 = 1;
		}
		if (sLocal_84.f_5.f_10 == uLocal_37[2])
		{
			if (func_52(uLocal_37[2], 0, 1))
			{
				func_40(0);
				func_105(uLocal_37[2], Global_35, func_104("MALE_A_AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			}
			sLocal_84.f_46 = 1;
		}
		if (sLocal_84.f_5.f_10 == uLocal_37[0])
		{
			if (func_52(uLocal_37[0], 0, 1))
			{
				func_40(0);
				func_105(uLocal_37[0], Global_35, func_104("WOMAN_AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			}
			sLocal_84.f_46 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_37[1]))
	{
		if (PED::IS_PED_RAGDOLL(uLocal_37[1]) && func_106(uLocal_37[1], Global_35, 1, 1) < 5.0f)
		{
			sLocal_84.f_46 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_37[2]))
	{
		if (PED::IS_PED_RAGDOLL(uLocal_37[2]) && func_106(uLocal_37[1], Global_35, 1, 1) < 5.0f)
		{
			sLocal_84.f_46 = 1;
		}
	}
}

int func_38()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_52(uLocal_37[iVar0], 0, 1))
		{
			LAW::_0x21213B833EF4DAE7(PLAYER::GET_PLAYER_INDEX(), uLocal_37[iVar0], &iVar1);
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_39()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_52(uLocal_37[iVar0], 0, 1))
		{
			if (sLocal_84.f_98[iVar0] < 1.0f)
			{
				func_84(&iLocal_686, 16);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_40(bool bParam0)
{
	func_107(&uLocal_0);
	func_108(1, bParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	func_109();
}

bool func_41()
{
	if (iLocal_545 != 1 && iLocal_545 != 0)
	{
		func_110();
		func_111();
		func_112();
		func_113();
	}
	func_114();
	func_115();
	func_116();
	func_117();
	func_118();
	switch (iLocal_545)
	{
		case 0:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_378.f_0, true, false) && ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_378.f_1, true, false))
			{
				ANIMSCENE::START_ANIM_SCENE(sLocal_378.f_0);
				ANIMSCENE::START_ANIM_SCENE(sLocal_378.f_1);
				if (iLocal_35 != 0)
				{
					func_119(0);
					func_120(0, 1);
				}
				func_119(1);
				func_120(1, 1);
				iLocal_545 = 1;
			}
			break;
		case 1:
			if (!func_121())
			{
			}
			else
			{
				if (func_122(&sLocal_84, &uLocal_278, 3.0f, 1114636288, fLocal_693, 1350, 2.5f, 1065353216, 1, 0, 1, -1082130432, 0, 0, 1))
				{
					if (iLocal_35 != 0)
					{
						func_119(0);
						func_120(0, 1);
					}
					func_119(1);
					func_120(1, 1);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_378.f_0, "ACTION", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_378.f_1, "ACTION", true, false);
					iLocal_545 = 3;
				}
				Jump @476; // curOff = 291
				func_123();
				func_124();
				if (func_125())
				{
					EVENT::REMOVE_SHOCKING_EVENT(iLocal_687);
					iLocal_545 = 5;
				}
				Jump @476; // curOff = 321
				if (!func_35(iLocal_686, (1 << 15)))
				{
					func_84(&iLocal_686, (1 << 15));
					if (!func_35(iLocal_686, (1 << 10)))
					{
						func_126(&iLocal_686, 1);
					}
				}
				UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
				func_127();
				func_123();
				if (func_52(uLocal_37[1], 0, 1))
				{
					func_40(0);
					func_105(uLocal_37[1], Global_35, func_104("MALE_B_AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				sLocal_84.f_46 = 1;
				iLocal_545 = 5;
				Jump @476; // curOff = 455
				func_123();
				if (func_128())
				{
					return true;
				}
			}
			return false;
			default:
				break;
	}
}

bool func_42(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_129(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_43(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	Vector3 vVar1;

	fVar0 = 0.0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_130())
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
			else if (func_131(uParam0->f_3))
			{
				fVar0 = 250.0f;
			}
			else if (func_70(uParam0->f_3, (1 << 17)))
			{
				fVar0 = 70.0f;
				fVar0 += 10.0f;
			}
			else if (func_70(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215.0f;
				fVar0 += 20.0f;
				if (uParam0->f_48)
				{
					fVar0 -= 80.0f;
				}
			}
			else if (func_70(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_132(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 /*3*/ };
				if (func_132(Global_36, vVar1) > fVar0)
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

int func_44(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_133(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_134(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_133(sVar0, iParam1, 0, 0, 1, 1);
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_135(iParam0) % iParam1);
	}
	return (func_136(iParam0) % iParam1);
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_48(&(uParam0->f_1), 128);
	}
	else
	{
		func_49(&(uParam0->f_1), 128);
	}
}

void func_47(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_49(iParam0, (1 << 28));
	}
	else
	{
		func_48(iParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_49(iParam0, (1 << 30));
	}
	else
	{
		func_48(iParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_49(iParam0, (1 << 29));
	}
	else
	{
		func_48(iParam0, (1 << 29));
	}
}

void func_48(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

void func_49(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

bool func_50(int iParam0)
{
	return iParam0 != 0;
}

void func_51(int iParam0, int iParam1)
{
	func_85(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

bool func_52(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_137(iParam0, iParam1);
}

int func_53(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

void func_54(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_138(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_139(uParam0->f_3, (1 << 19));
		}
	}
	if (func_52(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_52((*uParam1)[iVar0], 0, 0))
			{
				func_140((*uParam1)[iVar0], bVar3);
				if (func_141(uParam0, uParam1[iVar0]))
				{
					func_142(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_52((*uParam1)[iVar0], 0, 1))
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
							func_144((*uParam1)[iVar0], (1 << 30), func_143(iVar0 < iVar2, uParam0->f_98[iVar0], -1.0f), iVar1, 0);
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
		func_145(uParam0);
	}
	func_146(uParam0);
	if (!uParam0->f_186)
	{
		func_92(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_147(uParam0->f_3, uParam0->f_185);
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
		func_148(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_55()
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_0))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(sLocal_378.f_0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(sLocal_378.f_1);
	}
}

void func_56(var uParam0, int iParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam0);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam0);
		VOLUME::DELETE_VOLUME(*uParam0);
	}
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(*iParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*iParam1, false);
	}
}

bool func_57(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_149(iVar0))
	{
		return false;
	}
	if (func_150(iVar0, 1) || func_150(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_58(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_151(uParam0->f_3);
	iVar1 = func_152(1);
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

void func_59()
{
	switch (func_3())
	{
		case 5:
			if (iLocal_35 == 0)
			{
				sLocal_281[0 /*32*/].f_1 = joaat("RE_PISSPOT_FEMALES_01");
				sLocal_281[0 /*32*/] = 5;
				sLocal_281[2 /*32*/].f_1 = joaat("RE_PISSPOT_MALES_01");
				sLocal_281[2 /*32*/] = 4;
				strcpy_s(&(sLocal_281[2 /*32*/].f_23), 64, "0923_A_M_M_Civ_Poor_White_AVOID_06");
			}
			else if (iLocal_35 == 1)
			{
				sLocal_281[0 /*32*/].f_1 = joaat("RE_PISSPOT_FEMALES_01");
				sLocal_281[0 /*32*/] = 5;
				strcpy_s(&(sLocal_281[0 /*32*/].f_23), 64, "0864_A_F_M_Civ_Poor_White_AVOID_02");
				sLocal_281[1 /*32*/].f_1 = joaat("RE_PISSPOT_MALES_01");
				sLocal_281[1 /*32*/] = 4;
				strcpy_s(&(sLocal_281[1 /*32*/].f_23), 64, "0901_A_M_M_Civ_Poor_White_AGGRESSIVE_01");
				sLocal_281[2 /*32*/].f_1 = joaat("RE_PISSPOT_MALES_01");
				sLocal_281[2 /*32*/] = 4;
				strcpy_s(&(sLocal_281[2 /*32*/].f_23), 64, "0904_A_M_M_Civ_Poor_White_AGGRESSIVE_04");
			}
			else if (iLocal_35 == 2)
			{
				sLocal_281[0 /*32*/].f_1 = joaat("RE_PISSPOT_FEMALES_01");
				sLocal_281[0 /*32*/] = 5;
				strcpy_s(&(sLocal_281[0 /*32*/].f_23), 64, "0873_A_F_M_Civ_White_TIMID_02");
				sLocal_281[1 /*32*/].f_1 = joaat("RE_PISSPOT_MALES_01");
				sLocal_281[1 /*32*/] = 4;
				strcpy_s(&(sLocal_281[1 /*32*/].f_23), 64, "0418_A_M_M_SclRoughTravellers_01_WHITE_01");
				sLocal_281[2 /*32*/].f_1 = joaat("RE_PISSPOT_MALES_01");
				sLocal_281[2 /*32*/] = 4;
				strcpy_s(&(sLocal_281[2 /*32*/].f_23), 64, "0050_A_M_M_BiVRoughTravellers_01_WHITE_01");
			}
			break;
		case 38:
			break;
	}
}

void func_60()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_153(&(sLocal_281[iVar0 /*32*/]));
		iVar0++;
	}
}

void func_61()
{
	if (iLocal_35 == 0)
	{
		sLocal_378.f_4 = "script@beat@town@pissPot@normalMale";
		sLocal_378.f_5 = "script@beat@town@pissPot@normalWoman";
	}
	else if (iLocal_35 == 1)
	{
		sLocal_378.f_4 = "script@beat@town@pissPot@purposefulBystanders";
		sLocal_378.f_5 = "script@beat@town@pissPot@purposefulWoman";
	}
	else if (iLocal_35 == 2)
	{
		sLocal_378.f_4 = "script@beat@town@pissPot@accidentalBystanders";
		sLocal_378.f_5 = "script@beat@town@pissPot@accidentalWoman";
	}
}

void func_62()
{
	sLocal_71[0 /*12*/].f_7 = joaat("P_CHAMBERPOT_POT");
}

void func_63(var uParam0)
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

bool func_64(var uParam0, char* sParam1)
{
	return true;
}

bool func_65(var uParam0)
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

bool func_66(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_154(iParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar4 = func_75(iVar1, iVar0);
			if (iVar4 == -1)
			{
				return false;
			}
			func_74(iVar1, iVar0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				if (!func_155(iVar2, iVar3, &(uLocal_536[iVar4])))
				{
					return false;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	return true;
}

int func_68(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> /*56*/ sParam4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (sParam4.f_6 > -1)
	{
		*uParam1 = { func_156(iParam0, sParam4.f_6) /*3*/ };
		uParam1->f_4 = sParam4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_157(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_95(iParam0, 128))
			{
				if (!func_158(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_159(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_160(&bVar4, iParam0, uVar2, uVar1) /*3*/ };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_161(*uParam1))
				{
					return func_162(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_163(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_2(sParam4.f_2, 8))
				{
					func_157(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_164(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_165(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_166(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
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
			if (func_95(iParam0, 128))
			{
				if (!func_167(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_162(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_159(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_164(uParam1))
					{
						return func_162(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_168(iParam0, sParam4.f_1, uParam1, sParam4, iParam14))
			{
				func_157(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_162(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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

bool func_69(var uParam0, int iParam1)
{
	if (func_70(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_170(iParam1, func_169(uParam0), &(uParam0->f_172)))
		{
			if (func_52(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_70(int iParam0, int iParam1)
{
	if (!func_171(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/] & iParam1 != 0;
}

void func_71(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_172(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, (float)iParam1, (float)iParam1, 5.0f, "Custom Sized Ambient Avoidance");
	}
	else if (func_70(uParam0->f_3, 1) && !func_70(uParam0->f_3, 32))
	{
		func_172(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 6.0f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_70(uParam0->f_3, 2) && !func_70(uParam0->f_3, 32))
	{
		func_172(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 5.0f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171, 2228255, (1 << 18), 0, -1, -1, uParam0->f_175);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_173(uParam0->f_171, 1);
	}
	if (func_70(uParam0->f_3, 1))
	{
		func_172(&(uParam0->f_174), uParam0->f_51, 0.0f, 0.0f, 0.0f, VOLUME::GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_174(uParam0->f_174, 0, (1 << 18), 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_171, iParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
	}
}

float func_72(Vector3 vParam0)
{
	Vector3 vVar0;

	vVar0 = { Global_36 - vParam0 /*3*/ };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

void func_73(int iParam0, int iParam1)
{
	func_85(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam2 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iLocal_35)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = 260897019;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = 1828290413;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = -2145160455;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = 39510090;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = -613577747;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = -899329072;
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_35)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = 108996907;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = 1913024510;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = -1921806981;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = -2070333690;
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_35)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = 1460043843;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = -598424688;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = 1369849696;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = 1581828227;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = -1204952337;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = -1178197665;
							break;
					}
					break;
			}
			break;
	}
}

int func_75(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 4;
				default:
					break;
			}
			break;
	}
	return -1;
}

void func_76(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam1)
	{
		iVar0 |= (1 << 19);
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

bool func_77(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, float fParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	Vector3 vVar3;
	Vector3 vVar6;

	if (!func_175(iParam2))
	{
		return false;
	}
	if (iParam6 < 0 || iParam6 >= *iParam2)
	{
		iParam6 = 0;
	}
	if (iParam7 < 0 || iParam7 >= *iParam2)
	{
		iParam7 = (*iParam2 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if ((iParam2[iVar0 /*32*/])->f_1 != 0)
		{
			if (bParam3 && !func_176(&((iParam2[iVar0 /*32*/])->f_22)))
			{
				vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_51, uParam0->f_51.f_3, (iParam2[iVar0 /*32*/])->f_6) /*3*/ };
				fVar1 = func_177((uParam0->f_51.f_3 + (iParam2[iVar0 /*32*/])->f_9));
			}
			else
			{
				vVar3 = { (iParam2[iVar0 /*32*/])->f_6 /*3*/ };
				fVar1 = func_177((iParam2[iVar0 /*32*/])->f_9);
			}
			if (!func_178(&((iParam2[iVar0 /*32*/])->f_22)))
			{
				func_179(&vVar3, 1, 10, 0);
			}
			if ((iParam2[iVar0 /*32*/])->f_12 != 0)
			{
				if (!(iParam2[iVar0 /*32*/])->f_19 && !func_176(&((iParam2[iVar0 /*32*/])->f_22)))
				{
					vVar6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_51, uParam0->f_51.f_3, (iParam2[iVar0 /*32*/])->f_15) /*3*/ };
					fVar2 = func_177((uParam0->f_51.f_3 + (iParam2[iVar0 /*32*/])->f_18));
					func_179(&vVar6, 1, 10, 0);
				}
				else
				{
					vVar6 = { (iParam2[iVar0 /*32*/])->f_15 /*3*/ };
					fVar2 = func_177((iParam2[iVar0 /*32*/])->f_18);
				}
				func_180(uParam1, iVar0 + 15, (iParam2[iVar0 /*32*/])->f_12, vVar6, fVar2, iParam4, fParam5, 0, 1, 0);
			}
			func_180(uParam1, iVar0, (iParam2[iVar0 /*32*/])->f_1, vVar3, fVar1, iParam4, fParam5, (iParam2[iVar0 /*32*/])->f_2, 1, (iParam2[iVar0 /*32*/])->f_5);
		}
		iVar0++;
	}
	return true;
}

bool func_78(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (*iParam1 != *uParam2)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= *iParam1)
	{
		iParam5 = 0;
	}
	if (iParam6 < 0 || iParam6 >= *iParam1)
	{
		iParam6 = (*iParam1 - 1);
	}
	if (func_181(uParam0, 1))
	{
		iVar0 = iParam5;
		while (iVar0 <= iParam6)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar0]) && (iParam1[iVar0 /*32*/])->f_1 != 0)
			{
				(*uParam2)[iVar0] = func_182(uParam0, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar0]))
				{
					if ((iParam1[iVar0 /*32*/])->f_12 != 0)
					{
						(iParam1[iVar0 /*32*/])->f_11 = func_182(uParam0, iVar0 + 15);
						func_183(&((iParam1[iVar0 /*32*/])->f_11), iParam1[iVar0 /*32*/], bParam3, 1);
						ENTITY::SET_ENTITY_HEALTH((iParam1[iVar0 /*32*/])->f_11, 400, 0);
						PED::_SET_RANDOM_OUTFIT_VARIATION((iParam1[iVar0 /*32*/])->f_11, true);
						PED::_EQUIP_META_PED_OUTFIT((iParam1[iVar0 /*32*/])->f_11, joaat("META_HORSE_SADDLE_ONLY"));
						PED::_UPDATE_PED_VARIATION((iParam1[iVar0 /*32*/])->f_11, true, true, true, true, false);
						if ((iParam1[iVar0 /*32*/])->f_13)
						{
							PED::SET_PED_ONTO_MOUNT((*uParam2)[iVar0], (iParam1[iVar0 /*32*/])->f_11, -1, true);
						}
						PED::SET_PED_CONFIG_FLAG((*uParam2)[iVar0], 307, true);
					}
					if ((iParam1[iVar0 /*32*/])->f_10)
					{
						PED::_0x0FB1BA7FF73B41E1((*uParam2)[iVar0], (iParam1[iVar0 /*32*/])->f_4, 0);
					}
					if (bParam4)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&((iParam1[iVar0 /*32*/])->f_23)))
						{
							func_81((*uParam2)[iVar0], &((iParam1[iVar0 /*32*/])->f_23), 0);
						}
					}
					if (func_184(&((iParam1[iVar0 /*32*/])->f_22)))
					{
						GRAPHICS::_ADD_BLOOD_POOLS_FOR_PED((*uParam2)[iVar0]);
					}
					func_183(uParam2[iVar0], iParam1[iVar0 /*32*/], bParam3, 0);
				}
			}
			iVar0++;
		}
		func_185(uParam0);
		return true;
	}
	return false;
}

void func_79(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
}

void func_80(int iParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_186(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_187(iParam0))
	{
		if (func_188(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_35(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 -= iParam5 & 4;
				func_80(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 -= iParam5 & 4;
				func_80(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_35(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_35(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_35(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_35(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_35(iParam5, 129))
	{
		if (func_35(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_35(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_35(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_35(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_187(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_35(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_35(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

void func_81(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_52(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

char* func_82()
{
	switch (iLocal_35)
	{
		case 0:
			return "";
		case 1:
			return "Default_Angry";
		case 2:
			return "Default_Panic";
		default:
			break;
	}
	return "";
}

float func_83(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_106(Global_35, iParam0, bParam1, bParam2);
}

void func_84(int iParam0, int iParam1)
{
	func_189(iParam0, iParam1);
}

void func_85(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_190(iParam0, 0, 0);
	if (func_191(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0.0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_192(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_193(iParam0, 1);
			}
			else
			{
				func_194(iParam0, 1);
			}
		}
		else
		{
			func_195(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_196())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_86(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_197(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_87(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_198());
	}
}

void func_88(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_89(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_198());
	}
}

void func_90(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

bool func_91(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_199(bParam1, bParam2, bParam3);
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

void func_92(var uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;

	vVar0 = { func_200(uParam0) /*3*/ };
	iVar3 = func_147(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_93(var uParam0, var uParam1)
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

void func_94(var uParam0)
{
	func_7(uParam0, 1);
	func_201(uParam0, 20);
}

bool func_95(int iParam0, int iParam1)
{
	if (!func_171(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_1 & iParam1 != 0;
}

void func_96(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_171(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_202())
	{
		func_203(1);
	}
	func_204(iParam2, uParam0->f_43);
	func_205(iParam2, 0, 0, 0, 0);
	if (func_206(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_138(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_207(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_97(var uParam0)
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

void func_98(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 & func_208())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_95(uParam0->f_3, (1 << 18)))
	{
		if (uParam0->f_5 & (1 << 11) != 0)
		{
			func_96(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_97(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_209(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_210(uParam0, bVar0);
		func_211(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432, 0, 90.0f, 0, uParam0->f_98[iParam1]);
		if (func_212(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_96(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_97(&(uParam0->f_121));
		}
	}
}

bool func_99(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30.0f;
	fVar1 = 150.0f;
	if (func_70(uParam2->f_3, 1))
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
			if (func_213())
			{
				fVar0 = 15.0f;
			}
		}
		if (func_214(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_91(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_214(uParam2, fVar1))
		{
			if (!func_215(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_216(uParam2->f_3, 2) && func_217(2))
		{
			return false;
		}
		if (func_70(iParam0, (1 << 22)) || func_70(iParam0, (1 << 25)))
		{
			if (func_218(1))
			{
				return false;
			}
		}
	}
	if (func_219(Global_35))
	{
		return false;
	}
	if (func_220(0, 1, 1) && !func_221(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_70(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_222(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_91(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_223())
		{
			return false;
		}
		iVar2 = func_224(func_3());
		if (func_225(iVar2))
		{
			if (func_226(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_227(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_228(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_100(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_229(uParam0->f_51))
	{
		func_230(uParam0->f_51, 0);
		fVar0 = func_231(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, func_198());
		bVar1 = func_143(!func_70(uParam0->f_3, 1), 20.0f, -1.0f);
		uParam0->f_51.f_11 = func_233(iVar2, func_232(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_101(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_234(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_235((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
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

int func_102(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_103(int iParam0, int iParam1)
{
	if (iParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		iParam0->f_8 = func_236();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_237(iParam0, 0);
	*iParam1 = 0;
	iParam0->f_16 = 0;
}

char* func_104(char* sParam0)
{
	int iVar0;

	if (iLocal_35 == 0)
	{
		iVar0 = 1;
	}
	else if (iLocal_35 == 1)
	{
		iVar0 = 2;
	}
	else if (iLocal_35 == 2)
	{
		iVar0 = 3;
	}
	switch (func_238())
	{
		case 0:
			return func_239("PISS", "NBX", sParam0, iVar0);
		default:
			break;
	}
	return "INVALID";
}

bool func_105(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_240(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

float func_106(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_107(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_108(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

void func_109()
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(4, true, false);
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar2 = func_241(iVar0);
		if (func_242(&sLocal_84, iVar2, 10.0f))
		{
			iVar1 = func_244(&(uLocal_37[iVar2]), &(sLocal_386[iVar0 /*21*/]), 8.0f, &(sLocal_429[iVar0 /*52*/]), &(sLocal_84.f_192), 0, 1, 0, 0, func_243(1, 0, 0) | 64, 0, 0, 2, 1, -1082130432, 0);
			if (iVar1 == -1)
			{
			}
			else if (iLocal_534 <= -1)
			{
				iLocal_534 = iVar1;
				iLocal_535 = iVar0;
			}
		}
		iVar0++;
	}
}

void func_111()
{
	func_245();
	switch (iLocal_35)
	{
		case 0:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[2], -526417022))
			{
				func_40(0);
				func_105(uLocal_37[2], uLocal_37[2], func_104("DUMP_REACT_C"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			}
			break;
		case 1:
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[1], 1285642699))
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_37[1]) || AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_37[2]))
				{
					PED::SET_PED_RESET_FLAG(uLocal_37[1], 290, true);
				}
			}
			break;
	}
}

void func_112()
{
	if (func_52(uLocal_37[2], 0, 1) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[2], -685797094))
	{
		func_246(&(uLocal_37[2]));
		func_84(&iLocal_686, (1 << 19));
		if (func_52(uLocal_37[1], 0, 1))
		{
			func_246(&(uLocal_37[1]));
		}
	}
}

void func_113()
{
	if (!func_35(iLocal_686, 8))
	{
		if (func_52(uLocal_37[2], 0, 1) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[2], joaat("DUMP")))
		{
			func_84(&iLocal_686, (1 << 16));
			iLocal_687 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_AMUSING"), uLocal_37[2], -1.0f, 15.0f, 15.0f, -1.0f, -1.0f, 180.0f, false, false, -1, -1);
			if ((!func_247(uLocal_37[0], BUILTIN::FLOOR(20.0f)) && !func_247(uLocal_37[2], BUILTIN::FLOOR(20.0f))) && (iLocal_35 == 0 || !func_247(uLocal_37[1], BUILTIN::FLOOR(20.0f))))
			{
				sLocal_84.f_45 = 0;
			}
			func_84(&iLocal_686, 8);
		}
	}
}

void func_114()
{
	float fVar0;
	Vector3 vVar1;
	bool bVar4;
	float fVar5;

	if (func_35(iLocal_686, 8) || func_35(iLocal_686, 32))
	{
		return;
	}
	bVar4 = PED::IS_PED_ON_MOUNT(Global_35);
	switch (iLocal_35)
	{
		case 0:
			if (bVar4)
			{
				fLocal_692 = 15.0f;
				fLocal_693 = 35.0f;
			}
			else
			{
				fLocal_692 = 12.0f;
				fLocal_693 = 15.0f;
			}
			break;
		case 1:
			if (bVar4)
			{
				fLocal_692 = 27.0f;
				fLocal_693 = 50.0f;
			}
			else
			{
				fLocal_692 = 12.0f;
				fLocal_693 = 50.0f;
			}
			break;
		case 2:
			if (bVar4)
			{
				fLocal_692 = 35.0f;
				fLocal_693 = 50.0f;
			}
			else
			{
				fLocal_692 = 15.0f;
				fLocal_693 = 50.0f;
			}
			break;
	}
	if ((!func_52(uLocal_37[1], 0, 1) || !func_52(uLocal_37[2], 0, 1)) || !func_52(uLocal_37[0], 0, 1))
	{
		return;
	}
	fVar5 = 1.0f;
	if (bVar4)
	{
		fVar5 = 2.0f;
	}
	vVar1 = { func_248(Global_35, fVar5) /*3*/ };
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, sLocal_84.f_51, true);
	if (fVar0 < fLocal_692 && func_249(uLocal_37[2], 1116471296, -1082130432, -1082130432, -1082130432))
	{
		func_84(&iLocal_686, 32);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_378.f_0, "PBL_QUICK_DUMP", true);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_378.f_1, "PBL_QUICK_DUMP", true);
	}
}

void func_115()
{
	if (func_35(iLocal_686, 256) || iLocal_35 == 0)
	{
		return;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_0) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_378.f_0, false))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_378.f_0, "PBL_QUICK_DUMP");
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_378.f_0, "PBL_QUICK_DUMP"))
		{
			func_126(&iLocal_686, 64);
		}
		func_84(&iLocal_686, 64);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_1) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_378.f_1, false))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_378.f_1, "PBL_QUICK_DUMP");
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_378.f_1, "PBL_QUICK_DUMP"))
		{
			func_126(&iLocal_686, 128);
		}
		func_84(&iLocal_686, 128);
	}
	if (func_35(iLocal_686, 64) && func_35(iLocal_686, 128))
	{
		func_84(&iLocal_686, 256);
	}
}

void func_116()
{
	if (func_35(iLocal_686, (1 << 16)))
	{
		func_250(&Global_35, 0, uLocal_37[2], 0, 0, 0, 0, 1);
	}
}

void func_117()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_37[2]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[2], joaat("SONARBLIP")))
	{
		func_251(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_37[2], 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_37[1]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[1], joaat("SONARBLIP")))
	{
		func_251(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_37[1], 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_37[0]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[0], joaat("SONARBLIP")))
	{
		func_251(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_37[0], 1);
	}
}

void func_118()
{
	if (!sLocal_84.f_45 && func_35(iLocal_686, (1 << 19)))
	{
		if (func_35(iLocal_686, (1 << 9)) || (!func_125() && func_252()))
		{
			sLocal_84.f_44 = 1;
			sLocal_84.f_45 = 1;
		}
	}
}

void func_119(int iParam0)
{
	func_254(&(sLocal_429[iParam0 /*52*/][0 /*17*/]), func_253(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	func_254(&(sLocal_429[iParam0 /*52*/][1 /*17*/]), func_253(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	func_254(&(sLocal_429[iParam0 /*52*/][2 /*17*/]), func_253(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 0, 0);
}

void func_120(int iParam0, bool bParam1)
{
	func_255(iParam0, 0);
	if (bParam1)
	{
		iLocal_534 = -1;
		iLocal_535 = -1;
	}
}

bool func_121()
{
	if (func_249(uLocal_37[2], 50.0f, -1082130432, -1082130432, -1082130432))
	{
		return true;
	}
	return false;
}

bool func_122(var uParam0, var uParam1, float fParam2, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;

	func_256(Global_35, uParam0->f_51, uParam1, 0.0f, 0, 0);
	fVar0 = 0.0f;
	if (func_257(uParam1, iParam5))
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
	if (func_258(uParam0, fParam2, 1114636288, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264, bParam14, 1))
	{
		return true;
	}
	return false;
}

void func_123()
{
	float fVar0;
	float fVar1;

	if (!func_35(iLocal_686, 1))
	{
		if (sLocal_84.f_46 || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[0], joaat("ENDS_IN_WALK")))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_1) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_378.f_1, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_378.f_1, "PED_WOMAN", uLocal_37[0]);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_378.f_1, "CHAMBER_POT", sLocal_71[0 /*12*/].f_8);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_1))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(sLocal_378.f_1);
			}
			if (!sLocal_84.f_46 || iLocal_685 == (1 << 11))
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_37[0], joaat("MOTIONSTATE_WALK"), false, 0, false);
			}
			PED::SET_PED_KEEP_TASK(uLocal_37[0], true);
			if (sLocal_84.f_46 && iLocal_685 != (1 << 11))
			{
				fVar0 = 2.0f;
			}
			else
			{
				fVar0 = 1.0f;
			}
			if (sLocal_84.f_51.f_4 == 1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_694);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, 2492.681f, -1270.89f, 53.3694f, fVar0, 20000, 40000.0f, 0.5f, 0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vLocal_65, fVar0, 20000, 40000.0f, 0.5f, 0);
				func_259(uLocal_37[0], &iLocal_694, 0, 0, 1, 1);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_37[0], vLocal_65, fVar0, 20000, 0.25f, 1, 40000.0f);
			}
			func_84(&iLocal_686, 1);
		}
	}
	else if (!func_35(iLocal_686, (1 << 10)))
	{
		if (func_260(vLocal_65, ENTITY::GET_ENTITY_COORDS(uLocal_37[0], true, false), 0.25f, 0))
		{
			func_84(&iLocal_686, (1 << 10));
			if (!func_161(vLocal_68))
			{
				if (sLocal_84.f_46)
				{
					fVar1 = 2.0f;
				}
				else
				{
					fVar1 = 1.0f;
				}
				TASK::TASK_GO_STRAIGHT_TO_COORD(uLocal_37[0], vLocal_68, fVar1, 20000, 40000.0f, 0.5f, 0);
			}
		}
	}
	else if (!func_35(iLocal_686, (1 << 14)))
	{
		if (func_260(vLocal_68, ENTITY::GET_ENTITY_COORDS(uLocal_37[0], true, false), 0.2f, 0))
		{
			func_84(&iLocal_686, (1 << 14));
			if (func_50(iLocal_27))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_27, 0.0f, false);
				OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(iLocal_27, 25.0f);
				OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iLocal_27, 5.0f);
				OBJECT::_0x1BC47A9DEDC8DF5D(iLocal_27, 0);
			}
			if (func_50(iLocal_28))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_28, 0.0f, false);
				OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(iLocal_28, 25.0f);
				OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iLocal_28, 5.0f);
				OBJECT::_0x1BC47A9DEDC8DF5D(iLocal_28, 0);
			}
			if (func_50(iLocal_27))
			{
				func_85(iLocal_27, 1, 0.0f, 1, 0, 3.0f, 0, 0);
			}
			if (func_50(iLocal_28))
			{
				func_85(iLocal_28, 1, 0.0f, 1, 0, 3.0f, 0, 0);
			}
		}
	}
}

void func_124()
{
	struct<5> /*40*/ sVar0;

	switch (iLocal_35)
	{
		case 0:
			if (!func_35(iLocal_686, 4))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[1], joaat("ENDS_IN_WALK")) || (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_0) || ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(sLocal_378.f_0, "PED_MALE_B")))
				{
					if (!func_261(&uLocal_29))
					{
						func_262(&uLocal_29);
					}
					PED::FORCE_PED_MOTION_STATE(uLocal_37[2], joaat("MOTIONSTATE_WALK"), false, 0, false);
					sVar0.f_3 = 1065353216;
					sVar0.f_4 = -1;
					sVar0.f_5 = 1048576000;
					sVar0.f_6 = 1193033728;
					sVar0 = { vLocal_55[2 /*3*/] /*3*/ };
					sVar0.f_4 = -1;
					sVar0.f_3 = 1.0f;
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_694);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_694);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_45[2 /*3*/], 1.0f, -1, 0.25f, 0, 40000.0f);
					TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &sVar0);
					TASK::TASK_FLEE_PED(0, Global_35, 0, 1, 500.0f, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_694);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_37[2], iLocal_694);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_694);
					PED::SET_PED_KEEP_TASK(uLocal_37[2], true);
					func_263(iLocal_699);
					func_263(iLocal_700);
					if (func_35(iLocal_686, 8))
					{
						PED::_SET_PED_DESIRED_LOCO_FOR_MODEL(uLocal_37[2], "DEFAULT");
						PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(uLocal_37[2], "piss_pot_b");
					}
					bLocal_34 = true;
					func_84(&iLocal_686, 4);
				}
			}
			break;
		case 1:
			func_264();
			break;
		case 2:
			func_264();
			break;
	}
}

bool func_125()
{
	if (iLocal_35 == 0)
	{
		if (func_35(iLocal_686, 1) && func_35(iLocal_686, 4))
		{
			return true;
		}
	}
	else if ((func_35(iLocal_686, 1) && func_35(iLocal_686, 4)) && func_35(iLocal_686, 2))
	{
		return true;
	}
	return false;
}

void func_126(int iParam0, int iParam1)
{
	func_265(iParam0, iParam1);
}

void func_127()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_52(uLocal_37[iVar0], 0, 1))
		{
			if (iVar0 == 0)
			{
				func_123();
			}
			else
			{
				if (func_35(iLocal_686, 16) && !ENTITY::DOES_ENTITY_EXIST(sLocal_84.f_5.f_10))
				{
					TASK::TASK_FLEE_PED(uLocal_37[iVar0], Global_35, 0, 0, 500.0f, -1, 0);
				}
				else
				{
					TASK::TASK_FLEE_PED(uLocal_37[iVar0], Global_35, 4, 0, 500.0f, -1, 0);
				}
				PED::SET_PED_KEEP_TASK(uLocal_37[iVar0], true);
			}
		}
		iVar0++;
	}
	func_263(iLocal_699);
	func_263(iLocal_700);
	if (func_35(iLocal_686, 8))
	{
		if (func_52(uLocal_37[1], 0, 1))
		{
			PED::_SET_PED_DESIRED_LOCO_FOR_MODEL(uLocal_37[1], "DEFAULT");
			PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(uLocal_37[1], "piss_pot_a");
		}
		if (func_52(uLocal_37[2], 0, 1))
		{
			PED::_SET_PED_DESIRED_LOCO_FOR_MODEL(uLocal_37[2], "DEFAULT");
			PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(uLocal_37[2], "piss_pot_b");
		}
	}
}

bool func_128()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_52(uLocal_37[iVar0], 0, 1))
		{
			if (sLocal_84.f_98[iVar0] < 20.0f || func_249(uLocal_37[iVar0], 1116471296, -1082130432, -1082130432, -1082130432))
			{
				return false;
			}
			else if (!func_249(uLocal_37[iVar0], 1116471296, -1082130432, -1082130432, -1082130432))
			{
				PED::DELETE_PED(&(uLocal_37[iVar0]));
			}
		}
		iVar0++;
	}
	return true;
}

bool func_129(int iParam0)
{
	int iVar0;

	iVar0 = func_266(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_130()
{
	if (!func_267(Global_1395482.f_1))
	{
		return false;
	}
	return func_268(Global_1395482.f_1, 32);
}

bool func_131(int iParam0)
{
	if (func_70(iParam0, 1))
	{
		return false;
	}
	return (1 == func_269(iParam0) || 2 == func_269(iParam0));
}

float func_132(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_133(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

char* func_134(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_270(sParam1));
}

int func_135(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

int func_136(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/];
}

bool func_137(int iParam0, int iParam1)
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
	if (func_35(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_35(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_35(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_35(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

char* func_138(int iParam0)
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

void func_139(int iParam0, int iParam1)
{
	if (!func_171(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 |= iParam1;
}

void func_140(int iParam0, bool bParam1)
{
	if (func_52(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_53(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

bool func_141(var uParam0, var uParam1)
{
	if (func_70(uParam0->f_3, (1 << 24)))
	{
		if (func_271(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_142(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_143(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_144(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_52(iParam0, 0, 1)))
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
			fVar2 = func_143(fParam2 >= 0.0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25.0f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_272(&iParam0);
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

void func_145(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_273(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_274(uParam0);
	func_275(uParam0);
	func_276(uParam0);
	if (!func_277(uParam0))
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_51.f_11))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(uParam0->f_51.f_11);
		}
		func_230(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_278();
	}
	if (!func_279(uParam0->f_3) && !func_70(uParam0->f_3, 256))
	{
		func_280(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_263(uParam0->f_173);
	func_263(uParam0->f_172);
}

void func_146(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_147(int iParam0, int iParam1)
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

void func_148(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_281() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_149(int iParam0)
{
	if (((func_150(iParam0, 1) && func_150(iParam0, 2)) && func_150(iParam0, 8)) && func_150(iParam0, (1 << 9)))
	{
		return true;
	}
	return false;
}

bool func_150(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_151(int iParam0)
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

int func_152(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_282(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_283(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_283(), iVar3);
		if (func_284(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_153(var uParam0)
{
	func_285(&(uParam0->f_1));
	func_285(&(uParam0->f_12));
}

bool func_154(var uParam0)
{
	if (!func_286(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_286(uParam0->f_12))
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

bool func_155(int iParam0, int iParam1, var uParam2)
{
	if (!func_286(iParam0))
	{
		return false;
	}
	if (iParam1 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(*uParam2))
		{
			*uParam2 = PED::_REQUEST_METAPED_OUTFIT(iParam0, iParam1);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(*uParam2))
			{
				iParam1 = joaat("META_OUTFIT_DEFAULT");
			}
			return false;
		}
		else if (!PED::_HAS_METAPED_OUTFIT_LOADED(*uParam2))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_156(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (!func_171(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (func_287(iParam0) == 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	iVar0 = (func_288(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_157(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;

	if (func_70(iParam0, 32))
	{
		if (func_289(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_290(Global_35, &(uParam1->f_12)) /*3*/ };
				if (!func_161(vVar1))
				{
					*uParam1 = { vVar1 /*3*/ };
				}
			}
		}
	}
	if (bParam2)
	{
		func_291(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_231(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0.0f, 0.0f, 0.0f, fVar4, fVar4, fVar4, func_198());
		if (func_292(Global_1310750[iParam0 /*111*/], (1 << 25)))
		{
			func_233(iVar0, func_232(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_233(iVar0, func_232(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_70(iParam0, 1))
		{
			func_293(*uParam1 + Vector(1.0f, 0.0f, 0.0f), 25.0f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_294(iParam0);
}

bool func_158(int iParam0, var uParam1)
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
			func_295(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_95(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_296(iParam0));
		fVar1 = 60.0f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_296(iParam0));
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

void func_159(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_297(iParam0))
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
			if (!func_70(iParam0, 1))
			{
				if (func_95(iParam0, 2))
				{
				}
			}
			func_298(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 2:
			func_299(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 3:
			func_299(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7.0f;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		default:
			break;
	}
	if (func_131(iParam0))
	{
		*fParam2 = 40000.0f;
	}
}

Vector3 func_160(bool bParam0, int iParam1, var uParam2, var uParam3)
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
	while (iVar0 < func_287(iParam1))
	{
		if (!func_300(iParam1, iVar0))
		{
			vVar4 = { func_156(iParam1, iVar0) /*3*/ };
			if (!func_161(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_166(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_301(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 /*3*/ };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_161(vVar4))
	{
	}
	return vVar1;
}

bool func_161(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

int func_162(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
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

int func_163(int iParam0, Vector3 vParam1)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_287(iParam0))
	{
		vVar1 = { func_156(iParam0, iVar0) /*3*/ };
		if (func_260(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_164(var uParam0)
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

int func_165(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	vVar2 = { *uParam0 /*3*/ };
	func_256(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_257(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_161(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] /*3*/ };
				vVar8 = { MISC::GET_CLOSEST_POINT_ON_LINE(Global_36, vVar2, vVar5, true) /*3*/ };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35.0f * 35.0f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80.0f * 80.0f))
				{
					if (bParam4)
					{
						iVar1 = func_302(uParam0);
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
	return func_162(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_166(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_159(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_70(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_167(var uParam0, bool bParam1)
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

bool func_168(int iParam0, var uParam1, var uParam2, struct<7> /*56*/ sParam3, bool bParam10)
{
	if (func_303(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_304(iParam0, uParam2))
	{
		return false;
	}
	if (!func_305(sParam3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_306(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_169(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_170(int iParam0, int iParam1, var uParam2)
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

bool func_171(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_172(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_173(int iParam0, int iParam1)
{
	if (func_307(iParam0))
	{
		return;
	}
	if (func_308(iParam0) == iParam1)
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

void func_174(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 0);
	if (bParam3)
	{
		func_48(&iParam1, (1 << 13));
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, iParam0);
	}
}

bool func_175(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((iParam0[iVar0 /*32*/])->f_1 != 0)
		{
			iVar1++;
			if ((iParam0[iVar0 /*32*/])->f_12 != 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1 <= 15;
}

bool func_176(var uParam0)
{
	return func_35(*uParam0, 32);
}

float func_177(float fParam0)
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

bool func_178(var uParam0)
{
	return func_35(*uParam0, 1);
}

bool func_179(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_309(*uParam0, 0.0f, 0.0f, 0.0f))
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

void func_180(var uParam0, int iParam1, int iParam2, Vector3 vParam3, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	if (uParam0->f_136 < 0 || uParam0->f_136 > 15)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	(uParam0[uParam0->f_136 /*9*/])->f_1 = iParam2;
	(uParam0[uParam0->f_136 /*9*/])->f_2 = { vParam3 /*3*/ };
	(uParam0[uParam0->f_136 /*9*/])->f_5 = fParam6;
	(uParam0[uParam0->f_136 /*9*/])->f_7 = iParam1;
	(uParam0[uParam0->f_136 /*9*/])->f_8 = iParam11;
	if (bParam7)
	{
		func_49(&((uParam0[uParam0->f_136 /*9*/])->f_6), 4);
	}
	if (bParam8)
	{
		func_49(&((uParam0[uParam0->f_136 /*9*/])->f_6), 8);
	}
	if (iParam9 == 1)
	{
		func_49(&((uParam0[uParam0->f_136 /*9*/])->f_6), 1);
	}
	else if (iParam9 == 2)
	{
		func_49(&((uParam0[uParam0->f_136 /*9*/])->f_6), 2);
	}
	if (bParam10)
	{
		func_49(&((uParam0[uParam0->f_136 /*9*/])->f_6), 16);
	}
	uParam0->f_136++;
}

bool func_181(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*9*/]) && (uParam0[iVar0 /*9*/])->f_1 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED((uParam0[iVar0 /*9*/])->f_1))
			{
				bVar1 = func_2((uParam0[iVar0 /*9*/])->f_6, 4);
				bVar2 = func_2((uParam0[iVar0 /*9*/])->f_6, 8);
				bVar3 = func_2((uParam0[iVar0 /*9*/])->f_6, 16);
				if (func_2((uParam0[iVar0 /*9*/])->f_6, 1))
				{
					bVar4 = true;
				}
				else if (func_2((uParam0[iVar0 /*9*/])->f_6, 2))
				{
					bVar4 = 2;
				}
				else
				{
					bVar4 = false;
				}
				if ((uParam0[iVar0 /*9*/])->f_8 != 0 && PED::_HAS_METAPED_OUTFIT_LOADED((uParam0[iVar0 /*9*/])->f_8))
				{
					(*uParam0)[iVar0 /*9*/] = PED::_CREATE_METAPED_OUTFIT_PED((uParam0[iVar0 /*9*/])->f_8, (uParam0[iVar0 /*9*/])->f_2, (uParam0[iVar0 /*9*/])->f_5, bVar1, bVar2, true, false);
				}
				else
				{
					(*uParam0)[iVar0 /*9*/] = func_310((uParam0[iVar0 /*9*/])->f_1, (uParam0[iVar0 /*9*/])->f_2, (uParam0[iVar0 /*9*/])->f_5, bVar1, bVar2, bVar4, bVar3, 1, 1, 0, 0, 0, 0);
				}
				if (bParam1)
				{
					ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0 /*9*/], false);
				}
			}
			return false;
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_136)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*9*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0 /*9*/], true);
				ENTITY::_SET_ENTITY_FADE_IN((*uParam0)[iVar0 /*9*/]);
			}
			iVar0++;
		}
	}
	return true;
}

int func_182(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if ((uParam0[iVar0 /*9*/])->f_7 == iParam1)
		{
			return (*uParam0)[iVar0 /*9*/];
		}
		iVar0++;
	}
	return 0;
}

void func_183(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	Vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) /*3*/ };
		if (bParam2)
		{
			func_311(&vVar0, uParam1->f_22);
		}
		if (PED::IS_PED_HUMAN(*uParam0) && uParam1->f_10)
		{
			PED::_0x0FB1BA7FF73B41E1(*uParam0, uParam1->f_4, 0);
		}
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			EVENT::_0x9520175B35E2268D(*uParam0, true);
			if (func_187(*uParam0))
			{
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 48, true);
			}
		}
		if (!bParam3 && func_312(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(*uParam0, true);
			PED::SET_PED_TO_RAGDOLL(*uParam0, 1000, 1000, 1, false, false, 0);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, !func_313(&(uParam1->f_22)));
			func_315(*uParam0, func_314(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(*uParam0);
		}
		if (func_316(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		}
		func_318(*uParam0, !func_317(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 4, func_319(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 6, func_320(&(uParam1->f_22)));
		if (func_321(&(uParam1->f_22)))
		{
			func_322(*uParam0, 1);
		}
		if (func_313(&(uParam1->f_22)))
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
		}
	}
}

bool func_184(var uParam0)
{
	return func_35(*uParam0, 16);
}

void func_185(var uParam0)
{
	int iVar0;
	struct<9> /*72*/ sVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*(uParam0[iVar0 /*9*/]) = { sVar1 /*9*/ };
		iVar0++;
	}
	uParam0->f_136 = 0;
}

int func_186(var uParam0)
{
	return uParam0;
}

bool func_187(int iParam0)
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

bool func_188(int iParam0)
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

void func_189(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

int func_190(int iParam0, bool bParam1, bool bParam2)
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

bool func_191(int iParam0)
{
	if (func_50(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_192(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_191(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (func_191(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (func_191(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_195(int iParam0, bool bParam1)
{
	if (func_191(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_196()
{
	return true;
}

bool func_197(int iParam0, var uParam1)
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

char* func_198()
{
	return "unnamed";
}

int func_199(bool bParam0, bool bParam1, bool bParam2)
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

Vector3 func_200(var uParam0)
{
	return uParam0->f_51;
}

void func_201(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_202()
{
	return Global_1935436 == 2;
}

void func_203(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_204(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_70(iParam0, 2))
	{
		func_324(iParam0, func_323(iParam1));
	}
	else
	{
		func_325(iParam0, func_238());
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
	func_326(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_327(iParam0, 0);
	func_328(iParam0);
	func_329(1);
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
	if (!func_70(iParam0, 16))
	{
		func_205(iParam0, 0, 0, 0, 0);
	}
}

void func_205(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_330() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_171(iVar1) && !func_70(iVar1, iParam2)) && (!bParam3 || !func_221(iVar1))) && (!bParam4 || !func_331(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_332(iVar0);
			}
		}
		iVar0++;
	}
}

int func_206(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_207(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_292(Global_1310750[uParam0->f_3 /*111*/], (1 << 24)))
	{
		if (bParam2)
		{
			if (func_70(uParam0->f_3, (1 << 30)))
			{
				func_333(2, -1, 0, 0, 0);
			}
			else
			{
				func_333(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_333(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_334(1, uParam0->f_177))
				{
					func_335(16, uParam0->f_177);
					func_336(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_337(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_333(8, -1, 0, 0, 0);
	}
}

int func_208()
{
	if (func_338(Global_1935630.f_44))
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
		else if (func_339())
		{
			return 1;
		}
	}
	return 0;
}

bool func_209(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_210(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1.0f)
	{
		if (func_70(uParam0->f_3, (1 << 10)))
		{
			fVar0 = 95.0f;
		}
		else if (func_70(uParam0->f_3, (1 << 11)))
		{
			fVar0 = 80.0f;
		}
		else if (func_70(uParam0->f_3, (1 << 12)))
		{
			fVar0 = 65.0f;
		}
		else if (func_70(uParam0->f_3, (1 << 13)))
		{
			fVar0 = 55.0f;
		}
		else if (func_70(uParam0->f_3, (1 << 14)))
		{
			fVar0 = 30.0f;
		}
		else
		{
			fVar0 = 85.0f;
		}
		if (func_70(uParam0->f_3, 1))
		{
		}
		else if (func_70(uParam0->f_3, 2))
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

int func_211(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_340(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_341(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_342() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0.0f;
	}
	return 1;
}

bool func_212(var uParam0, int iParam1, float fParam2)
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
	func_97(uParam0);
	return true;
}

bool func_213()
{
	return (Global_1894899 & 1 != 0 && func_3() != -1);
}

bool func_214(var uParam0, float fParam1)
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

bool func_215(int iParam0)
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
	iVar0 = func_344(func_343());
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

bool func_216(int iParam0, int iParam1)
{
	return func_206(iParam0) & iParam1 != 0;
}

bool func_217(int iParam0)
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
	if (iParam0 & 1 == 1 && func_345(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_346(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_347(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_348(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_349(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_350(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_351(iVar3))
	{
		return true;
	}
	return false;
}

bool func_218(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_352(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_219(int iParam0)
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

bool func_220(int iParam0, bool bParam1, bool bParam2)
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
		if (func_353())
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
		iVar0 = func_354(Global_1898164.f_1[0 /*5*/]);
		if (func_355(iVar0) && func_356(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_357(Global_1898164.f_1[0 /*5*/]))
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

bool func_221(int iParam0)
{
	if (!func_171(iParam0))
	{
		return false;
	}
	if (func_358(64) && func_359(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_222(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_360(iVar0) | func_361(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_223()
{
	return Global_1894899 & 4 != 0;
}

int func_224(int iParam0)
{
	if (!func_362(iParam0))
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

bool func_225(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_226(Vector3 vParam0, int iParam3)
{
	if (!func_225(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_227(Vector3 vParam0)
{
	float fVar0;

	if (func_161(vParam0))
	{
		return false;
	}
	fVar0 = func_143(func_213(), 6.0f, 22.0f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, (1 << 14));
}

bool func_228(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_262(uParam0);
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
		func_262(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_261(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_363(uParam0, fParam2))
		{
			return true;
		}
		if (func_261(uParam0))
		{
			func_107(uParam0);
		}
	}
	return false;
}

bool func_229(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

void func_230(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_161(vParam0))
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
			if (func_260(vVar2, vParam0, 2.0f, 1))
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

float func_231(int iParam0)
{
	if (!func_171(iParam0))
	{
		return 0.0f;
	}
	if (!func_364(iParam0))
	{
		return 0.0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_232(int iParam0)
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

int func_233(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_293(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_234(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_235(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_365(iParam2, 1, iVar0);
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
			if (func_366(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_367(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_368(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_367(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_369(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_367(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_370(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_367(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_91(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & (1 << 19) == 0))
		{
			if (!iParam2->f_1 & (1 << 14) != 0)
			{
				*iParam3 = (1 << 14);
				func_367(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_371(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_372(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_367(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_373(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_367(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_374(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_367(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_374(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_367(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_375(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_367(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & (1 << 18) != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20.0f)
			{
				if (func_376(&iParam0, iParam2))
				{
					*iParam3 = (1 << 12);
					func_367(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_377(iParam2, 4000))
				{
					if (func_378(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) & func_379(iParam2, iParam0) && func_380(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_367(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4.0f)
			{
				if (func_378(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) & func_379(iParam2, iParam0) && func_380(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_367(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & (1 << 17) == 0)
						{
							if (func_381(iParam0, Global_1935630.f_41))
							{
								func_382();
								*iParam3 = 2;
								func_367(iParam0, iParam2, *iParam3);
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
						if (func_381(iParam0, Global_1935630.f_41))
						{
							func_382();
							*iParam3 = 2;
							func_367(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10.0f)
			{
				if (func_383(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_236() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_382();
						*iParam3 = 2;
						func_367(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & (1 << 17) == 0)
				{
					if (func_384())
					{
						if (func_381(iParam0, Global_1935630.f_42))
						{
							func_382();
							*iParam3 = 2;
							func_367(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & (1 << 10) != 0)
		{
			if (func_385(iParam2, iParam0))
			{
				*iParam3 = (1 << 10);
				func_367(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & (1 << 11) != 0)
			{
				if (func_386(iParam0, iParam1, iParam2))
				{
					*iParam3 = (1 << 11);
					func_367(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_387(iParam0, iParam2))
					{
						*iParam3 = (1 << 13);
						func_367(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_388(iParam0, iParam2))
				{
					*iParam3 = (1 << 15);
					func_367(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12.0f)
		{
			if (*iParam2 & (1 << 20) != 0)
			{
				if (func_389(iParam2, 4000))
				{
					if (func_390(&iParam0, iParam2))
					{
						*iParam3 = (1 << 9);
						func_367(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & (1 << 10) != 0)
			{
				if (func_391(iParam0, iParam2))
				{
					*iParam3 = (1 << 16);
					iParam2->f_4 = 0;
					func_367(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_392(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_367(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_236()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_237(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(iParam0, (1 << 27));
	}
	else
	{
		func_48(iParam0, (1 << 27));
	}
}

int func_238()
{
	return Global_1897952.f_41;
}

char* func_239(char* sParam0, char* sParam1, char* sParam2, int iParam3)
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
	return func_393(cVar0);
}

int func_240(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_213())
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
				if (func_83(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_106(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_262(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_394(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_396(func_395(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_241(int iParam0)
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

bool func_242(var uParam0, int iParam1, float fParam2)
{
	return func_397(uParam0, iParam1) <= fParam2;
}

int func_243(int iParam0, int iParam1, int iParam2)
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

int func_244(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_398(&iVar0);
	if (func_2(iVar0, 16) && !bParam15)
	{
		iParam9 |= (1 << 23);
	}
	iVar1 = func_399(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_2(iVar0, (1 << 27)))
	{
		func_400(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_401(558))
				{
					func_402(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_245()
{
	func_403();
	if (func_404())
	{
		if (func_35(iLocal_686, 8))
		{
			func_263(iLocal_699);
			func_263(iLocal_700);
			PED::_SET_PED_DESIRED_LOCO_FOR_MODEL(uLocal_37[2], "DEFAULT");
			PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(uLocal_37[2], "piss_pot_b");
		}
		func_84(&iLocal_686, (1 << 9));
		func_126(&iLocal_686, (1 << 16));
	}
	if (bLocal_34)
	{
		if (iLocal_35 != 0)
		{
			func_405(0);
		}
		func_405(1);
	}
	if ((func_35(iLocal_686, (1 << 16)) && func_52(uLocal_37[2], 0, 1)) && sLocal_84.f_98[2] > 30.0f)
	{
		func_126(&iLocal_686, (1 << 16));
	}
}

void func_246(var uParam0)
{
	if (func_406())
	{
		PED::_0x58D32261AE0F0843(*uParam0, 30226, 0.20517f, 0.046563f, 0.507389f, 0.241037f, 0.105917f, 0.964716f, "Pissing");
	}
	else
	{
		PED::_0x58D32261AE0F0843(*uParam0, 54802, -0.13956f, 0.026992f, 0.522096f, -0.17646f, 0.034832f, 0.983688f, "Pissing");
	}
	if (func_406())
	{
		PED::_0x58D32261AE0F0843(*uParam0, 14414, 0.087967f, 0.117107f, 0.48965f, 0.035033f, 0.843737f, 0.535608f, "Pissing");
	}
	else
	{
		PED::_0x58D32261AE0F0843(*uParam0, 54802, -0.238967f, -0.009972f, 0.453114f, -0.700396f, -0.680935f, 0.213934f, "Pissing");
	}
	if (func_406())
	{
		PED::_0x58D32261AE0F0843(*uParam0, 14414, 0.125488f, -0.053184f, 0.485976f, 0.391717f, -0.771753f, 0.50095f, "Vomit");
	}
	else
	{
		PED::_0x58D32261AE0F0843(*uParam0, 14283, -0.055569f, 0.019992f, 0.565456f, -0.998232f, 0.057524f, 0.014761f, "Vomit");
	}
	PED::APPLY_PED_DAMAGE_PACK(*uParam0, "PD_ANM_piss_pot", 0.0f, 1.0f);
}

bool func_247(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
		{
			if (func_407(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (float)iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_248(int iParam0, float fParam1)
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
	func_408(vVar6);
	vVar6 = { FloatToVector((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 /*3*/ };
	vVar3 = { vVar0 + vVar6 /*3*/ };
	return vVar3;
}

bool func_249(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0.0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_409(iParam0, Global_36, 1);
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

void func_250(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_84(&(sVar0.f_5), 1);
	}
	sVar0.f_13 = 0;
	sVar0.f_7 = iParam1;
	func_126(&(sVar0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*uParam0, &sVar0);
	}
}

void func_251(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam0, iParam1);
}

bool func_252()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_37[iLocal_705]) && !ENTITY::IS_ENTITY_DEAD(uLocal_37[iLocal_705]))
	{
		func_211(&(sLocal_84.f_121[iLocal_705 /*9*/]), 20.0f, 1082130432, 0, 90.0f, 1, sLocal_84.f_98[iLocal_705]);
		if (func_212(&(sLocal_84.f_121), sLocal_84.f_120, 2.0f))
		{
			func_97(&(sLocal_84.f_121));
			iVar0 = 1;
		}
	}
	iLocal_705++;
	if (iLocal_705 >= 3)
	{
		iLocal_705 = 0;
	}
	return iVar0;
}

char[] func_253(int iParam0)
{
	if (func_410(iParam0))
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

void func_254(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_411(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_412(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_413(iParam0->f_6, iParam0->f_5, 0);
			}
			func_414(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_415(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_255(int iParam0, bool bParam1)
{
	func_416(iParam0, 0, bParam1);
	func_416(iParam0, 1, bParam1);
	func_416(iParam0, 2, bParam1);
}

void func_256(int iParam0, Vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_143(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_306(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_236();
			iParam4->f_2 = func_409(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_306(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_236();
		iParam4->f_2 = func_409(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_257(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_236() - *uParam0) >= iParam1;
	}
	return false;
}

bool func_258(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_210(uParam0, bVar1);
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
	if (uParam0->f_178 & func_208())
	{
		bVar1 = true;
		fVar3 = func_143(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_211(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432, 1, 90.0f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_211(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432, 1, 90.0f, 0, 0);
		}
		if (func_212(&(uParam0->f_121), iParam4, fParam1))
		{
			func_97(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_147(uParam0->f_3, uParam0->f_185), 0);
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
						func_96(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_97(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_147(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_259(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_260(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

bool func_261(var uParam0)
{
	return func_417(*uParam0, 1);
}

void func_262(var uParam0)
{
	func_418(uParam0, 0.0f);
}

void func_263(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_264()
{
	struct<5> /*40*/ sVar0;
	struct<5> /*40*/ sVar7;

	if (!func_35(iLocal_686, 4))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[2], joaat("ENDS_IN_WALK")) || (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_0) || ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(sLocal_378.f_0, "PED_MALE_B")))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_0) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_378.f_0, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_378.f_0, "PED_MALE_B", uLocal_37[2]);
			}
			if (!func_261(&uLocal_29))
			{
				func_262(&uLocal_29);
			}
			PED::FORCE_PED_MOTION_STATE(uLocal_37[2], joaat("MOTIONSTATE_WALK"), false, 0, false);
			sVar0.f_3 = 1065353216;
			sVar0.f_4 = -1;
			sVar0.f_5 = 1048576000;
			sVar0.f_6 = 1193033728;
			sVar0 = { vLocal_55[2 /*3*/] /*3*/ };
			sVar0.f_4 = -1;
			sVar0.f_3 = 1.0f;
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_694);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_694);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_45[2 /*3*/], 1.0f, -1, 0.25f, 0, 40000.0f);
			TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &sVar0);
			TASK::TASK_FLEE_PED(0, Global_35, 0, 0, 500.0f, -1, 0);
			func_259(uLocal_37[2], &iLocal_694, 0, 0, 1, 1);
			if (func_35(iLocal_686, 8))
			{
				func_263(iLocal_700);
				PED::_SET_PED_DESIRED_LOCO_FOR_MODEL(uLocal_37[2], "DEFAULT");
				PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(uLocal_37[2], "piss_pot_b");
			}
			func_84(&iLocal_686, 4);
			bLocal_34 = true;
		}
	}
	if (!func_35(iLocal_686, 2))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[1], joaat("ENDS_IN_WALK")) || (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_0) || ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(sLocal_378.f_0, "PED_MALE_A")))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_378.f_0) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_378.f_0, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_378.f_0, "PED_MALE_A", uLocal_37[1]);
			}
			if (!func_261(&uLocal_29))
			{
				func_262(&uLocal_29);
			}
			PED::FORCE_PED_MOTION_STATE(uLocal_37[1], joaat("MOTIONSTATE_WALK"), false, 0, false);
			sVar7.f_3 = 1065353216;
			sVar7.f_4 = -1;
			sVar7.f_5 = 1048576000;
			sVar7.f_6 = 1193033728;
			sVar7 = { vLocal_55[1 /*3*/] /*3*/ };
			sVar7.f_4 = -1;
			sVar7.f_3 = 1.0f;
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_694);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_694);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_45[1 /*3*/], 1.0f, -1, 0.25f, 0, 40000.0f);
			TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &sVar7);
			TASK::TASK_FLEE_PED(0, Global_35, 0, 0, 500.0f, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_694);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_37[1], iLocal_694);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_694);
			if (func_35(iLocal_686, 8))
			{
				func_263(iLocal_699);
				PED::_SET_PED_DESIRED_LOCO_FOR_MODEL(uLocal_37[1], "DEFAULT");
				PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(uLocal_37[1], "piss_pot_a");
			}
			func_84(&iLocal_686, 2);
			bLocal_34 = true;
		}
	}
}

void func_265(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

int func_266(int iParam0)
{
	if (!func_357(iParam0))
	{
		return -1;
	}
	return func_419(iParam0);
}

bool func_267(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_268(int iParam0, int iParam1)
{
	if (!func_267(iParam0))
	{
		return false;
	}
	return Global_1395482.f_2[iParam0] & iParam1 != 0;
}

int func_269(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

char* func_270(char* sParam0)
{
	return sParam0;
}

int func_271(int iParam0)
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

void func_272(int* iParam0)
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

void func_273(int iParam0)
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

void func_274(var uParam0)
{
	if (func_411(uParam0->f_162))
	{
		func_420(&(uParam0->f_162), 1, 1);
	}
	if (func_411(uParam0->f_163))
	{
		func_420(&(uParam0->f_163), 1, 1);
	}
	if (func_411(uParam0->f_164))
	{
		func_420(&(uParam0->f_164), 1, 1);
	}
	if (func_411(uParam0->f_165))
	{
		func_420(&(uParam0->f_165), 1, 1);
	}
}

void func_275(var uParam0)
{
	if (uParam0->f_170)
	{
		func_421();
	}
}

void func_276(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_422(32);
		func_280(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_277(var uParam0)
{
	if (func_423(uParam0) | uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_424(uParam0->f_3);
		func_207(uParam0, 0, 1);
		func_425(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_426(0, 0);
		return true;
	}
	return false;
}

void func_278()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_279(int iParam0)
{
	if (!func_171(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_280(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_269(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_281() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 += iVar0;
}

int func_281()
{
	return Global_1572887.f_12;
}

int func_282(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_265(&iVar1, (1 << 31));
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

int func_283()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_284(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_281() != -1)
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

void func_285(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_286(int iParam0)
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

int func_287(int iParam0)
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

int func_288(int iParam0)
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

bool func_289(int iParam0, int iParam1, var uParam2)
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

Vector3 func_290(int iParam0, var uParam1)
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
			if (!func_161(*(uParam1[iVar0 /*3*/])))
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

void func_291(var uParam0, bool bParam1)
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

bool func_292(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_293(Vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_161(vParam0))
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
		if (func_229(vParam0))
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
	func_427(iVar0, bParam8);
	return iVar0;
}

void func_294(int iParam0)
{
	if (!func_171(iParam0))
	{
		return;
	}
	func_428(iParam0);
}

void func_295(var uParam0, Vector3 vParam1)
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

int func_296(int iParam0)
{
	if (func_95(iParam0, 2))
	{
		return 200;
	}
	if (func_95(iParam0, 4))
	{
		return 70;
	}
	if (func_95(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_297(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_70(iParam0, (1 << 17)))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_238() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_70(iParam0, 2);
		bVar1 = func_70(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_213())
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

void func_298(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_95(iParam3, (1 << 21)))
	{
		*fParam0 += 15.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_299(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_95(iParam3, 2))
	{
		*fParam0 += 60.0f;
		*fParam1 += 60.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110.0f));
	}
	else if (func_95(iParam3, (1 << 21)))
	{
		*fParam0 += 30.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_300(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_288(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_301(int iParam0, Vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_161(vParam1))
	{
		return false;
	}
	if (func_303(iParam0, vParam1))
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
	if (func_131(iParam0))
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

int func_302(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_161(uParam0->f_12[iVar0 /*3*/]))
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

bool func_303(int iParam0, Vector3 vParam1)
{
	int iVar0;

	if (!func_70(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_429(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_70(iParam0, (1 << 25)))
	{
		if (func_430(vParam1, 200.0f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_304(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_95(iParam0, 128))
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
	if (func_70(iParam0, 1) && !func_70(iParam0, 2))
	{
		if (func_70(iParam0, (1 << 12)) || func_70(iParam0, (1 << 11)))
		{
			if (func_431(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_305(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_432())
	{
		return false;
	}
	return true;
}

bool func_306(Vector3 vParam0, int iParam3)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) /*3*/ };
	return func_433(vVar0, vParam0) > func_433(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_307(int iParam0)
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

int func_308(int iParam0)
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

bool func_309(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_310(int iParam0, Vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_434(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_311(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0 = { *uParam0 /*3*/ };
	if (func_178(&uParam1))
	{
		return 1;
	}
	if (!func_179(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 /*3*/ };
	return 1;
}

bool func_312(var uParam0)
{
	return func_35(*uParam0, 4);
}

bool func_313(var uParam0)
{
	return func_35(*uParam0, 64);
}

bool func_314(var uParam0)
{
	return func_35(*uParam0, 8);
}

void func_315(int iParam0, bool bParam1, bool bParam2)
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

bool func_316(var uParam0)
{
	return func_35(*uParam0, 128);
}

bool func_317(var uParam0)
{
	return func_35(*uParam0, 256);
}

void func_318(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_319(var uParam0)
{
	return func_35(*uParam0, (1 << 9));
}

bool func_320(var uParam0)
{
	return func_35(*uParam0, (1 << 10));
}

bool func_321(var uParam0)
{
	return func_35(*uParam0, (1 << 11));
}

void func_322(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

int func_323(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_435(1);
	}
	else
	{
		iVar0 = func_436(iParam0);
	}
	return iVar0;
}

void func_324(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_437(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_438(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

void func_325(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_95(iParam0, (1 << 13)))
	{
		iVar0 = func_438(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_326(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_280(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_327(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_70(iParam0, (1 << 18)))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_439((1 << 18), iVar0, 0, 1);
		}
	}
	if (func_70(iParam0, 128))
	{
		func_439(128, iVar0, 0, 1);
	}
	else if (func_70(iParam0, (1 << 19)))
	{
		func_439((1 << 19), iVar0, 0, 1);
	}
	else if (func_70(iParam0, (1 << 29)))
	{
		func_439((1 << 29), iVar0, 0, 1);
	}
	else if (func_70(iParam0, (1 << 22)))
	{
		func_439((1 << 22), iVar0, 0, 1);
	}
	else if (func_70(iParam0, (1 << 23)))
	{
		func_439((1 << 23), iVar0, 0, 1);
	}
}

void func_328(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_329(bool bParam0)
{
	if (!bParam0 && func_440(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_330()
{
	return Global_1310750.f_16037;
}

bool func_331(int iParam0)
{
	if (!func_171(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_332(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_171(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_441(iParam0);
	Global_1310750.f_16037--;
}

void func_333(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_442(&Global_1393447, 1);
	func_443();
	func_444();
	func_445((BUILTIN::TO_FLOAT(200) / 3.0f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_236() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 -= Global_1392135.f_1 & 4;
		}
		func_446();
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_439((1 << 24), 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240.0f);
			}
			else if (func_2(iParam0, 2))
			{
				func_439((1 << 24), 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60.0f);
			}
			else if (func_2(iParam0, 4))
			{
				func_439((1 << 24), 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900.0f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_447(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_448(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_448((BUILTIN::TO_FLOAT(200) / 3.0f), 1, 0);
	}
}

bool func_334(int iParam0, int iParam1)
{
	return Global_40.f_9571[iParam1 /*10*/] & iParam0 != 0;
}

void func_335(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 -= Global_1392050[iParam1 /*14*/].f_1 & iParam0;
}

void func_336(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] |= iParam0;
}

int func_337(int iParam0)
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

bool func_338(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_339()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_340(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_341(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_340(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0.0f)
		{
			uParam0->f_8 = (func_342() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0.0f;
	return false;
}

float func_342()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

int func_343()
{
	return Global_1899515;
}

int func_344(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_345(int iParam0)
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

bool func_346(int iParam0)
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

bool func_347(int iParam0)
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

bool func_348(int iParam0)
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

bool func_349(int iParam0)
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

bool func_350(int iParam0)
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

bool func_351(int iParam0)
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

bool func_352(bool bParam0, int iParam1, int iParam2)
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

bool func_353()
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

int func_354(int iParam0)
{
	if (!func_357(iParam0))
	{
		return -1;
	}
	return func_450(func_449(iParam0));
}

bool func_355(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_356(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_357(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_358(int iParam0)
{
	return Global_1310750.f_16035 & iParam0 != 0;
}

bool func_359(int iParam0)
{
	return func_70(iParam0, Global_1310750.f_16072 | 64);
}

int func_360(int iParam0)
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

int func_361(int iParam0)
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

bool func_362(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_363(var uParam0, float fParam1)
{
	if (!func_261(uParam0))
	{
		return false;
	}
	if (func_451(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_364(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

void func_365(int iParam0, bool bParam1, int iParam2)
{
	func_452(iParam2);
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
		iParam0->f_13 = func_453(0);
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
							func_49(iParam0, (1 << 25));
						}
					}
					else if (!*iParam0 & (1 << 13) != 0)
					{
						if (func_218(1))
						{
							func_49(iParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_218(1) || *iParam0 & (1 << 13) != 0))
				{
					func_48(iParam0, (1 << 25));
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
			if (func_454(iParam0))
			{
				iParam0->f_15 = func_236();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_236() - iParam0->f_15) > 500)
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
	func_455(iParam0);
}

bool func_366(int iParam0, int iParam1)
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
			if (!func_456(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_457(iParam0, iVar2) <= func_458(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_367(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		iParam1->f_10 = iParam0;
	}
	if (func_459(iParam2, 1, 1, 1, 0))
	{
		func_49(iParam1, (1 << 11));
	}
	iParam1->f_16 = iParam2;
	func_237(iParam1, 1);
	func_278();
}

bool func_368(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_460(iParam0, !*iParam1 & (1 << 28) != 0, !*iParam1 & (1 << 29) != 0, !*iParam1 & (1 << 30) != 0, 0, 0))
		{
			if (iParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (iParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_461(iParam1);
			if (func_462(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_463(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_237(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_237(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_369(int iParam0, int iParam1, int iParam2)
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
	if (func_464(iParam1, !*iParam2 & (1 << 28) != 0, !*iParam2 & (1 << 29) != 0, !*iParam2 & (1 << 30) != 0, 0))
	{
		if (iParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (iParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_461(iParam2);
		if (func_462(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_463(iParam2)
				{
					func_237(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_370(int iParam0, int iParam1)
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
	if (func_456(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_463(iParam1)
		{
			fVar3 = func_461(iParam1);
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

bool func_371(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_236();
	iVar1 = (iVar0 - iParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_372(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_465(iParam2);
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
			if (func_380(iParam2, iParam1))
			{
				func_237(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_373(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < (float)func_466(iParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_380(iParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_237(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_374(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_467(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_237(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_237(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_468(iParam1, vVar0, vVar4))
					{
						func_237(iParam2, 1);
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
					func_237(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_468(iParam1, vVar0, vVar7))
					{
						func_237(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_375(int iParam0, int iParam1)
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
		if (!func_456(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_469(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_470(Global_1935630.f_34[iVar0]))
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
			if (func_471(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_472(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_473(iParam1, iParam0, fVar1, iVar0))
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

bool func_376(int iParam0, int iParam1)
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

bool func_377(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_236();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_378(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_474(iVar0, &iVar2))
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
	if (func_475(iVar0, iParam0))
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

int func_379(int iParam0, int iParam1)
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

bool func_380(int iParam0, int iParam1)
{
	if (func_476(iParam0))
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

bool func_381(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_106(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_382()
{
}

bool func_383(int iParam0, int iParam1)
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
		if (func_477(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_236();
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
						if (func_409(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_236();
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

bool func_384()
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
	if ((func_236() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_385(int iParam0, int iParam1)
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
	fVar0 = func_458(iParam0);
	if (iParam0->f_12 > func_478(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_479(iParam1);
	iVar1 = func_480(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_386(int iParam0, int iParam1, int iParam2)
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
	return func_481(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_387(int iParam0, int iParam1)
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
		if (func_482(iParam0, iParam1, 1))
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
					if (!func_483(iParam1, iParam0))
					{
						if (func_409(iVar4, Global_36, 1) < 7.0f)
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

bool func_388(int iParam0, int iParam1)
{
	if (!func_484(0))
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

bool func_389(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_236();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_390(int iParam0, int iParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_391(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_236();
	}
	else if (func_236() - iParam1->f_4) > func_485(iParam1)
	{
		return func_486(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_392(int iParam0, int iParam1)
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

char* func_393(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_394(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_395(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_487(iParam0, &sVar0);
}

int func_396(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_397(var uParam0, int iParam1)
{
	return uParam0->f_98[iParam1];
}

void func_398(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

int func_399(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_398(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & (1 << 19) != false;
		bVar5 = iParam8 & (1 << 24) != false;
		bVar6 = iParam8 & (1 << 24) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_143(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_262(&(iParam1->f_13));
		}
		if (func_488(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_489(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_399(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_490(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & (1 << 25) != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_491(*uParam0, 1, 1);
						}
					}
					else if (func_492(iParam1, 22))
					{
						func_491(*uParam0, 0, 1);
					}
				}
				if (func_493(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_494(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_495(iParam8);
					if (func_496(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_497(uParam3);
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
					func_498(iParam1, uParam3, fVar8);
					if (func_499(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_500(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_501(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_493(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_502(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_496(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_494(uParam0, func_493(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_495(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_500(uParam3, 0, 0, 1, 1);
					}
					func_503(iParam1, 1);
				}
				func_498(iParam1, uParam3, fVar8);
				if (func_501(uParam0, iParam1, fParam4, bVar6))
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
			func_504(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_400(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_505(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_105(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
}

bool func_401(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_281() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_402(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_506(iParam0, &iVar0, &iVar1);
	if (!func_507(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_508(iVar0, iVar1);
}

void func_403()
{
	if (func_35(iLocal_686, (1 << 17)))
	{
		if (!func_509(Global_35, 0))
		{
			if (iLocal_535 != -1)
			{
				if (!func_510())
				{
					switch (iLocal_534)
					{
						case 0:
							func_511(func_241(iLocal_535));
							func_120(iLocal_535, 1);
							func_126(&iLocal_686, (1 << 17));
							func_84(&iLocal_686, (1 << 18));
							break;
						case 1:
							func_512(func_241(iLocal_535));
							func_120(iLocal_535, 1);
							func_126(&iLocal_686, (1 << 17));
							func_84(&iLocal_686, (1 << 18));
							break;
					}
				}
			}
		}
	}
	else if (iLocal_534 > -1)
	{
		if (iLocal_535 != -1)
		{
			switch (iLocal_534)
			{
				case 0:
					func_105(Global_35, uLocal_37[func_241(iLocal_535)], func_513("GREET"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					func_84(&iLocal_686, (1 << 17));
					bLocal_32 = true;
					break;
				case 1:
					func_105(Global_35, uLocal_37[func_241(iLocal_535)], func_513("ANT"), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					func_84(&iLocal_686, (1 << 17));
					bLocal_32 = true;
					bLocal_33 = true;
					break;
			}
		}
	}
}

bool func_404()
{
	if (sLocal_84.f_46)
	{
		return false;
	}
	if (!func_514(uLocal_37[2], sLocal_378.f_0, "PED_MALE_B", 0, 0, 1, 0))
	{
		return false;
	}
	if (!func_515(uLocal_37[2], Global_35, 0, 10.0f, 0))
	{
		return false;
	}
	if (!func_363(&uLocal_29, 1.0f))
	{
		return false;
	}
	return true;
}

void func_405(int iParam0)
{
	func_416(iParam0, 0, (!bLocal_32 && bLocal_34));
	func_416(iParam0, 1, (!bLocal_33 && bLocal_34));
	func_416(iParam0, 2, 0);
}

bool func_406()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

float func_407(int iParam0, int iParam1, bool bParam2)
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
	return func_132(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

Vector3 func_408(Vector3 vParam0)
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

float func_409(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_410(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

bool func_411(int iParam0)
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

void func_412(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_411(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_413(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_411(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_414(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_411(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (bParam1)
	{
		func_517(iParam0, 4);
		func_518(iVar0, 1);
		func_519(iVar0, 1);
	}
	else
	{
		func_520(iParam0, 4);
		func_519(iVar0, 0);
	}
}

void func_415(int* iParam0, char* sParam1)
{
	if (func_411(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_413(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_521(iParam0, 1);
}

void func_416(int iParam0, int iParam1, bool bParam2)
{
	func_522(&(sLocal_429[iParam0 /*52*/][iParam1 /*17*/]), bParam2, 0);
}

bool func_417(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_418(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_342() - fParam1);
	func_523(uParam0, 1);
	func_524(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

int func_419(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_525(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_420(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_411(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_516(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_526(iVar0);
	*uParam0 = 0;
}

void func_421()
{
	func_527(23);
}

void func_422(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

int func_423(var uParam0)
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

void func_424(int iParam0)
{
	int iVar0;

	iVar0 = func_528(iParam0);
	if (iVar0 != 0)
	{
		func_529(-1, 24, 0, iVar0);
	}
}

void func_425(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_531(func_530(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_70(iParam0, 2))
	{
		func_532(iParam0, func_323(iParam3));
	}
	if (func_70(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_238();
		}
		func_533(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_95(iParam0, (1 << 16)))
	{
		func_534(iParam0, iParam1);
		func_535(iParam0, func_156(iParam0, iParam1));
		func_422(128);
	}
	func_326(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216, 0, 0);
	func_327(iParam0, 1);
	if (!bParam2)
	{
		func_422(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_536((1 << 19));
	}
	if (func_537(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_537(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_426(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_538(&Global_0, 8);
	}
	if (!func_539() || func_281() != -1)
	{
		return;
	}
	func_538(&Global_0, 1);
}

int func_427(int iParam0, bool bParam1)
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

void func_428(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

bool func_429(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_161(vParam0))
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

bool func_430(Vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_161(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, (1 << 14));
}

bool func_431(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_161(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_132(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500.0f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_432()
{
	int iVar0;
	int iVar1;

	iVar0 = func_540(func_3());
	if (iVar0 == 8)
	{
		iVar1 = func_224(func_3());
		if (func_226(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_541(func_435(0)))
	{
		return false;
	}
	if (func_542())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_433(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_434(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_543(iParam1))
		{
			func_544(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_545(iParam0, 0, 1);
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
			func_546(iParam0, 0);
			bVar0 = true;
		}
		func_547(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_435(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_548(1, 0, 0);
	}
	else
	{
		iVar0 = func_3();
	}
	return func_436(iVar0);
}

int func_436(int iParam0)
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

int func_437(int iParam0)
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

int func_438(int iParam0, int iParam1)
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

void func_439(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_292(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_279(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == (1 << 24))
			{
				if (func_549(iVar0) < func_550(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_326(iVar0, iParam1, 1.0f, iVar1 | iParam2, bParam3);
		}
		iVar0++;
	}
}

bool func_440(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_551(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

void func_441(int iParam0)
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

void func_442(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_443()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_552(iVar0, 128))
		{
			func_553(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_444()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_552(iVar0, 128) && func_552(iVar0, 1))
		{
			func_553(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_445(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000.0f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_446()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_70(iVar0, (1 << 24)))
		{
			if (!func_554(iVar0))
			{
				func_555(iVar0, (1 << 12));
			}
		}
		iVar0++;
	}
}

void func_447(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_280(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_280(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_280(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_280(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_280(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_280(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_280(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_448(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_342();
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

int func_449(int iParam0)
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

int func_450(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

float func_451(var uParam0)
{
	if (!func_261(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_556(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_342() - uParam0->f_1);
}

void func_452(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_557();
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
			func_558(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_453(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_454(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_281() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_559(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_559(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_480(iVar0) == -1)
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

void func_455(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_560(iParam0);
	}
}

bool func_456(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_480(iParam2);
	}
	else
	{
		iVar1 = func_479(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_480(iParam0);
	}
	else
	{
		iVar0 = func_479(iParam0);
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

float func_457(int iParam0, int iParam1)
{
	return func_106(iParam0, iParam1, 1, 1);
}

float func_458(int iParam0)
{
	return iParam0->f_26;
}

bool func_459(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

bool func_460(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_106(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_561(iVar0, 0)))
		{
			if (func_562(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_461(int iParam0)
{
	return iParam0->f_17;
}

bool func_462(int iParam0, int iParam1, float fParam2, float fParam3)
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

int func_463(int iParam0)
{
	return iParam0->f_18;
}

bool func_464(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_561(iVar0, 0)))
		{
			if (func_563(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_465(int iParam0)
{
	return iParam0->f_23;
}

int func_466(int iParam0)
{
	return iParam0->f_21;
}

int func_467(int iParam0)
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

bool func_468(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_564(iParam0, vParam4, 0.5f))
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

int func_469(int iParam0)
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
	if (func_565(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_470(int iParam0)
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

bool func_471(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_219(iParam1))
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

bool func_472(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_219(iParam1))
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

bool func_473(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_219(iParam1))
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

bool func_474(int iParam0, int iParam1)
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

bool func_475(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_566(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_476(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_477(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_409(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_478(int iParam0)
{
	return iParam0->f_24;
}

int func_479(int iParam0)
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

int func_480(int iParam0)
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

int func_481(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_474(Global_35, &iVar1))
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
		fVar2 = func_106(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_106(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_482(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_352(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_483(iParam1, iVar0))
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
				if (!bParam2 || !func_483(iParam1, iVar1))
				{
					if (func_409(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_483(int iParam0, int iParam1)
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

int func_484(int iParam0)
{
	if (func_567())
	{
		return 0;
	}
	return func_568(Global_1347702[58 /*49*/].f_15, 1);
}

int func_485(int iParam0)
{
	return iParam0->f_20;
}

int func_486(int iParam0, int iParam1, bool bParam2, float fParam3)
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

bool func_487(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_488(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_569(iParam0, iParam1))
		{
			if (!func_2(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_500(uParam2, 0, 0, 1, 0);
				func_49(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_2(iParam1->f_10, 1))
		{
			func_570(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_48(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_489(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		func_571(iParam1, uParam2, 0);
		iVar5 = func_572(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_500(uParam2, 0, 0, 1, 0);
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
		if (func_492(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_492(iParam1, 26))
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
				iParam6 = func_573(uParam0);
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
				iVar8 = func_574(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_575(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_492(iParam1, 23))
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
				func_491(*uParam0, 1, 1);
			}
			else
			{
				func_491(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_490(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_491(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_492(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_493(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_576(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_494(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_577(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_2(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_495(int iParam0)
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

bool func_496(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_578(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & (1 << 9) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_579(Global_35)) || func_580(Global_35)) || func_581(Global_35));
	fVar12 = -1.0f;
	if (func_261(&(iParam1->f_13)))
	{
		fVar12 = func_451(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_411((uParam4[iVar0 /*17*/])->f_6);
		func_582(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_583(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_584(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_500(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_585(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_571(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_586(iParam1, fParam6, iParam1->f_9))
					{
						func_262(&(iParam1->f_18));
						if (bVar6)
						{
							func_585(uParam4, 0, 0);
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
		func_587(iParam1, fParam2);
	}
	return bVar5;
}

void func_497(var uParam0)
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

void func_498(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_588(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_587(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_499(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_589(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_590(iParam1, 0);
				func_571(iParam1, uParam2, func_492(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_500(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_411((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_420(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

int func_501(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_262(&(iParam1->f_18));
			return 0;
		}
		else if (func_261(&(iParam1->f_18)))
		{
			func_107(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_261(&(iParam1->f_18)))
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
	return func_591(&(iParam1->f_18), fParam2);
	return 1;
}

void func_502(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_582(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_503(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_504(int* iParam0, var uParam1)
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
	func_571(iParam0, uParam1, 1);
	func_500(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

int func_505(int* iParam0)
{
	if (func_492(iParam0, 0))
	{
		if (func_592(iParam0))
		{
			func_503(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_506(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_507(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_593(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_594(iParam0))
	{
		return false;
	}
	if (func_595(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_596(iParam0, 1)) || func_597((1 << 15)))
	{
		if (!func_596(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_598())
	{
		return false;
	}
	return true;
}

void func_508(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_509(int iParam0, bool bParam1)
{
	if (func_52(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_510()
{
	if (func_509(uLocal_37[2], 0))
	{
		return true;
	}
	if (iLocal_35 != 0)
	{
		if (func_509(uLocal_37[1], 0))
		{
			return true;
		}
	}
	return false;
}

char* func_511(int iParam0)
{
	switch (iLocal_35)
	{
		case 0:
			func_105(uLocal_37[func_241(iLocal_535)], Global_35, "VICTIMIZED_REACT", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					func_105(uLocal_37[func_241(iLocal_535)], Global_35, "DEFUSE_RESPONSE", 0, -1082130432, 2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
					break;
				case 2:
					func_105(uLocal_37[func_241(iLocal_535)], Global_35, "VICTIMIZED_REACT", 0, -1082130432, 2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					func_105(uLocal_37[func_241(iLocal_535)], Global_35, "GENERIC_INSULT_MED_NEUTRAL", 0, -1082130432, 1, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
					break;
				case 2:
					func_105(uLocal_37[func_241(iLocal_535)], Global_35, "SORRY_TO_HEAR_THAT", 0, -1082130432, 2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
					break;
			}
			break;
	}
	return "";
}

char* func_512(int iParam0)
{
	switch (iLocal_35)
	{
		case 0:
			func_105(uLocal_37[func_241(iLocal_535)], Global_35, "SHAME_ON_YOU", 0, -1082130432, 1, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					func_105(uLocal_37[func_241(iLocal_535)], Global_35, "GENERIC_INSULT_MED_MALE", 0, -1082130432, 1, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
					break;
				case 2:
					func_105(uLocal_37[func_241(iLocal_535)], Global_35, "GENERIC_CURSE_MED", 0, -1082130432, 1, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					func_105(uLocal_37[func_241(iLocal_535)], Global_35, "TEASE_RESPONSE", 0, -1082130432, 1, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
					break;
				case 2:
					func_105(uLocal_37[func_241(iLocal_535)], Global_35, "PLAYER_STARING", 0, -1082130432, 1, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CRITICAL"), 1, 0, 0);
					break;
			}
			break;
	}
	return "";
}

char* func_513(char* sParam0)
{
	char[] cVar0[8];
	char[] cVar1[8];
	int iVar2;

	strcpy_s(&cVar0, 8, "PISS");
	switch (func_3())
	{
		case 5:
			strcpy_s(&cVar1, 8, "NBX");
			break;
	}
	switch (iLocal_35)
	{
		case 0:
			iVar2 = 1;
			break;
		case 1:
			iVar2 = 2;
			break;
		case 2:
			iVar2 = 3;
			break;
	}
	return func_239(&cVar0, &cVar1, sParam0, iVar2);
}

bool func_514(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_599(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

bool func_515(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_600(iParam0, iParam1, 0.0f))
		{
			return false;
		}
	}
	if (!func_601(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

int func_516(int iParam0)
{
	return iParam0;
}

void func_517(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_518(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_602(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_519(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_520(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_521(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_522(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_603(iParam0, 13))
	{
		func_604(iParam0, 0);
	}
	else
	{
		func_521(iParam0, 0);
	}
	if (func_411(iParam0->f_6))
	{
		if (bParam2)
		{
			func_420(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_523(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_524(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

int func_525(int iParam0)
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

void func_526(int iParam0)
{
	if (!func_605(iParam0))
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

void func_527(int iParam0)
{
	int iVar0;

	if (func_281() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_137(func_606(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_606(iVar0), func_283(), true))
			{
				func_607(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_528(int iParam0)
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

void func_529(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_608() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_608();
					}
					func_609(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_48(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> /*16*/ func_530(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_531(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_532(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_437(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_438(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_533(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_95(iParam0, (1 << 13)))
	{
		iVar0 = func_438(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_534(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_288(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_535(int iParam0, Vector3 vParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_70(iParam0, (1 << 9)))
	{
		vParam1 = { Global_36 /*3*/ };
	}
	if (func_161(vParam1))
	{
		return;
	}
	if (!func_171(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] /*3*/ };
		if (func_161(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_260(vVar2, vParam1, 1.0f, 1))
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

void func_536(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_555(iVar0, iParam0);
		iVar0++;
	}
}

int func_537(int iParam0)
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

void func_538(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_539()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_540(int iParam0)
{
	if (!func_362(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_541(int iParam0)
{
	return Global_1310750.f_16074 & iParam0 != 0;
}

bool func_542()
{
	return Global_1894899 & 2 != 0;
}

bool func_543(int iParam0)
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

void func_544(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_610(iParam0, iParam1))
		{
			if (func_611(iParam0, iParam1))
			{
				if (func_612(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_613(iParam0);
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

void func_545(int iParam0, int iParam1, bool bParam2)
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

void func_546(int iParam0, bool bParam1)
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

void func_547(int iParam0, bool bParam1)
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

int func_548(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_614(iVar2))
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

int func_549(int iParam0)
{
	if (func_171(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_550(int iParam0)
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

int func_551(int iParam0, int iParam1)
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

bool func_552(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return Global_1393237.f_11[iParam0 /*30*/].f_10 & iParam1 != 0;
}

void func_553(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

bool func_554(int iParam0)
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

void func_555(int iParam0, int iParam1)
{
	if (!func_171(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 -= Global_1310750[iParam0 /*111*/].f_1 & iParam1;
}

bool func_556(var uParam0)
{
	return func_417(*uParam0, 2);
}

bool func_557()
{
	if (func_615())
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

void func_558(var uParam0, var uParam1)
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

int func_559(int iParam0)
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

void func_560(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_48(iParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_49(iParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_561(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_562(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_563(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_563(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_564(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

bool func_565(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_566(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_567()
{
	if (func_281() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_568(int iParam0, bool bParam1)
{
	switch (func_266(iParam0))
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

bool func_569(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_616((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_570(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_588(uParam0[iVar0 /*17*/]))
		{
			func_604(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_571(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_420(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_617(iParam0, 0);
		}
	}
}

int func_572(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_618(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_411((uParam2[iVar0 /*17*/])->f_6))
		{
			func_604(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_573(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_271(*uParam0);
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

int func_574(var uParam0, int iParam1)
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

void func_575(int* iParam0, int* iParam1)
{
	if (!func_492(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_604(iParam1, 19);
			func_590(iParam0, 23);
			func_619(iParam1, 2);
		}
	}
}

bool func_576(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_620(16))
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
					func_621(16);
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

void func_577(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_618(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_578(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_579(int iParam0)
{
	return func_622(iParam0, 4) | func_622(iParam0, 5);
}

int func_580(int iParam0)
{
	return func_622(iParam0, 7);
}

int func_581(int iParam0)
{
	return func_622(iParam0, 6);
}

void func_582(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_588(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_618(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_583(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_623(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_624(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_414(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_414(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_625(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_584(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_626(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_627(iParam1, 1))
	{
		func_628(iParam1, 1);
		return true;
	}
	return false;
}

void func_585(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_522(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_586(int* iParam0, float fParam1, bool bParam2)
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

void func_587(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_588(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_589(int iParam0)
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

void func_590(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_591(var uParam0, float fParam1)
{
	if (func_363(uParam0, fParam1))
	{
		func_107(uParam0);
		return 1;
	}
	return 0;
}

bool func_592(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_593(int iParam0, int iParam1)
{
	if (func_281() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_594(int iParam0)
{
	if (func_281() != -1)
	{
		if (func_596(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_596(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_595(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_596(iParam0, (1 << 16)) && !func_596(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_596(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_596(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_596(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

bool func_597(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

bool func_598()
{
	return Global_1905944.f_5694;
}

bool func_599(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
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

bool func_600(int iParam0, int iParam1, float fParam2)
{
	return func_564(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_601(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_602(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

bool func_603(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_604(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_605(int iParam0)
{
	return func_602(iParam0, 2);
}

int func_606(int iParam0)
{
	if (!func_629(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_607(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_630(iParam0))
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

int func_608()
{
	return Global_1899515;
}

void func_609(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_631(*uParam0);
	iVar1 = func_632(*uParam0);
	iVar2 = func_633(*uParam0);
	iVar3 = func_344(*uParam0);
	iVar4 = func_634(*uParam0);
	iVar5 = func_635(*uParam0);
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
	iVar6 = func_636(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_636(iVar1, iVar0);
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
	func_637(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_610(int iParam0, int iParam1)
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

bool func_611(int iParam0, int iParam1)
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

bool func_612(int iParam0, int iParam1)
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
	if (!func_610(iParam0, iVar0))
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

void func_613(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_614(int iParam0)
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

bool func_615()
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

int func_616(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_617(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_107(&(iParam0->f_18));
}

void func_618(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_411(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_420(&(iParam1->f_6), 0, 1);
	}
	if (!func_411(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_588(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_638(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_411(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_625(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_639(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_640(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_412(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_639(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_414(iParam1->f_6, 0, 1);
				}
				else
				{
					func_414(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_619(int* iParam0, int iParam1)
{
	if (!func_603(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_604(iParam0, 14);
		}
	}
}

bool func_620(int iParam0)
{
	return Global_22 & iParam0 != 0;
}

void func_621(int iParam0)
{
	Global_22 |= iParam0;
}

int func_622(int iParam0, int iParam1)
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

bool func_623(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_624(int iParam0, bool bParam1)
{
	if (bParam1 && !func_411(iParam0))
	{
		return false;
	}
	return !func_602(iParam0, 4);
}

void func_625(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_411(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	func_639(iParam0, 18, 0, 1);
	func_639(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_626(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_411(iParam0))
	{
		return false;
	}
	iVar0 = func_516(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_627(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_411(iParam0))
	{
		return false;
	}
	iVar0 = func_516(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_628(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_411(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_629(int iParam0)
{
	return iParam0 > -1;
}

bool func_630(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_631(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_396(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_632(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_633(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_634(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_635(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_636(int iParam0, int iParam1)
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

void func_637(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_641(uParam0, iParam6);
	func_642(uParam0, iParam5);
	func_643(uParam0, iParam4);
	func_644(uParam0, iParam3);
	func_645(uParam0, iParam2);
	func_646(uParam0, iParam1);
}

int func_638(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_602(iVar0, 2))
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
				func_647(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_639(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_411(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_640(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_411(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_641(var uParam0, int iParam1)
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

void func_642(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 62914560;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_643(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_632(*uParam0);
	iVar1 = func_631(*uParam0);
	if (iParam1 < 1 || iParam1 > func_636(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 4063232;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_644(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 -= *uParam0 & 126976;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_645(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 4032;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_646(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 63;
	*uParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

void func_647(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_518(iParam0, 1);
	func_519(iParam0, 1);
	func_520(iParam0, 128);
}

