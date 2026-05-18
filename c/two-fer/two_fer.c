#include "two_fer.h"
#include <stdio.h>

void two_fer(char *buffer, const char *name){
    const char *who;
    if(name == NULL || name[0] == '\0'){
        who = "you";
    }else{
        who = name;
    }
    sprintf(buffer, "One for %s, one for me.", who);
}
