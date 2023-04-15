#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int k = 1;
    int maximk = 0;
    char arr[9] = {'U','R','R','R','B','T','J','!','T'};
    for(; i<8; i++){
        if (arr[i] == arr[i+1]){
            k++;
            if (k > maximk){
                maximk = k;
            }
        else {
            printf("%d", k);
            k = 0;
        }
        }
    }
    printf("%d", maximk);
    return 0;
}