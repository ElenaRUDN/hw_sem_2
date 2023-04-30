#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void swap_chars(char* x, char* y);
void print(char* arr);
void getWords(char* arr);

void combSort(char* arr) {
    int i, j, length = strlen(arr);
    int distance = length / 1.247;
    while(distance > 0) {
        
        for (j = 0; j < length - distance; j++) {
            if (arr[j] > arr[j + distance]) {
                swap_chars(&arr[j], &arr[j + distance]);
          }
        }
        distance = distance / 1.247;
    }
}

void swap_chars(char* x, char* y) {
	char tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
void getWords(char* arr) {
    char str[20];
    printf("Введите слово: ");
    scanf("%s", str);
    strcpy(arr, str);
}

void print(char* arr) {
    
    for (int i = 0; i < strlen(arr); i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main() {
    int i, j, n = 10; 
    char** strArr = (char**)malloc(sizeof(char*)*n);
    for(int i = 0; i < n; i++) {
        strArr[i] = (char *)malloc(sizeof(char));
        printf("Попытка номер %d\n", i+1);
        getWords(strArr[i]);
        print(strArr[i]);
        combSort(strArr[i]);
        print(strArr[i]);
    }

    return 0;
}