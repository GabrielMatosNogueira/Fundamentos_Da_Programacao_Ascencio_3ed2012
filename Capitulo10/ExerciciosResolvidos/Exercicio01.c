#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char nome[50];
    float saldo;
} Cliente;

int main(){
    Cliente clientes[15];
    int opcao, i;

    printf("Menu de opcoes:\n");
    printf("1 - Cadastrar cliente\n");
    printf("2 - Visualizar todas as contas com o mesmo nome\n");
    printf("3- Excluir a conta com menor saldo\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            for(i=0; i<15; i++){
                printf("Digite o id do cliente %d: ", i+1);
                scanf("%d", &clientes[i].id);

                printf("Digite o nome do cliente %d: ", i+1);
                scanf("%49s", clientes[i].nome);

                printf("Digite o saldo do cliente %d: ", i+1);
                scanf("%f", &clientes[i].saldo);
            }
            break;

        case 2:
            for(i=0; i<15; i++){
                printf("O cliente %s, de id %d possui o saldo %.2f\n", clientes[i].nome, clientes[i].id, clientes[i].saldo);
            }
            break;

        case 3:
            // Implementar a lógica para excluir a conta com menor saldo
            break;

        case 4:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
