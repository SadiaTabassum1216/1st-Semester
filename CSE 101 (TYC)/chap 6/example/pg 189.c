#include<stdio.h>
#include<string.h>

int main()
{
float *fp,**mfp,val;

fp=&val;
mfp=&fp;

**mfp=123.456;

printf("%.3f  %.3f  %.3f",val,*fp,**mfp);

return 0;
}
