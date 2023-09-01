#include <iostream>

int main() {
    Singleton* firstInstance = Singleton::get_instance();

    Singleton* secondInstance = Singleton::get_instance();

    if (firstInstance == secondInstance) {
        std::cout << "Both instances are the same. Singleton pattern is working!" << std::endl;
    } else {
        std::cout << "Error: Singleton pattern is not working!" << std::endl;
    }

    delete firstInstance;
    
    return 0;
}
