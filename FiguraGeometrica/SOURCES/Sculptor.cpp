/** @file Sculptor.cpp
*   @brief Definicoes das Funcoes
*/

#include "../HEADERS/Sculptor.h"
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
Sculptor::Sculptor(int x, int y, int z)
{
    // CONSTRUTOR DA CLASSE
    nx = x;
    ny = y;
    nz = z;
    //inicializando cores/alpha
    r = 0;
    g = 0;
    b = 0;
    a = 0;
    v = new Voxel **[x];
    for (int i = 0; i < nx; i++)
    {
        v[i] = new Voxel *[y];
        for (int j = 0; j < ny; j++)
        {
            v[i][j] = new Voxel[z];
            for (int k = 0; k < nz; k++)
            {
                v[i][j][k].isOn = false;
            }
        }
    }
};
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

void Sculptor::setColor(float r1, float g1, float b1, float a1)
{
    //seta rgba
    r = r1;
    g = g1;
    b = b1;
    a = a1;
}

void Sculptor::putVoxel(int x, int y, int z)
{
    if (x < 0)
        x = 0;
    if (x > nx)
        x = nx - 1;
    if (y < 0)
        y = 0;
    if (y > ny)
        y = ny - 1;
    if (z < 0)
        z = 0;
    if (z > nz)
        z = nz - 1;
    //coloca um voxel na posição passada (x,y,z) passando os valores de rgba atual e setando isOn verdadeiro
    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
    v[x][y][z].a = a;
    v[x][y][z].isOn = true;
}

void Sculptor::cutVoxel(int x, int y, int z)
{
    //coloca um voxel na posição passada (x,y,z) passando os valores de rgba atual e setando isOn verdadeiro
    v[x][y][z].isOn = false;
}

void Sculptor::limpaVoxels()
{
    queue<int> q;
    int lx, ly, lz;

    for (int x = 1; x < nx - 1; x++)
    {
        for (int y = 1; y < ny - 1; y++)
        {
            for (int z = 1; z < nz - 1; z++)
            {
                if ((v[x][y][z].isOn == true) &&
                    (v[x + 1][y][z].isOn == true) &&
                    (v[x - 1][y][z].isOn == true) &&
                    (v[x][y + 1][z].isOn == true) &&
                    (v[x][y - 1][z].isOn == true) &&
                    (v[x][y][z + 1].isOn == true) &&
                    (v[x][y][z - 1].isOn == true))
                {
                    v[x][y][z].isOn = false;
                    q.push(x);
                    q.push(y);
                    q.push(z);
                }
            }
        }
    }
    while (!q.empty())
    {
        lx = q.front();
        q.pop();
        ly = q.front();
        q.pop();
        lz = q.front();
        q.pop();
        v[lx][ly][lz].isOn = false;
    }
}

void Sculptor::writeOFF(char *filename)
{
    // ESCREVENDO O ARQUIVO .OFF
    int total, faces, nv, nf;
    int x, y, z;
    ofstream f(filename);
    total = 0;
    f << "OFF\n";
    for (x = 0; x < nx; x++)
    {
        for (y = 0; y < ny; y++)
        {
            for (z = 0; z < nz; z++)
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
    for (x = 0; x < nx; x++)
    {
        for (y = 0; y < ny; y++)
        {
            for (z = 0; z < nz; z++)
            {
                if ((v[x][y][z].isOn == true))
                {
                    f << -0.5 + x << " " << 0.5 + y << " " << -0.5 + z << endl;
                    f << -0.5 + x << " " << -0.5 + y << " " << -0.5 + z << endl;
                    f << 0.5 + x << " " << -0.5 + y << " " << -0.5 + z << endl;
                    f << 0.5 + x << " " << 0.5 + y << " " << -0.5 + z << endl;
                    f << -0.5 + x << " " << 0.5 + y << " " << 0.5 + z << endl;
                    f << -0.5 + x << " " << -0.5 + y << " " << 0.5 + z << endl;
                    f << 0.5 + x << " " << -0.5 + y << " " << 0.5 + z << endl;
                    f << 0.5 + x << " " << 0.5 + y << " " << 0.5 + z << endl;
                }
            }
        }
    }

    for (x = 0; x < nx; x++)
    {
        for (y = 0; y < ny; y++)
        {
            for (z = 0; z < nz; z++)
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
