#include<stdio.h>
#include<stdio.h>
int main()
{
    char bigstr[1000]="", str[80];
    for(;;)
    {
        printf("enter a string");
        gets(str);
        if(!strcmp(str, "quit"))
            break;
        strcat(str,"\n");
        if(strlen(bigstr)+strlen(str)>=1000)
            break;
        strcat(bigstr,str);
    }
    printf(bigstr);
    return 0;
}
