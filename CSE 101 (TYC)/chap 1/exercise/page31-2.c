#include<stdio.h>

float convert(float d);

float main()
{
    float d,p;

    printf("enter doller: ");
    scanf("%f",&d);

    p=convert(d);
    printf("pound is %f",p);

}

float convert(float d)
{
float result;
    result=d*2;

    return result;

}
