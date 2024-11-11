#include <stdio.h>
int main(){
    float peso,pesoGramas;

    //Leitura do peso
    printf("Digite o peso: ");
    scanf("%f", &peso);

    //Exibicao do peso em gramas
    pesoGramas = peso * 1000;
    printf("O peso em gramas e: %.2f", pesoGramas);

    return 0;
}
