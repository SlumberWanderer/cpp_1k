#include "bank.hpp"

int main() {
    Bank myBank;

    auto acc1 = std::make_unique<BankAccount>("UA12345", 1000.50);
    auto acc2 = std::make_unique<BankAccount>("UA67890", 500.00);

    myBank.addAccount(std::move(acc1));
    myBank.addAccount(std::move(acc2));
    
    myBank.addAccount(std::make_unique<BankAccount>("UA55555", 2500.00));

    myBank.showAccounts();

    std::cout << "\nClosing one account..." << std::endl;
    myBank.removeAccount("UA67890");

    myBank.showAccounts();

    return 0;
}