#include <stdio.h>

int main(){

    //pointers are a "variable - like" reference that holds a memory address to another varaible, array, or structure
    //some tasks are easier with pointers than with variables
    // * is the dereference operator - it is used to access the value stored at a memory address

    int age = 21;
    int *pAge = &age; //p is a pointer to age
    printf("%d\n", *pAge); //prints the value stored at the memory address of p
    print("%p\n", pAge); //prints the memory address of p
    printf("%d\n", sizeof(pAge)); //prints the size of p

    return 0;
}