#include <stdio.h>
int main(){
    float num1=0.0, num2=0.0;

    /*Scan das variaveis*/
    printf("Digite o valor do primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o valor do segundo numero: ");
    scanf("%f", &num2);   

    /*Comparacao entre os numeros*/
    if(num1 > num2){
        printf("%f e maior que %.2f.", num1, num2);
    }
    else{
        printf("%f e maior que %.2f.", num2, num1);
    }
    return 0;
}