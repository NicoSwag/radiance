Earth_Mountain_Side_MapScripts::
# 2 "data/maps/Earth_Mountain_Side/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Earth_Mountain_Side_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Earth_Mountain_Side_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Earth_Mountain_Side/scripts.pory"
	callnative ClearAllWildEncounters
	return

