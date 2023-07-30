#include "chain_of_responsibility.hpp"

int main() {
    Handler* handler1 = new ConcreteHandler1();
    Handler* handler2 = new ConcreteHandler2();
    Handler* handler3 = new ConcreteHandler3();

    handler1->setNext(handler2);
    handler2->setNext(handler3);

    handler1->handleRequest(5);
    handler1->handleRequest(15);
    handler1->handleRequest(25);
    handler1->handleRequest(35);

    delete handler1;
    delete handler2;
    delete handler3;

    return 0;
}
