#include<iostream>
#include<string>
using namespace std;
class Human{
    private:
        string name;
        int age;
    public:
        // Human(){
        //     cout<<"default constructor"<<endl;
        //     name = "No name";
        //     age = 0;
        // }
        Human(string iname = "No Name", int iage = 0){
            cout<<"Overloaded constructor"<<endl;
            name = iname;
            age = iage;
        }
        void speakUp(){
            cout<<name<<" "<<age<<endl;
        }
};
int main(){
    // Human manav("Manav",21);
    // Human manav("Manav");
    Human manav;
    manav.speakUp();
    return 0;

}