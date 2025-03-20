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
    
}