#include<iostream>
#include<cmath>
#include"bitmap.h"

using namespace std;

Complex::Complex(){
    real = 0;
    img = 0;
}
Complex::Complex(int r, int i){
    real = r, img = i;
}
void Complex::Accept(){
    cout<<"Enter complex number : ";
    cin>>real>>img;
}
void Complex::Display(){
    
}