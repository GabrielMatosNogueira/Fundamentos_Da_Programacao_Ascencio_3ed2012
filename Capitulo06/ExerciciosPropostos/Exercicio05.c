#include <stdio.h>

int main() {
    int alunoslogica[15], alunoslinguagem[15];
    int alunos = 0;

    printf("Digite o numero de matricula dos alunos de logica de programacao:\n");
    for (int i = 0; i < 15; i++) {
        printf("Digite o numero de matricula do aluno %d: ", i + 1);
        scanf("%d", &alunoslogica[i]);
    }

    printf("Digite o numero de matricula dos alunos de linguagem de programacao:\n");
    for (int i = 0; i < 15; i++) {
        printf("Digite o numero de matricula do aluno %d: ", i + 1);
        scanf("%d", &alunoslinguagem[i]);
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (alunoslogica[i] == alunoslinguagem[j]) {
                alunos++;
            }
        }
    }

    printf("Existem %d alunos que cursam as duas materias.\n", alunos);
    return 0;
}
