#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//Function to print the cube of a number;
// int printCube( int a){
//     if(a >=0){
//         return a*a*a;
//     } else {
//         cout<<"Please enter a non-negative number";
//     }
// }
int main() {
    //Function to reverse a string;
    string input;
    cout<<"Please write the string: ";
    cin>> input;
    sort(input.begin(), input.end());
    cout<<"Reversed string is as follows: "<<input<<".";
}