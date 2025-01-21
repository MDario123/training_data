
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


// Derived class: Frog
class Frog : public Animal {
public:
    // Constructor
    Frog(const std::string& frogName) : Animal(frogName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Frog: " + name_;
    }
};


// Derived class: Giraffe
class Giraffe : public Animal {
public:
    // Constructor
    Giraffe(const std::string& giraffeName) : Animal(giraffeName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Giraffe: " + name_;
    }
};


// Derived class: Gorilla
class Gorilla : public Animal {
public:
    // Constructor
    Gorilla(const std::string& gorillaName) : Animal(gorillaName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Gorilla: " + name_;
    }
};


// Derived class: Hedgehog
class Hedgehog : public Animal {
public:
    // Constructor
    Hedgehog(const std::string& hedgehogName) : Animal(hedgehogName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Hedgehog: " + name_;
    }
};


// Derived class: Hippopotamus
class Hippopotamus : public Animal {
public:
    // Constructor
    Hippopotamus(const std::string& hippopotamusName) : Animal(hippopotamusName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Hippopotamus: " + name_;
    }
};


int main() {return 0;}

