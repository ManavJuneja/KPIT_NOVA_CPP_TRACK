#include<iostream>
#include<string>

using namespace std;

class Human{
    public:
        static int humnanCount;
        Human(){
            humnanCount++;
        }
        void humanTotal(){
            cout<<"There are "<<humnanCount<<endl;
        }
        //Only use static member or static varible for static function
    static void humanCount(){
        cout<<"There are "<<humnanCount<<" people are in this program "<<endl; 
    }
};
int Human::humnanCount = 0;
int main(){
    Human h1;
    Human h2;
    Human h3;
    // h1.humanTotal();
    Human::humanCount();
    return 0;
}
