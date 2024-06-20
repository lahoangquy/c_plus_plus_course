#include <iostream>
#include <set>

int main() {
    std::set<int> s;

    // Adding elements
    s.insert(3);
    s.insert(1);
    s.insert(2);

    // Accessing elements
    std::cout << "Set elements: ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Checking for an element
    if (s.find(4) != s.end()) {
        std::cout << "Element 2 found in the set" << std::endl;
    }else{
        std::cout << "Element Not found in the set" << std::endl;
    }

    return 0;
}
