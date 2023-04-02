#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char* GetInput();
bool Testinput(char*);
int strToInt(char*);
void printInt(int);

int num;
char* l;
char* m;
int p;

int main(){
char* m = GetInput();
    if (Testinput(m) == true) {
        int p = strToInt(m);
        printInt(p);
        } 
    else {
    printf("Не получится, формат не int\n");
        }
    return 0;
}

char* GetInput(){
    char* l = malloc(sizeof(char) * 256);
    printf("Преобразуем:\n");
    scanf("%s", l);
    return l;
}

bool Testinput(char* l){
    int num;
    if (sscanf(l, "%d", &num) == 1) {
        return true;
        }       
    else {
    return false;
    }   
};
    
int strToInt(char* l){
    return atoi(l);
};

void printInt(int l){
    printf("%d\n", l);
}