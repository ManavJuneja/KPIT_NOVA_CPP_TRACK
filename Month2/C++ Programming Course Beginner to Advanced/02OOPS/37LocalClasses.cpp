#include<iostream>
#include<string>
using namespace std;

int main(){
    studentList();

}
void studentList(){
    class Student{
        public:
        string name;
        int age;
        void display(){
            cout<<"Name "<<name<<"Age "<<age<<endl;
        }
    };
    Student s1;
    s1.name = "Manav";
    s1.age = 22;
    s1.display(); 
}
