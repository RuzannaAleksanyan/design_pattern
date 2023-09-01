#ifndef ABSTRACT
#define ABSTRACT
#include <string>
#include <iostream>

class AbstractProductA {
public:
    virtual ~AbstractProductA() {}
    virtual std::string get_name() const = 0;
};

class ConcreteProductA1 : public AbstractProductA {
public:
    std::string get_name() const override {
        return "ConcreteProductA1";
    }
};

class ConcreteProductA2 : public AbstractProductA {
public:
    std::string get_name() const override {
        return "ConcreteProductA2";
    }
};

class AbstractProductB {
public:
    virtual ~AbstractProductB() {}
    virtual std::string get_name() const = 0;
    virtual void interact(AbstractProductA* productA) const = 0;
};

class ConcreteProductB1 : public AbstractProductB {
public:
    std::string get_name() const override {
        return "ConcreteProductB1";
    }

    void interact(AbstractProductA* productA) const override {
        std::cout << get_name() << " interacts with " << productA->getName() << std::endl;
    }
};

class ConcreteProductB2 : public AbstractProductB {
public:
    std::string get_name() const override {
        return "ConcreteProductB2";
    }

    void interact(AbstractProductA* productA) const override {
        std::cout << get_name() << " interacts with " << productA->getName() << std::endl;
    }
};

class AbstractFactory {
public:
    virtual ~AbstractFactory() {}
    virtual AbstractProductA* create_productA() const = 0;
    virtual AbstractProductB* create_productB() const = 0;
};

class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA* create_productA() const override {
        return new ConcreteProductA1();
    }

    AbstractProductB* create_productB() const override {
        return new ConcreteProductB1();
    }
};

class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA* create_productA() const override {
        return new ConcreteProductA2();
    }

    AbstractProductB* create_productB() const override {
        return new ConcreteProductB2();
    }
};

#endif
