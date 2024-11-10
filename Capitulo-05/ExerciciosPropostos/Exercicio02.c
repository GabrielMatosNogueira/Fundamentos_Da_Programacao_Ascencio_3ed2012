#include <stdio.h>
int main(){
    int vetor[7];

    for(int i=0; i<7; i++){
        printf("Digite o %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<7; i++){
        if(vetor[i]%3==0 && vetor[i]%2==0){
            printf("\nO numero %d e divisivel por 2 e por 3", vetor[i]);
        }        
        else if(vetor[i]%2==0){
            printf("\nO numero %d e divisivel por 2", vetor[i]);
        }
        else if(vetor[i]%3==0){
            printf("\nO numero %d e divisivel por 3", vetor[i]);
        }
    }    
    return 0;
}