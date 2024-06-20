#include <iostream>
#include <utility>

// A function that takes an rvalue reference to a std::string
void processString(std::string&& str) {
    std::cout << "Processing rvalue: " << str << std::endl;
}

// A function that takes an lvalue reference to a std::string
void processString(const std::string& str) {
    std::cout << "Processing lvalue: " << str << std::endl;
}

// A wrapper function that uses std::forward to forward the argument
template<typename T>
void forwardToProcess(T&& arg) {
    processString(std::forward<T>(arg));
}

int main() {
    std::string s = "Hello";
    forwardToProcess(s);           // Calls the lvalue overload
    forwardToProcess(std::string("World")); // Calls the rvalue overload
    return 0;
}
