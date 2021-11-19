#include <stdio.h>
#include <stdlib.h>

int compar(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
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
    /*A função qsort tem como último parâmetro uma função simples,
    que se retornar 1 é ordem crescente e se retorna - 1 é ordem decrescente */
    qsort(p, 5, sizeof(int), compar);
    //imprime vetor
    for (int i = 0; i < n; i++)
    {
        printf("%f, ", p[i]);
    }

    return 0;
}