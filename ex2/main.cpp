#include <iostream>
#include <iomanip>
#include "Point.h"
using namespace std;



int main() {
    auto p = new Point();
    p->setCoordinates(1.0, 2.5);
    cout << "Coordinates are (" << fixed << setprecision(2) << p->getX() << ", " << p->getY() << ")" << endl;
}
