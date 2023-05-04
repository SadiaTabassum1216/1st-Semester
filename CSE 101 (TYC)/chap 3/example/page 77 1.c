#include<stdio.h>

int main()
{
int a,b;
char ch;

printf("do you want to add,subtract, multiply or divide? enter the first letter: ");
ch=getchar();
printf("\n");

printf("enter first number: ");
scanf("%d",&a);

printf("enter second number: ");
scanf("%d",&b);

if(ch=='A') printf("%d",a+b);
else if(ch=='S') printf("%d",a-b);
else if(ch=='M') printf("%d",a*b);
else if(ch=='D' && b!=0) printf("%d",a/b);

return 0;
}

