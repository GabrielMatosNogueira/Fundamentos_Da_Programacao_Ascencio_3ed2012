#include <stdio.h>
int main(){
    float peso, pesoG, pesoE;

    //Leitura do peso
    printf("Digite o peso: ");
    scanf("%f", &peso);

    //Emagrecer ou engoardar
    pesoG = peso*1.15;
    pesoE = peso*0.8;

    printf("O peso caso o individuo emagreca e: %.2f \n", pesoE);
    printf("O peso caso o individuo engorde e: %.2f", pesoG);

    return 0;
}
