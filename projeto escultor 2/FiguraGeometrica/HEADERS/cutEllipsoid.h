#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class cutEllipsoid : public FiguraGeometrica
{
    int xcenter;
    int ycenter;
    int zcenter;
    int rx;
    int ry;
    int rz;
    public:
        cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
        ~cutEllipsoid();
        void draw(Sculptor &s);


};

#endif // CUTELLIPSOID_H
