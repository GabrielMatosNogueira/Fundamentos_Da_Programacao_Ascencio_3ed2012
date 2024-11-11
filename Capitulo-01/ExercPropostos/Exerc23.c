#include <stdio.h>
int main(){
    int ladoA, ladoB, ladoC;

    /*Scan das variaveis*/
    printf("Digite o valor do lado A: ");
    scanf("%d", &ladoA);

    printf("Digite o valor do lado B: ");
    scanf("%d", &ladoB);

    /*Calculo do terceiro lado desconhecido*/
    ladoC = 180 - (ladoA + ladoB);

    /*Exibicao */
    printf("O valor do terceiro lado e: %d", ladoC);
    
    return 0;

}