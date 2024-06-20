#include <iostream>
#include <string>

//Define a struct named 'Person'
struct Person{
    // Meber varaibles
    std::string name;
    int age;
    double height;

    // Constructor
    Person(const std::string& a, int b, double c) : name(a), age(b), height(c) {};

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Height: " << height << " feet" << std::endl;
    }
};

int main(){
    // Declare a varibale of type person
    Person person1("John Doe", 30, 5.9);
    Person person2("Jane Doe", 25, 5.7);

    person1.display();
    person2.display();
    return 0;
  
}