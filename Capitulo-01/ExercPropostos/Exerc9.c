#include <stdio.h>
int main(){
    float baseMenor, baseMaior, altura, area;

    //Leitura dos dados
    printf("Digite o valor da base menor: ");
    scanf("%f",&baseMenor);
    printf("Digite o valor da base maior: ");
    scanf("%f",&baseMaior);
    printf("Digite o valor da altura: ");
    scanf("%f",&altura);

    //Processamento dos dados
    area = ((baseMenor + baseMaior)*altura)/2;

    //Exibicao da area
    printf("O valor da area desse trapézio e: %.2f", area);

    return 0;
}
