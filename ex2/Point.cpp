//
// Created by pablo on 2020-04-17.
//

#include "Point.h"
#include <math.h>

int Point::id_ = 0;

Point::Point() { id_++;}

Point::Point(double x, double y) : x_(x), y_(x) {
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

double Point::getX() {
    return x_;
}

double Point::getY() {
    return y_;
}

double Point::counter() {
    return Point::id_;
}

double Point::distance(Point p1, Point p2) {
    return sqrt(p1.getX() * p2.getX() + p1.getY() * p2.getY());
}

double Point::distance(Point other) {
    return sqrt(x_ * other.getX() + y_ * other.getY());
}
