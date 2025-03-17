#include<iostream>
#include<string>

using namespace std;

class Human{
    private:
    int age;
    string name;
    public:
    Human(){
        cout<<"default constructor"<<endl;
        age = 0;
        name = "no name";
    }
    Human(string iname){
        cout<<"Constructor with name as parameter"<<endl;
        name = iname;
        age = 0;
    }
    Human(int iage){
        cout<<"Constructor with age as parameter"<<endl;
        age = iage;
        name = "No Name";
    }
    Human(string iname, int iage){
        cout<<"Constructor with name and age as parameter"<<endl;
        name = iname;
        age = iage;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main(){
    // Human h1;
    // h1.display();
    Human h1("aman");
    h1.display();
    Human h2(34);
    h2.display();
    Human h3("manav",23);
    h3.display();



}