#pragma region Local_Variables
	struct<45> /*360*/ sLocal_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#pragma endregion

void __EntryFunction__()
{
	iLocal_45 = sScriptParam_0.f_0;
	iLocal_46 = sScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (func_2())
	{
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	SCRIPTS::_0xE7282390542F570D(iLocal_45);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !TASK::DOES_SCENARIO_POINT_EXIST(iLocal_46)) || !PED::IS_PED_USING_THIS_SCENARIO(PLAYER::PLAYER_PED_ID(), iLocal_46))
	{
		func_3();
		return 0;
	}
	return func_4();
}

void func_3()
{
	if (sLocal_0.f_44)
	{
		if (CAM::_IS_CAM_DATA_DICT_LOADED(&(sLocal_0.f_1)))
		{
			CAM::_UNLOAD_CAMERA_DATA_DICT(&(sLocal_0.f_1));
		}
		if (CAM::_IS_CAMERA_AVAILABLE(&(sLocal_0.f_1)))
		{
			CAM::_CAM_DESTROY(&(sLocal_0.f_1));
		}
		sLocal_0.f_44 = 0;
	}
	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(sLocal_0.f_34))
	{
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(sLocal_0.f_34);
	}
}

int func_4()
{
	switch (sLocal_0.f_0)
	{
		case 0:
			sLocal_0.f_32 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
			if (!TASK::DOES_SCENARIO_POINT_EXIST(sLocal_0.f_32))
			{
				return 0;
			}
			sLocal_0.f_33 = TASK::_GET_SCENARIO_POINT_ENTITY(sLocal_0.f_32);
			sLocal_0.f_34 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(82155782);
			sLocal_0.f_35 = TASK::_GET_SCENARIO_POINT_TYPE(sLocal_0.f_32);
			sLocal_0.f_0 = 1;
			break;
		case 1:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && DATAFILE::PARSEDDATA_IS_FILE_LOADED(sLocal_0.f_34))
			{
				func_5();
				if (!func_6())
				{
					func_3();
					sLocal_0.f_0 = 5;
					return 0;
				}
				DATAFILE::_PARSEDDATA_UNLOAD_FILE(sLocal_0.f_34);
				func_7("player_scenario_orbit_cam", &(sLocal_0.f_36));
				sLocal_0.f_0 = 2;
			}
			break;
		case 2:
			if (func_8())
			{
				sLocal_0.f_0 = 3;
			}
			break;
		case 3:
			if (sLocal_0.f_33 != 0)
			{
				CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(sLocal_0.f_33);
			}
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				sLocal_0.f_0 = 4;
			}
			break;
		case 4:
			func_3();
			sLocal_0.f_0 = 5;
			break;
		case 5:
			return 0;
	}
	return 1;
}

void func_5()
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(sLocal_0.f_34, -1296226829, "CameraData/Scenarios/Camera");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(sLocal_0.f_34, 279908099, "CameraData/Scenarios/Camera(%i):scenario");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(sLocal_0.f_34, -302997874, "CameraData/Scenarios/Camera(%i):request");
}

bool func_6()
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	int iVar6;
	int iVar7;

	sVar0.f_0 = sLocal_0.f_34;
	sVar0.f_2 = -1296226829;
	iVar5 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&sVar0);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		sVar0.f_3 = iVar6;
		sVar0.f_2 = 279908099;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar7, &sVar0);
		if (iVar7 == sLocal_0.f_35)
		{
			sVar0.f_2 = -302997874;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(sLocal_0.f_36), &sVar0);
			return true;
		}
		iVar6++;
	}
	return false;
}

void func_7(char* sParam0, char* sParam1)
{
	strcpy_s(&(sLocal_0.f_1), 64, sParam0);
	strcpy_s(&(sLocal_0.f_1.f_8), 64, sParam1);
	CAM::_LOAD_CAMERA_DATA_DICT(&(sLocal_0.f_1));
	sLocal_0.f_44 = 1;
}

bool func_8()
{
	if (CAM::_IS_CAM_DATA_DICT_LOADED(&(sLocal_0.f_1)) && !CAM::_IS_CAMERA_AVAILABLE(&(sLocal_0.f_1)))
	{
		CAM::_CAM_CREATE(&(sLocal_0.f_1));
		sLocal_0.f_1.f_16 = Global_35;
		sLocal_0.f_1.f_21 = 1;
		sLocal_0.f_1.f_22 = { 0.0f, 0.0f, TASK::_GET_SCENARIO_POINT_HEADING(sLocal_0.f_32, true) /*3*/ };
		CAM::_0xAC77757C05DE9E5A(&(sLocal_0.f_1));
		return true;
	}
	return false;
}

