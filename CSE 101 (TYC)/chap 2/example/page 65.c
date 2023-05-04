#include<stdio.h>
int xor ( int x , int y)
{
     return (x||y)&&!(x&&y);
}
int main()
{
    int a,b;
    printf("ENTER a (O  or 1 )");
    scanf("%d" , &a);
    printf("ENTER b (O  or 1 )");
    scanf("%d" , &b);
    printf("a AND b %d\n", a&&b);
    printf("a OR b %d\n", a||b);
    printf("a xor b %d\n", xor(a,b));

    return 0 ;
}
