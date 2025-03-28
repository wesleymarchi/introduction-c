#include <stdio.h>

// Função para preencher um vetor com valores do usuário
void preencherVetor(int vetor2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
}

// Função para imprimir o vetor
void imprimirVetor(int vetor[], int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// Função para encontrar o maior elemento do vetor
int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

// Função principal
int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho]; // Declaração do vetor

    preencherVetor(vetor, tamanho);
    imprimirVetor(vetor, tamanho);

    int maior = encontrarMaior(vetor, tamanho);
    printf("O maior elemento do vetor e: %d\n", maior);

    return 0;
}
