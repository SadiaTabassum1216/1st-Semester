#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
int i;

if(argc!=3){
    printf("you must specify two arguements.");
    exit(1);
    }

    printf("%f",atof(argv[1])+atof(argv[2]));

    return 0;
    }
