#include <iostream>
#include <cassert>

template <typename T>
class Array {
private:
    T* arr;
    int size;

public:
    // Constructor
    Array(int s) : size(s) {
        arr = new T[size];
    }

    // Destructor
    ~Array() {
        delete[] arr;
    }

    // Access element (with bounds checking)
    T& operator[](int index) {
        assert(index >= 0 && index < size);
        return arr[index];
    }

    // Get size of the array
    int getSize() const {
        return size;
    }
};

int main() {
    Array<int> intArray(5);  // Array of integers
    Array<double> doubleArray(3);  // Array of doubles

    // Populate and print intArray
    for (int i = 0; i < intArray.getSize(); ++i) {
        intArray[i] = i * 2;
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
    }

    // Populate and print doubleArray
    for (int i = 0; i < doubleArray.getSize(); ++i) {
        doubleArray[i] = i * 1.1;
        std::cout << "doubleArray[" << i << "] = " << doubleArray[i] << std::endl;
    }

    return 0;
}
