#pragma once

#include <string>
#include <string_view>

namespace hello {

/**
 * @brief A simple hello world class
 *
 * This class provides functionality to generate personalized
 * hello world messages.
 */
class HelloWorld {
public:
    /**
     * @brief Default constructor
     */
    HelloWorld() = default;

    /**
     * @brief Constructor with custom greeting
     * @param greeting The greeting word to use (default: "Hello")
     */
    explicit HelloWorld(std::string_view greeting);

    /**
     * @brief Generate a hello world message
     * @param name The name to greet (optional)
     * @return A formatted greeting message
     */
    std::string greet(std::string_view name = "World") const;

    /**
     * @brief Set a new greeting
     * @param greeting The new greeting word
     */
    void set_greeting(std::string_view greeting);

    /**
     * @brief Get the current greeting
     * @return The current greeting word
     */
    std::string_view get_greeting() const;

private:
    std::string greeting_{"Hello"};
};

/**
 * @brief Free function version of hello world
 * @param name The name to greet (default: "World")
 * @return A simple greeting message
 */
std::string say_hello(std::string_view name = "World");

} // namespace hello
