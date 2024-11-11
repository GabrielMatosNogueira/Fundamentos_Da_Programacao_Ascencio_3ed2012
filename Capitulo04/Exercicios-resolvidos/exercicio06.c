#include <stdio.h>
int main(){
    int num1, num2;

    /*Scan das variaveis*/
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    /*Procedimento de divisibilidade*/
    if(num1%2!=0){
        printf("O numero %d e impar\n", num1);
    }
    if(num1%2==0){
        printf("O numero %d e par\n", num1);
    }
    if(num2%2!=0){
        printf("O numero %d e impar\n", num2);
    }
    if(num2%2==0){
        printf("O numero %d e par\n", num2);
    }
    return 0;
}