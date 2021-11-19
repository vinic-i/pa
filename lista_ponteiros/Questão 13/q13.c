#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p;
    int n = 0;
    float aux;

    printf("entre com n? \n");
    scanf("%i", &n);
    //aloca dinâmicamento o vetor
    p = malloc(n * sizeof(float));
    printf("va digitando os numeros do array \n");
    //preenche o vetor
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &p[i]);
    }
    //ordenar vetor
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
    //imprime vetor
    for (int i = 0; i < n; i++)
    {
        printf("%f, ", p[i]);
    }

    return 0;
}