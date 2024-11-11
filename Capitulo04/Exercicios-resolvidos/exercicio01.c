#include <stdio.h>
int main(){
    float nota1, nota2, nota3, media;

    //Scan da nota
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    //Calculo com os pesos
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    //Condicional para aprovacao
    if(media>=8){
        printf("Conceito A");
    }
    if(media>=7 && media<8){
        printf("Conceito B");
    }
    if(media>=6 && media<7){
        printf("Conceito C");
    }
    if(media>=5 && media<6){
        printf("Conceito D");
    }
    if(media>=0 && media<5){
        printf("Conceito E");
    }
    return 0;
}