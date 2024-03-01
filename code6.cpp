//Class to represent Bank Account using Contructors;
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    long accNumber;
    string accType;
    float accBalance;

public:
    // Constructor with default parameters
    BankAccount(string n = "Harjas Partap Singh Romana", long accNum = 123456789, string accT = "Savings", float accBal = 500)
        : name(n), accNumber(accNum), accType(accT), accBalance(accBal) {}

    void depositAmount() {
        float deposit;
        cout << "Enter the amount to be deposited: ";
        cin >> deposit;
        accBalance += deposit;
        cout << "Your deposit of " << deposit << " was successful." << endl;
    }

    void withdrawAmount() {
        float withdrawal;
        cout << "Enter the amount to withdraw: ";
        cin >> withdrawal;
        if (withdrawal > accBalance) {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        } else {
            accBalance -= withdrawal;
            cout << "Your withdrawal of " << withdrawal << " was successful." << endl;
        }
    }

    void displayParameters() {
        cout << "Account holder's name: " << name << endl;
        cout << "Account number: " << accNumber << endl;
        cout << "Account type: " << accType << endl;
        cout << "Current balance: " << accBalance << endl;
    }

    void setParameters() {
        cout << "Enter the name of the account holder: ";
        cin >> name;
        cout << "Enter the account number: ";
        cin >> accNumber;
        cout << "Enter the current balance: ";
        cin >> accBalance;
        cout << "Enter the account type: ";
        cin >> accType;
    }
};

int main() {
    BankAccount b1;
    cout << "Default Parameters: " << endl;
    b1.displayParameters();
    cout << "Updating Parameters: " << endl;
    b1.setParameters();
    cout << "Updated Parameters: " << endl;
    b1.displayParameters();
    cout << "Performing withdrawal: " << endl;
    b1.withdrawAmount();
    cout << "After Withdrawal: " << endl;
    b1.displayParameters();
    cout << "Performing deposit: " << endl;
    b1.depositAmount();
    cout << "After Deposit: " << endl;
    b1.displayParameters();
    return 0;
}