#include "mediator.hpp"

int main() {
    ConcreteMediator mediator;

    ConcreteColleague colleague1(&mediator, "Colleague 1");
    ConcreteColleague colleague2(&mediator, "Colleague 2");
    ConcreteColleague colleague3(&mediator, "Colleague 3");

    colleague1.send("Hello, colleagues!");
    colleague2.send("Hi there!");

    return 0;
}
