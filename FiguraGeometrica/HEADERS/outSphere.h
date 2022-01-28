#ifndef OUTSPHERE_H
#define OUTSPHERE_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"


class outSphere: public FiguraGeometrica{
/**
* @brief xcenter � o valor da coordenada x do centro da esfera.
*/
int xcenter;
/**
* @brief ycenter � o valor da coordenada y do centro da esfera.
*/
int ycenter;
/**
*@brief zcenter � o valor da coordenada z do centro da esfera.
*/
int zcenter;
/**
* @brief radius � o valor do raio da esfera.
*/
int radius;

    public:
        outSphere(int xcenter, int ycenter, int zcenter, int radius);
        ~outSphere();
        void draw(Sculptor &s);
};

#endif // OUTSPHERE_H
