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
	struct<94> /*752*/ sLocal_9 = { 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 4 } ;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
#pragma endregion

void __SCRIPT()
{
	bool bVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	func_2();
	bVar0 = false;
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && !bVar0)
	{
		func_3(&bVar0);
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	func_4();
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(sLocal_9.f_0);
}

void func_2()
{
	int iVar0;

	func_5();
	sLocal_9.f_0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "cheats");
	sLocal_9.f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sLocal_9.f_0, "currentSelection");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(sLocal_9.f_3, func_6(12), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(sLocal_9.f_3, func_6(13), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(sLocal_9.f_3, func_6(16), MISC::GET_HASH_KEY(""));
	sLocal_9.f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sLocal_9.f_0, "currentGroup");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(sLocal_9.f_2, func_6(14), MISC::GET_HASH_KEY("PM_SCR_CHEATS"));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(sLocal_9.f_2, func_6(15), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(sLocal_9.f_2, func_6(16), MISC::GET_HASH_KEY(""));
	sLocal_9.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(sLocal_9.f_0, "dynamicList");
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		func_7(iVar0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_3, func_6(13), MISC::GET_HASH_KEY(func_8(0)));
	func_9();
	func_10();
}

void func_3(bool bParam0)
{
	Vector3 vVar0;
	int iVar4;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(76559005))
	{
		if (!UIEVENTS::EVENTS_UI_PEEK_MESSAGE(76559005, &vVar0))
		{
		}
		else
		{
			switch (vVar0.x)
			{
				case joaat("ITEM_FOCUSED"):
					if (vVar0.y < 0 || vVar0.y >= 37)
					{
					}
					else
					{
						if (sLocal_9.f_43 != vVar0.y)
						{
							if (sLocal_9.f_43 != -1)
							{
								func_11(sLocal_9.f_43);
							}
						}
						sLocal_9.f_43 = vVar0.y;
						func_12(sLocal_9.f_43);
						Jump @459; // curOff = 147
						switch (vVar0.z)
						{
							case -1943062401:
								*bParam0 = 1;
								break;
							case 172361245:
								func_13();
								break;
							case -1761800988:
								func_14();
								func_15();
								func_12(sLocal_9.f_43);
								sLocal_9.f_47 = 1;
								break;
						}
						Jump @459; // curOff = 216
						Jump @459; // curOff = 219
						if (func_16() || sLocal_9.f_47)
						{
							func_15();
							func_12(sLocal_9.f_43);
						}
						else
						{
							UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), -1882247919);
						}
						Jump @459; // curOff = 269
						func_17();
						if (func_18(sLocal_9.f_43))
						{
							UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), -1882247919);
						}
						else
						{
							func_12(sLocal_9.f_43);
						}
						Jump @459; // curOff = 313
						iVar4 = func_19(vVar0.z);
						if (iVar4 == -1)
						{
							if (vVar0.z == 0)
							{
								Jump @459; // curOff = 340
							}
							else
							{
								UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), 415950302);
							}
							else
							{
								Jump @453; // curOff = 364
								if (func_20(iVar4))
								{
									UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), -1954024225);
								}
								else if (func_21(iVar4) == 0)
								{
									if (!func_22(iVar4))
									{
										UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), -1001071426);
									}
									else
									{
										UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), 526258797);
										func_23(iVar4);
									}
									UIEVENTS::EVENTS_UI_POP_MESSAGE(76559005);
								}
							}
						}
					}
					default:
						break;
			}
		}
	}
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= (sLocal_9.f_42 - 1))
	{
		iVar3 = sLocal_9.f_4[iVar0];
		if (iVar3 == 0)
		{
		}
		else
		{
			iVar1 = func_24(iVar3);
			if (func_25(iVar3) == joaat("CHEAT_LOCKED") || func_25(iVar3) == 1726108579)
			{
			}
			else if (func_26(iVar1))
			{
			}
			else
			{
				iVar2 = func_27(iVar1);
				switch (iVar2)
				{
					case 0:
						func_28(iVar3);
						break;
					case 1:
						func_29(iVar3);
						break;
					case 2:
						func_30(iVar3);
						break;
					default:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_5()
{
	sLocal_9.f_49 = (999999900 - func_31(1));
	if (func_32() != -1)
	{
		sLocal_9.f_48 = (func_32() / 50000);
	}
}

char* func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "name";
		case 1:
			return "description";
		case 2:
			return "tipText";
		case 3:
			return "infoBox";
		case 4:
			return "converter";
		case 5:
			return "lockedState";
		case 6:
			return "recentlyUnlocked";
		case 7:
			return "active";
		case 8:
			return "activeText";
		case 9:
			return "value";
		case 10:
			return "minimum";
		case 11:
			return "maximum";
		case 12:
			return "infoBox";
		case 13:
			return "description";
		case 14:
			return "name";
		case 15:
			return "description";
		case 16:
			return "tipText";
		case 17:
			return "cheat";
		case 18:
			return "textValue";
		default:
			break;
	}
	return "";
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = func_33(iParam0);
	if (iVar3 != 0 && func_34(&(sLocal_9.f_91), iVar3, 1))
	{
		sLocal_9.f_50[iParam0] = sLocal_9.f_88[iVar3];
		return;
	}
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(sLocal_9.f_1, func_35(iParam0));
	iVar1 = func_27(iParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, func_6(0), MISC::GET_HASH_KEY(func_36(iParam0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, func_6(1), MISC::GET_HASH_KEY(func_37(iParam0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, func_6(2), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, func_6(3), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, func_6(4), func_38(iVar1));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, func_6(5), func_39(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, func_6(6), false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, func_6(17), iParam0);
	switch (iVar1)
	{
		case 0:
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, func_6(9), false);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, func_6(10), false);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, func_6(11), true);
			if (iParam0 == 6)
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, func_6(7), false);
				if (func_32() == -1)
				{
					if (sLocal_9.f_49 <= 0)
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, func_6(8), MISC::VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, func_6(8), "");
					}
				}
				else
				{
					if (func_32() >= sLocal_9.f_49)
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, func_6(8), MISC::VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, func_6(8), MISC::VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED", func_32()));
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, func_6(9), true);
				}
			}
			else
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, func_6(7), func_40(iParam0));
			}
			break;
		case 1:
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, func_6(9), func_41(func_40(iParam0), 1, 0));
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, func_6(10), 0);
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, func_6(11), 1);
			break;
		case 2:
			sLocal_9.f_44[iVar3] = func_42(iVar3) + 1;
			if (sLocal_9.f_44[iVar3] == 0)
			{
				iVar2 = func_43(iVar3);
				if (iVar2 != -1)
				{
					sLocal_9.f_44[iVar3] = func_44(iVar3, iVar2) + 1;
				}
			}
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, func_6(9), sLocal_9.f_44[iVar3]);
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, func_6(10), 0);
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, func_6(11), func_45(iVar3));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, func_6(18), func_46(sLocal_9.f_44[iVar3]));
			if (func_47(iVar3))
			{
				if (sLocal_9.f_44[iVar3] == 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, func_6(5), joaat("UNLOCKED"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, func_6(5), func_39(func_48(iVar3)));
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, func_6(5), joaat("CHEAT_LOCKED"));
			}
			break;
		default:
			break;
	}
	if (iVar3 != 0)
	{
		func_49(&(sLocal_9.f_91), iVar3, 1);
		sLocal_9.f_88[iVar3] = sLocal_9.f_42;
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(sLocal_9.f_1, sLocal_9.f_42, func_50(iVar1), iVar0);
	sLocal_9.f_4[sLocal_9.f_42] = iVar0;
	sLocal_9.f_50[iParam0] = sLocal_9.f_42;
	sLocal_9.f_42++;
}

char* func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar1 = func_24(sLocal_9.f_4[iParam0]);
	iVar0 = func_25(sLocal_9.f_4[iParam0]);
	bVar3 = func_51(sLocal_9.f_4[iParam0]);
	switch (iVar0)
	{
		case joaat("UNLOCKED"):
			if (func_40(iVar1) || bVar3)
			{
				if (func_52(iVar1))
				{
					return "CHEAT_ACTIVATED_ONE_TIME_USE";
				}
				else if (func_53(iVar1))
				{
					iVar2 = func_48(func_33(iVar1));
					if (iVar2 == -1)
					{
						return func_54(func_33(iVar1));
					}
					else
					{
						return func_37(iVar2);
					}
				}
				else if (iVar1 == 6)
				{
					return func_37(iVar1);
				}
				else
				{
					return "CHEAT_ACTIVATED_DESCRIPTION";
				}
			}
			else
			{
				return func_37(iVar1);
			}
			break;
		case joaat("CHEAT_LOCKED"):
		case 1726108579:
			return "CHEAT_UNLOCK_DESCRIPTION";
		case joaat("UNLOCKED_DISABLED"):
			if (func_26(iVar1))
			{
				return "CHEAT_DISABLED_DESCRIPTION";
			}
			else if (func_40(iVar1) || bVar3)
			{
				if (func_52(iVar1))
				{
					return "CHEAT_ACTIVATED_ONE_TIME_USE";
				}
				else if (iVar1 == 6)
				{
					return "CHEAT_ACTIVATED_MONEY_MAX";
				}
				else
				{
					return "CHEAT_ACTIVATED_DESCRIPTION";
				}
			}
			else if (iVar1 == 6)
			{
				return "CHEAT_ACTIVATED_MONEY_MAX";
			}
			else
			{
				return "CHEAT_DISABLED_DESCRIPTION";
			}
			break;
		default:
			break;
	}
	return "CHEATS_GROUP_DESC";
}

void func_9()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = iVar0;
		if (iVar1 == 0 || iVar1 == -1)
		{
		}
		else
		{
			func_55(iVar1);
		}
		iVar0++;
	}
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		if (iVar2 == -1 || iVar2 == 0)
		{
			sLocal_9.f_93[iVar0] = -1;
		}
		else
		{
			iVar1 = func_56(iVar2);
			if (iVar1 == -1)
			{
				sLocal_9.f_93[iVar0] = -1;
			}
			else
			{
				sLocal_9.f_93[iVar0] = sLocal_9.f_50[iVar1];
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_93[iVar0]], func_6(9), true);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_93[iVar0]], func_6(7), true);
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_93[iVar0]], func_6(5), joaat("UNLOCKED_DISABLED"));
			}
		}
		iVar0++;
	}
}

void func_11(int iParam0)
{
	if (0 == sLocal_9.f_4[iParam0])
	{
		return;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(sLocal_9.f_4[iParam0], func_6(6)))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(sLocal_9.f_4[iParam0], func_6(6), false);
	}
}

void func_12(int iParam0)
{
	int iVar0;

	iVar0 = func_24(sLocal_9.f_4[iParam0]);
	if (func_53(iVar0))
	{
		func_55(func_33(iVar0));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_3, func_6(13), func_57(sLocal_9.f_4[iParam0]));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_3, func_6(13), MISC::GET_HASH_KEY(func_8(iParam0)));
	}
}

void func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_24(sLocal_9.f_4[sLocal_9.f_43]);
	iVar1 = func_27(iVar0);
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_43], func_6(9), 0);
			break;
		case 2:
			if (!func_53(iVar0))
			{
			}
			else
			{
				iVar2 = func_33(iVar0);
				sLocal_9.f_44[iVar2] = 0;
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_43], func_6(9), 0);
			}
			default:
				break;
	}
}

void func_14()
{
	Global_1425247.f_53 = 1;
}

void func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_24(sLocal_9.f_4[sLocal_9.f_43]);
	iVar2 = func_27(iVar0);
	switch (iVar2)
	{
		case 0:
			if (func_58(iVar0))
			{
				iVar3 = func_59(iVar0);
				if (iVar3 != -1 && iVar3 != 0)
				{
					if (sLocal_9.f_93[iVar3] != -1)
					{
						if (func_60(iVar0) != 0)
						{
							if (func_61())
							{
							}
							else
							{
								iVar1 = func_24(sLocal_9.f_4[sLocal_9.f_93[iVar3]]);
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_93[iVar3]], func_6(9), false);
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_93[iVar3]], func_6(7), false);
								if (func_26(iVar1))
								{
									DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_93[iVar3]], func_6(5), joaat("UNLOCKED_DISABLED"));
								}
								else if (func_20(iVar1))
								{
									DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_93[iVar3]], func_6(5), joaat("UNLOCKED"));
								}
								else
								{
									DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_93[iVar3]], func_6(5), joaat("CHEAT_LOCKED"));
								}
								sLocal_9.f_93[iVar3] = sLocal_9.f_43;
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_43], func_6(6), false);
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_43], func_6(9), true);
								if (iVar0 == 6)
								{
									sLocal_9.f_48++;
									iVar4 = (50000 * sLocal_9.f_48);
									iVar4 = func_62(iVar4, 0, sLocal_9.f_49);
									func_63(iVar4);
									if (iVar4 >= sLocal_9.f_49)
									{
										DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_43], func_6(8), MISC::VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
										DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_43], func_6(5), joaat("UNLOCKED_DISABLED"));
									}
									else
									{
										DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_43], func_6(8), MISC::VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED", iVar4));
									}
								}
								else
								{
									DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_43], func_6(7), true);
									DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[sLocal_9.f_43], func_6(5), joaat("UNLOCKED_DISABLED"));
								}
								Jump @549; // curOff = 537
								Jump @549; // curOff = 540
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_16()
{
	return Global_1425247.f_53;
}

void func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = sLocal_9.f_43;
	iVar1 = func_24(sLocal_9.f_4[iVar0]);
	if (!func_53(iVar1))
	{
		return;
	}
	iVar2 = func_33(iVar1);
	sLocal_9.f_44[func_33(iVar1)] = func_64(sLocal_9.f_4[iVar0]);
	func_65(iVar0, sLocal_9.f_44[iVar2], iVar2);
}

bool func_18(int iParam0)
{
	if (func_16())
	{
		return false;
	}
	if (sLocal_9.f_47)
	{
		return false;
	}
	if (func_64(sLocal_9.f_4[iParam0]) == 0)
	{
		return false;
	}
	return func_25(sLocal_9.f_4[iParam0]) == joaat("UNLOCKED");
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 581914968:
			return 0;
		case -1135265458:
			return 1;
		case -204990980:
			return 2;
		case 191810668:
			return 3;
		case 811595622:
			return 4;
		case -1622621761:
			return 5;
		case -607335704:
			return 6;
		case 1610351013:
			return 7;
		case -1591149431:
			return 8;
		case joaat("SHARE"):
			return 9;
		case 628479678:
			return 10;
		case 51531122:
			return 11;
		case 1176666639:
			return 12;
		case -947916363:
			return 13;
		case 1129394776:
			return 14;
		case 754345461:
			return 15;
		case -307358511:
			return 16;
		case 2110824426:
			return 17;
		case -568384875:
			return 18;
		case -372443002:
			return 19;
		case -398091677:
			return 20;
		case 1398216266:
			return 21;
		case 1376520660:
			return 22;
		case -1761439609:
			return 23;
		case -1815939956:
			return 24;
		case -55979384:
			return 25;
		case 849826687:
			return 26;
		case -1241222984:
			return 27;
		case 532296387:
			return 28;
		case 230711733:
			return 29;
		case 1287277822:
			return 30;
		case 1783177390:
			return 31;
		case -2101408762:
			return 32;
		case -1738520838:
			return 33;
		case 1006082220:
			return 34;
		case 741921176:
			return 35;
		case 1956723308:
			return 36;
		default:
			break;
	}
	return -1;
}

bool func_20(int iParam0)
{
	return func_34(&(Global_40.f_12000), iParam0, 2);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 0;
		case 6:
			return 2;
		case 7:
			return 1;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 2;
		case 12:
			return 2;
		case 13:
			return 2;
		case 14:
			return 0;
		case 15:
			return 2;
		case 16:
			return 2;
		case 17:
			return 2;
		case 18:
			return 2;
		case 19:
			return 2;
		case 20:
			return 1;
		case 21:
			return 2;
		case 22:
			return 0;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 0;
		case 28:
			return 1;
		case 29:
			return 2;
		case 30:
			return 2;
		case 31:
			return 2;
		case 32:
			return 1;
		case 33:
			return 0;
		case 34:
			return 1;
		case 35:
			return 2;
		case 36:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_22(int iParam0)
{
	int iVar0;

	if (func_20(iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (func_66(iParam0) - 1))
	{
		if (func_68(func_67(iParam0, iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_23(int iParam0)
{
	int iVar0;

	iVar0 = sLocal_9.f_50[iParam0];
	if (0 == sLocal_9.f_4[iVar0])
	{
		return;
	}
	func_69(iParam0);
	if (func_53(iParam0))
	{
		if (func_25(sLocal_9.f_4[iVar0]) != joaat("CHEAT_LOCKED"))
		{
			if (!func_70(iParam0, sLocal_9.f_44[func_33(iParam0)]))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(sLocal_9.f_4[iVar0], func_6(6), true);
				return;
			}
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[iVar0], func_6(5), func_39(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(sLocal_9.f_4[iVar0], func_6(6), true);
}

int func_24(int iParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_6(17));
}

int func_25(int iParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, func_6(5));
}

bool func_26(int iParam0)
{
	return (((func_71() || func_72()) || func_34(&(Global_1425247.f_3), iParam0, 2)) || func_73(iParam0));
}

int func_27(int iParam0)
{
	if (func_53(iParam0))
	{
		return 2;
	}
	if (func_74(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_28(int iParam0)
{
	int iVar0;

	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_20(iVar0))
	{
		return;
	}
	if (!func_75(iParam0))
	{
		if (!func_52(iVar0))
		{
			if (func_40(iVar0))
			{
				func_76(iVar0);
			}
		}
		return;
	}
	func_77(iVar0);
	switch (iVar0)
	{
		case 5:
			func_78();
			break;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_20(iVar0))
	{
		return;
	}
	iVar1 = func_64(iParam0);
	if (func_40(iVar0))
	{
		if (iVar1 <= 0)
		{
			func_79(iVar0);
		}
	}
	else if (iVar1 == 1)
	{
		func_77(iVar0);
	}
}

void func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = func_24(iParam0);
	if (!func_53(iVar3))
	{
		return;
	}
	iVar0 = func_33(iVar3);
	iVar1 = func_48(iVar0);
	iVar2 = func_80(iVar0);
	if (iVar1 == iVar2 && iVar2 != -1)
	{
		return;
	}
	iVar4 = func_43(iVar0);
	if (iVar1 == iVar4 && iVar4 != -1)
	{
		return;
	}
	if (iVar1 == -1)
	{
		if (iVar2 == -1)
		{
			if (iVar4 != -1)
			{
				func_76(iVar4);
			}
		}
		else
		{
			func_79(iVar2);
		}
	}
	else if (func_20(iVar1) && !func_26(iVar1))
	{
		if (iVar4 != -1)
		{
			func_76(iVar4);
		}
		func_77(iVar1);
	}
}

int func_31(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_32()
{
	return Global_1425247.f_58;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 1;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 30:
			return 0;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		default:
			break;
	}
	return -1;
}

bool func_34(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

char* func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEAT_INFINITE_AMMO";
		case 1:
			return "CHEAT_BASIC_WEAPONS";
		case 2:
			return "CHEAT_HEAVY_WEAPONS";
		case 3:
			return "CHEAT_STEALTH_WEAPONS";
		case 4:
			return "CHEAT_GUNSLINGER";
		case 5:
			return "CHEAT_REMOVE_FOG_OF_WAR";
		case 6:
			return "CHEAT_ADD_MONEY";
		case 7:
			return "CHEAT_UNLOCK_ALL_PLAYER_OUTFITS";
		case 8:
			return "CHEAT_UNLOCK_ALL_RECIPES";
		case 9:
			return "CHEAT_INCREASE_CAMP_UPGRADES_TO_MAX";
		case 10:
			return "CHEAT_INCREASE_HONOR_TO_MAX";
		case 11:
			return "CHEAT_DECREASE_HONOR_TO_MIN";
		case 12:
			return "CHEAT_RESET_HONOR_TO_NEUTRAL";
		case 13:
			return "CHEAT_INFINITE_DEADEYE";
		case 14:
			return "CHEAT_INFINITE_STAMINA";
		case 15:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_1";
		case 16:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_2";
		case 17:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_3";
		case 18:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_4";
		case 19:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_5";
		case 20:
			return "CHEAT_SET_RPG_TANKS_TO_FULL";
		case 21:
			return "CHEAT_SET_RPG_TANK_STAT_LEVEL_TO_FULL";
		case 22:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_AND_OVERPOWERED";
		case 23:
			return "CHEAT_INCREASE_HORSE_BOND_TO_MAX";
		case 24:
			return "CHEAT_SET_HORSE_TO_SPAWN_NEAR_PLAYER_ON_WHISTLE";
		case 25:
			return "CHEAT_BECOME_DRUNK";
		case 26:
			return "CHEAT_SPAWN_RACE_HORSE";
		case 27:
			return "CHEAT_SPAWN_WAR_HORSE";
		case 28:
			return "CHEAT_SPAWN_SUPERIOR_HORSE";
		case 29:
			return "CHEAT_SPAWN_RANDOM_HORSE";
		case 30:
			return "CHEAT_SPAWN_STAGECOACH";
		case 31:
			return "CHEAT_SPAWN_WAGON";
		case 32:
			return "CHEAT_SPAWN_BUGGY";
		case 33:
			return "CHEAT_SPAWN_CIRCUS_WAGON";
		case 34:
			return "CHEAT_INCREASE_WANTED_LEVEL_BY_1";
		case 35:
			return "CHEAT_DECREASE_WANTED_LEVEL_BY_1";
		case 36:
			return "CHEAT_CLEAR_ALL_BOUNTIES_AND_LOCKDOWN_AREAS";
		default:
			break;
	}
	return "UNKNOWN_CHEAT";
}

char* func_36(int iParam0)
{
	switch (func_33(iParam0))
	{
		case 0:
			return func_35(iParam0);
		case 1:
			return "CHEAT_DEADEYE_LEVEL";
		default:
			break;
	}
	return "";
}

char* func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEAT_INFINITE_AMMO_DESC";
		case 1:
			return "CHEAT_BASIC_WEAPONS_DESC";
		case 2:
			return "CHEAT_HEAVY_WEAPONS_DESC";
		case 3:
			return "CHEAT_STEALTH_WEAPONS_DESC";
		case 4:
			return "CHEAT_GUNSLINGER_DESC";
		case 5:
			return "CHEAT_REMOVE_FOG_OF_WAR_DESC";
		case 6:
			return "CHEAT_ADD_MONEY_DESC";
		case 7:
			return "CHEAT_UNLOCK_ALL_PLAYER_OUTFITS_DESC";
		case 8:
			return "CHEAT_UNLOCK_ALL_RECIPES_DESC";
		case 9:
			return "CHEAT_INCREASE_CAMP_UPGRADES_TO_MAX_DESC";
		case 10:
			return "CHEAT_INCREASE_HONOR_TO_MAX_DESC";
		case 11:
			return "CHEAT_DECREASE_HONOR_TO_MIN_DESC";
		case 12:
			return "CHEAT_RESET_HONOR_TO_NEUTRAL_DESC";
		case 13:
			return "CHEAT_INFINITE_DEADEYE_DESC";
		case 14:
			return "CHEAT_INFINITE_STAMINA_DESC";
		case 15:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_1_DESC";
		case 16:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_2_DESC";
		case 17:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_3_DESC";
		case 18:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_4_DESC";
		case 19:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_5_DESC";
		case 20:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_DESC";
		case 21:
			return "CHEAT_SET_RPG_TANK_STAT_LEVEL_TO_FULL_DESC";
		case 22:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_AND_OVERPOWERED_DESC";
		case 23:
			return "CHEAT_INCREASE_HORSE_BOND_TO_MAX_DESC";
		case 24:
			return "CHEAT_SET_HORSE_TO_SPAWN_NEAR_PLAYER_ON_WHISTLE_DESC";
		case 25:
			return "CHEAT_BECOME_DRUNK_DESC";
		case 26:
			return "CHEAT_SPAWN_RACE_HORSE_DESC";
		case 27:
			return "CHEAT_SPAWN_WAR_HORSE_DESC";
		case 28:
			return "CHEAT_SPAWN_SUPERIOR_HORSE_DESC";
		case 29:
			return "CHEAT_SPAWN_RANDOM_HORSE_DESC";
		case 30:
			return "CHEAT_SPAWN_STAGECOACH_DESC";
		case 31:
			return "CHEAT_SPAWN_WAGON_DESC";
		case 32:
			return "CHEAT_SPAWN_BUGGY_DESC";
		case 33:
			return "CHEAT_SPAWN_CIRCUS_WAGON_DESC";
		case 34:
			return "CHEAT_INCREASE_WANTED_LEVEL_BY_1_DESC";
		case 35:
			return "CHEAT_DECREASE_WANTED_LEVEL_BY_1_DESC";
		case 36:
			return "CHEAT_CLEAR_ALL_BOUNTIES_AND_LOCKDOWN_AREAS_DESC";
		default:
			break;
	}
	return "UNKNOWN_CHEAT";
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 268532472;
		case 1:
			return 268532472;
		case 2:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_53(iParam0))
	{
		iVar0 = func_33(iParam0);
		if (func_47(iVar0))
		{
			if (func_26(iParam0))
			{
				return joaat("UNLOCKED_DISABLED");
			}
			else if (func_20(iParam0))
			{
				return joaat("UNLOCKED");
			}
			else
			{
				return 1726108579;
			}
		}
		else
		{
			return joaat("CHEAT_LOCKED");
		}
	}
	if (func_20(iParam0))
	{
		if (func_26(iParam0))
		{
			return joaat("UNLOCKED_DISABLED");
		}
		else if (iParam0 == 6)
		{
			if (sLocal_9.f_49 <= 0 || func_32() >= sLocal_9.f_49)
			{
				return joaat("UNLOCKED_DISABLED");
			}
			else
			{
				return joaat("UNLOCKED");
			}
		}
		else if (func_60(iParam0) != 0)
		{
			if (func_61())
			{
				return joaat("UNLOCKED_DISABLED");
			}
			else
			{
				return joaat("UNLOCKED");
			}
		}
		else if (func_40(iParam0))
		{
			iVar1 = func_27(iParam0);
			if (iVar1 == 0)
			{
				return joaat("UNLOCKED_DISABLED");
			}
			else
			{
				return joaat("UNLOCKED");
			}
		}
		else
		{
			return joaat("UNLOCKED");
		}
	}
	return joaat("CHEAT_LOCKED");
}

bool func_40(int iParam0)
{
	return func_34(&Global_1425247, iParam0, 2);
}

int func_41(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_80(iParam0);
	if (iVar1 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= (func_81(iParam0) - 1))
	{
		if (func_82(iParam0, iVar0) == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_81(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = func_82(iParam0, iVar0);
		if (iVar2 == -1)
		{
		}
		else if (func_83(iVar2) == 4)
		{
			return iVar2;
		}
		iVar0++;
	}
	return -1;
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_81(iParam0);
	if (iParam1 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iParam1 == func_82(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 36)
	{
		iVar2 = iVar0;
		if (func_33(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_46(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHEAT_OFF");
			break;
		case 1:
			iVar0 = joaat("CHEAT_LEVEL_1");
			break;
		case 2:
			iVar0 = joaat("CHEAT_LEVEL_2");
			break;
		case 3:
			iVar0 = joaat("CHEAT_LEVEL_3");
			break;
		case 4:
			iVar0 = joaat("CHEAT_LEVEL_4");
			break;
		case 5:
			iVar0 = joaat("CHEAT_LEVEL_5");
			break;
	}
	return iVar0;
}

bool func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_81(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = func_82(iParam0, iVar0);
		if (iVar2 == -1)
		{
		}
		else if (func_20(iVar2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_48(int iParam0)
{
	if (sLocal_9.f_44[iParam0] == 0)
	{
		return -1;
	}
	return func_82(iParam0, (sLocal_9.f_44[iParam0] - 1));
}

bool func_49(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2093359759;
		case 1:
			return -949812163;
		case 2:
			return 401446359;
		default:
			break;
	}
	return 0;
}

bool func_51(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_24(iParam0);
	iVar1 = func_27(iVar0);
	switch (iVar1)
	{
		case 0:
			return func_75(iParam0);
		case 1:
			return func_64(iParam0) != 0;
		case 2:
			return func_64(iParam0) != 0;
		default:
			break;
	}
	return false;
}

bool func_52(int iParam0)
{
	switch (iParam0)
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
			return true;
		case 6:
			return false;
		case 7:
			return true;
		case 8:
			return true;
		case 9:
			return true;
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
			return true;
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
		default:
			break;
	}
	return false;
}

bool func_53(int iParam0)
{
	int iVar0;

	iVar0 = func_33(iParam0);
	return (iVar0 != -1 && iVar0 != 0);
}

char* func_54(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_DESC";
		default:
			break;
	}
	return "";
}

void func_55(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = sLocal_9.f_4[sLocal_9.f_88[iParam0]];
	iVar0 = func_48(iParam0);
	if (iVar0 == -1)
	{
		if (func_47(iParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar1, func_6(1), MISC::GET_HASH_KEY(func_54(iParam0)));
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar1, func_6(18), func_46(0));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar1, func_6(1), MISC::GET_HASH_KEY("CHEAT_UNLOCK_DESCRIPTION"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar1, func_6(1), MISC::GET_HASH_KEY(func_8(sLocal_9.f_88[iParam0])));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar1, func_6(18), func_46(sLocal_9.f_44[iParam0]));
	}
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 36)
	{
		iVar1 = iVar0;
		iVar2 = func_59(iVar1);
		if (iVar2 != iParam0)
		{
		}
		else if (!func_40(iVar1))
		{
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

var func_57(int iParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_6(1));
}

bool func_58(int iParam0)
{
	int iVar0;

	iVar0 = func_59(iParam0);
	return (iVar0 != -1 && iVar0 != 0);
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 2;
		case 11:
			return 2;
		case 12:
			return 2;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 1;
		case 27:
			return 1;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 1;
		case 31:
			return 1;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_60(int iParam0)
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
		case 7:
		case 8:
		case 9:
			return 0;
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
		case 23:
		case 24:
		case 25:
			return 0;
		case 26:
		case 27:
		case 28:
		case 29:
			return 2;
		case 30:
		case 31:
		case 32:
		case 33:
			return 1;
		case 34:
		case 35:
		case 36:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_61()
{
	return Global_1425247.f_76.f_1 != -1;
}

int func_62(int iParam0, int iParam1, int iParam2)
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

void func_63(int iParam0)
{
	Global_1425247.f_58 = iParam0;
}

int func_64(int iParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_6(9));
}

void func_65(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_25(sLocal_9.f_4[iParam0]);
	if (iParam1 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[iParam0], func_6(5), joaat("UNLOCKED"));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[iParam0], func_6(18), func_46(iParam1));
		return;
	}
	iVar1 = func_82(iParam2, (iParam1 - 1));
	if (iVar1 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[iParam0], func_6(5), joaat("CHEAT_LOCKED"));
		return;
	}
	if (func_20(iVar1))
	{
		if (iVar0 != joaat("UNLOCKED"))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[iParam0], func_6(5), joaat("UNLOCKED"));
		}
	}
	else if (iVar0 != 1726108579)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[iParam0], func_6(5), 1726108579);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(sLocal_9.f_4[iParam0], func_6(18), func_46(iParam1));
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 2:
			return 3;
		case 5:
			return 3;
		case 10:
			return 3;
		case 14:
			return 3;
		case 22:
			return 3;
		case 27:
			return 3;
		case 33:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_84(iParam1);
		case 2:
			return func_85(iParam1);
		case 5:
			return func_86(iParam1);
		case 10:
			return func_87(iParam1);
		case 14:
			return func_88(iParam1);
		case 22:
			return func_89(iParam1);
		case 27:
			return func_90(iParam1);
		case 33:
			return func_91(iParam1);
		default:
			break;
	}
	return 0;
}

bool func_68(int iParam0)
{
	return func_92(iParam0, 1, 0);
}

void func_69(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (func_49(&(Global_40.f_12000), iVar0, 2))
	{
	}
	func_93(iParam0, 2);
}

bool func_70(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_33(iParam0);
	if (iParam1 == 0)
	{
		return false;
	}
	return func_82(iVar0, (iParam1 - 1)) == iParam0;
}

var func_71()
{
	return Global_1425247.f_56;
}

var func_72()
{
	return Global_1425247.f_57;
}

bool func_73(int iParam0)
{
	return func_34(&(Global_1425247.f_9), iParam0, 2);
}

bool func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
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
			return true;
		case 14:
			return true;
		case 15:
			return true;
		case 16:
			return true;
		case 17:
			return true;
		case 18:
			return true;
		case 19:
			return true;
		case 20:
			return false;
		case 21:
			return false;
		case 22:
			return false;
		case 23:
			return false;
		case 24:
			return true;
		case 25:
			return true;
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
		default:
			break;
	}
	return true;
}

bool func_75(int iParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iParam0, func_6(9));
}

void func_76(int iParam0)
{
	func_94(iParam0);
	if (func_20(iParam0))
	{
		func_93(iParam0, 2);
	}
	else
	{
		func_93(iParam0, 0);
	}
}

void func_77(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (func_26(iParam0))
	{
		func_95(12);
		return;
	}
	if (!func_20(iParam0))
	{
		return;
	}
	iVar1 = func_96(iParam0);
	if (iVar1 != 0)
	{
		switch (iVar1)
		{
			case 0:
				break;
			case 1:
				func_95(5);
				break;
			case 2:
				func_95(6);
				break;
			case 4:
				if (func_97(59))
				{
					func_95(9);
				}
				else
				{
					func_95(8);
				}
				break;
			case 3:
				func_95(7);
				break;
			case 5:
				func_95(11);
				break;
			default:
				break;
		}
		return;
	}
	if (func_60(iParam0) != 0)
	{
		if (func_98() != iParam0)
		{
			func_99(iParam0);
		}
	}
	else if (func_83(iParam0) == 4)
	{
		return;
	}
	if (func_49(&Global_1425247, iVar0, 2))
	{
	}
	else
	{
		return;
	}
	func_93(iParam0, 4);
}

void func_78()
{
	switch (func_83(5))
	{
		case 4:
			if (func_26(5))
			{
			}
			else
			{
				func_100(5);
				func_101(1);
				func_93(5, 3);
			}
			default:
				break;
	}
}

void func_79(int iParam0)
{
	if (func_26(iParam0))
	{
		func_95(13);
		return;
	}
	func_94(iParam0);
	func_93(iParam0, 5);
}

int func_80(int iParam0)
{
	return Global_1425247.f_50[iParam0];
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 5;
		default:
			break;
	}
	return -1;
}

int func_82(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			return func_102(iParam1);
		default:
			break;
	}
	return -1;
}

int func_83(int iParam0)
{
	return Global_1425247.f_12[iParam0];
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_01");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_01_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_01_SD");
		default:
			break;
	}
	return 0;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_04");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_04_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_04_SD");
		default:
			break;
	}
	return 0;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_05");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_05_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_05_SD");
		default:
			break;
	}
	return 0;
}

int func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_06");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_06_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_06_SD");
		default:
			break;
	}
	return 0;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_07");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_07_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_07_SD");
		default:
			break;
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_10");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_10_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_10_SD");
		default:
			break;
	}
	return 0;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_11");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_11_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_11_SD");
		default:
			break;
	}
	return 0;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_12");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_12_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_12_SD");
		default:
			break;
	}
	return 0;
}

bool func_92(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_103(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_104(iParam0);
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
		if (!func_105(iParam0, 1))
		{
			return false;
		}
	}
	return func_106(iParam0, 0, bParam2) >= iParam1;
}

void func_93(int iParam0, int iParam1)
{
	Global_1425247.f_12[iParam0] = iParam1;
}

void func_94(int iParam0)
{
	if (func_107(&Global_1425247, iParam0, 2))
	{
	}
}

void func_95(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, false);
	}
	func_109(func_108(iParam0), 10000, 0, 0, 0, 1);
}

int func_96(int iParam0)
{
	if (func_110())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			break;
		case 9:
			if (func_111())
			{
				return 4;
			}
			if (Global_43891)
			{
				return 3;
			}
			break;
		case 10:
		case 11:
		case 12:
			if (func_112(0))
			{
				return 2;
			}
			break;
		case 13:
		case 14:
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (func_113(0, 0, 1))
			{
				return 1;
			}
			break;
		case 20:
		case 21:
		case 22:
			break;
		case 23:
		case 24:
			if (Global_43891)
			{
				return 3;
			}
			break;
		case 25:
			if (func_113(0, 0, 1))
			{
				return 1;
			}
			if (func_110())
			{
				return 1;
			}
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
			if (func_113(0, 0, 1))
			{
				return 1;
			}
			if (Global_1394141.f_1328)
			{
				return 1;
			}
			if (Global_43891)
			{
				return 3;
			}
			if (func_111())
			{
				return 4;
			}
			if (func_112(0))
			{
				return 2;
			}
			if (Global_1430231.f_4)
			{
				return 1;
			}
			break;
		case 34:
			if (func_97(59))
			{
				if (func_114() == 22)
				{
					return 5;
				}
			}
		case 35:
		case 36:
			if (func_113(0, 0, 1))
			{
				return 1;
			}
			if (Global_1394141.f_1328)
			{
				return 1;
			}
			if (func_112(0))
			{
				return 2;
			}
			if (Global_1430231.f_4)
			{
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_97(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_115(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_98()
{
	return Global_1425247.f_76.f_1;
}

void func_99(int iParam0)
{
	Global_1425247.f_76.f_2 = iParam0;
}

void func_100(int iParam0)
{
	func_116(iParam0);
}

void func_101(bool bParam0)
{
	MAP::SET_MINIMAP_HIDE_FOW(bParam0);
	if (bParam0)
	{
		MAP::_REVEAL_MINIMAP_FOW(0);
	}
	else
	{
		MAP::RESET_MINIMAP_FOW(0);
	}
}

int func_102(int iParam0)
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
	return -1;
}

bool func_103(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_104(int iParam0)
{
	Vector3 vVar0;

	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_103(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_117(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_118("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_119(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_120(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_121(iVar1);
				return true;
			}
			iVar3++;
		}
		func_121(iVar1);
	}
	return false;
}

int func_106(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_117(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_122(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_123(bParam2), iParam0, false);
	return iVar2;
}

bool func_107(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

char* func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEAT_FAIL_TO_FIND_CREATE_LOCATION";
		case 1:
			return "CHEAT_FAIL_TO_CREATE";
		case 3:
			return "CHEAT_ADDED_OUTFITS";
		case 2:
			return "CHEAT_FAILED_TO_ADD_OUTFITS";
		case 4:
			return "CHEAT_UNLOCKED_RECIPES";
		case 5:
			return "CHEAT_UNABLE_TO_ACTIVATE";
		case 6:
			return "CHEAT_UNABLE_TO_ACTIVATE_SHOP";
		case 8:
			return "CHEAT_UNABLE_TO_ACTIVATE_CAMP";
		case 9:
			return "CHEAT_UNABLE_TO_ACTIVATE_HOME";
		case 7:
			return "CHEAT_UNABLE_TO_ACTIVATE_GUAMA";
		case 10:
			return "CHEAT_WEAPON_ACTIVATE";
		case 11:
			return "CHEAT_INVALID_LOCATION";
		case 12:
			return "CHEAT_UNABLE_TO_ACTIVATE_DISABLED";
		case 13:
			return "CHEAT_UNABLE_TO_DEACTIVATE_DISABLED";
		case 14:
			return "CHEAT_DISABLED_WHILE_ACTIVE";
		default:
			break;
	}
	return "INVALID_CHEAT_HELP";
}

int func_109(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_110()
{
	return Global_1955834;
}

bool func_111()
{
	return func_124((1 << 15));
}

bool func_112(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_17370;
	}
	return (Global_1914319.f_17370 || Global_1914319.f_18996.f_1);
}

bool func_113(int iParam0, bool bParam1, bool bParam2)
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
		if (func_125())
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
		iVar0 = func_126(Global_1898164.f_1[0 /*5*/]);
		if (func_127(iVar0) && func_128(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_129(Global_1898164.f_1[0 /*5*/]))
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

int func_114()
{
	return Global_1894899.f_2;
}

int func_115(int iParam0, bool bParam1)
{
	switch (func_130(iParam0))
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

void func_116(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (func_49(&(Global_1425247.f_6), iVar0, 2))
	{
	}
	func_14();
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ACHIEVEMENTS"), false);
}

int func_117(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_131(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_132(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_118(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_123(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_119(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_120(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_121(int iParam0)
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

int func_122(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_133(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_135(&sVar0, func_134(0));
	}
	if (!func_136(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_121(iVar18);
	return iVar19;
}

int func_123(bool bParam0)
{
	if (func_137() == -1)
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

bool func_124(int iParam0)
{
	switch (func_137())
	{
		case -1:
			return (Global_1357549.f_1494 & iParam0) != 0;
	}
	return false;
}

bool func_125()
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

int func_126(int iParam0)
{
	if (!func_129(iParam0))
	{
		return -1;
	}
	return func_139(func_138(iParam0));
}

bool func_127(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_128(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_129(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_130(int iParam0)
{
	if (!func_129(iParam0))
	{
		return -1;
	}
	return func_140(iParam0);
}

bool func_131(int iParam0, int iParam1)
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

void func_132(int iParam0, var uParam1, var uParam2)
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

struct<18> /*144*/ func_133(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> /*32*/ func_134(bool bParam0)
{
	int iVar0;

	iVar0 = func_123(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_142(joaat("CARRIED_WEAPONS"), func_141(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_142(joaat("CARRIED_WEAPONS"), func_141(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_142(joaat("CARRIED_WEAPONS"), func_141(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_135(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_136(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_123(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_137()
{
	return Global_1572887.f_12;
}

int func_138(int iParam0)
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

int func_139(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_140(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_143(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

struct<4> /*32*/ func_141(bool bParam0)
{
	return func_142(joaat("CHARACTER"), func_144(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_142(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_103(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_123(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

int func_143(int iParam0)
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

struct<4> /*32*/ func_144()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

