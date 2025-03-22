#include <stdio.h>

int main() {
    float media;
    int k, nota, total;

    total = 0;
    k = 0;

    printf("Digite a nota, -1 para finalizar: ");
    scanf("%d", &nota);

    while (nota != -1) {
      total += nota; /* Operador de atribuição de adição */
      k += 1;

      printf("Digite a nota, -1 para finalizar:");
      scanf("%d", &nota);
    }

    if (k != 0) {
      media = (float)total / k; /* Operador unario de coerção, isso é uma conversão explicita */
      printf("A media da turma eh %.2f", media);
    } else {
       printf("Nenhuma nota foi fornecida\n");
    }

    return 0;
}