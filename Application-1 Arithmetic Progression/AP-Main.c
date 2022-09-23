#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "AP-Functions.h"

int main(int argc, char *argv[])
{
    int opt;

    if(argc>1){
        opt = atoi(argv[1]);
        ProcessArgument(opt);
    }
    return 0;
}
