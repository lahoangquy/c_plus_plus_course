#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;  // Pointer to the first element of the array

    std::cout << "Pointer arithmetic (incrementing):" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << *ptr << " ";  // Output: 10 20 30 40 50
        ptr++;
    }
    std::cout << std::endl;

    // Reset pointer to the last element of the array
    ptr = arr + 4;

    std::cout << "Pointer arithmetic (decrementing):" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << *ptr << " ";  // Output: 50 40 30 20 10
        ptr--;
    }
    std::cout << std::endl;
 


     int arr1[5] = {10, 20, 30, 40, 50};
    int* ptr2 = arr1;  // Pointer to the first element of the array
     ptr2 += 2;  // Move pointer to the third element
    std::cout << "Pointer + 2 points to: " << *ptr2 << std::endl;  // Output: 30

    int* ptr1 = arr1 + 4;  // Pointer to the last element of the array

    ptr1 -= 2;  // Move pointer to the third element
    std::cout << "Pointer - 2 points to: " << *ptr1 << std::endl;  // Output: 30



    int* ptr3 = arr1;
    int* ptr4 = arr1 + 3;
    int distance = ptr4-ptr3;
    std::cout <<"Number of elements between ptr 4 and ptr3: "<<distance <<std::endl;
    return 0;
}
