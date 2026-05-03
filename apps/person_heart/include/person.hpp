#pragma once 

#include "heart.hpp"
#include <string>
#include <iostream>

class Person {
private:
    const std::string name_;
    Heart heart_;

public:
    Person(const std::string& name, int initial_pulse) : name_(name), heart_(initial_pulse) {}

    std::string getName() const { return name_; }
    const Heart& getHeart() const { return heart_; }

    void setActivityLevel(int new_pulse) { heart_.setBpm(new_pulse); }
};

inline std::ostream& operator<<(std::ostream& os, const Person& p) {
    os << p.getName()  << " pulse: " << p.getHeart().getBpm() << " bpm";
    return os;
}