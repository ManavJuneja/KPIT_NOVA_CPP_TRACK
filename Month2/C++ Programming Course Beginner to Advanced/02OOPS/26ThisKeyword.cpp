#include<iostream>

using namespace std;
class Person{

    private:
    int age;
    public:
    void setAge(int age){
        this->age = age;
    }
    void showAge(){
        cout<<age<<endl;
    }
};
int main(){
    Person s1;
    s1.setAge(22);
    s1.showAge();

    return 0;
}