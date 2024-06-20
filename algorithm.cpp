#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // For std::accumulate

void printVector(const std::vector<int>& vec) {
    for (int value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec = {5, 3, 8, 1, 9, 4};

    // std::sort - Sorting the vector
    std::sort(vec.begin(), vec.end());
    std::cout << "Sorted vector: ";
    printVector(vec);

    // std::find - Finding an element
    auto it = std::find(vec.begin(), vec.end(), 8);
    if (it != vec.end()) {
        std::cout << "Element 8 found at position: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Element 8 not found" << std::endl;
    }

    // std::accumulate - Summing elements
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    std::cout << "Sum of elements: " << sum << std::endl;

    // std::for_each - Applying a function to each element
    std::cout << "Elements squared: ";
    std::for_each(vec.begin(), vec.end(), [](int& n) { n *= n; });
    printVector(vec);

    return 0;
}
