#include<stdio.h>
int func(int a);

int main(void)

{
int t;
t=func(t);

    printf("the number of seconds in a year is %d",t);

return 0;

}

int func(int a)
{
a=60*60*24*365;
return a;
}
