#include<iostream>

using namespace std;
class Animal{
    public:
    int age;
    Animal(){
        cout<<"Animal Constructor"<<endl;
    }
    void walk(){
        cout<<"animal walks"<<endl;
    }
};
class Lion : virtual public Animal{//added virtual to resolve dimong proble
    public:
    Lion(){
        cout<<"Lion Constructor"<<endl;
    }
};
class Tiger :virtual public Animal{//added virtual 
    public:
    Tiger(){
        cout<<"Tiger Constructor"<<endl;
    }
};
class Liger : public Lion, public Tiger{
    public:
    Liger(){
        cout<<"Liger Constructor"<<endl;
    }

};
int main(){
    Liger x;
    x.walk();//got error that walk is ambiguous
    return 0;
}