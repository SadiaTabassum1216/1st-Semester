#include<stdio.h>
float o_to_c(float a);

int main()
{
float o,c;

    printf("enter ounces: ");
    scanf("%f",&o);

        c=o_to_c(o);

    printf("cups is %f",c);
    return 0;

}

float o_to_c(float a)
{
float result;
result=a/8;

return result;

}
