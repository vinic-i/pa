#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaVetores(int v1[], int v2[], int v3[], int n)
{
    for (int i = 0; i < n; i++)
    {
        v1[i] = v2[i] + v3[i];
    }
    printf("Primeiro Vetor: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i, ", v2[i]);
    }
    printf("Segundo Vetor: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i, ", v3[i]);
    }
    printf("\nResultado da soma: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i, ", v1[i]);
    }
}

int main()
{
    int n;
    printf("digite o tamanho dos arrays\n");
    scanf("%i", &n);
    int a1[n];
    int a2[n];
    int a3[n];
    printf("preencha o primeiro vetor \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a2[i]);
    }
    printf("preencha o segundo vetor \n");
    // o vetor
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a3[i]);
    }
    somaVetores(a1, a2, a3, n);

    return 0;
}