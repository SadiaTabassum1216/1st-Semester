#include<stdio.h>
#include<string.h>

int main()
{
char *p[]={
"include exceeds field width",
"out of range",
"printer not turned on",
"paper out",
"disk full",
"disk write error"
};

int i;

printf("Enter a number: ");
scanf("%d",&i);

printf(p[i]);

return 0;
}

