/* Calcule o produto de três números inteiros. */

#include <stdio.h>

int main() {
      int x, y, z, prod;

      // Solicita os três números ao usuário
      printf("Digite tres numeros inteiros: ");
      scanf("%d %d %d", &x, &y, &z);

      // Realiza o calculo na ordem de precedencia (esquerda para a direita)
      prod = x * y * z;

      printf("O produto eh: %d", prod);

      return 0;
}