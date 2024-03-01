// program to calculate area nd perimeter of rectangle using classes.
#include <iostream>
using namespace std;
class Rectangle {
    public:
    double length;
    double breadth;
    double height;
    double calculateArea(){
        return length*breadth*height;
    }
    double calculatePerimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 10;
    r1.height = 10;
    cout<<r1.calculateArea()<<endl;
    cout<<r1.calculatePerimeter()<<endl;
}