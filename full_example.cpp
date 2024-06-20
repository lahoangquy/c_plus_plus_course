#include <iostream>

// Function with value parameter
void modifyValue(int value) {
    value = 10;
    std::cout << "Inside modifyValue (by value): " << value << std::endl;
}

// Function with reference parameter
void modifyReference(int &value) {
    value = 10;
    std::cout << "Inside modifyReference (by reference): " << value << std::endl;
}

// Function with constant reference parameter
void displayValue(const int &value) {
    std::cout << "Inside displayValue (const reference): " << value << std::endl;
}

// Function with pointer parameter
void modifyPointer(int *value) {
    *value = 10;
    std::cout << "Inside modifyPointer (by pointer): " << *value << std::endl;
}

// Function with default parameters
void displayValues(int a = 1, int b = 2) {
    std::cout << "a: " << a << ", b: " << b << std::endl;
}

int main() {
    int num = 5;

    modifyValue(num);
    std::cout << "After modifyValue: " << num << std::endl;

    modifyReference(num);
    std::cout << "After modifyReference: " << num << std::endl;

    displayValue(num);

    modifyPointer(&num);
    std::cout << "After modifyPointer: " << num << std::endl;

    displayValues();
    displayValues(3);
    displayValues(3, 4);

    return 0;
}
