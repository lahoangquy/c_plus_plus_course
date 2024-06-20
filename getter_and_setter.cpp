#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Setter for name
    void setName(const std::string& n) {
        name = n;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for age
    void setAge(int a) {
        if (a >= 0) {  // Basic validation to ensure age is non-negative
            age = a;
        } else {
            std::cerr << "Age cannot be negative." << std::endl;
        }
    }

    // Member function to introduce the person
    void introduce() const {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    // Create an object of the Person class
    Person person1("John", 30);

    // Use getter methods
    std::cout << "Name: " << person1.getName() << std::endl;
    std::cout << "Age: " << person1.getAge() << std::endl;

    // Use setter methods
    person1.setName("Jane");
    person1.setAge(25);

    // Introduce the person with updated details
    person1.introduce();

    // Attempt to set an invalid age
    person1.setAge(-5);

    return 0;
}
