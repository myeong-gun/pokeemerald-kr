MossdeepCity_Mart_MapScripts:: @ 82223C7
	.byte 0

MossdeepCity_Mart_EventScript_Clerk:: @ 82223C8
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart MossdeepCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
MossdeepCity_Mart_Pokemart: @ 82223E0
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_NONE
	release
	end

MossdeepCity_Mart_EventScript_Woman:: @ 82223F6
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
	end

MossdeepCity_Mart_EventScript_Boy:: @ 82223FF
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
	end

MossdeepCity_Mart_EventScript_Sailor:: @ 8222408
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
	end

MossdeepCity_Mart_Text_ReviveIsFantastic: @ 8222411
	.string "기력의조각은 정말 대단해!\p"
	.string "이걸 포켓몬한테 주면\n"
	.string "기절 상태인 포켓몬도 깨어나거든!\p"
	.string "그치만 파워포인트는\n"
	.string "회복 안 되니까 조심해!$"

MossdeepCity_Mart_Text_MaxRepelLastsLongest: @ 82224A0
	.string "골드스프레이는\n"
	.string "약한 포켓몬과 만나지 않도록 막아줘\p"
	.string "다양한 스프레이 중에서\n"
	.string "제일 지속 시간이 길어!$"

MossdeepCity_Mart_Text_NetAndDiveBallsRare: @ 82224FA
	.string "넷트볼과 다이브볼은\n"
	.string "여기 이끼시티의 특산품이야!\p"
	.string "넷트볼은 벌레타입이나\n"
	.string "물타입 포켓몬에게 효과적이야!\p"
	.string "그리고 다이브볼은 물속에 살고 있는\n"
	.string "포켓몬을 쉽게 잡을 수 있어!$"

