#include<stdio.h>

int main()
{
int *p,q;
p=&q;
q=1;
printf("%p\n",p);

p=p+2;
printf("%d %p",q,p);

return 0;
}
