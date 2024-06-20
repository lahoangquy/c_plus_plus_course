#include <iostream>
#include <functional>

// Y-combinator template
template <typename Func>
struct YCombinator {
    Func func;
    template <typename... Args>
    decltype(auto) operator()(Args&&... args) const {
        return func(*this, std::forward<Args>(args)...);
    }
};

// Helper function to create the Y-combinator
template <typename Func>
auto make_recursive(Func&& func) {
    return YCombinator<std::decay_t<Func>>{std::forward<Func>(func)};
}

int main() {
    // Recursive lambda using Y-combinator
    auto fibonacci = make_recursive([](auto&& self, int n) -> int {
        if (n <= 1) return n;
        else return self(n - 1) + self(n - 2);
    });

    std::cout << "Fibonacci of 10: " << fibonacci(10) << std::endl; // Output: 55

    return 0;
}
