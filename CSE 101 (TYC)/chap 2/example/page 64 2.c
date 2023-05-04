#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 1st num");
    scanf("%d" , &a);
    printf("enter 2nd num");
    scanf("%d", &b);
    printf("a<b %d\n" , a<b);
    printf("a<=b %d\n" , a<=b);
    printf("a==b %d\n" , a==b);
    printf("a>b %d\n" , a>=b);
    printf("a>=b %d\n" , a>=b);
    printf("a&&b %d\n" , a&&b);
    printf("a||b %d\n" , a||b);
    printf("!a !b %d %d\n" , !a, !b);
return 0 ;
}
