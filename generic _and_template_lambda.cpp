#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 3, 9, 1, 7};

    // Using a generic lambda with std::sort
    std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a < b;
    });

    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    // Output: 1 3 5 7 9

    return 0;
}
