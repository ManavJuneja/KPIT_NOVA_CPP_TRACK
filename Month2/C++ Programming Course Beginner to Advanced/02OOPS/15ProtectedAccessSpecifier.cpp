#include<iostream>
#include<string>

using namespace std;

class Person{
    protected://access in the same class and subclasses also //can't access outside class
    string name;
    public:
    void setName(string iname){
        name = iname;
    }
}; 
class Student : public Person{
    public:
    void show(){
        cout<<Person::name;
    }
};
int main(){
    Student s1;
    s1.setName("Manav");
    s1.show();
}