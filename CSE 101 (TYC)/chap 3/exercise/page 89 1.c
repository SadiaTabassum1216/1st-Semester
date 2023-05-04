#include<stdio.h>
int main()
{
  int a,i,p,j;

for(j=2;j<1000;j++)
{
      for(i=2;i<j/2;i++)
      {
            p=0;
            if(j%i==0)
            {
                break;
            }
            else
                p++;
      }
      if(p!=0){
        printf("%d\n",j);
      }
}
    return 0;
}
