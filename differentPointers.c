#include <stdio.h>

int main()
{

    // Pointer to pointers are pointer variables that point to other pointer variables.
    // two * operators are used, and are also called double pointers
    int num = 10; // 변수 선언

    int *ptr_num = &num; // 포인터 선언

    int **pptr_num = &ptr_num; // 포인터의 포인터 선언

    printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);

    printf("포인터  ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *ptr_num);

    printf("포인터의 포인터 pptr_num가 가리키는 주소에 저장된 포인터가 가리키는 주소에 저장된 값은 %d입니다.\n",

           **pptr_num);

    // void pointers are, unlike other pointers have no explicit data type.
    // Thus it can point to any variable/function/pointers, but cannot do any pointer operations and memory references.
    // void pointers have no purpose other than saving a memory address.
    // So to use a void pointer, one must explicitly change its type in order to make use of it.

    int num = 10; // 변수 선언

    void *ptr_num = &num; // void 포인터 선언

    printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);

    printf("void 포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int *)ptr_num);

    *(int *)ptr_num = 20; // void 포인터를 통한 메모리 접근

    printf("void 포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int *)ptr_num);

    // functions defined within the program, are all alocated a part of memory when the program executes.
    // then the name of the function acts as a constant pointer to the starting address of where the actual code is located.
    // pointer variables that point to the start of a function are called function pointers.

    // the data type of a function pointer is defined by the parameters and the return value.
    // so one must know the prototype of the function in order to create an appropriate function pointer.

    // function prototype
    void functions(int, int);

    // function pointer
    void (*ptr_func)(int, int);
    //*ptr_func must be in parentheses due to operator precedence

    // function pointers are especially useful when a function is used as a parameter to another function much like a callback function
    // e.g.

    double (*calc)(double, double) = NULL; // 함수 포인터 선언

    double result = 0;

    double num01 = 3, num02 = 5;

    char oper = '*';

    switch (oper)

    {

    case '+':

        calc = 'add';

        break;

    case '-':

        calc = 'sub';

        break;

    case '*':

        calc = 'mul';

        break;

    case '/':

        calc = 'div';

        break;

    default:

        puts("사칙연산(+, -, *, /)만을 지원합니다.");
    }

    result = calculator(num01, num02, calc);

    printf("사칙 연산의 결과는 %lf입니다.\n", result);




    //NULL pointers are just pointers that are initialized with null.

    void *testPtr = NULL;

    return 0;
}
