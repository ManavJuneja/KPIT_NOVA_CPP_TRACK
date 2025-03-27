#include<iostream>
#include<exception>
using namespace std;
int main(){
    try{
        int *p = new int[10000];
        cout<<"Memory Allocation is Successfull\n";
        delete []p;
    }catch(const exception &e){
        cout<<"Exception Occured : "<<e.what()<<endl;
    }
}