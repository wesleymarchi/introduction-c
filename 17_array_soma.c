#include <stdio.h>

#define SIZE 12 /* Constante simbólica, é um identificador */

int main() {
    int arr[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45}, i, total = 0;

    for (i = 0; i <= SIZE - 1; i++)
        total += arr[i]; /* Operador de atribuição de adição */

    printf("A soma dos elementos do array eh %d\n", total);

    return 0;
}