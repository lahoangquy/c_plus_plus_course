#include <iostream>
int x = 10; //global variable

void function(){
    int x = 20; //local vairable
    std::cout <<"Local x: " << x << std::endl;
    std::cout <<"Global vairable: " << ::x << std::endl;// Access global x
}


class MyClass{
    public:
    void display(); // Member function declaration
};
void MyClass::display(){ 
    // Define using scope resolution operator
    std::cout <<"MyClass display function" << std::endl;
}

namespace first {int value = 1;}
namespace second {int value = 2;}

class MyClass1{
    public:
    static int count;
    static void increment(){
        ++count;
    }
};

int MyClass1::count = 0; // definition of static member

class MyClass2{
    public:
    enum Color{Red, Green, Blue};
};

int main(){
    function();
    MyClass obj;
    obj.display();

    std::cout <<"first::value: " <<first::value << std::endl;
    std::cout <<"second::value: " <<second::value <<std::endl;

    MyClass1::increment();
    MyClass1::increment();
    std::cout << "Count: " <<MyClass1::count <<std::endl;

    MyClass2::Color color = MyClass2::Red;
    std::cout << "Color: " <<color << std::endl;
    return 0;
}