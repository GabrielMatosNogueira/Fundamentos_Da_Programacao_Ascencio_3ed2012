#include <stdio.h>
int main(){
    float preco, precoFinal;

    //Leitura do preco inicial
    printf("Digite o valor do preco do produto: ");
    scanf("%f", &preco);

    //Operacao de desconto
    precoFinal = preco * 0.9;

    //Exibicao do preco final com desconto
    printf("O valor do produto com o desconto e: %.2f", precoFinal);

    return 0;
}
