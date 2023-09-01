#ifndef PROTOTYPE
#define PROTOTYPE

#include <iostream>
#include <string>
#include <vector>

class Colleague;

class Mediator {
public:
    virtual void send_message(const std::string& message, Colleague* colleague) = 0;
};

class Colleague {
protected:
    Mediator* mediator;
    std::string name;

public:
    Colleague(Mediator* mediator, const std::string& name) : mediator(mediator), name(name) {}

    virtual void send(const std::string& message) = 0;
    virtual void receive(const std::string& message) = 0;
};

class ConcreteMediator : public Mediator {
private:
    std::vector<Colleague*> colleagues;

public:
    void add_colleague(Colleague* colleague) {
        colleagues.push_back(colleague);
    }

    void send_message(const std::string& message, Colleague* colleague) override {
        for (Colleague* col : colleagues) {
            if (col != colleague) {
                col->receive(message);
            }
        }
    }
};

class ConcreteColleague : public Colleague {
public:
    ConcreteColleague(Mediator* mediator, const std::string& name) : Colleague(mediator, name) {}

    void send(const std::string& message) override {
        std::cout << "Sending message from " << name << ": " << message << std::endl;
        mediator->send_message(message, this);
    }

    void receive(const std::string& message) override {
        std::cout << "Received message by " << name << ": " << message << std::endl;
    }
};
#endif
