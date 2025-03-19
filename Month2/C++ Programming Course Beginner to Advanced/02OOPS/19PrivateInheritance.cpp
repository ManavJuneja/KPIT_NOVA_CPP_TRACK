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
    void setStudentName(string iname){
        setName(iname);
    }
    void display(){
        cout<<name<<endl;
    }
    void studentSetName(string iname){
        setName(iname);
    }
    void studentGetName(){
        cout<<name<<endl;
    }
};

int main(){
    Student s1;
    s1.setStudentName("Manav");
    return 0; 
}