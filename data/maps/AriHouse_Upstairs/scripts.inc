AriHouse_Upstairs_MapScripts::
	.byte 0


AriHouse_Upstairs_Text_Togepi::
# 4 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 5 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Togepi_Text_0
# 9 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 10 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Mimikyu::
# 15 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 16 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Mimikyu_Text_0
# 20 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 21 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Snorlax::
# 26 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 27 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Snorlax_Text_0
# 32 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 33 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_AriPC::
# 38 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 39 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_AriPC_Text_0
# 43 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 44 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_FloorBooks::
# 49 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 50 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_FloorBooks_Text_0
# 54 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 55 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Bed::
# 60 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 61 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Bed_Text_0
# 64 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 65 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Garbage::
# 70 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 71 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Garbage_Text_0
# 74 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 75 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Bookshelf::
# 80 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 81 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Bookshelf_Text_0
# 84 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 85 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Globe::
# 90 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 91 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Globe_Text_0
# 95 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 96 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Note::
# 101 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 102 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Note_Text_0, MSGBOX_YESNO
# 107 "data/maps/AriHouse_Upstairs/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AriHouse_Upstairs_Text_Note_2
AriHouse_Upstairs_Text_Note_1:
# 132 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 133 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end

AriHouse_Upstairs_Text_Note_2:
# 108 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Note_Text_1
# 111 "data/maps/AriHouse_Upstairs/scripts.pory"
	speakername AriHouse_Upstairs_Text_Note_Text_2
# 112 "data/maps/AriHouse_Upstairs/scripts.pory"
	createfieldmugshot MUGSHOT_LEO, EMOTE_NORMAL
# 113 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Note_Text_3
# 123 "data/maps/AriHouse_Upstairs/scripts.pory"
	speakername NULL
# 124 "data/maps/AriHouse_Upstairs/scripts.pory"
	removefieldmugshot
# 125 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Note_Text_4
	goto AriHouse_Upstairs_Text_Note_1


AriHouse_Upstairs_Text_Wii::
# 138 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 139 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Wii_Text_0
# 143 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 144 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_TV::
# 149 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 150 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_TV_Text_0
# 154 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 155 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Easel::
# 160 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 161 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Easel_Text_0
# 165 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 166 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_LeoBed::
# 171 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 172 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_LeoBed_Text_0
# 176 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 177 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Laptop_Leo::
# 182 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 183 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Laptop_Leo_Text_0
# 187 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 188 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Mess::
# 193 "data/maps/AriHouse_Upstairs/scripts.pory"
	lock
# 194 "data/maps/AriHouse_Upstairs/scripts.pory"
	msgbox AriHouse_Upstairs_Text_Mess_Text_0
# 197 "data/maps/AriHouse_Upstairs/scripts.pory"
	closemessage
# 198 "data/maps/AriHouse_Upstairs/scripts.pory"
	release
	end


AriHouse_Upstairs_Text_Togepi_Text_0:
# 6 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It's {COLOR RED}Egg{COLOR DARK_GRAY},the beloved Togepi plush.\p"
	.string "You pet it gently on its head.$"

AriHouse_Upstairs_Text_Mimikyu_Text_0:
# 17 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It's {COLOR RED}The Boy{COLOR DARK_GRAY}, the charming Mimikyu\n"
	.string "plush.\p"
	.string "You pet it gently on its head.$"

AriHouse_Upstairs_Text_Snorlax_Text_0:
# 28 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It's {COLOR RED}Benedict{COLOR DARK_GRAY}, the trusty Snorlax\n"
	.string "plush.\p"
	.string "You pet it gently on its tummy.$"

AriHouse_Upstairs_Text_AriPC_Text_0:
# 40 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "Ol' reliable.\p"
	.string "You'll need to replace this eventually,\n"
	.string "but that day is not today.$"

AriHouse_Upstairs_Text_FloorBooks_Text_0:
# 51 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "You were looking for your copy of\n"
	.string "'How to Survive in Space'.\p"
	.string "A real classic, that one.$"

AriHouse_Upstairs_Text_Bed_Text_0:
# 62 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It is very much not time for bed.$"

AriHouse_Upstairs_Text_Garbage_Text_0:
# 72 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "You are definitely not going to dig in\n"
	.string "the trash.$"

AriHouse_Upstairs_Text_Bookshelf_Text_0:
# 82 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "The shelves are full of survival\n"
	.string "manuals.$"

AriHouse_Upstairs_Text_Globe_Text_0:
# 92 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "There's so many places you'd like to\n"
	.string "travel to.\p"
	.string "But today, you're going to go even\n"
	.string "further.$"

AriHouse_Upstairs_Text_Note_Text_0:
# 103 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "There's a note on your desk.\n"
	.string "It's in {RIVAL}'s handwriting.\p"
	.string "Read it?$"

AriHouse_Upstairs_Text_Note_Text_1:
# 109 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "You can picture it in her voice.$"

AriHouse_Upstairs_Text_Note_Text_2:
# 111 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "{RIVAL}$"

AriHouse_Upstairs_Text_Note_Text_3:
# 114 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "'Dearest sibling,\n"
	.string "I hope that this missive finds thee\l"
	.string "well.\p"
	.string "I have attempted to rouse thee from\n"
	.string "thine slumber, to no avail.\p"
	.string "As thou doubtlessly know, today is a\n"
	.string "most important day.\p"
	.string "Being late would be a most unfavourable\n"
	.string "affair.\p"
	.string "Therefore,\p"
	.string "GET YOUR ASS TO THE SPACE CENTER RIGHT\n"
	.string "AWAY, YOU LAZY BUM!\p"
	.string "-{RIVAL}'$"

AriHouse_Upstairs_Text_Note_Text_4:
# 126 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "Uh, oh.\n"
	.string "She seems mad.\p"
	.string "You should probably head to the {COLOR RED}Space\n"
	.string "Center {COLOR DARK_GRAY}right away.$"

AriHouse_Upstairs_Text_Wii_Text_0:
# 140 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It's an emulation box that {RIVAL}\n"
	.string "set up for you.\p"
	.string "The resemblance to any real gaming\n"
	.string "console is coincidental.$"

AriHouse_Upstairs_Text_TV_Text_0:
# 151 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "It's your fancy TV.\p"
	.string "You only use it to play videogames.$"

AriHouse_Upstairs_Text_Easel_Text_0:
# 162 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "{RIVAL}'s just finished painting\n"
	.string "something.\p"
	.string "Looks good.$"

AriHouse_Upstairs_Text_LeoBed_Text_0:
# 173 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "{RIVAL}'s bed.\p"
	.string "You are definitely not touching it.$"

AriHouse_Upstairs_Text_Laptop_Leo_Text_0:
# 184 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "{RIVAL}'s old laptop.\p"
	.string "She should really replace this piece of\n"
	.string "junk.$"

AriHouse_Upstairs_Text_Mess_Text_0:
# 195 "data/maps/AriHouse_Upstairs/scripts.pory"
	.string "Wait, who's going to clean up this mess?$"
