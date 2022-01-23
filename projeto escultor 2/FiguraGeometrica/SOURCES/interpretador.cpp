#include "../HEADERS/interpretador.h"
#include <fstream>
#include <sstream>
#include "../HEADERS/putBox.h"
#include "../HEADERS/cutBox.h"
#include "../HEADERS/putVoxel.h"
#include "../HEADERS/cutVoxel.h"
#include "../HEADERS/putSphere.h"
#include "../HEADERS/cutSphere.h"
#include "../HEADERS/putEllipsoid.h"
#include "../HEADERS/cutEllipsoid.h"
#include <iostream>

Interpretador::Interpretador()
{
}
std::vector<FiguraGeometrica *> Interpretador::parse(std::string filename)
{
    std::vector<FiguraGeometrica *> figs;
    std::ifstream fin;
    std::stringstream ss;
    std::string s, token;

    fin.open(filename.c_str());
    //verifica se o fluxo foi aberto
    if (!fin.is_open())
    {
        std::cout << "erro ao abrir arquivo" << filename << std::endl;
        exit(0);
    }
    while (fin.good())
    {
        std::getline(fin, s);
        if (fin.good())
        {
            //precisamos limpar o que tinha no ss (podia ser lixo)
            ss.clear();
            ss.str(s);
            //para atribuir a primeira palavra ao token:
            ss >> token;
            if (ss.good())
            {
                if (token.compare("dim") == 0)
                {
                    ss >> dimx >> dimy >> dimz;
                }
                else if (token.compare("putvoxel") == 0)
                {
                    int x0, y0, z0;
                    ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                    figs.push_back(new putVoxel(x0, y0, z0, r, g, b, a));
                }
                else if (token.compare("cutvoxel") == 0)
                {
                    int x, y, z;
                    float r, g, b, a;
                    ss >> x >> y >> z;
                    figs.push_back(new cutVoxel(x, y, z));
                }
                else if (token.compare("putbox") == 0)
                {
                    int x0, x1, y0, y1, z0, z1;
                    float r, g, b, a;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                    figs.push_back(new putBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
                }
                else if (token.compare("cutbox") == 0)
                {
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                    figs.push_back(new cutBox(x0, x1, y0, y1, z0, z1));
                }
                else if (token.compare("putsphere") == 0)
                {
                    int xcenter, ycenter, zcenter, radius;
                    float r, g, b, a;
                    ss >> xcenter >> ycenter >> zcenter >> radius >> r >> g >> b >> a;
                    figs.push_back(new putSphere(xcenter, ycenter, zcenter, radius, r, g, b, a));
                }
                else if (token.compare("cutsphere") == 0)
                {
                    int xcenter, ycenter, zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius;
                    figs.push_back(new cutSphere(xcenter, ycenter, zcenter, radius));
                }
                else if (token.compare("putellipsoid") == 0)
                {
                    int xcenter, ycenter, zcenter, rx, ry, rz;
                    float r, g, b, a;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a;
                    figs.push_back(new putEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz, r, g, b, a));
                }
                else if (token.compare("cutellipsoid") == 0)
                {
                    int xcenter, ycenter, zcenter, rx, ry, rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz;
                    figs.push_back(new cutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz));
                }
            }
        }
    }
    return (figs);
}

int Interpretador::getDimx()
{
    return dimx;
}
int Interpretador::getDimy()
{
    return dimy;
}
int Interpretador::getDimz()
{
    return dimz;
}