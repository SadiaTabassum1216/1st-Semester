#include<stdio.h>

int main()
{
int answer,count;
int again;
for(count=1;count<11;count++)
    {
    printf("what is %d+%d?",count,count);
    scanf("%d", &answer);

    if(answer==count+count)
        printf("%d",&answer);

    else
        printf("sorry,you are wrong.Try again.\n");

    printf("what is %d+%d?",count,count);
    scanf("%d", &answer);

    /*nested if*/
    if(answer==count+count)
        printf("%d",&answer);

    else
        printf("Wrong. the answer is %d.\n",count+count);

    }

return 0;
}
