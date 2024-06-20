#include <iostream>

void print(int a){
    std::cout << "Integer: " << a << std::endl;
}

void print(double a){
    std::cout << "double:  " << a << std::endl;
}

void print(const std::string& a){
    std::cout << "String: " << a  << std::endl;
}



int main(){
    print(42);
    print(2.7);
    print("Hello , world!");
    return 0;
}