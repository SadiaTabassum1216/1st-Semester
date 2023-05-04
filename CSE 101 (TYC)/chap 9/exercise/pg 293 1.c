#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char fname[80];
    printf("Enter the name of file to erase: ");
    gets(fname);
    printf("are you sure? ");
    if(toupper(getchar())=='Y')
        if(remove(fname))
            printf("\n file not found or write protected");
        else
            printf("\nRemoved successfully.");

    return 0 ;
}
