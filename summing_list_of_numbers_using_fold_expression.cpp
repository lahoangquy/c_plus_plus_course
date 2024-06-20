#include <iostream>

// Variadic template function using fold expression to sum arguments
template<typename... Args>
auto sum(Args... args) {
    return (args + ...); // Unary left fold
}

int main() {
    std::cout << "Sum is: " << sum(1, 2, 3, 4, 5) << std::endl;
    return 0;
}
