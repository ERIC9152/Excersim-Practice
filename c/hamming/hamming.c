#include "hamming.h"

int compute(const char *lhs, const char *rhs){
    
    if(lhs==NULL||rhs==NULL)return -1;
    if(strlen(lhs)!=strlen(rhs))return -1;
    int num=0;
    size_t length =strlen(lhs);
    for(size_t i=0; i<length; i++)
    {
        if(lhs[i]!=rhs[i]){
            num = num+1;
        }
    }
    return num;
}