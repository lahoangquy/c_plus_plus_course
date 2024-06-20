#include <iostream>

// Base case for recursion
template<typename T>
T sum(T value) {
    return value;
}

// Recursive variadic template function
template<typename T, typename... Args>
T sum(T first, Args... rest) {
    return first + sum(rest...);
}

int main() {
    std::cout << sum(1, 2, 3, 4, 5) << std::endl;
    return 0;
}
