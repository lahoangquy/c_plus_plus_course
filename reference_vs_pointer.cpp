#include <iostream>

// Function using a pointer
void incrementPointer(int* ptr) {
    if (ptr) {
        (*ptr)++;
    }
}

// Function using a reference
void incrementReference(int& ref) {
    ref++;
}

int main() {
    int a = 5;

    // Using a pointer
    int* ptr = &a;
    incrementPointer(ptr);
    std::cout << "Value after incrementing using pointer: " << a << std::endl;  // Output: 6

    // Using a reference
    int& ref = a;
    incrementReference(ref);
    std::cout << "Value after incrementing using reference: " << a << std::endl;  // Output: 7

    return 0;
}
