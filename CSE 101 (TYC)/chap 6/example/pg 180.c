#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
int i;
char str[80];

printf("Enter a string: ");
gets(str);

for(i=0;str[i];i++){
    str[i]=toupper(str[i]);
    }
puts(str);

for(i=0;str[i];i++){
    str[i]=tolower(str[i]);
    }
puts(str);

return 0;
}
