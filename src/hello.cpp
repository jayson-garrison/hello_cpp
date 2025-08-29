#include "hello.hpp"

#include <utility>

namespace hello {

// Constructor with custom greeting
HelloWorld::HelloWorld(std::string_view greeting)
    : greeting_{greeting} { }
 
// Generate a hello world message
std::string HelloWorld::greet(std::string_view name) const {
    return std::string{greeting_} + ", " + std::string{name} + "!";
}

// Set a new greeting
void HelloWorld::set_greeting(std::string_view greeting) {
    greeting_ = greeting;
}

// Get the current greeting
std::string_view HelloWorld::get_greeting() const {
    return greeting_;
}

// Free function version of hello world
std::string say_hello(std::string_view name) {
    return std::string{"Hello, "} + std::string{name} + "!";
}

} // namespace hello
