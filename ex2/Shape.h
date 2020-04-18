//
// Created by pablo on 2020-04-17.
//

#ifndef EX2_SHAPE_H
#define EX2_SHAPE_H
#include "Point.h"

namespace shape {
    /**
     * base class for geometric shapes
     */
    class Shape {
    private:
        Point origin_;
        char *shapeName;
        /**
         * this blocks users of this class from using the default
         * constructor
         */
        Shape() {}

    public:
        /**
         * dynamically allocates a name and an origin
         */
        Shape(char*, Point&);

        ~Shape();

        /**
         * copy constructor
         */
        Shape(const Shape&);

        /**
         * copy assignment operator
         */
        Shape &operator=(Shape &other);

        /**
         * dynamilcally allocates the memory for the name of the shape object
         */
        void setName(char *);

        /**
         * returns the object containing the coordinates of the origin
         * of the shape.
         * @return
         */
        Point getOrigin();

        /**
         * returns the name of the shape object
         */
        char * getName() const;

        /**
         * shows on screen the shape's name ans its coordinates
         */
        void display();

        /**
         * member function to compute Euclidean distance to another
         * Shape object's origin.
         * @return
         */
        double distance(Shape &);

        /**
         * class function to compute Euclidean distance between two
         * given Shape objects' origins
         * @return
         */
        static double distance(Shape &, Shape &);

        /**
         * moves the shape to new location by
         * transforming (x,y) to (x+deltaX, y+deltaY)
         */
        void move(double, double);
    };

}
#endif //EX2_SHAPE_H
