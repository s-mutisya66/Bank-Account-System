#include <iostream>
#include <string>

using namespace std;

// PART A: Class Design
class BankAccount
{
private:
    // Making data members private
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // PART B: Constructor
    BankAccount(int accNo, string name, double initialBalance)
    {
        accountNumber = accNo;
        accountHolder = name;
        balance = initialBalance;
    }

    // PART C: Member Functions

    // 1. deposit method
    void deposit(double amount)
    {
        balance += amount; // Adds amount to balance
        cout << "Deposit: " << amount << endl;
    }

    // 2. withdraw method
    void withdraw(double amount)
    {
        // Prevent withdrawal if insufficient funds 
        if (amount > balance)
        {
            cout << "Insufficient funds for withdrawal!" << endl;
        }
        else
        {
            balance -= amount; // Subtracts amount from balance
            cout << "Withdrawal: " << amount << endl; // 
        }
    }

    // 3. displayAccount method
    void displayAccount()
    {
        // Displays account details
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;              //
        cout << "----------------------" << endl;
    }
};

// PART D: Main Function
int main()
{
    // 1. Create at least 2 BankAccount objects
    BankAccount account1(101, "Sidney", 150000.0);
    BankAccount account2(102, "Lewis", 120000.0);

    // 2. Perform transactions on account1
    account1.displayAccount();
    account1.deposit(33000.0);   // One deposit
    account1.withdraw(25000.0);  // One withdrawal

    // 3. Display updated information
    cout << "Updated ";
    account1.displayAccount();

    return 0;
}