#include <iostream>
#include "sculptor.hpp"
#include <math.h>

using namespace std;

int main()
{
    Sculptor v(50, 50, 50);

    v.setColor(0, 0, 0, 0);
    v.putBox(5, 49, 23, 27, 10, 49);
    v.cutBox(8, 46, 23, 24, 14, 46);
    v.cutBox(9, 46, 27, 27, 15, 25);
    v.putBox(14, 40, 18, 28, 1, 1);
    v.putBox(25, 29, 23, 26, 1, 10);
    v.writeOFF((char *)"teste2.off");

    cout << "Finalizado!" << endl;
    return 0;
}
