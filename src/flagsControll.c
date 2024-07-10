#include "dogFunc.h"
#include "errorFunc.h"
#include <string.h>
#include <stdlib.h>

int controllFlags(int argc, char **args){
    int position = -1;
    for(int i = 1; i < argc; i++){
        if(args[i][0] == '-'){
            for(size_t j = 1; j < strlen(args[i]); j++){
               flagsOn(args[i][j]); 
            }
        }else{
            position = i;
        }
    }

    return position;
}
