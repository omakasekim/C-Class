#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//N의 자릿수 계산 
//N 안에666이 들어가는지


int main(){
    int N;
    scanf("%d",&N);
    int x = 665;
    int cnt = 0;
    while(true){
        x++;
        if(check_if_666(x)){
            cnt++;
        }
        if(cnt==N){
            break;
        }
    }
    printf("%d", x);
}
int check_len(int N){
    int cnt = 0;
    int temp = N;
    if(temp/10){
        temp = temp/10;
        cnt++;
    }
    return cnt+1;
}
bool check_if_666(int N){
    int len = check_len(N);

    int *digits = (int*)malloc(sizeof(int)*len);
    int temp = N;
    for (int i = 0; i < len; i++)
    {
        digits[i] = temp%10;
        temp = temp/10;
    }

    for(int i = 0; i < len-2;i++){
        if (digits[i]==6){
            if (digits[i+1]==6){
                if (digits[i+2]==6){
                    return true;
                }
            }
        }
    }
    return false;
}
