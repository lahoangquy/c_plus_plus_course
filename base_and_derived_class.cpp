#include <iostream>

// Base class
class Animal {
public:
    // Data members
    std::string name;

    // Constructor
    Animal(const std::string& n) : name(n) {}

    // Member function
    void speak() const {
        std::cout << name << " makes a sound." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Constructor
    Dog(const std::string& n) : Animal(n) {}

    // Overridden member function
    void speak() const {
        std::cout << name << " barks." << std::endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    // Constructor
    Cat(const std::string& n) : Animal(n) {}

    // Overridden member function
    void speak() const {
        std::cout << name << " meows." << std::endl;
    }
};

int main() {
    // Create objects of the derived classes
    Dog dog("Buddy");
    Cat cat("Whiskers");

    // Call member functions
    dog.speak();  // Output: Buddy barks.
    cat.speak();  // Output: Whiskers meows.

    return 0;
}


class Base{
    protected:
    int protectedMember;
    public:
    int publicMember;
};

class DerivedPublic: public Base{
    // ProtectedMember is protected in DerivedPublic
    // publicMember is public in DereivedPublic
};

class DerivedProtected: protected Base{
    // ProtectedMember is protected in DerivedProtected
    // publicMember is protected in DerivedProtected
};

class DerivedPrivate: private Base{
    // ProtectedMember is private in DerivedPrivate
    // publicMember is private in DerivedPrivate
};