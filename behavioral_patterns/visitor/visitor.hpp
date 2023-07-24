#ifndef VISITOR
#define VISITOR
#include <iostream>

class Circle;
class Rectangle;

class ShapeVisitor {
public:
    virtual void visit(Circle* shape) = 0;
    virtual void visit(Rectangle* shape) = 0;
};

class Shape {
public:
    virtual void accept(ShapeVisitor* visitor) = 0;
};

class Circle : public Shape {
public:
    void accept(ShapeVisitor* visitor) override {
        visitor->visit(this);
    }

    void draw() {
        std::cout << "Drawing Circle" << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void accept(ShapeVisitor* visitor) override {
        visitor->visit(this);
    }

    void draw() {
        std::cout << "Drawing Rectangle" << std::endl;
    }
};

class DrawVisitor : public ShapeVisitor {
public:
    void visit(Circle* shape) override {
        shape->draw();
    }

    void visit(Rectangle* shape) override {
        shape->draw();
    }
};

#endif
