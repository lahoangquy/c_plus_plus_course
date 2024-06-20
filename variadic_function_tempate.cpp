#include <iostream>

// Variadic template function to print arguments
template<typename... Args>
void print(Args... args) {
    (std::cout << ... << args) << '\n'; // Fold expression to print each argument
}

int main() {
    print(1, 2, 3.5, "Hello", 'A'); // Output: 123.5HelloA
    return 0;
}
