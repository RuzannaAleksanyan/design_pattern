# Chain of Responsibility
The Chain of Responsibility is a behavioral design pattern that allows multiple objects to handle a request in a chain-like manner. Each handler can choose to process the request or pass it along to the next handler in the chain until the request is handled or reaches the end of the chain.
## Table of Contents
- [Description](#Description)
- [Notes](#Notes)
- [Classes(#Classes)
- [Usage](#Usage)
- [Acknowledgments](#Acknowledgments)

## Description
This C++ implementation provides a simple example of the Chain of Responsibility pattern using three concrete handlers: ConcreteHandler1, ConcreteHandler2, and ConcreteHandler3. Each handler is responsible for handling requests within specific ranges.
## Notes
- Ensure to deallocate memory for handlers after their usage to avoid memory leaks.
- You can extend the pattern by creating new concrete handlers and chaining them according to their responsibilities.
- The pattern is useful when you want to decouple sender and receiver objects, allowing multiple handlers to process requests in a flexible way.
## Classes
- Handler: An abstract class representing a generic handler in the chain. It contains a pointer to the next handler (next) and a pure virtual method handleRequest that needs to be overridden by concrete subclasses to provide specific handling logic.
- ConcreteHandler1, ConcreteHandler2, and ConcreteHandler3: These are concrete subclasses of Handler, each responsible for handling requests within a specific range. If a request falls within their range, they handle it; otherwise, they pass the request to the next handler in the chain.
## Usage
Follow the steps below to use the Chain of Responsibility pattern:
- Include the chain_of_responsibility.hpp header in your C++ code.
- Create instances of concrete handlers, e.g. handler1, handler2, and handler3, and chain them together using the setNext method.
- Send requests through the chain by calling the handleRequest method on the first handler in the chain.
## Acknowledgments
The implementation of the Chain of Responsibility pattern provided here is for educational purposes and inspired by design patterns commonly used in software development.
