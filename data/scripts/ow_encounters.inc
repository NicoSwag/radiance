HandleOverworldPokemonEncounter::
# 2 "data/scripts/ow_encounters.pory"
	lock
# 3 "data/scripts/ow_encounters.pory"
	faceplayer
# 4 "data/scripts/ow_encounters.pory"
	waitmovement 0
# 5 "data/scripts/ow_encounters.pory"
	callnative GetInteractedEncounterSpecies_Script
# 6 "data/scripts/ow_encounters.pory"
	callnative GetInteractedEncounterLevel_Script
# 7 "data/scripts/ow_encounters.pory"
	setwildbattleow
# 8 "data/scripts/ow_encounters.pory"
	playse SE_PIN
# 9 "data/scripts/ow_encounters.pory"
	applymovement VAR_LAST_TALKED, HandleOverworldPokemonEncounter_Movement_0
# 10 "data/scripts/ow_encounters.pory"
	waitmovement 0
# 11 "data/scripts/ow_encounters.pory"
	waitse
# 12 "data/scripts/ow_encounters.pory"
	dowildbattle
# 13 "data/scripts/ow_encounters.pory"
	removeobject VAR_LAST_TALKED
# 14 "data/scripts/ow_encounters.pory"
	callnative ClearInteractedEncounterSpecies_Script
# 15 "data/scripts/ow_encounters.pory"
	clearflag FLAG_OVERWORLD_POKEMON_ENCOUNTER_OBJECTS
# 16 "data/scripts/ow_encounters.pory"
	clearflag FLAG_TRAINER_SEE_SCRIPTS
# 17 "data/scripts/ow_encounters.pory"
	releaseall
	end


# 9 "data/scripts/ow_encounters.pory"
HandleOverworldPokemonEncounter_Movement_0:
# 9 "data/scripts/ow_encounters.pory"
	emote_exclamation_mark
	step_end
