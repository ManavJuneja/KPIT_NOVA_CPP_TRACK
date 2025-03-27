#include<iostream>
#include<exception>

using namespace std;

int main(){
    int a = 10, b = 0;
    int c;
    try{
        if(b == 0)
            throw "Divided by Zero Error";
        c = a / b;
        cout<<"Value of C "<<c<<endl;
    }catch(const char *e){
        cout<<"Exception occured"<<endl<<e;
    }
    return 0;
}