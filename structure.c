#include <stdio.h>
#include <string.h>

typedef struct{
    char name[20];
    int age;
    char grade;
}Student;

int main(){


    //  structures are used to store data in a single variable
    // they can be of different types
    //  listed under one name in a block of memory
    //  similar to classes in java, but no methods or constructors or inheritance
    Student student;
    //student.name = "John";
    strcpy(student.name, "John");

    student.age = 21;
    student.grade = 'A';

    printf("%s is %d years old and has a grade of %c.\n", student.name, student.age, student.grade);



    //typedef is used to define a new name for an existing type
    //  it is used to make a new name for an existing type

}
