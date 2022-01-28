#include "../HEADERS/cutEllipsoid.h"
#include <math.h>

cutEllipsoid::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, int nx, int ny, int nz)
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
}

cutEllipsoid::~cutEllipsoid()
{
}

void cutEllipsoid::draw(Sculptor &s)
{
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
                    s.cutVoxel(i, j, k);
                }
            }
        }
    }
}
