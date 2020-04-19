//
// Created by pablo on 2020-04-18.
//

#include <math.h>
#include "Circle.h"

namespace shape {
    /**
     * a constructor with full class member initialization
     */
    Circle::Circle(double x, double y, double radius, const char *name)
        : radius_(radius), Shape(x, y, name) {}

    /**
     * compute the area of an instance of a circle
     * @return the value computed for its area in length units squared
     */
    double Circle::area() {
        return M_PI * pow(getRadius(), 2.0);
    }

    /**
     * compute the permimeter of an instance of a circle shape
     * @return the value of the perimeter, the length of the circumference
     */
    double Circle::perimeter() {
        return 2.0 * M_PI * getRadius();
    }

    /**
     * return the radius of the instance of a circle
     * @return the value of the radius in units of length
     */
    double Circle::getRadius() {
        return radius_;
    }

    /**
     * assign a value to the radius of this instance of a circle object
     */
    void Circle::setRadius(double radius) {
        radius_ = radius;
    }

    /**
     * shows a text representation of the object of type Circle
     *       Circle Name: <name>
     *      X-coordinate: <x-value>
     *      Y-coordinate: <y-value>
     */
    void Circle::display() {
        cout << endl;
        cout << "Circle Name: " << getName();
        getOrigin().display();
    }
}