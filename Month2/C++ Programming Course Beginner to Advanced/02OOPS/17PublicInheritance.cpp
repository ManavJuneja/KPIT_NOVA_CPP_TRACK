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

 class Student : public Person{
    public:
    void display(){
        cout<<name<<endl;
    }
 };

 int main(){
    Student s1;
    s1.setName("Manav");
    s1.display();
    return 0;
 }