#include<stdio.h>
float soundspeed(float d)
{
 float t;
 int v;
 v=1129;
 t=d/v;
 return t;
}
int main ()
{
    float x , res;
    scanf("%f",&x);
    res=soundspeed(x);
    printf("ans is %f",res);
}
