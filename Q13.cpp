#include <iostream>
using namespace std;
class Bank {
protected:
    float balance;
public:
    Bank(float b) : balance(b) {}
    virtual void display_balance() = 0;
};
class SavingsAccount : public Bank {
public:
    SavingsAccount(float b) : Bank(b) {}
    void display_balance() override {
        cout << "Savings Account Balance: $" << balance << endl;
    }
};
class CheckingAccount : public Bank {
public:
    CheckingAccount(float b) : Bank(b) {}
    void display_balance() override {
        cout << "Checking Account Balance: $" << balance << endl;
    }
};
int main() {
    float initialSavingsBalance = 5000.0;
    float initialCheckingBalance = 3000.0;
    SavingsAccount savings(initialSavingsBalance);
    CheckingAccount checking(initialCheckingBalance);
    savings.display_balance();
    checking.display_balance();
    return 0;
}