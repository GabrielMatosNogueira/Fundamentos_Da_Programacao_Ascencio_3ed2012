#include <stdio.h>
int main(){
    float salario, numV, comissao, salarioF;

    //Leitura do salario e das vendas
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario);

    printf("Digite o valor do numero de vendas: ");
    scanf("%f", &numV);

    //Operacao da comissao
    salarioF = salario + (numV * 0.04);
    comissao = numV*0.04;

    //Exibicao do salario final e a comissao recebida
    printf("O salario final e: %.2f \n", salarioF);
    printf("A comissao recebida e: %.2f", comissao);

    return 0;
}
