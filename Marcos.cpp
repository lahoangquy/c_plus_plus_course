#include <iostream>

#define PI 3.14159
#define NEWLINE '\n'
#define SQUARE(x) ((x)* (x))
#define DEBUG
#define LOG(message) std::cout << "[LOG] " << message << std::endl;
int main() {
    int num= 5;
    std::cout << "The value of PI is " << PI << NEWLINE;
    std::cout <<"The square of " << num << " is " << SQUARE(num) << std::endl;

    LOG("This is a log message.");

#ifdef DEBUG
    std::cout << "Debugging is enabled" << std::endl;
#endif

#ifndef DEBUG
    std::cout << "Debugging is disabled" << std::endl;
#endif
    return 0;
}