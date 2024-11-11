#include <stdio.h>
int main(){
    float salarioF, salarioM, diferenca;

    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salarioF);

    printf("Digite o valor do salario minimo atual: ");
    scanf("%f", &salarioM);

    diferenca = salarioF/salarioM;

    printf("A quantidade de salarios minimos: %.2f", diferenca);
    return 0;
}

