
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


// Derived class: Rabbit
class Rabbit : public Animal {
public:
    // Constructor
    Rabbit(const std::string& rabbitName) : Animal(rabbitName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Rabbit: " + name_;
    }
};


// Derived class: Raccoon
class Raccoon : public Animal {
public:
    // Constructor
    Raccoon(const std::string& raccoonName) : Animal(raccoonName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Raccoon: " + name_;
    }
};


// Derived class: Reindeer
class Reindeer : public Animal {
public:
    // Constructor
    Reindeer(const std::string& reindeerName) : Animal(reindeerName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Reindeer: " + name_;
    }
};


// Derived class: Rhinoceros
class Rhinoceros : public Animal {
public:
    // Constructor
    Rhinoceros(const std::string& rhinocerosName) : Animal(rhinocerosName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Rhinoceros: " + name_;
    }
};


// Derived class: Seal
class Seal : public Animal {
public:
    // Constructor
    Seal(const std::string& sealName) : Animal(sealName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Seal: " + name_;
    }
};


int main() {return 0;}

