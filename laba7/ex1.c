#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void print(char* arr);
void swap_chars(char* x, char* y);
void selectionSort(char* arr);
void bubbleSort(char* arr);
void combSort(char* arr);
void getWords(char* arr);

int main(){
    int i = 10;
    int j = 10;
    int n = 10;
    char word[30];
    char** words_array = (char**)malloc(sizeof(char*)*n);
    for(i = 0; i < n; i++) {
        words_array[i] = (char *)malloc(sizeof(char));
        getWords(words_array[i]);
        bubbleSort(words_array[i]);
        print(words_array[i]);
        selectionSort(words_array[i]);
        print(words_array[i]);
        combSort(words_array[i]);
        print(words_array[i]);
    }
    return 0;
}

void getWords(char* arr) {
    char word[30];
    printf("Введите слово: ");
    scanf("%s", &word);
    strcpy(arr, word);
}

void print(char* arr) {
    int i;
    for (i = 0; i < strlen(arr); i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

void swap_chars(char* x, char* y) {
	char helping;
	helping = *x;
	*x = *y;
	*y = helping;
}

void bubbleSort(char* arr) {
    int i, j, lena = strlen(arr);
    for (i = 0; i < lena - 1; i++) {
        for (j = 0; j < lena - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap_chars(&arr[j], &arr[j + 1]);
            }
        }
    }
    printf("%s\t","Сортировка пузырьком: ");

}

void selectionSort(char* arr) {   
    int i;
    int j;
    int min_index;
    int lena = strlen(arr);
    for (i = 0; i < lena-1; i++) {
        min_index = i;
        for (j = i+1; j < lena; j++)
        {
          if (arr[j] < arr[min_index])
              min_index = j;
        }
        if (min_index!=i)
            swap_chars(&arr[min_index], &arr[i]);
    }
    printf("%s\t","Сортировка выбором: ");
}

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
    printf("%s\t","Сортировка расческой: ");
}


