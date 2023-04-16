//Тактика: статистический массив

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void append(int arr[], int max_razm, int elements);
void print(int arr[], int max_razm);
void insert(int arr[], int max_razm, int elements);

int main(){
    int max_razm;
    int elements;
    int com;
    int i = 0;
    int dop_elem;
    int mesto;

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

        for(i = 0; i < elements; i++){
            arr[i] = rand()%100;
        }
        for(i = elements; elements < max_razm; i++){
            arr[i] = 0;
        }
        printf("%s\n","Добавление в конец массива:");
        for(i = 0; i < 5; i++){
            append(arr, max_razm, i);
        }
        printf("%s\n","Добавление в середину массива:");
        for(i = 0; i < 5; i++){
            insert(arr, max_razm, i);
        }    
    }
    return 0;
}

void print(int arr[], int max_razm){
    for(int j = 0; j < max_razm; j++){
        printf("%d\t", arr[j]);
    }
}
void append(int arr[], int max_razm, int dop_elem){
    arr[max_razm] = dop_elem;
    print(arr, max_razm);
}
void insert(int arr[], int max_razm, int dop_elem){
    arr[max_razm/2] == dop_elem;
    print(arr, max_razm);
}
