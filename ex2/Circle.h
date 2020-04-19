//
// Created by pablo on 2020-04-18.
//

#ifndef EX2_CIRCLE_H
#define EX2_CIRCLE_H

#include "Shape.h"

namespace shape{
    /**
     * represents the geometric shape of a circle
     */
    class Circle : public virtual Shape{
    private:
        double radius_;

    public:
        /**
         * a constructor to initialize all member variables
         */
        Circle(double, double, double, const char *);

        /**
         * copy constructor
         */
        Circle(const Circle&);

        /**
         * assignment operator
         * @return a ref to a new circle object copied from the argument object
         */
        Circle& operator=(const Circle&);

        /**
         * compute the area of an instance of a circle
         * @return the value computed for its area in length units squared
         */
        double area() const;

        /**
         * compute the permimeter of an instance of a circle shape
         * @return the value of the perimeter, the length of the circumference
         */
        double perimeter() const;

        /**
         * return the radius of the instance of a circle
         * @return the value of the radius in units of length
         */
        double getRadius() const;

        /**
         * assign a value to the radius of this instance of a circle object
         */
        void setRadius(double);

        /**
         * show a text representation of the object of type Circle
         *       Circle Name: <name>
         *      X-coordinate: <x-value>
         *      Y-coordinate: <y-value>
         */
        void display() const;

    };
}
#endif //EX2_CIRCLE_H
