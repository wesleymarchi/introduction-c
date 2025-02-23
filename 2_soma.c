/* Soma */
#include <stdio.h>

main() {
    int x, y, sum;

    printf("Insira o primeiro valor inteiro: \n");
    scanf("%d", &x); /* Obtem o valor digitado; %d é o especificador de conversao; & operador de endereço, indica o local na memoria */

    printf("Insira o segundo valor inteiro: \n");
    scanf("%d", &y);

    sum = x + y;

    printf("A soma eh: %d\n", sum);

    return 0;
}