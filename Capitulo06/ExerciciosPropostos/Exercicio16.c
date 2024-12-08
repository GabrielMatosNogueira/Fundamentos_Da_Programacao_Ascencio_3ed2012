#include <stdio.h>
int main(){
    float preco[5], media = 0;
    char nome[5][50];
    int qtd = 0;

    printf("Digite o nome dos cinco produtos e seus precos:\n");
    for(int i=0; i<5; i++){
        printf("Digite o nome do produto %d: ", i+1);
        scanf("%49s", nome[i]);
        printf("Digite o preco do produto %d: ", i+1);
        scanf("%f", &preco[i]);
    }
    for(int j=0; j<5; j++){
        printf("O produto %s possui o preco %.2f\n", nome[j], preco[j]);
        
        if(preco[j]<50){
            printf("O produto %s esta abaixo de R$50,00\n", nome[j]);
        }
        if(preco[j]>=50 && preco[j]<=100){
            printf("O produto %s possui o preco %.2f\n", nome[j], preco[j]);
        }
        if(preco[j]>100){
            qtd++;
            media += preco[j];
        }
    }
    if(qtd > 0){
        media = media / qtd;
        printf("A media do preco dos produtos acima de R$100,00 e: %.2f\n", media);
    } else {
        printf("Nao ha produtos acima de R$100,00\n");
    }
    return 0;
}