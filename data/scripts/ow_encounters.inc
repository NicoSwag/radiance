HandleOverworldPokemonEncounter::
# 2 "data/scripts/ow_encounters.pory"
	lockall
# 3 "data/scripts/ow_encounters.pory"
	hidefollower 0
# 4 "data/scripts/ow_encounters.pory"
	callnative GetInteractedEncounterSpecies_Script
# 5 "data/scripts/ow_encounters.pory"
	callnative GetInteractedEncounterLevel_Script
# 6 "data/scripts/ow_encounters.pory"
	setwildbattleow
# 7 "data/scripts/ow_encounters.pory"
	playse SE_PIN
# 8 "data/scripts/ow_encounters.pory"
	applymovement VAR_LAST_TALKED, HandleOverworldPokemonEncounter_Movement_0
# 9 "data/scripts/ow_encounters.pory"
	waitmovement 0
# 10 "data/scripts/ow_encounters.pory"
	waitse
# 11 "data/scripts/ow_encounters.pory"
	dowildbattle
# 12 "data/scripts/ow_encounters.pory"
	removeobject VAR_LAST_TALKED
# 13 "data/scripts/ow_encounters.pory"
	callnative ClearInteractedEncounterSpecies_Script
# 14 "data/scripts/ow_encounters.pory"
	clearflag FLAG_OVERWORLD_POKEMON_ENCOUNTER_OBJECTS
# 15 "data/scripts/ow_encounters.pory"
	clearflag FLAG_TRAINER_SEE_SCRIPTS
# 16 "data/scripts/ow_encounters.pory"
	releaseall
	end


# 8 "data/scripts/ow_encounters.pory"
HandleOverworldPokemonEncounter_Movement_0:
# 8 "data/scripts/ow_encounters.pory"
	emote_exclamation_mark
	step_end
