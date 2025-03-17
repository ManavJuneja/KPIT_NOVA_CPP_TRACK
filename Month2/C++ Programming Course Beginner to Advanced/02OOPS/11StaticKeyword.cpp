#include<iostream>

using namespace std;

void display();

class Human{
    public:
    static int humanCount;//need to initilize first

    Human(){
        humanCount++;
    }
    void humanTotal(){
        cout<<"There are "<<humanCount<<"people are int this program"<<endl;
    }
};

int Human::humanCount = 0;

int main(){
    // display();
    // display();
    // display();
    // display();

    // cout<<Human::humanCount;

    Human manav;
    Human ram;
    Human sham;
    manav.humanTotal();

    return 0;
}

void display(){
    static int counter = 0;
    cout<<"Display function called "<<++counter<<" times"<<endl;
}