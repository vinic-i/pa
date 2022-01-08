#include <iostream>
#include "sculptor.hpp"
#include <math.h>

using namespace std;

int main()
{
    Sculptor v(10, 10, 10);

    v.setColor(0, 1, 0, 1);
    v.putVoxel(1, 0, 0);
    v.setColor(0, 0, 1, 1);
    v.putVoxel(3, 3, 0);
    v.setColor(1, 0, 0, 1);
    v.putBox(1, 3, 1, 2, 1, 2);
    v.writeOFF((char *)"teste1.off");

    cout << "Finalizado!" << endl;
    return 0;
}
