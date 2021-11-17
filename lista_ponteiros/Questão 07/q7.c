#include <stdio.h>

int main()
{
    int mat[4];
    int *p1;
    int x;

    mat[0] = 2;
    mat[1] = 5;
    mat[2] = 10;
    mat[3] = 15;

    p1 = mat + 1;
    printf("%d\n", *p1);
    // p1 = mat++;
    // printf("%d\n", *p1);
    // p1 = ++mat;
    // printf("%d\n", *p1);
    x = (*mat)++;
    printf("%i\n", x);
    return (0);
}
