#include<iostream>
#include<string>

using namespace std;

class Person{//Base class
    public:
    string name;
    int age;
    Person(){}//Default Constructor

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{//Sub class
    public:
    int id;
    Student(){}//Default Constructor
    Student(string name, int age, int id):Person(name,age){
        this->id = id;
    }

    void introduce(){
        cout<<name<<" "<<age<<" "<<id<<endl;
    }
};
int main(){

    Student s1("Manav",21,2101699);
    Student s2("Riya",22,2101816);
    Student s3("Mandeep",21,2101700);
    s1.introduce();
    s2.introduce();
    s3.introduce();

    return 0;
}