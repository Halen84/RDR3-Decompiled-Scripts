#pragma region Local_Variables
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#pragma endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;

	iLocal_0 = 674038080;
	iLocal_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH("", "VirtualizationUnitTestData");
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item0");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 0");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item1");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 1");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item2");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 2");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item3");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 3");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item4");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 4");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item5");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 5");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item6");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 6");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item7");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 7");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item8");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 8");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item9");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 9");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item10");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 10");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item11");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 11");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "item12");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item 12");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, -1, "checkbox", iVar0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
	}
	while (true)
	{
		while (UIEVENTS::EVENTS_UI_IS_PENDING(iLocal_0))
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iLocal_0, &iVar1))
			{
				switch (iVar1)
				{
					case joaat("ITEM_SELECTED"):
						iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_1, "itemAA");
						DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "title", "I am item AA");
						DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iLocal_1, 13, "checkbox", iVar0);
						break;
				}
				UIEVENTS::EVENTS_UI_POP_MESSAGE(iLocal_0);
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iLocal_1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}
