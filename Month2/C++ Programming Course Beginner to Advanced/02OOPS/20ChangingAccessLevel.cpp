#include<iostream>
#include<string>

using namespace std;

class Person{
    protected:
    string name;
    public:
    void setName(string iname){
        name = iname;
    }
};
class Student : private Person{
    public:
    using Person :: name;//This will make name public
    using Person :: setName;//This will make setName public
    void display(){
        cout<<name<<endl;
    }
};

int main(){
    Student s1;
    s1.name = "Manav";
    s1.display();
    s1.setName("Shama");
    s1.display();
    return 0;
}