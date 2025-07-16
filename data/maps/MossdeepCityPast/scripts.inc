MossdeepCityPast_MapScripts::
# 2 "data/maps/MossdeepCityPast/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCityPast_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MossdeepCityPast_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/MossdeepCityPast/scripts.pory"
	map_script_2 VAR_MOSSDEEP_PAST_STATE, 0, MossdeepCityPast_EventScript_Intro_Camera
	.2byte 0


MossdeepCityPast_EventScript_Intro_Camera::
# 9 "data/maps/MossdeepCityPast/scripts.pory"
	setvar VAR_MOSSDEEP_PAST_STATE, 1
# 10 "data/maps/MossdeepCityPast/scripts.pory"
	special SpawnCameraObject
# 11 "data/maps/MossdeepCityPast/scripts.pory"
	delay 32
# 12 "data/maps/MossdeepCityPast/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MossdeepCityPast_EventScript_Intro_Camera_Movement_0
# 16 "data/maps/MossdeepCityPast/scripts.pory"
	waitmovement 0
# 17 "data/maps/MossdeepCityPast/scripts.pory"
	warp MAP_ARI_HOUSE_UPSTAIRS, 17, 6
	return


# 12 "data/maps/MossdeepCityPast/scripts.pory"
MossdeepCityPast_EventScript_Intro_Camera_Movement_0:
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 13 "data/maps/MossdeepCityPast/scripts.pory"
	walk_left
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
# 14 "data/maps/MossdeepCityPast/scripts.pory"
	walk_up
	step_end
