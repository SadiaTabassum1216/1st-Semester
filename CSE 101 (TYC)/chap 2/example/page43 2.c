#include<stdio.h>

int main()
{
float num;
int choice;

printf("enter value: ");
scanf("%f", &num);

printf("1:feet to metre 2:metre to feet");
printf("enter choice");
scanf("%d",&choice);

if(choice==1)
    printf("%f",num/3.28);

if(choice==2)
    printf("%f",num*3.28);

return 0;
}
