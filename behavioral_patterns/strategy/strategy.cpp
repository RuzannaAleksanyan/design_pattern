#include "strategy.hpp"

int main() 
{
    int arr[] = { 5, 2, 8, 3, 1 };

    BubbleSort bubble_sort_strategy;
    QuickSort quick_sort_strategy;

    Sorter sorter(&bubble_sort_strategy);
    sorter.perform_sort(arr, 5);

    sorter.set_strategy(&quick_sort_strategy);
    sorter.perform_sort(arr, 5);

    return 0;
}
