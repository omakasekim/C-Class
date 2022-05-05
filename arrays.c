#include <stdio.h>
#include <string.h>

int main(){

    //array is a collection of data
    //arrays are zero-based
    //arrays are indexed by integers
    //arrays are fixed in size
    //arrays are accessed by index


    double prices[] = {3.14, 2.71, 1.41};
    printf("%f\n", prices[0]);
    printf("%f\n", prices[1]);
    printf("%f\n", prices[2]);


    for (int i = 0; i < 3; i++)
    {
        printf("%f\n", prices[i]);
    }
    



    //2D arrays

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }



    //array of strings
    char cars[][10] = {
        "Volvo",
        "BMW",
        "Ford"
    };

    //cant do this
    //cars[0] = "Tesla";

    //instead do this
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

}
