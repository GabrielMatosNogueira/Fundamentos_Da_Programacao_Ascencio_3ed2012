#include <stdio.h>
int main(){
    int segundos, minutos, minutosconv, horas, total;

    /*Scan das variaveis*/
    printf("Digite o numero de horas: ");
    scanf("%d", &horas);

    printf("Digite o numero de minutos: ");
    scanf("%d", &minutos);

    /*Conversao*/
    minutosconv = horas * 60;
    total = minutos + minutosconv;
    segundos = total * 60;
    /*Exibicao*/
    printf("O numero de horas convertidas em minutos e: %d\n", minutosconv);
    printf("O numero total de minutos e: %d\n", total);
    printf("O numero total de minutos convertidos em segundos e: %d\n", segundos);

    return 0;
}
