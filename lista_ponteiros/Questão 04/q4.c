#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "suicnv";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;
    int *p6;
    vetor[0] = 7;
    vetor[1] = 6;
    vetor[2] = 2;
    setlocale(LC_ALL, "Portuguese");

    /* (a) */
    //realocando valores usando outros ponteiros
    valor = 10;
    p6 = vetor;
    p1 = &valor;
    *p1 = 20 + *p6;
    printf("a: %d \n", valor);

    /* (b) */
    //realocando valores usando outros ponteiros
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0 + *p1;
    printf("b: %.1f \n", temp);
    printf("Questoes c, d, e, f, g e g.2 (formando a tag do instagram manipulando ponteiros/array )\n");
    /* (c) */
    p3 = &nome[0] + 5;
    aux = *p3;
    printf("%c", aux);
    /* (d) */
    p3 = &nome[4] - vetor[2];
    aux = *p3;
    printf("%c", aux);
    /* (e) */
    p3 = nome + 4; // Recebe a primeira letra do array
    printf("%c", *p3);
    /* (f) */
    p3--;
    p3--;
    printf("%c", *p3);
    /* (g) */
    p3++;
    printf("%c.", *p3);
    /* (g.2) */
    p3--;
    printf("%c\n", *p3);
    /* (h) */
    printf("Questoes h, i, j (formando uma lei manipulando ponteiros/vetores)\n");

    p4 = vetor; // por default recebe a primeira posição do vetor
    idade = *p4 - *(p4 + 1);
    printf("Art. ");
    printf("%d", idade);
    /* (i) */
    p5 = p4 + 1;
    idade = *p5 - idade;
    printf("%d", idade);
    /* (j) */
    p4 = p5 + 1;
    idade = *p4 + idade;
    printf("%d", idade);
    printf(" do Decreto Lei n 2.848 de 07 de Dezembro de 1940\n");
    printf("Questoes l, m, n (formando uma lei manipulando ponteiros/vetores)\n");
    /* (l) */
    p4 = &vetor[0];
    p4++;
    idade = *(p4 - 1) - *p4;
    printf("Art. ");
    printf("%d", idade);

    /* (m) */
    p5 = &vetor[2] - 1;

    printf("%d", *p5 + 1);
    /* (n) */
    p5++;
    printf("%d", *p5 - 1);
    printf(" do Decreto Lei n 2.848 de 07 de Dezembro de 1940\n");
    return (0);
}
