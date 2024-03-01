//bank Accout program
#include <iostream>
#include <string>
using namespace std;
class BankAccunt{
    private:
    string name;
    long accountNumber;
    string accountType;
    float accountBalance;
    public:
    void setParameter(string name1, long a, string type1, float b){
        name = name1;
        accountNumber = a;
        accountType = type1;
        accountBalance = b;
    }
    float depositAmount(int deposited){
         return accountBalance += (float)deposited;
    }
    void withdrawAndCheckBalance(int withdraw){
        cout<<"Your current Balance was: "<<accountBalance<<endl;
        accountBalance -= (float) withdraw;
        cout<<"Your Balance is: "<<accountBalance<<endl;
    }
    void displayNameAndBalance(){
        cout<<"Welcome!! "<<name<<endl;
        cout<<"Dear Customer, your balance is: "<<accountBalance<<endl;
    }
};
int main() {
    BankAccunt b1;
    int withdrawAmount, depositAmount;
    long accNumber;
    string name, accType;
    float accBalance;
    cout<< "Enter Name: "<<endl;
    cin>>name;
    cout<<"Enter Account Number: "<<endl;
    cin>>accNumber;
    cout<<"Enter Account Type: "<<endl;
    cin>>accType;
    cout<<"Set the Account Balance: "<<endl;
    cin>>accBalance;
    b1.setParameter(name, accNumber, accType, accBalance);
    cout<<"Enter the amount to deposit: "<<endl;
    cin>>depositAmount;
    b1.depositAmount(depositAmount);
    cout<<"Enter amount to withdraw: "<<endl;
    cin>>withdrawAmount;
    b1.withdrawAndCheckBalance(withdrawAmount);
    b1.displayNameAndBalance();
}