#include<stdio.h>
int main()
{
  int i;
  char a;
  float t1,t2,t3;
  for(i=1;i<=100;i++)
  {
    t1=i*.1;
    t2=i*.15;
    t3=i*.2;

    printf("\nCheck more? click Y/N\n");
    a=getche();

    if(a=='N')
        break;

    printf("\n%f\t%f\t%f",t1,t2,t3);
  }

return 0;
}
