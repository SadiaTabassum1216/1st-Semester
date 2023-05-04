#include<stdio.h>

int main()
{
int answer,count,chances,right;

for(count=1; count<11; count++){
printf("what is %d+%d?",count ,count);
scanf("%d",answer);

if(answer==count+count)
    printf("right");
else
    printf("sorry, you are wrong.\n");
    printf("try again.\n");

    right=0;
/*nested for*/
for(chances=0; chances<3 && !right; chances++){
   printf("what is %d+%d?",count ,count);
scanf("%d",answer);

if(answer==count+count){
    printf("right");
    right=1;
        }
}
/*if answer still wrong,tell user*/
if (!right)
    printf("the answer is %d.\n",count+count);
    }

return 0;
}
