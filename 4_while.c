#include <stdio.h>

int main() {
    int k, grau, media, total;

    total = 0;
    k = 1;

    while (k <= 10) {
        printf("Entre com o grau: ");
        scanf("%d", &grau);

        total = total + grau;
        k = k + 1;
    }

    media = total / 10;
    printf("A media da turma eh %d\n", media);

    return 0;
}