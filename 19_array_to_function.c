/* Passando array para funcao */
#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main() {
    printf("Primeira chamada de cada funcao: \n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSegunda chamada de cada funcao: \n");
    staticArrayInit();
    automaticArrayInit();

    return 0;
}

/* function with local static array */
void staticArrayInit(void) {
    static int a[3];
    int i;

    printf("\nValores de staticArrayInit ao entrar:\n");
    for (i = 0; i <= 2; i++)
        printf("array1[%d] = %d\n", i, a[i]);

    printf("\nValores de staticArrayInit ao sair: \n");
    for (i = 0; i <= 2; i++)
        printf("array1[%d] = %d ", i, a[i] += 5);
}

/* funcao para demonstrar um array local automatic */
void automaticArrayInit(void) {
    int a[3] = {1, 2, 3};
    int i;

    printf("\n\nValores de automaticArrayInit ao entrar: \n");
    for (i = 0; i <= 2; i++)
        printf("array1[%d] = %d ", i, a[i]);

    printf("\n\nValores de automaticArrayInit ao sair: \n");
    for (i = 0; i <= 2; i++)
        printf("array1[%d] = %d ", i, a[i] += 5);
}