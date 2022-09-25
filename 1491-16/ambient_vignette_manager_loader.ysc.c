#pragma region Local_Variables
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
#pragma endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0)
	{
		iVar2 = iVar1;
		if (func_1(Global_1415419.f_19[iVar2 /*12*/].f_11, 8))
		{
			func_2(iVar2);
		}
		iVar1++;
		if (iVar1 > 247)
		{
			bVar0 = true;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_2(int iParam0)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	int iVar6;
	var uVar7;
	Vector3 vVar8;
	Vector3 vVar11;
	var uVar14;

	sVar0.f_0 = Global_1415419;
	sVar0.f_1 = Global_1415419.f_19[iParam0 /*12*/].f_10;
	sVar0.f_2 = -641542860;
	sVar0.f_3 = func_3(Global_1415419.f_9756);
	Global_1415419.f_19[iParam0 /*12*/].f_8 = -1;
	Global_1415419.f_19[iParam0 /*12*/].f_9 = -1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		uVar14 = sVar0.f_1;
		iVar5 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(sVar0.f_0, sVar0.f_1);
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			if (Global_1415419.f_9717 >= 960)
			{
			}
			else
			{
				sVar0.f_2 = 1696282352;
				sVar0.f_3 = iVar6;
				if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
				{
					sVar0.f_2 = -1119853910;
					if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar8, &sVar0))
					{
						if (Global_1415419.f_19[iParam0 /*12*/].f_8 == -1)
						{
							Global_1415419.f_19[iParam0 /*12*/].f_8 = Global_1415419.f_9717;
						}
						Global_1415419.f_2996[Global_1415419.f_9717 /*7*/] = { vVar8 /*3*/ };
						Global_1415419.f_19[iParam0 /*12*/].f_9 = Global_1415419.f_9717;
					}
				else
				{
					}
					else
					{
						sVar0.f_2 = -1983241935;
						if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar11, &sVar0))
						{
							Global_1415419.f_2996[Global_1415419.f_9717 /*7*/].f_3 = { vVar11 /*3*/ };
						}
						sVar0.f_2 = -143463129;
						if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar7, &sVar0))
						{
							Global_1415419.f_2996[Global_1415419.f_9717 /*7*/].f_6 = uVar7;
						}
						else
						{
							Global_1415419.f_2996[Global_1415419.f_9717 /*7*/].f_6 = 0;
						}
						Global_1415419.f_9717++;
						sVar0.f_1 = uVar14;
					}
					iVar6++;
					func_4(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 8);
					func_4(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 1);
					func_4(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 2);
				}
			}
		}
	}
}

int func_3(int iParam0)
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

void func_4(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

