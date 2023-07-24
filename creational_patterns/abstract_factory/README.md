# Abstract Factory Design Pattern Sample
This is a C++ implementation of the Abstract Factory design pattern. The Abstract Factory pattern provides an interface for creating families of related or dependent objects without specifying their concrete classes.
## Notes
- The Abstract Factory pattern is useful when you want to create families of related objects, and you want to decouple the client code from the concrete implementations, making it easier to switch between different families of products without modifying the client code.
- This sample program demonstrates a simple example of the Abstract Factory pattern, and in real-world scenarios, the product families can be more complex and varied.
## How to Use
- Make sure you have the necessary files: "abstract_factory.hpp" and "abstract_factory.cpp".
- Download or clone the repository to your local machine.
- Open a terminal or command prompt and navigate to the directory containing the "abstract_factory.cpp" file.
- Compile the program using your C++ compiler.
## Code Explanation
- abstract_factory.hpp header file contains the definitions of the abstract classes and interfaces required for the Abstract Factory design pattern.
  - AbstractProductA: This abstract class represents a product family A and declares a pure virtual method getName() to get the name of the product.
  - AbstractProductB: This abstract class represents a product family B and declares two pure virtual methods: getName() to get the name of the product and interact(AbstractProductA* productA) to represent the interaction between products from different families.
  - AbstractFactory: This abstract class provides interfaces for creating products of families A and B. It declares two pure virtual methods: createProductA() to create a product of family A and createProductB() to create a product of family B.
- abstract_factory.cpp file contains the implementations of the abstract classes and interfaces declared in "abstract_factory.hpp," as well as the main() function.
  - ConcreteProductA1 and ConcreteProductA2: These classes are concrete implementations of AbstractProductA and provide their own implementations of the getName() method.
  - ConcreteProductB1 and ConcreteProductB2: These classes are concrete implementations of AbstractProductB and provide their own implementations of the getName() and interact() methods.
  - ConcreteFactory1 and ConcreteFactory2: These classes are concrete implementations of AbstractFactory. They provide their own implementations of the createProductA() and createProductB() methods to create instances of the corresponding concrete product classes.
  - main(): The main() function demonstrates the use of the Abstract Factory pattern. It creates instances of concrete factories (ConcreteFactory1 and ConcreteFactory2) and uses them to create products (AbstractProductA and AbstractProductB) without knowing their specific concrete classes. It shows how products from different families interact with each other.
