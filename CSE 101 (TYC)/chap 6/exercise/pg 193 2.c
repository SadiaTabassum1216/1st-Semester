#include<stdio.h>

void new(int *p);

int main()
{
int i;

new(&i);

printf("%d",i);

return 0;
}

void new(int *p)
{
*p=-1;
}
