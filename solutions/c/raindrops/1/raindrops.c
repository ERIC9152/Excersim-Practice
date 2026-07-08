#include "raindrops.h"
#include <stdio.h>
#include <string.h>

void convert(char result[], int drops){
    int flag = 0;
    result[0] = '\0';
    if (drops%3==0){
        flag = 1;
        strcat(result, "Pling");
    }
    if (drops%5==0){
        flag = 1;
        strcat(result, "Plang");
    }
    if (drops%7==0){
        flag = 1;
        strcat(result, "Plong");
    }
    if (flag ==0 ){
        sprintf(result, "%d", drops);
    }
}