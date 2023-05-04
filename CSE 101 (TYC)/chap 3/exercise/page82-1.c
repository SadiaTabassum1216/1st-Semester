#include<stdio.h>
int main()
{
    int d,s,t,n,i;

    printf("how many times do you want to run it?");
    scanf("%d",n);

    for(i=0;i<n;i++){

    printf("distance: ");
    scanf("%d",&d);

    printf("speed: ");
    scanf("%d",&s);

    t=d/s;

    printf("time is %d\n",t);
    }

    return 0;
}
