#include "iterator.hpp"

int main() {
    Collection<int> collection;
    collection.addItem(1);
    collection.addItem(2);
    collection.addItem(3);

    Iterator<int>* iterator = collection.createIterator();

    while (iterator->hasNext()) {
        std::cout << iterator->next() << " ";
    }

    delete iterator;
    std::cout << std::endl;

    return 0;
}
