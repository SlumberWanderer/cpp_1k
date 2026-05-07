#pragma once
#include "living_being.hpp"

class Animal : public LivingBeing {
private:
    std::string species_;

public:
    Animal(std::string name, int age, std::string species) 
        : LivingBeing(name, age), species_(species) {}

    void makeSound() const override {
        if (species_ == "Dog") {
            std::cout << name_ << " says: Woof-Woof!" << std::endl;
        } else if (species_ == "Cat") {
            std::cout << name_ << " says: Meow!" << std::endl;
        } else {
            std::cout << name_ << " makes a generic animal sound." << std::endl;
        }
    }

    void showInfo(std::ostream& os) const override {
        LivingBeing::showInfo(os); 
        os << ", " << species_ << " animal";
    }
};