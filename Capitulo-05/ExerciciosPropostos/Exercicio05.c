#include <stdio.h>
int main(){
    int alunoslogica[15], alunoslinguagem[15];
    printf("Digite o numero de matricula dos alunos de logica de programacao: ");
    for(int i=0; i<15; i++){
        printf("Digite o termo %d da sequencia: ", i+1);
        scanf("%d", &alunoslogica[i]);
        for(int j=0; j<15; j++){
            printf("Digite o termo %d da sequencia: ", i+1);
            scanf("%d", &alunoslinguagem[j]);
        }
        for(int alunos, int k; k<30; k++){
            if(alunoslogica[i]==alunoslinguagem[j]){
                    alunos++;
            }
                printf("Existem %d alunos que cursam as duas materias", alunos);
        }
    }
}