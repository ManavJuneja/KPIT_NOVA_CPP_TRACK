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

    HumanBeing h1;//store in stack
    HumanBeing *h2 = new HumanBeing();//store in heap
    //create object dynamically
    h1.name = "Ram";
    h1.introduce();

    //Dynamic Wala

    h2->name = "Sham";
    h2->introduce();

}