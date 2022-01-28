#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class putEllipsoid : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter;
    int rx, ry, rz;
    int nx, ny, nz;

public:
    putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, int nx, int ny, int nz, float r, float g, float b, float a);
    ~putEllipsoid();
    void draw(Sculptor &s);
};

#endif // PUTELLIPSOID_H
