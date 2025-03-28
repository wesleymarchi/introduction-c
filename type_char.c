/* Interpretando um tipo char como inteiro ou char */

#include <stdio.h>

int main() {
    int ch;

    printf("Insira um caractere: ");
    ch = getchar();

    printf("O caractere (%c) tem o valor %d.\n", ch, ch);

    return 0;
}