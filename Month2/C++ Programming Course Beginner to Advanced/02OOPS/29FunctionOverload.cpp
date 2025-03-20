#include<iostream>

using namespace std;
class Area{
    public:
    void calculateArea(int a){
        cout<<"Area of square is "<<a*a<<endl;
    }
    void calculateArea(int l, int b){
        cout<<"Area of rectangle is "<<l*b<<endl;
    }
    void calculateArea(double r){
        cout<<"Area of circle is "<<3.14*r*r<<endl;
    }
    void calculateArea(int l, int b, int h){
        cout<<"Area of cuboid is "<<l*b*h<<endl;
    }
};
int main(){
    Area a1;
    a1.calculateArea(5);
    a1.calculateArea(5, 6);
    a1.calculateArea(5.5); 
    a1.calculateArea(5, 6, 7);
    return 0;
}