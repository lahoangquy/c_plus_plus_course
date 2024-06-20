#include <iostream>
#include <chrono>
#include <iomanip> // for std::put_time

int main() {
    // Get the current time point
    auto now = std::chrono::system_clock::now();

    // Add 24 hours to the current time
    auto tomorrow = now + std::chrono::hours(24);

    // Convert to time_t to get calendar time
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    std::time_t tomorrowTime = std::chrono::system_clock::to_time_t(tomorrow);

    // Convert to local time
    std::tm localTime = *std::localtime(&currentTime);
    std::tm tomorrowLocalTime = *std::localtime(&tomorrowTime);

    // Print the times
    std::cout << "Current date and time: "
              << std::put_time(&localTime, "%Y-%m-%d %H:%M:%S") << '\n';
    std::cout << "Date and time 24 hours later: "
              << std::put_time(&tomorrowLocalTime, "%Y-%m-%d %H:%M:%S") << '\n';

    
    


    return 0;
}

