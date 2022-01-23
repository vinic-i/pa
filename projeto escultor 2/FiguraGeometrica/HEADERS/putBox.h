#ifndef PUTBOX_H
#define PUTBOX_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class putBox : public FiguraGeometrica
{
    int x0;
    int x1;
    int y0;
    int y1;
    int z0;
    int z1;
    int nx, ny, nz;

public:
    putBox(int x0, int x1, int y0, int y1, int z0, int z1, int nx, int ny, int nz, float r, float g, float b, float a);
    ~putBox(){};
    void draw(Sculptor &s);
};

#endif // PUTBOX_H
