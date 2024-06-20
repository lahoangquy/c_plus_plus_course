#include <iostream>

int main() {
    // Dynamic memory allocation for a single integer
    int* singleInt = new int;
    *singleInt = 100;
    std::cout << "Single integer value: " << *singleInt << std::endl;
    delete singleInt;  // Deallocate memory
    singleInt = nullptr;  // Avoid dangling pointer

    // Dynamic memory allocation for an array of integers
    int size = 5;
    int* intArray = new int[size];

    // Assign values to the array
    for (int i = 0; i < size; ++i) {
        intArray[i] = i * 10;
    }

    // Print the array values
    std::cout << "Array values: ";
    for (int i = 0; i < size; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate memory for the array
    delete[] intArray;
    intArray = nullptr;  // Avoid dangling pointer
    return 0;
}
