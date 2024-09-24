#include <stdio.h>
int main(){
    double cel, fah;

    printf("Digite o valor da temperatura em graus celcius: ");
    scanf("%lf", &cel);

    fah = 180* (cel+32)/100;

    printf("O valor da temperatura em graus Fahrenheit e: %.2lf", fah);

    return 0;
}
