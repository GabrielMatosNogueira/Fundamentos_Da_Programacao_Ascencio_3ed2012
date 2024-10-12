#include <stdio.h>
int main(){
    int horastrabalhadas, horasextras;
    double salariominimo=0.0, valorhora=0.0, valorhoraextra=0.0, salariobruto=0.0, salariofinal=0.0, extra=0.0;
    /*Scan das variaveis*/
    printf("Digite o valor das horas trabalhadas: ");
    scanf("%d", &horastrabalhadas);

    printf("Digite o valor das horas extras: ");
    scanf("%d", &horasextras);

    printf("Digite o valor do salario minimo atual: ");
    scanf("%lf", &salariominimo);

    /*Calculo do valor hora e hora extra*/
    valorhora = salariominimo * 1/8;
    valorhoraextra = salariominimo * 1/4;

    /*Calculo do salario bruto, valor a receber pela hora extra e o salario final*/
    salariobruto = horastrabalhadas * valorhora;
    extra = horasextras * valorhoraextra;
    salariofinal = salariobruto + extra;

    /*Exibicao dos valores*/
    printf("O valor a receber sem quantia extra e: %.2lf\n", salariobruto);
    printf("O valor extra a receber e: %.2lf\n", extra);
    printf("O valor a receber do salario final e: %.2lf\n", salariofinal);

    return 0;

}
