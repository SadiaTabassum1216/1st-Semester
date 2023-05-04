#include<stdio.h>


int func(int a,int b);


int main(void)

{
int len,width,a;

        printf("enter length: ");
        scanf("%d", &len);


        printf("enter width: ");
        scanf("%d", &width);

        a=func(len,width);

            printf("area is %d",a);

    return 0;
}

int func(int a,int b)
{
int c;
c=a*b;
return c;
}
