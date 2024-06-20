#include <iostream>

// function overlaoding

void print(int i){
    std::cout << "Printing int: " << i << std::endl;
}

void print(double d){
    std::cout << "Printing double: " << d << std::endl;
}

void print(const std::string& s){
    std::cout << "Printing string: " << s << std::endl;
}


class Complex {
private:
    double real, imag;
public:
    Complex(double r, double i) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};


class Animal {
public:
    virtual void sound() const {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

class Dog : public Animal {
public:
    void sound() const override {
        std::cout << "Dog barks." << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() const override {
        std::cout << "Cat meows." << std::endl;
    }
};

void makeSound(const Animal& animal) {
    animal.sound();  // Calls the appropriate method based on the object type
}


class Base {
public:
    virtual ~Base() {
        std::cout << "Base Destructor" << std::endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
};


int main(){
    print(5);
    print(3.14);
    print("Hello");
    Complex c1(1.0, 2.0), c2(3.0, 4.0);
    Complex c3 = c1 + c2;
    c3.display();

      Animal a;
    Dog d;
    Cat c;
    makeSound(a);
    makeSound(d);
    makeSound(c);

    Base* b = new Derived();
    delete b;  // Correctly calls both the Derived and Base destructors
    return 0;
}