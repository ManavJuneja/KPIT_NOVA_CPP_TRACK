#include<iostream>
#include<exception>

using namespace std;

int main(){
    try{
        throw "some exception";
    }catch(const char *err){
        cout<<err<<endl;
    }catch(int error){
        cout<<error<<endl;
    }catch(runtime_error e){
        cout<<e.what()<<endl;
    }catch(...){//all exception
        cout<<"Ex";
    }
    return 0;
}