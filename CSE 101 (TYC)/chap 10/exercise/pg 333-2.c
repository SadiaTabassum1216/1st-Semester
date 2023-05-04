#include<stdio.h>
int main ()
{
    union t_type {
    long l;
    int i;

    }uvar;
    uvar.l=0L;
    uvar.i=100;
    printf("%ld",uvar.l);
    return 0;
}
