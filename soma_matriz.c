/* Faça um script capaz de realizar a soma entre duas matrizes 3x3 */

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz1[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS], soma[LINHAS][COLUNAS];

    // Entrada da primeira matriz
    printf("Digite os elementos da primeira matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Entrada da segunda matriz
    printf("\nDigite os elementos da segunda matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Soma das matrizes
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Exibição da matriz resultante
    printf("\nMatriz soma:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
