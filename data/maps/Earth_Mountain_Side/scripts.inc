Earth_Mountain_Side_MapScripts::
# 2 "data/maps/Earth_Mountain_Side/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Earth_Mountain_Side_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Earth_Mountain_Side_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Earth_Mountain_Side/scripts.pory"
	callnative ClearAllWildEncounters
	return


Wild_Script_Test::
# 8 "data/maps/Earth_Mountain_Side/scripts.pory"
	lock
# 9 "data/maps/Earth_Mountain_Side/scripts.pory"
	msgbox Wild_Script_Test_Text_0, MSGBOX_NPC
# 10 "data/maps/Earth_Mountain_Side/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Wild_Script_Test_Movement_0
# 11 "data/maps/Earth_Mountain_Side/scripts.pory"
	waitmovement 0
# 12 "data/maps/Earth_Mountain_Side/scripts.pory"
	clearflag FLAG_TRAINER_SEE_SCRIPTS
# 13 "data/maps/Earth_Mountain_Side/scripts.pory"
	release
	end


# 10 "data/maps/Earth_Mountain_Side/scripts.pory"
Wild_Script_Test_Movement_0:
# 10 "data/maps/Earth_Mountain_Side/scripts.pory"
	walk_down
	step_end

Wild_Script_Test_Text_0:
# 9 "data/maps/Earth_Mountain_Side/scripts.pory"
	.string "Hello$"
