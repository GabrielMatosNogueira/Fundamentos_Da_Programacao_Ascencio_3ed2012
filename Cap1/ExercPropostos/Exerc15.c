#include <stdio.h>
int main(){
    double salario, conta1, conta2;

    printf("Digite o salário de Joao: ");
    scanf("%lf", &salario);

    printf("Digite o valor da primeira conta a ser paga por Joao: ");
    scanf("%lf", &conta1);

    printf("Digite o valor da segunda conta a ser paga por Joao: ");
    scanf("%lf", &conta2);

    conta1= conta1*1.02;
    conta2= conta2*1.02;
    salario= salario - (conta1 + conta2);

    printf("O restante do salario de Joao sera: %.2lf", salario);
}
