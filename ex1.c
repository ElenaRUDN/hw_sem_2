#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float rp, we, ra1, nu, i;
    float va, vw;
    we = 7.2921159*pow(10,-5);
    i=(63.4*3.14)/180;
    ra1 = 45000;
    nu = 398600.4;
    rp = (pow(we,2)* pow(ra1,4) * pow(cos(i),2))/(2*nu - pow(we,2)*pow(ra1,3)*pow(cos(i),2));
    //printf("%f\n", rp);
    FILE* file = fopen("laba8.txt", "w+");
    for (int ra = 10; ra <= 60000; ra+=10){
        va = sqrt((2*nu*rp)/(ra*(ra + rp)));
        vw = we * ra*cos(i);
        if (va != vw){
            fprintf(file, "%f\n", va);
            fprintf(file, "%f\n", vw);
            //printf("%f\t", va, "%f\n", vw);
        }
    }
    fclose(file);
    return 0;
}

