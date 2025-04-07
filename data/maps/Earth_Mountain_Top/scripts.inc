Earth_Mountain_Top_MapScripts::
	.byte 0


Earth_Mountain_Top_Camera::
# 5 "data/maps/Earth_Mountain_Top/scripts.pory"
	lock
# 6 "data/maps/Earth_Mountain_Top/scripts.pory"
	special SpawnCameraObject
# 7 "data/maps/Earth_Mountain_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Earth_Mountain_Top_Camera_Movement_0
# 11 "data/maps/Earth_Mountain_Top/scripts.pory"
	waitmovement 0
# 12 "data/maps/Earth_Mountain_Top/scripts.pory"
	msgbox Earth_Mountain_Top_Camera_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/Earth_Mountain_Top/scripts.pory"
	closemessage
# 14 "data/maps/Earth_Mountain_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Earth_Mountain_Top_Camera_Movement_1
# 17 "data/maps/Earth_Mountain_Top/scripts.pory"
	waitmovement 0
# 18 "data/maps/Earth_Mountain_Top/scripts.pory"
	special RemoveCameraObject
# 19 "data/maps/Earth_Mountain_Top/scripts.pory"
	release
	end


# 7 "data/maps/Earth_Mountain_Top/scripts.pory"
Earth_Mountain_Top_Camera_Movement_0:
# 8 "data/maps/Earth_Mountain_Top/scripts.pory"
	delay_16
# 9 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_up
# 9 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_up
# 9 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_up
# 9 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_up
# 9 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_up
# 9 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_up
# 9 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_up
# 9 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_up
# 9 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_up
	step_end

# 14 "data/maps/Earth_Mountain_Top/scripts.pory"
Earth_Mountain_Top_Camera_Movement_1:
# 15 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_down
# 15 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_down
# 15 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_down
# 15 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_down
# 15 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_down
# 15 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_down
# 15 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_down
# 15 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_down
# 15 "data/maps/Earth_Mountain_Top/scripts.pory"
	walk_down
	step_end

Earth_Mountain_Top_Camera_Text_0:
# 12 "data/maps/Earth_Mountain_Top/scripts.pory"
	.string "There's two suns…\n"
	.string "In the sky.$"
