#ifndef GUARD_CONFIG_SUMMARY_SCREEN_H
#define GUARD_CONFIG_SUMMARY_SCREEN_H

// Settings
#define P_SUMMARY_SCREEN_MOVE_RELEARNER  FALSE   // If TRUE, shows an option for Pokémon to relearn moves on the summary screen moves page.
#define P_SUMMARY_MOVE_RELEARNER_FULL_PP FALSE   // If TRUE, the move relearner in the summary screen restores relearned moves' PP to full.
#define P_SUMMARY_SCREEN_RENAME          FALSE
#define P_SUMMARY_SCREEN_RENAME          TRUE   // If TRUE, an option to change Pokémon nicknames replaces the cancel prompt on the summary screen info page.
#define P_SUMMARY_SCREEN_IV_EV_INFO      FALSE  // If TRUE, will allow player to cycle through the Stats, IVs, and EVs in the summary screen skills page.
#define P_SUMMARY_SCREEN_IV_EV_BOX_ONLY  FALSE  // If TRUE, will allow player to cycle through the Stats, IVs, and EVs in the summary screen skills page, but only in the PC storage box.
#define P_SUMMARY_SCREEN_IV_EV_TILESET   FALSE  // If TRUE, loads an alternate tileset to allow changing the "STATS" label in the summary screen skills page. Note: if it's still loading the alternate tileset after changing this and recompiling, you may need a `make clean` before compilation.
#define P_SUMMARY_SCREEN_IV_EV_VALUES    FALSE  // If TRUE, will show the actual IV value instead of the letter grade.
/* 
LETTER GRADE GUIDE:

    F = 0
    D = 1 - 15
    C = 16 - 25
    B = 26 - 29
    A = 30
    S = 31

Info taken from https://bulbapedia.bulbagarden.net/wiki/Stats_judge.
*/
#define P_SUMMARY_SCREEN_IV_ONLY         FALSE  // If TRUE, will only show IV info in the summary screen.
#define P_SUMMARY_SCREEN_EV_ONLY         FALSE  // If TRUE, will only show EV info in the summary screen.

// Flags
#define P_FLAG_SUMMARY_SCREEN_IV_EV_INFO 0      // If this flag is set, will allow player to cycle through the Stats, IVs, and EVs in the summary screen skills page. Note: if P_SUMMARY_SCREEN_IV_EV_INFO is TRUE, this flag does nothing.

//Summary Screen Expanded Branch

//Shadow Settings
#define P_SUMMARY_SCREEN_MON_SHADOWS FALSE //If TRUE, the mon sprite will have a shadow loaded behind it.

//Ability Settings Settings
#define P_SUMMARY_SCREEN_EXPAND_ABILITY_DESCRIPTION FALSE //If TRUE, the ability description will be expanded to show the full description of the ability instead of just one line.
#define P_SUMMARY_SCREEN_EXPAND_MOVE_DESCRIPTION FALSE //If TRUE, the ability description will be expanded to show the full description of the move instead of just one line.

//This should only be used if P_SUMMARY_SCREEN_EXPAND_ABILITY_DESCRIPTION is TRUE
//Don't change these values unless you know what you're doing.
//These values i put here cause they are the ones i use in my game.
//these are the best values i found.
//if you do wish to change these values, you need to know a few things.
//96, is the max characters that i can fit in the summary screen (Otherwise it wil go off screen).
//if you want to use more, change the tilemap to be to ur liking.
//if you want to use less, it will leave blank spaces at the end of the string.
#define MAX_ABILITY_DESCRIPTION_LENGTH 96 //The maximum length of the ability description string.
#define MAX_ABILITY_DESCRIPTION_WIDTH  149 //The maximum width of the ability description string.
#define MAX_MOVE_DESCRIPTION_LENGTH    96 //The maximum length of the move description string.
#define MAX_MOVE_DESCRIPTION_WIDTH     159 //The maximum length of the move description string.
//Color Settings
#define P_SUMMARY_SCREEN_ABILITY_COLOR FALSE //If TRUE, the ability description will be have to its color changes if its a Hidden Ability.
#define P_SUMMARY_SCREEN_BACKGROUND_COLOR FALSE //If TRUE, the background color of the summary screen will be changed when the mon is shiny.

//Item Settings
#define P_SUMMARY_SCREEN_ITEM_ICON FALSE //If TRUE, the item icon will be shown in the summary screen, next to the name.

#endif // GUARD_CONFIG_SUMMARY_SCREEN_H
