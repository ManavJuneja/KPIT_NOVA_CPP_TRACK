#include<iostream>

using namespace std;

class Human{
    public:
    Human(){
        cout<<"Constructor called"<<endl;
    }
    ~Human(){
         cout<<"Destructor called"<<endl;
    }
};
int main(){
    Human *manav;
    manav = new Human();
    delete manav;
    return 0;
}