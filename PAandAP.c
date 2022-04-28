#include <stdio.h>

// Pointer Array & Array Pointers

//포인터 배열 , 배열 포인터

// A Pointer Array is an array with pointers as its members.
// Thus, an array that stores pointers.

int main()
{

    int i, arr_len;

    int num01 = 10, num02 = 20, num03 = 30;

    int *arr[3] = {&num01, &num02, &num03}; // int형 포인터 배열 선언

    arr_len = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < arr_len; i++)

    {

        printf("%d\n", *arr[i]);
    }

    // An Array Pointer is a pointer pointing to an array.
    // We have previously learnt that the name of the array, in the sense that its immutable, works just like a pointer.
    // the reason we use Array pointers explicitly is to efficiently index elements when dealing with N-dimension arrays (N>2)
    // Thus Array Pointers have no meaningful use when dealing with 1D array.

    int arr[2][3] = {

        {10, 20, 30},

        {40, 50, 60}

    };

    printf("%d\n", *arr[0]);

    printf("%d\n", *arr[1]);



    int arr[2][3] = // 배열의 선언

        {

            {10, 20, 30},

            {40, 50, 60}

        };

    int(*pArr)[3] = arr; // 배열 포인터의 선언

    printf("%d\n", arr[1][1]); // 배열 이름으로 참조

    printf("%d\n", pArr[1][1]); // 배열 포인터로 참조

    return 0;
}
