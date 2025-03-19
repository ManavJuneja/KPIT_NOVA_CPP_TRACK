#include<iostream>
#include<string>

using namespace std;
class Father{
    protected:
    int height;
    public:
    Father(int h){
        cout<<"Father constructor is Called "<<endl;
        height = h;
    }
};
class Child : public Father{
    public:
    Child(int x):Father(x){//The value of father get to child
        cout<<"Child constructor is Called"<<endl;
    }
    void display(){
        cout<<"Height is "<<height<<endl;
    }
    
};
int main(){
    Child manav(22);
    manav.display();
    return 0; 
}