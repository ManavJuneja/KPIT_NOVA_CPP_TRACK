#include<iostream>
#include<exception>

using namespace std;

int main(){
     int a = 10, b = 0, c;
     try{
        if(b == 0)
        throw runtime_error("Divide by zero");
        c = a / b;
        cout<<c<<endl;
     }catch(runtime_error &error){
        cout<<"Exception Occured"<<endl;
        cout<<error.what();
     }
     return 0;
}