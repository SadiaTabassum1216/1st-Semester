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

i=strcmp(argv[1],argv[2]);
if(i<0)
    printf("%s>%s",argv[2],argv[1]);
else if(i>0)
    printf("%s>%s",argv[1],argv[2]);
else
    printf("they are the same.");

    return 0;
}
