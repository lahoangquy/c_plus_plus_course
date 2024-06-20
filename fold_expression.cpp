/*Unary left fold (... op pack)

Unary right fold (pack op ...) or (... op pack)
Binary left fold (init op ... op pack)
Binary right fold (pack op ... op init)
pack= parameter pack
op = binary operator
init = initial value*/
#include <iostream>

/*// Variadic template function to multiply arguments using a fold expression
template <typename... Args>
auto sum(Args... args) {
    return (args * ...);
}

int main() {
    std::cout << sum(1, 2, 3, 4, 5) << std::endl; 
    std::cout << sum(1.5, 2.5, 3.0) << std::endl;
    return 0;
}*/


// Variadic template function to sum arguments with an initial value using a fold expression
template <typename T, typename... Args>
auto sum_with_initial(T init, Args... args) {
    return (init + ... + args);
}

int main() {
    std::cout << sum_with_initial(10, 1, 2, 3, 4, 5) << std::endl; // Output: 25
    std::cout << sum_with_initial(5.0, 1.5, 2.5, 3.0) << std::endl; // Output: 12.0
    return 0;
}

