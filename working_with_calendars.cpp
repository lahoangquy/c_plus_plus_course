#include <iostream>
#include <chrono>
#include <iomanip> // for std::put_time

int main() {
    // Get the current time point
    auto now = std::chrono::system_clock::now();

    // Convert to time_t to get calendar time
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    // Convert to local time
    std::tm localTime = *std::localtime(&currentTime);

    // Print the current time
    std::cout << "Current date and time: "
              << std::put_time(&localTime, "%Y-%m-%d %H:%M:%S") << '\n';

    return 0;
}
