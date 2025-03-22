#include <stdio.h>

long fatorial(long);

int main() {
    int i;
    for (i = 1; i <= 10; i++)
        printf("%2d! = %1d\n", i, fatorial(i));

    return 0;
}

/* funcao recursiva */
long fatorial(long n) {
    if (n <= 1)
        return 1;
    else
        return (n * fatorial(n - 1));
}