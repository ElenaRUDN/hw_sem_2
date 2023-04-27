#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(){
    int i;
    int j;
    char* words_array[10];
    char word[50];
    for(i =0; i < 10; i++){
        scanf("%s", &word);
        words_array[i] = word;
        printf("%s\n", word);
    }
    
    printf("%s\n", words_array);
    return 0;
}









//     char* words[ARRAY_SIZE];
//     int i;
//     int j;
//     for (int i = 0; i < ARRAY_SIZE; i++) {
//         words[i] = NULL;
//     }

//     char tmp[MAX_LEN];//временный массив для слова
    
//     for(int i = 0; i < ARRAY_SIZE ; i++){
//         scanf("%s", &tmp);
        
//         // ключевое слово сделайте "X" для выхода
//         if (strlen(tmp) == 1 && tmp[0] == 'X')  {
//             break;  
//         }
          
//         //узнаю размер слова в массиве tmp и увеличиваю words[i]
//         // память выделяли мало, не хватает для конечного символа конца строки '\00'
//         words[i] = (char *)malloc(sizeof(char)*(strlen(tmp) + 1));
//         if(words[i] == NULL){
//             printf("fail");
//             exit(0);
//         }

//         // указатель на выделенную память вы меняете на адрес локального массива
//         // words[i] = tmp;
//         // копируем строку из tmp в words[i]
//         strcpy(words[i],tmp);
//     }

//     // free(words);
//     // удалять локальный массив вы не имеете права, вы память для него не выделяли
//     // всю память, что вы выделяли, от той и отказывайтесь
//     for(int i = 0; i < words_N ; i++){
//         free (words[i]);
//     }
//     for(int i = 0; i < ARRAY_SIZE; i++) {
//         for(int j = 0; j < MAX_LEN; j++) {
//             printf("%c", words[i][j]);
//         }
//         printf("\n");
//     } 
//     return 0;
// }