#include <stdio.h>

// Definição do Tipo Abstrado de Dados (TAD) para números complexos
typedef struct {
    double real;
    double imag;
} Complex;

// Função para criar um número complexo
Complex createComplex(double real, double imag) {
    Complex z;
    z.real = real;
    z.imag = imag;

    return z;
}

// Função para somar dois números complexos
Complex sumComplex(Complex z1, Complex z2) {
    Complex result;
    result.real = z1.real + z2.real;
    result.imag = z1.imag + z2.imag;

    return result;
}

// Função para multiplicar dois números complexos
Complex multiplicationComplex(Complex z1, Complex z2) {
    Complex result;
    result.real = (z1.real * z2.real) - (z1.imag * z2.imag);
    result.imag = (z1.real * z2.imag) + (z1.imag * z2.real);

    return result;
}

void printComplex(Complex z) {
    printf("%.2f + %.fi\n", z.real, z.imag);
}

int main() {
  Complex z1 = createComplex(3.0, 2.0);
  Complex z2 = createComplex(1.5, -4.0);

  printf("Numero complexo 1: ");
  printComplex(z1);

  printf("Numero complexo 2: ");
  printComplex(z2);

  Complex sum = sumComplex(z1, z2);
  printf("Soma: ");
  printComplex(sum);

  Complex product = multiplicationComplex(z1, z2);
  printf("Multiplicacao: ");
  printComplex(product);

  return 0;
}