
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


// Derived class: Dolphin
class Dolphin : public Animal {
public:
    // Constructor
    Dolphin(const std::string& dolphinName) : Animal(dolphinName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Dolphin: " + name_;
    }
};


// Derived class: Eagle
class Eagle : public Animal {
public:
    // Constructor
    Eagle(const std::string& eagleName) : Animal(eagleName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Eagle: " + name_;
    }
};


// Derived class: Elephant
class Elephant : public Animal {
public:
    // Constructor
    Elephant(const std::string& elephantName) : Animal(elephantName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Elephant: " + name_;
    }
};


// Derived class: Flamingo
class Flamingo : public Animal {
public:
    // Constructor
    Flamingo(const std::string& flamingoName) : Animal(flamingoName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Flamingo: " + name_;
    }
};


// Derived class: Fox
class Fox : public Animal {
public:
    // Constructor
    Fox(const std::string& foxName) : Animal(foxName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Fox: " + name_;
    }
};


int main() {return 0;}

