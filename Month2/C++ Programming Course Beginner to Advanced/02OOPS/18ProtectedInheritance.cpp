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
class Student : protected Person{
    public:
   void setStudentName(string iname){
    setName(iname);
   }
   void display(){
       cout<<name<<endl;
   }
};
int main(){
    Student s1;;
    s1.setStudentName("Manav");
    s1.display();
    // s1.setName("Manav"); // This will give error because setName is protected in Person class
    return 0;
}