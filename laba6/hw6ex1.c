#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
    char sim;
    scanf("%c", &sim);
    int i = 0;
    int k = 1;
    int maximk = 0;
    char arr[9] = {'U','R','R','R','B','T','T','T','T'};
    for(; i<8; i++){
        if (arr[i] == sim & arr[i] == arr[i+1]){
            k++;
            if (k > maximk){
                maximk = k;
            }
        }
        else {
            if (k > maximk){
                maximk = k;
            }
            k = 1;
        }
        
    }
    printf("%d", maximk);
    return 0;
}