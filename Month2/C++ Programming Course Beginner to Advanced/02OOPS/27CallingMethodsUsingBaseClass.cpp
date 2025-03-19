#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    void introduce(){
        cout<<"Hey from Person"<<endl;
    }
};
class Student : public Person{
    public:
    void introduce(){
        cout<<"Hey from Student"<<endl;
    }
};
void whoseThis(Person p){
    p.introduce();
}
int main(){
    Student s1;
    s1.introduce();
    whoseThis(s1);
    return 0;
}