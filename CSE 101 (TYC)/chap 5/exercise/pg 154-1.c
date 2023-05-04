#include<stdio.h>
int main()
{
    int threed[3][3][3];
    int i ,j,k,x;
    x=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                threed[i][j][k]=x;
                x++;
                printf("%d " , threed[i][j][k]);
            }
        }
    }return 0 ;
}
