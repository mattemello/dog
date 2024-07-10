#include <stdlib.h>
#include <stdio.h>
#include "dogFunc.h"
#include "errorFunc.h"

int main(int argc, char** argv) {

    if(argc < 2) {
        errorMess("not enough argument in the command line\n", 100);
    }

    int position = controllFlags(argc, argv);

    if(position != -1){
        printFile(argv[position]);
    }
    

    return 0;
}
