
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


// Derived class: Shark
class Shark : public Animal {
public:
    // Constructor
    Shark(const std::string& sharkName) : Animal(sharkName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Shark: " + name_;
    }
};


// Derived class: Skunk
class Skunk : public Animal {
public:
    // Constructor
    Skunk(const std::string& skunkName) : Animal(skunkName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Skunk: " + name_;
    }
};


// Derived class: Sloth
class Sloth : public Animal {
public:
    // Constructor
    Sloth(const std::string& slothName) : Animal(slothName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Sloth: " + name_;
    }
};


// Derived class: Snake
class Snake : public Animal {
public:
    // Constructor
    Snake(const std::string& snakeName) : Animal(snakeName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Snake: " + name_;
    }
};


// Derived class: Squirrel
class Squirrel : public Animal {
public:
    // Constructor
    Squirrel(const std::string& squirrelName) : Animal(squirrelName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Squirrel: " + name_;
    }
};


int main() {return 0;}

