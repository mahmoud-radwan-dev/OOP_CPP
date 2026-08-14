// OOP_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;
public:
    void setLength(float len) {
        if (len > 0) {
            length = len; 
        }
        else {
            std::cout << "Error";
        }
    }

    float getLength() {
        return length;
    }
    void setWidth(float wid) {
        if (wid > 0) {
            width = wid;
        }
        else {
            std::cout << "Error";
        }
    }

    float getWidth() {
        return width;
    }

    float getArea() {
        return length * width;
    }
};



/*
int main()
{
    Rectangle box;
    box.setLength(4);
    box.setWidth(5);
    cout << "Length = " << box.getLength() << " cm\n";
    cout << "Width = " << box.getWidth() << " cm\n";
    cout << "Area = " << box.getArea() << " cm\n";
    box.setLength(2);
    box.setWidth(10);
    cout << "Length = " << box.getLength() << " cm\n";
    cout << "Width = " << box.getWidth() << " cm\n";
    cout << "Area = " << box.getArea() << " cm\n";    
}

*/
