#include <stdio.h>
#include <stdlib.h>

int main(){

  int size;
  printf("Enter the size of your array: ");
  scanf("%d", &size);

  int *arr = malloc(sizeof(int)*size);

  int temp;

  for(int i = 0; i < size; i++){
    scanf("%d", &temp);
    arr[i] = temp;
  }

  for(int j = 0; j < size; j++){
    printf("%d\n", arr[j]);
  }
}
