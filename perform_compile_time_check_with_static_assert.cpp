// checking the size of a type

#include <iostream>

// //Ensure the size of int is 4 bytes

// static_assert(sizeof(int) == 4, "int must be 4 bytes");
// int main(){
//     std::cout <<"Size of int: " <<sizeof(int) << " bytes \n" <<std::endl;
//     return 0;
// }

// #include<type_traits>

// // template function that requires T to be an integral type

// template<typename T>
// void process(T value) {
//     static_assert(std::is_integral<T>::value, "T must be integral");
//     std::cout << "Processing value: " << value << std::endl;
// }

// int main(){
//     process(42); // Ok: int is an integral type
//     //process(3.14)
// }


// check size of the array 

// Function that requires the array to have at least 5 elements
template <typename T, std::size_t N>
void checkArraySize(const T (&array)[N]) {
    static_assert(N >= 5, "Array size must be at least 5");
    std::cout << "Array size is sufficient.\n";
}

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {1, 2, 3};
    
    checkArraySize(arr1); // OK: arr1 has 5 elements
    //checkArraySize(arr2);
    return 0;
}