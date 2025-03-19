#include<iostream>
#include<string>

using namespace std;

class Human{
    private:
        string name;
        int age;
    public:
        
        Human(){//constructor should have same name as class name and should not have any return type 
            name = "noname";
            age = 0;
            cout<<"constructor is called when create an object of human"<<endl;
        }
        void display(){
            cout<<name<<endl<<age<<endl;
        } 
};
int main(){

    Human h1;
    h1.display();

}