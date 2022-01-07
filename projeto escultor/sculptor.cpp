#include "sculptor.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;

Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    nx = _nx;
    ny = _ny;
    nz = _nz;
    r = 1.00;
    g = 1.00;
    b = 1.00;
    a = 1.00;

    cout << "Inicio da alocacao" << endl;
    cout << "nx: " << nx << endl;
    cout << "ny: " << ny << endl;
    cout << "nz: " << nz << endl;

    v = new Voxel **[nx];
    for (int i = 0; i < nx; i++)
    {
        v[i] = new Voxel *[ny];
        for (int j = 0; j < ny; j++)
        {
            v[i][j] = new Voxel[nz];
            for (int k = 0; k < nz; k++)
            {
                v[i][j][k].isOn = false;
            }
        }
    }

    cout << "fim da alocacao" << endl;
}

Sculptor::~Sculptor()
{

    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            delete[] v[i][j];
        }
        delete[] v[i];
    }

    delete[] v;

    cout << "delete V" << endl;
}

void Sculptor::setColor(float red, float green, float blue, float alpha)
{
    r = red;
    g = green;
    b = blue;
    a = alpha;
}

void Sculptor::putVoxel(int x, int y, int z)
{

    //Ativa o voxel na posi��o (x,y,z),fazendo isOn = true e atribuindo a cor atual de desenho

    v[x][y][z].isOn = true;
    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
    v[x][y][z].a = a;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{

    for (int i = x0; i <= x1; i++)
    {
        for (int j = y0; j <= y1; j++)
        {
            for (int k = z0; k <= z1; k++)
            {
                v[i][j][k].isOn = true;
                v[i][j][k].r = r;
                v[i][j][k].g = g;
                v[i][j][k].b = b;
                v[i][j][k].a = a;
            }
        }
    }
}

void Sculptor::writeOFF(char *filename)
{
    cout << "Arquivo" << endl;
    ofstream arquivo;
    arquivo.open(filename);

    if (arquivo.is_open() == true)
    {
        cout << "Iniciando" << endl;
    }

    arquivo << "OFF" << endl;

    int numeros_Vox = 0;
    int numeros_Face = 0;

    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            for (int k = 0; k < nz; k++)
            {
                if (v[i][j][k].isOn == true)
                {
                    numeros_Vox++;
                }
            }
        }
    }

    arquivo << 8 * numeros_Vox << " " << 6 * numeros_Vox << " " << 0 << endl;

    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            for (int k = 0; k < nz; k++)
            {
                if (v[i][j][k].isOn == true)
                {
                    arquivo << -0.5 + i << " " << 0.5 + j << " " << -0.5 + k << endl;
                    arquivo << -0.5 + i << " " << -0.5 + j << " " << -0.5 + k << endl;
                    arquivo << 0.5 + i << " " << -0.5 + j << " " << -0.5 + k << endl;
                    arquivo << 0.5 + i << " " << 0.5 + j << " " << -0.5 + k << endl;
                    arquivo << -0.5 + i << " " << 0.5 + j << " " << 0.5 + k << endl;
                    arquivo << -0.5 + i << " " << -0.5 + j << " " << 0.5 + k << endl;
                    arquivo << 0.5 + i << " " << -0.5 + j << " " << 0.5 + k << endl;
                    arquivo << 0.5 + i << " " << 0.5 + j << " " << 0.5 + k << endl;
                }
            }
        }
    }

    arquivo << fixed << setprecision(2); // numeros floats vão sair com 2 casa
    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            for (int k = 0; k < nz; k++)
            {
                if (v[i][j][k].isOn == true)
                {
                    arquivo << "4 " << 0 + numeros_Face * 8 << " " << 3 + numeros_Face * 8 << " " << 2 + numeros_Face * 8 << " " << 1 + numeros_Face * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                            << "4 " << 4 + numeros_Face * 8 << " " << 5 + numeros_Face * 8 << " " << 6 + numeros_Face * 8 << " " << 7 + numeros_Face * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                            << "4 " << 0 + numeros_Face * 8 << " " << 1 + numeros_Face * 8 << " " << 5 + numeros_Face * 8 << " " << 4 + numeros_Face * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                            << "4 " << 0 + numeros_Face * 8 << " " << 4 + numeros_Face * 8 << " " << 7 + numeros_Face * 8 << " " << 3 + numeros_Face * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                            << "4 " << 3 + numeros_Face * 8 << " " << 7 + numeros_Face * 8 << " " << 6 + numeros_Face * 8 << " " << 2 + numeros_Face * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                            << "4 " << 1 + numeros_Face * 8 << " " << 2 + numeros_Face * 8 << " " << 6 + numeros_Face * 8 << " " << 5 + numeros_Face * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    numeros_Face++;
                }
            }
        }
    }

    arquivo.close();
}