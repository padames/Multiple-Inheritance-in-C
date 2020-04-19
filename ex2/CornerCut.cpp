//
// Created by pablo on 2020-04-18.
//
#include <stdlib.h>
#include "CornerCut.h"

using namespace std;
using namespace shape;

CornerCut::CornerCut(double x, double y, double width, double length, double radius, const char *name)
    : Square(x, y, width, name), Rectangle(x, y, width, length, name), Circle(x, y, radius, name), Shape(x,y,name) {
    if (radius > width) {
        cerr << "The radius is larger than the width of the CornerCut, aborting!";
        exit(EXIT_FAILURE);
    } else if (length < width) {
        cerr << "The length is smaller than the width of the CornerCut, aborting!";
        exit(EXIT_FAILURE);
    }
}

/**
 * computes the area of an instance of a corner cut rectangle
 * @return the value of the area in units of length squared
 */
double CornerCut::area() {
    return Rectangle::area() - 0.25 * Circle::area();
}

/**
 * computes the perimeter of the instance of the corner cut rectangle
 * @return the value of the perimeter in units of length
 */
double CornerCut::perimeter() {
    return Rectangle::perimeter() - 2.0 * getRadius();
}

/**
 * shows a text representation of the object of type Corner Cut rectangle
 *    CornerCut Name: <name>
 *      X-coordinate: <x-value>
 *      Y-coordinate: <y-value>
 *      Width:
 *      Length:
 *      Radius of the cut:
 */
void CornerCut::display() {
    cout << endl;
    cout << "CornerCut Name: " << Rectangle::getName() << endl;
    Rectangle::getOrigin().display();
    cout << "Width: " << Rectangle::getShortSide() << endl;
    cout << "Length: " << Rectangle::getLongSide() << endl;
    cout << "Radius of the cut: " << Circle::getRadius() << endl;

}

