#include <stdio.h>
int main(){
    int vetor[15];
    for(int i=0; i<15; i++){
        printf("Digite o %d da sequencia: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<15; i++){
        if(vetor[i]==30){
            printf("O elemento %d contem o numero 30\n", i+1);
        }
    }
    return 0;
}