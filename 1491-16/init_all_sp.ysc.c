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
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	char* sLocal_18 = NULL;
	struct<2> /*16*/ sLocal_19[20];
	Vector3 vLocal_60[1] = {{ 0.0f, 0.0f, 0.0f } };
#pragma endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_18 = "";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1();
	func_3(0, 484);
	func_3(1, 1133);
	func_3(2, 15157);
	func_3(3, 15356);
	func_3(4, 15380);
	func_3(5, 26367);
	func_3(6, joaat("RE_KV_MTN_V1_PLYFINAL_LOW_02"));
	func_3(7, 27099);
	func_3(8, 27135);
	func_3(9, 27148);
	func_3(10, 27878);
	func_3(11, 32073);
	func_3(12, 32090);
	func_3(13, 35182);
	func_3(14, 35278);
	func_3(15, 35291);
	func_3(16, 35300);
	func_3(17, 35867);
	func_3(18, 40242);
	func_3(19, 40437);
	func_24(0, 40465);
	bVar0 = false;
	while (!bVar0)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (!sLocal_19[iVar1 /*2*/].f_1)
			{
				Stack.Invoke(sLocal_19[iVar1 /*2*/]);
				if (StackVal)
				{
					sLocal_19[iVar1 /*2*/].f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!vLocal_60[iVar1 /*3*/].f_1)
			{
				Stack.Invoke(vLocal_60[iVar1 /*3*/], &(vLocal_60[iVar1 /*3*/].f_2));
				if (StackVal)
				{
					vLocal_60[iVar1 /*3*/].f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			iVar1++;
		}
		BUILTIN::WAIT(0);
	}
	func_25();
	func_26(256);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		sLocal_19[iVar0 /*2*/] = 40622;
		sLocal_19[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		vLocal_60[iVar0 /*3*/] = 40631;
		vLocal_60[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
}

int func_2()
{
	func_29(0, joaat("CS_DUTCH"), "def_comp_brain", 1, 1);
	func_29(1, joaat("CS_JOHNMARSTON"), "def_comp_brain", 1, 0);
	func_29(2, joaat("CS_JAVIERESCUELLA"), "def_comp_brain", 1, 1);
	func_29(3, joaat("CS_BILLWILLIAMSON"), "def_comp_brain", 1, 1);
	func_29(4, joaat("CS_UNCLE"), "def_comp_brain", 0, 0);
	func_29(5, joaat("CS_HOSEAMATTHEWS"), "def_comp_brain", 1, 0);
	func_29(6, joaat("CS_MICAHBELL"), "def_comp_brain", 1, 1);
	func_29(7, joaat("CS_CHARLESSMITH"), "def_comp_brain", 1, 1);
	func_29(8, joaat("CS_SEAN"), "def_comp_brain", 1, 1);
	func_29(9, joaat("CS_LENNY"), "def_comp_brain", 1, 1);
	func_29(10, joaat("CS_KIERAN"), "def_comp_brain", 0, 0);
	func_29(11, joaat("CS_MRSADLER"), "def_comp_brain", 1, 0);
	func_29(23, joaat("CS_JOSIAHTRELAWNY"), "def_comp_brain", 0, 1);
	func_29(17, joaat("CS_MRPEARSON"), "def_comp_brain", 0, 0);
	func_29(21, joaat("CS_REVSWANSON"), "def_comp_brain", 0, 0);
	func_29(18, joaat("CS_LEOSTRAUSS"), "def_comp_brain", 0, 0);
	func_29(14, joaat("CS_JACKMARSTON"), "def_comp_brain", 0, 0);
	func_29(13, joaat("CS_ABIGAILROBERTS"), "def_comp_brain", 0, 0);
	func_29(16, joaat("CS_MOLLYOSHEA"), "def_comp_brain", 0, 0);
	func_29(19, joaat("CS_SUSANGRIMSHAW"), "def_comp_brain", 0, 0);
	func_29(15, joaat("CS_MARYBETH"), "def_comp_brain", 0, 0);
	func_29(20, joaat("CS_KAREN"), "def_comp_brain", 0, 0);
	func_29(22, joaat("CS_TILLY"), "def_comp_brain", 0, 0);
	func_29(24, joaat("CS_CLEET"), "def_comp_brain", 0, 0);
	func_29(25, joaat("CS_JOE"), "def_comp_brain", 0, 0);
	func_29(26, joaat("CS_EAGLEFLIES"), "def_comp_brain", 0, 1);
	func_29(12, joaat("A_C_DOGCATAHOULACUR_01"), "def_comp_brain", 1, 0);
	func_30(0, 0, 234527101, 234527101);
	func_30(1, 0, 234527101, 234527101);
	func_30(3, 2, 234527101, 234527101);
	func_30(2, 4, 234527101, 234527101);
	func_30(6, 5, 234527101, 234527101);
	func_30(7, 1, 234527101, 234527101);
	func_30(11, 4, 234527101, 234527101);
	func_30(5, 4, 234527101, 234527101);
	func_30(8, 0, 234527101, 234527101);
	func_30(9, 0, 234527101, 234527101);
	func_30(12, 0, 234527101, 234527101);
	if (func_31())
	{
		return 1;
	}
	return 0;
}

void func_3(int iParam0, int iParam1)
{
	sLocal_19[iParam0 /*2*/] = iParam1;
	sLocal_19[iParam0 /*2*/].f_1 = 0;
}

int func_4()
{
	if (!func_32())
	{
		func_33();
	}
	Global_1897950 = -1;
	func_34(1, joaat("VAL_BARTENDER"), 76, 0);
	func_34(2, joaat("VAL_SLUM_BARTENDER"), 76, 0);
	func_34(8, joaat("VAL_BARBER"), 76, (1 << 20));
	func_34(11, joaat("VAL_DOCTOR"), 76, (1 << 20));
	func_34(9, joaat("VAL_GUNSMITH"), 76, (1 << 20));
	func_34(10, joaat("VAL_GENERAL_STORE"), 76, (1 << 20));
	func_34(45, joaat("VAL_HORSE_SHOP_OWNER"), 76, (1 << 20));
	func_34(6, joaat("VAL_BUTCHER"), 76, (1 << 20));
	func_34(14, joaat("VAL_PIANO_PLAYER"), 76, 0);
	func_34(15, joaat("VAL_HOTEL_CLEANER"), 76, 0);
	func_34(16, joaat("VAL_HOTEL_OWNER"), 76, 0);
	func_34(3, joaat("VAL_SHERIFF"), 76, (1 << 21));
	func_34(4, joaat("VAL_SHERIFF_HELPER"), 76, (1 << 21));
	func_34(18, joaat("VAL_BLACKSMITH"), 76, 0);
	func_34(17, joaat("VAL_HANDYMAN"), 76, 0);
	func_34(7, joaat("VAL_AUCTION_BOSS"), 76, (1 << 20));
	func_34(20, joaat("VAL_AUCTION_HANDYMAN"), 76, 0);
	func_34(21, joaat("VAL_HANDYMANS_WIFE"), 76, 0);
	func_34(19, joaat("VAL_LIVERY"), 76, 0);
	func_34(22, joaat("VAL_HEAD_PROSTITUTE"), 76, 0);
	func_34(23, joaat("VAL_PROSTITUTE_1"), 76, 0);
	func_34(24, joaat("VAL_PROSTITUTE_2"), 76, 0);
	func_34(5, joaat("VAL_TRAIN_CLERK"), 76, 0);
	func_34(25, joaat("VAL_PRISONER_1"), 76, 0);
	func_34(26, joaat("VAL_PRISONER_2"), 76, 0);
	func_34(33, joaat("VAL_SHOW_TICKET_VENDOR"), 76, 0);
	func_34(48, joaat("VAL_TOWN_DOG_1"), 76, 0);
	func_34(49, joaat("VAL_TOWN_DOG_2"), 76, 0);
	func_34(50, joaat("VAL_TOWN_DOG_3"), 76, 0);
	func_34(51, joaat("VAL_GUARD_DOG"), 76, 0);
	func_34(27, joaat("VAL_AUCTION_HAND"), 76, 0);
	func_34(28, joaat("VAL_AUCTION_HAND_2"), 76, 0);
	func_34(29, joaat("VAL_RANCHER_1"), 76, 0);
	func_34(30, joaat("VAL_RANCHER_2"), 76, 0);
	func_34(31, joaat("VAL_DELIVERY_MAN"), 76, 0);
	func_34(32, joaat("VAL_NEWSPAPER_VENDOR"), 76, 0);
	func_34(34, joaat("VAL_SALOON_CLEANER"), 76, 0);
	func_34(35, joaat("VAL_TOWN_FARMER"), 76, 0);
	func_34(36, joaat("VAL_TOWN_WORKER_1"), 76, 0);
	func_34(37, joaat("VAL_TOWN_WORKER_2"), 76, 0);
	func_34(38, joaat("VAL_TOWN_WORKER_3"), 76, 0);
	func_34(39, joaat("VAL_TOWN_WORKER_4"), 76, 0);
	func_34(40, joaat("VAL_TOWN_WORKER_5"), 76, 0);
	func_34(41, joaat("VAL_TOWN_WORKER_6"), 76, 0);
	func_34(42, joaat("VAL_TOWN_WORKER_7"), 76, 0);
	func_34(43, joaat("VAL_TOWN_WORKER_8"), 76, 0);
	func_34(44, joaat("VAL_TOWN_WORKER_9"), 76, 0);
	func_34(0, joaat("VAL_TOWN_DRUNK"), 76, 0);
	func_34(52, joaat("VAL_LIVERY_HORSE"), 76, 0);
	func_34(12, joaat("VAL_BANK_MANAGER"), 76, 0);
	func_34(13, joaat("VAL_BANK_GUARD"), 76, 0);
	func_34(46, joaat("VAL_HORSE_RIDER_1"), 76, 0);
	func_34(47, joaat("VAL_HORSE_RIDER_2"), 76, 0);
	func_34(53, joaat("VAL_PIGS_NORTH"), 76, 0);
	func_34(54, joaat("VAL_PIGS_WEST"), 76, 0);
	func_34(55, joaat("VAL_SHEEP_1"), 76, 0);
	func_34(56, joaat("VAL_SHEEP_2"), 76, 0);
	func_34(57, joaat("VAL_SHEEP_3"), 76, 0);
	func_34(58, joaat("VAL_SHEEP_4"), 76, 0);
	func_34(59, joaat("VAL_SHEEP_5"), 76, 0);
	func_34(60, joaat("VAL_SHEEP_6"), 76, 0);
	func_34(61, joaat("VAL_SHEEP_7"), 76, 0);
	func_34(62, joaat("VAL_SHEEP_8"), 76, 0);
	func_34(63, joaat("VAL_RESIDENTIAL_SHEEP_1"), 76, 0);
	func_34(69, joaat("RHD_BARTENDER"), 105, 0);
	func_34(73, joaat("RHD_GUNSMITH"), 105, (1 << 20));
	func_34(74, joaat("RHD_GENERAL_STORE"), 105, (1 << 20));
	func_34(78, joaat("RHD_FENCE"), 105, (1 << 20));
	func_34(79, joaat("RHD_PIANO_PLAYER"), 105, 0);
	func_34(80, joaat("RHD_HOTEL_OWNER"), 105, 0);
	func_34(70, joaat("RHD_SHERIFF"), 105, (1 << 21));
	func_34(71, joaat("RHD_DEPUTY"), 105, (1 << 21));
	func_34(81, joaat("RHD_LIVERY_WORKER"), 105, 0);
	func_34(72, joaat("RHD_TRAIN_STAT_OWNER"), 105, 0);
	func_34(77, joaat("RHD_BUTCHER"), 105, 0);
	func_34(82, joaat("RHD_UNDERTAKER"), 105, 0);
	func_34(76, joaat("RHD_BANK_MANAGER"), 105, 0);
	func_34(75, joaat("RHD_BANK_GUARD"), 105, 0);
	func_34(127, joaat("RHD_PRISONER"), 105, 0);
	func_34(88, joaat("RHD_NEWSPAPER_VENDOR"), 105, 0);
	func_34(83, joaat("RHD_GAMBLER"), 105, 0);
	func_34(84, joaat("RHD_GOOD_TIME_GIRL_1"), 105, 0);
	func_34(85, joaat("RHD_GOOD_TIME_GIRL_2"), 105, 0);
	func_34(86, joaat("RHD_GOOD_TIME_GIRL_3"), 105, 0);
	func_34(87, joaat("RHD_GOOD_TIME_GIRL_4"), 105, 0);
	func_34(89, joaat("RHD_COTTON_CARRIER_1"), 105, 0);
	func_34(90, joaat("RHD_COTTON_CARRIER_2"), 105, 0);
	func_34(91, joaat("RHD_COTTON_LOADER_1"), 105, 0);
	func_34(92, joaat("RHD_COTTON_SUPERVISOR"), 105, 0);
	func_34(93, joaat("RHD_COTTON_SWEEPER_1"), 105, 0);
	func_34(94, joaat("RHD_COTTON_SWEEPER_2"), 105, 0);
	func_34(95, joaat("RHD_STABLE_WORKER_1"), 105, 0);
	func_34(96, joaat("RHD_STABLE_WORKER_2"), 105, 0);
	func_34(97, joaat("RHD_DELIVERY_WORKER_1"), 105, 0);
	func_34(98, joaat("RHD_DELIVERY_WORKER_2"), 105, 0);
	func_34(99, joaat("RHD_MANSION_FEMALE_1"), 105, 0);
	func_34(100, joaat("RHD_MANSION_FEMALE_2"), 105, 0);
	func_34(101, joaat("RHD_MANSION_MALE_1"), 105, 0);
	func_34(102, joaat("RHD_MANSION_MALE_2"), 105, 0);
	func_34(103, joaat("RHD_MANSION_WORKER_1"), 105, 0);
	func_34(104, joaat("RHD_MANSION_WORKER_2"), 105, 0);
	func_34(105, joaat("RHD_PARLOR_WORKER_1"), 105, 0);
	func_34(106, joaat("RHD_BLACK_SLUMS_FEMALE_1"), 105, 0);
	func_34(107, joaat("RHD_BLACK_SLUMS_FEMALE_2"), 105, 0);
	func_34(108, joaat("RHD_BLACK_SLUMS_FEMALE_3"), 105, 0);
	func_34(109, joaat("RHD_BLACK_SLUMS_FEMALE_4"), 105, 0);
	func_34(110, joaat("RHD_BLACK_SLUMS_FEMALE_5"), 105, 0);
	func_34(111, joaat("RHD_GRAYS_GANG_1"), 105, 0);
	func_34(112, joaat("RHD_GRAYS_GANG_2"), 105, 0);
	func_34(113, joaat("RHD_GRAYS_GANG_3"), 105, 0);
	func_34(114, joaat("RHD_GRAYS_GANG_4"), 105, 0);
	func_34(115, joaat("RHD_WHITE_SLUMS_1"), 105, 0);
	func_34(116, joaat("RHD_WHITE_SLUMS_2"), 105, 0);
	func_34(117, joaat("RHD_WHITE_SLUMS_3"), 105, 0);
	func_34(118, joaat("RHD_WHITE_SLUMS_4"), 105, 0);
	func_34(119, joaat("RHD_WHITE_SLUMS_5"), 105, 0);
	func_34(120, joaat("RHD_SLUMS_DRUNK_1"), 105, 0);
	func_34(121, joaat("RHD_SLUMS_DRUNK_2"), 105, 0);
	func_34(122, joaat("RHD_SLUMS_DRUNK_3"), 105, 0);
	func_34(123, joaat("RHD_SLUMS_DRUNK_4"), 105, 0);
	func_34(124, joaat("RHD_SLUMS_DRUNK_5"), 105, 0);
	func_34(125, joaat("RHD_WHITE_SLUMS_MUSICIAN"), 105, 0);
	func_34(126, joaat("RHD_LARGE_MALE_1"), 105, 0);
	func_34(128, joaat("RHD_BLACK_SLUMS_DOG"), 105, 0);
	func_34(129, joaat("RHD_MAIN_STRIP_DOG"), 105, 0);
	func_34(130, joaat("RHD_MANSION_CAT"), 105, 0);
	func_34(131, joaat("RHD_MANSION_DOG"), 105, 0);
	func_34(132, joaat("RHD_WHITE_SLUMS_CAT_1"), 105, 0);
	func_34(133, joaat("RHD_WHITE_SLUMS_CAT_2"), 105, 0);
	func_34(134, joaat("RHD_WHITE_SLUMS_DOG"), 105, 0);
	func_34(135, joaat("RHD_WHITE_SLUMS_DOG_2"), 105, 0);
	func_34(136, joaat("RHD_WHITE_SLUMS_PIG"), 105, 0);
	func_34(744, joaat("WTC_OLD_LADY"), 29, 0);
	func_34(731, joaat("APF_BROTHER"), 77, 0);
	func_34(732, joaat("APF_SISTER"), 77, 0);
	func_34(626, joaat("CGH_FARM_HAND"), 95, 0);
	func_34(627, joaat("CGH_FIELD_GUARD"), 95, 0);
	func_34(628, joaat("CGH_FIELD_GUARD_2"), 95, 0);
	func_34(629, joaat("CGH_FIELD_GUARD_3"), 95, 0);
	func_34(630, joaat("CGH_FIELD_GUARD_4"), 95, 0);
	func_34(631, joaat("CGH_GATE_GUARD"), 95, 0);
	func_34(632, joaat("CGH_GATE_GUARD_2"), 95, 0);
	func_34(633, joaat("CGH_HORSE_GUARD"), 95, 0);
	func_34(634, joaat("CGH_HORSE_GUARD_2"), 95, 0);
	func_34(635, joaat("CGH_HOUSE_GUARD"), 95, 0);
	func_34(636, joaat("CGH_HOUSE_GUARD_2"), 95, 0);
	func_34(637, joaat("CGH_HOUSE_GUARD_3"), 95, 0);
	func_34(638, joaat("CGH_HOUSE_GUARD_4"), 95, 0);
	func_34(639, joaat("CGH_MULE"), 95, 0);
	func_34(640, joaat("CGH_OX_1"), 95, 0);
	func_34(641, joaat("CGH_OX_2"), 95, 0);
	func_34(642, joaat("CLE_CLAY"), 97, 0);
	func_34(643, joaat("CLE_CLIVE"), 97, 0);
	func_34(613, joaat("BRA_STABLE_HAND"), 93, 0);
	func_34(614, joaat("BRA_STABLE_HAND_2"), 93, 0);
	func_34(617, joaat("BRA_GATE_GUARD"), 93, 0);
	func_34(618, joaat("BRA_GATE_GUARD_2"), 93, 0);
	func_34(619, joaat("BRA_GATE_GUARD_3"), 93, 0);
	func_34(620, joaat("BRA_GATE_GUARD_4"), 93, 0);
	func_34(621, joaat("BRA_MANOR_GUARD"), 93, 0);
	func_34(622, joaat("BRA_MANOR_GUARD_2"), 93, 0);
	func_34(623, joaat("BRA_MANOR_GUARD_3"), 93, 0);
	func_34(624, joaat("BRA_MANOR_GUARD_4"), 93, 0);
	func_34(625, joaat("BRA_MANOR_GUARD_5"), 93, 0);
	func_34(616, joaat("BRA_HORSES_01"), 93, 0);
	func_34(615, joaat("BRA_OXEN_PERSCHAR_1"), 93, 0);
	func_34(644, joaat("LAG_FATHER1"), 3, 0);
	func_34(645, joaat("LAG_MOTHER1"), 3, 0);
	func_34(646, joaat("LAG_MOTHER2"), 3, 0);
	func_34(647, joaat("LAG_MOTHER3"), 3, 0);
	func_34(648, joaat("LAG_F_TEEN1"), 3, 0);
	func_34(649, joaat("LAG_F_TEEN2"), 3, 0);
	func_34(656, joaat("LAG_GRANDMOTHER1"), 3, 0);
	func_34(650, joaat("LAG_FISHERMAN1"), 3, 0);
	func_34(651, joaat("LAG_FISHERMAN2"), 3, 0);
	func_34(652, joaat("LAG_FISHERMAN4"), 3, 0);
	func_34(653, joaat("LAG_DOG_1"), 3, 0);
	func_34(654, joaat("LAG_DOG_2"), 3, 0);
	func_34(655, joaat("LAG_GOAT"), 3, 0);
	func_34(657, joaat("ORA_FOREMAN"), 6, 0);
	func_34(658, joaat("ORA_GUARD"), 6, 0);
	func_34(207, joaat("SDN_ARTIST"), 5, 0);
	func_34(208, joaat("SDN_BANK_TELLER"), 5, 0);
	func_34(209, joaat("SDN_BANK_GUARD"), 5, 0);
	func_34(201, joaat("SDN_BARBER"), 5, (1 << 20));
	func_34(137, joaat("SDN_BARTENDER"), 5, 0);
	func_34(138, joaat("SDN_BARTENDER_SLUMS"), 5, 0);
	func_34(139, joaat("SDN_BUTCHER"), 5, (1 << 20));
	func_34(144, joaat("SDN_CITY_WORKER_1"), 5, 0);
	func_34(145, joaat("SDN_COM_CHURCH_WORKER_1"), 5, 0);
	func_34(146, joaat("SDN_COURTYARD_LADY_01"), 5, 0);
	func_34(147, joaat("SDN_COURTYARD_LADY_02"), 5, 0);
	func_34(148, joaat("SDN_DOCK_BOAT_GUARD_1"), 5, 0);
	func_34(149, joaat("SDN_DOCK_CASTILLE_1"), 5, 0);
	func_34(150, joaat("SDN_DOCK_CASTILLE_2"), 5, 0);
	func_34(151, joaat("SDN_DOCK_CIVIL_1"), 5, 0);
	func_34(152, joaat("ILO_KICK_NEG"), 5, 0);
	func_34(153, joaat("SDN_DOCK_CONSTR_2"), 5, 0);
	func_34(154, joaat("SDN_DOCK_CONSTR_3"), 5, 0);
	func_34(155, joaat("SDN_DOCK_CORNWALL_1"), 5, 0);
	func_34(156, joaat("SDN_DOCK_COTTON_1"), 5, 0);
	func_34(157, joaat("SDN_DOCK_COTTON_2"), 5, 0);
	func_34(158, joaat("SDN_DOCK_COTTON_3"), 5, 0);
	func_34(159, joaat("SDN_DOCK_COTTON_4"), 5, 0);
	func_34(160, joaat("SDN_DOCK_COTTON_5"), 5, 0);
	func_34(161, joaat("SDN_DOCK_COTTON_6"), 5, 0);
	func_34(162, joaat("SDN_DOCK_COTTON_7"), 5, 0);
	func_34(163, joaat("SDN_DOCK_COTTON_8"), 5, 0);
	func_34(164, joaat("SDN_DOCK_LH_1"), 5, 0);
	func_34(165, joaat("SDN_DOCK_LH_2"), 5, 0);
	func_34(166, joaat("SDN_DOCK_LH_3"), 5, 0);
	func_34(167, joaat("SDN_DOCK_LH_CAT"), 5, 0);
	func_34(168, joaat("SDN_DOCK_LH_DOG"), 5, 0);
	func_34(169, joaat("SDN_DOCK_LUMBER_1"), 5, 0);
	func_34(170, joaat("SDN_DOCK_LUMBER_2"), 5, 0);
	func_34(171, joaat("SDN_DOCK_LUMBER_3"), 5, 0);
	func_34(172, joaat("SDN_DOCK_LUMBER_4"), 5, 0);
	func_34(173, joaat("SDN_DOCK_WORKER_1"), 5, 0);
	func_34(174, joaat("SDN_DOCK_WORKER_2"), 5, 0);
	func_34(175, joaat("SDN_DOCK_WORKER_3"), 5, 0);
	func_34(176, joaat("SDN_DOCK_WORKER_4"), 5, 0);
	func_34(140, joaat("SDN_DOCTOR"), 5, (1 << 20));
	func_34(177, joaat("SDN_FARMER_01"), 5, 0);
	func_34(178, joaat("SDN_FARMER_DOG_01"), 5, 0);
	func_34(210, joaat("SDN_CHICKEN_1"), 5, 0);
	func_34(211, joaat("SDN_ROOSTER_1"), 5, 0);
	func_34(212, joaat("SDN_GOAT_1"), 5, 0);
	func_34(213, joaat("SDN_GOAT_2"), 5, 0);
	func_34(215, joaat("SDN_COW_1"), 5, 0);
	func_34(216, joaat("SDN_COW_2"), 5, 0);
	func_34(217, joaat("SDN_BULL_2"), 5, 0);
	func_34(218, joaat("SDN_COW_3"), 5, 0);
	func_34(214, joaat("SDN_HORSE_1"), 5, 0);
	func_34(255, joaat("SDN_PIG_2"), 5, 0);
	func_34(179, joaat("SDN_FARMER_WIFE_01"), 5, 0);
	func_34(180, joaat("SDN_FARMER_WIFE_02"), 5, 0);
	func_34(181, joaat("SDN_FARMER_WIFE_03"), 5, 0);
	func_34(182, joaat("SDN_FARMER_WIFE_04"), 5, 0);
	func_34(183, joaat("SDN_FARMHAND_01"), 5, 0);
	func_34(184, joaat("SDN_FARMHAND_02"), 5, 0);
	func_34(185, joaat("SDN_FARMHAND_03A"), 5, 0);
	func_34(186, joaat("SDN_FARMHAND_03B"), 5, 0);
	func_34(187, joaat("SDN_FARMHAND_04"), 5, 0);
	func_34(188, joaat("SDN_FARMHAND_05"), 5, 0);
	func_34(189, joaat("SDN_RURAL_BLACKSMITH"), 5, 0);
	func_34(190, joaat("SDN_RURAL_HOUSE_LADY_1"), 5, 0);
	func_34(191, joaat("SDN_RURAL_HOUSE_LADY_2"), 5, 0);
	func_34(192, joaat("SDN_RURAL_SLUMS_DOG_1"), 5, 0);
	func_34(193, joaat("SDN_RURAL_SLUMS_DOG_2"), 5, 0);
	func_34(194, joaat("SDN_RURAL_SLUMS_MAN_1"), 5, 0);
	func_34(195, joaat("SDN_RURAL_SLUMS_MAN_2"), 5, 0);
	func_34(196, joaat("SDN_RURAL_SLUMS_WOMAN_1"), 5, 0);
	func_34(197, joaat("SDN_RURAL_SLUMS_WOMAN_2"), 5, 0);
	func_34(198, joaat("SDN_FLOWER_ENTHUSIAST"), 5, 0);
	func_34(199, joaat("SDN_FLOWER_ENTHUSIAST_2"), 5, 0);
	func_34(200, joaat("SDN_GEN_STORE_OWNER"), 5, (1 << 20));
	func_34(219, joaat("SDN_GEN_STORE_SHADY"), 5, (1 << 20));
	func_34(220, joaat("SDN_GROUNDS_KEEPER_1"), 5, 0);
	func_34(221, joaat("SDN_GROUNDS_KEEPER_2"), 5, 0);
	func_34(222, joaat("SDN_GROUNDS_KEEPER_3"), 5, 0);
	func_34(223, joaat("SDN_GROUNDS_KEEPER_4"), 5, 0);
	func_34(224, joaat("SDN_GROUNDS_KEEPER_5"), 5, 0);
	func_34(202, joaat("SDN_GUNSMITH"), 5, (1 << 20));
	func_34(203, joaat("SDN_HOMEOWNER_01"), 5, 0);
	func_34(204, joaat("SDN_HOMEOWNER_02"), 5, 0);
	func_34(205, joaat("SDN_HORSE_SHOP_OWNER"), 5, (1 << 20));
	func_34(206, joaat("SDN_HOTEL_CARETAKER"), 5, 0);
	func_34(225, joaat("SDN_IND_CASTILLE_1"), 5, 0);
	func_34(226, joaat("SDN_IND_CASTILLE_2"), 5, 0);
	func_34(227, joaat("SDN_IND_CASTILLE_3"), 5, 0);
	func_34(228, joaat("SDN_IND_CASTILLE_4"), 5, 0);
	func_34(229, joaat("SDN_IND_CASTILLE_5"), 5, 0);
	func_34(230, joaat("SDN_IND_CASTILLE_6"), 5, 0);
	func_34(233, joaat("SDN_IND_COURTYARD_1"), 5, 0);
	func_34(234, joaat("SDN_IND_LAMBERT_1"), 5, 0);
	func_34(235, joaat("SDN_IND_LAMBERT_2"), 5, 0);
	func_34(236, joaat("SDN_IND_LAMBERT_3"), 5, 0);
	func_34(237, joaat("SDN_IND_LAMBERT_4"), 5, 0);
	func_34(238, joaat("SDN_IND_LAMBERT_5"), 5, 0);
	func_34(231, joaat("SDN_IND_CASTILLE_DOG"), 5, 0);
	func_34(232, joaat("SDN_IND_CASTILLE_DOG_2"), 5, 0);
	func_34(239, joaat("SDN_IND_LANIK_1"), 5, 0);
	func_34(240, joaat("SDN_IND_LANIK_2"), 5, 0);
	func_34(241, joaat("SDN_MARKET_VENDOR1"), 5, 0);
	func_34(242, joaat("SDN_FRENCHMARKET_VENDOR_1"), 5, 0);
	func_34(243, joaat("SDN_FRENCHMARKET_VENDOR_2"), 5, 0);
	func_34(245, joaat("SDN_FRENCHMARKET_FEMALE_1"), 5, 0);
	func_34(244, joaat("SDN_FRENCHMARKET_MALE_1"), 5, 0);
	func_34(246, joaat("SDN_FRENCHMARKET_WORKER_1"), 5, 0);
	func_34(247, joaat("SDN_FRENCHMARKET_WORKER_2"), 5, 0);
	func_34(248, joaat("SDN_SLUMSMARKET_FEMALE_1"), 5, 0);
	func_34(249, joaat("SDN_MARKET_WORKER_1"), 5, 0);
	func_34(250, joaat("SDN_MUSICIAN"), 5, 0);
	func_34(251, joaat("SDN_NEWSPAPER_VENDOR"), 5, 0);
	func_34(252, joaat("SDN_PARK_CARETAKER_1"), 5, 0);
	func_34(253, joaat("SDN_PARK_CARETAKER_2"), 5, 0);
	func_34(254, joaat("SDN_PARK_CARETAKER_3"), 5, 0);
	func_34(256, joaat("SDN_POLICE_CHIEF"), 5, 0);
	func_34(265, joaat("SDN_PARK_POLICE"), 5, 0);
	func_34(266, joaat("SDN_PARK_POLICE_2"), 5, 0);
	func_34(257, joaat("SDN_COM_POLICE_1"), 5, 0);
	func_34(258, joaat("SDN_COM_POLICE_2"), 5, 0);
	func_34(259, joaat("SDN_COM_POLICE_3"), 5, 0);
	func_34(260, joaat("SDN_DOCK_POLICE_1"), 5, 0);
	func_34(261, joaat("SDN_DOCK_POLICE_2"), 5, 0);
	func_34(262, joaat("SDN_FRENCH_POLICE_1"), 5, 0);
	func_34(263, joaat("SDN_FRENCH_POLICE_2"), 5, 0);
	func_34(264, joaat("SDN_FRENCH_POLICE_3"), 5, 0);
	func_34(267, joaat("SDN_GARDEN_POLICE_1"), 5, 0);
	func_34(268, joaat("SDN_GARDEN_POLICE_2"), 5, 0);
	func_34(269, joaat("SDN_GARDEN_POLICE_3"), 5, 0);
	func_34(270, joaat("SDN_GARDEN_POLICE_4"), 5, 0);
	func_34(271, joaat("SDN_GARDEN_POLICE_5"), 5, 0);
	func_34(272, joaat("SDN_GARDEN_POLICE_6"), 5, 0);
	func_34(273, joaat("SDN_GARDEN_POLICE_7"), 5, 0);
	func_34(274, joaat("SDN_GARDEN_POLICE_8"), 5, 0);
	func_34(275, joaat("SDN_GARDEN_POLICE_9"), 5, 0);
	func_34(276, joaat("SDN_GARDEN_POLICE_10"), 5, 0);
	func_34(277, joaat("SDN_GARDEN_CAT"), 5, 0);
	func_34(278, joaat("SDN_GARDEN_DOG"), 5, 0);
	func_34(279, joaat("SDN_GARDEN_DRINKER_1"), 5, 0);
	func_34(280, joaat("SDN_GARDEN_DRINKER_2"), 5, 0);
	func_34(143, joaat("SDN_PHOTOGRAPHER"), 5, 0);
	func_34(281, joaat("SDN_PRISONER_1"), 5, 0);
	func_34(282, joaat("SDN_PRISONER_2"), 5, 0);
	func_34(283, joaat("SDN_SHOW_TICKET_VENDOR"), 5, (1 << 20));
	func_34(284, joaat("SDN_SHOW_TICKET_VENDOR_2"), 5, (1 << 20));
	func_34(142, joaat("SDN_TAILOR"), 5, (1 << 20));
	func_34(305, joaat("SDN_TOURIST_MALE_1"), 5, 0);
	func_34(306, joaat("SDN_TOURIST_FEMALE_1"), 5, 0);
	func_34(141, joaat("SDN_TRAINSTATIONWORKER"), 5, 0);
	func_34(285, joaat("SDN_WAGON_DELIVERY_1"), 5, 0);
	func_34(286, joaat("SDN_WAGON_DELIVERY_2"), 5, 0);
	func_34(322, joaat("SDN_FRENCH_COURTYARD_DOG"), 5, 0);
	func_34(316, joaat("SDN_FRENCH_RAKER"), 5, 0);
	func_34(317, joaat("SDN_FRENCH_SALOON_1"), 5, 0);
	func_34(318, joaat("SDN_FRENCH_SALOON_2"), 5, 0);
	func_34(319, joaat("SDN_FRENCH_SALOON_3"), 5, 0);
	func_34(320, joaat("SDN_FRENCH_PROSTITUTE_1"), 5, 0);
	func_34(321, joaat("SDN_FRENCH_TRUMPET_MALE_1"), 5, 0);
	func_34(323, joaat("SDN_FRENCH_LOWERCLASS_WOMAN"), 5, 0);
	func_34(324, joaat("SDN_FRENCH_SWEEPER"), 5, 0);
	func_34(287, joaat("SDN_SLUMS_SALOON_1"), 5, 0);
	func_34(288, joaat("SDN_SLUMS_SALOON_2"), 5, 0);
	func_34(289, joaat("SDN_SLUMS_SALOON_PIANO"), 5, 0);
	func_34(298, joaat("SDN_SLUMS_PROSTITUTE_1"), 5, 0);
	func_34(299, joaat("SDN_SOUP_KITCHEN_1"), 5, 0);
	func_34(300, joaat("SDN_SOUP_KITCHEN_2"), 5, 0);
	func_34(301, joaat("SDN_SOUP_KITCHEN_3"), 5, 0);
	func_34(302, joaat("SDN_SOUP_KITCHEN_4"), 5, 0);
	func_34(303, joaat("SDN_SOUP_KITCHEN_5"), 5, 0);
	func_34(304, joaat("SDN_SOUP_KITCHEN_6"), 5, 0);
	func_34(290, joaat("SDN_SLUMS_MALE_RES_1"), 5, 0);
	func_34(291, joaat("SDN_SLUMS_MALE_RES_2"), 5, 0);
	func_34(292, joaat("SDN_SLUMS_MALE_RES_3"), 5, 0);
	func_34(293, joaat("SDN_SLUMS_FEMALE_RES_1"), 5, 0);
	func_34(294, joaat("SDN_SLUMS_FEMALE_RES_2"), 5, 0);
	func_34(295, joaat("SDN_SLUMS_SHADY"), 5, 0);
	func_34(296, joaat("SDN_SLUMS_FISHERMAN"), 5, 0);
	func_34(297, joaat("SDN_SLUMS_ARTIST"), 5, 0);
	func_34(307, joaat("SDN_CEMETERY_KEEPER"), 5, 0);
	func_34(308, joaat("SDN_CHURCH_KEEPER"), 5, 0);
	func_34(309, joaat("SDN_SLUMS_PIG_1"), 5, 0);
	func_34(310, joaat("SDN_SLUMS_PIG_2"), 5, 0);
	func_34(311, joaat("SDN_SLUMS_DOG_1"), 5, 0);
	func_34(312, joaat("SDN_SLUMS_DOG_2"), 5, 0);
	func_34(313, joaat("SDN_SLUMS_DOG_3"), 5, 0);
	func_34(314, joaat("SDN_SLUMS_DOG_4"), 5, 0);
	func_34(315, joaat("SDN_SLUMS_DOG_5"), 5, 0);
	func_34(334, joaat("SIS_BRIDGE_GUARD"), 32, 0);
	func_34(335, joaat("SIS_BRIDGE_GUARD_2"), 32, 0);
	func_34(325, joaat("SIS_COURTYARD_GUARD"), 32, 0);
	func_34(326, joaat("SIS_COURTYARD_GUARD_2"), 32, 0);
	func_34(327, joaat("SIS_COURTYARD_GUARD_3"), 32, 0);
	func_34(328, joaat("SIS_COURTYARD_GUARD_4"), 32, 0);
	func_34(336, joaat("SIS_DOCKS_GUARD"), 32, 0);
	func_34(337, joaat("SIS_FIELD_GUARD"), 32, 0);
	func_34(338, joaat("SIS_FIELD_GUARD_2"), 32, 0);
	func_34(339, joaat("SIS_FIELD_GUARD_3"), 32, 0);
	func_34(340, joaat("SIS_FIELD_GUARD_4"), 32, 0);
	func_34(329, joaat("SIS_GATE_GUARD"), 32, 0);
	func_34(330, joaat("SIS_GATE_GUARD_2"), 32, 0);
	func_34(331, joaat("SIS_GATE_GUARD_3"), 32, 0);
	func_34(332, joaat("SIS_GATE_GUARD_4"), 32, 0);
	func_34(333, joaat("SIS_GATE_GUARD_5"), 32, 0);
	func_34(341, joaat("SIS_WALL_GUARD"), 32, 0);
	func_34(342, joaat("SIS_WALL_GUARD_2"), 32, 0);
	func_34(343, joaat("SIS_WALL_GUARD_3"), 32, 0);
	func_34(344, joaat("SIS_WALL_GUARD_4"), 32, 0);
	func_34(345, joaat("TBL_HOMEOWNER_MALE_RESIDENT"), 115, 0);
	func_34(351, joaat("TBL_BARTENDER"), 115, 0);
	func_34(352, joaat("TBL_BUTCHER"), 115, 0);
	func_34(346, joaat("TBL_HOMEOWNER_FEMALE_RESIDENT"), 115, 0);
	func_34(347, joaat("TBL_HORSE_SHOP_OWNER"), 115, 0);
	func_34(375, joaat("TBL_RANCHER"), 115, 0);
	func_34(372, joaat("TBL_RANCH_HORSES"), 115, 0);
	func_34(373, joaat("TBL_RANCH_WORKER_1"), 115, 0);
	func_34(374, joaat("TBL_RANCH_WORKER_2"), 115, 0);
	func_34(348, joaat("TBL_SHERRIF"), 115, (1 << 21));
	func_34(367, joaat("TBL_SALOON_PATRON_1"), 115, 0);
	func_34(368, joaat("TBL_SALOON_PATRON_2"), 115, 0);
	func_34(369, joaat("TBL_SALOON_PATRON_3"), 115, 0);
	func_34(370, joaat("TBL_SALOON_WORKER_1"), 115, 0);
	func_34(371, joaat("TBL_SALOON_WORKER_2"), 115, 0);
	func_34(349, joaat("TBL_SHERRIF_DEPUTY"), 115, 0);
	func_34(350, joaat("TBL_SHERRIF_DEPUTY_3"), 115, 0);
	func_34(353, joaat("TBL_GENERAL_STORE_OWNER"), 115, 0);
	func_34(366, joaat("TBL_SCAVENGER"), 115, 0);
	func_34(354, joaat("TBL_PIANO_PLAYER"), 115, 0);
	func_34(355, joaat("TBL_DOG_1"), 115, 0);
	func_34(356, joaat("TBL_DOG_2"), 115, 0);
	func_34(357, joaat("TBL_RESIDENTS_DOG"), 115, 0);
	func_34(358, joaat("TBL_RANCH_DOG"), 115, 0);
	func_34(359, joaat("TBL_PRISONER_1"), 115, 0);
	func_34(360, joaat("TBL_PRISONER_2"), 115, 0);
	func_34(361, joaat("TBL_PRISONER_3"), 115, 0);
	func_34(362, joaat("TBL_PRISONER_4"), 115, 0);
	func_34(363, joaat("TBL_PRISONER_5"), 115, 0);
	func_34(364, joaat("TBL_PRISONER_6"), 115, 0);
	func_34(365, joaat("TBL_GUNSMITH_OWNER"), 115, 0);
	func_34(376, joaat("TWR_RANCH_GUARD"), 125, 0);
	func_34(377, joaat("TWR_RANCH_GUARD_2"), 125, 0);
	func_34(378, joaat("TWR_RANCH_GUARD_3"), 125, 0);
	func_34(379, joaat("TWR_RANCH_GUARD_4"), 125, 0);
	func_34(507, joaat("BEN_TRAINSTATIONWORKER"), 117, 0);
	func_34(791, joaat("RID_HORSES_PERSCHAR_1"), 124, 0);
	func_34(792, joaat("RID_HORSES_PERSCHAR_2"), 124, 0);
	func_34(793, joaat("RID_HORSESHOP_DOG"), 124, 0);
	func_34(380, joaat("LEV_DOG"), 61, 0);
	func_34(381, joaat("LEV_GOAT"), 61, 0);
	func_34(589, joaat("EMR_FATHER"), 69, 0);
	func_34(591, joaat("EMR_GARDENER"), 69, 0);
	func_34(592, joaat("EMR_GARDENER2"), 69, 0);
	func_34(593, joaat("EMR_HANDYMAN"), 69, 0);
	func_34(598, joaat("EMR_SON1"), 69, 0);
	func_34(602, joaat("EMR_CAT"), 69, 0);
	func_34(603, joaat("EMR_CAT_2"), 69, 0);
	func_34(604, joaat("EMR_CHICKENS_PERSCHAR_1"), 69, 0);
	func_34(605, joaat("EMR_COWS_PERSCHAR_1"), 69, 0);
	func_34(609, joaat("EMR_GOATS_PERSCHAR_1"), 69, 0);
	func_34(610, joaat("EMR_HORSES_PERSCHAR_1"), 69, 0);
	func_34(611, joaat("EMR_OX_PERSCHAR_1"), 69, 0);
	func_34(612, joaat("EMR_ROOSTER_PERSCHAR_1"), 69, 0);
	func_34(599, joaat("EMR_SHEEP_PERSCHAR_1"), 69, 0);
	func_34(600, joaat("EMR_SHEEP_PERSCHAR_2"), 69, 0);
	func_34(601, joaat("EMR_SHEEP_PERSCHAR_3"), 69, 0);
	func_34(606, joaat("EMR_DOG"), 69, 0);
	func_34(607, joaat("EMR_DOG_02"), 69, 0);
	func_34(608, joaat("EMR_DOG_03"), 69, 0);
	func_34(594, joaat("EMR_FARMHAND1"), 69, 0);
	func_34(595, joaat("EMR_FARMHAND2"), 69, 0);
	func_34(596, joaat("EMR_FARMHAND3"), 69, 0);
	func_34(597, joaat("EMR_FARMHAND4"), 69, 0);
	func_34(590, joaat("EMR_TRAINSTATIONWORKER"), 69, 0);
	func_34(554, joaat("DOR_THOMASDOWN"), 68, 32);
	func_34(555, joaat("DOR_EDITHDOWN"), 68, 32);
	func_34(556, joaat("DOR_ARCHIEDOWN"), 68, 32);
	func_34(557, joaat("DOR_RANCHHAND"), 68, 0);
	func_34(565, joaat("DOR_HUSBAND"), 68, 0);
	func_34(560, joaat("DOWNS_RANCH_PIGS_PERSCHAR_1"), 68, 0);
	func_34(561, joaat("DOWNS_RANCH_GOATS_PERSCHAR_1"), 68, 0);
	func_34(562, joaat("DOWNS_RANCH_OX_PERSCHAR_1"), 68, 0);
	func_34(563, joaat("DOR_FRIENDLY_DOG"), 68, 0);
	func_34(564, joaat("DOR_GUARD_DOG"), 68, 0);
	func_34(558, joaat("DOWNS_RANCH_DEMO_COWS"), 68, 32);
	func_34(559, joaat("DOWNS_RANCH_DEMO_COWS_2"), 68, 32);
	func_34(691, joaat("OFW_OFFICER1"), 35, 0);
	func_34(692, joaat("OFW_OFFICER2"), 35, 0);
	func_34(693, joaat("OFW_OFFICER3"), 35, 0);
	func_34(696, joaat("OFW_ENLISTED1"), 35, 0);
	func_34(697, joaat("OFW_ENLISTED2"), 35, 0);
	func_34(698, joaat("OFW_ENLISTED3"), 35, 0);
	func_34(699, joaat("OFW_ENLISTED4"), 35, 0);
	func_34(700, joaat("OFW_ENLISTED5"), 35, 0);
	func_34(694, joaat("OFW_DOG"), 35, 0);
	func_34(695, joaat("OFW_DOG_2"), 35, 0);
	func_34(701, joaat("WAP_SHOPKEEPER"), 56, (1 << 20));
	func_34(704, joaat("WAP_HEADBRAVE"), 56, 0);
	func_34(703, joaat("WAP_OFFICIAL"), 56, 0);
	func_34(705, joaat("WAP_SIOUXCHEF"), 56, 0);
	func_34(702, joaat("WAP_MEDICINEMAN"), 56, 0);
	func_34(706, joaat("WAP_HORSE_1"), 56, 0);
	func_34(707, joaat("WAP_HORSE_2"), 56, 0);
	func_34(708, joaat("WAP_HORSE_3"), 56, 0);
	func_34(659, joaat("BUT_CONSTRUCTION_DRUNK_1"), 82, 0);
	func_34(660, joaat("BUT_CONSTRUCTION_DRUNK_2"), 82, 0);
	func_34(665, joaat("BUT_SHAMAN"), 82, 32);
	func_34(674, joaat("BUT_CHICKENS_PERSCHAR_1"), 82, 0);
	func_34(675, joaat("BUT_CHICKENS_PERSCHAR_2"), 82, 0);
	func_34(676, joaat("BUT_CHICKENS_PERSCHAR_3"), 82, 0);
	func_34(677, joaat("BUT_CHICKENS_PERSCHAR_4"), 82, 0);
	func_34(678, joaat("BUT_CHICKENS_PERSCHAR_5"), 82, 0);
	func_34(661, joaat("BUT_FISHERMAN"), 82, 0);
	func_34(662, joaat("BUT_FISHERMAN_FRIEND"), 82, 0);
	func_34(679, joaat("BUT_GOATS_PERSCHAR_1"), 82, 0);
	func_34(680, joaat("BUT_GOATS_PERSCHAR_2"), 82, 0);
	func_34(681, joaat("BUT_GOATS_PERSCHAR_3"), 82, 0);
	func_34(682, joaat("BUT_RESIDENT_DOG_1"), 82, 0);
	func_34(683, joaat("BUT_RESIDENT_DOG_2"), 82, 0);
	func_34(684, joaat("BUT_OX_PERSCHAR_1"), 82, 0);
	func_34(685, joaat("BUT_PIGS_PERSCHAR_1"), 82, 0);
	func_34(686, joaat("BUT_ROAMING_PIG"), 82, 0);
	func_34(663, joaat("BUT_RESIDENT_FATHER"), 82, 0);
	func_34(664, joaat("BUT_RESIDENT_MOTHER"), 82, 0);
	func_34(666, joaat("BUT_RESIDENT_SON"), 82, 0);
	func_34(687, joaat("BUT_ROOSTER_PERSCHAR_1"), 82, 0);
	func_34(688, joaat("BUT_ROOSTER_PERSCHAR_2"), 82, 0);
	func_34(667, joaat("BUT_SHACK_MAID_1"), 82, 0);
	func_34(668, joaat("BUT_SHACK_MAID_2"), 82, 0);
	func_34(689, joaat("BUT_SOLITARY_FARMER"), 82, 0);
	func_34(690, joaat("BUT_SOLITARY_DOG"), 82, 0);
	func_34(669, joaat("BUT_SUPPLY_SHACK_CIV_1"), 82, 0);
	func_34(670, joaat("BUT_SUPPLY_SHACK_CIV_2"), 82, 0);
	func_34(671, joaat("BUT_SUPPLY_SHACK_CIV_3"), 82, 0);
	func_34(672, joaat("BUT_RESIDENT_MALE_1"), 82, 0);
	func_34(673, joaat("BUT_RESIDENT_MALE_2"), 82, 0);
	func_34(474, joaat("STR_GENERAL_STORE"), 26, (1 << 20));
	func_34(472, joaat("STR_SHERIFF"), 26, (1 << 21));
	func_34(473, joaat("STR_SHERIFF_DEPUTY"), 26, (1 << 21));
	func_34(476, joaat("STR_FREIGHT_CLERK"), 26, 0);
	func_34(483, joaat("STR_MAYOR"), 26, 32);
	func_34(477, joaat("STR_NEWSPAPER_VENDOR"), 26, 0);
	func_34(487, joaat("STR_CONSTRUCTION_1"), 26, 0);
	func_34(488, joaat("STR_CONSTRUCTION_2"), 26, 0);
	func_34(489, joaat("STR_CONSTRUCTION_3"), 26, 0);
	func_34(492, joaat("STR_WELCOME_CENTER_CLERK"), 26, 0);
	func_34(490, joaat("STR_CONSTR_WIFE_1"), 26, 32);
	func_34(491, joaat("STR_CONSTR_WIFE_2"), 26, 32);
	func_34(501, joaat("STR_TOWN_CAT"), 26, 0);
	func_34(502, joaat("STR_TOWN_DOG"), 26, 0);
	func_34(497, joaat("STR_TOURIST_MALE_1"), 26, 0);
	func_34(498, joaat("STR_TOURIST_MALE_2"), 26, 0);
	func_34(485, joaat("STR_WOOD_CHOPPER_1"), 26, 0);
	func_34(486, joaat("STR_WOOD_CHOP_WIFE"), 26, 0);
	func_34(481, joaat("STR_BLACKSMITH"), 26, 0);
	func_34(480, joaat("STR_HORSESHOP_RANCHHAND"), 26, 0);
	func_34(484, joaat("STR_RANCHER"), 26, 0);
	func_34(475, joaat("STR_FISHERMAN"), 26, 0);
	func_34(482, joaat("STR_PERSCHAR_HORSES"), 26, 0);
	func_34(494, joaat("STR_TOWN_WORKER_1"), 26, 0);
	func_34(495, joaat("STR_TOWN_WORKER_2"), 26, 0);
	func_34(496, joaat("STR_TOWN_WORKER_3"), 26, 0);
	func_34(493, joaat("STR_LAZY_WORKER"), 26, 0);
	func_34(499, joaat("STR_PRISONER_01"), 26, 0);
	func_34(500, joaat("STR_PRISONER_02"), 26, 0);
	func_34(478, joaat("STR_BUTCHER"), 26, 0);
	func_34(479, joaat("STR_HORSE_SHOP_OWNER"), 26, 0);
	func_34(709, joaat("PHR_DAVID_GEDDES"), -1, 0);
	func_34(710, joaat("PHR_TOM_DICKENS"), -1, 0);
	func_34(711, joaat("PHR_MRS_GEDDES"), -1, 0);
	func_34(714, joaat("PHR_ABE"), -1, 0);
	func_34(712, joaat("PHR_ANGUS_GEDDES"), -1, 0);
	func_34(713, joaat("PHR_DUNCAN_GEDDES"), -1, 0);
	func_34(719, joaat("PHR_RANCH_HAND1"), 22, 0);
	func_34(720, joaat("PHR_RANCH_HAND2"), 22, 0);
	func_34(721, joaat("PHR_RANCH_HAND3"), 22, 0);
	func_34(722, joaat("PHR_RANCH_HAND4"), 22, 0);
	func_34(723, joaat("PHR_RANCH_HAND5"), 22, 0);
	func_34(715, joaat("PHR_DOG"), 22, 0);
	func_34(716, joaat("PHR_COWS_1"), 22, 0);
	func_34(717, joaat("PHR_HORSES_1"), 22, 0);
	func_34(718, joaat("PHR_OXEN_1"), 22, 0);
	func_34(724, joaat("MAP_DOG_1"), 110, 0);
	func_34(725, joaat("MAP_ARTIST"), 110, 0);
	func_34(726, joaat("MAP_ARTIST_WIFE"), 110, 0);
	func_34(727, joaat("MAP_BLACKSMITH"), 110, 0);
	func_34(728, joaat("MAP_BLACKSMITH_WIFE"), 110, 0);
	func_34(729, joaat("MAP_WORKER"), 110, 0);
	func_34(730, joaat("MAP_WORKER_WIFE"), 110, 0);
	func_34(566, joaat("CKT_WORKER"), 65, 0);
	func_34(567, joaat("CKT_WORKER_2"), 65, 0);
	func_34(568, joaat("HTL_FOREMAN"), 65, 0);
	func_34(569, joaat("CKT_FOREMAN_2"), 65, 0);
	func_34(572, joaat("CKT_GUARD_1"), 65, 0);
	func_34(573, joaat("CKT_GUARD_2"), 65, 0);
	func_34(574, joaat("CKT_GUARD_3"), 65, 0);
	func_34(575, joaat("CKT_GUARD_4"), 65, 0);
	func_34(576, joaat("CKT_GUARD_5"), 65, 0);
	func_34(577, joaat("CKT_GUARD_6"), 65, 0);
	func_34(578, joaat("CKT_GUARD_7"), 65, 0);
	func_34(579, joaat("CKT_GUARD_8"), 65, 0);
	func_34(580, joaat("CKT_GUARD_9"), 65, 0);
	func_34(581, joaat("CKT_GUARD_10"), 65, 0);
	func_34(582, joaat("CKT_GUARD_11"), 65, 0);
	func_34(583, joaat("CKT_GUARD_12"), 65, 0);
	func_34(584, joaat("CKT_GUARD_13"), 65, 0);
	func_34(585, joaat("CKT_GUARD_14"), 65, 0);
	func_34(586, joaat("CKT_GUARD_15"), 65, 0);
	func_34(587, joaat("CKT_GUARD_16"), 65, 0);
	func_34(588, joaat("CKT_GUARD_17"), 65, 0);
	func_34(570, joaat("CKT_DOG"), 65, 0);
	func_34(571, joaat("CKT_DOG_2"), 65, 0);
	func_34(443, joaat("VHT_BARTENDER"), 92, 0);
	func_34(444, joaat("VHT_EXOTIC_STORE"), 92, (1 << 20));
	func_34(471, joaat("VHT_MUSICIAN"), 92, 0);
	func_34(446, joaat("VHT_TOWN_RESIDENT_1"), 92, 0);
	func_34(447, joaat("VHT_TOWN_RESIDENT_2"), 92, 0);
	func_34(448, joaat("VHT_TOWN_RESIDENT_3"), 92, 0);
	func_34(449, joaat("VHT_RESIDENTS_GUARD_DOG"), 92, 0);
	func_34(450, joaat("VHT_SALOON_PATRON_1"), 92, 0);
	func_34(451, joaat("VHT_SALOON_PATRON_2"), 92, 0);
	func_34(452, joaat("VHT_SALOON_PATRON_3"), 92, 0);
	func_34(453, joaat("VHT_SALOON_PATRON_4"), 92, 0);
	func_34(445, joaat("VHT_HARMONICA_PLAYER"), 92, 0);
	func_34(454, joaat("VHT_SCAVENGER"), 92, 0);
	func_34(459, joaat("VHT_HORSE_SHOP_OWNER"), 92, 0);
	func_34(460, joaat("VHT_HORSE_SHOP_DOG"), 92, 0);
	func_34(455, joaat("VHT_SQUATTER_1"), 92, 0);
	func_34(456, joaat("VHT_SQUATTER_2"), 92, 0);
	func_34(457, joaat("VHT_SQUATTER_3"), 92, 0);
	func_34(458, joaat("VHT_SQUATTER_4"), 92, 0);
	func_34(461, joaat("VHT_SQUATTER_DOG"), 92, 0);
	func_34(462, joaat("VHT_TOWN_DOG_1"), 92, 0);
	func_34(463, joaat("VHT_GEN_GUARD_DOG"), 92, 0);
	func_34(465, joaat("VHT_TOWN_GRIEFER"), 92, 0);
	func_34(464, joaat("VHT_TOWN_DRUNK"), 92, 0);
	func_34(466, joaat("VHT_PROSTITUTE_1"), 92, 0);
	func_34(467, joaat("VHT_PROSTITUTE_2"), 92, 0);
	func_34(468, joaat("VHT_HORSE_1"), 92, 0);
	func_34(469, joaat("VHT_GOAT_1"), 92, 0);
	func_34(470, joaat("VHT_STATION_CLERK"), 92, 0);
	func_34(741, joaat("CFJ_FATHER"), 96, 0);
	func_34(743, joaat("CFJ_SON"), 96, 0);
	func_34(742, joaat("CFJ_SON_OLDER"), 96, 0);
	func_34(513, joaat("BLW_GENERAL_STORE"), 38, (1 << 20));
	func_34(516, joaat("BLW_HORSE_SHOP_OWNER"), 38, (1 << 20));
	func_34(517, joaat("BLW_HORSES"), 38, 0);
	func_34(521, joaat("BLW_TAILOR"), 38, (1 << 20));
	func_34(529, joaat("BLW_BARBER"), 38, (1 << 20));
	func_34(532, joaat("BLW_BUTCHER"), 38, (1 << 20));
	func_34(522, joaat("BLW_TRAIN_WORKER"), 38, 0);
	func_34(524, joaat("BLW_NEWSPAPER"), 38, 0);
	func_34(514, joaat("BLW_PHOTOGRAPHER"), 38, 0);
	func_34(515, joaat("BLW_PIANO_PLAYER"), 38, 0);
	func_34(509, joaat("BLW_POLICE_CHIEF"), 38, 0);
	func_34(510, joaat("BLW_POLICE_DEPUTY"), 38, 0);
	func_34(511, joaat("BLW_PRISONER_01"), 38, 0);
	func_34((1 << 9), joaat("BLW_PRISONER_02"), 38, 0);
	func_34(519, joaat("BLW_BANK_CLERK"), 38, 0);
	func_34(520, joaat("BLW_BANK_GUARD"), 38, 0);
	func_34(508, joaat("BLW_BARTENDER"), 38, 0);
	func_34(525, joaat("BLW_TICKET_VENDOR"), 38, 0);
	func_34(526, joaat("BLW_LIVERY_WORKER"), 38, 0);
	func_34(527, joaat("BLW_LIVERY_WORKER_02"), 38, 0);
	func_34(528, joaat("BLW_LIVERY_WORKER_02_WIFE"), 38, 0);
	func_34(530, joaat("BLW_BLACKSMITH"), 38, 0);
	func_34(531, joaat("BLW_BLACKSMITH_DOG"), 38, 0);
	func_34(533, joaat("BLW_CARRIAGE_HOUSE"), 38, 0);
	func_34(518, joaat("BLW_COWS"), 38, 0);
	func_34(534, joaat("BLW_CHEF"), 38, 0);
	func_34(535, joaat("BLW_CONSTRUCTION_01"), 38, 0);
	func_34(536, joaat("BLW_CONSTRUCTION_02"), 38, 0);
	func_34(537, joaat("BLW_CONSTRUCTION_03"), 38, 0);
	func_34(538, joaat("BLW_CONSTRUCTION_04"), 38, 0);
	func_34(539, joaat("BLW_CONSTRUCTION_ASSISTANT"), 38, 0);
	func_34(540, joaat("BLW_CONSTRUCTION_BOSS"), 38, 0);
	func_34(541, joaat("BLW_CONSTRUCTION_FOREMAN_1"), 38, 0);
	func_34(542, joaat("BLW_CONSTRUCTION_FOREMAN_2"), 38, 0);
	func_34(543, joaat("BLW_GROCERY_FARMER"), 38, 0);
	func_34(544, joaat("BLW_HANDYMAN_1"), 38, 0);
	func_34(545, joaat("BLW_HANDYMAN_2"), 38, 0);
	func_34(546, joaat("BLW_HOMEOWNER_1"), 38, 0);
	func_34(547, joaat("BLW_HOMEOWNER_2"), 38, 0);
	func_34(548, joaat("BLW_SLUM_01"), 38, 0);
	func_34(549, joaat("BLW_SLUM_WIFE_01"), 38, 0);
	func_34(550, joaat("BLW_TENT_CHEF"), 38, 0);
	func_34(551, joaat("BLW_TENT_CHEF_WIFE"), 38, 0);
	func_34(523, joaat("BLW_CHICKENS_01"), 38, 0);
	func_34(552, joaat("BLW_WAGON_DELIVERY_1"), 38, 0);
	func_34(553, joaat("BLW_WAGON_DELIVERY_2"), 38, 0);
	func_34(432, joaat("AMD_BARTENDER"), 120, 0);
	func_34(433, joaat("AMD_BAR_PATRON"), 120, 0);
	func_34(434, joaat("AMD_GENERAL_STORE"), 120, 0);
	func_34(435, joaat("AMD_UNDERTAKER"), 120, 0);
	func_34(436, joaat("AMD_UNDERTAKER_HELPER_1"), 120, 0);
	func_34(437, joaat("AMD_CORPSE_WAGON_DRIVER"), 120, 0);
	func_34(434, joaat("AMD_GENERAL_STORE"), 120, 0);
	func_34(438, joaat("AMD_CHICKENS_1"), 120, 0);
	func_34(439, joaat("AMD_DOG_1"), 120, 0);
	func_34(440, joaat("AMD_DOG_2"), 120, 0);
	func_34(441, joaat("AMD_HORSES_1"), 120, 0);
	func_34(442, joaat("AMD_PIGS_1"), 120, 0);
	func_34(385, joaat("ASB_GUNSMITH"), 78, (1 << 20));
	func_34(382, joaat("ASB_SHERIFF"), 78, (1 << 21));
	func_34(383, joaat("ASB_DEPUTY"), 78, (1 << 21));
	func_34(386, joaat("ASB_NEWSPAPER_VENDOR"), 78, 0);
	func_34(430, joaat("ASB_PRISONER_01"), 78, 0);
	func_34(431, joaat("ASB_PRISONER_02"), 78, 0);
	func_34(387, joaat("ASB_GUARD_01"), 78, 0);
	func_34(388, joaat("ASB_GUARD_02"), 78, 0);
	func_34(389, joaat("ASB_GUARD_03"), 78, 0);
	func_34(390, joaat("ASB_GUARD_04"), 78, 0);
	func_34(391, joaat("ASB_GUARD_05"), 78, 0);
	func_34(392, joaat("ASB_GUARD_06"), 78, 0);
	func_34(393, joaat("ASB_GUARD_07"), 78, 0);
	func_34(394, joaat("ASB_HORSES_01"), 78, 0);
	func_34(401, joaat("ASB_LUMBER_WORKER_01"), 78, 0);
	func_34(402, joaat("ASB_LUMBER_WORKER_02"), 78, 0);
	func_34(403, joaat("ASB_LUMBER_WORKER_03"), 78, 0);
	func_34(395, joaat("ASB_PLANT_WORKER_01"), 78, 0);
	func_34(396, joaat("ASB_PLANT_WORKER_02"), 78, 0);
	func_34(397, joaat("ASB_PLANT_WORKER_03"), 78, 0);
	func_34(398, joaat("ASB_PLANT_WORKER_04"), 78, 0);
	func_34(399, joaat("ASB_PLANT_WORKER_05"), 78, 0);
	func_34(400, joaat("ASB_PLANT_WORKER_06"), 78, 0);
	func_34(404, joaat("ASB_MINE_WORKER_01"), 78, 0);
	func_34(405, joaat("ASB_MINE_WORKER_02"), 78, 0);
	func_34(406, joaat("ASB_MINE_WORKER_03"), 78, 0);
	func_34(407, joaat("ASB_MINE_WORKER_04"), 78, 0);
	func_34(408, joaat("ASB_MINE_WORKER_05"), 78, 0);
	func_34(409, joaat("ASB_MINE_WORKER_06"), 78, 0);
	func_34(410, joaat("ASB_MINE_WORKER_07"), 78, 0);
	func_34(411, joaat("ASB_MINE_WORKER_08"), 78, 0);
	func_34(412, joaat("ASB_MINE_WORKER_09"), 78, 0);
	func_34(413, joaat("ASB_MINE_WORKER_10"), 78, 0);
	func_34(414, joaat("ASB_MINE_WORKER_11"), 78, 0);
	func_34(415, joaat("ASB_MINE_WORKER_12"), 78, 0);
	func_34(416, joaat("ASB_WORKER_WIFE_01"), 78, 0);
	func_34(417, joaat("ASB_WORKER_WIFE_02"), 78, 0);
	func_34(418, joaat("ASB_WORKER_WIFE_03"), 78, 0);
	func_34(419, joaat("ASB_WORKER_WIFE_04"), 78, 0);
	func_34(420, joaat("ASB_WORKER_WIFE_05"), 78, 0);
	func_34(421, joaat("ASB_WORKER_WIFE_06"), 78, 0);
	func_34(422, joaat("ASB_WORKER_WIFE_07"), 78, 0);
	func_34(423, joaat("ASB_WORKER_WIFE_08"), 78, 0);
	func_34(424, joaat("ASB_WORKER_WIFE_09"), 78, 0);
	func_34(425, joaat("ASB_WORKER_WIFE_10"), 78, 0);
	func_34(426, joaat("ASB_WORKER_WIFE_11"), 78, 0);
	func_34(427, joaat("ASB_WORKER_WIFE_12"), 78, 0);
	func_34(428, joaat("ASB_WORKER_WIFE_13"), 78, 0);
	func_34(429, joaat("ASB_WORKER_WIFE_14"), 78, 0);
	func_34(384, joaat("ASB_TRAINSTATIONWORKER"), 78, 0);
	func_34(768, joaat("MLH_COWS_PERSCHAR_1"), 86, 0);
	func_34(769, joaat("MLH_COWS_PERSCHAR_2"), 86, 0);
	func_34(770, joaat("MLH_COWS_PERSCHAR_3"), 86, 0);
	func_34(771, joaat("MLH_PIGS_PERSCHAR_1"), 86, 0);
	func_34(772, joaat("MLH_GUARD_DOG"), 86, 0);
	func_34(773, joaat("MFR_CAT"), 126, 0);
	func_34(774, joaat("MFR_CHICKENS_PERSCHAR_1"), 126, 0);
	func_34(775, joaat("MFR_CHICKENS_PERSCHAR_2"), 126, 0);
	func_34(776, joaat("MFR_DOG_PERSCHAR_1"), 126, 0);
	func_34(777, joaat("MFR_DOG_PERSCHAR_2"), 126, 0);
	func_34(778, joaat("MFR_ROOSTERS_PERSCHAR_1"), 126, 0);
	func_34(779, joaat("MFR_ROOSTERS_PERSCHAR_2"), 126, 0);
	func_34(780, joaat("PAI_RANCHHAND_02"), 21, 0);
	func_34(782, joaat("PAI_COWS"), 21, 0);
	func_34(781, joaat("PAI_DOG"), 21, 0);
	func_34(764, joaat("LNS_TENANT_1"), 102, 0);
	func_34(765, joaat("LNS_TENANT_2"), 102, 0);
	func_34(766, joaat("LNS_TENANT_3"), 102, 0);
	func_34(767, joaat("LNS_TENANT_4"), 102, 0);
	func_34(745, joaat("CRO_RANCHER"), 66, 0);
	func_34(746, joaat("CRO_RANCH_HAND"), 66, 0);
	func_34(747, joaat("CRO_FRIENDLY_DOG"), 66, 0);
	func_34(748, joaat("CRO_GUARD_DOG"), 66, 0);
	func_34(749, joaat("CRO_MULE"), 66, 0);
	func_34(750, joaat("CRO_OX_1"), 66, 0);
	func_34(751, joaat("GRH_RANCH_HAND"), 70, 0);
	func_34(754, joaat("GRH_CHICKENS"), 70, 0);
	func_34(752, joaat("GRH_ROOSTER"), 70, 0);
	func_34(753, joaat("GRH_PIGS"), 70, 0);
	func_34(755, joaat("DAI_BULL"), 100, 0);
	func_34(760, joaat("DAI_RANCHER"), 100, 0);
	func_34(761, joaat("DAI_RANCH_HAND"), 100, 0);
	func_34(762, joaat("DAI_GUARD_DOG"), 100, 0);
	func_34(756, joaat("DAI_COWS_PERSCHAR_1"), 100, 0);
	func_34(757, joaat("DAI_COWS_PERSCHAR_2"), 100, 0);
	func_34(758, joaat("DAI_COWS_PERSCHAR_3"), 100, 0);
	func_34(759, joaat("DAI_DONKEY"), 100, 0);
	func_34(763, joaat("DAI_SICK_COW"), 100, 0);
	func_34(794, joaat("CHE_FATHER"), 42, 0);
	func_34(795, joaat("CHE_DAUGHTER"), 42, 0);
	func_34(796, joaat("CHE_SON_01"), 42, 0);
	func_34(797, joaat("CHE_SON_02"), 42, 0);
	func_34(798, joaat("CHE_SON_03"), 42, 0);
	func_34(733, joaat("LAR_TENANT_01"), 72, 0);
	func_34(735, joaat("LAR_DOG"), 72, 0);
	func_34(734, joaat("LARNED_SOD_GOAT_PERSCHAR_1"), 72, 0);
	func_34(736, joaat("CRD_CHICKENS_1"), 64, 0);
	func_34(737, joaat("CRD_DOG"), 64, 0);
	func_34(740, joaat("CRD_TENANT_02"), 64, 32);
	func_34(783, joaat("RKF_RANCHER"), 116, 0);
	func_34(784, joaat("RKF_RANCH_HAND"), 116, 0);
	func_34(790, joaat("RKF_GOATS_PERSCHAR"), 116, 0);
	func_34(789, joaat("RKF_CHICKENS_PERSCHAR"), 116, 0);
	func_34(785, joaat("RKF_DOG_1"), 116, 0);
	func_34(786, joaat("RKF_DOG_2"), 116, 0);
	func_34(787, joaat("RKF_DOG_3"), 116, 0);
	func_34(788, joaat("RKF_DOG_4"), 116, 0);
	func_34(799, joaat("RKS_TENANT"), 89, 0);
	func_34(800, joaat("RKS_DOG"), 89, 0);
	func_34(801, joaat("RGS_POSTMASTER"), 23, 0);
	func_34(802, joaat("WAL_TRAIN_CLERK"), 28, 0);
	func_34(803, joaat("WAL_GENSHOPKEEPER"), 28, 0);
	func_34(503, joaat("HEARTLANDS_SWANSON_STATION_PIGS_1"), 75, 0);
	func_34(505, joaat("SWA_CARETAKER"), 75, 0);
	func_34(506, joaat("SWA_CARETAKER_2"), 75, 0);
	func_34(504, joaat("SWA_DOG"), 75, 0);
	func_34(804, joaat("SCM_HORSE_SHOP_OWNER"), 101, 0);
	func_34(805, joaat("SCM_PERSCHAR_HORSES"), 101, 0);
	func_34(806, joaat("SCM_HORSE_SHOP_RANCHHAND"), 101, 0);
	func_34(807, joaat("EA_LCMP_FOREMAN"), 11, 0);
	func_34(810, joaat("EA_LCMP_CHOPPER_1"), 11, 0);
	func_34(811, joaat("EA_LCMP_CHOPPER_2"), 11, 0);
	func_34(812, joaat("EA_LCMP_CHOPPER_3"), 11, 0);
	func_34(813, joaat("EA_LCMP_CHOPPER_4"), 11, 0);
	func_34(814, joaat("EA_LCMP_WORKER_01"), 11, 0);
	func_34(815, joaat("EA_LCMP_WORKER_02"), 11, 0);
	func_34(816, joaat("EA_LCMP_WORKER_03"), 11, 0);
	func_34(817, joaat("EA_LCMP_WORKER_04"), 11, 0);
	func_34(818, joaat("EA_LCMP_WORKER_05"), 11, 0);
	func_34(819, joaat("EA_LCMP_WORKER_06"), 11, 0);
	func_34(820, joaat("EA_LCMP_WORKER_07"), 11, 0);
	func_34(821, joaat("EA_LCMP_WORKER_08"), 11, 0);
	func_34(822, joaat("EA_LCMP_WORKER_09"), 11, 0);
	func_34(823, joaat("EA_LCMP_WORKER_10"), 11, 0);
	func_34(824, joaat("EA_LCMP_WORKER_11"), 11, 0);
	func_34(825, joaat("EA_LCMP_WORKER_12"), 11, 0);
	func_34(826, joaat("EA_LCMP_WORKER_13"), 11, 0);
	func_34(827, joaat("EA_LCMP_WORKER_14"), 11, 0);
	func_34(828, joaat("EA_LCMP_WORKER_15"), 11, 0);
	func_34(829, joaat("EA_LCMP_WORKER_16"), 11, 0);
	func_34(830, joaat("EA_LCMP_WORKER_17"), 11, 0);
	func_34(831, joaat("EA_LCMP_WORKER_18"), 11, 0);
	func_34(832, joaat("EA_LCMP_WORKER_19"), 11, 0);
	func_34(833, joaat("EA_LCMP_WORKER_20"), 11, 0);
	func_34(808, joaat("EA_LCMP_DOG"), 11, 0);
	func_34(809, joaat("EA_LCMP_DOG_2"), 11, 0);
	func_34(64, joaat("EA_HMSTD_FOREMAN"), 76, (1 << 22));
	func_34(65, joaat("EA_HMSTD_WORKER_1"), 76, (1 << 22));
	func_34(66, joaat("EA_HMSTD_WORKER_2"), 76, (1 << 22));
	func_34(67, joaat("EA_HMSTD_MAN"), 76, (1 << 22));
	func_34(68, joaat("EA_HMSTD_WOMAN"), 76, (1 << 22));
	func_34(858, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	func_34(859, joaat("CRD_BULL"), -1, 256);
	func_34(860, joaat("CRD_DONKEY"), -1, 256);
	func_34(834, joaat("EA_RCAMP_FOREMAN"), 128, 0);
	func_34(835, joaat("EA_RCAMP_GUARD_01"), 128, 0);
	func_34(836, joaat("EA_RCAMP_GUARD_02"), 128, 0);
	func_34(837, joaat("EA_RCAMP_GUARD_03"), 128, 0);
	func_34(838, joaat("EA_RCAMP_WORKER_01"), 128, 0);
	func_34(839, joaat("EA_RCAMP_WORKER_02"), 128, 0);
	func_34(840, joaat("EA_RCAMP_WORKER_03"), 128, 0);
	func_34(841, joaat("EA_RCAMP_WORKER_04"), 128, 0);
	func_34(842, joaat("EA_RCAMP_WORKER_05"), 128, 0);
	func_34(843, joaat("EA_RCAMP_WORKER_06"), 128, 0);
	func_34(844, joaat("EA_RCAMP_WORKER_07"), 128, 0);
	func_34(845, joaat("EA_RCAMP_WORKER_08"), 128, 0);
	func_34(846, joaat("EA_RCAMP_WORKER_09"), 128, 0);
	func_34(847, joaat("EA_RCAMP_WORKER_10"), 128, 0);
	func_34(848, joaat("EA_RCAMP_WORKER_11"), 128, 0);
	func_34(849, joaat("EA_RCAMP_WORKER_12"), 128, 0);
	func_34(850, joaat("EA_RCAMP_WORKER_13"), 128, 0);
	func_34(851, joaat("EA_RCAMP_WORKER_14"), 128, 0);
	func_34(852, joaat("EA_RCAMP_WORKER_15"), 128, 0);
	func_34(853, joaat("EA_RCAMP_WORKER_16"), 128, 0);
	func_34(854, joaat("EA_RCAMP_WORKER_17"), 128, 0);
	func_34(855, joaat("EA_RCAMP_WORKER_18"), 128, 0);
	func_34(856, joaat("EA_RCAMP_WORKER_19"), 128, 0);
	func_34(857, joaat("EA_RCAMP_WORKER_20"), 128, 0);
	func_34(875, joaat("GAP_COUGAR_1"), -1, 256);
	func_34(876, joaat("GAP_GOAT_1"), -1, 256);
	func_34(878, joaat("GREAT_PLAINS_BUFFALO_HERD_PERSCHAR_1"), -1, 256);
	func_34(877, joaat("GRT_BLW_OUTSKIRTS_1"), -1, 256);
	func_34(865, joaat("GRIZZLIES_RAVEN"), -1, 256);
	func_34(861, joaat("GRIZZLIES_BEAR_01"), -1, 256);
	func_34(862, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	func_34(863, joaat("CRD_BULL"), -1, 256);
	func_34(864, joaat("CRD_DONKEY"), -1, 256);
	func_34(868, joaat("HEARTLANDS_BUFFALO_HERD_PERSCHAR_1"), -1, 256);
	func_34(873, joaat("HRT_CRO_RANCH_HAND_2"), -1, 256);
	func_34(874, joaat("HRT_CRO_RANCH_HAND_3"), -1, 256);
	func_34(866, joaat("HEARTLANDS_DEER_HERD_PERSCHAR_1"), -1, 256);
	func_34(867, joaat("HEARTLANDS_PRONGHORN_HERD_PERSCHAR_1"), -1, 256);
	func_34(869, joaat("HRT_CRD_TENANT_01"), -1, 256);
	func_34(870, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	func_34(871, joaat("CRD_BULL"), -1, 256);
	func_34(872, joaat("CRD_DONKEY"), -1, 256);
	func_34(879, joaat("BGV_COUGAR_1"), -1, 256);
	func_34(883, joaat("BGV_DELIVERY_1"), -1, 256);
	func_34(884, joaat("BGV_DELIVERY_2"), -1, 256);
	func_34(881, joaat("BIG_VALLEY_DEER_HERD_PERSCHAR_1"), -1, 256);
	func_34(882, joaat("BIG_VALLEY_BEAR_PERSCHAR_1"), -1, 256);
	func_34(880, joaat("BGV_WOLVES_1"), -1, 256);
	func_34(885, joaat("BGV_PAI_RANCHHAND_01"), -1, 288);
	func_34(888, joaat("CHO_COUGAR_1"), -1, 256);
	func_34(889, joaat("CHO_RID_HORSESHOP_OWNER"), -1, 256);
	func_34(890, joaat("CHO_RID_HORSESHOP_WIFE"), -1, 256);
	func_34(891, joaat("CHO_RID_HORSESHOP_RANCHHAND_1"), -1, 256);
	func_34(892, joaat("CHO_RID_HORSESHOP_RANCHHAND_2"), -1, 256);
	func_34(886, joaat("TBL_DELIVERY_RESIDENT"), -1, 256);
	func_34(887, joaat("TBL_DELIVERY_RESIDENT_2"), -1, 256);
	func_34(901, joaat("RIO_COUGAR_1"), -1, 256);
	func_34(904, joaat("ROA_COAL_DELIVERY1"), -1, 256);
	func_34(905, joaat("ROA_MLH_RANCHHAND"), -1, 256);
	func_34(906, joaat("ROA_MLH_RANCHHAND_2"), -1, 256);
	func_34(893, joaat("MFR_HORSES_PERSCHAR_1"), -1, 256);
	func_34(894, joaat("MFR_COWS_PERSCHAR_2"), -1, 256);
	func_34(900, joaat("HEN_MFR_RANCHER"), -1, 256);
	func_34(895, joaat("HEN_MFR_RANCH_HAND"), -1, 256);
	func_34(896, joaat("HEN_MFR_RANCH_HAND_2"), -1, 256);
	func_34(897, joaat("HEN_MFR_RANCH_HAND_3"), -1, 256);
	func_34(898, joaat("HEN_MFR_RANCH_HAND_4"), -1, 256);
	func_34(899, joaat("HEN_MFR_BLACKSMITH"), -1, 256);
	func_34(908, joaat("SCM_WHITE_SLUMS_1"), -1, 256);
	func_34(909, joaat("SCM_BRA_FIELD_GUARD"), -1, 256);
	func_34(910, joaat("SCM_BRA_FIELD_GUARD_2"), -1, 256);
	func_34(911, joaat("SCM_BRA_FIELD_GUARD_3"), -1, 256);
	func_34(912, joaat("SCM_BRA_FIELD_GUARD_4"), -1, 256);
	func_34(913, joaat("SCM_BRA_FIELD_GUARD_5"), -1, 256);
	func_34(914, joaat("SCM_BRA_FIELD_GUARD_6"), -1, 256);
	func_34(915, joaat("SCM_BRA_HORSE_GUARD"), -1, 256);
	func_34(916, joaat("SCM_BRA_HORSE_GUARD_2"), -1, 256);
	func_34(917, joaat("SCM_BRA_HORSE_GUARD_3"), -1, 256);
	func_34(918, joaat("SCM_CALIGA_GUARD_1"), -1, 256);
	func_34(919, joaat("SCM_CALIGA_GUARD_2"), -1, 256);
	func_34(920, joaat("SCM_HORSE_SHOP_OWNER"), -1, (1 << 20));
	func_34(921, joaat("SCM_LOVE_TRIANGLE_OX"), -1, 256);
	func_34(922, joaat("SCM_DAI_RANCHHAND_1"), -1, 256);
	func_34(923, joaat("SCM_DAI_RANCHHAND_2"), -1, 256);
	func_34(907, joaat("SCM_PANTHER_1"), -1, 256);
	func_34(924, joaat("TAL_BEAR_1"), -1, 256);
	func_34(925, joaat("TAL_COUGAR_1"), -1, 256);
	func_34(926, joaat("TAL_WOLVES_1"), -1, 256);
	func_34(927, joaat("BAYOU_PANTHER_PERSCHAR_1"), -1, 256);
	func_34(928, joaat("LAG_FATHER2"), -1, 256);
	func_34(929, joaat("LAG_M_TEEN1"), -1, 256);
	func_34(930, joaat("LAG_M_TEEN2"), -1, 256);
	func_34(931, joaat("LAG_GRANDFATHER1"), -1, 256);
	func_34(932, joaat("GLO_BLW_WAGON_DELIVERY_3"), -1, (1 << 9));
	func_34(933, joaat("GLO_RHD_SDN_DRIVER_1"), -1, (1 << 9));
	func_34(934, joaat("GLO_RHD_SDN_DRIVER_2"), -1, (1 << 9));
	func_34(935, joaat("GLO_COAL_DELIVERY3"), -1, (1 << 9));
	func_34(936, joaat("GLO_DAIRY_DELIVERY1"), -1, (1 << 9));
	func_34(937, joaat("GLO_DAIRY_DELIVERY3"), -1, (1 << 9));
	func_34(938, joaat("GLO_LUMBER_DELIVERY1"), -1, 544);
	func_34(939, joaat("GLO_LUMBER_DELIVERY2"), -1, 544);
	func_34(940, joaat("GLO_LUMBER_DELIVERY3"), -1, 544);
	func_34(941, joaat("GLO_OIL_DELIVERY1"), -1, (1 << 9));
	func_34(942, joaat("GLO_OIL_DELIVERY_VAL"), -1, 544);
	func_34(943, joaat("GLO_OIL_DELIVERY2"), -1, (1 << 9));
	func_34(944, joaat("GLO_OIL_DELIVERY3"), -1, (1 << 9));
	func_34(945, joaat("GLO_ORANGE_DELIVERY1"), -1, (1 << 9));
	func_34(946, joaat("GLO_ORANGE_DELIVERY2"), -1, (1 << 9));
	func_34(947, joaat("GLO_ORANGE_DELIVERY3"), -1, (1 << 9));
	func_34(948, joaat("GLO_TIMBER_DELIVERY1"), -1, 544);
	func_34(949, joaat("GLO_TIMBER_DELIVERY2"), -1, 544);
	func_34(950, joaat("GLO_TIMBER_DELIVERY3_PART1"), -1, 544);
	func_34(951, joaat("GLO_TIMBER_DELIVERY3_PART2"), -1, 544);
	func_34(952, joaat("GLO_WILDERNESS_TRAPPER"), -1, (1 << 9));
	return 1;
}

int func_5()
{
	int iVar0;

	Global_1879534.f_7300 = 32;
	func_35();
	func_36();
	func_37();
	func_38();
	func_39();
	func_40();
	func_41();
	func_42();
	func_43();
	func_44();
	func_45();
	func_46();
	func_47();
	func_48();
	func_49();
	func_50();
	func_51();
	func_52();
	func_53();
	func_54();
	func_55();
	func_56();
	func_57();
	func_58();
	func_59();
	func_60();
	func_61();
	func_62();
	func_63();
	func_64();
	func_65();
	func_66();
	func_67();
	iVar0 = Global_1879534.f_7300;
	iVar0 = Global_1879534.f_7300;
	while (iVar0 <= (32 - 1))
	{
		func_68(iVar0);
		iVar0++;
	}
	func_26((1 << 10));
	return 1;
}

int func_6()
{
	func_69();
	func_70();
	func_26((1 << 11));
	return 1;
}

int func_7()
{
	VOLUME::_0x748C5F51A18CB8F0(0);
	func_71(0, 0, "ABIGAIL11", "RABI1", "rcm_abigail11", -1, -146.9627f, -15.7764f, 95.2415f, 0, joaat("BLIP_SCM_ABIGAIL"), 262151, 100.0f);
	func_71(3, 3, "BANDP10", "RBNP10", "rcm_beau_and_penelope10", -1, 1736.427f, -1375.109f, 42.9164f, 0, joaat("BLIP_SCM_GRAYS"), 67240067, 200.0f);
	func_71(4, 3, "BANDP11", "RBNP11", "rcm_beau_and_penelope11", 5, 1790.746f, -1311.754f, 43.1925f, joaat("CS_BEAUGRAY"), joaat("BLIP_SCM_BEAU"), 1310737, 120.0f);
	func_71(5, 3, "BANDP12", "RBNP12", "rcm_beau_and_penelope12", -1, 1863.698f, -1349.39f, 41.2784f, 0, joaat("BLIP_SCM_BEAU"), 262149, 250.0f);
	func_71(21, 18, "BRAT01", "RBRT0", "rcm_braithwaites01", -1, 660.1356f, -1257.437f, 44.0746f, 0, joaat("BLIP_SCM_ABIGAIL"), 67239943, 120.0f);
	func_71(37, 23, "COACHROBBERY1", "RCHRB", "rcm_coach_robbery1", -1, 675.0945f, -1217.237f, 44.386f, 0, joaat("BLIP_SCM_TRELAWNEY"), 262151, 120.0f);
	func_71(58, 33, "DOCTORSOPINION1", "RDOPN", "rcm_doctors_opinion1", -1, 2802.581f, -1177.624f, 45.9451f, 0, 0, 134480023, 85.0f);
	func_71(59, 34, "DOWN1", "RDOWN1", "rcm_down1", 60, -171.1026f, -25.1129f, 94.9136f, 0, joaat("BLIP_SCM_STRAUSS"), 67, 120.0f);
	func_71(60, 34, "DOWNA", "RDOWNA", "rcm_down1_2", -1, -171.1026f, -25.1129f, 94.9136f, 0, joaat("BLIP_SCM_STRAUSS"), 12529, 150.0f);
	func_71(61, 34, "DOWN2", "RDOWN2", "rcm_down2", -1, -135.48f, -33.46f, 95.08f, 0, joaat("BLIP_AMBIENT_TITHING"), 97, 60.0f);
	func_71(62, 34, "DOWN3", "RDOWN3", "rcm_down3", -1, -815.8262f, 343.8745f, 99.3458f, 0, joaat("BLIP_SCM_STRAUSS"), 262341, 120.0f);
	func_71(63, 35, "DUSTER21", "RDST2", "rcm_dusters21", -1, -138.2931f, -13.8407f, 95.3376f, 0, joaat("BLIP_SCM_KIERAN"), 262215, 120.0f);
	func_71(64, 36, "DUSTER61", "RDST61", "rcm_dusters61", -1, 2362.525f, 1308.025f, 111.6106f, 0, joaat("BLIP_SCM_SADIE"), 67108931, 90.0f);
	func_71(65, 36, "DUSTER62", "RDST62", "rcm_dusters62", -1, -2110.199f, 660.5305f, 119.8892f, 0, joaat("BLIP_SCM_SADIE"), 1310725, 100.0f);
	func_71(66, 37, "DUTCH11", "RDTC1", "rcm_dutch11", -1, -129.8283f, -32.11561f, 94.94459f, 0, joaat("BLIP_MISSION_DUTCH"), 262215, 150.0f);
	func_71(67, 38, "DUTCH21", "RDTC2", "rcm_dutch21", -1, 672.7785f, -1246.157f, 42.9398f, 0, joaat("BLIP_MISSION_DUTCH"), 296039, 1112014848);
	func_71(68, 39, "DUTCH31", "RDCH3", "rcm_dutch31", -1, 2247.695f, -798.5478f, 43.1559f, 0, joaat("BLIP_MISSION_DUTCH"), 262151, 130.0f);
	func_71(76, 42, "EXCONFED11", "RXCF1", "rcm_exconfed11", -1, 677.1235f, -1288.551f, 42.4063f, 0, joaat("BLIP_SCM_LENNY"), 262151, 120.0f);
	func_71(82, 45, "GANG01", "RGNG01", "rcm_gang01", -1, 3009.262f, 477.1921f, 40.8607f, 0, 0, 132323, 1112014848);
	func_71(83, 45, "GANG02", "RGNG02", "rcm_gang02", -1, 2974.441f, 474.3331f, 46.86f, 0, 0, 134489253, 1112014848);
	func_71(94, 51, "HOMEROB00", "RHMR0", "rcm_homerob00", -1, 1407.78f, 265.425f, 88.61228f, 0, joaat("BLIP_MISSION_HOSEA"), 1351687, 200.0f);
	func_71(97, 54, "MARY01", "RMARY1", "rcm_mary01", 98, -126.0832f, -38.3759f, 94.6333f, 0, joaat("BLIP_SCM_LETTER"), 67240027, 1112014848);
	func_71(98, 54, "MARY02", "RMARY2", "rcm_mary02", -1, -380.78f, 917.269f, 118.9613f, 0, joaat("BLIP_RC_OLD_FLAME"), 67240133, 36.0f);
	func_71(106, 58, "MOB01", "RMOB01", "rcm_mob01", -1, 2793.855f, -1169.53f, 46.924f, 0, joaat("BLIP_SCM_BRONTE"), 67109063, 1112014848);
	func_71(107, 58, "MOB02", "RMOB02", "rcm_mob02", -1, 2686.954f, -1122.447f, 49.7002f, 0, joaat("BLIP_SCM_BRONTE"), 67108935, 1112014848);
	func_71(108, 59, "MONROE11", "RMNR1", "rcm_monroe11", -1, 471.1853f, 2226.889f, 246.2259f, 0, joaat("BLIP_SCM_MONROE"), 2359303, 150.0f);
	func_71(112, 60, "MUDTOWN31", "RMUD31", "rcm_mudtown3_1", 112, -141.5388f, -57.201f, 93.9626f, 0, joaat("BLIP_MISSION_JOHN"), 131283, 100.0f);
	func_71(113, 60, "MUDTOWN32", "RMUD32", "rcm_mudtown3_2", 113, 505.0512f, 704.0245f, 115.0716f, 0, joaat("BLIP_MISSION_JOHN"), 274609, 1112014848);
	func_71(114, 60, "MUDTOWN33", "RMUD33", "rcm_mudtown3_3", -1, -144.0388f, -56.981f, 93.9626f, 0, joaat("BLIP_MISSION_JOHN"), 67240005, 100.0f);
	func_71(115, 62, "NATIVE1", "RNATV1", "rcm_native1", -1, 2531.1f, -1312.83f, 48.19f, joaat("CS_EVELYNMILLER"), joaat("BLIP_RC"), 67764227, 120.0f);
	func_71(116, 62, "NATIVE2", "RNATV2", "rcm_native2", -1, 223.26f, 512.19f, 125.45f, 0, joaat("BLIP_SCM_EAGLE_FLIES"), 1310725, 350.0f);
	func_71(120, 64, "PEARSON1", "RPRSN", "rcm_pearson1", -1, -1346.968f, 2402.061f, 306.5004f, 0, joaat("BLIP_SCM_PEARSON"), 262151, 120.0f);
	func_71(134, 68, "SADIE1", "RSAD1", "rcm_sadie11", -1, 677.3743f, -1251.831f, 43.0154f, 0, joaat("BLIP_SCM_PEARSON"), 262151, 130.0f);
	func_71(6, 4, "BANDP20", "RBNP20", "rcm_beau_and_penelope20", 7, 2340.914f, 1359.669f, 105.3503f, 0, joaat("BLIP_SCM_LETTER"), 2228234, 120.0f);
	func_71(7, 4, "BANDP21", "RBNP21", "rcm_beau_and_penelope21", -1, 895.2736f, -1866.43f, 42.6791f, 0, joaat("BLIP_SCM_PENELOPE"), 40108164, 120.0f);
	func_71(22, 19, "CALDERON1", "RCLDN1", "rcm_calderon1", 23, 2815.65f, -1222.53f, 46.57f, joaat("CS_BROTHERDORKINS"), joaat("BLIP_RC"), 35913794, 70.0f);
	func_71(23, 19, "CALDERON2", "RCLDN2", "rcm_calderon2", -1, 2819.028f, -1110.255f, 45.9487f, joaat("CS_SISTERCALDERON"), joaat("BLIP_SCM_DORKINS"), 40108100, 120.0f);
	func_71(24, 20, "CALDERON21", "RCLD21", "rcm_calderon21", 25, 2733.148f, -1248.815f, 48.8597f, joaat("CS_SISTERCALDERON"), joaat("BLIP_RC"), 2228290, 120.0f);
	func_71(25, 20, "CALDERON22", "RCLD22", "rcm_calderon22", -1, 2733.148f, -1248.815f, 48.8597f, 0, joaat("BLIP_SCM_CALDERON"), 6557892, 125.0f);
	func_71(26, 21, "CALLOWAY1", "RCAL11", "rcm_callaway1", -1, -240.2066f, 768.6583f, 117.085f, joaat("CS_JIMCALLOWAY"), joaat("BLIP_RC"), 1179714, 40.0f);
	func_71(27, 21, "CALLOWAYB", "RCAL1B", "rcm_callaway12", 28, -239.1001f, 770.5522f, 117.1001f, 0, joaat("BLIP_RC_CALLOWAY"), (1 << 17), 40.0f);
	func_71(28, 21, "CALLOWAY2", "RCAL12", "rcm_callaway2", 29, 2857.948f, -1370.687f, 43.5575f, 0, joaat("BLIP_RC_CALLOWAY"), (1 << 17), 1112014848);
	func_71(29, 21, "CALLOWAY3", "RCAL13", "rcm_callaway3", -1, 2907.656f, 1314.266f, 44.67463f, joaat("CS_ASBDEPUTY_01"), joaat("BLIP_RC_CALLOWAY"), 537133124, 36.0f);
	func_71(30, 22, "CHAINGANG1", "RBWCG1", "rcm_chain_gang1", 31, 1276.24f, -1389.17f, 79.86f, joaat("CS_CHAINPRISONER_01"), joaat("BLIP_RC"), 1704002, 140.0f);
	func_71(31, 22, "CHAINGANG2", "RBWCG2", "rcm_chain_gang2", 32, 1311.78f, -1298.51f, 74.93f, 0, joaat("BLIP_RC_CHAIN_GANG"), 12528, 1112014848);
	func_71(32, 22, "CHAINGANG3", "RBWCG3", "rcm_chain_gang3", 33, 1215.95f, -1425.98f, 70.45f, 0, joaat("BLIP_RC_CHAIN_GANG"), 1310784, 100.0f);
	func_71(33, 22, "CHAINGANG4", "RBWCG4", "rcm_chain_gang4", 34, 902.15f, -384.86f, 88.3f, joaat("CS_CHAINPRISONER_01"), joaat("BLIP_RC"), 1572928, 150.0f);
	func_71(34, 22, "CHAINGANG5", "RBWCG5", "rcm_chain_gang5", 35, 902.15f, -384.86f, 88.3f, 0, joaat("BLIP_RC_CHAIN_GANG"), 4320, 150.0f);
	func_71(35, 22, "CHAINGANG6", "RBWCG6", "rcm_chain_gang6", 36, 902.15f, -384.86f, 88.3f, 0, joaat("BLIP_RC_CHAIN_GANG"), 262208, 150.0f);
	func_71(36, 22, "CHAINGANG7", "RBWCG7", "rcm_chain_gang7", -1, -2459.21f, 838.0f, 145.37f, joaat("CS_CHAINPRISONER_01"), joaat("BLIP_RC"), 538836996, 80.0f);
	func_71(38, 24, "CIGCARD1", "RCCIG", "rcm_collect_cigarette_cards1", -1, -343.5616f, -369.2671f, 87.0759f, joaat("CS_CIGCARDGUY"), joaat("BLIP_RC"), 72482822, (50.0f * 4.0f));
	func_71(39, 25, "DINOBONE11", "RCDIN1", "rcm_collect_dinosaur_bones11", -1, 122.7758f, -185.4978f, 116.4383f, joaat("CS_DINOBONESLADY"), joaat("BLIP_RC"), 68288642, (50.0f * 4.0f));
	func_71(40, 25, "DINOBONE12", "RCDIN2", "rcm_collect_dinosaur_bones12", -1, 197.275f, 985.9788f, 189.2538f, joaat("CS_DINOBONESLADY"), joaat("BLIP_RC_DEBORAH"), 608176132, 1112014848);
	func_71(43, 27, "EXOTICS1", "RCEXO1", "rcm_collect_exotics1", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC"), 68296706, 1112014848);
	func_71(44, 27, "EXOTICS2", "RCEXO2", "rcm_collect_exotics2", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848);
	func_71(45, 27, "EXOTICS3", "RCEXO3", "rcm_collect_exotics3", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848);
	func_71(46, 27, "EXOTICS4", "RCEXO4", "rcm_collect_exotics4", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848);
	func_71(47, 27, "EXOTICS5", "RCEXO5", "rcm_collect_exotics5", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848);
	func_71(48, 27, "EXOTICS6", "RCEXO6", "rcm_collect_exotics6", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 608315460, 1112014848);
	func_71(41, 26, "RAREFISH11", "RCFSH1", "rcm_collect_rare_fish1", -1, 337.3075f, -684.5404f, 41.8362f, joaat("CS_FISHCOLLECTOR"), joaat("BLIP_RC"), 68288642, (50.0f * 4.0f));
	func_71(42, 26, "RAREFISH12", "RCFSH2", "rcm_collect_rare_fish2", -1, 341.9155f, -665.392f, 41.8046f, joaat("CS_FISHCOLLECTOR"), joaat("BLIP_RC_JEREMY_GILL"), 541067652, 1112014848);
	func_71(49, 28, "ROCKFACE1", "RCRKF1", "rcm_collect_rock_faces1", -1, -2178.646f, -245.6886f, 191.1569f, joaat("CS_FRANCIS_SINCLAIR"), joaat("BLIP_RC"), 68288514, 100.0f);
	func_71(50, 28, "ROCKFACE2", "RCRKF2", "rcm_collect_rock_faces2", -1, -2173.926f, -247.408f, 191.8229f, joaat("CS_MRS_SINCLAIR"), joaat("BLIP_SCM_FRANCES"), 608307204, 100.0f);
	func_71(51, 29, "TAXIDERMY1", "RCTAX1", "rcm_collect_taxidermy1", -1, -1678.832f, -335.5439f, 172.9001f, joaat("CS_TAXIDERMIST"), joaat("BLIP_RC_HOBBS"), 68290882, 1112014848);
	func_71(52, 29, "TAXIDERMY2", "RCTAX2", "rcm_collect_taxidermy2", -1, -1638.497f, -1361.436f, 83.3966f, 0, joaat("BLIP_RC"), 608305412, 1112014848);
	func_71(53, 30, "CRACKPOT1", "RCKPT1", "rcm_crackpot1", 54, 2463.36f, -1372.69f, 44.3262f, joaat("CS_CRACKPOTINVENTOR"), joaat("BLIP_RC"), 1310786, 120.0f);
	func_71(54, 30, "CRACKPOT2", "RCKPT2", "rcm_crackpot2", 55, 2517.188f, 2289.349f, 176.3516f, joaat("CS_CRACKPOTINVENTOR"), joaat("BLIP_RC_CRACKPOT"), 262208, 300.0f);
	func_71(55, 30, "CRACKPOT3", "RCKPT3", "rcm_crackpot3", -1, 2517.188f, 2289.349f, 176.3516f, 0, 0, 536875092, 100.0f);
	func_71(56, 31, "CRAWLEY1", "RCRAW", "rcm_crawley1", -1, 2011.776f, -504.0132f, 40.983f, joaat("U_M_O_OLDCAJUN_01"), joaat("BLIP_RC"), 537921542, 150.0f);
	func_71(57, 32, "CREOLE1", "RCRLE", "rcm_creole1", -1, 1380.51f, -1337.51f, 77.0f, joaat("CS_CREOLEDOCTOR"), joaat("BLIP_RC"), 538181702, 120.0f);
	func_71(69, 40, "EDOWN21", "REDW21", "rcm_edith_down21", 70, 2935.405f, 1377.749f, 43.5814f, joaat("CS_EDITHDOWN"), joaat("BLIP_SCM_EDITH"), 37486786, 120.0f);
	func_71(70, 40, "EDOWN22", "REDW22", "rcm_edith_down22", -1, 2956.146f, 1340.49f, 43.8751f, joaat("CS_ARCHIEDOWN"), joaat("BLIP_SCM_EDITH"), 41156612, 60.0f);
	func_71(77, 43, "FORMYART1", "RFMA1", "rcm_for_my_art1", 78, 2794.64f, -1168.4f, 46.92f, 0, joaat("BLIP_RC"), 1179842, 36.0f);
	func_71(78, 43, "FORMYART2", "RFMA2", "rcm_for_my_art2", 79, 2738.72f, -1207.39f, 48.66f, 0, joaat("BLIP_RC_ART"), 1310784, 50.0f);
	func_71(79, 43, "FORMYART3", "RFMA3", "rcm_for_my_art3", 80, 2700.241f, -1187.552f, 55.0907f, 0, joaat("BLIP_RC_ART"), 262336, 150.0f);
	func_71(80, 43, "FORMYART4", "RFMA4", "rcm_for_my_art4", -1, 2739.74f, -1315.64f, 47.63f, joaat("CS_FRENCHARTIST"), joaat("BLIP_RC_ART"), 538706116, 120.0f);
	func_71(81, 44, "FUNDRAISER", "REFND", "rcm_fundraiser", -1, 2504.054f, -1152.946f, 48.26756f, 0, joaat("BLIP_RC"), 86519878, 120.0f);
	func_71(84, 46, "GUNSLINGER1", "RGUN11", "rcm_gunslinger1_1", 85, -62.69012f, -404.3738f, 69.91233f, joaat("CS_FAMOUSGUNSLINGER_01"), joaat("BLIP_RC_GUNSLINGER_1"), 1050634, 120.0f);
	func_71(85, 46, "GUNSLINGER12", "RGUN12", "rcm_gunslinger1_2", -1, -63.25864f, -404.9262f, 69.9287f, joaat("CS_FAMOUSGUNSLINGER_01"), joaat("BLIP_RC_GUNSLINGER_1"), 262340, 120.0f);
	func_71(86, 47, "GUNSLINGER2", "RGUN2", "rcm_gunslinger2_1", -1, -967.5845f, 2181.624f, 339.4473f, joaat("CS_FAMOUSGUNSLINGER_02"), joaat("BLIP_RC_GUNSLINGER_2"), 264398, 200.0f);
	func_71(87, 48, "GUNSLINGER3", "RGUN3", "rcm_gunslinger3_1", -1, 1231.35f, -1299.684f, 75.9034f, 0, joaat("BLIP_RC_GUNSLINGER_3"), 264398, 50.0f);
	func_71(88, 49, "GUNSLINGER51", "RGUN5", "rcm_gunslinger5_1", -1, 2492.992f, -420.529f, 43.78334f, joaat("CS_FAMOUSGUNSLINGER_05"), joaat("BLIP_RC_GUNSLINGER_5"), 1312846, 120.0f);
	func_71(89, 50, "HEREKITTY1", "RKTTY1", "rcm_here_kitty_kitty1", 90, 1604.317f, -262.3793f, 78.2036f, joaat("CS_RINGMASTER"), joaat("BLIP_RC"), 1179650, 250.0f);
	func_71(90, 50, "HEREKITTY2", "RKTTY2", "rcm_here_kitty_kitty2", 91, 1015.113f, 159.7295f, 103.0175f, 0, joaat("BLIP_RC_KITTY"), 262272, 250.0f);
	func_71(91, 50, "HEREKITTY3", "RKTTY3", "rcm_here_kitty_kitty3", 92, 1491.239f, -1118.537f, 55.39496f, 0, joaat("BLIP_RC_KITTY"), 1310720, 250.0f);
	func_71(92, 50, "HEREKITTY4", "RKTTY4", "rcm_here_kitty_kitty4", 93, 1408.014f, 280.6987f, 88.45465f, 0, joaat("BLIP_RC_KITTY"), 1310848, 200.0f);
	func_71(93, 50, "HEREKITTY5", "RKTTY5", "rcm_here_kitty_kitty5", -1, 1581.761f, -259.8209f, 79.8f, joaat("CS_RINGMASTER"), joaat("BLIP_RC_KITTY"), 537264132, 250.0f);
	func_71(95, 52, "HOMEROB01", "RHMRB", "rcm_homerob01", -1, 668.8008f, -1233.836f, 43.15567f, 0, joaat("BLIP_ROBBERY_HOME"), 23068678, 100.0f);
	func_71(99, 55, "MARY31", "RMARY3", "rcm_mary31", -1, 1905.66f, -1860.534f, 47.18359f, 0, joaat("BLIP_SCM_LETTER"), 6291530, 1112014848);
	func_71(101, 57, "MASON1", "RMASN1", "rcm_mason1", 102, -1365.9f, -726.54f, 91.08f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC"), 1310914, 120.0f);
	func_71(102, 57, "MASON2", "RMASN2", "rcm_mason2", 103, -1651.18f, 628.19f, 125.4f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 1310784, 120.0f);
	func_71(103, 57, "MASON3", "RMASN3", "rcm_mason3", 104, 1358.591f, 554.5364f, 87.3964f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 3407936, 200.0f);
	func_71(104, 57, "MASON4", "RMASN4", "rcm_mason4", 105, 2387.459f, -580.6672f, 41.0198f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 1310784, 120.0f);
	func_71(105, 57, "MASON5", "RMASN5", "rcm_mason5", -1, -231.24f, 226.84f, 94.4f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 538312708, 400.0f);
	func_71(109, 61, "MAYR1", "RMAYR1", "rcm_mr_mayor1", -1, 2401.393f, -1071.014f, 47.473f, joaat("CS_HENRILEMIUX"), joaat("BLIP_RC_HENRI"), 264258, 50.0f);
	func_71(110, 61, "MAYR2", "RMAYR2", "rcm_mr_mayor2", 111, 2401.393f, -1071.014f, 47.473f, joaat("CS_HENRILEMIUX"), joaat("BLIP_RC_HENRI"), 2112, 50.0f);
	func_71(111, 61, "MAYR3", "RMAYR3", "rcm_mr_mayor3", -1, 2401.393f, -1071.014f, 47.473f, 0, joaat("BLIP_RC_HENRI"), 537133188, 50.0f);
	func_71(117, 63, "OHBROTHER1", "ROBT1", "rcm_oh_brother1", 118, -323.86f, 794.53f, 116.89f, 0, joaat("BLIP_RC"), 1310786, 100.0f);
	func_71(118, 63, "OHBROTHER2", "ROBT2", "rcm_oh_brother2", 119, -303.77f, 817.93f, 117.41f, 0, joaat("BLIP_RC"), 1310784, 100.0f);
	func_71(119, 63, "OHBROTHER3", "ROBT3", "rcm_oh_brother3", -1, -1049.4f, 426.08f, 53.89f, 0, joaat("BLIP_RC"), 538181700, 120.0f);
	func_71(121, 65, "POISONEDWELL1", "RHNTN1", "rcm_poisoned_well1", 122, 2538.461f, 432.7961f, 64.0455f, joaat("RCSP_POISONEDWELL_MALES_01"), joaat("BLIP_RC"), 1835074, 120.0f);
	func_71(122, 65, "POISONEDWELL2", "RHNTN2", "rcm_poisoned_well2", 123, 2556.25f, 806.7f, 75.3f, 0, joaat("BLIP_RC_OBEDIAH_HINTON"), (1 << 18), 200.0f);
	func_71(123, 65, "POISONEDWELL3", "RHNTN3", "rcm_poisoned_well3", 124, 2397.81f, 609.74f, 66.21f, 0, joaat("BLIP_RC_OBEDIAH_HINTON"), 12416, 120.0f);
	func_71(124, 65, "POISONEDWELL4", "RHNTN4", "rcm_poisoned_well4", 125, 2556.25f, 806.7f, 75.3f, joaat("CS_OBEDIAHHINTON"), joaat("BLIP_RC_OBEDIAH_HINTON"), (1 << 17), 150.0f);
	func_71(125, 65, "POISONEDWELL5", "RHNTN5", "rcm_poisoned_well5", -1, 2281.98f, 1198.91f, 108.09f, 0, joaat("BLIP_RC_OBEDIAH_HINTON"), 538181636, 150.0f);
	func_71(127, 67, "LIGHTNING1", "RRTL1", "rcm_ride_the_lightning1", 128, 2829.053f, -1055.899f, 43.0369f, joaat("CS_PROFESSORBELL"), joaat("BLIP_RC"), 3801090, 60.0f);
	func_71(128, 67, "LIGHTNING2", "RRTL2", "rcm_ride_the_lightning2", -1, 1226.67f, -1295.04f, 75.9f, 0, joaat("BLIP_RC_LIGHTNING"), 2101376, 36.0f);
	func_71(129, 67, "LIGHTNING3", "RRTL3", "rcm_ride_the_lightning3", 130, 2536.865f, -275.3683f, 42.8264f, 0, joaat("BLIP_RC_LIGHTNING"), 2361472, 150.0f);
	func_71(130, 67, "LIGHTNING4", "RRTL4", "rcm_ride_the_lightning4", 131, 2507.133f, -1307.169f, 47.9537f, 0, joaat("BLIP_RC_LIGHTNING"), 2363520, 36.0f);
	func_71(131, 67, "LIGHTNING5", "RRTL5", "rcm_ride_the_lightning5", 132, 2829.053f, -1055.899f, 43.0369f, joaat("CS_PROFESSORBELL"), joaat("BLIP_RC_LIGHTNING"), 2752512, 60.0f);
	func_71(132, 67, "LIGHTNING6", "RRTL6", "rcm_ride_the_lightning6", 133, 1281.752f, 908.6993f, 126.8532f, 0, joaat("BLIP_RC_LIGHTNING"), 2359488, 300.0f);
	func_71(133, 67, "LIGHTNING7", "RRTL7", "rcm_ride_the_lightning7", -1, 2689.054f, -1120.174f, 49.6621f, joaat("CS_PROFESSORBELL"), joaat("BLIP_RC_LIGHTNING"), 540934148, 140.0f);
	func_71(135, 69, "SERIALKILLER1", "RSKLR", "rcm_serial_killer1", -1, -609.3224f, 521.8002f, 95.1998f, 0, joaat("BLIP_RC"), 546572422, 55.0f);
	func_71(136, 70, "SLAVE1", "RSLVC1", "rcm_slave_catcher1", 137, 1244.57f, -1275.52f, 74.96f, joaat("CS_SLAVECATCHER"), joaat("BLIP_RC"), 1179714, 200.0f);
	func_71(137, 70, "SLAVE2", "RSLVC2", "rcm_slave_catcher2", -1, 1264.612f, -404.1218f, 97.0883f, 0, joaat("BLIP_RC_SLAVE_CATCHER"), 537133124, 36.0f);
	func_71(138, 71, "STRAUSS11", "RSTR1", "rcm_strauss11", -1, 655.3615f, -1234.329f, 43.1254f, 0, joaat("BLIP_SCM_STRAUSS"), 6422598, 100.0f);
	func_71(139, 72, "STRAUSS21", "RSTR2", "rcm_strauss21", -1, 1970.765f, -1872.171f, 41.6262f, 0, joaat("BLIP_SCM_STRAUSS"), 6422598, 120.0f);
	func_71(140, 73, "STRAUSS31", "RSTR31", "rcm_strauss31", 141, 2327.984f, 1330.677f, 106.157f, 0, joaat("BLIP_SCM_STRAUSS"), 2228290, 100.0f);
	func_71(141, 73, "STRAUSS32", "RSTR32", "rcm_strauss32", 142, 2328.061f, 1329.368f, 106.1765f, 0, joaat("BLIP_SCM_STRAUSS"), 2101488, 1112014848);
	func_71(142, 73, "STRAUSS33", "RSTR33", "rcm_strauss33", -1, 2327.984f, 1330.677f, 106.157f, 0, joaat("BLIP_SCM_STRAUSS"), 6684748, 100.0f);
	func_71(143, 74, "THEODDFELLOWS1", "RODDF1", "rcm_the_odd_fellows1", 144, 2945.728f, 526.6201f, 45.84f, joaat("CS_ODDFELLOWSPINHEAD"), joaat("BLIP_RC"), 1835010, 60.0f);
	func_71(144, 74, "THEODDFELLOWS2", "RODDF2", "rcm_the_odd_fellows2", -1, 2312.786f, 27.78194f, 48.40265f, 0, joaat("BLIP_RC_ODD_FELLOWS"), 538181700, 140.0f);
	func_71(147, 77, "WARVET1", "RWARV1", "rcm_war_veteran1", 148, 1479.436f, 1335.166f, 161.3365f, joaat("CS_WARVET"), joaat("BLIP_RC"), 786498, 140.0f);
	func_71(148, 77, "WARVET2", "RWARV2", "rcm_war_veteran2", 149, 1698.457f, 1511.371f, 146.8702f, joaat("CS_WARVET"), joaat("BLIP_RC_WAR_VETERAN"), 786496, 200.0f);
	func_71(149, 77, "WARVET3", "RWARV3", "rcm_war_veteran3", 150, 1699.141f, 1508.696f, 146.8712f, joaat("CS_WARVET"), joaat("BLIP_RC_WAR_VETERAN"), 786496, 200.0f);
	func_71(150, 77, "WARVET4", "RWARV4", "rcm_war_veteran4", -1, 1698.457f, 1511.371f, 146.8702f, joaat("CS_WARVET"), joaat("BLIP_RC_WAR_VETERAN"), 537657412, 200.0f);
	func_71(11, 7, "BHDUEL1", "RBDUL", "rcm_bounty_duel1", -1, -2336.112f, 105.0412f, 221.6922f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 60.0f);
	func_71(12, 8, "BHEXCONFED1", "RBCON", "rcm_bounty_exconfed1", -1, 2505.874f, 286.573f, 71.9487f, joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"), joaat("BLIP_MISSION_BOUNTY"), 8653446, 120.0f);
	func_71(13, 9, "BHRANCHER1", "RBRAN", "rcm_bounty_rancher1", -1, 1647.412f, -608.9368f, 42.4184f, joaat("U_M_M_HTLRANCHERBOUNTY_01"), joaat("BLIP_MISSION_BOUNTY"), 8653446, 150.0f);
	func_71(153, 79, "BHTARGET3", "RBT03", "rcm_bh_laramie_sleeping", -1, -1947.647f, 427.8162f, 118.9041f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 250.0f);
	func_71(14, 10, "BHTARGET5", "RBT05", "rcm_bh_wife_and_lover", -1, -1215.09f, 369.9232f, 64.0378f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 250.0f);
	func_71(154, 80, "BHTARGET12", "RBT12", "rcm_bh_camp_return", -1, 1425.841f, -2186.84f, 47.99936f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 250.0f);
	func_71(15, 11, "BHTARGET14", "RBT14", "rcm_bh_shack_escape", -1, 1361.01f, -2066.81f, 52.23f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 70.0f);
	func_71(16, 12, "BHTARGET15", "RBT15", "rcm_bh_sd_saloon", -1, 2794.52f, -1170.64f, 46.924f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 50.0f);
	func_71(17, 13, "BHTARGET18", "RBT18", "rcm_bh_skinner_brother", -1, -2000.8f, -1829.5f, 113.3f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 200.0f);
	func_71(18, 14, "BHTARGET20", "RBT20", "rcm_bh_skinner_search", -1, -1982.37f, -1430.89f, 115.58f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 200.0f);
	func_71(155, 15, "BHTARGET21", "RBT21", "rcm_bh_blackwater_hunt", -1, -799.8206f, -1232.503f, 42.552f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 175.0f);
	func_71(19, 16, "BHTARGET22", "RBT22", "rcm_bh_bandito_shack", -1, -5409.0f, -3655.0f, -22.2f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 250.0f);
	func_71(20, 17, "BHTARGET23", "RBT23", "rcm_bh_bandito_mine", -1, -5970.842f, -3245.562f, -22.5793f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 250.0f);
	func_71(1, 1, "ABIGAIL22", "RABI22", "rcm_abigail22", -1, -1606.873f, -1376.358f, 81.81185f, 0, joaat("BLIP_MISSION_JOHN"), 67143009, 1112014848);
	func_71(2, 2, "ABIGAIL31", "RABI3", "rcm_abigail31", -1, -1637.182f, -1363.268f, 83.4566f, 0, joaat("BLIP_SCM_ABIGAIL"), 262407, 120.0f);
	func_71(8, 5, "BEECHERS11", "RBCH11", "rcm_beechers11", 9, -814.331f, -1278.102f, 42.6377f, 0, joaat("BLIP_SCM_ANSEL_ATHERTON"), 67240259, 1112014848);
	func_71(9, 5, "BEECHERS12", "RBCH12", "rcm_beechers12", -1, -1635.695f, -1355.41f, 82.9339f, 0, joaat("BLIP_SCM_ANSEL_ATHERTON"), 262469, 200.0f);
	func_71(10, 6, "BEECHERS21", "RBCH21", "rcm_beechers21", -1, -1638.859f, -1359.027f, 82.9803f, 0, joaat("BLIP_SCM_UNCLE"), 262403, 250.0f);
	func_71(71, 41, "EVELYN1", "RMLLR1", "rcm_evelyn_miller1", 72, -2068.575f, -1063.067f, 134.9549f, joaat("CS_EVELYNMILLER"), joaat("BLIP_RC"), 1573314, 1112014848);
	func_71(72, 41, "EVELYN2", "RMLLR2", "rcm_evelyn_miller2", 73, -2374.59f, -1594.19f, 153.4694f, joaat("CS_EVELYNMILLER"), joaat("BLIP_SCM_EVELYN"), 1835328, 100.0f);
	func_71(73, 41, "EVELYN3", "RMLLR3", "rcm_evelyn_miller3", 74, -2373.404f, -1592.497f, 153.0315f, 0, joaat("BLIP_SCM_EVELYN"), 256, 1112014848);
	func_71(74, 41, "EVELYN4", "RMLLR4", "rcm_evelyn_miller4", 75, -2373.404f, -1592.497f, 153.0315f, 0, 0, 4592, 1112014848);
	func_71(75, 41, "EVELYN5", "RMLLR5", "rcm_evelyn_miller5", -1, -2373.404f, -1592.497f, 153.0315f, 0, 0, 671355188, 1112014848);
	func_71(96, 53, "JACK21", "RJCK2", "rcm_jack2", -1, -1629.71f, -1338.377f, 82.0174f, 0, joaat("BLIP_SCM_JACK"), 262407, 140.0f);
	func_71(100, 56, "MARYBETH1", "RMRYB", "rcm_marybeth1", -1, -171.3529f, 631.9009f, 113.0321f, 0, 0, 67240214, 1112014848);
	func_71(126, 66, "RAINSFALL1", "RRFA1", "rcm_rains_fall1", -1, 2937.5f, 1276.5f, 45.1f, 0, 0, 67240214, 1112014848);
	func_71(145, 75, "TILLY1", "RTLLY", "rcm_tilly1", -1, 2595.41f, -1198.08f, 52.23f, 0, 0, 67240214, 1112014848);
	func_71(151, 78, "HERBALISTCAMP1", "REHEC1", "rcm_herbalist_camp", 152, 556.271f, 172.08f, 133.3435f, 0, joaat("BLIP_RC"), 1048642, 250.0f);
	func_71(152, 78, "HERBALISTCAMP2", "REHEC2", "rcm_herbalist_camp", -1, 557.4186f, 170.2608f, 134.348f, 0, joaat("BLIP_RC_HERBALIST"), 536875076, 250.0f);
	func_71(146, 76, "TREASUREHUNTER1", "RETH", "rcm_treasure_hunter", -1, -586.4957f, -344.5864f, 81.4029f, joaat("CS_TREASUREHUNTER"), joaat("BLIP_RC"), 68190278, 200.0f);
	func_72(1, 12);
	func_72(23, 1);
	func_72(33, 24);
	func_72(36, 24);
	func_72(54, 24);
	func_72(55, 48);
	func_72(70, 4);
	func_72(72, 24);
	func_72(73, 24);
	func_72(78, 24);
	func_72(79, 24);
	func_72(80, 48);
	func_72(102, 48);
	func_72(103, 48);
	func_72(104, 48);
	func_72(105, 48);
	func_72(113, 1);
	func_72(118, 24);
	func_72(119, 24);
	func_72(122, 24);
	func_72(133, 24);
	func_72(148, 24);
	func_72(149, 24);
	func_72(150, 24);
	func_73(0, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(2, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(23, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(24, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(53, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(54, joaat("WEATHER_GROUP_THUNDERSTORM"), 1);
	func_73(59, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(71, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(72, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(69, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(81, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(89, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(91, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(92, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(93, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(101, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(102, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(103, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(104, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(105, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(117, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 0);
	func_73(118, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 0);
	func_73(119, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(115, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(133, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(134, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(144, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(145, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 0);
	func_73(146, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(147, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	if (Global_1879534 == 0)
	{
		func_74(2, (Global_1347702[2 /*49*/].f_16 + 50.0f));
		func_74(12, (Global_1347702[12 /*49*/].f_16 + 40.0f));
		func_74(13, (Global_1347702[13 /*49*/].f_16 + 40.0f));
		func_74(23, (Global_1347702[23 /*49*/].f_16 + 30.0f));
		func_74(32, (Global_1347702[32 /*49*/].f_16 + 30.0f));
		func_74(56, (Global_1347702[56 /*49*/].f_16 + 50.0f));
		func_74(54, (Global_1347702[54 /*49*/].f_16 + 50.0f));
		func_74(58, (Global_1347702[58 /*49*/].f_16 + 50.0f));
		func_74(63, (Global_1347702[63 /*49*/].f_16 + 40.0f));
		func_74(81, (Global_1347702[81 /*49*/].f_16 + 30.0f));
		func_74(151, 410.0f);
		func_74(152, 410.0f);
		func_74(90, (Global_1347702[90 /*49*/].f_16 + 25.0f));
		func_74(91, (Global_1347702[91 /*49*/].f_16 + 25.0f));
		func_74(96, (Global_1347702[96 /*49*/].f_16 + 50.0f));
		func_74(120, (Global_1347702[120 /*49*/].f_16 + 100.0f));
		func_74(123, (Global_1347702[123 /*49*/].f_16 + 50.0f));
		func_74(129, (Global_1347702[129 /*49*/].f_16 + 60.0f));
		func_74(132, (Global_1347702[132 /*49*/].f_16 + 60.0f));
		func_74(144, (Global_1347702[144 /*49*/].f_16 + 50.0f));
		func_75(3, 35.0f);
		func_75(4, 20.0f);
		func_75(11, 30.0f);
		func_75(13, 80.0f);
		func_75(12, 110.0f);
		func_75(153, 100.0f);
		func_75(14, 80.0f);
		func_75(154, 100.0f);
		func_75(15, 60.0f);
		func_75(17, 100.0f);
		func_75(18, 85.0f);
		func_75(155, 65.0f);
		func_75(19, 65.0f);
		func_75(20, 60.0f);
		func_75(26, 45.0f);
		func_75(30, 40.0f);
		func_75(32, 30.0f);
		func_75(33, 55.0f);
		func_75(36, 40.0f);
		func_75(38, 35.0f);
		func_75(39, 80.0f);
		func_75(43, 45.0f);
		func_75(41, 40.0f);
		func_75(49, 40.0f);
		func_75(51, 65.0f);
		func_75(53, 32.0f);
		func_75(56, 35.0f);
		func_75(57, 17.0f);
		func_75(62, 50.0f);
		func_75(65, 42.0f);
		func_75(69, 25.0f);
		func_75(70, 30.0f);
		func_75(71, 25.0f);
		func_75(72, 25.0f);
		func_75(77, 12.0f);
		func_75(78, 17.0f);
		func_75(80, 20.0f);
		func_75(84, 35.0f);
		func_75(86, 50.0f);
		func_75(88, 45.0f);
		func_75(89, 75.0f);
		func_75(90, 130.0f);
		func_75(91, 60.0f);
		func_75(92, 85.0f);
		func_75(94, 47.0f);
		func_75(101, 40.0f);
		func_75(102, 40.0f);
		func_75(103, 40.0f);
		func_75(104, 40.0f);
		func_75(105, 40.0f);
		func_75(106, 25.0f);
		func_75(107, 25.0f);
		func_75(116, 30.0f);
		func_75(117, 20.0f);
		func_75(118, 20.0f);
		func_75(119, 20.0f);
		func_75(121, 55.0f);
		func_75(123, 100.0f);
		func_75(125, 35.0f);
		func_75(127, 28.0f);
		func_75(129, func_76(13));
		func_75(132, 100.0f);
		func_75(133, 20.0f);
		func_75(135, 75.0f);
		func_75(136, 22.0f);
		func_75(143, 20.0f);
		func_75(144, 50.0f);
		func_75(151, 100.0f);
		func_75(146, 135.0f);
		func_78(0, func_77(13) | func_77(14));
		func_78(2, func_77(13) | func_77(4));
		func_78(10, func_77(4) | func_77(7));
		func_78(21, func_77(13));
		func_78(37, func_77(23));
		func_78(59, func_77(18));
		func_78(63, func_77(10));
		func_78(64, func_77(11));
		func_78(65, func_77(11));
		func_78(66, func_77(0) | func_77(5));
		func_78(67, func_77(0) | func_77(5) | func_77(9) | func_77(2));
		func_78(68, func_77(0) | func_77(7));
		func_78(76, func_77(9));
		func_78(94, func_77(5));
		func_78(95, func_77(8));
		func_78(96, func_77(14) | func_77(12));
		func_78(112, func_77(1) | func_77(8));
		func_78(114, func_77(1) | func_77(8));
		func_78(116, func_77(26));
		func_78(120, func_77(17));
		func_78(134, func_77(11) | func_77(17));
		func_78(138, func_77(18));
		func_78(139, func_77(18));
		func_78(140, func_77(18));
		func_78(142, func_77(22));
		func_79(53, 1026);
		func_79(54, 128);
		func_79(56, 128);
		func_79(57, 1030);
		func_79(39, 1030);
		func_79(79, 1026);
		func_79(81, (1 << 13));
		func_79(101, 1026);
		func_79(102, 1026);
		func_79(103, 1026);
		func_79(104, 1026);
		func_79(105, 1026);
		func_79(109, 128);
		func_79(110, 128);
		func_79(111, 128);
		func_79(122, 8);
		func_79(148, 1026);
		func_79(149, 1026);
		func_79(150, 1026);
		func_79(155, 640);
		func_79(128, 7);
		func_79(52, 7);
		func_79(71, 1026);
		func_80(6, 1.0f);
		func_80(22, 30.0f);
		func_80(26, 15.0f);
		func_80(27, 15.0f);
		func_80(30, 50.0f);
		func_80(32, 100.0f);
		func_80(33, 150.0f);
		func_80(34, 100.0f);
		func_80(36, 100.0f);
		func_80(41, 10.0f);
		func_80(53, 50.0f);
		func_80(54, 150.0f);
		func_80(58, 0.0f);
		func_80(59, 3.0f);
		func_80(61, 2.0f);
		func_80(76, 3.0f);
		func_80(81, 50.0f);
		func_80(84, 60.0f);
		func_80(85, 60.0f);
		func_80(89, 150.0f);
		func_80(90, 180.0f);
		func_80(91, 75.0f);
		func_80(93, 150.0f);
		func_80(95, 4.5f);
		func_80(97, 2.0f);
		func_80(101, 50.0f);
		func_80(103, 150.0f);
		func_80(112, 5.0f);
		func_80(113, 0.0f);
		func_80(114, 5.0f);
		func_80(115, 70.0f);
		func_80(116, 150.0f);
		func_80(134, 2.0f);
		func_80(0, 3.0f);
		func_80(120, 3.0f);
		func_80(138, 3.0f);
		func_80(139, 3.0f);
		func_80(140, 3.0f);
		func_80(142, 3.0f);
		func_80(147, 150.0f);
		func_80(117, 10.0f);
		func_80(118, 10.0f);
		func_80(151, 160.0f);
		func_80(152, 160.0f);
		func_80(146, 155.0f);
		func_80(121, 200.0f);
		func_80(15, 70.0f);
		func_80(155, 5.0f);
		func_80(20, 170.0f);
		func_80(13, 140.0f);
		func_80(17, 160.0f);
		func_80(12, 100.0f);
		func_80(126, 2.0f);
		func_80(145, 2.0f);
		func_80(14, 100.0f);
		func_81(22, 100.0f);
		func_81(23, 100.0f);
		func_81(62, 150.0f);
		func_81(68, 150.0f);
		func_81(65, 250.0f);
		func_81(106, 100.0f);
		func_81(107, 100.0f);
		func_81(115, 100.0f);
		func_81(116, 225.0f);
		func_81(151, 250.0f);
		func_81(155, 110.0f);
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
	return 1;
}

int func_8()
{
	func_82();
	return 1;
}

int func_9()
{
	func_83(0, 1, 79, 2351.282f, 1362.077f, 104.9752f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(1, 1, 43, -1356.339f, 2443.121f, 308.1876f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(2, 1, 98, 667.9077f, -1252.78f, 42.9221f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(3, 1, 58, 1422.625f, -7332.473f, 80.5977f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(4, 1, 71, -125.85f, -39.9599f, 96.0908f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(5, 1, 4, 2254.96f, -758.12f, 41.75f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(6, 1, 9, 1880.807f, -1873.231f, 41.8094f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(7, 1, 22, -2593.21f, 453.9533f, 145.9973f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(8, 1, 76, -324.5534f, 760.3503f, 120.6335f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(16, 1, 115, -5514.272f, -2971.501f, 1.2343f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(15, 1, 37, func_84(), 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(9, 1, 5, 2638.124f, -1222.767f, 59.7655f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(10, 1, 38, -822.6304f, -1324.959f, 48.6102f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(11, 1, 105, 1331.149f, -1376.779f, 80.5954f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(12, 1, 92, 2977.443f, 574.009f, 48.1406f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(13, 1, 78, 2945.353f, 1330.25f, 43.4528f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(14, 1, 26, -1812.626f, -368.6117f, 166.5446f, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 2.5f, 0);
	return 1;
}

int func_10()
{
	if (!Global_40)
	{
		func_85(1, 16);
		func_86(0);
		func_87();
	}
	func_88();
	return 1;
}

int func_11()
{
	return func_89(0);
}

int func_12()
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;

	func_90(&Global_1948854);
	func_91();
	iVar2 = 0;
	if (func_92(1))
	{
		Global_1946054.f_1 = Global_26796.f_775;
		func_93(0);
		if (((Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK")) && func_94(Global_1835011[4 /*74*/].f_1, 1)) && !func_92(16))
		{
			func_95(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
			func_96();
			func_97(16);
		}
		func_98();
		switch (Global_1946054.f_1)
		{
			case joaat("MPC_PLAYER_TYPE_SP_ARTHUR"):
			case joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"):
				Global_40.f_39 = joaat("PLAYER_ZERO");
				Global_1935630.f_2 = Global_40.f_39;
				break;
			case joaat("MPC_PLAYER_TYPE_SP_MARSTON"):
				Global_1935630.f_2 = joaat("PLAYER_THREE");
				if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_THREE"))
				{
					Global_40.f_39 = 0;
				}
				break;
		}
	}
	else
	{
		func_93(1);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_26796.f_26[iVar0 /*120*/] = 0;
			Global_26796.f_26[iVar0 /*120*/].f_1 = 0;
			iVar1 = 0;
			while (iVar1 < 39)
			{
				vVar3.x = Global_1946054.f_57[iVar1 /*11*/];
				Global_26796.f_26[iVar0 /*120*/].f_1.f_1[iVar1 /*3*/] = { vVar3 /*3*/ };
				iVar1++;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			vVar3.x = Global_1946054.f_57[iVar1 /*11*/];
			Global_1946054.f_1497.f_1[iVar1 /*3*/] = { vVar3 /*3*/ };
			Global_1946054.f_1378.f_1[iVar1 /*3*/] = { vVar3 /*3*/ };
			iVar1++;
		}
		if ((((Global_1946054.f_1 == 0 || Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_ARTHUR")) || Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK")) || Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE")) || Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		{
			func_99(joaat("MPC_PLAYER_TYPE_SP_ARTHUR"));
			func_100(&(Global_1946054.f_1378), 2020890174, &iVar2, 0, 0, 0, 0);
			func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
			func_100(&(Global_1946054.f_1378), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &iVar2, 0, 1, 0, 0);
			Global_26796.f_776 = 0;
			func_102(-1, 0, 1, 1, 1, 0);
			func_103(-1, 0, 0, 6);
			func_104(joaat("CLOTHING_MULTI_ITEM_CLEAN"), 3, 3, 3, 0);
			func_105(0, 5, 0);
			Global_40.f_39 = joaat("PLAYER_ZERO");
			Global_1935630.f_2 = Global_40.f_39;
			Global_26796.f_775 = Global_1946054.f_1;
		}
		else if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			func_99(Global_1946054.f_1);
			switch (Global_1946054.f_1)
			{
				case joaat("MPC_PLAYER_TYPE_SP_MARSTON"):
					Global_1935630.f_2 = joaat("PLAYER_THREE");
					Global_40.f_39 = 0;
					break;
			}
		}
		func_97(1);
		func_106(7);
	}
	Global_1347698 = 0;
	Global_1347698.f_1 = 0;
	Global_1347698.f_2 = 0;
	return 1;
}

int func_13()
{
	func_107();
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_108(0, "beat_animal_attack", 4, 90.0f, 3, 536872961, -1, 17, 10, 1, -1, 1, -1, -1, -1, 10800);
		func_108(1, "beat_animal_mauling", 4, 140.0f, 2, 4196353, -1, 17, 8, -1, -1, 0, -1, -1, -1, 10800);
		func_108(2, "beat_approach", 4, 140.0f, 3, -2147467135, -1, 17, 10, 15, -1, 1, -1, -1, -1, 10800);
		func_108(3, "beat_arms_deal", 4, 140.0f, 3, 16781313, -1, 16, 10, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(4, "beat_bear_trap", 4, 140.0f, 2, 4202497, -1, 18, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(5, "beat_boat_attack", 4, 140.0f, 3, 16781569, -1, 17, 10, 4, -1, (1 << 21), -1, -1, -1, 10800);
		func_108(6, "beat_booby_trap", 4, 140.0f, 3, -2130435839, -1, 15, 10, 4, -1, (1 << 12), -1, -1, -1, 10800);
		func_108(7, "beat_bounty_transport", 4, 140.0f, 3, 8390689, -1, 17, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(8, "beat_burning_bodies", 1, 140.0f, 3, 1073815809, -1, 10, 9, 4, -1, 2056, 9, -1, -1, 10800);
		func_108(9, "beat_campfire_ambush", 4, 140.0f, 3, 50335745, -1, 17, 8, -1, -1, (1 << 21), -1, -1, -1, 10800);
		func_108(10, "beat_chain_gang", 4, 140.0f, 3, -2139090687, (1 << 13), 17, 8, 4, -1, 2166785, -1, -1, -1, 10800);
		func_108(11, "beat_checkpoint", 4, 140.0f, 3, 16781345, -1, 12, 10, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(12, "beat_coach_robbery", 4, 140.0f, 3, -2130702335, -1, 12, 10, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(13, "beat_corpse_cart", 4, 140.0f, 1, 18878497, 128, 17, 10, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(14, "beat_crashed_wagon", 4, 140.0f, 3, -2145384447, -1, 17, 10, 4, -1, (1 << 21), -1, -1, -1, 10800);
		func_108(15, "beat_del_lobo_posse", 4, 140.0f, 3, 16846881, -1, 10, 9, 4, -1, 0, -1, -1, -1, 5400);
		func_108(16, "beat_drunk_camp", 4, 140.0f, 3, 33570817, 128, 17, 11, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(17, "beat_escort", 4, 140.0f, 3, -2143281151, -1, 17, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(18, "beat_executions", 4, 140.0f, 1, 16781313, -1, 17, 10, 4, -1, (1 << 17), -1, -1, -1, 10800);
		func_108(19, "beat_fleeing_trespasser", 1, 100.0f, 3, -2147449599, -1, 10, 9, 4, -1, 2056, -1, 26, -1, 10800);
		func_108(20, "beat_friendly_outdoorsman", 4, 140.0f, 5, 1073745937, (1 << 13), 12, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(21, "beat_frozen_to_death", 4, 100.0f, 2, 16657, -1, 17, 8, -1, -1, (1 << 11), -1, -1, -1, 10800);
		func_108(22, "beat_fussar_chase", 4, 140.0f, 3, 2305, -1, 10, 9, 4, -1, 0, -1, -1, -1, 10800);
		func_108(23, "beat_gang_camp_reminder", 2, 140.0f, 3, 129, -1, 10, 7, 5, -1, 67585, -1, 77, -1, 10800);
		func_108(24, "beat_gold_panner", 4, 140.0f, 5, 4101, -1, 17, 10, 4, -1, 2101248, 9, -1, -1, 10800);
		func_108(119, "beat_herbalist_camp", 2, 140.0f, 4, 301993985, -1, 12, 10, 4, -1, 32771, -1, -1, -1, 10800);
		func_108(27, "beat_horse_race", 4, 140.0f, 3, 1073745953, (1 << 13), 11, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(28, "beat_hostage_rescue", 4, 140.0f, 2, 4202497, -1, 14, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(60, "beat_hunter", 4, 140.0f, 3, 8193, -1, 12, 10, 4, -1, (1 << 12), 9, -1, -1, 10800);
		func_108(29, "beat_inbred_kidnap", 4, 140.0f, 1, 16781345, 128, 15, 13, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(30, "beat_injured_rider", 4, 140.0f, 3, -2147475455, -1, 16, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(31, "beat_kidnap_victim", 4, 140.0f, 3, 4198433, -1, 17, 10, 4, -1, 0, -1, -1, -1, 5400);
		func_108(32, "beat_rally_dispute", 4, 140.0f, 3, 4097, 128, 17, 10, 4, 82, 1, -1, -1, -1, 10800);
		func_108(33, "beat_rally", 4, 140.0f, 3, 2051, 128, 17, 10, 4, -1, 2101249, 77, -1, -1, 10800);
		func_108(34, "beat_rally_setup", 4, 140.0f, 3, 4097, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(35, "beat_laramie_gang_rustling", 4, 140.0f, 3, 16843777, 128, 17, 10, 66, -1, 0, -1, -1, -1, 10800);
		func_108(36, "beat_locked_safe", 4, 140.0f, 3, 8449, -1, 17, 10, 4, -1, 0, -1, -1, -1, 1800);
		func_108(37, "beat_lone_prisoner", 4, 140.0f, 3, 12591297, -1, 13, 10, 6, -1, 1, -1, -1, -1, 10800);
		func_108(38, "beat_lost_friend", 4, 140.0f, 3, 4202881, -1, 17, 10, 4, -1, 36864, -1, -1, -1, 10800);
		func_108(39, "beat_lost_man", 4, 140.0f, 3, 4202753, -1, 17, 10, 4, -1, 4105, -1, -1, -1, 10800);
		func_108(40, "beat_moonshine_camp", 4, 140.0f, 3, 33558785, -1, 14, 10, 4, -1, 4097, 77, -1, -1, 10800);
		func_108(41, "beat_murder_campfire", 4, 100.0f, 1, 1073758465, -1, 17, 7, 4, -1, 393728, -1, -1, -1, 10800);
		func_108(42, "beat_naked_swimmer", 7, 140.0f, 5, 8453, -1, 17, 10, 4, -1, 73729, -1, -1, -1, 10800);
		func_108(43, "beat_outlaw_looter", 4, 100.0f, 3, -1073737719, -1, 12, 10, 4, -1, (1 << 21), -1, -1, -1, 10800);
		func_108(44, "beat_outlaw_transport", 4, 140.0f, 3, 564134945, -1, 17, 10, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(45, "beat_people_in_need_snake_bite", 4, 140.0f, 3, 4202497, -1, 12, 9, 4, -1, 1, -1, -1, -1, 10800);
		func_108(46, "beat_player_camp_attack", 4, 140.0f, 3, 151261185, -1, -1, 10, 4, -1, 77825, -1, -1, -1, 10800);
		func_108(47, "beat_player_camp_stranger", 4, 140.0f, 3, 134220033, -1, -1, -1, 4, -1, 77824, -1, -1, -1, 10800);
		func_108(48, "beat_poisoned", 4, 140.0f, 3, 4202625, -1, 21, 10, 4, -1, 1, 9, -1, -1, 10800);
		func_108(49, "beat_posse_breakout", 2, 140.0f, 3, -2147446655, -1, 17, 10, 6, -1, 1, -1, 14, -1, 5400);
		func_108(50, "beat_prison_wagon", 4, 140.0f, 3, 10493985, -1, 11, 9, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(51, "beat_rifle_practice", 4, 140.0f, 3, 553652481, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(53, "beat_savage_aftermath", 4, 140.0f, 1, 50405377, -1, 12, 9, 4, -1, 2232320, -1, -1, -1, 10800);
		func_108(54, "beat_savage_fight", 4, 140.0f, 1, 50401281, -1, 17, 10, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(56, "beat_savage_wagon", 4, 140.0f, 3, 1090592801, -1, 17, 10, 60, -1, 0, -1, -1, -1, 10800);
		func_108(55, "beat_savage_warning", 7, 140.0f, 3, 50339841, -1, 17, 10, 4, -1, 2097665, -1, -1, -1, 10800);
		func_108(57, "beat_sharp_shooter", 4, 140.0f, 3, 536875009, (1 << 13), 11, 9, 4, -1, 1, 9, -1, -1, 10800);
		func_108(58, "beat_skipping_stones", 4, 140.0f, 5, 4373, (1 << 13), 17, 10, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(59, "beat_spooked_horse", 1, 140.0f, 3, 8481, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(61, "beat_stalking_shadows", 2, 140.0f, 2, 289, 128, 12, 10, 4, -1, (1 << 12), -1, -1, -1, 10800);
		func_108(62, "beat_stranded_rider", 4, 140.0f, 3, -2147475455, -1, 17, 11, 4, -1, 1, -1, -1, -1, 10800);
		func_108(63, "beat_traffic_attack", 4, 100.0f, 3, 16781345, -1, 12, 10, 60, -1, 1, -1, -1, -1, 5400);
		func_108(64, "beat_train_holdup", 4, 185.0f, 3, -1593834239, -1, 14, 10, 25, -1, 16387, 25, -1, -1, 10800);
		func_108(65, "beat_trapped_woman", 4, 140.0f, 3, -2143285247, -1, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(66, "beat_treasure_hunter", 4, 140.0f, 3, 8449, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(67, "beat_torturing_captive", 4, 140.0f, 1, 16777217, 128, 18, 10, 4, -1, 131073, -1, -1, -1, 10800);
		func_108(68, "beat_torch_procession", 2, 140.0f, 2, 8193, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(69, "beat_voice", 2, 140.0f, 3, 8193, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(70, "beat_wagon_threat", 4, 140.0f, 3, 16842785, -1, 16, 10, 4, -1, (1 << 21), -1, -1, -1, 10800);
		func_108(71, "beat_washed_ashore", 2, 40.0f, 3, 8453, -1, 9, 8, 4, -1, 2049, -1, -1, -1, 10800);
		func_108(72, "beat_wilderness_hanging", 2, 100.0f, 3, -1073725439, -1, 17, 8, 4, -1, 0, -1, -1, -1, 10800);
		func_108(73, "beat_wild_man", 4, 100.0f, 3, 8449, -1, 9, 8, 4, -1, 69633, -1, -1, -1, 10800);
		func_108(74, "beat_wild_man_cave", 4, 100.0f, 3, 1073758465, -1, 17, 7, 4, -1, 393728, -1, -1, -1, 10800);
		func_108(75, "beat_bandito_breakout", 1, 50.0f, 3, 553717763, -1, -1, -1, 4, -1, (1 << 11), 63, -1, -1, 10800);
		func_108(76, "beat_bandito_execution", 1, 50.0f, 3, 16844803, -1, -1, -1, 4, -1, 1, -1, -1, -1, 10800);
		func_108(77, "beat_brontes_town_encounter", 4, 30.0f, 3, 1090535426, -1, 11, 8, 4, -1, 1, 9, -1, -1, 10800);
		func_108(78, "beat_bronte_patrol", 4, 70.0f, 3, 16814083, -1, 11, 9, 29, -1, 0, 9, 31, -1, 10800);
		func_108(79, "beat_consequence", 2, 50.0f, 3, 16642, (1 << 14), 8, 2, 4, -1, 67585, 77, -1, -1, 10800);
		func_108(80, "beat_dark_alley_ambush", 4, 50.0f, 3, 258, 128, 13, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(81, "beat_dark_alley_bum", 4, 50.0f, 3, 16386, -1, 10, 9, 4, -1, 0, 77, -1, -1, 10800);
		func_108(82, "beat_dark_alley_stabber", 4, 60.0f, 2, 8194, 128, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(83, "beat_dead_bodies", 4, 50.0f, 3, 69635, -1, 12, 10, 66, -1, 2097153, -1, -1, -1, 10800);
		func_108(84, "beat_dead_john", 3, 55.0f, 1, 147714, 128, 10, 9, 4, -1, 200961, -1, -1, -1, 10800);
		func_108(85, "beat_disabled_beggar", 4, 50.0f, 3, 16386, -1, 11, 9, 4, -1, 0, 77, -1, -1, 10800);
		func_108(86, "beat_domestic_dispute", 4, 60.0f, 3, 8467, -1, 11, 8, 4, -1, 4097, 9, -1, -1, 10800);
		func_108(87, "beat_drown_murder", 4, 50.0f, 1, 8194, 128, 17, 10, 4, -1, 131073, -1, -1, 58, 10800);
		func_108(88, "beat_drunk_dueler", 4, 60.0f, 3, 67772674, -1, 17, 11, 6, -1, 1, -1, -1, -1, 10800);
		func_108(89, "beat_duel_boaster", 4, 60.0f, 3, 67780610, 128, 17, 10, 6, -1, 1, -1, -1, -1, 10800);
		func_108(90, "beat_duel_winner", 4, 60.0f, 3, 528386, -1, 17, 11, 6, -1, 1, -1, -1, -1, 10800);
		func_108(91, "beat_fleeing_family", 4, 55.0f, 3, 1073807362, -1, 17, 10, 4, -1, 2101249, -1, -1, -1, 10800);
		func_108(92, "beat_foot_robbery", 4, 45.0f, 3, 16785410, -1, 11, 10, 4, -1, 16385, -1, -1, -1, 10800);
		func_108(94, "beat_gang_ped1_encounter", 4, 30.0f, 3, 1090568194, -1, 10, 8, 4, -1, 1, 9, -1, -1, 10800);
		func_108(95, "beat_intimidation_tactics", 4, 50.0f, 3, 16785666, (1 << 9), 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(96, "beat_lemoyne_town_encounter", 4, 50.0f, 3, 1090535426, -1, 11, 8, 4, -1, 16385, 9, -1, -1, 10800);
		func_108(97, "beat_lost_dog", 4, 60.0f, 5, 4202626, -1, 17, 10, 4, 82, 1, -1, -1, -1, 10800);
		func_108(98, "beat_lost_drunk", 4, 60.0f, 3, 8322, -1, 15, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(99, "beat_odriscoll_town_encounter", 4, 45.0f, 3, 1090568194, -1, 11, 8, 5, -1, 1, 9, -1, 65, 10800);
		func_108(100, "beat_on_the_run", 4, 90.0f, 3, 8578, -1, 13, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(101, "beat_parlor_ambush", 4, 70.0f, 1, 16916738, -1, 12, 10, 4, -1, 1073942529, -1, -1, -1, 10800);
		func_108(102, "beat_peeping_tom", 4, 60.0f, 4, 8450, 128, 11, 10, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(103, "beat_pickpocket", 4, 30.0f, 3, 131330, -1, 17, 10, 6, -1, 4097, -1, -1, -1, 10800);
		func_108(104, "beat_piss_pot", 4, 60.0f, 3, 2050, -1, 12, 10, 4, -1, (1 << 12), 9, -1, -1, 10800);
		func_108(105, "beat_police_chase", 4, 50.0f, 3, 4354, -1, 13, 10, 4, -1, 1073745920, -1, -1, -1, 10800);
		func_108(106, "beat_public_hanging", 4, 60.0f, 2, 4354, (1 << 13), 10, 9, 4, -1, 81921, 77, -1, -1, 10800);
		func_108(107, "beat_rat_infestation", 4, 60.0f, 3, 16642, -1, 10, 9, 4, -1, 69633, -1, -1, -1, 10800);
		func_108(108, "beat_rowdy_drunks", 4, 40.0f, 3, 67117074, 128, 11, 9, 5, -1, 69633, -1, -1, -1, 10800);
		func_108(109, "beat_show_off", 4, 60.0f, 3, 1073750018, (1 << 14), 17, 10, 4, -1, 1, 77, -1, -1, 10800);
		func_108(110, "beat_slum_ambush", 4, 70.0f, 2, 67248386, -1, 15, 10, 31, -1, 1073743873, -1, -1, -1, 10800);
		func_108(111, "beat_street_fight", 4, 40.0f, 3, 67117314, -1, 12, 8, 5, -1, 1, -1, -1, -1, 10800);
		func_108(112, "beat_taunting", 4, 50.0f, 3, 8194, -1, 17, 10, 4, -1, 1, 77, -1, -1, 10800);
		func_108(113, "beat_town_burial", 4, 60.0f, 3, 8210, (1 << 13), -1, -1, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(114, "beat_town_confrontation", 3, 20.0f, 3, 1073750146, -1, 15, 9, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(116, "beat_town_widow", 3, 20.0f, 3, 8322, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(115, "beat_town_robbery", 4, 60.0f, 3, 8194, 128, 13, 10, 5, -1, 1, -1, -1, -1, 10800);
		func_108(117, "beat_town_trouble", 4, 60.0f, 3, 16844802, -1, 15, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(118, "beat_wealthy_couple", 4, 50.0f, 1, 4098, 128, 17, 10, 4, -1, 1, 57, -1, -1, 10800);
	}
	return 1;
}

int func_14()
{
	func_110(68736);
	return 1;
}

int func_15()
{
	func_111(0, 6, 1);
	func_111(0, 7, 1);
	func_111(0, 1, 1);
	func_111(0, 3, 1);
	func_111(0, 10, 1);
	func_111(0, 9, 1);
	func_111(0, 4, 1);
	func_111(1, 1, 1);
	func_111(1, 10, 1);
	func_111(1, 6, 1);
	func_111(1, 3, 1);
	func_111(2, 7, 1);
	func_111(2, 1, 1);
	func_111(2, 9, 1);
	func_111(2, 10, 1);
	func_111(2, 4, 1);
	func_111(2, 3, 1);
	func_111(2, 0, 1);
	func_111(2, 2, 1);
	func_111(2, 11, 1);
	func_111(3, 9, 1);
	func_111(3, 11, 2);
	func_111(75, 15, 1);
	func_112(75, (1 << 24), 1);
	func_111(76, 13, 1);
	func_112(76, (1 << 20), 1);
	func_111(4, 1, 1);
	func_111(4, 6, 1);
	func_111(4, 10, 1);
	func_111(4, 3, 1);
	func_112(77, (1 << 13), 2);
	func_111(5, 10, 2);
	func_111(6, 8, 1);
	func_111(6, 10, 2);
	func_111(7, 1, 2);
	func_111(7, 3, 2);
	func_111(7, 10, 2);
	func_111(7, 6, 2);
	func_111(7, 9, 2);
	func_112(78, (1 << 13), 2);
	func_111(78, 0, 2);
	func_111(8, 15, 2);
	func_111(9, 10, 1);
	func_111(10, 11, 1);
	func_111(11, 11, 2);
	func_111(11, 0, 2);
	func_111(12, 1, 1);
	func_111(12, 3, 1);
	func_111(12, 9, 1);
	func_111(12, 11, 1);
	func_111(12, 12, 1);
	func_111(12, 13, 1);
	func_111(12, 14, 1);
	func_111(12, 15, 1);
	func_111(12, 16, 1);
	func_111(12, 4, 1);
	func_112(79, (1 << 21), 1);
	func_112(79, 2, 1);
	func_112(79, (1 << 16), 1);
	func_112(79, (1 << 19), 1);
	func_111(79, 9, 1);
	func_111(79, 10, 1);
	func_111(79, 11, 1);
	func_111(79, 1, 1);
	func_111(13, 10, 2);
	func_111(13, 2, 2);
	func_111(14, 1, 2);
	func_111(14, 11, 1);
	func_112(80, (1 << 13), 2);
	func_111(80, 0, 2);
	func_112(81, (1 << 13), 4);
	func_111(81, 0, 4);
	func_112(81, 8, 2);
	func_111(81, 4, 2);
	func_112(82, (1 << 13), 2);
	func_111(82, 0, 2);
	func_112(82, 8, 2);
	func_111(82, 4, 2);
	func_112(83, (1 << 24), 2);
	func_111(83, 15, 2);
	func_112(84, (1 << 21), 2);
	func_111(84, 9, 2);
	func_111(15, 13, 3);
	func_111(15, 15, 5);
	func_111(15, 16, 4);
	func_111(15, 14, 2);
	func_112(85, (1 << 13), 2);
	func_111(85, 0, 2);
	func_111(86, 10, 1);
	func_111(86, 11, 1);
	func_112(86, 65538, 1);
	func_112(87, (1 << 21), 1);
	func_112(87, (1 << 16), 1);
	func_112(87, (1 << 22), 1);
	func_111(16, 1, 1);
	func_111(16, 4, 1);
	func_111(16, 9, 1);
	func_111(16, 11, 1);
	func_111(16, 10, 1);
	func_111(16, 2, 1);
	func_111(88, 10, 1);
	func_111(88, 9, 1);
	func_112(88, (1 << 22), 1);
	func_112(88, (1 << 21), 1);
	func_111(89, 11, 1);
	func_112(89, (1 << 16), 1);
	func_111(90, 9, 1);
	func_111(90, 10, 1);
	func_112(90, (1 << 21), 1);
	func_112(90, (1 << 22), 1);
	func_111(17, 3, 1);
	func_111(17, 11, 1);
	func_111(17, 0, 1);
	func_111(17, 9, 1);
	func_111(17, 6, 1);
	func_111(18, 11, 2);
	func_111(18, 0, 2);
	func_111(18, 2, 2);
	func_112(91, (1 << 24), 1);
	func_111(19, 11, 1);
	func_112(19, (1 << 16), 1);
	func_112(19, 64, 1);
	func_112(92, 2162688, 1);
	func_111(20, 1, 1);
	func_111(20, 3, 1);
	func_111(20, 9, 1);
	func_111(20, 4, 1);
	func_111(20, 11, 1);
	func_111(20, 10, 1);
	func_111(21, 7, 1);
	func_111(22, 8, 1);
	func_112(93, (1 << 13), 1);
	func_111(23, 0, 3);
	func_111(23, 1, 3);
	func_111(23, 2, 3);
	func_111(23, 15, 3);
	func_111(23, 3, 3);
	func_111(23, 4, 3);
	func_111(23, 13, 3);
	func_111(23, 5, 3);
	func_111(23, 6, 3);
	func_111(23, 7, 3);
	func_111(23, 9, 3);
	func_111(23, 10, 3);
	func_111(23, 14, 3);
	func_111(23, 10, 3);
	func_111(23, 11, 3);
	func_111(23, 12, 3);
	func_112(94, (1 << 21), 4);
	func_112(94, (1 << 16), 4);
	func_112(94, (1 << 13), 2);
	func_111(24, 9, 1);
	func_111(24, 1, 2);
	func_111(24, 10, 2);
	func_111(24, 3, 2);
	func_111(24, 6, 2);
	func_111(119, 1, 1);
	func_111(119, 4, 1);
	func_111(119, 6, 1);
	func_111(119, 15, 1);
	func_111(119, 9, 1);
	func_111(119, 10, 1);
	func_111(119, 11, 1);
	func_111(119, 12, 1);
	func_111(27, 11, 2);
	func_111(27, 0, 2);
	func_111(27, 3, 2);
	func_111(27, 10, 2);
	func_111(27, 9, 1);
	func_111(27, 1, 2);
	func_111(27, 6, 2);
	func_111(28, 0, 1);
	func_111(28, 11, 1);
	func_111(28, 1, 1);
	func_111(29, 10, 2);
	func_111(29, 2, 2);
	func_111(30, 10, 1);
	func_111(30, 4, 1);
	func_111(30, 0, 2);
	func_111(30, 2, 2);
	func_112(95, (1 << 13), 1);
	func_111(31, 2, 1);
	func_111(31, 11, 1);
	func_111(31, 0, 1);
	func_111(31, 10, 1);
	func_111(31, 3, 1);
	func_111(31, 1, 1);
	func_111(31, 6, 1);
	func_111(31, 9, 1);
	func_111(32, 1, 1);
	func_111(32, 10, 1);
	func_111(32, 9, 1);
	func_111(32, 11, 1);
	func_111(32, 2, 1);
	func_111(33, 1, 2);
	func_111(33, 10, 2);
	func_111(33, 9, 2);
	func_111(33, 11, 2);
	func_111(33, 2, 2);
	func_112(33, 16, 2);
	func_111(34, 1, 1);
	func_111(34, 10, 1);
	func_111(34, 9, 1);
	func_111(34, 11, 1);
	func_111(34, 2, 1);
	func_111(35, 1, 1);
	func_112(96, 73728, 3);
	func_111(36, 0, 2);
	func_111(36, 11, 2);
	func_111(36, 1, 2);
	func_111(36, 2, 2);
	func_111(36, 10, 2);
	func_111(37, 11, 2);
	func_111(37, 9, 2);
	func_111(37, 0, 2);
	func_111(37, 2, 2);
	func_112(97, (1 << 9), 1);
	func_112(97, (1 << 19), 1);
	func_112(98, (1 << 21), 2);
	func_112(98, (1 << 22), 1);
	func_111(38, 7, 1);
	func_111(39, 1, 1);
	func_111(40, 2, 2);
	func_111(40, 0, 2);
	func_111(40, 11, 2);
	func_111(40, 10, 2);
	func_111(40, 3, 2);
	func_111(40, 9, 2);
	func_111(40, 1, 2);
	func_111(40, 6, 2);
	func_111(41, 1, 1);
	func_111(41, 11, 1);
	func_111(41, 9, 1);
	func_111(42, 11, 2);
	func_111(99, 9, 2);
	func_112(99, (1 << 21), 2);
	func_112(100, (1 << 19), 1);
	func_111(43, 9, 1);
	func_111(43, 1, 1);
	func_111(43, 0, 1);
	func_111(43, 2, 1);
	func_111(43, 4, 1);
	func_111(43, 6, 1);
	func_111(43, 10, 1);
	func_111(43, 11, 1);
	func_111(43, 13, 1);
	func_111(43, 14, 1);
	func_111(43, 15, 1);
	func_111(43, 16, 1);
	func_111(43, 12, 1);
	func_111(44, 1, 1);
	func_111(44, 9, 1);
	func_111(44, 11, 1);
	func_111(44, 0, 1);
	func_112(101, (1 << 16), 2);
	func_112(102, (1 << 21), 2);
	func_112(102, (1 << 19), 1);
	func_111(103, 0, 1);
	func_111(103, 10, 1);
	func_112(103, (1 << 13), 2);
	func_112(103, (1 << 22), 1);
	func_111(45, 11, 2);
	func_111(45, 0, 2);
	func_111(45, 9, 1);
	func_111(104, 0, 3);
	func_112(104, (1 << 13), 3);
	func_111(47, 10, 1);
	func_111(46, 10, 2);
	func_111(46, 12, 2);
	func_111(48, 11, 1);
	func_111(48, 10, 1);
	func_111(48, 0, 1);
	func_112(105, (1 << 13), 2);
	func_111(49, 1, 1);
	func_111(49, 9, 1);
	func_111(50, 1, 3);
	func_111(50, 9, 3);
	func_111(50, 10, 3);
	func_111(50, 2, 3);
	func_111(50, 11, 3);
	func_111(50, 0, 3);
	func_112(106, (1 << 21), 3);
	func_112(106, (1 << 16), 2);
	func_112(106, 8, 2);
	func_112(106, (1 << 13), 2);
	func_112(107, (1 << 13), 2);
	func_111(51, 11, 1);
	func_112(108, (1 << 22), 2);
	func_112(108, (1 << 21), 2);
	func_112(108, (1 << 24), 1);
	func_111(53, 12, 2);
	func_111(54, 12, 2);
	func_111(56, 12, 2);
	func_111(56, 4, 3);
	func_111(55, 12, 1);
	func_111(57, 0, 3);
	func_111(57, 11, 3);
	func_111(57, 9, 3);
	func_111(57, 1, 3);
	func_111(57, 15, 3);
	func_111(57, 14, 3);
	func_111(57, 13, 3);
	func_112(109, (1 << 19), 1);
	func_112(109, (1 << 16), 1);
	func_112(109, 2, 2);
	func_111(58, 9, 2);
	func_111(58, 11, 2);
	func_111(58, 1, 2);
	func_112(110, (1 << 13), 1);
	func_111(59, 0, 2);
	func_111(60, 6, 1);
	func_111(60, 10, 1);
	func_111(60, 1, 1);
	func_111(60, 9, 1);
	func_111(60, 4, 1);
	func_111(61, 0, 2);
	func_111(62, 1, 2);
	func_111(62, 7, 2);
	func_111(62, 6, 2);
	func_111(62, 12, 2);
	func_111(62, 4, 2);
	func_111(62, 9, 2);
	func_112(111, (1 << 21), 4);
	func_112(111, (1 << 22), 2);
	func_112(111, 8, 1);
	func_112(112, (1 << 13), 1);
	func_111(67, 10, 1);
	func_111(68, 0, 2);
	func_111(68, 2, 2);
	func_112(113, 8, 2);
	func_112(113, (1 << 16), 1);
	func_112(115, (1 << 21), 2);
	func_111(115, 9, 2);
	func_112(117, (1 << 24), 2);
	func_112(114, (1 << 21), 1);
	func_112(114, (1 << 16), 1);
	func_112(114, (1 << 13), 1);
	func_112(114, (1 << 22), 1);
	func_112(116, 2162690, 1);
	func_111(63, 1, 1);
	func_111(64, 9, 1);
	func_111(64, 11, 1);
	func_111(64, 0, 1);
	func_111(64, 15, 1);
	func_111(64, 14, 1);
	func_111(64, 13, 1);
	func_111(65, 6, 2);
	func_111(65, 9, 2);
	func_111(65, 11, 2);
	func_111(65, 10, 2);
	func_111(66, 1, 3);
	func_111(69, 0, 1);
	func_111(69, 2, 1);
	func_111(70, 1, 2);
	func_111(71, 10, 1);
	func_111(71, 9, 1);
	func_111(71, 4, 1);
	func_111(71, 8, 1);
	func_112(118, 8200, 1);
	func_111(72, 0, 2);
	func_111(72, 10, 2);
	func_111(72, 2, 2);
	func_111(73, 10, 3);
	func_111(74, 10, 1);
	func_113();
	return 1;
}

int func_16()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 44)
	{
		if (func_114(iVar1))
		{
			if (!Global_40 || bVar0)
			{
				Global_40.f_9274[iVar1] = 0;
				if (func_115() != -1)
				{
					Global_36638[iVar1] = 0;
				}
			}
			if (iVar1 == 43)
			{
				func_116(43, 1);
			}
		}
		iVar1++;
	}
	return 1;
}

int func_17()
{
	func_117();
	return 1;
}

int func_18()
{
	return 1;
}

int func_19()
{
	if (func_115() != -1)
	{
		return 1;
	}
	func_118(2, "loanshark_catfish", 96, 1308.708f, -2342.772f, 41.4922f, 1324.754f, -2307.706f, 47.07406f, 65.0f, 0, -1, -1, 1123680256, 65, 1123680256);
	func_118(7, "loanshark_horseChase1", 66, 1120.147f, 503.3499f, 94.8851f, 1120.147f, 503.3499f, 94.8851f, 40.0f, 0, -1, -1, 200.0f, 65, 1123680256);
	func_118(1, "loanshark_hunter", -1, -1781.541f, -180.863f, 194.142f, -1733.015f, -200.884f, 182.1981f, 75.0f, 0, -1, -1, 200.0f, 65, 140.0f);
	func_118(5, "loanshark_miner1", 78, 2757.363f, 1370.689f, 68.29453f, 2792.968f, 1347.938f, 72.24879f, 50.0f, 0, -1, 6, 1123680256, 1, 1123680256);
	func_118(6, "loanshark_miner2", 82, 2685.276f, 900.0816f, 90.9889f, 2689.845f, 900.8306f, 96.28243f, 35.0f, 0, -1, -1, 1123680256, 81, 1123680256);
	func_118(8, "loanshark_sellHorse1", -1, -610.8f, -25.3f, 85.5f, -619.389f, -28.8628f, 84.4293f, 50.0f, 0, -1, -1, 1123680256, 65, 1123680256);
	func_118(4, "loanshark_soldier", -1, 1411.856f, 1166.743f, 184.1507f, 1418.006f, 1129.67f, 183.486f, 120.0f, 0, -1, 5, 150.0f, 81, 140.0f);
	func_118(3, "loanshark_undertaker", 105, 1300.562f, -1318.563f, 76.5193f, 1306.878f, -1313.599f, 79.70631f, 15.0f, 0, -1, -1, 1123680256, 65, 1123680256);
	func_118(0, "loanshark_womanCry", 69, 1424.889f, 383.4419f, 89.48783f, 1422.9f, 329.34f, 87.41f, 65.0f, 0, -1, -1, 170.0f, 67, 100.0f);
	return 1;
}

int func_20()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_119(0, joaat("AV_BARBER_SHAVING"), 2, -1, 5, 1);
		func_119(1, joaat("AV_BODY_TOSS"), (1 << 13), -1, 0, 0);
		func_119(2, joaat("AV_BUTCHER_SHARED"), 3, 77, 23, 1);
		func_119(3, joaat("AV_BUTCHER_SHARED"), 3, 77, 23, 1);
		func_119(4, joaat("AV_CHAMBERPOT_TOSS"), 3, 77, 0, 1);
		func_119(6, joaat("AV_DROP_RABBIT_TABLE"), 2, 77, 0, 0);
		func_119(7, joaat("AV_GET_DIRECTIONS"), 3, 77, 0, 1);
		func_119(47, joaat("AV_HOBO_TRAIN_HOP"), 3, 77, 0, 0);
		func_119(9, joaat("AV_LIGHT_SMOKE"), (1 << 13), 77, 0, 1);
		func_119(10, joaat("AV_LUMBER_PASS"), 64, 77, 43, 0);
		func_119(11, joaat("AV_LUMBER_PASS"), 64, 77, 43, 0);
		func_119(12, joaat("AV_MAN_JUMP_FENCE"), (1 << 13), -1, 0, 0);
		func_119(13, joaat("AV_MAN_STAND_AT_WAGON"), (1 << 13), 77, 0, 1);
		func_119(14, joaat("AV_PUMP_CART"), -1, -1, 0, 1);
		func_119(16, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(17, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(18, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(19, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(20, joaat("AV_STAGE_COACH"), 3, 77, 0, 0);
		func_119(21, joaat("AV_STARTING_TO_RAIN"), 3, 2, 62, 0);
		func_119(22, joaat("AV_STARTING_TO_RAIN"), 3, 2, 62, 0);
		func_119(23, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(24, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(25, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(26, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(27, joaat("AV_WAGON_BARREL"), 3, 77, 0, 0);
		func_119(28, joaat("AV_WAGON_SWEEPER"), 2, 77, 0, 0);
		func_119(29, joaat("AV_WAGON_BARREL"), 64, 77, 0, 0);
		func_119(30, joaat("AV_WALK_WITH_HORSE"), 3, 77, 0, 1);
		func_119(31, joaat("AV_WHISPER_SIT"), 14, 77, 75, 0);
		func_119(32, joaat("AV_WHISPER_SIT"), 14, 77, 75, 0);
		func_119(33, joaat("AV_WHORE_GIVE_MONEY"), 12, -1, 0, 1);
		func_119(34, joaat("AV_AMB_CAMP_ROBBERY"), -1, -1, 77, 1);
		func_119(35, joaat("AV_BOAT_PLACEMENT"), -1, 77, 0, 4);
		func_119(36, joaat("AV_ANIMAL_ATTACK"), (1 << 13), 77, 49, 3);
		func_119(5, joaat("AV_SHEEP_GRAZING"), 3, 57, 41, 3);
		func_119(37, joaat("AV_TRAVELLER_GALLOP_PAST"), -1, 57, 66, 4);
		func_119(38, joaat("AV_ANIMAL_CARRY_RIDE"), 3, 77, 37, 1);
		func_119(39, joaat("AV_ANIMAL_CARRY_RIDE"), 8196, 57, 37, 2);
		func_119(40, joaat("AV_DOG_IN_WAGON"), 8196, 77, 67, 2);
		func_119(41, joaat("AV_ANIMAL_CARRY_RIDE"), (1 << 13), 77, 37, 2);
		func_119(42, joaat("AV_FEMALE_RIDER_MALE_WALKER"), (1 << 13), 77, 64, 4);
		func_119(43, joaat("AV_FISHING_RIVER"), 5, 77, 38, 3);
		func_119(44, joaat("AV_FISHING_RIVER"), 5, 77, 38, 3);
		func_119(45, joaat("AV_ANIMAL_ATTACK"), (1 << 13), 57, 49, 3);
		func_119(46, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 37, 4);
		func_119(8, joaat("AV_SHEEP_GRAZING"), 3, 77, 41, 3);
		func_119(48, joaat("AV_MACFARLANE_FARMER"), 3, 77, 60, 3);
		func_119(51, joaat("AV_MAN_WITH_LANTERN"), 128, 57, 65, 4);
		func_119(49, joaat("AV_TRAVELLER_GALLOP_PAST"), 8196, 77, 65, 4);
		func_119(50, joaat("AV_MAN_SIT_READ"), 3, 77, 53, 2);
		func_119(52, joaat("AV_SLOW_RIDER"), 8196, 77, 66, 4);
		func_119(53, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 37, 4);
		func_119(54, joaat("AV_WATER_HORSE"), (1 << 13), 77, 53, 3);
		func_119(55, joaat("AV_RIDER_GALLOP"), (1 << 13), 57, 65, 4);
		func_119(56, joaat("AV_FEMALE_RIDER_MALE_WALKER"), 8196, 77, 66, 4);
		func_119(57, joaat("AV_RIDGELINE_NATIVE"), 8196, 77, 45, 2);
		func_119(58, joaat("AV_RIDGELINE_RIDER"), 8196, 77, 65, 2);
		func_119(59, joaat("AV_ROVING_HERD"), (1 << 13), -1, 41, 3);
		func_119(15, joaat("AV_SHEEP_GRAZING"), 3, 77, 41, 3);
		func_119(60, joaat("AV_SLOW_RIDER"), -1, 77, 66, 4);
		func_119(61, joaat("AV_TRAVELLER_GALLOP_PAST"), (1 << 13), 57, 68, 4);
		func_119(62, joaat("AV_FEMALE_RIDER_MALE_WALKER"), 8196, 77, 64, 4);
		func_119(63, joaat("AV_FEMALE_RIDER_MALE_WALKER"), 8196, 77, 64, 4);
		func_119(64, joaat("AV_TRAVELLER_GALLOP_PAST"), 8196, 57, 65, 4);
		func_119(66, joaat("AV_WAGON_BACK_PASSENGER"), 8196, 77, 67, 2);
		func_119(65, joaat("AV_WAGON_MUSIC"), 8196, 77, 67, 4);
		func_119(67, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(68, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(69, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(70, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(71, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(72, joaat("AV_WALK_WITH_DOG"), 8196, 77, 74, 4);
		func_119(73, joaat("AV_WALK_WITH_DOG"), (1 << 13), 77, 74, 4);
		func_119(74, joaat("AV_WATER_HORSE"), 8196, 77, 66, 2);
		func_119(75, joaat("AV_ALLIGATOR_BOAR_LEG"), 5, -1, 49, 3);
		func_119(76, joaat("AV_ALLIGATOR_BOAR_NECK"), 5, -1, 49, 3);
		func_119(77, joaat("AV_ALLIGATOR_EAT_DEAD_BIRD"), 8448, -1, 49, 3);
		func_119(78, joaat("AV_CROSS_ROAD"), (1 << 13), -1, 2, 4);
		func_119(79, joaat("AV_BIRD_FLEE_SWARM"), 16, -1, 7, 1);
		func_119(80, joaat("AV_BIRD_FENCE_SWARM"), 16, -1, 7, 1);
		func_119(82, joaat("AV_BEAR_INTIMIDATE_WOLF"), 3, 77, 49, 3);
		func_119(83, joaat("AV_BEAR_RUN_CATCH_FISH"), 3, 57, 49, 3);
		func_119(84, joaat("AV_BEAR_SCRATCH_BACK"), 7, 77, 50, 3);
		func_119(85, joaat("AV_BEAR_VS_WOLVES"), (1 << 13), 77, 49, 3);
		func_119(81, joaat("AV_BEARBLACK_INTIMIDATE_BEARBLACK"), (1 << 13), 77, 49, 3);
		func_119(86, joaat("AV_BEAVER_SWIM_WITH_BRANCH"), (1 << 13), -1, 46, 4);
		func_119(87, joaat("AV_BIG_CAT_AMBUSH_DEER"), 5, 57, 49, 3);
		func_119(88, joaat("AV_BIG_CAT_KILL_RACCOON"), 5, -1, 49, 3);
		func_119(89, joaat("AV_BIRD_FENCE_SWARM"), (1 << 13), 77, 11, 1);
		func_119(90, joaat("AV_BIRD_FLEE_SWARM"), (1 << 13), 77, 11, 1);
		func_119(91, joaat("AV_BIRD_FLEE_SWARM"), (1 << 13), 57, 13, 1);
		func_119(92, joaat("AV_BIRD_FLEE_SWARM"), (1 << 13), 57, 13, 1);
		func_119(93, joaat("AV_BIRD_FLEE_SWARM"), (1 << 13), 57, 13, 1);
		func_119(94, joaat("AV_BIRD_FLEE_SWARM"), (1 << 13), 77, 10, 1);
		func_119(95, joaat("AV_BIRD_FLEE_SWARM"), (1 << 13), 77, 10, 1);
		func_119(96, joaat("AV_BIRD_FLEE_SWARM"), (1 << 13), 77, 11, 1);
		func_119(97, joaat("AV_BIRD_FLEE_SWARM"), 128, 77, 11, 1);
		func_119(98, joaat("AV_BIRD_FLEE_SWARM"), 8196, 77, 11, 1);
		func_119(99, joaat("AV_BIRD_FLEE_SWARM"), (1 << 13), 77, 10, 1);
		func_119(100, joaat("AV_BIRD_FLEE_SWARM"), (1 << 13), 77, 12, 1);
		func_119(101, joaat("AV_BIRD_FLEE_SWARM"), (1 << 13), 77, 12, 1);
		func_119(103, joaat("AV_BIRD_LAND"), (1 << 13), 77, 16, 4);
		func_119(104, joaat("AV_BIRD_LAND"), (1 << 13), 77, 16, 4);
		func_119(105, joaat("AV_BIRD_LAND"), (1 << 13), 77, 16, 4);
		func_119(106, joaat("AV_BIRD_LAND"), (1 << 13), 77, 14, 4);
		func_119(107, joaat("AV_BIRD_LAND"), (1 << 13), 77, 14, 4);
		func_119(108, joaat("AV_BIRD_LAND"), (1 << 13), 77, 14, 4);
		func_119(109, joaat("AV_BIRD_LAND"), (1 << 13), 77, 14, 4);
		func_119(110, joaat("AV_BIRD_LAND"), 16, 77, 14, 4);
		func_119(111, joaat("AV_BIRD_LAND"), (1 << 13), 77, 14, 4);
		func_119(112, joaat("AV_BIRD_LAND"), (1 << 13), 77, 16, 4);
		func_119(113, joaat("AV_BIRD_LAND"), (1 << 13), 77, 16, 4);
		func_119(114, joaat("AV_BIRD_LAND_SWARM"), 8196, 77, 15, 1);
		func_119(115, joaat("AV_BIRD_LAND_SWARM"), (1 << 13), 77, 15, 1);
		func_119(116, joaat("AV_BIRD_ON_ANIMAL"), (1 << 13), 9, 17, 1);
		func_119(117, joaat("AV_BIRD_ON_ANIMAL"), (1 << 13), 9, 17, 1);
		func_119(118, joaat("AV_BIRD_ON_ANIMAL"), (1 << 13), 9, 17, 1);
		func_119(119, joaat("AV_BIRD_ON_ANIMAL"), (1 << 13), 9, 17, 1);
		func_119(120, joaat("AV_BIRD_ON_ANIMAL"), (1 << 13), 9, 17, 1);
		func_119(121, joaat("AV_BIRD_ON_ANIMAL"), (1 << 13), 9, 44, 1);
		func_119(122, joaat("AV_BIRD_SWARM"), (1 << 13), 9, 10, 4);
		func_119(123, joaat("AV_BIRD_FENCE_SWARM"), (1 << 13), 77, 12, 1);
		func_119(102, joaat("AV_BIRDS_IN_TREE"), (1 << 13), 77, 10, 1);
		func_119(124, joaat("AV_FOX_SIT"), (1 << 13), 57, 20, 4);
		func_119(125, joaat("AV_CROSS_ROAD"), 8196, -1, 3, 1);
		func_119(126, joaat("AV_BUCK_AND_DOE"), 5, 77, 47, 2);
		func_119(127, joaat("AV_BUCKS_FIGHTING"), 5, 77, 47, 1);
		func_119(128, joaat("AV_BUFFALO_VS_BUFFALO"), (1 << 13), -1, 48, 1);
		func_119(129, joaat("AV_RIDGELINE_ANIMAL"), 5, 77, 48, 1);
		func_119(130, joaat("AV_FOX_SIT"), 8196, -1, 18, 4);
		func_119(131, joaat("AV_FOX_SIT"), -1, -1, 18, 4);
		func_119(132, joaat("AV_FOX_SIT"), (1 << 13), 57, 20, 4);
		func_119(133, joaat("AV_CAT_CARRY_RAT"), (1 << 13), 77, 27, 4);
		func_119(134, joaat("AV_CAT_CATCH_BIRD"), (1 << 13), 77, 27, 4);
		func_119(135, joaat("AV_CROSS_ROAD"), (1 << 13), -1, 3, 4);
		func_119(136, joaat("AV_COYOTE_CATCH_SQUIRREL"), (1 << 13), 57, 51, 2);
		func_119(137, joaat("AV_ANIMAL_SCAVENGER"), 8196, 57, 51, 2);
		func_119(138, joaat("AV_WOLF_TAKEDOWN_MISS"), 8196, 77, 49, 3);
		func_119(144, joaat("AV_FOX_SIT"), 8196, -1, 19, 4);
		func_119(139, joaat("AV_CROWS_AND_EAGLES_EAT_DEER"), 8196, 57, 56, 4);
		func_119(140, joaat("AV_CROWS_AND_VULTURES_EAT_DEER"), 8196, 57, 56, 4);
		func_119(141, joaat("AV_CROWS_AND_VULTURES_EAT_DEER"), 8196, 57, 56, 1);
		func_119(142, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 4);
		func_119(143, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 1);
		func_119(145, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(146, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(147, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(148, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(149, joaat("AV_DEAD_HORSE"), -1, -1, 39, 1);
		func_119(150, joaat("AV_DEAD_HORSE"), -1, -1, 39, 1);
		func_119(151, joaat("AV_DEAD_ANIMAL"), -1, -1, 61, 4);
		func_119(152, joaat("AV_DEAD_ANIMAL"), -1, -1, 61, 4);
		func_119(153, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(154, joaat("AV_DEAD_ANIMAL"), -1, -1, 61, 4);
		func_119(155, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(156, joaat("AV_DEER_ANTLERS_STUCK"), -1, -1, 47, 1);
		func_119(157, joaat("AV_CROSS_ROAD"), 8196, -1, 3, 1);
		func_119(158, joaat("AV_DEER_TREE_RUB"), 8196, 77, 47, 1);
		func_119(159, joaat("AV_DISCOVERABLE_PARAKEET"), (1 << 13), 57, 25, 1);
		func_119(160, joaat("AV_DOG_CHASE_CAT"), (1 << 13), 77, 28, 1);
		func_119(161, joaat("AV_DOG_CHASE_TAIL"), (1 << 13), 77, 28, 2);
		func_119(162, joaat("AV_DOGS_PLAYING"), 7, 77, 28, 1);
		func_119(163, joaat("AV_BIRD_FLEE_SWARM"), (1 << 13), 57, 13, 1);
		func_119(164, joaat("AV_EAGLE_CATCH_FISH"), (1 << 13), 77, 30, 1);
		func_119(165, joaat("AV_EAGLE_CATCH_RABBIT"), (1 << 13), 77, 29, 1);
		func_119(166, joaat("AV_EAGLE_CATCH_SEASNAKE"), (1 << 13), 77, 30, 1);
		func_119(167, joaat("AV_EAGLE_DIVE_CATCH_FISH"), (1 << 13), 77, 30, 1);
		func_119(168, joaat("AV_FOX_SIT"), (1 << 13), 57, 18, 4);
		func_119(169, joaat("AV_FOX_CATCH_RODENT"), (1 << 13), 77, 51, 2);
		func_119(170, joaat("AV_FOX_HUNT_IN_SNOW"), 3, 57, 51, 1);
		func_119(171, joaat("AV_CROSS_ROAD"), 16, -1, 2, 1);
		func_119(172, joaat("AV_FOX_SIT"), 8196, 57, 46, 1);
		func_119(173, joaat("AV_CROSS_ROAD"), (1 << 13), -1, 4, 1);
		func_119(174, joaat("AV_HAWK_CATCH_SNAKE"), (1 << 13), 77, 29, 1);
		func_119(175, joaat("AV_HAWK_CATCH_SNAKE"), (1 << 13), 77, 29, 1);
		func_119(176, joaat("AV_FOX_SIT"), (1 << 13), 57, 18, 4);
		func_119(177, joaat("AV_HAWK_CATCH_SNAKE"), (1 << 13), 77, 29, 1);
		func_119(178, joaat("AV_RIDGELINE_ANIMAL"), (1 << 13), 77, 46, 1);
		func_119(180, joaat("AV_CROSS_ROAD"), (1 << 13), -1, 3, 4);
		func_119(179, joaat("AV_CROSS_ROAD"), (1 << 13), -1, 3, 4);
		func_119(181, joaat("AV_CROSS_ROAD"), 5, -1, 2, 1);
		func_119(182, joaat("AV_MANGY_DOG_AND_VULTURES"), 20, 57, 56, 1);
		func_119(183, joaat("AV_RIDGELINE_ANIMAL"), (1 << 13), 57, 44, 1);
		func_119(184, joaat("AV_MOOSE_SLIPPING"), (1 << 13), 57, 44, 2);
		func_119(185, joaat("AV_CROSS_ROAD"), (1 << 13), -1, 2, 4);
		func_119(186, joaat("AV_OWL_CATCH_RAT"), 20, 57, 29, 1);
		func_119(187, joaat("AV_FOX_SIT"), 20, 57, 18, 4);
		func_119(188, joaat("AV_PELICAN_DIVE"), (1 << 13), 57, 30, 1);
		func_119(189, joaat("AV_FOX_SIT"), (1 << 13), 57, 18, 4);
		func_119(190, joaat("AV_RIDGELINE_ANIMAL"), (1 << 13), 2, 40, 4);
		func_119(191, joaat("AV_CROSS_ROAD"), (1 << 13), -1, 4, 1);
		func_119(192, joaat("AV_SQUIRREL_CHASE_SQUIRREL"), (1 << 13), 57, 3, 4);
		func_119(193, joaat("AV_CROSS_ROAD"), (1 << 13), 57, 3, 4);
		func_119(194, joaat("AV_RIDGELINE_ANIMAL"), 128, 57, 55, 4);
		func_119(195, joaat("AV_CROSS_ROAD"), 16, -1, 2, 4);
		func_119(197, joaat("AV_CROSS_ROAD"), (1 << 13), -1, 4, 1);
		func_119(196, joaat("AV_RAMS_HEADBUTT"), 8196, 57, 46, 1);
		func_119(198, joaat("AV_RATS_EAT_DEER"), -1, 57, 55, 3);
		func_119(199, joaat("AV_RATS_EATING_GROUP"), -1, 57, 55, 3);
		func_119(200, joaat("AV_FOX_SIT"), 8196, -1, 19, 4);
		func_119(201, joaat("AV_FOX_SIT"), (1 << 13), 57, 18, 4);
		func_119(202, joaat("AV_RIDGELINE_ANIMAL"), (1 << 13), -1, 54, 1);
		func_119(203, joaat("AV_RIDGELINE_ANIMAL"), (1 << 13), -1, 54, 1);
		func_119(204, joaat("AV_RIDGELINE_ANIMAL"), (1 << 13), -1, 44, 1);
		func_119(205, joaat("AV_RIDGELINE_ANIMAL"), (1 << 13), -1, 54, 1);
		func_119(206, joaat("AV_RIDGELINE_ANIMAL"), (1 << 13), -1, 54, 1);
		func_119(207, joaat("AV_RIDGELINE_ANIMAL"), -1, 77, 54, 3);
		func_119(208, joaat("AV_SCAVENGER_ON_ANIMAL"), -1, 57, 56, 1);
		func_119(209, joaat("AV_SEAGULL_CATCH_FISH"), (1 << 13), 57, 30, 1);
		func_119(210, joaat("AV_CROSS_ROAD"), (1 << 13), -1, 4, 1);
		func_119(211, joaat("AV_CROSS_ROAD"), 16, -1, 2, 4);
		func_119(212, joaat("AV_CROSS_ROAD"), (1 << 13), -1, 2, 4);
		func_119(213, joaat("AV_SQUIRREL_CHASE_SQUIRREL"), 2, 57, 2, 4);
		func_119(214, joaat("AV_CROSS_ROAD"), (1 << 13), -1, 2, 4);
		func_119(228, joaat("AV_SWIM_WOLF_CHASE_MOOSE"), (1 << 13), 57, 49, 3);
		func_119(215, joaat("AV_SWIMMING_ANIMAL"), (1 << 13), -1, 63, 4);
		func_119(216, joaat("AV_SWIMMING_ANIMAL"), (1 << 13), -1, 63, 4);
		func_119(217, joaat("AV_SWIMMING_ANIMAL"), -1, -1, 63, 4);
		func_119(218, joaat("AV_SWIMMING_ANIMAL"), (1 << 13), -1, 63, 4);
		func_119(219, joaat("AV_SWIMMING_ANIMAL"), (1 << 13), -1, 63, 4);
		func_119(220, joaat("AV_SWIMMING_ANIMAL"), (1 << 13), -1, 63, 4);
		func_119(221, joaat("AV_SWIMMING_ANIMAL"), (1 << 13), -1, 63, 4);
		func_119(222, joaat("AV_SWIMMING_ANIMAL"), (1 << 13), -1, 63, 4);
		func_119(223, joaat("AV_SWIMMING_ANIMAL"), (1 << 13), -1, 63, 4);
		func_119(224, joaat("AV_SWIMMING_ANIMAL"), 16, -1, 63, 4);
		func_119(225, joaat("AV_SWIMMING_ANIMAL"), 16, -1, 63, 4);
		func_119(226, joaat("AV_SWIMMING_ANIMAL"), -1, -1, 63, 4);
		func_119(227, joaat("AV_SWIMMING_ANIMAL"), (1 << 13), -1, 63, 4);
		func_119(229, joaat("AV_CROSS_ROAD"), 3, -1, 2, 4);
		func_119(232, joaat("AV_FOX_SIT"), 8196, -1, 19, 4);
		func_119(230, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 4);
		func_119(231, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 1);
		func_119(233, joaat("AV_WILD_ANIMAL"), -1, 57, 42, 1);
		func_119(234, joaat("AV_WILD_ANIMAL"), -1, 57, 42, 1);
		func_119(235, joaat("AV_WILD_ANIMAL"), -1, 57, 42, 1);
		func_119(236, joaat("AV_WILD_ANIMAL"), -1, 57, 57, 4);
		func_119(237, joaat("AV_WOLF_AMBUSH_DEER"), 5, 57, 49, 3);
		func_119(238, joaat("AV_WOLF_FLEE_WOLVES"), (1 << 13), 57, 49, 3);
		func_119(239, joaat("AV_DEAD_ANIMAL"), 20, -1, 49, 3);
		func_119(240, joaat("AV_RIDGELINE_ANIMAL"), 20, -1, 50, 3);
		func_119(247, joaat("AV_WOLF_TAKEDOWN_MISS"), 5, 57, 49, 3);
		func_119(242, joaat("AV_WOLVES_EAT_DEER"), (1 << 13), 57, 49, 3);
		func_119(241, joaat("AV_WOLVES_HOWLING"), 20, 57, 50, 3);
		func_119(243, joaat("AV_WOLVES_PLAYING"), (1 << 13), 77, 50, 3);
		func_119(244, joaat("AV_WOLVES_PLAYING"), (1 << 13), 77, 50, 3);
		func_119(245, joaat("AV_WOLVES_PLAYING"), (1 << 13), 77, 50, 3);
		func_119(246, joaat("AV_WOLVES_ALARMED"), (1 << 13), 77, 50, 3);
		func_120(34);
		func_120(2);
		func_120(3);
		func_120(5);
		func_120(47);
		func_120(10);
		func_120(15);
		func_120(16);
		func_120(17);
		func_120(18);
		func_120(19);
		func_120(20);
		func_120(27);
		func_120(29);
		if (!func_121(159))
		{
			if (func_122(joaat("CAROLINA_PARAKEETS")) != 25)
			{
				func_123(159);
			}
		}
	}
	return 1;
}

int func_21()
{
	if (func_115() != -1)
	{
		return 0;
	}
	if (SPACTIONPROXY::_SPACTIONPROXY_MANAGER_IS_READY())
	{
		Global_1955825 = 2;
		func_124(&(Global_1955825.f_1));
		Global_1955825.f_4 = 0;
		return 1;
	}
	if (SPACTIONPROXY::_SPACTIONPROXY_MANAGER_IS_FAILED())
	{
		Global_1955825 = 3;
		func_124(&(Global_1955825.f_1));
		return 1;
	}
	if (Global_1955825 == 0)
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_START_MANAGER())
		{
			Global_1955825 = 3;
			return 1;
		}
		Global_1955825 = 1;
		func_124(&(Global_1955825.f_1));
		return 0;
	}
	if (Global_1955825 == 1)
	{
		if (!func_125(&(Global_1955825.f_1)))
		{
			func_126(&(Global_1955825.f_1), 0);
		}
		else if (func_127(&(Global_1955825.f_1)) > 4000)
		{
			Global_1955825 = 3;
			func_124(&(Global_1955825.f_1));
			return 1;
		}
	}
	return 0;
}

int func_22()
{
	if (!Global_40)
	{
		if (!func_128())
		{
			return 0;
		}
	}
	return 1;
}

int func_23(var uParam0)
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(*uParam0))
	{
		*uParam0 = DATAFILE::_0xD97D8D905F1562F2(joaat("WEATHER_GROUPS"));
		return 0;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam0))
	{
		return 0;
	}
	func_129(uParam0);
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(*uParam0);
	*uParam0 = 0;
	return 1;
}

void func_24(int iParam0, int iParam1)
{
	vLocal_60[iParam0 /*3*/] = iParam1;
	vLocal_60[iParam0 /*3*/].f_1 = 0;
}

void func_25()
{
	if (func_115() != -1)
	{
		return;
	}
	func_130();
	func_131();
	func_132();
	func_133();
	func_134();
	func_135();
	func_136();
}

void func_26(int iParam0)
{
	Global_21 |= iParam0;
}

int func_27()
{
	return 1;
}

int func_28(var uParam0)
{
	return 1;
}

void func_29(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (!func_137(iParam0))
	{
		return;
	}
	if (func_138(iParam0) == 0)
	{
		Global_40.f_4942[iParam0 /*60*/].f_6 = iParam1;
	}
	func_139(iParam0, 20496, 1);
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	if (bParam3)
	{
		func_140(iParam0, (1 << 30), 1);
	}
	if (bParam4)
	{
		func_141(iParam0, 1, 1);
	}
	func_143(iParam0, func_142(iParam0, 3, 1));
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_143 = iParam1;
	Global_1360165[iParam0 /*1157*/].f_143.f_1 = iParam2;
	Global_1360165[iParam0 /*1157*/].f_143.f_2 = iParam3;
}

bool func_31()
{
	int iVar0;

	iVar0 = 1;
	func_144();
	return iVar0;
}

bool func_32()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

void func_33()
{
	PERSCHAR::_0x70605812ABC9FF0F(joaat("MFR_HORSES_PERSCHAR_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("SCM_PERSCHAR_HORSES"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("SDN_HORSE_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("BRA_HORSES_01"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("AMD_HORSES_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("EMR_HORSES_PERSCHAR_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("TBL_RANCH_HORSES"), joaat("ANIMAL_HORSE_CORRAL_SCALED_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("ASB_HORSES_01"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("BLW_HORSES"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("PHR_HORSES_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_2"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_3"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("STR_PERSCHAR_HORSES"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("RID_HORSES_PERSCHAR_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("RID_HORSES_PERSCHAR_2"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("VHT_HORSE_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("VAL_LIVERY_HORSE"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_115() != -1)
	{
		return;
	}
	if (!func_145(iParam0))
	{
		return;
	}
	if (iParam2 != -1)
	{
		func_146(iParam2, &iVar0, &iVar1, 0, 0);
		if (iParam0 < iVar0 || (iParam0 > iVar1 && !func_147(iParam3, (1 << 22))))
		{
			return;
		}
	}
	Global_1895087[iParam0 /*3*/] = iParam1;
	Global_1895087[iParam0 /*3*/].f_1 = 0;
	Global_1895087[iParam0 /*3*/].f_2 = 0;
	func_148(iParam0, 2 | iParam3);
	func_149(iParam0, 137);
	iVar2 = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(iParam1);
	if (iVar2 != 0)
	{
		PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, true);
	}
}

void func_35()
{
	func_150();
	func_151();
	func_152();
	func_153();
	func_154();
	func_155();
	func_156();
	func_157();
	func_158();
	func_159();
}

void func_36()
{
	func_160(0);
	func_161();
	func_162(8, 0, 0, 5, 1, 1899);
	func_163(joaat("PLAYER_ZERO"));
	func_164(0);
	func_165(-75, 100);
	func_166(0, 90);
	func_166(1, 90);
	func_166(2, 90);
	func_167();
	func_168(7, 1);
	func_169(178615350);
	func_170(0, 0);
	func_171(0);
	func_172(joaat("AZL_CAMP_COLTER"), 1, 1);
	func_173(27, 0.3f, 0.0f);
	func_173(11, 0.0f, 0.0f);
	func_173(1, 0.0f, 0.0f);
	func_173(19, -1082130432, 0.0f);
	func_173(0, -1082130432, 0.0f);
	func_173(5, -1082130432, 0.0f);
	func_173(3, -1082130432, 0.0f);
	func_173(2, -1082130432, 0.0f);
	func_173(9, -1082130432, 0.0f);
	func_173(17, -1082130432, 0.0f);
	func_174(45);
	func_174(47);
	func_174(55);
	func_174(33);
	func_174(34);
	func_174(35);
	func_174(36);
	func_174(37);
	func_174(38);
	func_174(39);
	func_174(40);
	func_174(41);
	func_174(42);
	func_174(43);
	func_174(52);
	func_174(53);
	func_174(54);
	func_174(18);
	func_174(19);
	func_174(20);
	func_174(21);
	func_174(22);
	func_174(56);
	func_175(0);
	func_176(0);
	func_176(1);
	func_176(2);
	func_176(3);
	func_176(4);
	func_176(5);
	func_176(6);
	func_176(7);
	func_176(13);
	func_176(14);
	func_176(15);
	func_176(16);
	func_176(17);
	func_176(18);
	func_176(19);
	func_176(20);
	func_176(21);
	func_176(22);
	func_176(9);
	func_177(14, joaat("CS_JACKMARSTON"));
	func_178(4, joaat("A_C_HORSE_GANG_UNCLE"));
	func_177(12, joaat("A_C_DOGCATAHOULACUR_01"));
	func_179(12, -1394723994);
	func_180(4);
	func_180(20);
	func_180(11);
	func_180(5);
	func_180(10);
	func_181(74, joaat("U_M_M_RHDGENSTOREOWNER_01"));
	func_182(13, joaat("TSTAG_ENDLESS_SUMMER"));
	func_183(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"), -518918701, -1);
	func_184();
	func_185(0);
	func_186(38, 1);
	func_186(35, 1);
	func_186(32, 1);
	func_187(4, 1, 0);
	func_187(12, 1, 0);
	func_187(13, 1, 0);
	func_187(14, 1, 0);
	func_187(15, 1, 0);
	func_187(16, 1, 0);
	func_188(945);
	func_189(joaat("A_C_WOLF"));
	func_189(joaat("A_C_WOLF_MEDIUM"));
	func_174(1);
	func_190(11);
	func_191(joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 1, 1, -1);
	func_191(joaat("WEAPON_MELEE_DAVY_LANTERN"), 1, 1, 1, -1);
	func_191(joaat("WEAPON_MELEE_KNIFE"), 1, 1, 1, -1);
	func_192(1, 0);
	func_193(3, 1, -1, 0, 1);
	func_193(20, 1, -1, 0, 1);
	func_194(14);
	func_194(207);
	func_194(227);
	func_194(228);
	func_194(237);
	func_194(238);
	func_194(239);
	func_194(240);
	func_194(241);
	func_194(242);
	func_194(243);
	func_194(244);
	func_194(245);
	func_194(246);
	func_194(247);
	func_195(10);
	func_195(11);
	func_196(0, 1);
	func_196(2, 1);
	func_196(1, 1);
	func_196(5, 1);
	func_196(4, 1);
	func_196(3, 1);
	func_197(0);
	func_198(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_198(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
	func_198(joaat("WS_COLTER_STAGE_SCHOOL_INTERIOR"));
	func_198(joaat("WS_COLTER_STAGE_FIRES_LIT"));
	func_193(11, 1, -1, 0, 1);
	func_176(11);
	func_176(2);
	func_199(11);
	func_171(1);
	func_200(6);
	func_169(178615350);
	func_168(7, 1);
	func_190(23);
	func_190(31);
	func_190(15);
	func_190(18);
	func_190(21);
	func_174(19);
	func_174(20);
	func_174(22);
	func_174(11);
	func_201((1 << 31));
	func_202(joaat("KIT_WARDROBE"), 1);
	func_202(joaat("WEAPON_KIT_BINOCULARS"), 1);
	func_202(joaat("UPGRADE_UPG_COOKING_SPIT"), 1);
	func_202(joaat("KIT_BANDANA"), 1);
	func_202(joaat("KIT_MASK_GREY_CLOTH"), 1);
	func_202(joaat("DOCUMENT_PLAYER_JOURNAL"), 1);
	func_202(joaat("CLOTHING_WINTER_OUTFIT"), 1);
	func_202(joaat("CONSUMABLE_MEDICINE_USED"), 1);
	func_202(joaat("CONSUMABLE_MEDICINE_USED"), 1);
	func_202(joaat("CLOTHING_ITEM_SATCHEL_PZ_000"), 1);
	func_202(joaat("CLOTHING_ITEM_GUNBELT_PZERO_000"), 1);
	func_202(-1992544048, 1);
	func_202(1796687236, 1);
	func_202(joaat("CLOTHING_CUSTOM_ONE_OUTFIT"), 1);
	func_203(joaat("WHITEOUT"), 0);
	func_204();
	func_205();
	func_197(1);
	func_198(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_206((1 << 31));
	func_191(joaat("WEAPON_SHOTGUN_SAWEDOFF"), 1, 1, 1, -1);
	func_191(joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, -1);
	func_190(19);
	func_190(22);
	func_174(20);
	func_180(1);
	func_207(1);
	func_179(1, 404503428);
	func_208(joaat("A_C_WOLF"));
	func_208(joaat("A_C_WOLF_MEDIUM"));
	func_209(joaat("SP_CHAL_BAND_ROOT"));
	func_209(joaat("SP_CHAL_EXPL_ROOT"));
	func_209(joaat("SP_CHAL_GAMB_ROOT"));
	func_209(joaat("SP_CHAL_HERB_ROOT"));
	func_209(joaat("SP_CHAL_HORSE_ROOT"));
	func_209(joaat("SP_CHAL_HUNT_ROOT"));
	func_209(joaat("SP_CHAL_SHOT_ROOT"));
	func_209(joaat("SP_CHAL_WEAP_ROOT"));
	func_210(26);
	func_210(11);
	func_211(1, 0);
	func_211(0, 0);
	func_198(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_197(3);
	func_198(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_191(joaat("WEAPON_THROWN_DYNAMITE"), 1, 1, 1, -1);
	func_212(200);
	func_200(2);
	func_213(0);
	func_213(1);
	func_213(2);
	func_213(3);
	func_213(6);
	func_213(7);
	func_213(5);
	func_213(4);
	func_213(8);
	func_213(9);
	func_213(10);
	func_213(11);
	func_203(joaat("SUNNY"), 0);
	func_210(1);
	func_214(36, 1);
	func_215();
	func_216(0);
}

void func_37()
{
	func_160(1);
	func_161();
	func_171(2);
	func_197(4);
	func_192(2, 1);
	func_192(3, 1);
	func_192(7, 1);
	func_217(0, 0, 0, 14, -1, -1);
	func_218(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 8, joaat("CSTP_NEXT_VISIT"), joaat("CSTAG_PRIORITY_CRITICAL"));
	func_218(joaat("CSTAG_FLOW_MUD1_POST_EVENING"), 12, joaat("CSTP_NEXT_VISIT"), -469960592);
	func_219(0);
	func_220(0);
	func_202(joaat("CLOTHING_GUNSLINGER_OUTFIT"), 1);
	func_202(joaat("CLOTHING_ROBBERY_OUTFIT"), 1);
	func_202(joaat("CLOTHING_WARM_WEATHER_OUTFIT"), 1);
	func_202(joaat("CLOTHING_OUTFIT_OWNED_001"), 1);
	func_202(joaat("CLOTHING_OUTFIT_OWNED_002"), 1);
	func_202(joaat("CLOTHING_OUTFIT_OWNED_003"), 1);
	func_202(joaat("CLOTHING_OUTFIT_OWNED_005"), 1);
	func_202(joaat("CLOTHING_OUTFIT_OWNED_006"), 1);
	func_202(joaat("CLOTHING_HL_PLAYER_BOOT_012_11"), 1);
	func_202(joaat("CLOTHING_HL_PLAYER_BOOT_020_1"), 1);
	func_202(joaat("CLOTHING_HL_PLAYER_COAT_021_2"), 1);
	func_202(joaat("CLOTHING_HL_PLAYER_HAT_004_11"), 1);
	func_202(-1391892422, 1);
	func_202(962344255, 1);
	func_202(joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"), 1);
	func_168(6, 1);
	func_191(joaat("WEAPON_PISTOL_VOLCANIC"), 0, 1, 0, -1);
	func_191(joaat("WEAPON_RIFLE_SPRINGFIELD"), 0, 1, 0, -1);
	func_191(joaat("WEAPON_RIFLE_VARMINT"), 0, 1, 0, 526);
	func_221(joaat("CLOTHING_WINTER_OUTFIT"), 1);
	func_221(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"), 1);
	func_169(-268604689);
	func_173(27, -1082130432, -1082130432);
	func_173(11, 0.1f, -1082130432);
	func_222(48);
	func_170(1, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_COLTER"), 0, 1);
	func_172(joaat("AZL_CAMP_HORSESHOE_OVERLOOK"), 1, 1);
	func_223(711);
	func_224(1230);
	func_225(1);
	func_225(5);
	func_225(20);
	func_225(4);
	func_190(33);
	func_190(34);
	func_190(35);
	func_190(37);
	func_190(38);
	func_190(39);
	func_190(40);
	func_190(41);
	func_190(43);
	func_190(26);
	func_190(11);
	func_190(16);
	func_190(17);
	func_226(194, 0);
	func_198(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
	func_198(joaat("WS_TAXIDERMY_NOTICES"));
	func_227(joaat("WS_COLTER_STAGE_FIRES_LIT"));
	func_207(0);
	func_207(1);
	func_207(4);
	func_207(5);
	func_207(13);
	func_207(14);
	func_207(15);
	func_207(16);
	func_207(17);
	func_207(18);
	func_207(19);
	func_207(20);
	func_207(22);
	func_207(11);
	func_192(6, 1);
	func_192(9, 1);
	func_192(21, 1);
	func_198(joaat("WS_MICAH_CAMP"));
	func_203(joaat("MISTY"), 0);
	func_228(0);
	func_228(1);
	func_228(9);
	func_228(5);
	func_228(6);
	func_190(12);
	func_195(207);
	func_195(227);
	func_195(228);
	func_195(237);
	func_195(238);
	func_195(239);
	func_195(241);
	func_195(240);
	func_195(242);
	func_195(243);
	func_195(244);
	func_195(245);
	func_195(246);
	func_195(247);
	func_229(65);
	func_229(10);
	func_229(12);
	func_229(24);
	func_229(31);
	func_229(9);
	func_230(111, 1);
	func_230(66, 1);
	func_231(0, 1);
	func_232(4);
	func_233(1);
	func_233(0);
	func_233(3);
	func_210(5);
	func_234(101);
	func_234(135);
	func_234(39);
	func_234(49);
	func_234(146);
	func_234(143);
	func_234(81);
	func_210(3);
	func_210(31);
	func_210(30);
	func_182(13, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_183(13, 623901469, 820723243, -1);
	func_235(5);
	func_192(6, 0);
	func_192(9, 0);
	func_207(3);
	func_228(3);
	func_182(13, 623901469);
	func_183(13, joaat("TSTAG_LOCKDOWN_SALOON"), -2120502580, 48);
	func_193(3, 2, 6, 0, 1);
	func_200(1);
	func_190(29);
	func_212(100);
	func_210(23);
	func_210(25);
	func_236(2, 0, 0);
	func_198(joaat("WS_SEAN_1_TENT"));
	func_235(13);
	func_227(joaat("WS_SEAN_1_TENT"));
	func_191(joaat("WEAPON_THROWN_TOMAHAWK"), 1, 1, 1, 523);
	func_176(8);
	func_228(8);
	func_207(2);
	func_207(7);
	func_228(2);
	func_228(7);
	func_176(2);
	func_176(7);
	func_237(8, 0);
	func_211(100, 0);
	func_211(9, 0);
	func_211(5, 0);
	func_211(11, 0);
	func_183(13, -1132827806, 820723243, -1);
	func_207(5);
	func_235(14);
	func_182(13, -1132827806);
	func_193(11, 2, -1, 0, 1);
	func_193(0, 2, 0, 1, 1);
	func_193(1, 1, 0, 1, 1);
	func_193(18, 1, 0, 3, 1);
	func_230(111, 4);
	func_230(66, 4);
	func_220(2);
	func_191(joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"), 1, 1, 0, -1);
	func_207(1);
	func_228(1);
	func_212(100);
	func_238(76, 1, 1720);
	func_237(6, 0);
	func_211(7, 0);
	func_210(6);
	func_211(34, 0);
	func_236(1, 0, 0);
	func_211(28, 0);
	func_235(24);
	func_193(20, 4, 0, 2, 1);
	func_193(3, 4, 0, 2, 1);
	func_193(9, 4, 0, 2, 1);
	func_237(35, 0);
	func_238(76, 1, 1720);
	func_198(joaat("WS_DOWNS_RANCH_EMPTY"));
	func_198(joaat("WS_THOMAS_DOWNES"));
	func_215();
	func_216(1);
}

void func_38()
{
	func_160(2);
	func_161();
	func_182(13, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_183(13, -1751068532, 820723243, -1);
	func_235(9);
	func_182(13, -1751068532);
	func_239(7, 7, -2);
	func_240(4, 5);
	func_241(7, 1);
	func_207(9);
	func_193(9, 4, 0, 1, 1);
	func_210(24);
	func_230(39, 1);
	func_235(11);
	func_230(39, 4);
	func_227(joaat("WS_STRAWBERRY_JAIL_INTACT"));
	func_198(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
	func_238(26, 1, 1320);
	func_242(1, 0);
	func_191(joaat("WEAPON_REVOLVER_SCHOFIELD"), 0, 1, 0, 525);
	func_202(joaat("UPGRADE_OFFHAND_HOLSTER"), 1);
	func_212(55);
	func_237(4, 0);
	func_236(12, 0, 0);
	func_211(103, 0);
	func_243(5, 1);
	func_244(-2, 0);
	func_241(12, 1);
	func_235(12);
	func_191(joaat("WEAPON_REPEATER_WINCHESTER"), 1, 1, 0, -1);
	func_212(100);
	func_207(6);
	func_198(joaat("WS_UTOPIA_TREE_FALLEN"));
	func_198(joaat("WS_STRAWBERRY_JAIL_INTACT"));
	func_198(joaat("WS_MICAH_CAMP_POST"));
	func_193(6, 4, 0, 2, 1);
	func_193(0, 4, 0, 1, 1);
	func_237(25, 0);
	func_245(1, 1);
	func_215();
	func_216(2);
}

void func_39()
{
	func_160(3);
	func_161();
	func_235(6);
	func_193(20, 0, -1, 0, 1);
	func_210(4);
	func_212(100);
	func_246(2);
	func_200(5);
	func_190(8);
	func_211(8, 0);
	func_211(15, 0);
	func_234(112);
	func_247(112);
	func_192(1, 0);
	func_237(103, 0);
	func_234(113);
	func_247(113);
	func_207(1);
	func_234(114);
	func_247(114);
	func_237(16, 0);
	func_248(596);
	func_192(8, 1);
	func_236(1, 0, 0);
	func_235(25);
	func_191(joaat("WEAPON_SHOTGUN_PUMP"), 0, 1, 0, 523);
	func_190(2);
	func_207(8);
	func_192(1, 0);
	func_236(1, 0, 0);
	func_237(9, 0);
	func_220(1);
	func_215();
	func_216(3);
}

void func_40()
{
	func_160(4);
	func_161();
	func_241(5, 1);
	func_239(9, -2, 6);
	func_249(7);
	func_236(2, 0, 0);
	func_241(6, 1);
	func_182(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"));
	func_235(7);
	func_226(114, 0);
	func_200(0);
	func_234(11);
	func_234(12);
	func_234(13);
	func_234(14);
	func_211(24, 0);
	func_234(15);
	func_241(32, 1);
	func_249(7);
	func_215();
	func_216(4);
}

void func_41()
{
	func_160(5);
	func_161();
	func_192(21, 0);
	func_235(10);
	func_207(21);
	func_193(21, 1, 0, 3, 1);
	func_237(2, 0);
	func_234(38);
	func_212(55);
	func_233(2);
	func_198(joaat("WS_SWA_CHAIRS_REGULAR"));
	func_239(22, -2, -1);
	func_243(5, 1);
	func_237(31, 0);
	func_215();
	func_216(5);
}

void func_42()
{
	func_160(29);
	func_161();
	func_211(13, 0);
	func_234(97);
	func_247(97);
	func_250(61, 2, 12, 10);
	func_251(62, 10, -2);
	func_240(25, 9);
	func_241(10, 1);
	func_237(15, 0);
	func_234(98);
	func_247(98);
	func_198(joaat("WS_CHELONIAN_CAMP"));
	func_252(98, 0, 27, -2);
	func_235(8);
	func_241(27, 1);
	func_253(98);
	func_249(8);
	func_237(11, 0);
	func_211(40, 0);
	func_234(99);
	func_247(99);
	func_235(36);
	func_241(25, 1);
	func_253(99);
	func_249(36);
	func_198(joaat("WS_CHELONIAN_CAMP"));
	func_215();
	func_216(29);
}

void func_43()
{
	func_160(31);
	func_161();
	func_254(joaat("COMPLETED"), joaat("MISSIONS_CHP2"), 1, -1);
	func_235(15);
	func_202(joaat("KIT_HORSE_BRUSH"), 1);
	func_193(5, 1, 0, 1, 1);
	func_237(37, 0);
	func_190(30);
	func_190(42);
	func_210(27);
	func_211(47, 0);
	func_254(joaat("COMPLETED"), joaat("MISSIONS_CHP3"), 2, -1);
	func_234(57);
	func_215();
	func_216(31);
}

void func_44()
{
	func_160(6);
	func_161();
	func_164(1);
	func_198(joaat("WS_FEUD1_WATER_TOWER_UP"));
	func_235(16);
	func_190(44);
	func_198(joaat("WS_FEUD1_WATER_TOWER_UP"));
	func_207(5);
	func_193(0, 4, -1, 3, 1);
	func_193(5, 4, -1, 3, 1);
	func_234(89);
	func_234(95);
	func_234(138);
	func_207(18);
	func_255(5);
	func_210(28);
	func_210(18);
	func_192(0, 0);
	func_192(3, 0);
	func_236(3, 0, 0);
	func_235(17);
	func_245(0, 1);
	func_245(1, 1);
	func_238(76, 0, 350);
	func_234(11);
	func_234(12);
	func_234(14);
	func_234(13);
	func_207(0);
	func_207(3);
	func_256(23);
	func_193(0, 4, 0, 1, 1);
	func_193(3, 4, 0, 1, 1);
	func_212(100);
	func_222(48);
	func_193(3, 4, 12, 0, 1);
	func_237(47, 0);
	func_237(23, 0);
	func_237(28, 0);
	func_230(64, 1);
	func_211(29, 0);
	func_241(2, 1);
	func_239(20, -2, 3);
	func_249(19);
	func_236(1, 0, 0);
	func_241(3, 1);
	func_235(19);
	func_198(joaat("WS_CLAY_EXIST"));
	func_212(100);
	func_207(1);
	func_207(2);
	func_211(30, 0);
	func_211(27, 0);
	func_211(18, 0);
	func_211(20, 0);
	func_198(joaat("WS_RHODES_GRAYS3_COVER_ON"));
	func_253(95);
	func_235(21);
	func_174(44);
	func_227(joaat("WS_RHODES_SHERIFF_LOCKED"));
	func_227(joaat("WS_RHODES_GRAYS3_COVER_ON"));
	func_238(105, 1, 1720);
	func_238(95, 1, 990);
	func_212(100);
	func_253(138);
	func_237(32, 0);
	func_257(8);
	func_198(joaat("WS_GRAVE_SEAN"));
	func_226(567, 0);
	func_215();
	func_216(6);
}

void func_45()
{
	func_160(7);
	func_161();
	func_164(2);
	func_192(5, 1);
	func_192(1, 1);
	func_182(8, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_235(18);
	func_183(8, joaat("TSTAG_LOCKDOWN_SALOON"), 977356591, 48);
	func_212(100);
	func_192(2, 0);
	func_192(8, 0);
	func_237(29, 0);
	func_210(8);
	func_198(joaat("WS_UTOPIA_TREE_STUMP"));
	func_258(21);
	func_244(0, 0);
	func_241(4, 1);
	func_249(20);
	func_236(2, 0, 0);
	func_241(0, 1);
	func_235(20);
	func_207(8);
	func_207(5);
	func_182(8, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_193(8, 4, 0, 1, 1);
	func_212(100);
	func_198(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
	func_191(joaat("WEAPON_THROWN_MOLOTOV"), 1, 1, 1, 523);
	func_239(19, 1, -2);
	func_240(6, 2);
	func_241(1, 1);
	func_237(30, 0);
	func_237(22, 0);
	func_237(24, 0);
	func_211(32, 0);
	func_192(14, 0);
	func_192(19, 0);
	func_192(15, 0);
	func_192(22, 0);
	func_192(17, 0);
	func_192(4, 0);
	func_192(21, 0);
	func_192(20, 0);
	func_192(11, 0);
	func_227(joaat("WS_CLEMENS_POINT_BARREL"));
	func_235(26);
	func_207(19);
	func_207(15);
	func_207(22);
	func_207(17);
	func_207(4);
	func_207(21);
	func_207(20);
	func_207(11);
	func_212(100);
	func_198(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
	func_198(joaat("WS_CLEMENS_POINT_BARREL"));
	func_198(joaat("WS_RHODES_SALOON_POST_BRAITHWAITES"));
	func_183(3, -586199837, 820723243, -1);
	func_217(0, 0, 0, 2, -1, -1);
	func_237(33, 0);
	func_215();
	func_216(7);
}

void func_46()
{
	func_160(8);
	func_161();
	func_235(22);
	func_220(3);
	func_191(joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"), 1, 0, 0, -1);
	func_259(2, 7, 4);
	func_237(26, 0);
	func_207(23);
	func_211(31, 0);
	func_234(37);
	func_247(37);
	func_193(23, 4, -1, 0, 1);
	func_212(100);
	func_200(3);
	func_237(27, 0);
	func_215();
	func_216(8);
}

void func_47()
{
	func_160(10);
	func_161();
	func_164(3);
	func_234(106);
	func_234(107);
	func_235(27);
	func_207(18);
	func_253(106);
	func_253(107);
	func_234(77);
	func_220(4);
	func_191(joaat("WEAPON_PISTOL_SEMIAUTO"), 0, 1, 0, 523);
	func_234(30);
	func_171(1);
	func_210(9);
	func_237(51, 0);
	func_234(53);
	func_234(127);
	func_237(44, 0);
	func_183(9, -529686691, -2120502580, -1);
	func_235(28);
	func_192(10, 0);
	func_192(3, 0);
	func_182(9, -529686691);
	func_212(100);
	func_198(joaat("WS_NBX_MAUSOLEUM_PLUNDERED"));
	func_210(12);
	func_207(14);
	func_237(40, 0);
	func_211(54, 0);
	func_211(45, 0);
	func_164(4);
	func_192(0, 0);
	func_192(9, 0);
	func_235(29);
	func_207(0);
	func_207(9);
	func_190(3);
	func_198(joaat("WS_MOB3_TROLLEY_DAMAGE"));
	func_212(100);
	func_220(5);
	func_236(1, 0, 0);
	func_235(30);
	func_212(100);
	func_236(1, 0, 0);
	func_222(1);
	func_235(31);
	func_212(100);
	func_237(56, 0);
	func_215();
	func_216(10);
}

void func_48()
{
	func_160(12);
	func_161();
	func_235(33);
	func_207(3);
	func_192(23, 0);
	func_192(0, 0);
	func_237(54, 0);
	func_237(50, 0);
	func_237(43, 0);
	func_171(1);
	func_234(43);
	func_234(109);
	func_235(34);
	func_212(100);
	func_191(joaat("WEAPON_SHOTGUN_SEMIAUTO"), 0, 1, 0, 523);
	func_234(110);
	func_234(56);
	func_237(52, 0);
	func_211(56, 0);
	func_211(49, 0);
	func_192(14, 0);
	func_192(15, 0);
	func_192(16, 0);
	func_192(17, 0);
	func_192(19, 0);
	func_192(20, 0);
	func_192(21, 0);
	func_192(22, 0);
	func_192(11, 0);
	func_235(37);
	func_253(139);
	func_212(100);
	func_227(joaat("WS_NBX_MAUSOLEUM_PLUNDERED"));
	func_227(joaat("WS_ANTENOR_DOCKED"));
	func_257(5);
	func_257(9);
	func_198(joaat("WS_GRAVE_HOSEA"));
	func_198(joaat("WS_GRAVE_LENNY"));
	func_192(7, 0);
	func_192(1, 0);
	func_192(4, 0);
	func_192(13, 0);
	func_192(18, 0);
	func_192(12, 0);
	func_217(0, 0, 0, 4, -1, -1);
	func_210(13);
	func_215();
	func_216(12);
}

void func_49()
{
	func_160(9);
	func_161();
	func_192(22, 0);
	func_192(19, 0);
	func_235(35);
	func_207(22);
	func_207(19);
	func_237(46, 0);
	func_215();
	func_216(9);
}

void func_50()
{
	func_160(11);
	func_161();
	func_235(2);
	func_190(32);
	func_190(14);
	func_191(joaat("WEAPON_REPEATER_CARBINE"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_LASSO"), 1, 1, 1, -1);
	func_176(10);
	func_190(1);
	func_190(20);
	func_237(0, 0);
	func_211(22, 0);
	func_211(26, 0);
	func_211(35, 0);
	func_235(23);
	func_217(0, 0, 0, 7, -1, -1);
	func_198(joaat("WS_LONE_MULE_CELLAR_DOORS_OPEN"));
	func_237(18, 0);
	func_211(46, 0);
	func_211(43, 0);
	func_236(2, 0, 0);
	func_207(0);
	func_235(32);
	func_192(0, 0);
	func_257(10);
	func_198(joaat("WS_GRAVE_KIERAN"));
	func_260(2, 3);
	func_237(45, 0);
	func_237(42, 0);
	func_211(79, 0);
	func_192(0, 0);
	func_235(47);
	func_190(5);
	func_202(joaat("WEAPON_KIT_BINOCULARS"), 1);
	func_191(joaat("WEAPON_REPEATER_HENRY"), 0, 1, 0, -1);
	func_191(joaat("WEAPON_SNIPERRIFLE_CARCANO"), 0, 1, 0, 526);
	func_237(72, 0);
	func_237(80, 0);
	func_215();
	func_216(11);
}

void func_51()
{
	func_160(13);
	func_161();
	func_164(5);
	func_261(-50);
	func_165(-100, 75);
	func_169(1593315648);
	func_198(joaat("WS_GUARMA_EXISTS"));
	func_198(joaat("WS_GUARMA3_TOWER_NORMAL"));
	func_214(9, 0);
	func_262(1);
	func_185(1);
	func_170(4, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_SHADY_BELLE"), 0, 1);
	func_172(joaat("AZL_CAMP_GUARMA"), 1, 1);
	func_173(27, 0.1f, 0.1f);
	func_263(1);
	func_168(10, 1);
	func_197(38);
	func_164(6);
	func_207(6);
	func_207(3);
	func_230(6, 1);
	func_192(0, 0);
	func_192(2, 0);
	func_197(39);
	func_264(5, 1);
	func_186(57, 1);
	func_186(61, 1);
	func_192(18, 1);
	func_192(3, 1);
	func_168(11, 1);
	func_202(joaat("WEAPON_RIFLE_BOLTACTION"), 1);
	func_202(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 1);
	func_202(joaat("WEAPON_MELEE_KNIFE"), 1);
	func_202(joaat("WEAPON_KIT_BINOCULARS"), 1);
	func_202(joaat("WEAPON_KIT_CAMERA"), 1);
	func_210(14);
	func_235(40);
	func_186(57, 1);
	func_186(61, 1);
	func_207(2);
	func_237(58, 0);
	func_211(57, 0);
	func_164(7);
	func_197(43);
	func_198(joaat("WS_GUARMA3_TOWER_DESTROYED"));
	func_198(joaat("WS_GUARMA3_ARTILLERY_01_DESTROYED"));
	func_227(joaat("WS_GUARMA3_GUARDS_DISABLED"));
	func_198(joaat("WS_RHODES_TRELAWNY_WAGON_ABANDONED"));
	func_230(6, 4);
	func_217(0, 0, 0, 4, -1, -1);
	func_210(15);
	func_198(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
	func_198(joaat("WS_DOWNS_RANCH_REPOPULATED"));
	func_198(joaat("WS_DROUGHT_ENDED"));
	func_227(joaat("WS_MOB3_TROLLEY_DAMAGE"));
	func_190(6);
	func_264(5, 0);
	func_238(105, 0, 350);
	func_238(5, 0, 350);
	func_238(78, 0, 350);
	func_238(26, 0, 350);
	func_238(92, 0, 350);
	func_238(65, 0, 350);
	func_238(69, 0, 350);
	func_238(93, 0, 350);
	func_238(95, 0, 350);
	func_238(3, 0, 350);
	func_238(82, 0, 350);
	func_238(56, 0, 350);
	func_238(22, 0, 350);
	func_238(37, 0, 350);
	func_238(110, 0, 350);
	func_238(39, 0, 350);
	func_237(60, 0);
	func_215();
	func_216(13);
}

void func_52()
{
	func_160(14);
	func_161();
	func_235(41);
	func_211(58, 0);
	func_197(42);
	func_227(joaat("WS_CINCO_TORRES_DOOR_INTACT"));
	func_237(57, 0);
	func_215();
	func_216(14);
}

void func_53()
{
	func_160(15);
	func_161();
	func_192(0, 0);
	func_192(6, 0);
	func_192(2, 0);
	func_192(3, 0);
	func_192(18, 0);
	func_192(12, 0);
	func_227(joaat("WS_GUARMA_EXISTS"));
	func_265(1);
	func_185(0);
	func_169(-922193456);
	func_179(11, -2051275045);
	func_222(48);
	func_170(5, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_GUARMA"), 0, 1);
	func_172(joaat("AZL_CAMP_LAKAY"), 1, 1);
	func_173(27, -1082130432, -1082130432);
	func_164(8);
	func_198(joaat("WS_LAK_BUNKHOUSE_SHOOT_THROUGH"));
	func_211(61, 0);
	func_204();
	func_205();
	func_197(44);
	func_190(52);
	func_190(4);
	func_203(0, 0);
	func_168(9, 1);
	func_227(joaat("WS_LAK_BUNKHOUSE_SHOOT_THROUGH"));
	func_258(83);
	func_220(6);
	func_198(joaat("WS_SHADY_BELLE_ABANDON"));
	func_207(7);
	func_207(4);
	func_207(13);
	func_207(14);
	func_207(15);
	func_207(17);
	func_207(18);
	func_207(19);
	func_207(20);
	func_207(21);
	func_207(22);
	func_207(11);
	func_207(0);
	func_207(6);
	func_207(2);
	func_207(3);
	func_207(12);
	func_263(0);
	func_228(11);
	func_234(121);
	func_214(9, 1);
	func_198(joaat("WS_SHADY_BELLE_HIDEOUT"));
	func_237(69, 0);
	func_237(62, 0);
	func_235(45);
	func_186(32, 1);
	func_192(13, 0);
	func_192(11, 0);
	func_236(1, 0, 0);
	func_211(78, 0);
	func_235(46);
	func_192(0, 0);
	func_192(6, 0);
	func_187(0, 1, 1);
	func_187(2, 1, 1);
	func_187(10, 1, 1);
	func_207(13);
	func_207(11);
	func_192(3, 0);
	func_186(32, 1);
	func_220(7);
	func_191(joaat("WEAPON_SHOTGUN_REPEATING"), 0, 1, 0, 523);
	func_207(1);
	func_179(1, -922193456);
	func_237(65, 0);
	func_266(0, 8);
	func_237(76, 0);
	func_215();
	func_216(15);
}

void func_54()
{
	func_160(17);
	func_161();
	func_192(7, 0);
	func_235(50);
	func_190(53);
	func_198(joaat("WS_CRASHED_BOAT"));
	func_210(16);
	func_237(79, 0);
	func_211(80, 0);
	func_192(0, 0);
	func_235(51);
	func_190(54);
	func_198(joaat("WS_WAPITI_TENT_OPEN"));
	func_198(joaat("WS_NATIVE_SON2_TREE_FALLEN"));
	func_211(75, 0);
	func_207(0);
	func_235(52);
	func_198(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
	func_186(35, 1);
	func_220(9);
	func_190(56);
	func_237(66, 0);
	func_215();
	func_216(17);
}

void func_55()
{
	func_160(16);
	func_161();
	func_198(joaat("WS_NATIVE1_ARMY_CAMP"));
	func_198(joaat("WS_NATIVE1_COH_DESTROYED"));
	func_267(50, 0, 33, -2);
	func_235(48);
	func_252(108, 0, 33, -2);
	func_234(108);
	func_247(108);
	func_241(33, 1);
	func_267(50, 0, 34, -2);
	func_252(108, 0, -2, 35);
	func_241(34, 1);
	func_236(6, 0, 0);
	func_241(35, 1);
	func_192(0, 0);
	func_192(6, 0);
	func_235(49);
	func_237(75, 0);
	func_240(28, 11);
	func_227(joaat("WS_SADIE_BEDROLL"));
	func_190(54);
	func_192(21, 1);
	func_207(6);
	func_192(23, 1);
	func_211(73, 0);
	func_211(67, 0);
	func_211(66, 0);
	func_207(0);
	func_240(26, 26);
	func_164(10);
	func_172(joaat("AZ_CAMP_DARK_MOOD_ZONE"), 1, 0);
	func_235(58);
	func_198(joaat("WS_NO_OIL_DELIVERY_WAGONS"));
	func_240(24, 31);
	func_240(25, 30);
	func_198(joaat("WS_GRAVE_EAGLE_FLIES"));
	func_192(7, 0);
	func_237(68, 0);
	func_215();
	func_216(16);
}

void func_56()
{
	func_160(18);
	func_161();
	func_268(0, 4, 1);
	func_235(53);
	func_193(16, 1, 0, 3, 1);
	func_193(4, 4, 0, 1, 1);
	func_198(joaat("WS_CRN1_BURNT_BARN"));
	func_234(136);
	func_268(1, 4, 2);
	func_234(76);
	func_247(76);
	func_193(9, 4, 0, 2, 1);
	func_260(2, 3);
	func_214(9, 0);
	func_237(34, 0);
	func_191(joaat("WEAPON_RIFLE_BOLTACTION"), 1, 1, 0, -1);
	func_211(76, 0);
	func_198(joaat("WS_TRAINROB1_SHOOTOUT"));
	func_235(54);
	func_227(joaat("WS_TRAINROB1_SHOOTOUT"));
	func_171(1);
	func_210(17);
	func_207(0);
	func_207(6);
	func_237(71, 0);
	func_211(65, 0);
	func_235(55);
	func_207(3);
	func_236(2, 0, 0);
	func_235(56);
	func_198(joaat("WS_BACCHUS_BRIDGE_DESTROYED"));
	func_269(0);
	func_269(1);
	func_269(2);
	func_269(3);
	func_269(7);
	func_237(67, 0);
	func_220(8);
	func_195(14);
	func_211(68, 0);
	func_270(23);
	func_270(17);
	func_270(21);
	func_192(20, 0);
	func_192(15, 0);
	func_192(4, 0);
	func_235(57);
	func_192(13, 0);
	func_192(14, 0);
	func_210(19);
	func_215();
	func_216(18);
}

void func_57()
{
	func_160(19);
	func_161();
	func_270(0);
	func_270(1);
	func_270(2);
	func_270(3);
	func_270(4);
	func_270(5);
	func_270(6);
	func_270(7);
	func_270(8);
	func_270(9);
	func_270(11);
	func_270(15);
	func_270(16);
	func_270(17);
	func_270(18);
	func_270(19);
	func_270(20);
	func_270(21);
	func_270(22);
	func_270(23);
	func_192(13, 0);
	func_192(14, 0);
	func_192(12, 0);
	func_192(24, 0);
	func_192(25, 0);
	func_186(35, 1);
	func_186(32, 1);
	func_186(38, 0);
	func_187(4, 0, 0);
	func_187(12, 0, 0);
	func_187(13, 0, 0);
	func_187(14, 0, 0);
	func_187(15, 0, 0);
	func_187(16, 0, 0);
	func_187(0, 0, 0);
	func_187(2, 0, 0);
	func_187(10, 0, 0);
	func_271(945);
	func_171(2);
	func_197(59);
	func_172(joaat("AZ_CAMP_DARK_MOOD_ZONE"), 0, 0);
	func_263(1);
	func_227(joaat("WS_BACCHUS_BRIDGE_DESTROYED"));
	func_213(0);
	func_213(1);
	func_213(2);
	func_213(3);
	func_213(7);
	func_238(95, 0, 350);
	func_238(93, 0, 350);
	func_174(26);
	func_174(46);
	func_198(joaat("WS_PRONGHORN_RANCH_EXIST"));
	func_198(joaat("WS_SAINTDENIS_MAGIC_LANTERN_ES"));
	func_210(20);
	func_211(88, 0);
	func_272(0);
	func_178(11, joaat("A_C_HORSE_TURKOMAN_DARKBAY"));
	func_235(76);
	func_198(joaat("WS_MICAH_HIDEOUT"));
	func_198(joaat("WS_MICAH_HIDEOUT_ABANDON"));
	func_197(77);
	func_220(13);
	func_192(7, 0);
	func_207(13);
	func_207(14);
	func_207(4);
	func_207(12);
	func_214(36, 0);
	func_234(52);
	func_198(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
	func_273();
	func_241(39, 1);
	func_215();
	func_216(19);
}

void func_58()
{
	func_160(20);
	func_161();
	func_163(joaat("PLAYER_THREE"));
	func_274();
	func_164(0);
	func_191(joaat("WEAPON_REPEATER_HENRY"), 1, 1, 0, -1);
	func_272(1);
	func_168(61, 0);
	func_177(14, joaat("CS_JACKMARSTON_TEEN"));
	func_177(12, joaat("A_C_DOGRUFUS_01"));
	func_178(7, joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"));
	func_178(11, joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"));
	func_178(4, joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"));
	func_179(14, -268604689);
	func_198(joaat("WS_BEECHERS_SHACK"));
	func_273();
	func_214(79, 1);
	func_198(joaat("WS_HIDEOUT_HANGING_DOG_ENDLESS"));
	func_198(joaat("WS_HIDEOUT_BEAVER_HOLLOW_ENDLESS"));
	func_198(joaat("WS_GRAVE_SUSAN"));
	func_198(joaat("WS_ROCKY_SEVEN_ENDLESS"));
	func_198(joaat("WS_RHODES_ENDLESS_SUMMER"));
	func_198(joaat("WS_STRAWBERRY_TOURISTS_ENDLESS_SUMMER"));
	func_198(joaat("WS_CALIGA_HALL_TABACCO_START"));
	func_198(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
	func_227(joaat("WS_NATIVE1_ARMY_CAMP"));
	func_227(joaat("WS_NATIVE_SON2_TREE_FALLEN"));
	func_198(joaat("WS_FIN2_EXT_P19_FRAMES"));
	func_198(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
	func_227(joaat("WS_CRASHED_BOAT"));
	func_166(0, 90);
	func_166(1, 90);
	func_166(2, 90);
	func_183(13, joaat("TSTAG_ENDLESS_SUMMER"), -1784359682, -1);
	func_181(74, joaat("CS_MRPEARSON"));
	func_194(10);
	func_194(11);
	func_198(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
	func_198(joaat("WS_ORCHIDS_APPLESEED"));
	func_222(48);
	func_170(7, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_BEAVER_HOLLOW"), 0, 1);
	func_172(joaat("AZL_CAMP_PRONGHORN_RANCH"), 1, 1);
	func_172(joaat("AZL_PRONGHORN_RANCH"), 1, 1);
	func_198(joaat("WS_PRONGHORN_GEDDES_UNAVAILABLE"));
	func_175(0);
	func_162(8, 0, 0, 18, 5, 1907);
	func_275();
	func_260(0, 5);
	func_260(2, 2);
	func_260(1, 2);
	func_260(5, 2);
	func_204();
	func_205();
	func_190(45);
	func_174(16);
	func_197(60);
	func_202(joaat("WEAPON_LASSO"), 1);
	func_202(joaat("WEAPON_MELEE_KNIFE"), 1);
	func_220(10);
	func_227(joaat("WS_PRONGHORN_GEDDES_UNAVAILABLE"));
	func_235(61);
	func_207(13);
	func_207(14);
	func_227(joaat("WS_PRONGHORN_GEDDES_UNAVAILABLE"));
	func_210(21);
	func_235(63);
	func_211(97, 0);
	func_197(64);
	func_237(98, 0);
	func_235(66);
	func_198(joaat("WS_PRONGHORN_RANCH_BURNED"));
	func_260(4, 3);
	func_168(62, 0);
	func_211(95, 0);
	func_192(13, 1);
	func_192(14, 1);
	func_197(67);
	func_263(0);
	func_190(46);
	func_190(16);
	func_202(joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"), 1);
	func_202(joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM"), 1);
	func_202(joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER"), 1);
	func_202(joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT"), 1);
	func_202(890706995, 1);
	func_168(62, 1);
	func_168(65, 0);
	func_168(70, 0);
	func_168(91, 0);
	func_168(93, 0);
	func_202(-1515874150, 1);
	func_202(1082956942, 1);
	func_202(-1282334963, 1);
	func_272(0);
	func_237(90, 0);
	func_210(22);
	func_234(51);
	func_234(42);
	func_234(71);
	func_234(126);
	func_234(100);
	func_211(91, 0);
	func_170(8, 0);
	func_171(1);
	func_198(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
	func_172(joaat("AZL_CAMP_PRONGHORN_RANCH"), 0, 1);
	func_172(joaat("AZL_PRONGHORN_RANCH"), 0, 1);
	func_172(joaat("AZL_CAMP_BEECHERS_HOPE"), 1, 1);
	func_172(joaat("AZL_BEECHERS_HOPE"), 1, 1);
	func_211(102, 0);
	func_235(73);
	func_198(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_273();
	func_176(7);
	func_237(92, 0);
	func_237(83, 0);
	func_211(93, 0);
	func_198(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_273();
	func_211(85, 0);
	func_234(145);
	func_235(74);
	func_260(3, 3);
	func_198(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_273();
	func_235(68);
	func_237(96, 0);
	func_198(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_273();
	func_211(94, 0);
	func_198(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_273();
	func_235(75);
	func_233(5);
	func_198(joaat("WS_TAXIDERMY_MARITAL"));
	func_237(89, 0);
	func_215();
	func_216(20);
}

void func_59()
{
	func_160(21);
	func_161();
	func_235(62);
	func_237(97, 0);
	func_198(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
	func_211(98, 0);
	func_235(65);
	func_237(95, 0);
	func_215();
	func_216(21);
}

void func_60()
{
	func_160(22);
	func_161();
	func_235(69);
	func_237(102, 0);
	func_200(0);
	func_234(17);
	func_234(18);
	func_234(16);
	func_234(20);
	func_234(19);
	func_211(83, 0);
	func_235(72);
	func_237(85, 0);
	func_211(96, 0);
	func_235(70);
	func_237(94, 0);
	func_211(86, 0);
	func_235(71);
	func_237(99, 0);
	func_215();
	func_216(22);
}

void func_61()
{
	func_160(23);
	func_161();
	func_234(63);
	func_247(63);
	func_231(0, 0);
	func_260(0, 3);
	func_193(10, 0, -1, 0, 1);
	func_179(10, -268604689);
	func_225(10);
	func_191(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, 1, 1, -1);
	func_210(2);
	func_237(13, 0);
	func_211(25, 0);
	func_211(21, 0);
	func_211(23, 0);
	func_211(37, 0);
	func_192(1, 1);
	func_192(5, 1);
	func_234(21);
	func_210(7);
	func_211(72, 0);
	func_243(5, 1);
	func_234(64);
	func_247(64);
	func_252(64, 2, 28, -2);
	func_192(11, 0);
	func_236(2, 0, 0);
	func_252(64, 0, 29, -2);
	func_241(28, 1);
	func_214(16, 1);
	func_234(65);
	func_247(65);
	func_198(joaat("WS_SADIE_BEDROLL"));
	func_260(0, 5);
	func_191(joaat("WEAPON_REPEATER_HENRY"), 1, 1, 0, -1);
	func_241(29, 1);
	func_207(11);
	func_237(73, 0);
	func_215();
	func_216(23);
}

void func_62()
{
	func_160(24);
	func_161();
	func_211(16, 0);
	func_234(0);
	func_247(0);
	func_193(0, 1, 0, 1, 1);
	func_193(13, 4, 0, 1, 1);
	func_193(14, 4, 0, 3, 1);
	func_202(joaat("WEAPON_FISHINGROD"), 1);
	func_237(5, 0);
	func_234(41);
	func_209(joaat("SP_CHAL_SURV_ROOT"));
	func_211(17, 0);
	func_234(134);
	func_247(134);
	func_225(11);
	func_179(11, 1205492208);
	func_193(11, 0, -1, 0, 1);
	func_193(11, 4, 0, 3, 1);
	func_193(17, 0, -1, 0, 1);
	func_173(11, 1.2f, -1082130432);
	func_177(12, joaat("A_C_DOGCATAHOULACUR_01"));
	func_179(12, -1394723994);
	func_190(28);
	func_237(20, 0);
	func_237(31, 0);
	func_211(64, 0);
	func_254(joaat("COMPLETED"), joaat("MISSIONS_CHP4"), 3, 33);
	func_238(105, 0, 350);
	func_238(95, 0, 350);
	func_211(74, 0);
	func_254(joaat("MISSIONS_PROGRESSED"), 0, 1, 46);
	func_234(6);
	func_247(7);
	func_241(31, 1);
	func_253(6);
	func_253(7);
	func_211(89, 0);
	func_276(1);
	func_247(1);
	func_233(4);
	func_172(joaat("AZL_BEECHERS_HOPE_FARM_RUNNING"), 1, 1);
	func_207(14);
	func_207(13);
	func_207(12);
	func_220(12);
	func_237(86, 0);
	func_237(101, 0);
	func_211(99, 0);
	func_211(87, 0);
	func_234(2);
	func_247(2);
	func_198(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_273();
	func_237(88, 0);
	func_215();
	func_216(24);
}

void func_63()
{
	func_160(26);
	func_161();
	func_234(120);
	func_247(120);
	func_190(36);
	func_190(32);
	func_190(7);
	func_190(10);
	func_191(joaat("WEAPON_MELEE_KNIFE"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_BOW"), 1, 1, 0, -1);
	func_190(9);
	func_190(27);
	func_190(47);
	func_190(55);
	func_237(1, 0);
	func_211(3, 0);
	func_211(2, 0);
	func_211(4, 0);
	func_211(6, 0);
	func_171(2);
	func_234(66);
	func_247(66);
	func_191(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 1, 0, 525);
	func_219(1);
	func_238(26, 0, 350);
	func_222(48);
	func_170(2, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_HORSESHOE_OVERLOOK"), 0, 1);
	func_172(joaat("AZL_CAMP_CLEMENS_POINT"), 1, 1);
	func_198(joaat("WS_CLEMENS_POINT_BARREL"));
	func_192(18, 0);
	func_169(-922193456);
	func_232(5);
	func_237(7, 0);
	func_237(17, 0);
	func_242(0, 0);
	func_239(12, 13, -2);
	func_240(2, 12);
	func_241(13, 1);
	func_211(33, 0);
	func_240(29, 27);
	func_234(67);
	func_247(67);
	func_192(18, 0);
	func_260(2, 4);
	func_219(2);
	func_169(-922193456);
	func_222(48);
	func_170(3, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_CLEMENS_POINT"), 0, 1);
	func_172(joaat("AZL_CAMP_SHADY_BELLE"), 1, 1);
	func_227(joaat("WS_CLEMENS_POINT_BARREL"));
	func_210(10);
	func_237(64, 0);
	func_192(18, 0);
	func_232(5);
	func_234(117);
	func_238(76, 0, 350);
	func_211(44, 0);
	func_234(139);
	func_247(139);
	func_207(18);
	func_255(5);
	func_277(0, 2);
	func_277(0, 1);
	func_277(0, 3);
	func_211(60, 0);
	func_266(0, 7);
	func_266(0, 8);
	func_266(0, 0);
	func_266(0, 1);
	func_266(0, 2);
	func_266(0, 3);
	func_198(joaat("WS_SHADY_BELLE_GANG_0_2"));
	func_276(82);
	func_191(joaat("WEAPON_MELEE_CLEAVER"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_MELEE_HATCHET"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_MELEE_MACHETE"), 1, 1, 0, 526);
	func_240(28, 24);
	func_240(29, 25);
	func_204();
	func_205();
	func_276(83);
	func_237(61, 0);
	func_211(69, 0);
	func_234(68);
	func_247(68);
	func_219(4);
	func_214(79, 0);
	func_260(1, 3);
	func_260(2, 3);
	func_222(48);
	func_170(6, 0);
	func_192(12, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_LAKAY"), 0, 1);
	func_172(joaat("AZL_CAMP_BEAVER_HOLLOW"), 1, 1);
	func_192(18, 0);
	func_207(23);
	func_232(5);
	func_182(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"));
	func_240(4, 32);
	func_175(0);
	func_192(16, 0);
	func_257(16);
	func_191(joaat("WEAPON_PISTOL_MAUSER"), 0, 1, 0, -1);
	func_234(147);
	func_237(78, 0);
	func_237(74, 0);
	func_211(59, 0);
	func_234(140);
	func_247(140);
	func_207(18);
	func_255(5);
	func_277(0, 4);
	func_247(141);
	func_278(0, 4);
	func_278(0, 5);
	func_278(0, 6);
	func_247(142);
	func_241(26, 1);
	func_278(0, 4);
	func_278(0, 5);
	func_278(0, 6);
	func_253(140);
	func_253(141);
	func_253(142);
	func_270(18);
	func_255(5);
	func_211(90, 0);
	func_234(8);
	func_247(8);
	func_234(9);
	func_247(9);
	func_176(4);
	func_237(91, 0);
	func_220(11);
	func_198(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_273();
	func_211(92, 0);
	func_234(10);
	func_247(10);
	func_237(93, 0);
	func_211(101, 0);
	func_234(96);
	func_247(96);
	func_237(87, 0);
	func_215();
	func_216(26);
}

void func_64()
{
	func_160(25);
	func_161();
	func_234(59);
	func_247(59);
	func_277(0, 0);
	func_277(0, 7);
	func_277(0, 8);
	func_279(1);
	func_234(61);
	func_247(61);
	func_210(29);
	func_234(62);
	func_247(62);
	func_244(8, 0);
	func_241(9, 1);
	func_258(61);
	func_276(62);
	func_241(8, 1);
	func_237(3, 0);
	func_212(100);
	func_232(1);
	func_211(70, 0);
	func_234(69);
	func_247(69);
	func_211(71, 0);
	func_234(70);
	func_247(70);
	func_241(30, 1);
	func_253(69);
	func_253(70);
	func_215();
	func_216(25);
}

void func_65()
{
	func_160(27);
	func_161();
	func_192(5, 0);
	func_280(596);
	func_234(94);
	func_247(94);
	func_193(5, 4, 0, 2, 1);
	func_212(100);
	func_237(100, 0);
	func_207(5);
	func_211(50, 0);
	func_234(115);
	func_247(115);
	func_236(2, 0, 0);
	func_234(116);
	func_247(116);
	func_236(2, 0, 0);
	func_211(42, 0);
	func_280(529);
	func_192(7, 0);
	func_237(49, 0);
	func_215();
	func_216(27);
}

void func_66()
{
	func_160(28);
	func_161();
	func_234(3);
	func_234(4);
	func_247(4);
	func_245(0, 1);
	func_234(5);
	func_247(5);
	func_192(1, 0);
	func_245(1, 1);
	func_237(21, 0);
	func_230(33, 1);
	func_211(51, 0);
	func_234(22);
	func_247(23);
	func_241(24, 1);
	func_253(22);
	func_253(23);
	func_211(62, 0);
	func_234(58);
	func_247(58);
	func_164(9);
	func_237(70, 0);
	func_237(59, 0);
	func_251(23, -2, 38);
	func_234(24);
	func_241(38, 1);
	func_247(25);
	func_241(11, 1);
	func_253(22);
	func_253(23);
	func_253(24);
	func_253(25);
	func_215();
	func_216(28);
}

void func_67()
{
	func_160(30);
	func_161();
	func_234(26);
	func_234(84);
	func_234(86);
	func_234(87);
	func_234(88);
	func_247(84);
	func_247(85);
	func_247(86);
	func_247(87);
	func_247(88);
	func_211(52, 0);
	func_234(27);
	func_215();
	func_216(30);
}

void func_68(int iParam0)
{
	func_160(iParam0);
	func_161();
	func_215();
	func_216(iParam0);
}

void func_69()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_1835011[iVar0 /*74*/] = -1;
		Global_1835011[iVar0 /*74*/].f_1 = 0;
		strcpy_s(&(Global_1835011[iVar0 /*74*/].f_3), 32, "");
		strcpy_s(&(Global_1835011[iVar0 /*74*/].f_8), 8, "");
		Global_1835011[iVar0 /*74*/].f_18 = { 0.0f, 0.0f, 0.0f /*3*/ };
		Global_1835011[iVar0 /*74*/].f_26 = 0;
		Global_1835011[iVar0 /*74*/].f_29 = 0;
		strcpy_s(&(Global_1835011[iVar0 /*74*/].f_9), 24, "");
		strcpy_s(&(Global_1835011[iVar0 /*74*/].f_12), 32, "");
		Global_1835011[iVar0 /*74*/].f_30 = 0;
		iVar0++;
	}
}

void func_70()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 <= 77)
	{
		func_281(&(Global_1835011[iVar0 /*74*/]));
		iVar0++;
	}
	func_282(0, 0, "winter1", "WNT1", 0, "", "", -1347.48f, 2436.06f, 307.46f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(1, 0, "winter2", "WNT2", 33280, "WNT2_INT", "winter2_intro", -1323.966f, 2438.497f, 308.6447f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(3, 0, "winter4", "WNT4", 33280, "WNT4_INT", "winter4_intro", -1326.43f, 2441.23f, 309.64f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_283(0, "winter1_outro");
	func_283(1, "winter2_outro");
	func_283(3, "winter4_outro");
	func_283(2, "odriscolls1_outro");
	func_284(1, 15);
	func_284(1, 13);
	func_284(1, 2);
	func_284(1, 5);
	func_284(1, 22);
	func_284(1, 14);
	func_284(1, 4);
	func_284(1, 18);
	func_284(1, 20);
	func_284(1, 11);
	func_284(1, 19);
	func_284(1, 21);
	func_284(3, 0);
	func_284(3, 5);
	func_284(3, 21);
	func_284(3, 1);
	func_282(4, 1, "mudtown1", "MUD1", (1 << 15), "MUD1_INT", "mudtown1_intro", -1316.418f, 2421.595f, 306.5768f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(5, 1, "mudtown2", "MUD2", (1 << 9), "MUD2_INT", "mudtown2_intro", -312.771f, 803.3489f, 117.9849f, joaat("BLIP_SCM_JAVIER"), 45000);
	func_282(6, 3, "mudtown3", "MUD3", (1 << 9), "MUD3_INT", "mudtown3_intro", -100.1908f, -25.6157f, 94.9512f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_282(14, 1, "mudtown4", "MUD4", 12, "MUD4_INT", "mudtown4_intro", -252.9086f, 687.2473f, 112.3933f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_282(24, 1, "mudtown5", "MUD5", 0, "MUD5_INT", "mudtown5_intro", 719.8f, -1241.849f, 45.4094f, joaat("BLIP_MISSION_BILL"), 45000);
	func_285(14, (75.0f * 2.0f), (100.0f * 2.0f), (100.0f * 2.0f));
	func_282(8, 29, "mary1", "MRY1", (1 << 15), "", "mary1_intro", 897.1398f, 1280.598f, 233.7575f, joaat("BLIP_SCM_MARY"), 45000);
	func_282(36, 29, "mary3", "MRY3", 0, "MRY3_INT", "mary3_intro", 2676.633f, -1266.643f, 50.84106f, joaat("BLIP_SCM_MARY"), 45000);
	func_285(8, (75.0f * 2.0f), (100.0f * 2.0f), (100.0f * 2.0f));
	func_285(36, (75.0f * 1.5f), (100.0f * 1.5f), (200.0f / 1.33f));
	func_283(4, "mudtown1_outro");
	func_283(6, "mudtown3_outro");
	func_284(4, 0);
	func_284(4, 5);
	func_284(5, 3);
	func_284(5, 2);
	func_284(5, 7);
	func_284(6, 4);
	func_284(14, 1);
	func_284(24, 3);
	func_284(24, 9);
	func_284(24, 20);
	func_285(5, (75.0f * 2.2f), (100.0f * 2.2f), 1128792064);
	func_285(6, (75.0f * 2.0f), (100.0f * 2.0f), 1128792064);
	func_285(24, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_282(9, 2, "saloon1", "SAL1", 0, "SAL1_INT", "saloon1_intro", -128.8677f, -31.6843f, 95.0839f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(9, 0);
	func_284(9, 9);
	func_284(9, 16);
	func_285(9, (75.0f * 2.0f), (100.0f * 2.0f), 1128792064);
	func_283(9, "saloon1_outro");
	func_282(11, 2, "utopia1", "UTP1", 0, "UTP1_INT", "utopia1_intro", -1804.762f, -351.7945f, 163.1185f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_284(11, 6);
	func_282(12, 2, "utopia2", "UTP2", 0, "UTP2_INT", "utopia2_intro", -1531.901f, -307.4734f, 141.4547f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_284(12, 6);
	func_283(12, "utopia2_outro");
	func_282(13, 1, "sean1", "SEN1", 0, "SEN1_INT", "sean1_intro", -870.0f, -1098.0f, 56.9f, joaat("BLIP_SCM_JAVIER"), 45000);
	func_284(13, 23);
	func_284(13, 2);
	func_284(13, 7);
	func_285(13, (75.0f * 4.0f), (100.0f * 4.0f), 1128792064);
	func_282(25, 3, "mudtown3b", "MUD6", 0, "MUD3B_INT", "mudtown3b_intro", 1173.268f, -102.1099f, 96.2466f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_284(25, 8);
	func_284(25, 1);
	func_284(25, 7);
	func_285(25, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_282(7, 4, "bounty1", "BOU1", 0, "RBSOS_INT", "bounty1_intro", -275.4033f, 801.9575f, 118.4063f, joaat("BLIP_MISSION_BOUNTY"), 45000);
	func_285(7, 50.0f, 75.0f, 1128792064);
	func_283(7, "bounty1_outro");
	func_282(10, 5, "reverend1", "REV1", 0, "RRVRD_RSC_1", "reverend1_intro", -327.6682f, -357.796f, 87.0507f, joaat("BLIP_SCM_REVEREND"), 45000);
	func_284(10, 21);
	func_283(10, "reverend1_outro");
	func_285(10, (75.0f * 2.0f), (100.0f * 2.0f), (100.0f * 2.0f));
	func_282(15, 31, "hunting1", "HNT1", (1 << 15), "RCHNT1_INT", "hunting1_intro", -107.3907f, -26.07745f, 95.27734f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_284(15, 5);
	func_285(15, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_282(16, 6, "feud1", "FUD1", 0, "", "feud1_intro", 648.6395f, -1281.028f, 40.9099f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_283(16, "feud1_outro");
	func_284(16, 0);
	func_284(16, 5);
	func_285(16, (75.0f * 2.5f), (100.0f * 2.5f), 1128792064);
	func_282(17, 6, "grays1", "GRY1", 0, "GRY1_INT", "grays1_intro", 1359.14f, -1305.885f, 76.7662f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(19, 6, "grays2", "GRY2", (1 << 15), "", "grays2_intro", 1711.4f, -1383.2f, 42.89f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_282(21, 6, "grays3", "GRY3", 0, "GRY3_INT", "grays3_intro", 1291.136f, -1290.923f, 75.5354f, joaat("BLIP_MISSION_BILL"), 45000);
	func_285(17, (75.0f * 4.0f), (100.0f * 4.0f), 1128792064);
	func_285(19, (75.0f * 2.0f), (100.0f * 2.0f), 1128792064);
	func_285(21, (75.0f * 4.0f), (100.0f * 4.0f), 1128792064);
	func_283(17, "grays1_outro");
	func_283(19, "grays2_outro");
	func_284(17, 0);
	func_284(17, 3);
	func_284(19, 2);
	func_284(19, 1);
	func_284(21, 6);
	func_284(21, 3);
	func_284(21, 8);
	func_282(18, 7, "braithwaites1", "BRT1", 0, "BRT1_INT", "braithwaites1_intro", 776.5498f, -1056.568f, 53.8989f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_282(20, 7, "braithwaites2", "BRT2", 0, "BRT2_INT", "braithwaites2_intro", 1011.21f, -1761.52f, 47.6f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_282(26, 7, "braithwaites3", "BRT3", (1 << 15), "BRT3_INT", "braithwaites3_intro", 656.3981f, -1252.135f, 43.8652f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_285(18, (75.0f * 2.0f), (100.0f * 2.0f), 1128792064);
	func_285(20, (75.0f * 4.0f), (100.0f * 4.0f), (100.0f * 1.5f));
	func_285(26, (75.0f * 2.0f), (100.0f * 2.0f), 1128792064);
	func_283(18, "braithwaites1_outro");
	func_283(20, "braithwaites2_outro");
	func_284(18, 5);
	func_284(18, 1);
	func_284(20, 8);
	func_284(20, 5);
	func_284(26, 0);
	func_284(26, 18);
	func_284(26, 10);
	func_284(26, 16);
	func_284(26, 23);
	func_284(26, 5);
	func_284(26, 13);
	func_284(26, 1);
	func_284(26, 3);
	func_284(26, 7);
	func_284(26, 2);
	func_284(26, 9);
	func_284(26, 6);
	func_282(22, 8, "trelawny1", "TRE1", 0, "", "trelawny1_intro", 655.7808f, -1251.116f, 42.6758f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(22, 0);
	func_284(22, 7);
	func_282(27, 10, "mob1", "MOB1", 0, "MOB1_INT", "mob1_intro", 2626.94f, -1219.637f, 52.2649f, joaat("BLIP_SCM_BRONTE"), 45000);
	func_282(28, 10, "mob2", "MOB2", 0, "", "mob2_intro", 2447.677f, -1200.614f, 45.2694f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(29, 10, "mob3", "MOB3", 0, "MOB3_INT", "mob3_intro", 2720.927f, -1353.315f, 46.7962f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(30, 10, "mob4", "MOB4", 0, "MOB4_INT", "mob4_intro", 1891.44f, -1858.19f, 46.7928f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(31, 10, "mob5", "MOB5", 0, "MOB5_INT", "mob5_intro", 2140.294f, -645.7061f, 41.5042f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_283(27, "mob1_outro");
	func_283(29, "mob3_outro");
	func_283(30, "mob4_outro");
	func_284(27, 0);
	func_285(27, (75.0f * 2.0f), (100.0f * 2.0f), 100.0f);
	func_284(28, 1);
	func_284(28, 0);
	func_285(28, (75.0f * 2.0f), (100.0f * 2.0f), 100.0f);
	func_284(29, 0);
	func_284(29, 9);
	func_285(29, 175.0f, 225.0f, 175.0f);
	func_284(30, 0);
	func_284(30, 5);
	func_284(31, 0);
	func_284(31, 1);
	func_284(31, 3);
	func_284(31, 9);
	func_285(31, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_282(2, 11, "odriscolls1", "DST1", 33280, "ODR1_INT", "odriscolls1_intro", -1360.4f, 2425.1f, 307.4f, joaat("BLIP_MISSION_BILL"), 45000);
	func_284(2, 3);
	func_284(2, 6);
	func_284(2, 9);
	func_282(23, 11, "odriscolls3", "DST3", 0, "odr3_int", "odriscolls3_intro", 656.0257f, -1250.951f, 43.1798f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_284(23, 6);
	func_285(23, (75.0f * 2.0f), (100.0f * 2.0f), 1128792064);
	func_283(23, "odriscolls3_outro");
	func_282(32, 11, "odriscolls4", "ODR4", 0, "ODR4_INT", "odriscolls4_intro", 1892.036f, -1856.665f, 42.1234f, joaat("BLIP_SCM_SADIE"), 45000);
	func_282(47, 11, "odriscolls5", "DST5", 0, "DST5_INT", "odriscolls5_intro", 2794.039f, -1169.609f, 46.924f, joaat("BLIP_SCM_SADIE"), 45000);
	func_285(47, 75.0f, 100.0f, (200.0f / 2.0f));
	func_284(32, 11);
	func_284(32, 0);
	func_284(32, 10);
	func_284(47, 11);
	func_282(33, 12, "industry1", "IND1", 0, "IND1_INT", "industry1_intro", 1891.336f, -1839.029f, 42.458f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_282(34, 12, "industry3", "IND3", 12, "IND3_INT", "industry3_intro", 2549.555f, -1181.013f, 53.281f, joaat("BLIP_SCM_TRELAWNEY"), 45000);
	func_283(34, "industry3_outro");
	func_284(33, 0);
	func_284(33, 5);
	func_284(34, 23);
	func_285(34, 1117126656, 1120403456, 100.0f);
	func_282(37, 12, "saint_denis1", "NBD1", 0, "NBD1_INT", "saint_denis1_intro", 1891.318f, -1864.423f, 42.17f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(37, 0);
	func_284(37, 6);
	func_284(37, 3);
	func_284(37, 7);
	func_284(37, 1);
	func_284(37, 5);
	func_284(37, 13);
	func_285(37, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_282(35, 9, "susan1", "SUS1", 0, "SUS1_INT", "susan1_intro", 1877.251f, -1881.726f, 42.1481f, joaat("BLIP_SCM_MARYBETH"), 45000);
	func_284(35, 19);
	func_284(35, 22);
	func_282(38, 13, "guama1", "GUA1", 0, "GUA1_INT", "", 688.195f, -5521.027f, 42.97f, joaat("BLIP_OBJECTIVE"), 45000);
	func_282(39, 13, "guama2", "GUA2", 0, "GUA1_EXT", "", 2008.97f, -4491.485f, 41.0253f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(43, 13, "guama3", "GUA3", 0, "GUA3_INT", "guarma3_intro", 1307.386f, -6824.723f, 42.4679f, joaat("BLIP_MISSION_BILL"), 45000);
	func_284(39, 0);
	func_284(39, 6);
	func_284(39, 2);
	func_284(43, 0);
	func_284(43, 3);
	func_284(43, 2);
	func_284(43, 6);
	func_285(43, (75.0f * 5.0f), (100.0f * 5.0f), 1128792064);
	func_282(40, 13, "fussar1", "FUS1", 0, "", "fussar1_intro", 1534.57f, -7149.84f, 63.4f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(41, 14, "fussar2", "FUS2", 0, "", "fussar2_intro", 1318.124f, -7222.688f, 54.3179f, joaat("BLIP_RC"), 45000);
	func_284(40, 0);
	func_284(40, 2);
	func_285(40, (75.0f * 3.0f), (100.0f * 3.0f), 100.0f);
	func_283(40, "fussar1_outro");
	func_283(41, "fussar2_outro");
	func_285(41, 75.0f, 100.0f, 90.0f);
	func_282(42, 14, "smuggler2", "SMG2", 0, "SMG2_INT", "smuggler2_intro", 998.9632f, -6744.742f, 57.315f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(42, 0);
	func_284(42, 3);
	func_284(42, 6);
	func_283(42, "smuggler2_outro");
	func_282(44, 15, "gang1", "GNG1", 0, "GNG1_INT", "gang1_intro", 2239.396f, -768.93f, 42.4355f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(45, 15, "gang2", "GNG2", 0, "GNG2_INT", "gang2_intro", 2794.276f, -1169.057f, 47.424f, joaat("BLIP_SCM_SADIE"), 45000);
	func_282(46, 15, "gang3", "GNG3", 0, "GNG3_INT", "gang3_intro", 2903.111f, -248.0395f, 40.9789f, joaat("BLIP_SCM_SADIE"), 45000);
	func_284(44, 11);
	func_284(44, 13);
	func_285(44, (75.0f * 5.0f), (100.0f * 5.0f), 1128792064);
	func_283(44, "gang1_outro");
	func_284(45, 11);
	func_285(45, (75.0f * 3.0f), (100.0f * 3.0f), 100.0f);
	func_284(46, 11);
	func_284(46, 13);
	func_285(46, (75.0f * 7.0f), (100.0f * 7.0f), 1128792064);
	func_282(53, 18, "cornwall1", "CRN1", 0, "CRN1_INT", "cornwall1_intro", 706.8683f, -1243.771f, 44.1344f, joaat("BLIP_SCM_MOLLY_OSHEA"), 45000);
	func_282(54, 18, "train_robbery1", "TRN1", 0, "TRN1_INT", "train_robbery1_intro", 2912.107f, 1324.443f, 44.2873f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_282(55, 18, "train_robbery2", "TRN2", 0, "TRN2_INT", "train_robbery2_intro", 2785.663f, 521.8132f, 67.3731f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_282(56, 18, "train_robbery3", "TRN3", 0, "TRN3_INT", "train_robbery3_intro", 568.1516f, 1693.468f, 185.5488f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_284(53, 16);
	func_283(53, "cornwall1_outro");
	func_284(54, 6);
	func_284(54, 0);
	func_285(54, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_284(55, 3);
	func_284(55, 6);
	func_285(55, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_284(56, 1);
	func_285(56, (75.0f * 3.75f), (100.0f * 4.5f), 1128792064);
	func_282(57, 18, "train_robbery4", "TRN4", 0, "TRN4_INT", "train_robbery4_intro", 2357.59f, 1373.9f, 105.6f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(57, 0);
	func_285(57, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_283(57, "train_robbery4_outro");
	func_282(48, 16, "native1", "NTV1", 0, "NTV1_INT", "native1_intro", 441.702f, 2229.45f, 248.136f, joaat("BLIP_SCM_RAINS"), 45000);
	func_282(49, 16, "native2", "NTV2", 0, "NTV2_INT", "native2_intro", 2345.514f, 1367.028f, 105.3159f, joaat("BLIP_SCM_TRELAWNEY"), 45000);
	func_282(58, 16, "native3", "NTV3", 0, "NTV3_INT", "native3_intro", 2359.382f, 1373.606f, 105.3286f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_283(48, "native1_outro");
	func_284(49, 7);
	func_285(49, (75.0f * 1.5f), (100.0f * 1.5f), 1128792064);
	func_283(49, "native2_outro");
	func_284(58, 3);
	func_284(58, 1);
	func_284(58, 0);
	func_284(58, 6);
	func_284(58, 4);
	func_284(58, 2);
	func_284(58, 7);
	func_284(58, 21);
	func_284(58, 23);
	func_284(58, 11);
	func_285(58, (75.0f * 2.0f), (100.0f * 2.0f), 1128792064);
	func_283(58, "native3_outro");
	func_282(50, 17, "native_son1", "NTS1", 0, "NTS1_INT", "native_son1_intro", 2342.456f, 1354.502f, 106.3074f, joaat("BLIP_SCM_REVEREND"), 45000);
	func_282(51, 17, "native_son2", "NTS2", 0, "NTS2_INT", "native_son2_intro", 71.4867f, 1071.386f, 194.9133f, joaat("BLIP_SCM_EAGLE_FLIES"), 45000);
	func_282(52, 17, "native_son3", "NTS3", 0, "", "native_son3_intro", 453.14f, 2211.46f, 245.04f, joaat("BLIP_SCM_CHARLES"), 45000);
	func_283(52, "native_son3_outro");
	func_284(50, 0);
	func_284(50, 7);
	func_284(50, 2);
	func_284(50, 20);
	func_284(51, 0);
	func_284(51, 26);
	func_284(52, 7);
	func_285(50, (75.0f * 2.0f), (100.0f * 2.0f), 1128792064);
	func_285(51, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_282(59, 19, "finale1", "FIN1", 0, "", "", 2505.984f, 1404.709f, 96.0203f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(76, 19, "finale2", "FIN2", 0, "FIN2_INT", "finale2_intro", -1640.544f, -1361.189f, 84.0584f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(77, 19, "finale3", "FIN3", 0, "", "", -1555.872f, -1437.203f, 92.9368f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_284(59, 11);
	func_284(76, 13);
	func_284(76, 4);
	func_284(76, 14);
	func_284(76, 7);
	func_284(76, 11);
	func_285(76, (75.0f * 2.0f), (100.0f * 2.0f), 1128792064);
	func_284(77, 13);
	func_283(77, "finale3_outro");
	func_282(60, 20, "marston1", "MAR1", 0, "MAR1_INT", "marston1_intro", -1624.569f, 428.6325f, 107.29f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_282(65, 21, "marston2", "MAR2", 0, "MAR2_INT", "marston2_intro", -2590.836f, 457.1726f, 146.019f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(66, 20, "marston4", "MAR4", 0, "MAR4_INT", "marston4_intro", -2560.566f, 399.7978f, 147.2715f, joaat("BLIP_SCM_DAVID_GEDDES"), 45000);
	func_282(61, 20, "marston5_1", "MAR5", 0, "MAR5_INT", "marston5_1_intro", -2589.093f, 408.1137f, 147.9029f, joaat("BLIP_SCM_TOM_DICKENS"), 45000);
	func_282(62, 21, "marston5_2", "MR52", 12, "MAR5_MCS5", "marston5_2_intro", -2606.167f, 366.299f, 148.4951f, joaat("BLIP_SCM_TOM_DICKENS"), 45000);
	func_282(63, 20, "marston5_3", "MR53", 0, "MAR5_MCS8", "marston5_3_intro", -2545.674f, 357.9615f, 151.2458f, joaat("BLIP_SCM_DAVID_GEDDES"), 45000);
	func_282(64, 20, "laramie1", "LAR1", 0, "", "laramie1_intro", -2598.761f, 412.5062f, 147.409f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_285(65, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_285(61, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_283(62, "marston5x_outro");
	func_283(63, "marston5x_outro");
	func_283(65, "marston2_or_4_outro");
	func_283(66, "marston2_or_4_outro");
	func_282(73, 20, "marston6", "MAR6", 0, "RHLP2_RSC1", "marston6_intro", -1638.48f, -1358.785f, 83.2768f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_282(74, 20, "marston7", "MAR7", 0, "MAR7_INT", "marston7_intro", -865.2943f, -1306.124f, 42.00784f, joaat("BLIP_SCM_ALBERT_CAKES"), 45000);
	func_282(75, 20, "marston8", "MAR8", 0, "MAR8_INT", "marston8_intro", -1598.6f, -1419.1f, 81.6f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_282(68, 20, "beechers2_2", "BE22", 0, "rbch2_rsc5", "beechers2_2_intro", -1629.959f, -1392.888f, 82.8805f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_285(74, (75.0f * 2.0f), (100.0f * 2.0f), 1128792064);
	func_285(75, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_285(68, (75.0f * 2.0f), (100.0f * 2.0f), 1128792064);
	func_283(75, "marston8_outro");
	func_283(68, "beechers2_2_outro");
	func_284(65, 14);
	func_284(65, 13);
	func_284(73, 4);
	func_284(74, 7);
	func_284(75, 4);
	func_284(75, 7);
	func_284(68, 4);
	func_284(68, 7);
	func_282(67, 20, "abigail2_1", "AB21", 0, "RABI21_INT", "abigail2_1_intro", -2588.554f, 457.1668f, 145.2963f, joaat("BLIP_SCM_ABE_STABLEHAND"), 45000);
	func_283(67, "abigail21_outro");
	func_282(69, 22, "sadie2", "SAD2", 0, "SAD2_INT", "sadie2_intro", -307.6113f, 799.5872f, 117.9875f, joaat("BLIP_SCM_SADIE"), 45000);
	func_285(69, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_282(70, 22, "sadie3", "SAD3", 0, "RBCH3_RSC1", "sadie3_intro", -1551.319f, -1456.134f, 92.7963f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_285(70, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_282(71, 22, "sadie4", "SAD4", 0, "SAD4_INT", "sadie4_intro", -1639.131f, -1363.211f, 83.4043f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_283(71, "sadie4_outro");
	func_282(72, 22, "sadie5", "SAD5", 0, "SAD5_INT", "sadie5_intro", -809.3553f, -1322.738f, 43.6836f, joaat("BLIP_SCM_SADIE"), 45000);
	func_283(72, "sadie5_outro");
	func_285(72, (75.0f * 3.0f), (100.0f * 3.0f), 1128792064);
	func_284(69, 11);
	func_284(70, 4);
	func_284(71, 13);
	func_284(72, 11);
	func_282(78, 19, "dreamanim", "TL21", 0, "", "def_intro_script", 2106.678f, -2041.109f, 40.7255f, joaat("BLIP_MISSION_JOHN"), 45000);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_71(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, Vector3 vParam6, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;

	if (!func_286(iParam0))
	{
		return;
	}
	if (!func_287(iParam1))
	{
		return;
	}
	if (Global_1879534 == 0)
	{
		Global_1347702[iParam0 /*49*/] = iParam1;
		strcpy_s(&(Global_1347702[iParam0 /*49*/].f_1), 16, sParam2);
		strcpy_s(&(Global_1347702[iParam0 /*49*/].f_3), 8, sParam3);
		strcpy_s(&(Global_1347702[iParam0 /*49*/].f_4), 64, sParam4);
		Global_1347702[iParam0 /*49*/].f_15 = func_288(iParam0, iParam1, 8, 0);
		if (!func_289(Global_1347702[iParam0 /*49*/].f_15))
		{
			return;
		}
		if (fParam12 < 35.0f)
		{
			fParam12 = 35.0f;
		}
		Global_1347702[iParam0 /*49*/].f_16 = fParam12;
		Global_1347702[iParam0 /*49*/].f_28 = iParam9;
		Global_1347702[iParam0 /*49*/].f_36 = iParam10;
		if (iParam5 != -1)
		{
			Global_1347702[iParam5 /*49*/].f_48 = Global_1347702[iParam0 /*49*/].f_15;
		}
		Global_1347702[iParam0 /*49*/].f_17 = (Global_1347702[iParam0 /*49*/].f_16 + 10.0f);
		if (iParam11 & (1 << 12) != 0)
		{
			Global_1347702[iParam0 /*49*/].f_20 = 0.0f;
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			Global_1347702[iParam0 /*49*/].f_29[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1347702[iParam0 /*49*/].f_24 = { vParam6 /*3*/ };
	Global_1347702[iParam0 /*49*/].f_27 = func_290(vParam6, 1);
	Global_1347702[iParam0 /*49*/].f_35 = iParam5;
	Global_1347702[iParam0 /*49*/].f_12 = 0;
	func_291(&(Global_1347702[iParam0 /*49*/].f_12), iParam11);
}

void func_72(int iParam0, int iParam1)
{
	if (!func_286(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
	}
	else if (iParam1 > 48)
	{
		iParam1 = 48;
	}
	Global_1347702[iParam0 /*49*/].f_47 = iParam1;
}

void func_73(int iParam0, int iParam1, bool bParam2)
{
	if (!func_286(iParam0))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_46 = iParam1;
	if (bParam2)
	{
		func_291(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 28));
	}
}

void func_74(int iParam0, float fParam1)
{
	float fVar0;

	if (!func_286(iParam0))
	{
		return;
	}
	fVar0 = (Global_1347702[iParam0 /*49*/].f_16 + 10.0f);
	if (fParam1 >= fVar0)
	{
		Global_1347702[iParam0 /*49*/].f_17 = fParam1;
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_17 = fVar0;
	}
}

void func_75(int iParam0, float fParam1)
{
	if (!func_286(iParam0))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_18 = fParam1;
	Global_1347702[iParam0 /*49*/].f_20 = (fParam1 + 5.0f);
	if (fParam1 >= Global_1347702[iParam0 /*49*/].f_19)
	{
		Global_1347702[iParam0 /*49*/].f_19 = (fParam1 + 5.0f);
	}
}

float func_76(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 70.0f;
		default:
			break;
	}
	return 75.0f;
}

int func_77(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_286(iParam0))
	{
		return;
	}
	if (iParam1 != 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < 27)
		{
			iVar0 = iVar1;
			if (iParam1 & func_77(iVar0) != 0 && func_137(iVar0))
			{
				if (iVar2 >= 5)
				{
					return;
				}
				Global_1347702[iParam0 /*49*/].f_29[iVar2] = iVar0;
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_79(int iParam0, int iParam1)
{
	if (!func_286(iParam0))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_44 = iParam1;
}

void func_80(int iParam0, float fParam1)
{
	Global_1347702[iParam0 /*49*/].f_20 = fParam1;
}

void func_81(int iParam0, float fParam1)
{
	Global_1347702[iParam0 /*49*/].f_19 = fParam1;
}

void func_82()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		func_292(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1899528.f_11)
	{
		Global_1899528.f_11[iVar0] = -1;
		iVar0++;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, Vector3 vParam3, Vector3 vParam6, Vector3 vParam9, int iParam12)
{
	if (!func_293(iParam0))
	{
		return;
	}
	if (!func_294(iParam2))
	{
		return;
	}
	Global_1395601.f_5[iParam0 /*28*/] = iParam2;
	Global_1395601.f_5[iParam0 /*28*/].f_1 = iParam1;
	Global_1395601.f_5[iParam0 /*28*/].f_2 = { vParam3 /*3*/ };
	Global_1395601.f_5[iParam0 /*28*/].f_5 = { vParam6 /*3*/ };
	Global_1395601.f_5[iParam0 /*28*/].f_8 = { vParam9 /*3*/ };
	Global_1395601.f_5[iParam0 /*28*/].f_11 = iParam12;
}

Vector3 func_84()
{
	if (func_295(70))
	{
		return { -1634.252f, -1358.577f, 83.9077f };
	}
	if (func_295(73))
	{
		return { -1665.419f, -1346.258f, 84.11175f };
	}
	return { -1641.1f, -1359.979f, 83.4932f };
}

void func_85(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 > 4)
	{
		iParam0 = 4;
	}
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam1 == 16)
	{
		Global_40.f_4283.f_312 = iParam0;
		iVar0 = 0;
		while (iVar0 < 17)
		{
			func_296(iVar0, iParam0);
			iVar0++;
		}
	}
	else
	{
		func_296(iParam1, iParam0);
	}
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<12> /*96*/ sVar2;
	int iVar22;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_40.f_4283 == iParam0)
	{
		iVar0 = func_298(func_297(iParam0));
		if (iVar0 != -1)
		{
			Global_40.f_6 = { Global_1395601.f_5[iVar0 /*28*/].f_2 /*3*/ };
		}
		func_300(func_299(iParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 1, 0);
		VOLUME::_0x748C5F51A18CB8F0(0);
		VOLUME::_0x748C5F51A18CB8F0(1);
		Global_40.f_4283.f_330 = -15;
		return;
	}
	func_301();
	switch (iParam0)
	{
		case 0:
		case 1:
			func_302("hso_post_caravan");
			func_303(joaat("WS_POST_CARAVAN_HORSESHOE"));
			break;
		case 2:
			func_302("dewclm_post_caravan");
			func_303(joaat("WS_POST_CARAVAN_CLEMENS"));
			func_304(joaat("WS_POST_CARAVAN_HORSESHOE"));
			break;
		case 3:
			func_303(joaat("WS_POST_CARAVAN_SHADY"));
			func_304(joaat("WS_POST_CARAVAN_HORSESHOE"));
			func_304(joaat("WS_POST_CARAVAN_CLEMENS"));
			break;
		case 4:
		case 5:
		case 6:
			func_304(joaat("WS_POST_CARAVAN_HORSESHOE"));
			func_304(joaat("WS_POST_CARAVAN_CLEMENS"));
			func_304(joaat("WS_POST_CARAVAN_SHADY"));
			break;
		case 7:
		case 8:
			func_304(joaat("WS_POST_CARAVAN_HORSESHOE"));
			func_304(joaat("WS_POST_CARAVAN_CLEMENS"));
			func_304(joaat("WS_POST_CARAVAN_SHADY"));
			func_304(joaat("WS_POST_CARAVAN_BEAVERHOLLOW"));
			break;
	}
	Global_1934266.f_66 = 1;
	func_305(func_297(iParam0), 0);
	switch (func_115())
	{
		case -1:
			func_306();
			func_307(iParam0);
			func_308(1, 18);
			func_309(iParam0);
			func_310(iParam0);
			sVar2.f_11 = 1;
			iVar22 = 0;
			while (iVar22 < 10)
			{
				MISC::_COPY_MEMORY(&(Global_40.f_6563.f_274[iVar22 /*20*/]), &sVar2, 20);
				iVar22++;
			}
			Global_40.f_6563.f_273 = 0;
			func_311(&(Global_1359489.f_25), 1, 1);
			Global_1359453 = 0;
			iVar1 = 0;
			while (iVar1 < 27)
			{
				func_139(iVar1, (1 << 14), 1);
				iVar1++;
			}
			func_312(0, 14);
			func_313();
			func_314();
			Global_1357549.f_1497.f_8 |= 1;
			Global_1391438 = 1;
			Global_40.f_4283.f_330 = -15;
			func_300(joaat("CSTAG_NEW_CAMP_FIRST_VISIT"), joaat("CSTP_NEXT_VISIT"), -1235532919, -1, 0, 1, 0);
			func_300(func_299(iParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 1, 0);
			break;
	}
}

void func_87()
{
	if (func_115() != -1)
	{
		return;
	}
	Global_40.f_4283.f_328 = -15;
	Global_40.f_4283.f_329 = -15;
	Global_40.f_4283.f_331 = -15;
	Global_40.f_4283.f_332[0] = -1;
	Global_40.f_4283.f_332[1] = -1;
	func_315(&(Global_40.f_4283.f_440[0 /*63*/]));
	func_315(&(Global_40.f_4283.f_440[1 /*63*/]));
	func_316(0, 711);
}

void func_88()
{
	if (!Global_40)
	{
		Global_40.f_4283.f_2 = 0;
		Global_40.f_4283.f_3 = 0;
		Global_40.f_4283.f_312 = 1;
		Global_40.f_4283.f_324 = 0;
		Global_40.f_4283.f_325 = 0;
		Global_40.f_4283.f_328 = Global_1899515;
	}
	Global_1357549 = 0;
	Global_1357549.f_1494 = 0;
	Global_1357549.f_1497.f_8 = 0;
	func_317(0);
	Global_1357549.f_1724 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "camp_select_data");
	Global_1357549.f_1725 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(Global_1357549.f_1724, "camp_collection");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1357549.f_1725);
	func_318();
	func_319();
	if ((func_295(17) && !func_295(37)) && !func_320(16, 4, 1))
	{
		func_321(16);
	}
}

int func_89(bool bParam0)
{
	func_322(6, 0, 0, 513, bParam0);
	func_322(62, 0, 0, 513, bParam0);
	func_322(7, 0, 4, 513, bParam0);
	func_322(8, 0, 4, 513, bParam0);
	func_322(9, 0, 8, 513, bParam0);
	func_322(10, 0, 8, 513, bParam0);
	func_322(12, 0, 0, 1, 0);
	func_322(11, 0, 0, 17, bParam0);
	func_322(14, 0, 0, 1, 0);
	func_322(13, 0, 0, 1, 0);
	func_322(61, 0, 0, 1, 0);
	func_322(63, 0, 0, 1, 0);
	func_322(70, 0, 4, 513, bParam0);
	func_322(94, 0, 0, 1, 0);
	func_322(15, 0, 0, 545, bParam0);
	func_322(16, 0, 0, 521, bParam0);
	func_322(17, 0, 0, 521, bParam0);
	func_322(18, 0, 0, 1, 0);
	func_322(19, 0, 0, 1, 0);
	func_322(20, 0, 0, 1, 0);
	func_322(0, 0, 0, 513, bParam0);
	func_322(1, 0, 0, 513, bParam0);
	func_322(2, 0, 0, 513, bParam0);
	func_322(3, 0, 0, 513, bParam0);
	func_322(4, 0, 0, 513, bParam0);
	func_322(5, 0, 0, 513, bParam0);
	func_322(24, 0, 0, 513, bParam0);
	func_322(25, 0, 0, 513, bParam0);
	func_322(26, 0, 0, 513, bParam0);
	func_322(27, 0, 0, 513, bParam0);
	func_322(28, 0, 0, 513, bParam0);
	func_322(21, 0, 0, 513, bParam0);
	func_322(22, 0, 0, 513, bParam0);
	func_322(29, 0, 0, 513, bParam0);
	func_322(30, 0, 0, 513, bParam0);
	func_322(31, 0, 0, 513, bParam0);
	func_322(32, 0, 0, 513, bParam0);
	func_322(33, 0, 0, 513, bParam0);
	func_322(34, 0, 0, 513, bParam0);
	func_322(35, 0, 0, 513, bParam0);
	func_322(36, 0, 0, 513, bParam0);
	func_322(37, 0, 0, 513, bParam0);
	func_322(38, 0, 0, 513, bParam0);
	func_322(39, 0, 0, 513, bParam0);
	func_322(40, 0, 0, 513, bParam0);
	func_322(41, 0, 0, 513, bParam0);
	func_322(42, 0, 0, 513, bParam0);
	func_322(43, 0, 0, 513, bParam0);
	func_322(44, 0, 0, 513, bParam0);
	func_322(45, 0, 0, 513, bParam0);
	func_322(46, 0, 0, 513, bParam0);
	func_322(47, 0, 0, 513, bParam0);
	func_322(48, 0, 0, 513, bParam0);
	func_322(49, 0, 0, 513, bParam0);
	func_322(50, 0, 0, 513, bParam0);
	func_322(51, 0, 0, 513, bParam0);
	func_322(52, 0, 0, 513, bParam0);
	func_322(53, 0, 0, 513, bParam0);
	func_322(54, 0, 0, 513, bParam0);
	func_322(55, 0, 0, 513, bParam0);
	func_322(56, 0, 0, 513, bParam0);
	func_322(57, 0, 0, 513, bParam0);
	func_322(58, 0, 0, 513, bParam0);
	func_322(59, 0, 0, 513, bParam0);
	func_322(60, 0, 0, 513, bParam0);
	func_322(23, 0, 0, 1, 0);
	func_322(67, 0, 0, 1, 0);
	func_322(68, 0, 0, 1, 0);
	func_322(69, 0, 0, 1, 0);
	func_322(75, 0, 0, 1, 0);
	func_322(79, 0, 0, 1, 0);
	func_322(83, 0, 0, 1, 0);
	func_322(87, 0, 0, 1, 0);
	func_322(71, 0, 0, 1, 0);
	func_322(73, 0, 0, 1, 0);
	func_322(77, 0, 0, 1, 0);
	func_322(78, 0, 0, 1, 0);
	func_322(81, 0, 0, 1, 0);
	func_322(85, 0, 0, 1, 0);
	func_322(89, 0, 0, 1, 0);
	func_322(76, 0, 0, 1, 0);
	func_322(80, 0, 0, 1, 0);
	func_322(82, 0, 0, 1, 0);
	func_322(84, 0, 0, 1, 0);
	func_322(86, 0, 0, 1, 0);
	func_322(88, 0, 0, 1, 0);
	func_322(72, 0, 0, 1, 0);
	func_322(74, 0, 0, 1, 0);
	func_322(93, 0, 0, 513, bParam0);
	func_322(66, 0, 0, 1, 0);
	func_322(64, 0, 0, 1, 0);
	func_322(70, 0, 4, 513, bParam0);
	func_322(90, 0, 0, 1, 0);
	func_322(65, 0, 0, 513, bParam0);
	func_322(91, 0, 0, 513, bParam0);
	func_322(92, 0, 0, 1, 0);
	func_323(1);
	return 1;
}

void func_90(var uParam0)
{
	int iVar0;
	char cVar1[64];
	int iVar9;
	struct<14> /*112*/ sVar10;
	struct<21> /*168*/ sVar24;
	struct<28> /*224*/ sVar45;

	if (uParam0->f_5861)
	{
		return;
	}
	sVar10 = 1;
	sVar10.f_1 = 1;
	sVar10.f_2 = joaat("COLOR_WHITE");
	sVar10.f_4 = -1;
	sVar10.f_5 = -1134602452;
	sVar10.f_6 = 1276832712;
	sVar10.f_13 = joaat("COLOR_WHITE");
	sVar24 = 1;
	sVar24.f_1 = 1;
	sVar24.f_2 = joaat("COLOR_WHITE");
	sVar24.f_4 = -1;
	sVar24.f_5 = -1134602452;
	sVar24.f_6 = 1276832712;
	sVar45 = 1;
	sVar45.f_1 = 1;
	sVar45.f_2 = joaat("COLOR_WHITE");
	sVar45.f_4 = -1;
	sVar45.f_5 = -1134602452;
	sVar45.f_6 = 1276832712;
	sVar45.f_18 = 1;
	sVar45.f_19 = 1;
	sVar45.f_20 = 1;
	sVar45.f_24 = 1;
	sVar45.f_25 = 1;
	sVar45.f_26 = 1;
	sVar45.f_27 = -1;
	uParam0->f_5835 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PlayerWardrobeRoot");
	iVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "main_menu");
	uParam0->f_3084 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(iVar9, "list");
	iVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "item_style");
	uParam0->f_3761 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(iVar9, "list");
	iVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "item_variation");
	uParam0->f_5263 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(iVar9, "list");
	iVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "outfit_customizations");
	uParam0->f_5640 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(iVar9, "list");
	sVar10.f_8 = 1;
	sVar10.f_9 = 1;
	sVar24.f_8 = 1;
	sVar24.f_9 = 1;
	sVar45.f_8 = 1;
	sVar45.f_9 = 1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		strcpy_s(&cVar1, 64, "item_type_");
		StringIntConCat(&cVar1, iVar0, 64);
		func_324(&(uParam0->f_3084.f_1[iVar0 /*15*/]), uParam0->f_5835, cVar1, sVar10);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		strcpy_s(&cVar1, 64, "item_style_");
		StringIntConCat(&cVar1, iVar0, 64);
		func_325(&(uParam0->f_3761.f_1[iVar0 /*15*/]), uParam0->f_5835, cVar1, sVar24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		strcpy_s(&cVar1, 64, "item_variation_");
		StringIntConCat(&cVar1, iVar0, 64);
		func_325(&(uParam0->f_5263.f_1[iVar0 /*15*/]), uParam0->f_5835, cVar1, sVar24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		strcpy_s(&cVar1, 64, "item_customize_");
		StringIntConCat(&cVar1, iVar0, 64);
		func_326(&(uParam0->f_5640.f_1[iVar0 /*22*/]), uParam0->f_5835, cVar1, sVar45);
		iVar0++;
	}
	func_327(uParam0, 0, "main_menu", "CustomizeOutfitEnabled", 0);
	func_327(uParam0, 1, "main_menu", "CustomizeOutfitVisible", 0);
	func_327(uParam0, 2, "itemInfo", "text1visible", 0);
	func_327(uParam0, 3, "itemInfo", "text2visible", 0);
	func_327(uParam0, 4, "itemInfo", "text3visible", 0);
	func_327(uParam0, 5, "item_style", "ExtraOptionPromptEnabled", 0);
	func_327(uParam0, 6, "item_style", "ExtraOptionPromptVisible", 0);
	func_327(uParam0, 7, "item_style", "SaveOutfitOptionEnabled", 0);
	func_327(uParam0, 8, "item_style", "SaveOutfitOptionVisible", 0);
	func_327(uParam0, 9, "item_style", "InspectItemOptionEnabled", 1);
	func_327(uParam0, 10, "item_style", "InspectItemOptionVisible", 1);
	func_328(uParam0, 0, "header", "label", joaat("PLAYER_WARDROBE_MAIN_MENU"));
	func_328(uParam0, 1, "header", "sublabel", 0);
	func_328(uParam0, 2, "footer", "label", 0);
	func_328(uParam0, 3, "itemInfo", "text1", 0);
	func_328(uParam0, 4, "itemInfo", "text2", 0);
	func_328(uParam0, 5, "itemInfo", "text3", 0);
	func_328(uParam0, 6, "item_style", "back_link", joaat("BACK"));
	func_328(uParam0, 7, "item_style", "ExtraOptionPromptKey", -430643131);
	func_328(uParam0, 8, "item_style", "SaveOutfitOptionPromptKey", -1400108436);
	func_328(uParam0, 9, "item_style", "InspectItemOptionPromptKey", joaat("INSPECT_GENERIC"));
	func_329(uParam0, 0, "footer", "labelRaw", "");
	uParam0->f_5861 = 1;
}

void func_91()
{
	int iVar0;
	struct<2> /*16*/ sVar1;
	Vector3 vVar3;
	struct<2> /*16*/ sVar6;

	func_330();
	Global_1946054 = 0;
	func_331();
	Global_1946054.f_2535.f_2 = 0;
	Global_1946054.f_2535.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1946054.f_2535.f_43[iVar0 /*2*/] = { sVar1 /*2*/ };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946054.f_2535.f_3[iVar0] = 0;
		vVar3.x = Global_1946054.f_57[iVar0 /*11*/];
		Global_1946054.f_1497.f_1[iVar0 /*3*/] = { vVar3 /*3*/ };
		Global_1946054.f_1378.f_1[iVar0 /*3*/] = { vVar3 /*3*/ };
		Global_1946054.f_2456[iVar0 /*2*/] = { sVar6 /*2*/ };
		Global_1946054.f_2377[iVar0 /*2*/] = 0;
		Global_1946054.f_2377[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	Global_1946054.f_2589.f_1 = 0;
	Global_1946054.f_2589 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1946054.f_2589.f_2[iVar0 /*2*/] = 39;
		iVar0++;
	}
	Global_1946054.f_2792 = 1;
	Global_1946054.f_2793 = 0;
}

bool func_92(int iParam0)
{
	return Global_26796.f_774 & iParam0 != 0;
}

void func_93(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_332(iVar1, 0))
		{
			func_333(iVar1, 0, bParam0);
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

bool func_94(int iParam0, bool bParam1)
{
	switch (func_334(iParam0))
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

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	Vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_335(iParam0, 1, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
	if (func_336(iParam0))
	{
		func_333(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_338(func_337(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946054.f_57[iVar1 /*11*/];
		Global_1946054.f_1616.f_1[iVar1 /*3*/] = { vVar4 /*3*/ };
		Global_1946054.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946054.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946054.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (func_339() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR"))
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_100(&(Global_1946054.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_100(&(Global_1946054.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946054.f_1616.f_1[8 /*3*/] = { func_340(8, 0) /*3*/ };
	Global_1946054.f_1616.f_1[9 /*3*/] = { func_340(9, 0) /*3*/ };
	Global_1946054.f_1616.f_1[0 /*3*/] = { func_340(0, 0) /*3*/ };
	Global_1946054.f_1616.f_1[2 /*3*/] = { func_340(2, 0) /*3*/ };
	Global_1946054.f_1616.f_1[3 /*3*/] = { func_340(3, 0) /*3*/ };
	Global_1946054.f_1616.f_1[1 /*3*/] = { func_340(1, 0) /*3*/ };
	Global_1946054.f_1616.f_1[5 /*3*/] = { func_340(5, 0) /*3*/ };
	Global_1946054.f_1616.f_1[6 /*3*/] = { func_340(6, 0) /*3*/ };
	Global_1946054.f_1616.f_1[7 /*3*/] = { func_340(7, 0) /*3*/ };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_341(iVar8, iVar0))
				{
					func_342(&(Global_1946054.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_341(iVar8, iVar0))
		{
			func_342(&(Global_1946054.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946054.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946054.f_1497.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] /*3*/ };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] /*3*/ };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946054.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946054.f_1497.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] /*3*/ };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] /*3*/ };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946054.f_1378.f_1[iVar1 /*3*/] = { Global_1946054.f_1616.f_1[iVar1 /*3*/] /*3*/ };
		iVar1++;
	}
}

void func_96()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_341(iVar5, iVar0);
		if (iVar1 == Global_1946054.f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_339() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || func_339() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"))
			{
				vVar2.x = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
				vVar2.f_1 = 1530758430;
				func_342(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = joaat("BASE");
				func_342(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
	vVar2.f_1 = 1530758430;
	if (Global_1946054.f_57[iVar5 /*11*/] == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] = { vVar2 /*3*/ };
	}
}

void func_97(int iParam0)
{
	Global_26796.f_774 |= iParam0;
}

void func_98()
{
	var uVar0;
	var uVar6;

	func_343(&(Global_1946054.f_1378), -1);
	func_344();
	func_106(7);
	uVar0 = 5;
	func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	if (!func_345(&uVar0))
	{
		func_346(&uVar0);
		func_347(0, 1);
	}
	if (!func_348(&uVar6, &(Global_26796.f_627.f_1.f_1)))
	{
		func_349(&(Global_26796.f_627.f_1.f_1), 1);
	}
}

void func_99(int iParam0)
{
	Global_1946054.f_1 = iParam0;
}

bool func_100(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> /*32*/ sVar4;

	sVar4.f_0 = func_350(iParam6);
	sVar4.f_1 = iParam1;
	sVar4.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar4);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &sVar4, joaat("PARTIAL"));
	DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, 2049745650);
	*bParam2 = bVar2;
	Global_1946054.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_352(uParam0, func_351(iVar0), 1);
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar4))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, joaat("COMPONENT_TYPE")))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_338(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946054.f_2612[Global_1946054.f_2652] = iVar1;
				Global_1946054.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; // curOff = 278
						if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, 1194786549))
						{
							if (func_353(iVar3) && func_354(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946054.f_2652)
						{
							func_355(uParam0, uParam0->f_1[Global_1946054.f_2612[iVar1] /*3*/], Global_1946054.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;

	if (func_115() == -1)
	{
		sVar2.f_0 = -1394038466;
	}
	else
	{
		sVar2.f_0 = 545953470;
	}
	sVar2.f_1 = iParam0;
	sVar2.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar2);
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar2))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar1, &sVar2, joaat("META_TYPE")))
		{
			return;
		}
		iVar0 = func_338(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_356(&(Global_1946054.f_1378.f_1[iVar0 /*3*/]), 2, 6);
		}
	}
}

void func_102(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_357()) || bParam5)
		{
			func_344();
		}
	}
	if (func_115() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_358(Global_1946054.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_359(Global_40.f_7729);
				Global_1946054.f_1378 = func_359(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_360(iVar0);
	}
	if (iParam3 & iVar1)
	{
		func_361(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_347(0, 1);
	}
	func_362(0);
}

void func_103(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	func_363(&(Global_1946054.f_1497), iParam0);
	if (bParam2)
	{
		func_364(2, iParam0, 6);
	}
	if (bParam1)
	{
		func_347(0, 1);
	}
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_365(iParam0, Global_35, iParam1, iParam2, iParam3, bParam4);
	func_366();
}

void func_105(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		iParam0 = func_367();
	}
	func_368(iParam0, Global_35, iParam1, bParam2);
	func_369();
}

void func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_115() == -1)
	{
		func_370(352481484);
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
		if (func_371(iVar2) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_372(&(Global_1946054.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_373(iVar2, 0))
		{
			func_374(iVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_107()
{
	int iVar0;
	int iVar1;

	Global_1310750.f_16036 = 0;
	Global_1310750.f_16037 = 0;
	func_375(-1);
	Global_1310750.f_16038 = 0;
	Global_1310750.f_16039 = 0;
	Global_1310750.f_16069 = 6;
	Global_1310750.f_16070 = 3;
	Global_1310750.f_16077 = 0;
	Global_1310750.f_16071 = -1;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_376(&(Global_1310750[iVar0 /*111*/]));
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_377(iVar1);
		iVar1++;
	}
}

void func_108(int iParam0, char* sParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	struct<30> /*240*/ sVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_378(iParam0))
	{
		return;
	}
	if (iParam9 != -1)
	{
	}
	if (func_379(iParam5, (1 << 16)) && iParam9 < 60)
	{
		iParam9 = 60;
	}
	Global_1310750[iParam0 /*111*/] = iParam5;
	Global_1310750[iParam0 /*111*/].f_1 = iParam11;
	Global_1310750[iParam0 /*111*/].f_44 = fParam3;
	Global_1310750[iParam0 /*111*/].f_2 = iParam4;
	strcpy_s(&(Global_1310750[iParam0 /*111*/].f_40), 32, sParam1);
	Global_1310750[iParam0 /*111*/].f_38 = iParam6;
	Global_1310750[iParam0 /*111*/].f_36 = iParam8;
	Global_1310750[iParam0 /*111*/].f_37 = iParam7;
	Global_1310750[iParam0 /*111*/].f_39 = iParam12;
	Global_1310750[iParam0 /*111*/].f_62 = iParam15;
	Global_1310750[iParam0 /*111*/].f_61 = (1.0f - ((float)func_380(iParam0) / 45.0f));
	sVar0 = -1;
	sVar0.f_1 = -1;
	sVar0.f_2 = -1;
	sVar0.f_3 = -1;
	sVar0.f_4 = 8;
	sVar0.f_4.f_1.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Global_1310750[iParam0 /*111*/].f_4 = { sVar0 /*30*/ };
	Global_1310750[iParam0 /*111*/].f_4 = iParam9;
	Global_1310750[iParam0 /*111*/].f_4.f_1 = iParam13;
	Global_1310750[iParam0 /*111*/].f_4.f_2 = iParam10;
	Global_1310750[iParam0 /*111*/].f_4.f_3 = iParam14;
	if (Global_17504.f_42[iParam0 /*8*/].f_5 == 0)
	{
		Global_17504.f_42[iParam0 /*8*/].f_5 = iParam2;
	}
	func_381(1);
}

void func_109(int iParam0, Vector3 vParam1, int iParam4)
{
	int iVar0;

	if (iParam4 < 0)
	{
		return;
	}
	if (func_380(iParam0) == 0)
	{
		return;
	}
	iVar0 = (func_382(iParam0) + iParam4);
	if (iVar0 >= 892)
	{
		return;
	}
	Global_1310750.f_13358[iVar0 /*3*/] = { vParam1 /*3*/ };
}

void func_110(int iParam0)
{
	Stack.Invoke(iParam0, 0, -1055.963f, -794.308f, 59.2567f, 0);
	Stack.Invoke(iParam0, 0, -1158.078f, -155.114f, 88.889f, 1);
	Stack.Invoke(iParam0, 0, -1370.712f, -515.7384f, 125.267f, 2);
	Stack.Invoke(iParam0, 0, -1029.465f, -492.4087f, 101.0615f, 3);
	Stack.Invoke(iParam0, 0, -1234.665f, -1371.778f, 80.796f, 4);
	Stack.Invoke(iParam0, 0, -1525.164f, 1722.86f, 239.152f, 5);
	Stack.Invoke(iParam0, 0, -319.5499f, 203.8464f, 62.1121f, 6);
	Stack.Invoke(iParam0, 0, -513.8f, 345.2f, 49.8945f, 7);
	Stack.Invoke(iParam0, 0, 2150.374f, 1728.215f, 125.2313f, 8);
	Stack.Invoke(iParam0, 0, 2179.106f, -25.3714f, 51.3658f, 9);
	Stack.Invoke(iParam0, 1, -1487.833f, 384.474f, 102.2717f, 0);
	Stack.Invoke(iParam0, 1, -1286.226f, 148.542f, 71.8978f, 1);
	Stack.Invoke(iParam0, 1, -2379.321f, 135.6397f, 236.9608f, 2);
	Stack.Invoke(iParam0, 1, -2618.931f, 90.8313f, 166.3284f, 3);
	Stack.Invoke(iParam0, 1, -1746.079f, -914.7423f, 100.5956f, 4);
	Stack.Invoke(iParam0, 1, -2036.105f, -507.9698f, 149.6753f, 5);
	Stack.Invoke(iParam0, 1, -1149.823f, -766.3174f, 63.4474f, 6);
	Stack.Invoke(iParam0, 1, -2526.743f, -108.6706f, 165.4704f, 7);
	Stack.Invoke(iParam0, 1, 675.9786f, 1789.638f, 216.4616f, 8);
	Stack.Invoke(iParam0, 1, 1450.093f, 1325.142f, 161.2261f, 9);
	Stack.Invoke(iParam0, 1, 2523.959f, 1320.4f, 122.2039f, 10);
	Stack.Invoke(iParam0, 1, 2786.135f, 1908.004f, 161.0971f, 11);
	Stack.Invoke(iParam0, 2, 1786.959f, -859.9387f, 41.2511f, 0);
	Stack.Invoke(iParam0, 2, 1876.321f, -1028.481f, 42.4603f, 1);
	Stack.Invoke(iParam0, 2, -1537.491f, 72.5534f, 103.3094f, 2);
	Stack.Invoke(iParam0, 2, -2141.266f, -474.7134f, 145.5408f, 3);
	Stack.Invoke(iParam0, 2, -1433.692f, 518.1367f, 100.4129f, 4);
	Stack.Invoke(iParam0, 2, -2750.55f, -173.6202f, 152.7051f, 5);
	Stack.Invoke(iParam0, 2, -1453.446f, -528.2103f, 130.2089f, 6);
	Stack.Invoke(iParam0, 2, -942.714f, -363.6332f, 51.5706f, 7);
	Stack.Invoke(iParam0, 2, 2719.558f, 1.671f, 50.5135f, 8);
	Stack.Invoke(iParam0, 2, 2578.217f, -156.0283f, 40.8259f, 9);
	Stack.Invoke(iParam0, 2, 798.2251f, 1174.869f, 136.9281f, 10);
	Stack.Invoke(iParam0, 2, -1205.845f, -1835.353f, 60.0304f, 11);
	Stack.Invoke(iParam0, 2, -1481.471f, -1895.701f, 54.6699f, 12);
	Stack.Invoke(iParam0, 2, -1422.307f, -1295.345f, 79.9456f, 13);
	Stack.Invoke(iParam0, 2, -1164.6f, 812.0777f, 118.4599f, 14);
	Stack.Invoke(iParam0, 2, -817.9949f, 1228.166f, 165.4198f, 15);
	Stack.Invoke(iParam0, 2, -211.6961f, 1760.762f, 192.2563f, 16);
	Stack.Invoke(iParam0, 2, 2645.415f, 1322.111f, 111.4558f, 17);
	Stack.Invoke(iParam0, 2, 2668.904f, 1885.954f, 99.8509f, 18);
	Stack.Invoke(iParam0, 2, 1937.39f, 494.5891f, 129.4169f, 19);
	Stack.Invoke(iParam0, 2, 1000.586f, -1297.523f, 54.0335f, 20);
	Stack.Invoke(iParam0, 2, 1279.088f, -1602.72f, 64.2665f, 21);
	Stack.Invoke(iParam0, 2, 1467.28f, -2234.456f, 42.7965f, 22);
	Stack.Invoke(iParam0, 3, 1845.744f, -382.1896f, 42.0126f, 0);
	Stack.Invoke(iParam0, 3, 1315.011f, -1640.398f, 65.989f, 1);
	Stack.Invoke(iParam0, 3, 782.4731f, -904.5656f, 50.1819f, 2);
	Stack.Invoke(iParam0, 3, 860.498f, -535.0154f, 87.8863f, 3);
	Stack.Invoke(iParam0, 3, 1385.528f, -1699.039f, 66.6297f, 4);
	Stack.Invoke(iParam0, 3, 1568.277f, -1167.119f, 44.87f, 5);
	Stack.Invoke(iParam0, 4, -1670.333f, 266.4697f, 108.1011f, 0);
	Stack.Invoke(iParam0, 4, -1606.08f, -600.0643f, 137.6851f, 1);
	Stack.Invoke(iParam0, 4, -1049.648f, -241.2274f, 82.7866f, 2);
	Stack.Invoke(iParam0, 4, -1390.346f, 115.5974f, 84.4519f, 3);
	Stack.Invoke(iParam0, 4, -2065.955f, -401.2512f, 163.9114f, 4);
	Stack.Invoke(iParam0, 4, -2036.99f, -507.4617f, 149.6441f, 5);
	Stack.Invoke(iParam0, 4, 1894.808f, 1525.642f, 190.2607f, 6);
	Stack.Invoke(iParam0, 4, 1769.377f, 1642.661f, 175.514f, 7);
	Stack.Invoke(iParam0, 4, 614.9883f, 1919.951f, 202.9879f, 8);
	Stack.Invoke(iParam0, 4, -885.1455f, 262.5286f, 89.5462f, 9);
	Stack.Invoke(iParam0, 4, 2707.656f, 564.3442f, 83.4308f, 10);
	Stack.Invoke(iParam0, 4, 2422.132f, 1697.106f, 95.8792f, 11);
	Stack.Invoke(iParam0, 4, 2690.929f, 646.9717f, 75.0821f, 12);
	Stack.Invoke(iParam0, 4, 2286.213f, 1649.257f, 84.9657f, 13);
	Stack.Invoke(iParam0, 4, 2367.635f, 1067.088f, 83.5814f, 14);
	Stack.Invoke(iParam0, 4, 2762.281f, 1014.418f, 61.2793f, 15);
	Stack.Invoke(iParam0, 4, 2014.741f, 68.3487f, 74.0225f, 16);
	Stack.Invoke(iParam0, 5, 2421.238f, 904.8784f, 72.1375f, 0);
	Stack.Invoke(iParam0, 6, 1575.285f, -7256.714f, 66.2668f, 0);
	Stack.Invoke(iParam0, 6, 2581.069f, 624.2234f, 73.5388f, 1);
	Stack.Invoke(iParam0, 6, 2418.696f, 1069.465f, 86.3128f, 2);
	Stack.Invoke(iParam0, 7, -1170.479f, -569.0327f, 89.3336f, 0);
	Stack.Invoke(iParam0, 7, -2449.058f, -291.0107f, 151.4994f, 1);
	Stack.Invoke(iParam0, 7, -1720.802f, -5.5522f, 162.8418f, 2);
	Stack.Invoke(iParam0, 7, -880.1243f, -362.286f, 42.7127f, 3);
	Stack.Invoke(iParam0, 7, -1288.498f, 247.4669f, 58.5024f, 4);
	Stack.Invoke(iParam0, 7, -1402.131f, -849.902f, 82.4184f, 5);
	Stack.Invoke(iParam0, 7, 225.7709f, 1158.758f, 174.4377f, 6);
	Stack.Invoke(iParam0, 7, 650.7831f, 1401.268f, 181.6239f, 7);
	Stack.Invoke(iParam0, 7, 779.0355f, 1119.058f, 130.8968f, 8);
	Stack.Invoke(iParam0, 7, 1579.289f, 1602.642f, 147.0162f, 9);
	Stack.Invoke(iParam0, 7, 1567.098f, 935.3324f, 151.5608f, 10);
	Stack.Invoke(iParam0, 7, 2040.047f, 1491.969f, 156.9985f, 11);
	Stack.Invoke(iParam0, 7, 1833.187f, 1405.746f, 180.4263f, 12);
	Stack.Invoke(iParam0, 7, 1072.866f, 1883.61f, 319.825f, 13);
	Stack.Invoke(iParam0, 7, 140.3275f, -473.635f, 67.9336f, 14);
	Stack.Invoke(iParam0, 7, 256.8135f, 677.2663f, 140.556f, 15);
	Stack.Invoke(iParam0, 7, 1261.531f, 110.901f, 92.27f, 16);
	Stack.Invoke(iParam0, 7, 2478.172f, 1372.623f, 104.4044f, 17);
	Stack.Invoke(iParam0, 7, 2876.074f, 823.1032f, 47.909f, 18);
	Stack.Invoke(iParam0, 7, 1966.588f, 174.9707f, 83.3576f, 19);
	Stack.Invoke(iParam0, 7, 2468.748f, 711.0537f, 70.8931f, 20);
	Stack.Invoke(iParam0, 7, 2195.63f, 1647.953f, 104.3184f, 21);
	Stack.Invoke(iParam0, 7, 2848.011f, 2102.51f, 158.2506f, 22);
	Stack.Invoke(iParam0, 8, -3312.915f, -2859.827f, -6.4145f, 0);
	Stack.Invoke(iParam0, 9, 2546.94f, 1819.922f, 85.0674f, 0);
	Stack.Invoke(iParam0, 9, 2377.356f, 1070.137f, 84.0566f, 1);
	Stack.Invoke(iParam0, 9, 2535.767f, 1513.889f, 84.9165f, 2);
	Stack.Invoke(iParam0, 9, 2549.248f, 612.5594f, 73.8611f, 3);
	Stack.Invoke(iParam0, 9, 2023.741f, 159.2145f, 78.313f, 4);
	Stack.Invoke(iParam0, 9, 2813.322f, 688.974f, 68.6338f, 5);
	Stack.Invoke(iParam0, 9, 2400.434f, 877.9274f, 73.1443f, 6);
	Stack.Invoke(iParam0, 9, 2175.463f, 1745.422f, 119.0117f, 7);
	Stack.Invoke(iParam0, 10, 914.288f, -1205.978f, 50.759f, 0);
	Stack.Invoke(iParam0, 10, 905.55f, -1117.134f, 52.439f, 1);
	Stack.Invoke(iParam0, 11, 2142.091f, -1322.714f, 41.4496f, 0);
	Stack.Invoke(iParam0, 11, 1712.28f, -1928.207f, 46.2584f, 1);
	Stack.Invoke(iParam0, 11, 807.8684f, -873.498f, 52.0023f, 2);
	Stack.Invoke(iParam0, 11, 1477.416f, -832.9807f, 49.4009f, 3);
	Stack.Invoke(iParam0, 12, -1306.382f, 113.2325f, 71.617f, 0);
	Stack.Invoke(iParam0, 12, -1195.567f, -348.8055f, 98.6331f, 1);
	Stack.Invoke(iParam0, 12, -1631.463f, -508.5251f, 147.7541f, 2);
	Stack.Invoke(iParam0, 12, 236.428f, 1172.058f, 174.6809f, 3);
	Stack.Invoke(iParam0, 12, -865.4097f, -1807.907f, 64.0395f, 4);
	Stack.Invoke(iParam0, 12, -1407.439f, -1969.719f, 43.6107f, 5);
	Stack.Invoke(iParam0, 12, -556.52f, -519.95f, 51.67f, 6);
	Stack.Invoke(iParam0, 12, -487.89f, -187.13f, 44.06f, 7);
	Stack.Invoke(iParam0, 12, -590.1177f, 209.5994f, 43.5616f, 8);
	Stack.Invoke(iParam0, 12, 45.2288f, -309.8703f, 100.0965f, 9);
	Stack.Invoke(iParam0, 12, 553.2196f, -536.8489f, 76.4877f, 10);
	Stack.Invoke(iParam0, 12, -1995.538f, -1374.255f, 116.3711f, 11);
	Stack.Invoke(iParam0, 12, -1714.634f, -1728.958f, 87.8438f, 12);
	Stack.Invoke(iParam0, 12, -2200.82f, -1609.284f, 145.6673f, 13);
	Stack.Invoke(iParam0, 12, -5709.795f, -3189.099f, -22.8911f, 14);
	Stack.Invoke(iParam0, 12, -5399.68f, -2344.885f, -6.7089f, 15);
	Stack.Invoke(iParam0, 12, -4239.465f, -3047.282f, -9.0733f, 16);
	Stack.Invoke(iParam0, 12, -1641.005f, -2451.688f, 42.6606f, 17);
	Stack.Invoke(iParam0, 13, 2670.833f, -67.0281f, 48.336f, 0);
	Stack.Invoke(iParam0, 13, 2576.186f, -146.486f, 40.6007f, 1);
	Stack.Invoke(iParam0, 13, 2528.167f, -334.5139f, 40.5561f, 2);
	Stack.Invoke(iParam0, 13, 2483.223f, 640.42f, 71.172f, 3);
	Stack.Invoke(iParam0, 13, 2455.024f, 1296.882f, 105.8737f, 4);
	Stack.Invoke(iParam0, 13, 2117.905f, 1061.24f, 122.0916f, 5);
	Stack.Invoke(iParam0, 13, 2583.339f, 342.9637f, 75.1561f, 6);
	Stack.Invoke(iParam0, 13, 2583.125f, 550.2842f, 71.8067f, 7);
	Stack.Invoke(iParam0, 13, 2474.518f, 1548.916f, 84.656f, 8);
	Stack.Invoke(iParam0, 13, 2253.517f, 1718.977f, 102.4056f, 9);
	Stack.Invoke(iParam0, 13, 2159.47f, 929.917f, 115.51f, 10);
	Stack.Invoke(iParam0, 13, 2483.802f, 982.8178f, 93.2f, 11);
	Stack.Invoke(iParam0, 14, -1489.081f, -553.8191f, 131.9622f, 0);
	Stack.Invoke(iParam0, 14, -1756.841f, 274.1943f, 117.8263f, 1);
	Stack.Invoke(iParam0, 14, -2759.282f, -152.587f, 151.1035f, 2);
	Stack.Invoke(iParam0, 14, -719.2486f, -746.223f, 49.1092f, 3);
	Stack.Invoke(iParam0, 14, 947.882f, -1259.494f, 53.9254f, 4);
	Stack.Invoke(iParam0, 14, 1089.484f, -1413.609f, 55.7283f, 5);
	Stack.Invoke(iParam0, 14, 1287.923f, -1601.335f, 64.1793f, 6);
	Stack.Invoke(iParam0, 15, -6004.122f, -3324.721f, -22.3552f, 0);
	Stack.Invoke(iParam0, 15, -5710.4f, -3611.259f, -24.0623f, 1);
	Stack.Invoke(iParam0, 15, -6367.312f, -3696.248f, -26.9076f, 2);
	Stack.Invoke(iParam0, 15, -6181.481f, -3434.711f, 10.3617f, 3);
	Stack.Invoke(iParam0, 15, -5445.042f, -2381.805f, -8.8016f, 4);
	Stack.Invoke(iParam0, 15, -5166.418f, -4006.568f, -2.0995f, 5);
	Stack.Invoke(iParam0, 15, -4750.027f, -3503.733f, 6.4091f, 6);
	Stack.Invoke(iParam0, 15, -4635.242f, -3155.196f, 8.7009f, 7);
	Stack.Invoke(iParam0, 15, -3333.342f, -2281.94f, -1.519f, 8);
	Stack.Invoke(iParam0, 15, -3970.378f, -3056.023f, -14.1397f, 9);
	Stack.Invoke(iParam0, 15, -3485.25f, -2615.361f, -13.7497f, 10);
	Stack.Invoke(iParam0, 15, -4624.896f, -2718.001f, -11.4759f, 11);
	Stack.Invoke(iParam0, 15, -3840.919f, -2867.934f, -16.9531f, 12);
	Stack.Invoke(iParam0, 15, -4294.354f, -3060.137f, -11.9705f, 13);
	Stack.Invoke(iParam0, 15, -3408.869f, -2265.132f, -4.672f, 14);
	Stack.Invoke(iParam0, 15, -3091.015f, -3144.075f, 1.038f, 15);
	Stack.Invoke(iParam0, 15, -2437.71f, -2588.429f, 78.7262f, 16);
	Stack.Invoke(iParam0, 15, -2567.323f, -2494.148f, 65.939f, 17);
	Stack.Invoke(iParam0, 15, -2461.365f, -2240.474f, 63.969f, 18);
	Stack.Invoke(iParam0, 15, -2409.346f, -2617.091f, 80.418f, 19);
	Stack.Invoke(iParam0, 15, -1752.983f, -2700.622f, 65.558f, 20);
	Stack.Invoke(iParam0, 16, -1851.588f, 510.342f, 113.8007f, 0);
	Stack.Invoke(iParam0, 16, -2696.748f, -55.4263f, 152.7823f, 1);
	Stack.Invoke(iParam0, 16, 2608.757f, -180.0931f, 43.1903f, 2);
	Stack.Invoke(iParam0, 16, -1387.126f, -1085.839f, 75.6182f, 3);
	Stack.Invoke(iParam0, 16, -1152.193f, -1798.524f, 60.6213f, 4);
	Stack.Invoke(iParam0, 16, -1414.061f, -1516.014f, 85.2022f, 5);
	Stack.Invoke(iParam0, 16, 293.0865f, -28.2385f, 106.7794f, 6);
	Stack.Invoke(iParam0, 16, 862.3326f, -96.2031f, 115.005f, 7);
	Stack.Invoke(iParam0, 16, -603.3961f, -400.8001f, 79.4605f, 8);
	Stack.Invoke(iParam0, 16, 791.0897f, 616.5367f, 119.004f, 9);
	Stack.Invoke(iParam0, 16, -367.7098f, -242.7611f, 87.375f, 10);
	Stack.Invoke(iParam0, 16, 797.4579f, 430.6508f, 106.9812f, 11);
	Stack.Invoke(iParam0, 16, 2094.507f, 181.8995f, 74.0113f, 12);
	Stack.Invoke(iParam0, 16, 2499.579f, 876.0915f, 72.6963f, 13);
	Stack.Invoke(iParam0, 16, 2716.55f, 2312.971f, 155.8205f, 14);
	Stack.Invoke(iParam0, 16, 2753.107f, 183.9333f, 50.8669f, 15);
	Stack.Invoke(iParam0, 16, 855.8201f, -1136.222f, 57.4167f, 16);
	Stack.Invoke(iParam0, 16, 781.47f, -819.1086f, 54.7764f, 17);
	Stack.Invoke(iParam0, 16, 1143.297f, -784.0272f, 89.0981f, 18);
	Stack.Invoke(iParam0, 17, 1895.321f, -1591.593f, 43.1308f, 0);
	Stack.Invoke(iParam0, 17, 1750.934f, -1113.128f, 41.0289f, 1);
	Stack.Invoke(iParam0, 17, 222.5815f, 1149.064f, 174.777f, 2);
	Stack.Invoke(iParam0, 17, 643.9483f, 1537.771f, 179.2453f, 3);
	Stack.Invoke(iParam0, 17, 1249.946f, 1228.457f, 149.847f, 4);
	Stack.Invoke(iParam0, 17, 1888.344f, 1412.769f, 176.1192f, 5);
	Stack.Invoke(iParam0, 17, 881.3965f, 832.8646f, 115.2099f, 6);
	Stack.Invoke(iParam0, 17, 205.5776f, -492.6277f, 71.7359f, 7);
	Stack.Invoke(iParam0, 17, 1086.457f, 1232.933f, 194.9449f, 8);
	Stack.Invoke(iParam0, 17, 1449.297f, -394.4464f, 79.9583f, 9);
	Stack.Invoke(iParam0, 17, 1524.993f, -1166.959f, 51.2036f, 10);
	Stack.Invoke(iParam0, 17, 1197.925f, -734.7637f, 77.7386f, 11);
	Stack.Invoke(iParam0, 18, 2080.316f, -1506.239f, 40.6063f, 0);
	Stack.Invoke(iParam0, 18, 1953.527f, -1641.328f, 40.6f, 1);
	Stack.Invoke(iParam0, 18, 2119.107f, -1219.469f, 40.5981f, 2);
	Stack.Invoke(iParam0, 18, 2825.327f, 59.2099f, 44.5063f, 3);
	Stack.Invoke(iParam0, 18, 2679.948f, -578.2466f, 41.2777f, 4);
	Stack.Invoke(iParam0, 18, 1553.726f, -1050.726f, 43.0253f, 5);
	Stack.Invoke(iParam0, 18, 1664.248f, -648.8722f, 42.21f, 6);
	Stack.Invoke(iParam0, 19, 1553.265f, -1413.049f, 60.7066f, 0);
	Stack.Invoke(iParam0, 20, -1790.522f, 391.7672f, 111.5168f, 0);
	Stack.Invoke(iParam0, 20, -2257.545f, 522.8431f, 118.2666f, 1);
	Stack.Invoke(iParam0, 20, -2027.111f, 523.7131f, 115.7621f, 2);
	Stack.Invoke(iParam0, 20, -1617.713f, -586.0815f, 138.1433f, 3);
	Stack.Invoke(iParam0, 20, -1651.088f, -200.7669f, 169.3779f, 4);
	Stack.Invoke(iParam0, 20, 337.933f, 1066.953f, 186.7877f, 5);
	Stack.Invoke(iParam0, 20, 365.0997f, 1012.086f, 189.1479f, 6);
	Stack.Invoke(iParam0, 20, 803.338f, 1073.402f, 121.7332f, 7);
	Stack.Invoke(iParam0, 20, -1288.621f, -1028.793f, 70.6405f, 8);
	Stack.Invoke(iParam0, 20, -1138.14f, -1667.854f, 72.6074f, 9);
	Stack.Invoke(iParam0, 20, -339.4998f, 20.8646f, 42.7751f, 10);
	Stack.Invoke(iParam0, 20, 1265.752f, 825.5964f, 100.082f, 11);
	Stack.Invoke(iParam0, 20, -686.8791f, -446.1221f, 50.8213f, 12);
	Stack.Invoke(iParam0, 20, 2556.097f, 1203.034f, 162.9738f, 13);
	Stack.Invoke(iParam0, 20, 2098.175f, 328.825f, 76.9f, 14);
	Stack.Invoke(iParam0, 20, 1295.438f, -782.6951f, 74.8111f, 15);
	Stack.Invoke(iParam0, 20, 769.7879f, -889.8244f, 49.77f, 16);
	Stack.Invoke(iParam0, 21, -1598.758f, 1837.399f, 298.0538f, 0);
	Stack.Invoke(iParam0, 21, -974.2156f, 2660.971f, 319.8254f, 1);
	Stack.Invoke(iParam0, 21, -1219.986f, 2100f, 339.3748f, 2);
	Stack.Invoke(iParam0, 22, 1530.94f, -7293.91f, 72.84f, 0);
	Stack.Invoke(iParam0, 23, 1618.318f, -1818.743f, 49.6597f, 0);
	Stack.Invoke(iParam0, 23, 2033.182f, -427.7802f, 41.6463f, 1);
	Stack.Invoke(iParam0, 23, 2164.61f, -960.8591f, 41.7505f, 2);
	Stack.Invoke(iParam0, 23, 2587.608f, -733.6299f, 41.4225f, 3);
	Stack.Invoke(iParam0, 23, 2554.041f, -189.0652f, 42.1887f, 4);
	Stack.Invoke(iParam0, 23, 586.9903f, -520.9417f, 76.1102f, 5);
	Stack.Invoke(iParam0, 23, 1143.783f, -36.1089f, 88.0587f, 6);
	Stack.Invoke(iParam0, 23, 1666.967f, 74.2819f, 76.1463f, 7);
	Stack.Invoke(iParam0, 23, 2080.0f, -230.5491f, 45.829f, 8);
	Stack.Invoke(iParam0, 23, 2696.571f, 180.1419f, 52.5405f, 9);
	Stack.Invoke(iParam0, 23, 2581.068f, 533.5328f, 70.1641f, 10);
	Stack.Invoke(iParam0, 23, 2855.96f, 760.7198f, 55.2413f, 11);
	Stack.Invoke(iParam0, 23, 1527.606f, -1702.616f, 58.085f, 12);
	Stack.Invoke(iParam0, 23, 1213.094f, -1589.716f, 55.9733f, 13);
	Stack.Invoke(iParam0, 23, 1513.254f, -2005.747f, 43.0278f, 14);
	Stack.Invoke(iParam0, 23, 1062.177f, -1341.672f, 56.9639f, 15);
	Stack.Invoke(iParam0, 23, 1156.332f, -1160.091f, 70.2091f, 16);
	Stack.Invoke(iParam0, 24, -808.5091f, -361.2252f, 40.6701f, 0);
	Stack.Invoke(iParam0, 24, -2151.432f, 532.3184f, 115.9584f, 1);
	Stack.Invoke(iParam0, 24, -1943.116f, 581.7615f, 114.4217f, 2);
	Stack.Invoke(iParam0, 24, -935.6732f, -837.0477f, 42.0009f, 3);
	Stack.Invoke(iParam0, 24, 1588.625f, 1549.986f, 144.8906f, 4);
	Stack.Invoke(iParam0, 24, 601.0182f, 2291.333f, 221.6742f, 5);
	Stack.Invoke(iParam0, 24, -469.3123f, 192.8325f, 40.5531f, 6);
	Stack.Invoke(iParam0, 24, -719.5849f, 157.3127f, 41.0625f, 7);
	Stack.Invoke(iParam0, 24, -788.1081f, 584.9224f, 55.66f, 8);
	Stack.Invoke(iParam0, 24, -611.343f, -255.1613f, 40.9699f, 9);
	Stack.Invoke(iParam0, 24, 2818.075f, 2302.018f, 156.0063f, 10);
	Stack.Invoke(iParam0, 24, 2486.622f, 1697.184f, 85.6145f, 11);
	Stack.Invoke(iParam0, 24, 2287.72f, 273.7723f, 43.7751f, 12);
	Stack.Invoke(iParam0, 24, 2421.89f, 674.4467f, 66.5993f, 13);
	Stack.Invoke(iParam0, 27, 1908.322f, -1583.275f, 42.6331f, 0);
	Stack.Invoke(iParam0, 27, -1738.734f, 391.4279f, 108.8374f, 1);
	Stack.Invoke(iParam0, 27, -1130.605f, 460.2371f, 56.677f, 2);
	Stack.Invoke(iParam0, 27, -1731.106f, -832.389f, 97.45f, 3);
	Stack.Invoke(iParam0, 27, -1555.696f, 153.446f, 104.902f, 4);
	Stack.Invoke(iParam0, 27, 703.0021f, 1421.519f, 177.4066f, 5);
	Stack.Invoke(iParam0, 27, 1481.706f, 1013.085f, 167.6041f, 6);
	Stack.Invoke(iParam0, 27, 2159.43f, 444.6013f, 83.4389f, 7);
	Stack.Invoke(iParam0, 27, 1688.494f, -1617.637f, 52.7785f, 8);
	Stack.Invoke(iParam0, 27, 1548.366f, -1415.864f, 61.3286f, 9);
	Stack.Invoke(iParam0, 27, 860.2926f, -890.3083f, 51.4971f, 10);
	Stack.Invoke(iParam0, 28, 1899.5f, -1596.739f, 42.7911f, 0);
	Stack.Invoke(iParam0, 28, 1978.789f, -1533.755f, 42.5017f, 1);
	Stack.Invoke(iParam0, 28, -1274.549f, -636.8499f, 98.9627f, 2);
	Stack.Invoke(iParam0, 28, -793.994f, -543.3228f, 49.025f, 3);
	Stack.Invoke(iParam0, 28, -1183.022f, -729.2754f, 69.6085f, 4);
	Stack.Invoke(iParam0, 29, 1778.489f, 583.673f, 105.025f, 0);
	Stack.Invoke(iParam0, 29, 2452.811f, 1319.446f, 109.0229f, 1);
	Stack.Invoke(iParam0, 29, 2841.746f, 652.1951f, 66.7278f, 2);
	Stack.Invoke(iParam0, 29, 2660.135f, 905.5285f, 88.9396f, 3);
	Stack.Invoke(iParam0, 29, 2372.003f, 259.5193f, 52.9521f, 4);
	Stack.Invoke(iParam0, 29, 2700.789f, 175.9979f, 52.5134f, 5);
	Stack.Invoke(iParam0, 29, 2493.144f, 1530.348f, 84.2657f, 6);
	Stack.Invoke(iParam0, 29, 2294.375f, 1737.66f, 104.3616f, 7);
	Stack.Invoke(iParam0, 30, 2451.831f, -694.8572f, 41.7577f, 0);
	Stack.Invoke(iParam0, 30, 1806.486f, -909.022f, 40.684f, 1);
	Stack.Invoke(iParam0, 30, 2099.89f, -742.7548f, 40.7194f, 2);
	Stack.Invoke(iParam0, 30, 1661.235f, -1011.618f, 40.7948f, 3);
	Stack.Invoke(iParam0, 30, 1704.734f, -749.9987f, 40.8083f, 4);
	Stack.Invoke(iParam0, 30, 2481.833f, -765.1003f, 41.4476f, 5);
	Stack.Invoke(iParam0, 30, 2521.163f, -601.1032f, 41.3867f, 6);
	Stack.Invoke(iParam0, 30, 1623.726f, -892.3166f, 40.5351f, 7);
	Stack.Invoke(iParam0, 30, 1938.589f, -936.7589f, 42.0285f, 8);
	Stack.Invoke(iParam0, 30, 2103.147f, -826.2164f, 40.4883f, 9);
	Stack.Invoke(iParam0, 30, 2299.401f, -941.739f, 41.1985f, 10);
	Stack.Invoke(iParam0, 30, 2135.017f, -411.8303f, 40.5284f, 11);
	Stack.Invoke(iParam0, 30, 2638.828f, -87.0254f, 47.6561f, 12);
	Stack.Invoke(iParam0, 30, 2292.579f, -444.8728f, 40.562f, 13);
	Stack.Invoke(iParam0, 30, 2259.443f, -453.3075f, 40.5554f, 14);
	Stack.Invoke(iParam0, 30, 2585.694f, -420.4027f, 40.8495f, 15);
	Stack.Invoke(iParam0, 30, 2554.56f, -187.4132f, 42.1266f, 16);
	Stack.Invoke(iParam0, 30, 2526.531f, -353.9748f, 40.6981f, 17);
	Stack.Invoke(iParam0, 30, 2630.492f, -597.4164f, 41.8853f, 18);
	Stack.Invoke(iParam0, 30, -1376.207f, -1428.625f, 91.0319f, 19);
	Stack.Invoke(iParam0, 30, -955.4411f, -1810.143f, 63.6946f, 20);
	Stack.Invoke(iParam0, 30, -1810.028f, -1297.722f, 92.8288f, 21);
	Stack.Invoke(iParam0, 30, -1461.389f, -1766.659f, 81.9412f, 22);
	Stack.Invoke(iParam0, 30, -1427.516f, -1290.821f, 79.5031f, 23);
	Stack.Invoke(iParam0, 30, -1214.44f, -1818.796f, 60.5434f, 24);
	Stack.Invoke(iParam0, 30, -1563.774f, -1771.393f, 75.6756f, 25);
	Stack.Invoke(iParam0, 30, 2649.111f, 1781.49f, 102.1629f, 26);
	Stack.Invoke(iParam0, 30, 2677.185f, 584.6865f, 79.9779f, 27);
	Stack.Invoke(iParam0, 30, 2972.095f, 1738.852f, 80.5676f, 28);
	Stack.Invoke(iParam0, 30, 2472.802f, 1339.029f, 107.3666f, 29);
	Stack.Invoke(iParam0, 30, 2120.886f, 1483.531f, 134.6718f, 30);
	Stack.Invoke(iParam0, 30, 1971.526f, 345.8105f, 95.6928f, 31);
	Stack.Invoke(iParam0, 30, 2725.853f, 79.9931f, 49.5786f, 32);
	Stack.Invoke(iParam0, 30, 2578.825f, 1660.518f, 96.5618f, 33);
	Stack.Invoke(iParam0, 30, 2581.905f, 1501.502f, 84.288f, 34);
	Stack.Invoke(iParam0, 30, 2775.786f, 634.1282f, 72.6738f, 35);
	Stack.Invoke(iParam0, 30, 2862.79f, 1899.816f, 136.0872f, 36);
	Stack.Invoke(iParam0, 30, 1961.378f, 237.7049f, 76.7114f, 37);
	Stack.Invoke(iParam0, 31, -1753.305f, 146.6236f, 146.6423f, 0);
	Stack.Invoke(iParam0, 31, -2089.682f, -316.9403f, 178.7293f, 1);
	Stack.Invoke(iParam0, 31, -1208.601f, -758.1407f, 65.8343f, 2);
	Stack.Invoke(iParam0, 31, -1206.856f, 3.6938f, 42.2146f, 3);
	Stack.Invoke(iParam0, 31, -727.5645f, 78.6521f, 43.852f, 4);
	Stack.Invoke(iParam0, 31, 2708.448f, -35.6544f, 50.5802f, 5);
	Stack.Invoke(iParam0, 31, 2416.581f, -379.576f, 40.716f, 6);
	Stack.Invoke(iParam0, 31, 349.6191f, 1193.652f, 176.0611f, 7);
	Stack.Invoke(iParam0, 31, 585.87f, 1359.454f, 182.2413f, 8);
	Stack.Invoke(iParam0, 31, 788.2601f, 1308.543f, 153.7073f, 9);
	Stack.Invoke(iParam0, 31, 644.4541f, 1846.399f, 204.6257f, 10);
	Stack.Invoke(iParam0, 31, 1169.932f, 1240.534f, 170.1918f, 11);
	Stack.Invoke(iParam0, 31, 2191.762f, 2086.923f, 221.6624f, 12);
	Stack.Invoke(iParam0, 31, 2577.981f, 953.2261f, 105.2313f, 13);
	Stack.Invoke(iParam0, 31, 1773.011f, -2021.675f, 43.2631f, 14);
	Stack.Invoke(iParam0, 31, 1469.278f, -1891.963f, 47.8324f, 15);
	Stack.Invoke(iParam0, 31, 1060.511f, -486.7928f, 88.3641f, 16);
	Stack.Invoke(iParam0, 31, 1689.182f, -323.7361f, 64.2249f, 17);
	Stack.Invoke(iParam0, 31, 1495.935f, -1965.426f, 44.0482f, 18);
	Stack.Invoke(iParam0, 31, 1129.575f, -637.7903f, 87.3996f, 19);
	Stack.Invoke(iParam0, 32, -1470.029f, -510.0777f, 128.9369f, 0);
	Stack.Invoke(iParam0, 32, -1676.732f, 269.6552f, 107.9641f, 1);
	Stack.Invoke(iParam0, 32, -1400.932f, 118.5333f, 85.1616f, 2);
	Stack.Invoke(iParam0, 32, 2530.93f, -88.8537f, 49.5429f, 3);
	Stack.Invoke(iParam0, 32, -579.085f, 571.1768f, 101.2385f, 4);
	Stack.Invoke(iParam0, 32, -976.4532f, 250.0307f, 90.9676f, 5);
	Stack.Invoke(iParam0, 32, 2154.953f, 55.197f, 61.5309f, 6);
	Stack.Invoke(iParam0, 32, 906.4382f, -1278.892f, 59.6485f, 7);
	Stack.Invoke(iParam0, 32, 1700.312f, -1814.466f, 49.983f, 8);
	Stack.Invoke(iParam0, 32, 996.5635f, -1219.119f, 62.015f, 9);
	Stack.Invoke(iParam0, 33, -1374.053f, -741.9763f, 90.7132f, 0);
	Stack.Invoke(iParam0, 33, -1668.017f, 269.834f, 107.7686f, 1);
	Stack.Invoke(iParam0, 33, -1400.438f, 116.6743f, 84.7002f, 2);
	Stack.Invoke(iParam0, 33, -1117.848f, -223.7487f, 89.4773f, 3);
	Stack.Invoke(iParam0, 33, -1479.688f, -598.915f, 125.9951f, 4);
	Stack.Invoke(iParam0, 33, -579.085f, 571.1768f, 101.2385f, 5);
	Stack.Invoke(iParam0, 33, 2148.963f, 41.925f, 62.1145f, 6);
	Stack.Invoke(iParam0, 33, 2549.044f, -68.0443f, 49.1493f, 7);
	Stack.Invoke(iParam0, 33, 903.9188f, -1282.179f, 60.0311f, 8);
	Stack.Invoke(iParam0, 33, 1700.491f, -1813.515f, 50.0697f, 9);
	Stack.Invoke(iParam0, 33, 1443.971f, -978.0084f, 55.8531f, 10);
	Stack.Invoke(iParam0, 33, 910.3932f, -985.9777f, 56.96f, 11);
	Stack.Invoke(iParam0, 33, 996.5635f, -1219.119f, 62.015f, 12);
	Stack.Invoke(iParam0, 34, -1473.219f, -503.3281f, 129.027f, 0);
	Stack.Invoke(iParam0, 34, -1793.936f, 458.5961f, 111.7438f, 1);
	Stack.Invoke(iParam0, 34, -1315f, 180.6012f, 74.4296f, 2);
	Stack.Invoke(iParam0, 34, 2626.8f, -37.336f, 51.4288f, 3);
	Stack.Invoke(iParam0, 34, 858.6367f, -228.3782f, 98.6164f, 4);
	Stack.Invoke(iParam0, 34, -565.9604f, 576.061f, 101.54f, 5);
	Stack.Invoke(iParam0, 34, -405.8459f, -280.6045f, 87.186f, 6);
	Stack.Invoke(iParam0, 34, 2103.375f, 72.0044f, 68.6537f, 7);
	Stack.Invoke(iParam0, 34, 1046.873f, -188.8466f, 89.4694f, 8);
	Stack.Invoke(iParam0, 34, 704.4484f, -891.234f, 48.262f, 9);
	Stack.Invoke(iParam0, 34, 994.157f, -1220.112f, 62.0152f, 10);
	Stack.Invoke(iParam0, 35, -2432.816f, 600.1653f, 126.3298f, 0);
	Stack.Invoke(iParam0, 35, -1603.924f, 363.9144f, 103.3773f, 1);
	Stack.Invoke(iParam0, 36, 2141.337f, -1296.338f, 41.4747f, 0);
	Stack.Invoke(iParam0, 36, 2038.361f, -1036.623f, 42.4476f, 1);
	Stack.Invoke(iParam0, 36, -2592.207f, 235.6836f, 152.3149f, 2);
	Stack.Invoke(iParam0, 36, -2301.542f, -73.6087f, 237.0601f, 3);
	Stack.Invoke(iParam0, 36, -840.8934f, -203.1287f, 76.5716f, 4);
	Stack.Invoke(iParam0, 36, -1570.955f, 424.7976f, 106.8498f, 5);
	Stack.Invoke(iParam0, 36, 2629.543f, -54.2829f, 50.7092f, 6);
	Stack.Invoke(iParam0, 36, 777.232f, -794.2211f, 55.6016f, 7);
	Stack.Invoke(iParam0, 36, 879.1506f, -1217.032f, 50.0378f, 8);
	Stack.Invoke(iParam0, 36, 1589.294f, -1813.654f, 50.6747f, 9);
	Stack.Invoke(iParam0, 36, 1400.936f, -1723.739f, 67.604f, 10);
	Stack.Invoke(iParam0, 36, 1529.042f, -986.2963f, 43.2569f, 11);
	Stack.Invoke(iParam0, 37, 1718.584f, -1134.763f, 40.9841f, 0);
	Stack.Invoke(iParam0, 37, 2212.391f, -958.284f, 40.9437f, 1);
	Stack.Invoke(iParam0, 37, 2061.675f, -1028.883f, 42.225f, 2);
	Stack.Invoke(iParam0, 37, 2629.915f, -65.2306f, 50.3571f, 3);
	Stack.Invoke(iParam0, 37, 2539.124f, -164.4422f, 43.1456f, 4);
	Stack.Invoke(iParam0, 37, -641.5084f, 379.0181f, 92.4459f, 5);
	Stack.Invoke(iParam0, 37, 756.8406f, -354.5884f, 87.6244f, 6);
	Stack.Invoke(iParam0, 37, 879.8415f, -140.9315f, 102.0446f, 7);
	Stack.Invoke(iParam0, 37, -293.7909f, -257.8938f, 91.332f, 8);
	Stack.Invoke(iParam0, 37, 153.8465f, 427.3995f, 137.5257f, 9);
	Stack.Invoke(iParam0, 37, -919.447f, 67.989f, 47.314f, 10);
	Stack.Invoke(iParam0, 37, 465.0752f, -307.1457f, 142.7813f, 11);
	Stack.Invoke(iParam0, 37, -1072.983f, 30.6801f, 57.1764f, 12);
	Stack.Invoke(iParam0, 37, 1395.396f, -1661.043f, 66.2903f, 13);
	Stack.Invoke(iParam0, 37, 1607.903f, -1715.203f, 53.2411f, 14);
	Stack.Invoke(iParam0, 37, 839.8502f, -990.9603f, 52.3822f, 15);
	Stack.Invoke(iParam0, 37, 1112.213f, -893.3633f, 66.7555f, 16);
	Stack.Invoke(iParam0, 37, 1637.335f, -1590.077f, 56.6167f, 17);
	Stack.Invoke(iParam0, 37, 1491.923f, -1978.365f, 43.8377f, 18);
	Stack.Invoke(iParam0, 37, 1120.71f, -2130.175f, 51.9952f, 19);
	Stack.Invoke(iParam0, 38, -989.522f, 2219.715f, 339.224f, 0);
	Stack.Invoke(iParam0, 39, -1456.041f, -555.2747f, 131.116f, 0);
	Stack.Invoke(iParam0, 40, 2208.668f, -350.9536f, 41.488f, 0);
	Stack.Invoke(iParam0, 40, 1733.923f, -727.6727f, 40.8996f, 1);
	Stack.Invoke(iParam0, 40, -2028.171f, 421.7315f, 123.1801f, 2);
	Stack.Invoke(iParam0, 40, 238.8146f, 1242.903f, 185.8171f, 3);
	Stack.Invoke(iParam0, 40, 646.006f, 1304.928f, 193.4366f, 4);
	Stack.Invoke(iParam0, 40, 438.9673f, 831.1111f, 145.7085f, 5);
	Stack.Invoke(iParam0, 40, -545.762f, 393.6189f, 87.0076f, 6);
	Stack.Invoke(iParam0, 40, 1017.37f, 1062.322f, 158.965f, 7);
	Stack.Invoke(iParam0, 40, 2226.213f, -248.6621f, 42.5431f, 8);
	Stack.Invoke(iParam0, 40, 2566.893f, -71.0977f, 49.3333f, 9);
	Stack.Invoke(iParam0, 40, 1389.072f, -2196.696f, 48.3307f, 10);
	Stack.Invoke(iParam0, 40, 906.9065f, -987.0414f, 56.96f, 11);
	Stack.Invoke(iParam0, 41, -1423.563f, 239.8399f, 97.1072f, 0);
	Stack.Invoke(iParam0, 41, -159.2655f, 495.2184f, 103.6956f, 1);
	Stack.Invoke(iParam0, 41, 1449.437f, -1948.466f, 52.2016f, 2);
	Stack.Invoke(iParam0, 42, 716.5029f, -1515.26f, 40.525f, 0);
	Stack.Invoke(iParam0, 43, 2183.656f, -465.3446f, 40.7656f, 0);
	Stack.Invoke(iParam0, 43, 1788.349f, -1018.902f, 40.8415f, 1);
	Stack.Invoke(iParam0, 43, -1339.337f, -1786.202f, 75.749f, 2);
	Stack.Invoke(iParam0, 43, -1473.819f, -1224.915f, 76.4906f, 3);
	Stack.Invoke(iParam0, 43, 1844.906f, 1618.283f, 168.6082f, 4);
	Stack.Invoke(iParam0, 43, 1486.028f, 2053.414f, 295.9742f, 5);
	Stack.Invoke(iParam0, 43, -469.4519f, 304.8075f, 43.7138f, 6);
	Stack.Invoke(iParam0, 43, 467.632f, -1.275f, 109.2541f, 7);
	Stack.Invoke(iParam0, 43, 18.9602f, -455.7956f, 71.8724f, 8);
	Stack.Invoke(iParam0, 43, 1809.049f, 888.507f, 108.648f, 9);
	Stack.Invoke(iParam0, 43, 2046.033f, 21.8134f, 68.6331f, 10);
	Stack.Invoke(iParam0, 43, 2658.786f, 2260.44f, 160.2564f, 11);
	Stack.Invoke(iParam0, 43, 2772.743f, 1743.278f, 148.0157f, 12);
	Stack.Invoke(iParam0, 43, 2381.888f, 744.0209f, 66.541f, 13);
	Stack.Invoke(iParam0, 43, 1633.626f, -2060.823f, 41.0693f, 14);
	Stack.Invoke(iParam0, 43, 1660.104f, -514.8263f, 46.409f, 15);
	Stack.Invoke(iParam0, 43, 1032.549f, -509.7064f, 90.0929f, 16);
	Stack.Invoke(iParam0, 43, -5174.4f, -2874.985f, 2.1226f, 17);
	Stack.Invoke(iParam0, 43, -5601.053f, -3600.778f, -22.9655f, 18);
	Stack.Invoke(iParam0, 43, -4985.12f, -3303.439f, 6.1895f, 19);
	Stack.Invoke(iParam0, 43, -4584.132f, -3523.23f, 21.2202f, 20);
	Stack.Invoke(iParam0, 43, -5231.253f, -3974.581f, -3.2106f, 21);
	Stack.Invoke(iParam0, 43, -3849.781f, -3109.601f, -15.0322f, 22);
	Stack.Invoke(iParam0, 43, -3149.559f, -3100.046f, -0.5091f, 23);
	Stack.Invoke(iParam0, 43, -4278.774f, -2701.909f, -0.6108f, 24);
	Stack.Invoke(iParam0, 43, -1834.618f, -2489.122f, 46.0804f, 25);
	Stack.Invoke(iParam0, 43, -3049.309f, -2576.23f, 67.394f, 26);
	Stack.Invoke(iParam0, 44, -1515.412f, 170.3214f, 98.5217f, 0);
	Stack.Invoke(iParam0, 44, -1419.13f, 317.7131f, 91.6105f, 1);
	Stack.Invoke(iParam0, 44, -828.3855f, -609.4851f, 57.7383f, 2);
	Stack.Invoke(iParam0, 44, -1013.295f, 124.4212f, 70.5694f, 3);
	Stack.Invoke(iParam0, 44, 85.724f, 416.6526f, 126.8382f, 4);
	Stack.Invoke(iParam0, 44, -634.6064f, -477.0305f, 49.1578f, 5);
	Stack.Invoke(iParam0, 44, 1625.168f, -1794.723f, 51.3532f, 6);
	Stack.Invoke(iParam0, 44, 814.0527f, -811.9885f, 58.0703f, 7);
	Stack.Invoke(iParam0, 44, 1610.171f, -583.1312f, 46.2253f, 8);
	Stack.Invoke(iParam0, 45, 1675.267f, -1104.612f, 40.7606f, 0);
	Stack.Invoke(iParam0, 45, 1662.519f, -762.8489f, 40.7127f, 1);
	Stack.Invoke(iParam0, 45, 2058.989f, -401.0824f, 43.2562f, 2);
	Stack.Invoke(iParam0, 45, -275.708f, -244.8788f, 89.9711f, 3);
	Stack.Invoke(iParam0, 45, 311.6604f, 709.7629f, 145.6169f, 4);
	Stack.Invoke(iParam0, 45, 557.3143f, 907.3863f, 146.6003f, 5);
	Stack.Invoke(iParam0, 45, -394.3352f, 145.0423f, 42.1403f, 6);
	Stack.Invoke(iParam0, 45, 485.5268f, 182.236f, 113.8813f, 7);
	Stack.Invoke(iParam0, 45, 1093.637f, -31.2284f, 85.7352f, 8);
	Stack.Invoke(iParam0, 45, 12.4028f, -471.2083f, 72.0078f, 9);
	Stack.Invoke(iParam0, 45, 1429.055f, -347.5579f, 84.7219f, 10);
	Stack.Invoke(iParam0, 45, 1064.059f, -405.4702f, 91.0363f, 11);
	Stack.Invoke(iParam0, 45, 1640.565f, -219.4766f, 75.7454f, 12);
	Stack.Invoke(iParam0, 45, 1677.664f, -1723.655f, 51.8664f, 13);
	Stack.Invoke(iParam0, 45, 1208.311f, -2130.152f, 52.2418f, 14);
	Stack.Invoke(iParam0, 46, 2688.845f, 2094.202f, 97.5463f, 0);
	Stack.Invoke(iParam0, 46, -2238.875f, -1501.776f, 141.4098f, 1);
	Stack.Invoke(iParam0, 47, 2688.845f, 2094.202f, 98.1463f, 0);
	Stack.Invoke(iParam0, 47, 2688.845f, 2094.202f, 98.1463f, 1);
	Stack.Invoke(iParam0, 48, 1891.322f, -935.3073f, 41.8009f, 0);
	Stack.Invoke(iParam0, 48, 2056.889f, -1046.061f, 42.3639f, 1);
	Stack.Invoke(iParam0, 48, 2470.6f, 974.4517f, 93.5671f, 2);
	Stack.Invoke(iParam0, 48, 2577.967f, 476.1377f, 65.5212f, 3);
	Stack.Invoke(iParam0, 48, 1452.328f, -750.2531f, 54.1882f, 4);
	Stack.Invoke(iParam0, 48, 1082.05f, -474.3245f, 87.6101f, 5);
	Stack.Invoke(iParam0, 48, 1633.141f, -509.7347f, 47.6921f, 6);
	Stack.Invoke(iParam0, 48, 1105.353f, -887.1132f, 66.9528f, 7);
	Stack.Invoke(iParam0, 48, 2016.224f, -1488.948f, 41.5781f, 8);
	Stack.Invoke(iParam0, 49, -1674.791f, 333.9579f, 105.6924f, 0);
	Stack.Invoke(iParam0, 49, -511.2702f, -88.7684f, 44.1198f, 1);
	Stack.Invoke(iParam0, 49, -542.9289f, 258.9346f, 43.4502f, 2);
	Stack.Invoke(iParam0, 49, 503.6389f, 959.0621f, 156.7788f, 3);
	Stack.Invoke(iParam0, 49, 14.1111f, 598.583f, 126.4201f, 4);
	Stack.Invoke(iParam0, 49, 792.1996f, -262.2156f, 98.8212f, 5);
	Stack.Invoke(iParam0, 49, -660.1761f, 361.73f, 90.4883f, 6);
	Stack.Invoke(iParam0, 50, 1718.871f, -762.4149f, 41.4575f, 0);
	Stack.Invoke(iParam0, 50, 1776.868f, -864.06f, 40.6397f, 1);
	Stack.Invoke(iParam0, 50, 2002.821f, -479.3671f, 40.9727f, 2);
	Stack.Invoke(iParam0, 50, 2058.131f, -363.6342f, 40.6108f, 3);
	Stack.Invoke(iParam0, 50, 2117.548f, -876.7509f, 40.4377f, 4);
	Stack.Invoke(iParam0, 50, 2099.085f, -748.1615f, 40.563f, 5);
	Stack.Invoke(iParam0, 50, -1820.122f, -793.2049f, 102.8703f, 6);
	Stack.Invoke(iParam0, 50, -1074.538f, -491.6324f, 80.6666f, 7);
	Stack.Invoke(iParam0, 50, -613.114f, 97.6527f, 52.3257f, 8);
	Stack.Invoke(iParam0, 50, -487.4074f, 75.9777f, 48.1205f, 9);
	Stack.Invoke(iParam0, 50, 2726.036f, 18.5933f, 48.8501f, 10);
	Stack.Invoke(iParam0, 50, 2552.253f, -194.6156f, 42.4538f, 11);
	Stack.Invoke(iParam0, 50, 2537.36f, -260.3671f, 41.3014f, 12);
	Stack.Invoke(iParam0, 50, 2206.565f, -453.0783f, 40.5481f, 13);
	Stack.Invoke(iParam0, 50, 2388.978f, -381.6493f, 41.1678f, 14);
	Stack.Invoke(iParam0, 50, 627.507f, 385.186f, 105.5567f, 15);
	Stack.Invoke(iParam0, 50, 851.2086f, 709.5713f, 110.5522f, 16);
	Stack.Invoke(iParam0, 50, -658.743f, 346.6573f, 88.1336f, 17);
	Stack.Invoke(iParam0, 50, 142.2479f, -320.3969f, 104.9327f, 18);
	Stack.Invoke(iParam0, 50, 297.612f, 201.225f, 101.0823f, 19);
	Stack.Invoke(iParam0, 50, 1105.739f, -53.9801f, 85.3329f, 20);
	Stack.Invoke(iParam0, 50, 840.7557f, 386.4758f, 117.9091f, 21);
	Stack.Invoke(iParam0, 50, -676.4611f, -374.1973f, 53.7761f, 22);
	Stack.Invoke(iParam0, 50, -680.1461f, -394.7518f, 52.6402f, 23);
	Stack.Invoke(iParam0, 50, 2707.187f, 136.8266f, 53.4102f, 24);
	Stack.Invoke(iParam0, 50, 2236.394f, 1716.181f, 100.8078f, 25);
	Stack.Invoke(iParam0, 50, 2026.649f, 194.4583f, 76.1849f, 26);
	Stack.Invoke(iParam0, 50, 2428.922f, 1040.769f, 86.3179f, 27);
	Stack.Invoke(iParam0, 50, 1632.866f, -1713.811f, 51.4767f, 28);
	Stack.Invoke(iParam0, 50, 1481.719f, -1697.79f, 61.3129f, 29);
	Stack.Invoke(iParam0, 50, 925.4667f, -1081.438f, 55.1439f, 30);
	Stack.Invoke(iParam0, 50, 830.9171f, -716.0651f, 63.6039f, 31);
	Stack.Invoke(iParam0, 50, 815.1224f, -912.9166f, 50.2146f, 32);
	Stack.Invoke(iParam0, 50, 1371.668f, -238.8062f, 97.1467f, 33);
	Stack.Invoke(iParam0, 50, 1260.127f, -162.0665f, 96.7544f, 34);
	Stack.Invoke(iParam0, 50, 950.7592f, -1242.842f, 53.845f, 35);
	Stack.Invoke(iParam0, 51, 1490.549f, -1739.697f, 59.4025f, 0);
	Stack.Invoke(iParam0, 51, 755.7448f, -830.3978f, 53.5609f, 1);
	Stack.Invoke(iParam0, 51, 1293.232f, -793.3234f, 75.2416f, 2);
	Stack.Invoke(iParam0, 51, 1121.026f, -750.4242f, 91.5402f, 3);
	Stack.Invoke(iParam0, 51, 1324.907f, -255.0629f, 100.8022f, 4);
	Stack.Invoke(iParam0, 53, -2198.091f, -1560.288f, 147.9514f, 0);
	Stack.Invoke(iParam0, 53, -2099.421f, -1258.196f, 121.8341f, 1);
	Stack.Invoke(iParam0, 53, -2492.387f, -1465.807f, 146.7759f, 2);
	Stack.Invoke(iParam0, 54, -2201.438f, -1561.316f, 149.4853f, 0);
	Stack.Invoke(iParam0, 54, -1996.678f, -1349.222f, 116.339f, 1);
	Stack.Invoke(iParam0, 54, -2413.329f, -1441.075f, 150.5578f, 2);
	Stack.Invoke(iParam0, 54, -2220.976f, -1286.49f, 133.1413f, 3);
	Stack.Invoke(iParam0, 54, -2390.821f, -1215.595f, 157.3621f, 4);
	Stack.Invoke(iParam0, 54, -1923.344f, -1993.478f, 77.1042f, 5);
	Stack.Invoke(iParam0, 55, -2324.989f, -1650.865f, 132.8996f, 0);
	Stack.Invoke(iParam0, 55, -1953.471f, -1844.582f, 116.2499f, 1);
	Stack.Invoke(iParam0, 56, -1727.76f, -1275.434f, 90.6868f, 0);
	Stack.Invoke(iParam0, 56, -1187.298f, -1501.951f, 76.6712f, 1);
	Stack.Invoke(iParam0, 56, -1308.762f, -1249.402f, 81.9299f, 2);
	Stack.Invoke(iParam0, 56, -1239.012f, -1709.895f, 77.9413f, 3);
	Stack.Invoke(iParam0, 56, -980.5764f, -1818.639f, 62.5702f, 4);
	Stack.Invoke(iParam0, 56, -1401.89f, -1416.279f, 92.8167f, 5);
	Stack.Invoke(iParam0, 56, -1203.841f, -1824.375f, 60.6905f, 6);
	Stack.Invoke(iParam0, 56, -1840.49f, -1687.297f, 105.0552f, 7);
	Stack.Invoke(iParam0, 56, -1972.313f, -1381.929f, 114.4789f, 8);
	Stack.Invoke(iParam0, 56, -1615.532f, -1978.459f, 49.9575f, 9);
	Stack.Invoke(iParam0, 56, -1765.309f, -1736.517f, 92.3731f, 10);
	Stack.Invoke(iParam0, 56, -1885.423f, -1341.173f, 99.7828f, 11);
	Stack.Invoke(iParam0, 57, 1574.241f, -721.5044f, 42.0845f, 0);
	Stack.Invoke(iParam0, 57, -1159.449f, 138.6042f, 43.3767f, 1);
	Stack.Invoke(iParam0, 57, -1682.827f, 88.1555f, 145.8255f, 2);
	Stack.Invoke(iParam0, 57, -2155.849f, -72.5493f, 232.6642f, 3);
	Stack.Invoke(iParam0, 57, 948.9059f, 998.7804f, 140.8828f, 4);
	Stack.Invoke(iParam0, 57, 174.6441f, 153.5681f, 106.6718f, 5);
	Stack.Invoke(iParam0, 57, 1205.995f, 569.589f, 86.8041f, 6);
	Stack.Invoke(iParam0, 57, -68.9876f, -297.8486f, 93.1965f, 7);
	Stack.Invoke(iParam0, 57, 1729.679f, -1685.385f, 47.5734f, 8);
	Stack.Invoke(iParam0, 57, 1196.258f, -579.7256f, 66.6338f, 9);
	Stack.Invoke(iParam0, 57, 950.153f, -1019.674f, 58.3151f, 10);
	Stack.Invoke(iParam0, 57, -5608.118f, -3556.63f, -24.1127f, 11);
	Stack.Invoke(iParam0, 57, -4622.817f, -3354.226f, 20.9842f, 12);
	Stack.Invoke(iParam0, 57, -4051.454f, -3046.4f, -10.438f, 13);
	Stack.Invoke(iParam0, 58, -1174.977f, 76.6906f, 41.3614f, 0);
	Stack.Invoke(iParam0, 58, -1018.462f, 437.8081f, 54.8274f, 1);
	Stack.Invoke(iParam0, 58, -807.5107f, 69.3361f, 40.6991f, 2);
	Stack.Invoke(iParam0, 58, -1026.039f, -59.0312f, 40.8465f, 3);
	Stack.Invoke(iParam0, 58, -708.0551f, -333.2857f, 41.1294f, 4);
	Stack.Invoke(iParam0, 58, -508.7768f, 218.219f, 40.6822f, 5);
	Stack.Invoke(iParam0, 58, -196.2379f, -574.9825f, 40.6629f, 6);
	Stack.Invoke(iParam0, 58, 1505.286f, -771.5364f, 45.9044f, 7);
	Stack.Invoke(iParam0, 59, 1972.094f, -681.0854f, 43.0215f, 0);
	Stack.Invoke(iParam0, 59, 2440.721f, -676.4698f, 42.2753f, 1);
	Stack.Invoke(iParam0, 59, 2098.511f, -353.6877f, 40.8802f, 2);
	Stack.Invoke(iParam0, 60, -2586.923f, -264.5349f, 161.6671f, 0);
	Stack.Invoke(iParam0, 60, -2578.181f, 388.9668f, 148.3721f, 1);
	Stack.Invoke(iParam0, 60, -2196.576f, 468.8412f, 119.5676f, 2);
	Stack.Invoke(iParam0, 60, -1637.2f, -1513.234f, 82.6688f, 3);
	Stack.Invoke(iParam0, 60, -825.3087f, -1804.951f, 59.0313f, 4);
	Stack.Invoke(iParam0, 60, 1786.915f, 1588.926f, 167.4663f, 5);
	Stack.Invoke(iParam0, 60, 1959.894f, 1387.251f, 179.786f, 6);
	Stack.Invoke(iParam0, 60, 637.5925f, 2099.455f, 222.0308f, 7);
	Stack.Invoke(iParam0, 60, 1296.321f, 1161.685f, 150.1379f, 8);
	Stack.Invoke(iParam0, 60, 204.3004f, 261.9908f, 111.8031f, 9);
	Stack.Invoke(iParam0, 60, 697.4816f, 65.372f, 150.8549f, 10);
	Stack.Invoke(iParam0, 61, 1614.12f, -810.2f, 41.15f, 0);
	Stack.Invoke(iParam0, 61, 2385.25f, -668.01f, 41.17f, 1);
	Stack.Invoke(iParam0, 62, -1922.856f, 624.1806f, 114.5816f, 0);
	Stack.Invoke(iParam0, 62, -2612.37f, 494.5219f, 143.2249f, 1);
	Stack.Invoke(iParam0, 62, -1981.225f, -540.608f, 145.1829f, 2);
	Stack.Invoke(iParam0, 62, -1389.892f, -1275.583f, 81.3028f, 3);
	Stack.Invoke(iParam0, 62, -1676.042f, -2020.085f, 47.7628f, 4);
	Stack.Invoke(iParam0, 62, -1004.324f, -1851.333f, 60.9017f, 5);
	Stack.Invoke(iParam0, 62, 1071.209f, 1214.037f, 196.1523f, 6);
	Stack.Invoke(iParam0, 62, 1463.082f, 1026.326f, 170.4556f, 7);
	Stack.Invoke(iParam0, 62, -563.5857f, 1206.521f, 156.4777f, 8);
	Stack.Invoke(iParam0, 62, -1374.102f, 628.8635f, 109.8288f, 9);
	Stack.Invoke(iParam0, 62, 69.4236f, -43.6054f, 103.7584f, 10);
	Stack.Invoke(iParam0, 62, -373.6552f, -72.1375f, 42.3578f, 11);
	Stack.Invoke(iParam0, 62, 556.9641f, 356.811f, 105.9842f, 12);
	Stack.Invoke(iParam0, 62, 474.0224f, -316.3003f, 141.9746f, 13);
	Stack.Invoke(iParam0, 62, -1862.232f, -1332.681f, 97.2679f, 14);
	Stack.Invoke(iParam0, 62, -2483.872f, -1309.616f, 158.4832f, 15);
	Stack.Invoke(iParam0, 62, -1958.146f, -1786.701f, 120.1902f, 16);
	Stack.Invoke(iParam0, 63, -1127.1f, -324.4f, 87.7f, 0);
	Stack.Invoke(iParam0, 63, -1099.6f, -112.7f, 44.2f, 1);
	Stack.Invoke(iParam0, 63, -746.4f, -124.8f, 82.7f, 2);
	Stack.Invoke(iParam0, 63, -2107.655f, -468.3287f, 149.7019f, 3);
	Stack.Invoke(iParam0, 63, -2282.436f, 497.8875f, 120.5164f, 4);
	Stack.Invoke(iParam0, 63, -2007.449f, -746.912f, 104.459f, 5);
	Stack.Invoke(iParam0, 64, -6.8961f, 294.2949f, 110.201f, 0);
	Stack.Invoke(iParam0, 64, 176.5703f, 573.1811f, 116.778f, 1);
	Stack.Invoke(iParam0, 64, 1896.501f, -1647.79f, 42.5318f, 2);
	Stack.Invoke(iParam0, 64, 1047.113f, -1064.466f, 65.5536f, 3);
	Stack.Invoke(iParam0, 64, -5025.307f, -2638.411f, -12.8459f, 4);
	Stack.Invoke(iParam0, 64, -5100.704f, -3179.039f, -15.6474f, 5);
	Stack.Invoke(iParam0, 64, -3879.725f, -2841.371f, -15.3182f, 6);
	Stack.Invoke(iParam0, 65, 1615.269f, 1613.743f, 147.7296f, 0);
	Stack.Invoke(iParam0, 65, 1423.979f, 1102.476f, 185.6182f, 1);
	Stack.Invoke(iParam0, 65, 2043.08f, 1720.93f, 154.4757f, 2);
	Stack.Invoke(iParam0, 65, 649.9562f, 1908.171f, 214.0831f, 3);
	Stack.Invoke(iParam0, 65, 950.4314f, 388.0648f, 110.4698f, 4);
	Stack.Invoke(iParam0, 65, 1355.897f, 467.7415f, 87.2016f, 5);
	Stack.Invoke(iParam0, 65, -472.058f, -172.115f, 43.1987f, 6);
	Stack.Invoke(iParam0, 65, 1339.051f, -1626.587f, 65.6338f, 7);
	Stack.Invoke(iParam0, 65, 1519.469f, -2083.614f, 42.6887f, 8);
	Stack.Invoke(iParam0, 65, 1166.103f, -2132.91f, 55.964f, 9);
	Stack.Invoke(iParam0, 66, -1159.115f, 397.0877f, 60.4953f, 0);
	Stack.Invoke(iParam0, 66, -1278.359f, 291.4224f, 76.6652f, 1);
	Stack.Invoke(iParam0, 66, -1371.28f, 283.4114f, 86.0114f, 2);
	Stack.Invoke(iParam0, 66, -1117.687f, 406.6783f, 55.3681f, 3);
	Stack.Invoke(iParam0, 66, -1288.323f, 148.5012f, 71.7864f, 4);
	Stack.Invoke(iParam0, 66, -1648.447f, -114.858f, 170.0504f, 5);
	Stack.Invoke(iParam0, 66, -1081.189f, -405.0457f, 97.0153f, 6);
	Stack.Invoke(iParam0, 66, 206.8413f, -170.3653f, 130.5284f, 7);
	Stack.Invoke(iParam0, 66, -621.2297f, 186.8452f, 41.2741f, 8);
	Stack.Invoke(iParam0, 66, 44.3784f, 388.2357f, 129.8287f, 9);
	Stack.Invoke(iParam0, 66, 752.9834f, -58.1133f, 157.6479f, 10);
	Stack.Invoke(iParam0, 66, 822.6152f, 578.6021f, 117.7806f, 11);
	Stack.Invoke(iParam0, 67, 2572.895f, 1545.367f, 95.1632f, 0);
	Stack.Invoke(iParam0, 67, 2569.531f, 1820.273f, 86.0089f, 1);
	Stack.Invoke(iParam0, 67, 2388.21f, 1048.992f, 85.1056f, 2);
	Stack.Invoke(iParam0, 67, 2769.92f, 1013.51f, 60.84f, 3);
	Stack.Invoke(iParam0, 67, 2697.282f, 1627.256f, 148.2803f, 4);
	Stack.Invoke(iParam0, 68, 2404.503f, -708.3487f, 40.1213f, 0);
	Stack.Invoke(iParam0, 68, 2412.389f, -632.1752f, 41.1803f, 1);
	Stack.Invoke(iParam0, 68, 2141.919f, -775.2498f, 40.52f, 2);
	Stack.Invoke(iParam0, 68, 2188.875f, -378.6358f, 40.6047f, 3);
	Stack.Invoke(iParam0, 68, 2494.612f, -245.3792f, 41.1532f, 4);
	Stack.Invoke(iParam0, 69, 2407.218f, -720.1194f, 48.0f, 0);
	Stack.Invoke(iParam0, 69, 2356.204f, -617.4643f, 40.6704f, 1);
	Stack.Invoke(iParam0, 69, 2266.73f, -859.36f, 40.6498f, 2);
	Stack.Invoke(iParam0, 69, 2117.661f, -468.6407f, 40.569f, 3);
	Stack.Invoke(iParam0, 69, 2175.363f, -777.6237f, 40.5395f, 4);
	Stack.Invoke(iParam0, 70, -2284.769f, -423.4211f, 156.8616f, 0);
	Stack.Invoke(iParam0, 70, -1883.307f, 373.0742f, 119.2403f, 1);
	Stack.Invoke(iParam0, 70, -2651.707f, 210.0714f, 151.7762f, 2);
	Stack.Invoke(iParam0, 70, -1623.526f, 235.4652f, 105.3645f, 3);
	Stack.Invoke(iParam0, 70, -1926.251f, -678.1707f, 116.5043f, 4);
	Stack.Invoke(iParam0, 70, -2689.542f, -305.0743f, 148.3352f, 5);
	Stack.Invoke(iParam0, 71, -1320.695f, -2010.077f, 40.5892f, 0);
	Stack.Invoke(iParam0, 71, -738.0292f, -1711.02f, 40.4947f, 1);
	Stack.Invoke(iParam0, 71, 146.1645f, -630.6563f, 40.7397f, 2);
	Stack.Invoke(iParam0, 71, -469.2039f, -576.6931f, 40.7896f, 3);
	Stack.Invoke(iParam0, 71, -286.3765f, -568.8775f, 40.9598f, 4);
	Stack.Invoke(iParam0, 71, 3138.446f, 1451.169f, 40.4687f, 5);
	Stack.Invoke(iParam0, 71, 2871.425f, 933.2757f, 40.6453f, 6);
	Stack.Invoke(iParam0, 71, 2916.922f, 366.8459f, 40.6137f, 7);
	Stack.Invoke(iParam0, 72, 2355.67f, -682.6993f, 46.9981f, 0);
	Stack.Invoke(iParam0, 72, 1655.174f, -1002.744f, 49.9165f, 1);
	Stack.Invoke(iParam0, 72, 2175.948f, -453.2319f, 46.1423f, 2);
	Stack.Invoke(iParam0, 72, 1820.147f, -911.4569f, 50.6755f, 3);
	Stack.Invoke(iParam0, 72, 1684.56f, -701.666f, 48.775f, 4);
	Stack.Invoke(iParam0, 72, 2452.194f, 1285.645f, 118.422f, 5);
	Stack.Invoke(iParam0, 72, 2690.952f, 1786.37f, 109.0461f, 6);
	Stack.Invoke(iParam0, 72, 3009.679f, 1704.29f, 79.1191f, 7);
	Stack.Invoke(iParam0, 72, 2276.207f, 1602.347f, 88.9849f, 8);
	Stack.Invoke(iParam0, 73, 2397.366f, 1666.155f, 95.0309f, 0);
	Stack.Invoke(iParam0, 73, 2470.936f, 1584.53f, 86.2933f, 1);
	Stack.Invoke(iParam0, 73, 2330.519f, 1741.076f, 104.3994f, 2);
	Stack.Invoke(iParam0, 73, 2383.997f, 1763.228f, 106.3f, 3);
	Stack.Invoke(iParam0, 74, 2414.261f, 1766.187f, 88.6656f, 0);
	Stack.Invoke(iParam0, 75, -3625.013f, -2604.96f, -14.2406f, 0);
	Stack.Invoke(iParam0, 76, -5526.436f, -2933.683f, -2.9655f, 0);
	Stack.Invoke(iParam0, 77, 2724.5f, -1115.8f, 49.7f, 0);
	Stack.Invoke(iParam0, 77, 2856.7f, -1248.3f, 46.4f, 1);
	Stack.Invoke(iParam0, 77, 2875.7f, -1181.2f, 46.1f, 2);
	Stack.Invoke(iParam0, 78, 2324.6f, -1092.9f, 44.7f, 0);
	Stack.Invoke(iParam0, 78, 2276.4f, -1371.3f, 45.8f, 1);
	Stack.Invoke(iParam0, 79, -1796.165f, -383.4302f, 159.2698f, 0);
	Stack.Invoke(iParam0, 79, -278.5714f, 785.1736f, 118.4981f, 1);
	Stack.Invoke(iParam0, 79, -278.5714f, 785.1736f, 118.4981f, 2);
	Stack.Invoke(iParam0, 79, 2925.65f, 1275.873f, 43.6309f, 3);
	Stack.Invoke(iParam0, 79, 1323.145f, -1294.017f, 76.017f, 4);
	Stack.Invoke(iParam0, 79, 1323.145f, -1294.017f, 76.017f, 5);
	Stack.Invoke(iParam0, 80, 2821.827f, -1275.462f, 47.101f, 0);
	Stack.Invoke(iParam0, 80, 2841.75f, -1164.15f, 46.7f, 1);
	Stack.Invoke(iParam0, 80, 2741.723f, -1315.395f, 47.648f, 2);
	Stack.Invoke(iParam0, 81, 2815.91f, -1222.949f, 46.526f, 0);
	Stack.Invoke(iParam0, 81, 2602.444f, -1286.57f, 51.2567f, 1);
	Stack.Invoke(iParam0, 81, 2661.251f, -1202.6f, 52.2783f, 2);
	Stack.Invoke(iParam0, 81, 2750.527f, -1206.293f, 48.3767f, 3);
	Stack.Invoke(iParam0, 81, 2530.883f, -1149.375f, 49.0052f, 4);
	Stack.Invoke(iParam0, 81, 2714.385f, -1233.121f, 49.172f, 5);
	Stack.Invoke(iParam0, 81, 2639.789f, -1417.126f, 45.376f, 6);
	Stack.Invoke(iParam0, 81, 2703.266f, -1184.961f, 50.865f, 7);
	Stack.Invoke(iParam0, 81, 2781.518f, -1278.669f, 46.429f, 8);
	Stack.Invoke(iParam0, 81, 2593.165f, -1207.484f, 52.3112f, 9);
	Stack.Invoke(iParam0, 81, 2670.08f, -1113.233f, 49.552f, 10);
	Stack.Invoke(iParam0, 81, 2482.088f, -1465.71f, 45.1902f, 11);
	Stack.Invoke(iParam0, 81, -791.817f, -1311.097f, 42.623f, 12);
	Stack.Invoke(iParam0, 81, -778.963f, -1260.098f, 42.643f, 13);
	Stack.Invoke(iParam0, 81, -843.7784f, -1282.664f, 42.3634f, 14);
	Stack.Invoke(iParam0, 82, 2675.32f, -1180.95f, 52.0954f, 0);
	Stack.Invoke(iParam0, 82, 2642.136f, -1229.305f, 52.2161f, 1);
	Stack.Invoke(iParam0, 82, 2835.006f, -1190.365f, 46.598f, 2);
	Stack.Invoke(iParam0, 82, 2773.176f, -1120.12f, 46.534f, 3);
	Stack.Invoke(iParam0, 82, 2524.305f, -1406.557f, 45.1683f, 4);
	Stack.Invoke(iParam0, 82, 2738.86f, -1317.416f, 46.5925f, 5);
	Stack.Invoke(iParam0, 82, 2677.741f, -1342.216f, 47.7528f, 6);
	Stack.Invoke(iParam0, 82, 2651.291f, -1410.081f, 45.3449f, 7);
	Stack.Invoke(iParam0, 82, -816.683f, -1310.262f, 42.681f, 8);
	Stack.Invoke(iParam0, 83, -3712.294f, -2624.416f, -14.6756f, 0);
	Stack.Invoke(iParam0, 83, -3587.756f, -2599.626f, -15.0415f, 1);
	Stack.Invoke(iParam0, 84, -315.9042f, 796.2438f, 116.6553f, 0);
	Stack.Invoke(iParam0, 84, -315.804f, 796.344f, 116.655f, 1);
	Stack.Invoke(iParam0, 85, 2815.91f, -1222.949f, 46.526f, 0);
	Stack.Invoke(iParam0, 85, 2602.444f, -1286.57f, 51.2567f, 1);
	Stack.Invoke(iParam0, 85, 2661.151f, -1202.7f, 52.2783f, 2);
	Stack.Invoke(iParam0, 85, 2750.427f, -1206.293f, 48.3767f, 3);
	Stack.Invoke(iParam0, 85, 2530.883f, -1149.375f, 49.0052f, 4);
	Stack.Invoke(iParam0, 85, 2639.789f, -1417.126f, 45.376f, 5);
	Stack.Invoke(iParam0, 85, 2703.266f, -1184.961f, 50.865f, 6);
	Stack.Invoke(iParam0, 85, 2777.176f, -1284.33f, 46.401f, 7);
	Stack.Invoke(iParam0, 85, 2593.165f, -1207.484f, 52.3112f, 8);
	Stack.Invoke(iParam0, 85, 2670.315f, -1120.21f, 49.655f, 9);
	Stack.Invoke(iParam0, 85, 2482.088f, -1465.71f, 45.1902f, 10);
	Stack.Invoke(iParam0, 86, 2915.228f, 1331.694f, 43.9828f, 0);
	Stack.Invoke(iParam0, 86, 1393.381f, -1137.415f, 75.1469f, 1);
	Stack.Invoke(iParam0, 87, -313.152f, 829.182f, 118.494f, 0);
	Stack.Invoke(iParam0, 87, -228.0928f, 748.1144f, 116.2867f, 1);
	Stack.Invoke(iParam0, 87, -282.677f, 663.646f, 112.414f, 2);
	Stack.Invoke(iParam0, 87, 2964.635f, 462.0895f, 48.2494f, 3);
	Stack.Invoke(iParam0, 87, 2980.101f, 581.1429f, 43.3314f, 4);
	Stack.Invoke(iParam0, 87, 1442.221f, -1303.781f, 76.7482f, 5);
	Stack.Invoke(iParam0, 87, 1404.719f, -1369.902f, 80.301f, 6);
	Stack.Invoke(iParam0, 87, 1310.117f, -1357.097f, 76.968f, 7);
	Stack.Invoke(iParam0, 87, 1319.893f, -1327.6f, 76.174f, 8);
	Stack.Invoke(iParam0, 88, -308.8745f, 800.6629f, 117.9796f, 0);
	Stack.Invoke(iParam0, 88, 2949.343f, 523.1172f, 44.3583f, 1);
	Stack.Invoke(iParam0, 89, 1342.15f, -1375.004f, 79.4998f, 0);
	Stack.Invoke(iParam0, 90, -347.8752f, 741.1281f, 116.4358f, 0);
	Stack.Invoke(iParam0, 90, 2958.862f, 524.6724f, 43.6222f, 1);
	Stack.Invoke(iParam0, 91, -3715.866f, -2568.89f, -14.9211f, 0);
	Stack.Invoke(iParam0, 91, -3637.223f, -2630.011f, -14.8352f, 1);
	Stack.Invoke(iParam0, 92, -295.4f, 735.1f, 116.4f, 0);
	Stack.Invoke(iParam0, 92, -362.7055f, 831.2882f, 115.7839f, 1);
	Stack.Invoke(iParam0, 92, 1334.67f, -1365.789f, 78.9413f, 2);
	Stack.Invoke(iParam0, 93, 2503.755f, -1164.531f, 48.1928f, 0);
	Stack.Invoke(iParam0, 94, 2592.7f, -1207.5f, 52.5f, 0);
	Stack.Invoke(iParam0, 94, 2380.653f, -1353.522f, 45.3453f, 1);
	Stack.Invoke(iParam0, 94, -336.0f, 707.7f, 118.2f, 2);
	Stack.Invoke(iParam0, 94, -211.2f, 640.7f, 113.0f, 3);
	Stack.Invoke(iParam0, 94, -248.0f, 734.7f, 116.9f, 4);
	Stack.Invoke(iParam0, 94, 1326.8f, -1220.3f, 79.6f, 5);
	Stack.Invoke(iParam0, 94, 1365.6f, -1343.7f, 78.0f, 6);
	Stack.Invoke(iParam0, 94, 1272.4f, -1281.7f, 75.3f, 7);
	Stack.Invoke(iParam0, 94, 1358.1f, -1379.7f, 79.5f, 8);
	Stack.Invoke(iParam0, 95, 2507.693f, -1202.433f, 51.4826f, 0);
	Stack.Invoke(iParam0, 96, 2355.992f, -1421.836f, 41.3914f, 0);
	Stack.Invoke(iParam0, 96, 2477.7f, -1489.4f, 46.2f, 1);
	Stack.Invoke(iParam0, 96, 2439.0f, -1477.2f, 45.4f, 2);
	Stack.Invoke(iParam0, 96, 2803.6f, -1227.4f, 47.2f, 3);
	Stack.Invoke(iParam0, 96, 1350.4f, -1260.6f, 78.3f, 4);
	Stack.Invoke(iParam0, 96, 1294.8f, -1343.3f, 77.0f, 5);
	Stack.Invoke(iParam0, 96, 1392.2f, -1312.7f, 77.6f, 6);
	Stack.Invoke(iParam0, 97, -1808.807f, -363.4895f, 161.1128f, 0);
	Stack.Invoke(iParam0, 97, -1830.203f, -428.2535f, 159.037f, 1);
	Stack.Invoke(iParam0, 97, -1771.468f, -437.2715f, 154.0925f, 2);
	Stack.Invoke(iParam0, 97, 1428.513f, 366.0985f, 87.8453f, 3);
	Stack.Invoke(iParam0, 97, 1421.528f, 323.5045f, 87.4142f, 4);
	Stack.Invoke(iParam0, 97, 1357.266f, 306.072f, 86.3373f, 5);
	Stack.Invoke(iParam0, 98, -272.525f, 799.1819f, 118.0958f, 0);
	Stack.Invoke(iParam0, 98, -336.1102f, 776.7322f, 114.9947f, 1);
	Stack.Invoke(iParam0, 98, 2959.161f, 492.569f, 45.437f, 2);
	Stack.Invoke(iParam0, 98, 2959.535f, 590.465f, 43.514f, 3);
	Stack.Invoke(iParam0, 99, -249.4169f, 764.9301f, 116.4413f, 0);
	Stack.Invoke(iParam0, 99, -329.8f, 747.6f, 116.3f, 1);
	Stack.Invoke(iParam0, 100, -1788.724f, -366.4714f, 159.7196f, 0);
	Stack.Invoke(iParam0, 101, 1342.767f, -1374.869f, 79.5128f, 0);
	Stack.Invoke(iParam0, 101, 1342.767f, -1374.869f, 79.5128f, 1);
	Stack.Invoke(iParam0, 102, -1786.066f, -401.217f, 155.484f, 0);
	Stack.Invoke(iParam0, 102, -285.4209f, 865.4907f, 120.1243f, 1);
	Stack.Invoke(iParam0, 102, -258.9237f, 733.0353f, 115.9265f, 2);
	Stack.Invoke(iParam0, 103, 2720.815f, -1283.54f, 48.638f, 0);
	Stack.Invoke(iParam0, 103, 2551.768f, -1173.668f, 52.683f, 1);
	Stack.Invoke(iParam0, 103, 2948.19f, 526.29f, 44.34f, 2);
	Stack.Invoke(iParam0, 104, 2663.312f, -1217.594f, 52.3003f, 0);
	Stack.Invoke(iParam0, 104, 2497.331f, -1269.9f, 48.1784f, 1);
	Stack.Invoke(iParam0, 104, 2866.205f, -1211.583f, 45.2799f, 2);
	Stack.Invoke(iParam0, 105, 2648.307f, -1199.577f, 52.3577f, 0);
	Stack.Invoke(iParam0, 105, 2744.021f, -1214.594f, 48.5629f, 1);
	Stack.Invoke(iParam0, 106, 2688.31f, -1114.065f, 51.8697f, 0);
	Stack.Invoke(iParam0, 106, -764.837f, -1260.936f, 46.4259f, 1);
	Stack.Invoke(iParam0, 106, -315.3432f, 734.9009f, 122.8928f, 2);
	Stack.Invoke(iParam0, 106, 1374.88f, -1215.133f, 83.223f, 3);
	Stack.Invoke(iParam0, 107, 2793.112f, -1173.748f, 46.924f, 0);
	Stack.Invoke(iParam0, 108, -308.4347f, 788.9138f, 116.5967f, 0);
	Stack.Invoke(iParam0, 108, 2952.417f, 523.4847f, 44.4925f, 1);
	Stack.Invoke(iParam0, 108, -3707.469f, -2600.353f, -14.6511f, 2);
	Stack.Invoke(iParam0, 109, -1768.237f, -386.8972f, 156.7337f, 0);
	Stack.Invoke(iParam0, 109, 2941.604f, 1321.632f, 43.7591f, 1);
	Stack.Invoke(iParam0, 109, 1330.253f, -1317.481f, 76.9597f, 2);
	Stack.Invoke(iParam0, 110, 2795.961f, -1170.355f, 46.924f, 0);
	Stack.Invoke(iParam0, 111, -811.953f, -1325.25f, 42.577f, 0);
	Stack.Invoke(iParam0, 111, -307.3034f, 797.0555f, 117.9233f, 1);
	Stack.Invoke(iParam0, 111, -242.7336f, 766.1105f, 117.085f, 2);
	Stack.Invoke(iParam0, 111, 2951.335f, 523.949f, 44.385f, 3);
	Stack.Invoke(iParam0, 112, 2669.648f, -1181.517f, 52.1704f, 0);
	Stack.Invoke(iParam0, 112, 2691.534f, -1262.121f, 50.0244f, 1);
	Stack.Invoke(iParam0, 112, 2750.981f, -1163.64f, 47.9651f, 2);
	Stack.Invoke(iParam0, 113, -957.44f, -1201.16f, 54.8f, 0);
	Stack.Invoke(iParam0, 113, -957.5674f, -1209.503f, 53.9484f, 1);
	Stack.Invoke(iParam0, 113, 1297.35f, -1214.0f, 80.47f, 2);
	Stack.Invoke(iParam0, 114, 2714.69f, -1214.11f, 50.73f, 0);
	Stack.Invoke(iParam0, 114, 2654.302f, -1124.292f, 49.93f, 1);
	Stack.Invoke(iParam0, 114, 2504.71f, -1197.69f, 48.22f, 2);
	Stack.Invoke(iParam0, 114, 2406.22f, -1421.73f, 44.9f, 3);
	Stack.Invoke(iParam0, 114, 2813.77f, -1270.79f, 46.41f, 4);
	Stack.Invoke(iParam0, 114, 2779.46f, -1167.3f, 47.42f, 5);
	Stack.Invoke(iParam0, 114, -294.4247f, 783.5817f, 118.2912f, 6);
	Stack.Invoke(iParam0, 114, -238.2696f, 694.6663f, 112.4419f, 7);
	Stack.Invoke(iParam0, 114, -285.2f, 839.39f, 119.98f, 8);
	Stack.Invoke(iParam0, 114, -326.5073f, 795.0771f, 116.8913f, 9);
	Stack.Invoke(iParam0, 114, 2953.704f, 518.1846f, 44.4672f, 10);
	Stack.Invoke(iParam0, 114, 2959.148f, 590.6953f, 43.5041f, 11);
	Stack.Invoke(iParam0, 114, 2964.527f, 473.1478f, 47.4215f, 12);
	Stack.Invoke(iParam0, 114, 1323.881f, -1313.513f, 75.8026f, 13);
	Stack.Invoke(iParam0, 114, 1299.868f, -1299.655f, 76.3373f, 14);
	Stack.Invoke(iParam0, 114, 1333.02f, -1248.85f, 76.55f, 15);
	Stack.Invoke(iParam0, 115, -298.302f, 786.458f, 118.188f, 0);
	Stack.Invoke(iParam0, 115, -260.238f, 766.421f, 117.481f, 1);
	Stack.Invoke(iParam0, 115, -342.301f, 792.306f, 116.167f, 2);
	Stack.Invoke(iParam0, 116, -250.01f, 768.66f, 116.55f, 0);
	Stack.Invoke(iParam0, 116, -349.09f, 740.88f, 116.43f, 1);
	Stack.Invoke(iParam0, 116, -212.04f, 640.67f, 111.98f, 2);
	Stack.Invoke(iParam0, 116, 2938.38f, 1320.05f, 43.23f, 3);
	Stack.Invoke(iParam0, 116, 2870.76f, 1349.07f, 61.35f, 4);
	Stack.Invoke(iParam0, 116, 1286.04f, -1287.2f, 74.98f, 5);
	Stack.Invoke(iParam0, 116, 1366.49f, -1374.91f, 77.85f, 6);
	Stack.Invoke(iParam0, 117, -3665.4f, -2608.5f, -14.0f, 0);
	Stack.Invoke(iParam0, 117, -3625.2f, -2617.3f, -13.8f, 1);
	Stack.Invoke(iParam0, 118, 2565.529f, -1337.106f, 46.7954f, 0);
	Stack.Invoke(iParam0, 118, 2813.954f, -1198.445f, 46.429f, 1);
	Stack.Invoke(iParam0, 118, 2718.987f, -1252.988f, 48.8628f, 2);
	Stack.Invoke(iParam0, 118, 2655.251f, -1121.463f, 49.9823f, 3);
	Stack.Invoke(iParam0, 118, 2504.686f, -1230.827f, 48.22f, 4);
	Stack.Invoke(iParam0, 118, 2675.291f, -1388.496f, 45.499f, 5);
	Stack.Invoke(iParam0, 118, -772.2189f, -1330.509f, 42.6413f, 6);
	Stack.Invoke(iParam0, 118, -841.984f, -1319.104f, 42.699f, 7);
	Stack.Invoke(iParam0, 118, -855.149f, -1381.493f, 42.709f, 8);
	Stack.Invoke(iParam0, 118, -755.542f, -1304.519f, 42.759f, 9);
	Stack.Invoke(iParam0, 119, -1371.9f, 117.2f, 83.8f, 0);
	Stack.Invoke(iParam0, 119, -1414.094f, -1515.714f, 85.1308f, 1);
	Stack.Invoke(iParam0, 119, -1567.185f, -1670.679f, 78.1019f, 2);
	Stack.Invoke(iParam0, 119, 889.8477f, 1273.715f, 234.1128f, 3);
	Stack.Invoke(iParam0, 119, 712.6324f, 1884.503f, 238.3911f, 4);
	Stack.Invoke(iParam0, 119, 1208.474f, 725.8189f, 100.6124f, 5);
	Stack.Invoke(iParam0, 119, 1065.796f, 45.7184f, 85.7752f, 6);
	Stack.Invoke(iParam0, 119, 2339.173f, 355.338f, 55.7178f, 7);
	Stack.Invoke(iParam0, 119, 2522.906f, 1697.219f, 86.4072f, 8);
	Stack.Invoke(iParam0, 119, 1178.059f, -2177.841f, 54.1327f, 9);
	Stack.Invoke(iParam0, 119, 1578.016f, -195.802f, 79.6787f, 10);
	Stack.Invoke(iParam0, 119, 825.1554f, -1435.466f, 52.8703f, 11);
	Stack.Invoke(iParam0, 119, 920.1998f, -560.8011f, 89.0324f, 12);
	Stack.Invoke(iParam0, 119, -2242.403f, -1552.961f, 149.5428f, 13);
	Stack.Invoke(iParam0, 119, -2426.368f, -1349.323f, 152.7462f, 14);
	Stack.Invoke(iParam0, 119, -2058.923f, -1291.287f, 116.7038f, 15);
	Stack.Invoke(iParam0, 119, -4483.045f, -2944.134f, -19.1217f, 16);
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	if (!func_383(iParam0))
	{
		return;
	}
	if (!func_384(iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1310750[iParam0 /*111*/].f_34), iParam1);
	func_386(iParam0, func_385(iParam1), iParam2);
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_383(iParam0))
	{
		return;
	}
	func_387(&(Global_1310750[iParam0 /*111*/].f_35), iParam1);
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iVar2 = func_388(iVar0);
		if (iVar2 & iParam1 != 0)
		{
			iVar1 = (17 + iVar0);
			Global_1310750[iParam0 /*111*/].f_64[iVar1] = iParam2;
		}
		iVar0++;
	}
}

void func_113()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		Global_1326862.f_512[iVar0] = iVar4;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 120)
		{
			if ((func_389(iVar1, 1) && MISC::IS_BIT_SET(Global_1310750[iVar1 /*111*/].f_34, iVar0)) && !func_390(iVar1, (1 << 13)))
			{
				Global_1326862.f_11[iVar4] = iVar1;
				iVar4++;
			}
			iVar1++;
		}
		Global_1326862.f_558[iVar0] = (iVar4 - 1);
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 < 25)
	{
		iVar2 = func_388(iVar3);
		Global_1326862.f_512[(17 + iVar3)] = iVar4;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 120)
		{
			if ((func_389(iVar1, 2) && func_391(iVar1, iVar2)) && !func_390(iVar1, (1 << 13)))
			{
				Global_1326862.f_11[iVar4] = iVar1;
				iVar4++;
			}
			iVar1++;
		}
		Global_1326862.f_558[(17 + iVar3)] = (iVar4 - 1);
		iVar3++;
	}
}

bool func_114(int iParam0)
{
	return !iParam0 <= 0;
}

int func_115()
{
	return Global_1572887.f_12;
}

void func_116(int iParam0, bool bParam1)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_392(iParam0))
	{
		return;
	}
	func_393(iParam0, 2);
	if (bParam1)
	{
		if (!func_394(0, 0, 1))
		{
			func_308(1, 6);
		}
	}
}

void func_117()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 175)
	{
		func_395(iVar0);
		iVar0++;
	}
}

void func_118(int iParam0, char* sParam1, int iParam2, Vector3 vParam3, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	if (!func_396(iParam0))
	{
		return;
	}
	if (Global_1879534 == 0)
	{
		Global_1392626[iParam0 /*32*/].f_3 = func_288(0, iParam0, 6, func_397(iParam0));
		strcpy_s(&(Global_1392626[iParam0 /*32*/].f_13), 64, sParam1);
		Global_1392626[iParam0 /*32*/].f_12 = iParam2;
		Global_1392626[iParam0 /*32*/].f_27 = { vParam6 /*3*/ };
		Global_1392626[iParam0 /*32*/].f_4 = fParam9;
		Global_1392626[iParam0 /*32*/].f_22 = iParam11;
		Global_1392626[iParam0 /*32*/].f_7 = iParam12;
		Global_1392626[iParam0 /*32*/].f_5 = iParam13;
		Global_1392626[iParam0 /*32*/].f_6 = iParam15;
	}
	Global_1392626[iParam0 /*32*/].f_24 = { vParam3 /*3*/ };
	Global_40.f_9052.f_1[iParam0] = -15;
	if (Global_40 == 0 || Global_1879534 == 1)
	{
		if (iParam10 == 1)
		{
			func_398(iParam0, 4);
		}
		else
		{
			func_399(iParam0, 4);
		}
	}
	func_400(&(Global_1392626[iParam0 /*32*/].f_8), iParam14);
}

void func_119(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Global_1415419.f_19[iParam0 /*12*/].f_4 = iParam0;
	Global_1415419.f_19[iParam0 /*12*/] = iParam1;
	Global_1415419.f_19[iParam0 /*12*/].f_1 = iParam2;
	Global_1415419.f_19[iParam0 /*12*/].f_2 = iParam3;
	Global_1415419.f_19[iParam0 /*12*/].f_5 = iParam4;
	Global_1415419.f_19[iParam0 /*12*/].f_6 = iParam5;
}

void func_120(int iParam0)
{
	if (!func_401(iParam0))
	{
		return;
	}
	if (!func_402(iParam0))
	{
	}
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_4 = 0;
}

bool func_121(int iParam0)
{
	return Global_32074.f_2697.f_6[iParam0 /*6*/].f_4;
}

int func_122(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0);
}

void func_123(int iParam0)
{
	if (!func_401(iParam0))
	{
		return;
	}
	if (!func_402(iParam0))
	{
	}
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_4 = 1;
}

void func_124(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

bool func_125(var uParam0)
{
	return func_403(*uParam0, 1);
}

void func_126(var uParam0, bool bParam1)
{
	if (bParam1 || !func_125(uParam0))
	{
		func_404(uParam0);
	}
}

int func_127(var uParam0)
{
	if (!func_125(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_405(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_406() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

bool func_128()
{
	var uVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = 0;
	iVar6 = 0;
	while (iVar6 < 25)
	{
		iVar5 = func_407(iVar6);
		if (ITEMDATABASE::_ITEMDATABASE_IS_SHOP_KEY_VALID(iVar5))
		{
			iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(iVar5);
			if (iVar4 > 0)
			{
				iVar3 = 0;
				while (iVar3 < iVar4)
				{
					if (ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(iVar5, iVar3, &uVar0))
					{
						func_408(uVar0);
					}
					iVar3++;
				}
			}
		}
		iVar6++;
	}
	return true;
}

void func_129(var uParam0)
{
	struct<4> /*32*/ sVar0;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, 1454239731, "weather_groups");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, -1414071153, "group");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, -1922022867, "group(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, 22618052, "weather");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, -263946049, "weather(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, 1518212392, ":name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, -744273763, ":allowed");
	sVar0.f_0 = *uParam0;
	sVar0.f_1 = 0;
	sVar0.f_2 = 1454239731;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar5, &sVar0))
	{
		return;
	}
	sVar0.f_1 = uVar5;
	sVar0.f_2 = -1414071153;
	iVar11 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&sVar0);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		sVar0.f_1 = uVar5;
		sVar0.f_2 = -1922022867;
		sVar0.f_3 = iVar12;
		if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar6, &sVar0))
		{
		}
		else
		{
			sVar0.f_1 = uVar6;
			sVar0.f_2 = 1518212392;
			if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar8, &sVar0))
			{
			}
			else
			{
				iVar13 = uVar8;
				iVar14 = func_409(iVar13, 1);
				sVar0.f_1 = uVar6;
				sVar0.f_2 = 22618052;
				iVar15 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&sVar0);
				iVar16 = 0;
				while (iVar16 < iVar15)
				{
					sVar0.f_1 = uVar6;
					sVar0.f_2 = -263946049;
					sVar0.f_3 = iVar16;
					if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar7, &sVar0))
					{
					}
					else
					{
						sVar0.f_1 = uVar7;
						sVar0.f_2 = 1518212392;
						if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar9, &sVar0))
						{
						}
						else
						{
							iVar17 = uVar9;
							iVar18 = func_410(iVar17, 1);
							if (iVar18 < 0 || iVar18 > 31)
							{
							}
							else
							{
								sVar0.f_1 = uVar7;
								sVar0.f_2 = -744273763;
								if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&bVar10, &sVar0))
								{
								}
								else if (iVar14 < 0 || iVar14 >= 15)
								{
								}
								else if (bVar10)
								{
									MISC::SET_BIT(&(Global_1934765.f_302[iVar14]), iVar18);
								}
								else
								{
									MISC::CLEAR_BIT(&(Global_1934765.f_302[iVar14]), iVar18);
								}
							}
						}
					}
					iVar16++;
				}
			}
		}
		iVar12++;
	}
	MISC::SET_BIT(&(Global_1934765.f_301), 0);
}

void func_130()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(joaat("CABR01"), 0);
			func_411(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_412();
		}
		return;
	}
	if (!func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	func_413();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_411(1);
}

void func_131()
{
	if (!func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_414(joaat("CLOTHING_SP_OUTFIT_SONY_001"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_132()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_415(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_415(1);
}

void func_133()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			func_416(15000, 0, 0, 0, 1);
			func_415(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	func_417(15000, 0, 1065353216, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
	func_415(1);
}

void func_134()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!func_418(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !func_419(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_414(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
			if (!func_420(1))
			{
				func_421(1);
			}
		}
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!func_418(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !func_419(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_414(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
			if (!func_420(2))
			{
				func_421(2);
			}
		}
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !func_420(4))
		{
			func_421(4);
		}
		if (func_420(0))
		{
			func_422(0);
		}
	}
	else
	{
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (func_418(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_335(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, joaat("REMOVE_REASON_DEFAULT"), 0);
			}
		}
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (func_418(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_335(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, joaat("REMOVE_REASON_DEFAULT"), 0);
			}
		}
		if (func_420(1))
		{
			func_422(1);
		}
		if (func_420(2))
		{
			func_422(2);
		}
		if (func_420(4))
		{
			func_422(4);
		}
		if (!func_420(0))
		{
			func_421(0);
		}
	}
}

void func_135()
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar15;
	int iVar16;

	bVar0 = UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER"));
	if (!bVar0)
	{
		return;
	}
	if (!func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
	{
		return;
	}
	sVar1 = { func_423() /*14*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar1))
	{
		func_424(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_425(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0))
		{
			sVar1 = { func_423() /*14*/ };
		}
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar1))
	{
		func_426(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), sVar1, joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_GRIP"));
		func_426(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), sVar1, joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL"));
		func_426(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_BARREL_MATERIAL"));
		func_426(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_MATERIAL"));
		func_426(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_HAMMER_MATERIAL"));
		func_426(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_SIGHT_MATERIAL"));
		func_426(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_TRIGGER_MATERIAL"));
		func_426(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING"));
		func_426(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_FRAME_MATERIAL"));
		func_426(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_MATERIAL"));
		func_426(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING"));
		func_426(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING_MATERIAL"));
		func_426(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING"));
		func_426(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING_MATERIAL"));
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !func_427())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_428(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (func_429(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((func_429(24) && func_428(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!func_428(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (func_429(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

void func_136()
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE")))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::IS_STADIA_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
}

bool func_137(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_138(int iParam0)
{
	if (!func_430(iParam0))
	{
		return 0;
	}
	return Global_40.f_4942[iParam0 /*60*/].f_6;
}

void func_139(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_137(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] -= Global_40.f_4942[iParam0 /*60*/] & iParam1;
}

void func_140(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_137(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] |= iParam1;
}

void func_141(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_430(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_140(iParam0, (1 << 15), 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(PERSCHAR::_GET_PERSCHAR_MODEL_NAME(func_431(iParam0, 1)), true);
		if (bParam2)
		{
			Global_1360165[iParam0 /*1157*/].f_126 = func_432(iParam0);
		}
	}
	else
	{
		func_139(iParam0, (1 << 15), 1);
	}
}

bool func_142(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_430(iParam0))
		{
			return false;
		}
	}
	func_433(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_143(int iParam0, bool bParam1)
{
	if (func_137(iParam0))
	{
		if (bParam1)
		{
			func_434(iParam0, joaat("CONSUMABLE_MEDICINE"), 2);
			func_434(iParam0, joaat("CONSUMABLE_APPLE"), 1);
			if (func_320(iParam0, (1 << 12), 1) && iParam0 != 14)
			{
				func_434(iParam0, joaat("CONSUMABLE_CHEWING_TOBACCO"), 1);
			}
			else
			{
				func_434(iParam0, joaat("CONSUMABLE_TONIC"), 1);
			}
		}
		else
		{
			func_434(iParam0, joaat("CONSUMABLE_MEDICINE"), 1);
			func_434(iParam0, joaat("AMMO_RIFLE_AMMOBOX"), 2);
			if (func_435())
			{
				func_434(iParam0, joaat("CONSUMABLE_CHEWING_TOBACCO"), 1);
				func_434(iParam0, joaat("AMMO_PISTOL_AMMOBOX"), 1);
			}
			else
			{
				func_434(iParam0, joaat("CONSUMABLE_WHISKEY"), 1);
			}
		}
	}
}

void func_144()
{
	Global_1360165[0 /*1157*/].f_65[0] = 2228322;
	Global_1360165[0 /*1157*/].f_65[1] = 1074065741;
	Global_1360165[0 /*1157*/].f_65[2] = 22528;
	Global_1360165[1 /*1157*/].f_65[0] = 144158;
	Global_1360165[1 /*1157*/].f_65[1] = 1073852744;
	Global_1360165[1 /*1157*/].f_65[2] = 16478;
	Global_1360165[2 /*1157*/].f_65[0] = 1074176226;
	Global_1360165[2 /*1157*/].f_65[1] = 1074647372;
	Global_1360165[2 /*1157*/].f_65[2] = 26624;
	Global_1360165[3 /*1157*/].f_65[0] = 176226;
	Global_1360165[3 /*1157*/].f_65[1] = 520524;
	Global_1360165[3 /*1157*/].f_65[2] = (1 << 11);
	Global_1360165[4 /*1157*/].f_65[0] = 52432898;
	Global_1360165[4 /*1157*/].f_65[1] = 328;
	Global_1360165[4 /*1157*/].f_65[2] = (1 << 17);
	Global_1360165[5 /*1157*/].f_65[0] = 131074;
	Global_1360165[5 /*1157*/].f_65[1] = 1074057548;
	Global_1360165[5 /*1157*/].f_65[2] = 20480;
	Global_1360165[6 /*1157*/].f_65[0] = 136487010;
	Global_1360165[6 /*1157*/].f_65[1] = 1175056840;
	Global_1360165[6 /*1157*/].f_65[2] = 18432;
	Global_1360165[7 /*1157*/].f_65[0] = 807575554;
	Global_1360165[7 /*1157*/].f_65[1] = 1074893256;
	Global_1360165[7 /*1157*/].f_65[2] = (1 << 14);
	Global_1360165[8 /*1157*/].f_65[0] = 1617920;
	Global_1360165[8 /*1157*/].f_65[1] = 1210089800;
	Global_1360165[8 /*1157*/].f_65[2] = (1 << 14);
	Global_1360165[9 /*1157*/].f_65[0] = 176130;
	Global_1360165[9 /*1157*/].f_65[1] = 1074123080;
	Global_1360165[9 /*1157*/].f_65[2] = (1 << 14);
	Global_1360165[10 /*1157*/].f_65[0] = 6146;
	Global_1360165[10 /*1157*/].f_65[1] = 1073744232;
	Global_1360165[10 /*1157*/].f_65[2] = (1 << 14);
	Global_1360165[11 /*1157*/].f_65[0] = 350896130;
	Global_1360165[11 /*1157*/].f_65[1] = 37696;
	Global_1360165[11 /*1157*/].f_65[2] = 1;
	Global_1360165[12 /*1157*/].f_65[1] = (1 << 28);
	Global_1360165[13 /*1157*/].f_65[0] = 2228226;
	Global_1360165[13 /*1157*/].f_65[1] = 1078251856;
	Global_1360165[13 /*1157*/].f_65[2] = 278528;
	Global_1360165[14 /*1157*/].f_65[0] = 2;
	Global_1360165[14 /*1157*/].f_65[1] = 1073774928;
	Global_1360165[14 /*1157*/].f_65[2] = 378752;
	Global_1360165[15 /*1157*/].f_65[0] = 2;
	Global_1360165[15 /*1157*/].f_65[1] = 1073844544;
	Global_1360165[15 /*1157*/].f_65[2] = (1 << 14);
	Global_1360165[16 /*1157*/].f_65[0] = 2;
	Global_1360165[16 /*1157*/].f_65[1] = 1073779012;
	Global_1360165[16 /*1157*/].f_65[2] = (1 << 14);
	Global_1360165[17 /*1157*/].f_65[0] = 2097154;
	Global_1360165[17 /*1157*/].f_65[1] = 323912;
	Global_1360165[18 /*1157*/].f_65[0] = 143362;
	Global_1360165[18 /*1157*/].f_65[1] = 25170248;
	Global_1360165[19 /*1157*/].f_65[0] = 2;
	Global_1360165[19 /*1157*/].f_65[1] = 1073852864;
	Global_1360165[19 /*1157*/].f_65[2] = (1 << 14);
	Global_1360165[20 /*1157*/].f_65[0] = 98306;
	Global_1360165[20 /*1157*/].f_65[1] = 1073779008;
	Global_1360165[20 /*1157*/].f_65[2] = (1 << 14);
	Global_1360165[21 /*1157*/].f_65[0] = 4098;
	Global_1360165[21 /*1157*/].f_65[1] = 1073746248;
	Global_1360165[21 /*1157*/].f_65[2] = (1 << 14);
	Global_1360165[22 /*1157*/].f_65[0] = 2097154;
	Global_1360165[22 /*1157*/].f_65[1] = 1073852736;
	Global_1360165[22 /*1157*/].f_65[2] = (1 << 14);
	Global_1360165[23 /*1157*/].f_65[0] = 135168;
	Global_1360165[23 /*1157*/].f_65[1] = 561498;
	Global_1360165[23 /*1157*/].f_65[2] = 262176;
	Global_1360165[24 /*1157*/].f_65[0] = (1 << 21);
	Global_1360165[24 /*1157*/].f_65[1] = 4194328;
	Global_1360165[24 /*1157*/].f_65[2] = (1 << 18);
	Global_1360165[25 /*1157*/].f_65[0] = (1 << 21);
	Global_1360165[25 /*1157*/].f_65[1] = 24;
	Global_1360165[25 /*1157*/].f_65[2] = (1 << 18);
	Global_1360165[26 /*1157*/].f_65[0] = 2;
	Global_1360165[26 /*1157*/].f_65[1] = 536872028;
	Global_1360165[26 /*1157*/].f_65[2] = (1 << 18);
}

bool func_145(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_146(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_115() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*uParam2 = 47;
			}
			else
			{
				*uParam2 = 63;
			}
			if (bVar0)
			{
				*uParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*uParam2 = 127;
			}
			else
			{
				*uParam2 = 136;
			}
			if (bVar0)
			{
				*uParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
			if (bVar0)
			{
				*uParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
			if (bVar0)
			{
				*uParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
			if (bVar0)
			{
				*uParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*uParam2 = 500;
			}
			else
			{
				*uParam2 = 502;
			}
			if (bVar0)
			{
				*uParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
			if (bVar0)
			{
				*uParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
			if (bVar0)
			{
				*uParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*uParam2 = 598;
			}
			else
			{
				*uParam2 = 612;
			}
			if (bVar0)
			{
				*uParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*uParam2 = 673;
			}
			else
			{
				*uParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
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
			*uParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_147(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_148(int iParam0, int iParam1)
{
	if (func_115() != -1)
	{
		return;
	}
	if (!func_145(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

void func_149(int iParam0, int iParam1)
{
	if (func_115() != -1)
	{
		return;
	}
	if (!func_145(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= Global_24887[iParam0 /*2*/] & iParam1;
}

void func_150()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Global_1879534.f_7288[iVar0] = 0;
		iVar0++;
	}
}

void func_151()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 240)
	{
		Global_1879534.f_211[iVar0 /*4*/] = 0;
		Global_1879534.f_211[iVar0 /*4*/].f_1 = 1;
		Global_1879534.f_211[iVar0 /*4*/].f_2 = 2;
		Global_1879534.f_211[iVar0 /*4*/].f_3 = 3;
		iVar0++;
	}
}

void func_152()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 350)
	{
		Global_1879534.f_1172[iVar0 /*2*/] = 0;
		Global_1879534.f_1172[iVar0 /*2*/].f_1 = 1;
		iVar0++;
	}
}

void func_153()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		strcpy_s(&(Global_1879534.f_1873[iVar0 /*4*/]), 32, "NOT_SETUP");
		iVar0++;
	}
}

void func_154()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		strcpy_s(&(Global_1879534.f_1878[iVar0 /*8*/]), 32, "NOT_SETUP");
		Global_1879534.f_1878[iVar0 /*8*/].f_4 = 0;
		Global_1879534.f_1878[iVar0 /*8*/].f_5 = 0;
		Global_1879534.f_1878[iVar0 /*8*/].f_6 = 0;
		Global_1879534.f_1878[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
}

void func_155()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_1879534.f_1897[iVar0 /*12*/] = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_1 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_2 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_3 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_4 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_6 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_7 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_10 = 0;
		Global_1879534.f_1897[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_156()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_1879534.f_1887[iVar0 /*9*/] = 0;
		strcpy_s(&(Global_1879534.f_1887[iVar0 /*9*/].f_1), 32, "");
		Global_1879534.f_1887[iVar0 /*9*/].f_5 = 0;
		Global_1879534.f_1887[iVar0 /*9*/].f_6 = -1;
		Global_1879534.f_1887[iVar0 /*9*/].f_7 = -1;
		Global_1879534.f_1887[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_157()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1770)
	{
		Global_1879534.f_1911[iVar0 /*3*/] = -1;
		Global_1879534.f_1911[iVar0 /*3*/].f_1 = 12;
		Global_1879534.f_1911[iVar0 /*3*/].f_2 = -1;
		iVar0++;
	}
	Global_1879534.f_7287 = 0;
}

void func_158()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		Global_1879534.f_7222[iVar0 /*2*/] = -1;
		Global_1879534.f_7222[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
}

void func_159()
{
}

void func_160(int iParam0)
{
	if (!iParam0 < Global_1879534.f_7300)
	{
		return;
	}
	if (!Global_1879534.f_7222[iParam0 /*2*/] == -1)
	{
		return;
	}
	Global_1879534.f_7222[iParam0 /*2*/] = Global_1879534.f_7287;
}

void func_161()
{
	int iVar0;

	iVar0 = 12;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1750917831;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(iVar0);
}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1913176419;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = 0;
	if (iParam0 == -1)
	{
		iVar2 = 0;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 0);
		iVar2 = iParam0;
	}
	if (iParam1 == -1)
	{
		iVar3 = 0;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 1);
		iVar3 = iParam1;
	}
	if (iParam2 == -1)
	{
		iVar4 = 0;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 2);
		iVar4 = iParam2;
	}
	if (iParam3 == -1)
	{
		iVar5 = 1;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 3);
		iVar5 = iParam3;
	}
	if (iParam4 == -1)
	{
		iVar6 = 1;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 4);
		iVar6 = iParam4;
	}
	if (iParam5 == -1)
	{
		iVar7 = 1898;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 5);
		iVar7 = iParam5;
	}
	func_438(&uVar8, iVar4, iVar3, iVar2, iVar5, iVar6, iVar7);
	func_439(Global_1879534.f_7288[iVar0], uVar8, iVar1, -1, -1);
	func_437(iVar0);
}

void func_163(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1535566683;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_164(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1978308683;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_165(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2001493029;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_166(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 99307713;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_167()
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1520384013;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
}

void func_168(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1360770031;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_169(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1738949208;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 672918768;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 2;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_171(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1181815586;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_172(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -471968486;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = func_441(bParam1, 1, 0);
	iVar2 = func_441(bParam2, 1, 0);
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar1, iVar2, 0);
	func_437(iVar0);
}

void func_173(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1472568760;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	fParam1 *= 100.0f;
	fParam2 *= 100.0f;
	iVar1 = BUILTIN::ROUND(fParam1);
	iVar2 = BUILTIN::ROUND(fParam2);
	if (iParam0 == 27)
	{
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar1, iVar2, 0);
	func_437(iVar0);
}

void func_174(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -756450532;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_175(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1331093620;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_176(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -259205396;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1815455941;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -914010892;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_179(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1536300574;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_180(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 477724652;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -346691420;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_182(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -549926405;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1449067653;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_184()
{
	int iVar0;

	if (Global_1934765.f_69.f_201 <= 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1934765.f_69.f_201 - 1))
	{
		if (Global_1934765.f_69[iVar0 /*2*/].f_1)
		{
			func_198(Global_1934765.f_69[iVar0 /*2*/]);
		}
		else
		{
			func_227(Global_1934765.f_69[iVar0 /*2*/]);
		}
		iVar0++;
	}
}

void func_185(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 794205136;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = func_441(bParam0, 1, 0);
	func_437(0);
}

void func_186(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1156263964;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_187(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1598787124;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0), func_441(bParam2, 1, 0), 0);
	func_437(iVar0);
}

void func_188(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1438979859;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_189(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 147262072;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_190(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1673286084;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_191(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -663280148;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		MISC::SET_BIT(&iVar1, 0);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&iVar1, 1);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&iVar1, 2);
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar1, iParam4, 0);
	func_437(iVar0);
}

void func_192(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 901529234;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_440(Global_1879534.f_7288[iVar0], iParam0, iVar1);
	func_437(iVar0);
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	if (bParam4)
	{
		Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 363897013;
	}
	else
	{
		Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1225435693;
	}
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	if (iParam2 != -1)
	{
		while ((iParam2 % 24) > 0)
		{
			iParam3++;
			iParam2 -= 24;
		}
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_194(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2030110303;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_195(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 203794828;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_196(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1408274960;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_197(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = joaat("FLOW_DO_MISSION_NOW");
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_198(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1289504437;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_199(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1628808209;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_200(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1063874733;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_201(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 670944580;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_202(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -486436146;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_203(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 111818573;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_204()
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1093832731;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
}

void func_205()
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -159886710;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
}

void func_206(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 225795806;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_207(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 40566325;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_208(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2042718100;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_209(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1371030896;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_210(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1677774865;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(iVar0);
}

void func_211(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	func_436(iVar0);
	iVar1 = iParam0;
	iVar1 += (iParam1 * 1000000);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1982716178;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iVar1;
	func_437(iVar0);
}

void func_212(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 995574226;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_213(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -718595174;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_214(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1729634664;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_215()
{
	int iVar0;

	iVar0 = 12;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1909997983;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(iVar0);
}

void func_216(int iParam0)
{
	if (!iParam0 < Global_1879534.f_7300)
	{
		return;
	}
	if (Global_1879534.f_7222[iParam0 /*2*/] == -1)
	{
		return;
	}
	if (!Global_1879534.f_7222[iParam0 /*2*/].f_1 == -1)
	{
		return;
	}
	if (Global_1879534.f_7222[iParam0 /*2*/] == Global_1879534.f_7287)
	{
		Global_1879534.f_7222[iParam0 /*2*/] = -1;
		return;
	}
	Global_1879534.f_7222[iParam0 /*2*/].f_1 = (Global_1879534.f_7287 - 1);
	if (Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1 == -1)
	{
		Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1 = Global_1879534.f_7222[iParam0 /*2*/];
	}
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 656468362;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	if (iParam0 == -1)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iParam1 == -1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = iParam1;
	}
	if (iParam2 == -1)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = iParam2;
	}
	if (iParam3 == -1)
	{
		iVar4 = 1;
	}
	else
	{
		iVar4 = iParam3;
	}
	if (iParam4 == -1)
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = iParam4;
	}
	if (iParam5 == -1)
	{
		iVar6 = 1898;
	}
	else
	{
		iVar6 = iParam5;
	}
	func_438(&uVar7, iVar3, iVar2, iVar1, iVar4, iVar5, iVar6);
	func_440(Global_1879534.f_7288[iVar0], uVar7, -1);
	func_437(iVar0);
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -915138989;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_219(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -148700515;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_220(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2121795512;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_221(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1053276381;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_222(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1120129944;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_223(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -508972844;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(iVar0);
}

void func_224(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2049944022;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(iVar0);
}

void func_225(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 759449782;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_226(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1378868385;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_227(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 26902781;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_228(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -780657756;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_229(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 634895793;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_230(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1050963831;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_231(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -90803914;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_232(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 47963769;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_233(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1015095530;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_234(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 939785963;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_235(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = joaat("FLOW_DO_MISSION_AT_BLIP");
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1210875743;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	if (iParam0 < 0)
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
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_237(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	func_436(iVar0);
	iVar1 = iParam0;
	iVar1 += (iParam1 * 1000000);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -964850613;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iVar1;
	func_437(iVar0);
}

void func_238(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 498793617;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0), iParam2, 0);
	func_437(iVar0);
}

void func_239(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1785731347;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_240(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -217347738;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_241(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1879534.f_7287)
	{
		if (Global_1879534.f_1911[iVar1 /*3*/] == 531432813)
		{
			iVar2 = Global_1879534.f_1911[iVar1 /*3*/].f_2;
			iVar3 = Global_1879534.f_211[iVar2 /*4*/];
			if (iVar3 == iParam0)
			{
				return;
			}
		}
		iVar1++;
	}
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 531432813;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar4 = 0;
	if (bParam1)
	{
		iVar4 = 1;
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar4, -1, -1);
	func_437(iVar0);
}

void func_242(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1984622930;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, -1, -1);
	func_437(iVar0);
}

void func_243(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -138866642;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam1, iParam0);
	func_437(iVar0);
}

void func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	func_436(iVar0);
	iVar1 = iParam0;
	iVar1 += (iParam1 * 1000000);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1878191811;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iVar1;
	func_437(iVar0);
}

void func_245(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1805087304;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_246(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1523883609;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_247(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 987244216;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_248(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2025667422;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_249(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -566605714;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_250(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 442105888;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_251(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1083639171;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_252(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1810366898;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_253(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 891989563;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_254(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1281917784;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_255(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 630069176;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_256(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1271429659;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_257(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1940826795;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_258(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2055336839;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1509183597;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1941172569;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_261(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1883692561;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_262(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1672441969;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = func_441(bParam0, 1, 0);
	func_437(0);
}

void func_263(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 460788415;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = func_441(bParam0, 1, 0);
	func_437(0);
}

void func_264(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 7411042;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_265(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 644587471;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = func_441(bParam0, 1, 0);
	func_437(0);
}

void func_266(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -716094127;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_267(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -391651599;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -838803174;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam2, iParam1, -1);
	func_437(iVar0);
}

void func_269(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -801023198;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_270(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -289754349;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_271(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 242535924;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_272(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -845953794;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = func_441(bParam0, 1, 0);
	func_437(0);
}

void func_273()
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -401276712;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
}

void func_274()
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1398429376;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
}

void func_275()
{
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2038286720;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
}

void func_276(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -42848759;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -990335083;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_278(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1260617938;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_279(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1831856550;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_280(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1440757252;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_281(var uParam0)
{
	struct<74> /*592*/ sVar0;

	sVar0.f_36 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
	sVar0.f_38 = 1;
	sVar0.f_65 = 1117126656;
	sVar0.f_66 = 1120403456;
	sVar0.f_68 = 45000;
	*uParam0 = { sVar0 /*74*/ };
}

void func_282(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, char* sParam6, Vector3 vParam7, int iParam10, int iParam11)
{
	if (!func_442(iParam0))
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam2) && func_115() == -1)
	{
		return;
	}
	if (func_443(vParam7, 0.0f, 0.0f, 0.0f, 1056964608, 1))
	{
		return;
	}
	Global_1835011[iParam0 /*74*/] = iParam1;
	strcpy_s(&(Global_1835011[iParam0 /*74*/].f_3), 32, sParam2);
	Global_1835011[iParam0 /*74*/].f_68 = iParam11;
	strcpy_s(&(Global_1835011[iParam0 /*74*/].f_8), 8, sParam3);
	Global_1835011[iParam0 /*74*/].f_1 = func_288(iParam0, iParam1, 1, 0);
	if (!func_289(Global_1835011[iParam0 /*74*/].f_1))
	{
		return;
	}
	if (func_334(Global_1835011[iParam0 /*74*/].f_1) == -1)
	{
		func_444(Global_1835011[iParam0 /*74*/].f_1, 0);
	}
	Global_1835011[iParam0 /*74*/].f_29 = iParam4;
	Global_1835011[iParam0 /*74*/].f_18 = { vParam7 /*3*/ };
	Global_1835011[iParam0 /*74*/].f_21 = func_290(Global_1835011[iParam0 /*74*/].f_18, 1);
	Global_1835011[iParam0 /*74*/].f_26 = iParam10;
	func_445(iParam0, sParam5);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6) && SCRIPTS::DOES_SCRIPT_EXIST(sParam6))
	{
		strcpy_s(&(Global_1835011[iParam0 /*74*/].f_12), 32, sParam6);
		Global_1835011[iParam0 /*74*/].f_17 = 1;
	}
	Global_1835011[iParam0 /*74*/].f_30 = 0;
	func_285(iParam0, 1117126656, 1120403456, 1128792064);
}

void func_283(int iParam0, char* sParam1)
{
	if (!func_442(iParam0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam1))
	{
		return;
	}
	strcpy_s(&(Global_1835011[iParam0 /*74*/].f_22), 32, sParam1);
}

void func_284(int iParam0, int iParam1)
{
	if (!func_442(iParam0))
	{
		return;
	}
	if (!func_137(iParam1))
	{
		return;
	}
	func_446(&(Global_1835011[iParam0 /*74*/].f_30), BUILTIN::SHIFT_LEFT(1, iParam1));
}

void func_285(int iParam0, float fParam1, float fParam2, int iParam3)
{
	if (!func_442(iParam0))
	{
		return;
	}
	if (fParam2 <= fParam1)
	{
		return;
	}
	Global_1835011[iParam0 /*74*/].f_65 = fParam1;
	Global_1835011[iParam0 /*74*/].f_66 = fParam2;
	Global_1835011[iParam0 /*74*/].f_67 = iParam3;
}

bool func_286(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_287(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

int func_288(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_447())
	{
		iVar2 = func_447();
	}
	iVar5 = func_448(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_449(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_449(iVar6) == 0)
			{
				return func_450(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_449(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_449(iVar6) == 0)
			{
				return func_450(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_450(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_289(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_290(Vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_451();
	if (func_294(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_452(vParam0, iParam3);
}

void func_291(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_292(int iParam0)
{
	func_453(&(Global_1392915[iParam0 /*12*/]));
	func_454(&(Global_1392915.f_121[iParam0 /*20*/]));
}

bool func_293(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_294(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_295(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_94(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_296(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_40.f_4283.f_313 = iParam1;
			break;
		case 1:
			Global_40.f_4283.f_316 = iParam1;
			break;
		case 2:
			Global_40.f_4283.f_317 = iParam1;
			break;
		case 3:
			Global_40.f_4283.f_318 = iParam1;
			break;
		case 4:
			Global_40.f_4283.f_319 = iParam1;
			break;
		case 5:
			Global_40.f_4283.f_320 = iParam1;
			break;
		case 10:
			Global_40.f_4283.f_321 = iParam1;
			break;
		case 12:
			Global_40.f_4283.f_315 = iParam1;
			break;
		case 13:
			Global_40.f_4283.f_314 = iParam1;
			break;
		case 14:
			Global_40.f_4283.f_322 = iParam1;
			break;
	}
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_298(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CSTAG_COL_BASE");
		case 1:
			return joaat("CSTAG_HSO_BASE");
		case 2:
			return joaat("CSTAG_CLM_BASE");
		case 3:
			return joaat("CSTAG_SDB_BASE");
		case 4:
			return joaat("CSTAG_GUA_BASE");
		case 5:
			return joaat("CSTAG_LAK_BASE");
		case 6:
			return joaat("CSTAG_BVH_BASE");
		case 7:
			return joaat("CSTAG_PRG_BASE");
		case 8:
			return joaat("CSTAG_BCH_BASE");
		default:
			break;
	}
	return 176656832;
}

int func_300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_455(iParam0);
	iVar3 = func_456(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_457();
				func_458(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_459(iParam0, 1);
			if (func_460(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_461(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_462(1, iParam0);
				}
				else
				{
					func_463(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_301()
{
	func_303(joaat("WS_POST_CARAVAN_BEAVERHOLLOW"));
	func_303(joaat("WS_POST_CARAVAN_HORSESHOE"));
	func_303(joaat("WS_POST_CARAVAN_CLEMENS"));
	func_303(joaat("WS_POST_CARAVAN_SHADY"));
}

void func_302(char* sParam0)
{
	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
	{
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP(sParam0);
	}
}

void func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_464(iParam0, 1);
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

void func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_464(iParam0, 1);
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

void func_305(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && func_115() == 0)
	{
		return;
	}
	if (func_465(128))
	{
		return;
	}
	if (!func_466(iParam0))
	{
		return;
	}
	if (func_467(iParam0, 32))
	{
		return;
	}
	func_468(iParam0, 32);
	func_469(&Global_1935630, (1 << 13));
	func_471(func_470(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_472(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_471(func_470(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_471(func_470(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_471(func_470(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_471(func_470(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_471(func_470(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_471(func_470(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(1822876181);
			break;
		case 1:
			MAP::_MAP_DISCOVER_REGION(1092217275);
			break;
		case 2:
			MAP::_MAP_DISCOVER_REGION(1855549007);
			MAP::_MAP_DISCOVER_REGION(1542246539);
			break;
		case 6:
			MAP::_MAP_DISCOVER_REGION(-237206861);
			break;
		case 7:
			MAP::_MAP_DISCOVER_REGION(276890716);
			break;
		case 9:
			MAP::_MAP_DISCOVER_REGION(-353968602);
			break;
		case 10:
			MAP::_MAP_DISCOVER_REGION(-1354901649);
			MAP::_MAP_DISCOVER_REGION(-1354901649);
			break;
		case 11:
			MAP::_MAP_DISCOVER_REGION(-496244122);
			break;
		case 12:
			MAP::_MAP_DISCOVER_REGION(-678676588);
			break;
		case 15:
			MAP::_MAP_DISCOVER_REGION(-732274047);
			break;
		case 16:
			MAP::_MAP_DISCOVER_REGION(-12216052);
			break;
		case 17:
			MAP::_MAP_DISCOVER_REGION(-1456731677);
			break;
		case 21:
			MAP::_MAP_DISCOVER_REGION(-2086563810);
			break;
		case 22:
			MAP::_MAP_DISCOVER_REGION(221661572);
			break;
		case 24:
			MAP::_MAP_DISCOVER_REGION(222265732);
			break;
		case 25:
			MAP::_MAP_DISCOVER_REGION(-1484929764);
			break;
		case 26:
			MAP::_MAP_DISCOVER_REGION(1104975149);
			break;
		case 27:
			MAP::_MAP_DISCOVER_REGION(235472255);
			break;
		case 28:
			MAP::_MAP_DISCOVER_REGION(-1337880478);
			break;
		case 29:
			MAP::_MAP_DISCOVER_REGION(-1813267128);
			break;
		case 30:
			MAP::_MAP_DISCOVER_REGION(-1941572412);
			break;
		case 31:
			MAP::_MAP_DISCOVER_REGION(1006072805);
			break;
		case 121:
			MAP::_MAP_DISCOVER_REGION(929640770);
			break;
		case 122:
			MAP::_MAP_DISCOVER_REGION(1603579970);
			break;
		case 124:
			MAP::_MAP_DISCOVER_REGION(-1332669948);
			break;
		case 123:
			MAP::_MAP_DISCOVER_REGION(-1807212021);
			break;
		case 34:
			MAP::_MAP_DISCOVER_REGION(-1347759053);
			break;
		case 36:
			MAP::_MAP_DISCOVER_REGION(-918096609);
			break;
		case 114:
			MAP::_MAP_DISCOVER_REGION(1728445882);
			break;
		case 37:
			MAP::_MAP_DISCOVER_REGION(-507075109);
			break;
		case 40:
			MAP::_MAP_DISCOVER_REGION(462373845);
			break;
		case 42:
			MAP::_MAP_DISCOVER_REGION(-1727895786);
			break;
		case 43:
			MAP::_MAP_DISCOVER_REGION(1826504111);
			break;
		case 44:
			MAP::_MAP_DISCOVER_REGION(1714554710);
			break;
		case 45:
			MAP::_MAP_DISCOVER_REGION(-91026072);
			break;
		case 54:
			MAP::_MAP_DISCOVER_REGION(893855320);
			break;
		case 55:
			MAP::_MAP_DISCOVER_REGION(326709244);
			break;
		case 49:
			MAP::_MAP_DISCOVER_REGION(653799702);
			break;
		case 62:
			MAP::_MAP_DISCOVER_REGION(415864829);
			break;
		case 64:
			MAP::_MAP_DISCOVER_REGION(-1836330842);
			break;
		case 65:
			MAP::_MAP_DISCOVER_REGION(648073069);
			break;
		case 66:
			MAP::_MAP_DISCOVER_REGION(770074951);
			break;
		case 68:
			MAP::_MAP_DISCOVER_REGION(-1276637644);
			break;
		case 71:
			MAP::_MAP_DISCOVER_REGION(-431488293);
			break;
		case 72:
			MAP::_MAP_DISCOVER_REGION(-1101810198);
			break;
		case 74:
			MAP::_MAP_DISCOVER_REGION(-1344767066);
			break;
		case 77:
			MAP::_MAP_DISCOVER_REGION(1472232821);
			break;
		case 79:
			MAP::_MAP_DISCOVER_REGION(-1368676121);
			break;
		case 63:
			MAP::_MAP_DISCOVER_REGION(-33677540);
			break;
		case 80:
			MAP::_MAP_DISCOVER_REGION(1602161184);
			MAP::_MAP_DISCOVER_REGION(-443207523);
			MAP::_MAP_DISCOVER_REGION(-683043834);
			break;
		case 82:
			MAP::_MAP_DISCOVER_REGION(147256338);
			MAP::_MAP_DISCOVER_REGION(-134804027);
			MAP::_MAP_DISCOVER_REGION(2027689141);
			break;
		case 83:
			MAP::_MAP_DISCOVER_REGION(-161135375);
			break;
		case 85:
			MAP::_MAP_DISCOVER_REGION(1625008147);
			break;
		case 86:
			MAP::_MAP_DISCOVER_REGION(121074776);
			break;
		case 87:
			MAP::_MAP_DISCOVER_REGION(1876184276);
			break;
		case 89:
			MAP::_MAP_DISCOVER_REGION(458479023);
			break;
		case 91:
			MAP::_MAP_DISCOVER_REGION(85299473);
			break;
		case 96:
			MAP::_MAP_DISCOVER_REGION(-1150244084);
			break;
		case 98:
			MAP::_MAP_DISCOVER_REGION(759314201);
			break;
		case 99:
			MAP::_MAP_DISCOVER_REGION(2063457042);
			break;
		case 100:
			MAP::_MAP_DISCOVER_REGION(1877776161);
			break;
		case 102:
			MAP::_MAP_DISCOVER_REGION(2143316225);
			break;
		case 104:
			MAP::_MAP_DISCOVER_REGION(-1623232489);
			MAP::_MAP_DISCOVER_REGION(-1393093729);
			break;
		case 106:
			MAP::_MAP_DISCOVER_REGION(1354284392);
			break;
		case 107:
			MAP::_MAP_DISCOVER_REGION(-1430883057);
			break;
		case 109:
			MAP::_MAP_DISCOVER_REGION(820139809);
			break;
		case 112:
			MAP::_MAP_DISCOVER_REGION(1561007383);
			MAP::_MAP_DISCOVER_REGION(-960425936);
			break;
	}
	if (bParam1)
	{
		func_468(iParam0, 64);
	}
}

void func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		iVar1 = func_473(iVar0);
		if (iVar1 != -1)
		{
			if (func_474(iVar1) != -1 && iVar1 != func_475())
			{
				if (iVar0 == Global_1934051.f_33 && func_476(iVar0))
				{
					func_477(iVar0, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));
					func_478(&(Global_1934051.f_33), 0);
				}
				iVar2 = func_479(iVar1, 19);
				if (iVar2 != -1)
				{
					if (iVar0 == Global_1914319.f_15936[iVar2 /*6*/] && func_476(iVar0))
					{
						if (Global_1914319.f_15936[iVar2 /*6*/].f_5)
						{
							Global_1914319.f_15936[iVar2 /*6*/].f_5 = 0;
						}
						func_478(&(Global_1914319.f_15936[iVar2 /*6*/]), 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_475();
	if (func_294(iVar0))
	{
		iVar1 = func_298(iVar0);
		if (func_293(iVar1))
		{
			Global_40.f_9384[iVar1 /*2*/] -= Global_40.f_9384[iVar1 /*2*/] & 1;
		}
	}
	iVar2 = func_297(iParam0);
	iVar3 = func_298(iVar2);
	if (func_293(iVar3))
	{
		Global_40.f_9384[iVar3 /*2*/] |= 1;
		Global_40.f_6 = { Global_1395601.f_5[iVar3 /*28*/].f_2 /*3*/ };
		VOLUME::_0x748C5F51A18CB8F0(0);
		VOLUME::_0x748C5F51A18CB8F0(1);
	}
}

void func_308(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_480(&Global_0, 8);
	}
	if (!func_481() || func_115() != -1)
	{
		return;
	}
	func_480(&Global_0, 1);
}

void func_309(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_297(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_482(iParam0);
	func_483(iParam0);
	func_318();
	if (iVar0 == 9)
	{
		func_484(joaat("WS_SHADY_BELLE_HIDEOUT"), 0, 0);
	}
}

void func_310(int iParam0)
{
	func_485();
	switch (iParam0)
	{
		case 0:
			func_486(-1303.82f, 2431.232f, 307.1254f, 254.7021f, 2);
			func_486(-1331.61f, 2479.874f, 308.7661f, 343.4772f, 1);
			func_486(-1367.155f, 2401.237f, 305.9231f, 182.5857f, 0);
			break;
		case 1:
			func_486(-40.4062f, 24.7958f, 92.5989f, 345.8244f, 2);
			func_486(-46.6053f, 49.3195f, 89.4332f, 32.7929f, 2);
			func_486(-89.1265f, 74.3389f, 88.5412f, 341.7615f, 1);
			func_486(-117.2523f, 26.8954f, 84.9916f, 71.3425f, 1);
			func_486(-92.892f, 50.1228f, 87.8695f, 45.8778f, 1);
			func_486(-13.6112f, -0.4862f, 101.6951f, 255.2034f, 2);
			func_486(-32.3882f, -18.9331f, 103.6418f, 237.7177f, 3);
			func_486(-19.8908f, -62.5598f, 103.873f, 267.298f, 3);
			func_486(-33.2324f, -103.5739f, 101.7936f, 255.1129f, 3);
			func_486(-69.4097f, -128.0305f, 97.0682f, 221.4977f, 3);
			func_486(-79.3456f, -103.7585f, 91.473f, 66.6098f, 3);
			func_486(-134.3901f, -69.9172f, 90.3402f, 108.8014f, 0);
			func_486(-163.3076f, -54.9202f, 89.2085f, 130.3788f, 0);
			func_486(-7.8651f, 34.202f, 96.8284f, 252.726f, 2);
			break;
		case 2:
			func_486(773.3724f, -1152.694f, 46.0144f, 287.6862f, 1);
			func_486(678.071f, -1106.928f, 50.6427f, 308.8809f, 1);
			func_486(694.5107f, -1273.256f, 42.5974f, 276.0894f, 3);
			func_486(624.2226f, -1093.59f, 44.0105f, 324.7204f, 1);
			func_486(695.23f, -1204.24f, 44.84f, -75.427f, 0);
			break;
		case 3:
			func_486(1814.452f, -1812.884f, 47.3854f, 46.0618f, 0);
			func_486(1844.125f, -1770.289f, 44.872f, 354.3456f, 0);
			func_486(1774.591f, -1878.943f, 45.1128f, 1.1527f, 0);
			func_486(1751.868f, -1959.416f, 47.0387f, 100.6328f, 3);
			func_486(1818.659f, -2009.734f, 43.2796f, 94.403f, 3);
			break;
		case 6:
			func_486(2372.828f, 1302.302f, 108.3737f, 193.8477f, 2);
			func_486(2299.087f, 1370.095f, 100.6253f, 148.7151f, 1);
			func_486(2325.401f, 1301.158f, 95.0156f, 220.5325f, 2);
			break;
	}
}

void func_311(var uParam0, int iParam1, bool bParam2)
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

void func_312(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_487())
	{
		if (func_488(255))
		{
			if (!func_489(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_294(Global_1894899.f_2) && func_490(Global_1894899.f_2))
		{
			func_491(Global_1894899.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_492(16);
			}
		}
		else if (func_294(Global_1894899.f_2) && !func_467(Global_1894899.f_2, 2))
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
		func_493(16);
		func_494();
		if (bVar0)
		{
			func_493(1);
		}
	}
}

void func_313()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1357549.f_1674))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549.f_1674, true, false);
		}
		if (ENTITY::IS_ENTITY_DEAD(Global_1357549.f_1674) == 0)
		{
			VEHICLE::DELETE_VEHICLE(&(Global_1357549.f_1674));
		}
	}
}

void func_314()
{
	func_495(32);
}

void func_315(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_496(&(uParam0->f_1[iVar0 /*5*/]));
		iVar0++;
	}
	uParam0->f_62 = 0;
}

void func_316(int iParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (func_497(iParam0, 0, iParam1, &(Global_40.f_4283.f_440[0 /*63*/]), 0, 1))
	{
		return;
	}
	if (func_497(iParam0, 0, iParam1, &(Global_40.f_4283.f_440[1 /*63*/]), 0, 1))
	{
		if (Global_40.f_4283.f_440[1 /*63*/] == 0)
		{
			Global_40.f_4283.f_440[1 /*63*/] = func_498(&(Global_40.f_4283.f_440[0 /*63*/]));
		}
		return;
	}
	func_499(&(Global_40.f_4283.f_440));
	func_497(iParam0, 0, iParam1, &(Global_40.f_4283.f_440[1 /*63*/]), 0, 1);
}

void func_317(bool bParam0)
{
	if (bParam0)
	{
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_CAMP"));
		func_500((1 << 23));
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_CAMP"));
		func_501((1 << 23));
	}
}

void func_318()
{
	Global_1357549 = 0;
	func_500(1);
}

void func_319()
{
	int iVar0;
	int iVar1;

	Global_1357549.f_1886 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Tithing");
	Global_1357549.f_1886.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1357549.f_1886, "Supplies", "");
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1886, "CampFunds");
	func_502(iVar0, &(Global_1357549.f_1886.f_2));
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1886, "PlayerCash");
	func_502(iVar1, &(Global_1357549.f_1886.f_4));
}

bool func_320(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_430(iParam0))
		{
			return false;
		}
	}
	return Global_40.f_4942[iParam0 /*60*/] & iParam1 != 0;
}

void func_321(int iParam0)
{
	func_140(iParam0, 4, 1);
}

void func_322(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam0 < 0 || iParam0 > 95)
	{
		return;
	}
	if (!Global_40 || bParam4)
	{
		func_503(iParam0, iParam3);
	}
	Global_40.f_7157[iParam0 /*3*/].f_1 = iParam1;
	Global_40.f_7157[iParam0 /*3*/].f_2 = iParam2;
}

void func_323(bool bParam0)
{
	if (bParam0 == func_504())
	{
		return;
	}
	if (bParam0)
	{
		func_505(joaat("CI_CATEGORY_WARDROBE_MASK"));
		if (!func_507(func_506(0)))
		{
			func_505(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
	}
	else
	{
		func_508(joaat("CI_CATEGORY_WARDROBE_MASK"));
		func_508(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
	}
	Global_1946054.f_2792 = bParam0;
}

void func_324(var uParam0, int iParam1, char[32] cParam2, struct<14> /*112*/ sParam10)
{
	func_509(uParam0, iParam1, cParam2, sParam10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_510(15), sParam10.f_10);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_510(17), sParam10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(19), sParam10.f_12);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(3), sParam10.f_13);
}

void func_325(var uParam0, int iParam1, char[32] cParam2, struct<21> /*168*/ sParam10)
{
	func_509(uParam0, iParam1, cParam2, sParam10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_510(15), &(sParam10.f_10));
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(21), sParam10.f_18);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(22), sParam10.f_19);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(23), sParam10.f_20);
}

void func_326(var uParam0, int iParam1, char[32] cParam2, struct<28> /*224*/ sParam10)
{
	func_509(uParam0, iParam1, cParam2, sParam10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_510(15), &(sParam10.f_10));
	if (sParam10.f_24)
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_HASH_ARRAY(*uParam0, func_510(32));
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_STRING_ARRAY(*uParam0, func_510(32));
	}
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(30), sParam10.f_18);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(31), sParam10.f_19);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(33), sParam10.f_21);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_510(35), sParam10.f_22);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_510(34), sParam10.f_22);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(36), sParam10.f_25);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(37), sParam10.f_26);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(38), sParam10.f_27);
}

void func_327(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5836[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, sParam3, bParam4);
}

void func_328(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5848[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, sParam3, iParam4);
}

void func_329(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5859[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, sParam3, sParam4);
}

void func_330()
{
	int iVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;
	int iVar9;

	if (func_115() == -1)
	{
		sVar2.f_0 = 249428082;
	}
	else
	{
		sVar2.f_0 = -525029060;
	}
	sVar2.f_1 = -1781055500;
	sVar2.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar2);
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar2))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar1, &sVar2, joaat("EXPRESSION_ID")))
		{
		}
		else
		{
			iVar9 = func_511(iVar1);
			if (iVar9 < 0 || iVar9 >= 54)
			{
			}
			else if (!DATAFILE::_0x52FC26D2D2FC2987(&iVar1, &sVar2, joaat("EXPRESSION_VALUE")))
			{
			}
			else
			{
				Global_1946054.f_2[iVar9] = iVar1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_512(iVar0, func_115() == -1);
		iVar0++;
	}
}

void func_331()
{
	int iVar0;

	Global_1946054.f_850 = 0;
	Global_1946054.f_855 = 0;
	Global_1946054.f_856 = 0;
	Global_1946054.f_852 = 0;
	Global_1946054.f_853 = 0;
	Global_1946054.f_854 = 0;
	Global_1946054.f_851 = 0;
	iVar0 = 0;
	while (iVar0 < 37)
	{
		Global_1946054.f_529[iVar0] = 0;
		iVar0++;
	}
	func_513(8);
	func_513(16);
}

bool func_332(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_333(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_371(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar0 = func_514(iParam0, &(Global_1946054.f_2657.f_21));
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar0 = func_514(iParam0, &(Global_1946054.f_2657.f_23));
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar0 = func_514(iParam0, &(Global_1946054.f_2657.f_20));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar0 = func_514(iParam0, &(Global_1946054.f_2657.f_22));
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar0 = func_514(iParam0, &(Global_1946054.f_2657.f_24));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar0 = func_514(iParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_515();
	}
	if (bParam1)
	{
		func_347(0, 0);
	}
}

int func_334(int iParam0)
{
	if (!func_289(iParam0))
	{
		return -1;
	}
	return func_516(iParam0);
}

int func_335(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == joaat("REMOVE_REASON_USED");
	bVar1 = iParam3 == joaat("REMOVE_REASON_SOLD");
	bVar2 = iParam3 == joaat("REMOVE_REASON_GIVEN");
	iVar3 = func_517(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 -= iParam1;
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_518(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_418(iParam0, 1, bParam4))
	{
		return 0;
	}
	sVar5 = { func_519(iParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar5))
	{
		if ((func_520(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar5, iParam1);
		}
		else if ((func_520(iParam0, 0, 0) - iParam1) < 0)
		{
			func_335(iParam0, func_520(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_521(iParam0) == joaat("WEAPON"))
	{
		if (!func_522(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_523(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_524(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_518(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_525(iParam0, iParam1);
	return 1;
}

bool func_336(int iParam0)
{
	switch (func_371(iParam0))
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

int func_337(int iParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_526(iParam0, 1, 0) /*5*/ };
	return func_527(sVar0.f_4);
}

int func_338(int iParam0, int iParam1)
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

int func_339()
{
	return Global_1946054.f_1;
}

Vector3 func_340(int iParam0, int iParam1)
{
	if (func_115() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		return Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	return Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

int func_341(int iParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { func_340(iParam0, iParam1) /*3*/ };
	return vVar0.x;
}

void func_342(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
}

void func_343(var uParam0, int iParam1)
{
	int iVar0;

	if (func_115() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		*uParam0 = Global_26796.f_26[iParam1 /*120*/].f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uParam0->f_1[iVar0 /*3*/] = { Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] /*3*/ };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	*uParam0 = Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] /*3*/ };
		iVar0++;
	}
}

void func_344()
{
	int iVar0;

	Global_1946054.f_1497 = Global_1946054.f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946054.f_1497.f_1[iVar0 /*3*/] = { Global_1946054.f_1378.f_1[iVar0 /*3*/] /*3*/ };
		iVar0++;
	}
}

bool func_345(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 >= 1 && !func_528(2, iVar0))
		{
			(*uParam0)[iVar0] = 2;
		}
		else if (func_348(uParam0[iVar0], &(Global_26796.f_26[iVar0 /*120*/].f_1)))
		{
			(*uParam0)[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = 1;
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_346(var uParam0)
{
	int iVar0;

	if ((*uParam0)[0] == 1)
	{
		func_349(&(Global_26796.f_26[0 /*120*/].f_1), 0);
	}
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if ((*uParam0)[iVar0] != 1)
		{
		}
		else
		{
			func_529(2, iVar0, 6);
			func_333(func_530(iVar0), 1, 1);
			func_523(func_530(iVar0), 1, joaat("REMOVE_REASON_DEFAULT"), 0, 0);
			if (Global_1946054.f_1497 == func_531(iVar0) || Global_40.f_7729 == iVar0)
			{
				if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
				{
					Global_40.f_7729 = 62;
				}
				else
				{
					Global_40.f_7729 = 6;
				}
			}
		}
		iVar0++;
	}
}

void func_347(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(0);
	}
	if (bParam0)
	{
		func_532(8);
		func_532((1 << 9));
	}
	else
	{
		func_532(8);
		func_532(16);
	}
}

bool func_348(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (!func_533(&(Global_1946054.f_1378.f_1[iVar0 /*3*/]), 2))
		{
		}
		else if ((uParam1->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/] || uParam1->f_1[iVar0 /*3*/] == 0) || !func_533(&(uParam1->f_1[iVar0 /*3*/]), 2))
		{
			if (func_535(func_534(iVar0, 1)))
			{
				*uParam0 = 1;
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_349(var uParam0, bool bParam1)
{
	var uVar0;
	int iVar1;

	Global_1347477.f_184 = -1;
	Global_1347477.f_185 = 0;
	func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		func_100(&(Global_1946054.f_1378), 1105329772, &uVar0, 1, 0, 0, 0);
		Global_1946054.f_1378.f_1[27 /*3*/] = -1515874150;
	}
	else
	{
		func_100(&(Global_1946054.f_1378), 2020890174, &uVar0, 1, 0, 0, 0);
		if (bParam1)
		{
			func_100(&(Global_1946054.f_1378), -1061007984, &uVar0, 1, 0, 0, 0);
		}
		Global_1946054.f_1378.f_1[27 /*3*/] = joaat("CLOTHING_SP_OFFHAND_000");
	}
	func_536(Global_40.f_7731[0 /*5*/], Global_40.f_7731[1 /*5*/], Global_40.f_7731[2 /*5*/]);
	func_537(Global_40.f_7748.f_1);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (!func_533(&(Global_1946054.f_1378.f_1[iVar1 /*3*/]), 2))
		{
		}
		else
		{
			Global_1946054.f_1497.f_1[iVar1 /*3*/].f_2 = (Global_1946054.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946054.f_1378.f_1[iVar1 /*3*/].f_2);
			uParam0->f_1[iVar1 /*3*/].f_2 = (uParam0->f_1[iVar1 /*3*/].f_2 || Global_1946054.f_1378.f_1[iVar1 /*3*/].f_2);
			if (!func_535(func_534(iVar1, 1)))
			{
			}
			else
			{
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/] || uParam0->f_1[iVar1 /*3*/] == 0)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_1378.f_1[iVar1 /*3*/];
				}
				switch (func_534(iVar1, 1))
				{
					case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
					case joaat("MP_COMPONENT_TYPE_HAIR"):
					case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
					case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
						uParam0->f_1[iVar1 /*3*/].f_1 = Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1;
						break;
				}
			}
		}
		iVar1++;
	}
}

int func_350(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_339();
	}
	if (func_115() == -1)
	{
		if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_351(int iParam0)
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

void func_352(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_533(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			iVar7 = func_534(iVar0, 1);
			if (func_538(iVar0, iParam1))
			{
				vVar4 = { func_340(iVar0, -1) /*3*/ };
				if ((vVar4.x != Global_1946054.f_57[iVar0 /*11*/] && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 /*3*/ };
				}
				if (func_539(iVar7, 4))
				{
					func_540(iVar7, 4, 6);
				}
			}
			else
			{
				func_541(iVar7, 4, 6);
				Jump @201; // curOff = 167
				if (bParam2)
				{
					vVar1.x = Global_1946054.f_57[iVar0 /*11*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 /*3*/ };
				}
			}
			iVar0++;
		}
	}
}

bool func_353(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946054.f_964.f_2 = 0;
	if (func_115() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_542(&(Global_1946054.f_964), iVar0, -367421157, joaat("COMPONENT_TYPE"), 1, iParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar1, &(Global_1946054.f_964), joaat("COMPONENT_TYPE")))
	{
		return false;
	}
	return true;
}

bool func_354(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

void func_355(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_371(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_538(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_543(iVar1, iVar3);
		}
	}
	if (func_544(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_538(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_543(iVar1, iVar3);
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
						func_543(iVar1, iVar3);
					}
				}
			}
			func_545(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_545(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_543(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 525
				func_545(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 656
				func_545(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; // curOff = 691
				func_545(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 786
				func_545(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_543(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_371(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_546(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_371(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
				}
				Jump @1415; // curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_547(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
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
						func_543(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_546(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_547(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
			}
			switch (func_371(iParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_371(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_371(uParam0->f_1[iVar1 /*3*/]) || func_547(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

void func_356(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 |= iParam1;
}

int func_357()
{
	if (func_115() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

bool func_358(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_350(0);
	iVar1 = 0;
	func_542(&(Global_1946054.f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
	{
		return false;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946054.f_964), joaat("PARTIAL")))
	{
		return false;
	}
	return iVar1;
}

int func_359(int iParam0)
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

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_361(int iParam0, bool bParam1, int iParam2)
{
	func_363(&(Global_1946054.f_1378), iParam0);
	func_364(2, iParam0, 6);
	if (bParam1)
	{
		func_347(0, 1);
	}
}

void func_362(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

void func_363(var uParam0, int iParam1)
{
	int iVar0;

	if (func_115() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_342(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_548(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_364(int iParam0, int iParam1, int iParam2)
{
	if (func_115() == -1)
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

int func_365(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 0)
	{
		return 0;
	}
	func_549();
	if (!func_550(&(Global_1946054.f_1378), &iVar0, iParam0, -1, 0, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7731[0 /*5*/];
	}
	if (iParam3 == -1)
	{
		iParam3 = Global_40.f_7731[1 /*5*/];
	}
	if (iParam4 == -1)
	{
		iParam4 = Global_40.f_7731[2 /*5*/];
	}
	func_536(iParam2, iParam3, iParam4);
	if ((iParam2 == 0 && iParam3 == 0) && iParam4 == 0)
	{
		func_551(iParam1, joaat("MPC_MOD_HEAD_SUPER_CLEAN_SHAVE"), joaat("MP_COMPONENT_TYPE_HEAD"), 1, 1, 0);
	}
	else
	{
		func_551(iParam1, joaat("BASE"), joaat("MP_COMPONENT_TYPE_HEAD"), 1, 1, 0);
	}
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_552(1, 96, 0, 0, 0);
		}
		else
		{
			func_552(1, 96, 1, iParam1, 0);
		}
	}
	func_362(1);
	return 1;
}

void func_366()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_362(0);
	func_553(0, Global_1946054.f_2653, 0);
	func_553(1, Global_1946054.f_2654, 0);
	func_553(2, Global_1946054.f_2655, 0);
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	Global_1946054.f_1497.f_1[iVar0 /*3*/] = { Global_1946054.f_1378.f_1[iVar0 /*3*/] /*3*/ };
	Global_1946054.f_1497.f_1[iVar1 /*3*/] = { Global_1946054.f_1378.f_1[iVar1 /*3*/] /*3*/ };
	Global_1946054.f_1497.f_1[iVar2 /*3*/] = { Global_1946054.f_1378.f_1[iVar2 /*3*/] /*3*/ };
	Global_1946054.f_1497.f_1[iVar3 /*3*/] = { Global_1946054.f_1378.f_1[iVar3 /*3*/] /*3*/ };
	func_554();
	func_555();
}

int func_367()
{
	if (func_339() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return -2091943191;
	}
	return 933586678;
}

int func_368(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_556(iParam0, 0, 1, 1, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7748.f_1;
	}
	func_537(iParam2);
	if (bParam3)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_552(1, 64, 0, 0, 0);
		}
		else
		{
			func_552(1, 64, 1, iParam1, 0);
		}
	}
	func_362(1);
	return 1;
}

void func_369()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = Global_1946054.f_1378.f_1[iVar0 /*3*/];
	if (!func_557() && func_558(iVar1))
	{
		Global_1946054.f_1378.f_1[iVar0 /*3*/] = func_559(iVar1);
	}
	func_362(0);
	Global_1946054.f_1497.f_1[iVar0 /*3*/] = { Global_1946054.f_1378.f_1[iVar0 /*3*/] /*3*/ };
	func_560();
	Global_40.f_7748.f_2 = func_561();
	func_562(Global_1946054.f_2656, 0);
	func_563();
}

void func_370(int iParam0)
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
	sVar2 = { func_564(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) /*18*/ };
	if (func_565(&sVar2, &iVar0, &iVar1, 0))
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
		func_566(iVar0);
	}
}

int func_371(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

void func_372(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_567(iParam2, *uParam0);
	func_568(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_373(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_526(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_569(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_570(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_571(0), &sVar5, bParam1);
	return true;
}

void func_374(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_526(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_569(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_570(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_571(0), &sVar5, bParam1);
}

void func_375(int iParam0)
{
	Global_1310750.f_16035 -= Global_1310750.f_16035 & iParam0;
}

void func_376(var uParam0)
{
	struct<30> /*240*/ sVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_34 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	strcpy_s(&(uParam0->f_40), 32, "");
	uParam0->f_44 = 0.0f;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_48 = 0;
	uParam0->f_54 = 0.0f;
	uParam0->f_55 = 0.0f;
	uParam0->f_56 = 0.0f;
	uParam0->f_57 = 0.0f;
	uParam0->f_58 = 0.0f;
	uParam0->f_59 = 0.0f;
	uParam0->f_60 = 0.0f;
	uParam0->f_110 = -1;
	sVar0 = -1;
	sVar0.f_1 = -1;
	sVar0.f_2 = -1;
	sVar0.f_3 = -1;
	sVar0.f_4 = 8;
	sVar0.f_4.f_1.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	sVar0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	uParam0->f_4 = { sVar0 /*30*/ };
}

void func_377(int iParam0)
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

bool func_378(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

bool func_379(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_380(int iParam0)
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

void func_381(bool bParam0)
{
	if (bParam0)
	{
		Global_1310750.f_16036++;
	}
	else
	{
		Global_1310750.f_16036--;
		if (Global_1310750.f_16036 < 0)
		{
			Global_1310750.f_16036 = 0;
		}
	}
}

int func_382(int iParam0)
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

bool func_383(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_384(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 11:
			return 3;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			return 0;
		case 3:
		case 10:
			return 2;
		case 4:
		case 9:
			return 1;
		case 8:
			return 4;
		case 13:
		case 14:
		case 15:
		case 16:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_386(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 3:
			Global_1310750[iParam0 /*111*/].f_64[0] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[2] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[11] = iParam2;
			break;
		case 0:
			Global_1310750[iParam0 /*111*/].f_64[1] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[7] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[6] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[12] = iParam2;
			break;
		case 2:
			Global_1310750[iParam0 /*111*/].f_64[3] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[10] = iParam2;
			break;
		case 1:
			Global_1310750[iParam0 /*111*/].f_64[4] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[9] = iParam2;
			break;
		case 4:
			Global_1310750[iParam0 /*111*/].f_64[8] = iParam2;
			break;
		case 5:
			Global_1310750[iParam0 /*111*/].f_64[13] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[14] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[15] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[16] = iParam2;
			break;
	}
}

void func_387(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_388(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2.0f, BUILTIN::TO_FLOAT(iParam0)));
}

bool func_389(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/] & iParam1 != 0;
}

bool func_390(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_1 & iParam1 != 0;
}

bool func_391(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return func_147(Global_1310750[iParam0 /*111*/].f_35, iParam1);
}

bool func_392(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	return func_572(iParam0, 2, 1);
}

void func_393(int iParam0, int iParam1)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115() != -1)
	{
		Global_36638[iParam0] |= iParam1;
		return;
	}
	Global_40.f_9274[iParam0] |= iParam1;
}

bool func_394(int iParam0, bool bParam1, bool bParam2)
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
		if (func_573())
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
		iVar0 = func_574(Global_1898164.f_1[0 /*5*/]);
		if (func_286(iVar0) && func_575(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_289(Global_1898164.f_1[0 /*5*/]))
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

void func_395(int iParam0)
{
	Global_1911914[iParam0 /*9*/] = 0;
}

bool func_396(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LSM_WOMANCRY");
		case 1:
			return joaat("LSM_HUNTER");
		case 2:
			return joaat("LSM_CATFISH");
		case 3:
			return joaat("LSM_UNDERTAKER");
		case 5:
			return joaat("LSM_MINER_1");
		case 6:
			return joaat("LSM_MINER_2");
		case 4:
			return joaat("LSM_SOLDIER_1");
		case 7:
			return -861789942;
		case 8:
			return joaat("LSM_SELL_HORSE_1");
	}
	return 0;
}

void func_398(int iParam0, int iParam1)
{
	if (func_396(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] |= iParam1;
	}
}

void func_399(int iParam0, int iParam1)
{
	if (func_396(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] -= Global_40.f_9052.f_11[iParam0] & iParam1;
	}
}

void func_400(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_401(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_402(int iParam0)
{
	if (Global_1415419.f_19[iParam0 /*12*/] != 0)
	{
		return true;
	}
	return false;
}

bool func_403(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_404(var uParam0)
{
	func_576(uParam0, 0.0f);
}

bool func_405(var uParam0)
{
	return func_403(*uParam0, 2);
}

int func_406()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ST_DOCTOR");
		case 3:
			return joaat("ST_GENERAL");
		case 4:
			return joaat("ST_FENCE");
		case 6:
			return joaat("ST_GUNSMITH");
		case 7:
			return joaat("ST_TAILOR");
		case 8:
			return joaat("ST_BARBER");
		case 1:
			return joaat("ST_TRAIN_STATION");
		case 2:
			return joaat("ST_POST_OFFICE");
		case 9:
			return joaat("ST_HORSE_SHOP");
		case 10:
			return joaat("ST_BUTCHER");
		case 11:
			return joaat("ST_DYNAMIC");
		case 26:
			return joaat("ST_QUARTERMASTER");
		case 27:
			return joaat("ST_HORSE_TRAINER");
		case 28:
			return joaat("ST_BLACKSMITH");
		case 29:
			return joaat("ST_BOUNTYHUNTING_MP_RETURN");
		case 30:
			return joaat("ST_COACH");
		case 31:
			return joaat("ST_HORSE_FENCE_MP");
		case 5:
			return joaat("ST_HORSE_FENCE");
		case 15:
			return joaat("ST_BANK");
		case 17:
			return joaat("ST_BAIT");
		case 33:
			return joaat("ST_BARTENDER");
		case 12:
			return joaat("ST_MARKET");
		case 13:
			return joaat("ST_FRENCH_MARKET");
		case 14:
			return -1227686818;
		case 18:
			return joaat("ST_TRAPPER");
		case 19:
			return joaat("ST_PEARSON");
		case 22:
			return joaat("ST_NEWSPAPER_BOY");
		case 20:
			return joaat("ST_HOTEL");
		case 32:
			return joaat("ST_WILDERNESS_SUPPLIES");
		case 34:
			return joaat("ST_HANDHELD");
		case 23:
			return joaat("ST_WEAPON_MOD_STORE");
		case 24:
			return joaat("ST_CLOTHING");
		case 25:
			return joaat("ST_CAMP_SHAVING");
		case 21:
			return joaat("ST_PHOTO_STUDIO");
		default:
			break;
	}
	return 0;
}

void func_408(var uParam0)
{
	UNLOCK::_UNLOCK_SET_NEW(func_577(uParam0), true);
}

int func_409(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEATHER_GROUP_CH2_END"):
			return 3;
		case joaat("WEATHER_GROUP_CH2_MID"):
			return 4;
		case joaat("WEATHER_GROUP_CH3_DROUGHT"):
			return 6;
		case joaat("WEATHER_GROUP_GOOD_VISIBILITY"):
			return 8;
		case joaat("WEATHER_GROUP_GOOD"):
			return 7;
		case joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"):
			return 10;
		case joaat("WEATHER_GROUP_IN_CAMP"):
			return 9;
		case 0:
			return 13;
		case 15:
			return 14;
		case joaat("WEATHER_GROUP_BAD_VISIBILITY"):
			return 2;
		case joaat("WEATHER_GROUP_NO_PRECIPITATION"):
			return 11;
		case joaat("WEATHER_GROUP_ATMOSPHERIC"):
			return 0;
		case joaat("WEATHER_GROUP_THUNDERSTORM"):
			return 12;
		case joaat("WEATHER_GROUP_BAD"):
			return 1;
		case joaat("WEATHER_GROUP_CH2_START"):
			return 5;
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

int func_410(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
			return 2;
		case joaat("WEATHER_LAST"):
			return 23;
		case joaat("SANDSTORM"):
			return 12;
		case joaat("THUNDER"):
			return 19;
		case joaat("OVERCAST"):
			return 9;
		case joaat("FOG"):
			return 3;
		case joaat("SHOWER"):
			return 13;
		case joaat("SNOW"):
			return 15;
		case joaat("HIGHPRESSURE"):
			return 6;
		case 0:
			return 22;
		case joaat("SLEET"):
			return 14;
		case joaat("OVERCASTDARK"):
			return 10;
		case joaat("SNOWLIGHT"):
			return 17;
		case joaat("BLIZZARD"):
			return 0;
		case joaat("WHITEOUT"):
			return 21;
		case joaat("CLOUDS"):
			return 1;
		case joaat("HURRICANE"):
			return 7;
		case joaat("RAIN"):
			return 11;
		case joaat("MISTY"):
			return 8;
		case joaat("SUNNY"):
			return 18;
		case joaat("SNOWCLEARING"):
			return 16;
		case joaat("HAIL"):
			return 5;
		case joaat("THUNDERSTORM"):
			return 20;
		case joaat("GROUNDBLIZZARD"):
			return 4;
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

void func_411(bool bParam0)
{
	struct<6> /*48*/ sVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_414(joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_412();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_578(joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001"));
		func_95(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_335(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_580(146323340, func_579());
		sVar0 = { func_581() /*6*/ };
		if (func_582(&sVar0) == -1387633835)
		{
			func_583(&sVar0);
			func_584(sVar0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		func_585(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_586(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				func_587(iVar6, iVar7);
				func_588(iVar6, iVar8);
				func_589(iVar6, iVar9);
				func_590(iVar6, 0);
				if (func_591(iVar6))
				{
					func_592(iVar6);
				}
				iVar10 = func_593(iVar8);
				func_594(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_412()
{
	if (!func_595(-1898635967, func_579(), 1))
	{
		return 0;
	}
	if (func_596())
	{
		if (!func_595(146323340, func_579(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_413()
{
	func_597(joaat("WEAPON_PISTOL_VOLCANIC"));
	func_597(joaat("WEAPON_SHOTGUN_PUMP"));
	func_597(joaat("WEAPON_RIFLE_VARMINT"));
}

int func_414(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!func_598(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_599(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_600(iParam0, bParam2);
	iVar2 = 0;
	if (func_520(iParam0, 0, 0) == 0)
	{
		if (func_601(iParam0))
		{
			iVar5 = func_602(iParam0);
			iVar6 = func_603(iVar5);
			iVar7 = func_604(iVar6) + 1;
			func_605(iVar5);
			if (func_606(38))
			{
				func_607(483, 0);
			}
			else
			{
				func_607(482, 0);
			}
			if (iVar7 == func_608(iVar6))
			{
				func_414(func_609(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_481() && func_610(4))
				{
					if (func_481() && (func_611(38) || func_606(38)))
					{
						func_613(38, func_609(iVar6), 0, 0, func_612(), 0, -1, 0);
						func_614(2);
					}
					else
					{
						func_613(38, func_609(iVar6), 0, 0, func_612(), 0, -1, 0);
						func_614(1);
					}
				}
			}
			else if (func_481() && func_610(4))
			{
				if (func_481() && (func_611(38) || func_606(38)))
				{
					func_613(38, 0, 0, 0, func_612(), 0, -1, 0);
					func_614(2);
				}
				else
				{
					func_613(38, 0, 0, 0, func_612(), 0, -1, 0);
					func_614(1);
				}
			}
			if (func_481() && func_610(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_481() && (func_611(38) || func_606(38)))
					{
						func_615(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), iVar6), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_615(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_521(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_547(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && !func_547(iParam0, joaat("CI_TAG_ITEM_UPGRADE"))) && !func_547(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_616(iParam0, (1 << 23)) && !func_429(28))
	{
		func_617(28);
	}
	if (!bVar3)
	{
		if (func_547(iParam0, joaat("CI_TAG_ITEM_THROWN")))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_371(iParam0) == joaat("CI_CATEGORY_AMMO"))
			{
				iVar1 = func_619(func_618(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_115() == -1)
					{
						func_424(iVar1);
					}
					if (func_524(0) && func_425(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_620(iParam0, iVar0, iParam5);
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
					if (func_115() == -1)
					{
						func_424(iParam0);
					}
					if (func_524(0) && func_425(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_620(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_521(iParam0) == joaat("WEAPON"))
		{
			if (!func_621(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_521(iParam0) == joaat("AMMO") && func_622(iParam0))
		{
			if (!func_623(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_TALISMAN")))
		{
			func_624(iParam0);
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_TRINKET")))
		{
			func_625(iParam0);
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_ANIMAL_CLAW")))
		{
			func_471(func_626(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_471(func_470(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_VALUABLE")) && !func_547(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_94(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_607(498, 0);
				}
			}
			if (func_547(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_547(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
			{
				func_627(iParam0);
			}
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_CANNED")))
		{
			if (func_547(iParam0, joaat("CI_TAG_ITEM_FRUIT")))
			{
			}
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_USED")) && func_547(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			func_607(484, 0);
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")) && func_547(iParam0, joaat("CI_TAG_ITEM_SNACK")))
		{
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_CONFECTIONARY")))
		{
		}
		else if (func_547(iParam0, 589988438))
		{
			if (func_628())
			{
				func_629(joaat("REWARD_SMALL"), 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_LETTER_INVITATION")) && func_547(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_630(iParam0);
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_DINO_BONES")))
		{
			func_631(iParam0);
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_ROCK_CARVINGS")))
		{
			func_632(iParam0);
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_547(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_633(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_TREASURE_HUNTER_MAP")))
		{
			func_634();
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_635(iParam0, iParam1);
			func_636(iParam0);
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_547(iParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_637(iParam0, 0, 0, 0);
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_547(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
		{
			func_627(iParam0);
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_MONEY")))
		{
			if (func_115() != -1)
			{
				return 0;
			}
			func_638(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_FISHING_LURE")))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_418(215778062, 1, 0))
					{
						func_414(215778062, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_418(670273567, 1, 0))
					{
						func_414(670273567, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_418(-967317137, 1, 0))
					{
						func_414(-967317137, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_418(526074061, 1, 0))
					{
						func_414(526074061, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_418(-1045488665, 1, 0))
					{
						func_414(-1045488665, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_418(471514780, 1, 0))
					{
						func_414(471514780, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")) && func_616(iParam0, 4))
		{
			if (!func_606(42))
			{
				func_639(iParam0);
			}
		}
		else if (func_547(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
		{
			func_640(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_547(iParam0, 1248798204))
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
				func_414(iVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
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
				func_617(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_641(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_642(&iVar9, 0))
				{
					func_425(iVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_115() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_641(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_607(415, 0);
				Global_40.f_11095.f_60 += 0.1f;
				func_643();
				Global_40.f_11095.f_61 += 0.1f;
				func_644();
				Global_40.f_11095.f_55 += 0.1f;
				Global_40.f_11095.f_57 += 0.1f;
				Global_40.f_11095.f_56 += 0.1f;
				Global_40.f_11095.f_58 += 0.5f;
				func_645();
				Global_40.f_11095.f_63 += 0.1f;
				func_646();
				Global_40.f_11095.f_49 += 0.1f;
				Global_40.f_11095.f_50 += 0.1f;
				Global_40.f_11095.f_51 += 0.1f;
				func_647();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_648(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_649(499813453, 0);
				func_650(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_648(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_649(499813453, 0);
				func_650(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_648(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_649(499813453, 0);
				func_650(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_648(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_649(666607663, 0);
				func_651(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_648(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_649(666607663, 0);
				func_651(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_648(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_649(666607663, 0);
				func_651(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_648(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_649(-220219788, 0);
				func_652(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_648(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_649(-220219788, 0);
				func_652(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_648(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_649(-220219788, 0);
				func_652(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_648(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_649(218622660, 0);
				func_421(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_648(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_649(218622660, 0);
				func_421(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_648(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_649(390004462, 0);
				func_653(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_648(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_649(390004462, 0);
				func_653(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_648(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_649(390004462, 0);
				func_653(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_648(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_649(6410548, 0);
				func_654(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_648(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_649(6410548, 0);
				func_654(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_648(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_649(6410548, 0);
				func_654(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_648(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_649(6410548, 0);
				func_654(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_656(242, func_655(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_656(240, func_655(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_656(241, func_655(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_657(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
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
					func_657(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
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
					func_657(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_657(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
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
					func_657(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_657(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_607(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_607(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_607(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 3) == 0)
				{
					func_414(func_658(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_414(func_659(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_429(1))
				{
					func_607(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_607(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_115() == -1)
				{
					iParam0 = joaat("UPGRADE_UPG_MORTAR_PESTLE_SP");
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_607(496, 0);
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
		func_660(&iVar10);
		if (!func_661(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_524(0))
		{
			return 1;
		}
		if (func_521(iParam0) == joaat("CLOTHING"))
		{
			func_662(iParam0);
		}
		if (func_547(iParam0, joaat("CI_TAG_ITEM_UPGRADE")))
		{
			func_663(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_524(0))
		{
			sVar11.f_1 = 10;
			sVar11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, false, false, iVar2, &sVar11, 0);
			iVar34 = 0;
			while (iVar34 < sVar11.f_0)
			{
				func_414(sVar11.f_1[iVar34], sVar11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_664(iVar2, 0);
		}
	}
	sVar35 = { func_519(iParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&sVar35, iVar0);
	}
	func_665(iParam0);
	if (fParam6 > 0.0f)
	{
		if (func_547(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
		{
			func_666(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_518(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_415(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_414(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_335(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_335(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_335(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_335(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_335(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_335(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_335(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_335(joaat("PROVISION_ANIMAL_FAT"), 5, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_335(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_335(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_335(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		func_585(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_586(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				func_587(iVar0, iVar1);
				func_588(iVar0, iVar2);
				func_589(iVar0, iVar3);
				func_590(iVar0, 0);
				if (func_591(iVar0))
				{
					func_592(iVar0);
				}
				iVar4 = func_593(iVar2);
				func_594(iVar0, iVar4);
			}
			iVar0++;
		}
		func_412();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_416(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_667(iParam0);
	if (bParam3)
	{
		func_668(iParam0, sParam1, iParam2);
	}
}

void func_417(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_669(iParam0, sParam4, iParam5);
	}
	func_670(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_418(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_521(iParam0);
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
		if (!func_671(iParam0, 1))
		{
			return false;
		}
	}
	return func_520(iParam0, 0, bParam2) >= iParam1;
}

bool func_419(int iParam0)
{
	int iVar0;

	iVar0 = func_334(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_420(int iParam0)
{
	return Global_40.f_12004.f_10 & iParam0 != 0;
}

void func_421(int iParam0)
{
	Global_40.f_12004.f_10 |= iParam0;
}

void func_422(int iParam0)
{
	Global_40.f_12004.f_10 -= Global_40.f_12004.f_10 & iParam0;
}

struct<14> /*112*/ func_423()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> /*112*/ sVar3;
	struct<10> /*80*/ sVar17;
	struct<14> /*112*/ sVar39;

	sVar3.f_9 = joaat("SLOTID_NONE");
	sVar17.f_9 = joaat("SLOTID_NONE");
	if (func_672("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_673(&sVar3, iVar2, iVar0, iVar1))
			{
				Jump @136; // curOff = 80
			}
			else if (sVar3.f_4 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
			}
			else if (func_674(sVar3.f_4, &sVar17, sVar3.f_9))
			{
			}
			else
			{
				func_566(iVar0);
				return sVar3;
			}
			iVar2++;
		}
		func_566(iVar0);
	}
	sVar39.f_9 = joaat("SLOTID_NONE");
	return sVar39;
}

void func_424(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_428(iParam0))
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

bool func_425(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		sVar0 = { func_526(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_675((398 + iVar28), 1);
			if (func_676(iParam0, &sVar0, iVar5, 0))
			{
				if (func_674(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_569(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_677(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_524(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_620(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_678(iParam0, iParam1);
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

void func_426(int iParam0, struct<4> /*32*/ sParam1, int iParam5)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<4> /*32*/ sVar19;

	sVar0 = { sParam1 /*4*/ };
	sVar0.f_4 = iParam5;
	sVar5.f_9 = joaat("SLOTID_NONE");
	if (func_679(sParam1, iParam5, &sVar5, 0))
	{
		func_677(sVar5.f_4, &sVar5, &sVar0, -1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
	}
	func_680(iParam0, &sVar19, &sVar0, 1, joaat("ADD_REASON_DEFAULT"), 0);
	func_681(sVar19, 1);
}

bool func_427()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_428(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_429(int iParam0)
{
	if (!func_682(iParam0))
	{
		return false;
	}
	return func_683(iParam0);
}

bool func_430(int iParam0)
{
	return iParam0 > -1;
}

int func_431(int iParam0, bool bParam1)
{
	if (!func_430(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_684(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

int func_432(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_430(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_431(iParam0, 1);
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

int func_433(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_434(int iParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_INJURED(func_685(iParam0)))
	{
		if (func_137(iParam0) && func_332(iParam1, 0))
		{
			func_686(&(Global_1360165[iParam0 /*1157*/].f_146), iParam1, iParam2, 1);
		}
	}
}

bool func_435()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

void func_436(int iParam0)
{
	if (Global_1879534.f_7287 >= 1770)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
		case 12:
			break;
		case 1:
			if (Global_1879534.f_7288[iParam0] >= 240)
			{
				return;
			}
			break;
		case 2:
			if (Global_1879534.f_7288[iParam0] >= 350)
			{
				return;
			}
			break;
		case 7:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 8:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 3:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 4:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 5:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 6:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		default:
			break;
	}
}

void func_437(int iParam0)
{
	Global_1879534.f_7287++;
	if (!iParam0 == 12)
	{
		Global_1879534.f_7288[iParam0]++;
	}
}

void func_438(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_687(iParam0, iParam6);
	func_688(iParam0, iParam5);
	func_689(iParam0, iParam4);
	func_690(iParam0, iParam3);
	func_691(iParam0, iParam2);
	func_692(iParam0, iParam1);
}

void func_439(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_1879534.f_211[iParam0 /*4*/] = iParam1;
	Global_1879534.f_211[iParam0 /*4*/].f_1 = iParam2;
	Global_1879534.f_211[iParam0 /*4*/].f_2 = iParam3;
	Global_1879534.f_211[iParam0 /*4*/].f_3 = iParam4;
}

void func_440(int iParam0, int iParam1, int iParam2)
{
	Global_1879534.f_1172[iParam0 /*2*/] = iParam1;
	Global_1879534.f_1172[iParam0 /*2*/].f_1 = iParam2;
}

int func_441(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_442(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_443(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_444(int iParam0, int iParam1)
{
	if (!func_289(iParam0))
	{
		return;
	}
	func_693(iParam0, iParam1);
}

void func_445(int iParam0, char* sParam1)
{
	if (!func_442(iParam0))
	{
		return;
	}
	strcpy_s(&(Global_1835011[iParam0 /*74*/].f_9), 24, sParam1);
}

void func_446(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_447()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_448(int iParam0, int iParam1, int iParam2)
{
	return iParam2 & 31 | BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) | BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
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

int func_450(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_694(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_447())
	{
		return -1;
	}
	iVar0 = func_448(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_693(iVar1, 0);
	func_695(iVar1, 0);
	func_696(iVar1, 0);
	func_697(iVar1, 0);
	func_698(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_699(iVar1, iParam4);
	}
	return iVar1;
}

int func_451()
{
	return Global_1894899.f_2;
}

int func_452(Vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_700(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1894065[iVar0 /*51*/][iVar2];
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[iVar4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2--;
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_453(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_9 = 0.0f;
	uParam0->f_10 = 0;
	uParam0->f_5 = 0.0f;
	uParam0->f_11 = -1;
}

void func_454(var uParam0)
{
	if (func_701(uParam0->f_3))
	{
		func_702(&(uParam0->f_3), 1, 0);
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0;
	uParam0->f_9 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_6 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
}

int func_455(int iParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	sVar0.f_0 = Global_1357549.f_576;
	sVar0.f_1 = 0;
	sVar0.f_3 = iParam0;
	iVar5 = 0;
	if (func_703(sVar0, 70005598, &iVar6, 0))
	{
		iVar5 = func_704(iVar6);
	}
	return iVar5;
}

int func_456(int iParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	sVar0.f_0 = Global_1357549.f_576;
	sVar0.f_1 = 0;
	sVar0.f_3 = iParam0;
	iVar5 = 1;
	if (func_705(sVar0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

int func_457()
{
	return Global_1899515;
}

void func_458(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_706(*iParam0);
	iVar1 = func_707(*iParam0);
	iVar2 = func_708(*iParam0);
	iVar3 = func_709(*iParam0);
	iVar4 = func_710(*iParam0);
	iVar5 = func_711(*iParam0);
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
	iVar6 = func_712(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_712(iVar1, iVar0);
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
	func_438(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_459(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_713(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

bool func_460(int iParam0)
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
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
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
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
		default:
			break;
	}
	return false;
}

void func_461(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_459(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_462(2, *uParam0);
		}
		else
		{
			func_463(2, *uParam0);
		}
	}
	func_714(uParam0);
}

void func_462(int iParam0, int iParam1)
{
	if (Global_1357549.f_1483 >= 25)
	{
		Global_1357549.f_1483 = 0;
	}
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = iParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483++;
}

void func_463(int iParam0, int iParam1)
{
	if (Global_1357549.f_1406 >= 50)
	{
		return;
	}
	if (Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] = iParam0;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_1 = iParam1;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_2 = 0;
	Global_1357549.f_1403++;
	Global_1357549.f_1406++;
}

int func_464(int iParam0, int iParam1)
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

bool func_465(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

bool func_466(int iParam0)
{
	int iVar0;

	if (func_715(iParam0))
	{
		if (!func_429(45))
		{
			return false;
		}
	}
	iVar0 = func_472(iParam0);
	if (func_481())
	{
		if (!func_94(Global_1835011[3 /*74*/].f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

bool func_467(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & iParam1 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & iParam1 != 0;
}

void func_468(int iParam0, int iParam1)
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

void func_469(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

struct<2> /*16*/ func_470(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

void func_471(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_472(int iParam0)
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
	else if (iParam0 <= 116)
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

var func_473(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/];
	}
	return Global_42606[iParam0 /*4*/];
}

int func_474(int iParam0)
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

int func_475()
{
	return Global_40.f_4283.f_1;
}

bool func_476(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

void func_477(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], iParam1);
		}
	}
}

void func_478(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_716(*uParam0, -1);
		func_717(*uParam0, 0);
		func_718(*uParam0, 0);
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

int func_479(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

void func_480(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_481()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_482(int iParam0)
{
	Global_40.f_4283 = iParam0;
	Global_40.f_4283.f_1 = func_297(iParam0);
}

void func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_495((1 << 21));
			break;
		case 1:
			func_495((1 << 22));
			break;
		case 2:
			func_495((1 << 24));
			break;
		case 3:
			func_495((1 << 25));
			break;
		case 5:
			func_495((1 << 26));
			break;
		case 4:
			func_495((1 << 27));
			break;
		case 6:
			func_495((1 << 28));
			break;
		case 7:
			func_495((1 << 29));
			break;
		case 8:
			func_495((1 << 30));
			break;
	}
}

void func_484(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_304(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_303(joaat("WS_DOWNS_RANCH_EDITH"));
			func_303(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_303(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_303(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_304(joaat("WS_DOWNS_RANCH_EDITH"));
			func_303(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_303(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_303(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_303(joaat("WS_DOWNS_RANCH_EDITH"));
			func_304(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_303(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_303(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_303(joaat("WS_DOWNS_RANCH_EDITH"));
			func_303(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_304(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_303(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_303(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_303(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_304(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_719();
			func_304(iParam0);
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
			func_720();
			func_304(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_303(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_303(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_304(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_303(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_303(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_304(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_303(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_303(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_304(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_303(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_303(joaat("WS_RHODES_GRAVE_OPEN"));
			func_304(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_303(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_303(joaat("WS_RHODES_GRAVE_OPEN"));
			func_304(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_303(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_303(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_304(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_303(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_304(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_303(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_304(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_303(joaat("WS_UTOPIA_TREE_MISSION"));
			func_303(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_303(joaat("WS_UTOPIA_TREE_STUMP"));
			func_304(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_303(joaat("WS_UTOPIA_TREE_STANDING"));
			func_303(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_303(joaat("WS_UTOPIA_TREE_STUMP"));
			func_304(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_303(joaat("WS_UTOPIA_TREE_STANDING"));
			func_303(joaat("WS_UTOPIA_TREE_MISSION"));
			func_303(joaat("WS_UTOPIA_TREE_STUMP"));
			func_304(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_303(joaat("WS_UTOPIA_TREE_STANDING"));
			func_303(joaat("WS_UTOPIA_TREE_MISSION"));
			func_303(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_304(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_303(joaat("WS_MICAH_CAMP"));
			func_303(joaat("WS_MICAH_CAMP_POST"));
			func_304(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_303(joaat("WS_MICAH_CAMP_EMPTY"));
			func_303(joaat("WS_MICAH_CAMP_POST"));
			func_304(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_303(joaat("WS_MICAH_CAMP_EMPTY"));
			func_303(joaat("WS_MICAH_CAMP"));
			func_304(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_303(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_304(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_303(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_303(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_721(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_304(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_303(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_303(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_304(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_303(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_304(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_303(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_304(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_303(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_304(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_303(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_304(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_303(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_304(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_303(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_303(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_304(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_303(joaat("WS_NEW_COM_BANK_START"));
			func_303(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_303(joaat("WS_NEW_COM_BANK_AFTER"));
			func_303(joaat("WS_NEW_COM_BANK_POST"));
			func_304(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_303(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_303(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_303(joaat("WS_NEW_COM_BANK_AFTER"));
			func_303(joaat("WS_NEW_COM_BANK_POST"));
			func_304(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_303(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_303(joaat("WS_NEW_COM_BANK_START"));
			func_303(joaat("WS_NEW_COM_BANK_AFTER"));
			func_303(joaat("WS_NEW_COM_BANK_POST"));
			func_304(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_303(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_303(joaat("WS_NEW_COM_BANK_START"));
			func_303(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_303(joaat("WS_NEW_COM_BANK_POST"));
			func_304(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_303(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_303(joaat("WS_NEW_COM_BANK_START"));
			func_303(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_303(joaat("WS_NEW_COM_BANK_AFTER"));
			func_304(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_303(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_303(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_303(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_304(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_303(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_303(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_303(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_304(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_303(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_303(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_303(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_304(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_303(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_303(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_303(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_304(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_304(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_304(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_304(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_303(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_304(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_304(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_304(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_304(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_304(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_303(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_304(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_303(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_304(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_303(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_304(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_303(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_304(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_303(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_304(0);
			func_303(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_303(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_304(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_303(0);
			func_303(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_304(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_303(0);
			func_303(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_304(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_303(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_304(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_303(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_304(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_304(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_304(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_304(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_303(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_304(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_303(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_303(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_303(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_304(joaat("WS_SHADY_BELLE_ABANDON"));
			func_303(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_303(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_304(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_303(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_303(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_304(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_303(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_304(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_303(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_721(iParam0))
				{
					func_304(iParam0);
				}
			}
			else if (func_721(iParam0))
			{
				func_303(iParam0);
			}
			break;
	}
}

void func_485()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		Global_1357549.f_1497.f_32[iVar0 /*5*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
		Global_1357549.f_1497.f_32[iVar0 /*5*/].f_3 = 0.0f;
		Global_1357549.f_1497.f_32[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	Global_1357549.f_1497.f_108 = 0;
}

int func_486(Vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_722(Global_1357549.f_1497.f_32[iVar0 /*5*/]))
		{
			Global_1357549.f_1497.f_32[iVar0 /*5*/] = { vParam0 /*3*/ };
			Global_1357549.f_1497.f_32[iVar0 /*5*/].f_3 = fParam3;
			Global_1357549.f_1497.f_32[iVar0 /*5*/].f_4 = iParam4;
			Global_1357549.f_1497.f_108++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_487()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_4;
}

bool func_488(int iParam0)
{
	return func_489(23, iParam0);
}

bool func_489(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_723(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_724())
	{
		return func_723(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_723(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_490(int iParam0)
{
	if (!func_294(iParam0))
	{
		return false;
	}
	return func_467(iParam0, 8);
}

void func_491(int iParam0, int iParam1)
{
	if (!func_294(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

void func_492(int iParam0)
{
	Global_1894899 |= iParam0;
}

void func_493(int iParam0)
{
	Global_1894899 -= Global_1894899 & iParam0;
}

bool func_494()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_467(iVar1, 1))
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
				if (func_115() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9, 523);
				}
				else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9))
				{
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1888801[iVar1 /*35*/].f_9);
				}
			}
			else if (func_467(iVar1, 2))
			{
				if (func_115() == -1)
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
				func_725(iVar1, 11);
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

void func_495(int iParam0)
{
	switch (func_115())
	{
		case -1:
			Global_40.f_4283.f_2 |= iParam0;
			break;
	}
}

void func_496(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	*uParam0 = 0;
	uParam0->f_4 = 0;
}

bool func_497(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (uParam3->f_62 >= 12)
	{
		return false;
	}
	if (iParam2 <= 0)
	{
		return false;
	}
	iVar0 = func_726();
	func_727(iParam2, bParam4);
	if (iVar0 != func_726())
	{
		uParam3->f_1[uParam3->f_62 /*5*/] = 0;
		uParam3->f_1[uParam3->f_62 /*5*/].f_3 = -1;
		uParam3->f_1[uParam3->f_62 /*5*/].f_1 = iParam0;
		uParam3->f_1[uParam3->f_62 /*5*/].f_2 = iParam1;
		uParam3->f_1[uParam3->f_62 /*5*/].f_4 = iParam2;
		uParam3->f_62++;
		if (bParam4)
		{
			if (iParam1 == 0)
			{
				func_728(iParam2);
			}
			else if (bParam5)
			{
				func_729(1);
			}
		}
	}
	return true;
}

int func_498(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_62)
	{
		iVar0 += uParam0->f_1[iVar1 /*5*/].f_4;
		iVar1++;
	}
	return iVar0;
}

void func_499(var uParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = 12;
	sVar0.f_1.f_1.f_1 = -1;
	sVar0.f_1.f_1.f_3 = -1;
	sVar0.f_1.f_1.f_5.f_1 = -1;
	sVar0.f_1.f_1.f_5.f_3 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_1 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_3 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_3 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_3 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	MISC::_COPY_MEMORY(uParam0[0 /*63*/], uParam0[1 /*63*/], 63);
	MISC::_COPY_MEMORY(uParam0[1 /*63*/], &sVar0, 63);
	(*uParam0)[1 /*63*/] = func_498(uParam0[0 /*63*/]);
}

void func_500(int iParam0)
{
	switch (func_115())
	{
		case -1:
			Global_1357549.f_1494 |= iParam0;
			break;
	}
}

void func_501(int iParam0)
{
	switch (func_115())
	{
		case -1:
			Global_1357549.f_1494 -= Global_1357549.f_1494 & iParam0;
			break;
	}
}

void func_502(int iParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(iParam0, "dollars", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(iParam0, "cents", 0);
}

void func_503(int iParam0, int iParam1)
{
	if (!func_730(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] |= iParam1;
}

int func_504()
{
	return func_731();
}

void func_505(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_571(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_371(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iVar2, iVar1);
		}
		iVar0++;
	}
	func_733(func_732(iParam0), 6);
}

int func_506(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_507(int iParam0)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	switch (func_734(iParam0))
	{
		case 1:
			switch (func_574(iParam0))
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
			switch (func_574(iParam0))
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

void func_508(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_571(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_371(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_735(func_732(iParam0), 6);
}

void func_509(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<10> /*80*/ sParam10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(0), sParam10.f_0);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(1), sParam10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(2), sParam10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(53), sParam10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(54), sParam10.f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(56), sParam10.f_5);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(55), sParam10.f_6);
	if (sParam10.f_7 == 0)
	{
		sParam10.f_7 = joaat("IB_SELECT");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(57), sParam10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(58), sParam10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(59), sParam10.f_9);
}

char* func_510(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 53:
			return "dynamic_list_item_link";
		case 54:
			return "dynamic_list_item_event_channel_hash";
		case 55:
			return "dynamic_list_item_focus_hash";
		case 56:
			return "dynamic_list_item_select_hash";
		case 57:
			return "dynamic_list_item_prompt_text";
		case 58:
			return "dynamic_list_item_prompt_enabled";
		case 59:
			return "dynamic_list_item_prompt_visible";
		case 60:
			return "dynamic_list_item_prompt_option_text";
		case 61:
			return "dynamic_list_item_prompt_option_enabled";
		case 62:
			return "dynamic_list_item_prompt_option_visible";
		case 63:
			return "dynamic_list_item_prompt_option_select_hash";
		case 64:
			return "dynamic_list_item_prompt_toggle_text";
		case 65:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 66:
			return "dynamic_list_item_prompt_toggle_visible";
		case 67:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 68:
			return "dynamic_list_item_prompt_r3_text";
		case 69:
			return "dynamic_list_item_prompt_r3_enabled";
		case 70:
			return "dynamic_list_item_prompt_r3_visible";
		case 71:
			return "dynamic_list_item_select_r3_select_hash";
		case 72:
			return "mount_collection_index";
		case 73:
			return "dynamic_list_item_rename_prompt_enabled";
		case 74:
			return "dynamic_list_item_rename_prompt_visible";
		case 75:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 76:
			return "invite_unique_id";
		case 77:
			return "invite_tracked";
		case 78:
			return "invite_processed";
		case 79:
			return "invite_script_type";
		case 80:
			return "invite_gang_id";
		case 81:
			return "invite_expiration_time";
		case 82:
			return "invite_filter_type";
		case 83:
			return "invite_feed_message_id";
		default:
			break;
	}
	return "null";
}

int func_511(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PEDEXPRESS_NECK_WIDTH"):
			return 0;
		case joaat("PEDEXPRESS_NECK_DEPTH"):
			return 1;
		case joaat("PEDEXPRESS_SHOULDERS_HEIGHT"):
			return 2;
		case joaat("PEDEXPRESS_SHOULDERS_DEPTH"):
			return 3;
		case joaat("PEDEXPRESS_SHOULDERS_WIDTH"):
			return 4;
		case joaat("PEDEXPRESS_TRAPS"):
			return 5;
		case joaat("PEDEXPRESS_LATS"):
			return 6;
		case joaat("PEDEXPRESS_CHEST_WIDTH"):
			return 7;
		case joaat("PEDEXPRESS_CHEST_DEPTH"):
			return 8;
		case joaat("PEDEXPRESS_BELLY_WIDTH"):
			return 9;
		case joaat("PEDEXPRESS_BELLY_DEPTH"):
			return 10;
		case joaat("PEDEXPRESS_UPPER_ARMS"):
			return 11;
		case joaat("PEDEXPRESS_FOREARMS"):
			return 12;
		case joaat("PEDEXPRESS_UPPER_LEGS"):
			return 13;
		case joaat("PEDEXPRESS_LOWER_LEGS"):
			return 14;
		case joaat("PEDEXPRESS_FACE_WIDTH"):
			return 15;
		case joaat("PEDEXPRESS_BROW_HEIGHT"):
			return 16;
		case joaat("PEDEXPRESS_BROW_WIDTH"):
			return 17;
		case joaat("PEDEXPRESS_BROW_DEPTH"):
			return 18;
		case joaat("PEDEXPRESS_EAR_SIZE"):
			return 19;
		case joaat("PEDEXPRESS_EAR_ROTATION"):
			return 20;
		case joaat("PEDEXPRESS_EAR_LENGTH"):
			return 21;
		case joaat("PEDEXPRESS_EAR_LOBE"):
			return 22;
		case joaat("PEDEXPRESS_CHEEKS_HEIGHT"):
			return 23;
		case joaat("PEDEXPRESS_CHEEKS_WIDTH"):
			return 24;
		case joaat("PEDEXPRESS_CHEEKS_DEPTH"):
			return 25;
		case joaat("PEDEXPRESS_JAW_HEIGHT"):
			return 26;
		case joaat("PEDEXPRESS_JAW_WIDTH"):
			return 27;
		case joaat("PEDEXPRESS_JAW_DEPTH"):
			return 28;
		case joaat("PEDEXPRESS_CHIN_TILT"):
			return 29;
		case joaat("PEDEXPRESS_CHIN_WIDTH"):
			return 30;
		case joaat("PEDEXPRESS_CHIN_DEPTH"):
			return 31;
		case joaat("PEDEXPRESS_EYE_HEIGHT"):
			return 32;
		case joaat("PEDEXPRESS_EYE_WIDTH"):
			return 33;
		case joaat("PEDEXPRESS_EYE_DEPTH"):
			return 34;
		case joaat("PEDEXPRESS_EYE_ANGLE"):
			return 35;
		case joaat("PEDEXPRESS_EYE_H_POS"):
			return 36;
		case joaat("PEDEXPRESS_EYE_V_POS"):
			return 37;
		case joaat("PEDEXPRESS_NOSE_WIDTH"):
			return 38;
		case joaat("PEDEXPRESS_NOSE_LENGTH"):
			return 39;
		case joaat("PEDEXPRESS_NOSE_HEIGHT"):
			return 40;
		case joaat("PEDEXPRESS_NOSE_TILT"):
			return 41;
		case joaat("PEDEXPRESS_NOSE_BREAK"):
			return 42;
		case joaat("PEDEXPRESS_NOSTRIL_WIDTH"):
			return 43;
		case joaat("PEDEXPRESS_MOUTH_WIDTH"):
			return 44;
		case joaat("PEDEXPRESS_MOUTH_DEPTH"):
			return 45;
		case joaat("PEDEXPRESS_MOUTH_H_POS"):
			return 46;
		case joaat("PEDEXPRESS_MOUTH_V_POS"):
			return 47;
		case joaat("PEDEXPRESS_UPPER_LIP_THICKNESS"):
			return 48;
		case joaat("PEDEXPRESS_UPPER_LIP_WIDTH"):
			return 49;
		case joaat("PEDEXPRESS_UPPER_LIPDEPTH"):
			return 50;
		case joaat("PEDEXPRESS_LOWER_LIP_THICKNESS"):
			return 51;
		case joaat("PEDEXPRESS_LOWER_LIP_WIDTH"):
			return 52;
		case joaat("PEDEXPRESS_LOWER_LIP_DEPTH"):
			return 53;
		default:
			break;
	}
	return -1;
}

void func_512(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<5> /*40*/ sVar2;
	struct<11> /*88*/ sVar9;

	sVar9.f_2 = 5;
	if (bParam1)
	{
		iVar1 = -1095364703;
	}
	else
	{
		iVar1 = -638521536;
	}
	sVar2.f_0 = iVar1;
	sVar2.f_1 = 953106857;
	sVar2.f_2 = 1700442869;
	sVar2.f_3 = 1;
	sVar2.f_4 = func_534(iParam0, 1);
	Global_1946054.f_57[iParam0 /*11*/] = { sVar9 /*11*/ };
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar2);
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar2, joaat("SLOT_ID")))
	{
		return;
	}
	Global_1946054.f_57[iParam0 /*11*/].f_8 = iVar0;
	DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar2, joaat("NONE_ITEM"));
	Global_1946054.f_57[iParam0 /*11*/] = iVar0;
	Global_1946054.f_57[iParam0 /*11*/].f_10 = 0;
	DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar2, 366812837);
	func_736(iParam0, iVar0, iVar1);
	DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar2, 576352150);
	func_737(iParam0, iVar0, iVar1);
	if (DATAFILE::_0x52FC26D2D2FC2987(&iVar0, &sVar2, joaat("PRIORITY")))
	{
		Global_1946054.f_57.f_430[iVar0] = iParam0;
	}
}

void func_513(int iParam0)
{
	Global_1946054 -= Global_1946054 & iParam0;
}

int func_514(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_738(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_371(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_739(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19--;
	*uParam1--;
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_371(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_739(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_373(iParam0, 1);
	return 1;
}

void func_515()
{
	int iVar0;

	if (func_115() == -1)
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

int func_516(int iParam0)
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

int func_517(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_521(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_547(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_741(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_518(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_332(iParam0, 0))
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
	if (!func_742())
	{
		func_743(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_744(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_744(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
		}
		else if (bParam2 && func_616(iParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT");
		}
		bVar0 = true;
	}
	iVar6 = func_521(iParam0);
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
	else if (!func_745(iParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_746(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_655(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_547(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_655(iParam0));
	}
	func_747(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> /*16*/ func_519(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_332(iParam0, 0))
	{
		return sVar0;
	}
	if (func_547(iParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_115() == -1)
		{
			if (func_547(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_748(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_748(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_547(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_748(joaat("MEDICINE_ITEMS"));
	}
	if (func_547(iParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_748(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

int func_520(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_521(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_517(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_749(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(bParam2), iParam0, false);
	return iVar2;
}

int func_521(int iParam0)
{
	Vector3 vVar0;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_522(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;
	struct<10> /*80*/ sVar20;
	struct<4> /*32*/ sVar34;
	int iVar39;
	int iVar40;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	sVar0 = { func_564(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam2)
	{
		func_751(&sVar0, func_750(0));
	}
	if (!func_565(&sVar0, &iVar18, &iVar19, 0))
	{
		return false;
	}
	sVar20.f_9 = joaat("SLOTID_NONE");
	iVar39 = 0;
	while (iVar39 < iVar19)
	{
		if (iVar40 >= iParam1)
		{
		}
		else
		{
			if (!func_673(&sVar20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				sVar34.f_4 = sVar20.f_9;
				sVar34 = { sVar20.f_5 /*4*/ };
				if (func_677(iParam0, &sVar20, &sVar34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_566(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_523(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_526(iParam0, bParam4, 1) /*5*/ };
	if (sVar0.f_4 == joaat("SLOTID_SATCHEL"))
	{
		return func_752(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	sVar5 = { func_569(iParam0, sVar0, sVar0.f_4, bParam4) /*4*/ };
	return func_677(iParam0, &sVar5, &sVar0, iParam1, iParam2, bParam3, bParam4);
}

bool func_524(bool bParam0)
{
	if (func_115() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_571(bParam0));
}

void func_525(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_547(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_753(iParam0, iParam1);
		}
		if (func_547(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_547(iParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_637(iParam0, iParam1, 1, 0);
		}
	}
}

struct<5> /*40*/ func_526(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_754(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_521(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_569(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_750(bParam1) /*4*/ };
			if (bParam2 && func_755(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_676(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_676(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_674(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_756(bParam1) /*4*/ };
			switch (func_371(iParam0))
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
			if (func_757(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_569(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_757(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_569(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_758(sVar0, &sVar27, bParam1, 0))
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

int func_527(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_534(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

bool func_528(int iParam0, int iParam1)
{
	if (func_115() == -1)
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

void func_529(int iParam0, int iParam1, int iParam2)
{
	if (func_115() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1 /*120*/] -= Global_26796.f_26[iParam1 /*120*/] & iParam0;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] -= Global_36638.f_45.f_350.f_26[iParam1 /*120*/] & iParam0;
	}
}

int func_530(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 5)
	{
		return func_359(iVar0);
	}
	return 0;
}

int func_531(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_357();
	}
	if (func_115() == -1)
	{
		return Global_26796.f_26[iParam0 /*120*/].f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1;
}

void func_532(int iParam0)
{
	Global_1946054 |= iParam0;
}

bool func_533(var uParam0, int iParam1)
{
	return uParam0->f_2 & iParam1 != 0;
}

int func_534(int iParam0, int iParam1)
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

bool func_535(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MP_COMPONENT_TYPE_LOADOUT_5"):
			return false;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_6"):
			return false;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_7"):
			return false;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return false;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			if (!func_429(24))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return true;
	return false;
}

void func_536(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar3 = 0;
	bVar2 = func_115() != -1;
	if (func_339() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar3 = 1;
	}
	iVar0 = func_759(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = 5;
		if (func_760(Global_1946054.f_1378.f_1[iVar1 /*3*/], iVar3, iVar0, bVar2) != -1)
		{
			Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946054.f_2653 = iParam0;
		}
		else if (func_760(Global_1946054.f_1378.f_1[iVar1 /*3*/], iVar3, func_759(iParam0 + 1), bVar2) != -1)
		{
			Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946054.f_2653 = iParam0;
		}
		else
		{
			Global_1946054.f_1378.f_1[iVar1 /*3*/] = func_761(0);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = 289238755;
				Global_1946054.f_2653 = iParam0;
			}
			else
			{
				Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
				Global_1946054.f_2653 = iParam0;
			}
		}
	}
	iVar0 = func_759(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 6;
		if (func_760(Global_1946054.f_1378.f_1[iVar1 /*3*/], iVar3, iVar0, bVar2) != -1)
		{
			Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946054.f_2654 = iParam1;
		}
		else if (func_760(Global_1946054.f_1378.f_1[iVar1 /*3*/], iVar3, func_759(iParam1 + 1), bVar2) != -1)
		{
			Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946054.f_2654 = iParam1;
		}
		else
		{
			Global_1946054.f_1378.f_1[iVar1 /*3*/] = func_761(1);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = 289238755;
				Global_1946054.f_2654 = iParam1;
			}
			else
			{
				Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
				Global_1946054.f_2654 = iParam1;
			}
		}
	}
	iVar0 = func_759(iParam2);
	if (iVar0 != 0)
	{
		iVar1 = 7;
		if (func_760(Global_1946054.f_1378.f_1[iVar1 /*3*/], iVar3, iVar0, bVar2) != -1)
		{
			Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946054.f_2655 = iParam2;
		}
		else if (func_760(Global_1946054.f_1378.f_1[iVar1 /*3*/], iVar3, func_759(iParam2 + 1), bVar2) != -1)
		{
			Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946054.f_2655 = iParam2;
		}
		else
		{
			Global_1946054.f_1378.f_1[iVar1 /*3*/] = func_761(2);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = 289238755;
				Global_1946054.f_2655 = iParam2;
			}
			else
			{
				Global_1946054.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
				Global_1946054.f_2655 = iParam2;
			}
		}
	}
}

void func_537(int iParam0)
{
	func_762(&(Global_1946054.f_1378), iParam0);
}

bool func_538(int iParam0, int iParam1)
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1 != 0;
}

bool func_539(int iParam0, int iParam1)
{
	return Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_10 & iParam1 != 0;
}

void func_540(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_10 -= Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_10 & iParam1;
}

void func_541(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_10 |= iParam1;
}

void func_542(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_543(int iParam0, int iParam1)
{
	func_763(&(Global_1946054.f_2589), iParam0, iParam1);
}

bool func_544(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_338(iParam0, 1) /*3*/] != Global_1946054.f_57[func_338(iParam0, 1) /*11*/];
}

void func_545(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_543(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_543(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_543(iVar2, iVar0);
		}
	}
}

bool func_546(int iParam0)
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

bool func_547(int iParam0, int iParam1)
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

void func_548(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
}

void func_549()
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

bool func_550(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_764(uParam0, iParam3, iParam2) && !func_100(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_765((1 << 15)))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/]))
		{
			func_766(joaat("MP_COMPONENT_TYPE_HEADWEAR"));
		}
		else
		{
			func_767(joaat("MP_COMPONENT_TYPE_HEADWEAR"));
		}
	}
	func_768(uParam0, 0, 0);
	func_362(iParam5);
	return true;
}

int func_551(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = func_338(iParam2, 1);
	iVar1 = 0;
	if (iVar0 < 0 || iVar0 >= 39)
	{
		return 0;
	}
	if (func_339() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	if (!bParam4)
	{
		func_549();
	}
	if (iParam1 != joaat("BASE") && func_760(Global_1946054.f_1378.f_1[iVar0 /*3*/], iVar1, iParam1, func_115() != -1) == -1)
	{
		return 0;
	}
	if (bParam3)
	{
		Global_1946054.f_2456[iVar0 /*2*/] = 0;
		Global_1946054.f_2456[iVar0 /*2*/].f_1 = 0;
	}
	Global_1946054.f_1378.f_1[iVar0 /*3*/].f_1 = iParam1;
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_552(16, iParam2, 0, 0, 0);
		}
		else
		{
			func_552(16, iParam2, 1, iParam0, 0);
		}
	}
	func_362(1);
	return 1;
}

void func_552(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_532((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_769(sVar0);
}

void func_553(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_770(iParam0))
	{
		return;
	}
	if (!func_771(iParam1))
	{
		return;
	}
	if (Global_40.f_7731[iParam0 /*5*/] == iParam1)
	{
		return;
	}
	Global_40.f_7731[iParam0 /*5*/] = iParam1;
	if (!bParam2)
	{
		bVar2 = (Global_40.f_7731[iParam0 /*5*/] < 7 && func_772(iParam0));
		Global_40.f_7731[iParam0 /*5*/].f_3 = func_457();
		func_773(iParam0, &iVar0, &iVar1, bVar2);
		func_458(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_554()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	if (func_115() == -1)
	{
		iVar4 = 0;
		while (iVar4 < 5)
		{
			func_342(&(Global_1946054.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar4);
			func_342(&(Global_1946054.f_1497.f_1[iVar1 /*3*/]), iVar1, iVar4);
			func_342(&(Global_1946054.f_1497.f_1[iVar2 /*3*/]), iVar2, iVar4);
			func_342(&(Global_1946054.f_1497.f_1[iVar3 /*3*/]), iVar3, iVar4);
			iVar4++;
		}
		return;
	}
	iVar4 = 0;
	while (iVar4 < 5)
	{
		func_548(&(Global_1946054.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar4);
		func_548(&(Global_1946054.f_1497.f_1[iVar1 /*3*/]), iVar1, iVar4);
		func_548(&(Global_1946054.f_1497.f_1[iVar2 /*3*/]), iVar2, iVar4);
		func_548(&(Global_1946054.f_1497.f_1[iVar3 /*3*/]), iVar3, iVar4);
		iVar4++;
	}
}

void func_555()
{
	int iVar0;

	iVar0 = func_457();
	func_458(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (func_774(0) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
	}
	if (func_774(1) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
	}
	if (func_774(2) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
	}
}

bool func_556(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_549();
	if (iParam2 == 39)
	{
		sVar0 = { func_526(iParam0, 1, 0) /*5*/ };
		iParam2 = func_338(func_527(sVar0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_547(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && func_775(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_765((1 << 15)) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_766(func_534(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_776(iParam2);
	func_543(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_356(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_356(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_355(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_777(iParam0, iParam2, iParam1, func_115() != -1);
	if (bParam4)
	{
		func_768(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_768(&(Global_1946054.f_1378), 1, 0);
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
				func_540(func_534(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

bool func_557()
{
	return 1 == Global_40.f_7748.f_3;
}

bool func_558(int iParam0)
{
	switch (iParam0)
	{
		case -2017785881:
		case -1900633994:
		case -1511041621:
		case -1471756535:
		case -1147723761:
		case -1051664629:
		case -986108061:
		case -929316746:
		case -827216318:
		case -736147717:
		case -245303732:
		case -193909113:
		case 282876023:
		case 602337354:
		case 963009459:
		case 1012091683:
		case 1334801974:
		case 1471627791:
			return true;
		default:
			break;
	}
	return false;
}

int func_559(int iParam0)
{
	switch (iParam0)
	{
		case -986108061:
			return 1156231582;
		case -1051664629:
			return joaat("CLOTHING_ITEM_HAIR_SWEPT_BACK");
		case 1471627791:
			return -2120294484;
		case 1012091683:
			return -814448122;
		case 282876023:
			return 1279519416;
		case 1334801974:
			return 933586678;
		case -736147717:
			return 1612093252;
		case -245303732:
			return 530132198;
		case -1900633994:
			return -499492817;
		case -1511041621:
			return -1392593303;
		case -193909113:
			return -2091943191;
		case -929316746:
			return 1165676701;
		case -1147723761:
			return 1380556716;
		case 963009459:
			return -1140711191;
		case 602337354:
			return -1189021969;
		case -1471756535:
			return 862555979;
		case -2017785881:
			return -674783297;
		case -827216318:
			return 279124309;
		default:
			break;
	}
	return 0;
}

void func_560()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	if (func_115() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_342(&(Global_1946054.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar1);
			iVar1++;
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		func_548(&(Global_1946054.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar1);
		iVar1++;
	}
}

var func_561()
{
	return Global_1946054.f_1497.f_1[1 /*3*/];
}

void func_562(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_778(iParam0))
	{
		return;
	}
	if (Global_40.f_7748.f_1 == iParam0)
	{
		return;
	}
	Global_40.f_7748.f_1 = iParam0;
	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_457();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_779());
		func_780(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_458(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_563()
{
	int iVar0;

	if (func_781() <= 3)
	{
		iVar0 = func_457();
		func_458(&iVar0, 0, 0, 0, 2, 0, 0, 0);
		DECORATOR::DECOR_SET_INT(Global_35, "hairShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
	}
}

struct<18> /*144*/ func_564(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_565(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_571(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_566(int iParam0)
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

void func_567(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_568(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_IS_METAPED_ASSET_VALID(uParam0->f_3.f_1))
	{
		func_782(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_338(func_337(iParam1), 1);
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
		func_783(uParam0);
	}
}

struct<4> /*32*/ func_569(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_332(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_571(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

int func_570(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_569(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_571(bParam6), &sVar0, false);
	return iVar4;
}

int func_571(bool bParam0)
{
	if (func_115() == -1)
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

bool func_572(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_12 != -1)
	{
		return Global_36638[iParam0] & iParam1 != 0;
	}
	return Global_40.f_9274[iParam0] & iParam1 != 0;
}

bool func_573()
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

int func_574(int iParam0)
{
	if (!func_289(iParam0))
	{
		return -1;
	}
	return func_784(func_449(iParam0));
}

bool func_575(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_576(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_785() - fParam1);
	func_786(uParam0, 1);
	func_787(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

var func_577(var uParam0)
{
	return uParam0;
}

void func_578(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;

	func_335(iParam0, 1, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
	iVar34 = func_788(iParam0, &uVar18);
	func_789(iParam0, &uVar18, &iVar34, 1);
	if (func_339() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR"))
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_790(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_333(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_335(uVar18[iVar36], 1, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		switch (func_371(uVar18[iVar36]))
		{
			case joaat("CI_CATEGORY_WARDROBE_HAT"):
				func_790(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case joaat("CI_CATEGORY_WARDROBE_MASK"):
				func_790(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
				func_790(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
				func_790(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case joaat("CI_CATEGORY_WARDROBE_BADGE"):
				func_790(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_333(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = func_338(func_337(uVar18[iVar36]), 1);
		iVar36++;
	}
	func_791(&(Global_1946054.f_1616));
	func_100(&(Global_1946054.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946054.f_1616.f_1[8 /*3*/] = { func_340(8, 0) /*3*/ };
	Global_1946054.f_1616.f_1[9 /*3*/] = { func_340(9, 0) /*3*/ };
	Global_1946054.f_1616.f_1[0 /*3*/] = { func_340(0, 0) /*3*/ };
	Global_1946054.f_1616.f_1[2 /*3*/] = { func_340(2, 0) /*3*/ };
	Global_1946054.f_1616.f_1[3 /*3*/] = { func_340(3, 0) /*3*/ };
	Global_1946054.f_1616.f_1[1 /*3*/] = { func_340(1, 0) /*3*/ };
	Global_1946054.f_1616.f_1[5 /*3*/] = { func_340(5, 0) /*3*/ };
	Global_1946054.f_1616.f_1[6 /*3*/] = { func_340(6, 0) /*3*/ };
	Global_1946054.f_1616.f_1[7 /*3*/] = { func_340(7, 0) /*3*/ };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == func_341(iVar0[iVar36], iVar35))
			{
				func_333(func_531(iVar35), 1, 1);
				func_792(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_533(&(Global_1946054.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							func_342(&(Global_1946054.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946054.f_1497.f_1[iVar37 /*3*/] = { Global_1946054.f_1616.f_1[iVar37 /*3*/] /*3*/ };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946054.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_793(iParam0))
	{
		if (!func_92(8))
		{
			if (func_339() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR"))
			{
				if (bVar17)
				{
					func_100(&(Global_1946054.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, joaat("MPC_PLAYER_TYPE_SP_ARTHUR"));
					Global_1946054.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_363(&(Global_1946054.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_364(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_793(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_100(&(Global_1946054.f_1616), joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"), &uVar39, 0, 1, 0, joaat("MPC_PLAYER_TYPE_SP_MARSTON"));
					Global_1946054.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_363(&(Global_1946054.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_364(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_793(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_793(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_794(Global_40.f_7729, (1 << 12));
					func_503(Global_1905941, (1 << 12));
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					func_795(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_100(&(Global_1946054.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, joaat("MPC_PLAYER_TYPE_SP_ARTHUR"));
	func_100(&(Global_1946054.f_1616), 2020890174, &uVar39, 1, 0, 0, joaat("MPC_PLAYER_TYPE_SP_ARTHUR"));
	Global_1946054.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] /*3*/ };
	Global_26796.f_627 = Global_1946054.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946054.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946054.f_1616.f_1[iVar36 /*3*/] /*3*/ };
		iVar36++;
	}
}

struct<4> /*32*/ func_579()
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_754(0) /*4*/ };
	return func_569(856287005, sVar0, joaat("SLOTID_CARRIED_HORSE_EQUIPMENT"), 0);
}

int func_580(int iParam0, struct<4> /*32*/ sParam1)
{
	int iVar0;
	var uVar1;
	struct<2> /*16*/ sVar3;
	var uVar7;
	int iVar11;
	struct<5> /*40*/ sVar12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	sVar12 = { sParam1 /*4*/ };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &sVar3))
		{
			if (func_332(sVar3.f_0, 0))
			{
				sVar12.f_4 = sVar3.f_1;
				if (func_570(sVar3.f_0, sParam1, sVar12.f_4, 0) > 0)
				{
				}
				else
				{
					func_796(&uVar7);
					if (func_677(sVar3.f_0, &uVar7, &sVar12, -1, joaat("REMOVE_REASON_DEFAULT"), 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> /*48*/ func_581()
{
	struct<6> /*48*/ sVar0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_797(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		sVar0.f_4 = uVar6;
	}
	if (func_797(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		sVar0.f_0 = uVar7;
	}
	if (func_797(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		sVar0.f_2 = uVar8;
	}
	if (func_797(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		sVar0.f_5 = uVar9;
	}
	if (func_797(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		sVar0.f_3 = uVar10;
	}
	if (func_797(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		sVar0.f_1 = uVar11;
	}
	return sVar0;
}

int func_582(var uParam0)
{
	return uParam0->f_1;
}

void func_583(var uParam0)
{
	func_798(uParam0);
	func_800(uParam0, func_799(joaat("CI_CATEGORY_HORSE_BLANKET")));
	func_801(uParam0, func_799(joaat("CI_CATEGORY_HORSE_SADDLE")));
	func_802(uParam0, func_799(joaat("CI_CATEGORY_HORSE_HORN")));
	func_803(uParam0, func_799(joaat("CI_CATEGORY_HORSE_STIRRUP")));
	func_804(uParam0, func_799(joaat("CI_CATEGORY_HORSE_BEDROLL")));
	func_805(uParam0, func_799(joaat("CI_CATEGORY_HORSE_SADDLEBAG")));
}

void func_584(struct<6> /*48*/ sParam0)
{
	if (!func_806(sParam0.f_4, 1))
	{
	}
	if (!func_806(sParam0.f_0, 1))
	{
	}
	if (!func_806(sParam0.f_2, 1))
	{
	}
	if (!func_806(sParam0.f_5, 1))
	{
	}
	if (!func_806(sParam0.f_3, 1))
	{
	}
	if (!func_806(sParam0.f_1, 1))
	{
	}
}

int func_585(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_481())
	{
		if (func_807())
		{
			bVar0 = false;
			if (!func_94(Global_1835011[15 /*74*/].f_1, 1) && !func_429(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_808();
				*iParam1 = func_809();
				*iParam2 = func_810();
				return 1;
			}
			else
			{
				*iParam0 = func_811();
				*iParam1 = func_812();
				*iParam2 = func_813();
				return 1;
			}
		}
		else if (func_814())
		{
			if (!func_94(Global_1835011[60 /*74*/].f_1, 1))
			{
				*iParam0 = func_815();
				*iParam1 = func_816();
				*iParam2 = func_817();
				return 1;
			}
			else
			{
				*iParam0 = func_818();
				*iParam1 = func_819();
				*iParam2 = func_820();
				return 1;
			}
		}
	}
	else if (func_807())
	{
		*iParam0 = func_821();
		*iParam1 = func_822();
		*iParam2 = func_823();
		return 1;
	}
	else if (func_814())
	{
		*iParam0 = func_824();
		*iParam1 = func_825();
		*iParam2 = func_826();
		return 1;
	}
	return 0;
}

int func_586(int iParam0)
{
	iParam0 = func_827(iParam0);
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

void func_587(int iParam0, int iParam1)
{
	iParam0 = func_827(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = iParam1;
}

void func_588(int iParam0, int iParam1)
{
	iParam0 = func_827(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = iParam1;
}

void func_589(int iParam0, int iParam1)
{
	iParam0 = func_827(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = iParam1;
}

void func_590(int iParam0, int iParam1)
{
	iParam0 = func_827(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = iParam1;
}

bool func_591(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = func_828(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1 = { func_754(0) /*4*/ };
	if (func_829(&sVar1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_592(int iParam0)
{
	struct<10> /*80*/ sVar0;
	struct<5> /*40*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_830(iParam0, &sVar0))
	{
		return 0;
	}
	sVar29 = { sVar0.f_5 /*4*/ };
	sVar29.f_4 = sVar0.f_9;
	if (!func_677(sVar0.f_4, &sVar0, &sVar29, -1, joaat("REMOVE_REASON_DEFAULT"), 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_593(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("HORSE_BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("HORSE_BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("HORSE_BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("HORSE_BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("HORSE_BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("HORSE_BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("HORSE_BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("HORSE_BREED_APPALOOSA_BLANKET");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
			return joaat("HORSE_BREED_APPALOOSA_FEWSPOTTED");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("HORSE_BREED_ARABIAN_BLACK");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT_PC");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return joaat("HORSE_BREED_ARABIAN_WARPEDBRINDLE");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("HORSE_BREED_ARABIAN_WHITE");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("HORSE_BREED_ARDENNES_BAYROAN");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("HORSE_BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("HORSE_BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("HORSE_BREED_MORGAN_BAYROAN");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("HORSE_BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
			return joaat("HORSE_BREED_MORGAN_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("HORSE_BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("HORSE_BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("HORSE_BREED_MUSTANG_WILDBAY");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("HORSE_BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("HORSE_BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("HORSE_BREED_SHIRE_DARKBAY");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("HORSE_BREED_SHIRE_LIGHTGREY");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_SORREL");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_GOLDPALOMINO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_REDROAN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("HORSE_BREED_THOROUGHBRED_BLOODBAY");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("HORSE_BREED_THOROUGHBRED_DAPPLEGREY");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("HORSE_BREED_THOROUGHBRED_BRINDLE");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("HORSE_BREED_TURKOMAN_DARKBAY");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("HORSE_BREED_TURKOMAN_GOLD");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("HORSE_BREED_TURKOMAN_SILVER");
		case joaat("A_C_DONKEY_01"):
			return joaat("HORSE_DONKEY");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("HORSE_BREED_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("HORSE_BREED_ARABIAN_GREY");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("HORSE_BREED_MUSTANG_GOLDENDUN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_MAHOGANYBAY");
		case joaat("A_C_HORSE_SHIRE_RAVENBLACK"):
			return joaat("HORSE_BREED_SHIRE_RAVENBLACK");
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return -41062704;
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return joaat("HORSE_BREED_JOHN_ENDLESSSUMMER");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("HORSE_BREED_MURFREEBROOD_MANGE_01");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("HORSE_BREED_MURFREEBROOD_MANGE_02");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("HORSE_BREED_MURFREEBROOD_MANGE_03");
		default:
			break;
	}
	return 0;
}

int func_594(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> /*40*/ sVar1;
	var uVar6;

	if (!func_332(iParam1, 0))
	{
		return 0;
	}
	if (!func_831(iParam1))
	{
		return 0;
	}
	if (func_591(iParam0))
	{
		return 0;
	}
	iVar0 = func_828(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	sVar1 = { func_754(0) /*4*/ };
	sVar1.f_4 = iVar0;
	if (!func_680(iParam1, &uVar6, &sVar1, 1, joaat("ADD_REASON_DEFAULT"), 0))
	{
		return 0;
	}
	return 1;
}

bool func_595(int iParam0, struct<4> /*32*/ sParam1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> /*16*/ sVar3;
	struct<4> /*32*/ sVar7;
	int iVar11;
	struct<5> /*40*/ sVar12;

	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	sVar12 = { sParam1 /*4*/ };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &sVar3))
		{
			if (func_332(sVar3.f_0, 0))
			{
				sVar12.f_4 = sVar3.f_1;
				if (func_570(sVar3.f_0, sParam1, sVar12.f_4, 0) > 0)
				{
				}
				else
				{
					func_796(&sVar7);
					if (func_680(sVar3.f_0, &sVar7, &sVar12, 1, joaat("ADD_REASON_DEFAULT"), 1))
					{
						if (bParam5)
						{
							func_681(sVar7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_596()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_597(int iParam0)
{
	int iVar0;

	if (!func_428(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_VISIBLE(iVar0, true);
}

bool func_598(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_115() == -1)
	{
		if (func_832(iParam0) && func_833(iParam0))
		{
			func_834(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_599(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_835(iParam0, iParam1);
	sVar0 = { func_526(iParam0, 0, 1) /*5*/ };
	iVar5 = func_836(iParam0, &sVar0, 0, 0);
	iVar6 = func_837(iParam0, 0);
	if ((iVar5 > 1 && !func_838()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_547(iParam0, joaat("CI_TAG_ITEM_ANIMAL_PART")))
		{
			func_607(583, 1);
		}
		else
		{
			func_607(582, 0);
		}
	}
	if (func_839(iParam0, &sVar0, *iParam1, 0, 0))
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

void func_600(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_840(iParam0, -949239683))
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

bool func_601(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	return func_602(iParam0) != 0;
}

int func_602(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_841())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_842(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_603(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(iParam0);
}

int func_604(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_841())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_603(iVar0))
		{
			if (func_418(func_842(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_605(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	func_843(48);
	func_308(0, -1);
}

bool func_606(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	return func_94(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_607(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_844(iParam0, &iVar0, &iVar1);
	if (!func_845(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_846(iVar0, iVar1);
}

int func_608(int iParam0)
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), iParam0);
}

int func_609(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_610(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	return func_94(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_611(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	if (!func_286(iParam0))
	{
		return false;
	}
	return func_419(Global_1347702[iParam0 /*49*/].f_15);
}

int func_612()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_418(func_847(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_613(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_481() && (func_611(38) || func_606(38)))
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
			if (func_481() && (func_611(39) || func_606(39)))
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
			iVar9 = func_848(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_481() && (func_611(41) || func_606(41)))
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
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (func_481() && (func_611(49) || func_606(49)))
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
			iVar9 = func_848(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_849(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_850(iParam0, iVar13, iVar14))
	{
	}
	if (func_851(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_852(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_853(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_854(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_855(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_614(int iParam0)
{
	Global_40.f_12004 |= iParam0;
}

void func_615(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_481() && (func_611(38) || func_606(38)))
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
			if (func_481() && (func_611(39) || func_606(39)))
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
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_481() && (func_611(49) || func_606(49)))
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
		if (func_481() && (func_611(38) || func_606(38)))
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
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_858(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_857(func_609(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_481() && (func_611(39) || func_606(39)))
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
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_481() && (func_611(49) || func_606(49)))
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
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_616(int iParam0, int iParam1)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, iParam1);
}

void func_617(int iParam0)
{
	if (!func_682(iParam0))
	{
		return;
	}
	func_859(iParam0);
	func_860(iParam0);
}

int func_618(int iParam0, bool bParam1)
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
	if (func_332(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_861(iVar0) || func_862(iVar0))
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

int func_619(int iParam0, bool bParam1)
{
	if (!func_332(iParam0, 0))
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

bool func_620(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_622(iParam0))
	{
		return false;
	}
	if (!func_524(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_621(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_619(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_115() == -1)
		{
			func_424(iVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_863(iVar0);
			}
		}
		if (!func_839(iParam0, &uVar1, 1, 0, 0))
		{
			func_834(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_864(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_425(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_425(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_425(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_814())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_865(iVar0))
				{
					func_425(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_425(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_866(Global_35, 2, 0, 1);
				if ((((func_428(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_429(24)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_428(iVar7) && func_429(24))
				{
					if (!func_425(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_425(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_425(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_607(480, 1);
	}
	return true;
}

bool func_622(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_623(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_622(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_428(iVar4))
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
	if (func_418(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
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
		func_656(func_867(iParam0), func_655(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_115() == -1)
		{
			if (func_94(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_607(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_524(0))
	{
		if (func_620(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_661(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_624(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_596()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_868(Global_35, iParam0, &uVar0))
		{
			func_641(PLAYER::PLAYER_PED_ID(), iParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 += 0.1f;
			func_647();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 += 0.1f;
			func_647();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 += 0.1f;
			func_647();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 += 0.5f;
			func_645();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 += 0.2f;
			func_643();
			break;
	}
}

void func_625(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 += 0.1f;
			func_643();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 += 0.1f;
			func_644();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 += 0.5f;
			func_645();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 += 0.1f;
			func_646();
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
			func_647();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 += 0.3f;
			func_869();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 += 0.1f;
			func_870();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 += 0.2f;
			break;
	}
}

struct<2> /*16*/ func_626(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

void func_627(int iParam0)
{
	bool bVar0;

	bVar0 = func_547(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT"));
	if (func_871() < 3)
	{
		if (bVar0)
		{
			if (func_873(func_872(iParam0), iParam0))
			{
				func_656(79, func_655(func_872(iParam0)), 1);
			}
			else
			{
				func_656(78, func_655(func_872(iParam0)), 1);
			}
		}
		else
		{
			func_656(80, func_655(func_874(iParam0)), 1);
		}
	}
}

bool func_628()
{
	if (((((func_875(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_875(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_875(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_875(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_875(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_875(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_629(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_876(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_669(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_670(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_630(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_615(51, 0, 0, 0, 0, -1, 0);
			func_877((1 << 13));
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_615(51, 0, 0, 0, 0, -1, 0);
			func_877((1 << 19));
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_613(39, 0, 0, 0, 0, 0, 1, 0);
			func_615(39, 0, 0, 0, 0, -1, 0);
			func_878(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_613(41, 0, 0, 0, 0, 0, 1, 0);
			func_615(41, 0, 0, 0, 0, -1, 0);
			func_879(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_613(49, 0, 0, 0, 0, 0, 1, 0);
			func_615(49, 0, 0, 0, 0, -1, 0);
			func_880(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_613(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_881(1), 0, -1, 0);
			func_882(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_613(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_881(2), 0, -1, 0);
			func_882(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_613(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_881(4), 0, -1, 0);
			func_882(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_613(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_881(8), 0, -1, 0);
			func_882(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_613(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_881(16), 0, -1, 0);
			func_882(16);
			break;
	}
}

void func_631(int iParam0)
{
	if (func_883() == 1)
	{
		if (func_606(39))
		{
			func_607(342, 0);
		}
		else
		{
			func_607(343, 0);
			func_878(1);
		}
	}
	if (func_883() >= 30)
	{
		func_607(344, 0);
	}
	func_613(39, 0, 0, 0, 0, 0, -1, 0);
	func_615(39, 0, 0, func_883(), 30, 1, 0);
}

void func_632(int iParam0)
{
	if (func_884() == 1)
	{
		if (func_606(49))
		{
			func_607(409, 0);
		}
		else
		{
			func_607(410, 0);
			func_880(1);
		}
	}
	if (func_884() >= 10)
	{
		func_607(411, 0);
	}
	func_613(49, 0, 0, 0, 0, 0, -1, 0);
	func_615(49, 0, 0, func_884(), 10, 1, 0);
}

void func_633(int iParam0)
{
	char[] cVar0[8];

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_01"), 1);
			func_607(437, 0);
			func_607(440, 0);
			func_885(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &cVar0, 1, 0, 0);
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), cVar0, 0, -1, 0);
			func_615(51, 0, 0, cVar0, func_848(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_877(1);
			func_484(joaat("WS_TAXIDERMY_NOTICES"), 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_02"), 1);
			func_885(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &cVar0, 1, 0, 0);
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), cVar0, 0, -1, 0);
			func_615(51, 0, 0, cVar0, func_848(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_877(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_03"), 1);
			func_885(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &cVar0, 1, 0, 0);
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), cVar0, 0, -1, 0);
			func_615(51, 0, 0, cVar0, func_848(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_877(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_04"), 1);
			func_885(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &cVar0, 1, 0, 0);
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), cVar0, 0, -1, 0);
			func_615(51, 0, 0, cVar0, func_848(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_877((1 << 9));
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_05"), 1);
			func_607(438, 0);
			func_885(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &cVar0, 1, 0, 0);
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), cVar0, 0, -1, 0);
			func_615(51, 0, 0, cVar0, func_848(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_877((1 << 15));
			break;
		default:
			func_607(439, 0);
			break;
	}
}

void func_634()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_635(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_115() == -1)
	{
		if (!func_606(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_607(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_607(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_607(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_607(400, 0);
			}
		}
		else if (func_547(iParam0, 412399755))
		{
			func_886(joaat("EXOTIC_STAGE_01"));
			if (func_887() == 0)
			{
				func_308(0, 10);
				iVar1 = func_888(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_606(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_607(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_607(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_607(401, 0);
			}
		}
		else if (func_547(iParam0, 709057512))
		{
			func_886(joaat("EXOTIC_STAGE_02"));
			if (func_887() == 1)
			{
				func_308(0, 10);
				iVar1 = func_888(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_606(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_607(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_607(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_607(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_607(398, 0);
			}
		}
		else if (func_547(iParam0, -1478961327))
		{
			func_886(joaat("EXOTIC_STAGE_03"));
			if (func_887() == 2)
			{
				func_308(0, 10);
				iVar1 = func_888(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_891(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_892(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_843(48);
					}
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_606(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_607(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_607(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_607(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_607(406, 0);
			}
		}
		else if (func_547(iParam0, -1238404098))
		{
			func_886(joaat("EXOTIC_STAGE_04"));
			if (func_887() == 3)
			{
				func_308(0, 10);
				iVar1 = func_888(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_606(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_607(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_607(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_607(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_607(403, 0);
			}
		}
		else if (func_547(iParam0, 1160548794))
		{
			func_886(joaat("EXOTIC_STAGE_05"));
			if (func_887() == 4)
			{
				func_308(0, 10);
				iVar1 = func_888(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_636(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_891(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_892(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_843(48);
		}
	}
}

void func_637(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_418(func_893(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_894(iParam0, iVar0, cVar2, iParam1, bParam2);
			}
			else
			{
				func_895(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_638(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_115() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_629(0, 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_629(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_629(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_629(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_629(joaat("REWARD_BILLFOLD"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_629(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_629(joaat("REWARD_BILLSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_629(joaat("REWARD_COIN"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_629(joaat("REWARD_COINPURSE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_629(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_629(joaat("REWARD_COINS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_629(joaat("REWARD_MONEYCLIP"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_629(joaat("REWARD_MONEYSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_896())
			{
				func_629(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_629(joaat("REWARD_COINCUP_SM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_629(joaat("REWARD_COINCUP_LG"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_629(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_629(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_629(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_629(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_629(joaat("REWARD_RARE_FISH"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_629(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_639(int iParam0)
{
	if (func_606(41))
	{
		func_607(363, 0);
	}
	else
	{
		func_607(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_01"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_02"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_03"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_04"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_05"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_06"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_07"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_08"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_09"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_10"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_11"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_12"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_13"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_14"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_640(int iParam0, int iParam1)
{
	var uVar0;

	func_741(iParam0, iParam1, &uVar0);
}

int func_641(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
	{
		sVar0 = { func_526(iParam1, 1, 0) /*5*/ };
		iParam3 = func_527(sVar0.f_4);
		if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
		{
			return 0;
		}
	}
	if (!func_556(iParam1, iParam2, func_338(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_900(1, (func_115() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (bParam8 && iParam1 != Global_1946054.f_57[func_338(iParam3, 1) /*11*/])
			{
				func_552(31, 0, 0, 0, 0);
			}
			break;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (func_765((1 << 15)) && iParam1 != Global_1946054.f_57[func_338(iParam3, 1) /*11*/])
			{
				func_901();
				func_552(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_552(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_902(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_552(19, 0, iVar5, 0, 0);
		if ((iParam3 == joaat("MP_COMPONENT_TYPE_NECKWEAR_1") || iParam3 == joaat("MP_COMPONENT_TYPE_HEADWEAR")) || iParam3 == joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"))
		{
			func_903(0);
			func_904(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_552(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_642(int iParam0, bool bParam1)
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
	iVar18 = func_866(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_866(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_672("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_673(&sVar3, iVar2, iVar0, iVar1))
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
						func_566(iVar0);
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

void func_643()
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_60));
}

void func_644()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - fVar0), (1.0f - fVar1));
}

void func_645()
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f / (1.0f + Global_40.f_11095.f_58)));
}

void func_646()
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_63));
}

void func_647()
{
	func_905();
	func_906();
	func_907();
}

void func_648(int iParam0, int iParam1, bool bParam2)
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

void func_649(int iParam0, bool bParam1)
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
	func_856(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_650(int iParam0)
{
	Global_40.f_12004.f_7 |= iParam0;
}

void func_651(int iParam0)
{
	Global_40.f_12004.f_8 |= iParam0;
}

void func_652(int iParam0)
{
	Global_40.f_12004.f_9 |= iParam0;
}

void func_653(int iParam0)
{
	Global_40.f_12004.f_11 |= iParam0;
}

void func_654(int iParam0)
{
	Global_40.f_12004.f_12 |= iParam0;
}

int func_655(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_656(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_844(iParam0, &iVar0, &iVar1);
	if (!func_845(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_908(iParam0, (1 << 10)))
	{
		return;
	}
	func_846(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_657(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_844(iParam0, &iVar0, &iVar1);
	if (!func_845(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_908(iParam0, (1 << 10)))
	{
		return;
	}
	func_846(iVar0, iVar1);
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

int func_658()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);
	if (iVar0 == func_841())
	{
		return func_659();
	}
	iVar4 = (func_841() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_841())
	{
		iVar1 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar2, joaat("CIGARETTE_CARDS"), 0);
		if (!func_909(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_842(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_659()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_841());
	return func_842(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("CIGARETTE_CARDS"), 0));
}

void func_660(int iParam0)
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

bool func_661(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_526(iParam0, 0, 1) /*5*/ };
	sVar5 = { func_569(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_680(iParam0, &sVar5, &sVar0, iParam1, iParam2, 0);
}

void func_662(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_115() != -1)
	{
		return;
	}
	switch (func_371(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			if (iParam0 == joaat("KIT_BANDANA") && func_910(joaat("CI_CATEGORY_WARDROBE_MASK"), 0) <= 0)
			{
				func_552(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_552(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = func_793(iParam0);
			if (func_730(iVar0))
			{
				func_911(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_552(30, iParam0, 0, 0, 0);
			}
			if (func_339() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || func_339() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"):
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_552(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_339() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"):
						func_552(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			if (!func_912(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), 0))
			{
				if (func_913(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), &iVar1))
				{
					func_552(33, iVar1, 0, 0, 0);
				}
			}
			func_552(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_544(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_641(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_617(24);
		if (func_642(&iVar2, 0))
		{
			func_425(iVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_663(int iParam0)
{
	if (func_547(iParam0, 943695443))
	{
		func_914(0, iParam0);
	}
	else if (func_547(iParam0, -2096528786))
	{
		func_914(1, iParam0);
	}
	else if (func_547(iParam0, -1094167013))
	{
		func_914(2, iParam0);
	}
	else if (func_547(iParam0, 1936654645))
	{
		func_914(3, iParam0);
	}
	else if (func_547(iParam0, 1306489306))
	{
		func_914(4, iParam0);
	}
	else if (func_547(iParam0, 435762317))
	{
		func_914(5, iParam0);
	}
	else if (func_547(iParam0, 1259363210))
	{
		func_914(6, iParam0);
	}
	else if (func_547(iParam0, 881398259))
	{
		func_914(7, iParam0);
	}
	else if (func_547(iParam0, -541549214))
	{
		func_914(8, iParam0);
	}
	else if (func_547(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_914(-1, iParam0);
	}
}

int func_664(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	sVar4.f_1 = 10;
	func_915(&sVar4, joaat("LOOT_TYPE_NORMAL"));
	return func_916(iParam0, &sVar4, &uVar0, iParam1);
}

void func_665(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_115() == -1)
			{
				if (func_94(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_607(109, 1);
				}
			}
			break;
	}
}

void func_666(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_918(func_917(0));
	func_747(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_919(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_667(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_920(1) < iParam0)
	{
		iParam0 = func_920(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_748(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_668(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

void func_669(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_670(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_921())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_747(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_922(iVar0);
			func_923(iVar0, 0, 0);
		}
		func_747(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_471(func_748(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_671(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_517(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_672("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_673(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_428(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_566(iVar1);
				return true;
			}
			iVar3++;
		}
		func_566(iVar1);
	}
	return false;
}

bool func_672(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_571(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_673(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_674(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_924(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

int func_675(int iParam0, int iParam1)
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

bool func_676(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_570(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_677(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_925(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_758(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_524(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_571(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_678(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_926(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_679(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_571(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_758(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_680(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_332(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return false;
	}
	if (func_839(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_524(0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_571(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_681(struct<4> /*32*/ sParam0, bool bParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_524(0))
	{
		return func_927(sParam0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_758(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (sVar0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_571(0), &sParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_682(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_683(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_684(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_430(iParam0))
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
	if (!func_430(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_685(int iParam0)
{
	if (!func_430(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_686(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_332(iParam1, 0))
	{
		return;
	}
	iVar0 = -1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 200)
	{
		if (uParam0->f_1[iVar1 /*5*/] == iParam1)
		{
			uParam0->f_1[iVar1 /*5*/].f_1 += iParam2;
			uParam0->f_1[iVar1 /*5*/].f_3 = func_457();
			uParam0->f_1[iVar1 /*5*/].f_4 = 0;
			uParam0->f_1003 += iParam2;
			uParam0->f_1004 += (BUILTIN::TO_FLOAT(iParam2) * (float)func_928(iParam1, joaat("SELL_SHOP_DEFAULT"), 0));
			uParam0->f_1005 += (iParam2 * func_929(iParam1));
			uParam0->f_1[iVar1 /*5*/].f_2 = iParam3;
			return;
		}
		else if (uParam0->f_1[iVar1 /*5*/] == 0 && iVar0 == -1)
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = iParam2;
	if (uParam0->f_1002 == 0 || uParam0->f_1002 == 1)
	{
	}
	uParam0->f_1[iVar0 /*5*/] = iParam1;
	uParam0->f_1[iVar0 /*5*/].f_1 = iVar2;
	uParam0->f_1[iVar0 /*5*/].f_3 = func_457();
	uParam0->f_1[iVar0 /*5*/].f_4 = 0;
	uParam0->f_1[iVar0 /*5*/].f_2 = iParam3;
	*uParam0++;
	uParam0->f_1003 += iParam2;
	uParam0->f_1004 += (BUILTIN::TO_FLOAT(iParam2) * (float)func_928(iParam1, joaat("SELL_SHOP_DEFAULT"), 0));
	uParam0->f_1005 += (iParam2 * func_929(iParam1));
}

void func_687(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 -= *iParam0 & 2080374784;
	if (iParam1 < 1898)
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*iParam0 |= (1 << 31);
	}
	else
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*iParam0 -= *iParam0 & (1 << 31);
	}
}

void func_688(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= *iParam0 & 62914560;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_689(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_707(*iParam0);
	iVar1 = func_706(*iParam0);
	if (iParam1 < 1 || iParam1 > func_712(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= *iParam0 & 4063232;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_690(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= *iParam0 & 126976;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_691(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= *iParam0 & 4032;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_692(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= *iParam0 & 63;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

void func_693(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_930(iParam0);
	}
	else
	{
		func_931(iParam0, iParam1);
	}
	func_932();
}

bool func_694(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_695(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_696(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_697(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_698(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_699(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

int func_700(Vector3 vParam0)
{
	int iVar0;

	iVar0 = func_933(vParam0, 0.0f, 0.0f, 0, 2);
	return func_933(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

bool func_701(int iParam0)
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

void func_702(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_701(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_934(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_935(iVar0);
	*uParam0 = 0;
}

bool func_703(Vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_704(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FLOW"):
			return 7;
		case joaat("FLOW_FIRST_VISIT"):
			return 8;
		case joaat("VIGNETTE"):
			return 10;
		case joaat("VIG_CAMP_ONLY"):
			return 11;
		case joaat("BASE"):
			return 1;
		case 1871598:
			return 9;
		case joaat("EVENT"):
			return 6;
		case joaat("ARRANGEMENT"):
			return 2;
		case joaat("GRIEFING"):
			return 4;
		case joaat("SUPPLY"):
			return 3;
		case joaat("MOOD_ARTHUR"):
			return 12;
		case joaat("MOOD_ABIGAIL"):
			return 25;
		case joaat("MOOD_BILL"):
			return 16;
		case joaat("MOOD_CHARLES"):
			return 20;
		case joaat("MOOD_DUTCH"):
			return 13;
		case joaat("MOOD_SUSAN_GRIMSHAW"):
			return 31;
		case joaat("MOOD_HOSEA"):
			return 18;
		case joaat("MOOD_JACK"):
			return 26;
		case joaat("MOOD_JAVIER"):
			return 15;
		case joaat("MOOD_JOHN"):
			return 14;
		case joaat("MOOD_KAREN"):
			return 32;
		case joaat("MOOD_LENNY"):
			return 22;
		case joaat("MOOD_MARY_BETH"):
			return 27;
		case joaat("MOOD_MICAH"):
			return 19;
		case joaat("MOOD_MOLLY_OSHEA"):
			return 28;
		case joaat("MOOD_PEARSON"):
			return 29;
		case joaat("MOOD_SADIE_ADLER"):
			return 24;
		case joaat("MOOD_STRAUSS"):
			return 30;
		case joaat("MOOD_SWANSON"):
			return 33;
		case joaat("MOOD_TILLY"):
			return 34;
		case joaat("MOOD_UNCLE"):
			return 17;
		case joaat("MOOD_TRELAWNY"):
			return 35;
		case joaat("MOOD_ODRISCOLL"):
			return 23;
		case joaat("MOOD_SEAN"):
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_705(Vector3 vParam0, int iParam3, var uParam4, int iParam5, int* iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_706(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_441(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_707(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_708(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_709(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_710(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_711(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_712(int iParam0, int iParam1)
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

int func_713(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_936(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_714(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_715(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

void func_716(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_717(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_718(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

void func_719()
{
	func_303(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_303(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_303(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_303(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_303(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_303(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_303(joaat("WS_COLTER_STAGE_MP"));
}

void func_720()
{
	func_303(joaat("WS_BEECHERS_SHACK"));
	func_303(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_303(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_303(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_303(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_303(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_303(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_303(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_303(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_303(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_721(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_464(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_722(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_723(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_724()
{
	return Global_1109000.f_245;
}

void func_725(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] -= Global_23118[iParam0 /*11*/] & iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] -= Global_1058888.f_40545[iParam0 /*11*/] & iParam1;
}

int func_726()
{
	return Global_40.f_4283.f_324;
}

void func_727(int iParam0, bool bParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_324 + iParam0) < 0)
	{
		return;
	}
	func_937((Global_40.f_4283.f_324 + iParam0));
	if (bParam1)
	{
		func_938(9, iParam0);
	}
}

void func_728(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_939(310186733))
	{
		Global_40.f_4283.f_307.f_3 += iParam0;
		if (Global_40.f_4283.f_307.f_3 >= 5000)
		{
			func_940(310186733);
		}
	}
}

void func_729(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_939(-1959946884))
	{
		Global_40.f_4283.f_307.f_4 += iParam0;
		if (Global_40.f_4283.f_307.f_4 >= 3)
		{
			func_940(-1959946884);
		}
	}
}

bool func_730(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

var func_731()
{
	return Global_1946054.f_2792;
}

int func_732(int iParam0)
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

void func_733(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 -= Global_1946054.f_2657.f_26.f_6 & iParam0;
}

int func_734(int iParam0)
{
	if (!func_289(iParam0))
	{
		return 0;
	}
	return func_941(func_449(iParam0));
}

void func_735(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 |= iParam0;
}

void func_736(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	int iVar8;

	iVar8 = func_534(iParam0, 1);
	sVar1.f_0 = iParam2;
	sVar1.f_1 = uParam1;
	sVar1.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar1);
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar1))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar1, joaat("META_TAG")))
		{
		}
		else
		{
			func_942(iVar8, func_351(iVar0), 7);
		}
	}
}

void func_737(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	int iVar8;

	sVar1.f_0 = iParam2;
	sVar1.f_1 = uParam1;
	sVar1.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar1);
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar1))
	{
		if (Global_1946054.f_57[iParam0 /*11*/].f_1 >= 5)
		{
			return;
		}
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar1, joaat("TAG")))
		{
		}
		else
		{
			Global_1946054.f_57[iParam0 /*11*/].f_2[Global_1946054.f_57[iParam0 /*11*/].f_1] = iVar0;
			Global_1946054.f_57[iParam0 /*11*/].f_1++;
			iVar8 = func_943(iVar0);
			if (iVar8 == -1)
			{
			}
			else
			{
				func_944(iVar8, Global_1946054.f_57[iParam0 /*11*/].f_9, 9);
			}
		}
	}
}

bool func_738(int iParam0, int iParam1)
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

void func_739(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_945(iParam1);
	func_946(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_947(&(uParam0->f_26), iVar1);
		if (func_948(uParam0->f_26, &iVar0))
		{
			func_949(iVar0, iVar1);
		}
	}
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

void func_741(int iParam0, int iParam1, var uParam2)
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

bool func_742()
{
	return !Global_1911774;
}

void func_743(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_744(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_745(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_746(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_747(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_950(sParam0, sParam1, iParam2);
	return iVar20;
}

struct<2> /*16*/ func_748(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_749(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_564(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_751(&sVar0, func_750(0));
	}
	if (!func_565(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_566(iVar18);
	return iVar19;
}

struct<4> /*32*/ func_750(bool bParam0)
{
	int iVar0;

	iVar0 = func_571(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_569(joaat("CARRIED_WEAPONS"), func_754(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_569(joaat("CARRIED_WEAPONS"), func_754(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_569(joaat("CARRIED_WEAPONS"), func_754(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_751(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_752(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_925(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_524(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_571(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_753(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_115() == -1)
	{
		if (func_606(43))
		{
			if (func_547(iParam0, 412399755))
			{
				func_886(joaat("EXOTIC_STAGE_01"));
				if (func_887() == 0)
				{
					func_308(0, 10);
					iVar0 = func_951(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_889(iParam0) < func_890(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_606(44))
		{
			if (func_547(iParam0, 709057512))
			{
				func_886(joaat("EXOTIC_STAGE_02"));
				if (func_887() == 1)
				{
					func_308(0, 10);
					iVar0 = func_951(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_889(iParam0) < func_890(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(45))
		{
			if (func_547(iParam0, -1478961327))
			{
				func_886(joaat("EXOTIC_STAGE_03"));
				if (func_887() == 2)
				{
					func_308(0, 10);
					iVar0 = func_951(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_889(iParam0) < func_890(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(46))
		{
			if (func_547(iParam0, -1238404098))
			{
				func_886(joaat("EXOTIC_STAGE_04"));
				if (func_887() == 3)
				{
					func_308(0, 10);
					iVar0 = func_951(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_889(iParam0) < func_890(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(47))
		{
			if (func_547(iParam0, 1160548794))
			{
				func_886(joaat("EXOTIC_STAGE_05"));
				if (func_887() == 4)
				{
					func_308(0, 10);
					iVar0 = func_951(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_889(iParam0) < func_890(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

struct<4> /*32*/ func_754(bool bParam0)
{
	return func_569(joaat("CHARACTER"), func_952(), joaat("SLOTID_NONE"), bParam0);
}

bool func_755(int iParam0, bool bParam1)
{
	if (func_371(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_429(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_756(bool bParam0)
{
	int iVar0;

	iVar0 = func_571(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_569(joaat("EMOTE_ITEM"), func_754(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_569(joaat("EMOTE_ITEM"), func_754(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_757(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_371(iParam0);
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

bool func_758(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_571(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_759(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -888790689;
		case 1:
			return -2126063412;
		case 2:
			return -368305354;
		case 3:
			return -1500843424;
		case 4:
			return 2034750397;
		case 5:
			return -1689805015;
		case 6:
			return 1855421528;
		case 7:
			return -1844483462;
		case 8:
			return -618101597;
		case 9:
			return -516195177;
		case 10:
			return 1193363351;
		default:
			break;
	}
	return 0;
}

int func_760(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_761(int iParam0)
{
	if (func_339() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		switch (iParam0)
		{
			case 0:
				return 1331190543;
			case 1:
				return 1336948195;
			case 2:
				return 216184750;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return joaat("CLOTHING_ITEM_BEARD_SINGLE");
		case 1:
			return joaat("CLOTHING_ITEM_CHOPS_NORMAL");
		case 2:
			return joaat("CLOTHING_ITEM_STACHE_NORMAL");
		default:
			break;
	}
	return 0;
}

void func_762(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (func_339() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar2 = 1;
	}
	iVar0 = func_953(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 1;
		if (((iVar0 == -1906834168 && uParam0->f_1[iVar1 /*3*/] != func_954()) || iVar0 == -452152720) || iVar0 == -70852636)
		{
			uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946054.f_2656 = iParam1;
		}
		else if (func_760(uParam0->f_1[iVar1 /*3*/], iVar2, iVar0, func_115() != -1) != -1)
		{
			uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946054.f_2656 = iParam1;
		}
	}
}

void func_763(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_955(uParam0, 1))
	{
		func_956(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_764(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_531(iParam1) != iParam2)
	{
		return false;
	}
	if (func_528(2, iParam1))
	{
		func_343(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_765(int iParam0)
{
	return Global_1946054 & iParam0 != 0;
}

void func_766(int iParam0)
{
	func_540(iParam0, 8, 6);
}

void func_767(int iParam0)
{
	func_541(iParam0, 8, 6);
}

void func_768(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_115() != -1;
	iVar7 = func_957(0);
	if (func_765((1 << 15)))
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
			iVar5 = func_534(iVar0, 1);
			if (func_539(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_539(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_958(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_959(uParam0);
				if (iVar3 > 0)
				{
					if (!func_765((1 << 19)))
					{
						func_532((1 << 19));
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
							iVar5 = func_534(iVar0, 1);
							if (func_539(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_539(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_958(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_543(iVar0, iParam2);
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
					func_513((1 << 19));
				}
			}
		}
	}
}

void func_769(struct<4> /*32*/ sParam0)
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
			if (func_960(sParam0.f_0))
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
			func_961(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_532(8);
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
			if (func_960(sParam0.f_0))
			{
				return;
			}
			func_961(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_532(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_904(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

bool func_770(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return true;
}

bool func_771(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 10)
	{
		return false;
	}
	return true;
}

bool func_772(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/].f_4 > 0;
}

void func_773(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
		case 10:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_963(uParam1, uParam2, &uVar0, &uVar1, 0, func_962(iParam0));
	}
}

int func_774(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/];
}

int func_775(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	return iVar0;
}

void func_776(int iParam0)
{
	func_964(&(Global_1946054.f_2589), iParam0);
}

int func_777(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_957(0);
	if (iParam2 != 0 && func_760(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_354(iParam0, func_534(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

bool func_778(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return false;
	}
	return true;
}

bool func_779()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_780(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_963(uParam1, uParam2, &uVar0, &uVar1, 0, func_965());
	}
}

int func_781()
{
	return Global_40.f_7748.f_1;
}

void func_782(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_966(&(uParam0->f_3));
}

void func_783(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_967(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_784(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

float func_785()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_786(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_787(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

int func_788(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar1;
	int iVar8;

	iVar8 = 0;
	if (!func_968(iParam0, func_339()))
	{
		return 0;
	}
	sVar1.f_0 = func_350(func_339());
	sVar1.f_1 = iParam0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar1);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar1))
	{
		return 0;
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar1))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar0, &sVar1, joaat("COMPONENT")))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_789(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> /*80*/ sVar5;
	int iVar19;
	struct<18> /*144*/ sVar20;

	sVar5.f_9 = joaat("SLOTID_NONE");
	iVar19 = func_350(func_339());
	sVar20 = { func_564(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("CI_CATEGORY_WARDROBE_OUTFIT"), 0) /*18*/ };
	if (!func_565(&sVar20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_673(&sVar5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == sVar5.f_4)
		{
		}
		else
		{
			iVar4 = func_793(sVar5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_542(&(Global_1946054.f_964), iVar19, sVar5.f_4, joaat("COMPONENT"), 1, (*uParam1)[iVar3]);
					DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
					if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
					{
					}
					else
					{
						*iParam2--;
						(*uParam1)[iVar3] = (*uParam1)[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 += -1;
				}
			}
		}
		iVar2++;
	}
	func_566(iVar0);
	return 1;
}

void func_790(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = iParam0;
	if (!func_738(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26796.f_627.f_121.f_19)
	{
		if (iVar2 == Global_26796.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26796.f_627.f_121.f_19 == 1)
	{
		Global_26796.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26796.f_627.f_121[0] = 0;
		return;
	}
	Global_26796.f_627.f_121.f_19--;
	*uParam1--;
	Global_26796.f_627.f_121[iVar0] = Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19];
	Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19] = 0;
}

void func_791(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946054.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_1946054.f_1497.f_1[iVar0 /*3*/] /*3*/ };
		iVar0++;
	}
}

void func_792(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_115() == -1)
	{
		Global_26796.f_26[iParam0 /*120*/] = 0;
		Global_26796.f_26[iParam0 /*120*/].f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = Global_1946054.f_57[iVar0 /*11*/];
			func_342(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36638.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = Global_1946054.f_57[iVar0 /*11*/];
		func_548(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

int func_793(int iParam0)
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

void func_794(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_730(iParam0))
	{
		return;
	}
	iVar0 = Global_40.f_7157[iParam0 /*3*/] & iParam1;
	Global_40.f_7157[iParam0 /*3*/] -= iVar0;
}

int func_795(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_359(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_531(iParam1);
	}
	if ((bParam3 && func_969(iParam1, (1 << 12))) && Global_1946054.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_968(iVar0, Global_1946054.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_794(Global_40.f_7729, (1 << 12));
		func_503(Global_1905941, (1 << 12));
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_970(iParam0);
	}
	func_971();
	if (!func_972(iParam1))
	{
		func_973(iVar0, iParam0, func_360(iParam1), 1, 0, 1);
	}
	func_974(iParam0);
	return 1;
}

void func_796(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_797(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_975(856287005, iParam0))
	{
		return false;
	}
	sVar0 = { func_579() /*4*/ };
	*uParam1 = func_976(sVar0, iParam0, 0);
	if (!func_332(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_798(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_799(int iParam0)
{
	if (func_807())
	{
		switch (iParam0)
		{
			case joaat("CI_CATEGORY_HORSE_BLANKET"):
				return joaat("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_000");
			case joaat("CI_CATEGORY_HORSE_SADDLE"):
				return joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_STOCK_NEW_SADDLE_000");
			case joaat("CI_CATEGORY_HORSE_HORN"):
				return joaat("HORSE_EQUIPMENT_HORN_NEW_000");
			case joaat("CI_CATEGORY_HORSE_STIRRUP"):
				return joaat("HORSE_EQUIPMENT_STIRRUP_NEW_000");
			case joaat("CI_CATEGORY_HORSE_BEDROLL"):
				return joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_01_USED_000");
			case joaat("CI_CATEGORY_HORSE_SADDLEBAG"):
				return joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_000");
		}
	}
	else if (func_814())
	{
		switch (iParam0)
		{
			case joaat("CI_CATEGORY_HORSE_BLANKET"):
				return joaat("HORSE_EQUIPMENT_HORSE_BLANKET_09_NEW_001");
			case joaat("CI_CATEGORY_HORSE_SADDLE"):
				return joaat("HORSE_EQUIPMENT_WESTERN_04_STOCK_NEW_SADDLE_005");
			case joaat("CI_CATEGORY_HORSE_HORN"):
				return joaat("HORSE_EQUIPMENT_HORN_NEW_012");
			case joaat("CI_CATEGORY_HORSE_STIRRUP"):
				return joaat("HORSE_EQUIPMENT_STIRRUP_NEW_006");
			case joaat("CI_CATEGORY_HORSE_BEDROLL"):
				return joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_003");
			case joaat("CI_CATEGORY_HORSE_SADDLEBAG"):
				return joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_NEW_003");
		}
	}
	return 0;
}

void func_800(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_801(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_802(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_803(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_804(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_805(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_806(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> /*32*/ sVar10;
	struct<4> /*32*/ sVar14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (!func_977(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	sVar10 = { func_579() /*4*/ };
	sVar14 = { func_569(iParam0, sVar10, iVar9, 0) /*4*/ };
	if (func_681(sVar14, iParam1))
	{
		if (func_978(iParam0))
		{
			if (func_797(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_806(iVar18, 0))
				{
				}
			}
		}
		else if (func_979(iParam0))
		{
			if (func_797(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_806(iVar19, 0))
				{
				}
			}
			if (func_797(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_806(iVar20, 0))
				{
				}
			}
			iVar21 = func_980(iParam0);
			if (func_332(iVar21, 0))
			{
				if (func_806(iVar21, 1))
				{
				}
			}
		}
		func_981();
		return true;
	}
	return false;
}

bool func_807()
{
	if (func_115() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_808()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_809()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_810()
{
	return 1;
}

int func_811()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_812()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_813()
{
	return 1;
}

bool func_814()
{
	if (func_115() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_815()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_816()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_817()
{
	return 2;
}

int func_818()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_819()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_820()
{
	return 1;
}

int func_821()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_822()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_823()
{
	return 1;
}

int func_824()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_825()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_826()
{
	return 1;
}

int func_827(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_828(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return joaat("SLOTID_ACTIVE_HORSE");
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_829(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_571(bParam2), uParam0, iParam1);
}

bool func_830(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_591(iParam0))
	{
		return false;
	}
	iVar0 = func_828(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	sVar15 = { func_754(0) /*4*/ };
	if (!func_982(sVar15, iVar0, &sVar1, 0, 0))
	{
		return false;
	}
	if (!func_983(&sVar1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_831(int iParam0)
{
	return func_521(iParam0) == joaat("HORSE");
}

bool func_832(int iParam0)
{
	return func_521(iParam0) == joaat("WEAPON");
}

bool func_833(int iParam0)
{
	var uVar0;

	if (func_115() != -1)
	{
		return false;
	}
	if (func_616(iParam0, (1 << 20)))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_839(iParam0, &uVar0, 1, 0, 0);
	}
	return func_418(iParam0, 1, 0);
}

void func_834(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_521(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_619(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_862(iVar0))
	{
		if (func_115() == -1)
		{
			func_424(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_520(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_518(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_835(int iParam0, int iParam1)
{
	int iVar0;

	if (func_547(iParam0, joaat("CI_TAG_ITEM_MULTIPLE_USES")))
	{
		func_984(iParam0, joaat("COST_SHOP_DEFAULT"), &iVar0, 1);
		*iParam1 *= iVar0;
	}
}

int func_836(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!func_524(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_985(iParam0))
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(iParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_571(bParam3), iParam0);
}

int func_837(int iParam0, bool bParam1)
{
	if (func_622(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(bParam1), iParam0, false);
}

bool func_838()
{
	if (func_115() != -1)
	{
		return false;
	}
	if (!func_481())
	{
		return false;
	}
	if (!func_94(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_94(Global_1835011[2 /*74*/].f_1, 1) && func_94(Global_1347702[120 /*49*/].f_15, 1)) && !func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_94(Global_1835011[37 /*74*/].f_1, 1) && !func_94(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_94(Global_1835011[57 /*74*/].f_1, 1) && !func_94(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_94(Global_1835011[26 /*74*/].f_1, 1) && !func_94(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_94(Global_1835011[62 /*74*/].f_1, 1) && func_94(Global_1835011[63 /*74*/].f_1, 1)) && !func_94(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_94(Global_1835011[75 /*74*/].f_1, 1) && !func_94(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_94(Global_1835011[76 /*74*/].f_1, 1) && !func_94(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_94(Global_1835011[40 /*74*/].f_1, 1) && func_94(Global_1835011[41 /*74*/].f_1, 1)) && !func_94(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_94(Global_1835011[62 /*74*/].f_1, 1) && func_94(Global_1835011[63 /*74*/].f_1, 1)) && !func_94(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_94(Global_1835011[65 /*74*/].f_1, 1) && func_94(Global_1835011[66 /*74*/].f_1, 1)) && !func_94(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_839(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_986(&iParam0);
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (!func_524(0))
	{
		bParam3 = true;
	}
	if (func_832(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			sVar0 = { func_750(0) /*4*/ };
			sVar4.f_9 = joaat("SLOTID_NONE");
			if (!func_676(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_674(iParam0, &sVar4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_755(iParam0, 1))
			{
				if (!func_676(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_674(iParam0, &sVar4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_987(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_836(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_985(iParam0))
	{
		iVar28 = func_570(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(bParam4), iParam0, false);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_840(int iParam0, int iParam1)
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

int func_841()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

int func_842(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_843(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_115() != -1)
	{
		return;
	}
	iVar0 = func_988(iParam0);
	fVar1 = func_989(iParam0);
	if ((Global_1347477.f_117 || !func_429(31)) || !func_990(iVar0))
	{
		return;
	}
	if (fVar1 <= 0.0f)
	{
		return;
	}
	if (func_991(iVar0) >= 7)
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
	func_992(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_747(MISC::VAR_STRING(6, func_993(iParam0), fVar1), "itemtype_textures", func_994(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_844(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_845(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_995(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_996(iParam0))
	{
		return false;
	}
	if (func_997(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_908(iParam0, 1)) || func_465((1 << 15)))
	{
		if (!func_908(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_998())
	{
		return false;
	}
	return true;
}

void func_846(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_847(int iParam0)
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

int func_848(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_999(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

char* func_849(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_612() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1000(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1001(), 12);
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
			else if (func_883() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1002(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_883(), 30);
			}
			break;
		case -1531394072:
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
		case 1995362678:
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1003(), 13);
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
			else if (func_884() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1004(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_884(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_848(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_850(int iParam0, int iParam1, int iParam2)
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

bool func_851(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_852(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_853(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_1005(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_418(iVar2, 1, 0) || func_1007(func_1006(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_857(func_1005(iVar0))), func_857(func_1005(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_883() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1008(iVar0)), func_1008(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1002() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1008(iVar0)), func_1008(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1008(iVar0)), func_1008(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_893(iParam3, func_1009(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_889(iVar2) - iParam7) >= func_848(iParam3, func_1010(iVar0));
				}
				else
				{
					bVar1 = func_889(iVar2) >= func_848(iParam3, func_1010(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_889(iVar2) + iParam7) >= func_848(iParam3, func_1010(iVar0));
			}
			else
			{
				bVar1 = func_889(iVar2) >= func_848(iParam3, func_1010(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1011(iVar2)), func_1011(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1012(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1013(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_1013(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_884() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1014(iVar0)), func_1014(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1004() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1014(iVar0)), func_1014(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1014(iVar0)), func_1014(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_893(iParam3, func_1009(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_889(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1015(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1015(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1016(iVar2)), func_1016(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_854(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1003() >= 13)
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

bool func_855(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_289(func_506(0)) && ((func_1017(0) == 1 || func_1017(0) == 8) || func_1017(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("DINO_BONES") || iParam2 == 1995362678) || iParam2 == joaat("ROCK_CARVINGS"))
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

int func_856(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

char* func_857(int iParam0)
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

int func_858(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

void func_859(int iParam0)
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

void func_860(int iParam0)
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
			func_1018(1);
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
			func_1019(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1019(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1019(3);
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
			func_1020(1);
			break;
		case 34:
			func_1021(1);
			break;
		case 35:
			func_1022(1);
			break;
		case 36:
			break;
		case 37:
			func_1023(0);
			break;
		case 38:
			func_1024(0);
			break;
		case 39:
			func_1025(0);
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
			if ((!Global_1879534 && func_481()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_607(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_481()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_607(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_481()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_607(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_481()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_607(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_115() == -1)
			{
				if (!func_544(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_1026(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_814())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_418(iVar0, 1, 0))
					{
						func_661(iVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_641(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_115() == -1)
			{
				if (!func_418(1013902307, 1, 0))
				{
					func_661(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_115() == -1)
			{
				if (!func_418(1013902307, 1, 0))
				{
					func_661(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_418(142640135, 1, 0))
				{
					func_661(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_115() == -1)
			{
				if (!func_418(786809402, 1, 0))
				{
					func_661(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_115() == -1)
			{
				if (!func_418(786809402, 1, 0))
				{
					func_661(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_418(-518019409, 1, 0))
				{
					func_661(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_1027();
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

bool func_861(int iParam0)
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

bool func_862(int iParam0)
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

void func_863(int iParam0)
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
	iVar2 = func_457();
	func_458(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_864(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1028(iParam0))
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

bool func_865(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_866(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_867(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_429(50))
			{
				if (!func_429(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_429(51))
			{
				if (!func_429(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_868(int iParam0, int iParam1, var uParam2)
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

	if (!func_332(iParam1, 0))
	{
		return false;
	}
	if (func_521(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_115() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_371(iParam1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		return true;
	}
	iVar4 = func_337(iParam1);
	if (iVar4 == joaat("MP_COMPONENT_TYPE_END"))
	{
		*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_ITEM_META_TYPE_MISSING");
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_547(iParam1, joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar5 = func_338(iVar4, 1);
		if (func_775(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != iVar8)
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
			iVar3 = func_371(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_547(iParam1, -1638171711))
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
			if (func_1029(joaat("CI_CATEGORY_WARDROBE_COATS"), &uVar0))
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
				iVar10 = func_958(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_958(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; // curOff = 583
				iVar3 = func_371(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_547(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == joaat("CI_CATEGORY_WARDROBE_CHAPS") || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_546(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
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

void func_869()
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), (1.0f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_870()
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

int func_871()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_418(func_1030(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_872(int iParam0)
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

bool func_873(int iParam0, int iParam1)
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
	if (func_418(iVar0, 1, 0) && func_418(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_874(int iParam0)
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

bool func_875(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1031(iParam0);
	if (iVar0 != -15)
	{
		func_458(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1032(iVar0, 1);
	}
	return false;
}

int func_876(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_418(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_332(iVar25, 0) && func_547(iVar25, joaat("CI_TAG_ITEM_MONEY")))
			{
				return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_877(int iParam0)
{
	Global_40.f_12004.f_6 |= iParam0;
}

void func_878(int iParam0)
{
	Global_40.f_12004.f_1 |= iParam0;
}

void func_879(int iParam0)
{
	Global_40.f_12004.f_3 |= iParam0;
}

void func_880(int iParam0)
{
	Global_40.f_12004.f_5 |= iParam0;
}

int func_881(int iParam0)
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
	iVar1 = func_889(iVar9);
	iVar2 = func_889(iVar10);
	iVar3 = func_889(iVar11);
	iVar5 = func_890(iVar9);
	iVar6 = func_890(iVar10);
	iVar7 = func_890(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_889(iVar12);
		iVar8 = func_890(iVar12);
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

void func_882(int iParam0)
{
	Global_40.f_12004.f_2 |= iParam0;
}

int func_883()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1033(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_884()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

bool func_885(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1015(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1015(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1015(iVar0))
		{
			*sParam2++;
		}
		if (func_1015(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_1015(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1015(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1015(iVar0))
		{
			*sParam2++;
		}
		if (func_1015(iVar1))
		{
			*sParam2++;
		}
		if (func_1015(iVar0) && func_1015(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_1015(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1015(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1015(iVar0))
		{
			*sParam2++;
		}
		if (func_1015(iVar1))
		{
			*sParam2++;
		}
		if (func_1015(iVar2))
		{
			*sParam2++;
		}
		if ((func_1015(iVar0) && func_1015(iVar1)) && func_1015(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1015(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1015(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_1015(iVar0))
		{
			*sParam2++;
		}
		if (func_1015(iVar1))
		{
			*sParam2++;
		}
		if (func_1015(iVar2))
		{
			*sParam2++;
		}
		if (func_1015(iVar3))
		{
			*sParam2++;
		}
		if (((func_1015(iVar0) && func_1015(iVar1)) && func_1015(iVar2)) && func_1015(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_886(int iParam0)
{
	if (!func_1034(iParam0))
	{
		func_1036(func_1035(iParam0));
	}
}

int func_887()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1034(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_888(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_889(iVar9);
	iVar2 = func_889(iVar10);
	iVar3 = func_889(iVar11);
	iVar5 = func_890(iVar9);
	iVar6 = func_890(iVar10);
	iVar7 = func_890(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_889(iVar12);
		iVar8 = func_890(iVar12);
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

int func_889(int iParam0)
{
	int iVar0;

	if (func_418(iParam0, 1, 0))
	{
		iVar0 = func_520(iParam0, 0, 0);
	}
	return iVar0;
}

int func_890(int iParam0)
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

int func_891(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0);
}

void func_892(int iParam0, int iParam1)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, iParam1);
}

int func_893(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_999(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

void func_894(int iParam0, int iParam1, char[4] cParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_893(iParam1, 5) || iParam0 == func_893(iParam1, 6)) || iParam0 == func_893(iParam1, 7)) || iParam0 == func_893(iParam1, 8)) || iParam0 == func_893(iParam1, 9))
	{
		func_885(iParam1, iParam0, &cParam2, 0, iParam3, bParam4);
		func_613(51, 0, 0, iParam1, cParam2, 0, -1, 0);
		func_615(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_895(int iParam0, int iParam1, bool bParam2)
{
	char[] cVar0[8];

	cVar0 = 1;
	if ((((iParam0 == func_893(iParam1, 5) || iParam0 == func_893(iParam1, 6)) || iParam0 == func_893(iParam1, 7)) || iParam0 == func_893(iParam1, 8)) || iParam0 == func_893(iParam1, 9))
	{
		if (func_885(iParam1, iParam0, &cVar0, 0, 0, 0))
		{
			func_613(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_615(51, 0, 0, cVar0, func_848(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_613(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_615(51, 0, 0, cVar0, func_848(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_896()
{
	if (func_419(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_897(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

void func_898(int iParam0)
{
	if (!func_1037(iParam0))
	{
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	}
}

void func_899(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(iParam0, 1);
}

void func_900(bool bParam0, bool bParam1, bool bParam2)
{
	func_1038(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_901()
{
	func_1039(&(Global_1946054.f_2776));
	func_513((1 << 15));
	func_540(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

int func_902(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_338(iParam0, 1);
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

void func_903(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_1040(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_1041(sVar0);
}

void func_904(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = iParam2;
	sVar0.f_0 = iParam0;
	sVar0.f_2 = iParam1;
	func_1041(sVar0);
}

float func_905()
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

	if (func_1042())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1043(2);
	}
	if (Global_1347477.f_119)
	{
		return func_1043(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1044();
	fVar2 = func_1045();
	fVar3 = func_1046();
	fVar4 = func_1047();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_1048());
	fVar7 = (func_1043(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1049(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1050(3, fVar9, fVar9 > 100.0f);
	return func_1051(fVar7, -100.0f, 100.0f);
}

float func_906()
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

	if (func_1042())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1043(1);
	}
	if (Global_1347477.f_119)
	{
		return func_1043(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1044();
	fVar2 = func_1045();
	fVar3 = func_1046();
	fVar4 = func_1047();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_1048());
	fVar7 = (func_1043(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1049(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1050(2, fVar9, fVar9 > 100.0f);
	return func_1051(fVar7, -100.0f, 100.0f);
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

	if (func_1042())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1043(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_1052())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_1053())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_1043(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1044();
	fVar2 = func_1045();
	fVar3 = func_1046();
	fVar4 = func_1047();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_1048());
	fVar7 = (func_1043(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1049(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1050(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_1043(0);
	}
	return func_1051(fVar7, -100.0f, 100.0f);
}

bool func_908(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

bool func_909(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_910(int iParam0, bool bParam1)
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
				return func_1054();
			}
			break;
	}
	return 0;
}

void func_911(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_730(iParam0))
	{
		return;
	}
	if (func_1055(iParam0))
	{
		return;
	}
	if (!func_1056(iParam0))
	{
		func_1057(iParam0, 1, 0);
	}
	iVar0 = func_359(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_969(iParam0, (1 << 9)))
		{
			func_552(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1058() && !bParam1) && !func_394(0, 0, 1))
	{
		func_1059(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_503(iParam0, 6);
	if (bParam2)
	{
		if (!func_394(0, 0, 1))
		{
			func_308(1, 4);
		}
	}
}

bool func_912(int iParam0, bool bParam1)
{
	return func_910(iParam0, 0) < func_1060(iParam0, bParam1);
}

bool func_913(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_371(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_914(int iParam0, int iParam1)
{
	if (func_547(iParam1, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_1061(iParam1, 0);
	}
	else if (func_547(iParam1, 930141731))
	{
		func_1061(iParam1, 1);
		func_1062(iParam0);
	}
}

void func_915(var uParam0, int iParam1)
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

int func_916(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1063(uParam1);
	LOCAL_STORE_S(&uVar0, iParam0);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	sVar1.f_2.f_1 = 10;
	sVar1.f_0 = iParam3;
	sVar1.f_2 = { *uParam1 /*12*/ };
	func_1064(uParam2, iParam0, sVar1);
	return 1;
}

int func_917(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_918(int iParam0)
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

int func_919(int iParam0)
{
	var uVar0;

	if (!func_1065(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

int func_920(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_921()
{
	if (func_596())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_922(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1066((Global_40.f_4283.f_325 + iParam0));
}

void func_923(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_921())
	{
		func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_924(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_571(0);
	*uParam1 = { func_569(iParam0, func_750(0), iParam3, 0) /*4*/ };
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

bool func_925(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_926(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_927(struct<4> /*32*/ sParam0, bool bParam4, bool bParam5)
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
	if (!func_758(sParam0, &sVar1, 1, 0))
	{
		return iVar0;
	}
	if (sVar1.f_10 == bParam4)
	{
		return iVar0;
	}
	iVar15 = func_521(sVar1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		sVar16 = { func_1067(sParam0, 1) /*29*/ };
		sVar16.f_10 = bParam4;
		iVar0 = func_1068(joaat("UPDATE"), &sVar16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		sVar45 = { func_1069(sParam0, 1) /*18*/ };
		sVar45.f_10 = bParam4;
		iVar0 = func_1070(joaat("UPDATE"), &sVar45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		sVar63 = { func_1071(&sVar1) /*17*/ };
		sVar63.f_10 = bParam4;
		iVar0 = func_1072(joaat("UPDATE"), &sVar63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_928(int iParam0, int iParam1, bool bParam2)
{
	struct<2> /*16*/ sVar0[10];
	int iVar21;
	int iVar22;

	if (!func_1073(iParam0, iParam1, &sVar0, &iVar21, bParam2))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (sVar0[iVar22 /*2*/] == joaat("CURRENCY_CASH"))
		{
			return sVar0[iVar22 /*2*/].f_1;
		}
		else if (sVar0[iVar22 /*2*/] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_929(int iParam0)
{
	int iVar0;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(iParam0, &iVar0))
	{
		return 0;
	}
	return func_1074(iVar0);
}

int func_930(int iParam0)
{
	int iVar0;

	iVar0 = func_740(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1075(iVar0);
}

int func_931(int iParam0, int iParam1)
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
			func_1076(iVar2);
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

void func_932()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

int func_933(struct<2> /*16*/ sParam0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (sParam0.f_0 < fParam3)
	{
		if (sParam0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (sParam0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

var func_934(var uParam0)
{
	return uParam0;
}

void func_935(int iParam0)
{
	if (!func_1077(iParam0))
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

int func_936(int iParam0, int iParam1)
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

void func_937(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_324 = iParam0;
	sVar0 = { func_748(joaat("CAMP_FUNDS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

int func_938(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1078(iParam0))
	{
		return 0;
	}
	if (!func_481())
	{
		return 0;
	}
	if (!func_1079(iParam0, &iVar0, &iVar1))
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

bool func_939(int iParam0)
{
	if (!func_1080(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, func_1081(iParam0, 1));
}

void func_940(int iParam0)
{
	if (!func_1080(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_4283.f_307), func_1081(iParam0, 1));
}

int func_941(int iParam0)
{
	return iParam0 & 31;
}

void func_942(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_9 |= iParam1;
}

int func_943(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MISC"):
			return 0;
		case joaat("HEADS"):
			return 7;
		case joaat("EYEBROWS"):
			return 8;
		case joaat("EYES"):
			return 9;
		case joaat("HATS"):
			return 1;
		case joaat("HAT_ACCESSORIES"):
			return 2;
		case -1505611915:
			return 3;
		case joaat("HEADWEAR"):
			return 4;
		case joaat("HAIR"):
			return 5;
		case joaat("HAIR_ACCESSORIES"):
			return 6;
		case joaat("TEETH"):
			return 10;
		case -134124598:
			return 11;
		case joaat("BEARDS_CHIN"):
			return 13;
		case joaat("BEARDS_MUSTACHE"):
			return 14;
		case joaat("BEARDS_CHOPS"):
			return 12;
		case joaat("EYEWEAR"):
			return 15;
		case -126114541:
			return 16;
		case joaat("MASKS"):
			return 17;
		case joaat("MASKS_LARGE"):
			return 18;
		case joaat("FACE_PROPS"):
			return 19;
		case 1524025505:
			return 20;
		case joaat("NECKWEAR"):
			return 21;
		case joaat("SCARVES"):
			return 22;
		case joaat("NECKERCHIEFS"):
			return 24;
		case joaat("NECKTIES"):
			return 23;
		case 1820468724:
			return 25;
		case joaat("TALISMAN_NECK"):
			return 26;
		case joaat("BADGES"):
			return 28;
		case joaat("BODIES_UPPER"):
			return 27;
		case joaat("SHIRTS_FULL"):
			return 31;
		case joaat("SHIRTS_FULL_OVERPANTS"):
			return 32;
		case 1250560851:
			return 30;
		case joaat("OVERALLS_FULL"):
			return 36;
		case joaat("OVERALLS_MODULAR_UPPERS"):
			return 37;
		case 725125637:
			return 29;
		case 1527726350:
			return 33;
		case joaat("CHEMISES"):
			return 34;
		case joaat("SUSPENDERS"):
			return 48;
		case joaat("CLOAKS"):
			return 35;
		case joaat("COATS_HEAVY"):
			return 38;
		case joaat("COATS"):
			return 39;
		case joaat("COAT_ACCESSORIES"):
			return 40;
		case joaat("VESTS"):
			return 41;
		case joaat("VEST_ACCESSORIES"):
			return 42;
		case joaat("APRONS"):
			return 43;
		case joaat("BLOUSES"):
			return 44;
		case joaat("CORSETS"):
			return 45;
		case joaat("DRESSES"):
			return 46;
		case joaat("SHAWLS"):
			return 47;
		case joaat("ACCESSORIES"):
			return 55;
		case joaat("LOADOUTS"):
			return 51;
		case joaat("AMMO_PISTOLS"):
			return 52;
		case joaat("AMMO_RIFLES"):
			return 53;
		case joaat("AMMO_SHOTGUNS"):
			return 54;
		case joaat("SATCHELS"):
			return 49;
		case joaat("SATCHEL_STRAPS"):
			return 50;
		case joaat("TALISMAN_SATCHEL"):
			return 56;
		case -1250802524:
			return 57;
		case 1018031031:
			return 58;
		case -1459825906:
			return 59;
		case -1783800278:
			return 60;
		case joaat("GLOVES"):
			return 61;
		case -1394906584:
			return 62;
		case joaat("JEWELRY_BRACELETS"):
			return 63;
		case joaat("TALISMAN_WRIST"):
			return 64;
		case joaat("BELT_BUCKLES"):
			return 65;
		case joaat("GUNBELTS"):
			return 66;
		case joaat("GUNBELTS_HIGH"):
			return 85;
		case joaat("HOLSTERS_CROSSDRAW"):
			return 70;
		case joaat("HOLSTERS_KNIFE"):
			return 69;
		case joaat("HOLSTERS_RIGHT"):
			return 67;
		case joaat("HOLSTERS_LEFT"):
			return 68;
		case joaat("TALISMAN_HOLSTER"):
			return 71;
		case joaat("BELTS"):
			return 72;
		case joaat("TALISMAN_BELT"):
			return 73;
		case joaat("BODIES_LOWER"):
			return 74;
		case joaat("PANTS"):
			return 75;
		case joaat("UNIONSUIT_LEGS"):
			return 76;
		case joaat("KNICKERS"):
			return 77;
		case joaat("SKIRTS"):
			return 78;
		case joaat("STOCKINGS"):
			return 79;
		case joaat("CHAPS"):
			return 80;
		case joaat("OVERALLS_MODULAR_LOWERS"):
			return 81;
		case joaat("BOOTS"):
			return 82;
		case joaat("BOOT_ACCESSORIES"):
			return 83;
		case joaat("TALISMAN_BOOT"):
			return 84;
		default:
			break;
	}
	return -1;
}

void func_944(int iParam0, var uParam1, int iParam2)
{
	Global_1946054.f_860[iParam0] = (Global_1946054.f_860[iParam0] || uParam1);
}

int func_945(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_946(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_947(var uParam0, int iParam1)
{
	*uParam0--;
	func_782(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] /*5*/ };
}

bool func_948(int iParam0, int iParam1)
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

void func_949(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_950(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_951(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_889(iVar9);
	iVar2 = func_889(iVar10);
	iVar3 = func_889(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_889(iVar12);
	}
	iVar5 = func_890(iVar9);
	iVar6 = func_890(iVar10);
	iVar7 = func_890(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_890(iVar12);
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
	if (iParam2 != 2)
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

struct<4> /*32*/ func_952()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_953(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -70852636;
		case 1:
			return -452152720;
		case 2:
			return -1659460987;
		case 3:
			return -1906834168;
		case 4:
			return -1073518498;
		case 5:
			return -1304572717;
		case 6:
			return 1715418323;
		case 7:
			return 1468307294;
		case 8:
			return -1986397304;
		case 9:
			return 2061000197;
		default:
			break;
	}
	return 0;
}

int func_954()
{
	if (func_339() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return -1392593303;
	}
	return 1156231582;
}

bool func_955(var uParam0, int iParam1)
{
	return uParam0->f_1 & iParam1 != 0;
}

void func_956(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

int func_957(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_339();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_958(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_338(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_765((1 << 19)))
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

int func_959(var uParam0)
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

bool func_960(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_961(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

int func_962(int iParam0)
{
	switch (Global_40.f_7731[iParam0 /*5*/].f_2)
	{
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 1;
}

void func_963(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	fVar3 = BUILTIN::TO_FLOAT(iParam5);
	iVar0 = func_1082(BUILTIN::TO_FLOAT(*uParam0), fVar3);
	iVar1 = func_1083(BUILTIN::TO_FLOAT(*uParam1), fVar3);
	iVar2 = func_1084(BUILTIN::TO_FLOAT(*uParam2), fVar3);
	*uParam0 /= iParam5;
	*uParam1 /= iParam5;
	*uParam2 /= iParam5;
	*uParam3 /= iParam5;
	*uParam1 += iVar0;
	*uParam2 += iVar1;
	*uParam3 += iVar2;
	if (bParam4)
	{
		*uParam3 *= -1;
		*uParam2 *= -1;
		*uParam1 *= -1;
		*uParam0 *= -1;
	}
}

void func_964(var uParam0, int iParam1)
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
			if ((func_1085(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			else
			{
				if (func_1085(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1086(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

int func_965()
{
	if (func_1087(8))
	{
		return 8;
	}
	else if (func_1087(4))
	{
		return 4;
	}
	else if (func_1087(2))
	{
		return 2;
	}
	return 1;
}

void func_966(var uParam0)
{
	if (*uParam0 && PED::_IS_METAPED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_METAPED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_967(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1088(func_339());
	if (*uParam0)
	{
		func_966(uParam0);
	}
	uParam0->f_1 = PED::_REQUEST_METAPED_COMPONENT(iVar0, uParam1, 0, func_115() != -1, iParam2);
	*uParam0 = 1;
}

bool func_968(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_350(iParam1);
	func_542(&(Global_1946054.f_964), iVar0, iParam0, joaat("PLAYER_TYPE"), 1, iParam1);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	return DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964));
}

bool func_969(int iParam0, int iParam1)
{
	if (!func_730(iParam0))
	{
		return false;
	}
	return Global_40.f_7157[iParam0 /*3*/] & iParam1 != 0;
}

void func_970(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_971()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
	{
		return;
	}
	if (!func_765(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946054.f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_1089(), sVar0, 8.0f, -8.0f, -1, 67108880, 0.0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_513(1);
	STREAMING::REMOVE_ANIM_DICT(func_1089());
}

bool func_972(int iParam0)
{
	return false;
}

void func_973(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_793(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_115() != -1)
	{
		return;
	}
	func_549();
	if (bParam5)
	{
		if (!func_550(&(Global_1946054.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_765((1 << 15)) && Global_1946054.f_1378.f_1[10 /*3*/] != Global_1946054.f_57[10 /*11*/])
	{
		func_901();
	}
	func_102(iVar3, 1, 1, 1, 1, 1);
	func_552(31, 0, 0, 0, 0);
	func_903(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_552(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_552(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_1090(&(Global_1946054.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_974(int iParam0)
{
	PED::_SET_PED_DIRT_CLEANED(iParam0, 0.0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

bool func_975(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_371(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1091(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &uVar1))
				{
					iVar4 = uVar1;
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

int func_976(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (func_679(sParam0, iParam4, &sVar0, iParam5))
	{
		return sVar0.f_4;
	}
	return 0;
}

bool func_977(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> /*80*/ sVar6;
	struct<4> /*32*/ sVar20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> /*40*/ sVar37;
	struct<4> /*32*/ sVar42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_371(iParam1);
		iVar5 = func_1091(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_526(iParam1, 0, 0) /*5*/ };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_569(iParam1, *uParam4, uParam4->f_4, 0) /*4*/ };
					*uParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			sVar6.f_9 = joaat("SLOTID_NONE");
			sVar20.f_9 = joaat("SLOTID_NONE");
			iVar34 = func_571(0);
			sVar37 = { func_526(iParam1, 0, 0) /*5*/ };
			if (iParam6 != 0)
			{
				sVar37.f_4 = iParam6;
			}
			sVar42 = { func_569(iParam1, sVar37, sVar37.f_4, 0) /*4*/ };
			iVar35 = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(iVar34, &sVar42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(iVar34, &sVar42, iVar36, &sVar6))
				{
					iVar1 = func_371(sVar6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (func_679(sVar42, sVar6.f_9, &sVar20, 0))
								{
									uParam4->f_4 = sVar6.f_9;
									*uParam4 = { sVar6.f_5 /*4*/ };
									*uParam3 = { sVar20 /*4*/ };
									*uParam2 = uVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*uParam2 = 0;
	return false;
}

bool func_978(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
	}
	if (func_547(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_979(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (func_547(iParam0, joaat("CI_TAG_ITEM_HORSE_SADDLE_SPECIAL")))
	{
		return true;
	}
	return false;
}

int func_980(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
			return 263080063;
		case joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000"):
			return -34331381;
		case joaat("HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000"):
			return -993578318;
		case joaat("HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000"):
			return 579268144;
		case joaat("HORSE_EQUIPMENT_WESTERN_04_SPECIAL_NEW_SADDLE_000"):
			return 1104489688;
	}
	return 0;
}

int func_981()
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> /*32*/ sVar16;
	int iVar20;
	int iVar21;

	sVar0 = { func_526(856287005, 0, 0) /*5*/ };
	sVar5 = { func_569(856287005, sVar0, sVar0.f_4, 0) /*4*/ };
	iVar10 = func_371(856287005);
	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_976(sVar5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!func_332(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1091(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_976(sVar5, iVar11, 0);
			if (!func_332(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_979(iVar14) || func_978(iVar14))
					{
					}
					else
					{
						Jump @219; // curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (func_979(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; // curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!func_979(iVar14) && func_1092(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1093(iVar11, &sVar16, 1))
									{
										if (!func_681(sVar16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

bool func_982(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_571(bParam7);
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

bool func_983(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_571(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_984(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_332(iParam0, 0))
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

bool func_985(int iParam0)
{
	if (func_1094(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_986(int iParam0)
{
	if (!func_332(*iParam0, 0))
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

bool func_987(int iParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	sVar0 = { func_526(iParam0, 0, 1) /*5*/ };
	iVar5 = joaat("SLOTID_WEAPON_0");
	sVar6.f_9 = joaat("SLOTID_NONE");
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_675((398 + iVar29), 1);
		if (func_676(iParam0, &sVar0, iVar5, 0))
		{
			bVar28 = func_674(iParam0, &sVar6, iVar5);
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

int func_988(int iParam0)
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

float func_989(int iParam0)
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
			return func_1095(iParam0);
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
			return func_1095(iParam0);
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
			return func_1095(iParam0);
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

bool func_990(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_429(18);
		case 2:
			return func_429(20);
		case 1:
			return func_429(19);
		default:
			break;
	}
	return true;
}

int func_991(int iParam0)
{
	return func_1096(Global_40.f_11095.f_11[iParam0]);
}

void func_992(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_115() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_429(31))
	{
		return;
	}
	iVar0 = func_991(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_991(iParam0);
	if (func_1097(iParam0) & func_1098(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1099(fVar1, fParam1);
			if (fParam1 > (float)func_1100(iParam0) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_607(func_1101(iParam0), 0);
					}
					func_1102(iParam0, iVar2, iVar3);
					func_1103(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_993(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_994(int iParam0)
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

bool func_995(int iParam0, int iParam1)
{
	if (func_115() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_996(int iParam0)
{
	if (func_115() != -1)
	{
		if (func_908(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_908(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_997(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_908(iParam0, (1 << 16)) && !func_908(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_908(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_908(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_998()
{
	return Global_1905944.f_5694;
}

bool func_999(int iParam0, var uParam1)
{
	if (!func_1104(iParam0))
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

int func_1000()
{
	return func_1105(Global_40.f_12019);
}

int func_1001()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_847(iVar1);
		if (func_418(iVar2, 1, 0) || func_1007(func_1006(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1002()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1106(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1003()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1012(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1004()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_1005(int iParam0)
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

int func_1006(int iParam0)
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

bool func_1007(int iParam0)
{
	return Global_40.f_12019 & iParam0 != 0;
}

char* func_1008(int iParam0)
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

int func_1009(int iParam0)
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

int func_1010(int iParam0)
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

char* func_1011(int iParam0)
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

bool func_1012(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

char* func_1013(int iParam0)
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

char* func_1014(int iParam0)
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

bool func_1015(int iParam0)
{
	if (func_1107(iParam0) && func_418(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1108(iParam0) & func_1109(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1016(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_655(iParam0));
}

int func_1017(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_1018(bool bParam0)
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

void func_1019(int iParam0)
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

void func_1020(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_1021(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_1022(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_1023(bool bParam0)
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

void func_1024(bool bParam0)
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

void func_1025(bool bParam0)
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

int func_1026(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_338(iParam0, 1) /*3*/];
}

void func_1027()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1110();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_424(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_661(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_424(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_661(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_1028(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

bool func_1029(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_338(func_1111(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_371(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_1030(int iParam0)
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

int func_1031(int iParam0)
{
	return func_1112(iParam0, -1);
}

bool func_1032(int iParam0, bool bParam1)
{
	return func_1113(func_457(), iParam0, bParam1);
}

bool func_1033(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

bool func_1034(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_1035(int iParam0)
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

void func_1036(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

bool func_1037(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

void func_1038(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1114(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_115() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_528(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_359(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_359(Global_40.f_7729);
				Global_1946054.f_1378 = func_359(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_361(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_347(0, 1);
	}
}

void func_1039(var uParam0)
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

bool func_1040(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_1041(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_960(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_960(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_961(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_532(8);
}

bool func_1042()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_1043(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_1044()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1115(13);
	iVar1 = func_1116(fVar0);
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

float func_1045()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_1046()
{
	if (func_596())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_1047()
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

float func_1048()
{
	return Global_1954815.f_3;
}

void func_1049(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1117(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_1050(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1117(iParam0, 2, 0, 0);
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

float func_1051(float fParam0, float fParam1, float fParam2)
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

bool func_1052()
{
	return func_1115(12) <= -99.0f;
}

bool func_1053()
{
	return func_1115(12) >= 99.0f;
}

int func_1054()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_371(iVar1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			if (func_1118() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1055(int iParam0)
{
	if (!func_730(iParam0))
	{
		return false;
	}
	if (func_969(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1056(int iParam0)
{
	if (!func_730(iParam0))
	{
		return false;
	}
	if (func_969(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1057(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_730(iParam0))
	{
		return;
	}
	if (!func_1056(iParam0))
	{
		func_503(iParam0, 2);
		if (bParam2)
		{
			if (!func_394(0, 0, 1))
			{
				func_308(1, 4);
			}
		}
		if ((!func_1058() && !bParam1) && !func_394(0, 0, 1))
		{
			func_1059(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_1119(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_1058()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

int func_1059(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_1060(int iParam0, bool bParam1)
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

void func_1061(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1120(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_617(50);
			}
			else
			{
				func_617(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_617(51);
			}
			else
			{
				func_617(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1121(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_643();
				}
			}
			else
			{
				Global_40.f_11095.f_60 += 0.1f;
				func_643();
			}
			break;
		case 3:
			func_617(24);
			if (bParam1)
			{
				if (!func_1121(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_643();
				}
			}
			break;
	}
}

void func_1062(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1122(0))
			{
				iVar0++;
			}
			if (func_1122(2))
			{
				iVar0++;
			}
			if (func_1122(4))
			{
				iVar0++;
			}
			if (!func_1123(16))
			{
				if (iVar0 == 1)
				{
					func_1124();
					func_607(456, 1);
					func_1125(16);
				}
			}
			if (!func_1123(32))
			{
				if (iVar0 >= 3)
				{
					func_1124();
					func_607(456, 1);
					func_1125(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1122(1))
			{
				iVar0++;
			}
			if (func_1122(3))
			{
				iVar0++;
			}
			if (func_1122(7))
			{
				iVar0++;
			}
			if (!func_1123(1))
			{
				if (iVar0 == 1)
				{
					func_1126();
					func_607(457, 1);
					func_1125(1);
				}
			}
			if (!func_1123(2))
			{
				if (iVar0 >= 3)
				{
					func_1126();
					func_607(457, 1);
					func_1125(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1122(5))
			{
				iVar0++;
			}
			if (func_1122(6))
			{
				iVar0++;
			}
			if (func_1122(8))
			{
				iVar0++;
			}
			if (!func_1123(4))
			{
				if (iVar0 == 1)
				{
					func_1127();
					func_607(455, 1);
					func_1125(4);
				}
			}
			if (!func_1123(8))
			{
				if (iVar0 >= 3)
				{
					func_1127();
					func_607(455, 1);
					func_1125(8);
				}
			}
			break;
	}
}

void func_1063(var uParam0)
{
	func_915(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_915(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_915(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_1064(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_1128(uParam0))
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

bool func_1065(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1066(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_748(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

struct<29> /*232*/ func_1067(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_571(bParam4), &uParam0, &sVar29, 29, 1))
	{
		return sVar0;
	}
	sVar0 = { func_1071(&sVar29) /*17*/ };
	sVar0.f_17 = { sVar29.f_16 /*8*/ };
	sVar0.f_25 = sVar29.f_25;
	sVar0.f_26 = sVar29.f_27;
	sVar0.f_27 = sVar29.f_28;
	sVar0.f_28 = sVar29.f_24;
	return sVar0;
}

int func_1068(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1129(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1130(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1130(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_1130(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_1069(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_571(bParam4), &uParam0, &sVar18, 15, 1))
	{
		return sVar0;
	}
	sVar0 = { func_1071(&sVar18) /*17*/ };
	sVar0.f_17 = sVar18.f_14;
	return sVar0;
}

int func_1070(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1131(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1130(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1130(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_1130(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> /*136*/ func_1071(var uParam0)
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

int func_1072(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1132(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1130(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1130(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1130(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_1073(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar25;

	*iParam3 = 0;
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	sVar0.f_4 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SELL_PRICE(iParam0, iParam1, &sVar0))
	{
		return false;
	}
	if (!bParam4)
	{
	}
	*iParam3 = sVar0.f_3;
	if (*uParam2 < sVar0.f_3)
	{
		return false;
	}
	iVar25 = 0;
	while (iVar25 < sVar0.f_3)
	{
		if (!bParam4)
		{
		}
		*(uParam2[iVar25 /*2*/]) = { sVar0.f_4[iVar25 /*2*/] /*2*/ };
		iVar25++;
	}
	return true;
}

int func_1074(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 5;
		case 4:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1075(int iParam0)
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

int func_1076(int iParam0)
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

bool func_1077(int iParam0)
{
	return func_1133(iParam0, 2);
}

bool func_1078(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1079(int iParam0, int iParam1, int iParam2)
{
	if (!func_1078(iParam0))
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

bool func_1080(int iParam0)
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
		default:
			break;
	}
	return false;
}

int func_1081(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
		case -1784068921:
			return 7;
		case -1642438278:
			return 2;
		case -1349086674:
			return 8;
		case 310186733:
			return 5;
		case 456315479:
			return 9;
		case 471747275:
			return 3;
		case 1166592425:
			return 4;
		case 1486898918:
			return 0;
		case 1500419820:
			return 1;
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

int func_1082(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 24.0f));
}

int func_1083(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60.0f));
}

int func_1084(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60.0f));
}

bool func_1085(var uParam0, int iParam1)
{
	return uParam0->f_1 & iParam1 != 0;
}

void func_1086(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

bool func_1087(int iParam0)
{
	return Global_40.f_7748.f_4 & iParam0 != 0;
}

int func_1088(int iParam0)
{
	if (func_115() == -1)
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

char* func_1089()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

void func_1090(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_115() != -1;
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
			func_532((1 << 18));
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1134(iParam1, 29, bVar4, 1, 0);
			func_1134(iParam1, 31, bVar4, 1, 0);
			func_1134(iParam1, 30, bVar4, 1, 0);
			func_1134(iParam1, 22, bVar4, 1, 0);
			func_1134(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_765((1 << 15)) && func_539(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8)) && func_538(10, iParam3))
	{
		func_1135(iParam1, 0, 1);
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
			iVar3 = func_534(iVar1, 1);
			if (func_539(iVar3, 8))
			{
			}
			else if (Global_1946054.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_538(iVar1, iParam3))
				{
				}
				else if ((func_539(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_539(iVar3, 1) || bParam2)
					{
						Global_1946054.f_857++;
						if (!bParam6)
						{
							func_1134(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_541(iVar3, 1, 6);
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
								func_1134(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946054.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_539(iVar3, 1))
							{
								func_540(iVar3, 1, 6);
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

int func_1091(int iParam0)
{
	int iVar0;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_371(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_1092(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_1093(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<18> /*144*/ sVar2;
	struct<4> /*32*/ sVar20;
	int iVar34;

	if (iParam0 == 0)
	{
		return false;
	}
	sVar2 = { func_564(0, iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	func_751(&sVar2, func_579());
	if (func_565(&sVar2, &iVar0, &iVar1, 0))
	{
		sVar20.f_9 = joaat("SLOTID_NONE");
		iVar34 = 0;
		while (iVar34 < iVar1)
		{
			if (func_673(&sVar20, iVar34, iVar0, iVar1))
			{
				if (func_332(sVar20.f_4, 0) && !sVar20.f_10)
				{
					if (bParam2 && func_1092(sVar20.f_4))
					{
					}
					else
					{
						*uParam1 = { sVar20 /*4*/ };
						func_566(iVar0);
						return true;
					}
				}
			}
			iVar34++;
		}
		func_566(iVar0);
	}
	return false;
}

int func_1094(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(iParam0, iParam1);
}

float func_1095(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_988(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1096(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1136(iVar6) - func_1136(iVar5));
			fVar2 = ((float)iVar1 * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1.0f;
}

int func_1096(float fParam0)
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

int func_1097(int iParam0)
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

int func_1098(int iParam0)
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

int func_1099(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1096(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1136(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1136(iVar0 + 1));
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

int func_1100(int iParam0)
{
	int iVar0;

	if (func_1137(iParam0, &iVar0))
	{
		return func_1136(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1138())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1138())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1138())
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

int func_1101(int iParam0)
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

void func_1102(int iParam0, int iParam1, int iParam2)
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
	iVar3 += func_1139(iParam0);
	sVar4 = func_1141(func_1140(iVar3, iParam2));
	sVar6 = func_1142(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_1143(iParam0));
	iVar8 = func_1144(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		sVar10.f_0 = sVar7;
		sVar10.f_1 = sVar1;
		sVar10.f_3 = iVar9;
		sVar10.f_2 = iVar8;
		sVar10.f_4 = 1;
		sVar10.f_5 = func_1145(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&sVar10);
	}
	func_856(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_1146(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1103(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_1104(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1105(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 &= (iParam0 - 1);
		iVar0++;
	}
	return iVar0;
}

bool func_1106(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_1107(int iParam0)
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

int func_1108(int iParam0)
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

int func_1109(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1147(&iVar0, 0, iVar95, &sVar1) && !func_1147(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_1148(iVar0, &sVar1);
			if (func_332(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1110()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_1149(Global_35, &iVar0);
	sVar30 = { func_754(0) /*4*/ };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &sVar30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, joaat("REMOVE_REASON_DEFAULT"));
	func_93(0);
	func_106(7);
	func_1150(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_339() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		func_1150(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_1150(joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"), 1, 1, 1);
	}
	func_1151(Global_35, &iVar0);
}

int func_1111(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_527(iVar0);
}

int func_1112(int iParam0, int iParam1)
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
		iParam1 = func_571(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_687(&uVar6, iVar0);
	func_688(&uVar6, iVar1);
	func_689(&uVar6, iVar2);
	func_690(&uVar6, iVar3);
	func_691(&uVar6, iVar4);
	func_692(&uVar6, iVar5);
	return uVar6;
}

bool func_1113(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1152(iParam1) || !func_1152(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1114(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] /*3*/ };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_115() == -1)
	{
		func_342(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_548(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

float func_1115(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_1116(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1117(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_744(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_744(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1118()
{
	return Global_1946054.f_1497;
}

char* func_1119(int iParam0)
{
	int iVar0;

	iVar0 = func_359(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1016(iVar0);
}

int func_1120(int iParam0)
{
	int iVar0;

	if (func_1153(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1154(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1155(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1156(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1121(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_418(func_1157(iVar0, iParam0), 1, 0))
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

bool func_1122(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_418(func_1158(iVar0, iParam0), 1, 0))
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

bool func_1123(int iParam0)
{
	return Global_40.f_12003 & iParam0 != 0;
}

void func_1124()
{
	int iVar0;

	if (func_115() != -1)
	{
		return;
	}
	func_661(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_991(1);
	func_1102(1, iVar0, 0);
}

void func_1125(int iParam0)
{
	Global_40.f_12003 |= iParam0;
}

void func_1126()
{
	int iVar0;

	if (func_115() != -1)
	{
		return;
	}
	func_661(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_991(2);
	func_1102(2, iVar0, 0);
}

void func_1127()
{
	int iVar0;

	if (func_115() != -1)
	{
		return;
	}
	func_661(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_991(0);
	func_1102(0, iVar0, 0);
}

bool func_1128(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_1129(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

void func_1130(int iParam0, int iParam1)
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
	func_1159(iParam0, iParam1);
}

bool func_1131(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_1132(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_1133(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

void func_1134(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_534(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == joaat("MP_COMPONENT_TYPE_HEADWEAR"))
		{
			iVar1 = func_1160(iParam4);
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

void func_1135(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_539(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 6))
	{
		if (bParam2)
		{
			func_1134(iParam0, iVar0, func_115() != -1, 0, 0);
			func_541(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(iParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_540(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
	}
	Global_1946054.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

int func_1136(int iParam0)
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

bool func_1137(int iParam0, int iParam1)
{
	return false;
}

bool func_1138()
{
	return false;
}

int func_1139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(0), joaat("UPGRADE_HEALTH_TANK_1"), false);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(0), joaat("UPGRADE_STAMINA_TANK_1"), false);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(0), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}
	return 0;
}

struct<4> /*32*/ func_1140(int iParam0, int iParam1)
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

char* func_1141(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1142(int iParam0)
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

char* func_1143(int iParam0)
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

int func_1144(int iParam0)
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

int func_1145(int iParam0)
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

int func_1146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_1147(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_1161(iParam1) && !func_1162(iParam1))
	{
		bVar0 = func_1163(iParam1);
	}
	else
	{
		return false;
	}
	func_1164(uParam3);
	iVar5 = func_1165(iParam2);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar1, bVar0, iVar5, 0))
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

void func_1148(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1166(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1167(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1149(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_428(iVar31))
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

void func_1150(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1168(iParam0))
	{
		return;
	}
	iVar0 = func_371(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar1 = func_1169(iParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar1 = func_1169(iParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar1 = func_1169(iParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar1 = func_1169(iParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar1 = func_1169(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar1 = func_1169(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1170(0))
	{
		func_1171(iParam0, 1);
		if (func_339() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			func_1171(func_1170(joaat("MPC_PLAYER_TYPE_SP_ARTHUR")), 0);
		}
		else
		{
			func_1171(func_1170(joaat("MPC_PLAYER_TYPE_SP_MARSTON")), 0);
		}
	}
	func_515();
	if (func_1172(iVar0))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_571(0), iParam0, 0);
	}
	func_374(iParam0, bParam3);
	if (bParam2)
	{
		func_347(0, 0);
	}
}

void func_1151(int iParam0, int iParam1)
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
				if (func_862((*iParam1)[iVar0]))
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

bool func_1152(int iParam0)
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
	iVar0 = func_711(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_710(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_709(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_706(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_707(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_708(iParam0);
	if (iVar5 < 1 || iVar5 > func_712(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1153(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (func_547(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1154(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (func_547(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1155(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (func_547(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1156(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (func_547(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1157(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1173(iParam0);
		case 1:
			return func_1174(iParam0);
		case 2:
			return func_1175(iParam0);
		case 3:
			return func_1176(iParam0);
	}
	return 0;
}

int func_1158(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1177(iParam0);
		case 1:
			return func_1178(iParam0);
		case 2:
			return func_1179(iParam0);
		case 3:
			return func_1180(iParam0);
		case 4:
			return func_1181(iParam0);
		case 5:
			return func_1182(iParam0);
		case 6:
			return func_1183(iParam0);
		case 7:
			return func_1184(iParam0);
		case 8:
			return func_1185(iParam0);
	}
	return 0;
}

void func_1159(int iParam0, int iParam1)
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

int func_1160(int iParam0)
{
	int iVar0;

	iVar0 = func_371(iParam0);
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

bool func_1161(int iParam0)
{
	iParam0 = func_827(iParam0);
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

bool func_1162(int iParam0)
{
	int iVar0;

	iParam0 = func_827(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1161(iParam0))
	{
		return false;
	}
	iVar0 = func_1163(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_1163(int iParam0)
{
	iParam0 = func_827(iParam0);
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

void func_1164(var uParam0)
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

int func_1165(int iParam0)
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

void func_1166(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1167(int iParam0, int iParam1, int iParam2, int iParam3)
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
	bVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(iParam0, iParam1, iParam2);
	return bVar2;
}

bool func_1168(int iParam0)
{
	if (func_115() == -1)
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

int func_1169(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_738(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_373(iParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = iVar1;
	if (func_371(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_372(&(Global_1946054.f_2657.f_26.f_26), iParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1170(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_339();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_1171(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_526(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_569(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_570(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(bParam1, func_571(0), &sVar5);
	return 1;
}

bool func_1172(int iParam0)
{
	return func_1186(func_732(iParam0));
}

int func_1173(int iParam0)
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

int func_1174(int iParam0)
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

int func_1175(int iParam0)
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

int func_1176(int iParam0)
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

int func_1177(int iParam0)
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

int func_1178(int iParam0)
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

int func_1179(int iParam0)
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

int func_1180(int iParam0)
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

int func_1181(int iParam0)
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

int func_1182(int iParam0)
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

int func_1183(int iParam0)
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

int func_1184(int iParam0)
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

int func_1185(int iParam0)
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

bool func_1186(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_6 & iParam0 != 0;
}

