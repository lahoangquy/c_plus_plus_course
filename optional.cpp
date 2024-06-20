#include <optional>
#include <iostream>
#include <string>

// Function that might return a string or nothing
std::optional<std::string> getGreeting(bool greet) {
    if (greet) {
        return "Hello, World!";
    } else {
        return std::nullopt;
    }
}

int main() {
    // Case where the function returns a value
    std::optional<std::string> greeting = getGreeting(true);
    if (greeting) {
        std::cout << "Greeting: " << *greeting << std::endl;
    } else {
        std::cout << "No greeting available." << std::endl;
    }

    // Case where the function returns nothing
    greeting = getGreeting(false);
    if (greeting) {
        std::cout << "Greeting: " << *greeting << std::endl;
    } else {
        std::cout << "No greeting available." << std::endl;
    }

    // Using value_or to provide a default value
    std::string defaultGreeting = greeting.value_or("Default Greeting");
    std::cout << "Greeting with default: " << defaultGreeting << std::endl;

    return 0;
}
