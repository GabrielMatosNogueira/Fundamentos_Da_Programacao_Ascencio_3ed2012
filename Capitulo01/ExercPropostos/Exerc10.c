#include <stdio.h>
int main(){
float lado, area;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;

    printf("O valor da area do quadrado e: %.2f", area);
    return 0;
}

