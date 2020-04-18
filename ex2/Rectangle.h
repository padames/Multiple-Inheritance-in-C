//
// Created by pablo on 2020-04-18.
//

#ifndef EX2_RECTANGLE_H
#define EX2_RECTANGLE_H

#include "Square.h"

namespace shape {
    /**
     * The shape of a rectangle as a specialization of a Square type
     */
    class Rectangle : public Square {
    private:
        /**
         * the other side of pair of equal sides of a rectangle shape
         */
        double side_b_;
    public:
        /**
         * a constructor with full class member initialization
         */
        Rectangle(double, double, double, double, const char *);

        /**
         * computes the area of a rectangle object
         * @return the value of the area in the units of the lengths of
         * the sides squared
         */
        double area();

        /**
         * caomputes de length of the perimeter of an instance os
         * a rectangle object.
         * @return the value of the area of the rectangle
         */
        double perimeter();

        /**
         * gets the shorter of the two pairs of equal-length sides of
         * the instance of rectangle, or any of them if they are equal length.
         * @return the length of the shortest side
         */
        double getShortSide();

        /**
         * gets the longer of the two pairs of equal-length sides of
         * and instance of a rectangle, or any of them if they are
         * equal in length.
         * @return the length of the longest side
         */
        double getLongSide();

        /**
         * the a-side is the first length assigned to a rectangle in the constructor
         * @return the length of the a-side
         */
        double getSideA();

        /**
         * * the b-side is the second length assigned to a rectangle in the constructor
         * @return the length of the b-side
         */
        double getSideB();

        /**
         * * the a-side is the first length assigned to a rectangle in the constructor
         */
        void setSideA(double);

        /**
         * * the b-side is the second length assigned to a rectangle in the constructor
         */
        void setSideB(double);

        /**
         * shows a text representation of the object:
         *    Rectangle Name: <name>
         *      X-coordinate: <x-value>
         *      Y-coordinate: <y-value>
         */        void display();
    };

}
#endif //EX2_RECTANGLE_H
