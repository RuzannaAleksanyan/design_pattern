## Table of Contents

- [notes](#notes)
- [how to use](#how_to_use)
- [code explanation](#code_explanation)
  
## notes
The Strategy pattern is useful when you have multiple algorithms that can be used interchangeably. It allows you to decouple the client from the specific algorithm implementations and provide flexibility in choosing algorithms at runtime.
This sample program demonstrates a simple example of the Strategy design pattern. In real-world scenarios, the strategy pattern can be used for more complex algorithms and different types of strategies.
## how_to_use
- Make sure you have the necessary files: "strategy.hpp" and "strategy.cpp".
- Download or clone the repository to your local machine.
- Open a terminal or command prompt and navigate to the directory containing the "strategy.cpp" file.
- Compile the program using your C++ compiler.
## code_explanation
- strategy.hpp header file contains the definitions of classes and interfaces required for the Strategy design pattern.
  - Sorting: This is an abstract class representing the Strategy interface. It declares a pure virtual method sort(int arr[], int size) that will be implemented by concrete sorting strategies.
  - BubbleSort and QuickSort: These classes are concrete implementations of the Sorting interface. They provide their own implementations of the sort() method to perform the bubble sort and quick sort algorithms, respectively.
  - Sorter: This class is the context that uses the sorting strategies. It has a member variable strategy of type Sorting*, which is set by the client to select a particular sorting strategy. The performSort(int arr[], int size) method is responsible for calling the sort() method of the selected strategy to perform the sorting operation.
- strategy.cpp file contains the implementations of the classes declared in "strategy.hpp," as well as the main() function.
  - main(): The main() function demonstrates the use of the Strategy design pattern. It creates instances of different sorting strategies (BubbleSort and QuickSort) and a Sorter object. The Sorter object is initially set to use the BubbleSort strategy and performs the sorting operation on an integer array using bubble sort. It then changes the strategy to QuickSort and performs the sorting operation again using quick sort.
