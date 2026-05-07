#pragma once

#include "living_being.hpp"

class Human : public LivingBeing {
private:
    std::string job_;

public:
    Human(std::string name, int age, std::string job) : LivingBeing(name, age), job_(job) {}

    void makeSound() const override {
        std::cout << name_ << " say: Hi!" << std::endl;
    }

    void showInfo(std::ostream& os) const override {
        LivingBeing::showInfo(os);
        os << ", Human, job: " << job_;
    }
};