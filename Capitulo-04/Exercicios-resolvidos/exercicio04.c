#include <stdio.h>
int main(){
    float num1, num2, num3;

    /*Scan dos numeros*/
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    /*Comparacao entre os numeros*/
    if(num1 > num2 && num3<num2){
        printf("A ordem crescente dos numeros e: %.2f, %.2f, %.2f", num3, num2, num1);
    }
    if(num2>num1 && num1>num3){
        printf("A ordem crescente dos numeros e: %.2f, %.2f, %.2f", num3, num1, num2);
    }
    if(num3>num2 && num2>num1){
        printf("A ordem crescente dos numeros e: %.2f, %.2f, %.2f", num1, num2, num3);
    }
    if(num2> num3 && num3>num1){
        printf("A ordem crescente dos numeros e: %.2f, %.2f, %.2f", num1, num3, num2);
    }
    return 0;
}