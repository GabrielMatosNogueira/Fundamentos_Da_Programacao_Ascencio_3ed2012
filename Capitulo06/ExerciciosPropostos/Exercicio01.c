#include <stdio.h>
int main(){
    int vetor[6], contadorPar=0, contadorImpar=0;
    for(int i=0; i<6; i++){
        printf("Digite o numero %d da sequencia: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for(int j=0; j<6; j++){
        if(vetor[j]%2==0){
            printf("O numero %d e par\n", vetor[j]);
            contadorPar++;
        }
        else{
            printf("O numero %d e impar\n", vetor[j]);
            contadorImpar++;
        }
    }
    printf("Existem %d numeros pares\n", contadorPar);
    printf("Existem %d numeros impar\n", contadorImpar);
    return 0;
}