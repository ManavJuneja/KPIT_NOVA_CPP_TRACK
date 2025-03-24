#include<iostream>
using namespace std;
class Mark{
    int marks;
    public:
    Mark(): marks(0){}
    Mark(int mark){
        this->marks = marks; 
    }
    Mark operator++(int){
        Mark duplicate(*this);
        marks += 1;
        return duplicate;
    }
    friend Mark operator--(Mark&, int);
    void yourMarkplease(){
        cout<<marks;
    }
};
Mark operator--(Mark  &m, int){
    Mark duplicate(m);
    m.marks -= 1;
    return duplicate;
}
int main(){
    Mark m1(22);
    m1--;
    m1.yourMarkplease();
    m1--;
    m1.yourMarkplease();
    

    
 
}