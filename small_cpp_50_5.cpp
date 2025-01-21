
#include <iostream>
#include <string>


// Base class: Animal
class Animal {
public:
    // Constructor
    Animal(const std::string& animalName) : name_(animalName) {}

    // Virtual method to get the name
    virtual std::string name() const {
        return name_;
    }

    // Virtual destructor
    virtual ~Animal() = default;

protected:
    std::string name_;
};


// Derived class: Tiger
class Tiger : public Animal {
public:
    // Constructor
    Tiger(const std::string& tigerName) : Animal(tigerName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Tiger: " + name_;
    }
};


// Derived class: Toucan
class Toucan : public Animal {
public:
    // Constructor
    Toucan(const std::string& toucanName) : Animal(toucanName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Toucan: " + name_;
    }
};


// Derived class: Turtle
class Turtle : public Animal {
public:
    // Constructor
    Turtle(const std::string& turtleName) : Animal(turtleName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Turtle: " + name_;
    }
};


// Derived class: Walrus
class Walrus : public Animal {
public:
    // Constructor
    Walrus(const std::string& walrusName) : Animal(walrusName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Walrus: " + name_;
    }
};


// Derived class: Whale
class Whale : public Animal {
public:
    // Constructor
    Whale(const std::string& whaleName) : Animal(whaleName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Whale: " + name_;
    }
};


int main() {return 0;}

