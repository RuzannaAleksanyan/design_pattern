#ifndef ITERATOR
#define ITERATOR

#include <iostream>
#include <vector>

template <typename T>
class Iterator {
public:
    virtual bool hasNext() const = 0;
    virtual T next() = 0;
};

template <typename T>
class VectorIterator : public Iterator<T> {
private:
    const std::vector<T>& collection;
    size_t currentIdx;

public:
    VectorIterator(const std::vector<T>& vec) : collection(vec), currentIdx(0) {}

    bool hasNext() const override {
        return currentIdx < collection.size();
    }

    T next() override {
        if (hasNext()) {
            return collection[currentIdx++];
        }
        throw std::out_of_range("No more elements in the collection.");
    }
};

template <typename T>
class Collection {
private:
    std::vector<T> items;

public:
    void addItem(const T& item) {
        items.push_back(item);
    }

    Iterator<T>* createIterator() const {
        return new VectorIterator<T>(items);
    }
};

#endif
