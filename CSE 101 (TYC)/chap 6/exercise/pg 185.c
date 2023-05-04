#include<stdio.h>
#include<string.h>

int main()
{
char *p1,*p2,*p3;

p1="one";
p2="tWo";
p3="three";

printf("%5s %5s %5s\n",p1,p2,p3);
printf("%5s %5s %5s\n",p1,p3,p2);
printf("%5s %5s %5s\n",p2,p1,p3);
printf("%5s %5s %5s\n",p2,p3,p1);
printf("%5s %5s %5s\n",p3,p2,p1);
printf("%5s %5s %5s\n",p3,p1,p2);

return 0;

}
