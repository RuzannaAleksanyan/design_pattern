#include <iostream>
#include "abstract_factory.hpp"

int main() {
    AbstractFactory* factory1 = new ConcreteFactory1();
    AbstractProductA* productA1 = factory1->create_productA();
    AbstractProductB* productB1 = factory1->create_productB();

    std::cout << productA1->get_name() << std::endl;
    std::cout << productB1->get_name() << std::endl;
    productB1->interact(productA1);

    delete productA1;
    delete productB1;
    delete factory1;

    AbstractFactory* factory2 = new ConcreteFactory2();
    AbstractProductA* productA2 = factory2->create_productA();
    AbstractProductB* productB2 = factory2->create_productB();

    std::cout << productA2->get_name() << std::endl;
    std::cout << productB2->get_name() << std::endl;
    productB2->interact(productA2);

    delete productA2;
    delete productB2;
    delete factory2;

    return 0;
}
