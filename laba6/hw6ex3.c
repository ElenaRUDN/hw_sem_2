//Тактика: статистический массив

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void append(int arr[], int max_razm, int elements);
void print(int arr[], int max_razm, int elements);
void append(int arr[], int max_razm, int elements);

int main(){
    int max_razm;
    int elements;
    int com;
    int i = 0;
    int j = 0;
    int el;
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

        for(; i < elements; i++){
            arr[i] = rand()%100;
        }
        
        printf("%s\n","Ваши команды:");
        printf("%s\n","1. Отобразить массив на экране.");
        printf("%s\n","2. Добавить элемент в конец массива.");
        printf("%s\n","3. Добавить элемент в середину массива.");
        printf("%s\n","Введите номер команды:");

        scanf("%d", &com);
        if(com == 1){
            for(; j < max_razm; j++){
                printf("%d\t", arr[j]);
            }
        }
        else if(com == 2){
            printf("%s\n","Введите элемент:");
            scanf("%d", &el);
            arr[max_razm] = el;
            for(; j < max_razm; j++){
                printf("%d\t", arr[j]);
            }
        }
        else if(com == 3){
            printf("%s\n","Введите элемент:");
            scanf("%d", &el);
            printf("%s\n","Введите место:");
            scanf("%d", &mesto);
            arr[mesto] == el;
            for(; j < max_razm; j++){
                printf("%d\t", arr[j]);
            }
            
        }
    }
    return 0;

}