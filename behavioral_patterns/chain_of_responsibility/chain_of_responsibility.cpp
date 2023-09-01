#include "chain_of_responsibility.hpp"

int main() {
    Handler* handler1 = new ConcreteHandler1();
    Handler* handler2 = new ConcreteHandler2();
    Handler* handler3 = new ConcreteHandler3();

    handler1->set_next(handler2);
    handler2->set_next(handler3);

    handler1->handle_request(5);
    handler1->handle_request(15);
    handler1->handle_request(25);
    handler1->handle_request(35);

    delete handler1;
    delete handler2;
    delete handler3;

    return 0;
}
