#include <iostream>

int main() {
    // One-dimensional array
    int numbers[5] = {1, 2, 3, 4, 5};
    std::cout << "One-dimensional array elements:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }

    // Two-dimensional array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    std::cout << "Two-dimensional array elements:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << std::endl;
        }
    }

    return 0;
}
