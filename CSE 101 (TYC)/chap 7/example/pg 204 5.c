#include<stdio.h>

int *init(int x);
int count;

int main(void)
{
int *p;

p=init(110);
printf("count (through p) is %d", *p);

return 0;
}

int *init(int x)
{
count=x;

return &count;
}
