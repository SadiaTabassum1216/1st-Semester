#include<stdio.h>

float func(float a);

int main()
{
float e,m;

    printf("enter weight on earth: ");
    scanf("%f",&e);

        m=func(e);

    printf("the weight on moon is %f",m);

    return 0;
}

float func(float a)
{
float b;
b=a*17/100;
return b;
}
