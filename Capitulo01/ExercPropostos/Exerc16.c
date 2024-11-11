#include <stdio.h>
#include <math.h>
int main(){
    double catA, catO, hip, test;

    printf("Digite o valor do cateto adjacente: ");
    scanf("%lf", &catA);

    printf("Digite o valor do cateto oposto: ");
    scanf("%lf", &catO);

    hip= pow(catA,2)+ pow(catO,2);
    hip= sqrt(hip);

    printf("O valor da hipotenusa e de %.2lf", hip);
}
