#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compar(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    printf("16.2\n");
    clock_t t;
    float *p;
    int n = 50000;
    float aux;
    //  printf("entre com n? \n");
    // scanf("%i", &n);
    //aloca dinâmicamento o vetor
    p = malloc(n * sizeof(float));
    //printf("va digitando os numeros do array \n");
    //preenche o vetor
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 500;
    }
    t = clock();
    //ordena
    qsort(p, 5, sizeof(int), compar);
    //imprime vetor
    for (int i = 0; i < n; i++)
    {
        printf("%f, ", p[i]);
    }

    t = clock() - t;
    printf("Tempo de execucao: %lf", ((double)t) / ((CLOCKS_PER_SEC / 1000))); //conversão para double
    // Tempo medido no teste 5028
    // Quando colocado uma grande massa de dados como teste, vimos que o programa "q16.2.c" que é com a função qsort é mais rápido

    return 0;
}