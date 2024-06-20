#include <iostream>

int main() {
    int var = 5;
    int* ptr = &var;  // Pointer initialization

    // Display the value of var using the pointer
    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Value of var using pointer: " << *ptr << std::endl;

    // Display the address of var
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Address stored in pointer: " << ptr << std::endl;

    // Pointer arithmetic
    int arr[3] = {1, 2, 3};
    ptr = arr;  // Pointer now points to the first element of arr

    std::cout << "Array elements using pointer arithmetic:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << *(ptr + i) << " ";  // Outputs: 1 2 3
    }
    std::cout << std::endl;
    ptr++, prt--, ptr+n, ptr-n

    return 0;
}
