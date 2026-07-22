#include "dnd_character.h"
#include <stdlib.h>

int ability(void){
    int roll;
    int total = 0;
    int smallest = 7;
    for(int i = 0; i < 4; i++){
        roll = rand()%6 +1;
        total += roll;
        if(roll<smallest){
            smallest = roll;
        }
    }
    return (total - smallest);
}

int modifier(int score){
    if((score < 10) && (score-10) %2 != 0){
        return (score-10)/2 -1;
    }else{
        return (score-10)/2;
    }
}

dnd_character_t make_dnd_character(void){
    dnd_character_t character;
    
    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();

    character.hitpoints = 10+ modifier(character.constitution);
    return character;
}