#include "Accounting.hpp"
#include <iostream>
#include <sstream>

// Constructor implementation
Accounting::Accounting(const std::string &num, const std::string &name, double bal)
    : accountNumber(num), accountName(name), balance(bal) {}

// Public methods implementation
double Accounting::deposit(double amount) {
    if (validateAmount(amount)) {
        updateBalance(amount, true);
        std_cout("Deposit successful. New balance: $" + std::to_string(balance));
    } else {
        std_cout("Invalid deposit amount.");
    }
    return balance;
}
