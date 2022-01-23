#include "../HEADERS/cutSphere.h"
#include <math.h>

cutSphere::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    this->xcenter=xcenter;
    this->ycenter=ycenter;
    this->zcenter=zcenter;
    this->radius=radius;
}

cutSphere::~cutSphere()
{
    //dtor
}

void cutSphere::draw(Sculptor &s){
    int i,j,k;

    double r=radius/2.0;
    double dist;
    for(i=0; i<(2*xcenter); i++){
        for(j=0; j<(2*ycenter); j++){
            for(k=0; k<(2*zcenter); k++){
                dist = (i-xcenter/2.0) * (i-xcenter/2.0 ) / (r*r) +
                       (j-ycenter/2.0) * (j-ycenter/2.0) / (r*r) +
                       (k-zcenter/2.0) * (k-zcenter/2.0 ) / (r*r);
                if(dist<=1.0){
                    s.cutVoxel(i,j,k);;
                }
            }
        }
    }
}
