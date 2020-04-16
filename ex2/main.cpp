#include <iostream>
using namespace std;
class Parent {
public:
    Parent() { cout << "In Parent's default constructor" << endl;}
    virtual void foo() { cout << "foo in parent" << endl;}
    void bar() { cout << "bar in parent" << endl;}
    void functionInParent() { cout << "Function in parent" << endl;}
private:
    virtual void fun() = 0;

};

class Child: public Parent {
public:
    Child() { cout << "In Child's default constructor" << endl;}
    void foo() { cout << "foo in child" << endl;}
    void bar() { cout << "bar in child" << endl;}
    void fun() {};
    void functionInChild() { cout << "Function in child" << endl; }
};

int main() {
    Child child;
    Parent *parentPtr;
    child.foo();
    parentPtr = &child;
    parentPtr->foo();
    parentPtr->bar();
    return 0;
}
