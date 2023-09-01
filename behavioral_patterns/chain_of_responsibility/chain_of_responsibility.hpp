#ifndef COR
#define COR
#include <iostream>

class Handler {
protected:
    Handler* next;

public:
    Handler() : next(nullptr) {}

    void set_next(Handler* handler) {
        next = handler;
    }

    virtual void handle_request(int request) = 0;
};

class ConcreteHandler1 : public Handler {
public:
    void handle_request(int request) {
        if (request >= 0 && request < 10) {
            std::cout << "Request " << request << " handled by ConcreteHandler1." << std::endl;
        } else if (next != nullptr) {
            next->handle_request(request);
        } else {
            std::cout << "End of chain. Request " << request << " cannot be handled." << std::endl;
        }
    }
};

class ConcreteHandler2 : public Handler {
public:
    void handle_request(int request) {
        if (request >= 10 && request < 20) {
            std::cout << "Request " << request << " handled by ConcreteHandler2." << std::endl;
        } else if (next != nullptr) {
            next->handle_request(request);
        } else {
            std::cout << "End of chain. Request " << request << " cannot be handled." << std::endl;
        }
    }
};

class ConcreteHandler3 : public Handler {
public:
    void handle_request(int request) {
        if (request >= 20 && request < 30) {
            std::cout << "Request " << request << " handled by ConcreteHandler3." << std::endl;
        } else if (next != nullptr) {
            next->handle_request(request);
        } else {
            std::cout << "End of chain. Request " << request << " cannot be handled." << std::endl;
        }
    }
};

#endif
