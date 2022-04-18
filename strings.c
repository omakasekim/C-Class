#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Hello";
    char string2[] = "World";


    strlwr(string1); //converts string1 to lowercase
    strupr(string2); //converts string2 to uppercase
    strcat(string1, string2); //concatenates string2 to string1
    strcpy(string2, string1); //copies string1 to string2
    strcmp(string1, string2); //compares string1 and string2
    strlen(string1); //returns the length of string1
    strncpy(string2, string1, 5); //copies the first 5 characters of string1 to string2
    strstr(string1, string2); //searches for string2 in string1

}