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
         * compute the area of an instance of a circle
         * @return the value computed for its area in length units squared
         */
        double area();

        /**
         * compute the permimeter of an instance of a circle shape
         * @return the value of the perimeter, the length of the circumference
         */
        double perimeter();

        /**
         * return the radius of the instance of a circle
         * @return the value of the radius in units of length
         */
        double getRadius();

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
        void display();

    };
}
#endif //EX2_CIRCLE_H
