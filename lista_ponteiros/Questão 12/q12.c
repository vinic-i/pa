#include <stdio.h>
#include <stdlib.h>
void ehPar(int n)
{
    if (n % 2 == 0)
        printf("eh par");
}
void ehImpar(int n)
{
    if (n % 2 != 0)
        printf("eh impar");
}
int main()
{
    printf("Um ponteiro para funcao, nada mais eh que um ponteiro que guarda o endereco\n");
    printf("de uma funcao (endereco de uma area de codigo), e dessa maneira, eh possivel reutilizar a funcao apenas\n");
    void (*pf[])(int) = {ehPar, ehImpar}; //Declaração de um ponteiro pra função, nesse caso um ponteiro array
    int num = 3;
    /* Agora podemos chamar as funções passando na posição do 
    vetor/ponteiro qual delas eu quero usar e o parâmetro de entrada */
    (*pf[0])(num);
    (*pf[1])(num);
    return 0;
}