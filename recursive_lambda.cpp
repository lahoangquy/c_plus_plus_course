#include <iostream>
#include <functional>

int main() {
    // Declare a std::function to hold the lambda
    std::function<int(int)> factorial = [&](int n) -> int {
        if (n <= 1) return 1;
        else return n * factorial(n - 1);
    };

    std::cout << "Factorial of 5: " << factorial(5) << std::endl; // Output: 120

    return 0;
}
