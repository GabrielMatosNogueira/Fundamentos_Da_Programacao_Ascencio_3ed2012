#include <stdio.h>
int main(){
    int num1, num2, num3, mult;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    //Operacao de multiplicacao
    mult = num1*num2*num3;

    //Exibicao do resultado
    printf("O valor da multiplicao e: %d", mult);

    return 0;
}
