#include <stdio.h>
int main(){
    double pot, comp, area, larg;

    //Scan da area do comodo das casas
    printf("Digite o valor do comprimento do comodo, em metros: ");
    scanf("%lf", &comp);

    printf("Digite o valor da largura, em metros, do comodo: ");
    scanf("%lf", &larg);

    //Calculo da area
    area = comp * larg;

    //Calculo da potencia
    pot = area * 18;

    printf("O valor da potencia consumida e de: %.2lf", pot);
}