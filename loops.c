#include <stdio.h>

int main(){

    //for loop
    //for(initialization; condition; increment)
    //{
    //    statements;
    //}

    for(int i = 0; i < 10; i++){
        printf("%d\n", i);
    }

    //while loop
    //while(condition)
    //{
    //    statements;
    //}
    int number = 0;
    int sum = 0;
    while(number < 10){
        sum += number;
        number++;
    }


    //do while loop
    //do
    //{
    //    statements;
    //}while(condition);
    int number2 = 0;
    int sum2 = 0;
    do{
        sum2 += number2;
        number2++;
    }while(number2 < 10);





    //nested loops
    int rows = 5;
    int columns = 5;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("Currently at row %d, column %d\n", i, j);
        }
        printf("\n");
    }









    return 0;
}