#include<stdio.h>
int main()
{
int i,g,l,n;

    printf("how many times do you want to run it?");
    scanf("%d",n);

i=0;
do{

    printf("gallons: ");
    scanf("%d",&g);

    l=g/3.7854;

    printf("liters=%d",l);
    i++;

    } while(i<n);
}
