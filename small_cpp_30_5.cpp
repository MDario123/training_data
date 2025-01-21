
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


// Derived class: Monkey
class Monkey : public Animal {
public:
    // Constructor
    Monkey(const std::string& monkeyName) : Animal(monkeyName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Monkey: " + name_;
    }
};


// Derived class: Moose
class Moose : public Animal {
public:
    // Constructor
    Moose(const std::string& mooseName) : Animal(mooseName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Moose: " + name_;
    }
};


// Derived class: Octopus
class Octopus : public Animal {
public:
    // Constructor
    Octopus(const std::string& octopusName) : Animal(octopusName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Octopus: " + name_;
    }
};


// Derived class: Opossum
class Opossum : public Animal {
public:
    // Constructor
    Opossum(const std::string& opossumName) : Animal(opossumName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Opossum: " + name_;
    }
};


// Derived class: Owl
class Owl : public Animal {
public:
    // Constructor
    Owl(const std::string& owlName) : Animal(owlName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Owl: " + name_;
    }
};


int main() {return 0;}

