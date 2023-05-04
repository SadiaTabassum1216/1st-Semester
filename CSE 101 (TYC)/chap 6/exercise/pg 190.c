#include<stdio.h>
#include<string.h>

int main()
{
int *fp,**mfp,val;

fp=&val;
mfp=&fp;

**mfp=123;

printf("%d  %d  %d\n",val,*fp,**mfp);
printf("%p %p %p\n",&val,fp,*mfp);

return 0;
}
