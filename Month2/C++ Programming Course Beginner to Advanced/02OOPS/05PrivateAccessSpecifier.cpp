#include<iostream>

using namespace std;
class Human{
    private:
    int age;

    public:
    void display(){
        cout<<age<<endl;
    }

    void setAge(int value){
        age = value;
    }

};
int main(){
    Human manav;
    manav.display();
    manav.setAge(23);
    manav.display();

}