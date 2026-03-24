#include <stdio.h>
#include "operations.h"

int main(void)
{
    while (1) 
    {
        printf("\n--- NOVA OPERACAO (ou -24 para sair) ---\n");
        int a = int_validation("Digite o primeiro numero: ");
        int b = division_validation("Digite o segundo numero: ");

        printf("\nSoma: %d | Sub: %d | Mult: %d\n", addition(a, b), subtraction(a, b), multiplication(a, b));
        printf("Div: %d   | Resto: %d\n", division(a, b), division_remainder(a, b));
    }
    return (0);
}