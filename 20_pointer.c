/* ponteiro e operados & e * */
#include <stdio.h>

int main() {
    int a;
    int *aPtr; /* aPtr eh um ponteiro para um inteiro */

    a = 7;
    aPtr = &a; /* atribui o endereco de a */

    printf("O endereco de a eh %p\nO valor de aPtr eh %p\n\n", &a, aPtr);

    printf("O valor de a eh %d\nO valor de *aPtr eh %d\n\n", a, *aPtr);

    printf("Sabendo que * e & complementam-se mutuamente.\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, &*aPtr);

    return 0;
}