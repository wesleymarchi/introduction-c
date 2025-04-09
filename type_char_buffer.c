/* Utilizando getchar para ler uma sequência de caracteres
 * Os caracteres são uma representação numérica da tabela ASCII (American Standard Code for Information Interchange)
 */
#include <stdio.h>

int main()
{
    char buffer[7];
    int i, ch;

    for (i = 0; (i < 6) && ((ch = getchar()) != EOF) && (ch != '\n'); i++) // EOF (end of file)
    {
        buffer[i] = (char) ch; // operador de coerção/conversão para char
    }

    // Insere o caractere nulo no final da string
    buffer[i] = '\0';
    printf( "Sua entrada foi: %s\n", buffer);
}