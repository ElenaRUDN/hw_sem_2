/* 1) сортировка выбором для словаря из 10 слов работает лучше, 
так как она справляется за наименьшее количество итераций, но для больших обьемов
данных лучше всего будет справляться сортировка расческой. 
Сложности сортировок: 
Расческа в лучшем случае О(nlogn), в худшем О(n^2)
ВЫбором в любом случае О(n^2)
Пузырьком в лучшем случае O(n), в худшем О(n^2)

2)
Кол-во итераций (Пузырьком): 21
Время:   0.258000
Кол-во итераций (Расческа): 7
Время:   0.094000
Кол-во итераций (Выбором): 5
Время:   0.086000
для введенного: [a, asdfghuyt, awdfhyjm, mmhhyyf, rescvg, ikkkk, qwasvcb, ltrewqsdf, cxvbnmjjhgtfr, fhjhgbvfdees]
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

void selection(char** arr);
void bubble(char** arr);
void comb(char** arr);
void swap_strings(char* x, char* y);
void words(char* arr);
void print(char** arr);
void copy(char** arr, char** copyArr);

int main() {
    int i;
    char** strArr = (char**)malloc(sizeof(char*)*10);
    char** copyArr = (char**)malloc(sizeof(char*)*10);
    for (i = 0; i < 10; i++) {strArr[i] = (char*)malloc(sizeof(char)); copyArr[i] = (char*)malloc(sizeof(char));}

    printf("Введите 10 слов: \n");
    for (i = 0; i < 10; i++) {words(strArr[i]);}
    
    printf("Введите номер, что вы хотите сделать:\n1. Сортировка выбором\n2. Сортировка пузырьком\n3. Сортировка расческой\n4. Применить всё\n");
    scanf("%d", &i);

    if (i == 1) {selection(strArr);}
    else if (i == 2) {bubble(strArr);}
    else if (i == 3) {comb(strArr);}
    else if (i == 4) {
        copy(strArr, copyArr);
        clock_t start = 0, end = 0;
        start = clock();
        selection(copyArr);
        end = clock();
        printf("Время: %10lf\n\n", (double)(end - start) / CLOCKS_PER_SEC);
        copy(strArr, copyArr);
        start = 0, end = 0;
        start = clock();
        bubble(copyArr);
        end = clock();
        printf("Время: %10lf\n\n", (double)(end - start) / CLOCKS_PER_SEC);
        start = 0, end = 0;
        start = clock();
        comb(strArr);
        end = clock();
        printf("Время: %10lf\n\n", (double)(end - start) / CLOCKS_PER_SEC);
        }
    return 0;
}

void selection(char** arr) {
    printf("Сортировка выбором:\n");   
    int i, j, min_idx, count = 0, size = 10;
    for (i = 0; i < size-1; i++) {
        min_idx = i;
        for (j = i+1; j < size; j++)
        {
          if (strcmp(arr[j], arr[min_idx]) < 0)
              min_idx = j;
        }
        if (min_idx != i) {
            swap_strings(arr[min_idx], arr[i]);
            print(arr);
            count += 1;
        }
    }
    printf("Кол-во итераций (Сортировка выбором): %d\n", count);
}

void bubble(char** arr) {
    printf("Сортировка пузырьком:\n");
    int i, j, count = 0, size = 10;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swap_strings(arr[j], arr[j + 1]);
                print(arr);
                count += 1;
            }
        }
    }
    printf("Кол-во итераций (Сортировка пузырьком): %d\n", count);
}

void comb(char** arr) {
    printf("Сортировка расческой:\n");
    
    int count = 0, size = 10, swapped = 1;
    float distance = (size/1.247);

    while(distance > 1 || swapped) {
        swapped = 0;
        if (distance < 1) {distance = 1;}
        int intdis = (int) distance;

        for(int i = 0; i + intdis < size; i++) {
            if(strcmp(arr[i], arr[i +intdis]) > 0) {swap_strings(arr[i], arr[i + intdis]); swapped = 1; print(arr); count += 1;}
        }
        distance /= 1.247;
    }
    printf("Кол-во итераций (Сортировка расческой): %d\n", count);
}

void print(char** arr) {
    printf("[");
    for (int i = 0; i < 10; i++) {
        if (i == 9) {printf("%s", arr[i]);}
        else {printf("%s, ", arr[i]);}
    }
    printf("]\n");
}

void words(char* arr) {
    char str[20];
    scanf("%s", str);
    strcpy(arr, str);
}

void copy(char** arr, char** copyArr) {
    for (int i = 0; i < 10; i++) {strcpy(copyArr[i], arr[i]);}
}

void swap_strings(char* x, char* y) {
	char temp[20];
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
}

