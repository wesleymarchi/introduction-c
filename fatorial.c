/* Recursão - recursividade com fatorial
* Uma função recursiva é uma função que chama a si mesma, ou diretamente ou
* indiretamente por meio de outra função */

#include <stdio.h>

long fatorial(long);

int main() {
    int i;
    for (i = 1; i <= 5; i++)
        printf("%2d! = %1d\n", i, fatorial(i));

    return 0;
}

long fatorial(long n) {
    if (n <= 1)
        return 1;
    else
        return (n * fatorial(n - 1));
}