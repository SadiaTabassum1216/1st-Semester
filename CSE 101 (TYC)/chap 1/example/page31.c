#include<stdio.h>

void func1(void);

int main(void)
{
    func1();

return 0;
}

void func1(void)
{
    printf("this is printed");
    return; /*return with no value*/
    printf("this is never printed");

}
