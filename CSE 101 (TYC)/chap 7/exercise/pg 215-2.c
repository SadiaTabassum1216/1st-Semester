#include<stdio.h>

void prompt(char *msg,char *str);

int main(void)
{
char str[80];

prompt("enter a string: ",str);
printf("your string is: %s",str);

return 0;
}


void prompt(char *msg,char *p)
{
printf(msg);
gets(p);
}
