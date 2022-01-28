#include "cutSphere.h"
#include <math.h>

cutSphere::cutSphere(int xcenter, int ycenter, int zcenter, int radius, int nx, int ny, int nz)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;
    this->nx = nx;
    this->ny = ny;
    this->nz = nz;
}

cutSphere::~cutSphere()
{
    //dtor
}

void cutSphere::draw(Sculptor &s)
{
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
                    s.cutVoxel(i, j, k);
                }
            }
        }
    }
}
