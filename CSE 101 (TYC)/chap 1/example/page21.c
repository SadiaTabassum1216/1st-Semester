/*this program converts earth days into jovian years.*/
#include<stdio.h>

int main(void)
{
    float e_days; /*number of earth days*/
    float j_years; /*equivalent number of jovian years */

    /*get number of earth days*/
    printf("enter number of earth days: ");
    scanf("%f",e_days);

    /*now, compute jovian years*/
    j_years=e_days/(365.0*12.0);

    /*display the answer*/
    printf("equivalent jovian years: %f", j_years);

    return 0;


}
