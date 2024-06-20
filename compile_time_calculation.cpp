#include <iostream>

// Compile-time function to calculate factorial or Fibonacci
template <typename T>
constexpr T calculate(T value, bool isFactorial) {
    if constexpr (std::is_integral<T>::value) {
        if constexpr (isFactorial) {
            T result = 1;
            for (T i = 1; i <= value; ++i) {
                result *= i;
            }
            return result;
        } else {
            T a = 0, b = 1;
            for (T i = 0; i < value; ++i) {
                T temp = a + b;
                a = b;
                b = temp;
            }
            return a;
        }
    } else {
        return static_cast<T>(-1); // Error value for non-integral types
    }
}

int main() {
    constexpr int num = 5;
    constexpr bool calcFactorial = true;

    // Calculate factorial at compile time
    constexpr int factorial = calculate(num, calcFactorial);
    std::cout << "Factorial of " << num << " is " << factorial << std::endl;

    // Calculate Fibonacci at compile time
    constexpr int fibonacci = calculate(num, !calcFactorial);
    std::cout << "Fibonacci of " << num << " is " << fibonacci << std::endl;

    return 0;
}
