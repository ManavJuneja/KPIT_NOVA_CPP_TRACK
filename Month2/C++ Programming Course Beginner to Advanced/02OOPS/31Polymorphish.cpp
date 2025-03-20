#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Hu Hu";
    }
};
class Dog : public Animal{
    public:
    void speak(){
        cout<<"Bark";
    }
};
int main(){
    //creating pointer obj of animal
    Animal *p;
    // now allocating memory to the obj
    p = new Dog() ;
    //calling speak 
    p->speak();
    return 0;
/*
A base class Animal and a derived class Dog are defined, both having a speak() method.
A pointer p of type Animal* is created.
Memory is allocated for a Dog object, and the pointer p is assigned to point to this Dog object.
This demonstrates polymorphism, where a base class pointer (Animal*) is used to reference a derived class object (Dog). However, since the speak() method is not declared as virtual in the base class, the base class version of speak() will be called if invoked through the pointer.

*/
}