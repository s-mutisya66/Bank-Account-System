#include <iostream>
#include <string>

using namespace std;

// PART A: Class Design [cite: 10, 11]
class BankAccount
{
private:
    // Making data members private [cite: 12, 13]
    int accountNumber;      // [cite: 14]
    string accountHolder;   // [cite: 15]
    double balance;         // [cite: 16]

public:
    // PART B: Constructor [cite: 17, 18]
    BankAccount(int accNo, string name, double initialBalance)
    {
        accountNumber = accNo;      // [cite: 19]
        accountHolder = name;       // [cite: 20]
        balance = initialBalance;    // [cite: 23]
    }

    // PART C: Member Functions [cite: 24, 25]

    // 1. deposit method [cite: 26]
    void deposit(double amount)
    {
        balance += amount; // Adds amount to balance [cite: 27]
        cout << "Deposit: " << amount << endl; // [cite: 45]
    }

    // 2. withdraw method [cite: 28]
    void withdraw(double amount)
    {
        // Prevent withdrawal if insufficient funds 
        if (amount > balance)
        {
            cout << "Insufficient funds for withdrawal!" << endl;
        }
        else
        {
            balance -= amount; // Subtracts amount from balance [cite: 29]
            cout << "Withdrawal: " << amount << endl; // 
        }
    }

    // 3. displayAccount method [cite: 31]
    void displayAccount()
    {
        // Displays account details [cite: 33]
        cout << "Account Number: " << accountNumber << endl; // [cite: 43]
        cout << "Account Holder: " << accountHolder << endl; // [cite: 43]
        cout << "Balance: " << balance << endl;              // [cite: 44]
        cout << "----------------------" << endl;
    }
};

// PART D: Main Function [cite: 34, 35]
int main()
{
    // 1. Create at least 2 BankAccount objects [cite: 36]
    BankAccount account1(101, "John", 5000.0);
    BankAccount account2(102, "Jane", 3000.0);

    // 2. Perform transactions on account1
    account1.displayAccount();
    account1.deposit(1000.0);   // One deposit [cite: 38]
    account1.withdraw(2000.0);  // One withdrawal [cite: 40]

    // 3. Display updated information [cite: 41]
    cout << "Updated ";
    account1.displayAccount();

    return 0;
}