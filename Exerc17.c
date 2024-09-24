#include <stdio.h>
#include <math.h>
int main(){
    double raio, comprimento, area, volume;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    comprimento = 2 * 3.14159 * raio;
    area = 3.14159 * pow(raio,2);
    volume = 0.75 * 3.14159 * pow(raio,3);

    printf("O valor do comprimento e de: %.2lf \n", comprimento);
    printf("O valor da area e de: %.2lf \n", area);
    printf("O valor do volume e de: %.2lf \n", volume);

    return 0;
}
