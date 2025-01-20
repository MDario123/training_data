animalName=${1,}
AnimalName=${1^}
echo "
// Derived class: ${AnimalName}
class ${AnimalName} : public Animal {
public:
    // Constructor
    ${AnimalName}(const std::string& ${animalName}Name) : Animal(${animalName}Name) {}

    // Override the name method (optional, for customization)
    std::string name() const override {
        return \"${AnimalName}: \" + name_;
    }
};
"

# echo 'alligator antelope bat bear buffalo cat cheetah chimpanzee crocodile dog dolphin eagle elephant flamingo fox frog giraffe gorilla hedgehog hippopotamus hyena jaguar kangaroo koala lemur leopard lion lizard lynx meerkat monkey moose octopus opossum owl panda parrot peacock penguin porcupine rabbit raccoon reindeer rhinoceros seal shark skunk sloth snake squirrel tiger toucan turtle walrus whale wolf wombat woodpecker zebra' | xargs -d ' ' -I _ ./animal_class_generator.bash _ >> big_cpp.cpp
