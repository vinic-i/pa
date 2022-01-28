#ifndef SCULPTOR_H
#define SCULPTOR_H
class Sculptor
{

protected:
    struct Voxel
    {
        float r, g, b; // Colors
        float a;       // Transparency
        bool isOn;     // Included or not
    };
    Voxel ***v;
    int nx, ny, nz;           // Dimensions
    float r, g, b, a;         // Current drawing color           // 3D matrix


public:
    Sculptor(int _nx = 5, int _ny = 5, int _nz = 5);
    ~Sculptor();
    void setColor(float r, float g, float b, float alpha);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    void limpaVoxels();            // Erases not shown Voxels
    void writeOFF(char *filename); //Creates the .off file
};
#endif
