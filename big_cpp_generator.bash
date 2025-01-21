#/usr/bin/env bash

generate_class() {
    local className="$1"

    if [[ -z "$className" ]]; then
        echo "Error: No class name provided."
        return 1
    fi

    # Convert the class name for camelCase and PascalCase
    local animalName="${className,}"  # Lowercase first letter
    local AnimalName="${className^}" # Uppercase first letter

    # Generate the class
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
}

# Main script
animal_names="alligator antelope bat bear buffalo cat cheetah chimpanzee crocodile dog dolphin eagle elephant flamingo fox frog giraffe gorilla hedgehog hippopotamus hyena jaguar kangaroo koala lemur leopard lion lizard lynx meerkat monkey moose octopus opossum owl panda parrot peacock penguin porcupine rabbit raccoon reindeer rhinoceros seal shark skunk sloth snake squirrel tiger toucan turtle walrus whale wolf wombat woodpecker yak zebra"

# Prefix and suffix for the file
FILE_PREFIX="
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
"

FILE_SUFFIX="
int main() {return 0;}
"

# Read N from arguments
N="$1"
if ! [[ "$N" =~ ^[0-9]+$ ]]; then
    echo "Error: Please provide a valid number."
    exit 1
fi

# Get the first N animal names
animal_list=($animal_names)
if (( N > ${#animal_list[@]} )); then
    echo "Error: Requested number exceeds available animal names (${#animal_list[@]})."
    exit 1
fi

# Generate file content
output_file="big_cpp_${N}.cpp"
{
    echo "$FILE_PREFIX"
    for (( i=0; i<N; i++ )); do
        generate_class "${animal_list[$i]}"
    done
    echo "$FILE_SUFFIX"
} > "$output_file"

echo "File '$output_file' generated with $N classes."
