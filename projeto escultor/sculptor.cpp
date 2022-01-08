#include "sculptor.hpp"
#include <math.h>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

Sculptor::Sculptor(int x, int y, int z)
{
    //inicializando dimensões da matriz
    nx = x;
    ny = y;
    nz = z;
    //inicializando cores/alpha
    r = 0;
    g = 0;
    b = 0;
    a = 0;
    //preenchendo todos os voxeis com isOn = false para que não apareçam
    //alocação de memoria
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
}

Sculptor::~Sculptor()
{
    //limpando a memoria -> da parte mais externa para a mais interna
    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            delete[] v[i][j];
        }
        delete[] v[i];
    }
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

// Ativa todos os voxels que satisfazem à equação da esfera e atribui aos mesmos a cor atual de desenho  (r,g,b,a)
// Equação da esfera = x²+y²+z²≤r²
void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    int aux = 0;
    int firstPartEquation = 0;
    for (int i = 1; i <= nx; i++)
    {
        for (int j = 1; j <= ny; j++)
        {
            for (int k = 0; k <= nz; k++)
            {
                firstPartEquation = pow(xcenter - i, 2) + pow(ycenter - j, 2) + pow(zcenter - k, 2);
                if (firstPartEquation <= pow(radius, 2))
                {
                    v[i][j][k].r = r;
                    v[i][j][k].g = g;
                    v[i][j][k].b = b;
                    v[i][j][k].a = a;
                    v[i][j][k].isOn = true;
                }
            }
        }
    }
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    int aux = 0;
    int firstPartEquation = 0;
    for (int i = 1; i <= nx; i++)
    {
        for (int j = 1; j <= ny; j++)
        {
            for (int k = 0; k <= nz; k++)
            {
                firstPartEquation = pow(xcenter - i, 2) + pow(ycenter - j, 2) + pow(zcenter - k, 2);
                if (firstPartEquation <= pow(radius, 2))
                {
                    v[i][j][k].isOn = false;
                }
            }
        }
    }
}
// Ativa todos os voxels que satisfazem à equação da elipse e atribui aos mesmos a cor atual de desenho  (r,g,b,a)
// Equação da elipse = x²/rx + y²/ry + z²/ry = 1
void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    int aux = 0;
    int firstPartEquation = 0;
    for (int i = 1; i <= nx; i++)
    {
        for (int j = 1; j <= ny; j++)
        {
            for (int k = 0; k <= nz; k++)
            {
                firstPartEquation = (pow(xcenter - i, 2) / pow(rx, 2)) + (pow(ycenter - j, 2) / pow(ry, 2)) + (pow(zcenter - k, 2) / pow(rz, 2));
                if (firstPartEquation == 1)
                {
                    v[i][j][k].r = r;
                    v[i][j][k].g = g;
                    v[i][j][k].b = b;
                    v[i][j][k].a = a;
                    v[i][j][k].isOn = true;
                }
            }
        }
    }
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    int aux = 0;
    int firstPartEquation = 0;
    for (int i = 1; i <= nx; i++)
    {
        for (int j = 1; j <= ny; j++)
        {
            for (int k = 0; k <= nz; k++)
            {
                firstPartEquation = (pow(xcenter - i, 2) / pow(rx, 2)) + (pow(ycenter - j, 2) / pow(ry, 2)) + (pow(zcenter - k, 2) / pow(rz, 2));
                if (firstPartEquation == 1)
                {
                    v[i][j][k].isOn = false;
                }
            }
        }
    }
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    int aux = 0;
    //verificação se o intervalo está correto primeiro valor sendo o menor e o segundo sendo o maior, caso contrário a troca é efetuada
    if (x0 > x1)
    {
        aux = x0;
        x0 = x1;
        x1 = aux;
    }
    if (y0 > y1)
    {
        aux = y0;
        y0 = y1;
        y1 = aux;
    }
    if (z0 > z1)
    {
        aux = z0;
        z0 = z1;
        z1 = aux;
    }
    if (x0 < 0)
        x0 = 0;
    if (x1 > nx)
        x1 = nx - 1;
    if (y0 < 0)
        y0 = 0;
    if (y1 > ny)
        y1 = ny - 1;
    if (z0 < 0)
        z0 = 0;
    if (z1 > nz)
        z1 = nz - 1;
    //preenchendo o intervalo com os voxeis
    for (int i = x0; i <= x1; i++)
    {
        for (int j = y0; j <= y1; j++)
        {
            for (int k = z0; k <= z1; k++)
            {
                v[i][j][k].r = r;
                v[i][j][k].g = g;
                v[i][j][k].b = b;
                v[i][j][k].a = a;
                v[i][j][k].isOn = true;
            }
        }
    }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    int aux = 0;
    //verificação se o intervalo está correto primeiro valor sendo o menor e o segundo sendo o maior, caso contrário a troca é efetuada
    if (x0 > x1)
    {
        aux = x0;
        x0 = x1;
        x1 = aux;
    }
    if (y0 > y1)
    {
        aux = y0;
        y0 = y1;
        y1 = aux;
    }
    if (z0 > z1)
    {
        aux = z0;
        z0 = z1;
        z1 = aux;
    }
    if (x0 < 0)
        x0 = 0;
    if (x1 > nx)
        x1 = nx - 1;
    if (y0 < 0)
        y0 = 0;
    if (y1 > ny)
        y1 = ny - 1;
    if (z0 < 0)
        z0 = 0;
    if (z1 > nz)
        z1 = nz - 1;
    //coloca um voxel na posição passada (x,y,z) passando os valores de rgba atual e setando isOn verdadeiro
    for (int i = x0; i <= x1; i++)
    {
        for (int j = y0; j <= y1; j++)
        {
            for (int k = z0; k <= z1; k++)
            {
                v[i][j][k].isOn = false;
            }
        }
    }
}

void Sculptor::writeOFF(char *fileName)
{
    //cria um arquivo
    ofstream file;
    //abre o arquivo e nomeia
    file.open(fileName);
    //confere se o arquivo foi criado e aberto
    if (file.is_open() == true)
    {
        cout << "file opened" << endl;
    }
    //escreve o tipo do arquivo na primeira linha
    file << "OFF" << endl;

    int nVox = 0;
    int nFaces = 0;
    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            for (int k = 0; k < nz; k++)
            {
                if (v[i][j][k].isOn == true)
                {
                    nVox++;
                }
            }
        }
    }
    //escreve a quantidade de vertice - faces - arestas, porém as areastas não precisa pois o geomview calcula sozinho
    file << 8 * nVox << " " << 6 * nVox << " " << 0 << endl;
    // usando os parâmetros de um cubo padrão de tamanho 1 como base:
    // setando as linhas do arquivo que corresponde as cordenadas de cada vértice
    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            for (int k = 0; k < nz; k++)
            {
                if (v[i][j][k].isOn == true)
                {
                    file << -0.5 + i << " " << 0.5 + j << " " << -0.5 + k << endl;
                    file << -0.5 + i << " " << -0.5 + j << " " << -0.5 + k << endl;
                    file << 0.5 + i << " " << -0.5 + j << " " << -0.5 + k << endl;
                    file << 0.5 + i << " " << 0.5 + j << " " << -0.5 + k << endl;
                    file << -0.5 + i << " " << 0.5 + j << " " << 0.5 + k << endl;
                    file << -0.5 + i << " " << -0.5 + j << " " << 0.5 + k << endl;
                    file << 0.5 + i << " " << -0.5 + j << " " << 0.5 + k << endl;
                    file << 0.5 + i << " " << 0.5 + j << " " << 0.5 + k << endl;
                }
            }
        }
    }
    // setando as linhas do arquivo que representam uma face do voxel cada
    file << fixed << setprecision(1);
    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            for (int k = 0; k < nz; k++)
            {
                if (v[i][j][k].isOn == true)
                {
                    file << "4 " << 0 + nFaces * 8 << " " << 3 + nFaces * 8 << " " << 2 + nFaces * 8 << " " << 1 + nFaces * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                         << "4 " << 4 + nFaces * 8 << " " << 5 + nFaces * 8 << " " << 6 + nFaces * 8 << " " << 7 + nFaces * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                         << "4 " << 0 + nFaces * 8 << " " << 1 + nFaces * 8 << " " << 5 + nFaces * 8 << " " << 4 + nFaces * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                         << "4 " << 0 + nFaces * 8 << " " << 4 + nFaces * 8 << " " << 7 + nFaces * 8 << " " << 3 + nFaces * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                         << "4 " << 3 + nFaces * 8 << " " << 7 + nFaces * 8 << " " << 6 + nFaces * 8 << " " << 2 + nFaces * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                         << "4 " << 1 + nFaces * 8 << " " << 2 + nFaces * 8 << " " << 6 + nFaces * 8 << " " << 5 + nFaces * 8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    nFaces++;
                }
            }
        }
    }

    file.close();
}

// referencias
// https://stackoverflow.com/questions/1403150/how-do-you-dynamically-allocate-a-matrix
// https://www.youtube.com/user/agostinhobritojr/playlists
// https://stackoverflow.com/questions/70221264/how-do-i-set-the-precision-of-a-float-variable-in-c