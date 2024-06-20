// Try to add, access and checking element number 2 in unorder_map. It is very similar to unordered_set.
#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> um;

    // Adding elements
    um[1] = "one";
    um[2] = "two";
    um[3] = "three";

    // Accessing elements
    std::cout << "Unordered map elements: ";
    for (auto it = um.begin(); it != um.end(); ++it) {
        std::cout << "{" << it->first << ", " << it->second << "} ";
    }
    std::cout << std::endl;

    // Checking for a key
    if (um.find(2) != um.end()) {
        std::cout << "Key 2 found with value: " << um[2] << std::endl;
    }

    return 0;
}
