#include "grains.h"

uint64_t square(uint8_t index)
{
    int i=1;
    uint64_t num_of_grains=1;
    if(index>=1){
        for(i=0; i<(index-1); i++){
            num_of_grains=num_of_grains*2;
        }
    }else{
          num_of_grains = 0;
    }
    return num_of_grains;
}

uint64_t total(void)
{
    return UINT64_MAX; 
}