//
// Created by pablo on 2020-04-17.
//

#include "Square.h"

namespace shape {

    /**
     * Constructor initializing class members
     */
    Square::Square(double x, double y, double sideA, const char* name)
        : side_a_(sideA), Shape(*(new Point(x,y)), name) {}

    /**
     * computes the area of a square object
     * @return calculated value for the surface area
     */
    double Square::area() {
        return side_a_ * side_a_;
    }

    /**
     * computes de perimeter of a square object
     * @return
     */
    double Square::perimeter() const {
        return side_a_ * 4.0;
    }

    /**
     * gives the side of the square
     * @return
     */
    double Square::getSide() const {
        return side_a_;
    }

    /**
     * assigns a value to the side of the square
     */
    void Square::setSide(double newSide) {
        side_a_ = newSide;
    }

    /**
     * shows a text representation of the object:
     *       Square Name: <name>
     *      X-coordinate: <x-value>
     *      Y-coordinate: <y-value>
     */
    void Square::display() {
        cout << endl;
        cout << "Square Name: " << getName() << endl;
        getOrigin().display();
    }

}