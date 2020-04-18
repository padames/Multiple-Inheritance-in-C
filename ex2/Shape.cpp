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
    Shape::Shape(char* name, Point& origin) {
        setName(name);
        origin_ = origin;
    }

    /**
     * dynamilcally allocates the memory for the name of the shape object
     */
    void Shape::setName(char *name) {
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

    }

    /**
     * copy assignment operator
     */
    Shape& Shape::operator=(Shape &other) {
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
        cout << "Shape Name: " << shapeName << endl;
        cout << "X-coordinate: " << origin_.getX() << endl;
        cout << "Y-coordinate: " << origin_.getY() << endl;
    }

    /**
     * member function to compute Euclidean distance to another
     * Shape object's origin.
     * @return
     */
    double Shape::distance(Shape &other) {
        return origin_.distance(other.getOrigin());
    }

    /**
     * class function to compute Euclidean distance between two
     * given Shape objects' origins
     * @return
     */
    double Shape::distance(Shape &s1, Shape &s2) {
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