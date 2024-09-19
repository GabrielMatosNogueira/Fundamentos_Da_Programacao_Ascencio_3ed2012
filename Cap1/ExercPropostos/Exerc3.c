#include <stdio.h>
int main(){
    int num1, num2, div;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    //Operacao de divisao
    div = num1/num2;

    //Exibicao da divisao
    printf("O valor da divisao e: %d", div);

    return 0;
}
