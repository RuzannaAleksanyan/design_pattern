#include "visitor.hpp"

int main() {
    Shape* circle = new Circle();
    Shape* rectangle = new Rectangle();
    ShapeVisitor* drawVisitor = new DrawVisitor();

    circle->accept(drawVisitor);
    rectangle->accept(drawVisitor);

    delete circle;
    delete rectangle;
    delete drawVisitor;

    return 0;
}
