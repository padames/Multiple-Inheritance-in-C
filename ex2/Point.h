//
// Created by pablo on 2020-04-17.
//

#ifndef EX2_POINT_H
#define EX2_POINT_H

#include <iostream>
using namespace std;

/**
 * a point tin the Cartesian plane
 */
class Point {
private:
    static int id_;
    /**
     * the coordinates
     */
    double x_, y_;

public:
    Point();
    Point(double, double);

    void setCoordinates(double, double);
    void setX(double);
    void setY(double);
    double getX() const ;
    double getY() const;
    double counter();

    void moveBy(double, double);
    static double distance(Point, Point);
    double distance(Point);
    ostream& write (ostream& os) const;

    friend ostream& operator<< (ostream &os, Point const & p) {
        return p.write(os);
    }

};

#endif //EX2_POINT_H
