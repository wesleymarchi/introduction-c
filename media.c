/* Calcule a média de dois valores */
#include <stdio.h>

int main() {
    int x, y, soma;
    float media;

    soma = 0;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);

    soma = x + y;
    media = soma / 2;

    printf("A media eh: %.2f", media);

    return 0;
}