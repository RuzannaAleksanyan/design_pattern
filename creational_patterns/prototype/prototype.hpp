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

    void set_name(const std::string& name) {
        this->name = name;
    }

    void set_species(const std::string& species) {
        this->species = species;
    }

    void print_info() const {
        std::cout << "Name: " << name << ", Species: " << species << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog* clone() const override {
        Dog* new_dog = new Dog(*this);
        return new_dog;
    }
};

class Cat : public Animal {
public:
    Cat* clone() const override {
        Cat* new_cat = new Cat(*this);
        return new_cat;
    }
};

#endif
