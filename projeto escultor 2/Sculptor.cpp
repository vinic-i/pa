/** @file Sculptor.cpp
*   @brief Definicoes das Funcoes
*/

#include "Sculptor.h"
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
#include <queue>
#include <iomanip>
#include <cctype>

using namespace std;

/// Construtor
Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    // CONSTRUTOR DA CLASSE
    nx = _nx;
    ny = _ny;
    nz = _nz;
    delta = 0;
    lado = 0.5 - delta;
    v = new Voxel **[_nx];
    for (int i = 0; i < nx; i++)
    {
        v[i] = new Voxel *[_ny];
        for (int j = 0; j < ny; j++)
        {
            v[i][j] = new Voxel[_nz];
            for (int k = 0; k < nz; k++)
            {
                v[i][j][k].isOn = false;
            }
        }
    }
}

Sculptor::~Sculptor()
{
    //DESTRUTOR DA CLASSE
    if (nx == 0 || ny == 0 || nz == 0)
    {
        return;
    }
    delete[] v[0][0];
    delete[] v[0];
    delete[] v;
}

void Sculptor::putVoxel(int x0, int y0, int z0)
{
    if ((x0 >= nx) || (y0 >= ny) || (z0 >= nz))
    {
        return;
    }
    else if ((x0 < 0) || (y0 < 0) || (z0 < 0))
    {
        return;
    }
    else
    {
        v[x0][y0][z0].isOn = true;
        // ATRIBUINDO AS CORES AO VOXEL
        v[x0][y0][z0].r = r;
        v[x0][y0][z0].g = g;
        v[x0][y0][z0].b = b;
        v[x0][y0][z0].a = a;
    }
}

void Sculptor::setColor(float r, float g, float b, float alpha)
{
    r = r;     //componente correspondente � cor vermelha.
    g = g;     //componente correspondente � cor verde.
    b = b;     //componente correspondente � cor azul.
    a = alpha; //componente correspondente � opacidade.
}

void Sculptor::cutVoxel(int x0, int y0, int z0)
{
    // REMOVENDO UM VOXEL
    v[x0][y0][z0].isOn = false;
}

void Sculptor::writeOFF(char *filename)
{
    // ESCREVENDO O ARQUIVO .OFF
    int total, faces, nv, nf;
    ofstream f(filename);
    total = 0;
    f << "OFF\n";
    for (int x = 0; x < nx; x++)
    {
        for (int y = 0; y < ny; y++)
        {
            for (int z = 0; z < nz; z++)
            {
                if (v[x][y][z].isOn == true)
                {
                    total++;
                }
            }
        }
    }
    nv = 8 * total;
    nf = 6 * total;
    faces = 0;
    f << nv << " " << nf << " 0 \n";
    f << fixed << setprecision(1);
    for (x = 0; x < nx; x++)
    {
        for (y = 0; y < ny; y++)
        {
            for (z = 0; z < nz; z++)
            {
                if ((v[x][y][z].isOn == true))
                {
                    f << x - lado << " " << y + lado << " " << z - lado << "\n"
                      << x - lado << " " << y - lado << " " << z - lado << "\n"
                      << x + lado << " " << y - lado << " " << z - lado << "\n"
                      << x + lado << " " << y + lado << " " << z - lado << "\n"
                      << x - lado << " " << y + lado << " " << z + lado << "\n"
                      << x - lado << " " << y - lado << " " << z + lado << "\n"
                      << x + lado << " " << y - lado << " " << z + lado << "\n"
                      << x + lado << " " << y + lado << " " << z + lado << "\n";
                }
            }
        }
    }

    for (int x = 0; x < nx; x++)
    {
        for (int y = 0; y < ny; y++)
        {
            for (int z = 0; z < nz; z++)
            {
                if ((v[x][y][z].isOn == true))
                {
                    f << 4 << " " << 0 + faces << " " << 3 + faces << " " << 2 + faces << " " << 1 + faces << " "
                      << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " " << v[x][y][z].a << endl
                      << 4 << " " << 4 + faces << " " << 5 + faces << " " << 6 + faces << " " << 7 + faces << " "
                      << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " " << v[x][y][z].a << endl
                      << 4 << " " << 0 + faces << " " << 1 + faces << " " << 5 + faces << " " << 4 + faces << " "
                      << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " " << v[x][y][z].a << endl
                      << 4 << " " << 0 + faces << " " << 4 + faces << " " << 7 + faces << " " << 3 + faces << " "
                      << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " " << v[x][y][z].a << endl
                      << 4 << " " << 3 + faces << " " << 7 + faces << " " << 6 + faces << " " << 2 + faces << " "
                      << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " " << v[x][y][z].a << endl
                      << 4 << " " << 1 + faces << " " << 2 + faces << " " << 6 + faces << " " << 5 + faces << " "
                      << v[x][y][z].r << " " << v[x][y][z].g << " " << v[x][y][z].b << " " << v[x][y][z].a << endl;
                    faces = faces + 8;
                }
            }
        }
    }

    total = 0;
    f.close();
    std::string file;
    std::ifstream MyReadFile("Vida.off");
    while (getline(MyReadFile, file))
    {
        std::cout << file;
    }
    MyReadFile.close();
}
