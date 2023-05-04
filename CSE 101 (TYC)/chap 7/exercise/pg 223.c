#include<stdio.h>

double f_to_m(double f);

int main(void)
{
double feet;

printf("enter feet: ");
scanf("%lf",&feet);
printf("meters: %f",f_to_m(feet));

return 0;
}

//use old style declaration
double f_to_m(double f)
{

return f/3.28;
}
