#include <stdio.h>
int main(){
    int vetor[6];

    for(int i=0; i<6; i++){
        printf("Digite o valor da %d posicao: ", i);
        scanf("%d", vetor[i]);
    }
    for(int i=0; i<6; i++){
        printf("O valor da posicao %d e: %d", i, vetor[i]);
    }
    return 0;
}