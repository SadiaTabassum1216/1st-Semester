#include<stdio.h>
int main()
{
    int threed[3][3][3];
    int i ,j,k,sum;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                threed[i][j][k]=(i+1)*(j+1)*(k+1);
                printf("%d " , threed[i][j][k]);
            }
        }
    }

    sum=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
         for(k=0;k<3;k++)
         sum=sum+threed[i][j][k];

    printf("\n%d" , sum);
    return 0 ;
}
