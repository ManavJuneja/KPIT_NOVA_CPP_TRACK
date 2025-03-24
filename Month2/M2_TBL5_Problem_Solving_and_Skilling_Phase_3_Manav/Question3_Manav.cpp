#include<iostream>

double calculateArea(double radius){
    return 3.14*radius*radius;
}
double calculateArea(double length, double width, bool isRectangle){
    return length*width;
}
double calculateArea(double base, double height){
    return 0.5*base*height;
}
int main(){
    double length, width, radius, base, height;
    //Input the Circle
    std::cout<<"Enter radius of the circle: ";
    std::cin>>radius;

    //For the Rectangle
    std::cout<<"Enter length and width of the rectangle: ";
    std::cin>>length>>width;

    //For Triangle
    std::cout<<"Enter base and heigth of triangle : ";
    std::cin>>base>>height;

    //Now Areas of each
    std::cout<<"Area of Circle : "<<calculateArea(radius)<<std::endl;
    std::cout<<"Area of Rectangle : "<<calculateArea(length, width,true)<<std::endl;
    std::cout<<"Area of Triangle : "<<calculateArea(base,height)<<std::endl;

    return 0;
}