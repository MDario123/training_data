
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


// Derived class: Cat
class Cat : public Animal {
public:
    // Constructor
    Cat(const std::string& catName) : Animal(catName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Cat: " + name_;
    }
};


// Derived class: Cheetah
class Cheetah : public Animal {
public:
    // Constructor
    Cheetah(const std::string& cheetahName) : Animal(cheetahName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Cheetah: " + name_;
    }
};


// Derived class: Chimpanzee
class Chimpanzee : public Animal {
public:
    // Constructor
    Chimpanzee(const std::string& chimpanzeeName) : Animal(chimpanzeeName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Chimpanzee: " + name_;
    }
};


// Derived class: Crocodile
class Crocodile : public Animal {
public:
    // Constructor
    Crocodile(const std::string& crocodileName) : Animal(crocodileName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Crocodile: " + name_;
    }
};


// Derived class: Dog
class Dog : public Animal {
public:
    // Constructor
    Dog(const std::string& dogName) : Animal(dogName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Dog: " + name_;
    }
};


int main() {return 0;}

