#include<stdio.h>

int main()
{
int *p,i;
p=&i;

for(i=0;i<10;i++){
    printf("%d\n",*p);
    }
return 0;
}
