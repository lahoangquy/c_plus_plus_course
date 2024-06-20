#include <iostream>
#include <type_traits>

template<typename T>
void printType(T&& value) {
    using DecayedType = std::decay_t<T>;
    if (std::is_same<int, DecayedType>::value) {
        std::cout << "Type is int\n";
    } else if (std::is_same<int*, DecayedType>::value) {
        std::cout << "Type is int*\n";
    } else if (std::is_same<const int*, DecayedType>::value) {
        std::cout << "Type is const int*\n";
    } else {
        std::cout << "Type is something else\n";
    }
}

int main() {
    int a = 5;
    const int b = 10;
    printType(a);         
    printType(&a);        
    printType(&b);        
    return 0;
}
