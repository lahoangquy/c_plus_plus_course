#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> m;

    // Adding elements
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";

    // Accessing elements
    std::cout << "Map elements: ";
    for (auto it = m.begin(); it != m.end(); ++it) {
        std::cout << "{" << it->first << ", " << it->second << "} ";
    }
    std::cout << std::endl;

    // Checking for a key
    if (m.find(2) != m.end()) {
        std::cout << "Key 2 found with value: " << m[2] << std::endl;
    }

    return 0;
}
