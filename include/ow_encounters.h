#ifndef GUARD_OW_ENCOUNTERS
#define GUARD_OW_ENCOUNTERS

#include "main.h"

u16 GetWildEncounterSpeciesFromObjectEvent(struct ObjectEvent *objectEvent, u8 localId, u8 onReturnToField);
void ClearWildEncounter(u16 localId);
u16 IsWildEncounterLoaded(u16 localId);
u16 IsWildEncounterCompleted(u16 localId);

#endif // GUARD_OW_ENCOUNTERS