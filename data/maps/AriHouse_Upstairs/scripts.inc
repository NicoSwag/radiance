AriHouse_Upstairs_MapScripts::
# 2 "data/maps/AriHouse_Upstairs/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AriHouse_Upstairs_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AriHouse_Upstairs_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AriHouse_Upstairs/scripts.pory"
	map_script_2 VAR_MOSSDEEP_PAST_STATE, 1, AriHouse_Upstairs_EventScript_Intro
	.2byte 0


AriHouse_Upstairs_Text_Togepi::
# 8 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 9 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Togepi_Text_0
# 13 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 14 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Mimikyu::
# 19 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 20 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Mimikyu_Text_0
# 24 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 25 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Snorlax::
# 30 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 31 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Snorlax_Text_0
# 36 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 37 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_AriPC::
# 42 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 43 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_AriPC_Text_0
# 47 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 48 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_FloorBooks::
# 53 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 54 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_FloorBooks_Text_0
# 58 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 59 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Bed::
# 64 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 65 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Bed_Text_0
# 68 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 69 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Garbage::
# 74 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 75 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Garbage_Text_0
# 78 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 79 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Bookshelf::
# 84 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 85 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Bookshelf_Text_0
# 88 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 89 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Globe::
# 94 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 95 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Globe_Text_0
# 99 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 100 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Note::
# 105 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 106 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Note_Text_0, MSGBOX_YESNO
# 111 "data/maps/AriHouse_Upstairs/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AriHouse_Upstairs_Text_Note_2
AriHouse_Upstairs_Text_Note_1:
# 136 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 137 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end

AriHouse_Upstairs_Text_Note_2:
# 112 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Note_Text_1
# 115 "data/maps/AriHouse_Upstairs/scripts.pory"
	speakername AriHouse_Upstairs_Text_Note_Text_2
# 116 "data/maps/AriHouse_Upstairs/scripts.pory"
	createfieldmugshot MUGSHOT_LEO, EMOTE_NORMAL
# 117 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Note_Text_3
# 127 "data/maps/AriHouse_Upstairs/scripts.pory"
	speakername NULL
# 128 "data/maps/AriHouse_Upstairs/scripts.pory"
	removefieldmugshot
# 129 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Note_Text_4
	goto AriHouse_Upstairs_Text_Note_1


AriHouse_Upstairs_Text_Wii::
# 142 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 143 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Wii_Text_0
# 147 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 148 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_TV::
# 153 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 154 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_TV_Text_0
# 158 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 159 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Easel::
# 164 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 165 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Easel_Text_0
# 169 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 170 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_LeoBed::
# 175 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 176 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_LeoBed_Text_0
# 180 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 181 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Laptop_Leo::
# 186 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 187 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Laptop_Leo_Text_0
# 191 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 192 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Mess::
# 197 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 198 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Mess_Text_0
# 201 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 202 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_EventScript_Intro::
# 208 "data/maps/AriHouse_Upstairs/scripts.pory"
	setvar VAR_MOSSDEEP_PAST_STATE, 2
# 209 "data/maps/AriHouse_Upstairs/scripts.pory"
	delay 16
# 210 "data/maps/AriHouse_Upstairs/scripts.pory"
	createfieldmugshot MUGSHOT_ARI, EMOTE_NORMAL
# 211 "data/maps/AriHouse_Upstairs/scripts.pory"
	speakername AriHouse_Upstairs_EventScript_Intro_Text_0
# 212 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_EventScript_Intro_Text_1
# 233 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 234 "data/maps/AriHouse_Upstairs/scripts.pory"
	fadescreen FADE_TO_BLACK
# 235 "data/maps/AriHouse_Upstairs/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AriHouse_Upstairs_EventScript_Intro_Movement_0
# 239 "data/maps/AriHouse_Upstairs/scripts.pory"
	waitmovement 0
# 240 "data/maps/AriHouse_Upstairs/scripts.pory"
	fadescreen FADE_FROM_BLACK
	end


# 235 "data/maps/AriHouse_Upstairs/scripts.pory"
AriHouse_Upstairs_EventScript_Intro_Movement_0:
# 236 "data/maps/AriHouse_Upstairs/scripts.pory"
	walk_fast_left
# 236 "data/maps/AriHouse_Upstairs/scripts.pory"
	walk_fast_left
# 237 "data/maps/AriHouse_Upstairs/scripts.pory"
	walk_fast_down
	step_end

AriHouse_Upstairs_Text_Togepi_Text_0:
# 10 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It's {COLOR RED}Egg{COLOR DARK_GRAY}, the beloved Togepi plush.\p"
	.string "You pet it gently on its head.$"

AriHouse_Upstairs_Text_Mimikyu_Text_0:
# 21 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It's {COLOR RED}The Boy{COLOR DARK_GRAY}, the charming Mimikyu\n"
	.string "plush.\p"
	.string "You pet it gently on its head.$"

AriHouse_Upstairs_Text_Snorlax_Text_0:
# 32 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It's {COLOR RED}Benedict{COLOR DARK_GRAY}, the trusty Snorlax\n"
	.string "plush.\p"
	.string "You pet it gently on its tummy.$"

AriHouse_Upstairs_Text_AriPC_Text_0:
# 44 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "Ol' reliable.\p"
	.string "You'll need to replace this eventually,\n"
	.string "but that day is not today.$"

AriHouse_Upstairs_Text_FloorBooks_Text_0:
# 55 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "You were looking for your copy of\n"
	.string "'How to Survive in Space'.\p"
	.string "A real classic, that one.$"

AriHouse_Upstairs_Text_Bed_Text_0:
# 66 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It is very much not time for bed.$"

AriHouse_Upstairs_Text_Garbage_Text_0:
# 76 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "You are definitely not going to dig in\n"
	.string "the trash.$"

AriHouse_Upstairs_Text_Bookshelf_Text_0:
# 86 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "The shelves are full of survival\n"
	.string "manuals.$"

AriHouse_Upstairs_Text_Globe_Text_0:
# 96 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "There's so many places you'd like to\n"
	.string "travel to.\p"
	.string "But today, you're going to go even\n"
	.string "further.$"

AriHouse_Upstairs_Text_Note_Text_0:
# 107 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "There's a note on your desk.\n"
	.string "It's in {RIVAL}'s handwriting.\p"
	.string "Read it?$"

AriHouse_Upstairs_Text_Note_Text_1:
# 113 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "You can picture it in her voice.$"

AriHouse_Upstairs_Text_Note_Text_2:
# 115 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "{RIVAL}$"

AriHouse_Upstairs_Text_Note_Text_3:
# 118 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "Dearest sibling,\n"
	.string "I hope that this missive finds thee\l"
	.string "well.\p"
	.string "I have attempted to rouse thee from\n"
	.string "thine slumber, to no avail.\p"
	.string "As thou doubtlessly know, today is a\n"
	.string "very important date.\p"
	.string "Being late would be a most unfavourable\n"
	.string "affair.\p"
	.string "Therefore,\p"
	.string "GET YOUR ASS TO THE SPACE CENTER RIGHT\n"
	.string "AWAY, YOU LAZY BUM!\p"
	.string "-{RIVAL}$"

AriHouse_Upstairs_Text_Note_Text_4:
# 130 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "Uh, oh.\n"
	.string "She seems mad.\p"
	.string "You should probably head to the {COLOR RED}Space\n"
	.string "Center{COLOR DARK_GRAY}.$"

AriHouse_Upstairs_Text_Wii_Text_0:
# 144 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It's an emulation box that {RIVAL}\n"
	.string "set up for you.\p"
	.string "The resemblance to any real gaming\n"
	.string "console is coincidental.$"

AriHouse_Upstairs_Text_TV_Text_0:
# 155 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It's your fancy TV.\p"
	.string "You only use it to play videogames.$"

AriHouse_Upstairs_Text_Easel_Text_0:
# 166 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "{RIVAL}'s just finished painting\n"
	.string "something.\p"
	.string "Looks good.$"

AriHouse_Upstairs_Text_LeoBed_Text_0:
# 177 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "{RIVAL}'s bed.\p"
	.string "You should probably refrain from\n"
	.string "touching it.$"

AriHouse_Upstairs_Text_Laptop_Leo_Text_0:
# 188 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "{RIVAL}'s old laptop.\p"
	.string "She should really replace this piece of\n"
	.string "junk.$"

AriHouse_Upstairs_Text_Mess_Text_0:
# 199 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "Wait, who's going to clean this mess up?$"

AriHouse_Upstairs_EventScript_Intro_Text_0:
# 211 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "{PLAYER}$"

AriHouse_Upstairs_EventScript_Intro_Text_1:
# 213 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "Yaaaaawn…\p"
	.string "I feel like I just had a crazy dream.\n"
	.string "It was… Hmm…\p"
	.string "Dammit, I can't remember it.\p"
	.string "I really should start keeping a dream\n"
	.string "journal.\p"
	.string "Oh well.\p"
	.string "What time is it, anyway?\n"
	.string "Where's {RIVAL}?\p"
	.string "… … …\p"
	.string "Oh crap.\n"
	.string "I overslept.\p"
	.string "This is bad.\n"
	.string "This is REALLY bad.\p"
	.string "And today, of all days!\p"
	.string "{RIVAL} is gonna kill me!\n"
	.string "And Professor Cozmo…\p"
	.string "Well, he probably isn't gonna kill me.\n"
	.string "But still!\p"
	.string "I need to get up and head to the {COLOR RED}Space\n"
	.string "Center{COLOR DARK_GRAY} right away!$"
