#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float rp, we, ra, nu, i;
    we = 7.2921159*0,00001;
    i = 63.4;
    ra = 45000;
    nu = 398600.4;
    rp = (we*we*ra*ra*ra*ra* cos(i)* cos(i))/ (2*nu - we*we*ra*ra*ra*cos(i)*cos(i));
    printf("%d", rp);
    return 0;
}