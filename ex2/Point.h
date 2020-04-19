//
// Created by pablo on 2020-04-17.
//

#ifndef EX2_POINT_H
#define EX2_POINT_H

#include <iostream>
using namespace std;

/**
 * Used to avoid name collision with other packages
 */
namespace shape {
    /**
     * A point in the Cartesian plane.
     * For use by the objects of type Shape and its children
     */
    class Point {
    private:
        static int id_;
        /**
         * the coordinates
         */
        double x_, y_;

    public:
        /**
         * updates the number of instances of objects of this class
         */
        Point();

        /**
         * takes care of reducing the count of the number of instances
         */
        ~Point();

        /**
         * initializing constructor
         */
        Point(double, double);

        Point& operator=(const Point& other);

        /**
         * convenience function to set both x and y coordinate values
         */
        void setCoordinates(double, double);

        void setX(double);

        void setY(double);

        double getX() const;

        double getY() const;

        /**
         * a function to obtain the number of curernt object instances
         * of this class
         * @return
         */
        double counter();

        /**
         * a function to compute translations by the given deltas
         * in the x and y coordinates
         */
        void moveBy(double, double);

        /**
         * a class member function to compute the Euclidean distance
         * between any two given points
         * @return
         */
        static double distance(const Point&, const Point&);

        /**
         * class function to compute Euclidean distance
         * to another point given as argument
         * @return the distance on the Cartesian plane between this and
         * the other point
         */
        double distance(const Point&) const;

        /**
         * the public function in charge of putting an inline representation
         * of the point
         * @param os
         * @return
         */
        ostream &write(ostream &os) const;

        /**
         * friend function calling public function to give a
         * textual representation of the point
         * @param os the stream to write to
         * @param p the point to be output to the stream
         * @return the output stream received as firs argument
         */
        friend ostream &operator<<(ostream &os, Point const &p) {
            return p.write(os);
        }

        /**
         * prints a text representation to standard output
         */
        void display();
    };

} // namespace shape
#endif //EX2_POINT_H
