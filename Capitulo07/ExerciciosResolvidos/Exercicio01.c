#include <stdio.h>

int main() {
    int matriz[2][2], resultado[2][2], maior;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Elemento M[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            resultado[i][j] = matriz[i][j] * maior;
        }
    }

    printf("\nMatriz R (resultado):\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}