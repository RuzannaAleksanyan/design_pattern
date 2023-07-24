# Visitor Design Pattern Sample
This is a C++ implementation of the Visitor design pattern. The Visitor pattern allows you to add new operations to existing classes without modifying those classes directly.
## Notes
The Visitor pattern is useful when you want to add new operations to existing classes without modifying them. It allows you to separate the operations from the classes and keep the code clean and maintainable.
This sample program demonstrates a simple example of the Visitor design pattern. In real-world scenarios, the visitor pattern can be used for more complex operations on multiple classes within a hierarchy.
## How to Use
- Make sure you have the necessary files: "visitor.hpp" and "visitor.cpp".
- Download or clone the repository to your local machine.
- Open a terminal or command prompt and navigate to the directory containing the "visitor.cpp" file.
- Compile the program using your C++ compiler.
## Code Explanation
- visitor.hpp header file contains the declarations of classes and interfaces required for the Visitor design pattern.
  - ShapeVisitor: This abstract class represents the Visitor interface and declares two pure virtual methods: visit(Circle* shape) and visit(Rectangle* shape). Concrete visitor classes will implement these methods to perform specific operations on shapes.
  - Shape: This abstract class represents the element in the Visitor pattern and declares the accept(ShapeVisitor* visitor) method as a pure virtual function. The accept() method will be implemented by concrete shape classes to allow the visitor to perform operations on them.
  - Circle and Rectangle: These classes are concrete shape classes that inherit from the Shape class. They implement the accept() method to allow the ShapeVisitor to visit them and perform specific operations.
  - DrawVisitor: This concrete visitor class inherits from ShapeVisitor and provides implementations for the visit(Circle* shape) and visit(Rectangle* shape) methods. In this example, the DrawVisitor class simply calls the draw() method on each shape to demonstrate the drawing behavior.
- visitor.cpp file contains the implementations of the classes declared in "visitor.hpp," as well as the main() function.
  - main(): The main() function demonstrates the use of the Visitor design pattern. It creates instances of two different shapes (Circle and Rectangle) and a concrete visitor (DrawVisitor). The accept() method of each shape is called with the DrawVisitor object as the argument, allowing the visitor to perform drawing operations on the shapes.
