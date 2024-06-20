#include <iostream>
#include <chrono>

void exampleFunction() {
    // Simulate a workload
    for (int i = 0; i < 1000000; ++i) {
        // Do something trivial
        volatile int x = i * i;
    }
}


int main() {
    // Get the start time
    auto start = std::chrono::high_resolution_clock::now();

    // Call the function to measure
    exampleFunction();

    // Get the end time
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the duration
    std::chrono::duration<double> duration = end - start;

    // Output the duration in seconds
    std::cout << "Execution time: " << duration.count() << " seconds" << std::endl;

    return 0;
}
