
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


// Derived class: Leopard
class Leopard : public Animal {
public:
    // Constructor
    Leopard(const std::string& leopardName) : Animal(leopardName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Leopard: " + name_;
    }
};


// Derived class: Lion
class Lion : public Animal {
public:
    // Constructor
    Lion(const std::string& lionName) : Animal(lionName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Lion: " + name_;
    }
};


// Derived class: Lizard
class Lizard : public Animal {
public:
    // Constructor
    Lizard(const std::string& lizardName) : Animal(lizardName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Lizard: " + name_;
    }
};


// Derived class: Lynx
class Lynx : public Animal {
public:
    // Constructor
    Lynx(const std::string& lynxName) : Animal(lynxName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Lynx: " + name_;
    }
};


// Derived class: Meerkat
class Meerkat : public Animal {
public:
    // Constructor
    Meerkat(const std::string& meerkatName) : Animal(meerkatName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Meerkat: " + name_;
    }
};


int main() {return 0;}

