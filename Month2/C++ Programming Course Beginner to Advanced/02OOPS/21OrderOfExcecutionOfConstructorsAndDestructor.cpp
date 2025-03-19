#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"Parent Constructor"<<endl;
    }
    ~Parent(){
        cout<<"Parent Destructor"<<endl;
    }
};
class Child : public Parent{
    public:
    Child(){
        cout<<"Child Constructor"<<endl;
    }
    ~Child(){
        cout<<"Child Destructor"<<endl;
    }
};
int main(){
    // Parent p1;
    // Child c1;
    
    return 0;
}
/*
Output: Child c1;
Parent Constructor
Child Constructor
Child Destructor
Parent Destructor

Output: Parent p1;
Parent Constructor
Parent Destructor


*/ 