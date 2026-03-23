#include <stdio.h>

int sum(int a, int b)
{
    int result;
    
    result = a + b;
    return result;
}

int main(void)
{
    int a;
    int b;

    a = 5;
    b = 4;
    printf("Resultado da soma = %d\n", sum(a, b));
}
