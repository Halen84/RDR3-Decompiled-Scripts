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
	struct<553> /*4424*/ sLocal_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 1, 2, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1232348144, 0, 0, 0, 4, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_578 = 24;
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
	var uLocal_680 = 1065353216;
	var uLocal_681 = 1065353216;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 1065353216;
	var uLocal_686 = 1065353216;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 1065353216;
	var uLocal_691 = 1065353216;
	var uLocal_692 = 0;
	var uLocal_693 = 1040187392;
	var uLocal_694 = 1040187392;
	var uLocal_695 = -1;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = -1082130432;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
	int iLocal_728 = 0;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_569 = joaat("CS_SUNWORSHIPPER");
	iLocal_725 = -1;
	func_1(&(sLocal_14.f_205));
	func_2(&sLocal_14);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_3(&sLocal_14);
	}
	while (true)
	{
		func_4(&sLocal_14);
		func_5(&sLocal_14, sLocal_14.f_0);
		switch (sLocal_14.f_203)
		{
			case 0:
				if (func_6(&sLocal_14))
				{
					func_7(&sLocal_14, 1);
				}
				break;
			case 1:
				if (func_8(&sLocal_14))
				{
					func_7(&sLocal_14, 2);
				}
				break;
			case 2:
				if (func_9(&sLocal_14))
				{
					func_7(&sLocal_14, 3);
				}
				if (sLocal_14.f_528 && ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_3))
				{
					if (sLocal_14.f_202)
					{
						func_10(&sLocal_14);
					}
					if (sLocal_14.f_527)
					{
						func_11(&sLocal_14);
					}
					else
					{
						func_12(&sLocal_14);
					}
				}
				break;
			case 3:
				if (sLocal_14.f_202)
				{
					func_10(&sLocal_14);
				}
				func_13(&sLocal_14);
				if (func_14(&sLocal_14) | func_15(sLocal_14.f_0, sLocal_14.f_3, 1, 1) && sLocal_14.f_550 == 0)
				{
					if (!func_16(&(sLocal_14.f_205), 8))
					{
						func_17(&(sLocal_14.f_205), 8, 0);
					}
				}
				else if (func_16(&(sLocal_14.f_205), 8))
				{
					func_18(&(sLocal_14.f_205), 8);
				}
				if ((func_16(&(sLocal_14.f_205), 2) || (sLocal_14.f_205.f_317 && func_16(&(sLocal_14.f_205), 1))) || sLocal_14.f_205.f_313 != 5)
				{
					if (func_19(sLocal_14.f_0, sLocal_14.f_1, &(sLocal_14.f_3), &(sLocal_14.f_4), &(sLocal_14.f_552), 0, 1097859072 /* Float: 15f */, 0))
					{
						func_20(&sLocal_14);
					}
					if (sLocal_14.f_527)
					{
						func_11(&sLocal_14);
					}
					else
					{
						func_12(&sLocal_14);
					}
					func_21(&sLocal_14);
					func_22(&sLocal_14);
					if (func_23(&sLocal_14, 1))
					{
						func_7(&sLocal_14, 4);
					}
				}
				else if (func_23(&sLocal_14, 0))
				{
					func_7(&sLocal_14, 4);
				}
				break;
			case 4:
				func_3(&sLocal_14);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_321 = 2527;
	func_25(&(uParam0->f_145));
	func_25(&(uParam0->f_173));
	func_25(&(uParam0->f_201));
	func_25(&(uParam0->f_229));
	func_25(&(uParam0->f_257));
}

void func_2(var uParam0)
{
	int iVar0;

	func_26();
	func_27();
	func_28(&(uParam0->f_529));
	func_29(&(sLocal_14.f_11), 1);
	func_30(&(sLocal_14.f_11), 1);
	func_31(&(sLocal_14.f_11), 1);
	func_32(&(sLocal_14.f_11), 1);
	func_33(&(sLocal_14.f_11), 1);
	func_34(&(sLocal_14.f_11), 1);
	func_35(&(sLocal_14.f_11), 1);
	func_36(&(sLocal_14.f_11), 1);
	func_37(&(sLocal_14.f_11), 1);
	func_38(&(sLocal_14.f_11), 1);
	func_39(&(sLocal_14.f_11), 1);
	func_40(&(sLocal_14.f_11), 1);
	func_32(&(sLocal_14.f_11), 1);
	func_41(&(sLocal_14.f_11), 1);
	func_42(&(sLocal_14.f_11), 0);
	func_43(&(sLocal_14.f_11), 0);
	func_44(&(sLocal_14.f_11), 0);
	func_45(&(sLocal_14.f_11), 0);
	iVar0 = func_46(24);
	if (((iVar0 == 2 || iVar0 == 5) || iVar0 == 7) || iVar0 == 10)
	{
		func_47(&(sLocal_14.f_11), 80);
		func_48(&(sLocal_14.f_11), 1);
		func_49(&(sLocal_14.f_11), 1);
	}
	func_50(&(sLocal_14.f_11), 1, 1, 1);
}

void func_3(int iParam0)
{
	func_51(iParam0);
	func_52(&(iParam0->f_205));
	ITEMSET::DESTROY_ITEMSET(iParam0->f_163);
	func_53(iParam0->f_161);
	func_53(iParam0->f_164);
	func_54(&(iParam0->f_529));
	func_55(*iParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(var uParam0)
{
}

void func_5(int iParam0, var uParam1)
{
	if (func_56(iParam0))
	{
		func_3(iParam0);
	}
	if (!func_57(Global_35, 0))
	{
		func_3(iParam0);
	}
	if (func_58(*iParam0, iParam0->f_1, &(iParam0->f_529), iParam0->f_3))
	{
		iParam0->f_550 = 1;
	}
	if (func_59(iParam0))
	{
		if (!func_60(&(iParam0->f_7)))
		{
			func_61(&(iParam0->f_7), 0);
		}
		else if (func_62(&(iParam0->f_7)) > 10.0f)
		{
			func_63(&(iParam0->f_7));
			func_3(iParam0);
		}
	}
	else if (func_60(&(iParam0->f_7)))
	{
		func_63(&(iParam0->f_7));
	}
}

bool func_6(var uParam0)
{
	if (func_64(uParam0))
	{
		uParam0->f_163 = ITEMSET::CREATE_ITEMSET(true);
		return true;
	}
	return false;
}

void func_7(int iParam0, int iParam1)
{
	iParam0->f_203 = iParam1;
}

bool func_8(var uParam0)
{
	if (func_65(uParam0))
	{
		return true;
	}
	return false;
}

bool func_9(var uParam0)
{
	if (func_66(uParam0))
	{
		return true;
	}
	return false;
}

void func_10(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 40) == 0)
	{
		uParam0->f_201 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true);
	}
}

void func_11(int iParam0)
{
	if (((func_67(iParam0) && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !Global_1935630.f_12) && ((VOLUME::DOES_VOLUME_EXIST(iParam0->f_161) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_161, true, 0)) || func_68(iParam0)))
	{
		if (func_69(iParam0, iParam0->f_160) > -1)
		{
			if (func_70(iParam0))
			{
				func_71(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				func_72(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				if (iParam0->f_551)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED") /* GXTEntry: "Unarmed" */, false, 0, false, false);
				}
				func_73(*iParam0, &(iParam0->f_3), &(iParam0->f_193), iParam0->f_194);
				func_74(iParam0, iParam0->f_160, -1);
				if (!func_75(iParam0, 2))
				{
					func_76(&(iParam0->f_3));
					func_77(&(iParam0->f_41[iParam0->f_160 /*59*/].f_21), 0, 0, 1, 0);
				}
			}
		}
	}
	else
	{
		func_78(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
		func_76(&(iParam0->f_3));
		func_72(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
		func_77(&(iParam0->f_41[iParam0->f_160 /*59*/].f_21), 0, 0, 1, 0);
	}
}

void func_12(int iParam0)
{
	if (func_67(iParam0))
	{
		if (func_79(iParam0, iParam0->f_160) > -1)
		{
			if (func_70(iParam0))
			{
				func_71(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				func_76(&(iParam0->f_3));
				func_72(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				func_77(&(iParam0->f_41[iParam0->f_160 /*59*/].f_21), 0, 0, 1, 0);
				if (iParam0->f_551)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED") /* GXTEntry: "Unarmed" */, false, 0, false, false);
				}
				func_73(*iParam0, &(iParam0->f_3), &(iParam0->f_193), iParam0->f_194);
				func_74(iParam0, iParam0->f_160, -1);
			}
		}
	}
	else
	{
		func_71(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(iParam0->f_3);
		}
	}
}

void func_13(var uParam0)
{
	bool bVar0;

	if (func_80(uParam0))
	{
		if (uParam0->f_554)
		{
			bVar0 = func_81(&(uParam0->f_11), &(uParam0->f_39), &(uParam0->f_3), &(uParam0->f_553), 1101004800 /* Float: 20f */);
		}
		else
		{
			bVar0 = func_82(uParam0->f_3, 0, &(uParam0->f_11), &(uParam0->f_39), 0, 0);
		}
		if (bVar0)
		{
			if (func_83(uParam0))
			{
				func_17(&(uParam0->f_205), 2, 1);
			}
		}
	}
}

int func_14(var uParam0)
{
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(sLocal_14.f_3, true, false), Global_36) > 125.0f)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_84())
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(bParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam1, true, false)) < 18.0f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam1))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_85(0) == 7 || func_86())
		{
			return 1;
		}
	}
	if (func_87(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 10)))
	{
		return 1;
	}
	return 0;
}

bool func_16(var uParam0, int iParam1)
{
	return func_88(uParam0->f_316, iParam1);
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_316 = 0;
		func_89(&(uParam0->f_316), iParam1);
	}
	else
	{
		func_89(&(uParam0->f_316), iParam1);
	}
}

void func_18(var uParam0, int iParam1)
{
	func_90(&(uParam0->f_316), iParam1);
}

bool func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
	{
		return false;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_91();
			*uParam4 = 1;
			return true;
		}
	}
	if (fParam5 == 0.0f)
	{
		if (!func_92(Global_35, *uParam2, fParam6, 1))
		{
			return false;
		}
	}
	else if (fParam5 > fParam6)
	{
		return false;
	}
	if (!func_60(uParam3))
	{
		func_93(uParam3, 0.0f);
	}
	else if (func_62(uParam3) >= 2.0f)
	{
		if (!func_94(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_95(iParam0);
			*uParam4 = 1;
			func_63(uParam3);
			return true;
		}
		else
		{
			func_95(iParam0);
			*uParam4 = 1;
			func_63(uParam3);
			return true;
		}
	}
	return false;
}

void func_20(int iParam0)
{
}

void func_21(int iParam0)
{
	if (!func_96(iParam0) || func_97(iParam0->f_193, iParam0->f_195))
	{
		return;
	}
	if (iParam0->f_196 < 2)
	{
		if (func_98(&(iParam0->f_3), 249295937))
		{
			func_99(iParam0);
			func_100(&(iParam0->f_193), iParam0->f_195);
		}
	}
}

void func_22(int iParam0)
{
	if (func_101(iParam0))
	{
		func_102(&(iParam0->f_163), iParam0->f_164, &(iParam0->f_3), &(iParam0->f_165), &(iParam0->f_190), 5000);
	}
}

bool func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_103(iParam0))
		{
			return true;
		}
	}
	func_104(&(iParam0->f_205));
	return false;
}

int func_24(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

void func_25(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_2.f_1 = -1;
	uParam0->f_4 = -1;
	uParam0->f_4.f_1 = -1;
	uParam0->f_6 = -1;
	uParam0->f_6.f_1 = -1;
	uParam0->f_8 = -1;
	uParam0->f_8.f_1 = -1;
	uParam0->f_10 = -1;
	uParam0->f_10.f_1 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_23 = 15127;
	uParam0->f_24 = 15136;
	uParam0->f_25 = 15145;
	uParam0->f_20 = 0;
	uParam0->f_21 = 2;
	uParam0->f_22 = 0.95f;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_26()
{
	switch (func_46(24))
	{
		case 0:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-2233.602f, -2850.517f, 62.7628f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2233.602f, -2850.517f, 62.7628f, 0.0f, 0.0f, 0.0f, 8.0f, 8.0f, 7.0f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2233.602f, -2850.517f, 62.7628f, 0.0f, 0.0f, 0.0f, (8.0f * 2.0f), (8.0f * 2.0f), (7.0f * 2.0f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2233.602f, -2850.517f, 62.7628f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2233.602f, -2850.517f, 62.7628f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 1:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-3198.999f, -2538.554f, 66.5911f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3198.999f, -2538.554f, 66.5911f, 0.0f, 0.0f, 0.0f, 8.0f, 8.0f, 7.0f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3198.999f, -2538.554f, 66.5911f, 0.0f, 0.0f, 0.0f, (8.0f * 2.0f), (8.0f * 2.0f), (7.0f * 2.0f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3198.999f, -2538.554f, 66.5911f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3198.999f, -2538.554f, 66.5911f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 2:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-2927.12f, -2860.494f, 85.7312f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2940.116f, -2875.53f, 65.73826f, 0.0f, 0.0f, 0.0f, 70.0f, 70.0f, 25.0f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2927.12f, -2860.494f, 85.7312f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2927.12f, -2860.494f, 85.7312f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 3:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-3267.86f, -3416.677f, 39.5041f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3267.86f, -3416.677f, 39.5041f, 0.0f, 0.0f, 0.0f, 8.0f, 8.0f, 2.4f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3267.86f, -3416.677f, 39.5041f, 0.0f, 0.0f, 0.0f, (8.0f * 2.0f), (8.0f * 2.0f), 2.4f, "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3267.86f, -3416.677f, 39.5041f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3267.86f, -3416.677f, 39.5041f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 4:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-3572.794f, -3565.222f, 33.505f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3572.794f, -3565.222f, 33.505f, 0.0f, 0.0f, 0.0f, 8.0f, 8.0f, 7.0f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3572.794f, -3565.222f, 33.505f, 0.0f, 0.0f, 0.0f, (8.0f * 2.0f), (8.0f * 2.0f), (7.0f * 2.0f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3572.794f, -3565.222f, 33.505f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3572.794f, -3565.222f, 33.505f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 5:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-4399.393f, -3606.746f, 48.6452f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4399.393f, -3588.738f, 27.12632f, 0.0f, 0.0f, 0.0f, 40.0f, 40.0f, 15.0f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4399.393f, -3606.746f, 48.6452f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4399.393f, -3606.746f, 48.6452f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 6:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-4988.676f, -4060.992f, 1.0884f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4988.676f, -4060.992f, 1.0884f, 0.0f, 0.0f, 0.0f, 8.0f, 8.0f, 7.0f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4988.676f, -4060.992f, 1.0884f, 0.0f, 0.0f, 0.0f, (8.0f * 2.0f), (8.0f * 2.0f), (7.0f * 2.0f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4988.676f, -4060.992f, 1.0884f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4988.676f, -4060.992f, 1.0884f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 7:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5336.702f, -3535.12f, 5.8226f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5308.675f, -3520.828f, -19.99811f, 0.0f, 0.0f, 0.0f, 40.0f, 40.0f, 15.0f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5336.702f, -3535.12f, 5.8226f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5336.702f, -3535.12f, 5.8226f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 8:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5374.994f, -4053.294f, -6.2292f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5374.994f, -4053.294f, -6.2292f, 0.0f, 0.0f, 0.0f, 8.0f, 8.0f, 7.0f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5374.994f, -4053.294f, -6.2292f, 0.0f, 0.0f, 0.0f, (8.0f * 2.0f), (8.0f * 2.0f), (7.0f * 2.0f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5374.994f, -4053.294f, -6.2292f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5374.994f, -4053.294f, -6.2292f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 9:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5413.131f, -2606.156f, 2.5597f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5413.131f, -2606.156f, 2.5597f, 0.0f, 0.0f, 0.0f, 8.0f, 8.0f, 7.0f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5413.131f, -2606.156f, 2.5597f, 0.0f, 0.0f, 0.0f, (8.0f * 2.0f), (8.0f * 2.0f), (7.0f * 2.0f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5413.131f, -2606.156f, 2.5597f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5413.131f, -2606.156f, 2.5597f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 10:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-4956.249f, -3198.202f, 26.3575f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4917.801f, -3198.158f, 0.631294f, 0.0f, 0.0f, 0.0f, 40.0f, 40.0f, 15.0f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4956.249f, -3198.202f, 26.3575f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4956.249f, -3198.202f, 26.3575f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 11:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-4594.695f, -3045.041f, 6.5776f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4594.695f, -3045.041f, 6.5776f, 0.0f, 0.0f, 0.0f, 8.0f, 8.0f, 7.0f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4594.695f, -3045.041f, 6.5776f, 0.0f, 0.0f, 0.0f, (8.0f * 2.0f), (8.0f * 2.0f), (7.0f * 2.0f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4594.695f, -3045.041f, 6.5776f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 7.0f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4594.695f, -3045.041f, 6.5776f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 7.0f, "SUN_VOL_PED_AVOIDANCE");
			break;
	}
	iLocal_570[5] = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.85f, 1.85f, 2.0f);
}

void func_27()
{
	sLocal_14.f_0 = 24;
	sLocal_14.f_1 = func_46(24);
	sLocal_14.f_2 = func_109(sLocal_14.f_0, sLocal_14.f_1, 9, func_108(sLocal_14.f_0));
	sLocal_14.f_195 = 4;
	sLocal_14.f_194 = (1 << 9);
	sLocal_14.f_161 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5320.893f, -2604.35f, -11.0865f, 0.0f, 0.0f, 0.0f, 30.0f, 30.0f, 8.0f, "volTalkTrigger");
	iLocal_714 = func_110(sLocal_14.f_2);
	func_111();
	sLocal_14.f_205.f_321 = 17530;
}

void func_28(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 1;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(uParam0, 16);
	}
	else
	{
		func_114(uParam0, (1 << 26));
		func_114(uParam0, 16);
	}
}

void func_30(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_114(&(uParam0->f_1), 256);
	}
	else
	{
		func_113(&(uParam0->f_1), 256);
	}
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_114(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_113(&(uParam0->f_1), (1 << 14));
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_114(&(uParam0->f_1), (1 << 19));
	}
	else
	{
		func_113(&(uParam0->f_1), (1 << 19));
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(uParam0, 256);
	}
	else
	{
		func_114(uParam0, 256);
	}
}

void func_34(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_114(&(uParam0->f_1), 2);
	}
	else
	{
		func_113(&(uParam0->f_1), 2);
	}
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_114(&(uParam0->f_1), 8);
	}
	else
	{
		func_113(&(uParam0->f_1), 8);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_114(&(uParam0->f_1), 4);
	}
	else
	{
		func_113(&(uParam0->f_1), 4);
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(uParam0, 8);
	}
	else
	{
		func_114(uParam0, 8);
	}
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_114(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_113(&(uParam0->f_1), (1 << 11));
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(uParam0, 128);
	}
	else
	{
		func_114(uParam0, 128);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_114(&(uParam0->f_1), 128);
	}
	else
	{
		func_113(&(uParam0->f_1), 128);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_114(&(uParam0->f_1), 16);
	}
	else
	{
		func_113(&(uParam0->f_1), 16);
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(uParam0, (1 << 19));
	}
	else
	{
		func_114(uParam0, (1 << 19));
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_114(&(uParam0->f_1), (1 << 17));
	}
	else
	{
		func_113(&(uParam0->f_1), (1 << 17));
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(uParam0, 4);
	}
	else
	{
		func_114(uParam0, 4);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(uParam0, 2);
	}
	else
	{
		func_114(uParam0, 2);
	}
}

int func_46(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

void func_47(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(uParam0, (1 << 16));
	}
	else
	{
		func_114(uParam0, (1 << 16));
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(uParam0, (1 << 22));
	}
	else
	{
		func_114(uParam0, (1 << 22));
	}
}

void func_50(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_113(uParam0, (1 << 28));
	}
	else
	{
		func_114(uParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_113(uParam0, (1 << 30));
	}
	else
	{
		func_114(uParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_113(uParam0, (1 << 29));
	}
	else
	{
		func_114(uParam0, (1 << 29));
	}
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;

	func_115();
	func_116(sLocal_14.f_2, iLocal_714);
	if (func_88(sLocal_14.f_193, (1 << 10)))
	{
		iVar0 = func_46(24) + 1;
		func_117(24, iVar0);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_570)
	{
		func_53(iLocal_570[iVar1]);
		iVar1++;
	}
	if (func_118(&iLocal_728))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&iLocal_728, 0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_726, false);
	if (func_46(24) != 1)
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SunWorpshiperBubble");
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_727))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_727);
	}
	if (!ENTITY::IS_ENTITY_DEAD(sLocal_14.f_3))
	{
		PED::SET_PED_CONFIG_FLAG(sLocal_14.f_3, 153 /*PCF_0x23E3351E*/, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_14.f_3, false);
		func_119(sLocal_14.f_3);
		PED::_SET_REMOVE_PED_NETWORKED(sLocal_14.f_3, -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(sLocal_14.f_3));
	}
	return 1;
}

void func_52(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE((*uParam0)[iVar0 /*36*/]);
		}
		iVar0++;
	}
}

void func_53(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_54(var uParam0)
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
	if (func_60(&(uParam0->f_13)))
	{
		func_63(&(uParam0->f_13));
	}
}

void func_55(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43 /*PCF_DisableLadderClimbing*/, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_120(0, -1);
	}
	func_115();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2--;
	Global_1935183.f_28 = 0;
}

bool func_56(var uParam0)
{
	return false;
}

bool func_57(int iParam0, int iParam1)
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
	if (func_88(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_88(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_88(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_58(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((func_85(0) == 1 || func_85(0) == 2) || func_85(0) == 8) || func_121(Global_1935630, (1 << 11)))
			{
				func_89(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (func_85(0) == 11)
			{
				func_89(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (func_85(0) == 6)
			{
				func_89(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_89(iParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(func_122(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_122(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_91();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_122(iVar2) > func_122(iVar1))
				{
					if (func_122(iVar0) > func_122(iVar2) + 1 || func_122(iVar0) < func_122(iVar1))
					{
						func_89(iParam2, 32);
					}
				}
				else if (func_122(iVar0) > func_122(iVar2) + 1 && func_122(iVar0) < func_122(iVar1))
				{
					func_89(iParam2, 32);
				}
			}
		}
		if (iParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((func_123(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_123(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_124(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_124(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_125(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_89(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > iParam2->f_17)
			{
				if (func_126(&uParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) | func_127(&uParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, (1 << 11)))
				{
					if (!func_60(&(iParam2->f_13)))
					{
						func_93(&(iParam2->f_13), 0.0f);
					}
					else if (func_128(&(iParam2->f_13)) >= iParam2->f_16)
					{
						func_63(&(iParam2->f_13));
						func_89(iParam2, (1 << 9));
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_60(&(iParam2->f_13)))
					{
						func_63(&(iParam2->f_13));
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (func_129())
			{
				func_89(iParam2, (1 << 10));
			}
		}
		if (iParam2->f_10)
		{
			if (func_130())
			{
				func_89(iParam2, (1 << 11));
			}
		}
		if (func_121(Global_1935630, (1 << 14)) || Global_1430231.f_4)
		{
			func_89(iParam2, 128);
		}
		if (func_87(&(Global_1396257[iParam0 /*638*/].f_626), (1 << 11)))
		{
			func_89(iParam2, 256);
		}
	}
	if ((((((((((func_88(*iParam2, 2) || func_88(*iParam2, 4)) || func_88(*iParam2, 8)) || func_88(*iParam2, 16)) || func_88(*iParam2, 32)) || func_88(*iParam2, 64)) || func_88(*iParam2, 128)) || func_88(*iParam2, 256)) || func_88(*iParam2, (1 << 9))) || func_88(*iParam2, (1 << 10))) || func_88(*iParam2, (1 << 11)))
	{
		return true;
	}
	return false;
}

bool func_59(int iParam0)
{
	if ((func_131(iParam0) || (func_132(iParam0->f_40, 1) && !func_133(Global_35, Global_1396257[*iParam0 /*638*/][iParam0->f_1 /*48*/].f_47, 0, 1))) || (func_134(iParam0->f_10) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_135(iParam0->f_10), true, 0)))
	{
		return true;
	}
	return false;
}

bool func_60(var uParam0)
{
	return func_136(*uParam0, 1);
}

void func_61(var uParam0, bool bParam1)
{
	if (bParam1 || !func_60(uParam0))
	{
		func_137(uParam0);
	}
}

float func_62(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_138(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_139() - uParam0->f_1);
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

bool func_64(var uParam0)
{
	HUD::TEXT_BLOCK_REQUEST("SPSNWAU");
	HUD::TEXT_BLOCK_REQUEST("SPDEF");
	STREAMING::REQUEST_MODEL(iLocal_569, false);
	func_140(iLocal_570[0], "SP_SUNScientist_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_570[4], 2500607, 0, 0, -1, -1, 10);
	iLocal_726 = func_141(iLocal_570[4], 0, 0, 0);
	PED::_RESERVE_AMBIENT_PEDS(1);
	return true;
}

bool func_65(var uParam0)
{
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPSNWAU") || !HUD::TEXT_BLOCK_IS_LOADED("SPDEF"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_569))
	{
		return false;
	}
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() != 1)
	{
		return false;
	}
	return true;
}

bool func_66(var uParam0)
{
	var uVar0;
	Vector3 vVar1;
	int iVar5;

	vVar1 = { func_142() /*4*/ };
	if (func_143(&(sLocal_14.f_3), iLocal_569, &uVar0, vVar1, vVar1., 0, 0, 1))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(sLocal_14.f_3, joaat("REL_NO_RELATIONSHIP"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_14.f_3, true);
		PED::SET_PED_FLEE_ATTRIBUTES(sLocal_14.f_3, (1 << 10), false);
		PED::SET_PED_LASSO_HOGTIE_FLAG(sLocal_14.f_3, 0, false);
		PED::SET_PED_CONFIG_FLAG(sLocal_14.f_3, 153 /*PCF_0x23E3351E*/, true);
		iVar5 = func_46(24);
		if (((iVar5 == 2 || iVar5 == 5) || iVar5 == 7) || iVar5 == 10)
		{
			PED::SET_PED_HIGHLY_PERCEPTIVE(uParam0->f_3, true);
			PED::SET_PED_SEEING_RANGE(uParam0->f_3, 100.0f);
			PED::SET_PED_HEARING_RANGE(uParam0->f_3, 80.0f);
			PED::SET_PED_ID_RANGE(uParam0->f_3, 100.0f);
		}
		func_144();
		func_145(&(sLocal_14.f_205), 1, 1);
		func_146(&uLocal_578, Global_35, "JOHN", 0);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_14.f_205[0 /*36*/], "b_PlayerArthur", false, false);
		func_146(&uLocal_578, sLocal_14.f_3, "SUN_WORSHIPPER", 0);
		func_147();
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), sLocal_14.f_3, "SPECIAL_PED_LIGHTWEIGHT_1_0", 0.0f, 0.0f, 0.0f, 0, "SunWorpshiperBubble");
		func_111();
		func_148(sLocal_14.f_3, 24);
		if (iVar5 == 3)
		{
			if (!func_118(&iLocal_728))
			{
				iLocal_728 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(-3269.813f, -3419.548f, 39.72579f, 2.5f, 1, -1, 0);
			}
		}
		else if (!func_118(&iLocal_728))
		{
			iLocal_728 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vVar1, 1.5f, 1, -1, 0);
		}
		sLocal_14.f_527 = 1;
		func_89(&(sLocal_14.f_193), 256);
		func_149(&sLocal_14, 0, 0, "SPD_UC_GRT" /* GXTEntry: "Greet" */, "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
		func_149(&sLocal_14, 0, 1, "SPD_UC_ANT" /* GXTEntry: "Antagonize" */, "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0);
		func_149(&sLocal_14, 1, 0, "SPD_UC_TALK" /* GXTEntry: "Talk" */, "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
		func_151(&sLocal_14, 0, func_150(3, 0, 0), 0);
		func_151(&sLocal_14, 1, func_150(3, 0, 0), 0);
		func_89(&(sLocal_14.f_197), 2);
		func_152(&sLocal_14, 0, 0);
		func_152(&sLocal_14, 1, 0);
		func_153(&sLocal_14, 0);
		PED::_ATTACH_VOLUME_TO_ENTITY(sLocal_14.f_161, sLocal_14.f_3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
		PED::_ATTACH_VOLUME_TO_ENTITY(iLocal_570[5], sLocal_14.f_3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(iLocal_570[5], false);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(iLocal_570[5], true);
		return true;
	}
	return false;
}

bool func_67(int iParam0)
{
	if (func_88(sLocal_14.f_193, 256))
	{
		return true;
	}
	return false;
}

bool func_68(int iParam0)
{
	return false;
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_162))
	{
		iVar1 = iParam0->f_162;
	}
	iVar0 = func_154(&(iParam0->f_3), &(iParam0->f_41[iParam1 /*59*/]), 15.0f, &(iParam0->f_41[iParam1 /*59*/].f_21), 0.0f, 2, iParam0->f_41[iParam1 /*59*/].f_57, iVar1, iParam0->f_41[iParam1 /*59*/].f_56, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (func_155(iParam0))
	{
		func_78(&(iParam0->f_41[iParam1 /*59*/]), 1);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1 /*59*/].f_58 = iVar0;
		}
		return iParam0->f_41[iParam1 /*59*/].f_58;
	}
	else
	{
		func_78(&(iParam0->f_41[iParam1 /*59*/]), 0);
	}
	return iVar0;
}

bool func_70(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_156(iParam0);
	if (func_157(iParam0, iVar1, &iVar0))
	{
		if (iVar1 == 0)
		{
			if (iVar0 == 0)
			{
				func_89(&(sLocal_14.f_193), 8);
			}
			else
			{
				func_89(&(sLocal_14.f_193), 16);
			}
		}
		else if (iVar1 == 1)
		{
			if (iVar0 == 0)
			{
				func_89(&(sLocal_14.f_193), 128);
			}
		}
	}
	return true;
}

void func_71(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_158(uParam0->f_21[iVar0 /*17*/].f_5);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (bParam1 && !func_159(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_160(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
			else if (!bParam1 && func_159(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_160(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
		}
		iVar0++;
	}
}

void func_72(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_63(&(iParam0->f_18));
}

void func_73(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_97(*uParam2, uParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_162(func_161(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_163(func_161(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_91();
	func_100(uParam2, uParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

void func_74(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 2)
	{
		return;
	}
	iParam0->f_41[iParam1 /*59*/].f_58 = iParam2;
}

bool func_75(int iParam0, int iParam1)
{
	return func_88(iParam0->f_197, iParam1);
}

void func_76(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	}
}

void func_77(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_164((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_165(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_78(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_158(uParam0->f_21[iVar0 /*17*/].f_5);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (bParam1 && !func_159(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_160(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
			else if (!bParam1 && func_159(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_160(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
		}
		iVar0++;
	}
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return iVar0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_162))
	{
		iVar1 = iParam0->f_162;
	}
	if ((VOLUME::DOES_VOLUME_EXIST(iParam0->f_161) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_161, true, 0)) || func_68(iParam0))
	{
		func_71(&(iParam0->f_41[iParam1 /*59*/]), 1);
		iVar0 = func_154(&(iParam0->f_3), &(iParam0->f_41[iParam1 /*59*/]), 15.0f, &(iParam0->f_41[iParam1 /*59*/].f_21), 0.0f, 3, iParam0->f_41[iParam1 /*59*/].f_57, iVar1, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1 /*59*/].f_58 = iVar0;
		}
		return iParam0->f_41[iParam1 /*59*/].f_58;
	}
	else
	{
		func_71(&(iParam0->f_41[iParam1 /*59*/]), 0);
	}
	return iVar0;
}

bool func_80(var uParam0)
{
	return true;
}

int func_81(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam2, true))
	{
		*uParam1 = 1;
		return 1;
	}
	if (Global_1935630.f_39 > 0 || PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 1.0f)
	{
		if (func_82(*uParam2, 0, uParam0, uParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*uParam2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*uParam2)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*uParam2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), *uParam2, 1000))
			{
				*uParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

bool func_82(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_166(uParam2, 1, iVar0);
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
		if (!(uParam2->f_1 & 128) != 0)
		{
			if (func_167(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_168(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8) != 0)
			{
				if (func_169(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_168(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_170(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_168(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if ((*uParam2 & 32) != 0)
			{
				if (func_171(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_168(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_172(PLAYER::PLAYER_ID(), 0, 1, (uParam2->f_1 & (1 << 19)) == 0))
		{
			if (!(uParam2->f_1 & (1 << 14)) != 0)
			{
				*uParam3 = (1 << 14);
				func_168(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_173(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!(uParam2->f_1 & 4) != 0)
				{
					if (func_174(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_168(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!(uParam2->f_1 & 256) != 0)
				{
					if (func_175(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_168(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(uParam2->f_1 & 16) != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_176(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_168(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_176(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_168(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if ((*uParam2 & 8) != 0)
			{
				if (func_177(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_168(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if ((*uParam2 & (1 << 18)) != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20.0f)
			{
				if (func_178(&iParam0, uParam2))
				{
					*uParam3 = (1 << 12);
					func_168(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2) != 0)
			{
				if (func_179(uParam2, 4000))
				{
					if ((func_180(iParam0, Global_1935630.f_41, (*uParam2 & 128) != 0, 0, (*uParam2 & 256) != 0) & func_181(uParam2, iParam0)) && func_182(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_168(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!(uParam2->f_1 & 2) != 0)
		{
			if (uParam2->f_12 < 4.0f)
			{
				if ((func_180(iParam0, Global_1935630.f_41, (*uParam2 & 128) != 0, 1, (*uParam2 & 256) != 0) & func_181(uParam2, iParam0)) && func_182(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_168(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if ((*uParam2 & (1 << 17)) == 0)
						{
							if (func_183(iParam0, Global_1935630.f_41))
							{
								func_184();
								*uParam3 = 2;
								func_168(iParam0, uParam2, *uParam3);
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
					if ((*uParam2 & (1 << 17)) == 0)
					{
						if (func_183(iParam0, Global_1935630.f_41))
						{
							func_184();
							*uParam3 = 2;
							func_168(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10.0f)
			{
				if (func_185(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_186() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_184();
						*uParam3 = 2;
						func_168(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if ((*uParam2 & (1 << 17)) == 0)
				{
					if (func_187())
					{
						if (func_183(iParam0, Global_1935630.f_42))
						{
							func_184();
							*uParam3 = 2;
							func_168(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!(uParam2->f_1 & (1 << 10)) != 0)
		{
			if (func_188(uParam2, iParam0))
			{
				*uParam3 = (1 << 10);
				func_168(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & (1 << 11)) != 0)
			{
				if (func_189(iParam0, iParam1, uParam2))
				{
					*uParam3 = (1 << 11);
					func_168(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if ((*uParam2 & 16) != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_190(iParam0, uParam2))
					{
						*uParam3 = (1 << 13);
						func_168(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if ((*uParam2 & 64) != 0)
			{
				if (func_191(iParam0, uParam2))
				{
					*uParam3 = (1 << 15);
					func_168(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12.0f)
		{
			if ((*uParam2 & (1 << 20)) != 0)
			{
				if (func_192(uParam2, 4000))
				{
					if (func_193(&iParam0, uParam2))
					{
						*uParam3 = (1 << 9);
						func_168(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if ((*uParam2 & (1 << 10)) != 0)
			{
				if (func_194(iParam0, uParam2))
				{
					*uParam3 = (1 << 16);
					uParam2->f_4 = 0;
					func_168(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1) != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_195(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_168(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_83(var uParam0)
{
	if (!func_88(iLocal_714, 1))
	{
		func_89(&iLocal_714, 1);
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SunWorpshiperBubble");
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_3) && !ENTITY::IS_ENTITY_DEAD(sLocal_14.f_3))
	{
		func_196(sLocal_14.f_3, 1);
	}
	return true;
}

bool func_84()
{
	int iVar0;

	if (func_197() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_198(Global_1392915[iVar0 /*12*/].f_4))
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

int func_85(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_86()
{
	return Global_1310750.f_16077 != 0;
}

bool func_87(var uParam0, int iParam1)
{
	return func_132(*uParam0, iParam1);
}

bool func_88(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_89(int iParam0, int iParam1)
{
	func_100(iParam0, iParam1);
}

void func_90(var uParam0, int iParam1)
{
	func_199(uParam0, iParam1);
}

int func_91()
{
	return Global_1899515;
}

bool func_92(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_93(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_139() - fParam1);
	func_200(uParam0, 1);
	func_201(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_94(int iParam0)
{
	return iParam0 != -15;
}

void func_95(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_91();
}

bool func_96(int iParam0)
{
	return false;
}

bool func_97(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_98(var uParam0, int iParam1)
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

void func_99(int iParam0)
{
}

void func_100(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

bool func_101(int iParam0)
{
	return false;
}

void func_102(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	var uVar0[1];
	var uVar2[2];

	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	uVar2[0] = Global_35;
	uVar2[1] = *uParam2;
	if (!func_60(uParam4))
	{
		func_93(uParam4, 0.0f);
	}
	else if (func_128(uParam4) > 1000)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1, true, 0))
		{
			if (func_202(uParam0, &uVar0, &uVar2, 5, iParam1, 0, 0, -1) > 0)
			{
				iParam3->f_3 = uVar0[0];
				func_93(uParam4, 0.0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			iParam3->f_3 = Global_35;
			func_93(uParam4, 0.0f);
		}
	}
	*iParam3 = { 0.0f, 0.0f, 0.0f /*3*/ };
	iParam3->f_4 = 21030;
	iParam3->f_8 = 4;
	iParam3->f_17 = 2;
	iParam3->f_18 = 1;
	iParam3->f_19 = 3;
	iParam3->f_20 = 1;
	iParam3->f_21 = 3;
	iParam3->f_22 = 1;
	iParam3->f_13 = 3;
	iParam3->f_7 = iParam5;
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*uParam2, iParam3);
}

bool func_103(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_3) || ENTITY::IS_ENTITY_DEAD(sLocal_14.f_3))
	{
		return true;
	}
	func_203(sLocal_14.f_3, &(sLocal_14.f_193), (1 << 16), 24, 0);
	if (func_16(&(sLocal_14.f_205), 2) || func_204(&sLocal_14) == 4)
	{
		if (PED::IS_PED_FALLING(sLocal_14.f_3) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(sLocal_14.f_3) > 3.0f)
		{
			func_205(sLocal_14.f_3, 0, 0);
		}
		if (!func_88(sLocal_14.f_193, 2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(sLocal_14.f_3))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(sLocal_14.f_3, false);
				func_119(sLocal_14.f_3);
			}
			if (func_46(24) == 1)
			{
				func_206(sLocal_14.f_3, 10, 500);
			}
			func_89(&(sLocal_14.f_193), 2);
		}
	}
	func_207();
	func_208();
	func_209(sLocal_14.f_3, &(sLocal_14.f_193), (1 << 11), (1 << 12), (1 << 13), "SPECIAL_PED_10_NO_LOCK", "SPECIAL_PED_GENERIC_INTERACT_FOCUS", "SunWorpshiperBubble", "SunWorpshiperConvo");
	func_210(sLocal_14.f_193, (1 << 14), 1, 1);
	if (func_88(sLocal_14.f_193, 64))
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_3) && !ENTITY::IS_ENTITY_DEAD(sLocal_14.f_3))
		{
			func_196(sLocal_14.f_3, 1);
		}
		return true;
	}
	if (((sLocal_14.f_550 && func_211(&(sLocal_14.f_529))) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_3)) && !AUDIO::_IS_PED_IN_ANY_CONVERSATION(sLocal_14.f_3, false))
	{
		return true;
	}
	return false;
}

void func_104(var uParam0)
{
	switch (uParam0->f_313)
	{
		case 1:
			if (func_212(uParam0, &(uParam0->f_145), uParam0->f_313))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Invoke(uParam0->f_321, &(uParam0->f_257), uParam0->f_145.f_6, uParam0->f_145.f_6.f_1, &(uParam0->f_173));
					Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_145.f_2, uParam0->f_145.f_2.f_1, &(uParam0->f_173));
					func_145(uParam0, 4, 1);
				}
				else if (uParam0->f_317 && func_16(uParam0, 1))
				{
					Stack.Invoke(uParam0->f_321, &(uParam0->f_201), uParam0->f_145.f_4, uParam0->f_145.f_4.f_1, &(uParam0->f_173));
					Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_145.f_2, uParam0->f_145.f_2.f_1, &(uParam0->f_173));
					func_145(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Invoke(uParam0->f_321, &(uParam0->f_285), uParam0->f_145.f_10, uParam0->f_145.f_10.f_1, &(uParam0->f_173));
					Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_145.f_2, uParam0->f_145.f_2.f_1, &(uParam0->f_173));
					func_145(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 4))
				{
					Stack.Invoke(uParam0->f_321, &(uParam0->f_229), uParam0->f_145.f_8, uParam0->f_145.f_8.f_1, &(uParam0->f_173));
					Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_145.f_2, uParam0->f_145.f_2.f_1, &(uParam0->f_173));
					func_145(uParam0, 3, 1);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Invoke(uParam0->f_321, &(uParam0->f_201), uParam0->f_145.f_4, uParam0->f_145.f_4.f_1, &(uParam0->f_173));
					Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_145.f_2, uParam0->f_145.f_2.f_1, &(uParam0->f_173));
					func_145(uParam0, 2, 1);
				}
				else
				{
					Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_145.f_2, uParam0->f_145.f_2.f_1, &(uParam0->f_173));
					func_145(uParam0, 1, 1);
				}
			}
			break;
		case 2:
			if (func_212(uParam0, &(uParam0->f_201), uParam0->f_313))
			{
				if (!uParam0->f_317)
				{
					if (func_16(uParam0, 2))
					{
						Stack.Invoke(uParam0->f_321, &(uParam0->f_257), uParam0->f_201.f_6, uParam0->f_201.f_6.f_1, &(uParam0->f_173));
						if (func_213(uParam0->f_201.f_2))
						{
							Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_201.f_2, uParam0->f_201.f_2.f_1, &(uParam0->f_173));
						}
						func_145(uParam0, 4, 1);
					}
					else if (func_16(uParam0, 8))
					{
						Stack.Invoke(uParam0->f_321, &(uParam0->f_285), uParam0->f_201.f_10, uParam0->f_201.f_10.f_1, &(uParam0->f_173));
						if (func_213(uParam0->f_201.f_2))
						{
							Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_201.f_2, uParam0->f_201.f_2.f_1, &(uParam0->f_173));
						}
						func_145(uParam0, 5, 0);
					}
					else if (func_16(uParam0, 4))
					{
						Stack.Invoke(uParam0->f_321, &(uParam0->f_229), uParam0->f_201.f_8, uParam0->f_201.f_8.f_1, &(uParam0->f_173));
						if (func_213(uParam0->f_201.f_2))
						{
							Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_201.f_2, uParam0->f_201.f_2.f_1, &(uParam0->f_173));
						}
						func_145(uParam0, 3, 1);
					}
					else
					{
						if (func_213(uParam0->f_201.f_2))
						{
							Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_201.f_2, uParam0->f_201.f_2.f_1, &(uParam0->f_173));
						}
						func_145(uParam0, 1, 1);
					}
				}
				else if (uParam0->f_318)
				{
					if (uParam0->f_319)
					{
						func_145(uParam0, 6, 1);
					}
					else
					{
						func_145(uParam0, 0, 1);
					}
				}
				else
				{
					if (func_213(uParam0->f_201.f_2))
					{
						Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_201.f_2, uParam0->f_201.f_2.f_1, &(uParam0->f_173));
					}
					func_145(uParam0, 1, 1);
				}
			}
			break;
		case 3:
			if (func_212(uParam0, &(uParam0->f_229), uParam0->f_313))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Invoke(uParam0->f_321, &(uParam0->f_257), uParam0->f_229.f_6, uParam0->f_229.f_6.f_1, &(uParam0->f_173));
					if (func_213(uParam0->f_229.f_2))
					{
						Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_229.f_2, uParam0->f_229.f_2.f_1, &(uParam0->f_173));
					}
					func_145(uParam0, 4, 1);
				}
				else if (uParam0->f_317 && func_16(uParam0, 1))
				{
					Stack.Invoke(uParam0->f_321, &(uParam0->f_201), uParam0->f_229.f_4, uParam0->f_229.f_4.f_1, &(uParam0->f_173));
					if (func_213(uParam0->f_229.f_2))
					{
						Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_229.f_2, uParam0->f_229.f_2.f_1, &(uParam0->f_173));
					}
					func_145(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Invoke(uParam0->f_321, &(uParam0->f_285), uParam0->f_229.f_10, uParam0->f_229.f_10.f_1, &(uParam0->f_173));
					if (func_213(uParam0->f_229.f_2))
					{
						Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_229.f_2, uParam0->f_229.f_2.f_1, &(uParam0->f_173));
					}
					func_145(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Invoke(uParam0->f_321, &(uParam0->f_201), uParam0->f_229.f_4, uParam0->f_229.f_4.f_1, &(uParam0->f_173));
					if (func_213(uParam0->f_229.f_2))
					{
						Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_229.f_2, uParam0->f_229.f_2.f_1, &(uParam0->f_173));
					}
					func_145(uParam0, 2, 1);
				}
				else
				{
					if (func_213(uParam0->f_229.f_2))
					{
						Stack.Invoke(uParam0->f_321, &(uParam0->f_145), uParam0->f_229.f_2, uParam0->f_229.f_2.f_1, &(uParam0->f_173));
					}
					func_145(uParam0, 1, 1);
				}
			}
			break;
		case 4:
			if (func_212(uParam0, &(uParam0->f_257), uParam0->f_313))
			{
				if (uParam0->f_319)
				{
					func_145(uParam0, 6, 1);
				}
				else
				{
					func_145(uParam0, 0, 1);
				}
			}
			break;
		case 5:
			if (!uParam0->f_320)
			{
				if (func_212(uParam0, &(uParam0->f_285), uParam0->f_313))
				{
					uParam0->f_320 = 1;
					if (func_16(uParam0, 2))
					{
						Stack.Invoke(uParam0->f_321, &(uParam0->f_257), uParam0->f_285.f_6, uParam0->f_285.f_6.f_1, &(uParam0->f_173));
						uParam0->f_320 = 0;
						func_145(uParam0, 4, 0);
					}
					else if (uParam0->f_317 && func_16(uParam0, 1))
					{
						Stack.Invoke(uParam0->f_321, &(uParam0->f_201), uParam0->f_285.f_4, uParam0->f_285.f_4.f_1, &(uParam0->f_173));
						uParam0->f_320 = 0;
						func_145(uParam0, 2, 0);
					}
					else if (func_16(uParam0, 8))
					{
					}
					else
					{
						uParam0->f_320 = 0;
						func_145(uParam0, 1, 0);
					}
				}
			}
			else if (func_16(uParam0, 2))
			{
				Stack.Invoke(uParam0->f_321, &(uParam0->f_257), uParam0->f_285.f_6, uParam0->f_285.f_6.f_1, &(uParam0->f_173));
				uParam0->f_320 = 0;
				func_145(uParam0, 4, 0);
			}
			else if (uParam0->f_317 && func_16(uParam0, 1))
			{
				Stack.Invoke(uParam0->f_321, &(uParam0->f_201), uParam0->f_285.f_4, uParam0->f_285.f_4.f_1, &(uParam0->f_173));
				uParam0->f_320 = 0;
				func_145(uParam0, 2, 0);
			}
			else if (func_16(uParam0, 8))
			{
			}
			else
			{
				uParam0->f_320 = 0;
				func_145(uParam0, 1, 0);
			}
			break;
		case 6:
			func_214(uParam0);
			func_145(uParam0, 0, 1);
			break;
		case 0:
			break;
	}
}

int func_105(var uParam0)
{
	return 1;
}

int func_106(var uParam0)
{
	return 1;
}

int func_107(var uParam0)
{
	return 1;
}

int func_108(int iParam0)
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

int func_109(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_215())
	{
		iVar2 = func_215();
	}
	iVar5 = func_216(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_217(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_217(iVar6) == 0)
			{
				return func_218(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_217(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_217(iVar6) == 0)
			{
				return func_218(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_218(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_110(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_220(iParam0);
}

void func_111()
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	vVar3 = { 0.0f, 0.0f, 0.0f /*3*/ };
	switch (func_46(24))
	{
		case 0:
			vVar0 = { -2233.602f, -2850.517f, 62.7628f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 208.7791f /*3*/ };
			break;
		case 1:
			vVar0 = { -3198.999f, -2538.554f, 66.5911f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 292.1099f /*3*/ };
			break;
		case 2:
			vVar0 = { -2927.12f, -2860.494f, 85.7312f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 123.2795f /*3*/ };
			break;
		case 3:
			vVar0 = { -3267.86f, -3416.677f, 39.5041f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 332.5893f /*3*/ };
			break;
		case 4:
			vVar0 = { -3572.794f, -3565.222f, 33.505f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 260.2986f /*3*/ };
			break;
		case 5:
			vVar0 = { -4399.393f, -3606.746f, 48.6452f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 348.5519f /*3*/ };
			break;
		case 6:
			vVar0 = { -4988.676f, -4060.992f, 1.0884f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 163.9257f /*3*/ };
			break;
		case 7:
			vVar0 = { -5336.702f, -3535.12f, 5.8226f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 306.198f /*3*/ };
			break;
		case 8:
			vVar0 = { -5374.994f, -4053.294f, -6.2292f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 170.3096f /*3*/ };
			break;
		case 9:
			vVar0 = { -5413.131f, -2606.156f, 2.5597f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 255.0981f /*3*/ };
			break;
		case 10:
			vVar0 = { -4956.249f, -3198.202f, 26.3575f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 292.8281f /*3*/ };
			break;
		case 11:
			vVar0 = { -4594.695f, -3045.041f, 6.5776f /*3*/ };
			vVar3 = { 0.0f, 0.0f, 4.7478f /*3*/ };
			break;
	}
	if (!func_88(iLocal_714, 1) || func_88(iLocal_714, 2))
	{
		switch (func_46(24))
		{
			case 0:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_1@pdsnw_ig1_walk_talk", vVar0, vVar3, "pl_IG4_PDSNW_WnT_Idle01", 32, 0, 0, 0, 0);
				break;
			case 1:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_8@pdsnw_ig8_laying_down", vVar0, vVar3, "Pl_IG8_PDSNW_LayingDown_Enter", 64, 0, 0, 0, 0);
				break;
			case 2:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_11@pdsnw_ig11_callout_above", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
				break;
			case 3:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_2@pdsnw_ig2_walk_talk", vVar0, vVar3, "pl_IG2_PDSNW_WnT_OhHowYaDoin", 32, 0, 0, 0, 0);
				break;
			case 4:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_3@pdsnw_ig3_walk_talk", vVar0, vVar3, "Pl_IG3_PDSNW_WnT_YouKnowAmerica", 32, 0, 0, 0, 0);
				break;
			case 5:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_11@pdsnw_ig11_callout_above", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
				break;
			case 6:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_4@pdsnw_ig4_walk_talk", vVar0, vVar3, "Pl_IG4_PDSNW_WnT_HeyYouFoundWhat", 32, 0, 0, 0, 0);
				break;
			case 7:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_11@pdsnw_ig11_callout_above", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
				break;
			case 8:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_5@pdsnw_ig5_walk_talk", vVar0, vVar3, "Pl_IG5_PDSNW_WnT_UKnowWhatIBlame", 32, 0, 0, 0, 0);
				break;
			case 9:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_6@pdsnw_ig6_walk_talk", vVar0, vVar3, "Pl_IG6_PDSNW_WnT_IfThisIsnt", 32, 0, 0, 0, 0);
				break;
			case 10:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_11@pdsnw_ig11_callout_above", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
				break;
			case 11:
				func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_7@pdsnw_ig7_walk_talk", vVar0, vVar3, "Pl_IG7_PDSNW_WnT_LifeIsWarmth", 32, 0, 0, 0, 0);
				break;
		}
	}
	else
	{
		func_221(&(sLocal_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_9@ig9_pdsnw_wnt_prevaggro", vVar0, vVar3, "Pl_IG9_PDSNW_WnT_PrevAggro", 0, 0, 0, 0, 0);
	}
	func_221(&(sLocal_14.f_205[1 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_12@pdsnw_ig12_aggros", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
	func_221(&(sLocal_14.f_205[2 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_10@pdsnw_ig10_prev_aggro", vVar0, vVar3, "Pl_IG10_PDSNW_PrevAggro01", 0, 0, 0, 0, 0);
	func_221(&(sLocal_14.f_205[3 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_13@pdsnw_ig13_linger", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
}

int func_112(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_222(iParam1);
	iVar1 = func_223(iParam2);
	func_25(uParam0);
	switch (iVar0)
	{
		case 0:
			switch (iVar1)
			{
				case 0:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", func_224(iVar0), func_225(0), func_224(0), func_225(1), 0, "", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 5, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 36376);
					func_230(uParam0, 36399);
					func_232(uParam0, 36736);
					break;
				case 1:
					func_226(uParam0, "Pl_IG1_PDSNW_wnT_HeyWhatYouDoin", func_224(iVar0), func_225(iVar1), func_224(0), func_225(2), 0, "", 0, "", 0, "S_IG1_PDSNW_wnT_HeyWhatYouDoin", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 2:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(iVar0), func_225(0), func_224(3), func_225(45), 0, "", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					func_232(uParam0, 37714);
					break;
				case 3:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", func_224(iVar0), func_225(3), func_224(0), func_225(4), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 36376);
					func_230(uParam0, 36399);
					func_232(uParam0, 36736);
					break;
				case 4:
					func_226(uParam0, "pl_IG2_PDSNW_WnT_OhHowYaDoin", func_224(iVar0), func_225(iVar1), func_224(0), func_225(5), 0, "b_breakout", 0, "", 0, "s_IG2_PDSNW_WnT_OhHowYaDoin", "", 1, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 5:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(iVar0), func_225(3), func_224(3), func_225(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					func_232(uParam0, 37714);
					break;
				case 6:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", func_224(iVar0), func_225(6), func_224(0), func_225(7), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 36376);
					func_230(uParam0, 36399);
					func_232(uParam0, 36736);
					break;
				case 7:
					func_226(uParam0, "Pl_IG3_PDSNW_WnT_YouKnowAmerica", func_224(iVar0), func_225(iVar1), func_224(0), func_225(8), 0, "b_breakout", 0, "", 0, "S_IG3_PDSNW_WnT_YouKnowAmerica", "", 1, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 8:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(iVar0), func_225(3), func_224(3), func_225(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					func_232(uParam0, 37714);
					break;
				case 9:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", func_224(iVar0), func_225(9), func_224(0), func_225(10), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 36376);
					func_230(uParam0, 36399);
					func_232(uParam0, 36736);
					break;
				case 10:
					func_226(uParam0, "Pl_IG4_PDSNW_WnT_HeyYouFoundWhat", func_224(iVar0), func_225(iVar1), func_224(0), func_225(11), 0, "b_breakout", 0, "", 0, "s_IG4_PDSNW_WnT_HeyYouFoundWhat", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 11:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(iVar0), func_225(9), func_224(3), func_225(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					func_232(uParam0, 37714);
					break;
				case 12:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", func_224(iVar0), func_225(12), func_224(0), func_225(13), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 36376);
					func_230(uParam0, 36399);
					func_232(uParam0, 36736);
					break;
				case 13:
					func_226(uParam0, "Pl_IG5_PDSNW_WnT_UKnowWhatIBlame", func_224(iVar0), func_225(iVar1), func_224(0), func_225(14), 0, "b_breakout", 0, "", 0, "", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 14:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(iVar0), func_225(12), func_224(3), func_225(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
					func_232(uParam0, 37714);
					break;
				case 15:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", func_224(iVar0), func_225(15), func_224(0), func_225(16), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 36376);
					func_230(uParam0, 36399);
					func_232(uParam0, 36736);
					break;
				case 16:
					func_226(uParam0, "Pl_IG6_PDSNW_WnT_IfThisIsnt", func_224(iVar0), func_225(iVar1), func_224(0), func_225(17), 0, "b_breakout", 0, "", 0, "S_IG13_PDSNW_StandingIdle", "S_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 17:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(iVar0), func_225(15), func_224(3), func_225(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					func_232(uParam0, 37714);
					break;
				case 18:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", func_224(iVar0), func_225(18), func_224(0), func_225(19), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 36376);
					func_230(uParam0, 36399);
					func_232(uParam0, 36736);
					break;
				case 19:
					func_226(uParam0, "Pl_IG7_PDSNW_WnT_LifeIsWarmth", func_224(iVar0), func_225(iVar1), func_224(0), func_225(20), 0, "b_breakout", 0, "", 0, "", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 20:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(iVar0), func_225(18), func_224(3), func_225(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					func_232(uParam0, 37714);
					break;
				case 22:
					func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_Enter", func_224(iVar0), func_225(22), func_224(0), func_225(23), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_Enter", "S_IG8_PDSNW_LayingDown_Idle01", 5, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 36376);
					func_230(uParam0, 36399);
					func_232(uParam0, 36736);
					break;
				case 23:
					switch (func_237(sLocal_14.f_3, Global_35, 1060437492 /* Float: 0.707f */))
					{
						case 0:
							func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_OhHelloRT", func_224(iVar0), func_225(iVar1), func_224(0), func_225(24), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_OhHelloFT", "S_IG8_PDSNW_LayingDown_SitIdle", 2, 1064514355 /* Float: 0.95f */);
							break;
						case 2:
							func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_OhHelloRT", func_224(iVar0), func_225(iVar1), func_224(0), func_225(24), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_OhHelloRT", "S_IG8_PDSNW_LayingDown_SitIdle", 2, 1064514355 /* Float: 0.95f */);
							break;
						case 3:
							func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_OhHelloRT", func_224(iVar0), func_225(iVar1), func_224(0), func_225(24), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_OhHelloLT", "S_IG8_PDSNW_LayingDown_SitIdle", 2, 1064514355 /* Float: 0.95f */);
							break;
						case 1:
							func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_OhHelloRT", func_224(iVar0), func_225(iVar1), func_224(0), func_225(24), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_OhHelloBK", "S_IG8_PDSNW_LayingDown_SitIdle", 2, 1064514355 /* Float: 0.95f */);
							break;
					}
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 24:
					func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_Brutal", func_224(iVar0), func_225(iVar1), func_224(0), func_225(25), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_Brutal", "S_IG8_PDSNW_LayingDown_Idle02", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38137);
					func_230(uParam0, 38146);
					func_232(uParam0, 38333);
					break;
				case 25:
					func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_Idle01", func_224(iVar0), func_225(iVar1), -1, -1, 0, "", 0, "", 0, "", "", 3, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38342);
					func_230(uParam0, 38351);
					func_232(uParam0, 37714);
					break;
				case 26:
					func_226(uParam0, "", -1, -1, func_224(0), func_225(27), 0, "", 0, "", 0, "", "", 4, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 36376);
					func_230(uParam0, 36399);
					func_232(uParam0, 36736);
					break;
				case 27:
					func_226(uParam0, "Pl_IG9_PDSNW_WnT_PrevAggro", func_224(iVar0), func_225(iVar1), func_224(0), func_225(28), 1, "b_breakout", 0, "", 0, "", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 28:
					func_226(uParam0, "", -1, -1, -1, -1, 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_232(uParam0, 37714);
					break;
				case 33:
					switch (func_46(24))
					{
						case 2:
							func_226(uParam0, "pl_IG4_PDSNW_Idle01", func_224(iVar0), func_225(0), func_224(0), func_225(34), 0, "b_breakout", 0, "", 0, "s_IG4_PDSNW_Idle01", "s_IG4_PDSNW_Idle01", 5, 1064514355 /* Float: 0.95f */);
							break;
						case 5:
							func_226(uParam0, "pl_IG4_PDSNW_Idle01", func_224(iVar0), func_225(0), func_224(0), func_225(35), 0, "b_breakout", 0, "", 0, "s_IG4_PDSNW_Idle01", "s_IG4_PDSNW_Idle01", 5, 1064514355 /* Float: 0.95f */);
							break;
						case 7:
							func_226(uParam0, "pl_IG4_PDSNW_Idle01", func_224(iVar0), func_225(0), func_224(0), func_225(36), 0, "b_breakout", 0, "", 0, "s_IG4_PDSNW_Idle01", "s_IG4_PDSNW_Idle01", 5, 1064514355 /* Float: 0.95f */);
							break;
						case 10:
							func_226(uParam0, "pl_IG4_PDSNW_Idle01", func_224(iVar0), func_225(0), func_224(0), func_225(37), 0, "b_breakout", 0, "", 0, "s_IG4_PDSNW_Idle01", "s_IG4_PDSNW_Idle01", 5, 1064514355 /* Float: 0.95f */);
							break;
					}
					func_228(uParam0, 36376);
					func_230(uParam0, 36399);
					func_232(uParam0, 36736);
					break;
				case 34:
					func_226(uParam0, "pl_IG11_PDSNW_CalloutAbove01", func_224(iVar0), func_225(iVar1), func_224(0), func_225(38), 1, "b_breakout", 0, "", 0, "s_IG11_PDSNW_CalloutAbove01", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 35:
					func_226(uParam0, "pl_IG11_PDSNW_CalloutAbove02", func_224(iVar0), func_225(iVar1), func_224(0), func_225(38), 1, "b_breakout", 0, "", 0, "s_IG11_PDSNW_CalloutAbove02", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 36:
					func_226(uParam0, "pl_IG11_PDSNW_CalloutAbove03", func_224(iVar0), func_225(iVar1), func_224(0), func_225(38), 1, "b_breakout", 0, "", 0, "s_IG11_PDSNW_CalloutAbove03", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 37:
					func_226(uParam0, "pl_IG11_PDSNW_CalloutAbove04", func_224(iVar0), func_225(iVar1), func_224(0), func_225(38), 1, "b_breakout", 0, "", 0, "s_IG11_PDSNW_CalloutAbove04", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 37059);
					func_230(uParam0, 37068);
					func_232(uParam0, 37490);
					break;
				case 38:
					func_226(uParam0, "", -1, -1, -1, -1, 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38342);
					func_230(uParam0, 38351);
					func_232(uParam0, 37714);
					break;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 39:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(1), func_225(39), func_224(1), func_225(40), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 36376);
					func_230(uParam0, 36399);
					func_232(uParam0, 36736);
					break;
				case 40:
					func_226(uParam0, "pl_IG12_PDSNW_Aggros_StopIveDone", func_224(iVar0), func_225(iVar1), func_224(1), func_225(44), 1, "b_breakout", 0, "", 0, "s_IG12_PDSNW_Aggros_StopIveDone", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38500);
					func_230(uParam0, 38524);
					func_232(uParam0, 38685);
					break;
				case 41:
					func_226(uParam0, "pl_IG12_PDSNW_Aggros_WhyWouldYou", func_224(iVar0), func_225(iVar1), func_224(1), func_225(44), 1, "b_breakout", 0, "", 0, "s_IG12_PDSNW_Aggros_WhyWouldYou", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38500);
					func_230(uParam0, 38524);
					func_232(uParam0, 38685);
					break;
				case 42:
					func_226(uParam0, "pl_IG12_PDSNW_Aggros_StayOutOfThe", func_224(iVar0), func_225(iVar1), func_224(1), func_225(44), 1, "b_breakout", 0, "", 0, "s_IG12_PDSNW_Aggros_StayOutOfThe", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38500);
					func_230(uParam0, 38524);
					func_232(uParam0, 38685);
					break;
				case 43:
					func_226(uParam0, "", -1, -1, -1, -1, 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38500);
					func_230(uParam0, 38524);
					func_232(uParam0, 38685);
					break;
				case 44:
					func_226(uParam0, "", -1, -1, func_224(3), func_225(45), 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38342);
					func_230(uParam0, 38351);
					func_232(uParam0, 37714);
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 45:
					switch (func_46(24))
					{
						case 0:
						case 11:
							func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(3), func_225(45), func_224(3), func_225(46), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
							func_228(uParam0, 38694);
							func_230(uParam0, 38703);
							func_232(uParam0, 38712);
							break;
						case 3:
						case 9:
							func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(3), func_225(45), func_224(3), func_225(47), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
							func_228(uParam0, 38694);
							func_230(uParam0, 38703);
							func_232(uParam0, 38712);
							break;
						case 4:
						case 8:
							func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(3), func_225(45), func_224(3), func_225(48), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
							func_228(uParam0, 38694);
							func_230(uParam0, 38703);
							func_232(uParam0, 38712);
							break;
						case 6:
							func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", func_224(3), func_225(45), func_224(3), func_225(49), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
							func_228(uParam0, 38694);
							func_230(uParam0, 38703);
							func_232(uParam0, 38712);
							break;
					}
					break;
				case 46:
					func_226(uParam0, "pl_IG13_PDSNW_LINGER_GoMyFriend", func_224(iVar0), func_225(iVar1), func_224(3), func_225(50), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_LINGER_GoMyFriend", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38694);
					func_230(uParam0, 38703);
					func_232(uParam0, 38712);
					break;
				case 47:
					func_226(uParam0, "pl_IG13_PDSNW_LINGER_NowIMustBe", func_224(iVar0), func_225(iVar1), func_224(3), func_225(50), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_LINGER_NowIMustBe", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38694);
					func_230(uParam0, 38703);
					func_232(uParam0, 38712);
					break;
				case 48:
					func_226(uParam0, "pl_IG13_PDSNW_LINGER_NowPlease", func_224(iVar0), func_225(iVar1), func_224(3), func_225(50), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_LINGER_NowPlease", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38694);
					func_230(uParam0, 38703);
					func_232(uParam0, 38712);
					break;
				case 49:
					func_226(uParam0, "pl_IG13_PDSNW_LINGER_WellIfYou", func_224(iVar0), func_225(iVar1), func_224(3), func_225(50), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_LINGER_WellIfYou", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38694);
					func_230(uParam0, 38703);
					func_232(uParam0, 38712);
					break;
				case 50:
					func_226(uParam0, "", -1, -1, -1, -1, 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_228(uParam0, 38342);
					func_230(uParam0, 38351);
					func_232(uParam0, 37714);
					break;
			}
			break;
	}
	iVar3 = func_46(24);
	switch (iVar3)
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
		case 11:
			iVar2 = 43;
			break;
	}
	func_249(uParam0, func_224(3), func_225(45));
	func_250(uParam0, func_224(1), func_225(iVar2));
	return 0;
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_114(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_115()
{
	AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
}

void func_116(int iParam0, int iParam1)
{
	if (!func_219(iParam0))
	{
		return;
	}
	func_251(iParam0, iParam1);
}

void func_117(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

bool func_118(int iParam0)
{
	if (*iParam0 == 0)
	{
		return false;
	}
	return *iParam0 != -1;
}

void func_119(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), iParam0, 7, 0, true);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), iParam0, 3, 2, true);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), iParam0, 4, 2, true);
}

void func_120(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_252(&Global_0, 8);
	}
	if (!func_253() || func_197() != -1)
	{
		return;
	}
	func_252(&Global_0, 1);
}

bool func_121(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_122(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

bool func_123(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_198(Global_1835011[iParam0 /*74*/].f_1);
}

int func_124(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_254(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_125(int iParam0)
{
	int iVar0;

	iVar0 = func_255();
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

int func_126(var uParam0, var uParam1, float fParam2, var uParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) /*3*/ };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) /*3*/ };
	if (func_256(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_127(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_257(iParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_258(iVar1, 0))
		{
			func_259(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

int func_128(var uParam0)
{
	if (!func_60(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_138(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_186() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

bool func_129()
{
	return Global_1392040.f_6;
}

bool func_130()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_131(int iParam0)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2;
	float fVar5;

	iVar0 = func_46(24);
	if (!func_133(Global_35, Global_1396257[24 /*638*/][iVar0 /*48*/].f_47, 0, 1))
	{
		fVar1 = (func_260(Global_1396257[24 /*638*/][iVar0 /*48*/].f_47) + 25.0f);
		vVar2 = { VOLUME::GET_VOLUME_COORDS(Global_1396257[24 /*638*/][iVar0 /*48*/].f_47) /*3*/ };
		fVar5 = func_261(Global_35, vVar2, 0);
		if (fVar5 >= fVar1)
		{
			return true;
		}
	}
	return false;
}

bool func_132(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_133(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_134(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_135(int iParam0)
{
	if (!func_134(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

bool func_136(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_137(var uParam0)
{
	func_93(uParam0, 0.0f);
}

bool func_138(var uParam0)
{
	return func_136(*uParam0, 2);
}

float func_139()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

int func_140(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_262(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_141(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return iVar0;
	}
	func_263(iParam0, bParam2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 2);
	iVar0 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iParam0, bParam2, 15);
	return iVar0;
}

struct<4> /*32*/ func_142()
{
	struct<4> /*32*/ sVar0;

	switch (func_46(24))
	{
		case 0:
			sVar0 = { -2233.602f, -2850.517f, 62.7628f /*3*/ };
			sVar0.f_3 = 208.7791f;
			break;
		case 1:
			sVar0 = { -3198.999f, -2538.554f, 66.5911f /*3*/ };
			sVar0.f_3 = 292.1099f;
			break;
		case 2:
			sVar0 = { -2927.12f, -2860.494f, 85.7312f /*3*/ };
			sVar0.f_3 = 123.2795f;
			break;
		case 3:
			sVar0 = { -3267.86f, -3416.677f, 39.5041f /*3*/ };
			sVar0.f_3 = 332.5893f;
			break;
		case 4:
			sVar0 = { -3572.794f, -3565.222f, 33.505f /*3*/ };
			sVar0.f_3 = 260.2986f;
			break;
		case 5:
			sVar0 = { -4399.393f, -3606.746f, 48.6452f /*3*/ };
			sVar0.f_3 = 348.5519f;
			break;
		case 6:
			sVar0 = { -4988.676f, -4060.992f, 1.0884f /*3*/ };
			sVar0.f_3 = 163.9257f;
			break;
		case 7:
			sVar0 = { -5336.702f, -3535.12f, 5.8226f /*3*/ };
			sVar0.f_3 = 306.198f;
			break;
		case 8:
			sVar0 = { -5374.994f, -4053.294f, -5.2292f /*3*/ };
			sVar0.f_3 = 170.3096f;
			break;
		case 9:
			sVar0 = { -5413.131f, -2606.156f, 2.5597f /*3*/ };
			sVar0.f_3 = 255.0981f;
			break;
		case 10:
			sVar0 = { -4956.249f, -3198.202f, 26.3575f /*3*/ };
			sVar0.f_3 = 292.8281f;
			break;
		case 11:
			sVar0 = { -4594.695f, -3045.041f, 6.5776f /*3*/ };
			sVar0.f_3 = 4.7478f;
			break;
	}
	return sVar0;
}

bool func_143(var uParam0, int iParam1, var uParam2, Vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (*uParam2)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return true;
	}
	if (!bParam8)
	{
		*uParam0 = func_264(iParam1, vParam3, iParam6, 0, 1, bParam7, 1, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		*uParam0 = func_264(iParam1, vParam3, iParam6, 0, 1, bParam7, 1, 1, bParam9, 1, 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam2 = 1;
		return true;
	}
	return false;
}

void func_144()
{
	if (!func_88(iLocal_714, 1) || func_88(iLocal_714, 2))
	{
		switch (func_46(24))
		{
			case 0:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(0), &(sLocal_14.f_205.f_173));
				break;
			case 3:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(3), &(sLocal_14.f_205.f_173));
				break;
			case 4:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(6), &(sLocal_14.f_205.f_173));
				break;
			case 6:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(9), &(sLocal_14.f_205.f_173));
				break;
			case 8:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(12), &(sLocal_14.f_205.f_173));
				break;
			case 9:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(15), &(sLocal_14.f_205.f_173));
				break;
			case 11:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(18), &(sLocal_14.f_205.f_173));
				break;
			case 1:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(22), &(sLocal_14.f_205.f_173));
				break;
			case 2:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(33), &(sLocal_14.f_205.f_173));
				break;
			case 5:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(33), &(sLocal_14.f_205.f_173));
				break;
			case 7:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(33), &(sLocal_14.f_205.f_173));
				break;
			case 10:
				func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(33), &(sLocal_14.f_205.f_173));
				break;
		}
	}
	else
	{
		func_112(&(sLocal_14.f_205.f_145), func_224(0), func_225(26), &(sLocal_14.f_205.f_173));
	}
}

void func_145(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_313 = iParam1;
	func_265(uParam0, 0, 1);
	if (bParam2)
	{
		func_266(uParam0);
	}
}

void func_146(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_267(uParam0, iParam1, sParam2))
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

void func_147()
{
	func_268(&(sLocal_14.f_205[0 /*36*/]), sLocal_14.f_3, "IG_SUNWORSHIPPER", Global_35, "player_three", "player_zero", 0, "", 0, "", 0, "", 0, "", 0, 0, 0, 0);
	func_268(&(sLocal_14.f_205[1 /*36*/]), sLocal_14.f_3, "IG_SUNWORSHIPPER", Global_35, "player_three", "player_zero", 0, "", 0, "", 0, "", 0, "", 0, 0, 0, 0);
	func_268(&(sLocal_14.f_205[2 /*36*/]), sLocal_14.f_3, "IG_SUNWORSHIPPER", Global_35, "player_three", "player_zero", 0, "", 0, "", 0, "", 0, "", 0, 0, 0, 0);
	func_268(&(sLocal_14.f_205[3 /*36*/]), sLocal_14.f_3, "IG_SUNWORSHIPPER", Global_35, "player_three", "player_zero", 0, "", 0, "", 0, "", 0, "", 0, 0, 0, 0);
}

void func_148(int iParam0, int iParam1)
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

void func_149(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!func_269(iParam1))
	{
		return;
	}
	if (!func_270(iParam2))
	{
		return;
	}
	func_271(&(iParam0->f_41[iParam1 /*59*/].f_21[iParam2 /*17*/]), sParam3, sParam4, iParam5, iParam6, iParam7, 0, 1, 0);
	if (bParam8)
	{
		func_272(&(iParam0->f_41[iParam1 /*59*/]), iParam2, 1);
	}
}

int func_150(int iParam0, int iParam1, int iParam2)
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

void func_151(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		func_273(iParam0, iParam1);
	}
	iParam0->f_41[iParam1 /*59*/].f_56 = iParam2;
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	if (!func_269(iParam1))
	{
		return;
	}
	iParam0->f_41[iParam1 /*59*/].f_57 = iParam2;
}

void func_153(int iParam0, int iParam1)
{
	if (!func_269(iParam1))
	{
		return;
	}
	iParam0->f_160 = iParam1;
}

int func_154(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_274(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = (iParam8 & 32) != false;
		bVar4 = (iParam8 & (1 << 19)) != false;
		bVar5 = (iParam8 & (1 << 24)) != false;
		bVar6 = (iParam8 & (1 << 24)) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_275(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_137(&(iParam1->f_13));
		}
		if (func_276(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_277(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_154(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_76(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!(iParam8 & (1 << 25)) != 0)
				{
					if ((iParam8 & 18) != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317 /*PCF_0x8E385F10*/, true))
						{
							func_278(*uParam0, 1, 1);
						}
					}
					else if (func_279(iParam1, 22))
					{
						func_278(*uParam0, 0, 1);
					}
				}
				if (func_280(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_281(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_282(iParam8);
					if (func_283(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_284(uParam3);
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
					func_285(iParam1, uParam3, fVar8);
					if (func_286(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_77(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_287(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_280(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_288(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_283(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_281(uParam0, func_280(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_282(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_77(uParam3, 0, 0, 1, 1);
					}
					func_289(iParam1, 1);
				}
				func_285(iParam1, uParam3, fVar8);
				if (func_287(uParam0, iParam1, fParam4, bVar6))
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
			func_290(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_155(int iParam0)
{
	int iVar0;

	if (VOLUME::DOES_VOLUME_EXIST(sLocal_14.f_161) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, sLocal_14.f_161, true, 0))
	{
		return false;
	}
	iVar0 = func_156(iParam0);
	if (iVar0 == 0)
	{
		if ((func_88(sLocal_14.f_193, 8) || func_88(sLocal_14.f_193, 16)) || func_88(sLocal_14.f_193, 128))
		{
			func_291(&sLocal_14, 0, 0);
			return false;
		}
		else
		{
			func_291(&sLocal_14, 0, 1);
			return true;
		}
	}
	if (func_88(sLocal_14.f_193, 128) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_3))
	{
		func_291(&sLocal_14, 1, 0);
		return false;
	}
	func_291(&sLocal_14, 1, 1);
	return true;
}

int func_156(int iParam0)
{
	return iParam0->f_160;
}

bool func_157(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_269(iParam1))
	{
		return false;
	}
	if (iParam0->f_41[iParam1 /*59*/].f_58 == -1)
	{
		return false;
	}
	iVar0 = iParam0->f_41[iParam1 /*59*/].f_58;
	if (!func_270(iVar0))
	{
		return false;
	}
	*iParam2 = iVar0;
	return true;
}

char* func_158(var uParam0)
{
	return uParam0;
}

bool func_159(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_164(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_292(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_160(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_293(iParam0, 13))
	{
		func_294(iParam0, 0);
	}
	else
	{
		func_295(iParam0, 0);
	}
	if (func_164(iParam0->f_6))
	{
		if (bParam2)
		{
			func_165(&(iParam0->f_6), 0, 1);
		}
	}
}

struct<2> /*16*/ func_161(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_162(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_163(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_164(int iParam0)
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

void func_165(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_164(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_296(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_297(iVar0);
	*uParam0 = 0;
}

void func_166(var uParam0, bool bParam1, int iParam2)
{
	func_298(iParam2);
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
		uParam0->f_13 = func_299(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if ((*uParam0 & 16) != 0)
			{
				if (!(*uParam0 & (1 << 25)) != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_113(uParam0, (1 << 25));
						}
					}
					else if (!(*uParam0 & (1 << 13)) != 0)
					{
						if (func_300(1))
						{
							func_113(uParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_300(1) || (*uParam0 & (1 << 13)) != 0))
				{
					func_114(uParam0, (1 << 25));
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
	if (!(uParam0->f_1 & (1 << 10)) != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_301(uParam0))
			{
				uParam0->f_15 = func_186();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_186() - uParam0->f_15) > 500)
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
	func_302(uParam0);
}

bool func_167(int iParam0, var uParam1)
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
			if (!func_303(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_304(iParam0, iVar2) <= func_305(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_168(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		uParam1->f_10 = iParam0;
	}
	if (func_306(iParam2, 1, 1, 1, 0))
	{
		func_113(uParam1, (1 << 11));
	}
	uParam1->f_16 = iParam2;
	func_307(uParam1, 1);
	func_308();
}

bool func_169(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_309(iParam0, !(*uParam1 & (1 << 28)) != 0, !(*uParam1 & (1 << 29)) != 0, !(*uParam1 & (1 << 30)) != 0, 0, 0))
		{
			if (uParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (uParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_310(uParam1);
			if (func_311(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_312(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_307(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_307(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_170(int iParam0, int iParam1, var uParam2)
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
	if (func_313(iParam1, !(*uParam2 & (1 << 28)) != 0, !(*uParam2 & (1 << 29)) != 0, !(*uParam2 & (1 << 30)) != 0, 0))
	{
		if (uParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (uParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_310(uParam2);
		if (func_311(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_312(uParam2)
				{
					func_307(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_171(int iParam0, var uParam1)
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
	if (func_303(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_312(uParam1)
		{
			fVar3 = func_310(uParam1);
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

int func_172(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_314(bParam1, bParam2, bParam3);
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

bool func_173(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_186();
	iVar1 = (iVar0 - uParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_174(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_315(uParam2);
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
			if (func_182(uParam2, iParam1))
			{
				func_307(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_175(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < (float)func_316(uParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_182(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_307(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_176(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_317(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_307(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_307(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE") /* GXTEntry: "Dynamite" */, uParam2->f_26, &vVar4, false, false);
					if (func_318(iParam1, vVar0, vVar4))
					{
						func_307(uParam2, 1);
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
					func_307(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE") /* GXTEntry: "Dynamite" */, uParam2->f_26, &vVar7, false, false);
					if (func_318(iParam1, vVar0, vVar7))
					{
						func_307(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_177(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2[2];
	Vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	bVar12 = (*uParam1 & (1 << 12)) != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_303(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_319(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_320(Global_1935630.f_34[iVar0]))
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
			if (func_321(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_322(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_323(uParam1, iParam0, fVar1, iVar0))
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

bool func_178(int iParam0, var uParam1)
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

bool func_179(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_186();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_180(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_324(iVar0, &iVar2))
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
	if (func_325(iVar0, iParam0))
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

int func_181(var uParam0, int iParam1)
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

bool func_182(var uParam0, int iParam1)
{
	if (func_326(uParam0))
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

bool func_183(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_327(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_184()
{
}

bool func_185(var uParam0, int iParam1)
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
		if (func_328(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_186();
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
						if (func_261(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_186();
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

int func_186()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_187()
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
	if ((func_186() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_188(var uParam0, int iParam1)
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
	fVar0 = func_305(uParam0);
	if (uParam0->f_12 > func_329(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_330(iParam1);
	iVar1 = func_331(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, uParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_189(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4.0f)
	{
		return 0;
	}
	bVar0 = (*uParam2 & 256) != false;
	bVar1 = (*uParam2 & (1 << 19)) != false;
	bVar2 = (*uParam2 & 128) != false;
	return func_332(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_190(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if ((*uParam1 & (1 << 26)) != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if ((*uParam1 & (1 << 25)) != 0)
	{
		if (func_333(iParam0, uParam1, 1))
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
					if (!func_334(uParam1, iParam0))
					{
						if (func_261(iVar4, Global_36, 1) < 7.0f)
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

bool func_191(int iParam0, var uParam1)
{
	if (!func_335(0))
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

bool func_192(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_186();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_193(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_194(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_186();
	}
	else if (func_186() - uParam1->f_4) > func_336(uParam1)
	{
		return func_337(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_195(var uParam0, int iParam1)
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

void func_196(bool bParam0, bool bParam1)
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
		PED::SET_PED_CONFIG_FLAG(bParam0, 43 /*PCF_DisableLadderClimbing*/, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(bParam0, -1);
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
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

int func_197()
{
	return Global_1572887.f_12;
}

bool func_198(int iParam0)
{
	int iVar0;

	iVar0 = func_338(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_199(int iParam0, int iParam1)
{
	*iParam0 -= (*iParam0 & iParam1);
}

void func_200(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_201(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_202(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam4, *uParam0, 1);
	if (iVar5 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, *uParam0);
			iVar1 = iVar0;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar3 < *uParam1) && iVar3 < iParam3)
			{
				if (func_339(iVar1, bParam5, bParam6, 1, 0, 0) && !DECORATOR::DECOR_EXIST_ON(iVar1, "bIgnoreThisPed"))
				{
					if (!func_340(iVar1, uParam2))
					{
						bVar2 = false;
						if (iParam7 != -1)
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar1, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar6)))
								{
									bVar2 = true;
								}
								else
								{
									iVar6++;
								}
							}
						}
						else
						{
							bVar2 = true;
						}
						if (bVar2)
						{
							(*uParam1)[iVar3] = iVar1;
							iVar3++;
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (iVar3 >= (iParam3 - 1) && iVar5 >= iParam3)
	{
	}
	ITEMSET::DESTROY_ITEMSET(*uParam0);
	return iVar3;
}

void func_203(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_341(iParam3);
	if (fParam4 == 0.0f)
	{
		if (func_92(iParam0, Global_35, 15.0f, 1))
		{
			if (!func_97(*iParam1, iParam2))
			{
				if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
				{
					func_100(iParam1, iParam2);
				}
			}
		}
		else if (func_97(*iParam1, iParam2))
		{
			AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
			func_199(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15.0f)
	{
		if (!func_97(*iParam1, iParam2))
		{
			if (AUDIO::_START_AUDIO_SCENESET(sVar0, "special_ped_scenes"))
			{
				func_100(iParam1, iParam2);
			}
		}
	}
	else if (func_97(*iParam1, iParam2))
	{
		AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
		func_199(iParam1, iParam2);
	}
}

int func_204(int iParam0)
{
	return iParam0->f_205.f_313;
}

void func_205(int iParam0, bool bParam1, bool bParam2)
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

void func_206(int iParam0, int iParam1, int iParam2)
{
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::SET_PED_TO_RAGDOLL(iParam0, iParam1, iParam2, 1, false, false, 0);
}

void func_207()
{
	func_342(&(sLocal_14.f_3), &uLocal_717, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 80.0f, -1.0f);
}

void func_208()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = iLocal_725;
	if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(sLocal_14.f_3, true, false)) > 20.0f)
	{
		return;
	}
	if (func_88(sLocal_14.f_193, (1 << 10)))
	{
		iVar2 = func_343(Global_35, 0);
		if (WEAPON::IS_WEAPON_A_GUN(iVar2))
		{
			iVar0 = 13;
		}
	}
	if (iLocal_725 == iVar0 || iVar0 == -1)
	{
		return;
	}
	sVar1 = func_344(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_3))
	{
		func_346(sLocal_14.f_3, sVar1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), Global_35, 0, "SUN_WORSHIPPER", func_345(iVar0), 1);
	}
	iLocal_725 = iVar0;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	if (!func_97(*iParam1, iParam2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		return;
	}
	if (func_97(*iParam1, iParam3))
	{
		if (!func_97(*iParam1, iParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam6, 0.0f, 0.0f, 0.0f, 0, sParam8);
			}
			func_100(iParam1, iParam4);
		}
	}
	else if (func_97(*iParam1, iParam4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam5, 0.0f, 0.0f, 0.0f, 0, sParam7);
		}
		func_199(iParam1, iParam4);
	}
}

void func_210(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_97(uParam0, iParam1))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE") /* GXTEntry: "Pause" */, true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		if (bParam3)
		{
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), true);
		}
		func_347();
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 174 /*PCF_DisableEvasiveStep*/, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 174 /*PCF_DisableEvasiveStep*/, true);
		}
		if (bParam2)
		{
			func_348();
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(Global_35, 174 /*PCF_DisableEvasiveStep*/, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 174 /*PCF_DisableEvasiveStep*/, false);
	}
}

bool func_211(var uParam0)
{
	if (((((func_88(*uParam0, 2) || func_88(*uParam0, 4)) || func_88(*uParam0, 16)) || func_88(*uParam0, 128)) || func_88(*uParam0, (1 << 10))) || func_88(*uParam0, (1 << 11)))
	{
		return true;
	}
	return false;
}

bool func_212(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_314)
	{
		case 0:
			func_265(uParam0, func_349(uParam0, uParam1), 1);
			break;
		case 1:
			func_265(uParam0, func_350(uParam0, uParam1), 1);
			break;
		case 2:
			func_265(uParam0, func_351(uParam0, uParam1), 1);
			break;
		case 3:
			if (func_352(uParam0, uParam1))
			{
				func_265(uParam0, 4, 1);
			}
			break;
		case 4:
			if (!func_353(uParam0, 2))
			{
				Stack.Invoke(uParam1->f_23, ((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_317 && func_16(uParam0, 1)) && iParam2 != 2)), uParam1);
				if (StackVal || StackVal)
				{
					func_354(uParam0, 2);
				}
			}
			else
			{
				func_265(uParam0, 5, 1);
			}
			break;
		case 5:
			if (!func_353(uParam0, 4))
			{
				if (func_355(uParam0, uParam1, iParam2))
				{
					func_354(uParam0, 4);
				}
			}
			if (!func_353(uParam0, 8))
			{
				Stack.Invoke(uParam1->f_24, ((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_317 && func_16(uParam0, 1)) && iParam2 != 2)), uParam1);
				if (StackVal || StackVal)
				{
					func_354(uParam0, 8);
				}
			}
			if (func_353(uParam0, 4) && func_353(uParam0, 8))
			{
				func_265(uParam0, 6, 1);
			}
			break;
		case 6:
			if (!func_353(uParam0, 16))
			{
				if (func_356(uParam0, uParam1))
				{
					func_354(uParam0, 16);
				}
			}
			if (!func_353(uParam0, 32))
			{
				Stack.Invoke(uParam1->f_25, ((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_317 && func_16(uParam0, 1)) && iParam2 != 2)), uParam1);
				if (StackVal || StackVal)
				{
					func_354(uParam0, 32);
				}
			}
			if (func_353(uParam0, 16) && func_353(uParam0, 32))
			{
				func_265(uParam0, 0, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_213(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return false;
	}
	return true;
}

void func_214(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar0 /*36*/], false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE((*uParam0)[iVar0 /*36*/], false);
		}
		iVar0++;
	}
}

int func_215()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	return (iParam2 & 31) | BUILTIN::SHIFT_LEFT((iParam0 & 1023), 5) | BUILTIN::SHIFT_LEFT((iParam1 & 16383), 15);
}

int func_217(int iParam0)
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

int func_218(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_357(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_215())
	{
		return -1;
	}
	iVar0 = func_216(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_358(iVar1, 0);
	func_359(iVar1, 0);
	func_360(iVar1, 0);
	func_251(iVar1, 0);
	func_361(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_362(iVar1, iParam4);
	}
	return iVar1;
}

bool func_219(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_220(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

void func_221(var uParam0, char* sParam1, Vector3 vParam2, Vector3 vParam5, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		uParam0->f_35 = 1;
		return;
	}
	uParam0->f_1 = sParam1;
	if (!MISC::IS_STRING_NULL(sParam8))
	{
		uParam0->f_2 = sParam8;
	}
	uParam0->f_19 = iParam10;
	uParam0->f_20 = iParam11;
	uParam0->f_21 = iParam12;
	uParam0->f_22 = iParam13;
	uParam0->f_25 = { vParam2 /*3*/ };
	uParam0->f_28 = { vParam5 /*3*/ };
	uParam0->f_31 = iParam9;
	uParam0->f_35 = 0;
}

int func_222(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 4)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_223(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 51)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_224(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 4)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_225(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 100)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_226(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, char* sParam12, int iParam13, int iParam14)
{
	func_25(uParam0);
	uParam0->f_12 = sParam1;
	*uParam0 = iParam2;
	uParam0->f_1 = iParam3;
	uParam0->f_2 = iParam4;
	uParam0->f_2.f_1 = iParam5;
	uParam0->f_13 = iParam6;
	uParam0->f_14 = sParam7;
	uParam0->f_15 = iParam8;
	uParam0->f_16 = sParam9;
	uParam0->f_17 = iParam10;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		uParam0->f_18 = "s_base";
	}
	else
	{
		uParam0->f_18 = sParam11;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
	{
		uParam0->f_19 = "s_base_end";
	}
	else
	{
		uParam0->f_19 = sParam12;
	}
	uParam0->f_20 = 0;
	uParam0->f_21 = iParam13;
	uParam0->f_22 = iParam14;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

int func_227(var uParam0)
{
	return 1;
}

void func_228(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

int func_229(var uParam0)
{
	struct<2> /*16*/ sVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(sLocal_14.f_3))
	{
		return 0;
	}
	if (func_363(uParam0))
	{
		return 1;
	}
	if (func_88(iLocal_714, 1) && !func_88(iLocal_714, 2))
	{
		func_89(&iLocal_714, 2);
	}
	if (func_92(Global_35, sLocal_14.f_3, func_364(), 1) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_570[1], true, 0))
	{
		func_89(&(sLocal_14.f_193), (1 << 15));
		return 1;
	}
	if ((VOLUME::DOES_VOLUME_EXIST(iLocal_570[2]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_570[2], true, 0)) && ENTITY::GET_ENTITY_SPEED(Global_35) >= 6.5f)
	{
		func_89(&(sLocal_14.f_193), (1 << 15));
		return 1;
	}
	if (func_88(sLocal_14.f_193, 8))
	{
		func_346(Global_35, "GREET_MALE", joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), sLocal_14.f_3, 1, 0, 0, 1);
		func_89(&(sLocal_14.f_193), (1 << 15));
		return 1;
	}
	if (func_88(sLocal_14.f_193, 16))
	{
		sVar0 = { func_365() /*2*/ };
		func_346(Global_35, sVar0.f_0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), sLocal_14.f_3, 0, 0, sVar0.f_1, 1);
		func_89(&(sLocal_14.f_193), (1 << 15));
		return 1;
	}
	return 0;
}

void func_230(var uParam0, int iParam1)
{
	uParam0->f_24 = iParam1;
}

int func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_363(uParam0))
	{
		return 1;
	}
	iVar0 = func_46(24);
	if (((iVar0 != 2 && iVar0 != 5) && iVar0 != 7) && iVar0 != 10)
	{
		iVar1 = func_343(Global_35, 0);
		iVar2 = func_343(Global_35, 1);
		if (iVar1 != joaat("WEAPON_UNARMED") || iVar2 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		}
	}
	if (func_46(24) == 1)
	{
		func_90(&(sLocal_14.f_193), 256);
		func_89(&(sLocal_14.f_193), (1 << 12));
		func_89(&(sLocal_14.f_193), (1 << 11));
		func_89(&(sLocal_14.f_193), (1 << 14));
		if (!func_366(Global_35, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, -3196.577f, -2537.936f, 66.851f, 1.0f, 20000, (ENTITY::GET_ENTITY_HEADING(sLocal_14.f_3) - 180.0f), 0.5f, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, sLocal_14.f_3, 0, -1.0f, -1.0f, -1.0f);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
	else
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SunWorpshiperBubble");
	}
	func_89(&(sLocal_14.f_193), 8);
	return 1;
}

void func_232(var uParam0, int iParam1)
{
	uParam0->f_25 = iParam1;
}

int func_233(var uParam0)
{
	return 1;
}

int func_234(var uParam0)
{
	int iVar0;

	iVar0 = func_46(24);
	if (iVar0 != 1)
	{
		func_367(sLocal_14.f_3, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		func_368();
	}
	else if (func_369(sLocal_14.f_3, 1000, 0, 0))
	{
		func_206(sLocal_14.f_3, 10, 5000);
	}
	if (func_353(&(sLocal_14.f_205), 4))
	{
		func_89(&(sLocal_14.f_193), (1 << 10));
		return 1;
	}
	if (!func_370())
	{
		return 0;
	}
	if (iVar0 == 1)
	{
		func_347();
		func_127(&(sLocal_14.f_3), &(iLocal_570[6]), &iLocal_727, 0.5f, 10.0f, (1 << 11));
	}
	if (((((((iVar0 == 0 || iVar0 == 3) || iVar0 == 4) || iVar0 == 6) || iVar0 == 8) || iVar0 == 9) || iVar0 == 11) && ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_14.f_3, -1254226615))
	{
		func_371(sLocal_14.f_3, Global_35, &uLocal_676, 10.0f, 0, 0, 2.0f, -1.0f, 1, 8, 0.0f, 0.0f, 2.0f, 2.0f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	}
	if ((((iVar0 == 2 || iVar0 == 5) || iVar0 == 7) || iVar0 == 10) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_3))
	{
		func_372(&(sLocal_14.f_3), &uLocal_718, &uLocal_722, &uLocal_716, 4, 0, 4000, 0);
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		func_346(sLocal_14.f_3, "PLAYER_AIMING_NOBODY", joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 0, "SUN_WORSHIPPER", 1, 1);
		return 1;
	}
	return 0;
}

int func_235(var uParam0)
{
	int iVar0;

	iVar0 = func_46(24);
	if ((((((iVar0 == 0 || iVar0 == 3) || iVar0 == 4) || iVar0 == 6) || iVar0 == 8) || iVar0 == 9) || iVar0 == 11)
	{
		func_373();
	}
	else if (iVar0 == 10)
	{
		func_374(sLocal_14.f_3, -4975.164f, -3205.659f, 11.1994f);
		if (func_366(sLocal_14.f_3, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
		{
			func_375(&(sLocal_14.f_11), 1);
			func_33(&(sLocal_14.f_11), 1);
			func_42(&(sLocal_14.f_11), 0);
			PED::SET_PED_CONFIG_FLAG(sLocal_14.f_3, 230 /*PCF_0x59D3A97A*/, true);
			func_196(sLocal_14.f_3, 1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_3) && !ENTITY::IS_ENTITY_DEAD(sLocal_14.f_3))
	{
		func_196(sLocal_14.f_3, 1);
	}
	return 1;
}

int func_236(var uParam0)
{
	Vector3 vVar0;
	bool bVar4;
	int iVar5;

	vVar0 = { func_142() /*4*/ };
	iVar5 = func_46(24);
	bVar4 = func_376(sLocal_14.f_3, vVar0, 2.0f, 1, 1);
	if (((sLocal_14.f_550 & func_377(&(sLocal_14.f_529))) && !func_211(&(sLocal_14.f_529))) && !func_16(&(sLocal_14.f_205), 4))
	{
		func_89(&(sLocal_14.f_193), 64);
		return 1;
	}
	if (iVar5 != 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_14.f_3) && !ENTITY::IS_ENTITY_DEAD(sLocal_14.f_3))
		{
			func_196(sLocal_14.f_3, 0);
		}
		if (!bVar4)
		{
			if ((((((iVar5 == 0 || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 8) || iVar5 == 9) || iVar5 == 11)
			{
				func_373();
			}
		}
	}
	if (((bVar4 && ((((((iVar5 == 0 || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 8) || iVar5 == 9) || iVar5 == 11)) && !PED::IS_PED_RAGDOLL(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_3))
	{
		return 1;
	}
	else if (((iVar5 == 2 || iVar5 == 5) || iVar5 == 7) || iVar5 == 10)
	{
		func_89(&(sLocal_14.f_193), 64);
		return 1;
	}
	return 0;
}

int func_237(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) /*3*/ };
	return func_378(iParam0, vVar0, iParam2);
}

int func_238(var uParam0)
{
	return 1;
}

int func_239(var uParam0)
{
	int iVar0;

	iVar0 = func_46(24);
	if (func_353(&(sLocal_14.f_205), 4) && iVar0 != 1)
	{
		return 1;
	}
	if (iVar0 == 1)
	{
		if (func_369(sLocal_14.f_3, 1000, 0, 0))
		{
			func_206(sLocal_14.f_3, 10, 5000);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(sLocal_14.f_3, joaat("BACKTOIDLE")))
		{
			func_153(&sLocal_14, 0);
			func_90(&(sLocal_14.f_193), (1 << 12));
			func_90(&(sLocal_14.f_193), (1 << 11));
			func_90(&(sLocal_14.f_193), (1 << 14));
			func_89(&(sLocal_14.f_193), 256);
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SunWorpshiperBubble");
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SunWorpshiperConvo");
		}
		func_347();
	}
	if (func_88(sLocal_14.f_193, 2))
	{
		return 1;
	}
	return 0;
}

int func_240(var uParam0)
{
	return 1;
}

int func_241(var uParam0)
{
	return 1;
}

int func_242(var uParam0)
{
	int iVar0;

	if (((sLocal_14.f_550 & func_377(&(sLocal_14.f_529))) && !func_211(&(sLocal_14.f_529))) && !func_16(&(sLocal_14.f_205), 4))
	{
		func_379(uParam0, func_224(0), func_225(2));
		return 1;
	}
	iVar0 = func_46(24);
	func_380();
	if (((iVar0 == 2 || iVar0 == 5) || iVar0 == 7) || iVar0 == 10)
	{
		return 1;
	}
	if (iVar0 != 1)
	{
		func_368();
		func_381();
	}
	return 0;
}

int func_243(var uParam0)
{
	if (PED::IS_PED_RAGDOLL(sLocal_14.f_3))
	{
		return 0;
	}
	return 1;
}

int func_244(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	if (!func_88(sLocal_14.f_193, 32))
	{
		func_90(&(sLocal_14.f_193), 256);
		func_89(&(sLocal_14.f_193), 32);
		if (uParam0->f_6.f_1 == func_225(43))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 10);
			iVar1 = iVar0;
			sVar2 = func_344(iVar1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(sLocal_14.f_3, 0);
				func_346(sLocal_14.f_3, sVar2, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), Global_35, 1, "SUN_WORSHIPPER", func_345(iVar1), 1);
			}
		}
		func_95(24);
		func_382(1, 0, 0, "", sLocal_14.f_3, 0, 1065353216 /* Float: 1f */, 0);
		func_383();
	}
	return 1;
}

int func_245(var uParam0)
{
	return 1;
}

int func_246(var uParam0)
{
	return 1;
}

int func_247(var uParam0)
{
	return 1;
}

int func_248(var uParam0)
{
	return 1;
}

void func_249(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_10 = iParam1;
	uParam0->f_10.f_1 = iParam2;
}

void func_250(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = iParam1;
	uParam0->f_6.f_1 = iParam2;
}

void func_251(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_252(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_253()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_254(int iParam0)
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
		iVar0 = func_384(iParam0);
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

int func_255()
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

bool func_256(var uParam0, Vector3 vParam1, float fParam4)
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

bool func_257(int iParam0, int iParam1, Vector3 vParam2, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*iParam0))
	{
		*iParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam2, fParam6, *iParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *iParam0);
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (func_385(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*iParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*iParam0);
	return false;
}

bool func_258(int iParam0, bool bParam1)
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

void func_259(int iParam0, Vector3 vParam1, float fParam4)
{
	if (!func_366(*iParam0, joaat("SCRIPT_TASK_FLEE")))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

float func_260(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return -1.0f;
	}
	vVar0 = { VOLUME::GET_VOLUME_SCALE(iParam0) /*3*/ };
	if (MISC::ABSF((vVar0.x - vVar0.y)) > 0.01f)
	{
		return vVar0.x;
	}
	return vVar0.x;
}

float func_261(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_262(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_386(vParam0))
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
		if (func_387(vParam0))
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
	func_388(iVar0, bParam8);
	return iVar0;
}

void func_263(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam1)
	{
		iVar0 |= (1 << 19);
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

int func_264(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_389(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_265(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_314 = iParam1;
	if (bParam2)
	{
		func_390(uParam0);
	}
}

void func_266(var uParam0)
{
	uParam0->f_316 = 0;
}

bool func_267(var uParam0, int iParam1, char* sParam2)
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

void func_268(var uParam0, var uParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	if (uParam0->f_35)
	{
		return;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_4 = sParam2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		uParam0->f_5 = iParam3;
		if (func_391())
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				uParam0->f_6 = "JOHN";
			}
			else
			{
				uParam0->f_6 = sParam4;
			}
			uParam0->f_23 = 0;
			uParam0->f_24 = 0;
		}
		else
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				uParam0->f_6 = "ARTHUR";
			}
			else
			{
				uParam0->f_6 = sParam5;
			}
			uParam0->f_23 = 1;
			uParam0->f_24 = "b_PlayerArthur";
		}
	}
	uParam0->f_7 = iParam6;
	uParam0->f_8 = sParam7;
	uParam0->f_9 = iParam8;
	uParam0->f_10 = sParam9;
	uParam0->f_11 = iParam10;
	uParam0->f_12 = sParam11;
	uParam0->f_13 = iParam12;
	uParam0->f_14 = sParam13;
	uParam0->f_15 = iParam14;
	uParam0->f_16 = iParam15;
	uParam0->f_17 = iParam16;
	uParam0->f_18 = iParam17;
}

bool func_269(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	return true;
}

bool func_270(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	return true;
}

void func_271(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_164(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_392(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_393(iParam0->f_6, iParam0->f_5, 0);
			}
			func_394(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_395(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_272(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 > -1)
	{
		iParam0->f_3 = iParam1;
		iParam0->f_7 = 0.0f;
		iParam0->f_8 = 0.0f;
		func_396(iParam0, 5);
		if (bParam2)
		{
			func_396(iParam0, 6);
		}
		else
		{
			func_289(iParam0, 6);
		}
	}
}

void func_273(int iParam0, int iParam1)
{
	if (!func_269(iParam1))
	{
		return;
	}
	func_72(&(iParam0->f_41[iParam1 /*59*/]), 0);
}

void func_274(int iParam0)
{
	if ((*iParam0 & 1) != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

float func_275(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_276(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_397(iParam0, iParam1))
		{
			if (!func_132(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, true);
				func_77(uParam2, 0, 0, 1, 0);
				func_113(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_132(iParam1->f_10, 1))
		{
			func_398(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			func_114(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_277(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_132(iParam4, 32);
		func_399(iParam1, uParam2, 0);
		iVar5 = func_400(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			return true;
		}
		func_77(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_132(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_132(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_132(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_132(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_132(iParam4, (1 << 23)) || func_132(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_132(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_132(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_279(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_279(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_132(iParam4, (1 << 26)))
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
				iParam6 = func_401(uParam0);
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
			if (func_132(iParam4, (1 << 28)))
			{
				iVar8 = func_402(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_403(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_279(iParam1, 23))
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
			if (func_132(iParam4, 2) || func_132(iParam4, 16))
			{
				func_278(*uParam0, 1, 1);
			}
			else
			{
				func_278(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_278(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
	}
}

bool func_279(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_280(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_404(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_281(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_405(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_132(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_282(int iParam0)
{
	if (func_132(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM") /* GXTEntry: "Aim weapon" */, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK") /* GXTEntry: "Fire weapon" */, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM") /* GXTEntry: "Aim drive-by weapon" */, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK") /* GXTEntry: "Fire drive-by weapon" */, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2") /* GXTEntry: "Fire secondary vehicle weapon" */, true);
	}
	if (func_132(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD") /* GXTEntry: "Reload" */, false);
	}
	if (func_132(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK") /* GXTEntry: "Melee attack" */, false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_283(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_406(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = (iParam10 & 128) != false;
	bVar7 = (iParam10 & 64) != false;
	bVar8 = (iParam10 & (1 << 9)) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_407(Global_35)) || func_408(Global_35)) || func_409(Global_35));
	fVar12 = -1.0f;
	if (func_60(&(iParam1->f_13)))
	{
		fVar12 = func_62(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_164((uParam4[iVar0 /*17*/])->f_6);
		func_410(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_411(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_412(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_77(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_413(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_399(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_414(iParam1, fParam6, iParam1->f_9))
					{
						func_137(&(iParam1->f_18));
						if (bVar6)
						{
							func_413(uParam4, 0, 0);
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
		func_415(iParam1, fParam2);
	}
	return bVar5;
}

void func_284(var uParam0)
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

void func_285(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_416(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_415(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_286(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_417(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_396(iParam1, 0);
				func_399(iParam1, uParam2, func_279(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_287(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_137(&(iParam1->f_18));
			return 0;
		}
		else if (func_60(&(iParam1->f_18)))
		{
			func_63(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_60(&(iParam1->f_18)))
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
	return func_418(&(iParam1->f_18), fParam2);
	return 1;
}

void func_288(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_410(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_289(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_290(int* iParam0, var uParam1)
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
	func_399(iParam0, uParam1, 1);
	func_77(uParam1, 0, 1, 1, 0);
	MISC::COPY_SCRIPT_STRUCT(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

void func_291(int iParam0, int iParam1, bool bParam2)
{
	if (!func_269(iParam1))
	{
		return;
	}
	if (func_156(iParam0) == iParam1)
	{
		if (bParam2)
		{
			if (func_419(iParam0, iParam1) != 1)
			{
				func_151(iParam0, iParam1, 1, 1);
			}
		}
		else if (func_419(&sLocal_14, iParam1) != func_150(3, 0, 0))
		{
			func_151(&sLocal_14, iParam1, func_150(3, 0, 0), 1);
		}
	}
}

bool func_292(int iParam0, bool bParam1)
{
	if (bParam1 && !func_164(iParam0))
	{
		return false;
	}
	return !func_420(iParam0, 4);
}

bool func_293(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_294(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_295(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_296(int iParam0)
{
	return iParam0;
}

void func_297(int iParam0)
{
	if (!func_421(iParam0))
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

void func_298(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_22 & 4) != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_422();
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
			func_423(&(Global_1935630.f_34), &(Global_1935630.f_39));
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
				case joaat("WEAPON_LASSO") /* GXTEntry: "Lasso" */:
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

var func_299(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_300(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_424(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_301(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_197() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_425(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_425(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_331(iVar0) == -1)
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

void func_302(var uParam0)
{
	if ((*uParam0 & 8) != 0 || (*uParam0 & 16) != 0)
	{
		func_426(uParam0);
	}
}

bool func_303(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_331(iParam2);
	}
	else
	{
		iVar1 = func_330(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_331(iParam0);
	}
	else
	{
		iVar0 = func_330(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_132(*uParam1, (1 << 23)))
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

float func_304(int iParam0, int iParam1)
{
	return func_327(iParam0, iParam1, 1, 1);
}

float func_305(var uParam0)
{
	return uParam0->f_26;
}

bool func_306(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_307(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(uParam0, (1 << 27));
	}
	else
	{
		func_114(uParam0, (1 << 27));
	}
}

void func_308()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_309(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_327(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_343(iVar0, 0)))
		{
			if (func_427(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_310(var uParam0)
{
	return uParam0->f_17;
}

bool func_311(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_132(*uParam0, (1 << 22)))
	{
		fVar0 = fParam3;
	}
	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, fParam3, -1.0f, fVar0))
	{
		return true;
	}
	if ((*uParam0 & (1 << 15)) != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_312(var uParam0)
{
	return uParam0->f_18;
}

bool func_313(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_343(iVar0, 0)))
		{
			if (func_428(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_314(bool bParam0, bool bParam1, bool bParam2)
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

float func_315(var uParam0)
{
	return uParam0->f_23;
}

int func_316(var uParam0)
{
	return uParam0->f_21;
}

int func_317(var uParam0)
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
	if ((*uParam0 & (1 << 24)) != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_318(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_429(iParam0, vParam4, 0.5f))
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

int func_319(int iParam0)
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
	if (func_369(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_320(int iParam0)
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

bool func_321(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_430(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5.0f;
	if ((*uParam0 & (1 << 16)) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_322(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_430(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10.0f;
	if ((*uParam0 & (1 << 16)) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_323(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_430(iParam1))
	{
		return false;
	}
	if ((*uParam0 & (1 << 16)) != 0)
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

bool func_324(int iParam0, int iParam1)
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

bool func_325(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_431(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_326(var uParam0)
{
	return !(*uParam0 & 2) != 0;
}

float func_327(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_328(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_261(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_329(var uParam0)
{
	return uParam0->f_24;
}

int func_330(int iParam0)
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

int func_331(int iParam0)
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

int func_332(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_324(Global_35, &iVar1))
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
		fVar2 = func_327(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_327(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_333(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_424(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_334(uParam1, iVar0))
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
				if (!bParam2 || !func_334(uParam1, iVar1))
				{
					if (func_261(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_334(var uParam0, int iParam1)
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

int func_335(int iParam0)
{
	if (func_391())
	{
		return 0;
	}
	return func_432(Global_1347702[58 /*49*/].f_15, 1);
}

int func_336(var uParam0)
{
	return uParam0->f_20;
}

int func_337(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_338(int iParam0)
{
	if (!func_219(iParam0))
	{
		return -1;
	}
	return func_384(iParam0);
}

bool func_339(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_433(iParam0))
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
		if (func_434(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_340(int iParam0, var uParam1)
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

char* func_341(int iParam0)
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

void func_342(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
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

int func_343(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

char* func_344(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return "PLAYER_STILL_HANGING";
		case 4:
			return "GUN_RUN";
		case 5:
		case 11:
			return "PLEAD";
		case 6:
			return "INTIMIDATED_GEN";
		case 12:
			return "GREET_PLAYER_MASK";
		case 13:
			return "PLAYER_WEAPON_EQUIPPED";
		case 14:
			return "PLAYER_LASSO_SWINGING";
		case 7:
			return "PANIC_HELP";
		case 8:
			return "SCARED_HELP";
		case 9:
			return "GENERIC_ANGRY_SHOUT";
		default:
			break;
	}
	return "";
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
		case 14:
			return 1;
		case 1:
		case 5:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

bool func_346(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = sParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = uParam3;
	sVar0.f_5 = iParam4;
	sVar0.f_6 = iParam7;
	return func_435(iParam0, &sVar0);
}

void func_347()
{
	Global_1905944.f_5695 = 1;
}

void func_348()
{
	CAM::_DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE_2();
	CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
	CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
	if (Global_1935689.f_1)
	{
		func_436(0);
	}
}

int func_349(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	uParam1->f_27 = 0;
	if (func_437(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_438(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			func_439(uParam0[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			func_439(uParam0[iVar1 /*36*/], 0);
		}
		return 2;
	}
	return 1;
}

int func_350(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_437(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_438(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_2);
		}
	}
	return 2;
}

int func_351(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_437(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_438(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		func_440(uParam0[iVar1 /*36*/]);
		return 3;
	}
	return 4;
}

bool func_352(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_437(uParam0, uParam1, 0))
	{
		return true;
	}
	uVar0 = *uParam1;
	if (!func_438(uVar0, &iVar1))
	{
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true))
	{
		func_441(uParam0[iVar1 /*36*/]);
		return true;
	}
	return false;
}

bool func_353(var uParam0, int iParam1)
{
	return func_88(uParam0->f_315, iParam1);
}

void func_354(var uParam0, int iParam1)
{
	func_89(&(uParam0->f_315), iParam1);
}

bool func_355(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;

	uVar0 = *uParam1;
	if (func_437(uParam0, uParam1, 0))
	{
		return true;
	}
	if (!func_438(uVar0, &iVar1))
	{
		return true;
	}
	if (uParam1->f_20 >= 5)
	{
		if (func_16(uParam0, 2) && iParam2 != 4)
		{
			func_442(uParam0, uParam1);
			return true;
		}
		else if ((uParam0->f_317 && func_16(uParam0, 1)) && iParam2 != 2)
		{
			func_442(uParam0, uParam1);
			return true;
		}
		if (iParam2 != 5)
		{
			if ((!uParam0->f_317 && func_16(uParam0, 1)) && iParam2 != 2)
			{
				func_442(uParam0, uParam1);
				return true;
			}
			if (func_16(uParam0, 4) && iParam2 != 3)
			{
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING((uParam0[iVar1 /*36*/])->f_3))
				{
					func_442(uParam0, uParam1);
					return true;
				}
			}
		}
	}
	switch (uParam1->f_20)
	{
		case 0:
			if ((uParam0[iVar1 /*36*/])->f_32)
			{
				uParam1->f_20 = 1;
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				uParam1->f_20 = 2;
			}
			return false;
		case 1:
			if (func_443(Global_35, (*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_33, uParam1->f_12, &((uParam0[iVar1 /*36*/])->f_34), 1065353216 /* Float: 1f */, 1, 0, 1))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				else
				{
					uParam1->f_20 = 2;
				}
			}
			return false;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED((*uParam0)[iVar1 /*36*/], uParam1->f_12) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST((*uParam0)[iVar1 /*36*/], uParam1->f_12);
			}
			uParam1->f_20 = 3;
			return false;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				uParam1->f_20 = 4;
			}
			return false;
		case 4:
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST((*uParam0)[iVar1 /*36*/], uParam1->f_12, true);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_14))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_14, uParam1->f_13, false);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_16, uParam1->f_15, false);
				}
			}
			uParam1->f_20 = 5;
			return false;
		case 5:
			func_442(uParam0, uParam1);
			uParam1->f_20 = 6;
			return false;
		case 6:
			if (iParam2 != 5)
			{
				switch (uParam1->f_21)
				{
					case 0:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true))
						{
							return true;
						}
						break;
					case 1:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true) && ANIMSCENE::GET_ANIM_SCENE_PHASE((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 2:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true))
						{
							return true;
						}
						break;
					case 3:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true) && ANIMSCENE::GET_ANIM_SCENE_PHASE((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 4:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true))
						{
							return true;
						}
						break;
					case 5:
						if ((ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true)) && ANIMSCENE::GET_ANIM_SCENE_PHASE((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
				}
				if (ANIMSCENE::IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::_IS_ANIM_SCENE_ABORTED((*uParam0)[iVar1 /*36*/]))
				{
					return true;
				}
			}
			else if (!func_16(uParam0, 8))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_356(var uParam0, var uParam1)
{
	func_444(uParam1, &(uParam0->f_173));
	return true;
}

bool func_357(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_358(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_445(iParam0);
	}
	else
	{
		func_446(iParam0, iParam1);
	}
	func_447();
}

void func_359(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_360(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_361(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_362(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

bool func_363(var uParam0)
{
	int iVar0;

	iVar0 = func_46(24);
	if (func_88(sLocal_14.f_193, (1 << 17)))
	{
		return true;
	}
	if (iVar0 != 1)
	{
		if (((sLocal_14.f_550 & func_377(&(sLocal_14.f_529))) && !func_211(&(sLocal_14.f_529))) && !func_16(&(sLocal_14.f_205), 4))
		{
			func_379(uParam0, func_224(3), func_225(50));
			func_89(&(sLocal_14.f_193), (1 << 17));
			return true;
		}
	}
	else if (((sLocal_14.f_550 & func_377(&(sLocal_14.f_529))) && !func_211(&(sLocal_14.f_529))) && !func_16(&(sLocal_14.f_205), 4))
	{
		func_206(sLocal_14.f_3, 10, 500);
		func_379(uParam0, func_224(3), func_225(50));
		func_89(&(sLocal_14.f_193), (1 << 17));
		return true;
	}
	return false;
}

float func_364()
{
	float fVar0;

	switch (func_46(24))
	{
		case 0:
			fVar0 = 8.0f;
			break;
		case 1:
			fVar0 = 8.0f;
			break;
		case 2:
			fVar0 = 30.0f;
			break;
		case 3:
			fVar0 = 2.0f;
			break;
		case 4:
			fVar0 = 8.0f;
			break;
		case 5:
			fVar0 = 30.0f;
			break;
		case 6:
			fVar0 = 8.0f;
			break;
		case 7:
			fVar0 = 30.0f;
			break;
		case 8:
			fVar0 = 8.0f;
			break;
		case 9:
			fVar0 = 8.0f;
			break;
		case 10:
			fVar0 = 30.0f;
			break;
		case 11:
			fVar0 = 8.0f;
			break;
	}
	if (ENTITY::GET_ENTITY_SPEED(Global_35) >= 6.5f)
	{
		fVar0 *= 2.0f;
	}
	return fVar0;
}

struct<2> /*16*/ func_365()
{
	struct<2> /*16*/ sVar0;

	switch (func_46(24))
	{
		case 0:
			sVar0.f_0 = "INSULT_MALE_CONV_PART1";
			sVar0.f_1 = 5;
			break;
		case 1:
			sVar0.f_0 = "INSULT_MALE_CONV_PART1";
			sVar0.f_1 = 6;
			break;
		case 3:
			sVar0.f_0 = "INSULT_MALE_CONV_PART1";
			sVar0.f_1 = 8;
			break;
		case 4:
			sVar0.f_0 = "INSULT_MALE_CONV_PART1";
			sVar0.f_1 = 2;
			break;
		case 6:
			sVar0.f_0 = "INSULT_MET_EARLIER_CONV_PART1";
			sVar0.f_1 = 1;
			break;
		case 8:
			sVar0.f_0 = "INSULT_MET_EARLIER_CONV_PART1";
			sVar0.f_1 = 2;
			break;
		case 9:
			sVar0.f_0 = "INSULT_MET_EARLIER_CONV_PART1";
			sVar0.f_1 = 4;
			break;
		case 11:
			sVar0.f_0 = "INSULT_MET_EARLIER_CONV_PART1";
			sVar0.f_1 = 5;
			break;
		default:
			sVar0.f_0 = "INSULT_MALE_CONV_PART1";
			sVar0.f_1 = 9;
			break;
	}
	return sVar0;
}

bool func_366(bool bParam0, int iParam1)
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

void func_367(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229 /*PRF_0xB5071147*/, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::GET_PED_CROUCH_MOVEMENT(iParam0))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
		}
		func_448(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188 /*PRF_0x8DF01625*/, true);
		}
	}
}

void func_368()
{
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (func_327(Global_35, sLocal_14.f_3, 1, 1) > 10.0f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(sLocal_14.f_3, 1.5f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(sLocal_14.f_3, 1.0f);
		}
	}
	else if (func_327(Global_35, sLocal_14.f_3, 1, 1) > 10.0f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(sLocal_14.f_3, 2.0f);
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(sLocal_14.f_3, 1.5f);
	}
}

bool func_369(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, joaat("WEAPON_UNARMED") /* GXTEntry: "Unarmed" */, iParam1))
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

bool func_370()
{
	if (((!func_449() && !func_366(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD"))) && (!ENTITY::DOES_ENTITY_EXIST(func_450()) || !ENTITY::IS_ENTITY_IN_AIR(func_450(), 1))) && (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35)) || !ENTITY::IS_ENTITY_IN_AIR(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), 1)))
	{
		return true;
	}
	if (func_451())
	{
		func_452();
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		if (!func_366(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD")))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), func_453(PLAYER::GET_PLAYER_INDEX()), 1.0f, 8);
		}
	}
	return false;
}

void func_371(int iParam0, bool bParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		func_454(iParam0, bParam1, iParam18);
	}
}

int func_372(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return 0;
	}
	if (*uParam1)
	{
		if (!func_60(uParam2))
		{
			func_93(uParam2, 0.0f);
			return 0;
		}
		else if (func_128(uParam2) > iParam6)
		{
			func_63(uParam2);
			*uParam3++;
			*uParam1 = 0;
			return 0;
		}
		else
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		if (fParam7 == 0.0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				return 0;
			}
			fParam7 = func_327(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0.0f && fParam7 < 10.0f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10.0f && fParam7 < 20.0f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20.0f && fParam7 < 30.0f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30.0f && fParam7 < 50.0f)
			{
				iParam5 = joaat("SONAR_OVERHEARD_BEAT_BIG");
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam5, *uParam0);
		*uParam1 = 1;
		return 1;
	}
	return 0;
}

void func_373()
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_142() /*4*/ };
	if (!func_366(sLocal_14.f_3, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(sLocal_14.f_3, sVar0, 1.0f, -1, 0.5f, 0, sVar0.f_3);
	}
	PED::SET_PED_KEEP_TASK(sLocal_14.f_3, true);
}

void func_374(bool bParam0, Vector3 vParam1)
{
	if (!func_366(bParam0, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD(bParam0, vParam1, 1.0f, -1, 40000.0f, 0.5f, 0);
	}
}

void func_375(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(uParam0, (1 << 10));
	}
	else
	{
		func_114(uParam0, (1 << 10));
	}
}

int func_376(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_455(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_377(var uParam0)
{
	if ((((func_88(*uParam0, 32) || func_88(*uParam0, 64)) || func_88(*uParam0, (1 << 9))) || func_88(*uParam0, 256)) || func_88(*uParam0, 8))
	{
		return 1;
	}
	return 0;
}

int func_378(int iParam0, Vector3 vParam1, float fParam4)
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
	fVar9 = func_456(vVar3, vVar6);
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
	if (func_457(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_379(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	uParam0->f_2.f_1 = iParam2;
}

void func_380()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;

	iVar0 = iLocal_725;
	if (!func_458(&uLocal_719))
	{
		func_459(&uLocal_719, 0);
	}
	if (iLocal_715 <= 0)
	{
		iLocal_715 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 20001);
	}
	if (func_460(&uLocal_719, iLocal_715))
	{
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_570[2]))
		{
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_570[2], true, 0))
			{
				return;
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_570[1], true, 0))
		{
			return;
		}
		iVar3 = func_343(Global_35, 0);
		if (WEAPON::IS_WEAPON_A_GUN(iVar3))
		{
			iVar0 = 13;
		}
		else
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			iVar0 = iVar1;
		}
		if (iLocal_725 == iVar0 || iVar0 == -1)
		{
			return;
		}
		sVar2 = func_344(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(sLocal_14.f_3))
		{
			func_346(sLocal_14.f_3, sVar2, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), Global_35, 0, "SUN_WORSHIPPER", func_345(iVar0), 1);
		}
		iLocal_725 = iVar0;
		iLocal_715 = 0;
	}
}

void func_381()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;

	sVar0 = "script_special_ped@pdsnw_sun_worshipper@ig@ig_4";
	sVar1 = "ig4_pdsnw_standtoidle01_ig_sunworshipper";
	sVar2 = "ig4_pdsnw_standtoidle01_ig_sunworshipper_face";
	sVar3 = "ig4_pdsnw_wnt_idle01_ig_sunworshipper";
	sVar4 = "ig4_pdsnw_wnt_idle01_ig_sunworshipper_face";
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(sLocal_14.f_3, sVar0, sVar3, 1))
	{
		return;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		return;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(sLocal_14.f_3, sVar0, sVar1, 1))
	{
		TASK::TASK_PLAY_ANIM(sLocal_14.f_3, sVar0, sVar1, 4.0f, -8.0f, -1, 1042, 0.0f, false, 0, false, 0, false);
		TASK::TASK_PLAY_ANIM(sLocal_14.f_3, sVar0, sVar2, 4.0f, -8.0f, -1, 1, 0.0f, false, 0, false, 0, false);
	}
	if (ENTITY::HAS_ENTITY_ANIM_FINISHED(sLocal_14.f_3, sVar0, sVar1, 1))
	{
		TASK::TASK_PLAY_ANIM(sLocal_14.f_3, sVar0, sVar3, 4.0f, -2.0f, -1, 2065, 0.0f, false, 0, false, 0, false);
		TASK::TASK_PLAY_ANIM(sLocal_14.f_3, sVar0, sVar4, 4.0f, -8.0f, -1, 1, 0.0f, false, 0, false, 0, false);
	}
}

void func_382(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_197() != -1)
	{
		return;
	}
	if ((Global_36616 & func_461(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_462(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_463(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_464(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_463(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_383()
{
	if (!func_366(sLocal_14.f_3, joaat("SCRIPT_TASK_FLEE")) && !PED::IS_PED_RESPONDING_TO_THREAT(sLocal_14.f_3))
	{
		PED::SET_PED_CONFIG_FLAG(sLocal_14.f_3, 153 /*PCF_0x23E3351E*/, false);
		TASK::TASK_SMART_FLEE_PED(sLocal_14.f_3, Global_35, 6000.0f, -1, 0, 3.0f, 0);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(sLocal_14.f_3, 17, true);
	PED::SET_PED_KEEP_TASK(sLocal_14.f_3, true);
}

int func_384(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_465(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_385(int iParam0, int iParam1, bool bParam2)
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

bool func_386(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_387(Vector3 vParam0)
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_388(int iParam0, bool bParam1)
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

void func_389(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_466(iParam1))
		{
			func_467(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_468(iParam0, 0, 1);
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
			func_469(iParam0, 0);
			bVar0 = true;
		}
		func_470(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_390(var uParam0)
{
	uParam0->f_315 = 0;
}

bool func_391()
{
	if (func_197() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_392(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_164(iParam0))
	{
		return;
	}
	iVar0 = func_296(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_393(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_164(iParam0))
	{
		return;
	}
	iVar0 = func_296(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_394(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_164(iParam0))
	{
		return;
	}
	iVar0 = func_296(iParam0);
	if (bParam1)
	{
		func_471(iParam0, 4);
		func_472(iVar0, 1);
		func_473(iVar0, 1);
	}
	else
	{
		func_474(iParam0, 4);
		func_473(iVar0, 0);
	}
}

void func_395(int* iParam0, char* sParam1)
{
	if (func_164(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_393(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_295(iParam0, 1);
}

void func_396(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_397(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_475((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_398(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_416(uParam0[iVar0 /*17*/]))
		{
			func_294(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_399(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_165(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_72(iParam0, 0);
		}
	}
}

int func_400(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_476(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_164((uParam2[iVar0 /*17*/])->f_6))
		{
			func_294(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_401(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_477(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_402(var uParam0, int iParam1)
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

void func_403(int* iParam0, int* iParam1)
{
	if (!func_279(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_294(iParam1, 19);
			func_396(iParam0, 23);
			func_478(iParam1, 2);
		}
	}
}

bool func_404(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_479(16))
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
					func_480(16);
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

void func_405(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_476(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_406(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_407(int iParam0)
{
	return func_481(iParam0, 4) | func_481(iParam0, 5);
}

int func_408(int iParam0)
{
	return func_481(iParam0, 7);
}

int func_409(int iParam0)
{
	return func_481(iParam0, 6);
}

void func_410(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_416(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_476(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_411(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_482(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_292(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_394(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_394(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_483(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_412(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_484(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_485(iParam1, 1))
	{
		func_486(iParam1, 1);
		return true;
	}
	return false;
}

void func_413(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_160(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_414(int* iParam0, float fParam1, bool bParam2)
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

void func_415(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203 /*PRF_0x010BCD70*/, true);
	}
}

bool func_416(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_417(int iParam0)
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

int func_418(var uParam0, float fParam1)
{
	if (func_487(uParam0, fParam1))
	{
		func_63(uParam0);
		return 1;
	}
	return 0;
}

int func_419(int iParam0, int iParam1)
{
	return iParam0->f_41[iParam1 /*59*/].f_56;
}

bool func_420(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

bool func_421(int iParam0)
{
	return func_420(iParam0, 2);
}

bool func_422()
{
	if (func_488())
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK") /* GXTEntry: "Fire weapon" */);
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311 /*PRF_IsAimingWithWeapon*/);
	}
	else
	{
		return Global_1954819.f_992[2];
	}
	return false;
}

void func_423(var uParam0, var uParam1)
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

bool func_424(bool bParam0, int iParam1, int iParam2)
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

int func_425(var uParam0)
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

void func_426(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_114(uParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_113(uParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_427(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_428(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_428(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	int iVar2;

	iVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (iVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_429(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

bool func_430(int iParam0)
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

int func_431(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED"); /* GXTEntry: "Unarmed" */
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

int func_432(int iParam0, bool bParam1)
{
	switch (func_338(iParam0))
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

bool func_433(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_489(), true))
	{
		return true;
	}
	return false;
}

int func_434(int iParam0, bool bParam1)
{
	return func_490(iParam0, Global_1894899.f_2, bParam1);
}

bool func_435(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_436(bool bParam0)
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

bool func_437(var uParam0, var uParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	uVar0 = *uParam1;
	if (bParam2)
	{
		if (func_16(uParam0, 2))
		{
			return true;
		}
		if (func_16(uParam0, 1))
		{
			return true;
		}
	}
	if (!func_438(uVar0, &iVar1))
	{
		return true;
	}
	if ((uParam0[iVar1 /*36*/])->f_35)
	{
		return true;
	}
	if (uParam1->f_26 == 1)
	{
		return true;
	}
	else if (uParam1->f_26 == 2)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
	{
		uParam1->f_26 = 1;
		return true;
	}
	if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true)) && ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST((*uParam0)[iVar1 /*36*/], uParam1->f_12))
		{
			uParam1->f_26 = 1;
			return true;
		}
		else
		{
			uParam1->f_26 = 2;
			return false;
		}
	}
	return false;
}

bool func_438(int iParam0, int iParam1)
{
	if (func_213(iParam0))
	{
		*iParam1 = iParam0;
		return true;
	}
	return false;
}

int func_439(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 1;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, sParam1, false, true);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, uParam0->f_2, false, true);
	}
	else
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, 0, false, true);
	}
	return 1;
}

int func_440(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false);
	bVar1 = ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return 1;
	}
	bVar3 = ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0);
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return 0;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return 0;
}

int func_441(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 1;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_6))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_6, uParam0->f_5, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_4, uParam0->f_3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_8))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_8, uParam0->f_7, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_10, uParam0->f_9, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_12))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_12, uParam0->f_11, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_14, uParam0->f_13, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_16))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_16, uParam0->f_15, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_18))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_18, uParam0->f_17, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_20))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_20, uParam0->f_19, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_22))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_22, uParam0->f_21, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_24))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_24, uParam0->f_23, false);
	}
	if (!func_386(uParam0->f_25) || !func_386(uParam0->f_28))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, uParam0->f_25, uParam0->f_28, 2);
	}
	return 1;
}

int func_442(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = uParam0->f_173.f_1;
	iVar1 = uParam1->f_1;
	iVar2 = uParam0->f_173;
	iVar3 = *uParam1;
	if (iVar2 != iVar3)
	{
		return func_491(uParam0, iVar2, &(uParam1->f_27));
	}
	if (iVar0 != iVar1)
	{
		return func_492(uParam0);
	}
	return 1;
}

bool func_443(bool bParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && PED::IS_PED_ON_MOUNT(bParam0))
				{
					vVar0 = { func_493(bParam0, iParam1, sParam2, sParam3, 0) /*3*/ };
					if (!func_386(vVar0))
					{
						if (func_457(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), ENTITY::GET_ENTITY_COORDS(bParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0), vVar0))
						{
							iVar5 = (1 << 17);
						}
						else
						{
							iVar5 = (1 << 18);
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(bParam0, iVar5, 0, 0, 0, 0);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					if (PED::IS_PED_CARRYING_SOMETHING(bParam0))
					{
						iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(bParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(bParam0, true, false), (1 << 30), 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, fParam5, bParam7, 0, 20000, -1.0f);
					func_494(bParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(bParam0))
				{
					iVar3 = PED::_GET_LAST_MOUNT(bParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						TASK::TASK_FLEE_PED(iVar3, bParam0, 6, 0, 4.0f, -1, 0);
					}
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, fParam5, bParam7, 0, 20000, -1.0f);
					func_494(bParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(bParam0, iParam1))
					{
						return true;
					}
				}
				else if (func_366(bParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(bParam0) > 0)
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(bParam0) && ANIMSCENE::_HAS_ENTITY_ENTERED_ANIM_SCENE(iParam1, sParam2))
							{
								*uParam4 = 3;
								return true;
							}
						}
					}
				}
				break;
			case 3:
				return true;
		}
	}
	return false;
}

void func_444(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	uParam1->f_2 = uParam0->f_2;
	uParam1->f_2.f_1 = uParam0->f_2.f_1;
	uParam1->f_4 = uParam0->f_4;
	uParam1->f_4.f_1 = uParam0->f_4.f_1;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_6.f_1 = uParam0->f_6.f_1;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_8.f_1 = uParam0->f_8.f_1;
	uParam1->f_10 = uParam0->f_10;
	uParam1->f_10.f_1 = uParam0->f_10.f_1;
	uParam1->f_12 = uParam0->f_12;
	uParam1->f_13 = uParam0->f_13;
	uParam1->f_14 = uParam0->f_14;
	uParam1->f_15 = uParam0->f_15;
	uParam1->f_16 = uParam0->f_16;
	uParam1->f_17 = uParam0->f_17;
	uParam1->f_18 = uParam0->f_18;
	uParam1->f_19 = uParam0->f_19;
	uParam1->f_23 = uParam0->f_23;
	uParam1->f_24 = uParam0->f_24;
	uParam1->f_25 = uParam0->f_25;
	uParam1->f_20 = uParam0->f_20;
	uParam1->f_21 = uParam0->f_21;
	uParam1->f_22 = uParam0->f_22;
	uParam1->f_26 = uParam0->f_26;
	uParam1->f_27 = uParam0->f_27;
}

int func_445(int iParam0)
{
	int iVar0;

	iVar0 = func_465(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_495(iVar0);
}

int func_446(int iParam0, int iParam1)
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
			func_496(iVar2);
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

void func_447()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

void func_448(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP") /* GXTEntry: "Jump" */, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER") /* GXTEntry: "Take cover" */, false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM") /* GXTEntry: "Aim weapon" */, false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK") /* GXTEntry: "Fire weapon" */, false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU") /* GXTEntry: "Wheel Menu" */, false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK") /* GXTEntry: "Melee attack" */, false);
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
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK") /* GXTEntry: "Stealth mode" */, false);
	}
	func_497(0);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER") /* GXTEntry: "Enter vehicle" */, false);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129 /*PRF_DisableAmbientPrompts*/, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189 /*PRF_0x686ECAF3*/, true);
		}
		if (bParam6)
		{
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43 /*PCF_DisableLadderClimbing*/, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43 /*PCF_DisableLadderClimbing*/, true);
			}
		}
	}
}

bool func_449()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_451())
	{
		return true;
	}
	return false;
}

var func_450()
{
	return Global_1900383.f_393;
}

bool func_451()
{
	if (func_498(Global_35) || func_499(Global_35))
	{
		return true;
	}
	return false;
}

int func_452()
{
	if (func_498(Global_35) || func_499(Global_35))
	{
		if (!func_366(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD")))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, func_450(), func_453(PLAYER::GET_PLAYER_INDEX()), 1.0f, 8);
		}
		return 0;
	}
	else if ((!func_498(Global_35) && !func_499(Global_35)) && !func_366(Global_35, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD")))
	{
		return 1;
	}
	return 0;
}

Vector3 func_453(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_454(int iParam0, bool bParam1, int iParam2)
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

float func_455(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

float func_456(Vector3 vParam0, Vector3 vParam3)
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

bool func_457(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

bool func_458(var uParam0)
{
	return func_136(*uParam0, 1);
}

void func_459(var uParam0, bool bParam1)
{
	if (bParam1 || !func_458(uParam0))
	{
		func_500(uParam0);
	}
}

bool func_460(var uParam0, int iParam1)
{
	if (func_501(uParam0, iParam1))
	{
		func_502(uParam0);
		return true;
	}
	return false;
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT") /* GXTEntry: "Loot Innocent" */:
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL") /* GXTEntry: "Murder" */:
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE") /* GXTEntry: "Frighten" */:
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN") /* GXTEntry: "Killed Vermin" */:
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL") /* GXTEntry: "Killed Domestic Animal" */:
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE") /* GXTEntry: "Killed Horse" */:
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE") /* GXTEntry: "Stole Horse" */:
			return (1 << 9);
		case joaat("HONOR_EVENT_STEAL_DONKEY") /* GXTEntry: "Stole Donkey" */:
			return (1 << 10);
		case joaat("HONOR_EVENT_STEAL_MULE") /* GXTEntry: "Stole Mule" */:
			return (1 << 11);
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT") /* GXTEntry: "Trampled Innocent" */:
			return (1 << 12);
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return (1 << 13);
		case joaat("HONOR_EVENT_ABANDON_ANIMALS") /* GXTEntry: "Abandon Dead Animals" */:
			return (1 << 14);
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT") /* GXTEntry: "Watched Animal Bleedout" */:
			return (1 << 15);
		case joaat("HONOR_EVENT_ANTAGONIZE") /* GXTEntry: "Antagonize" */:
			return (1 << 16);
		case joaat("HONOR_EVENT_THEFT") /* GXTEntry: "Theft" */:
			return (1 << 17);
		case joaat("HONOR_EVENT_INTERVENED") /* GXTEntry: "Intervened" */:
			return (1 << 18);
		case joaat("HONOR_EVENT_WANTED_IN_CAMP") /* GXTEntry: "Wanted In Camp" */:
			return (1 << 19);
		case joaat("HONOR_EVENT_DONATED_GAME") /* GXTEntry: "Donated Game" */:
			return (1 << 20);
		case joaat("HONOR_EVENT_ITEM_REQUEST") /* GXTEntry: "Item Request" */:
			return (1 << 21);
		case joaat("HONOR_EVENT_LONG_ABSENCE") /* GXTEntry: "Long Absence" */:
			return (1 << 22);
		default:
			break;
	}
	return 0;
}

int func_462(int iParam0)
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

void func_463(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_503();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_504(iParam0);
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
	if (func_505(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_391())
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
	Global_40.f_11095.f_35 = func_506(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_503();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_507(iVar1);
		func_509(func_508(), 0, 4000);
		func_510(Global_40.f_11095.f_35);
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
		func_511(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_163(func_161(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_462(14))
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
					sParam4 = func_512(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_513(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS" /* GXTEntry: "+" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_513(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT" /* GXTEntry: "+" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_163(func_161(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_462(4))
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
					sParam4 = func_512(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_513(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG" /* GXTEntry: "~COLOR_RED~-~s~" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_513(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT" /* GXTEntry: "~COLOR_RED~-~s~" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_161(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_514(10, 1);
	}
}

void func_464(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_465(int iParam0)
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

bool func_466(int iParam0)
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

void func_467(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_515(iParam0, iParam1))
		{
			if (func_516(iParam0, iParam1))
			{
				if (func_517(iParam0, iParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_518(iParam0);
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

void func_468(int iParam0, int iParam1, bool bParam2)
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

void func_469(int iParam0, bool bParam1)
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

void func_470(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 0.0f);
	}
	else
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 1.0f);
	}
}

void func_471(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_472(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_420(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_473(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_474(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

int func_475(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_476(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_164(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_165(&(iParam1->f_6), 0, 1);
	}
	if (!func_164(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_416(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_519(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_164(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_483(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_520(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_521(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_392(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_520(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_394(iParam1->f_6, 0, 1);
				}
				else
				{
					func_394(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_477(int iParam0)
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

void func_478(int* iParam0, int iParam1)
{
	if (!func_293(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_294(iParam0, 14);
		}
	}
}

bool func_479(int iParam0)
{
	return (Global_22 & iParam0) != 0;
}

void func_480(int iParam0)
{
	Global_22 |= iParam0;
}

int func_481(int iParam0, int iParam1)
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

bool func_482(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_483(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_164(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_296(iParam0);
	func_520(iParam0, 18, 0, 1);
	func_520(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_484(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_164(iParam0))
	{
		return false;
	}
	iVar0 = func_296(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_485(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_164(iParam0))
	{
		return false;
	}
	iVar0 = func_296(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_486(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_164(iParam0))
	{
		return;
	}
	iVar0 = func_296(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_487(var uParam0, float fParam1)
{
	if (!func_60(uParam0))
	{
		return false;
	}
	if (func_62(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_488()
{
	switch (Global_1935630.f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN") /* GXTEntry: "Old Lantern" */:
		case joaat("WEAPON_KIT_BINOCULARS") /* GXTEntry: "Binoculars" */:
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC") /* GXTEntry: "Electric Lantern" */:
		case joaat("WEAPON_MELEE_DAVY_LANTERN") /* GXTEntry: "Lantern" */:
			return true;
		default:
			break;
	}
	return false;
}

int func_489()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_490(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_522(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_523(iParam0, uVar0, iVar1, bParam2);
}

int func_491(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (*uParam2)
	{
		return 1;
	}
	if (!func_438(iParam1, &iVar0))
	{
		return 0;
	}
	if ((uParam0[iVar0 /*36*/])->f_35)
	{
		*uParam2 = 1;
		return 1;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && (ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar0 /*36*/], true) || ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar0 /*36*/], true, false)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0[iVar0 /*36*/])->f_2))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], (uParam0[iVar0 /*36*/])->f_2);
			*uParam2 = 1;
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], 0);
			*uParam2 = 1;
		}
	}
	return 1;
}

int func_492(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_173;
	if (uParam0->f_173.f_27)
	{
		return 1;
	}
	if (func_438(iVar0, &iVar1))
	{
		if (func_524(uParam0[iVar1 /*36*/], uParam0->f_173.f_12) || uParam0->f_173.f_26 == 1)
		{
			uParam0->f_173.f_27 = 1;
			return 1;
		}
	}
	return 0;
}

Vector3 func_493(bool bParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	Vector3 vVar0;

	if (!bParam4 && PED::IS_PED_INJURED(bParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_494(bool bParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam2 > 0.0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(bParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(bParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_495(int iParam0)
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

int func_496(int iParam0)
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

void func_497(bool bParam0)
{
	if (bParam0)
	{
		func_525(4);
	}
	func_525(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

bool func_498(bool bParam0)
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
		iVar2 = func_526(iVar9);
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

bool func_499(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = func_450();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
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
		return true;
	}
	return false;
}

void func_500(var uParam0)
{
	func_527(uParam0, 0);
}

bool func_501(var uParam0, int iParam1)
{
	if (!func_458(uParam0))
	{
		return false;
	}
	if (func_528(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

void func_502(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_503()
{
	int iVar0;

	iVar0 = func_529();
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

int func_504(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_197() != -1)
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
	fVar1 = func_275(MISC::ABSF(fVar1) < 1.0f, func_275(fVar1 < 0.0f, -1.0f, 1.0f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_505(int iParam0)
{
	if (!func_530(iParam0))
	{
		return false;
	}
	return func_531(iParam0);
}

int func_506(int iParam0, int iParam1, int iParam2)
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

int func_507(int iParam0)
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

int func_508()
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

void func_509(int iParam0, bool bParam1, int iParam2)
{
	func_532((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_533(iParam0);
}

void func_510(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_534(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_511(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_535(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_536(iVar5, &bVar2, &iVar0))
			{
				if (!func_537(bVar2, 0))
				{
				}
				else
				{
					iVar1 = func_538(bVar2);
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
							if (func_539(bVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_503() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_503() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_540();
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

char* func_512(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT") /* GXTEntry: "Loot Innocent" */:
			return "HONOR_EVENT_LOOT_INNOCENT" /* GXTEntry: "Loot Innocent" */;
		case joaat("HONOR_EVENT_AMBIENT_KILL") /* GXTEntry: "Murder" */:
			return "HONOR_EVENT_AMBIENT_KILL" /* GXTEntry: "Murder" */;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE") /* GXTEntry: "Frighten" */:
			return "HONOR_EVENT_SCARE" /* GXTEntry: "Frighten" */;
		case joaat("HONOR_EVENT_KILL_VERMIN") /* GXTEntry: "Killed Vermin" */:
			return "HONOR_EVENT_KILL_VERMIN" /* GXTEntry: "Killed Vermin" */;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL") /* GXTEntry: "Killed Domestic Animal" */:
			return "HONOR_EVENT_KILL_FARM_ANIMAL" /* GXTEntry: "Killed Domestic Animal" */;
		case joaat("HONOR_EVENT_KILL_HORSE") /* GXTEntry: "Killed Horse" */:
			return "HONOR_EVENT_KILL_HORSE" /* GXTEntry: "Killed Horse" */;
		case joaat("HONOR_EVENT_STEAL_HORSE") /* GXTEntry: "Stole Horse" */:
			return "HONOR_EVENT_STEAL_HORSE" /* GXTEntry: "Stole Horse" */;
		case joaat("HONOR_EVENT_STEAL_DONKEY") /* GXTEntry: "Stole Donkey" */:
			return "HONOR_EVENT_STEAL_DONKEY" /* GXTEntry: "Stole Donkey" */;
		case joaat("HONOR_EVENT_STEAL_MULE") /* GXTEntry: "Stole Mule" */:
			return "HONOR_EVENT_STEAL_MULE" /* GXTEntry: "Stole Mule" */;
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT") /* GXTEntry: "Trampled Innocent" */:
			return "HONOR_EVENT_TRAMPLED_INNOCENT" /* GXTEntry: "Trampled Innocent" */;
		case joaat("HONOR_EVENT_ABANDON_ANIMALS") /* GXTEntry: "Abandon Dead Animals" */:
			return "HONOR_EVENT_ABANDON_ANIMALS" /* GXTEntry: "Abandon Dead Animals" */;
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT") /* GXTEntry: "Watched Animal Bleedout" */:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT" /* GXTEntry: "Watched Animal Bleedout" */;
		case joaat("HONOR_EVENT_ANTAGONIZE") /* GXTEntry: "Antagonize" */:
			return "HONOR_EVENT_ANTAGONIZE" /* GXTEntry: "Antagonize" */;
		case joaat("HONOR_EVENT_THEFT") /* GXTEntry: "Theft" */:
			return "HONOR_EVENT_THEFT" /* GXTEntry: "Theft" */;
		case joaat("HONOR_EVENT_INTERVENED") /* GXTEntry: "Intervened" */:
			return "HONOR_EVENT_INTERVENED" /* GXTEntry: "Intervened" */;
		case joaat("HONOR_EVENT_WANTED_IN_CAMP") /* GXTEntry: "Wanted In Camp" */:
			return "HONOR_EVENT_WANTED_IN_CAMP" /* GXTEntry: "Wanted In Camp" */;
		case joaat("HONOR_EVENT_DONATED_GAME") /* GXTEntry: "Donated Game" */:
			return "HONOR_EVENT_DONATED_GAME" /* GXTEntry: "Donated Game" */;
		case joaat("HONOR_EVENT_ITEM_REQUEST") /* GXTEntry: "Item Request" */:
			return "HONOR_EVENT_ITEM_REQUEST" /* GXTEntry: "Item Request" */;
		case joaat("HONOR_EVENT_LONG_ABSENCE") /* GXTEntry: "Long Absence" */:
			return "HONOR_EVENT_LONG_ABSENCE" /* GXTEntry: "Long Absence" */;
		case joaat("HONOR_EVENT_CRUEL_DEATH") /* GXTEntry: "Cruel Death" */:
			return "HONOR_EVENT_CRUEL_DEATH" /* GXTEntry: "Cruel Death" */;
		case joaat("HONOR_EVENT_JUSTICE_SERVED") /* GXTEntry: "Justice Served" */:
			return "HONOR_EVENT_JUSTICE_SERVED" /* GXTEntry: "Justice Served" */;
		case joaat("HONOR_EVENT_CHEAT") /* GXTEntry: "Cheat" */:
			return "HONOR_EVENT_CHEAT" /* GXTEntry: "Cheat" */;
		default:
			break;
	}
	return "";
}

int func_513(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_541(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_514(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_542(iParam0))
	{
		return 0;
	}
	if (!func_253())
	{
		return 0;
	}
	if (!func_543(iParam0, &iVar0, &iVar1))
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

bool func_515(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_516(int iParam0, int iParam1)
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

bool func_517(int iParam0, int iParam1)
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
	if (!func_515(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(iVar1);
}

void func_518(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_519(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_420(iVar0, 2))
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
				func_544(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_520(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_164(iParam0))
	{
		return;
	}
	iVar0 = func_296(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_521(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_164(iParam0))
	{
		return;
	}
	iVar0 = func_296(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_522(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_197() != -1;
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

int func_523(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_545(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_546(iVar2)))
		{
			if (func_546(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_524(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(*uParam0, sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam0, sParam1))
	{
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);
	}
	return false;
}

void func_525(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

int func_526(int iParam0)
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

void func_527(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_186() - iParam1);
	func_200(uParam0, 1);
	func_201(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_528(var uParam0)
{
	if (!func_458(uParam0))
	{
		func_459(uParam0, 0);
		return uParam0->f_1;
	}
	if (func_547(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_186() - uParam0->f_1);
}

int func_529()
{
	return Global_40.f_11095.f_35;
}

bool func_530(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_531(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_532(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_548(bParam1);
	}
}

void func_533(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_534(int iParam0)
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

bool func_535(int iParam0)
{
	Vector3 vVar0;

	if (!func_549(23, &vVar0))
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

bool func_536(int iParam0, bool bParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_549(23, &sVar0))
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
			*bParam1 = uVar5;
			sVar0.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

bool func_537(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_538(bool bParam0)
{
	return bParam0;
}

int func_539(bool bParam0)
{
	Vector3 vVar0;

	if (!func_537(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_540()
{
	int iVar0;

	iVar0 = func_503();
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

void func_541(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_542(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_543(int iParam0, int iParam1, int iParam2)
{
	if (!func_542(iParam0))
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

void func_544(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
		HUD::_0x53CE46C01A089DA1(iVar0, true);
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
	func_472(iParam0, 1);
	func_473(iParam0, 1);
	func_474(iParam0, 128);
}

int func_545(int iParam0)
{
	if (!func_550(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_546(int iParam0)
{
	if (!func_550(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_547(var uParam0)
{
	return func_136(*uParam0, 2);
}

void func_548(bool bParam0)
{
	func_551(bParam0);
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

bool func_549(int iParam0, var uParam1)
{
	if (!func_552(iParam0))
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

bool func_550(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

void func_551(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_552(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

