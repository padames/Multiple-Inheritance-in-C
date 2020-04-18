#include <iostream>
#include <iomanip>
#include <cstring>

#include "Point.h"
#include "Shape.h"
#include "Square.h"

using namespace std;
using namespace shape;

int main() {
    auto p = new Point();
    p->setCoordinates(1.0, 2.5);
    cout << "Point p created at " << *p << endl;
    auto p2 = new Point(-4.6, 89.2);
    cout << "Second point p2 created successfully at " << *p2 << endl;

    auto nameStar1 = new char[5];
    strcpy(nameStar1, "Star");
    auto shape1 = Shape(nameStar1, *p);
    shape1.display();
    shape1.move(3.7,-10.4);
    shape1.display();
    cout << "Original position object at: " << *p << endl;

    auto nameCone1 = new char[5];
    strcpy(nameCone1, "Cone");
    auto shape2 = Shape(nameCone1, *p2);
    shape2.display();
    cout << "distance between star and cone: " << shape1.distance(shape2) << endl;

    auto nameSquare1 = new char[10];
    strcpy(nameSquare1, "SquareOne");
    auto squareOne = new Square(nameSquare1, *p, 10.0);
    squareOne->display();

    auto nameSquare2 = new char[10];
    strcpy(nameSquare2, "SquareTwo");

    auto squareTwo = new Square(nameSquare2, *p2, 5.0);
    squareTwo->display();

    cout << "Distance between squares is: " << squareOne->distance(*(dynamic_cast<Shape*>(squareTwo))) << endl;

}
