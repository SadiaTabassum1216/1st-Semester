#include<stdio.h>

int func(int i);

int main(void)

{
    int i;

    i=func(10);

        printf("this is i:%d", i);

    return 0;
}

int func(int i)
{
int a;
a=-i;
return a;
}
