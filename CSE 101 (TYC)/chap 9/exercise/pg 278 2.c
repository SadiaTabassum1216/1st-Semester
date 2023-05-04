#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[80] , ch;
    int count=0;
    if((fp = fopen("Display","a+"))==NULL)
    {
        printf("cannot open  file\n");
        exit(1);
    }

    while(!feof(fp))
    {
        fgets(str , 79 , fp);
        printf("%s",str);
        count++;

        if(count==20)
        {
            printf("\n\nMore?(y/n)  ");
            gets(str);
            if(toupper(*str)=='N')
            {
                break;
            }
            count=0;
        }
    }
    fclose(fp);
    return 0 ;
}
