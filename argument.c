#include <stdio.h>
void local(int);
void local2(int*);
int main(void)
{
    // There are two ways of transferring data.
    // 1. Call by Value
    // 2. Call by Reference
    int var = 10;

    printf("변수 var의 초깃값은 %d입니다.\n", var);
    local(var);
    printf("local() 함수 호출 후 변수 var의 값은 %d입니다.\n", var);


    int var2 = 10;

    printf("변수 var의 초깃값은 %d입니다.\n", var2);  
    local2(&var);
    printf("local2() 함수 호출 후 변수 var의 값은 %d입니다.\n", var);

    return 0;

}

void local(int num)
{
    num += 10;
} 

void local2(int* num)
{
    *num += 10;
}  