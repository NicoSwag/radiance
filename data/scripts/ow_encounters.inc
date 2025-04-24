HandleOverworldPokemonEncounter::
# 2 "data/scripts/ow_encounters.pory"
	lock
# 3 "data/scripts/ow_encounters.pory"
	callnative GetInteractedEncounterSpecies_Script
# 4 "data/scripts/ow_encounters.pory"
	callnative GetInteractedEncounterLevel_Script
# 5 "data/scripts/ow_encounters.pory"
	setwildbattleow
# 6 "data/scripts/ow_encounters.pory"
	playse SE_PIN
# 7 "data/scripts/ow_encounters.pory"
	applymovement VAR_LAST_TALKED, HandleOverworldPokemonEncounter_Movement_0
# 8 "data/scripts/ow_encounters.pory"
	waitmovement 0
# 9 "data/scripts/ow_encounters.pory"
	waitse
# 10 "data/scripts/ow_encounters.pory"
	dowildbattle
# 11 "data/scripts/ow_encounters.pory"
	removeobject VAR_LAST_TALKED
# 12 "data/scripts/ow_encounters.pory"
	callnative ClearInteractedEncounterSpecies_Script
# 13 "data/scripts/ow_encounters.pory"
	clearflag FLAG_OVERWORLD_POKEMON_ENCOUNTER_OBJECTS
# 14 "data/scripts/ow_encounters.pory"
	clearflag FLAG_TRAINER_SEE_SCRIPTS
# 15 "data/scripts/ow_encounters.pory"
	releaseall
	end


# 7 "data/scripts/ow_encounters.pory"
HandleOverworldPokemonEncounter_Movement_0:
# 7 "data/scripts/ow_encounters.pory"
	emote_exclamation_mark
	step_end
