//Тактика: статистический массив

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void append(int arr[], int max_razm, int dop_elem);
void print(int arr[], int max_razm);
void insert(int arr[], int max_razm, int dop_elem);

int main(){
    int max_razm;
    int elements;
    int i;
    int dop_elem;

    printf("%s\t", "Введите максимальный размер массива:");
    scanf("%d", &max_razm);
    printf("%s\t", "Введите количество элементов, которые вы хотите заполнить:");
    scanf("%d", &elements);

    if(max_razm < elements){
        printf("%s\n","Вы превысили допустимый размер массива.");
        exit(EXIT_SUCCESS);
    }
    else{
        int arr[max_razm];

        for(i = 0; i < max_razm; i++){
            if (i<elements){
                arr[i]=rand()%100;
            }
            else{
                arr[i]=0;
            }
        }
        print(arr, max_razm);
        printf("\n");
        printf("%s\n\n","Добавление в конец массива:");
        for(i = 1; i < 6; i++){
            printf("%s", "Добавляем в конец: ");
            printf("%d\n", i);
            append(arr, max_razm, i);
        }
        printf("\n");
        printf("%s\n\n","Добавление в середину массива:");
        for(i = 1; i < 6; i++){
            printf("%s", "Добавляем в середину: ");
            printf("%d\n", i);
            insert(arr, max_razm, i);
        }    
    }
    return 0;
}

void print(int arr[], int max_razm){
    int j;
    for(j = 0; j < max_razm; j++){
        printf("%d\t", arr[j]);
    }
}
void append(int arr[], int max_razm, int dop_elem){
    arr[max_razm - 1] = dop_elem;
    print(arr, max_razm);
    printf("\n");
}
void insert(int arr[], int max_razm, int dop_elem){
    arr[max_razm/2] = dop_elem;
    print(arr, max_razm);
    printf("\n");
}
