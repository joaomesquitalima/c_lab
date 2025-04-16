#include <stdio.h>

int main(){
    float passagem = 2.25;
    float recarga;
    printf("Digite sua recarga: ");
    scanf("%f",&recarga);

    int qt = recarga/(passagem*2);

    printf("A quantidade de dias e : %d",qt);


    return 0;
}