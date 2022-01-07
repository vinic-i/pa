#include <iostream>
#include "sculptor.hpp"
#include <math.h>

using namespace std;

int main()
{
    Sculptor v(4, 4, 4);

    v.setColor(0, 1, 0, 1);
    v.putVoxel(1,0,0);
    v.setColor(0, 0, 1, 1);
    v.putVoxel(3,3,0);
    v.writeOFF((char *)"teste00.off");

    cout << "Finalizado!" << endl;
    return 0;
}
