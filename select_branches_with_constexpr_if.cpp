// if contexpr_if(condition){
//     //code for true condition
// }else{
//     //code for false condition
// }

#include <iostream>
#include <type_traits>

// Function template that behaves differently based on the type of T
template <typename T>
void process(T value) {
    if constexpr (std::is_integral<T>::value) {
        std::cout << "Processing integral value: " << value << std::endl;
    } else if constexpr (std::is_floating_point<T>::value) {
        std::cout << "Processing floating-point value: " << value << std::endl;
    } else {
        std::cout << "Processing other type of value: " << value << std::endl;
    }
}

int main() {
    process(42);       
    process(3.14);     
    process("Hello");   
    return 0;
}