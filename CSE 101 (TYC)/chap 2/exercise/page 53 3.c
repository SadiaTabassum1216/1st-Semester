#include<stdio.h>
int main ()
{
    int x,i;
    printf("enter the num");
    scanf("%d",&x);
    for(i=1; i<x ; i++)
    {
        if (x%i==0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
