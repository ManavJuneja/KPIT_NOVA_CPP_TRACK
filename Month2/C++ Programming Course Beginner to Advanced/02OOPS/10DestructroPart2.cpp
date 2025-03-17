#include<iostream>

using namespace std;

class Human{
    private:
    string *name;
    int *age;

    public:
    Human(string iname, int iage){
        name = new string;
        age = new int;
        *name = iname;
        *age = iage;
    }
    void display(){
        cout<<"Hi i am "<<*name<<" and i am"<<*age<<" year old"<<endl;
    }
    ~Human(){
         delete name;
         delete age;
         cout<<"All memeber are deleted";
    }

};
int main(){
    Human *manav = new Human("aman", 23);
    manav->display();
    delete manav;
    return 0;
}