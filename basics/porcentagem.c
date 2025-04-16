#include <stdio.h>
#include <math.h>
int main(){

    float valor_fixo = 4000;
    float valor_nf = 401;

    float x = valor_nf/valor_fixo;
    x = roundf(x * 10000) / 10000;
    float valor_find = valor_fixo*x;

    float dif = valor_nf - valor_find;

    printf("a dif foi %.4f",dif);

    return 0;
}