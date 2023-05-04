#include<stdio.h>

float func1(int a,int b);
float func2(int a,int b);

    int main ()
{

    float a,b,c,d;

    a=func1(4,2);
    b=func2(5,2);
    c=func1(5,2);
    d=func2(4,2);

    printf("%f ",a);
    printf("%f ",b);
    printf("%f ",c);
    printf("%f ",d);

    return 0;
}

float func1(int a,int b)
{
int c;
c=a/b;
return c;
}

float func2(int a,int b)
{
int c;
c=a%b;
return c;
}
