#include <iostream>

// Function template to swap two values
/*template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}*/

// Function template with 2 type parameters
template <typename T1, typename T2>
void display(const T1& a, const T2& b) {
    std::cout << "a: " << a << ", b: " << b << std::endl;
}

int main() {
    /*int x = 10, y = 20;
    double p = 1.5, q = 2.5;

    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    swapValues(x, y);
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    std::cout << "Before swapping: p = " << p << ", q = " << q << std::endl;
    swapValues(p, q);
    std::cout << "After swapping: p = " << p << ", q = " << q << std::endl;*/
    display(10, 20.5); 
     display("Hello", 100);
    return 0;
}
