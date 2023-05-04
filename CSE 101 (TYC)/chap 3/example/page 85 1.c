#include<stdio.h>
#include<conio.h>

int main()
{
int a,b;
char ch;

printf("do you want to:\n");
printf("add,subtract,multiply or divide?\n");

/*force user to enter a valid response*/
do  {

printf("enter first letter: ");
ch= getchar();
    }
    while(ch!='A' && ch!='S' && ch!='M' && ch!='D');
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
