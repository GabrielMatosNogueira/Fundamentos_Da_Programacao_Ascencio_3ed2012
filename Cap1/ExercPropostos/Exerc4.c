#include <stdio.h>
int main(){
    int num1, num2, med;
    printf("Digite a primeira nota: ");
    scanf("%d", &num1);
    printf("Digite a segunda nota: ");
    scanf("%d", &num2);

    //Operacao com a media dos valores
    med = (num1*2)+(num2*3)/5;

    //Exibicao da media ponderada
    printf("O valor da media ponderada e: %d", med);

    return 0;
}
