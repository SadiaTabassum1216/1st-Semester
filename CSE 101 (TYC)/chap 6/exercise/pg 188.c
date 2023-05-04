#include<stdio.h>
#include<string.h>

int main()
{
char *p[]={"yes","no","may be"};
int i;
char ques[80];

printf("Enter your question: ");
gets(ques);
i=strlen(ques)%3;

printf(p[i]);

return 0;
}
