#include "putEllipsoid.h"
#include <iostream>
#include <math.h>
using namespace std;

putEllipsoid::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, int nx, int ny, int nz, float r, float g, float b, float a)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
    this->nx = nx;
    this->ny = ny;
    this->nz = nz;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

putEllipsoid::~putEllipsoid()
{
}
void putEllipsoid::draw(Sculptor &s)
{
    //caso o usuário coloque um valor fora do limite, ele será automáticamente setado para o centro da matriz
    if (xcenter < 0 || xcenter > nx)
    {
        cout << "putEllipsoid (xcenter): Por favor insirida um valor dentro das dimensoes (x,y,z) da matriz" << endl;
        exit(1);
    }
    if (ycenter < 0 || ycenter > ny)
    {
        cout << "putEllipsoid (ycenter): Por favor insirida um valor dentro das dimensoes (x,y,z) da matriz" << endl;
        exit(1);
    }
    if (zcenter < 0 || zcenter > nz)
    {
        cout << "putEllipsoid (ycenter): Por favor insirida um valor dentro das dimensoes (x,y,z) da matriz" << endl;
        exit(1);
    }
    //Verificação de que o raio é pelo menos metade do tamanho da matrix em cada uma de suas dimensoes
    if (rx > ((nx - xcenter) - 1) / 2)
    {
        cout << "putEllipsoid: rx fora do intervalo" << endl;
        exit(1);
    }
    if (ry > ((ny - ycenter) - 1) / 2)
    {
        cout << "putEllipsoid: ry fora do intervalo" << endl;
        exit(1);
    }
    if (rz > ((nz - zcenter) - 1) / 2)
    {
        cout << "putEllipsoid: rz fora do intervalo" << endl;
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
                firstPartEquation = (pow(xcenter - i, 2) / pow(rx, 2)) + (pow(ycenter - j, 2) / pow(ry, 2)) + (pow(zcenter - k, 2) / pow(rz, 2));
                if (firstPartEquation == 1)
                {
                    s.putVoxel(i, j, k);
                }
            }
        }
    }
}
