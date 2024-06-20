#include <iostream>
#include <vector>

void printVector(const std::vector<int>& vec) {
    for (int elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    printVector(numbers);

    return 0;
}
