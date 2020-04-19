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

    public:
        /**
         * initializes the name and an origin from a point
         */
        Shape(Point&, const char*);

        /**
         * initializes the name and an origin from coordinates
         */
        Shape(double x, double y, const char*);


        ~Shape();

        /**
         * copy constructor
         */
        Shape(const Shape&);

        /**
         * copy assignment operator
         */
        Shape &operator=(const Shape &other);

        /**
         * dynamically allocates the memory for the name of the shape object
         */
        void setName(const char *);

        /**
         * sets an origin for this instance
         */
        void setOrigin(const Point&);

        /**
         * returns the object containing the coordinates of the origin
         * of the shape.
         * @return
         */
        Point getOrigin();


        Point getOrigin() const;

        /**
         * returns the name of the shape object
         */
        char * getName() const;

        virtual double area() const = 0;
        virtual double perimeter() const = 0;
        /**
         * shows on screen the shape's name ans its coordinates
         */
        void display() const;

        /**
         * member function to compute Euclidean distance to another
         * Shape object's origin.
         * @return
         */
        double distance(const Shape &) const;

        /**
         * class function to compute Euclidean distance between two
         * given Shape objects' origins
         * @return
         */
        static double distance(const Shape &, const Shape &);

        /**
         * moves the shape to new location by
         * transforming (x,y) to (x+deltaX, y+deltaY)
         */
        void move(double, double);
    };

}
#endif //EX2_SHAPE_H
