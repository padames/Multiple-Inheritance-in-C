#include <iostream>
#include <iomanip>

#include "Point.h"
#include "Shape.h"

using namespace std;

int main() {
    auto p = new Point();
    p->setCoordinates(1.0, 2.5);
    cout << "Point p created at " << *p << endl;
    auto p2 = new Point(-4.6, 89.2);
    cout << "Second point p2 created successfully at " << *p2 << endl;

    auto shape1 = shape::Shape("Star", *p);
    shape1.display();
    shape1.move(3.7,-10.4);
    shape1.display();
    cout << "Original position object at: " << *p << endl;
    auto shape2 = shape::Shape("Cone", *p2);
    shape2.display();
    cout << "distance between star and cone: " << shape1.distance(shape2) << endl;
}
