#include <iostream>
#include "sculptor.hpp"
#include <math.h>

using namespace std;

int main()
{
    Sculptor v(50, 50, 50);

    v.setColor(1, 1, 1, 1);
    v.putBox(49, 1, 1, 49, 1, 49);
    v.cutBox(2, 48, 1, 48, 2, 49);
    v.setColor(1, 0, 0, 1);
    v.putEllipsoid(24, 24, 24, 14, 9, 8);
    v.cutEllipsoid(24, 24, 24, 10, 10, 7);
    //v.cutSphere(24, 20, 24, 6);
    // v.putVoxel(15,15,15);
    // v.cutVoxel(15,15,15);
    v.writeOFF((char *)"teste2.off");

    cout << "Finalizado!" << endl;
    return 0;
}
