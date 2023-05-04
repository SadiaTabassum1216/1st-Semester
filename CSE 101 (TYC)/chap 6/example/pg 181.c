#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
int i;
char str[80],*p;

printf("Enter a string: ");
gets(str);
p=str;

while(*p){
    *p=toupper(*p);
    p++;
    }
puts(str);

p=str;//reset p

while(*p){
    *p=tolower(*p);
    p++;
    }
printf("%s\n",str);

return 0;
}
