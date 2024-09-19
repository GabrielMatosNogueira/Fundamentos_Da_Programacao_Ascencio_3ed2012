#include <stdio.h>
int main(){
    int num1, num2, sub;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    //Operacao de subtracao
    sub = num2-num1;

    //Exibicao do resultado
    printf("O valor da subtracao do segundo numero pelo primeiro e: %d", sub);
    return 0;
}
