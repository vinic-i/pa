#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class cutSphere : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter;
    int radius;
    int nx, ny, nz;
    public:
        cutSphere(int xcenter, int ycenter, int zcenter, int radius, int nx, int ny, int nz);
        ~cutSphere();
        void draw(Sculptor &s);
};

#endif // CUTSPHERE_H
