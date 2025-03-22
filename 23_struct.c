/* Estruturas e operador de membro */
#include <stdio.h>

struct pessoa {
    char nome[50];
    int idade;
    float altura;
};

main() {
    struct pessoa p = {"John Wick", 25, 1.80}; // inicializa uma estrutura

    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);

    return 0;
}