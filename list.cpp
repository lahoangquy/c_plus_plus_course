#include <iostream>
#include <list>

int main() {
    std::list<int> lst;

    // Adding elements
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    // Accessing elements
    std::cout << "List elements: ";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Removing an element
    lst.remove(2);
    std::cout << "After removing 2: ";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
