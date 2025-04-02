/* Faça um script que seja capaz de calcular a média de notas inseridas pelo usuario
* controle o loop com o valor "sentinela" */
#include <stdio.h>

int main() {
    int k, nota, total;
    float media;

    total = 0;
    k = 0;

    printf("Digite uma nota:\n");
    scanf("%d", &nota);

    while (nota != -1) { // nota (-1) representa o sentinela/dummy/flag
        total += nota;
        k++;

        printf("Digite uma nota:\n");
        scanf("%d", &nota);
    }

    if (k != 0) {
        media = (float)total / k;
        printf("A media eh: %.2f\n", media);
    } else {
        printf("Nenhum valor inserido.");
    }

    return 0;
}