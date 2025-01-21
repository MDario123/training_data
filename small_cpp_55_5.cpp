
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


// Derived class: Wolf
class Wolf : public Animal {
public:
    // Constructor
    Wolf(const std::string& wolfName) : Animal(wolfName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Wolf: " + name_;
    }
};


// Derived class: Wombat
class Wombat : public Animal {
public:
    // Constructor
    Wombat(const std::string& wombatName) : Animal(wombatName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Wombat: " + name_;
    }
};


// Derived class: Woodpecker
class Woodpecker : public Animal {
public:
    // Constructor
    Woodpecker(const std::string& woodpeckerName) : Animal(woodpeckerName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Woodpecker: " + name_;
    }
};


// Derived class: Yak
class Yak : public Animal {
public:
    // Constructor
    Yak(const std::string& yakName) : Animal(yakName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Yak: " + name_;
    }
};


// Derived class: Zebra
class Zebra : public Animal {
public:
    // Constructor
    Zebra(const std::string& zebraName) : Animal(zebraName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Zebra: " + name_;
    }
};


int main() {return 0;}

