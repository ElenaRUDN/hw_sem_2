#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void print(char* words_array);

void print(char* words_array) {
    int i;
    for (i = 0; i < strlen(words_array); i++) {
        printf("%c", words_array[i]);
    }
    printf("\n");
}

void main(){
    int i;
    int j;
    char* words_array;
    char word[50];
    for(i = 0; i < 10; i++){
        printf("Введите слово: ");
        scanf("%s", &word);
        words_array[i] = word;
        print(words_array[i]);
    }
    strcpy(words_array, word);
    return 0;
}






