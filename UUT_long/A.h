#ifndef ACCOUNTING_HPP
#define ACCOUNTING_HPP

#include <string>

class Accounting {
private:
    std::string accountNumber;
    std::string accountName;
    double balance;

public:
    // Constructor
    Accounting(const std::string &num, const std::string &name, double bal);

    // Methods to deposit and withdraw money
    double deposit(double amount);
};

#endif // ACCOUNTING_HPP
