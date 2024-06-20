#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <algorithm>

// Function returning void
void printMessage() {
    std::cout << "Hello, World!" << std::endl;
}

// Function returning int
int add(int a, int b) {
    return a + b;
}

// Function returning a struct
struct Point {
    int x, y;
};

Point createPoint(int x, int y) {
    return {x, y};
}

// Function returning a reference
int& getElement(std::vector<int>& vec, int index) {
    return vec[index];
}

// Function returning a pointer
int* allocateArray(int size) {
    return new int[size];
}

// Function returning a string
std::string getGreeting() {
    return "Hello, C++!";
}

// Function returning a vector
std::vector<int> getNumbers() {
    return {1, 2, 3, 4, 5};
}

// Function returning a tuple
std::tuple<int, int> getMinMax(const std::vector<int>& numbers) {
    int min = *std::min_element(numbers.begin(), numbers.end());
    int max = *std::max_element(numbers.begin(), numbers.end());
    return std::make_tuple(min, max);
}

int main() {
    printMessage();

    int sum = add(3, 4);
    std::cout << "Sum: " << sum << std::endl;

    Point p = createPoint(5, 7);
    std::cout << "Point: (" << p.x << ", " << p.y << ")" << std::endl;

    std::vector<int> vec = {10, 20, 30};
    int& elem = getElement(vec, 1);
    elem = 50;
    std::cout << "Element at index 1: " << vec[1] << std::endl;

    int* arr = allocateArray(5);
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 2;
        std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
    }
    delete[] arr;

    std::string greeting = getGreeting();
    std::cout << "Greeting: " << greeting << std::endl;

    std::vector<int> numbers = getNumbers();
    std::cout << "Numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    auto [min, max] = getMinMax(numbers);
    std::cout << "Min: " << min << ", Max: " << max << std::endl;

    return 0;
}
