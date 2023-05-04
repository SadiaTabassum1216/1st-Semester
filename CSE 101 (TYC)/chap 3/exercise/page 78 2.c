#include<stdio.h>
int main()
{
    float r,l,w,h,b,area;
    char g;
    printf("what do you want? \n a.circle \n b.rectangle \n c.triangle" );
    getchar();

    scanf("%c" , &g);
    if (g=='a')
    {
        scanf("%f" , &r);
        area=(3.14*r*r);
        printf("area of the circle is %f" , area);
    }
     else if (g=='b')
    {
        scanf("%f %f" , &l , &w);
        area=(l*w);
        printf("area of the rectangle is %f" , area);
    }
    else if (g=='c')
    {
        scanf("%f %f" , &h , &b);
        area=(.5*h*b);
        printf("area of the triangle is %f" , area);
    }
    return 0;

}
