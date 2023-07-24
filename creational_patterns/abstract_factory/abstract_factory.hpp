#ifndef ABSTRACT
#define ABSTRACT
#include <string>
#include <iostream>

class AbstractProductA {
public:
    virtual ~AbstractProductA() {}
    virtual std::string getName() const = 0;
};

class ConcreteProductA1 : public AbstractProductA {
public:
    std::string getName() const override {
        return "ConcreteProductA1";
    }
};

class ConcreteProductA2 : public AbstractProductA {
public:
    std::string getName() const override {
        return "ConcreteProductA2";
    }
};

class AbstractProductB {
public:
    virtual ~AbstractProductB() {}
    virtual std::string getName() const = 0;
    virtual void interact(AbstractProductA* productA) const = 0;
};

class ConcreteProductB1 : public AbstractProductB {
public:
    std::string getName() const override {
        return "ConcreteProductB1";
    }

    void interact(AbstractProductA* productA) const override {
        std::cout << getName() << " interacts with " << productA->getName() << std::endl;
    }
};

class ConcreteProductB2 : public AbstractProductB {
public:
    std::string getName() const override {
        return "ConcreteProductB2";
    }

    void interact(AbstractProductA* productA) const override {
        std::cout << getName() << " interacts with " << productA->getName() << std::endl;
    }
};

class AbstractFactory {
public:
    virtual ~AbstractFactory() {}
    virtual AbstractProductA* createProductA() const = 0;
    virtual AbstractProductB* createProductB() const = 0;
};

class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA* createProductA() const override {
        return new ConcreteProductA1();
    }

    AbstractProductB* createProductB() const override {
        return new ConcreteProductB1();
    }
};

class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA* createProductA() const override {
        return new ConcreteProductA2();
    }

    AbstractProductB* createProductB() const override {
        return new ConcreteProductB2();
    }
};

#endif
