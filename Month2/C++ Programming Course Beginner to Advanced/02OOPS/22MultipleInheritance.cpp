#include<iostream>
#include<string>
using namespace std;
class Father{
    public:
    int height;
    void askFather(){
        cout<<"I am your Father ask me what you want"<<endl;
    }
};
class Mother{
    public:
    string skincolor;
    void askMother(){
        cout<<"I am your Mother ask me what you want"<<endl;
    }
};
class Child : public Father, public Mother{
    public:
    void askParents(){
        cout<<"I am asking my parents"<<endl;
    }
    void setHeightAndColor(int iheight, string icolor){
        height = iheight;
        skincolor = icolor;
    }
    void display(){
        cout<<"Height is "<<height<<"cm and skin<<"<<skincolor<<endl;
    }
};

int main(){
    Child c1;
    c1.setHeightAndColor(178,"Brown");
    c1.display();
}