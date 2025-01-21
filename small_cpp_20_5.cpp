
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


// Derived class: Hyena
class Hyena : public Animal {
public:
    // Constructor
    Hyena(const std::string& hyenaName) : Animal(hyenaName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Hyena: " + name_;
    }
};


// Derived class: Jaguar
class Jaguar : public Animal {
public:
    // Constructor
    Jaguar(const std::string& jaguarName) : Animal(jaguarName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Jaguar: " + name_;
    }
};


// Derived class: Kangaroo
class Kangaroo : public Animal {
public:
    // Constructor
    Kangaroo(const std::string& kangarooName) : Animal(kangarooName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Kangaroo: " + name_;
    }
};


// Derived class: Koala
class Koala : public Animal {
public:
    // Constructor
    Koala(const std::string& koalaName) : Animal(koalaName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Koala: " + name_;
    }
};


// Derived class: Lemur
class Lemur : public Animal {
public:
    // Constructor
    Lemur(const std::string& lemurName) : Animal(lemurName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Lemur: " + name_;
    }
};


int main() {return 0;}

