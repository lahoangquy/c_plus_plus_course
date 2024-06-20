#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    auto add = [](int a, int b){ return a+b; };
    std::cout << "Sum: " << add(3,4) << std::endl;


    int x = 10;
    int y =20;

    // Capture x by value and y by reference
    auto lambda = [x, &y](){
        std::cout << "X: " << x << ", y: " << y << std::endl;
    };

    y =30;
    lambda();


    int value = 42;
    auto modify = [value]() mutable{
        value +=10;
        std::cout << "Inside lambda: " << value << std::endl;
    };
    modify();
    std::cout << "Outside lambda: " << value << std::endl;

    auto divide = [](int a, int b) -> double  { 
        return static_cast<double>(a)/b;
    };
    std::cout << "Division: " << divide(10,3) << std::endl;



    std::vector<int> vec = {5,3,9,1,7};

    // Sort using a lambda expression
    std::sort(vec.begin(), vec.end(), [](int a, int b){
        return a < b;
    });

    //Print sorted vector
    std::for_each(vec.begin(),vec.end(), [](int n){
        std::cout << n << std::endl;
    });


    return 0;
}

