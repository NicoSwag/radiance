General_test_MapScripts::
	.byte 0


Test_CozmoDialogue::
# 6 "data/maps/General_test/scripts.pory"
	lock
# 7 "data/maps/General_test/scripts.pory"
	createfieldmugshot MUGSHOT_COZMO, EMOTE_NORMAL
# 8 "data/maps/General_test/scripts.pory"
	speakername Test_CozmoDialogue_Text_0
# 9 "data/maps/General_test/scripts.pory"
	msgbox Test_CozmoDialogue_Text_1, MSGBOX_NPC
# 10 "data/maps/General_test/scripts.pory"
	removefieldmugshot
# 11 "data/maps/General_test/scripts.pory"
	release
	end


Test_CozmoDialogue_Text_0:
# 8 "data/maps/General_test/scripts.pory"
	.string "Prof. Cozmo$"

Test_CozmoDialogue_Text_1:
# 9 "data/maps/General_test/scripts.pory"
	.string "Yo bitch what's uppppppp!!!$"
