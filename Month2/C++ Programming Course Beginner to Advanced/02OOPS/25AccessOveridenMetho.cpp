#include<iostream>

using namespace std;

class Parent{
    public:
    void sayHello(){
        cout<<"Hello Beta"<<endl;
    }
};
class Child : public Parent{
    public:
   void sayHello(){
    cout<<"Hello ji"<<endl;
    Parent::sayHello();
   }
    
};
int main(){
    Child c1;
    c1.sayHello();
    c1.Parent::sayHello();
    return 0;
} 