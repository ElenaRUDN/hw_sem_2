#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//void funcRp(float rp);

int main(){
    float rp, we, ra1, nu, i;
    float va, vw;
    we = 7.2921159*pow(10,-5);
    i = 63.4;
    ra1 = 45000;
    nu = 398600.4;
    rp = (pow(we,2)* pow(ra1,4) * pow(cos(i),2))/(2*nu - pow(we,2)*pow(ra1,3)*pow(cos(i),2));
    printf("%f\n", rp);
    FILE* file = fopen("laba8.txt", "w+");
    for (int ra = 1; ra <= 60000; ra+=10){
            va = sqrt((2*nu*rp)/(ra*(ra - rp)));
            vw = we * ra*cos(i);
            if (va != vw){
                fprintf(file, "%.3f", roundf(va * 100) / 100);
                fprintf(file, "%.3f", roundf(vw * 100) / 100);
            }
    }
    return 0;
}

// void funcRp(float rp){
//     float rp, we, ra, nu, i;
//     we = 7.2921159*0,00001;
//     i = 63.4;
//     ra = 45000;
//     nu = 398600.4;
//     rp = (we*we*ra*ra*ra*ra* cos(i)* cos(i)) / (2*nu - we*we*ra*ra*ra*cos(i)*cos(i));
//     printf("%d", rp);
// }