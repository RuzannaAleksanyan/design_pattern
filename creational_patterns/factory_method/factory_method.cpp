#include <iostream>

#include "factory.hpp"

int main() {
    Product* p1 = Factory::foo(1);
    p1->use();

    Product* p2 = Factory::foo(2);
    p2->use();

    // Product* p3 = Factory::foo(0);
    // p3->use();

    delete p1;
    delete p2;
    // delete p3;

    return 0;
}
