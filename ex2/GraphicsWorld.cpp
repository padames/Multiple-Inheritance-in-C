//
// Created by pablo on 2020-04-18.
//

#include "GraphicsWorld.h"
#include "Square.h"
#include "Rectangle.h"

using namespace shape;

void GraphicsWorld::run() {
    cout << endl;
    cout << "This program has been written by: Pablo E Adames" << endl;
    cout << "Submitted at 11:00 pm April 19, 2008" << endl;
    cout << "Testing functions in class Point:" << endl;

    Point m(6,8);
    Point n(6,8);

    n.setX(9);
    m.display();
    n.display();

    cout << endl;
    cout << "The distance between two points as 'm.distance(n)' is " << m.distance(n) << endl;

    cout << endl;
    cout << "Testing the second version of the function distance." << endl;

    cout << endl;
    cout << "The distance between two points as 'distance(m,n)' is " <<  Point::distance(m,n) << endl;

    cout << endl;
    cout << "Resting functions in class Square:" << endl;

    cout << endl;
    Square s(5, 7, 12, "SQUARE-S");

    s.display();

    cout << "The area of " << s.getName() << " is: " << s.area() << endl;
    cout << "The perimeter of " << s.getName() << " is: " << s.perimeter() << endl;

    cout << endl;
    cout << "Testing functions of class Rectangle"<< endl;

    cout << endl;
    Rectangle a(5, 7, 12, 15, "RECTANGLE A");
    a.display();
    Rectangle b(16, 7, 8, 9, "RECTANGLE B");
    b.display();

    cout << endl;
    cout << "The area of " << a.getName() << " is: " << a.area() << endl;
    cout << "The perimeter of " << a.getName() << " is: " << a.perimeter() << endl;

    double d = a.distance(b);

    cout << endl;
    cout << "The distance between two rectangles is: " << d << endl;

    cout << endl;
    cout << "Testing copy constructor in class Rectangle" << endl;

    Rectangle rec1 = a;
    rec1.display();

    cout << endl;
    cout << "Testing assignment operator in class Rectangle" << endl;

    Rectangle rec2(3, 4, 11, 7, "RECTANGLE rec2");
    rec2 = a;
    rec2.display();

    cout << endl;
    cout << "Testing functions in class circle" << endl;


}