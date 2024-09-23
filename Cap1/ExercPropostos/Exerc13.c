#include <stdio.h>
int main(){
    int numero,cont=0;

    printf("Digite o numero a ser multiplicado: ");
    scanf("%d", &numero);

        for(cont = 0; cont <= 10; cont++){
            printf("%d * %d = %d \n", numero, cont, numero*cont);
        }
    return 0;
}

