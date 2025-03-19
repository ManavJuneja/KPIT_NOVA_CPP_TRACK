#include<iostream>

using namespace std;

class Parent{
    public:
    void sayHello(){
        cout<<"Hello Beta";
    }
};
class Child : public Parent{
    public:
   void sayHello(){
    cout<<"Hello ji";
   }
    
};
int main(){
    Child c1;
    c1.sayHello();
}