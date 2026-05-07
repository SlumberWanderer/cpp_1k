#pragma once
#include <string>
#include <iostream>

class BankAccount {
private:
    std::string accountNumber_;
    double balance_;

public:
    BankAccount(std::string number, double initialBalance) 
        : accountNumber_(number), balance_(initialBalance) {}

    void display() const {
        std::cout << "Account: " << accountNumber_ << " | Balance: $" << balance_ << std::endl;
    }

    std::string getNumber() const { return accountNumber_; }

    ~BankAccount() {
        std::cout << "Log: Account " << accountNumber_ << " closed and memory freed." << std::endl;
    }
};