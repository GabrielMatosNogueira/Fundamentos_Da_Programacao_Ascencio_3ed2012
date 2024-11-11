#include <stdio.h>
#include <math.h>
int main(){
    int I;
    printf("Menu de opcoes:\n1.Somar dois numeros\n2. Raiz quadrada de um numero\n");
    scanf("%d", &I);

    if(I=1){
        double a, b, soma;
        scanf("%lf %lf", &a, &b);
        soma = a + b;
        printf("A soma dos numeros e: %.2lf", soma);
    }
    if(I=2){
        double a, raiz;
        scanf("%lf", &a);
        raiz = sqrt(a);
        printf("A raiz quadrada do numero e: %d", raiz);
    }
    return 0;
}
