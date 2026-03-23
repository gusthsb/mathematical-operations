#include <stdio.h>
#include "operations.h"

int main(void)
{
    int a;
    int b;

    a = 10;
    b = 10;
    printf("Resultado da soma = %d\n", addition(a, b));
    printf("Resultado da subtração = %d\n", subtraction(a, b));
    printf("Resultado da multiplicação = %d\n", multiplication(a, b));
    printf("Resultado da divisão = %d\n", division(a, b));
    printf("Resultado da divisão (modulo) = %d\n", division_remainder(a, b));
}