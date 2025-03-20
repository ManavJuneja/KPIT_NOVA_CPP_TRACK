#include<iostream>

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
class Farmer : public Person{
    public:
    void introduce(){
        cout<<"Hey from Farmer"<<endl;
    }
};
void whoseThis(Person p){
    p.introduce();
}
/*In the above code, we have a base class Person and 
two derived classes Student and Farmer.
The base class has a virtual function introduce(). 
The derived classes have their own introduce() functions.
The function whoseThis() takes a Person object as an argument and calls 
the introduce() function of the Person object. 
In the main function, we create a Student object s1 and 
call the introduce() function of the Student object.
We then pass the Student*/

int main(){
    Student s1;
    Farmer f1;
    s1.introduce();
    f1.introduce();
    whoseThis(s1);
    whoseThis(f1);
    return 0;
}