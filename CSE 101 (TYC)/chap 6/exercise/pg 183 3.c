#include<stdio.h>
#include<string.h>

int main()
{
char str[80];
int i;

printf("Enter a string: ");
gets(str);

for(i=0;i<strlen(str);i++){
    if(str[i]==' '){
        i++;
        break;
    }

    }
for(;i<strlen(str);i++){
    printf("%c",str[i]);
    }

return 0;
}
