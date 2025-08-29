cmake_minimum_required(VERSION 3.16)
project(hello_cpp VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create library target for hello functionality
add_library(hello_lib
    src/hello.cpp
)

# Set include directories for the library
target_include_directories(hello_lib
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Create executable target
add_executable(hello_world
    src/main.cpp
)

# Link the executable to the library
target_link_libraries(hello_world
    PRIVATE
        hello_lib
)

# Enable warnings
if(MSVC)
    target_compile_options(hello_lib PRIVATE /W4)
    target_compile_options(hello_world PRIVATE /W4)
else()
    target_compile_options(hello_lib PRIVATE -Wall -Wextra -Wpedantic)
    target_compile_options(hello_world PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Install targets
install(TARGETS hello_world hello_lib
    EXPORT hello_cppTargets
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

install(DIRECTORY include/
    DESTINATION include
)

install(EXPORT hello_cppTargets
    FILE hello_cppTargets.cmake
    NAMESPACE hello_cpp::
    DESTINATION lib/cmake/hello_cpp
)
