#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class putSphere : public FiguraGeometrica
{
    /**
     * @brief xcenter � o valor da coordenada x do centro da esfera.
     */
    int xcenter;
    /**
     * @brief ycenter � o valor da coordenada y do centro da esfera.
     */
    int ycenter;
    /**
     * @brief zcenter � o valor da coordenada z do centro da esfera.
     */
    int zcenter;
    /**
     * @brief radius � o valor do raio da esfera.
     */
    int radius;
    public:
        putSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
        ~putSphere();
        void draw(Sculptor &s);

};

#endif // PUTSPHERE_H
