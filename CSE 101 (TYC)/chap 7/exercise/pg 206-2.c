#include<stdio.h>

double avg(void);
int main(void)
{
printf ("%f",avg());

return 0;
}

double avg(void)
{
int i;
double sum,num;

sum=0.0;
for(i=0;i<10;i++){
    printf("enter next number: ");
    scanf("%lf",&sum);
    sum=sum+num;
    }

return sum/10.0;
}
