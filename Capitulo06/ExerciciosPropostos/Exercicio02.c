#include <stdio.h>
int main(){
    int vetor[7];
    for(int i=0; i<7; i++){
        printf("Digite o numero %d da sequencia: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for(int j=0; j<7; j++){
            if(vetor[j]%2==0 && vetor[j]%3==0){
                printf("O numero %d e multiplo de 2 e 3\n", vetor[j]);
            }
            else if(vetor[j]%2==0){
                printf("O numero %d e par\n", vetor[j]);
            }
            else{
                printf("O numero %d e impar\n", vetor[j]);
            }
        }
        return 0;
}
