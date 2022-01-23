#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class putSphere : public FiguraGeometrica
{

    int xcenter, ycenter, zcenter;
    int radius;
    int nx, ny, nz;

public:
    putSphere(int xcenter, int ycenter, int zcenter, int radius, int nx, int ny, int nz, float r, float g, float b, float a);
    ~putSphere();
    void draw(Sculptor &s);
};

#endif // PUTSPHERE_H
