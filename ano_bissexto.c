/* Faça um script que seja capaz de identificar se um ano fornecido é bissexto ou não */
#include <stdio.h>

int main() {
      int ano;

      printf("Digite um ano:\n");
      scanf("%d", &ano);

      if ((ano % 4 == 0) && ((ano % 400 == 0) || (ano % 100 != 0)))
            printf("Bissexto\n");
      else
            printf("Nao eh bissexto\n");

      return 0;
}