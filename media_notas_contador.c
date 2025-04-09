/* Faça um script que seja capaz de calcular a média de 5 notas utilizando while */
#include <stdio.h>

int main() {
    int k, nota, total;
    float media;

    total = 0;
    k = 0;

    do {
        printf("Digite uma nota:\n");
        scanf("%d", &nota);

        total += nota;
    } while (++k < 5);

    media = (float)total / k;

    printf("A media eh: %.2f\n", media);

    return 0;
}