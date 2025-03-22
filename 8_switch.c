#include <stdio.h>

int main() {
    int grau;
    int aConta = 0;
    int bConta = 0;
    int cConta = 0;
    int dConta = 0;
    int fConta = 0;

    printf("Entre com os conceitos. \n");
    printf("Entre com o caractere EOF (fim) para finalizar as entradas.\n");

    while ((grau = getchar()) != 'q') {
        switch (grau) {
            case 'A':
            case 'a':
              ++aConta;
              break;
            case 'B':
            case 'b':
              ++bConta;
              break;
            case 'C':
            case 'c':
              ++cConta;
              break;
            case 'D':
            case 'd':
              ++dConta;
              break;
            case 'F':
            case 'f':
              ++fConta;
              break;
            case '\n':
            case ' ':
              break;
            default:
              printf("Fornecido um conceito incorreto.");
              printf("Entre com um novo conceito.\n");
              break;
        }
    }

    printf("\nOs totais de cada conceito sao:\n");
    printf("aConta: %d\n", aConta);
    printf("bConta: %d\n", bConta);
    printf("cConta: %d\n", cConta);
    printf("dConta: %d\n", dConta);
    printf("fConta: %d\n", fConta);

    return 0;
}