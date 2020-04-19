//
// Created by pablo on 2020-04-17.
//
#include "assert.h" //user made & older libraries are in quotations
#include <string.h> //newer libraries are in <>
#include "Shape.h"

/**
 * namespace shape avoids name collisions
 */
namespace shape {
    /**
     * Returns the size of any string called source
     */
    int getStrSize(const char *source) {
        // Step 1: Allocate memory for string (array of chars)
        //  specify size of memory required (size of source)
        int size = 0;
        const char *p = source; //p is pointing to the first element of arr source
        while (*p != '\0') {
            size++; // Current char is not the end of the array, so move to the next element
            p++; // Move the pointer (current cursor) to the next element
        }
        return size + 1;
    }


    Shape::~Shape() {
        delete[] shapeName;
    }

    /**
     * dynamically allocates a name and an origin
     */
    Shape::Shape(Point& origin, const char* name) {
        setName(name);
        origin_ = origin;
    }

    /**
     * dynamically allocates a name and an origin
     */
    Shape::Shape(double x, double y, const char* name) {
        setName(name);
        origin_ = Point(x, y);
    }


    /**
     * dynamilcally allocates the memory for the name of the shape object
     */
    void Shape::setName(const char *name) {
        if (nullptr == name) {
            shapeName = new char[7];
            strcpy(shapeName, "noname");
        }
        int size = getStrSize(name);
        shapeName = new char[size];
        strcpy(shapeName,name);
    }


    /**
     * copy constructor
    */
    Shape::Shape(const Shape& other) {
        setName(other.getName());
        origin_ = other.getOrigin();
    }

    /**
     * copy assignment operator
     */
    Shape& Shape::operator=(const Shape &other) {
        setName(other.getName());
        origin_ = other.getOrigin();
        return *this;
    }

    /**
     * returns the object containing the coordinates of the origin
     * of the shape.
     * @return
     */
    Point Shape::getOrigin() {
        return origin_;
    }

    Point Shape::getOrigin() const {
        return origin_;
    }

    /**
     * returns the name of the shape object
     */
    char * Shape::getName() const {
        return shapeName;
    }

    /**
     * shows on screen the shape's name ans its coordinates
     */
    void Shape::display() {
        cout << endl;
        cout << "Shape Name: " << shapeName;
        origin_.display();
    }

    /**
     * member function to compute Euclidean distance to another
     * Shape object's origin.
     * @return
     */
    double Shape::distance(const Shape &other) const {
        return origin_.distance(other.getOrigin());
    }

    /**
     * class function to compute Euclidean distance between two
     * given Shape objects' origins
     * @return
     */
    double Shape::distance(const Shape &s1, const Shape &s2) {
        return Point::distance(s1.getOrigin(), s2.getOrigin());
    }

    /**
     * moves the shape to new location by
     * transforming (x,y) to (x+deltaX, y+deltaY)
     */
    void Shape::move(double dx, double dy) {
        origin_.moveBy(dx,dy);
    }
}