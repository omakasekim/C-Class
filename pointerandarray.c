#include <stdio.h>

int main()
{

    // Pointers and Arrays are very similar in many ways, and in many cases works as a substitute to each other.

    // The name of an array, in the sense that it cannot be changed like a constant, is like a pointer.
    // Thus, A name of an array is a constant pointer.

    //! Quick Tip:
    //! a "Constant Pointer" means the memory address that the pointer is pointing to is immutable,
    //! whereas a "Pointer to Constant" is just a pointer pointing to a  immutable "const" variable.

    int arr[3] = {10, 20, 30}; // 배열 선언

    int *ptr_arr = arr; // 포인터에 배열의 이름을 대입함

    printf("배열의 이름을 이용하여 배열 요소에 접근 : %d %d %d\n", arr[0], arr[1], arr[2]);

    printf("     포인터를 이용하여 배열 요소에 접근 : %d %d %d\n", ptr_arr[0], ptr_arr[1], ptr_arr[2]);

    printf("배열의 이름을 이용한 배열의 크기 계산 : %d\n", sizeof(arr));

    printf("     포인터를 이용한 배열의 크기 계산 : %d\n", sizeof(ptr_arr));

    // Pointer operations on Array
    // Unlike the previous example, in this example we are using the array's name as a pointer.
    // By applying pointer operations on the array's name, we can access each member of the array.

    int arr[3] = {10, 20, 30}; // 배열 선언

    printf("          배열의 이름을 이용하여 배열 요소에 접근 : %d %d %d\n", arr[0], arr[1], arr[2]);

    printf("배열의 이름으로 포인터 연산을 해 배열 요소에 접근 : %d %d %d\n", *(arr + 0), *(arr + 1), *(arr + 2));
    
    
    //! When executing Array related operations, keep in mind not to "go over" the arrays' size.
    //! When an area outside of the array is referenced, the C compiler does not point out any explicit mistake,
    //! Instead it just returns what is known as a garbage data.
    
    return 0;
}