AbandonedShip_HiddenFloorCorridors_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_HiddenFloorCorridors_OnResume
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_HiddenFloorCorridors_OnLoad
	.byte 0

AbandonedShip_HiddenFloorCorridors_OnResume:
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 255, 5, 4
	end

AbandonedShip_HiddenFloorCorridors_OnLoad:
	call_if_unset FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom1
	call_if_unset FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom2
	call_if_unset FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom4
	call_if_unset FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom6
	call_if_set FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1
	call_if_set FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2
	call_if_set FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4
	call_if_set FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6
	end

AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1::
	setmetatile 3, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, 1
	return

AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2::
	setmetatile 6, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, 1
	return

AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4::
	setmetatile 3, 3, METATILE_InsideShip_DoorIndent_Unlocked, 0
	return

AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6::
	setmetatile 9, 3, METATILE_InsideShip_DoorIndent_Unlocked, 0
	return

AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom1::
	setmetatile 3, 8, METATILE_InsideShip_IntactDoor_Bottom_Locked, 1
	return

AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom2::
	setmetatile 6, 8, METATILE_InsideShip_IntactDoor_Bottom_Locked, 1
	return

AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom4::
	setmetatile 3, 3, METATILE_InsideShip_DoorIndent_Locked, 0
	return

AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom6::
	setmetatile 9, 3, METATILE_InsideShip_DoorIndent_Locked, 0
	return

AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door::
	lockall
	goto_if_set FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	checkitem ITEM_ROOM_1_KEY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Rm1IsLocked
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
	playse SE_PIN
	removeitem ITEM_ROOM_1_KEY
	setflag FLAG_USED_ROOM_1_KEY
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1
	special DrawWholeMapView
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door::
	lockall
	goto_if_set FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	checkitem ITEM_ROOM_2_KEY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Rm2IsLocked
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
	playse SE_PIN
	removeitem ITEM_ROOM_2_KEY
	setflag FLAG_USED_ROOM_2_KEY
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2
	special DrawWholeMapView
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door::
	lockall
	goto_if_set FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	checkitem ITEM_ROOM_4_KEY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Rm4IsLocked
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
	playse SE_PIN
	removeitem ITEM_ROOM_4_KEY
	setflag FLAG_USED_ROOM_4_KEY
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4
	special DrawWholeMapView
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door::
	lockall
	goto_if_set FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	checkitem ITEM_ROOM_6_KEY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Rm6IsLocked
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
	playse SE_PIN
	removeitem ITEM_ROOM_6_KEY
	setflag FLAG_USED_ROOM_6_KEY
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6
	special DrawWholeMapView
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Rm1IsLocked::
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked, MSGBOX_DEFAULT
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Rm2IsLocked::
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked, MSGBOX_DEFAULT
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Rm4IsLocked::
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked, MSGBOX_DEFAULT
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Rm6IsLocked::
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked, MSGBOX_DEFAULT
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen::
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked:
	.string "문이 잠겨 있다\p"
	.string "문에는 1호실이라고 쓰여 있다$"

AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked:
	.string "문이 잠겨 있다\p"
	.string "문에는 2호실이라고 쓰여 있다$"

AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked:
	.string "문이 잠겨 있다\p"
	.string "문에는 4호실이라고 쓰여 있다$"

AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked:
	.string "문이 잠겨 있다\p"
	.string "문에는 6호실이라고 쓰여 있다$"

AbandonedShip_HiddenFloorCorridors_Text_InsertedKey:
	.string "{PLAYER}{K_EUNNEUN}\n"
	.string "열쇠를 썼다!\p"
	.string "열쇠 구멍에 꽂은 열쇠는\n"
	.string "빠지지 않게 되었지만\l"
	.string "문은 열렸다!$"