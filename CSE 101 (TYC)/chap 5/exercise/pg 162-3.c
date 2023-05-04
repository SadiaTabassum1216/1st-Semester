#include<stdio.h>

int main()
{
    int stats[20];
    int i ,j, mode,count,mode1,count1;
    printf("enter 20 numbers");
    for(i=0;i<20;i++)
    {
        scanf("%d" , stats[i]);
    }
    count=0;
    for(i=0;i<20;i++)
    {
        mode1=stats[i];
        count1=1;

    for(j=i+1;j<20;j++)
        if(mode1==stats[j])
        count1++;

    if(count1>count)
    {
        mode=mode1;
        count=count1;
    }
    }

    printf("the mode is %d\n" , mode);

    return 0;
}
