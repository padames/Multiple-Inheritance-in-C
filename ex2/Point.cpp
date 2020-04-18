//
// Created by pablo on 2020-04-17.
//
#include <iostream>
#include <math.h>
#include <iostream>
#include "Point.h"


using namespace std;

int Point::id_ = 0;

Point::Point() { id_++;}

Point::Point(double x, double y) : x_(x), y_(y) {
    Point();
}

void Point::setCoordinates(double x, double y) {
    x_ = x;
    y_ = y;
}

void Point::setX(double x) {
    x_ = x;
}

void Point::setY(double y) {
    y_ = y;
}

double Point::getX() const {
    return x_;
}

double Point::getY() const {
    return y_;
}

double Point::counter() {
    return Point::id_;
}

void Point::moveBy(double dx, double dy) {
    setX(getX() + dx);
    setY(getY() + dy);
}


double Point::distance(Point p1, Point p2) {
    return sqrt(p1.getX() * p2.getX() + p1.getY() * p2.getY());
}

double Point::distance(Point other) {
    auto ss = x_ * other.getX() + y_ * other.getY();
    return sqrt(abs(ss));
}

ostream& Point::write (ostream& os) const {
    os << "(" << getX() << ", " << getY() << ")" << endl;
    return os;
}