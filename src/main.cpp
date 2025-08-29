#include "hello.hpp"

#include <iostream>

int main() {
    // Demonstrate the free function
    std::cout << hello::say_hello() << std::endl;
    std::cout << hello::say_hello("C++ Developer") << std::endl;

    // Demonstrate the class
    hello::HelloWorld greeter{};
    std::cout << greeter.greet() << std::endl;
    std::cout << greeter.greet("Programmer") << std::endl;

    // Demonstrate custom greeting
    hello::HelloWorld custom_greeter{"Hi"};
    std::cout << custom_greeter.greet("World") << std::endl;

    // Demonstrate changing greeting
    greeter.set_greeting("Greetings");
    std::cout << greeter.greet("Everyone") << std::endl;

    return 0;
}
