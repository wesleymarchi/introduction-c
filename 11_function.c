#include <stdio.h>

int square(int); /* Protótipo da funcao */

int main() {
    int x;

    for (x = 0; x < 10; x++)
      printf("%d\n", square(x));

    return 0;
}

/* Definição da função */
int square(int y) {
  return y * y;
}