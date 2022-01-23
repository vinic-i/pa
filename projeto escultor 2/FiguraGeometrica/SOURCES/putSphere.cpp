#include "../HEADERS/putSphere.h"
#include <iostream>
#include <math.h>
using namespace std;

putSphere::putSphere(int xcenter, int ycenter, int zcenter, int radius, int nx, int ny, int nz, float r, float g, float b, float a)
{

    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;
    this->nx = nx;
    this->ny = ny;
    this->nz = nz;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

putSphere::~putSphere()
{
    //dtor
}

void putSphere::draw(Sculptor &s)
{
    //caso o usuário coloque um valor fora do limite, ele será automáticamente setado para o centro da matriz
    if (xcenter < 0 || xcenter > nx)
    {
        cout << "putSphere (xcenter): Por favor insirida um valor dentro das dimensoes (x,y,z) da matriz" << endl;
        exit(1);
    }
    if (ycenter < 0 || ycenter > ny)
    {
        cout << "putSphere (ycenter): Por favor insirida um valor dentro das dimensoes (x,y,z) da matriz" << endl;
        exit(1);
    }
    if (zcenter < 0 || zcenter > nz)
    {
        cout << "putSphere (zcenter): Por favor insirida um valor dentro das dimensoes (x,y,z) da matriz" << endl;
        exit(1);
    }
    //verifica se a esfera tem um raio que cabe na matriz
    if (radius > ((nx - xcenter) - 1) / 2)
    {
        cout << "putSphere: radius fora do intervalo de x" << endl;
        exit(1);
    }
    if (radius > ((ny - ycenter) - 1) / 2)
    {
        cout << "putSphere: radius fora do intervalo de y" << endl;
        exit(1);
    }
    if (radius > ((nz - zcenter) - 1) / 2)
    {
        cout << "putSphere: radius fora do intervalo de z" << endl;
        exit(1);
    }
    s.setColor(r, g, b, a);
    int firstPartEquation = 0;
    for (int i = 1; i <= nx; i++)
    {
        for (int j = 1; j <= ny; j++)
        {
            for (int k = 0; k <= nz; k++)
            {
                firstPartEquation = pow(xcenter - i, 2) + pow(ycenter - j, 2) + pow(zcenter - k, 2);
                if (firstPartEquation <= pow(radius, 2))
                {
                    s.putVoxel(i, j, k);
                }
            }
        }
    }
}