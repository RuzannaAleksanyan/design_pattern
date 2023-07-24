#ifndef STRATEGY 
#define STRATEGY
#include <iostream>

class Sorting 
{
public:
    virtual void sort(int arr[], int size) = 0;
};

class BubbleSort : public Sorting
{
public:
    void sort(int arr[], int size) override 
    {
        std::cout << "Sorting using bubble sort strategy." << std::endl;
    }
};

class QuickSort : public Sorting
{
public:
    void sort(int arr[], int size) override 
    {
        std::cout << "Sorting using quick sort strategy." << std::endl;
    }
};

class Sorter 
{
private:
    Sorting* strategy;

public:
    Sorter(Sorting* strategy) : strategy(strategy) {}

    void setStrategy(Sorting* newStrategy) 
    {
        strategy = newStrategy;
    }

    void performSort(int arr[], int size) 
    {
        strategy->sort(arr, size);
    }
};

#endif
