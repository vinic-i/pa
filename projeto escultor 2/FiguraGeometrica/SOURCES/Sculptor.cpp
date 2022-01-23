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
    //cria um arquivo
    ofstream file;
    //abre o arquivo e nomeia
    file.open(filename);
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
