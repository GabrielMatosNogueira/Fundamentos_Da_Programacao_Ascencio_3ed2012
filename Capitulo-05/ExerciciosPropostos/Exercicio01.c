#include <stdio.h>
int main(){
    int vetor[6], contpar=0, contimp=0;

    for(int i=0; i<6; i++){
        printf("Digite o valor da %d posicao: ", i+1);

        scanf("%d", &vetor[i]);

        if(vetor[i]%2 == 0){
            contpar++;
        }
        if(vetor[i]%2 != 0){
            contimp++;
        }

    }
    for(int i=0; i<6; i++){
        if(vetor[i]%2 == 0){
            printf("O numero %d e par\n", vetor[i]);
        }
        if(vetor[i]%2 != 0){
            printf("O numero %d e impar\n", vetor[i]);
        }
    }
        printf("A quantidade de numeros impares e: %d\n", contimp);
        printf("A quantidade de numeros par e: %d\n", contpar);
    return 0;
}