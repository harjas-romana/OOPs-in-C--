#include <iostream>
#include <string>
using namespace std;
class Account {
    protected:
    string name;
    long accNumber;
    char accType;
    int accBalance;
    public:
    void setParameters(){
        string n;
        int b;
        long a;
        char c;
        cout<<"Enter you name: ";
        cin>>n;
        name = n;
        cout<<"Enter your account number: ";
        cin>>a;
        accNumber = a;
        cout<<"Enter your account type: ";
        cin>>c;
        accType = c;
        cout<<"What is your account balance? ";
        cin>>b;
        accBalance = b;
    }
    void depositAmount() {
        cout<<"Enter amount to deposit: ";
        int d;
        cin>>d;
        accBalance += d;
        cout<<"Amount successfully deposited."<<endl;
    }
    void diplayBalance() {
        cout<<"Your account balance is: "<<accBalance<<" INR."<<endl;
    }
    void withdrawAmount() {
        cout<<"Enter amount to withdraw: ";
        int w;
        cin>>w;
        if(w> accBalance){
            cout<<"We couldn't complete your transaction because of insufficient funds in your account"<<endl;
        } else {
            accBalance -= w;
        checkForPenalty();
        cout<<"Your transaction was successful."<<endl;
        }
    }
    void checkForPenalty() {
        int serviceCharge = 50;
        int minimumBalance = 300;
        if(accBalance< minimumBalance){
            cout<<"Service charge is imposed of "<<serviceCharge<<" INR."<<endl;
            accBalance -= serviceCharge;
        } else {
            cout<<"You are in safe zone."<<endl;
        }
    }

};
class currAccount: public Account{
    public:
    void openCurrentAccount() {
        cout<<"Opening a current account."<<endl;
        setParameters();
    }
};
int main() {
    currAccount c1;
    c1.openCurrentAccount();
    c1.depositAmount();
    c1.diplayBalance();
    c1.withdrawAmount();
    c1.diplayBalance();
    c1.checkForPenalty();
}