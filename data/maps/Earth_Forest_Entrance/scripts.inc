Earth_Forest_Entrance_MapScripts::
# 2 "data/maps/Earth_Forest_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Earth_Forest_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Earth_Forest_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Earth_Forest_Entrance/scripts.pory"
	callnative ClearAllWildEncounters
	return

