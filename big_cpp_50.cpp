
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


// Derived class: Leopard
class Leopard : public Animal {
public:
    // Constructor
    Leopard(const std::string& leopardName) : Animal(leopardName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Leopard: " + name_;
    }
};


// Derived class: Lion
class Lion : public Animal {
public:
    // Constructor
    Lion(const std::string& lionName) : Animal(lionName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Lion: " + name_;
    }
};


// Derived class: Lizard
class Lizard : public Animal {
public:
    // Constructor
    Lizard(const std::string& lizardName) : Animal(lizardName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Lizard: " + name_;
    }
};


// Derived class: Lynx
class Lynx : public Animal {
public:
    // Constructor
    Lynx(const std::string& lynxName) : Animal(lynxName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Lynx: " + name_;
    }
};


// Derived class: Meerkat
class Meerkat : public Animal {
public:
    // Constructor
    Meerkat(const std::string& meerkatName) : Animal(meerkatName) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return "Meerkat: " + name_;
    }
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

