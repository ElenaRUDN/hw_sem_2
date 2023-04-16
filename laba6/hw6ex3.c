//Тактика: статистический массив

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int max_razm;
    int element;
    //printf("%s\t", "Введите максимальный размер массива:");
    scanf("%d", &max_razm);
    //printf("%s\t", "Введите количество элементов, которые вы хотите заполнить:");
    scanf("%d", &element);
    if(max_razm < element){
        printf("%s\n","Вы превысили допустимый размер массива.");
        exit(EXIT_SUCCESS);
    }
    else{
        printf("%s\n","Вы молодцы");
    }
    return 0;

}