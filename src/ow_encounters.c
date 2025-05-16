#include "global.h"
#include "script.h"
#include "event_data.h"
#include "mystery_gift.h"
#include "util.h"
#include "constants/event_objects.h"
#include "constants/map_scripts.h"
#include "main_menu.h"
#include "main.h"
#include "random.h"
#include "battle_setup.h"
#include "string_util.h"
#include "strings.h"
#include "pokemon_storage_system.h"
#include "task.h"
#include "field_weather.h"
#include "new_game.h"
#include "start_menu.h"
#include "constants/metatile_labels.h"
#include "fieldmap.h"
#include "field_screen_effect.h"
#include "overworld.h"
#include "event_scripts.h"
#include "sound.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "data.h"
#include "constants/battle.h"
#include "event_object_movement.h"
#include "script_pokemon_util.h"
#include "palette.h"
#include "decompress.h"
#include "window.h"
#include "text.h"
#include "menu.h"
#include "gpu_regs.h"
#include "constants/weather.h"
#include "global.fieldmap.h"
#include "tilesets.h"
#include "constants/decorations.h"
#include "decoration_inventory.h"
#include "decoration.h"
#include "pokedex.h"
#include "pokedex_plus_hgss.h"
#include "field_player_avatar.h"
#include "naming_screen.h"
#include "config/general.h"
#include "field_effect.h"
#include "trainer_pokemon_sprites.h"
#include "script_menu.h"
#include "pokemon_summary_screen.h"
#include "graphics.h"
#include "ow_encounters.h"
#include "international_string_util.h"
#include "constants/trainer_types.h"

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

#define ENCOUNTER_LOC_AMETHYST_HIGHLANDS 	0
#define ENCOUNTER_LOC_SILENT_VALLEY 		1
#define ENCOUNTER_LOC_B3_WATER 				2
#define ENCOUNTER_LOC_A2_CAVE 				3
#define ENCOUNTER_LOC_A2_WATER 				4
#define ENCOUNTER_LOC_NONE					5
#define PLAYER_PARTY_OVERRIDE			 0xFF

#define MAX_SPECIES_IN_TABLE 10
const u16 WildEncounterTable[][MAX_SPECIES_IN_TABLE][2] =
{
	[ENCOUNTER_LOC_AMETHYST_HIGHLANDS] = {
		{SPECIES_GLIMMET,		25},
		{SPECIES_SABLEYE,		20},
		{SPECIES_SNEASEL,		20},
		{SPECIES_MORELULL,		15},
		{SPECIES_SWINUB,		15},
		{SPECIES_TEDDIURSA,		5},
	},

	[ENCOUNTER_LOC_SILENT_VALLEY] = {
		{SPECIES_SNEASEL,		35},
		{SPECIES_SWINUB,		25},
		{SPECIES_ZIGZAGOON_GALAR,		20},
		{SPECIES_TEDDIURSA,		10},
		{SPECIES_VULPIX_ALOLA,		5},
		{SPECIES_LEDYBA,		5},
	},

	[ENCOUNTER_LOC_B3_WATER] = {
		
		{SPECIES_STARYU,		25},
		{SPECIES_TENTACOOL,		25},
		{SPECIES_SKRELP,		20},
		{SPECIES_TYNAMO,		15},
		{SPECIES_FEEBAS,		10},
		{SPECIES_RELICANTH,		5},
	},

	[ENCOUNTER_LOC_A2_CAVE] = {
		
		
		{SPECIES_NINCADA,		25},
		{SPECIES_SURSKIT,		25},
		{SPECIES_SHROOMISH,		20},
		{SPECIES_SKORUPI,		15},
		{SPECIES_DWEBBLE,		15},
	},

	[ENCOUNTER_LOC_A2_WATER] = {
		
		{SPECIES_MAGIKARP,		25},
		{SPECIES_TENTACOOL,		25},
		{SPECIES_CARVANHA,		25},
		{SPECIES_SURSKIT,		25},
	},


	{[ENCOUNTER_LOC_NONE] = {0},}
};

//
//	Wild Encounter Code
//


#define currentEncounters gSaveBlock3Ptr->currentEncounters

u16 GetWildEncounterTableForObject(u16 localId)
{
    return GetObjectEventTemplateByLocalIdAndMap(localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup)->trainerRange_berryTreeId;
}

void ClearAllWildEncounters(void)
{
	for(u16 i = 0; i < 0xFF; i++)
	{
		currentEncounters[i] = SPECIES_NONE;
	}
}

void ClearWildEncounter(u16 localId)
{
	currentEncounters[localId] = SPECIES_NONE;
}

u16 IsWildEncounterLoaded(u16 localId)
{
	return (currentEncounters[localId] != SPECIES_NONE);
}

u16 IsWildEncounterCompleted(u16 localId)
{
	return (currentEncounters[localId] == 0xFFFF);
}

u16 GetWildEncounter(u16 localId)
{
	return currentEncounters[localId];
}

void SetWildEncounter(u16 localId, u16 species)
{
	currentEncounters[localId] = species;
}

u16 GetInteractedEncounterSpecies(void)
{
	return GetWildEncounter(gSpecialVar_LastTalked);
}

void GetInteractedEncounterSpecies_Script(void)
{
	VarSet(VAR_WILD_ENCOUNTER_SPECIES, GetWildEncounter(gSpecialVar_LastTalked));
}

u16 GetWildEncounterLevel(u16 localId){
	u16 minLevel;
	u16 maxLevel;
	u16 randomLevel;
	
	switch (gObjectEvents[localId].trainerRange_berryTreeId){
		case 0:
			minLevel = 3;
			maxLevel = 5;
			break;
		case 1:
			minLevel = 3;
			maxLevel = 6;
			break;
		default:
			minLevel = 1;
			maxLevel = 2;
			break;
	}

	randomLevel = ((Random() % (maxLevel - minLevel + 1)) + minLevel);
	return randomLevel;
}

void GetInteractedEncounterLevel_Script(void)
{
	VarSet(VAR_WILD_ENCOUNTER_LEVEL, GetWildEncounterLevel(gSpecialVar_LastTalked));
}



void ClearInteractedEncounterSpecies_Script(void)
{
	currentEncounters[gSpecialVar_LastTalked] = 0xFFFF;
}


#define SPECIES_VAL 0
#define ENCOUNTER_VAL 1
void CreateWildEncounter(u16 localId)
{
	u16 i = 0;
	u8 encounterTableIndex = GetWildEncounterTableForObject(localId);
	u16 randomValue = (Random() % 100) + 1;
	u16 counter = 0;

	if(encounterTableIndex == PLAYER_PARTY_OVERRIDE)
	{
		u16 species = GetMonData(&gPlayerParty[localId - 2], MON_DATA_SPECIES);
		SetWildEncounter(localId, species);
		return;
	}

	for(i = 0; i < MAX_SPECIES_IN_TABLE; i++)
	{
		counter += WildEncounterTable[encounterTableIndex][i][ENCOUNTER_VAL];
		if(randomValue <= counter)
			break;
	}

	SetWildEncounter(localId, WildEncounterTable[encounterTableIndex][i][SPECIES_VAL]);
}

u16 GetWildEncounterSpeciesFromObjectEvent(struct ObjectEvent *objectEvent, u8 localId, u8 onReturnToField)
{
	if(objectEvent != NULL)
	{
		localId = objectEvent->localId;
	}

	if(localId == 0xFF)
		return SPECIES_ARCEUS;

	if(IsWildEncounterLoaded(localId))
	{
		return GetWildEncounter(localId);
	}
	else
	{
		CreateWildEncounter(localId);
		return GetWildEncounter(localId);
	}
	
}
