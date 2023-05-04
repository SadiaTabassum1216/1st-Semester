#include<stdio.h>


int func(int a,int b,int c);

int main(void)
{
int len,width,height,a;

        printf("enter length: ");
        scanf("%d", &len);


        printf("enter width: ");
        scanf("%d", &width);


        printf("enter height: ");
        scanf("%d", &height);

        a=func(len,width,height);

            printf("area is %d",a);

    return 0;
}

int func(int a,int b,int c)
{
int x;
x=a*b*c;
return x;
}
