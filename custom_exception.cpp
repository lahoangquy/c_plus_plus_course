#include <iostream>
#include <exception>

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "My custom exception";
    }
};

void testFunction() {
    throw MyException();
}

int main() {
    try {
        testFunction();
    } catch (const MyException& e) {
        std::cout << "Caught MyException: " << e.what() << std::endl;
    }

    std::cout << "Program continues..." << std::endl;
    return 0;
}
