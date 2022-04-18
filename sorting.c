//not for submission

#include <stdio.h>

int main(){

    //sorting an array
    int numbers[] = {5, 4, 3, 2, 1};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (numbers[i] < numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }


}