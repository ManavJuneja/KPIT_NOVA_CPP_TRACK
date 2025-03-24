#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int img;
    Complex(){}

    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }
    void display(){
        cout<<real<<" +"<<img<<"i"<<endl;
    }
    //with in the class private member ke object ko access kar skteh ha
    Complex operator+(Complex &c){
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    Complex operator-(Complex &c);
   
};
Complex Complex :: operator-(Complex &c){
     Complex temp;
     temp.Complex::real = temp.Complex::real - c.real;
     temp.Complex::img = temp.Complex::img - c.img;
    return temp;
}
int main(){
    Complex c1(3,4);
    Complex c2(5,5);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    c3.display();
    c4.display();
    return 0;
}