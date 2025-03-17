#include<iostream>
#include<string>
using namespace std;
//Defining Method outside the class
class HumanBeing{
    public:
    string name;
    void introduce();//only Declaration
};
// :: Scope Resolution Operator
 void HumanBeing :: introduce(){
    cout<<"I am "<<HumanBeing::name<<endl;
 }
int main(){

    HumanBeing h1;
    h1.name = "Manav";
    h1.introduce();
}