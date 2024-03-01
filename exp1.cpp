// EXPERIMENT 1
#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    private:
    string name;
    long accNumber;
    string accType;
    float accBalance;
    public:
    //Assigning default values
    BankAccount() {
        name = "Harjas Partap Singh Romana";
        accNumber = 123456789876;
        accType = "Savings";
        accBalance = (float)500;
    }
    //Depositing an amount
    void depostAmount(int deposted){
        int deposited;
        cout<<"Please enter the amount to depost: ";
        cin>>deposited;
        accBalance += (float)deposited;
        cout<<"Your amount of "<<deposited<<" was successfully deposited."<<endl;
    }
    //Withdraw amount after checking balance
    void withdrawAmount(int with){
        int withdraw;
        cout<<"Your available balance is "<<accBalance<<" ."<<endl;
        cout<<"Enter amount to withdraw: ";
        cin>>withdraw;
        if(withdraw<= accBalance){
            accBalance -= (float )withdraw;
            cout<<"Your withdrawal was successfully made. Thanks for banking with us."<<endl;
        } else {
            cout<<"Your transaction wasn't completed due to insufficient balance.";
        }
    }
    //Displaying name and balance
    void displayParameters() {
        cout<<"Dear "<<name<<" .Your current balance is: "<<accBalance<<endl;
    }
};
int main(){
    BankAccount b1;
    b1.displayParameters();
    b1.depostAmount(400);
    b1.displayParameters();
    b1.withdrawAmount(100);
    b1.displayParameters();
}