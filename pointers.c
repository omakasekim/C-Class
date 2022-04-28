#include <stdio.h>

int main()
{

    // pointers are a "variable - like" reference that holds a memory address to another varaible, array, or structure
    // some tasks are easier with pointers than with variables
    //  * is the dereference operator - it is used to access the value stored at a memory address
    //  & is the address operator - called the ampersand; this returns the memory address of a given variable.

    int age = 21;
    int *pAge = &age;             // p is a pointer to age
    printf("%d\n", *pAge);        // prints the value stored at the memory address of p
    print("%p\n", pAge);          // prints the memory address of p
    printf("%d\n", sizeof(pAge)); // prints the size of p

    // Declaration of pointers
    // Type* name_of_pointer

    // Rule of thumb is to initialize as soon as a pointer is declared.

    // Type* name_of_pointer = &variable_name
    // or
    // Type* name_of_pointer = memory_address

    // There are limited number of operations that are available on pointer variables, such as increment and decrement

    // 1. addition, multiplication, division has no meaningful results on pointer variables
    // 2. subtraction between pointers are a relative distance between them on the memory
    // 3. you can add integers to a pointer variable, but not floats
    // 4. pointers can be assigned and compared to each other.

    char *ptr_char = 0;

    int *ptr_int = NULL;

    double *ptr_double = 0x00;

    printf("포인터 ptr_char가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_char);

    printf("포인터 ptr_int가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_int);

    printf("포인터 ptr_double이 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_double);

    printf("포인터 ptr_char가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_char);

    printf("포인터 ptr_int가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_int);

    printf("포인터 ptr_double이 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_double);

    // 포인터   ptr_char가 현재 가리키고 있는 주소값은 0입니다.

    // 포인터    ptr_int가 현재 가리키고 있는 주소값은 0입니다.

    // 포인터 ptr_double이 현재 가리키고 있는 주소값은 0입니다.

    // 포인터   ptr_char가 1 증가 후에 가리키고 있는 주소값은 0x1입니다.

    // 포인터    ptr_int가 1 증가 후에 가리키고 있는 주소값은 0x4입니다.

    // 포인터 ptr_double이 1 증가 후에 가리키고 있는 주소값은 0x8입니다.

    // when a pointer variable is incremented by 1, the address the pointer points at changes depending on the type of the variable pointer.
    // for instance, a int pointer incremented by 1 would increase by 4 bytes .



    //below is an example of pointer comparison and assignments
    
    int num01 = 10;

    int num02 = 20;

    int *ptr_num01 = &num01;

    int *ptr_num02 = &num02;

    if (ptr_num01 != ptr_num02) // 포인터끼리의 비교 연산

    {

        printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);

        printf("포인터 ptr_num02가 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num02);

        printf("포인터 ptr_num01과 ptr_num02는 현재 다른 주소를 가리키고 있습니다.\n\n");

        ptr_num02 = ptr_num01; // 포인터끼리의 대입 연산
    }

    printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);

    printf("포인터 ptr_num02가 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num02);

    if (ptr_num01 == ptr_num02) // 포인터끼리의 비교 연산

    {

        printf("포인터 ptr_num01과 ptr_num02는 현재 같은 주소를 가리키고 있습니다.\n");
    }
    return 0;
}