#include <variant>
#include <iostream>
#include <string>

// Define a variant that can hold int, double, or std::string
using MyVariant = std::variant<int, double, std::string>;

int main() {
    // Create a variant and store an int
    MyVariant var = 42;
    std::cout << "Stored int: " << std::get<int>(var) << std::endl;

    // Store a double
    var = 3.14;
    std::cout << "Stored double: " << std::get<double>(var) << std::endl;

    // Store a std::string
    var = std::string("Hello, std::variant");
    std::cout << "Stored string: " << std::get<std::string>(var) << std::endl;

    // Using std::visit to handle the variant's value
    std::visit([](auto&& value) {
        std::cout << "Variant holds: " << value << std::endl;
    }, var);
    try{
        int wrongType = std::get<int>(var);
    }catch(const std::bad_variant_access& e){
        std::cerr << "Bad variant access: " << e.what() << std::endl;
    }

    return 0;
}
