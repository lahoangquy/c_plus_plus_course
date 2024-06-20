#include <any>
#include <iostream>
#include <string>

int main() {
    // Create an std::any object and store an integer
    std::any value = 42;

    // Store a different type of value (a string)
    value = std::string("Hello, std::any");

    // Check the type and retrieve the stored value
    if (value.type() == typeid(std::string)) {
        // Use std::any_cast to retrieve the value
        std::string retrievedValue = std::any_cast<std::string>(value);
        std::cout << "Stored string: " << retrievedValue << std::endl;
    }

    // Store another type of value (a double)
    value = 3.14;

    // Check the type and retrieve the stored value
    if (value.type() == typeid(double)) {
        // Use std::any_cast to retrieve the value
        double retrievedValue = std::any_cast<double>(value);
        std::cout << "Stored double: " << retrievedValue << std::endl;
    }

    // Handling bad cast
    try {
        // Attempting to cast to a wrong type
        int wrongType = std::any_cast<int>(value);
    } catch (const std::bad_any_cast& e) {
        std::cout << "Bad any cast: " << e.what() << std::endl;
    }

    return 0;
}
