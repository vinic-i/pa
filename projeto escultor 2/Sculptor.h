#ifndef SCULPTOR_H
#define SCULPTOR_H

class Sculptor
{

protected:
	struct Voxel
	{
		float r, g, b; // Colors
		float a;	   // Transparency
		bool isOn;	   // Included or not
	};
	Voxel ***v;				  // 3D matrix
	float nx, ny, nz, nv, nf; // Dimensions
	float r, g, b, a;		  // Current drawing color
	int x, y, z;
	int i, j, k;
	int x0, x1;
	int y0, y1;
	int z0, z1;
	float lado, delta;
	int xcenter, ycenter, zcenter, radius;
	int rx, ry, rz;

public:
	Sculptor(int _nx, int _ny, int _nz);
	~Sculptor();
	void putVoxel(int x, int y, int z);
	void cutVoxel(int x0, int y0, int z0);
	void setColor(float r, float g, float b, float a);
	void writeOFF(char *filename);
};
#endif
