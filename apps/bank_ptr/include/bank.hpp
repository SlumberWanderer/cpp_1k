#pragma once
#include <vector>
#include <memory>
#include <algorithm>
#include "bank_account.hpp"

class Bank {
private:
    std::vector<std::unique_ptr<BankAccount>> accounts_;

public:
    void addAccount(std::unique_ptr<BankAccount> account) {
        accounts_.push_back(std::move(account));
    }

    void showAccounts() const {
        std::cout << "Bank Accounts List" << std::endl;
        for (const auto& acc : accounts_) {
            acc->display();
        }
    }

    void removeAccount(const std::string& number) {
        auto it = std::remove_if(accounts_.begin(), accounts_.end(),
            [&number](const std::unique_ptr<BankAccount>& acc) {
                return acc->getNumber() == number;
            });
        
        if (it != accounts_.end()) {
            accounts_.erase(it, accounts_.end());
            std::cout << "Account " << number << " removed successfully." << std::endl;
        }
    }
};