#include<iostream>
#include<string>
using namespace std;

class HumanBeing{
    public:
    string name;
    int age;
    void introduce(){
        cout<<"Hi i am "<<name<<endl;
    }
};
int main(){

    HumanBeing h1;
    h1.name = "Manav";
    h1.introduce();
    HumanBeing h2;
    h2.name = "Riya";
    h2.introduce();
}