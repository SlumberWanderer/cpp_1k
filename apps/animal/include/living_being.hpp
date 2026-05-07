#pragma once 

#include <string>
#include <iostream>

class LivingBeing {
protected:
    std::string name_;
    int age_;

public:
    LivingBeing(std::string name, int age) : name_(name), age_(age) {}

    virtual void makeSound() const = 0;

    virtual void breathe() const {
        std::cout << name_ << " is breathing" << std::endl;
    }

    virtual void showInfo(std::ostream& os) const {
        os << "Name: " << name_ << ", Age: " << age_;
    }

    virtual ~LivingBeing() = default;
};

inline std::ostream& operator<<(std::ostream& os, const LivingBeing& lb) {
    lb.showInfo(os);
    return os;
}