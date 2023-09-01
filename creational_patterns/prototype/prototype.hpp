#ifndef PROTOTYPE
#define PROTOTYPE

#include <iostream>
#include <string>

class Animal {
private:
    std::string name;
    std::string species;
    
public:
    virtual Animal* clone() const = 0;

    void setName(const std::string& name) {
        this->name = name;
    }

    void setSpecies(const std::string& species) {
        this->species = species;
    }

    void printInfo() const {
        std::cout << "Name: " << name << ", Species: " << species << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog* clone() const override {
        Dog* newDog = new Dog(*this);
        return newDog;
    }
};

class Cat : public Animal {
public:
    Cat* clone() const override {
        Cat* newCat = new Cat(*this);
        return newCat;
    }
};

#endif
