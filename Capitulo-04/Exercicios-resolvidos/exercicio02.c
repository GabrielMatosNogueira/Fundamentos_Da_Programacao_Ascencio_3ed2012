#include <stdio.h>
int main(){
    float nota1, nota2, nota3, media;

    /*Scan das notas*/
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    /*Calculo da media*/
    media = (nota1 + nota2 + nota3)/3;

    /*Condicional de aprovacao*/
    if(media>=7){
        printf("Aprovado");
    }
    if(media>=3 && media<7){
        printf("Exame");
    }
    if(media<3 && media>=0){
        printf("Reprovado.");
    }
    return 0;
}
