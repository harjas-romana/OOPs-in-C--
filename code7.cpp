#include <iostream>
#include <string>
using namespace std;
class Employee{
    private:
    string name;
    int age;
    char gender;
    bool married;
    public:
    Employee(string n, char g, int a, bool m) {
            name = n;
            gender = g;
            age = a;
            married = m;
        }
    bool insuranceCheck(){
        if(married){
            return true;
        } else if (!married && gender == 'M'&& age <35){
            return true;
        } else if(!married && gender == 'F' && age <30){
            return true;
        } else {
            return false;
        }
    }
    void displayDetails(){
        cout<<"XYZ Welcomes you!"<<endl;
        cout<<"Name of the person: "<<name<<endl;
        cout<<"Insurance applicable: "<<(insuranceCheck() ? "Yes" : "No")<<endl;
    }
};
int main() {
    Employee e1("Harjas", 'M', 20, true);
    e1.displayDetails();
}