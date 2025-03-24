#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void speak(){
        cout<<"Animal Speaks"<<endl;
    }
};
class Dog : public Animal{
    public:
    void speak(){
        cout<<"Dog Speaks"<<endl;
    }
};
int main(){
    //Now create pointer obj of animal
    Animal *p;
    //allocate p with dog
    p = new Dog();
    //now call p to speak
    p->speak();
    /*
    This code demonstrates runtime polymorphism in C++ using a base class pointer (Animal *p) 
    to call a method (speak()) of a derived class (Dog). Here's what happens step by step:
    A pointer p of type Animal is declared. Memory is dynamically allocated for a Dog object
    using new Dog(), and the pointer p now points to this Dog object. The speak() method is called on p.
    If Animal has a virtual speak() method, the Dog class's overridden version of speak()
    will be executed due to dynamic dispatch.If speak() is not declared as virtual in the
     Animal class, the base class's version (if any) will be called instead, which might lead to unexpected behavior.
    */
}