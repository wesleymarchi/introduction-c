#include <stdio.h>

int main() {
    int aprovacoes = 0, reprovacoes = 0, aluno = 1, resultado;

    while (aluno <= 5) {
      printf("Entre com o resultado (1=aprovado, 2=reprovado):");
      scanf("%d", &resultado);

      if (resultado == 1)
        aprovacoes++;
      else
        reprovacoes++;

      aluno++;
    }

    printf("Aprovados %d\n", aprovacoes);
    printf("Reprovados %d\n", reprovacoes);

    if (aprovacoes > 4)
      printf("Cobrar taxa escolar\n");

    return 0;
}