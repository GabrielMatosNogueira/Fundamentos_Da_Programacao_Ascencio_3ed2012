#include <stdio.h>
int main(){
    int soma, n1, n2, n3, n4;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("A soma dos quatro numeros e: %d", soma);
    return 0;
}