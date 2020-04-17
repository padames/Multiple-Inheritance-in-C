//
// Created by pablo on 2020-04-17.
//

#ifndef EX2_POINT_H
#define EX2_POINT_H

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
    double getX();
    double getY();
    double counter();

    static double distance(Point, Point);
    double distance(Point);
};

#endif //EX2_POINT_H
