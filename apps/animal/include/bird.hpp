#pragma once

#include "living_being.hpp"

class Bird : public LivingBeing {
private:
    double wingSpan_;

public:
    Bird(std::string name, int age, double wingSpan) : LivingBeing(name, age), wingSpan_(wingSpan) {}

        void makeSound() const override {
            std::cout << name_ << " says: Chirp!" << std::endl;
        }

    void showInfo(std::ostream& os) const override {
        LivingBeing::showInfo(os);
        os << ", Bird, wingspan: " << wingSpan_ << "m";
    }
};