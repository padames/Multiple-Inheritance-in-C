//
// Created by pablo on 2020-04-18.
//

#include "Rectangle.h"


namespace shape {
    /**
     * a constructor with full class member initialization
     */
    Rectangle::Rectangle(double x, double y, double sideA, double sideB, const char * name)
        : side_b_(sideB), Square(x, y, sideA, name), Shape(x, y, name) {}

    /**
     * copy constructor
     * @param other
     */
    Rectangle::Rectangle(const Rectangle& other)
    : Square(other.getOrigin().getX(), other.getOrigin().getY(), other.getSide(), other.getName()),
    Shape(other.getOrigin().getX(), other.getOrigin().getY(), other.getName()), side_b_(other.getSideB()) {}

    Rectangle& Rectangle::operator=(const Rectangle &other) {
        setName(other.getName());
        setOrigin(other.getOrigin());
        setSideA(other.getSideA());
        setSideB(other.getSideB());
        return *this;
    }


    /**
     * computes the area of a rectangle object
     * @return the value of the area in the units of the lengths of
     * the sides squared
     */
    double Rectangle::area() const {
        return getSideA() * getSideB();
    }

    /**
     * caomputes de length of the perimeter of an instance os
     * a rectangle object.
     * @return the value of the area of the rectangle
     */
    double Rectangle::perimeter() const {
        return 2.0 * ( getSideA() + getSideB() );
    }

    /**
     * gets the shorter of the two pairs of equal-length sides of
     * the instance of rectangle, or any of them if they are equal length.
     * @return the length of the shortest side
     */
    double Rectangle::getShortSide() const{
        return (getSideA() > getSideB())? getSideB(): getSideA();
    }

    /**
     * gets the longer of the two pairs of equal-length sides of
     * and instance of a rectangle, or any of them if they are
     * equal in length.
     * @return the length of the longest side
     */
    double Rectangle::getLongSide() const {
        return (getSideA() > getSideB())? getSideA(): getSideB();
    }

    /**
     * the a-side is the first length assigned to a rectangle in the constructor
     * @return the length of the a-side
     */
    double Rectangle::getSideA() const{
        return Square::getSide();
    }

    /**
     * * the b-side is the second length assigned to a rectangle in the constructor
     * @return the length of the b-side
     */
    double Rectangle::getSideB() const{
        return side_b_;
    }

    /**
     * * the a-side is the first length assigned to a rectangle in the constructor
     */
    void Rectangle::setSideA(double sideA) {
        Square::setSide(sideA);
    }

    /**
     * * the b-side is the second length assigned to a rectangle in the constructor
     */
    void Rectangle::setSideB(double sideB) {
        side_b_ = sideB;
    }

    /**
     * shows a text representation of the object:
     *    Rectangle Name: <name>
     *      X-coordinate: <x-value>
     *      Y-coordinate: <y-value>
     */
    void Rectangle::display() const {
        cout << endl;
        cout << "Rectangle Name: " << getName();
        getOrigin().display();
    }
}