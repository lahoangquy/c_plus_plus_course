#include <iostream>

// Define the namespace
namespace MyNamespace {
    int myVariable = 42;

    void myFunction() {
        std::cout << "Hello from MyNamespace!" << std::endl;
    }

    class MyClass {
    public:
        void display() {
            std::cout << "MyClass from MyNamespace" << std::endl;
        }
    };
}


namespace Outer::Inner{
    int value =100;
}

namespace {
    int secretValue = 99;
    void secretFunction() {
        std::cout <<"This is a secret function !" << std::endl;
    }
}
int main() {
    // Accessing namespace members
    using namespace MyNamespace;
    // using MyNamespace::myVariable;- Bring ony myVariable into scope
    // using MyNamespace::myFunction; - Bring ony myFunction into scope
    std::cout << "myVariable: " << myVariable << std::endl;
    myFunction();

    MyClass obj;
    obj.display();
    std::cout <<"Outer::Inner::value: " << Outer::Inner::value << std::endl;

    std::cout <<"secretValue: " <<secretValue <<std::endl;
    secretFunction();

    return 0;
}
