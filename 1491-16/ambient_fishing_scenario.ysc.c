#pragma region Local_Variables
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	struct<18> /*144*/ sLocal_5 = { 0, -1474589744, 391506844, -294392875, 0, 0, 0, 0, 0, 0, 1050253722, 1036831949, 1090519040, 1092616192, 1065353216, 1065353216, 1073741824, 0 } ;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	bool bLocal_25 = false;
	int iLocal_26 = 0;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
#pragma endregion

void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3()
{
	if (iLocal_1 != 0)
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return true;
		}
	}
	return iLocal_0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case joaat("EVENT_SCENARIO_ADD_PED"):
				func_9(iVar0);
				break;
			case joaat("EVENT_SCENARIO_REMOVE_PED"):
				func_10(iVar0);
				break;
			case joaat("EVENT_SCENARIO_DESTROY_PROP"):
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	switch (iLocal_26)
	{
		case 0:
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
			{
				iLocal_23 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_23) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_23, 1))
				{
					iLocal_24 = PED::_GET_PED_REGISTER_PROP(iLocal_23, "p_fishingPole02x_PH_R_HAND", false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
					{
						sLocal_5.f_4 = "p_fishingPole02x_Bone_tip";
						iLocal_26 = 1;
					}
				}
			}
			break;
		case 1:
			func_12(iLocal_23, iLocal_24);
			if (!bLocal_25)
			{
				if (sLocal_5.f_0 == 1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_23, joaat("CAST")))
					{
						func_13();
						bLocal_25 = true;
					}
					else if (TASK::_PED_IS_IN_SCENARIO_BASE(iLocal_23))
					{
						func_13();
						bLocal_25 = true;
					}
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_23) || !TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_23, 1))
			{
				iLocal_0 = 0;
			}
			break;
	}
}

void func_7()
{
	func_14();
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_15(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_16(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_17(&iVar0);
	}
}

void func_12(int iParam0, int iParam1)
{
	switch (sLocal_5.f_0)
	{
		case 0:
			if (((func_18() != 0 && ENTITY::DOES_ENTITY_EXIST(iParam1)) && func_19()) && func_20(iParam1))
			{
				func_21(1);
			}
			break;
		case 1:
			break;
		case 2:
			if (func_22(iParam0))
			{
				func_21(3);
			}
			break;
		case 3:
			break;
		case 4:
			if (func_23())
			{
				func_21(1);
			}
			break;
		case 5:
			func_14();
			break;
	}
	if (((sLocal_5.f_0 == 1 || sLocal_5.f_0 == 2) || sLocal_5.f_0 == 3) || sLocal_5.f_0 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_5.f_5))
		{
			PHYSICS::ACTIVATE_PHYSICS(sLocal_5.f_5);
		}
		if (ENTITY::DOES_ENTITY_EXIST(sLocal_5.f_6))
		{
			PHYSICS::ACTIVATE_PHYSICS(sLocal_5.f_6);
		}
	}
}

void func_13()
{
	if (sLocal_5.f_0 == 1)
	{
		func_21(2);
	}
}

void func_14()
{
	if (sLocal_5.f_0 == 0)
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(sLocal_5.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(sLocal_5.f_2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(sLocal_5.f_3);
	if (PHYSICS::DOES_ROPE_EXIST(sLocal_5.f_8))
	{
		PHYSICS::DELETE_ROPE(&(sLocal_5.f_8));
	}
	if (PHYSICS::DOES_ROPE_EXIST(sLocal_5.f_9))
	{
		PHYSICS::DELETE_ROPE(&(sLocal_5.f_9));
	}
	func_24(&(sLocal_5.f_5));
	func_24(&(sLocal_5.f_6));
	func_24(&(sLocal_5.f_7));
	func_21(0);
}

void func_15(int iParam0)
{
}

void func_16(int iParam0)
{
}

void func_17(int iParam0)
{
}

int func_18()
{
	return Global_1572887.f_12;
}

bool func_19()
{
	STREAMING::REQUEST_MODEL(sLocal_5.f_1, false);
	STREAMING::REQUEST_MODEL(sLocal_5.f_2, false);
	STREAMING::REQUEST_MODEL(sLocal_5.f_3, false);
	if ((STREAMING::HAS_MODEL_LOADED(sLocal_5.f_1) && STREAMING::HAS_MODEL_LOADED(sLocal_5.f_2)) && STREAMING::HAS_MODEL_LOADED(sLocal_5.f_3))
	{
		return true;
	}
	return false;
}

bool func_20(int iParam0)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_5.f_4))
	{
		sLocal_5.f_4 = "line_attach";
	}
	iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, sLocal_5.f_4);
	vVar1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) /*3*/ };
	if (!ENTITY::DOES_ENTITY_EXIST(sLocal_5.f_5))
	{
		vVar4 = { vVar1 /*3*/ };
		vVar4.f_2 = (vVar4.z - sLocal_5.f_10);
		sLocal_5.f_5 = OBJECT::CREATE_OBJECT(sLocal_5.f_1, vVar4, false, true, false, false, true);
		PHYSICS::SET_DAMPING(sLocal_5.f_5, 0, sLocal_5.f_15);
		ENTITY::_0x978AA2323ED32209(sLocal_5.f_5, 0.0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(sLocal_5.f_5, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sLocal_5.f_6))
	{
		vVar4 = { vVar1 /*3*/ };
		vVar4.f_2 = (vVar4.z - (sLocal_5.f_10 + sLocal_5.f_11));
		sLocal_5.f_6 = OBJECT::CREATE_OBJECT(sLocal_5.f_2, vVar4, false, true, false, false, true);
		PHYSICS::SET_DAMPING(sLocal_5.f_6, 0, sLocal_5.f_15);
		ENTITY::_0x978AA2323ED32209(sLocal_5.f_6, 0.0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(sLocal_5.f_6, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(sLocal_5.f_5) && ENTITY::DOES_ENTITY_EXIST(sLocal_5.f_6))
	{
		if (!PHYSICS::DOES_ROPE_EXIST(sLocal_5.f_8))
		{
			vVar4 = { vVar1 /*3*/ };
			sLocal_5.f_8 = PHYSICS::_ADD_ROPE_2(vVar4, 0.0f, 0.0f, 0.0f, sLocal_5.f_12, 8, false, -1, -1.0f);
			PHYSICS::_0xD699E688B49C0FD2(sLocal_5.f_8, 0.5f, sLocal_5.f_10, sLocal_5.f_10, true);
			PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(sLocal_5.f_8, iParam0, sLocal_5.f_5, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, sLocal_5.f_4, "rod_attach");
			PHYSICS::_0x3C6490D940FF5D0B(sLocal_5.f_8, 0, 0, -1.0f, true);
			PHYSICS::_0xBB3E9B073E66C3C9(sLocal_5.f_8, true, true, true, false);
			PHYSICS::_0x423C6B1F3786D28B(sLocal_5.f_8, 1);
			PHYSICS::ROPE_SET_UPDATE_ORDER(sLocal_5.f_8, 1);
			PHYSICS::_0xC89E7410A93AC19A(sLocal_5.f_8, 2.0f);
			PHYSICS::_0x1D97DA8ACB5D2582(sLocal_5.f_8, 15);
		}
		if (!PHYSICS::DOES_ROPE_EXIST(sLocal_5.f_9))
		{
			vVar4 = { ENTITY::GET_ENTITY_COORDS(sLocal_5.f_5, true, false) /*3*/ };
			sLocal_5.f_9 = PHYSICS::_ADD_ROPE_2(vVar4, 0.0f, 0.0f, 0.0f, sLocal_5.f_11, 10, false, -1, -1.0f);
			PHYSICS::_0xD699E688B49C0FD2(sLocal_5.f_9, 0.5f, sLocal_5.f_11, sLocal_5.f_11, true);
			PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(sLocal_5.f_9, sLocal_5.f_5, sLocal_5.f_6, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, "hook_attach", "fishingLine_bone");
			PHYSICS::_0x3C6490D940FF5D0B(sLocal_5.f_9, 0, 0, -1.0f, true);
			PHYSICS::_0xBB3E9B073E66C3C9(sLocal_5.f_9, true, true, true, false);
			PHYSICS::ROPE_SET_UPDATE_ORDER(sLocal_5.f_9, 1);
			PHYSICS::_0xC89E7410A93AC19A(sLocal_5.f_9, 0.0f);
		}
	}
	return (PHYSICS::DOES_ROPE_EXIST(sLocal_5.f_8) && PHYSICS::DOES_ROPE_EXIST(sLocal_5.f_9));
}

void func_21(int iParam0)
{
	if (sLocal_5.f_0 != iParam0)
	{
		sLocal_5.f_0 = iParam0;
	}
}

bool func_22(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !PHYSICS::DOES_ROPE_EXIST(sLocal_5.f_8))
	{
		return false;
	}
	if (sLocal_5.f_17 == 0)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(sLocal_5.f_8, sLocal_5.f_13);
		PHYSICS::START_ROPE_UNWINDING_FRONT(sLocal_5.f_8);
		sLocal_5.f_17 = 1;
		func_25(iParam0);
	}
	else if (PHYSICS::_0x3D69537039F8D824(sLocal_5.f_8) >= sLocal_5.f_12)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(sLocal_5.f_8);
		sLocal_5.f_17 = 0;
		return true;
	}
	return false;
}

bool func_23()
{
	if ((!PHYSICS::DOES_ROPE_EXIST(sLocal_5.f_8) || !ENTITY::DOES_ENTITY_EXIST(sLocal_5.f_5)) || !ENTITY::DOES_ENTITY_EXIST(sLocal_5.f_6))
	{
		return false;
	}
	if (sLocal_5.f_17 == 0)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(sLocal_5.f_8, sLocal_5.f_14);
		PHYSICS::START_ROPE_WINDING(sLocal_5.f_8);
		sLocal_5.f_17 = 1;
	}
	else if (PHYSICS::_0x3D69537039F8D824(sLocal_5.f_8) <= sLocal_5.f_10)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(sLocal_5.f_8);
		sLocal_5.f_17 = 0;
		PHYSICS::SET_DAMPING(sLocal_5.f_5, 0, sLocal_5.f_15);
		PHYSICS::SET_DAMPING(sLocal_5.f_6, 0, sLocal_5.f_15);
		return true;
	}
	return false;
}

void func_24(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
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
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

void func_25(int iParam0)
{
	Vector3 vVar0;
	float fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	float fVar11;
	Vector3 vVar12;
	Vector3 vVar15;

	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(sLocal_5.f_5)) || !ENTITY::DOES_ENTITY_EXIST(sLocal_5.f_6))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(sLocal_5.f_5, true, false) /*3*/ };
	fVar3 = ENTITY::GET_ENTITY_HEADING(iParam0);
	vVar4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar0, fVar3, 0.0f, 10.0f, 0.0f) /*3*/ };
	vVar7 = { func_26(vVar4 - vVar0) /*3*/ };
	fVar10 = 1.0f;
	fVar11 = 0.0f;
	func_27(&fVar10, &fVar11, 45.0f);
	vVar12 = { func_26(vVar7.x, vVar7.y, fVar11) /*3*/ };
	vVar15 = { vVar12 * FloatToVector((sLocal_5.f_12 * 5.0f)) /*3*/ };
	PHYSICS::SET_DAMPING(sLocal_5.f_5, 0, sLocal_5.f_16);
	PHYSICS::SET_DAMPING(sLocal_5.f_6, 0, sLocal_5.f_16);
	ENTITY::APPLY_FORCE_TO_ENTITY(sLocal_5.f_5, 3, vVar15, 0.0f, 0.0f, 0.0f, 0, false, true, true, false, true);
	ENTITY::APPLY_FORCE_TO_ENTITY(sLocal_5.f_6, 3, vVar15, 0.0f, 0.0f, 0.0f, 0, false, true, true, false, true);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(sLocal_5.f_5, true);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(sLocal_5.f_6, true);
}

Vector3 func_26(Vector3 vParam0)
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

void func_27(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = *fParam0;
	fVar1 = *fParam1;
	*fParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*fParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

