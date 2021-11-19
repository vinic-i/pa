#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef void funcPonteiroFloat(float *x, int y);
void ordena(float *p, int n)
{
    int aux;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (p[i] < p[j])
            {
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }
}

int main()
{
    printf("16\n");
    clock_t t;
    funcPonteiroFloat *funcao;
    funcao = ordena;
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
    (*funcao)(p, n);
    //imprime vetor
    for (int i = 0; i < n; i++)
    {
        printf("%f, ", p[i]);
    }

    t = clock() - t;
    printf("Tempo de execucao: %lf", ((double)t) / ((CLOCKS_PER_SEC / 1000))); //conversão para double
    // Tempo medido no teste 8491
    // Quando colocado uma grande massa de dados como teste, vimos que o programa "q16.2.c" que é com a função qsort é mais rápido
    return 0;
}