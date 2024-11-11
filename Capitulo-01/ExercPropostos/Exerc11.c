#include <stdio.h>
int main(){
    float area, diagonalMaior, diagonalMenor;
    printf("Digite o valor da diagonal maior: ");
    scanf("%f", &diagonalMaior);
    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &diagonalMenor);

    area = diagonalMaior * diagonalMenor/2;

    printf("O valor da area do losango e: %.2f", area);
    return 0;
}
