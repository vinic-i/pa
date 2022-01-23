#include "../HEADERS/putEllipsoid.h"
#include <iostream>
#include <math.h>

putEllipsoid::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a)
{
    this->xcenter=xcenter;
    this->ycenter=ycenter;
    this->zcenter=zcenter;
    this->rx=rx;
    this->ry=ry;
    this->rz=rz;
    this->r=r; this->g=g; this->b=b; this->a=a;
}

putEllipsoid::~putEllipsoid()
{
    //dtor
}
void putEllipsoid::draw(Sculptor &s){
    int i,j,k;
    s.setColor(r, g, b, a);
        for(i=(xcenter-rx); i<=(xcenter+rx); i++){
            for(j=(ycenter-ry); j<=(ycenter+ry); j++){
                for(k=(zcenter-rz); k<=(zcenter+rz); k++){
                    if(pow(float(i-xcenter)/float(rx),2) + pow(float(j-ycenter)/float(ry),2) + pow(float(k-zcenter)/float(rz),2) <= 1){
                        s.putVoxel(i,j,k);
                }
            }
        }
    }
}
