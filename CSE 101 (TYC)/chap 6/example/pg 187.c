#include<stdio.h>
#include<string.h>

char *p[][2]={
"Red delicious","red",
"golden delicious","yellow",
"winesap","red",
"gala","orange",
"lodi","green",
"mutsu","yellow",
"",""
};

int main()
{
int i;
char apple[80];

printf("Enter name of apple: ");
gets(apple);

for(i=0;*p[i][0];i++){
    if(!strcmp(apple,p[i][0]))
        printf("%s is %s.\n",apple,p[i][1]);
    }

    return 0;
}
