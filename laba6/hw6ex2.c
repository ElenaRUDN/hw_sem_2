#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLUMNS 3

int main(void){
    int i = 0;
    int j = 0;
    int arr[ROWS][COLUMNS];
    int you;
    printf("%s\n", "Список элементов:");

    for (int i = 0; i < ROWS; ++i){
        for (int j = 0; j < COLUMNS; ++j) {
            arr[i][j] = rand() % 1000;
            printf("%d\n", arr[i][j]);
        }
    }
    scanf("%d", &you);
    for (int i = 0; i < ROWS; ++i){
        for (int j = 0; j < COLUMNS; ++j) {
            if(you == arr[i][j]){
                printf("%d\t", i+1);
                printf("%d\t", j+1);
            }
        }
    }
    // for(i = 0; i < ROWS; i++){
    //     for(j = 0; j < COLUMNS; j++){
    //             printf("%d\t", arr[i][j]);

    //     }
    // printf("\n");
    // }
    return 0;
}
