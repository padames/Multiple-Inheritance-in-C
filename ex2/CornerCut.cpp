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
 * a copy constructor
 */
CornerCut::CornerCut(const CornerCut& other)
    : Square(other.getOrigin().getX(), other.getOrigin().getY(), other.getSideA(), other.getName()),
    Rectangle(other.getOrigin().getX(), other.getOrigin().getY(), other.getSideA(), other.getSideB(), other.getName()),
    Circle(other.getOrigin().getX(), other.getOrigin().getY(), other.getRadius(), other.getName()),
    Shape(other.getOrigin().getX(), other.getOrigin().getY(), other.getName()) {}

/**
 * copy assignment operator
 */
CornerCut& CornerCut::operator=(const CornerCut &other) {
    setOrigin(other.getOrigin());
    setRadius(other.getRadius());
    setSide(other.getSide());
    setSideB(other.getSideB());
    setName(other.getName());
    return *this;
}


/**
 * computes the area of an instance of a corner cut rectangle
 * @return the value of the area in units of length squared
 */
double CornerCut::area() const {
    return Rectangle::area() - 0.25 * Circle::area();
}

/**
 * computes the perimeter of the instance of the corner cut rectangle
 * @return the value of the perimeter in units of length
 */
double CornerCut::perimeter() const {
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
void CornerCut::display() const {
    cout << endl;
    cout << "CornerCut Name: " << Rectangle::getName() << endl;
    Rectangle::getOrigin().display();
    cout << "Width: " << Rectangle::getShortSide() << endl;
    cout << "Length: " << Rectangle::getLongSide() << endl;
    cout << "Radius of the cut: " << Circle::getRadius() << endl;

}

