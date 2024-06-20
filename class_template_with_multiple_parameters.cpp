#include <iostream>

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Getters
    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }
};

int main() {
    Pair<int, double> p1(1, 2.5);
    Pair<std::string, int> p2("Hello", 100);

    std::cout << "Pair 1: (" << p1.getFirst() << ", " << p1.getSecond() << ")" << std::endl;
    std::cout << "Pair 2: (" << p2.getFirst() << ", " << p2.getSecond() << ")" << std::endl;

    return 0;
}
