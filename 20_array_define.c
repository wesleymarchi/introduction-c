/* Diretiva #define define uma constante simbólica; é um identificador que é substituido por
 * um texto de substituiçao pelo pré-processador C antes da compilação */

#include <stdio.h>
#define SIZE 10

int main() {
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
        arr[i] = 2 + 2 * i;

    /* %s   -> indica que uma string será impressa
     * %13s -> indica uma string com campo mínimo de 13 caracteres, se menor, é alinhada a direita
     */
    printf("%s%13s\n", "Elemento", "Valor"); // placeholders de formatação**

    /* %8d  -> imprime um inteiro com largura mínima de 8 caracteres
     * %13d -> imprime um inteiro com largura mínima de 13 caracteres, alinhado a direita
     */
    for (int i = 0; i < SIZE; i++)
        printf("%8d%13d\n", i, arr[i]);

    return 0;
}