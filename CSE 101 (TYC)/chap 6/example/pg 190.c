#include<stdio.h>
#include<string.h>

int main()
{
char *p,**mp,str[80];

p=str;
mp=&p;

printf("Enter your name: ");
gets(str);

printf("Hi %s\n",*mp);
printf("Hi %s\n",p);
printf("Hi %s",str);

return 0;
}
