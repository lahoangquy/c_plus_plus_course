// Try to add, access and checking element number 2 in unorder_set
#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us;

    // Adding elements
    us.insert(3);
    us.insert(1);
    us.insert(2);

    // Accessing elements
    std::cout << "Unordered set elements: ";
    for (auto it = us.begin(); it != us.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Checking for an element
    if (us.find(2) != us.end()) {
        std::cout << "Element 2 found in the unordered set" << std::endl;
    }

    return 0;
}
