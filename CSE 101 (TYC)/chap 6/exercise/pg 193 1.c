#include<stdio.h>

void mystrcat(char *first, char *second);

int main()
{
char str1[80],str2[80];

printf("Enter the first string: ");
gets(str1);
printf("Enter the second string: ");
gets(str2);

printf("\nYour new string is:\n");
mystrcat(str1,str2);
printf(str1);

return 0;
}

void mystrcat(char *first, char *second)
{
int i;

for(i=0;*first;i++)
    *first++;

for(;*second;i++)
    *first++=*second++;

    *first='\0';
}
