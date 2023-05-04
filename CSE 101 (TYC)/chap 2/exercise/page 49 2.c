#include<stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    if(count<100)
    {
        printf("number is less than 100");
        printf("its square is %d" , count*count);
    }
return 0;
}
