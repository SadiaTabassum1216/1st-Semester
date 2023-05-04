#include<stdio.h>
#include<string.h>

int main()
{
    char str[80];
    int k;
    for(;;)
    {
        printf("enter a string :");
        gets(str);
        k=strcmp("quit" , str);
        if(k==0)
        {
            break;
        }
    }
    return 0 ;
}
