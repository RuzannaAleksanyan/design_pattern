#include "strategy.hpp"

int main() 
{
    int arr[] = { 5, 2, 8, 3, 1 };

    BubbleSort bubbleSortStrategy;
    QuickSort quickSortStrategy;

    Sorter sorter(&bubbleSortStrategy);
    sorter.performSort(arr, 5);

    sorter.setStrategy(&quickSortStrategy);
    sorter.performSort(arr, 5);

    return 0;
}
