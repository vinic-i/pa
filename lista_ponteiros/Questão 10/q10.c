#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int i = 0;
    char a[4];
    int b[4];
    float c[4];
    double d[4];
    long n;
    printf("\n---------------------- CHAR -------------------------\n");
    for (i = 0; i <= 3; i++)
    {
        printf("Posicao %i em Hexadecimal: %X, em Decimal: %d\n", i, a + i, a + i);
    }
    printf("\n---------------------- INT --------------------------\n");

    for (i = 0; i <= 3; i++)
    {
        printf("Posicao %i em Hexadecimal: %X, em Decimal: %d\n", i, b + i, b + i);
    }
    printf("\n---------------------- FLOAT ------------------------\n");
    for (i = 0; i <= 3; i++)
    {
        printf("Posicao %i em Hexadecimal: %X, em Decimal: %d\n", i, c + i, c + i);
    }
    printf("\n---------------------- DOUBLE -----------------------\n");
    for (i = 0; i <= 3; i++)
    {
        printf("Posicao %i em Hexadecimal: %X, em Decimal: %d\n", i, d + i, d + i);
    }
    printf("\n------------------ RESPOSTA ESCRITA -----------------\n");
    printf("As respostas foram coerentes com o que eu respondi na\nquestao 9, com excecao do inteiro, que esta ocupando\n4 bits e nao 2");

    return 0;
}