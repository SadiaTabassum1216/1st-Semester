#include<stdio.h>
int main()
{
    float num;
    int h;
    printf("enter value");
    scanf("%f", &num);
    printf("1.feet to meters , 2.meters to feet. \n enter choice");
    scanf("%d", &h);
    if(h==1)
    {
        printf("%f", num/3.28);
    }
    if(h==2)
    {
        printf("%f", num*3.28);
    }
return 0;
}
