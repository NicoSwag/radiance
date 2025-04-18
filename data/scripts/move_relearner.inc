Common_EventScript_MoveRelearner::
	lock
	faceplayer
	setflag P_FLAG_SCRIPT_MOVE_RELEARNER
	message MoveRelearner_Text_WouldLearnNewMoves
	waitmessage
	goto Common_EventScript_MoveRelearnerDynMultiChoice
	end

Common_EventScript_MoveRelearnerDynMultiChoice::
.if P_ENABLE_MOVE_RELEARNERS == TRUE
	dynmultipush MoveRelearner_Text_LevelUpMoves, 0
	dynmultipush MoveRelearner_Text_EggMoves, 1
	dynmultipush MoveRelearner_Text_TMmoveMoves, 2
	dynmultipush MoveRelearner_Text_TutormoveMoves, 3
.else
	call_if_set P_FLAG_LEVEL_UP_MOVES, MoveRelearner_EventScript_PushLevelUpMoves
	call_if_set P_FLAG_EGG_MOVES, MoveRelearner_EventScript_PushEggMoves
	dynmultipush MoveRelearner_Text_TMmoveMoves, 2
	call_if_set P_FLAG_TUTOR_MOVES, MoveRelearner_EventScript_PushTutorMoves
.endif @ P_ENABLE_MOVE_RELEARNERS
	dynmultipush MoveRelearner_Text_SeeYa, 4
	dynmultistack 0, 0, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
	closemessage
	switch VAR_RESULT
	case 0, MoveRelearner_EventScript_TeachLevelUpMoves
	case 1, MoveRelearner_EventScript_TeachEggMoves
	case 2, MoveRelearner_EventScript_TeachTMMoves
	case 3, MoveRelearner_EventScript_TeachTutorMoves
	case 4, MoveRelearner_EventScript_PleaseComeAgain
MoveRelearner_EventScript_PleaseComeAgain:
	clearflag P_FLAG_SCRIPT_MOVE_RELEARNER
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

MoveRelearner_EventScript_PushLevelUpMoves:
	dynmultipush MoveRelearner_Text_LevelUpMoves, 0
	return

MoveRelearner_EventScript_PushEggMoves:
	dynmultipush MoveRelearner_Text_EggMoves, 1
	return

MoveRelearner_EventScript_PushTutorMoves:
	dynmultipush MoveRelearner_Text_TutormoveMoves, 3
	return

MoveRelearner_EventScript_TeachLevelUpMoves:
	setvar P_VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_LEVEL_UP_MOVES
	goto MoveRelearner_EventScript_TeachMove
	end

MoveRelearner_EventScript_TeachEggMoves:
	setvar P_VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_EGG_MOVES
	goto MoveRelearner_EventScript_TeachMove
	end

MoveRelearner_EventScript_TeachTMMoves:
	setvar P_VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TM_MOVES
	goto MoveRelearner_EventScript_TeachMove
	end

MoveRelearner_EventScript_TeachTutorMoves:
	setvar P_VAR_MOVE_RELEARNER_STATE, MOVE_RELEARNER_TUTOR_MOVES
	goto MoveRelearner_EventScript_TeachMove
	end

MoveRelearner_EventScript_AnythingElse::
	message MoveRelearner_Text_AnythingElse
	waitmessage
	goto Common_EventScript_MoveRelearnerDynMultiChoice
	end

MoveRelearner_EventScript_TeachMove::
	msgbox MoveRelearner_Text_ChoosePkmn, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	call_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MoveRelearner_EventScript_AnythingElse
	special IsSelectedMonEgg
	call_if_eq VAR_RESULT, YES, MoveRelearner_EventScript_CantTeachMoveToEgg
	call_if_eq VAR_0x8005, NO, MoveRelearner_EventScript_CantTeachMoveToPkmn
	switch P_VAR_MOVE_RELEARNER_STATE
	case MOVE_RELEARNER_EGG_MOVES, MoveRelearner_EventScript_StringToeggmove
	case MOVE_RELEARNER_TM_MOVES, MoveRelearner_EventScript_StringToTMmove
	case MOVE_RELEARNER_TUTOR_MOVES, MoveRelearner_EventScript_StringTotutormove
	bufferstring STR_VAR_3, MoveRelearner_Text_levelupmove
MoveRelearner_EventScript_TeachWhichMove:
	msgbox MoveRelearner_Text_WhichXmoveShouldTeach, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, NO, MoveRelearner_EventScript_AnythingElse
	clearflag P_FLAG_SCRIPT_MOVE_RELEARNER
	msgbox MoveRelearner_Text_ThankYouComeAgain, MSGBOX_DEFAULT
	release
	end

MoveRelearner_EventScript_CantTeachMoveToEgg:
	msgbox MoveRelearner_Text_CantTeachMoveToEgg, MSGBOX_AUTOCLOSE
	goto MoveRelearner_EventScript_AnythingElse

MoveRelearner_EventScript_CantTeachMoveToPkmn:
	msgbox MoveRelearner_Text_CantTeachMoveToPkmn, MSGBOX_AUTOCLOSE
	goto MoveRelearner_EventScript_AnythingElse

MoveRelearner_EventScript_StringToeggmove:
	bufferstring STR_VAR_3, MoveRelearner_Text_eggmove
	goto MoveRelearner_EventScript_TeachWhichMove

MoveRelearner_EventScript_StringToTMmove:
	bufferstring STR_VAR_3, MoveRelearner_Text_TMmove
	goto MoveRelearner_EventScript_TeachWhichMove

MoveRelearner_EventScript_StringTotutormove:
	bufferstring STR_VAR_3, MoveRelearner_Text_tutormove
	goto MoveRelearner_EventScript_TeachWhichMove
