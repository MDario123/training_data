
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


// Derived class: Alligator
class Alligator : public Animal {
public:
    // Constructor
    Alligator(const std::string& alligatorName) : Animal(alligatorName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Alligator: " + name_;
    }
};


// Derived class: Antelope
class Antelope : public Animal {
public:
    // Constructor
    Antelope(const std::string& antelopeName) : Animal(antelopeName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Antelope: " + name_;
    }
};


// Derived class: Bat
class Bat : public Animal {
public:
    // Constructor
    Bat(const std::string& batName) : Animal(batName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Bat: " + name_;
    }
};


// Derived class: Bear
class Bear : public Animal {
public:
    // Constructor
    Bear(const std::string& bearName) : Animal(bearName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Bear: " + name_;
    }
};


// Derived class: Buffalo
class Buffalo : public Animal {
public:
    // Constructor
    Buffalo(const std::string& buffaloName) : Animal(buffaloName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Buffalo: " + name_;
    }
};


int main() {return 0;}

