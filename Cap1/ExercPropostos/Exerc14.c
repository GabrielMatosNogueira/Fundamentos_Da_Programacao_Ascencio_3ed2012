#include <stdio.h>
int main(){
    int anos, meses, semanas, dias, dataNascimento, anoAtual;
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Digite o ano de nascimento da pessoa: ");
    scanf("%d", &dataNascimento);

    anos =  anoAtual - dataNascimento;
    meses = anos*12;
    semanas = anos*52;
    dias = anos*365;

    printf("O valor de anos de vida sao: %d \n", anos);
    printf("O valor de meses de vida sao: %d \n", meses);
    printf("O valor de semanas de vida sao: %d \n", semanas);
    printf("O valor de dias de vida sao: %d \n", dias);
    return 0;
}
