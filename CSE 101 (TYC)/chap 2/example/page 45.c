#include<stdio.h>
int main ()
{
     int a,b;
     printf("enter the numbers");
     scanf("%d%d" , &a,&b);
     if(b==0)
     {
         printf("cannot divide by zero");
     }
     else{printf("ans is %d", a/b);}
     return 0;
}
