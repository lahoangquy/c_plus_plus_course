//what are std_string_view and std::format and std::print in C++

#include <iostream>
#include <string_view>
#include <format>


/*void print_string_view(std::string_view sv) {
    std::cout << sv << std::endl;
}*/

int main(){
 /*std::string str = "Hello, World!";
    std::string_view sv(str); // Create a string_view from a std::string

    print_string_view(sv); // Pass the string_view to a function

    //https://stackoverflow.com/questions/70208952/c-namespace-std-has-no-member-format-despite-include-format

    // Create a string_view from a substring
    std::string_view sv_sub(str.data() + 7, 5); 
    print_string_view(sv_sub);
    int num = 42;
    double pi = 3.14159;
    std::string name = "Alice";

    std::string formatted_str = std::format("Hello, {}! The number is {} and pi is {:.2f}.", name, num, pi);
    std::cout << formatted_str << std::endl; // Output: Hello, Alice! The number is 42 and pi is 3.14.*/

    int num = 42;
    double pi = 3.14159;
    std::string name = "Bob";

    std::print("Hello, {}! The number is {} and pi is {:.2f}.", name, num, pi);
    return 0;
}