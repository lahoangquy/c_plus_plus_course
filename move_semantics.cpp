#include <iostream>
#include <utility>
#include <vector>

class Resource {
public:
    Resource() : data(new int[1000]) {
        std::cout << "Resource acquired" << std::endl;
    }

    ~Resource() {
        delete[] data;
        std::cout << "Resource destroyed" << std::endl;
    }

    // Move constructor
    Resource(Resource&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Resource moved" << std::endl;
    }

    // Move assignment operator
    Resource& operator=(Resource&& other) noexcept {
        if (this != &other) {
            delete[] data; // Clean up existing resource
            data = other.data;
            other.data = nullptr;
        }
        std::cout << "Resource moved (assignment)" << std::endl;
        return *this;
    }

    // Deleted copy constructor
    Resource(const Resource&) = delete;

    // Deleted copy assignment operator
    Resource& operator=(const Resource&) = delete;

private:
    int* data;
};

int main() {
    Resource res1;
    Resource res2;
    res2 = std::move(res1); // Move assignment operator

     std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = std::move(vec1); // Move constructor

    std::cout << "vec1 size: " << vec1.size() << std::endl; // vec1 is empty
    std::cout << "vec2 size: " << vec2.size() << std::endl; // vec2 has elements
    return 0;
}
