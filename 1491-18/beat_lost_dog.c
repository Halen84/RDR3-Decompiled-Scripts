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
	char* sLocal_14 = NULL;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	struct<10> /*80*/ sLocal_17 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_27 = 11;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
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
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	char cLocal_116[32] = "";
	char cLocal_120[32] = "";
	char cLocal_124[32] = "";
	struct<193> /*1544*/ sLocal_128 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_321 = 0;
	struct<32> /*256*/ sLocal_322[4];
	Vector3 vLocal_451 = { 0.0f, 0.0f, 0.0f };
	float fLocal_454 = 0.0f;
	Vector3 vLocal_455 = { 0.0f, 0.0f, 0.0f };
	float fLocal_458 = 0.0f;
	Vector3 vLocal_459[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	Vector3 vLocal_469 = { 0.0f, 0.0f, 0.0f };
	float fLocal_472 = 0.0f;
	float fLocal_473 = 0.0f;
	char* sLocal_474 = NULL;
	struct<23> /*184*/ sLocal_475 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501[4] = { 0, 0, 0, 0 };
	var uLocal_506[4] = { 0, 0, 0, 0 };
	int iLocal_511 = 0;
	var uLocal_512[5] = { 0, 0, 0, 0, 0 };
	var uLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	var uLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	struct<7> /*56*/ sLocal_533 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_540 = 0;
	Vector3 vLocal_541 = { 0.0f, 0.0f, 0.0f };
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	struct<10> /*80*/ sLocal_553 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	int iLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = -1;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 1097859072;
	var uLocal_584 = 1000;
	var uLocal_585 = 1067450368;
	var uLocal_586 = 5000;
	var uLocal_587 = 42;
	var uLocal_588 = 1103626240;
	var uLocal_589 = 1077936128;
	var uLocal_590 = 1106247680;
	var uLocal_591 = 1103101952;
	var uLocal_592 = 1097859072;
	var uLocal_593 = 1103626240;
	var uLocal_594 = 0;
	struct<24> /*192*/ sLocal_595 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	var uLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 1112014848;
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
	var uLocal_685 = 0;
	var uLocal_686 = 0;
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
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 9;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 1;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 24;
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
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
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
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = -1082130432;
	var uLocal_822 = -1082130432;
	var uLocal_823 = 1103626240;
	var uLocal_824 = -1067450368;
	var uLocal_825 = 1097859072;
	var uLocal_826 = 1073741824;
	var uLocal_827 = 4000;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 1073741824;
	var uLocal_850 = 0;
	struct<38> /*304*/ sLocal_851 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_889 = 0;
	bool bLocal_890 = false;
	var uLocal_891 = 0;
	bool bLocal_892 = false;
	bool bLocal_893 = false;
	int iLocal_894 = 0;
	bool bLocal_895 = false;
	bool bLocal_896 = false;
	var uLocal_897 = 0;
	float fLocal_898 = 0.0f;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	var uLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	var uLocal_909 = 0;
	char* sLocal_910 = NULL;
	Vector3 vLocal_911 = { 0.0f, 0.0f, 0.0f };
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	int iLocal_923 = 0;
	int iLocal_924 = 0;
	var uLocal_925 = 0;
	int iLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 1065353216;
	var uLocal_933 = 1119092736;
	var uLocal_934 = 1092616192;
	var uLocal_935 = 1085276160;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
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
	var uLocal_981[4] = { 0, 0, 0, 0 };
	var uLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988[4] = { 0, 0, 0, 0 };
	int iLocal_993[4] = { 0, 0, 0, 0 };
	struct<21> /*168*/ sLocal_998[4];
	struct<17> /*136*/ sLocal_1083[2];
	struct<17> /*136*/ sLocal_1118[2];
	struct<6> /*48*/ sLocal_1153 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1159 = -1082130432;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
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
	sLocal_14 = "CALL";
	fLocal_473 = 3.0f;
	iLocal_529 = joaat("WORLD_ANIMAL_DOG_EATING_GROUND");
	iLocal_530 = joaat("WORLD_ANIMAL_DOG_RESTING");
	iLocal_531 = joaat("WORLD_HUMAN_SIT_GROUND");
	iLocal_532 = joaat("WORLD_ANIMAL_SQUIRREL_EATING");
	bLocal_893 = true;
	sLocal_910 = "script_re@lost_dog";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_895 = true;
	}
	if (!bLocal_895)
	{
		sLocal_128.f_3 = func_1(&vScriptParam_0);
		sLocal_128.f_43 = func_2();
		sLocal_128.f_161 = func_3(vScriptParam_0.z, 2);
		func_4();
		if (func_5() == 1)
		{
			iLocal_15 = 0;
		}
		else
		{
			iLocal_15 = 1;
		}
	}
	while (true)
	{
		func_7(bLocal_895, 956, 0);
		if (bLocal_895)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_633)
			{
				case 0:
					if (func_8())
					{
						iLocal_633 = 1;
					}
					break;
				case 1:
					if (func_9(&sLocal_128, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_10(&sLocal_128, &uLocal_909, &uLocal_905);
						func_11(&uLocal_637);
						func_12();
						func_13();
						func_14();
						func_15();
						iLocal_633 = 4;
					}
					else if (sLocal_128.f_160)
					{
						func_6();
					}
					break;
				case 4:
					if (!func_16(&sLocal_128, &iLocal_501, iLocal_15, 0, 1, 0, 1, 0))
					{
						func_6();
					}
					if (!sLocal_128.f_46)
					{
						if (func_17() || func_18(iLocal_901, (1 << 19)))
						{
							sLocal_128.f_46 = 1;
							func_19();
							if (func_20(iLocal_501[0], 0, 1))
							{
								func_21(iLocal_501[0], 250);
							}
							func_22(12, 1);
							func_23(iLocal_520);
							func_24(&sLocal_128);
							func_25();
							if (!func_18(iLocal_900, (1 << 16)))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_501[1]) && !func_20(iLocal_501[1], 0, 1))
								{
									func_26("DOG_DEAD" /* GXTEntry: "~e~The dog has died~s~" */, 7500, 0, 0, -1, -1, 0);
								}
								else if (iLocal_632 <= 14 && func_18(iLocal_987, 2))
								{
									func_26("DOG_ESCAPE" /* GXTEntry: "~e~You failed to safely return the dog~s~" */, 7500, 0, 0, -1, -1, 0);
								}
							}
							func_27(&(uLocal_506[0]));
							func_27(&(uLocal_506[1]));
							iLocal_632 = 19;
						}
					}
					if (bLocal_890 || (!func_20(iLocal_501[0], 0, 1) && !func_18(iLocal_900, (1 << 29))))
					{
						func_6();
					}
					if (iLocal_902 != 0)
					{
						iLocal_899 = 0;
						fLocal_898 = func_28(iLocal_501[0], 0, 1);
						if (fLocal_898 > 30.0f)
						{
							iLocal_899 = 10000;
						}
						else if (fLocal_898 < 10.0f)
						{
							iLocal_899 = -10000;
						}
						if (MISC::GET_GAME_TIMER() - iLocal_902) > (25000 - iLocal_899)
						{
							func_29(iLocal_501[0], Global_35, "", "", 30.0f, 0, 1, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							TASK::TASK_WANDER_STANDARD(iLocal_501[0], 40000.0f, 0);
							func_27(&(uLocal_506[0]));
							func_6();
						}
					}
					if (func_30())
					{
						sLocal_128.f_50 = 1;
						func_6();
					}
					if (func_32(&sLocal_128, &iLocal_501, 1, 1, 0, func_31(), 1, 1, 0, 0, 0, 0, 0))
					{
						func_6();
					}
					break;
			}
			BUILTIN::WAIT(sLocal_128.f_158);
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
	return (iParam0 & iParam1) != 0;
}

void func_4()
{
	func_33(&sLocal_128, 1);
	func_34(&(sLocal_128.f_5), 0);
	func_35(&(sLocal_128.f_5), 1);
	func_36(&(sLocal_128.f_5), 1);
	func_37(&(sLocal_128.f_5), 0);
	func_38(&(sLocal_128.f_5), 1);
	func_39(&(sLocal_128.f_5), 1);
	func_40(&(sLocal_128.f_5), 1500);
	func_41(&uLocal_566);
	func_42(&uLocal_566);
	func_35(&uLocal_566, 1);
	func_37(&uLocal_566, 0);
	func_43(&uLocal_566, 0);
}

int func_5()
{
	return Global_1897952.f_41;
}

void func_6()
{
	func_44();
	func_45(&sLocal_1083, 0, 0, 1, 0);
	if (func_18(iLocal_987, 2))
	{
		func_46();
	}
	func_47();
	func_48(&uLocal_986, 1);
	func_48(&(uLocal_981[0]), 1);
	func_48(&(uLocal_981[1]), 1);
	func_48(&(uLocal_981[2]), 1);
	func_48(&(uLocal_981[3]), 1);
	func_49();
	func_50(97);
	if (func_20(iLocal_501[0], 0, 1))
	{
		func_51(iLocal_501[0], 1);
	}
	if (func_18(iLocal_900, (1 << 31)))
	{
		func_52(0);
	}
	if (func_20(iLocal_501[0], 0, 1))
	{
		PED::_REMOVE_PED_BLACKBOARD_BOOL(iLocal_501[0], "IsSearching");
	}
	if (func_20(iLocal_501[1], 0, 1))
	{
		func_53(0);
		func_54(&(iLocal_501[1]), &(sLocal_998[1 /*21*/]), &sLocal_1118, 1, 1);
		func_55(iLocal_501[1], 1, 1);
	}
	func_56(&sLocal_128, &iLocal_501, &uLocal_506, iLocal_15, uLocal_909, uLocal_905, !ENTITY::IS_ENTITY_OCCLUDED(iLocal_501[0]), 1, 0, 1);
	func_57();
	func_58(&uLocal_920, &uLocal_919);
	func_58(&uLocal_518, &uLocal_521);
	func_58(&uLocal_922, &uLocal_921);
	func_58(&uLocal_925, &uLocal_918);
	func_23(iLocal_923);
	func_23(iLocal_924);
	func_23(iLocal_520);
	func_23(iLocal_519);
	func_59(1, 0);
	func_60(0);
	AUDIO::STOP_AUDIO_SCENE("RELD_LOST_DOG_SCENE");
	AUDIO::_RELEASE_SOUNDSET("RELD_Sounds");
	func_19();
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iLocal_914))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(iLocal_914);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_61(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Stack.Invoke(iParam1);
		}
	}
}

bool func_8()
{
	switch (iLocal_631)
	{
		case 0:
			if (func_62(&sLocal_128))
			{
				iLocal_500 = func_2();
				func_63();
				func_64();
				func_65();
				STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_529, 15, 0, 0);
				STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_531, 4194303 /* Hex: 0x003FFFFF */, 0, 0);
				STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_530, 15, 0, 0);
				if (iLocal_500 == 26)
				{
					STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_532, 15, 0, 0);
				}
				iLocal_631 = 1;
			}
			break;
		case 1:
			if (!func_66(&uLocal_630, sLocal_14))
			{
				return false;
			}
			if (!func_67(&uLocal_27))
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_529, false))
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_531, false))
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_530, false))
			{
				return false;
			}
			if (iLocal_500 == 26)
			{
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_532, false))
				{
					return false;
				}
			}
			if (!func_68(&sLocal_322))
			{
				return false;
			}
			if (!AUDIO::PREPARE_SOUNDSET("RELD_Sounds", false))
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

	if (bParam6 || func_69(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_70(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7.0f;
				if (func_71(uParam0->f_3, 1))
				{
					fVar0 = 20.0f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, (1 << 21));
			}
			if (iParam5 == 1)
			{
				func_72(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5.0f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_73(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_10(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 1;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 5:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
	}
}

void func_11(var uParam0)
{
	if (iLocal_500 == 26)
	{
		strcpy_s(&(uParam0->f_34), 64, "RE_LD_STR_V1_THANKS");
		strcpy_s(&(uParam0->f_54), 64, "RE_LD_STR_V1_WELCOME");
	}
	else if (iLocal_500 == 69)
	{
		strcpy_s(&(uParam0->f_34), 64, "RE_LD_EMR_V1_THANKS");
		strcpy_s(&(uParam0->f_54), 64, "RE_LD_EMR_V1_WELCOME");
	}
	uParam0->f_72 = func_74(sLocal_128.f_3);
	strcpy_s(&(uParam0->f_2), 64, "script_re@lost_dog");
	strcpy_s(&(uParam0->f_10), 64, "thanks_kid");
	uParam0->f_190 = 4000;
	uParam0->f_186 = 5.0f;
}

void func_12()
{
	sLocal_533.f_4 = "script@beat@town@lostDog@feedMeat";
	sLocal_533.f_5 = "script@beat@town@lostDog@reunion";
	sLocal_533.f_6 = "script@beat@town@lostDog@reunionResults";
}

void func_13()
{
	iLocal_501[0] = func_75(sLocal_322[0 /*32*/].f_1, &(sLocal_322[0 /*32*/]), sLocal_128.f_51 + sLocal_322[0 /*32*/].f_6, sLocal_322[0 /*32*/].f_9, 1, 0, 1, 0, 1);
	func_76(iLocal_501[0], &(sLocal_322[0 /*32*/].f_23), 0);
	func_77(iLocal_501[0], &sLocal_128, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_501[0], false, 0.0f);
	ENTITY::SET_ENTITY_PROOFS(iLocal_501[0], 2, false);
	func_78(iLocal_501[0], 0);
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_501[0], "Flee_Human_MajorThreat");
}

void func_14()
{
	switch (iLocal_500)
	{
		case 26:
			vLocal_455 = { -1773.092f, -429.01f, 153.582f /*3*/ };
			fLocal_458 = 40.0f;
			break;
		case 69:
			vLocal_455 = { 1338.029f, 294.1752f, 87.02629f /*3*/ };
			fLocal_458 = -113.227f;
			break;
	}
}

void func_15()
{
	sLocal_533.f_0 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_533.f_4, 64, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_533.f_0, "pedPlayer", Global_35, 0);
	ANIMSCENE::LOAD_ANIM_SCENE(sLocal_533.f_0);
	sLocal_533.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_533.f_5, 64, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_533.f_1, vLocal_455, 0.0f, 0.0f, fLocal_458, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_533.f_1, "pedKid", iLocal_501[0], 0);
	ANIMSCENE::LOAD_ANIM_SCENE(sLocal_533.f_1);
	sLocal_533.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_533.f_6, 64, &cLocal_116, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_533.f_2, "pedKid", iLocal_501[0], 0);
	ANIMSCENE::LOAD_ANIM_SCENE(sLocal_533.f_2);
}

bool func_16(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_79(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_80(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !(uParam0->f_5 & (1 << 14)) != 0)
		{
			if ((uParam0->f_5.f_1 & 256) != 0)
			{
				func_42(&(uParam0->f_5));
			}
			func_81(&(uParam0->f_5), (1 << 14));
		}
	}
	if (!uParam0->f_48 && !func_82(uParam0->f_3, (1 << 18)))
	{
		if ((uParam0->f_5 & (1 << 11)) != 0)
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_84(&(uParam0->f_121));
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
					func_85(uParam0, uParam0->f_193, 2.0f);
				}
			}
			break;
		case 2:
			if (!func_86(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_71(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				func_87(uParam0, (*iParam1)[0]);
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

bool func_17()
{
	int iVar0;

	iVar0 = 0;
	if (((func_88(iLocal_501[0], 0, &(sLocal_128.f_5), &iLocal_565, 0, 0) || func_89()) || DECORATOR::DECOR_EXIST_ON(iLocal_501[0], "bHasBeenTrampledByHorse")) || (PED::IS_PED_RAGDOLL(iLocal_501[0]) && sLocal_128.f_98[0] < 5.0f))
	{
		iVar0 = 1;
	}
	if (func_18(iLocal_900, (1 << 18)))
	{
		if (!func_18(iLocal_987, (1 << 9)))
		{
			if (func_88(iLocal_501[1], 0, &uLocal_566, &uLocal_594, 0, 0))
			{
				func_90(&iLocal_900, (1 << 21));
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

bool func_18(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_19()
{
	if (func_20(iLocal_501[1], 0, 1))
	{
		if (PED::DOES_GROUP_EXIST(iLocal_889))
		{
			if (PED::IS_PED_GROUP_MEMBER(iLocal_501[1], iLocal_889, false))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_501[1]);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_501[1], true);
			}
		}
	}
}

bool func_20(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_91(iParam0, iParam1);
}

void func_21(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

void func_22(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	Global_40.f_11166[iParam0] = iParam1;
}

void func_23(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_24(var uParam0)
{
	if (func_92(uParam0->f_162))
	{
		func_93(&(uParam0->f_162), 1, 1);
	}
	if (func_92(uParam0->f_163))
	{
		func_93(&(uParam0->f_163), 1, 1);
	}
	if (func_92(uParam0->f_164))
	{
		func_93(&(uParam0->f_164), 1, 1);
	}
	if (func_92(uParam0->f_165))
	{
		func_93(&(uParam0->f_165), 1, 1);
	}
}

void func_25()
{
	CAM::_0x88544C0E3291DCAE(true);
	func_47();
}

void func_26(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_94(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

void func_27(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

float func_28(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_95(Global_35, iParam0, bParam1, bParam2);
}

bool func_29(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_96(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_30()
{
	float fVar0;
	float fVar1;

	func_97();
	func_98();
	func_99();
	func_100();
	func_101();
	func_102();
	func_103();
	func_104();
	if (iLocal_632 > 1)
	{
		func_105();
	}
	if (iLocal_632 >= 3)
	{
		func_106();
		if (iLocal_632 < 8)
		{
			IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[0], &sLocal_475);
			func_107(iLocal_501[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		}
	}
	if (func_18(iLocal_900, (1 << 14)))
	{
		if (func_18(iLocal_987, 2) && !func_18(iLocal_987, (1 << 9)))
		{
			if (!func_18(iLocal_900, (1 << 15)))
			{
				func_26("DOG_ESCAPE" /* GXTEntry: "~e~You failed to safely return the dog~s~" */, 7500, 0, 0, -1, -1, 0);
			}
		}
		return true;
	}
	switch (iLocal_632)
	{
		case 0:
			func_108();
			func_109(Global_35, -1);
			func_110();
			func_111();
			func_52(1);
			func_60(1);
			PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_501[0], "Flee_Panic");
			iLocal_523 = TASK::CREATE_SCENARIO_POINT_HASH(iLocal_531, vLocal_455, fLocal_458, 0.0f, 0.0f, false);
			iLocal_632 = 1;
			break;
		case 1:
			if (!func_18(iLocal_901, 256))
			{
				if (func_112())
				{
					func_90(&iLocal_901, 256);
					iLocal_632 = 3;
				}
			}
			else
			{
				iLocal_632 = 3;
			}
			break;
		case 3:
			func_113();
			if (func_18(iLocal_901, (1 << 9)))
			{
				if (func_114(0, 1, iLocal_501[0], 1))
				{
					func_90(&iLocal_987, 1);
					func_115(&uLocal_948);
					iLocal_632 = 4;
				}
			}
			break;
		case 4:
			func_113();
			if (func_18(iLocal_987, 2))
			{
				func_116();
				func_47();
				func_117(&(sLocal_1153.f_5));
				func_109(Global_35, 5000);
				IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[0], &sLocal_475);
				iLocal_632 = 6;
				Jump @2482; // curOff = 525
			}
			else if (func_18(iLocal_987, 4))
			{
				func_118();
				func_47();
				func_117(&(sLocal_1153.f_5));
				func_109(Global_35, 5000);
				IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[0], &sLocal_475);
				iLocal_632 = 5;
			}
			else
			{
				if (func_119(&uLocal_948) > 30.0f)
				{
					func_22(12, 1);
					func_47();
					func_117(&(sLocal_1153.f_5));
					func_90(&iLocal_987, 8);
					func_109(Global_35, 5000);
					IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[0], &sLocal_475);
					iLocal_632 = 5;
				}
				Jump @2482; // curOff = 661
				if (func_18(iLocal_987, 32) && func_18(iLocal_901, (1 << 10)))
				{
					if (func_120())
					{
						func_121(1, 0, 0, "RE_HONOR_IGNORED_STRANGER" /* GXTEntry: "Ignored Stranger" */, iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
					}
					iLocal_632 = 20;
				}
				Jump @2482; // curOff = 727
				if (func_18(iLocal_901, (1 << 11)))
				{
					func_115(&uLocal_939);
					MAP::REMOVE_BLIP(&(uLocal_506[0]));
					func_25();
					iLocal_632 = 8;
				}
				Jump @2482; // curOff = 769
				if (func_114(0, 1, 0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[0], sLocal_910, func_122(6), 1))
				{
					if (func_123())
					{
						func_124();
						func_125();
						if (iLocal_15 == 0)
						{
							func_26("DOG_OBJ01" /* GXTEntry: "Search the town for the missing dog" */, 7500, 0, 0, -1, -1, 0);
						}
						else
						{
							func_26("DOG_OBJ04" /* GXTEntry: "Search the ranch for the missing dog" */, 7500, 0, 0, -1, -1, 0);
						}
						func_90(&iLocal_900, (1 << 18));
						iLocal_632 = 9;
					}
				}
				Jump @2482; // curOff = 880
				if (func_18(iLocal_987, (1 << 9)))
				{
					func_118();
					iLocal_632 = 5;
				}
				else
				{
					if (func_18(iLocal_987, 128) && bLocal_893)
					{
						func_59(0, 1);
					}
					if (!func_18(iLocal_900, 1))
					{
						if (((sLocal_128.f_98[1] < 6.0f && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_501[1])) && sLocal_128.f_98[1] > 0.0f) && ENTITY::DOES_ENTITY_EXIST(iLocal_501[1]))
						{
							func_27(&(uLocal_506[1]));
							func_49();
							func_126(iLocal_501[1], &(uLocal_506[1]), joaat("BLIP_STYLE_NEUTRAL"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
							func_90(&iLocal_900, 1);
						}
					}
					if (func_18(iLocal_987, 128))
					{
						func_58(&uLocal_922, &uLocal_921);
						func_49();
						func_126(iLocal_501[1], &(uLocal_506[1]), joaat("BLIP_STYLE_NEUTRAL"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
						func_127();
						func_115(&uLocal_951);
						if (bLocal_893 == 0)
						{
							iLocal_632 = 11;
						}
						else
						{
							func_128();
							func_129(&iLocal_522);
							func_130(vLocal_451, fLocal_454);
							iLocal_632 = 10;
						}
					}
				}
				Jump @2482; // curOff = 1160
				func_131(iLocal_501[1], &uLocal_927, 0.0f, 0.0f, 0.0f, 1, 30.0f, 10.0f, -1, 3000, 2000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
				if (func_132(Global_35, sLocal_533.f_0, "pedPlayer", &cLocal_124, &uLocal_636, 1065353216 /* Float: 1f */, 1, 1, 1) || func_119(&uLocal_951) > 10.0f)
				{
					iLocal_632 = 11;
				}
				Jump @2482; // curOff = 1266
				func_131(iLocal_501[1], &uLocal_927, 0.0f, 0.0f, 0.0f, 1, 30.0f, 10.0f, -1, 3000, 2000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
				func_133();
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -651608924) || bLocal_893 == 0)
				{
					if (iLocal_894 == 0)
					{
						func_29(Global_35, iLocal_501[1], func_134("OFFER_BAIT", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						iLocal_894 = 1;
					}
				}
				if (!func_18(iLocal_900, 32))
				{
					if (bLocal_893)
					{
						func_59(0, 1);
					}
				}
				else
				{
					func_135();
					func_136();
					if (func_18(iLocal_900, (1 << 22)))
					{
						if (func_18(iLocal_901, 2))
						{
							if (func_137())
							{
								func_25();
								func_138(&uLocal_939);
								func_59(1, 0);
								iLocal_632 = 12;
							}
						}
					}
				}
				Jump @2482; // curOff = 1495
				func_139();
				func_140();
				if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, &cLocal_116))
				{
					fVar0 = 35.0f;
					if (iLocal_15 == 0)
					{
						if (func_141(iLocal_501[1], uLocal_512[3], 0, 1) || func_141(iLocal_501[1], uLocal_512[4], 0, 1))
						{
							fVar0 = 18.0f;
						}
					}
					fVar1 = func_95(iLocal_501[0], iLocal_501[1], 1, 1);
					if ((func_142(iLocal_501[0], &(sLocal_128.f_33), &uLocal_897, &uLocal_891, 1.0f, fVar0, 0, 0, 1092616192 /* Float: 10f */, 1) && fVar1 < (fVar0 + 15.0f)) || (fVar1 < 15.0f && PED::CAN_PED_SEE_ENTITY(iLocal_501[0], iLocal_501[1], false, false) == 1))
					{
						strcpy_s(&cLocal_120, 32, func_143());
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_120))
						{
							ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, &cLocal_120, true);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_533.f_1, "bAdvanceSitLoop", true, false);
							if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(sLocal_533.f_1, "pedKid", &sLocal_553, true, &cLocal_120, 2))
							{
							}
							func_90(&iLocal_901, (1 << 12));
							iLocal_632 = 13;
						}
					}
				}
				else
				{
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, &cLocal_116);
				}
				Jump @2482; // curOff = 1795
				func_109(iLocal_501[1], -1);
				IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[0], &sLocal_475);
				if (!func_18(iLocal_901, 32))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_1, false))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_533.f_1, "pedKid", iLocal_501[0]);
						func_90(&iLocal_901, 32);
					}
				}
				else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_533.f_2, true, false))
				{
					if (!func_18(iLocal_900, (1 << 9)))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[0], joaat("SCRIPT_TASK_ANY"), true) != 1)
						{
							func_144();
						}
					}
					else if (func_18(iLocal_900, (1 << 16)))
					{
						func_145();
						iLocal_632 = 14;
					}
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(sLocal_533.f_2);
				}
				Jump @2482; // curOff = 1970
				if (func_18(iLocal_900, 16))
				{
					func_46();
					func_146(sLocal_533.f_1);
					func_147(&iLocal_901, 4);
					func_109(iLocal_501[1], 0);
					IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[0], &sLocal_475);
					func_58(&uLocal_920, &uLocal_919);
					func_58(&uLocal_922, &uLocal_921);
					func_90(&iLocal_900, (1 << 24));
					if (iLocal_15 == 0)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_533.f_2, "bAdvanceCallover", true, false);
						func_22(12, 3);
						iLocal_632 = 16;
					}
					else if (iLocal_15 == 1)
					{
						func_121(13, 0, 0, "RE_HONOR_HELPED_STRANGER" /* GXTEntry: "Helped Stranger" */, iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(sLocal_533.f_2, "bAdvanceCallover", true, false);
						iLocal_632 = 17;
					}
				}
				Jump @2482; // curOff = 2149
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_2, false))
				{
					func_109(Global_35, 10000);
					IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[0], &sLocal_475);
					func_121(13, 0, 0, "RE_HONOR_HELPED_STRANGER" /* GXTEntry: "Helped Stranger" */, iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
					iLocal_632 = 15;
				}
				Jump @2482; // curOff = 2219
				if (func_18(iLocal_901, (1 << 20)))
				{
					AUDIO::STOP_AUDIO_SCENE("RELD_LOST_DOG_SCENE");
					func_27(&(uLocal_506[0]));
					func_27(&(uLocal_506[1]));
					sLocal_128.f_44 = 1;
					iLocal_632 = 20;
				}
				Jump @2482; // curOff = 2273
				if (func_148(iLocal_501[0], &(uLocal_506[0]), Global_35, &uLocal_850, &uLocal_637, &sLocal_128))
				{
					func_23(iLocal_924);
					func_60(0);
					func_90(&iLocal_901, 8);
					AUDIO::STOP_AUDIO_SCENE("RELD_LOST_DOG_SCENE");
					func_27(&(uLocal_506[0]));
					func_27(&(uLocal_506[1]));
					sLocal_128.f_44 = 1;
					iLocal_632 = 20;
				}
				Jump @2482; // curOff = 2364
				iLocal_632 = 20;
				Jump @2482; // curOff = 2372
				func_149();
				func_44();
				if (func_20(iLocal_501[0], 0, 1) && sLocal_128.f_98[0] > 50.0f)
				{
					if ((func_20(iLocal_501[1], 0, 1) && sLocal_128.f_98[1] > 50.0f) || !func_20(iLocal_501[1], 0, 1))
					{
						return true;
					}
				}
				else
				{
					func_150();
				}
			}
			return false;
			default:
				break;
	}
}

bool func_31()
{
	if (func_18(iLocal_900, (1 << 18)) && !func_18(iLocal_900, (1 << 16)))
	{
		return true;
	}
	return false;
}

bool func_32(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	Vector3 vVar1;

	fVar0 = 0.0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_151())
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
			else if (func_152(uParam0->f_3))
			{
				fVar0 = 250.0f;
			}
			else if (func_71(uParam0->f_3, (1 << 17)))
			{
				fVar0 = 70.0f;
				fVar0 += 10.0f;
			}
			else if (func_71(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215.0f;
				fVar0 += 20.0f;
				if (uParam0->f_48)
				{
					fVar0 -= 80.0f;
				}
			}
			else if (func_71(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_153(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 /*3*/ };
				if (func_153(Global_36, vVar1) > fVar0)
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

void func_33(var uParam0, bool bParam1)
{
	func_41(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_94("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_34(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_154(&(iParam0->f_1), 256);
	}
	else
	{
		func_81(&(iParam0->f_1), 256);
	}
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_154(&(uParam0->f_1), 4);
	}
	else
	{
		func_81(&(uParam0->f_1), 4);
	}
}

void func_36(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_154(&(iParam0->f_1), (1 << 14));
	}
	else
	{
		func_81(&(iParam0->f_1), (1 << 14));
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_154(&(uParam0->f_1), (1 << 10));
	}
	else
	{
		func_81(&(uParam0->f_1), (1 << 10));
	}
}

void func_38(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_154(&(iParam0->f_1), (1 << 11));
	}
	else
	{
		func_81(&(iParam0->f_1), (1 << 11));
	}
}

void func_39(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_81(iParam0, 256);
	}
	else
	{
		func_154(iParam0, 256);
	}
}

void func_40(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_41(int iParam0)
{
	func_36(iParam0, 0);
	func_38(iParam0, 0);
	func_34(iParam0, 1);
	func_155(iParam0, 1);
	func_156(iParam0, 0);
	func_39(iParam0, 1);
	func_157(iParam0, 1, 1, 1);
}

void func_42(int iParam0)
{
	func_34(iParam0, 1);
	func_158(iParam0, 20);
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_154(&(uParam0->f_1), 8);
	}
	else
	{
		func_81(&(uParam0->f_1), 8);
	}
}

void func_44()
{
	if (func_18(iLocal_900, 4))
	{
		func_159(&Global_1935630, 4);
		func_147(&iLocal_900, 4);
	}
}

void func_45(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_92((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_93(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_46()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_47()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_48(int iParam0, int iParam1)
{
	if (func_160(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

void func_49()
{
	func_27(&iLocal_511);
}

void func_50(int iParam0)
{
	if (!func_161(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_46 = 0;
}

void func_51(int iParam0, bool bParam1)
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
		PED::SET_PED_CONFIG_FLAG(iParam0, 43 /*PCF_DisableLadderClimbing*/, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
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

void func_52(bool bParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	if (bParam0)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_501[0], true, false) /*3*/ };
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = ITEMSET::CREATE_ITEMSET(true);
		ENTITY::_GET_ENTITIES_NEAR_POINT(vVar0, 100.0f, iVar6, 1);
		iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar6);
		if (ITEMSET::IS_ITEMSET_VALID(iVar6))
		{
		}
		iVar3 = 0;
		while (iVar3 <= (iVar4 - 1))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar6)));
			if ((!ENTITY::IS_ENTITY_DEAD(iVar5) && !PED::IS_PED_HUMAN(iVar5)) && iVar5 != iLocal_501[1])
			{
				if (((((((((((((PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGAMERICANFOXHOUND_01")) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGAUSTRALIANSHEPERD_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGBLUETICKCOONHOUND_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGCATAHOULACUR_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGCHESBAYRETRIEVER_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGCOLLIE_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGHOBO_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGHOUND_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGHUSKY_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGLAB_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGLION_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGPOODLE_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGRUFUS_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGSTREET_01")))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(iVar5))
					{
						PED::DELETE_PED(&iVar5);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iVar5, Global_35, 300.0f, -1, 0, 1.5f, 0);
					}
				}
			}
			iVar3++;
		}
		ITEMSET::DESTROY_ITEMSET(iVar6);
		if (func_2() == 69)
		{
			iVar7 = func_162(606);
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar7))
			{
				iLocal_914 = iVar7;
				TASK::TASK_SMART_FLEE_PED(PERSCHAR::_GET_PERSCHAR_PED_INDEX(iLocal_914), Global_35, 300.0f, -1, 0, 1.5f, 0);
				PED::SET_PED_KEEP_TASK(PERSCHAR::_GET_PERSCHAR_PED_INDEX(iLocal_914), true);
				PERSCHAR::_0xA8C406C2A56EDC16(iLocal_914);
			}
			iVar8 = func_162(607);
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar8))
			{
				iLocal_915 = iVar8;
				TASK::TASK_SMART_FLEE_PED(PERSCHAR::_GET_PERSCHAR_PED_INDEX(iLocal_915), Global_35, 300.0f, -1, 0, 1.5f, 0);
				PED::SET_PED_KEEP_TASK(PERSCHAR::_GET_PERSCHAR_PED_INDEX(iLocal_915), true);
				PERSCHAR::_0xA8C406C2A56EDC16(iLocal_915);
			}
			iVar9 = func_162(608);
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar9))
			{
				iLocal_916 = iVar9;
				TASK::TASK_SMART_FLEE_PED(PERSCHAR::_GET_PERSCHAR_PED_INDEX(iLocal_916), Global_35, 300.0f, -1, 0, 1.5f, 0);
				PED::SET_PED_KEEP_TASK(PERSCHAR::_GET_PERSCHAR_PED_INDEX(iLocal_916), true);
				PERSCHAR::_0xA8C406C2A56EDC16(iLocal_916);
			}
		}
		else if (func_2() == 26)
		{
			iVar7 = func_162(502);
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar7))
			{
				iLocal_914 = iVar7;
				TASK::TASK_SMART_FLEE_PED(PERSCHAR::_GET_PERSCHAR_PED_INDEX(iLocal_914), Global_35, 300.0f, -1, 0, 1.5f, 0);
				PED::SET_PED_KEEP_TASK(PERSCHAR::_GET_PERSCHAR_PED_INDEX(iLocal_914), true);
				PERSCHAR::_0xA8C406C2A56EDC16(iLocal_914);
			}
		}
		func_90(&iLocal_900, (1 << 31));
		if (iVar4 == 0)
		{
		}
	}
	else
	{
		if (iLocal_914 != 0)
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iLocal_914);
		}
		if (iLocal_915 != 0)
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iLocal_915);
		}
		if (iLocal_916 != 0)
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iLocal_916);
		}
	}
}

void func_53(bool bParam0)
{
	if (func_20(iLocal_501[1], 0, 1))
	{
		if (bParam0)
		{
			if (!func_18(iLocal_900, 64))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 375 /*PCF_0x121018F9*/, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 255 /*PCF_0xBD08A8FC*/, false);
				func_90(&iLocal_900, 64);
			}
		}
		else if (func_18(iLocal_900, 64))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 375 /*PCF_0x121018F9*/, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 255 /*PCF_0xBD08A8FC*/, true);
			func_147(&iLocal_900, 64);
		}
	}
}

void func_54(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_163(uParam0);
		func_164(iParam1, uParam2);
	}
	func_55(*uParam0, 1, bParam4);
}

void func_55(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301 /*PCF_DisableInteractionLockonOnTargetPed*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330 /*PCF_0x7C7AF264*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
}

void func_56(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_166(uParam0->f_3, (1 << 19));
		}
	}
	if (func_20(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43 /*PCF_DisableLadderClimbing*/, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_20((*iParam1)[iVar0], 0, 0))
			{
				func_167((*iParam1)[iVar0], bVar3);
				if (func_168(uParam0, iParam1[iVar0]))
				{
					func_169(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_20((*iParam1)[iVar0], 0, 1))
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
							func_171((*iParam1)[iVar0], (1 << 30), func_170(iVar0 < iVar2, uParam0->f_98[iVar0], -1.0f), iVar1, 0);
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
		func_172(uParam0);
	}
	func_173(uParam0);
	if (!uParam0->f_186)
	{
		func_79(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_174(uParam0->f_3, uParam0->f_185);
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
		func_175(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_57()
{
	func_176(iLocal_522, iLocal_529);
	func_176(iLocal_525, iLocal_530);
	func_176(iLocal_523, iLocal_531);
	func_176(iLocal_524, iLocal_531);
}

void func_58(var uParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam0);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam0);
		VOLUME::DELETE_VOLUME(*uParam0);
	}
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
	}
}

void func_59(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		if (!func_18(iLocal_900, (1 << 12)) || bParam1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			func_90(&iLocal_900, (1 << 12));
		}
	}
	else if (func_18(iLocal_900, (1 << 12)))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		func_147(&iLocal_900, (1 << 12));
	}
}

void func_60(bool bParam0)
{
	if (bParam0)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_926))
		{
			if (iLocal_15 == 1)
			{
				func_177(&iLocal_926, 1349.121f, 304.086f, 87.806f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f, "m_volRoads");
			}
			else
			{
				func_177(&iLocal_926, -1796.937f, -435.442f, 163.087f, 0.0f, 0.0f, 63.567f, 43.517f, 29.955f, 26.353f, "m_volRoads");
			}
			PATHFIND::_0xB03944057FD735BA(iLocal_926, 3, 0);
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iLocal_926))
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_926, 3, 0);
	}
}

bool func_61(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_178(iVar0))
	{
		return false;
	}
	if (func_179(iVar0, 1) || func_179(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_62(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_180(uParam0->f_3);
	iVar1 = func_181(1);
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

void func_63()
{
	if (iLocal_500 == 26)
	{
		sLocal_322[0 /*32*/].f_1 = joaat("RE_LOSTDOG_TEENS_01");
		sLocal_322[0 /*32*/] = 4;
		strcpy_s(&(sLocal_322[0 /*32*/].f_23), 64, "U_M_Y_UniStoneSkipper_01");
		sLocal_322[0 /*32*/].f_3 = 268321530;
		sLocal_322[1 /*32*/].f_1 = joaat("RE_LOSTDOG_DOGS_01");
		sLocal_322[1 /*32*/] = 28;
		sLocal_322[1 /*32*/].f_3 = -1039019633;
		sLocal_322[2 /*32*/].f_1 = joaat("A_C_DOGLAB_01");
		sLocal_322[2 /*32*/] = 28;
	}
	else if (iLocal_500 == 69)
	{
		sLocal_322[0 /*32*/].f_1 = joaat("RE_LOSTDOG_TEENS_01");
		sLocal_322[0 /*32*/] = 4;
		strcpy_s(&(sLocal_322[0 /*32*/].f_23), 64, "DUEL_NEPHEW");
		sLocal_322[0 /*32*/].f_3 = 591620484;
		sLocal_322[1 /*32*/].f_1 = joaat("RE_LOSTDOG_DOGS_01");
		sLocal_322[1 /*32*/].f_3 = 1613150473;
		sLocal_322[1 /*32*/] = 28;
		sLocal_322[2 /*32*/].f_1 = joaat("A_C_DOGLAB_01");
		sLocal_322[2 /*32*/] = 28;
	}
	func_182();
}

void func_64()
{
	func_183("script_re@lost_dog", &uLocal_27);
	func_183("amb_creature_mammal@world_squirrel_eating@idle0", &uLocal_27);
	func_183("amb_creature_mammal@world_dog_eating_ground@stand_enter", &uLocal_27);
	func_183("amb_creature_mammal@world_dog_eating_ground@base", &uLocal_27);
	func_183("amb_creature_mammal@world_dog_eating_ground@stand_exit", &uLocal_27);
	func_183("amb_creature_mammal@world_dog_sitting@stand_enter", &uLocal_27);
	func_183("amb_creature_mammal@world_dog_sitting@stand_exit", &uLocal_27);
	if (iLocal_500 == 26)
	{
		func_183("script_re@lost_dog@dog@squirrel", &uLocal_27);
	}
	else if (iLocal_500 == 69)
	{
		func_183("script_re@lost_dog@dog@timid", &uLocal_27);
		func_183("amb_creature_mammal@world_dog_sleeping@idle", &uLocal_27);
	}
}

void func_65()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (sLocal_322[iVar0 /*32*/].f_1 != 0)
		{
			STREAMING::REQUEST_MODEL(sLocal_322[iVar0 /*32*/].f_1, false);
		}
		iVar0++;
	}
}

bool func_66(var uParam0, char* sParam1)
{
	return true;
}

bool func_67(var uParam0)
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

bool func_68(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_184(iParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_69(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> /*56*/ sParam4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (sParam4.f_6 > -1)
	{
		*uParam1 = { func_185(iParam0, sParam4.f_6) /*3*/ };
		uParam1->f_4 = sParam4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_186(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_82(iParam0, 128))
			{
				if (!func_187(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_188(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_189(&bVar4, iParam0, uVar2, uVar1) /*3*/ };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_190(*uParam1))
				{
					return func_191(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_192(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(sParam4.f_2, 8))
				{
					func_186(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_193(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_194(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_195(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
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
			if (func_82(iParam0, 128))
			{
				if (!func_196(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_191(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_188(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_193(uParam1))
					{
						return func_191(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_197(iParam0, sParam4.f_1, uParam1, sParam4, iParam14))
			{
				func_186(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_191(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_94("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_94("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_70(var uParam0, int iParam1)
{
	if (func_71(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_199(iParam1, func_198(uParam0), &(uParam0->f_172)))
		{
			if (func_20(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_71(int iParam0, int iParam1)
{
	if (!func_161(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] & iParam1) != 0;
}

void func_72(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_200(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, (float)iParam1, (float)iParam1, 5.0f, "Custom Sized Ambient Avoidance");
	}
	else if (func_71(uParam0->f_3, 1) && !func_71(uParam0->f_3, 32))
	{
		func_200(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 6.0f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_71(uParam0->f_3, 2) && !func_71(uParam0->f_3, 32))
	{
		func_200(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 5.0f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171, 2228255, (1 << 18), 0, -1, -1, uParam0->f_175);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_201(uParam0->f_171, 1);
	}
	if (func_71(uParam0->f_3, 1))
	{
		func_200(&(uParam0->f_174), uParam0->f_51, 0.0f, 0.0f, 0.0f, VOLUME::GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_202(uParam0->f_174, 0, (1 << 18), 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_171, iParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
	}
}

float func_73(Vector3 vParam0)
{
	Vector3 vVar0;

	vVar0 = { Global_36 - vParam0 /*3*/ };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

int func_74(int iParam0)
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

int func_75(int iParam0, var uParam1, Vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_203(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_204(uParam1))
	{
		iVar0 = PED::_CREATE_META_PED_OUTFIT_PED(uParam1->f_5, vParam2, fParam5, true, true, bParam9, bParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_205(iParam0, vParam2, fParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_META_PED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_205(iParam0, vParam2, fParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_206(iVar0))
		{
			func_76(iVar0, &(uParam1->f_23), 0);
		}
		if (func_206(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307 /*PCF_DisableMountSpawning*/, true);
		}
		if (func_207(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, 0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186 /*PCF_CorpseIsPersistent*/, !func_208(&(uParam1->f_22)));
			func_210(iVar0, func_209(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_211(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_212(&(uParam1->f_22)))
		{
			func_213(iVar0, 1);
		}
		ENTITY::_SET_ENTITY_FADE_IN(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6 /*PCF_DontInfluenceWantedLevel*/, func_214(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393 /*PCF_0x96B7B497*/, true);
		if (!func_18(uParam1->f_22, (1 << 13)))
		{
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
		}
		if (!func_206(iVar0))
		{
			func_216(iVar0, !func_215(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4 /*PCF_HasBounty*/, func_217(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, !func_218(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317 /*PCF_0x8E385F10*/, !func_218(&(uParam1->f_22)));
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

void func_76(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_20(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

int func_77(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_219(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_78(int iParam0, int iParam1)
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

void func_79(var uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;

	vVar0 = { func_221(uParam0) /*3*/ };
	iVar3 = func_174(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_80(var uParam0, int iParam1)
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

void func_81(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

bool func_82(int iParam0, int iParam1)
{
	if (!func_161(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 & iParam1) != 0;
}

void func_83(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_161(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_222())
	{
		func_223(1);
	}
	func_224(iParam2, uParam0->f_43);
	func_225(iParam2, 0, 0, 0, 0);
	if (func_226(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_165(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_227(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_84(var uParam0)
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

void func_85(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 & func_228())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_82(uParam0->f_3, (1 << 18)))
	{
		if ((uParam0->f_5 & (1 << 11)) != 0)
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_84(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_229(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_230(uParam0, bVar0);
		func_231(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90.0f, 0, uParam0->f_98[iParam1]);
		if (func_232(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_84(&(uParam0->f_121));
		}
	}
}

bool func_86(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30.0f;
	fVar1 = 150.0f;
	if (func_71(uParam2->f_3, 1))
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
			if (func_233())
			{
				fVar0 = 15.0f;
			}
		}
		if (func_234(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_235(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_234(uParam2, fVar1))
		{
			if (!func_236(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_237(uParam2->f_3, 2) && func_238(2))
		{
			return false;
		}
		if (func_71(iParam0, (1 << 22)) || func_71(iParam0, (1 << 25)))
		{
			if (func_239(1))
			{
				return false;
			}
		}
	}
	if (func_240(Global_35))
	{
		return false;
	}
	if (func_241(0, 1, 1) && !func_242(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_71(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_243(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_235(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_244())
		{
			return false;
		}
		iVar2 = func_245(func_2());
		if (func_246(iVar2))
		{
			if (func_247(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_248(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_249(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_87(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_250(uParam0->f_51))
	{
		func_251(uParam0->f_51, 0);
		fVar0 = func_252(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, func_253());
		bVar1 = func_170(!func_71(uParam0->f_3, 1), 20.0f, -1.0f);
		uParam0->f_51.f_11 = func_255(iVar2, func_254(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_88(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_256(iParam2, 1, iVar0);
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
			if (func_257(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_258(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!(iParam2->f_1 & 8) != 0)
			{
				if (func_259(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_258(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_260(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_258(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if ((*iParam2 & 32) != 0)
			{
				if (func_261(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_258(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_235(PLAYER::PLAYER_ID(), 0, 1, (iParam2->f_1 & (1 << 19)) == 0))
		{
			if (!(iParam2->f_1 & (1 << 14)) != 0)
			{
				*iParam3 = (1 << 14);
				func_258(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_262(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!(iParam2->f_1 & 4) != 0)
				{
					if (func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_258(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!(iParam2->f_1 & 256) != 0)
				{
					if (func_264(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_258(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!(iParam2->f_1 & 16) != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_265(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_258(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_265(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_258(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if ((*iParam2 & 8) != 0)
			{
				if (func_266(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_258(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if ((*iParam2 & (1 << 18)) != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20.0f)
			{
				if (func_267(&iParam0, iParam2))
				{
					*iParam3 = (1 << 12);
					func_258(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(iParam2->f_1 & 2) != 0)
			{
				if (func_268(iParam2, 4000))
				{
					if ((func_269(iParam0, Global_1935630.f_41, (*iParam2 & 128) != 0, 0, (*iParam2 & 256) != 0) & func_270(iParam2, iParam0)) && func_271(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_258(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!(iParam2->f_1 & 2) != 0)
		{
			if (iParam2->f_12 < 4.0f)
			{
				if ((func_269(iParam0, Global_1935630.f_41, (*iParam2 & 128) != 0, 1, (*iParam2 & 256) != 0) & func_270(iParam2, iParam0)) && func_271(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_258(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if ((*iParam2 & (1 << 17)) == 0)
						{
							if (func_272(iParam0, Global_1935630.f_41))
							{
								func_273();
								*iParam3 = 2;
								func_258(iParam0, iParam2, *iParam3);
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
						if (func_272(iParam0, Global_1935630.f_41))
						{
							func_273();
							*iParam3 = 2;
							func_258(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10.0f)
			{
				if (func_274(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_275() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_273();
						*iParam3 = 2;
						func_258(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if ((*iParam2 & (1 << 17)) == 0)
				{
					if (func_276())
					{
						if (func_272(iParam0, Global_1935630.f_42))
						{
							func_273();
							*iParam3 = 2;
							func_258(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!(iParam2->f_1 & (1 << 10)) != 0)
		{
			if (func_277(iParam2, iParam0))
			{
				*iParam3 = (1 << 10);
				func_258(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!(iParam2->f_1 & (1 << 11)) != 0)
			{
				if (func_278(iParam0, iParam1, iParam2))
				{
					*iParam3 = (1 << 11);
					func_258(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if ((*iParam2 & 16) != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_279(iParam0, iParam2))
					{
						*iParam3 = (1 << 13);
						func_258(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if ((*iParam2 & 64) != 0)
			{
				if (func_280(iParam0, iParam2))
				{
					*iParam3 = (1 << 15);
					func_258(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12.0f)
		{
			if ((*iParam2 & (1 << 20)) != 0)
			{
				if (func_281(iParam2, 4000))
				{
					if (func_282(&iParam0, iParam2))
					{
						*iParam3 = (1 << 9);
						func_258(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if ((*iParam2 & (1 << 10)) != 0)
			{
				if (func_283(iParam0, iParam2))
				{
					*iParam3 = (1 << 16);
					iParam2->f_4 = 0;
					func_258(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!(iParam2->f_1 & 1) != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_284(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_258(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_89()
{
	int iVar0;

	if (sLocal_128.f_46)
	{
		return false;
	}
	iVar0 = func_285(Global_35, 1, 0, 0);
	if ((iVar0 == joaat("WEAPON_LASSO") && PED::IS_PED_SHOOTING(Global_35)) && func_286(iLocal_501[0], 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
	{
		return true;
	}
	return false;
}

void func_90(int iParam0, int iParam1)
{
	func_287(iParam0, iParam1);
}

bool func_91(int iParam0, int iParam1)
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
	if (func_18(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_18(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_18(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_18(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_18(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_18(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_18(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_18(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_92(int iParam0)
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

void func_93(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_92(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_288(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_289(iVar0);
	*uParam0 = 0;
}

int func_94(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_290(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_291(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_290(sVar0, iParam1, 0, 0, 1, 1);
}

float func_95(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_96(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_233())
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
				if (func_28(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_95(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_115(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_292(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_294(func_293(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_97()
{
	if (!func_18(iLocal_900, (1 << 23)))
	{
		if (!func_190(vLocal_455))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_455, 2.0f))
			{
				func_295(vLocal_455, 4.0f, 1, 0, 0, 0, 0);
				func_296(&uLocal_920, &uLocal_919, vLocal_455, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 4.0f, 0, 0, 1, 0, 0);
				func_297(&(uLocal_981[0]), vLocal_455, 1.5f);
				func_90(&iLocal_900, (1 << 23));
			}
		}
	}
}

void func_98()
{
	if (func_20(iLocal_501[1], 0, 1))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_501[1], false);
	}
}

void func_99()
{
	int iVar0;

	func_298();
	if (iLocal_632 >= 3 && iLocal_632 < 8)
	{
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[0], &sLocal_475);
		func_107(iLocal_501[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	}
	if (sLocal_128.f_46)
	{
		if (iLocal_634 < 18)
		{
			iLocal_634 = 18;
		}
	}
	switch (iLocal_634)
	{
		case 0:
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_501[0], true);
			func_299();
			PED::_SET_PED_BLACKBOARD_BOOL(iLocal_501[0], "IsSearching", true, -1);
			iLocal_634 = 1;
			break;
		case 1:
			if (func_18(iLocal_901, 256))
			{
				if (ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iLocal_501[0], 1))
				{
					if (!ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 888864458))
					{
						PED::_REMOVE_PED_BLACKBOARD_BOOL(iLocal_501[0], "IsSearching");
						func_300();
						iLocal_634 = 2;
					}
				}
				else
				{
					PED::_REMOVE_PED_BLACKBOARD_BOOL(iLocal_501[0], "IsSearching");
					func_300();
					iLocal_634 = 2;
				}
			}
			else
			{
				func_301();
			}
			break;
		case 2:
			if ((func_119(&uLocal_966) > 1.75f || TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[0], joaat("SCRIPT_TASK_ANY"), true) != 1) && sLocal_128.f_98[0] < 10.0f)
			{
				if (iLocal_15 == 0)
				{
					func_29(iLocal_501[0], Global_35, func_134("MISTER_GEN", 1), 0, 15.0f, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				if (!MAP::DOES_BLIP_EXIST(uLocal_506[0]))
				{
					func_126(iLocal_501[0], &(uLocal_506[0]), joaat("BLIP_STYLE_FRIENDLY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, "RE_INTER_STRANGER" /* GXTEntry: "Stranger" */);
				}
				func_302(iLocal_501[0], sLocal_851, sLocal_910, func_122(2), 0, 0);
				iLocal_634 = 3;
			}
			break;
		case 3:
			func_303(5.0f);
			if ((func_114(0, 1, iLocal_501[0], 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[0], sLocal_910, func_122(2), 1)) && sLocal_128.f_98[0] < 15.0f)
			{
				if (iLocal_15 == 0)
				{
					func_29(iLocal_501[0], Global_35, func_134("HOURS", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				func_302(iLocal_501[0], sLocal_851, sLocal_910, func_122(3), 0, 0);
				iLocal_634 = 4;
			}
			break;
		case 4:
			func_303(5.0f);
			if (!func_18(iLocal_901, (1 << 9)))
			{
				if (!func_304(&uLocal_978))
				{
					func_115(&uLocal_978);
				}
				else if (func_119(&uLocal_978) > 2.0f)
				{
					if (func_114(0, 1, iLocal_501[0], 1))
					{
						func_90(&iLocal_901, (1 << 9));
					}
				}
			}
			else
			{
				func_305();
			}
			if (func_18(iLocal_987, 2))
			{
				iLocal_634 = 5;
				return;
			}
			else if (func_18(iLocal_987, 4))
			{
				iLocal_634 = 6;
				return;
			}
			else if (func_18(iLocal_987, 8))
			{
				func_109(Global_35, 8000);
				IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[0], &sLocal_475);
				iLocal_634 = 6;
				return;
			}
			break;
		case 5:
			if (func_18(iLocal_987, 16))
			{
				if ((func_114(0, 1, iLocal_501[0], 1) && func_114(0, 1, Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[0], sLocal_910, func_122(5), 1))
				{
					func_302(iLocal_501[0], sLocal_851, sLocal_910, func_122(6), 0, 0);
					iLocal_634 = 8;
				}
			}
			break;
		case 6:
			if ((func_114(0, 1, iLocal_501[0], 1) && func_114(0, 1, Global_35, 1)) && func_18(iLocal_987, 32))
			{
				func_90(&iLocal_901, (1 << 10));
				if (!func_306(1088421888 /* Float: 7f */))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_501[0], vLocal_455, 1.0f, -1, 0.25f, 0, fLocal_458);
				}
				else
				{
					func_299();
				}
				func_27(&(uLocal_506[0]));
				iLocal_634 = 10;
			}
			break;
		case 8:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 1725482796))
			{
				if (iLocal_15 == 0)
				{
					func_29(iLocal_501[0], Global_35, "RE_LD_STR_V1_WHT_BRN_FOX", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				else
				{
					func_29(iLocal_501[0], Global_35, "RE_LD_EMR_V1_YEL_LAB_ALT_TREE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
			}
			if ((func_114(0, 1, iLocal_501[0], 1) && func_114(0, 1, Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[0], sLocal_910, func_122(6), 1))
			{
				func_90(&iLocal_901, (1 << 11));
				iLocal_634 = 9;
			}
			break;
		case 9:
			if (func_18(iLocal_900, (1 << 18)))
			{
				if (!func_306(1088421888 /* Float: 7f */))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_501[0], vLocal_455, 1.0f, -1, 0.25f, 0, fLocal_458);
				}
				else
				{
					func_299();
				}
				iLocal_634 = 10;
			}
			break;
		case 10:
			if (!func_18(iLocal_900, 2))
			{
				if (!func_18(iLocal_900, (1 << 25)))
				{
					if (!func_18(iLocal_901, (1 << 24)))
					{
						func_307();
					}
					else
					{
						func_308();
					}
				}
			}
			if (func_18(iLocal_901, (1 << 12)))
			{
				func_147(&iLocal_901, 2);
				func_90(&iLocal_901, 4);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_501[0], iLocal_501[1], -1, 2060, 41, 0);
				func_29(iLocal_501[0], Global_35, func_134("RETURN", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_501[0]);
				func_109(iLocal_501[1], -1);
				IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[0], &sLocal_475);
				iLocal_634 = 12;
			}
			else if (func_18(iLocal_901, (1 << 18)))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_501[0], Global_35, 200.0f, -1, 256, 2.0f, 0);
				func_115(&uLocal_954);
				iLocal_634 = 11;
			}
			break;
		case 11:
			if (func_18(iLocal_901, (1 << 17)))
			{
				if (func_114(0, 1, iLocal_501[0], 1) && func_114(0, 1, Global_35, 1))
				{
					func_29(iLocal_501[0], Global_35, "RE_LD_EMR_V1_ILO_LINGER_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					func_90(&iLocal_901, (1 << 19));
				}
			}
			break;
		case 12:
			if (func_18(iLocal_900, (1 << 16)))
			{
				if (iLocal_15 == 0)
				{
					func_309();
				}
				else if (func_18(iLocal_900, (1 << 9)))
				{
					func_309();
				}
				if (func_18(iLocal_900, (1 << 24)))
				{
					if (iLocal_15 == 0)
					{
						func_29(iLocal_501[0], iLocal_501[1], func_134("KID_LAUGH", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						iLocal_634 = 13;
					}
					else
					{
						iLocal_634 = 15;
					}
				}
			}
			break;
		case 13:
			if (func_18(iLocal_901, 8))
			{
				iLocal_634 = 14;
			}
			break;
		case 14:
			func_310(1);
			break;
		case 15:
			if (func_18(iLocal_901, (1 << 20)))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_501[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_501[1], -1, 0.25f, 2.0f, 0.0f, 1);
				TASK::TASK_WANDER_STANDARD(0, 40000.0f, 0);
				func_311(iLocal_501[0], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(iLocal_501[0], true);
				iLocal_634 = 16;
			}
			break;
		case 16:
			if (func_312())
			{
				iLocal_634 = 17;
			}
			break;
		case 17:
			if (func_18(iLocal_901, (1 << 18)))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_501[0], Global_35, 200.0f, -1, 256, 2.0f, 0);
				func_115(&uLocal_954);
				iLocal_634 = 11;
			}
			break;
		case 18:
			if (func_313())
			{
				iLocal_634 = 19;
			}
			break;
		case 19:
			if (sLocal_128.f_46)
			{
				func_314();
			}
			break;
	}
}

void func_100()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_501[1]))
	{
		return;
	}
	func_315();
	func_316(iLocal_501[1], &uLocal_969, 1, 25);
	if (sLocal_128.f_46)
	{
		if (iLocal_628 < 10)
		{
			iLocal_628 = 10;
		}
	}
	else
	{
		PED::SET_PED_RESET_FLAG(iLocal_501[1], 313 /*PRF_0x7D5A7A9B*/, true);
	}
	switch (iLocal_628)
	{
		case 0:
			if (!func_18(iLocal_987, 128))
			{
				func_317();
				PED::SET_PED_RESET_FLAG(iLocal_501[1], 12 /*PRF_UseKinematicPhysics*/, true);
				func_131(iLocal_501[1], &uLocal_927, 0.0f, 0.0f, 0.0f, 1, 30.0f, 10.0f, -1, 3000, 2000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
			}
			else if (func_318())
			{
				func_319();
				func_90(&iLocal_900, 32);
				iLocal_628 = 1;
			}
			break;
		case 1:
			if (func_320())
			{
				if (iLocal_15 == 1)
				{
					PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_501[1], "sad");
				}
				func_321();
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_501[1], true);
				func_322();
				func_90(&iLocal_900, (1 << 22));
				iLocal_628 = 2;
			}
			break;
		case 2:
			if (func_18(iLocal_901, (1 << 12)))
			{
				iLocal_628 = 3;
			}
			else
			{
				if (func_323(Global_35) && PED::_GET_GROUP_FORMATION(iLocal_889) != 9)
				{
					PED::SET_GROUP_FORMATION(iLocal_889, 9);
				}
				else if (PED::_GET_GROUP_FORMATION(iLocal_889) != 0)
				{
					PED::SET_GROUP_FORMATION(iLocal_889, 0);
				}
				if (func_95(iLocal_501[1], iLocal_501[0], 1, 1) < 15.0f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY"), true) == 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_501[1], true, false);
					}
				}
			}
			break;
		case 3:
			func_144();
			func_324();
			if (func_18(iLocal_900, (1 << 9)))
			{
				func_90(&iLocal_900, (1 << 16));
				func_19();
				func_325();
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_917);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_917);
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_512[3], true, 0) && iLocal_15 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1775.909f, -415.2195f, 154.1063f, 2.0f, 20000, 2.0f, 524289, 40000.0f);
				}
				if (func_326(iLocal_501[1], vLocal_541, 1) < 7.0f)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_541, 1.0f, 20000, 7.0f, 524289, vLocal_541.f_3.f_2);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_541, 2.0f, 20000, 7.0f, 524289, vLocal_541.f_3.f_2);
				}
				func_311(iLocal_501[1], &iLocal_917, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(iLocal_501[1], true);
				func_327(iLocal_501[1], vLocal_541, vLocal_541.f_3.f_2);
				iLocal_628 = 4;
			}
			break;
		case 4:
			func_325();
			if (func_326(iLocal_501[1], vLocal_541, 1) < 10.0f)
			{
				iLocal_628 = 5;
			}
			else
			{
				func_328();
				func_329();
			}
			break;
		case 5:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1.0f);
			func_325();
			if (func_330(&sLocal_595, 106))
			{
				func_53(0);
				func_90(&iLocal_900, 16);
				if (iLocal_15 == 0)
				{
					iLocal_628 = 6;
				}
				else
				{
					iLocal_628 = 7;
				}
			}
			break;
		case 6:
			if (iLocal_632 == 15)
			{
				func_331(&(iLocal_501[1]), 0, iLocal_501[0], 1, 0, 0, 0, 1);
				func_332();
				iLocal_628 = 8;
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_2, false))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_533.f_2) > 0.5f)
				{
					func_332();
				}
			}
			break;
		case 7:
			if (func_333())
			{
				iLocal_628 = 9;
			}
			break;
		case 8:
			break;
		case 9:
			func_334(0);
			break;
		case 10:
			func_335();
			iLocal_628 = 11;
			break;
		case 11:
			break;
	}
}

void func_101()
{
	if (func_18(iLocal_987, 2))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 217 /*PRF_DisableFriendlyAmbientAnimalFollowing*/, true);
	}
}

void func_102()
{
	if (iLocal_632 <= 4 || func_18(iLocal_900, (1 << 14)))
	{
		return;
	}
	func_336();
}

void func_103()
{
	if (func_18(iLocal_901, (1 << 20)))
	{
		return;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -1931509438))
	{
		func_90(&iLocal_901, (1 << 20));
	}
}

void func_104()
{
	if (!func_18(iLocal_900, (1 << 18)) || func_18(iLocal_900, (1 << 30)))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_474))
	{
		return;
	}
	else if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_474))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_474);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_501[2]))
	{
		func_337();
		PED::SET_PED_RESET_FLAG(iLocal_501[2], 170 /*PRF_0x2F028E2F*/, true);
	}
	if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), iLocal_501[2]))
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), iLocal_501[2], false);
		ENTITY::SET_ENTITY_COORDS(iLocal_501[2], 0.0f, 0.0f, 0.0f, true, false, true, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_501[2], true);
		func_90(&iLocal_900, (1 << 30));
	}
	if (func_338(iLocal_501[2], sLocal_474, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
	{
	}
}

void func_105()
{
	if (!func_18(iLocal_908, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_501[1]))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_501[1]) && ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_501[1], Global_35, 1, 1))
			{
				func_121(4, 0, 0, "RE_HONOR_CRUEL_KILLING" /* GXTEntry: "Cruel Killing" */, iLocal_501[1], 0, 1065353216 /* Float: 1f */, 0);
				func_90(&iLocal_908, 1);
			}
		}
	}
	if (iLocal_15 == 0)
	{
		if (!func_18(iLocal_908, 2))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_501[0]) && ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_501[0], Global_35, 1, 1))
			{
				func_121(4, 0, 0, "RE_HONOR_CRUEL_KILLING" /* GXTEntry: "Cruel Killing" */, iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
				func_90(&iLocal_908, 2);
			}
		}
	}
	else if (iLocal_15 == 1)
	{
		if (!func_18(iLocal_908, 2))
		{
			if (func_18(iLocal_900, 16))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_501[0]) && ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_501[0], Global_35, 1, 1))
				{
					func_121(1, 0, 0, 0, iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
					func_90(&iLocal_908, 2);
				}
			}
			else if (ENTITY::IS_ENTITY_DEAD(iLocal_501[0]) && ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_501[0], Global_35, 1, 1))
			{
				func_121(4, 0, 0, "RE_HONOR_CRUEL_KILLING" /* GXTEntry: "Cruel Killing" */, iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
				func_90(&iLocal_908, 2);
			}
		}
		if (!func_18(iLocal_908, 4))
		{
			if (func_18(iLocal_900, 16))
			{
				if (PED::GET_PED_CONFIG_FLAG(iLocal_501[0], 11 /*PCF_Knockedout*/, true))
				{
					func_121(11, 0, 0, "RE_HONOR_JUSTICE_SERVED" /* GXTEntry: "Justice Served" */, iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
					func_90(&iLocal_908, 4);
				}
			}
		}
	}
}

int func_106()
{
	if (!func_18(iLocal_900, (1 << 18)))
	{
		return 0;
	}
	if (func_18(iLocal_900, (1 << 20)))
	{
		return 1;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_533.f_0, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(sLocal_533.f_0);
	}
	else
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_0, "PBL_NO_FEED_ALL");
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_0, "PBL_NO_FEED_ALL"))
		{
			func_90(&iLocal_900, (1 << 20));
			return 1;
		}
	}
	return 0;
}

void func_107(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_339(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188 /*PRF_0x8DF01625*/, true);
		}
	}
}

void func_108()
{
}

void func_109(var uParam0, int iParam1)
{
	sLocal_475.f_3 = uParam0;
	sLocal_475 = { 0.0f, 0.0f, 0.0f /*3*/ };
	sLocal_475.f_8 = 4;
	sLocal_475.f_20 = 4;
	sLocal_475.f_19 = 4;
	sLocal_475.f_22 = 4;
	sLocal_475.f_21 = 4;
	sLocal_475.f_17 = 4;
	sLocal_475.f_18 = 4;
	sLocal_475.f_4 = 21030;
	sLocal_475.f_7 = iParam1;
	sLocal_475.f_13 = 2;
}

void func_110()
{
	switch (iLocal_500)
	{
		case 26:
			func_177(&(uLocal_512[3]), -1775.679f, -392.4636f, 163.0866f, 0.0f, 0.0f, 60.86665f, 49.10442f, 34.55846f, 26.35269f, "volDogFR");
			func_177(&(uLocal_512[4]), -1765.776f, -420.9764f, 163.0866f, 0.0f, 0.0f, 58.29212f, 11.29032f, 11.43307f, 26.35269f, "volDogR");
			func_177(&(uLocal_512[1]), -1792.451f, -422.8227f, 163.0866f, 0.0f, 0.0f, 63.56664f, 18.78336f, 32.46287f, 26.35269f, "volDogF");
			func_177(&(uLocal_512[0]), -1793.625f, -443.0624f, 163.0866f, 0.0f, 0.0f, 93.04421f, 24.85473f, 35.51765f, 26.35269f, "volDogL");
			break;
		case 69:
			func_177(&(uLocal_512[4]), 1341.482f, 274.648f, 87.806f, 0.0f, 0.0f, 80.479f, 36.835f, 20.063f, 25.0f, "volDogR");
			func_177(&(uLocal_512[3]), 1362.41f, 267.942f, 88.952f, 0.0f, 0.0f, 19.31f, 27.848f, 50.741f, 25.0f, "volDogFR");
			func_177(&(uLocal_512[2]), 1360.98f, 304.967f, 87.685f, 0.0f, 0.0f, 104.782f, 25.0f, 36.394f, 32.971f, "volDogFL");
			func_177(&(uLocal_512[0]), 1344.317f, 318.623f, 87.685f, 0.0f, 0.0f, 17.264f, 36.835f, 39.569f, 25.0f, "volDogL");
			break;
	}
	if (iLocal_15 == 0)
	{
		strcpy_s(&cLocal_116, 32, "pblExitGood");
	}
	else
	{
		strcpy_s(&cLocal_116, 32, "pblExitBad");
	}
}

void func_111()
{
	if (iLocal_15 == 1)
	{
		iLocal_923 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1404.695f, 315.1154f, 90.49152f, 0.0f, 0.0f, 100.8236f, 186.8191f, 174.625f, 44.5228f, "volLostDog");
	}
	else
	{
		iLocal_923 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1798.875f, -354.4025f, 159.6362f, 0.0f, 0.0f, -30.96453f, 168.6743f, 218.4974f, 151.9258f, "volLostDog");
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_923, 256, 0, joaat("SPECIES_DOMESTIC_CAT"), -1, -1, 2);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_923, 256, 0, joaat("SPECIES_DOMESTIC_DOG"), -1, -1, 2);
	if (!func_190(vLocal_455))
	{
		iLocal_924 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_455, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f, "m_volKidLoiter");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_923, (1 << 18), 0, 0, -1, -1, 2);
	}
}

bool func_112()
{
	if (func_340(&sLocal_128, 0.5f, 25.0f, 10.0f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) && (func_341(iLocal_501[0], Global_35, 1, 18.0f, 0) || sLocal_128.f_98[0] < 4.0f))
	{
		return true;
	}
	if (func_18(iLocal_987, (1 << 10)))
	{
		if (func_119(&uLocal_960) > 2.0f)
		{
			return true;
		}
	}
	return false;
}

void func_113()
{
	if (func_18(iLocal_901, (1 << 14)))
	{
		func_342(&uLocal_1161, &sLocal_1153, iLocal_501[0], 0.0f, 0.0f, 0.0f, 0, -1, 2000, 1250, 1, 0, 1, 1106247680 /* Float: 30f */);
	}
}

bool func_114(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_343(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_344(fParam0))
	{
		return false;
	}
	return true;
}

void func_115(var uParam0)
{
	func_345(uParam0, 0.0f);
}

void func_116()
{
	if (!func_18(iLocal_900, 4))
	{
		func_346(97);
		func_347(&Global_1935630, 4);
		func_90(&iLocal_900, 4);
	}
}

void func_117(var uParam0)
{
	if (func_92(*uParam0))
	{
		func_93(uParam0, 1, 1);
	}
}

void func_118()
{
	func_22(12, 1);
	func_109(Global_35, 8000);
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[0], &sLocal_475);
	func_47();
	func_44();
	func_90(&iLocal_900, (1 << 11));
}

float func_119(var uParam0)
{
	if (!func_304(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_348(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_349() - uParam0->f_1);
}

bool func_120()
{
	if (func_350() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_121(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_350() != -1)
	{
		return;
	}
	if ((Global_36616 & func_220(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_351(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_352(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_353(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_352(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

char* func_122(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "come_here_girl_kid";
			break;
		case 2:
			sVar0 = "hey_mister_kid";
			break;
		case 3:
			sVar0 = "shes_been_gone_kid";
			break;
		case 4:
			sVar0 = "alright_kid";
			break;
		case 5:
			sVar0 = "i_appreciate_kid";
			break;
		case 6:
			sVar0 = "black_retriever_kid";
			break;
		case 7:
			sVar0 = "alright_kid";
			break;
		case 8:
			sVar0 = "enter_feeding_player";
			break;
		case 9:
			sVar0 = "idle_feed_player";
			break;
		case 10:
			sVar0 = "exit_feed_player";
			break;
		case 18:
			sVar0 = "breakout_sit_left_kid";
			break;
		case 19:
			sVar0 = "breakout_sit_right_kid";
			break;
		case 20:
			sVar0 = "breakout_stand_left_kid";
			break;
		case 21:
			sVar0 = "breakout_stand_right_kid";
			break;
		case 22:
			sVar0 = "idle_01_dog";
			break;
		case 23:
			sVar0 = "idle_02_dog";
			break;
		case 24:
			sVar0 = "jump_01_dog";
			break;
		case 25:
			sVar0 = "jump_02_dog";
			break;
		case 26:
			sVar0 = "jump_03_dog";
			break;
		case 27:
			sVar0 = "base_dog";
			break;
	}
	return sVar0;
}

bool func_123()
{
	if (!func_20(iLocal_501[1], 0, 1))
	{
		func_354();
		iLocal_501[1] = func_75(sLocal_322[1 /*32*/].f_1, &(sLocal_322[1 /*32*/]), vLocal_469, fLocal_472, 0, 0, 1, 0, 1);
		func_355(iLocal_501[1], 0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_501[1], false, 0.0f);
		func_356(iLocal_501[1], 1);
		TASK::_0xE01C8DC8EDD28D31(iLocal_501[1], 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(sLocal_533.f_2, "pedDog", iLocal_501[1], 0);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_501[1], "RELD_DOG_MIXGROUP", 0.0f);
		AUDIO::START_AUDIO_SCENE("RELD_LOST_DOG_SCENE");
		PED::_0x4F27603E44A8E4C0(iLocal_501[1], 10, false);
		func_295(vLocal_469, 5.0f, 1, 0, 0, 0, 0);
		func_296(&uLocal_922, &uLocal_921, vLocal_469, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f, 0, 0, 1, 0, "m_volDog");
		if (iLocal_16 == 1)
		{
			func_296(&uLocal_925, &uLocal_918, -1786.716f, -327.9248f, 179.2992f, 0.0f, 0.0f, 0.0f, 2.5f, 2.5f, 2.5f, 0, 0, 1, 0, "m_volNearDogScenario");
		}
		if (iLocal_16 == 2)
		{
			func_357(&(uLocal_981[2]), 1451.781f, 367.7539f, 87.67948f, 1.0f);
		}
		else if (iLocal_16 == 3)
		{
			func_297(&(uLocal_981[2]), 1459.54f, 328.2583f, 88.65903f, 0.8f);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_124()
{
	func_358(&iLocal_519, vLocal_469, 0.0f, 0.0f, 0.0f, 8.0f, 8.0f, 8.0f, "m_volSafeFeed");
	iLocal_520 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), vLocal_469, 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
}

void func_125()
{
	switch (iLocal_15)
	{
		case 0:
			func_359(-1798.4f, -397.8385f, 152.6189f, 120.0f, &iLocal_511, joaat("BLIP_STYLE_RADIUS"));
			break;
		case 1:
			func_359(1413.383f, 316.321f, 87.39703f, 100.0f, &iLocal_511, joaat("BLIP_STYLE_RADIUS"));
			break;
	}
}

void func_126(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_127()
{
	if (iLocal_15 == 0)
	{
		func_360(&(uLocal_981[1]), -1787.52f, -432.5891f, 154.3505f, 1.5f, 2, 286, 0);
		func_360(&(uLocal_981[2]), -1787.52f, -432.5891f, 154.3505f, 1.5f, 1, 28, 0);
		func_297(&(uLocal_981[3]), -1774.121f, -436.3038f, 154.0623f, 1.5f);
	}
}

void func_128()
{
	strcpy_s(&cLocal_124, 32, "PBL_NO_FEED_ALL");
}

void func_129(int iParam0)
{
	Vector3 vVar0;
	float fVar3;
	Vector3 vVar4;

	vLocal_451 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
	fLocal_454 = func_361(Global_36, vLocal_469, 1);
	OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Global_36, fLocal_454, 0.0f, 0.6f, 0.0f);
	func_362(&vLocal_451, 1088421888 /* Float: 7f */);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_533.f_0, vLocal_451, 0.0f, 0.0f, fLocal_454, 2);
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_451, fLocal_454, 0.0f, 2.01f, 0.0f) /*3*/ };
	fVar3 = (fLocal_454 - 225.0f);
	func_362(&vVar0, 0.5f);
	*iParam0 = TASK::CREATE_SCENARIO_POINT_HASH(iLocal_529, vVar0, fVar3, 0.0f, 0.0f, false);
	vVar4 = { TASK::_GET_SCENARIO_POINT_COORDS(*iParam0, true) /*3*/ };
}

void func_130(Vector3 vParam0, float fParam3)
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_533.f_0, vParam0, 0.0f, 0.0f, fParam3, 2);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_533.f_0, &cLocal_124, true);
}

void func_131(int iParam0, var uParam1, Vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_363(&(uParam1->f_3), 1))
	{
		func_364(uParam1);
		if (func_365(iParam0, fParam7, iParam11, bParam12, bParam13, fParam14))
		{
			func_25();
		}
	}
	if (func_366(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0.0f, 0.0f, 0.0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_367(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

bool func_132(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && PED::IS_PED_ON_MOUNT(iParam0))
				{
					vVar0 = { func_368(iParam0, iParam1, sParam2, sParam3, 0) /*3*/ };
					if (!func_190(vVar0))
					{
						if (func_369(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar0))
						{
							iVar5 = (1 << 17);
						}
						else
						{
							iVar5 = (1 << 18);
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, iVar5, 0, 0, 0, 0);
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
					if (PED::IS_PED_CARRYING_SOMETHING(iParam0))
					{
						iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), (1 << 30), 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, fParam5, bParam7, 0, 20000, -1.0f);
					func_311(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(iParam0))
				{
					iVar3 = PED::_GET_LAST_MOUNT(iParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						TASK::TASK_FLEE_PED(iVar3, iParam0, 6, 0, 4.0f, -1, 0);
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
					func_311(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, iParam1))
					{
						return true;
					}
				}
				else if (func_370(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(iParam0) > 0)
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(iParam0) && ANIMSCENE::_HAS_ENTITY_ENTERED_ANIM_SCENE(iParam1, sParam2))
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

void func_133()
{
	if (!sLocal_128.f_46)
	{
		if (!func_18(iLocal_901, 2))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "pblIdleReturn");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "PB_INTRO_FL");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "PB_INTRO_FR");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "PB_INTRO_L");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "PB_INTRO_N");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "PB_INTRO_R");
			if (((((ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "pblIdleReturn") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "PB_INTRO_FL")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "PB_INTRO_FR")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "PB_INTRO_L")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "PB_INTRO_N")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "PB_INTRO_R"))
			{
				func_371();
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_501[0], false, true);
				ENTITY::SET_ENTITY_COORDS(iLocal_501[0], vLocal_455, true, false, true, true);
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "pblIdleReturn", true);
				ANIMSCENE::START_ANIM_SCENE(sLocal_533.f_1);
				iLocal_906 = sLocal_533.f_1;
				func_90(&iLocal_901, 2);
			}
		}
	}
}

char* func_134(char* sParam0, bool bParam1)
{
	char cVar0[64];
	char cVar8[64];
	char cVar16[64];

	strcpy_s(&cVar16, 64, "RE_LD_");
	if (iLocal_500 == 26)
	{
		strcpy_s(&cVar0, 64, "STR_");
	}
	else if (iLocal_500 == 69)
	{
		strcpy_s(&cVar0, 64, "EMR_");
	}
	if (iLocal_15 == 0 || bParam1)
	{
		strcpy_s(&cVar8, 64, "V1_");
	}
	else if (iLocal_15 == 1)
	{
		strcpy_s(&cVar8, 64, "V2_");
	}
	strcat_s(&cVar16, 64, &cVar0);
	strcat_s(&cVar16, 64, &cVar8);
	func_372(sParam0);
	strcat_s(&cVar16, 64, sParam0);
	return func_373(cVar16);
}

void func_135()
{
	if (func_18(iLocal_900, (1 << 25)))
	{
		return;
	}
	if ((!ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_0, false) || ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_533.f_0) > 0.99f) || bLocal_893 == 0)
	{
		func_90(&iLocal_900, (1 << 25));
	}
}

void func_136()
{
	if ((!ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_0, false) || ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_533.f_0) > 0.99f) || bLocal_893 == 0)
	{
		if (func_18(iLocal_900, (1 << 12)))
		{
			func_59(1, 0);
		}
	}
}

bool func_137()
{
	if ((ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_0, false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_533.f_0) > 0.99f) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_0, false))
	{
		return true;
	}
	return false;
}

void func_138(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_139()
{
	if (!func_18(iLocal_900, 2))
	{
		if (!func_304(&uLocal_939))
		{
			func_115(&uLocal_939);
		}
		else if (func_374(&uLocal_939, 1.0f))
		{
			func_94("DOG_OBJ03" /* GXTEntry: "Return the dog to the ~o~kid~s~" */, 7500, 0, 1, 0, 0, -1, -1, 0);
			func_126(iLocal_501[0], &(uLocal_506[0]), joaat("BLIP_STYLE_FRIENDLY"), joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, 0);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_506[0], "RE_INTER_STRANGER" /* GXTEntry: "Stranger" */);
			MAP::_BLIP_SET_STYLE(uLocal_506[1], joaat("BLIP_STYLE_COMPANION"));
			func_90(&iLocal_900, 2);
		}
	}
}

void func_140()
{
	int iVar0;

	if (sLocal_17.f_0 == -1)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			if (func_141(iLocal_501[1], uLocal_512[iVar0], 0, 1) || func_141(Global_35, uLocal_512[iVar0], 0, 1))
			{
				sLocal_17.f_0 = iVar0;
			}
			iVar0++;
		}
		if (sLocal_17.f_0 != -1)
		{
			switch (iLocal_500)
			{
				case 26:
					switch (sLocal_17.f_0)
					{
						case 1:
						case 3:
						case 4:
							sLocal_17.f_6 = { -1786.558f, -432.515f, 154.328f /*3*/ };
							sLocal_17.f_9 = 19.302f;
							sLocal_17.f_2 = { -1788.245f, -432.748f, 154.37f /*3*/ };
							sLocal_17.f_5 = 19.302f;
							break;
						case 0:
							sLocal_17.f_6 = { -1774.482f, -436.1153f, 154.0681f /*3*/ };
							sLocal_17.f_9 = 40.6423f;
							sLocal_17.f_2 = { -1775.511f, -437.183f, 154.0404f /*3*/ };
							sLocal_17.f_5 = 27.444f;
							break;
					}
					break;
				case 69:
					sLocal_17.f_6 = { vLocal_455 /*3*/ };
					sLocal_17.f_9 = fLocal_458;
					break;
			}
		}
	}
}

bool func_141(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_142(int iParam0, var uParam1, int iParam2, var uParam3, float fParam4, float fParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (func_375(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
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
	if (func_376(iParam0, fParam5))
	{
		if (func_377(vVar0, iParam0, uParam1, iParam2, uParam3, fParam4, fParam5, bParam7, fParam9))
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

char* func_143()
{
	char* sVar0;

	switch (iLocal_15)
	{
		case 0:
			if (func_229(iLocal_501[1], uLocal_512[4], 1, 0))
			{
				sVar0 = "PB_INTRO_R";
			}
			else if (func_229(iLocal_501[1], uLocal_512[3], 1, 0))
			{
				sVar0 = "PB_INTRO_N";
			}
			else if (func_229(iLocal_501[1], uLocal_512[1], 1, 0))
			{
				sVar0 = "PB_INTRO_FL";
			}
			else if (func_229(iLocal_501[1], uLocal_512[0], 1, 0))
			{
				sVar0 = "PB_INTRO_L";
			}
			break;
		case 1:
			if (func_229(iLocal_501[1], uLocal_512[4], 1, 0))
			{
				sVar0 = "PB_INTRO_R";
			}
			else if (func_229(iLocal_501[1], uLocal_512[3], 1, 0))
			{
				sVar0 = "PB_INTRO_FR";
			}
			else if (func_229(iLocal_501[1], uLocal_512[2], 1, 0))
			{
				sVar0 = "PB_INTRO_FL";
			}
			else if (func_229(iLocal_501[1], uLocal_512[0], 1, 0))
			{
				sVar0 = "PB_INTRO_L";
			}
			break;
	}
	return sVar0;
}

void func_144()
{
	float fVar0;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(sLocal_533.f_2, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(sLocal_533.f_2);
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_2, &cLocal_116))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_2, &cLocal_116);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_2, &cLocal_116))
	{
		if (func_18(iLocal_901, 32))
		{
			if (!func_18(iLocal_900, 256))
			{
				func_362(&(sLocal_553.f_6), 1.0f);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sLocal_533.f_2, sLocal_553.f_6, 0.0f, 0.0f, sLocal_553.f_9.f_2, 2);
				ANIMSCENE::START_ANIM_SCENE(sLocal_533.f_2);
				iLocal_906 = sLocal_533.f_2;
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(sLocal_533.f_2, &cLocal_116, true);
				func_90(&iLocal_900, 256);
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(sLocal_533.f_2, "pedDog", &vLocal_541, true, &cLocal_116, 2))
			{
				fVar0 = vLocal_541.z;
				func_362(&vLocal_541, 1.0f);
				if (fVar0 > vLocal_541.z)
				{
					vLocal_541.f_2 = fVar0;
				}
				func_90(&iLocal_900, (1 << 9));
			}
		}
	}
}

void func_145()
{
	if (iLocal_15 == 0 && func_378())
	{
		sLocal_17.f_6 = { -1776.959f, -445.702f, 153.971f /*3*/ };
		sLocal_17.f_9 = 19.31f;
		sLocal_17.f_2 = { -1776.288f, -445.08f, 153.937f /*3*/ };
		sLocal_17.f_5 = 30.354f;
	}
	iLocal_524 = TASK::CREATE_SCENARIO_POINT_HASH(iLocal_531, sLocal_17.f_6, sLocal_17.f_9, 0.0f, 0.0f, false);
	iLocal_525 = TASK::CREATE_SCENARIO_POINT_HASH(iLocal_530, sLocal_17.f_2, sLocal_17.f_5, 0.0f, 0.0f, false);
	func_296(&uLocal_518, &uLocal_521, sLocal_17.f_6, 0.0f, 0.0f, 0.0f, 2.5f, 2.5f, 2.5f, 0, 0, 1, 8, 0);
}

void func_146(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_147(int iParam0, int iParam1)
{
	func_379(iParam0, iParam1);
}

bool func_148(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_380(iParam0, iParam1, iParam2, uParam3, uParam4))
	{
		return true;
	}
	else if (*uParam3 > 2 && uParam5->f_44 == 0)
	{
		uParam5->f_44 = 1;
	}
	return false;
}

void func_149()
{
	float fVar0;

	if ((bLocal_892 || func_18(iLocal_987, (1 << 11))) || func_18(iLocal_987, (1 << 12)))
	{
		return;
	}
	if (iLocal_15 == 0)
	{
		if (func_18(iLocal_901, 8))
		{
			if (func_114(0, 1, Global_35, 1))
			{
				if (!func_304(&uLocal_972))
				{
					func_115(&uLocal_972);
				}
				else if (func_119(&uLocal_972) > 3.0f)
				{
					if (func_114(0, 1, Global_35, 1) && func_114(0, 1, iLocal_501[0], 1))
					{
						if (func_381())
						{
							func_29(Global_35, iLocal_501[0], func_134("PLYFINAL_HIGH", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						}
						else
						{
							func_29(Global_35, iLocal_501[0], func_134("PLYFINAL_LOW", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						}
						bLocal_892 = true;
					}
				}
			}
		}
	}
	else if (func_18(iLocal_901, (1 << 20)))
	{
		if (func_114(0, 1, Global_35, 1))
		{
			if (!func_304(&uLocal_972))
			{
				func_115(&uLocal_972);
			}
			else
			{
				fVar0 = func_119(&uLocal_972);
				if ((((fVar0 < 20.0f && !func_18(iLocal_987, (1 << 11))) && !func_18(iLocal_987, (1 << 13))) && !func_18(iLocal_987, (1 << 12))) && !func_18(iLocal_987, (1 << 14)))
				{
					if (fVar0 > 3.0f)
					{
						if ((func_114(0, 1, Global_35, 1) && func_114(0, 1, iLocal_501[0], 1)) && sLocal_128.f_98[0] > 15.0f)
						{
							if (func_381())
							{
								func_29(Global_35, iLocal_501[0], func_134("PLYFINAL_HIGH", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							}
							else
							{
								func_29(Global_35, iLocal_501[0], func_134("PLYFINAL_LOW", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							}
							bLocal_892 = true;
						}
					}
				}
				else
				{
					bLocal_892 = true;
				}
			}
		}
	}
}

void func_150()
{
	if (!func_18(iLocal_901, (1 << 17)))
	{
		if ((func_18(iLocal_987, (1 << 14)) || func_18(iLocal_987, (1 << 18))) || func_18(iLocal_901, (1 << 18)))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_501[0]))
			{
				if (sLocal_128.f_98[0] < 10.0f)
				{
					if (!func_304(&uLocal_954))
					{
						func_115(&uLocal_954);
					}
					else if (func_119(&uLocal_954) > 20.0f)
					{
						if (iLocal_15 == 0)
						{
							if (func_382(0))
							{
								func_29(iLocal_501[0], Global_35, func_134("LINGER_SICK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							}
							else
							{
								func_29(iLocal_501[0], Global_35, "IGNORING_YOU", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							}
						}
						else if (func_382(0))
						{
							func_29(iLocal_501[0], Global_35, func_134("LINGER_SICK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						}
						else
						{
							func_29(iLocal_501[0], Global_35, func_134("LINGER_END", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						}
						func_90(&iLocal_901, (1 << 17));
					}
				}
			}
		}
	}
}

bool func_151()
{
	if (!func_383(Global_1395482.f_1))
	{
		return false;
	}
	return func_384(Global_1395482.f_1, 32);
}

bool func_152(int iParam0)
{
	if (func_71(iParam0, 1))
	{
		return false;
	}
	return (1 == func_385(iParam0) || 2 == func_385(iParam0));
}

float func_153(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_154(int iParam0, int iParam1)
{
	*iParam0 -= (*iParam0 & iParam1);
}

void func_155(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_81(iParam0, 16);
	}
	else
	{
		func_154(iParam0, (1 << 26));
		func_154(iParam0, 16);
	}
}

void func_156(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_154(&(iParam0->f_1), 128);
	}
	else
	{
		func_81(&(iParam0->f_1), 128);
	}
}

void func_157(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_81(iParam0, (1 << 28));
	}
	else
	{
		func_154(iParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_81(iParam0, (1 << 30));
	}
	else
	{
		func_154(iParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_81(iParam0, (1 << 29));
	}
	else
	{
		func_154(iParam0, (1 << 29));
	}
}

void func_158(int iParam0, int iParam1)
{
	iParam0->f_21 = iParam1;
}

void func_159(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_160(int iParam0)
{
	if (*iParam0 == 0)
	{
		return false;
	}
	return *iParam0 != -1;
}

bool func_161(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

int func_162(int iParam0)
{
	if (!func_386(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_163(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
	}
}

void func_164(int* iParam0, var uParam1)
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
	func_387(iParam0, uParam1, 1);
	func_45(uParam1, 0, 1, 1, 0);
	MISC::COPY_SCRIPT_STRUCT(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

char* func_165(int iParam0)
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
			return "REFND" /* GXTEntry: "Fundraiser" */;
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
			return "RETH" /* GXTEntry: "All That Glitters" */;
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

void func_166(int iParam0, int iParam1)
{
	if (!func_161(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 |= iParam1;
}

void func_167(int iParam0, bool bParam1)
{
	if (func_20(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_388(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

bool func_168(var uParam0, var uParam1)
{
	if (func_71(uParam0->f_3, (1 << 24)))
	{
		if (func_389(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_169(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6 /*PCF_DontInfluenceWantedLevel*/, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4 /*PCF_HasBounty*/, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494 /*PCF_0x5BD8B9DC*/, true);
}

float func_170(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_171(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_20(iParam0, 0, 1)))
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
			fVar2 = func_170(fParam2 >= 0.0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25.0f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_390(&iParam0);
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

void func_172(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_391(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_24(uParam0);
	func_392(uParam0);
	func_393(uParam0);
	if (!func_394(uParam0))
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_51.f_11))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(uParam0->f_51.f_11);
		}
		func_251(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_47();
	}
	if (!func_395(uParam0->f_3) && !func_71(uParam0->f_3, 256))
	{
		func_396(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_23(uParam0->f_173);
	func_23(uParam0->f_172);
}

void func_173(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_174(int iParam0, int iParam1)
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
				Jump @3261; // curOff = 3048
				return -2137572125;
				Jump @3261; // curOff = 3059
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
				Jump @3261; // curOff = 3106
				return -774894224;
				Jump @3261; // curOff = 3117
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
				Jump @3261; // curOff = 3164
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
				Jump @3261; // curOff = 3225
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
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

void func_175(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_350() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_STATSTRACKER_DEED_STATUS(iParam0, iParam1, iParam2, &vVar0);
}

void func_176(int iParam0, int iParam1)
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam0))
	{
		TASK::_DELETE_SCENARIO_POINT(iParam0);
		STREAMING::_REMOVE_SCENARIO_ASSET(iParam1);
	}
}

void func_177(int iParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

bool func_178(int iParam0)
{
	if (((func_179(iParam0, 1) && func_179(iParam0, 2)) && func_179(iParam0, 8)) && func_179(iParam0, (1 << 9)))
	{
		return true;
	}
	return false;
}

bool func_179(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_180(int iParam0)
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

int func_181(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_397(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_398(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_398(), iVar3);
		if (func_399(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_182()
{
	sLocal_322[0 /*32*/].f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
	sLocal_322[0 /*32*/].f_9 = 90.0f;
	switch (iLocal_500)
	{
		case 26:
			vLocal_459[0 /*3*/] = { -1789.921f, -378.5114f, 157.9496f /*3*/ };
			vLocal_459[1 /*3*/] = { -1776.22f, -415.929f, 154.1867f /*3*/ };
			vLocal_459[2 /*3*/] = { -1827.303f, -415.506f, 160.0764f /*3*/ };
			break;
		case 69:
			vLocal_459[0 /*3*/] = { 1356.624f, 308.2545f, 86.5694f /*3*/ };
			vLocal_459[1 /*3*/] = { 1422.414f, 322.5242f, 87.36899f /*3*/ };
			vLocal_459[2 /*3*/] = { 1434.257f, 386.2798f, 88.67645f /*3*/ };
			break;
	}
}

void func_183(char* sParam0, var uParam1)
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

bool func_184(var uParam0)
{
	if (!func_400(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_400(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_META_PED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = joaat("META_OUTFIT_DEFAULT");
			}
			return false;
		}
		else if (!PED::_HAS_META_PED_OUTFIT_LOADED(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_185(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (!func_161(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (func_401(iParam0) == 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	iVar0 = (func_402(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_186(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;

	if (func_71(iParam0, 32))
	{
		if (func_403(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_404(Global_35, &(uParam1->f_12)) /*3*/ };
				if (!func_190(vVar1))
				{
					*uParam1 = { vVar1 /*3*/ };
				}
			}
		}
	}
	if (bParam2)
	{
		func_405(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_252(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0.0f, 0.0f, 0.0f, fVar4, fVar4, fVar4, func_253());
		if (func_406(Global_1310750[iParam0 /*111*/], (1 << 25)))
		{
			func_255(iVar0, func_254(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_255(iVar0, func_254(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (func_71(iParam0, 1))
		{
			func_407(*uParam1 + Vector(1.0f, 0.0f, 0.0f), 25.0f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_408(iParam0);
}

bool func_187(int iParam0, var uParam1)
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
			func_409(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_82(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_410(iParam0));
		fVar1 = 60.0f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_410(iParam0));
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

void func_188(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_411(iParam0))
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
			if (!func_71(iParam0, 1))
			{
				if (func_82(iParam0, 2))
				{
				}
			}
			func_412(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 2:
			func_413(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 3:
			func_413(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7.0f;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		default:
			break;
	}
	if (func_152(iParam0))
	{
		*fParam2 = 40000.0f;
	}
}

Vector3 func_189(bool bParam0, int iParam1, var uParam2, var uParam3)
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
	while (iVar0 < func_401(iParam1))
	{
		if (!func_414(iParam1, iVar0))
		{
			vVar4 = { func_185(iParam1, iVar0) /*3*/ };
			if (!func_190(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_195(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_415(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 /*3*/ };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_190(vVar4))
	{
	}
	return vVar1;
}

bool func_190(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

int func_191(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_94("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_192(int iParam0, Vector3 vParam1)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_401(iParam0))
	{
		vVar1 = { func_185(iParam0, iVar0) /*3*/ };
		if (func_416(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_193(var uParam0)
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

int func_194(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	vVar2 = { *uParam0 /*3*/ };
	func_417(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (func_418(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_190(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] /*3*/ };
				vVar8 = { MISC::GET_CLOSEST_POINT_ON_LINE(Global_36, vVar2, vVar5, true) /*3*/ };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35.0f * 35.0f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80.0f * 80.0f))
				{
					if (bParam4)
					{
						iVar1 = func_419(uParam0);
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
	return func_191(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_195(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_188(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_71(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_196(var uParam0, bool bParam1)
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

bool func_197(int iParam0, var uParam1, var uParam2, struct<7> /*56*/ sParam3, bool bParam10)
{
	if (func_420(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_421(iParam0, uParam2))
	{
		return false;
	}
	if (!func_422(sParam3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_423(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_198(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_199(int iParam0, int iParam1, var uParam2)
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

void func_200(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_201(int iParam0, int iParam1)
{
	if (func_424(iParam0))
	{
		return;
	}
	if (func_425(iParam0) == iParam1)
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

void func_202(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 0);
	if (bParam3)
	{
		func_154(&iParam1, (1 << 13));
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, iParam0);
	}
}

int func_203(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0 = { *uParam0 /*3*/ };
	if (func_426(&uParam1))
	{
		return 1;
	}
	if (!func_427(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 /*3*/ };
	return 1;
}

bool func_204(var uParam0)
{
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_HAS_META_PED_OUTFIT_LOADED(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_205(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_428(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_206(int iParam0)
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

bool func_207(var uParam0)
{
	return func_18(*uParam0, 4);
}

bool func_208(var uParam0)
{
	return func_18(*uParam0, 64);
}

bool func_209(var uParam0)
{
	return func_18(*uParam0, 8);
}

void func_210(int iParam0, bool bParam1, bool bParam2)
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

bool func_211(var uParam0)
{
	return func_18(*uParam0, 128);
}

bool func_212(var uParam0)
{
	return func_18(*uParam0, (1 << 11));
}

void func_213(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, bParam1);
}

bool func_214(var uParam0)
{
	return func_18(*uParam0, (1 << 10));
}

bool func_215(var uParam0)
{
	return func_18(*uParam0, 256);
}

void func_216(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146 /*PCF_0x861831C4*/, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148 /*PCF_0x0DD984BE*/, !bParam1);
}

bool func_217(var uParam0)
{
	return func_18(*uParam0, (1 << 9));
}

bool func_218(var uParam0)
{
	return func_18(*uParam0, (1 << 12));
}

bool func_219(int iParam0, var uParam1)
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

int func_220(int iParam0)
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

Vector3 func_221(var uParam0)
{
	return uParam0->f_51;
}

bool func_222()
{
	return Global_1935436 == 2;
}

void func_223(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_224(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_71(iParam0, 2))
	{
		func_430(iParam0, func_429(iParam1));
	}
	else
	{
		func_431(iParam0, func_5());
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
	func_432(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_433(iParam0, 0);
	func_434(iParam0);
	func_435(1);
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
	if (!func_71(iParam0, 16))
	{
		func_225(iParam0, 0, 0, 0, 0);
	}
}

void func_225(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_436() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_161(iVar1) && !func_71(iVar1, iParam2)) && (!bParam3 || !func_242(iVar1))) && (!bParam4 || !func_437(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_438(iVar0);
			}
		}
		iVar0++;
	}
}

int func_226(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_227(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_406(Global_1310750[uParam0->f_3 /*111*/], (1 << 24)))
	{
		if (bParam2)
		{
			if (func_71(uParam0->f_3, (1 << 30)))
			{
				func_439(2, -1, 0, 0, 0);
			}
			else
			{
				func_439(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_439(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_440(1, uParam0->f_177))
				{
					func_441(16, uParam0->f_177);
					func_442(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_443(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_439(8, -1, 0, 0, 0);
	}
}

int func_228()
{
	if (func_444(Global_1935630.f_44))
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
		else if (func_445())
		{
			return 1;
		}
	}
	return 0;
}

bool func_229(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_230(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1.0f)
	{
		if (func_71(uParam0->f_3, (1 << 10)))
		{
			fVar0 = 95.0f;
		}
		else if (func_71(uParam0->f_3, (1 << 11)))
		{
			fVar0 = 80.0f;
		}
		else if (func_71(uParam0->f_3, (1 << 12)))
		{
			fVar0 = 65.0f;
		}
		else if (func_71(uParam0->f_3, (1 << 13)))
		{
			fVar0 = 55.0f;
		}
		else if (func_71(uParam0->f_3, (1 << 14)))
		{
			fVar0 = 30.0f;
		}
		else
		{
			fVar0 = 85.0f;
		}
		if (func_71(uParam0->f_3, 1))
		{
		}
		else if (func_71(uParam0->f_3, 2))
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

int func_231(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_446(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_447(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_349() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0.0f;
	}
	return 1;
}

bool func_232(var uParam0, int iParam1, float fParam2)
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
	func_84(uParam0);
	return true;
}

bool func_233()
{
	return ((Global_1894899 & 1) != 0 && func_2() != -1);
}

bool func_234(var uParam0, float fParam1)
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

int func_235(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_448(bParam1, bParam2, bParam3);
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

bool func_236(int iParam0)
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
	iVar0 = func_450(func_449());
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

bool func_237(int iParam0, int iParam1)
{
	return (func_226(iParam0) & iParam1) != 0;
}

bool func_238(int iParam0)
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
	if ((iParam0 & 1) == 1 && func_451(iVar3))
	{
		return true;
	}
	if ((iParam0 & 2) == 2 && func_452(iVar3))
	{
		return true;
	}
	if ((iParam0 & 4) == 4 && func_453(iVar3))
	{
		return true;
	}
	if ((iParam0 & 8) == 8 && func_454(iVar3))
	{
		return true;
	}
	if ((iParam0 & 16) == 16 && func_455(iVar3))
	{
		return true;
	}
	if ((iParam0 & 32) == 32 && func_456(iVar3))
	{
		return true;
	}
	if ((iParam0 & 64) == 64 && func_457(iVar3))
	{
		return true;
	}
	return false;
}

bool func_239(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_458(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_240(int iParam0)
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

bool func_241(int iParam0, bool bParam1, bool bParam2)
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
		if (func_459())
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
		iVar0 = func_460(Global_1898164.f_1[0 /*5*/]);
		if (func_461(iVar0) && func_462(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_463(Global_1898164.f_1[0 /*5*/]))
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

bool func_242(int iParam0)
{
	if (!func_161(iParam0))
	{
		return false;
	}
	if (func_464(64) && func_465(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_243(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_466(iVar0) | func_467(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_244()
{
	return (Global_1894899 & 4) != 0;
}

int func_245(int iParam0)
{
	if (!func_468(iParam0))
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

bool func_246(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_247(Vector3 vParam0, int iParam3)
{
	if (!func_246(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_248(Vector3 vParam0)
{
	float fVar0;

	if (func_190(vParam0))
	{
		return false;
	}
	fVar0 = func_170(func_233(), 6.0f, 22.0f);
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, fVar0, 1, 0, (1 << 14));
}

bool func_249(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_115(uParam0);
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
		func_115(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_304(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_469(uParam0, fParam2))
		{
			return true;
		}
		if (func_304(uParam0))
		{
			func_138(uParam0);
		}
	}
	return false;
}

bool func_250(Vector3 vParam0)
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, (1 << 14));
}

void func_251(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_190(vParam0))
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
			if (func_416(vVar2, vParam0, 2.0f, 1))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vVar2, 2.0f, 0, iParam3, (1 << 14)))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

float func_252(int iParam0)
{
	if (!func_161(iParam0))
	{
		return 0.0f;
	}
	if (!func_470(iParam0))
	{
		return 0.0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_253()
{
	return "unnamed";
}

char* func_254(int iParam0)
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

int func_255(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_407(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_256(int iParam0, bool bParam1, int iParam2)
{
	func_471(iParam2);
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
		iParam0->f_13 = func_472(0);
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
							func_81(iParam0, (1 << 25));
						}
					}
					else if (!(*iParam0 & (1 << 13)) != 0)
					{
						if (func_239(1))
						{
							func_81(iParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_239(1) || (*iParam0 & (1 << 13)) != 0))
				{
					func_154(iParam0, (1 << 25));
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
			if (func_473(iParam0))
			{
				iParam0->f_15 = func_275();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_275() - iParam0->f_15) > 500)
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
	func_474(iParam0);
}

bool func_257(int iParam0, int iParam1)
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
			if (!func_475(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_476(iParam0, iVar2) <= func_477(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_258(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		iParam1->f_10 = iParam0;
	}
	if (func_478(iParam2, 1, 1, 1, 0))
	{
		func_81(iParam1, (1 << 11));
	}
	iParam1->f_16 = iParam2;
	func_479(iParam1, 1);
	func_47();
}

bool func_259(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_480(iParam0, !(*iParam1 & (1 << 28)) != 0, !(*iParam1 & (1 << 29)) != 0, !(*iParam1 & (1 << 30)) != 0, 0, 0))
		{
			if (iParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (iParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_481(iParam1);
			if (func_482(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_483(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_479(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_479(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_260(int iParam0, int iParam1, int iParam2)
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
	if (func_484(iParam1, !(*iParam2 & (1 << 28)) != 0, !(*iParam2 & (1 << 29)) != 0, !(*iParam2 & (1 << 30)) != 0, 0))
	{
		if (iParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (iParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_481(iParam2);
		if (func_482(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_483(iParam2)
				{
					func_479(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_261(int iParam0, int iParam1)
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
	if (func_475(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_483(iParam1)
		{
			fVar3 = func_481(iParam1);
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

bool func_262(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_275();
	iVar1 = (iVar0 - iParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_263(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_485(iParam2);
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
			if (func_271(iParam2, iParam1))
			{
				func_479(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_264(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < (float)func_486(iParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_271(iParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_479(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_265(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_487(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_479(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_479(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE") /* GXTEntry: "Dynamite" */, iParam2->f_26, &vVar4, false, false);
					if (func_488(iParam1, vVar0, vVar4))
					{
						func_479(iParam2, 1);
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
					func_479(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE") /* GXTEntry: "Dynamite" */, iParam2->f_26, &vVar7, false, false);
					if (func_488(iParam1, vVar0, vVar7))
					{
						func_479(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_266(int iParam0, int iParam1)
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
		if (!func_475(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_489(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_490(Global_1935630.f_34[iVar0]))
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
			if (func_491(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_492(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_493(iParam1, iParam0, fVar1, iVar0))
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

bool func_267(int iParam0, int iParam1)
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

bool func_268(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_275();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_269(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_494(iVar0, &iVar2))
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
	if (func_495(iVar0, iParam0))
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

int func_270(int iParam0, int iParam1)
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

bool func_271(int iParam0, int iParam1)
{
	if (func_496(iParam0))
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

bool func_272(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_95(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_273()
{
}

bool func_274(int iParam0, int iParam1)
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
		if (func_497(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_275();
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
						if (func_326(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_275();
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

int func_275()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_276()
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
	if ((func_275() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_277(int iParam0, int iParam1)
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
	fVar0 = func_477(iParam0);
	if (iParam0->f_12 > func_498(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_499(iParam1);
	iVar1 = func_500(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_278(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4.0f)
	{
		return 0;
	}
	bVar0 = (*iParam2 & 256) != false;
	bVar1 = (*iParam2 & (1 << 19)) != false;
	bVar2 = (*iParam2 & 128) != false;
	return func_501(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_279(int iParam0, int iParam1)
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
		if (func_502(iParam0, iParam1, 1))
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
					if (!func_503(iParam1, iParam0))
					{
						if (func_326(iVar4, Global_36, 1) < 7.0f)
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

bool func_280(int iParam0, int iParam1)
{
	if (!func_382(0))
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

bool func_281(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_275();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_282(int iParam0, int iParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_283(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_275();
	}
	else if (func_275() - iParam1->f_4) > func_504(iParam1)
	{
		return func_505(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_284(int iParam0, int iParam1)
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

int func_285(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_286(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_506(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_287(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

int func_288(int iParam0)
{
	return iParam0;
}

void func_289(int iParam0)
{
	if (!func_507(iParam0))
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

int func_290(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

char* func_291(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_508(sParam1));
}

bool func_292(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_293(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_509(iParam0, &sVar0);
}

int func_294(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_295(Vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= (1 << 19);
	}
	if (bParam8)
	{
		iVar0 |= (1 << 17);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_296(int iParam0, var uParam1, Vector3 vParam2, Vector3 vParam5, Vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_510(iParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_177(iParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_511(iParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_358(iParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(*iParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(*iParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(*iParam0, false, 15);
		}
	}
}

void func_297(int iParam0, Vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = 258;
	func_360(iParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_298()
{
	if (func_18(iLocal_987, (1 << 24)))
	{
		return;
	}
	if (sLocal_128.f_46)
	{
		if (!func_18(iLocal_987, (1 << 24)))
		{
			func_164(&(sLocal_998[0 /*21*/]), &sLocal_1083);
			func_90(&iLocal_987, (1 << 24));
			return;
		}
	}
	if (iLocal_993[0] > 0)
	{
		if ((func_18(iLocal_987, 64) && !func_18(iLocal_987, 2)) && !func_18(iLocal_987, 4))
		{
			iLocal_988[0] = func_513(&(iLocal_501[0]), &(sLocal_998[0 /*21*/]), 20.0f, &sLocal_1083, &(sLocal_128.f_192), 0.0f, 1, 0, "", func_512(2, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			iLocal_988[0] = func_513(&(iLocal_501[0]), &(sLocal_998[0 /*21*/]), 20.0f, &sLocal_1083, &(sLocal_128.f_192), 0.0f, 1, 0, "", func_512(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		}
	}
	switch (iLocal_993[0])
	{
		case 0:
			func_515(&(sLocal_1083[0 /*17*/]), func_514(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_515(&(sLocal_1083[1 /*17*/]), func_514(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			func_516(&(sLocal_1083[0 /*17*/]), 1, 0);
			func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
			iLocal_993[0] = 1;
			break;
		case 1:
			if (!func_18(iLocal_901, 256))
			{
				switch (iLocal_988[0])
				{
					case 0:
						func_29(Global_35, iLocal_501[0], func_134("CALLOUT", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
						func_90(&iLocal_987, (1 << 10));
						func_115(&uLocal_960);
						iLocal_993[0] = 2;
						break;
					case 1:
						break;
				}
			}
			else
			{
				func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
				iLocal_993[0] = 2;
			}
			break;
		case 2:
			if (!func_18(iLocal_901, (1 << 14)))
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_501[0]))
				{
					func_90(&iLocal_901, (1 << 14));
				}
			}
			if (func_18(iLocal_987, 1))
			{
				func_517(&(sLocal_998[0 /*21*/]), 0);
				func_515(&(sLocal_1083[0 /*17*/]), func_514(4), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_515(&(sLocal_1083[1 /*17*/]), func_514(6), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_516(&(sLocal_1083[0 /*17*/]), 1, 0);
				func_516(&(sLocal_1083[1 /*17*/]), 1, 0);
				func_90(&iLocal_987, 64);
				iLocal_993[0] = 3;
			}
			break;
		case 3:
			if (!func_18(iLocal_987, 8))
			{
				switch (iLocal_988[0])
				{
					case 0:
						func_29(Global_35, iLocal_501[0], func_134("SURE", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
						func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
						func_517(&(sLocal_998[0 /*21*/]), 0);
						func_90(&iLocal_987, 2);
						func_115(&uLocal_960);
						iLocal_993[0] = 4;
						break;
					case 1:
						func_29(Global_35, iLocal_501[0], func_134("SORRY", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
						func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
						func_517(&(sLocal_998[0 /*21*/]), 0);
						func_90(&iLocal_987, 4);
						iLocal_993[0] = 5;
						break;
				}
			}
			else
			{
				func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
				func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
				iLocal_993[0] = 5;
			}
			break;
		case 4:
			if (func_119(&uLocal_960) > 2.5f)
			{
				func_302(iLocal_501[0], sLocal_851, sLocal_910, func_122(5), 0, 0);
				func_90(&iLocal_987, 16);
				func_115(&uLocal_960);
				iLocal_993[0] = 6;
			}
			break;
		case 6:
			if (!func_18(iLocal_987, (1 << 20)))
			{
				if (func_382(0))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 168964286))
					{
						func_29(iLocal_501[0], Global_35, func_134("ACCEPTED_SICK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -375693339))
				{
					func_29(iLocal_501[0], Global_35, func_134("ACCEPTED", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				if (func_18(iLocal_900, (1 << 18)) && !func_518(PLAYER::PLAYER_ID(), &(iLocal_501[0])))
				{
					func_517(&(sLocal_998[0 /*21*/]), 0);
					func_515(&(sLocal_1083[0 /*17*/]), func_514(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					if (func_18(iLocal_900, (1 << 22)))
					{
						func_515(&(sLocal_1083[1 /*17*/]), func_514(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					}
					func_516(&(sLocal_1083[0 /*17*/]), 1, 0);
					func_516(&(sLocal_1083[1 /*17*/]), 1, 0);
					func_90(&iLocal_987, (1 << 20));
				}
			}
			else if (func_18(iLocal_900, (1 << 22)))
			{
				func_515(&(sLocal_1083[1 /*17*/]), func_514(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
				func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
				iLocal_993[0] = 9;
			}
			else
			{
				switch (iLocal_988[0])
				{
					case 0:
						if (!func_18(iLocal_987, (1 << 21)))
						{
							func_29(Global_35, iLocal_501[0], func_134("ILO_GRT_POS_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
							func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
							func_115(&uLocal_960);
							func_90(&iLocal_987, (1 << 21));
							iLocal_993[0] = 7;
						}
						break;
					case 1:
						func_29(Global_35, iLocal_501[0], func_134("ILO_CHANGE_MIND_NO", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_501[0]))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_501[0], Global_35, 0, -1.0f, -1.0f, -1.0f);
						}
						func_390(&(iLocal_501[1]));
						func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
						func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
						func_49();
						func_23(iLocal_520);
						if (func_519("DOG_OBJ01" /* GXTEntry: "Search the town for the missing dog" */, 1))
						{
							func_520("DOG_OBJ01" /* GXTEntry: "Search the town for the missing dog" */, 1);
						}
						else if (func_519("DOG_OBJ04" /* GXTEntry: "Search the ranch for the missing dog" */, 1))
						{
							func_520("DOG_OBJ04" /* GXTEntry: "Search the ranch for the missing dog" */, 1);
						}
						if (func_18(iLocal_987, 2))
						{
							func_46();
						}
						func_90(&iLocal_987, 4);
						func_90(&iLocal_987, (1 << 9));
						func_90(&iLocal_901, (1 << 13));
						func_147(&iLocal_987, (1 << 20));
						iLocal_993[0] = 5;
						break;
				}
			}
			break;
		case 7:
			if ((func_119(&uLocal_960) > 3.0f && func_114(0, 1, iLocal_501[0], 1)) && func_114(0, 1, Global_35, 1))
			{
				func_29(iLocal_501[0], Global_35, func_134("ILO_GRT_POS_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
				func_516(&(sLocal_1083[1 /*17*/]), 1, 0);
				iLocal_993[0] = 6;
			}
			break;
		case 5:
			if (func_114(-4.0f, 1, Global_35, 1))
			{
				if (func_18(iLocal_987, (1 << 9)))
				{
					func_29(iLocal_501[0], Global_35, func_134("ILO_CHANGE_MIND_NO", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				else
				{
					func_302(iLocal_501[0], sLocal_851, sLocal_910, func_122(7), 0, 0);
				}
				func_90(&iLocal_987, 32);
				iLocal_993[0] = 8;
			}
			break;
		case 8:
			func_521();
			if (func_18(iLocal_901, (1 << 13)))
			{
				func_147(&iLocal_901, (1 << 13));
			}
			if (func_18(iLocal_987, (1 << 17)) && func_522())
			{
				iLocal_993[0] = 18;
			}
			else if (!func_18(iLocal_987, (1 << 22)))
			{
				if (!func_523())
				{
					if (func_18(iLocal_987, 64))
					{
						func_164(&(sLocal_998[0 /*21*/]), &sLocal_1083);
						func_515(&(sLocal_1083[0 /*17*/]), func_514(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						func_515(&(sLocal_1083[1 /*17*/]), func_514(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						func_147(&iLocal_987, 64);
						func_517(&(sLocal_998[0 /*21*/]), 0);
					}
					func_524();
					func_90(&iLocal_987, (1 << 22));
				}
			}
			else
			{
				switch (iLocal_988[0])
				{
					case 0:
						func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
						func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
						if (!func_18(iLocal_987, (1 << 15)))
						{
							func_29(Global_35, iLocal_501[0], func_134("ILO_GREET_POS_END_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_90(&iLocal_987, (1 << 15));
						}
						else if (!func_18(iLocal_987, (1 << 17)))
						{
							func_29(Global_35, iLocal_501[0], func_134("ILO_GREET_POS_END_NO_FIND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_90(&iLocal_987, (1 << 17));
						}
						func_115(&uLocal_960);
						iLocal_993[0] = 13;
						break;
					case 1:
						func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
						func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
						func_90(&iLocal_987, (1 << 31));
						if (!func_18(iLocal_987, (1 << 16)))
						{
							func_29(Global_35, iLocal_501[0], func_134("ILO_GREET_NEG_END_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_90(&iLocal_987, (1 << 16));
						}
						else if (!func_18(iLocal_987, (1 << 18)))
						{
							func_29(Global_35, iLocal_501[0], func_134("ILO_GREET_NEG_END_NO_FIND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_90(&iLocal_987, (1 << 18));
						}
						else if (!func_18(iLocal_987, (1 << 19)))
						{
							func_29(Global_35, iLocal_501[0], func_134("ILO_GREET_NEG_END_NO_FIND3", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_90(&iLocal_987, (1 << 19));
						}
						func_115(&uLocal_960);
						iLocal_993[0] = 14;
						break;
				}
			}
			break;
		case 9:
			if (func_18(iLocal_987, (1 << 14)))
			{
				iLocal_993[0] = 18;
			}
			else if (func_18(iLocal_901, 8) || func_18(iLocal_901, (1 << 20)))
			{
				if (!func_18(iLocal_987, (1 << 22)))
				{
					func_524();
					func_90(&iLocal_987, (1 << 22));
				}
				else
				{
					switch (iLocal_988[0])
					{
						case 0:
							if (!func_18(iLocal_987, (1 << 11)))
							{
								func_29(Global_35, iLocal_501[0], func_134("ILO_GREET_POS_END_FOUND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
								func_90(&iLocal_987, (1 << 11));
							}
							else if (!func_18(iLocal_987, (1 << 13)))
							{
								func_29(Global_35, iLocal_501[0], func_134("ILO_GREET_POS_END_FOUND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
								func_90(&iLocal_987, (1 << 13));
							}
							func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
							func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
							func_115(&uLocal_960);
							iLocal_993[0] = 11;
							break;
						case 1:
							if (!func_18(iLocal_987, (1 << 12)))
							{
								if (iLocal_15 == 1 && func_525())
								{
									func_29(Global_35, iLocal_501[0], "RE_LD_EMR_V1_RUNAWAY_ILO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
									func_90(&iLocal_987, (1 << 30));
								}
								else
								{
									func_29(Global_35, iLocal_501[0], func_134("ILO_GREET_NEG_END_FOUND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
								}
								func_90(&iLocal_987, (1 << 12));
							}
							else if (!func_18(iLocal_987, (1 << 14)))
							{
								func_29(Global_35, iLocal_501[0], func_134("ILO_GREET_NEG_END_FOUND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
								func_90(&iLocal_987, (1 << 14));
							}
							func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
							func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
							func_90(&iLocal_987, (1 << 31));
							func_115(&uLocal_960);
							iLocal_993[0] = 12;
							break;
					}
				}
			}
			break;
		case 11:
			if (func_119(&uLocal_960) > 4.0f && func_114(0, 1, Global_35, 1))
			{
				if (func_18(iLocal_987, (1 << 13)))
				{
					func_29(iLocal_501[0], Global_35, func_134("ILO_GREET_POS_END_FOUND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				else
				{
					func_29(iLocal_501[0], Global_35, func_134("ILO_GREET_POS_END_FOUND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				func_147(&iLocal_987, (1 << 22));
				iLocal_993[0] = 9;
			}
			break;
		case 12:
			if (func_119(&uLocal_960) > 4.0f && func_114(0, 1, Global_35, 1))
			{
				if (func_18(iLocal_987, (1 << 14)))
				{
					func_29(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_FOUND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				else if (func_18(iLocal_987, (1 << 30)))
				{
					func_29(iLocal_501[0], Global_35, "RE_LD_EMR_V1_RUNAWAY_ILO_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				else
				{
					func_29(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_FOUND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				func_147(&iLocal_987, (1 << 22));
				iLocal_993[0] = 9;
			}
			break;
		case 13:
			if ((func_119(&uLocal_960) > 3.0f && func_114(0, 1, iLocal_501[0], 1)) && func_114(0, 1, Global_35, 1))
			{
				if (func_18(iLocal_987, (1 << 17)))
				{
					func_29(iLocal_501[0], Global_35, func_134("ILO_GREET_POS_END_NO_FIND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				else
				{
					func_29(iLocal_501[0], Global_35, func_134("ILO_GREET_POS_END_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				func_147(&iLocal_987, (1 << 22));
				iLocal_993[0] = 8;
			}
			break;
		case 14:
			if ((func_119(&uLocal_960) > 3.0f && func_114(0, 1, iLocal_501[0], 1)) && func_114(0, 1, Global_35, 1))
			{
				if (func_18(iLocal_987, (1 << 19)))
				{
					func_29(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_NO_FIND3", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					func_90(&iLocal_901, (1 << 18));
					iLocal_993[0] = 16;
				}
				else if (func_18(iLocal_987, (1 << 18)))
				{
					if (func_382(0))
					{
						func_29(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_NO_FIND2_SICK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					else
					{
						func_29(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_NO_FIND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					if (iLocal_15 == 1)
					{
						func_147(&iLocal_987, (1 << 22));
						func_90(&iLocal_901, (1 << 24));
						iLocal_993[0] = 8;
					}
					else
					{
						iLocal_993[0] = 18;
					}
				}
				else
				{
					func_29(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					func_147(&iLocal_987, (1 << 22));
					iLocal_993[0] = 8;
				}
			}
			break;
		case 15:
			func_517(&(sLocal_998[0 /*21*/]), 0);
			if (iLocal_15 == 1)
			{
				func_515(&(sLocal_1083[0 /*17*/]), func_514(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_516(&(sLocal_1083[0 /*17*/]), 1, 0);
			}
			else
			{
				func_515(&(sLocal_1083[0 /*17*/]), func_514(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
			}
			func_515(&(sLocal_1083[1 /*17*/]), func_514(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
			iLocal_993[0] = 16;
			break;
		case 16:
			if (!func_18(iLocal_901, (1 << 23)))
			{
				if (!func_523())
				{
					func_164(&(sLocal_998[0 /*21*/]), &sLocal_1083);
					func_515(&(sLocal_1083[0 /*17*/]), func_514(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_515(&(sLocal_1083[1 /*17*/]), func_514(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					func_90(&iLocal_901, (1 << 23));
				}
			}
			else
			{
				switch (iLocal_988[0])
				{
					case 0:
						func_29(Global_35, iLocal_501[0], "RE_LD_EMR_V1_ILO_DEFUSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
						func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
						func_115(&uLocal_960);
						iLocal_993[0] = 17;
						break;
					case 1:
						func_29(Global_35, iLocal_501[0], func_134("PLYFINAL_FLEE", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
						func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
						iLocal_993[0] = 18;
						break;
				}
			}
			break;
		case 17:
			if ((func_119(&uLocal_960) > 4.0f && func_114(0, 1, iLocal_501[0], 1)) && func_114(0, 1, Global_35, 1))
			{
				func_29(iLocal_501[0], Global_35, "RE_LD_EMR_V1_ILO_DEFUSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				iLocal_993[0] = 18;
			}
			break;
		case 18:
			break;
	}
}

void func_299()
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vLocal_459[0 /*3*/], (1 << 30), -1.0f, 0, 0);
	TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vLocal_459[1 /*3*/], (1 << 30), -1.0f, 0, 0);
	TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vLocal_459[2 /*3*/], (1 << 30), -1.0f, 0, 0);
	TASK::SET_SEQUENCE_TO_REPEAT(iVar0, 1);
	func_311(iLocal_501[0], &iVar0, 0, 0, 1, 1);
}

void func_300()
{
	TASK::CLEAR_PED_SECONDARY_TASK(iLocal_501[0]);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_501[0], Global_35, 0, -1.0f, -1.0f, -1.0f);
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_501[0]))
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_501[0], 0);
	}
	func_526(iLocal_501[0], Global_35, &sLocal_851, 1.8f, 0, 0, 2.0f, -1082130432 /* Float: -1f */, 1, 256, 0, 0, 3.0f, -1.0f, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	func_138(&uLocal_954);
	func_115(&uLocal_966);
}

void func_301()
{
	bool bVar0;

	if (func_527(8.0f, &uLocal_954) > 2.0f)
	{
	}
	else
	{
		if (!func_304(&uLocal_975))
		{
			func_115(&uLocal_975);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[0], sLocal_910, func_122(0), 1))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			if (func_348(&uLocal_975))
			{
				func_528(&uLocal_975);
			}
			if (func_119(&uLocal_975) > fLocal_473)
			{
				TASK::TASK_PLAY_ANIM(iLocal_501[0], sLocal_910, func_122(0), 4.0f, -4.0f, -1, 67108880, 0.0f, false, 0, false, 0, false);
				func_115(&uLocal_975);
				if (func_18(iLocal_901, (1 << 21)))
				{
					if (iLocal_526 < 7)
					{
						fLocal_473 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4.0f, 6.0f);
					}
					else
					{
						fLocal_473 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8.0f, 15.0f);
					}
				}
				else
				{
					fLocal_473 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 3.0f);
				}
			}
		}
		else if (!func_348(&uLocal_975))
		{
			func_529(&uLocal_975);
		}
		if ((sLocal_128.f_98[0] < 65.0f && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_501[0])) || sLocal_128.f_98[0] < 50.0f)
		{
			func_530();
		}
	}
}

void func_302(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, char* sParam39, char* sParam40, int iParam41, bool bParam42)
{
	func_531(&uParam1, sParam39, sParam40, iParam41, bParam42);
	TASK::TASK_SCRIPTED_ANIMATION(iParam0, &uParam1);
}

void func_303(float fParam0)
{
	if (sLocal_128.f_98[0] < fParam0 && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_501[0]))
	{
		func_331(&Global_35, 0, iLocal_501[0], 1, 0, 0, 0, 1);
	}
}

bool func_304(var uParam0)
{
	return func_532(*uParam0, 1);
}

void func_305()
{
	float fVar0;

	fVar0 = func_119(&uLocal_948);
	if (fVar0 < 30.0f)
	{
		if (func_18(iLocal_987, 2) || func_18(iLocal_987, 4))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_501[0]))
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_501[0], 0);
			}
		}
		switch (iLocal_15)
		{
			case 0:
				switch (iLocal_903)
				{
					case 0:
						if (fVar0 >= (30.0f * 0.5f) && func_114(0, 1, iLocal_501[0], 1))
						{
							func_29(iLocal_501[0], Global_35, "RE_LD_STR_V1_IMPATIENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							iLocal_903++;
						}
						break;
					case 1:
						break;
				}
				break;
			case 1:
				switch (iLocal_903)
				{
					case 0:
						if (fVar0 >= (30.0f * 0.33f) && func_114(0, 1, iLocal_501[0], 1))
						{
							func_29(iLocal_501[0], Global_35, "RE_LD_EMR_V1_IMPATIENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							iLocal_903++;
						}
						break;
					case 1:
						if (fVar0 >= (30.0f * 0.66f) && func_114(0, 1, iLocal_501[0], 1))
						{
							func_29(iLocal_501[0], Global_35, "RE_LD_EMR_V1_IMPATIENT_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							iLocal_903++;
						}
						break;
					case 2:
						break;
				}
				break;
		}
	}
}

bool func_306(float fParam0)
{
	var uVar0;
	var uVar6;

	uVar0 = 5;
	uVar6 = 1;
	if (func_533(&uVar0, &uVar6, 1, vLocal_455, fParam0) > 0)
	{
		if (!CAM::IS_SPHERE_VISIBLE(vLocal_455, fParam0))
		{
			func_371();
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_307()
{
	int iVar0;

	if (func_18(iLocal_901, (1 << 13)))
	{
		return;
	}
	if (!func_18(iLocal_901, 2))
	{
		if (func_326(iLocal_501[0], vLocal_455, 1) < 2.0f)
		{
			if (!func_18(iLocal_901, 128) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[0], joaat("SCRIPT_TASK_ANY"), true) != 1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_455, 1.0f, -1, 0.25f, 0, fLocal_458);
				TASK::TASK_USE_SCENARIO_POINT(0, iLocal_523, "", -1, true, false, 0, false, -1.0f, false);
				func_311(iLocal_501[0], &iVar0, 0, 0, 1, 1);
				func_90(&iLocal_901, 128);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[0], joaat("SCRIPT_TASK_ANY"), true) != 1 && !ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iLocal_501[0], 1))
		{
			if (func_306(1088421888 /* Float: 7f */))
			{
				func_299();
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_501[0], vLocal_455, 1.0f, -1, 0.25f, 0, fLocal_458);
			}
		}
	}
}

void func_308()
{
	int iVar0;

	if (func_18(iLocal_901, (1 << 25)))
	{
		return;
	}
	if (!func_18(iLocal_901, 2))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (func_18(iLocal_901, 128))
		{
		}
		TASK::TASK_FLEE_PED(0, Global_35, 0, 0, 0.0f, -1, 0);
		func_311(iLocal_501[0], &iVar0, 0, 0, 1, 1);
		func_90(&iLocal_901, (1 << 25));
	}
}

void func_309()
{
	if (!func_18(iLocal_901, (1 << 26)))
	{
		switch (iLocal_528)
		{
			case 0:
				if ((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -510508715) && func_114(0, 1, iLocal_501[0], 1)) && func_326(iLocal_501[1], vLocal_541, 1) > 10.0f)
				{
					if (iLocal_15 == 1)
					{
						func_29(iLocal_501[0], Global_35, func_134("BECKON_A", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					else
					{
						func_29(iLocal_501[0], Global_35, func_134("BECKON_A2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					iLocal_528++;
				}
				break;
			case 1:
				if ((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -242425526) && func_114(0, 1, iLocal_501[0], 1)) && func_326(iLocal_501[1], vLocal_541, 1) > 10.0f)
				{
					if (iLocal_15 == 1)
					{
						func_29(iLocal_501[0], Global_35, func_134("BECKON_B", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					else
					{
						func_29(iLocal_501[0], Global_35, func_134("BECKON_B2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					iLocal_528++;
				}
				break;
			case 2:
				if ((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 545537848) && func_114(0, 1, iLocal_501[0], 1)) && func_326(iLocal_501[1], vLocal_541, 1) > 10.0f)
				{
					if (iLocal_15 == 1)
					{
						func_29(iLocal_501[0], Global_35, func_134("BECKON_C", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					else
					{
						func_29(iLocal_501[0], Global_35, func_134("BECKON_C2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					func_90(&iLocal_901, (1 << 26));
				}
				break;
		}
	}
}

void func_310(bool bParam0)
{
	int iVar0;

	if (func_18(iLocal_901, 1))
	{
		return;
	}
	if (func_20(iLocal_501[1], 0, 1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[0], joaat("SCRIPT_TASK_ANY"), true) != 1 || bParam0)
		{
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_524))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (iLocal_15 == 0 && func_326(iLocal_501[0], vLocal_455, 1) < 8.0f)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_524, true), -1788.896f, -432.6824f, 154.3864f, true) < 8.0f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1784.623f, -428.0092f, 154.226f, 1.0f, 20000, 3.0f, 1, 40000.0f);
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_524, true), -1777.444f, -444.8972f, 153.9746f, true) < 8.0f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1778.01f, -434.3291f, 154.1013f, 1.0f, 20000, 3.0f, 1, 40000.0f);
					}
				}
				TASK::TASK_USE_SCENARIO_POINT(0, iLocal_524, "", -1, true, false, 0, false, -1.0f, false);
				func_311(iLocal_501[0], &iVar0, 0, 0, 1, 1);
			}
			func_90(&iLocal_901, 1);
		}
	}
}

void func_311(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_312()
{
	int iVar0;

	if (func_18(iLocal_987, (1 << 23)))
	{
		return true;
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iLocal_923))
	{
		if (func_95(iLocal_501[1], iLocal_501[0], 1, 1) > 110.0f || !func_229(iLocal_501[0], iLocal_923, 1, 0))
		{
			if (func_114(0, 1, iLocal_501[0], 1) && func_114(0, 1, Global_35, 1))
			{
				func_29(iLocal_501[0], 0, "RE_LD_EMR_V1_RUNAWAY_RUN_GIVEUP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
				PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_501[0], "Depressed");
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 1500);
				TASK::TASK_REACT(0, iLocal_501[1], ENTITY::GET_ENTITY_COORDS(iLocal_501[1], true, false), "DEFAULT_ANGRY", 3.0f, 0.0f, 4);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_455, 1.0f, -1, 0.25f, 0, fLocal_458);
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_523))
				{
					TASK::TASK_USE_SCENARIO_POINT(0, iLocal_523, "", -1, true, false, 0, false, -1.0f, false);
				}
				func_311(iLocal_501[0], &iVar0, 0, 0, 1, 1);
				func_90(&iLocal_987, (1 << 23));
				return true;
			}
		}
		else
		{
			func_534();
		}
	}
	return false;
}

bool func_313()
{
	int iVar0;

	if (!func_18(iLocal_901, 16))
	{
		if (func_535())
		{
			func_90(&iLocal_901, 16);
			if (iLocal_906 == sLocal_533.f_2)
			{
			}
			else if (iLocal_906 == sLocal_533.f_1)
			{
			}
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_501[0]);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_906))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_906, false))
				{
					if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_906, "bAdvanceSitLoop") == 0)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_906, "bAdvanceSitLoop", true, false);
					}
				}
			}
			func_314();
			if (func_18(iLocal_901, 4) && ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_501[1], Global_35, 1, 1))
			{
				func_536();
				iLocal_635 = func_537(iLocal_501[0], Global_35, 1.0f);
				switch (iLocal_635)
				{
					case 2:
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_906, "pblBreakoutStandL", true);
						break;
					case 3:
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_906, "pblBreakoutStandR", true);
						break;
				}
			}
			else if (func_18(iLocal_901, 2))
			{
				func_536();
				iLocal_635 = func_537(iLocal_501[0], Global_35, 1060437492 /* Float: 0.707f */);
				switch (iLocal_635)
				{
					case 2:
						if (func_18(iLocal_900, (1 << 21)))
						{
							ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_906, "pblBreakoutSitL", true);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_906, "pblBreakoutSitQuickL", true);
						}
						break;
					case 3:
						if (func_18(iLocal_900, (1 << 21)))
						{
							ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_906, "pblBreakoutSitR", true);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_906, "pblBreakoutSitQuickR", true);
						}
						break;
					case 0:
					case 1:
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_906, "pblBreakoutSitQuickFwd", true);
						break;
				}
			}
			else if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_501[0]))
			{
				PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(iLocal_501[0], "Flee_Panic", Global_35, -1, 4);
				if (PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iLocal_501[0], Global_36, 3))
				{
					TASK::_0x2E1D6D87346BB7D2(iLocal_501[0], Global_35, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FLEE_PED(0, Global_35, 3, 0, 500.0f, -1, 0);
					func_311(iLocal_501[0], &iVar0, 0, 0, 1, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_501[0], false, false);
					func_90(&iLocal_901, 64);
				}
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, Global_36, "Flee_Human_MajorThreat", 1.0f, 2.0f, 4);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 500.0f, -1, 0, 3.0f, 0);
				func_311(iLocal_501[0], &iVar0, 0, 0, 1, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_501[0], false, false);
				func_90(&iLocal_901, 64);
			}
		}
	}
	else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_906) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_906, false))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -1931509438))
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_501[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
			func_538(iLocal_501[0], 2.0f, -1, 2.0f, 1048576000 /* Float: 0.25f */, 1, 0, 1120403456 /* Float: 100f */, 0, 0, 1148846080 /* Float: 1000f */, 0, 1);
			PED::SET_PED_KEEP_TASK(iLocal_501[0], true);
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_906);
			return true;
		}
		else if ((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], joaat("BREAKOUTSAFE")) || func_18(iLocal_901, 64)) || (func_18(iLocal_901, 2) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_906) > 0.99f))
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_501[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
			TASK::TASK_SMART_FLEE_PED(iLocal_501[0], Global_35, 500.0f, -1, 0, 2.0f, 0);
			return true;
		}
	}
	else
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_906))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_906, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_906, "PED_KID", iLocal_501[0]);
			}
		}
		return true;
	}
	return false;
}

void func_314()
{
	if ((func_18(iLocal_901, (1 << 22)) || PED::IS_PED_RAGDOLL(iLocal_501[0])) || !func_20(iLocal_501[0], 0, 1))
	{
		return;
	}
	if (func_18(iLocal_900, (1 << 21)))
	{
		if (func_18(iLocal_901, (1 << 12)))
		{
			func_29(iLocal_501[0], Global_35, func_134("AGGRO_DOG", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
		}
	}
	else if (!func_18(iLocal_901, (1 << 19)))
	{
		if ((sLocal_128.f_98[1] < 15.0f && !func_20(iLocal_501[1], 0, 1)) && func_18(iLocal_900, (1 << 22)))
		{
			func_29(iLocal_501[0], Global_35, func_134("AGGRO_DOG_ATTACK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
		}
		else if (iLocal_565 == (1 << 14))
		{
			func_29(iLocal_501[0], Global_35, "GENERIC_AFRAID_REACTION", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
		}
		else if (iLocal_15 == 0 && (((iLocal_565 == 1 || iLocal_565 == 1) || iLocal_565 == 2) || iLocal_565 == 4))
		{
			func_29(iLocal_501[0], Global_35, func_134("AGGRO_EXTREME", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
		}
		else
		{
			func_29(iLocal_501[0], Global_35, func_134("AGGRO", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
		}
	}
	func_90(&iLocal_901, (1 << 22));
}

void func_315()
{
	if (func_18(iLocal_987, 256) || !ENTITY::DOES_ENTITY_EXIST(iLocal_501[1]))
	{
		return;
	}
	func_539();
	if (!func_18(iLocal_987, 256))
	{
		if (sLocal_128.f_46)
		{
			func_164(&(sLocal_998[1 /*21*/]), &sLocal_1118);
			func_90(&iLocal_987, 256);
		}
	}
	if (iLocal_993[1] > 0)
	{
		if (!func_18(iLocal_987, 128))
		{
			iLocal_988[1] = func_513(&(iLocal_501[1]), &(sLocal_998[1 /*21*/]), 10.0f, &sLocal_1118, &(sLocal_128.f_192), 0, 2, 1, 0, func_512(2, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			iLocal_988[1] = func_513(&(iLocal_501[1]), &(sLocal_998[1 /*21*/]), 10.0f, &sLocal_1118, &(sLocal_128.f_192), 0, 1, 1, 0, func_512(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	switch (iLocal_993[1])
	{
		case 0:
			iLocal_993[1] = 2;
			break;
		case 2:
			if (func_18(iLocal_900, (1 << 18)))
			{
				func_515(&(sLocal_1118[0 /*17*/]), func_514(33), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_515(&(sLocal_1118[1 /*17*/]), func_514(32), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_516(&(sLocal_1118[0 /*17*/]), 1, 0);
				func_516(&(sLocal_1118[1 /*17*/]), 0, 0);
				iLocal_993[1] = 3;
			}
			break;
		case 3:
			switch (iLocal_988[1])
			{
				case 0:
					func_516(&(sLocal_1118[0 /*17*/]), 0, 0);
					func_90(&iLocal_987, 128);
					func_517(&(sLocal_998[1 /*21*/]), 0);
					if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					{
						bLocal_893 = false;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						func_59(0, 0);
					}
					iLocal_993[1] = 10;
					break;
				case 1:
					break;
			}
			break;
		case 10:
			if ((func_18(iLocal_987, (1 << 26)) && func_18(iLocal_987, (1 << 28))) || (func_18(iLocal_900, (1 << 16)) && iLocal_15 == 1))
			{
				func_516(&(sLocal_1118[0 /*17*/]), 0, 0);
				func_516(&(sLocal_1118[1 /*17*/]), 0, 0);
				func_517(&(sLocal_998[1 /*21*/]), 0);
				iLocal_993[1] = 18;
			}
			else if (!func_18(iLocal_987, (1 << 29)))
			{
				if (!func_518(PLAYER::PLAYER_ID(), &(iLocal_501[1])))
				{
					func_164(&(sLocal_998[1 /*21*/]), &sLocal_1118);
					func_540();
					func_90(&iLocal_987, (1 << 29));
				}
			}
			else
			{
				if (func_18(iLocal_900, 16) && !func_18(iLocal_987, (1 << 28)))
				{
					func_516(&(sLocal_1118[1 /*17*/]), 0, 0);
					func_90(&iLocal_987, (1 << 28));
				}
				switch (iLocal_988[1])
				{
					case 0:
						func_23(iLocal_520);
						if (func_18(iLocal_900, 16) && !func_18(iLocal_987, (1 << 25)))
						{
							func_90(&iLocal_987, (1 << 25));
						}
						if (!func_18(iLocal_987, (1 << 25)))
						{
							func_29(Global_35, iLocal_501[1], func_134("PRAISE", 1), 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_501[1], -1), joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_90(&iLocal_987, (1 << 25));
						}
						else if (!func_18(iLocal_987, (1 << 26)))
						{
							func_29(Global_35, iLocal_501[1], func_134("PRAISE", 1), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_501[1], -1), joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_90(&iLocal_987, (1 << 26));
						}
						func_516(&(sLocal_1118[0 /*17*/]), 0, 0);
						func_516(&(sLocal_1118[1 /*17*/]), 0, 0);
						func_115(&uLocal_963);
						iLocal_993[1] = 11;
						break;
					case 1:
						if (!func_18(iLocal_987, (1 << 27)))
						{
							func_29(Global_35, iLocal_501[1], func_134("SCOLD", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_501[1], -1), joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_90(&iLocal_987, (1 << 27));
						}
						else if (!func_18(iLocal_987, (1 << 28)))
						{
							func_29(Global_35, iLocal_501[1], func_134("SCOLD", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_501[1], -1), joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_90(&iLocal_987, (1 << 28));
						}
						func_516(&(sLocal_1118[0 /*17*/]), 0, 0);
						func_516(&(sLocal_1118[1 /*17*/]), 0, 0);
						func_115(&uLocal_963);
						iLocal_993[1] = 12;
						break;
				}
			}
			break;
		case 11:
			if (func_119(&uLocal_963) > 4.0f)
			{
				func_540();
				iLocal_993[1] = 10;
			}
			break;
		case 12:
			if (func_119(&uLocal_963) > 4.0f)
			{
				func_541(iLocal_501[1], 10);
				func_540();
				iLocal_993[1] = 10;
			}
			break;
		case 18:
			break;
	}
}

void func_316(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_18(iLocal_900, 16))
	{
		iVar0 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		if (iVar0 < iParam3)
		{
			if (!func_304(uParam1))
			{
				func_115(uParam1);
			}
			else if (func_119(uParam1) > (float)iParam2)
			{
				func_542(iParam0, iVar0 + 1);
				func_115(uParam1);
			}
		}
	}
}

void func_317()
{
	int iVar0;

	if (func_18(iLocal_900, (1 << 17)))
	{
	}
	else
	{
		if (iLocal_15 == 0)
		{
			func_543();
		}
		else if (iLocal_15 == 1)
		{
			func_544();
		}
		if (func_18(iLocal_900, 1))
		{
			if (iLocal_15 == 0)
			{
				if (!func_18(iLocal_900, (1 << 17)))
				{
					if (!func_18(iLocal_900, (1 << 26)))
					{
						func_90(&iLocal_900, (1 << 26));
					}
					else if (func_18(iLocal_900, (1 << 27)) && !PED::IS_PED_RAGDOLL(iLocal_501[1]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1.0f, -1.0f, -1.0f);
						func_311(iLocal_501[1], &iVar0, 1.5f, 1.5f, 1, 1);
						func_90(&iLocal_900, (1 << 17));
					}
				}
			}
		}
	}
}

bool func_318()
{
	if (!func_304(&uLocal_951))
	{
		if (iLocal_15 == 0)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_917);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1.0f, -1.0f, -1.0f);
			func_311(iLocal_501[1], &iLocal_917, 0.75f, 0.75f, 1, 1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_501[1], false, false);
		}
		func_115(&uLocal_951);
	}
	if (((ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_0, false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_533.f_0) > 0.25f) || func_119(&uLocal_951) > 20.0f) || (bLocal_893 == 0 && func_119(&uLocal_951) > 2.5f))
	{
		return true;
	}
	return false;
}

void func_319()
{
	TASK::CLEAR_PED_TASKS(iLocal_501[1], true, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_501[1], false, false);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_917);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_917);
	if (iLocal_15 == 1)
	{
		TASK::TASK_PLAY_ANIM(0, "script_re@lost_dog@dog@timid", "action", 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	}
	TASK::TASK_PLAY_ANIM(0, "amb_creature_mammal@world_dog_sitting@stand_enter", "enter", 4.0f, -2.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	TASK::TASK_PLAY_ANIM(0, "amb_creature_mammal@world_dog_sitting@stand_exit", "exit", 8.0f, -2.0f, -1, 0, 0.0f, false, 0, false, 0, false);
	TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 0.5f, 1.0f, (1 << 30), 0);
	func_311(iLocal_501[1], &iLocal_917, 0, 0, 1, 1);
}

bool func_320()
{
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_0, false) || ANIMSCENE::GET_ANIM_SCENE_PHASE(sLocal_533.f_0) > 0.99f)
	{
		if (iLocal_15 == 0)
		{
			return true;
		}
		else if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], "script_re@lost_dog@dog@timid", "action", 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], "amb_creature_mammal@world_dog_eating_ground@stand_enter", "enter", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], "amb_creature_mammal@world_dog_eating_ground@base", "base", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], "amb_creature_mammal@world_dog_eating_ground@stand_exit", "exit", 1))
		{
			return true;
		}
	}
	if (!func_304(&uLocal_957))
	{
		func_115(&uLocal_957);
	}
	else if (func_119(&uLocal_957) > 17.0f)
	{
		return true;
	}
	func_331(&(iLocal_501[1]), 0, Global_35, 1, 0, 0, 0, 1);
	func_331(&Global_35, 0, iLocal_501[1], 1, 0, 0, 0, 1);
	return false;
}

void func_321()
{
	TASK::CLEAR_PED_TASKS(iLocal_501[1], true, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_501[1], false);
	iLocal_889 = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
	PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 279 /*PCF_NeverLeavesGroup*/, true);
	PED::SET_PED_AS_GROUP_MEMBER(iLocal_501[1], iLocal_889);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_501[1], joaat("REL_NO_RELATIONSHIP"));
	if (func_323(Global_35))
	{
		PED::SET_GROUP_FORMATION(iLocal_889, 9);
	}
	else
	{
		PED::SET_GROUP_FORMATION(iLocal_889, 0);
	}
	PED::SET_GROUP_FORMATION_SPACING(iLocal_889, 1.25f, 1.0f, 2.0f);
}

void func_322()
{
	func_23(iLocal_519);
	func_23(iLocal_520);
}

bool func_323(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_324()
{
	float fVar0;

	fVar0 = func_95(iLocal_501[1], iLocal_501[0], 1, 1);
	if (fVar0 < 10.0f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 0.0f);
	}
	else if (fVar0 < 20.0f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1.0f);
	}
}

void func_325()
{
	if (!func_190(vLocal_541))
	{
		if (func_326(iLocal_501[1], vLocal_541, 1) < 5.0f)
		{
			PED::SET_PED_RESET_FLAG(iLocal_501[1], 12 /*PRF_UseKinematicPhysics*/, true);
			PED::SET_PED_RESET_FLAG(iLocal_501[1], 172 /*PRF_0x72788B4D*/, true);
			PED::SET_PED_RESET_FLAG(iLocal_501[1], 201 /*PRF_0xCFDAF6ED*/, true);
			func_53(1);
		}
	}
}

float func_326(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_327(int iParam0, Vector3 vParam1, var uParam4)
{
	sLocal_595.f_0 = 4;
	func_362(&vParam1, 1.0f);
	sLocal_595.f_8 = { vParam1 /*3*/ };
	sLocal_595.f_19 = uParam4;
	sLocal_595.f_1 = iParam0;
	sLocal_595.f_14 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	sLocal_595.f_23 = 256;
	if (iLocal_15 == 0)
	{
		sLocal_595.f_18 = 0.3f;
	}
	else
	{
		sLocal_595.f_18 = 0.25f;
	}
}

void func_328()
{
	float fVar0;

	fVar0 = func_326(iLocal_501[1], vLocal_541, 1);
	if (fVar0 > 20.0f)
	{
		if (iLocal_15 == 0)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 3.0f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1.0f);
		}
	}
	else if (fVar0 <= 12.0f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1.0f);
	}
	else if (iLocal_15 == 0)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1.5f);
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1.0f);
	}
}

void func_329()
{
	if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], joaat("SCRIPT_TASK_ANY"), true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], joaat("SCRIPT_TASK_ANY"), true) != 0) && !func_190(vLocal_541))
	{
		if (func_326(iLocal_501[1], vLocal_541, 1) > 20.0f)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_501[1], vLocal_541, 2.0f, 20000, 0.25f, 0, vLocal_541.f_3.f_2);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_501[1], vLocal_541, 1.0f, 20000, 0.25f, 0, vLocal_541.f_3.f_2);
		}
	}
}

bool func_330(int iParam0, int iParam1)
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

	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1) && !func_3(iParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(iParam0->f_1, 179 /*PRF_0x081A7310*/, true);
	}
	switch (*iParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1))
			{
				func_115(&(iParam0->f_5));
				if (PED::IS_PED_A_PLAYER(iParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0->f_3, false);
					if (func_3(iParam0->f_23, (1 << 11)))
					{
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
					}
				}
				if (iParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!func_3(iParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iParam0->f_1);
				}
				if (!func_3(iParam0->f_23, 2))
				{
					iParam0->f_2 = PED::_GET_LAST_MOUNT(iParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_2) && func_323(iParam0->f_1))
					{
						func_545(iParam0->f_1);
						iVar0 = func_546(iParam0->f_1, iParam0->f_8, 1.0f);
						switch (iVar0)
						{
							case 3:
								iVar1 = (1 << 17);
								break;
							case 2:
								iVar1 = (1 << 18);
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(iParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5.0f, -1, false);
						iVar3 = func_546(iParam0->f_1, iParam0->f_8, 1.0f);
						switch (iVar3)
						{
							case 3:
								iVar4 = (1 << 17);
								break;
							case 2:
								iVar4 = (1 << 18);
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iParam0->f_1, 0, iVar4);
					}
					else
					{
						func_81(&(iParam0->f_23), 2);
					}
				}
				if (func_190(iParam0->f_14))
				{
					iParam0->f_14 = { iParam0->f_8 /*3*/ };
				}
				func_547(iParam0, 1, iParam1);
			}
			else
			{
				func_547(iParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_548(iParam0, iParam1))
			{
				func_115(&(iParam0->f_5));
				if (!func_549(iParam0, iParam1))
				{
					func_550();
				}
				func_547(iParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_549(iParam0, iParam1))
			{
				func_115(&(iParam0->f_5));
				if (!func_3(iParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_1, joaat("WEAPON_UNARMED") /* GXTEntry: "Unarmed" */, false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_1, joaat("WEAPON_UNARMED") /* GXTEntry: "Unarmed" */, false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(iParam0->f_1, 1, func_3(iParam0->f_23, (1 << 9)), 0, 0);
				}
				func_547(iParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_551(iParam0, iParam1))
			{
				func_115(&(iParam0->f_5));
				if (!PED::IS_PED_CARRYING_SOMETHING(iParam0->f_1))
				{
					func_81(&(iParam0->f_23), 256);
				}
				if (func_3(iParam0->f_23, (1 << 12)) && !PED::IS_PED_CARRYING_SOMETHING(iParam0->f_1))
				{
					func_81(&(iParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(iParam0->f_1);
					if (func_95(iVar6, iParam0->f_1, 1, 1) < 5.0f)
					{
						iVar5 = func_552(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0->f_1, iVar5);
					}
				}
				else if (!func_3(iParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iParam0->f_1, iVar5, iParam0->f_14, iParam0->f_21, iParam0->f_4);
				}
				func_547(iParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_553(iParam0, iParam1))
			{
				func_115(&(iParam0->f_5));
				if (func_3(iParam0->f_23, (1 << 13)))
				{
					if (func_3(iParam0->f_23, (1 << 10)))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(iParam0->f_1, iParam0->f_25, &(iParam0->f_30), &(iParam0->f_26), iParam0->f_21, false, iVar7, 20000, -1.0f);
				}
				else
				{
					if (!func_190(iParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_3(iParam0->f_23, (1 << 10)))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!func_190(iParam0->f_11))
					{
						if (func_3(iParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, iParam0->f_11, iParam0->f_21, func_294(!func_3(iParam0->f_23, 128), 20000, -1), iParam0->f_19, iParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_11, iParam0->f_21, func_294(!func_3(iParam0->f_23, 128), 20000, -1), iParam0->f_17, iVar8, iParam0->f_19);
						}
					}
					if (func_3(iParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, iParam0->f_8, iParam0->f_21, func_294(!func_3(iParam0->f_23, 128), 20000, -1), iParam0->f_19, iParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_8, iParam0->f_21, func_294(!func_3(iParam0->f_23, 128), 20000, -1), iParam0->f_17, iVar8, iParam0->f_19);
					}
					if (func_3(iParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, iParam0->f_19, 0);
					}
					func_311(iParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_547(iParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_3(iParam0->f_23, (1 << 13)))
			{
				if (ANIMSCENE::_HAS_ENTITY_ENTERED_ANIM_SCENE(iParam0->f_25, &(iParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_3(iParam0->f_23, 1))
			{
				iParam0->f_19 = ENTITY::GET_ENTITY_HEADING(iParam0->f_1);
			}
			if (!func_3(iParam0->f_23, 128) && func_374(&(iParam0->f_5), 15.0f))
			{
				iVar10 = 1;
			}
			if (!func_3(iParam0->f_23, (1 << 13)))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_190(iParam0->f_11) || !func_370(iParam0->f_1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"))) || TASK::GET_SEQUENCE_PROGRESS(iParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_554(iParam0->f_1, iParam0->f_8, iParam0->f_19, iParam0->f_18, iParam0->f_20, func_3(iParam0->f_23, 8)) && (!func_3(iParam0->f_23, 64) || MISC::ABSF(func_555(iParam0->f_1, iParam0->f_8)) < iParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 & iVar12) | iVar10)
			{
				if (func_3(iParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(iParam0->f_1, iParam0->f_8, 0);
				}
				func_138(&(iParam0->f_5));
				func_547(iParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_331(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_90(&(sVar0.f_5), 1);
	}
	sVar0.f_13 = 0;
	sVar0.f_7 = iParam1;
	func_147(&(sVar0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*uParam0, &sVar0);
	}
}

void func_332()
{
	int iVar0;

	if (func_20(iLocal_501[1], 0, 1))
	{
		if (!func_18(iLocal_900, (1 << 10)))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], joaat("SCRIPT_TASK_ANY"), true) != 1 && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_501[1], -1))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (func_20(iLocal_501[0], 0, 1))
				{
					TASK::TASK_SMART_FLEE_PED(0, iLocal_501[0], 1.5f, 5000, 0, 1.0f, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_501[0], 7000, -1.0f, -1.0f, -1.0f);
				}
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_525))
				{
					TASK::TASK_USE_SCENARIO_POINT(0, iLocal_525, "", -1, true, false, 0, false, -1.0f, false);
				}
				func_311(iLocal_501[1], &iVar0, 0, 0, 1, 1);
				func_90(&iLocal_900, (1 << 10));
			}
		}
	}
}

bool func_333()
{
	if (!func_18(iLocal_900, 8))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -825774819))
		{
			TASK::_0x2E1D6D87346BB7D2(iLocal_501[1], iLocal_501[0], 0, 0);
			func_90(&iLocal_900, 8);
		}
	}
	func_334(0);
	if (func_18(iLocal_901, (1 << 20)))
	{
		func_334(1);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_533.f_2, "pedDog", iLocal_501[1]);
		return true;
	}
	return false;
}

void func_334(bool bParam0)
{
	if (iLocal_15 != 1)
	{
		return;
	}
	if (func_18(iLocal_900, 16))
	{
		if (!func_18(iLocal_900, 128))
		{
			if (((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[1], joaat("ENDSINRUN")) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_2, false)) || ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(sLocal_533.f_2, "pedDog")) || bParam0)
			{
				func_60(0);
				func_556();
				func_90(&iLocal_900, 128);
			}
		}
	}
}

void func_335()
{
	if (func_20(iLocal_501[1], 0, 1))
	{
		if (func_95(iLocal_501[0], iLocal_501[1], 1, 1) < 25.0f && iLocal_15 == 0)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_501[1], joaat("REL_PLAYER_ENEMY"));
			TASK::TASK_COMBAT_PED(iLocal_501[1], Global_35, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_501[1], true);
			func_126(iLocal_501[1], &(uLocal_506[1]), joaat("BLIP_STYLE_ENEMY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
			func_90(&iLocal_900, (1 << 29));
		}
		else
		{
			TASK::_0x2E1D6D87346BB7D2(iLocal_501[1], Global_35, 0, 0);
			PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_501[1]);
			TASK::TASK_SMART_FLEE_PED(iLocal_501[1], Global_35, 500.0f, -1, 0, 2.0f, 0);
			PED::SET_PED_KEEP_TASK(iLocal_501[1], true);
		}
	}
}

void func_336()
{
	if (func_18(iLocal_900, (1 << 16)))
	{
		return;
	}
	if (!func_18(iLocal_900, (1 << 13)))
	{
		if (!func_557())
		{
			func_115(&uLocal_942);
			vLocal_911 = { Global_36 /*3*/ };
			if (func_18(iLocal_900, (1 << 25)))
			{
				func_558("DOG_ABANDON" /* GXTEntry: "Return to town to reunite the dog with the kid." */, 10000, 0, 0, 0, 1);
			}
			else
			{
				func_558("DOG_TOWN" /* GXTEntry: "You are leaving the town limits. Return to town to locate the dog." */, 10000, 0, 0, 0, 1);
			}
			func_90(&iLocal_900, (1 << 13));
		}
	}
	else if (func_557())
	{
		func_147(&iLocal_900, (1 << 13));
		func_138(&uLocal_942);
		vLocal_911 = { 0.0f, 0.0f, 0.0f /*3*/ };
	}
	else if (func_119(&uLocal_942) > 30.0f)
	{
		func_90(&iLocal_900, (1 << 14));
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_911, true) > 200.0f)
	{
		if (func_119(&uLocal_942) > 5.0f)
		{
			func_90(&iLocal_900, (1 << 14));
		}
	}
}

void func_337()
{
	iLocal_501[2] = func_75(sLocal_322[2 /*32*/].f_1, &(sLocal_322[2 /*32*/]), vLocal_469.x, vLocal_469.y, (vLocal_469.z + 0.25f), fLocal_472, 0, 0, 1, 0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_501[2], false, 0.0f);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_501[2], false);
}

bool func_338(int iParam0, char* sParam1, bool bParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return false;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return false;
	}
	if (ENTITY::_CREATE_FOOTPATH_TRAIL(iParam0, sParam1, bParam2, fParam3, fParam4, iParam5, 0, 0, 0, iParam6, 0, bParam7))
	{
		return true;
	}
	return false;
}

void func_339(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_559(0);
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

bool func_340(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_230(uParam0, bVar1);
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
	if (uParam0->f_178 & func_228())
	{
		bVar1 = true;
		fVar3 = func_170(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_231(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90.0f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_231(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90.0f, 0, 0);
		}
		if (func_232(&(uParam0->f_121), iParam4, fParam1))
		{
			func_84(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_174(uParam0->f_3, uParam0->f_185), 0);
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
						func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_84(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_174(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_341(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_560(iParam0, iParam1, 0.0f))
		{
			return false;
		}
	}
	if (!func_561(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

void func_342(var uParam0, var uParam1, int iParam2, Vector3 vParam3, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, bool bParam12, float fParam13)
{
	return;
	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		if (func_363(uParam0, 64))
		{
			func_93(&(uParam1->f_5), 1, 1);
			func_562(uParam0, 64);
		}
	}
	else if (bParam12)
	{
		if (uParam1->f_3 == 0)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam2))
			{
				if (!func_363(uParam0, 64))
				{
					if (uParam1->f_5 == 0)
					{
						uParam1->f_5 = func_563("BEAT_RESPOND" /* GXTEntry: "Respond" */, joaat("INPUT_CINEMATIC_CAM"), iParam2, 3, 0, 0, 0, 0, fParam13, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					}
					func_115(uParam1);
					func_564(uParam0, 64);
				}
			}
			else if (func_304(uParam1) && func_119(uParam1) > 6.0f)
			{
				if (func_363(uParam0, 64))
				{
					func_93(&(uParam1->f_5), 1, 1);
					func_562(uParam0, 64);
				}
			}
		}
		else if (!func_363(uParam0, 64))
		{
			func_564(uParam0, 64);
		}
	}
	else if (!func_363(uParam0, 64))
	{
		func_564(uParam0, 64);
	}
	if (func_363(uParam0, 64))
	{
		func_565(uParam1, iParam2, vParam3, iParam6, iParam7, fParam8, iParam9, iParam10, iParam11);
	}
}

bool func_343(int iParam0, bool bParam1)
{
	if (func_20(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_344(float fParam0)
{
	if (func_566(1))
	{
		return true;
	}
	if (func_304(&uLocal_0) && !func_374(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_345(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_349() - fParam1);
	func_567(uParam0, 1);
	func_568(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

void func_346(int iParam0)
{
	if (!func_161(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_46 = 1;
}

void func_347(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_348(var uParam0)
{
	return func_532(*uParam0, 2);
}

float func_349()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

int func_350()
{
	return Global_1572887.f_12;
}

int func_351(int iParam0)
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

void func_352(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_569();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_570(iParam0);
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
	if (func_571(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_120())
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
	Global_40.f_11095.f_35 = func_572(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_569();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_573(iVar1);
		func_575(func_574(), 0, 4000);
		func_576(Global_40.f_11095.f_35);
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
		func_577(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_579(func_578(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_351(14))
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
					sParam4 = func_580(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_581(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS" /* GXTEntry: "+" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_581(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT" /* GXTEntry: "+" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_579(func_578(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_351(4))
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
					sParam4 = func_580(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_581(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG" /* GXTEntry: "~COLOR_RED~-~s~" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_581(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT" /* GXTEntry: "~COLOR_RED~-~s~" */), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_578(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_582(10, 1);
	}
}

void func_353(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

void func_354()
{
	Vector3 vVar0[3];
	float fVar10[3];
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	bool bVar18;

	fVar17 = 0.0f;
	bVar18 = true;
	switch (iLocal_500)
	{
		case 26:
			vVar0[0 /*3*/] = { -1867.726f, -399.8446f, 169.9069f /*3*/ };
			fVar10[0] = 257.1588f;
			vVar0[1 /*3*/] = { -1784.728f, -338.1369f, 180.2827f /*3*/ };
			fVar10[1] = 45.7488f;
			break;
		case 69:
			vVar0[0 /*3*/] = { 1459.359f, 327.9647f, 88.64633f /*3*/ };
			fVar10[0] = 241.8177f;
			vVar0[1 /*3*/] = { 1443.147f, 293.7058f, 88.46765f /*3*/ };
			fVar10[1] = 91.734f;
			vVar0[2 /*3*/] = { 1451.438f, 368.6502f, 87.65598f /*3*/ };
			fVar10[2] = 185.4836f;
			break;
	}
	iVar14 = 0;
	while (iVar14 <= 2)
	{
		if (!func_190(vVar0[iVar14 /*3*/]))
		{
			fVar16 = func_326(Global_35, vVar0[iVar14 /*3*/], 0);
			if (fVar16 < 50.0f || CAM::IS_SPHERE_VISIBLE(vVar0[iVar14 /*3*/], 1.0f))
			{
				bVar18 = false;
			}
			if (fVar16 > fVar17)
			{
				iVar15 = iVar14;
				fVar17 = fVar16;
			}
		}
		iVar14++;
	}
	if (bVar18)
	{
		if (iLocal_500 == 26)
		{
			iVar15 = (MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 2);
		}
		else
		{
			iVar15 = (MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 3);
		}
	}
	if (iLocal_500 == 26)
	{
		switch (iVar15)
		{
			case 0:
				iLocal_16 = 0;
				sLocal_474 = "re_lost_dog_str_jail";
				break;
			case 1:
				iLocal_16 = 1;
				sLocal_474 = "re_lost_dog_str_rock";
				break;
		}
	}
	else
	{
		switch (iVar15)
		{
			case 0:
				iLocal_16 = 3;
				sLocal_474 = "re_lost_dog_emr_wagon";
				break;
			case 1:
				iLocal_16 = 4;
				sLocal_474 = "re_lost_dog_emr_watertower";
				break;
			case 2:
				iLocal_16 = 2;
				sLocal_474 = "re_lost_dog_emr_house";
				break;
		}
	}
	vLocal_469 = { vVar0[iVar15 /*3*/] /*3*/ };
	fLocal_472 = fVar10[iVar15];
}

void func_355(int iParam0, bool bParam1)
{
	func_583(iParam0, bParam1);
}

void func_356(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263 /*PCF_NoCriticalHits*/, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138 /*PCF_OneShotWillKillPed*/, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488 /*PCF_DiesInstantlyToMeleeFromAnimals*/, bParam1);
	}
}

void func_357(int iParam0, Vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = 258;
	func_360(iParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_358(int iParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_359(Vector3 vParam0, float fParam3, int* iParam4, int iParam5)
{
	if (MAP::DOES_BLIP_EXIST(*iParam4))
	{
		MAP::REMOVE_BLIP(iParam4);
	}
	*iParam4 = MAP::BLIP_ADD_FOR_RADIUS(iParam5, vParam0, fParam3);
}

void func_360(int iParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_160(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_160(iParam0))
		{
		}
	}
}

float func_361(struct<2> /*16*/ sParam0, int iParam2, struct<2> /*16*/ sParam3, var uParam5, int iParam6)
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

int func_362(var uParam0, float fParam1)
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

bool func_363(var uParam0, int iParam1)
{
	return (*uParam0 & iParam1) != 0;
}

void func_364(var uParam0)
{
	if (func_363(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!func_584(uParam0) || func_363(&(uParam0->f_3), 4)) && !func_363(&(uParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND") /* GXTEntry: "Look behind" */, false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND") /* GXTEntry: "Look behind" */, false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_BEHIND") /* GXTEntry: "Look behind" */, false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
	}
	if (func_585(uParam0))
	{
		func_25();
	}
	if (!func_363(&(uParam0->f_3), 16))
	{
		if (func_304(uParam0))
		{
			if (func_586(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.0f);
			}
		}
	}
}

bool func_365(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (func_587(iParam0, fParam1, iParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_366(Vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;

	if (!func_588(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_363(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return false;
	}
	fVar0 = func_326(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_589(vParam0, uParam3))
	{
		return false;
	}
	if (!func_363(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_590(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_367(var uParam0, Vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = func_591(vParam1, 1);
	if (!func_363(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60.0f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40.0f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20.0f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10.0f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		CAM::_0x1F6EBD94680252CE(iVar1, -1082130432 /* Float: -1f */);
		CAM::_0xF48664E9C83825E3(iVar2, -1082130432 /* Float: -1f */);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	func_115(uParam0);
	func_564(&(uParam0->f_3), 1);
}

Vector3 func_368(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	Vector3 vVar0;

	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
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

bool func_369(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

bool func_370(int iParam0, int iParam1)
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

void func_371()
{
	func_295(vLocal_455, 7.0f, 1, 0, 0, 0, 0);
}

struct<8> /*64*/ func_372(char* sParam0)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, sParam0);
	return cVar0;
}

char* func_373(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_374(var uParam0, float fParam1)
{
	if (func_469(uParam0, fParam1))
	{
		func_138(uParam0);
		return true;
	}
	return false;
}

float func_375(int iParam0, int iParam1, bool bParam2)
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
	return func_153(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_376(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (func_375(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam1 * fParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_377(Vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
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
				fVar2 = func_592(iParam10);
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
			bVar0 = func_593(uParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = func_594(uParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*fParam6 = 1;
		if (*iParam5 != 0.0f)
		{
		}
		if (*iParam5 <= 0.0f)
		{
			*iParam5 = func_349();
		}
		else if ((func_349() - *iParam5) > bParam7)
		{
			*iParam5 = 0.0f;
			return true;
		}
	}
	else if (*uParam4 == 2 && uParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0.0f;
		}
	}
	else
	{
		*fParam6 = 1;
	}
	return false;
}

bool func_378()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	MISC::GET_CURR_WEATHER_STATE(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (func_452(iVar3))
	{
		return true;
	}
	return false;
}

void func_379(int iParam0, int iParam1)
{
	*iParam0 -= (*iParam0 & iParam1);
}

bool func_380(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_20(iParam0, 0, 1))
	{
		return true;
	}
	else if (!func_20(iParam2, 0, 1))
	{
		return true;
	}
	switch (*uParam3)
	{
		case 0:
			uParam4->f_183 = func_95(iParam0, iParam2, 0, 1);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam2, -1, 0, 51, 0);
			if (!(func_595(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || func_95(iParam0, iParam2, 1, 1) < 2.0f) && !uParam4->f_79)
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iParam0, iParam2, 0.0f, 6.0f, 0.5f, uParam4->f_212, -1, 0.1f, true, true, false, false, true, false);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam2, 0, -1.0f, -1.0f, -1.0f);
			}
			if (uParam4->f_180)
			{
				if (func_375(iParam0, iParam2, 1) >= 16.0f)
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam2, 20000, 0.5f, uParam4->f_212, (1 << 30), 0);
					func_115(&(uParam4->f_191));
				}
				else
				{
					uParam4->f_180 = 0;
					uParam4->f_79 = 1;
				}
			}
			*uParam3 = 1;
			break;
		case 1:
			if (func_95(iParam0, iParam2, 0, 1) > (uParam4->f_183 + uParam4->f_1))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam2, 1000.0f, -1, 0, 3.0f, 0);
				return true;
			}
			else if ((!uParam4->f_180 && (func_95(iParam0, iParam2, 1, 1) < uParam4->f_188 || uParam4->f_79)) || (uParam4->f_180 && (func_374(&(uParam4->f_191), uParam4->f_189) || func_375(iParam0, iParam2, 1) < 16.0f)))
			{
				if (((uParam4->f_180 || func_595(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || uParam4->f_77) || (uParam4->f_79 && (uParam4->f_77 || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam2, &(uParam4->f_62), &(uParam4->f_66), uParam4->f_184, uParam4->f_185, 8, 0.0f, 0.0f, 1.5f, (1 << 30));
					}
					else
					{
						func_596(iParam0, &(uParam4->f_181), -1, !uParam4->f_77);
					}
					*uParam3 = 2;
				}
			}
			break;
		case 2:
			if ((uParam4->f_76 || uParam4->f_79) || ((func_341(iParam0, iParam2, 0, uParam4->f_188, 0) && uParam4->f_80 | func_596(iParam0, &(uParam4->f_181), -1, !uParam4->f_77)) || uParam4->f_180))
			{
				if (func_114(0, 1, iParam0, uParam4->f_182))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
					{
						if (uParam4->f_80 || uParam4->f_180)
						{
							TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 1.5f, -1.5f, -1, 24, 0.0f, false, 0, false, 0, false);
						}
						else
						{
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4.0f, -4.0f, 67108880, 0.0f, false, false, -1.0f, 0, (1 << 16), -1.0f);
						}
					}
					*uParam4 = MISC::GET_GAME_TIMER();
					if (uParam4->f_194)
					{
						MemCopy(&(uParam4->f_34), {uParam4->f_199}, 8);
					}
					func_597(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					func_598(uParam4);
					if (uParam4->f_194 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_204)))
					{
						*uParam3 = 4;
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_42)))
					{
						*uParam3 = 3;
					}
					else
					{
						*uParam3 = 5;
					}
				}
			}
			else if (!func_20(iParam0, 0, 1))
			{
				return true;
			}
			break;
		case 3:
			if (func_114(0, 1, iParam0, uParam4->f_182))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 4.0f, -4.0f, -1, 24, 0.0f, false, 0, false, 0, false);
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_26)))
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_18), &(uParam4->f_26), iParam2, -1, 4.0f, -4.0f, 16, 0.0f, false, false, -1.0f, 0, 0, -1.0f);
					}
					else
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4.0f, -4.0f, 16, 0.0f, false, false, -1.0f, 0, 0, -1.0f);
					}
				}
				func_597(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
				*uParam3 = 5;
			}
			break;
		case 4:
			if (func_114(0, 1, iParam0, uParam4->f_182))
			{
				if (func_599(&(uParam4->f_203), &(uParam4->f_204), 0.0f, 0.0f, 0.0f, iParam0, joaat("INPUT_CONTEXT_B"), 10.0f, 0.0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					MemCopy(&(uParam4->f_54), {uParam4->f_195}, 8);
					*uParam3 = 5;
				}
				else if ((MISC::GET_GAME_TIMER() - *uParam4) > 18000)
				{
					func_93(&(uParam4->f_203), 1, 1);
					uParam4->f_194 = 0;
					*uParam3 = 6;
				}
			}
			break;
		case 5:
			if ((func_114(uParam4->f_187, 1, iParam0, uParam4->f_182) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0))
			{
				if (!MISC::IS_STRING_NULL(&(uParam4->f_54)))
				{
					*uParam4 = MISC::GET_GAME_TIMER();
					func_597(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					*uParam3 = 6;
				}
				else
				{
					if (uParam4->f_75 != 0)
					{
						func_600(uParam4->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					else if (uParam4->f_70 != 0)
					{
						func_601(uParam4->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
					}
					*uParam3 = 6;
				}
			}
			break;
		case 6:
			if (func_114(0, 1, iParam0, uParam4->f_182) || (uParam4->f_190 > 0 && (MISC::GET_GAME_TIMER() - *uParam4) > uParam4->f_190))
			{
				if (MAP::DOES_BLIP_EXIST(*iParam1))
				{
					MAP::REMOVE_BLIP(iParam1);
				}
				if (uParam4->f_78)
				{
					TASK::TASK_WANDER_STANDARD(iParam0, 40000.0f, 0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_208)))
				{
					func_558(&(uParam4->f_208), 10000, 0, 0, 0, 1);
				}
				*uParam3 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, true, true))
	{
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 1000.0f, -1, 0, 3.0f, 0);
		return true;
	}
	return false;
}

bool func_381()
{
	return func_602() > 0;
}

bool func_382(int iParam0)
{
	if (func_120())
	{
		return false;
	}
	return func_603(Global_1347702[58 /*49*/].f_15, 1);
}

bool func_383(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_384(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return (Global_1395482.f_2[iParam0] & iParam1) != 0;
}

int func_385(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

bool func_386(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

void func_387(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_93(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_517(iParam0, 0);
		}
	}
}

int func_388(int iParam0, float fParam1, bool bParam2, bool bParam3)
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
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iParam0, "INTERACT_LOCKON" /* GXTEntry: "Interact" */, fParam1, 0.0f, 0, 0.0f, 0.0f, 0, false, -1))
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

int func_389(int iParam0)
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

void func_390(int* iParam0)
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

void func_391(int iParam0)
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

void func_392(var uParam0)
{
	if (uParam0->f_170)
	{
		func_604();
	}
}

void func_393(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_605(32);
		func_396(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_394(var uParam0)
{
	if (func_606(uParam0) | uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_607(uParam0->f_3);
		func_227(uParam0, 0, 1);
		func_608(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_609(0, 0);
		return true;
	}
	return false;
}

bool func_395(int iParam0)
{
	if (!func_161(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_396(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_385(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_350() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 += iVar0;
}

int func_397(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_379(&iVar1, (1 << 31));
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

int func_398()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_399(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_350() != -1)
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

bool func_400(int iParam0)
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

int func_401(int iParam0)
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

int func_402(int iParam0)
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

bool func_403(int iParam0, int iParam1, var uParam2)
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

Vector3 func_404(int iParam0, var uParam1)
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
			if (!func_190(*(uParam1[iVar0 /*3*/])))
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

void func_405(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_DEBUG_PINK"), *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, joaat("BLIP_MODIFIER_URGENT_ALERT"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_94("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100.0f, 1, 0);
	}
}

bool func_406(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_407(Vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_190(vParam0))
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
		if (func_250(vParam0))
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
	func_610(iVar0, bParam8);
	return iVar0;
}

void func_408(int iParam0)
{
	if (!func_161(iParam0))
	{
		return;
	}
	func_611(iParam0);
}

void func_409(var uParam0, Vector3 vParam1)
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

int func_410(int iParam0)
{
	if (func_82(iParam0, 2))
	{
		return 200;
	}
	if (func_82(iParam0, 4))
	{
		return 70;
	}
	if (func_82(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_411(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_71(iParam0, (1 << 17)))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_5() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_71(iParam0, 2);
		bVar1 = func_71(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_233())
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

void func_412(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_82(iParam3, (1 << 21)))
	{
		*fParam0 += 15.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_413(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_82(iParam3, 2))
	{
		*fParam0 += 60.0f;
		*fParam1 += 60.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110.0f));
	}
	else if (func_82(iParam3, (1 << 21)))
	{
		*fParam0 += 30.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_414(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_402(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_415(int iParam0, Vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_190(vParam1))
	{
		return false;
	}
	if (func_420(iParam0, vParam1))
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
	if (func_152(iParam0))
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

bool func_416(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_417(int iParam0, Vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_170(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_423(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_275();
			iParam4->f_2 = func_326(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_423(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_275();
		iParam4->f_2 = func_326(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_418(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_275() - *uParam0) >= iParam1;
	}
	return false;
}

int func_419(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_190(uParam0->f_12[iVar0 /*3*/]))
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

bool func_420(int iParam0, Vector3 vParam1)
{
	int iVar0;

	if (!func_71(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_612(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_71(iParam0, (1 << 25)))
	{
		if (func_613(vParam1, 200.0f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_421(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_82(iParam0, 128))
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
	if (func_71(iParam0, 1) && !func_71(iParam0, 2))
	{
		if (func_71(iParam0, (1 << 12)) || func_71(iParam0, (1 << 11)))
		{
			if (func_614(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_422(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_615())
	{
		return false;
	}
	return true;
}

bool func_423(Vector3 vParam0, int iParam3)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) /*3*/ };
	return func_616(vVar0, vParam0) > func_616(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_424(int iParam0)
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

int func_425(int iParam0)
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

bool func_426(var uParam0)
{
	return func_18(*uParam0, 1);
}

bool func_427(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_617(*uParam0, 0.0f, 0.0f, 0.0f))
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

void func_428(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_618(iParam1))
		{
			func_619(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_620(iParam0, 0, 1);
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
			func_621(iParam0, 0);
			bVar0 = true;
		}
		func_622(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_429(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_623(1);
	}
	else
	{
		iVar0 = func_624(iParam0);
	}
	return iVar0;
}

void func_430(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_625(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_626(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

void func_431(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_82(iParam0, (1 << 13)))
	{
		iVar0 = func_626(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_432(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_396(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_433(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_71(iParam0, (1 << 18)))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_627((1 << 18), iVar0, 0, 1);
		}
	}
	if (func_71(iParam0, 128))
	{
		func_627(128, iVar0, 0, 1);
	}
	else if (func_71(iParam0, (1 << 19)))
	{
		func_627((1 << 19), iVar0, 0, 1);
	}
	else if (func_71(iParam0, (1 << 29)))
	{
		func_627((1 << 29), iVar0, 0, 1);
	}
	else if (func_71(iParam0, (1 << 22)))
	{
		func_627((1 << 22), iVar0, 0, 1);
	}
	else if (func_71(iParam0, (1 << 23)))
	{
		func_627((1 << 23), iVar0, 0, 1);
	}
}

void func_434(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_435(bool bParam0)
{
	if (!bParam0 && func_628(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_436()
{
	return Global_1310750.f_16037;
}

bool func_437(int iParam0)
{
	if (!func_161(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_438(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_161(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_629(iParam0);
	Global_1310750.f_16037--;
}

void func_439(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_630(&Global_1393447, 1);
	func_631();
	func_632();
	func_633((BUILTIN::TO_FLOAT(200) / 3.0f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_275() / 1000);
		if ((Global_1392135.f_1 & 4) != 0)
		{
			Global_1392135.f_1 -= (Global_1392135.f_1 & 4);
		}
		func_634();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_627((1 << 24), 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240.0f);
			}
			else if (func_3(iParam0, 2))
			{
				func_627((1 << 24), 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60.0f);
			}
			else if (func_3(iParam0, 4))
			{
				func_627((1 << 24), 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900.0f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_635(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_636(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_636((BUILTIN::TO_FLOAT(200) / 3.0f), 1, 0);
	}
}

bool func_440(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] & iParam0) != 0;
}

void func_441(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 -= (Global_1392050[iParam1 /*14*/].f_1 & iParam0);
}

void func_442(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] |= iParam0;
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("GANG_BANDITOS") /* GXTEntry: "Del Lobo Gang" */;
		case 2:
			return joaat("GANG_EXCONFED") /* GXTEntry: "Lemoyne Raiders" */;
		case 1:
			return joaat("GANG_INBRED") /* GXTEntry: "The Murfree Brood" */;
		case 0:
			return joaat("GANG_ODRISCOLL") /* GXTEntry: "O\'Driscoll Boys" */;
		case 4:
			return joaat("GANG_RANCHERS") /* GXTEntry: "The Laramie Gang" */;
		case 3:
			return joaat("GANG_SAVAGES") /* GXTEntry: "The Skinner Brothers" */;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_444(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_445()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_446(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_447(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_446(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0.0f)
		{
			uParam0->f_8 = (func_349() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0.0f;
	return false;
}

int func_448(bool bParam0, bool bParam1, bool bParam2)
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

int func_449()
{
	return Global_1899515;
}

int func_450(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

bool func_451(int iParam0)
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

bool func_452(int iParam0)
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

bool func_453(int iParam0)
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

bool func_454(int iParam0)
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

bool func_455(int iParam0)
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

bool func_456(int iParam0)
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

bool func_457(int iParam0)
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

bool func_458(bool bParam0, int iParam1, int iParam2)
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

bool func_459()
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

int func_460(int iParam0)
{
	if (!func_463(iParam0))
	{
		return -1;
	}
	return func_638(func_637(iParam0));
}

bool func_461(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_462(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_463(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_464(int iParam0)
{
	return (Global_1310750.f_16035 & iParam0) != 0;
}

bool func_465(int iParam0)
{
	return func_71(iParam0, Global_1310750.f_16072 | 64);
}

int func_466(int iParam0)
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

int func_467(int iParam0)
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

bool func_468(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_469(var uParam0, float fParam1)
{
	if (!func_304(uParam0))
	{
		return false;
	}
	if (func_119(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_470(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

void func_471(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_22 & 4) != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_639();
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
			func_640(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_472(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_473(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_350() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_641(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_641(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_500(iVar0) == -1)
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

void func_474(int iParam0)
{
	if ((*iParam0 & 8) != 0 || (*iParam0 & 16) != 0)
	{
		func_642(iParam0);
	}
}

bool func_475(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_500(iParam2);
	}
	else
	{
		iVar1 = func_499(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_500(iParam0);
	}
	else
	{
		iVar0 = func_499(iParam0);
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

float func_476(int iParam0, int iParam1)
{
	return func_95(iParam0, iParam1, 1, 1);
}

float func_477(int iParam0)
{
	return iParam0->f_26;
}

bool func_478(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_479(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_81(iParam0, (1 << 27));
	}
	else
	{
		func_154(iParam0, (1 << 27));
	}
}

bool func_480(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_95(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_643(iVar0, 0)))
		{
			if (func_286(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_481(int iParam0)
{
	return iParam0->f_17;
}

bool func_482(int iParam0, int iParam1, float fParam2, float fParam3)
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

int func_483(int iParam0)
{
	return iParam0->f_18;
}

bool func_484(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_643(iVar0, 0)))
		{
			if (func_506(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_485(int iParam0)
{
	return iParam0->f_23;
}

int func_486(int iParam0)
{
	return iParam0->f_21;
}

int func_487(int iParam0)
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

bool func_488(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_644(iParam0, vParam4, 0.5f))
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

int func_489(int iParam0)
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
	if (func_645(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_490(int iParam0)
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

bool func_491(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_240(iParam1))
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

bool func_492(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_240(iParam1))
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

bool func_493(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_240(iParam1))
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

bool func_494(int iParam0, int iParam1)
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

bool func_495(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_285(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_496(int iParam0)
{
	return !(*iParam0 & 2) != 0;
}

bool func_497(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_326(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_498(int iParam0)
{
	return iParam0->f_24;
}

int func_499(int iParam0)
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

int func_500(int iParam0)
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

int func_501(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_494(Global_35, &iVar1))
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
		fVar2 = func_95(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_95(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_502(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_458(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_503(iParam1, iVar0))
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
				if (!bParam2 || !func_503(iParam1, iVar1))
				{
					if (func_326(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_503(int iParam0, int iParam1)
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

int func_504(int iParam0)
{
	return iParam0->f_20;
}

int func_505(int iParam0, int iParam1, bool bParam2, float fParam3)
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

bool func_506(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_507(int iParam0)
{
	return func_646(iParam0, 2);
}

char* func_508(char* sParam0)
{
	return sParam0;
}

bool func_509(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_510(int iParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_253());
	}
}

void func_511(int iParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_253());
	}
}

int func_512(int iParam0, int iParam1, int iParam2)
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

int func_513(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_647(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= (1 << 23);
	}
	iVar1 = func_648(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, (1 << 27)))
	{
		func_649(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_650(558))
				{
					func_651(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char[] func_514(int iParam0)
{
	if (func_652(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS" /* GXTEntry: "Accept" */;
			case 1:
				return "GREET_NEG" /* GXTEntry: "Decline" */;
			case 2:
				return "GREET_SPOS" /* GXTEntry: "Positive" */;
			case 3:
				return "GREET_SNEG" /* GXTEntry: "Negative" */;
			case 4:
				return "GREET_ACC" /* GXTEntry: "Accept" */;
			case 5:
				return "GREET_REJ" /* GXTEntry: "Reject" */;
			case 6:
				return "BEAT_GRT_NEG" /* GXTEntry: "Decline" */;
			case 7:
				return "INTERACT_GREET" /* GXTEntry: "Greet" */;
			case 8:
				return "INTERACT_DEFUSE" /* GXTEntry: "Defuse" */;
			case 9:
				return "INTERACT_LET_GO" /* GXTEntry: "Dismiss" */;
			case 10:
				return "INTERACT_INSULT" /* GXTEntry: "Antagonize" */;
			case 11:
				return "INTERACT_THREATEN" /* GXTEntry: "Threaten" */;
			case 12:
				return "INTERACT_ROB" /* GXTEntry: "Rob" */;
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO" /* GXTEntry: "Dismiss" */;
			case 14:
				return "INTERACT_ROB_ACCEPT" /* GXTEntry: "Dismiss" */;
			case 15:
				return "INTERACT_ROB_REJECT_MELEE" /* GXTEntry: "Beat" */;
			case 16:
				return "INTERACT_STOP_WITNESS" /* GXTEntry: "Stop Witness" */;
			case 17:
				return "INTERACT_STOP_VEHICLE" /* GXTEntry: "Callout" */;
			case 18:
				return "INTERACT_STOP_HORSE" /* GXTEntry: "Callout" */;
			case 19:
				return "INTERACT_REQUEST_RIDE" /* GXTEntry: "Request Ride" */;
			case 20:
				return "INTERACT_STEAL_HORSE" /* GXTEntry: "Steal ~1~" */;
			case 21:
				return "INTERACT_STEAL_VEHICLE" /* GXTEntry: "Steal Vehicle" */;
			case 22:
				return "INTERACT_HORSE" /* GXTEntry: "Pat" */;
			case 23:
				return "INTERACT_CALLOUT" /* GXTEntry: "Call Out" */;
			case 24:
				return "INTERACT_QUESTION" /* GXTEntry: "Question" */;
			case 25:
				return "INTERACT_ENCOURAGE" /* GXTEntry: "Encourage" */;
			case 26:
				return "INTERACT_INTERVENE" /* GXTEntry: "Intervene" */;
			case 27:
				return "INTERACT_CONFRONT" /* GXTEntry: "Confront" */;
			case 28:
				return "RE_INTER_TRUTH" /* GXTEntry: "Truth" */;
			case 29:
				return "RE_INTER_LIE" /* GXTEntry: "Lie" */;
			case 30:
				return "INTERACT_QUIT" /* GXTEntry: "Quit" */;
			case 31:
				return "RE_INTER_DIRECT" /* GXTEntry: "Direction" */;
			case 32:
				return "INTERACT_SCOLD" /* GXTEntry: "Scold" */;
			case 33:
				return "INTERACT_PRAISE" /* GXTEntry: "Praise" */;
			case 34:
				return "INTERACT_ASSIST" /* GXTEntry: "Assist" */;
			case 35:
				return "INTERACT_MISLEAD" /* GXTEntry: "Mislead" */;
			case 36:
				return "INTERACT_ASK" /* GXTEntry: "Ask" */;
			case 37:
				return "INTERACT_DEMAND" /* GXTEntry: "Demand" */;
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_515(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_92(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_653(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_654(iParam0->f_6, iParam0->f_5, 0);
			}
			func_655(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_656(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_516(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_657(iParam0, 13))
	{
		func_658(iParam0, 0);
	}
	else
	{
		func_659(iParam0, 0);
	}
	if (func_92(iParam0->f_6))
	{
		if (bParam2)
		{
			func_93(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_517(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_138(&(iParam0->f_18));
}

bool func_518(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = *uParam1;
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

bool func_519(char* sParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = sParam0;
	return func_660(UIFEED::_0x4E88A65968A55C78(&sVar0, bParam1));
}

void func_520(char* sParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;
	int iVar2;

	sVar0.f_1 = sParam0;
	iVar2 = UIFEED::_0x4E88A65968A55C78(&sVar0, bParam1);
	if (func_661(iVar2))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iVar2, false);
	}
}

void func_521()
{
	if (func_18(iLocal_987, 8))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 1598438069))
		{
			func_29(iLocal_501[0], Global_35, func_134("IGNORED", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
	else if (func_382(0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -1107027972))
		{
			func_29(iLocal_501[0], Global_35, func_134("REJECTED_SICK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
	else if (func_18(iLocal_987, (1 << 9)))
	{
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -326448732))
	{
		func_29(iLocal_501[0], Global_35, func_134("REJECTED", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
	}
}

bool func_522()
{
	if (func_18(iLocal_987, (1 << 18)))
	{
		if (iLocal_15 == 1)
		{
			if (func_18(iLocal_987, (1 << 19)))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	else if (func_18(iLocal_987, (1 << 15)))
	{
		return true;
	}
	return false;
}

bool func_523()
{
	if (func_18(iLocal_987, 64))
	{
		if (func_518(PLAYER::PLAYER_ID(), &(iLocal_501[0])))
		{
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
	return true;
}

void func_524()
{
	if (!func_18(iLocal_900, (1 << 16)))
	{
		if (!func_18(iLocal_987, (1 << 16)))
		{
			if (!func_18(iLocal_987, (1 << 17)))
			{
				func_516(&(sLocal_1083[0 /*17*/]), 1, 0);
			}
			else if (func_662(&(sLocal_1083[0 /*17*/]), 1, 0))
			{
				func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
			}
		}
		if (!func_522())
		{
			func_516(&(sLocal_1083[1 /*17*/]), 1, 0);
		}
		else if (func_662(&(sLocal_1083[1 /*17*/]), 1, 0))
		{
			func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
		}
	}
	else
	{
		if (!func_18(iLocal_987, (1 << 12)))
		{
			if (!func_18(iLocal_987, (1 << 13)))
			{
				func_516(&(sLocal_1083[0 /*17*/]), 1, 0);
			}
			else if (func_662(&(sLocal_1083[0 /*17*/]), 1, 0))
			{
				func_516(&(sLocal_1083[0 /*17*/]), 0, 0);
			}
		}
		if (!func_18(iLocal_987, (1 << 14)))
		{
			func_515(&(sLocal_1083[1 /*17*/]), func_514(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			func_516(&(sLocal_1083[1 /*17*/]), 1, 0);
		}
		else if (func_662(&(sLocal_1083[1 /*17*/]), 1, 0))
		{
			func_516(&(sLocal_1083[1 /*17*/]), 0, 0);
		}
	}
}

bool func_525()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

void func_526(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		func_663(iParam0, iParam1, iParam18);
	}
}

float func_527(float fParam0, var uParam1)
{
	float fVar0;

	if (sLocal_128.f_98[0] < fParam0)
	{
		if (!func_304(uParam1))
		{
			func_115(uParam1);
		}
	}
	else
	{
		func_138(uParam1);
	}
	fVar0 = func_664(uParam1);
	return fVar0;
}

void func_528(var uParam0)
{
	if (!func_304(uParam0))
	{
	}
	if (func_348(uParam0))
	{
		uParam0->f_1 = (func_349() - uParam0->f_2);
		uParam0->f_2 = 0.0f;
		func_568(uParam0, 2);
	}
}

void func_529(var uParam0)
{
	if (!func_304(uParam0))
	{
	}
	if (!func_348(uParam0))
	{
		uParam0->f_2 = (func_349() - uParam0->f_1);
		func_567(uParam0, 2);
	}
}

void func_530()
{
	switch (iLocal_526)
	{
		case 0:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!func_18(iLocal_901, (1 << 21)))
				{
					func_29(iLocal_501[0], iLocal_501[0], func_134("BECKON", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					func_665(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
					func_90(&iLocal_901, (1 << 21));
				}
				iLocal_526++;
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_501[0]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
					func_665(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				}
				iLocal_526++;
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 616045050))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
				func_665(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				iLocal_526++;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!func_18(iLocal_901, (1 << 16)))
				{
					func_29(iLocal_501[0], iLocal_501[0], func_134("LOOK_WHERE", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					func_665(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
					func_90(&iLocal_901, (1 << 16));
				}
				iLocal_526++;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_501[0]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
					func_665(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				}
				iLocal_526++;
			}
			break;
		case 5:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 616045050))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
				func_665(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				iLocal_526++;
			}
			break;
		case 6:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 616045050))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
				func_665(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				iLocal_526++;
			}
			break;
		case 7:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!func_18(iLocal_901, (1 << 21)))
				{
					func_29(iLocal_501[0], iLocal_501[0], func_134("BECKON", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					func_665(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
					func_90(&iLocal_901, (1 << 21));
				}
				iLocal_526++;
			}
			break;
		default:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 616045050) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_501[0]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_501[0]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
					func_665(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				}
			}
			break;
	}
}

void func_531(var uParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	*uParam0 = 1;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = sParam2;
	uParam0->f_3 = iParam3;
	uParam0->f_4 = 1.0f;
	uParam0->f_5 = 1.0f;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = -1;
	if (bParam4)
	{
		uParam0->f_20 = 1;
		uParam0->f_21 = 1;
	}
	else
	{
		uParam0->f_20 = 0;
		uParam0->f_21 = 1;
	}
	uParam0->f_23 = 1114112;
}

bool func_532(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_533(var uParam0, var uParam1, int iParam2, Vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0.0f, 0.0f, 0.0f, fParam6, fParam6, fParam6);
	iVar1 = func_666(uParam0, uParam1, iVar0, iParam2);
	func_23(iVar0);
	return iVar1;
}

void func_534()
{
	if (iLocal_993[0] == 11 || iLocal_993[0] == 12)
	{
		return;
	}
	switch (iLocal_907)
	{
		case 0:
			if (func_114(0, 1, iLocal_501[0], 1) && func_114(0, 1, Global_35, 1))
			{
				func_29(iLocal_501[0], iLocal_501[1], "RE_LD_EMR_V1_RUNAWAY_RUN_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
				func_115(&uLocal_936);
				iLocal_907++;
			}
			break;
		case 1:
			if ((func_119(&uLocal_936) > 6.0f && func_114(0, 1, iLocal_501[0], 1)) && func_114(0, 1, Global_35, 1))
			{
				func_29(iLocal_501[0], iLocal_501[1], "RE_LD_EMR_V1_RUNAWAY_RUN_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
				func_115(&uLocal_936);
				iLocal_907++;
			}
			break;
		case 2:
			if ((func_119(&uLocal_936) > 7.0f && func_114(0, 1, iLocal_501[0], 1)) && func_114(0, 1, Global_35, 1))
			{
				func_29(iLocal_501[0], iLocal_501[1], "RE_LD_EMR_V1_RUNAWAY_RUN_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
				func_115(&uLocal_936);
				iLocal_907++;
			}
		}

bool func_535()
{
	if (iLocal_906 == sLocal_533.f_2 && (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_533.f_2) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_2, false)))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_2, "pblBreakoutStandL");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_2, "pblBreakoutStandR");
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_2, "pblBreakoutStandL") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_2, "pblBreakoutStandR"))
		{
			return true;
		}
	}
	else if (iLocal_906 == sLocal_533.f_1 && (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_533.f_1) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_1, false)))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "pblBreakoutStandL");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "pblBreakoutStandR");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "pblBreakoutSitL");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "pblBreakoutSitR");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "pblBreakoutSitQuickFwd");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "pblBreakoutSitQuickR");
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(sLocal_533.f_1, "pblBreakoutSitQuickL");
		if ((((((ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "pblBreakoutStandL") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "pblBreakoutStandR")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "pblBreakoutSitL")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "pblBreakoutSitR")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "pblBreakoutSitQuickFwd")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "pblBreakoutSitQuickR")) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(sLocal_533.f_1, "pblBreakoutSitQuickL"))
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

void func_536()
{
	if (iLocal_906 == sLocal_533.f_1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_533.f_2) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_2, false))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_533.f_2, "pedKid", iLocal_501[0]);
		}
	}
	else if (iLocal_906 == sLocal_533.f_2)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(sLocal_533.f_1) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(sLocal_533.f_1, false))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(sLocal_533.f_1, "pedKid", iLocal_501[0]);
		}
	}
}

int func_537(int iParam0, int iParam1, float fParam2)
{
	Vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) /*3*/ };
	return func_546(iParam0, vVar0, fParam2);
}

void func_538(int iParam0, float fParam1, int iParam2, float fParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, float fParam10, bool bParam11, int iParam12)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	bool bVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) * FloatToVector((fParam3 + 5.0f)) /*3*/ };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) * Vector(fParam3, fParam3, fParam3) /*3*/ };
	if (iParam0 != 0)
	{
		if (bParam9)
		{
			func_667(iParam0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar6);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, fParam1, iParam2, fParam4, 1, 40000.0f);
	if (fParam10 > 0.0f)
	{
		if (!bParam8)
		{
			TASK::TASK_SMART_FLEE_COORD(0, vVar3, fParam10, iParam2, 16640, fParam1);
		}
		else
		{
			TASK::TASK_SMART_FLEE_COORD(0, vVar3, fParam10, iParam2, 16704, fParam1);
		}
	}
	bVar7 = (ENTITY::DOES_ENTITY_EXIST(iParam6) && !ENTITY::IS_ENTITY_DEAD(iParam6));
	if (bParam5)
	{
		if (!bVar7 && fParam7 > 0.0f)
		{
			TASK::TASK_WANDER_IN_AREA(0, vVar0, fParam7, 3.0f, 6.0f, bParam8);
		}
		else if (bParam11)
		{
			TASK::TASK_FLEE_PED(0, iParam6, iParam12, 0, -1.0f, -1, 0);
		}
		else
		{
			TASK::TASK_WANDER_AND_CONVERSE_WITH_PED(0, iParam6, 0, 0);
		}
	}
	else if (bVar7)
	{
		if (bParam11)
		{
			TASK::TASK_FLEE_PED(0, iParam6, iParam12, 0, -1.0f, -1, 0);
		}
		else
		{
			TASK::TASK_WANDER_AND_CONVERSE_WITH_PED(0, iParam6, 0, 0);
		}
	}
	if (iParam0 != 0)
	{
		TASK::CLOSE_SEQUENCE_TASK(iVar6);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar6);
		TASK::CLEAR_SEQUENCE_TASK(&iVar6);
	}
}

void func_539()
{
	if (func_18(iLocal_987, 128))
	{
		if (sLocal_128.f_98[1] < 5.0f)
		{
			if (!bLocal_896)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 331 /*PCF_0x9663C8F2*/, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 330 /*PCF_0x7C7AF264*/, true);
				func_668(&(sLocal_1118[0 /*17*/]), 0);
				bLocal_896 = true;
			}
		}
		else if (bLocal_896)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 315 /*PCF_0xD38AEF95*/, true);
			func_668(&(sLocal_1118[0 /*17*/]), 2);
			bLocal_896 = false;
		}
	}
}

void func_540()
{
	if (!func_18(iLocal_987, (1 << 26)))
	{
		func_515(&(sLocal_1118[0 /*17*/]), func_514(33), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_516(&(sLocal_1118[0 /*17*/]), 1, 0);
	}
	else if (func_662(&(sLocal_1118[0 /*17*/]), 1, 0))
	{
		func_516(&(sLocal_1118[0 /*17*/]), 0, 0);
	}
	if (!func_18(iLocal_987, (1 << 14)) && !func_18(iLocal_987, (1 << 28)))
	{
		func_515(&(sLocal_1118[1 /*17*/]), func_514(32), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		func_516(&(sLocal_1118[1 /*17*/]), 1, 0);
	}
	else if (func_662(&(sLocal_1118[1 /*17*/]), 1, 0))
	{
		func_516(&(sLocal_1118[1 /*17*/]), 0, 0);
	}
}

void func_541(int iParam0, int iParam1)
{
	char* sVar0;

	switch (iParam1)
	{
		case 0:
			sVar0 = "PAIN_DEATH";
			break;
		case 1:
			sVar0 = "BARK";
			break;
		case 2:
			sVar0 = "BARK_FAR";
			break;
		case 11:
			sVar0 = "BARK_SEQ";
			break;
		case 3:
			sVar0 = "PLAYFUL";
			break;
		case 4:
			sVar0 = "WHINE";
			break;
		case 5:
			sVar0 = "SNIFF";
			break;
		case 6:
			sVar0 = "SNIFF_END";
			break;
		case 7:
			sVar0 = "SNEEZE";
			break;
		case 8:
			sVar0 = "LICK";
			break;
		case 9:
			sVar0 = "EXCITED";
			break;
		case 10:
			sVar0 = "BEG";
			break;
		case 12:
			sVar0 = "INJURED_FIDGET";
			break;
		case 13:
			sVar0 = "INJURED_WHIMPER";
			break;
		case 14:
			sVar0 = "ATTACK";
			break;
		case 15:
			sVar0 = "GROWL";
			break;
		case 16:
			sVar0 = "HOWL";
			break;
		case 17:
			sVar0 = "BARK_HAPPY";
			break;
	}
	AUDIO::PLAY_ANIMAL_VOCALIZATION(iParam0, sVar0, false);
}

void func_542(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::SET_ENTITY_HEALTH(iParam0, iParam1, 0);
	}
}

void func_543()
{
	float fVar0;
	float fVar1;
	char* sVar2;
	int iVar3;

	if (!func_20(iLocal_501[1], 0, 1))
	{
		return;
	}
	switch (iLocal_629)
	{
		case 0:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_501[1], vLocal_469, fLocal_472, true, false, true);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_501[1], func_669(1), func_122(27), vLocal_469.x, vLocal_469.y, (vLocal_469.z + 0.25f), 0.0f, 0.0f, fLocal_472, 8.0f, -4.0f, -1, 49409, 0.0f, 2, 0, 0);
			iLocal_629 = 1;
			break;
		case 1:
			if (!func_18(iLocal_900, (1 << 26)) && !func_18(iLocal_900, (1 << 27)))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], joaat("SCRIPT_TASK_ANY"), true) != 1 || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], func_669(1), func_122(27), 1))
				{
					if (!func_304(&uLocal_945))
					{
						func_115(&uLocal_945);
						if (func_670(iLocal_501[1], 20.0f))
						{
							iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(3, 5);
						}
						else
						{
							iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(10, 18);
						}
					}
					else if (func_670(iLocal_501[1], 20.0f) && iLocal_904 >= 10)
					{
						iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(3, 5);
					}
					fVar1 = func_119(&uLocal_945);
					fVar0 = func_95(iLocal_501[0], iLocal_501[1], 0, 1);
					if (fVar1 > (float)iLocal_904 || func_670(iLocal_501[1], 20.0f))
					{
						if ((fVar0 > 45.0f && sLocal_128.f_98[1] < 45.0f) || func_670(iLocal_501[1], 12.0f))
						{
							func_138(&uLocal_945);
							iLocal_527 = (MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 5);
							switch (iLocal_527)
							{
								case 0:
									sVar2 = func_122(22);
									break;
								case 1:
									sVar2 = func_122(23);
									break;
								case 2:
									sVar2 = func_122(24);
									break;
								case 3:
									sVar2 = func_122(25);
									break;
								case 4:
									sVar2 = func_122(26);
									break;
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar3);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, func_669(1), sVar2, vLocal_469.x, vLocal_469.y, (vLocal_469.z + 0.25f), 0.0f, 0.0f, fLocal_472, 8.0f, -4.0f, -1, 49408, 0.0f, 2, 0, 0);
							if (iLocal_15 == 0)
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(0, func_669(1), func_122(27), vLocal_469.x, vLocal_469.y, (vLocal_469.z + 0.25f), 0.0f, 0.0f, fLocal_472, 8.0f, -4.0f, -1, 49409, 0.0f, 2, 0, 0);
							}
							func_311(iLocal_501[1], &iVar3, 0, 0, 1, 1);
						}
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[1], joaat("BARK")))
				{
					func_665(1891783641, iLocal_501[1], 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], joaat("SCRIPT_TASK_ANY"), true) != 1 || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], func_669(1), func_122(27), 1))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_501[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_501[1], true, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_501[1], false, false);
					func_90(&iLocal_900, (1 << 27));
					iLocal_629 = 3;
				}
			}
			break;
		case 3:
			break;
	}
}

void func_544()
{
	if (!func_20(iLocal_501[1], 0, 1))
	{
		return;
	}
	switch (iLocal_629)
	{
		case 0:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_501[1], vLocal_469, fLocal_472, true, false, true);
			TASK::TASK_PLAY_ANIM(iLocal_501[1], "amb_creature_mammal@world_dog_sleeping@idle", "idle_c", 1000.0f, -1000.0f, -1, 1, 0.0f, false, 17317919, false, 0, false);
			iLocal_629 = 2;
			break;
		case 2:
			if (func_18(iLocal_900, (1 << 26)))
			{
				iLocal_629 = 3;
			}
			else
			{
				if (!func_304(&uLocal_945))
				{
					func_115(&uLocal_945);
					iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(5, 12);
				}
				if (func_119(&uLocal_945) > (float)iLocal_904)
				{
					if (func_670(iLocal_501[1], 10.0f) || sLocal_128.f_98[1] < 15.0f)
					{
						func_115(&uLocal_945);
						iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(5, 12);
						func_541(iLocal_501[1], 10);
						func_665(249295937, iLocal_501[1], 1);
					}
				}
			}
			break;
		case 3:
			break;
	}
}

void func_545(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(iVar0, true, false);
	TASK::TASK_STAND_STILL(iVar0, -1);
}

int func_546(int iParam0, Vector3 vParam1, float fParam4)
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
	fVar9 = func_671(vVar3, vVar6);
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
	if (func_369(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_547(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = iParam1;
}

bool func_548(int iParam0, int iParam1)
{
	if (func_374(&(iParam0->f_5), 5.0f))
	{
		return true;
	}
	if (func_3(iParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_323(iParam0->f_1) && !func_370(iParam0->f_1, joaat("SCRIPT_TASK_DISMOUNT_ANIMAL"))) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1, true)) && !func_370(iParam0->f_1, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
	{
		return true;
	}
	return false;
}

bool func_549(int iParam0, int iParam1)
{
	var uVar0;

	if (func_374(&(iParam0->f_5), 4.0f))
	{
		return true;
	}
	if (!func_3(iParam0->f_23, (1 << 14)))
	{
		return true;
	}
	if (iParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_672(&uVar0))
	{
		return true;
	}
	return false;
}

int func_550()
{
	int iVar0;

	if (!func_673())
	{
		return 0;
	}
	if (!func_674(&iVar0))
	{
		return 0;
	}
	if (!func_675(iVar0))
	{
		return 0;
	}
	return func_676(iVar0, 0);
}

bool func_551(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_374(&(iParam0->f_5), 4.0f))
	{
		return true;
	}
	if (func_3(iParam0->f_23, 4))
	{
		return true;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0->f_1, &iVar1, true, 1, false);
	if (func_3(iParam0->f_23, (1 << 9)) || (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED")))
	{
		return true;
	}
	return false;
}

int func_552(int iParam0)
{
	int iVar0;

	iVar0 = func_677(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_HOGTIED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_553(int iParam0, int iParam1)
{
	if (func_374(&(iParam0->f_5), 15.0f))
	{
		return true;
	}
	if (func_3(iParam0->f_23, (1 << 12)) && func_370(iParam0->f_1, joaat("SCRIPT_TASK_PICKUP_CARRIABLE_ENTITY")))
	{
		return false;
	}
	if (func_3(iParam0->f_23, 256))
	{
		return true;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_1, joaat("SCRIPT_TASK_PLACE_CARRIED_ENTITY_AT_COORD"), true) == 8)
	{
		return true;
	}
	return false;
}

bool func_554(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_678(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_678(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, bParam5, bParam5, 2.0f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_555(int iParam0, Vector3 vParam1)
{
	Vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	return (vVar0.z - vParam1.z);
}

void func_556()
{
	int iVar0;

	PED::FORCE_PED_MOTION_STATE(iLocal_501[1], joaat("MOTIONSTATE_JOG"), false, 0, false);
	PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_501[1]);
	TASK::_0x2E1D6D87346BB7D2(iLocal_501[1], iLocal_501[0], 0, 0);
	TASK::TASK_CLEAR_LOOK_AT(iLocal_501[1]);
	func_109(iLocal_501[0], 0);
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iLocal_501[1], &sLocal_475);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_SMART_FLEE_PED(0, iLocal_501[0], 10.0f, 2500, 8448, 1.5f, 0);
	TASK::TASK_SMART_FLEE_PED(0, iLocal_501[0], 300.0f, -1, 8448, 2.0f, 0);
	TASK::TASK_WANDER_STANDARD(0, 40000.0f, 0);
	func_311(iLocal_501[1], &iVar0, 0, 0, 1, 1);
}

bool func_557()
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_923))
	{
		if (func_229(Global_35, iLocal_923, 1, 0))
		{
			return true;
		}
	}
	return false;
}

int func_558(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_559(bool bParam0)
{
	if (bParam0)
	{
		func_679(4);
	}
	func_679(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

bool func_560(int iParam0, int iParam1, float fParam2)
{
	return func_644(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_561(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_562(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_563(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_646(iVar0, 2))
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
				func_680(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_564(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_565(var uParam0, int iParam1, Vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	Vector3 vVar0;

	if (uParam0->f_3 == 5)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			func_25();
		}
		if (bParam10)
		{
			uParam0->f_3 = 0;
		}
		return;
	}
	if (uParam0->f_3 > 0 && uParam0->f_3 < 5)
	{
		vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam5, vParam2) /*3*/ };
		if (func_681(uParam0, vVar0, iParam7, iParam6))
		{
			func_25();
			func_138(uParam0);
			uParam0->f_3 = 5;
		}
	}
	switch (uParam0->f_3)
	{
		case 0:
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (func_682(uParam0, iParam1, vParam2, iParam6, iParam7, iParam8, iParam9))
				{
					uParam0->f_3 = 1;
				}
			}
			break;
		case 1:
			func_683(&(uParam0->f_4), *uParam0);
			if (func_586(uParam0) >= iParam7)
			{
				uParam0->f_3 = 2;
			}
			break;
	}
}

bool func_566(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

void func_567(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_568(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_569()
{
	int iVar0;

	iVar0 = func_602();
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

int func_570(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_350() != -1)
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
	fVar1 = func_170(MISC::ABSF(fVar1) < 1.0f, func_170(fVar1 < 0.0f, -1.0f, 1.0f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_571(int iParam0)
{
	if (!func_684(iParam0))
	{
		return false;
	}
	return func_685(iParam0);
}

int func_572(int iParam0, int iParam1, int iParam2)
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

int func_573(int iParam0)
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

int func_574()
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

void func_575(int iParam0, bool bParam1, int iParam2)
{
	func_686((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_687(iParam0);
}

void func_576(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_688(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_577(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_689(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_690(iVar5, &iVar2, &iVar0))
			{
				if (!func_691(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_692(iVar2);
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
							if (func_693(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_569() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_569() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_694();
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

struct<2> /*16*/ func_578(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_579(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_580(int iParam0)
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

int func_581(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_695(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_582(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_696(iParam0))
	{
		return 0;
	}
	if (!func_697())
	{
		return 0;
	}
	if (!func_698(iParam0, &iVar0, &iVar1))
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

void func_583(int iParam0, bool bParam1)
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

bool func_584(var uParam0)
{
	if (!func_699(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_585(var uParam0)
{
	if (!func_584(uParam0))
	{
		return false;
	}
	if (func_700(uParam0->f_7, uParam0->f_8, func_363(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_363(&(uParam0->f_3), 4))
	{
		if (func_701())
		{
			return true;
		}
	}
	return false;
}

int func_586(var uParam0)
{
	if (!func_304(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_348(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_275() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

bool func_587(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return true;
		}
	}
	if (func_702(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, iParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_588(float fParam0, float fParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam0;
	}
	return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam1;
}

bool func_589(Vector3 vParam0, var uParam3)
{
	if (!func_363(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (func_506(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_590(Vector3 vParam0, var uParam3)
{
	float fVar0;

	fVar0 = func_591(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_591(Vector3 vParam0, bool bParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { func_703(0) /*3*/ };
	vVar3 = { func_704(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) /*3*/ };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

float func_592(int iParam0)
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

int func_593(var uParam0, int iParam1, int iParam2)
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
	vVar0 = { func_705(iParam1) /*3*/ };
	vVar3 = { func_705(iParam2) /*3*/ };
	return func_706(uParam0, vVar0, vVar3, iParam2);
}

int func_594(var uParam0, int iParam1, Vector3 vParam2)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_705(iParam1) /*3*/ };
	return func_706(uParam0, vVar0, vParam2, 0);
}

bool func_595(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0.0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_326(iParam0, Global_36, 1);
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

int func_596(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!*uParam1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, 3.0f, 0.55f, -1.0f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, iParam2, 2.0f, 0.2f, -1.0f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		if (bParam3)
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 1.0f, 1.5f);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		}
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		*uParam1 = 1;
	}
	if ((TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), true) == 1 && TASK::GET_SEQUENCE_PROGRESS(iParam0) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), true) != 1)
	{
		return 1;
	}
	return 0;
}

bool func_597(bool bParam0, var uParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam0)
	{
		return func_707(uParam1, sParam4, iParam2, iParam3, iParam7, bParam9, 1, 1);
	}
	return func_29(iParam2, iParam3, sParam4, sParam5, fParam6, iParam7, bParam8, bParam9, iParam10, 0, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
}

void func_598(var uParam0)
{
	int iVar0;

	if (uParam0->f_75 != 0)
	{
		func_600(uParam0->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
	}
	else if (uParam0->f_70 != 0)
	{
		func_601(uParam0->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
	}
	if (func_691(uParam0->f_74, 0))
	{
		func_708(uParam0->f_74, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
	}
	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			iVar0 = (func_709() + uParam0->f_72);
			func_710(iVar0);
		}
		else
		{
			func_711(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		func_121(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
}

bool func_599(var uParam0, char* sParam1, Vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_92(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_563(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, (1 << 30), 0, iParam18, 0, 0);
			func_712(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_713(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, (1 << 30), 0, iParam18, 0);
		}
		else
		{
			if (func_190(vParam2))
			{
				return false;
			}
			*uParam0 = func_714(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, (1 << 30), 0, iParam18, 0);
		}
		if (fParam8 != 0.0f)
		{
			func_653(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_715(1))
			{
				func_655(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_716(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_717(*uParam0, 0))
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				func_655(*uParam0, 0, 1);
			}
		}
		else if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			func_655(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0.0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_715(1))
		{
			func_655(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_92(*uParam0))
			{
				func_93(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_718(*uParam0, 1)) || (bParam17 && func_719(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0.0f)
			{
				func_720(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0.0f)
			{
				func_600(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
			}
		}
		func_93(uParam0, 1, 1);
		return true;
	}
	return false;
}

void func_600(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_721(iParam0, sParam4, iParam5);
	}
	func_722(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_601(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_723(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_721(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_722(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

int func_602()
{
	return Global_40.f_11095.f_35;
}

bool func_603(int iParam0, bool bParam1)
{
	switch (func_724(iParam0))
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

void func_604()
{
	func_725(23);
}

void func_605(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

int func_606(var uParam0)
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

void func_607(int iParam0)
{
	int iVar0;

	iVar0 = func_726(iParam0);
	if (iVar0 != 0)
	{
		func_727(-1, 24, 0, iVar0);
	}
}

void func_608(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_579(func_578(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_71(iParam0, 2))
	{
		func_728(iParam0, func_429(iParam3));
	}
	if (func_71(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_5();
		}
		func_729(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_82(iParam0, (1 << 16)))
	{
		func_730(iParam0, iParam1);
		func_731(iParam0, func_185(iParam0, iParam1));
		func_605(128);
	}
	func_432(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216 /* Float: 1f */, 0, 0);
	func_433(iParam0, 1);
	if (!bParam2)
	{
		func_605(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_732((1 << 19));
	}
	if (func_733(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_733(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_609(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_734(&Global_0, 8);
	}
	if (!func_697() || func_350() != -1)
	{
		return;
	}
	func_734(&Global_0, 1);
}

int func_610(int iParam0, bool bParam1)
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

void func_611(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

bool func_612(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_190(vParam0))
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

bool func_613(Vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_190(vParam0))
	{
		return false;
	}
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, fParam3, iParam5, iParam4, (1 << 14));
}

bool func_614(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_190(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_153(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500.0f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_615()
{
	int iVar0;
	int iVar1;

	iVar0 = func_735(func_2());
	if (iVar0 == 8)
	{
		iVar1 = func_245(func_2());
		if (func_247(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_736(func_623(0)))
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

float func_616(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_617(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_618(int iParam0)
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

void func_619(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_738(iParam0, iParam1))
		{
			if (func_739(iParam0, iParam1))
			{
				if (func_740(iParam0, iParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_741(iParam0);
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

void func_620(int iParam0, int iParam1, bool bParam2)
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

void func_621(int iParam0, bool bParam1)
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

void func_622(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 0.0f);
	}
	else
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 1.0f);
	}
}

int func_623(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_742(1, 0, 0);
	}
	else
	{
		iVar0 = func_2();
	}
	return func_624(iVar0);
}

int func_624(int iParam0)
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

int func_625(int iParam0)
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

int func_626(int iParam0, int iParam1)
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

void func_627(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_406(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_395(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == (1 << 24))
			{
				if (func_743(iVar0) < func_744(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_432(iVar0, iParam1, 1.0f, iVar1 | iParam2, bParam3);
		}
		iVar0++;
	}
}

bool func_628(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_745(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

void func_629(int iParam0)
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

void func_630(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_631()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_746(iVar0, 128))
		{
			func_747(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_632()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_746(iVar0, 128) && func_746(iVar0, 1))
		{
			func_747(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_633(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000.0f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_634()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_71(iVar0, (1 << 24)))
		{
			if (!func_748(iVar0))
			{
				func_749(iVar0, (1 << 12));
			}
		}
		iVar0++;
	}
}

void func_635(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_396(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_396(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_396(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_396(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_396(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_396(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_396(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_636(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_349();
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

int func_637(int iParam0)
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

int func_638(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_639()
{
	if (func_750())
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

void func_640(var uParam0, var uParam1)
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

int func_641(int iParam0)
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

void func_642(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_154(iParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_81(iParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_643(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_644(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

bool func_645(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_646(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

void func_647(int iParam0)
{
	if ((*iParam0 & 1) != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

int func_648(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_647(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = (iParam8 & 32) != false;
		bVar4 = (iParam8 & (1 << 19)) != false;
		bVar5 = (iParam8 & (1 << 24)) != false;
		bVar6 = (iParam8 & (1 << 24)) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_170(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_115(&(iParam1->f_13));
		}
		if (func_751(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_752(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_648(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_163(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!(iParam8 & (1 << 25)) != 0)
				{
					if ((iParam8 & 18) != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317 /*PCF_0x8E385F10*/, true))
						{
							func_753(*uParam0, 1, 1);
						}
					}
					else if (func_754(iParam1, 22))
					{
						func_753(*uParam0, 0, 1);
					}
				}
				if (func_755(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_756(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_757(iParam8);
					if (func_758(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_759(uParam3);
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
					func_760(iParam1, uParam3, fVar8);
					if (func_761(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_45(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_762(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_755(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_763(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_758(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_756(uParam0, func_755(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_757(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_45(uParam3, 0, 0, 1, 1);
					}
					func_764(iParam1, 1);
				}
				func_760(iParam1, uParam3, fVar8);
				if (func_762(uParam0, iParam1, fParam4, bVar6))
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
			func_164(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_649(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_765(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_29(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
}

bool func_650(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_350() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_651(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_766(iParam0, &iVar0, &iVar1);
	if (!func_767(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_768(iVar0, iVar1);
}

bool func_652(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_653(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_288(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_654(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_288(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_655(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_288(iParam0);
	if (bParam1)
	{
		func_769(iParam0, 4);
		func_770(iVar0, 1);
		func_771(iVar0, 1);
	}
	else
	{
		func_772(iParam0, 4);
		func_771(iVar0, 0);
	}
}

void func_656(int* iParam0, char* sParam1)
{
	if (func_92(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_654(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_659(iParam0, 1);
}

bool func_657(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_658(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_659(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_660(int iParam0)
{
	int iVar0;

	if (func_661(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_661(int iParam0)
{
	return iParam0 != 0;
}

bool func_662(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_92(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_717(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_663(int iParam0, int iParam1, int iParam2)
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

float func_664(var uParam0)
{
	if (!func_304(uParam0))
	{
		return 0.0f;
	}
	if (func_348(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_349() - uParam0->f_1);
}

void func_665(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam0, iParam1);
}

int func_666(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam2, iVar0, 2);
	if (iVar6 >= iParam3)
	{
	}
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			iVar3 = iVar1;
			if (!func_773(iVar3, uParam1))
			{
				(*uParam0)[iVar4] = iVar3;
				iVar4++;
			}
		}
		if (iVar4 >= iParam3)
		{
		}
		else
		{
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_667(int iParam0)
{
	if (func_20(iParam0, 0, 1))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

void func_668(int* iParam0, int iParam1)
{
	if (!func_657(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_658(iParam0, 14);
		}
	}
}

char* func_669(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "script_re@lost_dog";
			break;
		case 2:
			sVar0 = "amb_creature_mammal@world_squirrel_eating@idle0";
			break;
		case 1:
			sVar0 = "script_re@lost_dog@dog@squirrel";
			break;
	}
	return sVar0;
}

bool func_670(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_341(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

float func_671(Vector3 vParam0, Vector3 vParam3)
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

bool func_672(int iParam0)
{
	if (joaat("MASK_UP") == func_774(joaat("CI_CATEGORY_WARDROBE_MASK")))
	{
		if (func_674(iParam0))
		{
			return true;
		}
	}
	else if (func_775(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), iParam0))
	{
		if (func_674(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_673()
{
	return Global_1946054.f_2792;
}

bool func_674(int iParam0)
{
	if (func_775(joaat("CI_CATEGORY_WARDROBE_MASK"), iParam0))
	{
		return true;
	}
	if (func_775(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), iParam0))
	{
		return true;
	}
	return false;
}

bool func_675(int iParam0)
{
	if (func_776())
	{
		return false;
	}
	if (!func_691(iParam0, 0))
	{
		return false;
	}
	if (!func_777(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_676(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_778(iParam0);
	if (func_779(iParam0, joaat("CI_TAG_ITEM_MASK")))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_672(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_780();
			}
			else
			{
				iVar0 = func_781();
			}
		}
		else if (func_18(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_782();
		}
		else
		{
			iVar0 = func_783();
		}
	}
	else if (func_674(&iVar2))
	{
		if (func_779(iVar2, joaat("CI_TAG_ITEM_MASK")))
		{
			iVar0 = func_780();
		}
		else
		{
			iVar0 = func_781();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_782();
	}
	else
	{
		iVar0 = func_783();
	}
	if (iVar0 != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1.0f);
		return 1;
	}
	return 0;
}

int func_677(int iParam0)
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
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

float func_678(float fParam0)
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

void func_679(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

void func_680(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_770(iParam0, 1);
	func_771(iParam0, 1);
	func_772(iParam0, 128);
}

bool func_681(var uParam0, Vector3 vParam1, int iParam4, int iParam5)
{
	if (func_190(vParam1))
	{
		return true;
	}
	if (!func_699(*uParam0, iParam4))
	{
		return false;
	}
	if (func_700(1092616192 /* Float: 10f */, 1085276160 /* Float: 5.5f */, 0))
	{
		return true;
	}
	if (func_784(uParam0))
	{
		return true;
	}
	if (uParam0->f_4 == 2)
	{
		if (iParam5 == -1)
		{
			iParam5 = 2000;
		}
		if (func_586(uParam0) >= (iParam5 + iParam4))
		{
			return true;
		}
	}
	else if (uParam0->f_4 == 1)
	{
		if (!func_785(uParam0->f_5, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_682(var uParam0, int iParam1, Vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!func_92(uParam0->f_5))
	{
		return false;
	}
	if (func_785(uParam0->f_5, 1))
	{
		func_786(uParam0, 1);
		uParam0->f_6 = func_787(uParam0->f_5, 1);
		uParam0->f_7 = func_788(uParam0->f_5, 1);
		if (bParam8)
		{
			func_93(&(uParam0->f_5), 1, 1);
		}
		CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, vParam2, true, iParam5, iParam6, iParam7, 0);
		CAM::SET_GAMEPLAY_HINT_FOV(30.0f);
		return true;
	}
	return false;
}

void func_683(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (*uParam0 == 0)
	{
		if (func_586(&uParam1) < 500)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, joaat("INPUT_FOCUS_CAM")))
			{
				*uParam0 = 2;
			}
		}
		else if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
		{
			*uParam0 = 1;
		}
	}
}

bool func_684(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_685(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_686(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_789(bParam1);
	}
}

void func_687(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_688(int iParam0)
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

bool func_689(int iParam0)
{
	Vector3 vVar0;

	if (!func_790(23, &vVar0))
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

bool func_690(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_790(23, &sVar0))
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

bool func_691(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_692(int iParam0)
{
	return iParam0;
}

int func_693(int iParam0)
{
	Vector3 vVar0;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_694()
{
	int iVar0;

	iVar0 = func_569();
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

void func_695(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_696(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_697()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_698(int iParam0, int iParam1, int iParam2)
{
	if (!func_696(iParam0))
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

bool func_699(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (!func_304(&uParam0))
	{
		return false;
	}
	if (func_586(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_700(float fParam0, float fParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	func_791(&uVar0, &uVar1, &iVar2, &iVar3, joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_588(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_701()
{
	if (((((((((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT") /* GXTEntry: "Sprint" */) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_VEH_ACCELERATE") /* GXTEntry: "Accelerate" */)) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_VEH_CAR_ACCELERATE"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_SPRINT"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_ATTACK") /* GXTEntry: "Melee attack" */)) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_JUMP") /* GXTEntry: "Jump" */)) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_JUMP"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_BLOCK") /* GXTEntry: "Melee dodge" */)) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_RELOAD") /* GXTEntry: "Reload" */)) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ENTER") /* GXTEntry: "Enter vehicle" */)) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_DYNAMIC_SCENARIO"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_EXIT")))
	{
		return true;
	}
	return false;
}

bool func_702(Vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	float fVar0;

	fVar0 = func_326(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && bParam5)
	{
		return true;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return true;
	}
	return false;
}

Vector3 func_703(int iParam0)
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
	return func_704((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_704(Vector3 vParam0)
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

Vector3 func_705(int iParam0)
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
			vVar0.f_2 = func_792(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_190(vVar0))
	{
	}
	return vVar0;
}

int func_706(var uParam0, Vector3 vParam1, Vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			func_793(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

int func_707(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	Vector3 vVar0[24];
	int iVar3;

	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (func_95(iParam2, iParam3, 1, 1) < 70.0f || bParam5))
	{
		strcpy_s(&cVar0, 24, sParam1);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_95(iParam2, iParam3, 1, 1) < 25.0f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_115(&uLocal_0);
		if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam1))
		{
			if (func_794(sParam1))
			{
				return 1;
			}
		}
		else if (func_795(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_708(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (!func_796(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_797(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_798(iParam0, bParam2);
	iVar2 = 0;
	if (func_799(iParam0, 0, 0) == 0)
	{
		if (func_800(iParam0))
		{
			iVar5 = func_801(iParam0);
			iVar6 = func_802(iVar5);
			iVar7 = func_803(iVar6) + 1;
			func_804(iVar5);
			if (func_805(38))
			{
				func_651(483, 0);
			}
			else
			{
				func_651(482, 0);
			}
			if (iVar7 == func_806(iVar6))
			{
				func_708(func_807(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_697() && func_808(4))
				{
					if (func_697() && (func_809(38) || func_805(38)))
					{
						func_811(38, func_807(iVar6), 0, 0, func_810(), 0, -1, 0);
						func_812(2);
					}
					else
					{
						func_811(38, func_807(iVar6), 0, 0, func_810(), 0, -1, 0);
						func_812(1);
					}
				}
			}
			else if (func_697() && func_808(4))
			{
				if (func_697() && (func_809(38) || func_805(38)))
				{
					func_811(38, 0, 0, 0, func_810(), 0, -1, 0);
					func_812(2);
				}
				else
				{
					func_811(38, 0, 0, 0, func_810(), 0, -1, 0);
					func_812(1);
				}
			}
			if (func_697() && func_808(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_697() && (func_809(38) || func_805(38)))
					{
						func_813(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), iVar6), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_813(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_693(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_779(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && !func_779(iParam0, joaat("CI_TAG_ITEM_UPGRADE"))) && !func_779(iParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			bVar3 = true;
		}
	}
	if (func_814(iParam0, (1 << 23)) && !func_571(28))
	{
		func_815(28);
	}
	if (!bVar3)
	{
		if (func_779(iParam0, joaat("CI_TAG_ITEM_THROWN")))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_816(iParam0) == joaat("CI_CATEGORY_AMMO"))
			{
				iVar1 = func_818(func_817(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_350() == -1)
					{
						func_819(iVar1);
					}
					if (func_820(0) && func_821(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_822(iParam0, iVar0, iParam5);
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
					if (func_350() == -1)
					{
						func_819(iParam0);
					}
					if (func_820(0) && func_821(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_822(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_693(iParam0) == joaat("WEAPON"))
		{
			if (!func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_693(iParam0) == joaat("AMMO") && func_824(iParam0))
		{
			if (!func_825(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_TALISMAN")))
		{
			func_826(iParam0);
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_TRINKET")))
		{
			func_827(iParam0);
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_ANIMAL_CLAW")))
		{
			func_579(func_828(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_579(func_829(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_VALUABLE")) && !func_779(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_603(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_651(498, 0);
				}
			}
			if (func_779(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_779(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
			{
				func_830(iParam0);
			}
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_CANNED")))
		{
			if (func_779(iParam0, joaat("CI_TAG_ITEM_FRUIT")))
			{
			}
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_USED")) && func_779(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			func_651(484, 0);
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")) && func_779(iParam0, joaat("CI_TAG_ITEM_SNACK")))
		{
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_CONFECTIONARY")))
		{
		}
		else if (func_779(iParam0, 589988438))
		{
			if (func_831())
			{
				func_601(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_LETTER_INVITATION")) && func_779(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_832(iParam0);
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_DINO_BONES")))
		{
			func_833(iParam0);
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_ROCK_CARVINGS")))
		{
			func_834(iParam0);
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_779(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_835(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_TREASURE_HUNTER_MAP")))
		{
			func_836();
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_837(iParam0, iParam1);
			func_838(iParam0);
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_779(iParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_839(iParam0, 0, 0, 0);
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_779(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
		{
			func_830(iParam0);
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_MONEY")))
		{
			if (func_350() != -1)
			{
				return 0;
			}
			func_840(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_FISHING_LURE")))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE") /* GXTEntry: "Special Lake Lure" */:
					if (!func_777(joaat("DOCUMENT_PAMPHLET_SPECIAL_LAKE_LURE") /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_708(joaat("DOCUMENT_PAMPHLET_SPECIAL_LAKE_LURE") /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER") /* GXTEntry: "Special River Lure" */:
					if (!func_777(joaat("DOCUMENT_PAMPHLET_SPECIAL_RIVER_LURE") /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_708(joaat("DOCUMENT_PAMPHLET_SPECIAL_RIVER_LURE") /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP") /* GXTEntry: "Special Swamp Lure" */:
					if (!func_777(joaat("DOCUMENT_PAMPHLET_SPECIAL_SWAMP_LURE") /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_708(joaat("DOCUMENT_PAMPHLET_SPECIAL_SWAMP_LURE") /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE") /* GXTEntry: "Lake Lure" */:
					if (!func_777(joaat("DOCUMENT_PAMPHLET_LAKE_LURE") /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_708(joaat("DOCUMENT_PAMPHLET_LAKE_LURE") /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER") /* GXTEntry: "River Lure" */:
					if (!func_777(joaat("DOCUMENT_PAMPHLET_RIVER_LURE") /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_708(joaat("DOCUMENT_PAMPHLET_RIVER_LURE") /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP") /* GXTEntry: "Swamp Lure" */:
					if (!func_777(joaat("DOCUMENT_PAMPHLET_SWAMP_LURE") /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_708(joaat("DOCUMENT_PAMPHLET_SWAMP_LURE") /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")) && func_814(iParam0, 4))
		{
			if (!func_805(42))
			{
				func_841(iParam0);
			}
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
		{
			func_842(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1") /* GXTEntry: "Legend of the East Satchel" */:
					iVar8 = joaat("KIT_POUCH_LEGENDARY"); /* GXTEntry: "Legend of the East Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1") /* GXTEntry: "Tonics Satchel" */:
					iVar8 = joaat("KIT_POUCH_REMEDIES"); /* GXTEntry: "Tonics Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1") /* GXTEntry: "Ingredients Satchel" */:
					iVar8 = joaat("KIT_POUCH_INGREDIENTS"); /* GXTEntry: "Ingredients Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1") /* GXTEntry: "Kit Satchel" */:
					iVar8 = joaat("KIT_POUCH_KIT"); /* GXTEntry: "Kit Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1") /* GXTEntry: "Provisions Satchel" */:
					iVar8 = joaat("KIT_POUCH_PROVISIONS"); /* GXTEntry: "Provisions Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1") /* GXTEntry: "Materials Satchel" */:
					iVar8 = joaat("KIT_POUCH_MATERIALS"); /* GXTEntry: "Materials Satchel" */
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1") /* GXTEntry: "Valuables Satchel" */:
					iVar8 = joaat("KIT_POUCH_VALUABLES"); /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (iVar8 != 0)
			{
				func_708(iVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE") /* GXTEntry: "Bundle of Arrows" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE") /* GXTEntry: "Poison Throwing Knives" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN") /* GXTEntry: "Live Crickets" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN") /* GXTEntry: "Live Worms" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02") /* GXTEntry: "Jewelry" */:
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER") /* GXTEntry: "Upgraded Off-Hand Holster" */:
				func_815(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_843(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER") /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_844(&iVar9, 0))
				{
					func_821(iVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER") /* GXTEntry: "Upgraded Bandolier" */:
				if (func_350() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_843(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER") /* GXTEntry: "Upgraded Bandolier" */, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS") /* GXTEntry: "Binoculars" */:
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT") /* GXTEntry: "The Legend Of The East" */:
				func_651(415, 0);
				Global_40.f_11095.f_60 += 0.1f;
				func_845();
				Global_40.f_11095.f_61 += 0.1f;
				func_846();
				Global_40.f_11095.f_55 += 0.1f;
				Global_40.f_11095.f_57 += 0.1f;
				Global_40.f_11095.f_56 += 0.1f;
				Global_40.f_11095.f_58 += 0.5f;
				func_847();
				Global_40.f_11095.f_63 += 0.1f;
				func_848();
				Global_40.f_11095.f_49 += 0.1f;
				Global_40.f_11095.f_50 += 0.1f;
				Global_40.f_11095.f_51 += 0.1f;
				func_849();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED") /* GXTEntry: "Map" */:
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01") /* GXTEntry: "Jack Hall Gang Map 1" */:
				func_850(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_851(499813453, 0);
				func_852(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02") /* GXTEntry: "Jack Hall Gang Map 2" */:
				func_850(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_851(499813453, 0);
				func_852(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03") /* GXTEntry: "Jack Hall Gang Map 3" */:
				func_850(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_851(499813453, 0);
				func_852(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04") /* GXTEntry: "High Stakes Treasure Map 1" */:
				func_850(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_851(666607663, 0);
				func_853(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05") /* GXTEntry: "High Stakes Treasure Map 2" */:
				func_850(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_851(666607663, 0);
				func_853(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06") /* GXTEntry: "High Stakes Treasure Map 3" */:
				func_850(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_851(666607663, 0);
				func_853(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07") /* GXTEntry: "The Poisonous Trail Map 1" */:
				func_850(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_851(-220219788, 0);
				func_854(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08") /* GXTEntry: "The Poisonous Trail Map 2" */:
				func_850(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_851(-220219788, 0);
				func_854(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09") /* GXTEntry: "The Poisonous Trail Map 3" */:
				func_850(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_851(-220219788, 0);
				func_854(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10") /* GXTEntry: "Le Tresor des Morts Map 1" */:
				func_850(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_851(218622660, 0);
				func_855(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11") /* GXTEntry: "Le Tresor des Morts Riddle Note" */:
				func_850(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_851(218622660, 0);
				func_855(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13") /* GXTEntry: "The Elemental Trail Map 1" */:
				func_850(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_851(390004462, 0);
				func_856(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14") /* GXTEntry: "The Elemental Trail Map 2" */:
				func_850(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_851(390004462, 0);
				func_856(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15") /* GXTEntry: "The Elemental Trail Map 3" */:
				func_850(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_851(390004462, 0);
				func_856(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16") /* GXTEntry: "Landmarks of Riches Map 1" */:
				func_850(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_851(6410548, 0);
				func_857(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17") /* GXTEntry: "Landmarks of Riches Map 2" */:
				func_850(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_851(6410548, 0);
				func_857(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18") /* GXTEntry: "Landmarks of Riches Map 3" */:
				func_850(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_851(6410548, 0);
				func_857(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19") /* GXTEntry: "Landmarks of Riches Map 4" */:
				func_850(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_851(6410548, 0);
				func_857(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM") /* GXTEntry: "Aged Pirate Rum" */:
				func_859(242, func_858(joaat("CONSUMABLE_AGED_PIRATE_RUM") /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER") /* GXTEntry: "Ginseng Elixir" */:
				func_859(240, func_858(joaat("CONSUMABLE_GINSENG_ELIXIER") /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT") /* GXTEntry: "Valerian Root" */:
				func_859(241, func_858(joaat("CONSUMABLE_VALERIAN_ROOT") /* GXTEntry: "Valerian Root" */), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED") /* GXTEntry: "Special Health Cure" */:
			case joaat("CONSUMABLE_POTENT_MEDICINE") /* GXTEntry: "Potent Health Cure" */:
			case joaat("CONSUMABLE_MEDICINE") /* GXTEntry: "Health Cure" */:
			case joaat("CONSUMABLE_MOONSHINE") /* GXTEntry: "Moonshine" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_860(594, joaat("TF_FORTIFY_TANK1") /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE") /* GXTEntry: "Potent Bitters" */:
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED") /* GXTEntry: "Opened Cocaine Gum" */:
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM") /* GXTEntry: "Cocaine Gum" */:
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED") /* GXTEntry: "Special Bitters" */:
			case joaat("CONSUMABLE_RESTORATIVE") /* GXTEntry: "Bitters" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_860(594, joaat("TF_FORTIFY_TANK2") /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL") /* GXTEntry: "Snake Oil" */:
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL") /* GXTEntry: "Potent Snake Oil" */:
			case joaat("CONSUMABLE_CHEWING_TOBACCO") /* GXTEntry: "Chewing Tobacco" */:
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED") /* GXTEntry: "Special Snake Oil" */:
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED") /* GXTEntry: "Opened Chewing Tobacco" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_860(594, joaat("TF_FORTIFY_TANK3") /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED") /* GXTEntry: "Special Miracle Tonic" */:
			case joaat("CONSUMABLE_TONIC") /* GXTEntry: "Miracle Tonic" */:
			case joaat("CONSUMABLE_POTENT_TONIC") /* GXTEntry: "Potent Miracle Tonic" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_860(594, joaat("TF_FORTIFY_TANK4") /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART") /* GXTEntry: "Lamb Heart" */:
			case joaat("CONSUMABLE_MEAL_PRIME_RIB") /* GXTEntry: "Prime Rib" */:
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH") /* GXTEntry: "High Quality Beef Stew" */:
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL") /* GXTEntry: "Regional Beef Stew" */:
			case joaat("CONSUMABLE_MEAL_CONSOMME") /* GXTEntry: "Consomme" */:
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH") /* GXTEntry: "Fried Catfish" */:
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN") /* GXTEntry: "Prairie Chicken" */:
			case joaat("CONSUMABLE_MEAL_LAMB_FRY") /* GXTEntry: "Lamb Fry" */:
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW") /* GXTEntry: "Oyster Stew" */:
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP") /* GXTEntry: "Turtle Soup" */:
			case joaat("CONSUMABLE_MEAL_OATMEAL") /* GXTEntry: "Oatmeal" */:
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH") /* GXTEntry: "Corned Beef Hash" */:
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF") /* GXTEntry: "Roast Beef" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_860(595, joaat("TF_FORTIFY_CORE1") /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS") /* GXTEntry: "High Quality Beef and Eggs Stew" */:
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS") /* GXTEntry: "Regional Beef and Eggs Stew" */:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_860(595, joaat("TF_FORTIFY_CORE2") /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC") /* GXTEntry: "Hair Tonic" */:
				func_651(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE") /* GXTEntry: "Hair Pomade" */:
				func_651(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX") /* GXTEntry: "Premium Cigarettes" */:
				func_651(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 3) == 0)
				{
					func_708(func_861(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_708(func_862(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG") /* GXTEntry: "Ground Coffee" */:
				if (func_571(1))
				{
					func_651(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL") /* GXTEntry: "Gun Oil" */:
				func_651(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE") /* GXTEntry: "Mortar and Pestle" */:
				if (func_350() == -1)
				{
					iParam0 = joaat("UPGRADE_UPG_MORTAR_PESTLE_SP"); /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT") /* GXTEntry: "Coffee Percolator" */:
				func_651(496, 0);
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
		func_863(&iVar10);
		if (!func_864(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_820(0))
		{
			return 1;
		}
		if (func_693(iParam0) == joaat("CLOTHING"))
		{
			func_865(iParam0);
		}
		if (func_779(iParam0, joaat("CI_TAG_ITEM_UPGRADE")))
		{
			func_866(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_820(0))
		{
			sVar11.f_1 = 10;
			sVar11.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, iVar2, &sVar11, 0);
			iVar34 = 0;
			while (iVar34 < sVar11.f_0)
			{
				func_708(sVar11.f_1[iVar34], sVar11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_867(iVar2, 0);
		}
	}
	sVar35 = { func_868(iParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&sVar35, iVar0);
	}
	func_869(iParam0);
	if (fParam6 > 0.0f)
	{
		if (func_779(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
		{
			func_870(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_871(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_709()
{
	if (func_350() != -1)
	{
		return 0;
	}
	return func_872(joaat("FAME"));
}

void func_710(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (func_350() != -1)
	{
		return;
	}
	if (iParam0 > 3000 || iParam0 < 0)
	{
		return;
	}
	else
	{
		sVar0 = { func_578(joaat("FAME")) /*2*/ };
		STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
	}
}

void func_711(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_350() != -1)
	{
		return;
	}
	if (func_672(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_873())
	{
		iVar1 = 0;
	}
	func_874(iParam0, iVar1);
}

void func_712(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_92(iParam0))
	{
		return;
	}
	if (fParam1 <= 0.0f)
	{
		return;
	}
	iVar0 = func_288(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945188[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(Global_1945188[iVar0 /*18*/].f_3, fParam1);
}

int func_713(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, bool bParam13)
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
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_646(iVar0, 2))
		{
			if (iParam2 == Global_1945188[iVar0 /*18*/].f_10 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_680(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0.0f, 0.0f, 0.0f, 0.0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, fParam10, fParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_714(char* sParam0, int iParam1, Vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_190(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0.0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_646(iVar0, 2))
		{
			if (func_416(vParam2, Global_1945188[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_680(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_715(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_716(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_288(iParam0);
	func_770(iVar0, bParam1);
}

bool func_717(int iParam0, bool bParam1)
{
	if (bParam1 && !func_92(iParam0))
	{
		return false;
	}
	return !func_646(iParam0, 4);
}

bool func_718(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_92(iParam0))
	{
		return false;
	}
	iVar0 = func_288(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_719(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_92(iParam0))
	{
		return false;
	}
	iVar0 = func_288(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_720(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_875(iParam0);
	if (bParam3)
	{
		func_876(iParam0, sParam1, iParam2);
	}
}

void func_721(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN" /* GXTEntry: "~1$~" */;
	}
	func_581(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_722(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_877())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_581(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN" /* GXTEntry: "Total Take ~1$~" */, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_878(iVar0);
			func_879(iVar0, 0, 0);
		}
		func_581(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN" /* GXTEntry: "Your Share ~1$~" */, iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_579(func_578(joaat("CAREER_CASH")), iVar1);
	}
}

int func_723(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_777(joaat("PROVISION_TRINKET_ELK_ANTLER") /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
	{
		fVar0 += 0.1f;
	}
	sVar1.f_1 = 10;
	sVar1.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_35, true, true, iParam0, &sVar1, 0);
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
			if (func_691(iVar25, 0) && func_779(iVar25, joaat("CI_TAG_ITEM_MONEY")))
			{
				return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_724(int iParam0)
{
	if (!func_463(iParam0))
	{
		return -1;
	}
	return func_880(iParam0);
}

void func_725(int iParam0)
{
	int iVar0;

	if (func_350() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_91(func_881(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_881(iVar0), func_398(), true))
			{
				func_882(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_726(int iParam0)
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

void func_727(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_883() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_883();
					}
					func_884(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_154(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_728(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_625(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_626(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_729(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_82(iParam0, (1 << 13)))
	{
		iVar0 = func_626(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_730(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_402(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_731(int iParam0, Vector3 vParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_71(iParam0, (1 << 9)))
	{
		vParam1 = { Global_36 /*3*/ };
	}
	if (func_190(vParam1))
	{
		return;
	}
	if (!func_161(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] /*3*/ };
		if (func_190(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_416(vVar2, vParam1, 1.0f, 1))
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

void func_732(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_749(iVar0, iParam0);
		iVar0++;
	}
}

int func_733(int iParam0)
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

void func_734(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

int func_735(int iParam0)
{
	if (!func_468(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_736(int iParam0)
{
	return (Global_1310750.f_16074 & iParam0) != 0;
}

bool func_737()
{
	return (Global_1894899 & 2) != 0;
}

bool func_738(int iParam0, int iParam1)
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

bool func_739(int iParam0, int iParam1)
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

bool func_740(int iParam0, int iParam1)
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
	if (!func_738(iParam0, iVar0))
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

void func_741(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_742(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_885(iVar2))
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

int func_743(int iParam0)
{
	if (func_161(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_744(int iParam0)
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

int func_745(int iParam0, int iParam1)
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
		case joaat("WS_GUARMA_WATER"):
			return 189;
		case joaat("WS_NO_OIL_DELIVERY_WAGONS"):
			return 312;
		case joaat("WS_GRAVE_LENNY"):
			return 296;
		case joaat("WS_MP_HIDEOUT_LAKE_SHORE"):
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
		case joaat("WS_MP_HIDEOUT_BRANDYWINE"):
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

bool func_746(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 & iParam1) != 0;
}

void func_747(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

bool func_748(int iParam0)
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

void func_749(int iParam0, int iParam1)
{
	if (!func_161(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 -= (Global_1310750[iParam0 /*111*/].f_1 & iParam1);
}

bool func_750()
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

bool func_751(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_886(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, true);
				func_45(uParam2, 0, 0, 1, 0);
				func_81(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_887(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130 /*PCF_DisableTalkTo*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315 /*PCF_0xD38AEF95*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297 /*PCF_ForceInteractionLockonOnTargetPed*/, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			func_154(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_752(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		func_387(iParam1, uParam2, 0);
		iVar5 = func_888(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178 /*PCF_AllowNonTempExceptionEvents*/, false);
			return true;
		}
		func_45(uParam2, 0, 0, 1, 0);
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
		if (func_754(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_754(iParam1, 26))
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
				iParam6 = func_889(uParam0);
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
				iVar8 = func_890(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_891(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_754(iParam1, 23))
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
				func_753(*uParam0, 1, 1);
			}
			else
			{
				func_753(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_753(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317 /*PCF_0x8E385F10*/, bParam1);
	}
}

bool func_754(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_755(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_892(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_756(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_893(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_757(int iParam0)
{
	if (func_3(iParam0, 4))
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
	if (func_3(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD") /* GXTEntry: "Reload" */, false);
	}
	if (func_3(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK") /* GXTEntry: "Melee attack" */, false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_758(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_715(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = (iParam10 & 128) != false;
	bVar7 = (iParam10 & 64) != false;
	bVar8 = (iParam10 & (1 << 9)) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_894(Global_35)) || func_895(Global_35)) || func_896(Global_35));
	fVar12 = -1.0f;
	if (func_304(&(iParam1->f_13)))
	{
		fVar12 = func_119(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_92((uParam4[iVar0 /*17*/])->f_6);
		func_897(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_898(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_899(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_45(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_900(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_387(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_901(iParam1, fParam6, iParam1->f_9))
					{
						func_115(&(iParam1->f_18));
						if (bVar6)
						{
							func_900(uParam4, 0, 0);
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
		func_902(iParam1, fParam2);
	}
	return bVar5;
}

void func_759(var uParam0)
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

void func_760(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_903(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_902(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_761(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_904(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_905(iParam1, 0);
				func_387(iParam1, uParam2, func_754(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_762(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_115(&(iParam1->f_18));
			return false;
		}
		else if (func_304(&(iParam1->f_18)))
		{
			func_138(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_304(&(iParam1->f_18)))
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
	return func_374(&(iParam1->f_18), fParam2);
	return true;
}

void func_763(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_897(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_764(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_765(int* iParam0)
{
	if (func_754(iParam0, 0))
	{
		if (func_906(iParam0))
		{
			func_764(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_766(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_767(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_907(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_908(iParam0))
	{
		return false;
	}
	if (func_909(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_910(iParam0, 1)) || func_911((1 << 15)))
	{
		if (!func_910(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_912())
	{
		return false;
	}
	return true;
}

void func_768(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_769(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_770(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_646(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_771(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_772(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

bool func_773(int iParam0, var uParam1)
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

int func_774(int iParam0)
{
	int iVar0;

	iVar0 = func_914(func_913(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_775(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_914(func_913(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_816(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_776()
{
	if (Global_1946054.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946054.f_2791)) < 1250)
	{
		return true;
	}
	if (func_915())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	return false;
}

bool func_777(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_691(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_693(iParam0);
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
		if (!func_916(iParam0, 1))
		{
			return false;
		}
	}
	return func_799(iParam0, 0, bParam2) >= iParam1;
}

int func_778(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_674(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_779(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, joaat("TAG_ITEM_PROPERTY")))
	{
		return true;
	}
	return false;
}

int func_780()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_917())
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

int func_781()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_917())
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

int func_782()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_917())
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

int func_783()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_917())
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

bool func_784(var uParam0)
{
	float fVar0;

	if (uParam0->f_6 > 0.0f)
	{
		fVar0 = func_326(Global_35, func_918(uParam0->f_5), 1);
		if (fVar0 > (uParam0->f_6 + 0.5f))
		{
			return true;
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_7, true, 0))
	{
		return true;
	}
	return false;
}

bool func_785(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_92(iParam0))
	{
		return false;
	}
	iVar0 = func_288(iParam0);
	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, Global_1945188[iVar0 /*18*/].f_4);
	}
	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1945188[iVar0 /*18*/].f_3);
}

void func_786(var uParam0, bool bParam1)
{
	if (bParam1 || !func_304(uParam0))
	{
		func_115(uParam0);
	}
}

float func_787(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_92(iParam0))
	{
		return -1.0f;
	}
	iVar0 = func_288(iParam0);
	return Global_1945188[iVar0 /*18*/].f_9;
}

int func_788(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_92(iParam0))
	{
		return 0;
	}
	iVar0 = func_288(iParam0);
	return Global_1945188[iVar0 /*18*/].f_10;
}

void func_789(bool bParam0)
{
	func_919(bParam0);
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

bool func_790(int iParam0, var uParam1)
{
	if (!func_920(iParam0))
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

void func_791(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127.0f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127.0f));
	*iParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127.0f));
	*iParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127.0f));
}

float func_792(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_793(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_794(char* sParam0)
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}
	return false;
}

bool func_795(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_921(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_796(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_350() == -1)
	{
		if (func_922(iParam0) && func_923(iParam0))
		{
			func_924(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_797(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_925(iParam0, iParam1);
	sVar0 = { func_926(iParam0, 0, 1) /*5*/ };
	iVar5 = func_927(iParam0, &sVar0, 0, 0);
	iVar6 = func_928(iParam0, 0);
	if ((iVar5 > 1 && !func_929()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_779(iParam0, joaat("CI_TAG_ITEM_ANIMAL_PART")))
		{
			func_651(583, 1);
		}
		else
		{
			func_651(582, 0);
		}
	}
	if (func_930(iParam0, &sVar0, *iParam1, 0, 0))
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

void func_798(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_931(iParam0, joaat("TAG_INTERACTION_TYPE")))
	{
		case joaat("CI_TAG_PAPER_W15_24_H10_16"):
		case joaat("CI_TAG_PAPER_W11_5_H20_5"):
		case -1239610997:
		case joaat("CI_TAG_PAPER_W18_9_H28_2_FOLDVERTICALX2"):
		case joaat("CI_TAG_PAPER_W32_2_H48_2_FOLDVERTICALHORIZONTAL"):
		case joaat("CI_TAG_CARD_W6_5_H10_7"):
		case joaat("CI_TAG_PAPER_W12_7_H17_78"):
		case 10252101:
		case joaat("CI_TAG_CARD_W10_7_H6_5"):
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

int func_799(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_693(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_932(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_933(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_934(bParam2), iParam0, false);
	return iVar2;
}

bool func_800(int iParam0)
{
	if (func_350() != -1)
	{
		return false;
	}
	return func_801(iParam0) != 0;
}

int func_801(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_935())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_936(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_802(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(iParam0);
}

int func_803(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_935())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_802(iVar0))
		{
			if (func_777(func_936(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_804(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	func_937(48);
	func_609(0, -1);
}

bool func_805(int iParam0)
{
	if (func_350() != -1)
	{
		return false;
	}
	return func_603(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_806(int iParam0)
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), iParam0);
}

int func_807(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_808(int iParam0)
{
	if (func_350() != -1)
	{
		return false;
	}
	return func_603(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_809(int iParam0)
{
	if (func_350() != -1)
	{
		return false;
	}
	if (!func_461(iParam0))
	{
		return false;
	}
	return func_938(Global_1347702[iParam0 /*49*/].f_15);
}

int func_810()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_777(func_939(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_811(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_697() && (func_809(38) || func_805(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02" /* GXTEntry: @"Phineas T. Ramsbottom is a keen collector and trader of cigarette cards which are found inside Premium Cigarette packs and combine to create 12-card sets each with its own theme. He informed you that these cards are valuable to the right buyer and is willing to pay well for each completed set mailed to him." */;
				sVar5 = "COL_CC_INTRO" /* GXTEntry: "Smoking and Other Hobbies" */;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO"); /* GXTEntry: "Smoking and Other Hobbies" */
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01" /* GXTEntry: "You have found a cigarette card. Look out for more of these on your travels. You " +
    "can collect them to create 12-card sets or some stores will buy them off you." */;
				sVar5 = "COL_CC_INTRO_PRE" /* GXTEntry: "A New Hobby" */;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE"); /* GXTEntry: "A New Hobby" */
			}
			sVar4 = "COL_CC_TITLE" /* GXTEntry: "Cigarette Cards" */;
			vVar6 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar9 = 12;
			iVar14 = joaat("CIGARETTE_CARDS");
			break;
		case 39:
			if (func_697() && (func_809(39) || func_805(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02" /* GXTEntry: "Deborah MacGuiness has requested your help in finding dinosaur bones.~n~The locat" +
    "ion of each bone can be mailed back to Deborah from any Post Office." */;
				sVar5 = "COL_DB_INTRO" /* GXTEntry: "A Test of Faith" */;
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH"); /* GXTEntry: "Deborah MacGuiness" */
				iVar13 = joaat("COL_DB_INTRO"); /* GXTEntry: "A Test of Faith" */
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01" /* GXTEntry: "You have found a dinosaur bone. Look out for more of these on your travels. They " +
    "might be of use to you at some point." */;
				sVar5 = "COL_DB_INTRO_PRE" /* GXTEntry: "Digging up the Past" */;
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE"); /* GXTEntry: "Digging up the Past" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE" /* GXTEntry: "Dinosaur Bones" */;
			vVar6 = { 122.7758f, -185.4978f, 116.4383f /*3*/ };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC" /* GXTEntry: "Algernon Wasp, a fashion designer and collector of exotic flora and fauna, asks f" +
    "or assistance in tracking down some rare items for several commissions." */;
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC" /* GXTEntry: "Algernon Wasp asks for further materials to be used in a commission for Baroness " +
    "Von Buchwald." */;
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC" /* GXTEntry: "The Contessa Di Bellagio has commissioned Wasp to find materials for a display ca" +
    "binet of curios." */;
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC" /* GXTEntry: "Wasp needs more orchids for a display cabinet that he is making for a girl in New" +
    " York." */;
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC" /* GXTEntry: "Having fallen for the Contessa, Algernon needs more orchids to woo her." */;
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE" /* GXTEntry: "Exotics" */;
			sVar5 = "COL_EX_INTRO" /* GXTEntry: "Duchesses and Other Animals" */;
			vVar6 = { 2585.668f, -1009.616f, 44.97972f /*3*/ };
			iVar9 = func_940(iParam3, 19);
			iVar14 = joaat("EXOTIC_ITEMS");
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO"); /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_697() && (func_809(41) || func_805(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01" /* GXTEntry: "Jeremy Gill has asked if you can catch and post 13 Legendary Fish to him. They ar" +
    "e spread around in various fishing spots.~n~Once caught, the Legendary Fish can " +
    "be mailed from any Post Office." */;
			sVar4 = "COL_LF_TITLE" /* GXTEntry: "Legendary Fish" */;
			sVar5 = "COL_LF_INTRO" /* GXTEntry: "A Fisher of Fish" */;
			vVar6 = { 337.3075f, -684.5404f, 41.8362f /*3*/ };
			iVar9 = 13;
			iVar14 = joaat("LEGENDARY_FISH");
			iVar11 = joaat("BLIP_RC_JEREMY_GILL"); /* GXTEntry: "Jeremy Gill" */
			iVar13 = joaat("COL_LF_INTRO"); /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			if (func_697() && (func_809(49) || func_805(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02" /* GXTEntry: "Francis Sinclair asked you to help find rock carvings hidden throughout the world" +
    ", for reasons he can\'t explain.~n~Once found the carving locations can be mailed" +
    " back to Francis from any Post Office." */;
				sVar5 = "COL_RC_INTRO" /* GXTEntry: "Geology for Beginners" */;
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES"); /* GXTEntry: "Francis Sinclair" */
				iVar13 = joaat("COL_RC_INTRO"); /* GXTEntry: "Geology for Beginners" */
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01" /* GXTEntry: "You have found a mysterious rock carving. Look out for more of these on your trav" +
    "els. Maybe one day you will discover some deeper meaning behind them." */;
				sVar5 = "COL_RC_INTRO_PRE" /* GXTEntry: "Rock Carvings" */;
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE"); /* GXTEntry: "Rock Carvings" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE" /* GXTEntry: "Rock Carvings" */;
			vVar6 = { -2178.646f, -245.6886f, 191.1569f /*3*/ };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01" /* GXTEntry: "You found a poster requesting perfect animal carcasses for use in a Wildlife Art " +
    "Exhibition. The carcasses were to be sent to Ms L. Hobbs from a Post Office." */;
			sVar4 = "COL_TX_TITLE" /* GXTEntry: "Wildlife Art Exhibition" */;
			sVar5 = "COL_TX_INTRO" /* GXTEntry: "A Better World, A New Friend" */;
			vVar6 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar9 = func_940(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS"); /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = joaat("COL_TX_INTRO"); /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_941(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_942(iParam0, iVar13, iVar14))
	{
	}
	if (func_943(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_944(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_945(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_946(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_947(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_812(int iParam0)
{
	Global_40.f_12004 |= iParam0;
}

void func_813(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			sVar0 = "COL_CC_TITLE" /* GXTEntry: "Cigarette Cards" */;
			sVar3 = "COL_CC_CARD_FOUND" /* GXTEntry: "~1~ of ~2~ Cards Found" */;
			iVar7 = joaat("CIGARETTE_CARDS");
			if (func_697() && (func_809(38) || func_805(38)))
			{
				sVar1 = "COL_CC_INTRO" /* GXTEntry: "Smoking and Other Hobbies" */;
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE" /* GXTEntry: "A New Hobby" */;
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO"); /* GXTEntry: "Smoking and Other Hobbies" */
			break;
		case 39:
			sVar0 = "COL_DB_TITLE" /* GXTEntry: "Dinosaur Bones" */;
			sVar3 = "COL_DB_FOUND" /* GXTEntry: "~1~ of ~2~ Found" */;
			iVar7 = joaat("DINO_BONES");
			if (func_697() && (func_809(39) || func_805(39)))
			{
				sVar1 = "COL_DB_INTRO" /* GXTEntry: "A Test of Faith" */;
				iVar4 = joaat("BLIP_RC_DEBORAH"); /* GXTEntry: "Deborah MacGuiness" */
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE" /* GXTEntry: "Digging up the Past" */;
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO"); /* GXTEntry: "A Test of Faith" */
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE" /* GXTEntry: "Exotics" */;
			sVar3 = "COL_EX_ITEMS_COLLECTED" /* GXTEntry: "~1~ of ~2~ Items Collected" */;
			sVar1 = "COL_EX_INTRO" /* GXTEntry: "Duchesses and Other Animals" */;
			iVar7 = joaat("EXOTIC_ITEMS");
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO"); /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			sVar0 = "COL_LF_TITLE" /* GXTEntry: "Legendary Fish" */;
			sVar3 = "COL_LF_CAUGHT" /* GXTEntry: "~1~ of ~2~ Caught and Posted" */;
			sVar1 = "COL_LF_INTRO" /* GXTEntry: "A Fisher of Fish" */;
			iVar7 = joaat("LEGENDARY_FISH");
			iVar4 = joaat("BLIP_RC_JEREMY_GILL"); /* GXTEntry: "Jeremy Gill" */
			iVar6 = joaat("COL_LF_INTRO"); /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			sVar0 = "COL_RC_TITLE" /* GXTEntry: "Rock Carvings" */;
			sVar3 = "COL_RC_FOUND" /* GXTEntry: "~1~ of ~2~ Found" */;
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_697() && (func_809(49) || func_805(49)))
			{
				sVar1 = "COL_RC_INTRO" /* GXTEntry: "Geology for Beginners" */;
				iVar4 = joaat("BLIP_SCM_FRANCES"); /* GXTEntry: "Francis Sinclair" */
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE" /* GXTEntry: "Rock Carvings" */;
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO"); /* GXTEntry: "Geology for Beginners" */
			break;
		case 51:
			sVar0 = "COL_TX_TITLE" /* GXTEntry: "Wildlife Art Exhibition" */;
			sVar3 = "COL_TX_CARCASS_COLLECTED" /* GXTEntry: "~1~ of ~2~ Carcasses collected" */;
			sVar1 = "COL_TX_INTRO" /* GXTEntry: "A Better World, A New Friend" */;
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS"); /* GXTEntry: "Ms. L Hobbs" */
			iVar6 = joaat("COL_TX_INTRO"); /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE" /* GXTEntry: "Mission Complete" */;
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED" /* GXTEntry: "Log Updated" */;
	}
	sVar2 = "COL_CTX_PLAYER_LOG" /* GXTEntry: "Hold ~INPUT_FEED_INTERACT~ for details" */;
	if (iVar7 == joaat("CIGARETTE_CARDS"))
	{
		if (func_697() && (func_809(38) || func_805(38)))
		{
			iVar6 = joaat("COL_CC_INTRO"); /* GXTEntry: "Smoking and Other Hobbies" */
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE"); /* GXTEntry: "A New Hobby" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Card Sets Posted" */;
			iParam3 = 12;
			iParam4 = 12;
			func_948(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Card Sets Posted" */;
			func_948(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_950(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_949(func_807(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_948(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO" /* GXTEntry: "Smoking and Other Hobbies" */;
			func_948(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_697() && (func_809(39) || func_805(39)))
		{
			iVar6 = joaat("COL_DB_INTRO"); /* GXTEntry: "A Test of Faith" */
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE"); /* GXTEntry: "Digging up the Past" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_948(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_948(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_697() && (func_809(49) || func_805(49)))
		{
			iVar6 = joaat("COL_RC_INTRO"); /* GXTEntry: "Geology for Beginners" */
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE"); /* GXTEntry: "Rock Carvings" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_948(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_948(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_948(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_948(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_814(int iParam0, int iParam1)
{
	if (!func_691(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, iParam1);
}

void func_815(int iParam0)
{
	if (!func_684(iParam0))
	{
		return;
	}
	func_951(iParam0);
	func_952(iParam0);
}

int func_816(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_817(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES") /* GXTEntry: "Throwing Knife" */:
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES"); /* GXTEntry: "Throwing Knife" */
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED") /* GXTEntry: "Improved Throwing Knife" */:
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES"); /* GXTEntry: "Throwing Knife" */
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON") /* GXTEntry: "Poison Throwing Knife" */:
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES"); /* GXTEntry: "Throwing Knife" */
			break;
		case joaat("AMMO_DYNAMITE") /* GXTEntry: "Dynamite" */:
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE"); /* GXTEntry: "Dynamite" */
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE") /* GXTEntry: "Dynamite - Volatile" */:
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE"); /* GXTEntry: "Dynamite" */
			break;
		case joaat("AMMO_MOLOTOV") /* GXTEntry: "Fire Bottle" */:
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV"); /* GXTEntry: "Fire Bottle" */
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE") /* GXTEntry: "Fire Bottle - Volatile" */:
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV"); /* GXTEntry: "Fire Bottle" */
			break;
		case joaat("AMMO_TOMAHAWK") /* GXTEntry: "Tomahawk" */:
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK"); /* GXTEntry: "Tomahawk" */
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT") /* GXTEntry: "Ancient Tomahawk" */:
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT"); /* GXTEntry: "Ancient Tomahawk" */
			break;
		case joaat("AMMO_TOMAHAWK_HOMING") /* GXTEntry: "Tomahawk - Homing" */:
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK"); /* GXTEntry: "Tomahawk" */
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED") /* GXTEntry: "Tomahawk - Improved" */:
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK"); /* GXTEntry: "Tomahawk" */
			break;
		case joaat("AMMO_HATCHET") /* GXTEntry: "Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET"); /* GXTEntry: "Hatchet" */
			break;
		case joaat("AMMO_HATCHET_HUNTER") /* GXTEntry: "Hunter Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER"); /* GXTEntry: "Hunter Hatchet" */
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED") /* GXTEntry: "Rusted Hunter Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED"); /* GXTEntry: "Rusted Hunter Hatchet" */
			break;
		case joaat("AMMO_HATCHET_ANCIENT") /* GXTEntry: "Stone Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET"); /* GXTEntry: "Stone Hatchet" */
			break;
		case joaat("AMMO_HATCHET_CLEAVER") /* GXTEntry: "Cleaver" */:
			iVar0 = joaat("WEAPON_MELEE_CLEAVER"); /* GXTEntry: "Cleaver" */
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT") /* GXTEntry: "Double Bit Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT"); /* GXTEntry: "Double Bit Hatchet" */
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED") /* GXTEntry: "Rusted Double Bit Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED"); /* GXTEntry: "Rusted Double Bit Hatchet" */
			break;
		case joaat("AMMO_HATCHET_HEWING") /* GXTEntry: "Hewing Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING"); /* GXTEntry: "Hewing Hatchet" */
			break;
		case joaat("AMMO_HATCHET_VIKING") /* GXTEntry: "Viking Hatchet" */:
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING"); /* GXTEntry: "Viking Hatchet" */
			break;
		default:
			break;
	}
	if (func_691(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_953(iVar0) || func_954(iVar0))
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

int func_818(int iParam0, bool bParam1)
{
	if (!func_691(iParam0, 0))
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

void func_819(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_444(iParam0))
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

bool func_820(bool bParam0)
{
	if (func_350() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_934(bParam0));
}

bool func_821(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		sVar0 = { func_926(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_955((398 + iVar28), 1);
			if (func_956(iParam0, &sVar0, iVar5, 0))
			{
				if (func_957(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_958(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_959(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_820(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_822(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_960(iParam0, iParam1);
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

bool func_822(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_824(iParam0))
	{
		return false;
	}
	if (!func_820(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_823(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_818(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_350() == -1)
		{
			func_819(iVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_961(iVar0);
			}
		}
		if (!func_930(iParam0, &uVar1, 1, 0, 0))
		{
			func_924(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_962(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_821(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_821(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_821(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_120())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_963(iVar0))
				{
					func_821(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_821(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_964(Global_35, 2, 0, 1);
				if ((((func_444(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_571(24)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_444(iVar7) && func_571(24))
				{
					if (!func_821(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_821(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_821(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && iParam1 == joaat("ADD_REASON_PURCHASED"))
	{
		func_651(480, 1);
	}
	return true;
}

bool func_824(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_825(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_824(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_444(iVar4))
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
	if (func_777(joaat("PROVISION_TRINKET_CROW_BEAK") /* GXTEntry: "Crow Beak Trinket" */, 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
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
		func_859(func_965(iParam0), func_858(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_350() == -1)
		{
			if (func_603(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_651(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_820(0))
	{
		if (func_822(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_864(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_826(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_966()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_967(Global_35, iParam0, &uVar0))
		{
			func_843(PLAYER::PLAYER_PED_ID(), iParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH") /* GXTEntry: "Alligator Tooth Talisman" */:
			Global_40.f_11095.f_50 += 0.1f;
			func_849();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW") /* GXTEntry: "Bear Claw Talisman" */:
			Global_40.f_11095.f_49 += 0.1f;
			func_849();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN") /* GXTEntry: "Bison Horn Talisman" */:
			Global_40.f_11095.f_51 += 0.1f;
			func_849();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON") /* GXTEntry: "Eagle Talon Talisman" */:
			Global_40.f_11095.f_58 += 0.5f;
			func_847();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW") /* GXTEntry: "Raven Claw Talisman" */:
			Global_40.f_11095.f_60 += 0.2f;
			func_845();
			break;
	}
}

void func_827(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH") /* GXTEntry: "Beaver Tooth Trinket" */:
			Global_40.f_11095.f_60 += 0.1f;
			func_845();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN") /* GXTEntry: "Tatanka Bison Horn Trinket" */:
			Global_40.f_11095.f_61 += 0.1f;
			func_846();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG") /* GXTEntry: "Cougar Fang Trinket" */:
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG") /* GXTEntry: "Coyote Fang Trinket" */:
			Global_40.f_11095.f_56 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW") /* GXTEntry: "Fox Claw Trinket" */:
			Global_40.f_11095.f_58 += 0.5f;
			func_847();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE") /* GXTEntry: "Iguana Scale Trinket" */:
			Global_40.f_11095.f_63 += 0.1f;
			func_848();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW") /* GXTEntry: "Lion\'s Paw Trinket" */:
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER") /* GXTEntry: "Moose Antler Trinket" */:
			Global_40.f_11095.f_55 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER") /* GXTEntry: "Owl Feather Trinket" */:
			Global_40.f_11095.f_49 += 0.15f;
			Global_40.f_11095.f_50 += 0.15f;
			Global_40.f_11095.f_51 += 0.15f;
			func_849();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON") /* GXTEntry: "Hawk Talon Trinket" */:
			Global_40.f_11095.f_64 += 0.3f;
			func_968();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH") /* GXTEntry: "Shark Tooth Trinket" */:
			Global_40.f_11095.f_68 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL") /* GXTEntry: "Turtle Shell Trinket" */:
			Global_40.f_11095.f_69 += 0.1f;
			func_969();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE") /* GXTEntry: "Cat Eye Trinket" */:
			Global_40.f_11095.f_70 += 0.2f;
			break;
	}
}

struct<2> /*16*/ func_828(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

struct<2> /*16*/ func_829(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

void func_830(int iParam0)
{
	bool bVar0;

	bVar0 = func_779(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT"));
	if (func_970() < 3)
	{
		if (bVar0)
		{
			if (func_972(func_971(iParam0), iParam0))
			{
				func_859(79, func_858(func_971(iParam0)), 1);
			}
			else
			{
				func_859(78, func_858(func_971(iParam0)), 1);
			}
		}
		else
		{
			func_859(80, func_858(func_973(iParam0)), 1);
		}
	}
}

bool func_831()
{
	if (((((func_974(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1") /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_974(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2") /* GXTEntry: "Bounty Notice" */, 400)) || func_974(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1") /* GXTEntry: "Bounty Hunter\'s Orders" */, 400)) || func_974(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2") /* GXTEntry: "Poster of a Violent Criminal" */, 400)) || func_974(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1") /* GXTEntry: "Bounty Hunter\'s Letter" */, 400)) || func_974(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2") /* GXTEntry: "Bounty Page" */, 400))
	{
		return true;
	}
	return false;
}

void func_832(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY") /* GXTEntry: "Letter from Ms. Hobbs" */:
			func_811(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_813(51, 0, 0, 0, 0, -1, 0);
			func_975((1 << 13));
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY") /* GXTEntry: "Invitation from Ms. Hobbs" */:
			func_811(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_813(51, 0, 0, 0, 0, -1, 0);
			func_975((1 << 19));
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES") /* GXTEntry: "Invitation from Deborah MacGuiness" */:
			func_811(39, 0, 0, 0, 0, 0, 1, 0);
			func_813(39, 0, 0, 0, 0, -1, 0);
			func_976(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH") /* GXTEntry: "Invitation from Jeremy Gill" */:
			func_811(41, 0, 0, 0, 0, 0, 1, 0);
			func_813(41, 0, 0, 0, 0, -1, 0);
			func_977(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS") /* GXTEntry: "Invitation from Francis Sinclair" */:
			func_811(49, 0, 0, 0, 0, 0, 1, 0);
			func_813(49, 0, 0, 0, 0, -1, 0);
			func_978(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01") /* GXTEntry: "Exotic Collector\'s List" */:
			func_811(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_979(1), 0, -1, 0);
			func_980(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02") /* GXTEntry: "Exotic Collector\'s List" */:
			func_811(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_979(2), 0, -1, 0);
			func_980(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03") /* GXTEntry: "Exotic Collector\'s List" */:
			func_811(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_979(4), 0, -1, 0);
			func_980(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04") /* GXTEntry: "Exotic Collector\'s List" */:
			func_811(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_979(8), 0, -1, 0);
			func_980(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05") /* GXTEntry: "Exotic Collector\'s List" */:
			func_811(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_979(16), 0, -1, 0);
			func_980(16);
			break;
	}
}

void func_833(int iParam0)
{
	if (func_981() == 1)
	{
		if (func_805(39))
		{
			func_651(342, 0);
		}
		else
		{
			func_651(343, 0);
			func_976(1);
		}
	}
	if (func_981() >= 30)
	{
		func_651(344, 0);
	}
	func_811(39, 0, 0, 0, 0, 0, -1, 0);
	func_813(39, 0, 0, func_981(), 30, 1, 0);
}

void func_834(int iParam0)
{
	if (func_982() == 1)
	{
		if (func_805(49))
		{
			func_651(409, 0);
		}
		else
		{
			func_651(410, 0);
			func_978(1);
		}
	}
	if (func_982() >= 10)
	{
		func_651(411, 0);
	}
	func_811(49, 0, 0, 0, 0, 0, -1, 0);
	func_813(49, 0, 0, func_982(), 10, 1, 0);
}

void func_835(int iParam0)
{
	char[] cVar0[8];

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1") /* GXTEntry: "Hunting Request" */:
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_01"), 1);
			func_651(437, 0);
			func_651(440, 0);
			func_983(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT") /* GXTEntry: "Perfect Squirrel Carcass" */, &cVar0, 1, 0, 0);
			func_811(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), cVar0, 0, -1, 0);
			func_813(51, 0, 0, cVar0, func_940(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_975(1);
			func_984(joaat("WS_TAXIDERMY_NOTICES"), 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2") /* GXTEntry: "Hunting Request" */:
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_02"), 1);
			func_983(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT") /* GXTEntry: "Perfect Cardinal Carcass" */, &cVar0, 1, 0, 0);
			func_811(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), cVar0, 0, -1, 0);
			func_813(51, 0, 0, cVar0, func_940(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_975(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3") /* GXTEntry: "Hunting Request" */:
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_03"), 1);
			func_983(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT") /* GXTEntry: "Perfect Chipmunk Carcass" */, &cVar0, 1, 0, 0);
			func_811(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), cVar0, 0, -1, 0);
			func_813(51, 0, 0, cVar0, func_940(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_975(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4") /* GXTEntry: "Hunting Request" */:
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_04"), 1);
			func_983(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT") /* GXTEntry: "Perfect Songbird Carcass" */, &cVar0, 1, 0, 0);
			func_811(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), cVar0, 0, -1, 0);
			func_813(51, 0, 0, cVar0, func_940(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_975((1 << 9));
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5") /* GXTEntry: "Hunting Request" */:
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_05"), 1);
			func_651(438, 0);
			func_983(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT") /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &cVar0, 1, 0, 0);
			func_811(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), cVar0, 0, -1, 0);
			func_813(51, 0, 0, cVar0, func_940(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_975((1 << 15));
			break;
		default:
			func_651(439, 0);
			break;
	}
}

void func_836()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_837(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_350() == -1)
	{
		if (!func_805(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_651(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_651(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_651(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_651(400, 0);
			}
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_01")))
		{
			func_985(joaat("EXOTIC_STAGE_01"));
			if (func_986() == 0)
			{
				func_609(0, 10);
				iVar1 = func_987(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_988(iParam0) < func_989(iParam0))
					{
						func_811(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_813(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_805(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_651(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_651(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_651(401, 0);
			}
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_02")))
		{
			func_985(joaat("EXOTIC_STAGE_02"));
			if (func_986() == 1)
			{
				func_609(0, 10);
				iVar1 = func_987(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_988(iParam0) < func_989(iParam0))
					{
						func_811(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_813(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_805(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_651(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_651(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_651(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_651(398, 0);
			}
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_03")))
		{
			func_985(joaat("EXOTIC_STAGE_03"));
			if (func_986() == 2)
			{
				func_609(0, 10);
				iVar1 = func_987(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_990(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_991(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_937(48);
					}
					if (func_988(iParam0) < func_989(iParam0))
					{
						func_811(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_813(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_988(iParam0) < func_989(iParam0))
					{
						func_811(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_813(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_805(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_651(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_651(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_651(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_651(406, 0);
			}
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_04")))
		{
			func_985(joaat("EXOTIC_STAGE_04"));
			if (func_986() == 3)
			{
				func_609(0, 10);
				iVar1 = func_987(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_988(iParam0) < func_989(iParam0))
					{
						func_811(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_813(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_805(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_651(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_651(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_651(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_651(403, 0);
			}
		}
		else if (func_779(iParam0, joaat("CI_TAG_ITEM_EXOTIC_STAGE_05")))
		{
			func_985(joaat("EXOTIC_STAGE_05"));
			if (func_986() == 4)
			{
				func_609(0, 10);
				iVar1 = func_987(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_988(iParam0) < func_989(iParam0))
					{
						func_811(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_813(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_838(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_990(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_991(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_937(48);
		}
	}
}

void func_839(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_777(func_992(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_993(iParam0, iVar0, cVar2, iParam1, bParam2);
			}
			else
			{
				func_994(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_840(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_350() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_601(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR") /* GXTEntry: "$1.00" */:
			func_601(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS") /* GXTEntry: "$5.00" */:
			func_601(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS") /* GXTEntry: "$10.00" */:
			func_601(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD") /* GXTEntry: "Bill Fold" */:
			func_601(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML") /* GXTEntry: "Small Bill Fold" */:
			func_601(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK") /* GXTEntry: "Bill Stack" */:
			func_601(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN") /* GXTEntry: "Coin" */:
			func_601(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE") /* GXTEntry: "Coin Purse" */:
			func_601(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK") /* GXTEntry: "Coin Sack" */:
			func_601(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK") /* GXTEntry: "Coin Stack" */:
			func_601(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP") /* GXTEntry: "Money Clip" */:
			func_601(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK") /* GXTEntry: "Money Stack" */:
			func_601(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE") /* GXTEntry: "Money Pile" */:
			if (!func_995())
			{
				func_601(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM") /* GXTEntry: "Change Cup" */:
			func_601(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG") /* GXTEntry: "Coin Cup" */:
			func_601(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH") /* GXTEntry: "Money" */:
			func_601(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON") /* GXTEntry: "$50.00" */:
			func_601(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE") /* GXTEntry: "$100.00" */:
			func_601(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL") /* GXTEntry: "$200.00" */:
			func_601(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH") /* GXTEntry: "$45.00" */:
			func_601(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1") /* GXTEntry: "$50.00" */:
			func_601(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2") /* GXTEntry: "$70.00" */:
			func_601(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3") /* GXTEntry: "$100.00" */:
			func_601(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4") /* GXTEntry: "$120.00" */:
			func_601(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5") /* GXTEntry: "$150.00" */:
			func_601(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER") /* GXTEntry: "$350.00" */:
			func_601(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_841(int iParam0)
{
	if (func_805(41))
	{
		func_651(363, 0);
	}
	else
	{
		func_651(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY") /* GXTEntry: "Legendary Bullhead Catfish" */:
			func_996(joaat("LEGENDARY_FISH_01"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY") /* GXTEntry: "Legendary Chain Pickerel" */:
			func_996(joaat("LEGENDARY_FISH_02"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY") /* GXTEntry: "Legendary Lake Sturgeon" */:
			func_996(joaat("LEGENDARY_FISH_03"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY") /* GXTEntry: "Legendary Largemouth Bass" */:
			func_996(joaat("LEGENDARY_FISH_04"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY") /* GXTEntry: "Legendary Longnose Gar" */:
			func_996(joaat("LEGENDARY_FISH_05"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY") /* GXTEntry: "Legendary Muskie" */:
			func_996(joaat("LEGENDARY_FISH_06"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY") /* GXTEntry: "Legendary Perch" */:
			func_996(joaat("LEGENDARY_FISH_07"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY") /* GXTEntry: "Legendary Redfin Pickerel" */:
			func_996(joaat("LEGENDARY_FISH_08"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY") /* GXTEntry: "Legendary Rock Bass" */:
			func_996(joaat("LEGENDARY_FISH_09"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY") /* GXTEntry: "Legendary Smallmouth Bass" */:
			func_996(joaat("LEGENDARY_FISH_10"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY") /* GXTEntry: "Legendary Sockeye Salmon" */:
			func_996(joaat("LEGENDARY_FISH_11"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY") /* GXTEntry: "Legendary Steelhead Trout" */:
			func_996(joaat("LEGENDARY_FISH_12"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY") /* GXTEntry: "Legendary Bluegill" */:
			func_996(joaat("LEGENDARY_FISH_13"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_609(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY") /* GXTEntry: "Legendary Northern Pike" */:
			func_996(joaat("LEGENDARY_FISH_14"));
			func_997(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_998(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_842(int iParam0, int iParam1)
{
	var uVar0;

	func_999(iParam0, iParam1, &uVar0);
}

int func_843(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
	{
		sVar0 = { func_926(iParam1, 1, 0) /*5*/ };
		iParam3 = func_1000(sVar0.f_4);
		if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
		{
			return 0;
		}
	}
	if (!func_1001(iParam1, iParam2, func_914(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1002(1, (func_350() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (bParam8 && iParam1 != Global_1946054.f_57[func_914(iParam3, 1) /*11*/])
			{
				func_1003(31, 0, 0, 0, 0);
			}
			break;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (func_1004((1 << 15)) && iParam1 != Global_1946054.f_57[func_914(iParam3, 1) /*11*/])
			{
				func_1005();
				func_1003(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1003(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1006(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1003(19, 0, iVar5, 0, 0);
		if ((iParam3 == joaat("MP_COMPONENT_TYPE_NECKWEAR_1") || iParam3 == joaat("MP_COMPONENT_TYPE_HEADWEAR")) || iParam3 == joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"))
		{
			func_1007(0);
			func_1008(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1003(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_844(int iParam0, bool bParam1)
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
	iVar18 = func_964(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_964(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1009("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1010(&sVar3, iVar2, iVar0, iVar1))
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
						func_1011(iVar0);
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

void func_845()
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_60));
}

void func_846()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - fVar0), (1.0f - fVar1));
}

void func_847()
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f / (1.0f + Global_40.f_11095.f_58)));
}

void func_848()
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_63));
}

void func_849()
{
	func_1012();
	func_1013();
	func_1014();
}

void func_850(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	Vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar3 = "COL_TH_SUB_JACK_HALL" /* GXTEntry: "Jack Hall Gang Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL"); /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar3 = "COL_TH_SUB_HIGH_STAKES" /* GXTEntry: "High Stakes Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES"); /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL" /* GXTEntry: "The Poisonous Trail Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL"); /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS" /* GXTEntry: "Le Tresor des Morts Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS"); /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL" /* GXTEntry: "The Elemental Trail Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL"); /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES" /* GXTEntry: "Landmarks Of Riches Treasure" */;
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES"); /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	switch (iParam1)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01" /* GXTEntry: "You\'ve acquired a Map that is said to show the location of the notorious Jack Hal" +
    "l Gang\'s lost Treasure." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02" /* GXTEntry: "The first Map leads to a narrow cliff on the side of Caliban\'s Seat, where a seco" +
    "nd Map and the next part of the Treasure\'s trail is found." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03" /* GXTEntry: "Having reached inside what looks to be a crudely made Inuksuk at Cotorra Springs," +
    " you discover the final Jack Hall Gang Treasure Map." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04" /* GXTEntry: "Following all the clues to the Jack Hall Gang Treasure you uncover 2 Gold Bars bu" +
    "ried on a small island at O\'Creagh\'s Run." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01" /* GXTEntry: "You\'ve acquired a Map leading to a Treasure that is rumored to be cursed. Many ha" +
    "ve died looking for it." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02" /* GXTEntry: "You have found another Treasure Map in an alcove behind Cumberland Falls." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03" /* GXTEntry: "After crossing the snowy West Grizzlies, you reach Barrow Lagoon where you discov" +
    "er another Map and some Loot inside a log bridge." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04" /* GXTEntry: "Using the final Map and navigating a treacherous path along a cliff edge between " +
    "Bacchus and Fort Wallace, you find 3 Gold Bars in a small crevice." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01" /* GXTEntry: "A Map is discovered inside a small chest nestled under the bed in an old shack ne" +
    "ar Cairn Lake." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02" /* GXTEntry: "The first Map leads you to a hill west of Ringneck Creek where you find a second " +
    "Map hidden within the hollow of an old decaying stump." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03" /* GXTEntry: "The second map guides you to a Serpent Mound, near Kamassa River in Roanoke Ridge" +
    ". Reaching into the eye of the serpent, you find a third Map." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04" /* GXTEntry: "The third Map leads you through a network of tunnels hidden behind the waterfall " +
    "at the polluted Elysian Pool. At the end of your path, you find 4 Gold Bars hidd" +
    "en behind a pile of rocks." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01" /* GXTEntry: "You discover a Map in an old jail cell that lies on the edge of a small settlemen" +
    "t that was destroyed by fire." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			sVar1 = "COL_TH_OBJ_RDL" /* GXTEntry: "Use the riddle to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02" /* GXTEntry: "Reaching up into a high ledge in an old smugglers tunnel, you discover a Riddle w" +
    "hich you can only guess is a clue that will lead to the Treasure\'s location." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03" /* GXTEntry: "Deciphering the Riddle has led you to a crypt in the St. Denis cemetery. Pulling " +
    "off a loose plaque reveals 6 Gold Bars hidden within the wall of the crypt." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01" /* GXTEntry: "Suspended in the air, hanging from the side of a cliff, a dead explorer met his u" +
    "nfortunate end after getting tangled up and stuck. After freeing the corpse and " +
    "looting it, a map was discovered." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02" /* GXTEntry: "Reaching up the fire-scorched, blackened chimney in the ruins at Grunhollow, a se" +
    "cond map was found." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03" /* GXTEntry: "After carefully navigating across the raised trough near the old water tower at B" +
    "enedict Point, another map was uncovered in the gap between the planks." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04" /* GXTEntry: "By following the final map, a gold bar and Crow\'s Beak trinket were unearthed ben" +
    "eath a rock at Coot\'s Chapel Cemetery." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01" /* GXTEntry: "A gold earring and treasure map were discovered hidden behind a plaque on the obe" +
    "lisk west of Owanjila." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02" /* GXTEntry: "Following the directions on the map led to a miniature church. Searching the stee" +
    "ple on its roof revealed a silver earring and another map." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03" /* GXTEntry: "Having discovered the mysterious hill home, a gold-jointed bracelet and third tre" +
    "asure map were discovered after reaching through one of the shattered windows." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			sVar1 = "COL_TH_OBJ" /* GXTEntry: "Use the Map to search for the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04" /* GXTEntry: "Reaching into the hole at the base of an old tree trunk at Bolger Glade uncovered" +
    " a silver chain bracelet and a map." */;
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			sVar1 = "COL_TH_OBJ_FOUND" /* GXTEntry: "You found the treasure" */;
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05" /* GXTEntry: "One of the western side stones that make up the base of the sundial on Mount Shan" +
    "n was lifted to reveal a hole containing 6 gold bars." */;
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE" /* GXTEntry: "You have completed Jack Hall Gang Treasure" */;
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE" /* GXTEntry: "You have completed High Stakes Treasure" */;
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE" /* GXTEntry: "You have completed The Poisonous Trail Treasure" */;
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE" /* GXTEntry: "You have completed Le Tresor des Morts Treasure" */;
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE" /* GXTEntry: "You have completed The Elemental Trail Treasure" */;
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE" /* GXTEntry: "You have completed Landmarks Of Riches Treasure" */;
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::VAR_STRING(2, sVar3));
}

void func_851(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_JACK_HALL" /* GXTEntry: "Jack Hall Gang Treasure" */;
			iVar0 = joaat("COL_TH_SUB_JACK_HALL"); /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_HIGH_STAKES" /* GXTEntry: "High Stakes Treasure" */;
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES"); /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL" /* GXTEntry: "The Poisonous Trail Treasure" */;
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL"); /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS" /* GXTEntry: "Le Tresor des Morts Treasure" */;
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS"); /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL" /* GXTEntry: "The Elemental Trail Treasure" */;
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL"); /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE" /* GXTEntry: "Treasure Hunter" */;
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES" /* GXTEntry: "Landmarks Of Riches Treasure" */;
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES"); /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG" /* GXTEntry: "Hold ~INPUT_FEED_INTERACT~ for details" */;
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE" /* GXTEntry: "Mission Complete" */;
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_948(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_852(int iParam0)
{
	Global_40.f_12004.f_7 |= iParam0;
}

void func_853(int iParam0)
{
	Global_40.f_12004.f_8 |= iParam0;
}

void func_854(int iParam0)
{
	Global_40.f_12004.f_9 |= iParam0;
}

void func_855(int iParam0)
{
	Global_40.f_12004.f_10 |= iParam0;
}

void func_856(int iParam0)
{
	Global_40.f_12004.f_11 |= iParam0;
}

void func_857(int iParam0)
{
	Global_40.f_12004.f_12 |= iParam0;
}

int func_858(int iParam0)
{
	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_859(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_766(iParam0, &iVar0, &iVar1);
	if (!func_767(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_910(iParam0, (1 << 10)))
	{
		return;
	}
	func_768(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_860(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_766(iParam0, &iVar0, &iVar1);
	if (!func_767(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_910(iParam0, (1 << 10)))
	{
		return;
	}
	func_768(iVar0, iVar1);
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

int func_861()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);
	if (iVar0 == func_935())
	{
		return func_862();
	}
	iVar4 = (func_935() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_935())
	{
		iVar1 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar2, joaat("CIGARETTE_CARDS"), 0);
		if (!func_1015(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_936(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_862()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_935());
	return func_936(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("CIGARETTE_CARDS"), 0));
}

void func_863(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED") /* GXTEntry: "Opened Cigarettes" */:
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX"); /* GXTEntry: "Premium Cigarettes" */
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED") /* GXTEntry: "Opened Chewing Tobacco" */:
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO"); /* GXTEntry: "Chewing Tobacco" */
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED") /* GXTEntry: "Opened Cigarettes" */:
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP"); /* GXTEntry: "Cigarettes" */
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED") /* GXTEntry: "Opened Cocaine Gum" */:
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM"); /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

int func_864(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	sVar0 = { func_926(iParam0, 0, 1) /*5*/ };
	sVar5 = { func_958(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_1016(iParam0, &sVar5, &sVar0, iParam1, iParam2, 0);
}

void func_865(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_350() != -1)
	{
		return;
	}
	switch (func_816(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			if (iParam0 == joaat("KIT_BANDANA") && func_1017(joaat("CI_CATEGORY_WARDROBE_MASK"), 0) <= 0)
			{
				func_1003(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_1003(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = func_1018(iParam0);
			if (func_1019(iVar0))
			{
				func_1020(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1003(30, iParam0, 0, 0, 0);
			}
			if (func_1021() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || func_1021() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT") /* GXTEntry: "The Summer Gunslinger" */:
					case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT") /* GXTEntry: "The Winter Gunslinger" */:
					case joaat("CLOTHING_GUNSLINGER_OUTFIT") /* GXTEntry: "The Gunslinger" */:
						func_1003(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1021() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER") /* GXTEntry: "The Cowboy" */:
						func_1003(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			if (!func_1022(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), 0))
			{
				if (func_1023(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), &iVar1))
				{
					func_1003(33, iVar1, 0, 0, 0);
				}
			}
			func_1003(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_1024(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_843(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_815(24);
		if (func_844(&iVar2, 0))
		{
			func_821(iVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_866(int iParam0)
{
	if (func_779(iParam0, 943695443))
	{
		func_1025(0, iParam0);
	}
	else if (func_779(iParam0, -2096528786))
	{
		func_1025(1, iParam0);
	}
	else if (func_779(iParam0, -1094167013))
	{
		func_1025(2, iParam0);
	}
	else if (func_779(iParam0, 1936654645))
	{
		func_1025(3, iParam0);
	}
	else if (func_779(iParam0, 1306489306))
	{
		func_1025(4, iParam0);
	}
	else if (func_779(iParam0, 435762317))
	{
		func_1025(5, iParam0);
	}
	else if (func_779(iParam0, 1259363210))
	{
		func_1025(6, iParam0);
	}
	else if (func_779(iParam0, 881398259))
	{
		func_1025(7, iParam0);
	}
	else if (func_779(iParam0, -541549214))
	{
		func_1025(8, iParam0);
	}
	else if (func_779(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_1025(-1, iParam0);
	}
}

int func_867(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	sVar4.f_1 = 10;
	func_1026(&sVar4, joaat("LOOT_TYPE_NORMAL"));
	return func_1027(iParam0, &sVar4, &uVar0, iParam1);
}

struct<2> /*16*/ func_868(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_691(iParam0, 0))
	{
		return sVar0;
	}
	if (func_779(iParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_350() == -1)
		{
			if (func_779(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_578(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_578(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_779(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_578(joaat("MEDICINE_ITEMS"));
	}
	if (func_779(iParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_578(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

void func_869(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT") /* GXTEntry: "Flight Feather" */:
			if (func_350() == -1)
			{
				if (func_603(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_651(109, 1);
				}
			}
			break;
	}
}

void func_870(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1029(func_1028(0));
	func_581(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP" /* GXTEntry: "~1w~ ~2~" */, sParam1, sVar0), "inventory_items", func_1030(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_871(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_691(iParam0, 0))
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
	if (!func_1031())
	{
		func_1032(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_1033(iVar1 == 1, "ITEM_GET_PUMP" /* GXTEntry: "~1~" */, "ITEM_GET_PUMP_MULT" /* GXTEntry: "~2~x ~1~" */));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_1033(iVar1 == 1, "ITEM_GET_PUMP" /* GXTEntry: "~1~" */, "ITEM_GET_PUMP_MULT" /* GXTEntry: "~2~x ~1~" */));
		}
		else if (bParam2 && func_814(iParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT" /* GXTEntry: "~2~x READ ~1~" */);
		}
		bVar0 = true;
	}
	iVar6 = func_693(iParam0);
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
	else if (!func_1034(iParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_1035(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_858(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_779(iParam0, joaat("CI_TAG_SMOKING_CIGARETTE"))) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_858(iParam0));
	}
	func_581(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

var func_872(int iParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_578(iParam0) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

bool func_873()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_874(int iParam0, int iParam1)
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

	if (func_350() != -1)
	{
		return;
	}
	iVar0 = func_709();
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
		sVar9 = "FAME_EVENT_DEC" /* GXTEntry: "FAME DECREASE ~COLOR_PURPLE~-~COLOR_PURPLE~" */;
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC" /* GXTEntry: "FAME INCREASE ~COLOR_PURPLE~+~COLOR_PURPLE~" */;
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = BUILTIN::TO_FLOAT(iVar0);
	fVar7 = BUILTIN::TO_FLOAT(Global_1347398);
	fVar8 = BUILTIN::TO_FLOAT(iVar3);
	iVar4 = func_572(BUILTIN::CEIL(((fVar6 / fVar7) * 100.0f)), 0, 100);
	iVar5 = func_572(BUILTIN::CEIL(((fVar8 / fVar7) * 100.0f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_1036())
		{
			func_1037(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_1038())
		{
			func_1037(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_1039())
		{
			func_1037(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_1040())
	{
		func_1037(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_579(func_578(joaat("FAME")), iVar1);
	iVar10 = func_709();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

void func_875(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_715(1) < iParam0)
	{
		iParam0 = func_715(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_578(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_876(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND" /* GXTEntry: "-~1$~" */;
	}
	func_581(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_877()
{
	if (func_966())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_878(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1041((Global_40.f_4283.f_325 + iParam0));
}

void func_879(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN" /* GXTEntry: "Gang Share ~1$~" */;
	}
	if (func_877())
	{
		func_581(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_581(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

int func_880(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_1042(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_881(int iParam0)
{
	if (!func_1043(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_882(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1044(iParam0))
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

int func_883()
{
	return Global_1899515;
}

void func_884(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1045(*iParam0);
	iVar1 = func_1046(*iParam0);
	iVar2 = func_1047(*iParam0);
	iVar3 = func_450(*iParam0);
	iVar4 = func_1048(*iParam0);
	iVar5 = func_1049(*iParam0);
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
	iVar6 = func_1050(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_1050(iVar1, iVar0);
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
	func_1051(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_885(int iParam0)
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

bool func_886(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_1052((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_887(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_903(uParam0[iVar0 /*17*/]))
		{
			func_658(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_888(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_1053(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_92((uParam2[iVar0 /*17*/])->f_6))
		{
			func_658(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_889(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_389(*uParam0);
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

int func_890(var uParam0, int iParam1)
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

void func_891(int* iParam0, int* iParam1)
{
	if (!func_754(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_658(iParam1, 19);
			func_905(iParam0, 23);
			func_668(iParam1, 2);
		}
	}
}

bool func_892(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_1054(16))
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
					func_1055(16);
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

void func_893(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1053(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_894(int iParam0)
{
	return func_1056(iParam0, 4) | func_1056(iParam0, 5);
}

int func_895(int iParam0)
{
	return func_1056(iParam0, 7);
}

int func_896(int iParam0)
{
	return func_1056(iParam0, 6);
}

void func_897(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_903(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1053(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_898(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1057(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_717(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_655(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_655(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1058(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_899(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_719(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1059(iParam1, 1))
	{
		func_1060(iParam1, 1);
		return true;
	}
	return false;
}

void func_900(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_516(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_901(int* iParam0, float fParam1, bool bParam2)
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

void func_902(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203 /*PRF_0x010BCD70*/, true);
	}
}

bool func_903(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_904(int iParam0)
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

void func_905(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_906(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_907(int iParam0, int iParam1)
{
	if (func_350() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_908(int iParam0)
{
	if (func_350() != -1)
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

bool func_909(int iParam0)
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

bool func_910(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_911(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_912()
{
	return Global_1905944.f_5694;
}

int func_913(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_1000(iVar0);
}

int func_914(int iParam0, int iParam1)
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

bool func_915()
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

bool func_916(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_691(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_932(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_1009("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1010(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_444(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_1011(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1011(iVar1);
	}
	return false;
}

int func_917()
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_1061(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_1061(iVar0)) || iVar0 == joaat("WEAPON_LASSO"))
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

Vector3 func_918(int iParam0)
{
	int iVar0;

	iVar0 = func_288(iParam0);
	return func_1062(iVar0);
}

void func_919(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_920(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_921(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

bool func_922(int iParam0)
{
	return func_693(iParam0) == joaat("WEAPON");
}

bool func_923(int iParam0)
{
	var uVar0;

	if (func_350() != -1)
	{
		return false;
	}
	if (func_814(iParam0, (1 << 20)))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_930(iParam0, &uVar0, 1, 0, 0);
	}
	return func_777(iParam0, 1, 0);
}

void func_924(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_693(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_818(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_954(iVar0))
	{
		if (func_350() == -1)
		{
			func_819(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_799(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_871(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_925(int iParam0, int iParam1)
{
	int iVar0;

	if (func_779(iParam0, joaat("CI_TAG_ITEM_MULTIPLE_USES")))
	{
		func_1063(iParam0, joaat("COST_SHOP_DEFAULT"), &iVar0, 1);
		*iParam1 *= iVar0;
	}
}

struct<5> /*40*/ func_926(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_1064(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_693(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_958(joaat("WARDROBE") /* GXTEntry: "Wardrobe" */, sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE") /* GXTEntry: "Wardrobe" */);
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_1065(bParam1) /*4*/ };
			if (bParam2 && func_1066(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_956(iParam0, &sVar0, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */, 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
				}
				else if (!func_956(iParam0, &sVar0, joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */, 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1"); /* GXTEntry: "Left" */
				}
				else if (func_957(iParam0, &sVar5, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
				}
				else
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1"); /* GXTEntry: "Left" */
				}
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			sVar0.f_4 = joaat("SLOTID_ACTIVE_HORSE");
			break;
		case joaat("EMOTE"):
			sVar0.f_4 = -813824107;
			sVar0 = { func_1067(bParam1) /*4*/ };
			switch (func_816(iParam0))
			{
				case 664784405:
					sVar0.f_4 = -1150938404;
					break;
				case joaat("CI_CATEGORY_EMOTE_DANCES"):
					sVar0.f_4 = joaat("SLOTID_EMOTE_DANCE");
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
			if (func_1068(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_958(joaat("KIT_CAMP") /* GXTEntry: "Camp" */, sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP") /* GXTEntry: "Camp" */);
			}
			else if (func_1068(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_958(joaat("WARDROBE") /* GXTEntry: "Wardrobe" */, sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE") /* GXTEntry: "Wardrobe" */);
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
				if (!func_1069(sVar0, &sVar27, bParam1, 0))
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

int func_927(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (!func_820(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_1070(iParam0))
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(iParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_934(bParam3), iParam0);
}

int func_928(int iParam0, bool bParam1)
{
	if (func_824(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_934(bParam1), iParam0, false);
}

bool func_929()
{
	if (func_350() != -1)
	{
		return false;
	}
	if (!func_697())
	{
		return false;
	}
	if (!func_603(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_603(Global_1835011[2 /*74*/].f_1, 1) && func_603(Global_1347702[120 /*49*/].f_15, 1)) && !func_603(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_603(Global_1835011[37 /*74*/].f_1, 1) && !func_603(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_603(Global_1835011[57 /*74*/].f_1, 1) && !func_603(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_603(Global_1835011[26 /*74*/].f_1, 1) && !func_603(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_603(Global_1835011[62 /*74*/].f_1, 1) && func_603(Global_1835011[63 /*74*/].f_1, 1)) && !func_603(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_603(Global_1835011[75 /*74*/].f_1, 1) && !func_603(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_603(Global_1835011[76 /*74*/].f_1, 1) && !func_603(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_603(Global_1835011[40 /*74*/].f_1, 1) && func_603(Global_1835011[41 /*74*/].f_1, 1)) && !func_603(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_603(Global_1835011[62 /*74*/].f_1, 1) && func_603(Global_1835011[63 /*74*/].f_1, 1)) && !func_603(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_603(Global_1835011[65 /*74*/].f_1, 1) && func_603(Global_1835011[66 /*74*/].f_1, 1)) && !func_603(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_930(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1071(&iParam0);
	if (!func_691(iParam0, 0))
	{
		return false;
	}
	if (!func_820(0))
	{
		bParam3 = true;
	}
	if (func_922(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			sVar0 = { func_1065(0) /*4*/ };
			sVar4.f_9 = joaat("SLOTID_NONE");
			if (!func_956(iParam0, &sVar0, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_957(iParam0, &sVar4, joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_1066(iParam0, 1))
			{
				if (!func_956(iParam0, &sVar0, joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_957(iParam0, &sVar4, joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_1072(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_927(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_1070(iParam0))
	{
		iVar28 = func_1073(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_934(bParam4), iParam0, false);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_931(int iParam0, int iParam1)
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

int func_932(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_693(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_779(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_999(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_933(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_1074(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_1075(&sVar0, func_1065(0));
	}
	if (!func_1076(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_1011(iVar18);
	return iVar19;
}

int func_934(bool bParam0)
{
	if (func_350() == -1)
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

int func_935()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

int func_936(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_937(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_350() != -1)
	{
		return;
	}
	iVar0 = func_1077(iParam0);
	fVar1 = func_1078(iParam0);
	if ((Global_1347477.f_117 || !func_571(31)) || !func_1079(iVar0))
	{
		return;
	}
	if (fVar1 <= 0.0f)
	{
		return;
	}
	if (func_1080(iVar0) >= 7)
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
	func_1081(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_581(MISC::VAR_STRING(6, func_1082(iParam0), fVar1), "itemtype_textures", func_1083(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_938(int iParam0)
{
	int iVar0;

	iVar0 = func_724(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_939(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET") /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET") /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET") /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET") /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET") /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET") /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET") /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET") /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET") /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET") /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET") /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET") /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_940(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_790(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

char* func_941(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK" /* GXTEntry: "Check back later" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE" /* GXTEntry: "You have completed Smoking and Other Hobbies" */;
			}
			else if (func_810() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Card Sets Posted" */, func_1084(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ" /* GXTEntry: "~1~ of ~2~ Card Sets Found" */, func_1085(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */);
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION" /* GXTEntry: "Read invitation from Deborah" */);
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT" /* GXTEntry: "Visit Deborah MacGuiness" */);
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK" /* GXTEntry: "Check back later" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE" /* GXTEntry: "You have completed A Test of Faith" */;
			}
			else if (func_981() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Dinosaur Bones Posted" */, func_1086(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ" /* GXTEntry: "~1~ of ~2~ Dinosaur Bones Found" */, func_981(), 30);
			}
			break;
		case joaat("EXOTIC_ITEMS"):
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK" /* GXTEntry: "Check back later" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE" /* GXTEntry: "You have completed Duchesses and Other Animals" */;
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ" /* GXTEntry: "~1~ of ~2~ Exotic Items Collected" */, sParam4, sParam5);
			}
			break;
		case joaat("LEGENDARY_FISH"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */);
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION" /* GXTEntry: "Read invitation from Jeremy" */);
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT" /* GXTEntry: "Visit Jeremy Gill" */);
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK" /* GXTEntry: "Check back later" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE" /* GXTEntry: "You have completed A Fisher of Fish" */;
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ" /* GXTEntry: "~1~ of ~2~ Legendary Fish Caught and Posted" */, func_1087(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */);
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION" /* GXTEntry: "Read invitation from Francis" */);
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT" /* GXTEntry: "Visit Francis Sinclair" */);
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK" /* GXTEntry: "Check back later" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE" /* GXTEntry: "You have completed Geology for Beginners" */;
			}
			else if (func_982() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ" /* GXTEntry: "~1~ of ~2~ Rock Faces Posted" */, func_1088(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ" /* GXTEntry: "~1~ of ~2~ Rock Faces Found" */, func_982(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */);
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION" /* GXTEntry: "Read letter from Ms. Hobbs" */);
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION" /* GXTEntry: "Ms. Hobbs has gone on vacation" */);
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */);
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION" /* GXTEntry: "Read invitation from Ms. Hobbs" */);
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT" /* GXTEntry: "Visit Ms. Hobbs" */);
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE" /* GXTEntry: "Check back at Post Office for reward" */;
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE" /* GXTEntry: "You have completed Wildlife Art Exhibition" */;
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ" /* GXTEntry: "~1~ of ~2~ Carcasses Collected" */, sParam4, func_940(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_942(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == joaat("CIGARETTE_CARDS"))
	{
		if (iParam1 == joaat("COL_CC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_CC_INTRO_PRE") /* GXTEntry: "A New Hobby" */))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_CC_INTRO_PRE") /* GXTEntry: "A New Hobby" */);
			}
		}
	}
	else if (iParam2 == joaat("DINO_BONES"))
	{
		if (iParam1 == joaat("COL_DB_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_DB_INTRO_PRE") /* GXTEntry: "Digging up the Past" */))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_DB_INTRO_PRE") /* GXTEntry: "Digging up the Past" */);
			}
		}
	}
	else if (iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam1 == joaat("COL_RC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_RC_INTRO_PRE") /* GXTEntry: "Rock Carvings" */))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_RC_INTRO_PRE") /* GXTEntry: "Rock Carvings" */);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return true;
}

bool func_943(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_944(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_945(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_1089(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_777(iVar2, 1, 0) || func_1091(func_1090(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_949(func_1089(iVar0))), func_949(func_1089(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_981() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1092(iVar0)), func_1092(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1086() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1092(iVar0)), func_1092(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1092(iVar0)), func_1092(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("EXOTIC_ITEMS"))
		{
			iVar2 = func_992(iParam3, func_1093(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_988(iVar2) - iParam7) >= func_940(iParam3, func_1094(iVar0));
				}
				else
				{
					bVar1 = func_988(iVar2) >= func_940(iParam3, func_1094(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_988(iVar2) + iParam7) >= func_940(iParam3, func_1094(iVar0));
			}
			else
			{
				bVar1 = func_988(iVar2) >= func_940(iParam3, func_1094(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1095(iVar2)), func_1095(iVar2), bVar1, true, false);
		}
		if (iParam2 == joaat("LEGENDARY_FISH"))
		{
			if (func_1096(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("LEGENDARY_FISH"), 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1097(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_1097(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_982() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1098(iVar0)), func_1098(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1088() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1098(iVar0)), func_1098(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1098(iVar0)), func_1098(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_992(iParam3, func_1093(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_988(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1099(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1099(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1100(iVar2)), func_1100(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_946(int iParam0, int iParam1, int iParam2, int iParam3)
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
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED" /* GXTEntry: "All Card Sets Posted" */), "COL_CC_ITEMS_DELIVERED" /* GXTEntry: "All Card Sets Posted" */, bVar0, true, false);
	}
	if (iParam2 == joaat("EXOTIC_ITEMS"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED" /* GXTEntry: "All Items Delivered" */), "COL_EX_ITEMS_DELIVERED" /* GXTEntry: "All Items Delivered" */, bVar0, true, false);
	}
	if (iParam2 == joaat("LEGENDARY_FISH"))
	{
		if (func_1087() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED" /* GXTEntry: "All Legendary Fish Posted" */), "COL_LF_ITEMS_DELIVERED" /* GXTEntry: "All Legendary Fish Posted" */, bVar0, true, false);
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
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED" /* GXTEntry: "All Carcasses Mailed" */), "COL_TX_CARCASSES_MAILED" /* GXTEntry: "All Carcasses Mailed" */, bVar0, true, false);
	}
	return true;
}

bool func_947(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_463(func_1101(0)) && ((func_1102(0) == 1 || func_1102(0) == 8) || func_1102(0) == 6))
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

int func_948(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

char* func_949(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_GUN_SET") /* GXTEntry: "Cigarette Cards Famous Gunslingers" */:
			return "COL_CC_GUN_SET" /* GXTEntry: "Famous Gunslingers Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_ART_SET") /* GXTEntry: "Cigarette Cards Artists & Poets" */:
			return "COL_CC_ART_SET" /* GXTEntry: "Artists & Poets Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_LND_SET") /* GXTEntry: "Cigarette Cards Vistas of America" */:
			return "COL_CC_LND_SET" /* GXTEntry: "Vistas of America Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_GRL_SET") /* GXTEntry: "Cigarette Cards Gems Of Beauty" */:
			return "COL_CC_GRL_SET" /* GXTEntry: "Gems Of Beauty Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_PLT_SET") /* GXTEntry: "Cigarette Cards Flora of America" */:
			return "COL_CC_PLT_SET" /* GXTEntry: "Flora of America Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_ACT_SET") /* GXTEntry: "Cigarette Cards Stars of the Stage" */:
			return "COL_CC_ACT_SET" /* GXTEntry: "Stars of the Stage Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_AML_SET") /* GXTEntry: "Cigarette Cards Fauna of North America" */:
			return "COL_CC_AML_SET" /* GXTEntry: "Fauna of North America Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_VEH_SET") /* GXTEntry: "Cigarette Cards Marvels of Travel" */:
			return "COL_CC_VEH_SET" /* GXTEntry: "Marvels of Travel Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_SPT_SET") /* GXTEntry: "Cigarette Cards The World\'s Champions" */:
			return "COL_CC_SPT_SET" /* GXTEntry: "World\'s Champions Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_INV_SET") /* GXTEntry: "Cigarette Cards Amazing Inventions" */:
			return "COL_CC_INV_SET" /* GXTEntry: "Amazing Inventions Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_HOR_SET") /* GXTEntry: "Cigarette Cards Breeds of Horses" */:
			return "COL_CC_HOR_SET" /* GXTEntry: "Breeds of Horses Card Set" */;
		case joaat("DOCUMENT_CIG_CARD_PAM_SET") /* GXTEntry: "Cigarette Cards Prominent Americans" */:
			return "COL_CC_PAM_SET" /* GXTEntry: "Prominent Americans Card Set" */;
		default:
			break;
	}
	return "";
}

int func_950(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

void func_951(int iParam0)
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

void func_952(int iParam0)
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
			func_1103(1);
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
			func_1104(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1104(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1104(3);
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
			func_1105(1);
			break;
		case 34:
			func_1106(1);
			break;
		case 35:
			func_1107(1);
			break;
		case 36:
			break;
		case 37:
			func_1108(0);
			break;
		case 38:
			func_1109(0);
			break;
		case 39:
			func_1110(0);
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
			if ((!Global_1879534 && func_697()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_950("DEADEYE_ABILITY_UNLOCK" /* GXTEntry: "Dead Eye Ability Unlocked" */, "DEADEYE_ABILITY_MANUAL_PAINT" /* GXTEntry: "Manual Painting" */, joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_651(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_697()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_950("DEADEYE_ABILITY_UNLOCK" /* GXTEntry: "Dead Eye Ability Unlocked" */, "DEADEYE_ABILITY_STAY_ACTIVE" /* GXTEntry: "Continued Free Fire" */, joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_651(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_697()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_950("DEADEYE_ABILITY_UNLOCK" /* GXTEntry: "Dead Eye Ability Unlocked" */, "DEADEYE_ABILITY_FATAL" /* GXTEntry: "Fatal Region Highlights" */, joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_651(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_697()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_950("DEADEYE_ABILITY_UNLOCK" /* GXTEntry: "Dead Eye Ability Unlocked" */, "DEADEYE_ABILITY_CRITICAL" /* GXTEntry: "Critical Region Highlights" */, joaat("HUD_TOASTS"), joaat("TOAST_PLAYER_DEADEYE"), -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_651(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_350() == -1)
			{
				if (!func_1024(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_1111(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_120())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000"); /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_777(iVar0, 1, 0))
					{
						func_864(iVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_843(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_350() == -1)
			{
				if (!func_777(1013902307, 1, 0))
				{
					func_864(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_350() == -1)
			{
				if (!func_777(1013902307, 1, 0))
				{
					func_864(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_777(142640135, 1, 0))
				{
					func_864(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_350() == -1)
			{
				if (!func_777(786809402, 1, 0))
				{
					func_864(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_350() == -1)
			{
				if (!func_777(786809402, 1, 0))
				{
					func_864(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_777(-518019409, 1, 0))
				{
					func_864(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_1112();
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

bool func_953(int iParam0)
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

bool func_954(int iParam0)
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

int func_955(int iParam0, int iParam1)
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
			return joaat("CLOTHING_STYLE_M_R1_OFFHAND_000_CATALOGUEDESC") /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
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
			return joaat("SLOTID_WEAPON_0") /* GXTEntry: "Right" */;
		case 399:
			return joaat("SLOTID_WEAPON_1") /* GXTEntry: "Left" */;
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
			return joaat("SLOTID_EMOTE_DANCE");
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

bool func_956(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1073(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_957(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1113(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_958(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_691(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_934(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_959(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_1114(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1069(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_820(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_934(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_960(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_1115(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_961(int iParam0)
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
	iVar2 = func_449();
	func_884(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_962(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1061(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW") /* GXTEntry: "Arrows" */) <= 0)
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

bool func_963(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_964(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_965(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_571(50))
			{
				if (!func_571(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_571(51))
			{
				if (!func_571(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_966()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_967(int iParam0, int iParam1, var uParam2)
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

	if (!func_691(iParam1, 0))
	{
		return false;
	}
	if (func_693(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_350() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_816(iParam1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		return true;
	}
	iVar4 = func_1116(iParam1);
	if (iVar4 == joaat("MP_COMPONENT_TYPE_END"))
	{
		*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_ITEM_META_TYPE_MISSING");
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_779(iParam1, joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar5 = func_914(iVar4, 1);
		if (func_1117(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_META_PED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_SHIRT_DOES_NOT_SUPPORT_NECKTIES"); /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = func_816(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS"); /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_779(iParam1, -1638171711))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_CHAPS_DO_NOT_SUPPORT_THIS"); /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_2"):
			iVar5 = 36;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS"); /* GXTEntry: "You are currently not wearing any boots." */
				return false;
			}
			if (PED::_IS_META_PED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOT_DOES_NOT_SUPPORT_SPURS"); /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE"):
			if (func_775(joaat("CI_CATEGORY_WARDROBE_COATS"), &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
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
				iVar10 = func_1118(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1118(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; // curOff = 583
				iVar3 = func_816(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_779(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS"); /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == joaat("CI_CATEGORY_WARDROBE_CHAPS") || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_1119(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS"); /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS"); /* GXTEntry: "You are currently not wearing any boots." */
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

void func_968()
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), (1.0f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_969()
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

int func_970()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_777(func_1120(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_971(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD") /* GXTEntry: "Gold Jointed Bracelet" */:
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS") /* GXTEntry: "Vintage Civil War Handcuffs" */:
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH") /* GXTEntry: "Legendary Alligator Tooth" */:
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH") /* GXTEntry: "Alligator Tooth Talisman" */;
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW") /* GXTEntry: "Legendary Bear Claw" */:
		case joaat("PROVISION_BRACELET_SILVER") /* GXTEntry: "Silver Chain Bracelet" */:
		case joaat("PROVISION_RC_QUARTZ_CHUNK") /* GXTEntry: "Quartz Chunk" */:
			return joaat("PROVISION_TALISMAN_BEAR_CLAW") /* GXTEntry: "Bear Claw Talisman" */;
		case joaat("PROVISION_RF_WOOD_COBALT") /* GXTEntry: "Cobalt Petrified Wood" */:
		case joaat("PROVISION_EARRING_GOLD") /* GXTEntry: "Gold Earring" */:
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY") /* GXTEntry: "Legendary Boar Tusk" */:
			return joaat("PROVISION_TALISMAN_BOAR_TUSK") /* GXTEntry: "Boar Tusk Talisman" */;
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY") /* GXTEntry: "Legendary Bison Horn" */:
		case joaat("PROVISION_EARRING_SILVER") /* GXTEntry: "Silver Earring" */:
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT") /* GXTEntry: "Abalone Shell Fragment" */:
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN") /* GXTEntry: "Bison Horn Talisman" */;
		case joaat("PROVISION_OLD_BRASS_COMPASS") /* GXTEntry: "Old Brass Compass" */:
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW") /* GXTEntry: "Raven Claw Talisman" */;
	}
	return 0;
}

bool func_972(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH") /* GXTEntry: "Alligator Tooth Talisman" */:
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS"); /* GXTEntry: "Vintage Civil War Handcuffs" */
				iVar1 = joaat("PROVISION_BRACELET_GOLD"); /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"); /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = joaat("PROVISION_BRACELET_GOLD"); /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"); /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS"); /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW") /* GXTEntry: "Bear Claw Talisman" */:
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK"); /* GXTEntry: "Quartz Chunk" */
				iVar1 = joaat("PROVISION_BRACELET_SILVER"); /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW"); /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = joaat("PROVISION_BRACELET_SILVER"); /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW"); /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK"); /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK") /* GXTEntry: "Boar Tusk Talisman" */:
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT"); /* GXTEntry: "Cobalt Petrified Wood" */
				iVar1 = joaat("PROVISION_EARRING_GOLD"); /* GXTEntry: "Gold Earring" */
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY"); /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = joaat("PROVISION_EARRING_GOLD"); /* GXTEntry: "Gold Earring" */
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY"); /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT"); /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN") /* GXTEntry: "Bison Horn Talisman" */:
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"); /* GXTEntry: "Abalone Shell Fragment" */
				iVar1 = joaat("PROVISION_EARRING_SILVER"); /* GXTEntry: "Silver Earring" */
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY"); /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = joaat("PROVISION_EARRING_SILVER"); /* GXTEntry: "Silver Earring" */
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY"); /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"); /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_777(iVar0, 1, 0) && func_777(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_973(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY") /* GXTEntry: "Legendary Beaver Tooth" */:
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH") /* GXTEntry: "Beaver Tooth Trinket" */;
		case joaat("PROVISION_BISON_HORN_LEGENDARY") /* GXTEntry: "Legendary Tatanka Bison Horn" */:
			return joaat("PROVISION_TRINKET_BISON_HORN") /* GXTEntry: "Tatanka Bison Horn Trinket" */;
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Buck Antler" */:
			return joaat("PROVISION_TRINKET_BUCK_ANTLER") /* GXTEntry: "Buck Antler Trinket" */;
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY") /* GXTEntry: "Legendary Cougar Fang" */:
			return joaat("PROVISION_TRINKET_COUGAR_FANG") /* GXTEntry: "Cougar Fang Trinket" */;
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY") /* GXTEntry: "Legendary Coyote Fang" */:
			return joaat("PROVISION_TRINKET_COYOTE_FANG") /* GXTEntry: "Coyote Fang Trinket" */;
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Elk Antler" */:
			return joaat("PROVISION_TRINKET_ELK_ANTLER") /* GXTEntry: "Elk Antler Trinket" */;
		case joaat("PROVISION_FOX_CLAW_LEGENDARY") /* GXTEntry: "Legendary Fox Claw" */:
			return joaat("PROVISION_TRINKET_FOX_CLAW") /* GXTEntry: "Fox Claw Trinket" */;
		case joaat("PROVISION_LIONS_PAW") /* GXTEntry: "Lion\'s Paw" */:
			return joaat("PROVISION_TRINKET_LION_PAW") /* GXTEntry: "Lion\'s Paw Trinket" */;
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Moose Antler" */:
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER") /* GXTEntry: "Moose Antler Trinket" */;
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY") /* GXTEntry: "Legendary Panther Eye" */:
			return joaat("PROVISION_TRINKET_PANTHER_EYE") /* GXTEntry: "Panther\'s Eye Trinket" */;
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Pronghorn Horn" */:
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER") /* GXTEntry: "Pronghorn Horn Trinket" */;
		case joaat("PROVISION_RAM_HORN_LEGENDARY") /* GXTEntry: "Legendary Ram Horn" */:
			return joaat("PROVISION_TRINKET_RAM_HORN") /* GXTEntry: "Ram Horn Trinket" */;
		case joaat("PROVISION_WOLF_HEART_LEGENDARY") /* GXTEntry: "Legendary Wolf Heart" */:
			return joaat("PROVISION_TRINKET_WOLF_HEART") /* GXTEntry: "Wolf Heart Trinket" */;
		default:
			break;
	}
	return 0;
}

bool func_974(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1121(iParam0);
	if (iVar0 != -15)
	{
		func_884(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1122(iVar0, 1);
	}
	return false;
}

void func_975(int iParam0)
{
	Global_40.f_12004.f_6 |= iParam0;
}

void func_976(int iParam0)
{
	Global_40.f_12004.f_1 |= iParam0;
}

void func_977(int iParam0)
{
	Global_40.f_12004.f_3 |= iParam0;
}

void func_978(int iParam0)
{
	Global_40.f_12004.f_5 |= iParam0;
}

int func_979(int iParam0)
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
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE"); /* GXTEntry: "Little Egret Plume" */
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH"); /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY"); /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"); /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER"); /* GXTEntry: "Heron Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"); /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN"); /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG"); /* GXTEntry: "Gator Egg" */
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"); /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR"); /* GXTEntry: "Cigar Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST"); /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER"); /* GXTEntry: "Spoonbill Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"); /* GXTEntry: "Night Scented Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL"); /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER"); /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL"); /* GXTEntry: "Clamshell Orchid" */
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS"); /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS"); /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS"); /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_988(iVar9);
	iVar2 = func_988(iVar10);
	iVar3 = func_988(iVar11);
	iVar5 = func_989(iVar9);
	iVar6 = func_989(iVar10);
	iVar7 = func_989(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_988(iVar12);
		iVar8 = func_989(iVar12);
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

void func_980(int iParam0)
{
	Global_40.f_12004.f_2 |= iParam0;
}

int func_981()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1123(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_982()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

bool func_983(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"); /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"); /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"); /* GXTEntry: "Perfect Rat Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"); /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"); /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"); /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"); /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"); /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"); /* GXTEntry: "Perfect Opossum Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"); /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"); /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"); /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"); /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"); /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"); /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"); /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"); /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"); /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"); /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"); /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"); /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"); /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"); /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"); /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"); /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"); /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"); /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"); /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"); /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"); /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_1099(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1099(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1099(iVar0))
		{
			*sParam2++;
		}
		if (func_1099(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_1099(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1099(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1099(iVar0))
		{
			*sParam2++;
		}
		if (func_1099(iVar1))
		{
			*sParam2++;
		}
		if (func_1099(iVar0) && func_1099(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_1099(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1099(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1099(iVar0))
		{
			*sParam2++;
		}
		if (func_1099(iVar1))
		{
			*sParam2++;
		}
		if (func_1099(iVar2))
		{
			*sParam2++;
		}
		if ((func_1099(iVar0) && func_1099(iVar1)) && func_1099(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1099(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1099(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1099(iVar0))
		{
			*sParam2++;
		}
		if (func_1099(iVar1))
		{
			*sParam2++;
		}
		if (func_1099(iVar2))
		{
			*sParam2++;
		}
		if (func_1099(iVar3))
		{
			*sParam2++;
		}
		if (((func_1099(iVar0) && func_1099(iVar1)) && func_1099(iVar2)) && func_1099(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_984(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_1124(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1125(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1125(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1125(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_1125(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1124(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1125(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1125(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_1125(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1125(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1124(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1125(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_1125(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1125(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1125(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1124(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_1125(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_1125(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_1125(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_1124(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_1126();
			func_1124(iParam0);
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
			func_1127();
			func_1124(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_1125(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_1125(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_1124(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_1125(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_1125(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_1124(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_1125(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_1125(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_1124(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_1125(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_1125(joaat("WS_RHODES_GRAVE_OPEN"));
			func_1124(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_1125(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_1125(joaat("WS_RHODES_GRAVE_OPEN"));
			func_1124(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_1125(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_1125(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_1124(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_1125(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_1124(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_1125(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_1124(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_1125(joaat("WS_UTOPIA_TREE_MISSION"));
			func_1125(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_1125(joaat("WS_UTOPIA_TREE_STUMP"));
			func_1124(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_1125(joaat("WS_UTOPIA_TREE_STANDING"));
			func_1125(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_1125(joaat("WS_UTOPIA_TREE_STUMP"));
			func_1124(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_1125(joaat("WS_UTOPIA_TREE_STANDING"));
			func_1125(joaat("WS_UTOPIA_TREE_MISSION"));
			func_1125(joaat("WS_UTOPIA_TREE_STUMP"));
			func_1124(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_1125(joaat("WS_UTOPIA_TREE_STANDING"));
			func_1125(joaat("WS_UTOPIA_TREE_MISSION"));
			func_1125(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_1124(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_1125(joaat("WS_MICAH_CAMP"));
			func_1125(joaat("WS_MICAH_CAMP_POST"));
			func_1124(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_1125(joaat("WS_MICAH_CAMP_EMPTY"));
			func_1125(joaat("WS_MICAH_CAMP_POST"));
			func_1124(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_1125(joaat("WS_MICAH_CAMP_EMPTY"));
			func_1125(joaat("WS_MICAH_CAMP"));
			func_1124(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_1125(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_1124(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_1125(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_1125(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_628(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_1124(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_1125(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_1125(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_1124(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_1125(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_1124(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_1125(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1124(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_1125(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1124(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_1125(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1124(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_1125(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1124(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_1125(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1125(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1124(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_1125(joaat("WS_NEW_COM_BANK_START"));
			func_1125(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1125(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1125(joaat("WS_NEW_COM_BANK_POST"));
			func_1124(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_1125(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1125(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1125(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1125(joaat("WS_NEW_COM_BANK_POST"));
			func_1124(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_1125(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1125(joaat("WS_NEW_COM_BANK_START"));
			func_1125(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1125(joaat("WS_NEW_COM_BANK_POST"));
			func_1124(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_1125(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1125(joaat("WS_NEW_COM_BANK_START"));
			func_1125(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1125(joaat("WS_NEW_COM_BANK_POST"));
			func_1124(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_1125(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1125(joaat("WS_NEW_COM_BANK_START"));
			func_1125(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1125(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1124(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_1125(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_1125(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_1125(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_1124(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_1125(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_1125(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_1125(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_1124(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_1125(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_1125(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_1125(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_1124(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_1125(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_1125(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_1125(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_1124(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_1124(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1124(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1124(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1125(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1124(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_1124(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_1124(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_1124(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_1124(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1125(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_1124(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_1125(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_1124(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_1125(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_1124(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_1125(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_1124(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_1125(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_1124(0);
			func_1125(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_1125(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_1124(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_1125(0);
			func_1125(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_1124(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_1125(0);
			func_1125(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_1124(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_1125(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_1124(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_1125(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_1124(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_1124(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_1124(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_1124(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1125(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_1124(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_1125(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_1125(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_1125(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_1124(joaat("WS_SHADY_BELLE_ABANDON"));
			func_1125(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_1125(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_1124(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_1125(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_1125(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_1124(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_1125(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_1124(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_1125(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_628(iParam0))
				{
					func_1124(iParam0);
				}
			}
			else if (func_628(iParam0))
			{
				func_1125(iParam0);
			}
			break;
	}
}

void func_985(int iParam0)
{
	if (!func_1128(iParam0))
	{
		func_1130(func_1129(iParam0));
	}
}

int func_986()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1128(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("EXOTIC_ITEMS"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_987(int iParam0, int iParam1, int iParam2)
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
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE"); /* GXTEntry: "Little Egret Plume" */
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH"); /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY"); /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"); /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER"); /* GXTEntry: "Heron Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"); /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN"); /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG"); /* GXTEntry: "Gator Egg" */
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"); /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR"); /* GXTEntry: "Cigar Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST"); /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER"); /* GXTEntry: "Spoonbill Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"); /* GXTEntry: "Night Scented Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL"); /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER"); /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL"); /* GXTEntry: "Clamshell Orchid" */
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS"); /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS"); /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS"); /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_988(iVar9);
	iVar2 = func_988(iVar10);
	iVar3 = func_988(iVar11);
	iVar5 = func_989(iVar9);
	iVar6 = func_989(iVar10);
	iVar7 = func_989(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_988(iVar12);
		iVar8 = func_989(iVar12);
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

int func_988(int iParam0)
{
	int iVar0;

	if (func_777(iParam0, 1, 0))
	{
		iVar0 = func_799(iParam0, 0, 0);
	}
	return iVar0;
}

int func_989(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE") /* GXTEntry: "Little Egret Plume" */:
			return 5;
		case joaat("PROVISION_EGRET_PLUME_REDDISH") /* GXTEntry: "Reddish Egret Plume" */:
			return 5;
		case joaat("PROVISION_EGRET_PLUME_SNOWY") /* GXTEntry: "Snowy Egret Plume" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT") /* GXTEntry: "Lady of the Night Orchid" */:
			return 15;
		case joaat("PROVISION_HERON_FEATHER") /* GXTEntry: "Heron Plume" */:
			return 20;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER") /* GXTEntry: "Lady Slipper Orchid" */:
			return 7;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN") /* GXTEntry: "Moccasin Flower Orchid" */:
			return 10;
		case joaat("PROVISION_GATOR_EGG") /* GXTEntry: "Gator Egg" */:
			return 25;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") /* GXTEntry: "Acuna\'s Star Orchid" */:
			return 3;
		case joaat("PROVISION_RO_FLOWER_CIGAR") /* GXTEntry: "Cigar Orchid" */:
			return 7;
		case joaat("PROVISION_RO_FLOWER_GHOST") /* GXTEntry: "Ghost Orchid" */:
			return 5;
		case joaat("PROVISION_SPOONBILL_FEATHER") /* GXTEntry: "Spoonbill Plume" */:
			return 30;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED") /* GXTEntry: "Night Scented Orchid" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL") /* GXTEntry: "Rat Tail Orchid" */:
			return 10;
		case joaat("PROVISION_RO_FLOWER_SPIDER") /* GXTEntry: "Spider Orchid" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL") /* GXTEntry: "Clamshell Orchid" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_DRAGONS") /* GXTEntry: "Dragon\'s Mouth Orchid" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_QUEENS") /* GXTEntry: "Queen\'s Orchid" */:
			return 5;
		case joaat("PROVISION_RO_FLOWER_SPARROWS") /* GXTEntry: "Sparrow\'s Egg Orchid" */:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_990(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0);
}

void func_991(int iParam0, int iParam1)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, iParam1);
}

int func_992(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_790(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

void func_993(int iParam0, int iParam1, char[4] cParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_992(iParam1, 5) || iParam0 == func_992(iParam1, 6)) || iParam0 == func_992(iParam1, 7)) || iParam0 == func_992(iParam1, 8)) || iParam0 == func_992(iParam1, 9))
	{
		func_983(iParam1, iParam0, &cParam2, 0, iParam3, bParam4);
		func_811(51, 0, 0, iParam1, cParam2, 0, -1, 0);
		func_813(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_994(int iParam0, int iParam1, bool bParam2)
{
	char[] cVar0[8];

	cVar0 = 1;
	if ((((iParam0 == func_992(iParam1, 5) || iParam0 == func_992(iParam1, 6)) || iParam0 == func_992(iParam1, 7)) || iParam0 == func_992(iParam1, 8)) || iParam0 == func_992(iParam1, 9))
	{
		if (func_983(iParam1, iParam0, &cVar0, 0, 0, 0))
		{
			func_811(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_813(51, 0, 0, cVar0, func_940(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_811(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_813(51, 0, 0, cVar0, func_940(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_995()
{
	if (func_938(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_996(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

void func_997(int iParam0)
{
	if (!func_1131(iParam0))
	{
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	}
}

void func_998(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(iParam0, 1);
}

void func_999(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX") /* GXTEntry: "Revolver Cartridges - Regular" */:
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER"); /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED") /* GXTEntry: "Opened Revolver Cartridges" */:
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER"); /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS") /* GXTEntry: "Revolver Cartridges - Express" */:
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS"); /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Revolver Cartridges - High Velocity" */:
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY"); /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX") /* GXTEntry: "Pistol Cartridges - Regular" */:
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL"); /* GXTEntry: "Pistol Cartridges - Regular" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED") /* GXTEntry: "Opened Pistol Cartridges" */:
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL"); /* GXTEntry: "Pistol Cartridges - Regular" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS") /* GXTEntry: "Pistol Cartridges - Express" */:
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS"); /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Pistol Cartridges - High Velocity" */:
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY"); /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX") /* GXTEntry: "Rifle Cartridges - Regular" */:
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE"); /* GXTEntry: "Rifle Cartridges - Regular" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED") /* GXTEntry: "Opened Rifle Cartridges" */:
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE"); /* GXTEntry: "Rifle Cartridges - Regular" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS") /* GXTEntry: "Rifle Cartridges - Express" */:
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS"); /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Rifle Cartridges - High Velocity" */:
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY"); /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX") /* GXTEntry: "Repeater Cartridges - Regular" */:
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER"); /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED") /* GXTEntry: "Opened Repeater Cartridges" */:
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER"); /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS") /* GXTEntry: "Repeater Cartridges - Express" */:
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS"); /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY") /* GXTEntry: "Repeater Cartridges - High Velocity" */:
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY"); /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX") /* GXTEntry: "Shotgun Shells - Regular" */:
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN"); /* GXTEntry: "Shotgun Shells - Regular" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED") /* GXTEntry: "Opened Shotgun Shells" */:
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN"); /* GXTEntry: "Shotgun Shells - Regular" */
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG") /* GXTEntry: "Shotgun - Slug" */:
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG"); /* GXTEntry: "Shotgun - Slug" */
			break;
		case joaat("AMMO_22_AMMOBOX") /* GXTEntry: "Rifle Cartridges - Varmint" */:
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22"); /* GXTEntry: "Rifle Cartridges - Varmint" */
			break;
	}
}

int func_1000(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_1132(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

bool func_1001(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_1133();
	if (iParam2 == 39)
	{
		sVar0 = { func_926(iParam0, 1, 0) /*5*/ };
		iParam2 = func_914(func_1000(sVar0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_779(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && func_1117(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1004((1 << 15)) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_1134(func_1132(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1135(iParam2);
	func_1136(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_1137(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_1137(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_1138(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_1139(iParam0, iParam2, iParam1, func_350() != -1);
	if (bParam4)
	{
		func_1140(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_1140(&(Global_1946054.f_1378), 1, 0);
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
				func_1141(func_1132(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1002(bool bParam0, bool bParam1, bool bParam2)
{
	func_1142(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_1003(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_1143((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_1144(sVar0);
}

bool func_1004(int iParam0)
{
	return (Global_1946054 & iParam0) != 0;
}

void func_1005()
{
	func_1145(&(Global_1946054.f_2776));
	func_1146((1 << 15));
	func_1141(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

int func_1006(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_914(iParam0, 1);
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

void func_1007(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_1147(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_1148(sVar0);
}

void func_1008(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = iParam2;
	sVar0.f_0 = iParam0;
	sVar0.f_2 = iParam1;
	func_1148(sVar0);
}

bool func_1009(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_934(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1010(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1011(int iParam0)
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

float func_1012()
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

	if (func_1149())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1150(2);
	}
	if (Global_1347477.f_119)
	{
		return func_1150(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1151();
	fVar2 = func_1152();
	fVar3 = func_1153();
	fVar4 = func_1154();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_1155());
	fVar7 = (func_1150(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1156(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1157(3, fVar9, fVar9 > 100.0f);
	return func_1158(fVar7, -100.0f, 100.0f);
}

float func_1013()
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

	if (func_1149())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1150(1);
	}
	if (Global_1347477.f_119)
	{
		return func_1150(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1151();
	fVar2 = func_1152();
	fVar3 = func_1153();
	fVar4 = func_1154();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_1155());
	fVar7 = (func_1150(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1156(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1157(2, fVar9, fVar9 > 100.0f);
	return func_1158(fVar7, -100.0f, 100.0f);
}

float func_1014()
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

	if (func_1149())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1150(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_1159())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_1160())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_1150(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1151();
	fVar2 = func_1152();
	fVar3 = func_1153();
	fVar4 = func_1154();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_1155());
	fVar7 = (func_1150(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1156(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1157(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_1150(0);
	}
	return func_1158(fVar7, -100.0f, 100.0f);
}

bool func_1015(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_1016(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_691(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_930(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_820(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_934(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1017(int iParam0, bool bParam1)
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
				return func_1161();
			}
			break;
	}
	return 0;
}

int func_1018(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_FANCY_SUIT") /* GXTEntry: "Fancy Suit" */:
			return 14;
		case joaat("CLOTHING_GUNSLINGER_OUTFIT") /* GXTEntry: "The Gunslinger" */:
			return 6;
		case joaat("CLOTHING_WINTER_OUTFIT") /* GXTEntry: "Winter Outfit" */:
			return 7;
		case joaat("CLOTHING_WARM_WEATHER_OUTFIT") /* GXTEntry: "The Summer Gunslinger" */:
			return 9;
		case joaat("CLOTHING_ISLAND_OUTFIT") /* GXTEntry: "Island Outfit" */:
			return 10;
		case joaat("CLOTHING_ROBBERY_OUTFIT") /* GXTEntry: "Robbery Outfit" */:
			return 15;
		case joaat("CLOTHING_HEIST_OUTFIT") /* GXTEntry: "The Wittemore" */:
			return 16;
		case joaat("CLOTHING_POLICE_OUTFIT") /* GXTEntry: "Police Outfit" */:
			return 20;
		case joaat("CLOTHING_CUSTOM_ONE_OUTFIT") /* GXTEntry: "Custom Outfit" */:
			return 0;
		case joaat("CLOTHING_OUTFIT_OWNED_001") /* GXTEntry: "Brawler\'s Outfit" */:
			return 24;
		case joaat("CLOTHING_OUTFIT_OWNED_002") /* GXTEntry: "The Ruffian" */:
			return 25;
		case joaat("CLOTHING_OUTFIT_OWNED_003") /* GXTEntry: "The Rebel" */:
			return 26;
		case joaat("CLOTHING_OUTFIT_OWNED_005") /* GXTEntry: "The Innocent" */:
			return 27;
		case joaat("CLOTHING_OUTFIT_OWNED_006") /* GXTEntry: "The Pursuer" */:
			return 28;
		case joaat("CLOTHING_SP_OUTFIT_SONY_001") /* GXTEntry: "The Grizzlies Outlaw" */:
			return 21;
		case joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001") /* GXTEntry: "The Nuevo Paraiso" */:
			return 22;
		case 1784889667:
			return 13;
		case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT") /* GXTEntry: "The Winter Gunslinger" */:
			return 8;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_ONE") /* GXTEntry: "Saved Custom Outfit One" */:
			return 1;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_TWO") /* GXTEntry: "Saved Custom Outfit Two" */:
			return 2;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_THREE") /* GXTEntry: "Saved Custom Outfit Three" */:
			return 3;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR") /* GXTEntry: "Saved Custom Outfit Four" */:
			return 4;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE") /* GXTEntry: "Saved Custom Outfit Five" */:
			return 5;
		case 1902428294 /* GXTEntry: "The Wittemore" */:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332 /* GXTEntry: "Island Outfit" */:
			return 11;
		case 1788874135 /* GXTEntry: "Island Outfit Shackles" */:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555 /* GXTEntry: "The Homesteader" */:
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
		case joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER") /* GXTEntry: "The Winter Cowboy" */:
			return 70;
		case 890706995 /* GXTEntry: "The Cowhand" */:
			return 93;
		case 1156438275 /* GXTEntry: "The Rancher" */:
			return 90;
		case joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT") /* GXTEntry: "The Rancher" */:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER") /* GXTEntry: "The Cowboy" */:
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
		case joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM") /* GXTEntry: "The Homesteader" */:
			return 65;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H") /* GXTEntry: "The Chevalier" */:
			return 29;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L") /* GXTEntry: "The Heartlands" */:
			return 30;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H") /* GXTEntry: "The Gambler" */:
			return 31;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L") /* GXTEntry: "The Earl" */:
			return 32;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H") /* GXTEntry: "The McLaughlin" */:
			return 33;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L") /* GXTEntry: "The Josiah" */:
			return 34;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H") /* GXTEntry: "The Farrier" */:
			return 35;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L") /* GXTEntry: "The Donegal" */:
			return 36;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H") /* GXTEntry: "The Bulldogger" */:
			return 37;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L") /* GXTEntry: "The Ranch Hand" */:
			return 38;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H") /* GXTEntry: "The Scrapper" */:
			return 39;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L") /* GXTEntry: "The Armadillo" */:
			return 40;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H") /* GXTEntry: "The Valentine" */:
			return 41;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L") /* GXTEntry: "The Vaquero" */:
			return 42;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H") /* GXTEntry: "The Dewberry Creek" */:
			return 43;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L") /* GXTEntry: "The Clairmont" */:
			return 44;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H") /* GXTEntry: "The Roscoe" */:
			return 45;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L") /* GXTEntry: "The Estate Boss" */:
			return 46;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H") /* GXTEntry: "The Drover" */:
			return 47;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L") /* GXTEntry: "The Calumet" */:
			return 48;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H") /* GXTEntry: "The Cowpuncher" */:
			return 49;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L") /* GXTEntry: "The Tumbleweed" */:
			return 50;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H") /* GXTEntry: "The Drifter" */:
			return 51;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L") /* GXTEntry: "The Leatherman" */:
			return 52;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H") /* GXTEntry: "The Cumberland" */:
			return 53;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L") /* GXTEntry: "The Millesani" */:
			return 54;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H") /* GXTEntry: "The Faulkton" */:
			return 55;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L") /* GXTEntry: "The Dolton" */:
			return 56;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H") /* GXTEntry: "The Corson" */:
			return 57;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L") /* GXTEntry: "The Saint Denis" */:
			return 58;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H") /* GXTEntry: "The Deauville" */:
			return 59;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L") /* GXTEntry: "The Bretagne" */:
			return 60;
		case joaat("CLOTHING_SP_NUDE"):
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_1019(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1020(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_1019(iParam0))
	{
		return;
	}
	if (func_1162(iParam0))
	{
		return;
	}
	if (!func_1163(iParam0))
	{
		func_1164(iParam0, 1, 0);
	}
	iVar0 = func_1165(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1166(iParam0, (1 << 9)))
		{
			func_1003(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1167() && !bParam1) && !func_241(0, 0, 1))
	{
		func_558(MISC::VAR_STRING(10, "OUT_JOURN_DONE" /* GXTEntry: "~1~ completed." */, MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1168(iParam0, 6);
	if (bParam2)
	{
		if (!func_241(0, 0, 1))
		{
			func_609(1, 4);
		}
	}
}

int func_1021()
{
	return Global_1946054.f_1;
}

bool func_1022(int iParam0, bool bParam1)
{
	return func_1017(iParam0, 0) < func_1169(iParam0, bParam1);
}

bool func_1023(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_816(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1024(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_914(iParam0, 1) /*3*/] != Global_1946054.f_57[func_914(iParam0, 1) /*11*/];
}

void func_1025(int iParam0, int iParam1)
{
	if (func_779(iParam1, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_1170(iParam1, 0);
	}
	else if (func_779(iParam1, 930141731))
	{
		func_1170(iParam1, 1);
		func_1171(iParam0);
	}
}

void func_1026(var uParam0, int iParam1)
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

int func_1027(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1172(uParam1);
	LOCAL_STORE_S(&uVar0, iParam0);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	sVar1.f_2.f_1 = 10;
	sVar1.f_0 = iParam3;
	sVar1.f_2 = { *uParam1 /*12*/ };
	func_1173(uParam2, iParam0, sVar1);
	return 1;
}

int func_1028(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_1029(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL" /* GXTEntry: "Bluegill" */;
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH" /* GXTEntry: "Bullhead Catfish" */;
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL" /* GXTEntry: "Chain Pickerel" */;
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH" /* GXTEntry: "Channel Catfish" */;
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON" /* GXTEntry: "Lake Sturgeon" */;
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS" /* GXTEntry: "Largemouth Bass" */;
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR" /* GXTEntry: "Longnose Gar" */;
		case 7:
			return "PROVISION_FISH_MUSKIE" /* GXTEntry: "Muskie" */;
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE" /* GXTEntry: "Northern Pike" */;
		case 9:
			return "PROVISION_FISH_PERCH" /* GXTEntry: "Perch" */;
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL" /* GXTEntry: "Redfin Pickerel" */;
		case 11:
			return "PROVISION_FISH_ROCK_BASS" /* GXTEntry: "Rock Bass" */;
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS" /* GXTEntry: "Smallmouth Bass" */;
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON" /* GXTEntry: "Sockeye Salmon" */;
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT" /* GXTEntry: "Steelhead Trout" */;
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1030(int iParam0)
{
	var uVar0;

	if (!func_1174(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

bool func_1031()
{
	return !Global_1911774;
}

void func_1032(int iParam0, int iParam1, bool bParam2, int iParam3)
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

char* func_1033(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1034(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1035(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING" /* GXTEntry: "~HC_~1p~~~2~~s~" */, MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_1036()
{
	return Global_1347398.f_1 == 0;
}

void func_1037(int iParam0)
{
	Global_1347398.f_1 = iParam0;
}

bool func_1038()
{
	return Global_1347398.f_1 == 1000;
}

bool func_1039()
{
	return Global_1347398.f_1 == 2000;
}

bool func_1040()
{
	return Global_1347398.f_1 == 3000;
}

void func_1041(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_578(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

int func_1042(int iParam0)
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

bool func_1043(int iParam0)
{
	return iParam0 > -1;
}

bool func_1044(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_1045(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_294(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1046(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_1047(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_1048(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_1049(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_1050(int iParam0, int iParam1)
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

void func_1051(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1175(iParam0, iParam6);
	func_1176(iParam0, iParam5);
	func_1177(iParam0, iParam4);
	func_1178(iParam0, iParam3);
	func_1179(iParam0, iParam2);
	func_1180(iParam0, iParam1);
}

int func_1052(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1053(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_92(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_93(&(iParam1->f_6), 0, 1);
	}
	if (!func_92(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_903(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_563(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_92(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1058(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1181(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1182(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_653(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1181(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_655(iParam1->f_6, 0, 1);
				}
				else
				{
					func_655(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

bool func_1054(int iParam0)
{
	return (Global_22 & iParam0) != 0;
}

void func_1055(int iParam0)
{
	Global_22 |= iParam0;
}

int func_1056(int iParam0, int iParam1)
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

bool func_1057(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1058(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_92(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_288(iParam0);
	func_1181(iParam0, 18, 0, 1);
	func_1181(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_1059(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_92(iParam0))
	{
		return false;
	}
	iVar0 = func_288(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_1060(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_288(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_1061(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

Vector3 func_1062(int iParam0)
{
	if (Global_1945188[iParam0 /*18*/].f_5 == 1)
	{
		return VOLUME::GET_VOLUME_COORDS(Global_1945188[iParam0 /*18*/].f_10);
	}
	else if (Global_1945188[iParam0 /*18*/].f_5 == 2)
	{
		return Global_1945188[iParam0 /*18*/].f_6;
	}
	else if (Global_1945188[iParam0 /*18*/].f_5 == 3)
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_1945188[iParam0 /*18*/].f_11, Global_1945188[iParam0 /*18*/].f_12);
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_1063(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_691(iParam0, 0))
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

struct<4> /*32*/ func_1064(bool bParam0)
{
	return func_958(joaat("CHARACTER"), func_1183(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_1065(bool bParam0)
{
	int iVar0;

	iVar0 = func_934(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_958(joaat("CARRIED_WEAPONS"), func_1064(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_958(joaat("CARRIED_WEAPONS"), func_1064(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_958(joaat("CARRIED_WEAPONS"), func_1064(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_1066(int iParam0, bool bParam1)
{
	if (func_816(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_571(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_1067(bool bParam0)
{
	int iVar0;

	iVar0 = func_934(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_958(joaat("EMOTE_ITEM"), func_1064(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_958(joaat("EMOTE_ITEM"), func_1064(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_1068(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_816(iParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1069(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_934(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_1070(int iParam0)
{
	if (func_1184(iParam0, joaat("DEFAULT") /* GXTEntry: "_" */) == 0)
	{
		return false;
	}
	return true;
}

int func_1071(int iParam0)
{
	if (!func_691(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN") /* GXTEntry: "Live Crickets" */:
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET"); /* GXTEntry: "Cricket Bait" */
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN") /* GXTEntry: "Live Worms" */:
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM"); /* GXTEntry: "Worm Bait" */
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED") /* GXTEntry: "Opened Cocaine Gum" */:
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM"); /* GXTEntry: "Cocaine Gum" */
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED") /* GXTEntry: "Opened Chewing Tobacco" */:
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO"); /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED") /* GXTEntry: "Opened Cigarettes" */:
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX"); /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1072(int iParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_691(iParam0, 0))
	{
		return false;
	}
	sVar0 = { func_926(iParam0, 0, 1) /*5*/ };
	iVar5 = joaat("SLOTID_WEAPON_0"); /* GXTEntry: "Right" */
	sVar6.f_9 = joaat("SLOTID_NONE");
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_955((398 + iVar29), 1);
		if (func_956(iParam0, &sVar0, iVar5, 0))
		{
			bVar28 = func_957(iParam0, &sVar6, iVar5);
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

int func_1073(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_958(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_934(bParam6), &sVar0, false);
	return iVar4;
}

struct<18> /*144*/ func_1074(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1075(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_1076(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_934(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1077(int iParam0)
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

float func_1078(int iParam0)
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
			return func_1185(iParam0);
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
			return func_1185(iParam0);
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
			return func_1185(iParam0);
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

bool func_1079(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_571(18);
		case 2:
			return func_571(20);
		case 1:
			return func_571(19);
		default:
			break;
	}
	return true;
}

int func_1080(int iParam0)
{
	return func_1186(Global_40.f_11095.f_11[iParam0]);
}

void func_1081(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_350() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_571(31))
	{
		return;
	}
	iVar0 = func_1080(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1080(iParam0);
	if (func_1187(iParam0) & func_1188(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1189(fVar1, fParam1);
			if (fParam1 > (float)func_1190(iParam0) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_651(func_1191(iParam0), 0);
					}
					func_1192(iParam0, iVar2, iVar3);
					func_1193(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1082(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN" /* GXTEntry: "+~1~" */;
}

int func_1083(int iParam0)
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

int func_1084()
{
	return func_1194(Global_40.f_12019);
}

int func_1085()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_939(iVar1);
		if (func_777(iVar2, 1, 0) || func_1091(func_1090(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1086()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1195(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1087()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1096(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("LEGENDARY_FISH"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1088()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_1089(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET") /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET") /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET") /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET") /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET") /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET") /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET") /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET") /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET") /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET") /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET") /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET") /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_1090(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_ACT_SET") /* GXTEntry: "Cigarette Cards Stars of the Stage" */:
			return 1;
		case joaat("DOCUMENT_CIG_CARD_ART_SET") /* GXTEntry: "Cigarette Cards Artists & Poets" */:
			return 8;
		case joaat("DOCUMENT_CIG_CARD_AML_SET") /* GXTEntry: "Cigarette Cards Fauna of North America" */:
			return 4;
		case joaat("DOCUMENT_CIG_CARD_GRL_SET") /* GXTEntry: "Cigarette Cards Gems Of Beauty" */:
			return 16;
		case joaat("DOCUMENT_CIG_CARD_GUN_SET") /* GXTEntry: "Cigarette Cards Famous Gunslingers" */:
			return 32;
		case joaat("DOCUMENT_CIG_CARD_HOR_SET") /* GXTEntry: "Cigarette Cards Breeds of Horses" */:
			return 64;
		case joaat("DOCUMENT_CIG_CARD_INV_SET") /* GXTEntry: "Cigarette Cards Amazing Inventions" */:
			return 128;
		case joaat("DOCUMENT_CIG_CARD_LND_SET") /* GXTEntry: "Cigarette Cards Vistas of America" */:
			return 256;
		case joaat("DOCUMENT_CIG_CARD_PAM_SET") /* GXTEntry: "Cigarette Cards Prominent Americans" */:
			return 2;
		case joaat("DOCUMENT_CIG_CARD_PLT_SET") /* GXTEntry: "Cigarette Cards Flora of America" */:
			return (1 << 9);
		case joaat("DOCUMENT_CIG_CARD_SPT_SET") /* GXTEntry: "Cigarette Cards The World\'s Champions" */:
			return (1 << 10);
		case joaat("DOCUMENT_CIG_CARD_VEH_SET") /* GXTEntry: "Cigarette Cards Marvels of Travel" */:
			return (1 << 11);
		default:
			break;
	}
	return 0;
}

bool func_1091(int iParam0)
{
	return (Global_40.f_12019 & iParam0) != 0;
}

char* func_1092(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND" /* GXTEntry: "30 of 30 Dinosaur Bones Found" */;
		case 1:
			return "COL_DB_SEND" /* GXTEntry: "Send all locations to Deborah MacGuiness" */;
		case 2:
			return "COL_DB_COLLECT" /* GXTEntry: "Collect your reward from Deborah MacGuiness" */;
		default:
			break;
	}
	return "";
}

int func_1093(int iParam0)
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

int func_1094(int iParam0)
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

char* func_1095(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE") /* GXTEntry: "Little Egret Plume" */:
			return "COL_EP_LITTLE_FOUND" /* GXTEntry: "5 of 5 Little Egret Plumes" */;
		case joaat("PROVISION_EGRET_PLUME_REDDISH") /* GXTEntry: "Reddish Egret Plume" */:
			return "COL_EP_REDDISH_FOUND" /* GXTEntry: "5 of 5 Reddish Egret Plumes" */;
		case joaat("PROVISION_EGRET_PLUME_SNOWY") /* GXTEntry: "Snowy Egret Plume" */:
			return "COL_EP_SNOWY_FOUND" /* GXTEntry: "5 of 5 Snowy Egret Plumes" */;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT") /* GXTEntry: "Lady of the Night Orchid" */:
			return "COL_RO_LADY_OF_NIGHT_FOUND" /* GXTEntry: "15 of 15 Lady of the Night Orchids" */;
		case joaat("PROVISION_HERON_FEATHER") /* GXTEntry: "Heron Plume" */:
			return "COL_HF_FOUND" /* GXTEntry: "20 of 20 Heron Plumes" */;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER") /* GXTEntry: "Lady Slipper Orchid" */:
			return "COL_RO_LADY_SLIPPER_FOUND" /* GXTEntry: "7 of 7 Lady Slipper Orchids" */;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN") /* GXTEntry: "Moccasin Flower Orchid" */:
			return "COL_RO_MOCCASIN_FOUND" /* GXTEntry: "10 of 10 Moccasin Flower Orchids" */;
		case joaat("PROVISION_GATOR_EGG") /* GXTEntry: "Gator Egg" */:
			return "COL_GF_FOUND" /* GXTEntry: "25 of 25 Gator Eggs" */;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") /* GXTEntry: "Acuna\'s Star Orchid" */:
			return "COL_RO_ACUNAS_STAR_FOUND" /* GXTEntry: "3 of 3 Acuna\'s Star Orchids" */;
		case joaat("PROVISION_RO_FLOWER_CIGAR") /* GXTEntry: "Cigar Orchid" */:
			return "COL_RO_CIGAR_FOUND" /* GXTEntry: "7 of 7 Cigar Orchids" */;
		case joaat("PROVISION_RO_FLOWER_GHOST") /* GXTEntry: "Ghost Orchid" */:
			return "COL_RO_GHOST_FOUND" /* GXTEntry: "5 of 5 Ghost Orchids" */;
		case joaat("PROVISION_SPOONBILL_FEATHER") /* GXTEntry: "Spoonbill Plume" */:
			return "COL_SF_FOUND" /* GXTEntry: "30 of 30 Spoonbill Plumes" */;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED") /* GXTEntry: "Night Scented Orchid" */:
			return "COL_RO_NIGHT_SCENTED_FOUND" /* GXTEntry: "5 of 5 Night Scented Orchids" */;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL") /* GXTEntry: "Rat Tail Orchid" */:
			return "COL_RO_RAT_TAIL_FOUND" /* GXTEntry: "10 of 10 Rat Tail Orchids" */;
		case joaat("PROVISION_RO_FLOWER_SPIDER") /* GXTEntry: "Spider Orchid" */:
			return "COL_RO_SPIDER_FOUND" /* GXTEntry: "5 of 5 Spider Orchids" */;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL") /* GXTEntry: "Clamshell Orchid" */:
			return "COL_RO_CLAMSHELL_FOUND" /* GXTEntry: "5 of 5 Clamshell Orchids" */;
		case joaat("PROVISION_RO_FLOWER_DRAGONS") /* GXTEntry: "Dragon\'s Mouth Orchid" */:
			return "COL_RO_DRAGONS_FOUND" /* GXTEntry: "5 of 5 Dragon\'s Mouth Orchids" */;
		case joaat("PROVISION_RO_FLOWER_QUEENS") /* GXTEntry: "Queen\'s Orchid" */:
			return "COL_RO_QUEENS_FOUND" /* GXTEntry: "5 of 5 Queen\'s Orchids" */;
		case joaat("PROVISION_RO_FLOWER_SPARROWS") /* GXTEntry: "Sparrow\'s Egg Orchid" */:
			return "COL_RO_SPARROWS_FOUND" /* GXTEntry: "10 of 10 Sparrow\'s Egg Orchids" */;
		default:
			break;
	}
	return "";
}

bool func_1096(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

char* func_1097(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISH_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY" /* GXTEntry: "Legendary Bullhead Catfish" */;
		case joaat("LEGENDARY_FISH_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY" /* GXTEntry: "Legendary Chain Pickerel" */;
		case joaat("LEGENDARY_FISH_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY" /* GXTEntry: "Legendary Lake Sturgeon" */;
		case joaat("LEGENDARY_FISH_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY" /* GXTEntry: "Legendary Largemouth Bass" */;
		case joaat("LEGENDARY_FISH_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY" /* GXTEntry: "Legendary Longnose Gar" */;
		case joaat("LEGENDARY_FISH_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY" /* GXTEntry: "Legendary Muskie" */;
		case joaat("LEGENDARY_FISH_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY" /* GXTEntry: "Legendary Perch" */;
		case joaat("LEGENDARY_FISH_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY" /* GXTEntry: "Legendary Redfin Pickerel" */;
		case joaat("LEGENDARY_FISH_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY" /* GXTEntry: "Legendary Rock Bass" */;
		case joaat("LEGENDARY_FISH_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY" /* GXTEntry: "Legendary Smallmouth Bass" */;
		case joaat("LEGENDARY_FISH_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY" /* GXTEntry: "Legendary Sockeye Salmon" */;
		case joaat("LEGENDARY_FISH_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY" /* GXTEntry: "Legendary Steelhead Trout" */;
		case joaat("LEGENDARY_FISH_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY" /* GXTEntry: "Legendary Bluegill" */;
		default:
			break;
	}
	return "";
}

char* func_1098(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND" /* GXTEntry: "10 of 10 Rock Faces Found" */;
		case 1:
			return "COL_RC_SEND" /* GXTEntry: "Send all locations to Francis Sinclair" */;
		case 2:
			return "COL_RC_COLLECT" /* GXTEntry: "Collect your reward from Francis Sinclair" */;
		default:
			break;
	}
	return "";
}

bool func_1099(int iParam0)
{
	if (func_1196(iParam0) && func_777(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1197(iParam0) & func_1198(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1100(int iParam0)
{
	if (!func_691(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_858(iParam0));
}

int func_1101(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_1102(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_1103(bool bParam0)
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

void func_1104(int iParam0)
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

void func_1105(bool bParam0)
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

void func_1106(bool bParam0)
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

void func_1107(bool bParam0)
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

void func_1108(bool bParam0)
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

void func_1109(bool bParam0)
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

void func_1110(bool bParam0)
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

int func_1111(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_914(iParam0, 1) /*3*/];
}

void func_1112()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1199();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_819(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN") /* GXTEntry: "John\'s Cattleman Revolver" */);
		func_864(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN") /* GXTEntry: "John\'s Cattleman Revolver" */, 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN") /* GXTEntry: "John\'s Cattleman Revolver" */, true, 2, false, false);
		func_819(joaat("WEAPON_MELEE_KNIFE_JOHN") /* GXTEntry: "John\'s Knife" */);
		func_864(joaat("WEAPON_MELEE_KNIFE_JOHN") /* GXTEntry: "John\'s Knife" */, 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN") /* GXTEntry: "John\'s Knife" */, true, 4, false, false);
	}
}

bool func_1113(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_934(0);
	*uParam1 = { func_958(iParam0, func_1065(0), iParam3, 0) /*4*/ };
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

bool func_1114(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_1115(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1116(int iParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_926(iParam0, 1, 0) /*5*/ };
	return func_1000(sVar0.f_4);
}

int func_1117(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_779(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_779(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_779(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_779(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_779(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_779(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1118(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_914(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1004((1 << 19)))
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

bool func_1119(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_HL_PLAYER_BOOT_007_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_009_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_2") /* GXTEntry: "Legendary Moose Moccasins" */:
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_3") /* GXTEntry: "Moccasins" */:
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_4") /* GXTEntry: "Two Toned Moccasins" */:
			return true;
		default:
			break;
	}
	return false;
}

int func_1120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY") /* GXTEntry: "Legendary Beaver Tooth" */;
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY") /* GXTEntry: "Legendary Tatanka Bison Horn" */;
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Buck Antler" */;
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY") /* GXTEntry: "Legendary Cougar Fang" */;
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY") /* GXTEntry: "Legendary Coyote Fang" */;
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Elk Antler" */;
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY") /* GXTEntry: "Legendary Fox Claw" */;
		case 7:
			return joaat("PROVISION_LIONS_PAW") /* GXTEntry: "Lion\'s Paw" */;
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Moose Antler" */;
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY") /* GXTEntry: "Legendary Panther Eye" */;
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY") /* GXTEntry: "Legendary Pronghorn Horn" */;
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY") /* GXTEntry: "Legendary Ram Horn" */;
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY") /* GXTEntry: "Legendary Wolf Heart" */;
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH") /* GXTEntry: "Legendary Alligator Tooth" */;
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS") /* GXTEntry: "Vintage Civil War Handcuffs" */;
		case 15:
			return joaat("PROVISION_BRACELET_GOLD") /* GXTEntry: "Gold Jointed Bracelet" */;
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW") /* GXTEntry: "Legendary Bear Claw" */;
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK") /* GXTEntry: "Quartz Chunk" */;
		case 18:
			return joaat("PROVISION_BRACELET_SILVER") /* GXTEntry: "Silver Chain Bracelet" */;
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY") /* GXTEntry: "Legendary Boar Tusk" */;
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT") /* GXTEntry: "Cobalt Petrified Wood" */;
		case 21:
			return joaat("PROVISION_EARRING_GOLD") /* GXTEntry: "Gold Earring" */;
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY") /* GXTEntry: "Legendary Bison Horn" */;
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT") /* GXTEntry: "Abalone Shell Fragment" */;
		case 24:
			return joaat("PROVISION_EARRING_SILVER") /* GXTEntry: "Silver Earring" */;
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS") /* GXTEntry: "Old Brass Compass" */;
		default:
			break;
	}
	return 0;
}

int func_1121(int iParam0)
{
	return func_1200(iParam0, -1);
}

bool func_1122(int iParam0, bool bParam1)
{
	return func_1201(func_449(), iParam0, bParam1);
}

bool func_1123(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

void func_1124(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_745(iParam0, 1);
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

void func_1125(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_745(iParam0, 1);
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

void func_1126()
{
	func_1125(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_1125(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_1125(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_1125(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_1125(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_1125(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_1125(joaat("WS_COLTER_STAGE_MP"));
}

void func_1127()
{
	func_1125(joaat("WS_BEECHERS_SHACK"));
	func_1125(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_1125(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_1125(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_1125(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_1125(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_1125(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_1125(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_1125(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_1125(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_1128(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_1129(int iParam0)
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

void func_1130(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

bool func_1131(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_1132(int iParam0, int iParam1)
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

void func_1133()
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

void func_1134(int iParam0)
{
	func_1141(iParam0, 8, 6);
}

void func_1135(int iParam0)
{
	func_1202(&(Global_1946054.f_2589), iParam0);
}

void func_1136(int iParam0, int iParam1)
{
	func_1203(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_1137(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 |= iParam1;
}

void func_1138(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_816(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1204(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_1136(iVar1, iVar3);
		}
	}
	if (func_1024(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_1204(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_1136(iVar1, iVar3);
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
						func_1136(iVar1, iVar3);
					}
				}
			}
			func_1205(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_1205(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1136(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 525
				func_1205(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_1136(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_1136(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 656
				func_1205(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; // curOff = 691
				func_1205(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1136(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 786
				func_1205(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1136(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1136(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_816(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1136(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1119(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_816(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1136(iVar1, iVar3);
						}
					}
				}
				Jump @1415; // curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_779(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1136(iVar1, iVar3);
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
						func_1136(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_1119(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_779(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1136(iVar1, iVar3);
					}
				}
			}
			switch (func_816(iParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_816(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1136(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_816(uParam0->f_1[iVar1 /*3*/]) || func_779(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1136(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1139(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;

	bVar0 = func_1206(0);
	if (iParam2 != 0 && func_1207(iParam0, bVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1208(iParam0, func_1132(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1140(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_350() != -1;
	iVar7 = func_1206(0);
	if (func_1004((1 << 15)))
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
			iVar5 = func_1132(iVar0, 1);
			if (func_1209(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1209(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1118(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_1210(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1004((1 << 19)))
					{
						func_1143((1 << 19));
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
							iVar5 = func_1132(iVar0, 1);
							if (func_1209(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1209(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1118(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_1136(iVar0, iParam2);
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
					func_1146((1 << 19));
				}
			}
		}
	}
}

void func_1141(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_914(iParam0, 1) /*11*/].f_10 -= (Global_1946054.f_57[func_914(iParam0, 1) /*11*/].f_10 & iParam1);
}

void func_1142(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1211(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_350() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1212(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_1165(0))
		{
			if ((Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9)) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12));
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_1165(Global_40.f_7729);
				Global_1946054.f_1378 = func_1165(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1213(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1214(0, 1);
	}
}

void func_1143(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_1144(struct<4> /*32*/ sParam0)
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
			if (func_1215(sParam0.f_0))
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
			func_1216(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_1143(8);
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
			if (func_1215(sParam0.f_0))
			{
				return;
			}
			func_1216(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_1143(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1008(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

void func_1145(var uParam0)
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
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1146(int iParam0)
{
	Global_1946054 -= (Global_1946054 & iParam0);
}

bool func_1147(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_1148(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_1215(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_1215(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1216(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_1143(8);
}

bool func_1149()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_1150(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_1151()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1217(13);
	iVar1 = func_1218(fVar0);
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

float func_1152()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_1153()
{
	if (func_966())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_1154()
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

float func_1155()
{
	return Global_1954815.f_3;
}

void func_1156(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1219(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_1157(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1219(iParam0, 2, 0, 0);
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

float func_1158(float fParam0, float fParam1, float fParam2)
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

bool func_1159()
{
	return func_1217(12) <= -99.0f;
}

bool func_1160()
{
	return func_1217(12) >= 99.0f;
}

int func_1161()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_816(iVar1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			if (func_1220() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1162(int iParam0)
{
	if (!func_1019(iParam0))
	{
		return false;
	}
	if (func_1166(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1163(int iParam0)
{
	if (!func_1019(iParam0))
	{
		return false;
	}
	if (func_1166(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1164(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1019(iParam0))
	{
		return;
	}
	if (!func_1163(iParam0))
	{
		func_1168(iParam0, 2);
		if (bParam2)
		{
			if (!func_241(0, 0, 1))
			{
				func_609(1, 4);
			}
		}
		if ((!func_1167() && !bParam1) && !func_241(0, 0, 1))
		{
			func_558(MISC::VAR_STRING(10, "OUT_JOURN_ADD" /* GXTEntry: "~1~ discovered." */, func_1221(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1165(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return joaat("CLOTHING_FANCY_SUIT") /* GXTEntry: "Fancy Suit" */;
		case 6:
			return joaat("CLOTHING_GUNSLINGER_OUTFIT") /* GXTEntry: "The Gunslinger" */;
		case 7:
			return joaat("CLOTHING_WINTER_OUTFIT") /* GXTEntry: "Winter Outfit" */;
		case 8:
			return joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT") /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return joaat("CLOTHING_WARM_WEATHER_OUTFIT") /* GXTEntry: "The Summer Gunslinger" */;
		case 10:
			return joaat("CLOTHING_ISLAND_OUTFIT") /* GXTEntry: "Island Outfit" */;
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return joaat("CLOTHING_ROBBERY_OUTFIT") /* GXTEntry: "Robbery Outfit" */;
		case 16:
			return joaat("CLOTHING_HEIST_OUTFIT") /* GXTEntry: "The Wittemore" */;
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return joaat("CLOTHING_POLICE_OUTFIT") /* GXTEntry: "Police Outfit" */;
		case 0:
			return joaat("CLOTHING_CUSTOM_ONE_OUTFIT") /* GXTEntry: "Custom Outfit" */;
		case 1:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_ONE") /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_TWO") /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_THREE") /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR") /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE") /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return joaat("CLOTHING_OUTFIT_OWNED_001") /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return joaat("CLOTHING_OUTFIT_OWNED_002") /* GXTEntry: "The Ruffian" */;
		case 26:
			return joaat("CLOTHING_OUTFIT_OWNED_003") /* GXTEntry: "The Rebel" */;
		case 27:
			return joaat("CLOTHING_OUTFIT_OWNED_005") /* GXTEntry: "The Innocent" */;
		case 28:
			return joaat("CLOTHING_OUTFIT_OWNED_006") /* GXTEntry: "The Pursuer" */;
		case 21:
			return joaat("CLOTHING_SP_OUTFIT_SONY_001") /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001") /* GXTEntry: "The Nuevo Paraiso" */;
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
			return -272211555 /* GXTEntry: "The Homesteader" */;
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
			return joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER") /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT") /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER") /* GXTEntry: "The Cowboy" */;
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
			return joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM") /* GXTEntry: "The Homesteader" */;
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H") /* GXTEntry: "The Chevalier" */;
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L") /* GXTEntry: "The Heartlands" */;
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H") /* GXTEntry: "The Gambler" */;
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L") /* GXTEntry: "The Earl" */;
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H") /* GXTEntry: "The McLaughlin" */;
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L") /* GXTEntry: "The Josiah" */;
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H") /* GXTEntry: "The Farrier" */;
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L") /* GXTEntry: "The Donegal" */;
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H") /* GXTEntry: "The Bulldogger" */;
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L") /* GXTEntry: "The Ranch Hand" */;
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H") /* GXTEntry: "The Scrapper" */;
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L") /* GXTEntry: "The Armadillo" */;
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H") /* GXTEntry: "The Valentine" */;
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L") /* GXTEntry: "The Vaquero" */;
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H") /* GXTEntry: "The Dewberry Creek" */;
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L") /* GXTEntry: "The Clairmont" */;
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H") /* GXTEntry: "The Roscoe" */;
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L") /* GXTEntry: "The Estate Boss" */;
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H") /* GXTEntry: "The Drover" */;
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L") /* GXTEntry: "The Calumet" */;
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H") /* GXTEntry: "The Cowpuncher" */;
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L") /* GXTEntry: "The Tumbleweed" */;
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H") /* GXTEntry: "The Drifter" */;
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L") /* GXTEntry: "The Leatherman" */;
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H") /* GXTEntry: "The Cumberland" */;
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L") /* GXTEntry: "The Millesani" */;
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H") /* GXTEntry: "The Faulkton" */;
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L") /* GXTEntry: "The Dolton" */;
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H") /* GXTEntry: "The Corson" */;
		case 58:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L") /* GXTEntry: "The Saint Denis" */;
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H") /* GXTEntry: "The Deauville" */;
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L") /* GXTEntry: "The Bretagne" */;
		default:
			break;
	}
	return 0;
}

bool func_1166(int iParam0, int iParam1)
{
	if (!func_1019(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] & iParam1) != 0;
}

bool func_1167()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

void func_1168(int iParam0, int iParam1)
{
	if (!func_1019(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] |= iParam1;
}

int func_1169(int iParam0, bool bParam1)
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

void func_1170(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1222(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_815(50);
			}
			else
			{
				func_815(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_815(51);
			}
			else
			{
				func_815(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1223(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_845();
				}
			}
			else
			{
				Global_40.f_11095.f_60 += 0.1f;
				func_845();
			}
			break;
		case 3:
			func_815(24);
			if (bParam1)
			{
				if (!func_1223(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_845();
				}
			}
			break;
	}
}

void func_1171(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1224(0))
			{
				iVar0++;
			}
			if (func_1224(2))
			{
				iVar0++;
			}
			if (func_1224(4))
			{
				iVar0++;
			}
			if (!func_1225(16))
			{
				if (iVar0 == 1)
				{
					func_1226();
					func_651(456, 1);
					func_1227(16);
				}
			}
			if (!func_1225(32))
			{
				if (iVar0 >= 3)
				{
					func_1226();
					func_651(456, 1);
					func_1227(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1224(1))
			{
				iVar0++;
			}
			if (func_1224(3))
			{
				iVar0++;
			}
			if (func_1224(7))
			{
				iVar0++;
			}
			if (!func_1225(1))
			{
				if (iVar0 == 1)
				{
					func_1228();
					func_651(457, 1);
					func_1227(1);
				}
			}
			if (!func_1225(2))
			{
				if (iVar0 >= 3)
				{
					func_1228();
					func_651(457, 1);
					func_1227(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1224(5))
			{
				iVar0++;
			}
			if (func_1224(6))
			{
				iVar0++;
			}
			if (func_1224(8))
			{
				iVar0++;
			}
			if (!func_1225(4))
			{
				if (iVar0 == 1)
				{
					func_1229();
					func_651(455, 1);
					func_1227(4);
				}
			}
			if (!func_1225(8))
			{
				if (iVar0 >= 3)
				{
					func_1229();
					func_651(455, 1);
					func_1227(8);
				}
			}
			break;
	}
}

void func_1172(var uParam0)
{
	func_1026(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_1026(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_1026(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_1173(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_1230(uParam0))
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

bool func_1174(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1175(int iParam0, int iParam1)
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

void func_1176(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_1177(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1046(*iParam0);
	iVar1 = func_1045(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1050(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_1178(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_1179(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_1180(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

void func_1181(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_288(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_1182(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_288(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

struct<4> /*32*/ func_1183()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_1184(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(iParam0, iParam1);
}

float func_1185(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1077(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1186(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1231(iVar6) - func_1231(iVar5));
			fVar2 = ((float)iVar1 * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1.0f;
}

int func_1186(float fParam0)
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

int func_1187(int iParam0)
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

int func_1188(int iParam0)
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

int func_1189(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1186(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1231(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1231(iVar0 + 1));
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

int func_1190(int iParam0)
{
	int iVar0;

	if (func_1232(iParam0, &iVar0))
	{
		return func_1231(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1233())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1233())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1233())
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

int func_1191(int iParam0)
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

void func_1192(int iParam0, int iParam1, int iParam2)
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
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST" /* GXTEntry: "~1~" */;
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY" /* GXTEntry: "~1~% to Level ~2~" */, iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST" /* GXTEntry: "~1~ Increased" */;
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY" /* GXTEntry: "Level ~1~" */, iVar3);
		bVar2 = true;
	}
	iVar3 += func_1234(iParam0);
	sVar4 = func_1236(func_1235(iVar3, iParam2));
	sVar6 = func_1237(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_1238(iParam0));
	iVar8 = func_1239(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		sVar10.f_0 = sVar7;
		sVar10.f_1 = sVar1;
		sVar10.f_3 = iVar9;
		sVar10.f_2 = iVar8;
		sVar10.f_4 = 1;
		sVar10.f_5 = func_1240(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&sVar10);
	}
	func_948(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC" /* GXTEntry: "Hold ~INPUT_FEED_INTERACT~ for details" */, func_1241(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1193(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_1194(int iParam0)
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

bool func_1195(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_1196(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT") /* GXTEntry: "Perfect Squirrel Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT") /* GXTEntry: "Perfect Cardinal Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT") /* GXTEntry: "Perfect Rat Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT") /* GXTEntry: "Perfect Woodpecker Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT") /* GXTEntry: "Perfect Chipmunk Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT") /* GXTEntry: "Perfect Oriole Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT") /* GXTEntry: "Perfect Robin Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT") /* GXTEntry: "Perfect Songbird Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT") /* GXTEntry: "Perfect Sparrow Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT") /* GXTEntry: "Perfect Toad Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT") /* GXTEntry: "Perfect Crow Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT") /* GXTEntry: "Perfect Cedar Waxwing Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT") /* GXTEntry: "Perfect Bat Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT") /* GXTEntry: "Perfect Blue Jay Carcass" */:
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT") /* GXTEntry: "Perfect Bullfrog Carcass" */:
			return true;
		default:
			break;
	}
	return false;
}

int func_1197(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT") /* GXTEntry: "Perfect Rabbit Carcass" */:
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT") /* GXTEntry: "Perfect Opossum Carcass" */:
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT") /* GXTEntry: "Perfect Skunk Carcass" */:
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT") /* GXTEntry: "Perfect Beaver Carcass" */:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1198(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1242(&iVar0, 0, iVar95, &sVar1) && !func_1242(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_1243(iVar0, &sVar1);
			if (func_691(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1199()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_1244(Global_35, &iVar0);
	sVar30 = { func_1064(0) /*4*/ };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &sVar30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, joaat("REMOVE_REASON_DEFAULT"));
	func_1245(0);
	func_1246(7);
	func_1247(joaat("KIT_BANDANA") /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_1021() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		func_1247(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000") /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_1247(joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER") /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1248(Global_35, &iVar0);
}

int func_1200(int iParam0, int iParam1)
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
		iParam1 = func_934(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_1175(&uVar6, iVar0);
	func_1176(&uVar6, iVar1);
	func_1177(&uVar6, iVar2);
	func_1178(&uVar6, iVar3);
	func_1179(&uVar6, iVar4);
	func_1180(&uVar6, iVar5);
	return uVar6;
}

bool func_1201(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1249(iParam1) || !func_1249(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1202(var uParam0, int iParam1)
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
			if ((func_1250(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			else
			{
				if (func_1250(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1251(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_1203(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1252(uParam0, 1))
	{
		func_1253(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_1204(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1) != 0;
}

void func_1205(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1136(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1136(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_1136(iVar2, iVar0);
		}
	}
}

int func_1206(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_1021();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1207(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(iParam0, bParam1, bParam3))
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(iParam0, iVar0, bParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1208(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_1209(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_914(iParam0, 1) /*11*/].f_10 & iParam1) != 0;
}

int func_1210(var uParam0)
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

void func_1211(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] /*3*/ };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_350() == -1)
	{
		func_1254(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_1255(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1212(int iParam0, int iParam1)
{
	if (func_350() == -1)
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

void func_1213(int iParam0, bool bParam1, int iParam2)
{
	func_1256(&(Global_1946054.f_1378), iParam0);
	func_1257(2, iParam0, 6);
	if (bParam1)
	{
		func_1214(0, 1);
	}
}

void func_1214(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1258(0);
	}
	if (bParam0)
	{
		func_1143(8);
		func_1143((1 << 9));
	}
	else
	{
		func_1143(8);
		func_1143(16);
	}
}

bool func_1215(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_1216(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

float func_1217(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_1218(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1219(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR" /* GXTEntry: "Fair" */;
					}
					else
					{
						return func_1033(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD" /* GXTEntry: "Cold" */, "PMPLAYER_CONDITION_TEMPERATURE_HOT" /* GXTEntry: "Hot" */);
					}
					break;
				case 2:
					return func_1033(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD" /* GXTEntry: "Good" */, "PMPLAYER_CONDITION_HONOR_BAD" /* GXTEntry: "Bad" */);
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE" /* GXTEntry: "~1~%" */;
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES" /* GXTEntry: "~1~ minutes" */;
				case 2:
					return "PMPLAYER_CORE_PC_VALUE" /* GXTEntry: "~1~%" */;
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1220()
{
	return Global_1946054.f_1497;
}

char* func_1221(int iParam0)
{
	int iVar0;

	iVar0 = func_1165(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1100(iVar0);
}

int func_1222(int iParam0)
{
	int iVar0;

	if (func_1259(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1260(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1261(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1262(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1223(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_777(func_1263(iVar0, iParam0), 1, 0))
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

bool func_1224(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_777(func_1264(iVar0, iParam0), 1, 0))
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

bool func_1225(int iParam0)
{
	return (Global_40.f_12003 & iParam0) != 0;
}

void func_1226()
{
	int iVar0;

	if (func_350() != -1)
	{
		return;
	}
	func_864(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_1080(1);
	func_1192(1, iVar0, 0);
}

void func_1227(int iParam0)
{
	Global_40.f_12003 |= iParam0;
}

void func_1228()
{
	int iVar0;

	if (func_350() != -1)
	{
		return;
	}
	func_864(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_1080(2);
	func_1192(2, iVar0, 0);
}

void func_1229()
{
	int iVar0;

	if (func_350() != -1)
	{
		return;
	}
	func_864(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_1080(0);
	func_1192(0, iVar0, 0);
}

bool func_1230(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1231(int iParam0)
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

bool func_1232(int iParam0, int iParam1)
{
	return false;
}

bool func_1233()
{
	return false;
}

int func_1234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_934(0), joaat("UPGRADE_HEALTH_TANK_1"), false);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_934(0), joaat("UPGRADE_STAMINA_TANK_1"), false);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_934(0), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}
	return 0;
}

struct<4> /*32*/ func_1235(int iParam0, int iParam1)
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

char* func_1236(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1237(int iParam0)
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

char* func_1238(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA" /* GXTEntry: "Stamina" */;
		case 0:
			return "RPG_HEALTH" /* GXTEntry: "Health" */;
		case 2:
			return "RPG_DEADEYE" /* GXTEntry: "Dead Eye" */;
		default:
			break;
	}
	return "";
}

int func_1239(int iParam0)
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

int func_1240(int iParam0)
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

int func_1241(int iParam0)
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

bool func_1242(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_1265(iParam1) && !func_1266(iParam1))
	{
		iVar0 = func_1267(iParam1);
	}
	else
	{
		return false;
	}
	func_1268(uParam3);
	iVar5 = func_1269(iParam2);
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

void func_1243(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1270(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1271(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1244(int iParam0, int* iParam1)
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
		if (func_444(iVar31))
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

void func_1245(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_691(iVar1, 0))
		{
			func_1272(iVar1, 0, bParam0);
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

void func_1246(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_350() == -1)
	{
		func_1273(352481484);
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
		if (func_816(iVar2) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_1274(&(Global_1946054.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1275(iVar2, 0))
		{
			func_1276(iVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1247(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1277(iParam0))
	{
		return;
	}
	iVar0 = func_816(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar1 = func_1278(iParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar1 = func_1278(iParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar1 = func_1278(iParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar1 = func_1278(iParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar1 = func_1278(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar1 = func_1278(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1279(0))
	{
		func_1280(iParam0, 1);
		if (func_1021() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			func_1280(func_1279(joaat("MPC_PLAYER_TYPE_SP_ARTHUR")), 0);
		}
		else
		{
			func_1280(func_1279(joaat("MPC_PLAYER_TYPE_SP_MARSTON")), 0);
		}
	}
	func_1281();
	if (func_1282(iVar0))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_934(0), iParam0, 0);
	}
	func_1276(iParam0, bParam3);
	if (bParam2)
	{
		func_1214(0, 0);
	}
}

void func_1248(int iParam0, int iParam1)
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
				if (func_954((*iParam1)[iVar0]))
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

bool func_1249(int iParam0)
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
	iVar0 = func_1049(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1048(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_450(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1045(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1046(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1047(iParam0);
	if (iVar5 < 1 || iVar5 > func_1050(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1250(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_1251(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

bool func_1252(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_1253(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

void func_1254(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1255(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1256(var uParam0, int iParam1)
{
	int iVar0;

	if (func_350() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1254(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_1255(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_1257(int iParam0, int iParam1, int iParam2)
{
	if (func_350() == -1)
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

void func_1258(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

bool func_1259(int iParam0)
{
	if (!func_691(iParam0, 0))
	{
		return false;
	}
	if (func_779(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1260(int iParam0)
{
	if (!func_691(iParam0, 0))
	{
		return false;
	}
	if (func_779(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1261(int iParam0)
{
	if (!func_691(iParam0, 0))
	{
		return false;
	}
	if (func_779(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT_HOLSTER")))
	{
		return true;
	}
	return false;
}

bool func_1262(int iParam0)
{
	if (!func_691(iParam0, 0))
	{
		return false;
	}
	if (func_779(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT_OFFHAND")))
	{
		return true;
	}
	return false;
}

int func_1263(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1283(iParam0);
		case 1:
			return func_1284(iParam0);
		case 2:
			return func_1285(iParam0);
		case 3:
			return func_1286(iParam0);
	}
	return 0;
}

int func_1264(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1287(iParam0);
		case 1:
			return func_1288(iParam0);
		case 2:
			return func_1289(iParam0);
		case 3:
			return func_1290(iParam0);
		case 4:
			return func_1291(iParam0);
		case 5:
			return func_1292(iParam0);
		case 6:
			return func_1293(iParam0);
		case 7:
			return func_1294(iParam0);
		case 8:
			return func_1295(iParam0);
	}
	return 0;
}

bool func_1265(int iParam0)
{
	iParam0 = func_1296(iParam0);
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

bool func_1266(int iParam0)
{
	int iVar0;

	iParam0 = func_1296(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1265(iParam0))
	{
		return false;
	}
	iVar0 = func_1267(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_1267(int iParam0)
{
	iParam0 = func_1296(iParam0);
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

void func_1268(var uParam0)
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

int func_1269(int iParam0)
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

void func_1270(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1271(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1272(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_816(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar0 = func_1297(iParam0, &(Global_1946054.f_2657.f_21));
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar0 = func_1297(iParam0, &(Global_1946054.f_2657.f_23));
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar0 = func_1297(iParam0, &(Global_1946054.f_2657.f_20));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar0 = func_1297(iParam0, &(Global_1946054.f_2657.f_22));
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar0 = func_1297(iParam0, &(Global_1946054.f_2657.f_24));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar0 = func_1297(iParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1281();
	}
	if (bParam1)
	{
		func_1214(0, 0);
	}
}

void func_1273(int iParam0)
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
	sVar2 = { func_1074(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) /*18*/ };
	if (func_1076(&sVar2, &iVar0, &iVar1, 0))
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
		func_1011(iVar0);
	}
}

void func_1274(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1298(iParam2, *uParam0);
	func_1299(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1275(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_926(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_958(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_1073(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_934(0), &sVar5, bParam1);
	return true;
}

void func_1276(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_926(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_958(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_1073(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_934(0), &sVar5, bParam1);
}

bool func_1277(int iParam0)
{
	if (func_350() == -1)
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

int func_1278(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1300(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1275(iParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = iVar1;
	if (func_816(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_1274(&(Global_1946054.f_2657.f_26.f_26), iParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1279(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1021();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000") /* GXTEntry: "John\'s Classic Hat" */;
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000") /* GXTEntry: "Arthur\'s Hat" */;
}

int func_1280(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_926(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_958(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_1073(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(bParam1, func_934(0), &sVar5);
	return 1;
}

void func_1281()
{
	int iVar0;

	if (func_350() == -1)
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

bool func_1282(int iParam0)
{
	return func_1302(func_1301(iParam0));
}

int func_1283(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR") /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR") /* GXTEntry: "Explorer Bandolier" */;
		case 2:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR") /* GXTEntry: "Gambler Bandolier" */;
		case 3:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO") /* GXTEntry: "Herbalist Bandolier" */;
		case 4:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR") /* GXTEntry: "Master Hunter Bandolier" */;
		case 5:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER") /* GXTEntry: "Horseman Bandolier" */;
		case 6:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER") /* GXTEntry: "Sharpshooter Bandolier" */;
		case 7:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT") /* GXTEntry: "Survivalist Bandolier" */;
		case 8:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE") /* GXTEntry: "Weapons Expert Bandolier" */;
		default:
			break;
	}
	return 0;
}

int func_1284(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR") /* GXTEntry: "Bandit Gun Belt" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR") /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR") /* GXTEntry: "Gambler Gun Belt" */;
		case 3:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO") /* GXTEntry: "Herbalist Gun Belt" */;
		case 4:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR") /* GXTEntry: "Master Hunter Gun Belt" */;
		case 5:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER") /* GXTEntry: "Horseman Gun Belt" */;
		case 6:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER") /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 7:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT") /* GXTEntry: "Survivalist Gun Belt" */;
		case 8:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE") /* GXTEntry: "Weapons Expert Gun Belt" */;
		default:
			break;
	}
	return 0;
}

int func_1285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR") /* GXTEntry: "Bandit Holster" */;
		case 1:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR") /* GXTEntry: "Explorer Holster" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR") /* GXTEntry: "Gambler Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO") /* GXTEntry: "Herbalist Holster" */;
		case 4:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR") /* GXTEntry: "Master Hunter Holster" */;
		case 5:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER") /* GXTEntry: "Horseman Holster" */;
		case 6:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER") /* GXTEntry: "Sharpshooter Holster" */;
		case 7:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT") /* GXTEntry: "Survivalist Holster" */;
		case 8:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE") /* GXTEntry: "Weapons Expert Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR") /* GXTEntry: "Bandit Off-Hand Holster" */;
		case 1:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR") /* GXTEntry: "Explorer Off-Hand Holster" */;
		case 2:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR") /* GXTEntry: "Gambler Off-Hand Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO") /* GXTEntry: "Herbalist Off-Hand Holster" */;
		case 4:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR") /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		case 5:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER") /* GXTEntry: "Horseman Off-Hand Holster" */;
		case 6:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER") /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		case 7:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT") /* GXTEntry: "Survivalist Off-Hand Holster" */;
		case 8:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE") /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR") /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR") /* GXTEntry: "Bandit Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR") /* GXTEntry: "Bandit Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR") /* GXTEntry: "Bandit Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1288(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR") /* GXTEntry: "Explorer Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR") /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR") /* GXTEntry: "Explorer Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR") /* GXTEntry: "Explorer Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR") /* GXTEntry: "Gambler Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR") /* GXTEntry: "Gambler Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR") /* GXTEntry: "Gambler Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR") /* GXTEntry: "Gambler Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1290(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO") /* GXTEntry: "Herbalist Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO") /* GXTEntry: "Herbalist Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO") /* GXTEntry: "Herbalist Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO") /* GXTEntry: "Herbalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR") /* GXTEntry: "Master Hunter Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR") /* GXTEntry: "Master Hunter Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR") /* GXTEntry: "Master Hunter Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR") /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1292(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER") /* GXTEntry: "Horseman Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER") /* GXTEntry: "Horseman Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER") /* GXTEntry: "Horseman Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER") /* GXTEntry: "Horseman Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER") /* GXTEntry: "Sharpshooter Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER") /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER") /* GXTEntry: "Sharpshooter Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER") /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1294(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT") /* GXTEntry: "Survivalist Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT") /* GXTEntry: "Survivalist Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT") /* GXTEntry: "Survivalist Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT") /* GXTEntry: "Survivalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE") /* GXTEntry: "Weapons Expert Bandolier" */;
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE") /* GXTEntry: "Weapons Expert Gun Belt" */;
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE") /* GXTEntry: "Weapons Expert Holster" */;
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE") /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1296(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1297(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1300(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_816(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_1303(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19--;
	*uParam1--;
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_816(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_1303(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_1275(iParam0, 1);
	return 1;
}

void func_1298(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1299(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
	{
		func_1304(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_914(func_1116(iParam1), 1);
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
		func_1305(uParam0);
	}
}

bool func_1300(int iParam0, int iParam1)
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

int func_1301(int iParam0)
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

bool func_1302(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 & iParam0) != 0;
}

void func_1303(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1306(iParam1);
	func_1307(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1308(&(uParam0->f_26), iVar1);
		if (func_1309(uParam0->f_26, &iVar0))
		{
			func_1310(iVar0, iVar1);
		}
	}
}

void func_1304(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1311(&(uParam0->f_3));
}

void func_1305(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1312(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_1306(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_1307(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1308(var uParam0, int iParam1)
{
	*uParam0--;
	func_1304(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] /*5*/ };
}

bool func_1309(int iParam0, int iParam1)
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

void func_1310(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1311(var uParam0)
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1312(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1313(func_1021());
	if (*uParam0)
	{
		func_1311(uParam0);
	}
	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(iVar0, uParam1, 0, func_350() != -1, iParam2);
	*uParam0 = 1;
}

int func_1313(int iParam0)
{
	if (func_350() == -1)
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

