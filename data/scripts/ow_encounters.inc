HandleOverworldPokemonEncounter::
# 2 "data/scripts/ow_encounters.pory"
	lock
# 3 "data/scripts/ow_encounters.pory"
	faceplayer
# 4 "data/scripts/ow_encounters.pory"
	callnative GetInteractedEncounterSpecies_Script
# 5 "data/scripts/ow_encounters.pory"
	callnative GetInteractedEncounterLevel_Script
# 6 "data/scripts/ow_encounters.pory"
	setwildbattleow
# 7 "data/scripts/ow_encounters.pory"
	dowildbattle
# 8 "data/scripts/ow_encounters.pory"
	removeobject VAR_LAST_TALKED
# 9 "data/scripts/ow_encounters.pory"
	callnative ClearInteractedEncounterSpecies_Script
# 10 "data/scripts/ow_encounters.pory"
	clearflag FLAG_OVERWORLD_POKEMON_ENCOUNTER_OBJECTS
# 11 "data/scripts/ow_encounters.pory"
	clearflag FLAG_TRAINER_SEE_SCRIPTS
# 12 "data/scripts/ow_encounters.pory"
	release
	end

