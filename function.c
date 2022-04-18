#include <stdio.h>
#include <stdbool.h>

void birthday()
{
    printf("Happy Birthday!\n");
}
int add(int a, int b); //function prototype 

int main(){

    //function
    //void - does not return a value
    //int - returns an integer
    //float - returns a floating point number
    //char - returns a character
    //bool - returns a boolean value

    birthday();

    //function prototype
    //declaration
    //functionName(parameter1, parameter2, parameter3);
    int result = add(2, 3);
    printf("%d\n", result);

    //IMPORTANT:
    //function definitions are not part of the main function
    //many c compilers will not compile if the function is not defined
    //missing arguments will cause a compiler error
    //a function prototype causes the compiler to check the parameters
    return 0;

}

int add(int a, int b)
{
    return a + b;
}
