#include <stdio.h>

int main(){
    // memory is an array of bytes
    // memory block is a contiguous block of memory on RAM
    // memory address is the location of a memory block

    char a = 'X'; //some amount of memory is allocated for a
    char b = 'Y'; //some amount of memory is allocated for b
    char c = 'Z'; //some amount of memory is allocated for c


    printf("%d\n", sizeof(a)); //size of a is 1 byte
    printf("%d\n", sizeof(b)); //size of b is 1 byte
    printf("%d\n", sizeof(c)); //size of c is 1 byte


    printf("%p\n", &a); //memory address of a
    printf("%p\n", &b); //memory address of b
    printf("%p\n", &c); //memory address of c
}
