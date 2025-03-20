#include<iostream>

using namespace std;

class Marks{
    public:
    int marks;
    public:
    Marks(){
        marks = 0;
    }
    Marks(int marks){
        this->marks = marks;
    }
    void YourMarksPlease(){
        cout<<"Your marks is "<<marks<<endl;
    }
    void operator+=(int bonusMarks){//current obj pass implicityly
        marks = marks + bonusMarks;
    }
    friend void operator-=(Marks &currObj, int reduceMarks);//but when friend then need to pass current explicitly
};

void operator-=(Marks &currObj, int reduceMarks){
    currObj.marks -= reduceMarks;
}

int main(){

    Marks m1(45);
    m1.YourMarksPlease();
    m1 += 20;
    m1.YourMarksPlease();
    m1 -= 20;
    m1.YourMarksPlease();

}