#include "prototype.hpp"

int main() {
    Dog dog_prototype;
    dog_prototype.set_name("Buddy");
    dog_prototype.set_species("Dog");

    Cat cat_prototype;
    cat_prototype.set_name("Whiskers");
    cat_prototype.set_species("Cat");

    Animal* new_dog = dog_prototype.clone();
    Animal* new_cat = cat_prototype.clone();

    new_dog->print_info();
    new_cat->print_info();

    delete new_dog;
    delete new_cat;

    return 0;
}
