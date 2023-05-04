/*this program converts earth days into jovian years.*/
#include<stdio.h>

int func(int a);

int main(void)
{
    float e_days;
    float j_years;

    printf("enter number of earth days: ");
    scanf("%f",e_days);


    j_years=func(e_days);


    printf("equivalent jovian years: %f", j_years);

    return 0;

}


int func(int a)
{
int j;
j=a/(365.0*12.0);
return j;
}
