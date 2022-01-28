#include "putBox.h"
#include <iostream>
using namespace std;

putBox::putBox(int x0, int x1, int y0, int y1, int z0, int z1, int nx, int ny, int nz, float r, float g, float b, float a)
{
    this->x0 = x0;
    this->y0 = y0;
    this->z0 = z0;
    this->x1 = x1;
    this->y1 = y1;
    this->z1 = z1;
    this->nx = nx;
    this->ny = ny;
    this->nz = nz;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void putBox::draw(Sculptor &s)
{
    int aux = 0;
    //verificação se o intervalo está correto primeiro valor sendo o menor e o segundo sendo o maior, caso contrário a troca é efetuada
    if (x0 > x1)
    {
        aux = x0;
        x0 = x1;
        x1 = aux;
        cout << "trocou x" << endl;
    }
    if (y0 > y1)
    {
        aux = y0;
        y0 = y1;
        y1 = aux;
        cout << "trocou y" << endl;
    }
    if (z0 > z1)
    {
        aux = z0;
        z0 = z1;
        z1 = aux;
        cout << "trocou z" << endl;
    }
    if (x0 < 0)
    {
        x0 = 0;
        cout << "x0 fora do limite" << endl;
    }

    if (x1 > nx)
    {
        x1 = nx - 1;
        cout << "x1 fora do limite" << endl;
    }

    if (y0 < 0)
    {
        y0 = 0;
        cout << "y0 fora do limite" << endl;
    }
    if (y1 > ny)
    {
        y1 = ny - 1;
        cout << "y1 fora do limite" << endl;
    }
    if (z0 < 0)
    {
        z0 = 0;
        cout << "z0 fora do limite" << endl;
    }
    if (z1 > nz)
    {
        z1 = nz - 1;
        cout << "z1 fora do limite" << endl;
    }
    int i, j, k;

    s.setColor(r, g, b, a);
    for (i = x0; i < x1; i++)
    {
        for (j = y0; j < y1; j++)
        {
            for (k = z0; k < z1; k++)
            {
                s.putVoxel(i, j, k);
            }
        }
    }
}
