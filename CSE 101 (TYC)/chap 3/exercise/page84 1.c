#include<stdio.h>
int main()
{
    int d,s,t,n,i;

    printf("how many times do you want to run it?");
    scanf("%d",n);

    i=0;
    while(i<n){

    printf("distance: ");
    scanf("%d",&d);

    printf("speed: ");
    scanf("%d",&s);

    t=d/s;

    printf("time is %d\n",t);
    i++;
    }

    return 0;
}
