#include <iostream>
using namespace std;
class Complex{
    private:
    int real, complex;
    public:
    //Parameterised constructor
    Complex(int r=0, int i=0){
        real = r;
        complex = i;
    }
    Complex operator-(Complex obj){
        Complex res;
        res.real = obj.real - real;
        res.complex = obj.complex - complex;
        return res;
    }
    void print(){
        cout<<real<<" - i"<<complex<<endl;
    }
};
int main() {
    Complex c1(5,3), c2(4,2);
    Complex c3 = c2 - c1;
    c3.print();
}