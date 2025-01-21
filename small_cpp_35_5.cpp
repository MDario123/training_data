
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


// Derived class: Panda
class Panda : public Animal {
public:
    // Constructor
    Panda(const std::string& pandaName) : Animal(pandaName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Panda: " + name_;
    }
};


// Derived class: Parrot
class Parrot : public Animal {
public:
    // Constructor
    Parrot(const std::string& parrotName) : Animal(parrotName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Parrot: " + name_;
    }
};


// Derived class: Peacock
class Peacock : public Animal {
public:
    // Constructor
    Peacock(const std::string& peacockName) : Animal(peacockName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Peacock: " + name_;
    }
};


// Derived class: Penguin
class Penguin : public Animal {
public:
    // Constructor
    Penguin(const std::string& penguinName) : Animal(penguinName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Penguin: " + name_;
    }
};


// Derived class: Porcupine
class Porcupine : public Animal {
public:
    // Constructor
    Porcupine(const std::string& porcupineName) : Animal(porcupineName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Porcupine: " + name_;
    }
};


int main() {return 0;}

