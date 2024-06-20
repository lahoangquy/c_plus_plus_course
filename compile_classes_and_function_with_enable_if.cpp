// std::enable_if is a SFINAE (Substituition failure is not an error) part of type_traits

// template<bool B, class T =void>

// struct enable_if {};

#include <iostream>
#include <type_traits>

// // Function template for integral types
// template<typename T>
// typename std::enable_if<std::is_integral<T>::value, void>::type
// process(T value) {
//     std::cout << "Processing integral value: " << value << std::endl;
// }

// // Function template for floating-point types
// template<typename T>
// typename std::enable_if<std::is_floating_point<T>::value, void>::type
// process(T value) {
//     std::cout << "Processing floating-point value: " << value << std::endl;
// }

// int main() {
//     process(42);   
//     process(3.14);   
//     return 0;
// }

// // Function template for integral types
// template<typename T>
// typename std::enable_if<std::is_integral<T>::value, T>::type
// identity(T value) {
//     return value;
// }

// // Function template for floating-point types
// template<typename T>
// typename std::enable_if<std::is_floating_point<T>::value, T>::type
// identity(T value) {
//     return value;
// }

// int main() {
//     std::cout << identity(42) << std::endl;     // Calls the integral version
//     std::cout << identity(3.14) << std::endl;   // Calls the floating-point version
//     return 0;
// }


// Class template for integral types
template<typename T, typename Enable = void>
class MyClass;

// Specialization for integral types
template<typename T>
class MyClass<T, typename std::enable_if<std::is_integral<T>::value>::type> {
public:
    void print() {
        std::cout << "Integral type" << std::endl;
    }
};

// try to implement the same above function for floating point
// Specialization for floating-point types
template<typename T>
class MyClass<T, typename std::enable_if<std::is_floating_point<T>::value>::type> {
public:
    void print() {
        std::cout << "Floating-point type" << std::endl;
    }
};

int main(){
       MyClass<int> integralObj;
    integralObj.print();  

    MyClass<double> floatingObj;
    floatingObj.print();  
    return 0;
}