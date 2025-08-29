# hello_cpp

A modern C++ hello world application demonstrating best practices with CMake.

## Features

- Modern CMake build system (CMake 3.16+)
- C++17 standard with proper compiler warnings
- Header-only library design with separate implementation
- Namespace organization
- Comprehensive documentation with Doxygen-style comments
- Both class-based and free function APIs

## Project Structure

```
hello_cpp/
├── CMakeLists.txt          # Main CMake configuration
├── include/
│   └── hello.hpp          # Header file with declarations
├── src/
│   ├── hello.cpp          # Implementation file
│   └── main.cpp           # Application entry point
├── LICENSE                 # Project license
└── README.md              # This file
```

## Building

### Prerequisites

- CMake 3.16 or higher
- C++20 compatible compiler (GCC 7+, Clang 5+, MSVC 2017+)

### Build Instructions

1. Create a build directory:
   ```bash
   mkdir build
   cd build
   ```

2. Configure the project:
   ```bash
   cmake ..
   ```

3. Build the project:
   ```bash
   cmake --build .
   ```

4. Run the application:
   ```bash
   ./hello_world
   ```

### Alternative Build Commands

You can also build and run in one step:
```bash
mkdir build && cd build && cmake .. && cmake --build . && ./hello_world
```

## Usage

The project provides two ways to generate hello world messages:

### Free Function API
```cpp
#include "hello.hpp"

std::cout << hello::say_hello() << std::endl;           // "Hello, World!"
std::cout << hello::say_hello("Developer") << std::endl; // "Hello, Developer!"
```

### Class-based API
```cpp
#include "hello.hpp"

hello::HelloWorld greeter;
std::cout << greeter.greet() << std::endl;              // "Hello, World!"
std::cout << greeter.greet("Programmer") << std::endl;  // "Hello, Programmer!"

// Custom greeting
hello::HelloWorld custom_greeter("Hi");
std::cout << custom_greeter.greet("World") << std::endl; // "Hi, World!"

// Change greeting
greeter.set_greeting("Greetings");
std::cout << greeter.greet("Everyone") << std::endl;    // "Greetings, Everyone!"
```

## Modern C++ Practices Used

- **C++17 Features**: `std::string_view`, structured bindings, constexpr
- **RAII**: Proper resource management
- **Exception Safety**: No-throw guarantee for most operations
- **Const Correctness**: Proper use of `const` qualifiers
- **Documentation**: Doxygen-style comments for all public interfaces
- **Namespace Organization**: Logical grouping of related functionality
- **Header Guards**: `#pragma once` for modern compilers
- **CMake Best Practices**: Target-based build system, proper include paths

## License

See LICENSE file for details.
