//
// Created by pablo on 2020-04-17.
//

#ifndef EX2_SQUARE_H
#define EX2_SQUARE_H
#include "Shape.h"

namespace shape {
    class Square : public Shape {
    private:
        double side_a_;
    public:
        Square(char*, Point&, double);

        /**
         * computes the area of a square object
         * @return calculated value for the surface area
         */
        double area();

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
