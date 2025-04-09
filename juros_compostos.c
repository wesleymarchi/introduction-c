/* Faça um script capaz de realizar o calculo de juros compostos para 10 anos */

#include <stdio.h>
#include <math.h>

int main() {
    int ano;
    double quantia, principal = 1000.0, taxa = .05;

    printf("%4s%21s\n", "Ano", "Saldo na conta");
    for (ano = 1; ano <= 10; ano++) {
        quantia = principal * pow(1.0 + taxa, ano);
        printf("%4d%21.2f\n", ano, quantia);
    }

    return 0;
}