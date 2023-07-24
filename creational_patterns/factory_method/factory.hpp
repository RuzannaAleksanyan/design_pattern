#ifndef FACTORY
#define FACTORY
#include <iostream>

class Product {
public:
    virtual void use() = 0;
};

class ConcreteProduct1 : public Product {
public:
    void use() override {
        std::cout << "Using ConcreteProduct1" << std::endl;
    }
};

class ConcreteProduct2 : public Product {
public:
    void use() override {
        std::cout << "Using ConcreteProduct2" << std::endl;
    }
};

class Factory {
public:
    static Product* foo(int type) {
        if(type == 1) {
            return new ConcreteProduct1();
        } else if(type == 2) {
            return new ConcreteProduct2();
        } else {
            return nullptr;
        }
    }
};

#endif
