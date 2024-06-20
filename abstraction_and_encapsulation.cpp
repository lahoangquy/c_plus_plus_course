#include <iostream>

class Account {
private:
    double balance; // Private data member

public:
    // Public member functions
    void setBalance(double bal) {
        if (bal >= 0) {
            balance = bal;
        } else {
            std::cout << "Invalid balance" << std::endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};



// Abstract base class
class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual double area() const = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() const override {
        std::cout << "Drawing a circle" << std::endl;
    }

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() const override {
        std::cout << "Drawing a rectangle" << std::endl;
    }

    double area() const override {
        return width * height;
    }
};

int main() {
    Account acc;
    acc.setBalance(1000.50);
    std::cout << "Balance: " << acc.getBalance() << std::endl; 


   Shape* shapes[2];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();
        std::cout << "Area: " << shapes[i]->area() << std::endl;
    }

    // Clean up
    delete shapes[0];
    delete shapes[1];
    return 0;
}
