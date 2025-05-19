Earth_Gleaming_Forest_MapScripts::
# 2 "data/maps/Earth_Gleaming_Forest/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Earth_Gleaming_Forest_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Earth_Gleaming_Forest_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Earth_Gleaming_Forest/scripts.pory"
	callnative ClearAllWildEncounters
	return

