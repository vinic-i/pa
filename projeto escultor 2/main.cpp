/** @file main.cpp
*   @brief Codigo principal
*/

#include <iostream>
#include "Sculptor.h"
#include <fstream>
#include <string>
#include "cutBox.h"
#include "cutEllipsoid.h"
#include "cutSphere.h"
#include "cutVoxel.h"
#include "FiguraGeometrica.h"
#include "putBox.h"
#include "putEllipsoid.h"
#include "putSphere.h"
#include "putVoxel.h"
#include <vector>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include "interpretador.h"

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

    s1->writeOFF((char *)"teste2.off");
    for (size_t i = 0; i < figs.size(); i++)
    {
        delete s1;
    }
    return 0;
}
