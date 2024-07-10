#include "dogFunc.h"
#include "errorFunc.h"
#include <stdio.h>
#include <stdlib.h> 

static int numberRow;
static int table;

static int MAX_DIM = 1024;

void flagsOn(char flag){
    switch (flag) {
        case 'n':
            numberRow = 1;
        break;
        case 't':
            table = 1;
        break;
        case 'v':
            //print the version
        break;
        case 'h':
            //print the help
        break;
        default:
            errorMess("the type of tags you use does not extist", 101); 

    }
}

void printFile(const char *path){
    FILE* inputFile = fopen(path, "r");
    if(inputFile == NULL){
        errorMess("the path file is wrong, file not found", 102);
    }

    int i = 0;
    char buffer[MAX_DIM];

   while(fgets(buffer, MAX_DIM, inputFile) != NULL){
        if(numberRow){
            printf("%d | %s\n", i, buffer);
        }else if(table){
            // to do
        }else{
            printf("%s\n", buffer);
        }
    }


    exit(EXIT_SUCCESS);

}
