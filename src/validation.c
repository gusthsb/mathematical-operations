#include <stdio.h>
#include <stdlib.h>

int int_validation(char *prompt)
{
    int n;
    int status;

    printf("%s", prompt);
    while ((status = scanf("%d", &n)) != 1)
    {
        printf("Erro: insira somente numeros inteiros. \n");
        while (getchar() != '\n');
        printf("%s", prompt);
    }
    if (n == -24)
    {
        printf("Saindo do programa\n");
        exit(0);
    }
    return (n);
}

int division_validation(char *prompt)
{
    int n;

    n = int_validation(prompt);
    while (n == 0)
    {
        printf("Divisão por 0 não permitida\n");
        n = int_validation(prompt);
    }
    return (n);
}
