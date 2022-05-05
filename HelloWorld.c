#include <stdio.h>
#include <stdbool.h>

int main()
{

    //variables = Allocated space in memory to store a value.
    //          We refer to  a variable's name to access the stored value.
    //          We refer to a variable's value to change it.
    //          We refer to a variable's type to know what kind of value it holds.
    //          We refer to a variable's scope to know where it is stored.
    //          We refer to a variable's size to know how much memory it uses.
    //           A variable name can be anything you want, but it must start with a letter or underscore.
    //           A variable name can contain letters, numbers, and underscores.
    //           A variable name cannot start with a number.
    //           A variable name cannot contain spaces.
    //           A variable name cannot contain special characters.
    //           A variable name cannot be a reserved word.
    //           A variable name should be short and descriptive.

    int x; //declaration
    x = 5; //initialization
    int y = 321; //declaration and initialization

    int age = 21; //integer
    float gpa = 3.5; //floating point
    char grade = 'A'; //character
    char name[] = "John"; //string, or in C, array of characters

    // A direct print statement
    printf("Hello World!\n");
    // A print statement with a variable
    printf("You are %d years old.\n", age);
    printf("Your GPA is %f.\n", gpa);
    printf("Your grade is %c.\n", grade);

    // More on Data Types
    char a = 'C';       //single character %c
    char b[] = "C++";   //array of characters %s
    float c = 3.14;     //floating point %f with 4 bytes of memory
    double d = 2.71828; //double precision floating point %lf with 8 bytes of memory
    int e = 2147483647; //32-bit integer %d
    bool f = true;      //boolean %d
    bool g = false;     //boolean %d

    //unlikely to use these types
    unsigned char h = 255; //unsigned 8-bit integer %d ,  positive numbers only
    unsigned short int i = 65535; //unsigned 16-bit integer %d
    unsigned int j = 4294967295; //unsigned 32-bit integer %u
    unsigned long int k = 18446744073709551615; //unsigned 64-bit integer %lu
    long int l = -9223372036854775808; //signed 64-bit integer %ld
    long long int m = -9223372036854775808; //signed 64-bit integer %lld
    unsigned long long int n = 18446744073709551615; //unsigned 64-bit integer %llu

    //format specifiers
    //%c - character
    //%s - string
    //%d - signed decimal
    //%f - floating point
    //%lf - double precision floating point

    // %0.1f - floating point with 1 decimal place

    float decimalPrecision = 3.1415926535;
    printf("Decial Precision to 1 dp : %.1f\n", decimalPrecision);
    printf("Decial Precision to 2 dp : %.2f\n", decimalPrecision);




    //type conversion
    //int to float
    int a = 5;
    float b = (float)a;
    printf("%f\n", b);




    //constants are fixed values that cannot be changed

    const float PI = 3.14159;
    printf("PI = %f\n", PI);
    //PI = 3.14159; //error


    //arithmetic operators
    // + - * / %
    // ++ --
    // += -= *= /= %=

    int ao = 2;
    printf("ao = %d\n", ao);
    ao++;
    printf("ao = %d\n", ao);
    ao--;
    printf("ao = %d\n", ao);

    ao += 2;
    printf("ao = %d\n", ao);
    ao -= 2;
    printf("ao = %d\n", ao);
    ao *= 2;
    printf("ao = %d\n", ao);
    ao /= 2;
    printf("ao = %d\n", ao);
    ao %= 2;
    printf("ao = %d\n", ao);


    //logical operators
    // && || !
    // == != > < >= <=



    //accepting user input
    
    int userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    printf("You entered %d\n", userInput);

    char userName[20]; //cannot be longer than 20 characters, unless memory is reallocated
    printf("Enter your name: ");
    scanf("%s", &userName); //does not accept spaces
    printf("You entered %s\n", userName);

    //will learn about accepting newLines in "String" class later





    //conditional statements
    int userAge = 21;
    if (userAge > 21) {
        printf("You can drink!\n");
    } else if (userAge == 21) {
        printf("You cannot drink!\n");
    } else {
        printf("You are too young!\n");
    }

    //switch statements
    char userGrade;
    printf("Enter your grade: ");
    scanf(" %c", &userGrade);

    switch (userGrade) {
        case 'A':
            printf("You got an A!\n");
            break;
        case 'B':
            printf("You got a B!\n");
            break;
        case 'C':
            printf("You got a C!\n");
            break;
        case 'D':
            printf("You got a D!\n");
            break;
        case 'F':
            printf("You got an F!\n");
            break;
        default: //if userGrade is not A, B, C, D, or F
            printf("You got an invalid grade!\n");
            break;
    }   


    //calculator program

    int userInput1;
    int userInput2;
    char userOperator;
    printf("Enter your first number: ");
    scanf("%d", &userInput1);
    printf("Enter your second number: ");
    scanf("%d", &userInput2);
    printf("Enter your operator: ");
    scanf(" %c", &userOperator);
    if(userOperator == '+'){
        printf("%d + %d = %d\n", userInput1, userInput2, userInput1 + userInput2);
    }
    else if(userOperator == '-'){
        printf("%d - %d = %d\n", userInput1, userInput2, userInput1 - userInput2);
    }
    else if(userOperator == '*'){
        printf("%d * %d = %d\n", userInput1, userInput2, userInput1 * userInput2);
    }
    else if(userOperator == '/'){
        printf("%d / %d = %d\n", userInput1, userInput2, userInput1 / userInput2);
    }
    else if(userOperator == '%'){
        printf("%d %% %d = %d\n", userInput1, userInput2, userInput1 % userInput2);
    }
    else{
        printf("Invalid operator!\n");
    }





    //logical operators
    // && - and
    // || - or
    // ! - not


    //AND operator
    //if both conditions are true, the result is true
    //if either condition is false, the result is false
    
    float temp = 80.0;
    if(temp > 80 && temp < 90){
        printf("It's hot!\n");
    }
    else if(temp > 90 && temp < 100){
        printf("It's warm!\n");
    }
    else if(temp > 100 && temp < 110){
        printf("It's hot!\n");
    }
    else if(temp > 110){
        printf("It's hot!\n");
    }
    else{
        printf("It's cold!\n");
    }


    //OR operator
    //if either condition is true, the result is true
    //if both conditions are false, the result is false

    scanf("%c", &userGrade);
    if(userGrade == 'A' || userGrade == 'B'){
        printf("You got an A or B!\n");
    }
    else{
        printf("You got an invalid grade!\n");
    }


    //NOT operator
    //if the condition is false, the result is true
    //if the condition is true, the result is false

    bool sunny = true;
    if(!sunny){
        printf("It's not sunny!\n");
    }
    else{
        printf("It's sunny!\n");
    }


    return 0;
}
