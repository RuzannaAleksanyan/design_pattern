#include "prototype.hpp"

int main() {
    Dog dogPrototype;
    dogPrototype.setName("Buddy");
    dogPrototype.setSpecies("Dog");

    Cat catPrototype;
    catPrototype.setName("Whiskers");
    catPrototype.setSpecies("Cat");

    Animal* newDog = dogPrototype.clone();
    Animal* newCat = catPrototype.clone();

    newDog->printInfo();
    newCat->printInfo();

    delete newDog;
    delete newCat;

    return 0;
}
