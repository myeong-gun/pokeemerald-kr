.set LOCALID_NURSE, 1

SlateportCity_PokemonCenter_1F_MapScripts:: @ 820DABF
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SlateportCity_PokemonCenter_1F_OnTransition: @ 820DACA
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

SlateportCity_PokemonCenter_1F_EventScript_Nurse:: @ 820DAD3
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_Sailor:: @ 820DAE1
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_EventScript_Woman:: @ 820DAEA
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon: @ 820DAF3
	.string "승부의 요령이라...\p"
	.string "다양한 포켓몬을\n"
	.string "균형 있게 키우는 게 아닐까?\p"
	.string "한 마리만 엄청 강하다 해도\n"
	.string "상성이 불리한 포켓몬과 만나면\l"
	.string "어떻게 해볼 방법이\l"
	.string "없을 테니까 말이야$"

SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend: @ 820DBBC
	.string "친구랑 포켓몬 교환했을 때\p"
	.string "포켓몬이 도구를 지니고 있으면\n"
	.string "2배로 기뻐-!!$"

