//Тактика: статистический массив

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int max_razm;
    int element;
    int com;
    int i = 0;

    printf("%s\t", "Введите максимальный размер массива:");
    scanf("%d", &max_razm);
    printf("%s\t", "Введите количество элементов, которые вы хотите заполнить:");
    scanf("%d", &element);

    if(max_razm < element){
        printf("%s\n","Вы превысили допустимый размер массива.");
        exit(EXIT_SUCCESS);
    }
    else{
        int arr[max_razm];

        for(; i < element; i++){
            arr[i] = rand()%100;
        }
        
        printf("%s\n","Ваши команды:");
        printf("%s\n","1. Отобразить массив на экране.");
        printf("%s\n","2. Добавить элемент в конец массива.");
        printf("%s\n","3. Добавить элемент в середину массива.");
        printf("%s\n","Введите номер команды:");
        scanf("%d\n", &com);
        if(com == 1){
            for(; i < max_razm; i++){
                printf("%d\t", arr[i]);
            }
        }
    }
    return 0;

}