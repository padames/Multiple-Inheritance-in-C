#include <iostream>
#include <iomanip>
#include <cstring>

#include "GraphicsWorld.h"

using namespace std;
using namespace shape;

int main() {
    auto graphicsWorld = GraphicsWorld();
    graphicsWorld.run();

    //    auto p = new Point();
//    p->setCoordinates(1.0, 2.5);
//    cout << "Point p created at " << *p << endl;
//    auto p2 = new Point(-4.6, 89.2);
//    cout << "Second point p2 created successfully at " << *p2 << endl;
//
//    auto shape1 = Shape(*p, "Star");
//    shape1.display();
//    shape1.move(3.7,-10.4);
//    shape1.display();
//    cout << "Original position object at: " << *p << endl;
//
//    auto shape2 = Shape(*p2, "Cone");
//    shape2.display();
//    cout << "distance between star and cone: " << shape1.distance(shape2) << endl;
//
//    auto squareOne = new Square(1, 1, 10.0, "SquareOne");
//    squareOne->display();
//
//    auto squareTwo = new Square(3.0, -5.7, 5.0, "SquareTwo");
//    squareTwo->display();
//
//    cout << "Distance between squares is: " << squareOne->distance(*squareTwo) << endl;
//
//    auto rectOne = new Rectangle(-3.1, 6.9, 2.75, 3.47, "RectangleOne");
//
//    rectOne->display();
//
//    cout << "Distance from squareOne to rectOne: " << squareOne->distance(*rectOne) << endl;
//
//    rectOne->move(100.45, 10.9);
//
//    cout << "Distance from squareOne to rectOne after move: " << squareOne->distance(*rectOne) << endl;
}
