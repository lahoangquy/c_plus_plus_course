#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    // Default Constructor
    Person() : name("Unknown"), age(0) {
        std::cout << "Default Constructor called" << std::endl;
    }

    // Parameterized Constructor
    Person(const std::string &n, int a) : name(n), age(a) {
        std::cout << "Parameterized Constructor called for " << name << std::endl;
    }

    // Copy Constructor
    Person(const Person &other) : name(other.name), age(other.age) {
        std::cout << "Copy Constructor called for " << name << std::endl;
    }

    // Destructor
    ~Person() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    // Method to display person information
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Default constructor
    Person person1;
    person1.display();

    // Parameterized constructor
    Person person2("Alice", 30);
    person2.display();

    // Copy constructor
    Person person3 = person2;
    person3.display();

    return 0;
}
