
#include "../HEADERS/Sculptor.h"
#include "../HEADERS/cutBox.h"
#include "../HEADERS/cutEllipsoid.h"
#include "../HEADERS/cutSphere.h"
#include "../HEADERS/cutVoxel.h"
#include "../HEADERS/FiguraGeometrica.h"
#include "../HEADERS/outSphere.h"
#include "../HEADERS/putBox.h"
#include "../HEADERS/putEllipsoid.h"
#include "../HEADERS/putSphere.h"
#include "../HEADERS/putVoxel.h"
#include <iostream>
#include <vector>
#include "../HEADERS/interpretador.h"

using namespace std;
int main()
{
    Sculptor *s1;

    Interpretador parser;

    std::vector<FiguraGeometrica *> figs;

    figs = parser.parse("A.txt");

    s1 = new Sculptor(parser.getDimx(), parser.getDimy(), parser.getDimz());

    for (size_t i = 0; i < figs.size(); i++)
    {
        figs[i]->draw(*s1);
    }

    s1->writeOFF((char *)"teste1.off");
    for (size_t i = 0; i < figs.size(); i++)
    {
        delete s1;
    }
    return 0;
}
