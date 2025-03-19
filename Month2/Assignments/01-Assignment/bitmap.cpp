#include <iostream>
// #include "bitmap.h"  // Remove if not needed

using namespace std;

class Complex {
    int real;
    int img;

public:
    Complex() : real(0), img(0) {} // Initialize to zero
    Complex(int real, int img) : real(real), img(img) {}

    void Accept(int r, int i) {
        real = r;
        img = i;
    }

    void Display() {
        cout << real << " + " << img << "i" << endl;
    }

    Complex operator+(Complex &c){
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    Complex operator-(Complex &c){
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }
    Complex operator++(){
        Complex temp;
        temp.real = real + 1;
        temp.img = img + 1;
        return temp;
    }
    Complex operator++(int n){
        Complex temp;
        temp.real = real + n;
        temp.img = img + n;
    }
    bool operator==(Complex &c){
        bool flag = true;
        if((real == c.real) && (img == c.img)){
            return true;
        }else{
            return false;
        }
        return flag;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(4, 3);
    c1.Display();
    
    Complex c3;
    c3.Accept(8, 8);
    c3.Display();
    
    c2.Display();

    return 0;
}
