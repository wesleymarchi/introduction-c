/* Usando instruções if */
#include <stdio.h>

int main() {
    int x, y;

    printf("Insira dois numeros inteiros\n");
    scanf("%d%d", &x, &y);

    if (x == y)
      printf("%d eh igual a %d\n", x, y);
    if (x != y)
      printf("%d nao eh igual a %d\n", x, y);
    if (x < y)
      printf("%d eh menor que %d\n", x, y);
    if (x > y)
      printf("%d eh maior que %d\n", x, y);
    if (x <= y)
      printf("%d eh menor ou igual a %d\n", x, y);
    if (x >= y)
      printf("%d eh maior ou igual a %d\n", x, y);

    return 0;
}