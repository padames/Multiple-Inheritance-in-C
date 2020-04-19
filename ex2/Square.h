//
// Created by pablo on 2020-04-17.
//

#ifndef EX2_SQUARE_H
#define EX2_SQUARE_H
#include "Shape.h"

namespace shape {
    class Square : public virtual Shape {
    private:
        double side_a_;
    public:
        Square(double, double, double, const char*);

        /**
         * copy constructor
         */
        Square( const Square&);

        /**
         * assignment operator
         * @return a reference to a new Square object copied from the argument object
         */
        Square& operator=(const Square&);

        /**
         * computes the area of a square object
         * @return calculated value for the surface area
         */
        double area() const;

        /**
         * computes de perimeter of a square object
         * @return
         */
        double perimeter() const;

        /**
         * gives the side of the square
         * @return
         */
        double getSide() const;

        /**
         * assigns a value to the side of the square
         */
        void setSide(double);

        /**
         * shows a text representation of the object:
         *       Square Name: <name>
         *      X-coordinate: <x-value>
         *      Y-coordinate: <y-value>
         */
        void display();
    };

}
#endif //EX2_SQUARE_H
