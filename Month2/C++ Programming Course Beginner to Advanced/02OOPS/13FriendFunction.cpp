#include<iostream>
#include<string>

using namespace std;

class Friend1{
    private:
        string secret = "ATM Pin is 1234";
    friend class Friend2;
};
class Friend2{
    private:
    string secret2 = "UPI Pin is 4321";
    public:
    Friend2(){}
    Friend2(string raaj){
        secret2  = raaj;
    }
    void tellSecret(Friend1 obj){
        cout<<"Telling Secret "<<obj.secret<<endl;
    }
    friend void display(Friend2 obj);
    
};
void display(Friend2 obj){
    cout<<"Secret of Friend2 is "<<obj.secret2<<endl;
}

int main(){
    Friend1 f1;
    Friend2 f2;
    f2.tellSecret(f1);
    display(f2);
    return 0;
}