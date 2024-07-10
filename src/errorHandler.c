#include "errorFunc.h"
#include <stdlib.h>
#include <stdio.h>

void errorMess(char *message, int code){
    if(message != NULL){
        printf("ERROR - %s\n", message);
    }
    
    switch (code) {
        case 101:
            //call the menu of the tags for help
        break;

        default:
        break;
    }

    exit(EXIT_FAILURE); 
}
