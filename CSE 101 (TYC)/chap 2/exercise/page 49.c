#include<stdio.h>
int main ()
{
 int a ,b;
 char x;
 printf("enter the num");
 scanf("%d %d" , &a, &b);
 printf("enter the operation");
 getchar();
 scanf("%c" , &x);
 if(x=='+')
 {
     printf("add is %d", a+b);
 }
 if (x=='-')
 {
     printf("sub is %d" , a-b);
 }
 return 0;
}

