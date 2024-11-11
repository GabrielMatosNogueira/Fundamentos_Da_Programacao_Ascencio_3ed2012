#include <stdio.h>
int main(){
    double real, dolar, marcoalemao, libraesterlina;

    /*Scan da quantia possuida*/
    printf("Digite o valor em reais que voce possui: ");
    scanf("%lf", &real);

    /*Calculo da conversao*/
    dolar = 1.8 * real;
    marcoalemao = 2 * real;
    libraesterlina = 3.57 * real;

    /*Exibicao dos valores*/
    printf("Voce possui $%.2lf\n", dolar);
    printf("Voce possui €%.2lf\n", marcoalemao);
    printf("Voce possui £%.2lf\n", libraesterlina);

    return 0;
}