//
// Created by pablo on 2020-04-18.
//

#ifndef EX2_CORNERCUT_H
#define EX2_CORNERCUT_H

#include "Rectangle.h"
#include "Circle.h"

namespace shape {
    /**
     * a class that represents a rectangle with the top left corner cut by a circle
     * of radius provided and centered on the top left corner.
     */
    class CornerCut : public Rectangle, public Circle {
    public:
        /**
         * Constructor that validates and initializes parents
         */
        CornerCut(double x, double y, double width, double height, double radius, const char *name);

        /**
         * a copy constructor
         */
        CornerCut(const CornerCut&);

        /**
         * An assignment constructor
         * @param other
         * @return
         */
        CornerCut& operator=(const CornerCut &other);

        /**
         * computes the area of an instance of a corner cut rectangle
         * @return the value of the area in units of length squared
         */
        double area() const;

        /**
         * computes the perimeter of the instance of the corner cut rectangle
         * @return the value of the perimeter in units of length
         */
        double perimeter() const;

        /**
         * shows a text representation of the object of type Corner Cut rectangle
         *    CornerCut Name: <name>
         *      X-coordinate: <x-value>
         *      Y-coordinate: <y-value>
         *      Width:
         *      Length:
         *      Radius of the cut:
         */
        void display() const;


    };
} // namespace shape
#endif //EX2_CORNERCUT_H
