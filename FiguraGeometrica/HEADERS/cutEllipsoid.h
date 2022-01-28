#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class cutEllipsoid : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter;
    int rx, ry, rz;
    int nx, ny, nz;

public:
    cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, int nx, int ny, int nz);
    ~cutEllipsoid();
    void draw(Sculptor &s);
};

#endif // CUTELLIPSOID_H
