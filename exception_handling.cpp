#include <iostream>
#include <stdexcept> // For standard exceptions

void mightGoWrong() {
    bool error1 = true;
    bool error2 = false;

    if (error1) {
        throw std::runtime_error("Something went wrong");
    }

    if (error2) {
        throw std::runtime_error("Something else went wrong");
    }
}

int main() {
    try {
        mightGoWrong();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught a runtime_error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }

    std::cout << "Program continues..." << std::endl;
    return 0;
}
